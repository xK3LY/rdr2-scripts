void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_99 = 1;
	iLocal_100 = 2;
	iLocal_101 = 3;
	iLocal_102 = 4;
	iLocal_103 = 5;
	iLocal_104 = 25;
	sLocal_304 = "script_story@bou1@ig@ig4_discipline";
	sLocal_305 = "script_proc@bounty@riding_punch";
	sLocal_306 = "punch_ped";
	iLocal_331 = 8;
	if (has_force_cleanup_occurred(4642))
	{
		func_1(&uLocal_358, 1073741824);
		func_2(&uLocal_358, 1);
		terminate_this_thread();
	}
	while (!func_3(64))
	{
		wait(0);
	}
	func_4(&uScriptParam_0, &uLocal_358);
	func_5(&uLocal_358);
	while (!func_6(&uLocal_358, -2147483648))
	{
		func_7(&uLocal_358);
		wait(0);
	}
	while (!func_2(&uLocal_358, 0))
	{
		wait(0);
	}
	terminate_this_thread();
}

void func_1(var uParam0, int iParam1)
{
	uParam0->f_5309 = (uParam0->f_5309 || iParam1);
}

bool func_2(var uParam0, bool bParam1)
{
	if (func_8(uParam0, 4096))
	{
		return true;
	}
	if (get_cause_of_most_recent_force_cleanup() == 4096)
	{
		func_9(uParam0);
		_display_hud_component(-1679307491);
		_display_hud_component(1331687942);
		if (func_10(Global_43801))
		{
			func_11(&Global_43801, 1, 1);
		}
		_uilog_clear_cached_objective();
		_0x1096603b519c905f("");
		func_13(func_12(uParam0->f_607), 0, 2);
		func_14();
		func_15(1);
		func_16(1, 0);
		func_17(uParam0, 1);
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
		if (!func_6(uParam0, 1048576))
		{
			if (func_20() == 0)
			{
				func_21(0);
			}
			else if (func_22(uParam0) != 0)
			{
				if (!is_screen_fading_out() && !is_screen_faded_out())
				{
					if (_0x1204eb53a5fbc63d())
					{
						return false;
					}
					if (func_22(uParam0) == 1 || func_22(uParam0) == 2)
					{
						if (func_23(&(uParam0->f_8269)) && func_24(&(uParam0->f_8269)))
						{
							func_25(0, &(uParam0->f_8269.f_1282));
						}
					}
					if (!func_26(&(uParam0->f_13118)))
					{
						func_27(&(uParam0->f_13118), 0);
					}
					bVar0 = _0x139efb0a71dd9011();
					if (bVar0)
					{
						func_1(uParam0, 256);
					}
					bVar1 = _0x7ce9dc58e3e4755f();
					if (bVar1 && func_6(uParam0, 256))
					{
						_0x16e9abdd34ddd931();
						do_screen_fade_out(0);
					}
					else
					{
						if (((!bVar0 && !func_28(uParam0, bVar1)) && !func_29()) && !func_6(uParam0, 80))
						{
							if (!bVar1)
							{
								func_30(uParam0);
							}
							return false;
						}
						if (func_6(uParam0, 64))
						{
							_0x16e9abdd34ddd931();
							do_screen_fade_out(0);
						}
						else if (func_22(uParam0) == 2)
						{
							if (uParam0->f_13104 == -1)
							{
								if (func_31(uParam0))
								{
									uParam0->f_13104 = get_game_timer();
								}
							}
							if ((uParam0->f_13104 != -1 && get_game_timer() > uParam0->f_13104 + 4000) || bVar1)
							{
								_0x16e9abdd34ddd931();
								do_screen_fade_out(0);
							}
						}
						else if (func_22(uParam0) == 1)
						{
							if (func_28(uParam0, bVar1))
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
			else if (func_6(uParam0, 2))
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
			if (!func_32() && func_22(uParam0) != 0)
			{
				func_36(uParam0, func_34(func_33(uParam0)), func_34(func_35(uParam0)), func_33(uParam0), func_35(uParam0));
			}
		}
	}
	if (_does_anim_scene_exist(uParam0->f_7375.f_804))
	{
		if (check_ownership_of_anim_scene(uParam0->f_7375.f_804))
		{
			_delete_anim_scene(uParam0->f_7375.f_804);
		}
	}
	func_1(uParam0, 1048576);
	if (!func_6(uParam0, 2097152))
	{
		if (!func_9(uParam0))
		{
			return false;
		}
		func_1(uParam0, 2097152);
	}
	_0x1096603b519c905f("");
	clear_focus();
	if (_missiondata_timecycle_box_exists())
	{
		_missiondata_timecycle_box_delete();
	}
	set_time_scale(1f);
	func_37(&(uParam0->f_8269));
	if (func_23(&(uParam0->f_8269)))
	{
		func_38(&(uParam0->f_8269));
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
	if (!func_6(uParam0, 8))
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
	func_46(uParam0);
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
	if (does_cam_exist(uParam0->f_609.f_2))
	{
		render_script_cams(false, false, 3000, true, false, 0);
		destroy_cam(uParam0->f_609.f_2, false);
	}
	func_51(&(uParam0->f_10792));
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
	if (func_22(uParam0) == 0)
	{
		bVar2 = true;
	}
	else
	{
		func_56(uParam0);
	}
	func_57(uParam0, 0, !bVar2, bVar2);
	func_58(uParam0, !bVar2);
	func_59(0);
	func_59(1);
	_0xdf93973251fb2ca5(player_id(), 1);
	func_60(0);
	func_62(func_61(uParam0));
	func_63(func_61(uParam0));
	func_64(0);
	func_65(0);
	func_66(func_22(uParam0));
	func_67(uParam0);
	if (!bVar2)
	{
		func_16(1, 0);
	}
	if (func_22(uParam0) != 1)
	{
		func_68(0, &(uParam0->f_8269.f_1282));
	}
	Global_43805 = -1;
	func_69(1);
	func_70(0);
	func_71(Global_1935630, 2097152);
	func_18(0);
	_uilog_mark_all_entries_availability(0, "");
	if (func_22(uParam0) == 0)
	{
		func_72((*Global_1835011)[uParam0->f_607]->f_1);
	}
	func_73();
	if (!is_scenario_type_enabled("WORLD_PLAYER_SEAT_LEDGE"))
	{
		_set_scenario_type_enabled_hash(-2012097661, true);
	}
	if (!bParam1)
	{
		switch (func_22(uParam0))
		{
			case 0:
				if (!is_screen_faded_in())
				{
					if ((!is_screen_fading_in() && !func_6(uParam0, 4)) && !func_6(uParam0, 2))
					{
						do_screen_fade_in(1000);
					}
				}
				func_74(uParam0);
				func_75(uParam0);
				func_76();
				func_78(func_77(), 0);
				if (func_20() == 0)
				{
					func_79(0);
				}
				func_80(uParam0->f_607);
				bVar3 = func_81();
				if (!func_82(32768))
				{
					func_83(func_12(uParam0->f_607), !func_6(uParam0, 128), 1, bVar3, 1);
				}
				else
				{
					func_84(func_12(uParam0->f_607), bVar3);
				}
				func_17(uParam0, bParam1);
				if (uParam0->f_607 != 77)
				{
					_uilog_mark_mission_completed(func_85(uParam0));
				}
				func_14();
				if (func_82(32768))
				{
					do_screen_fade_out(0);
					func_86();
					func_87(0);
				}
				else if (func_6(uParam0, 2))
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
				func_92(func_12(uParam0->f_607));
				func_93();
				if (func_22(uParam0) == 2)
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
				func_13(func_12(uParam0->f_607), 0, 2);
				break;
			default:
				func_83(func_12(uParam0->f_607), 1, 1, 0, 1);
				func_14();
				break;
		}
		if (func_22(uParam0) != 0)
		{
			Var6 = { func_96(uParam0) };
			func_97(func_12(uParam0->f_607), func_22(uParam0), &Var6, 0, 0, func_6(uParam0, 64));
		}
	}
	func_98(1);
	func_19(3);
	func_99(uParam0, 4096);
	return true;
}

bool func_3(int iParam0)
{
	return (Global_21 && iParam0) != 0;
}

void func_4(var uParam0, var uParam1)
{
	_0xed9582b3da8f02b4(20);
	uParam1->f_608 = uParam0->f_1;
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
	func_100(uParam1);
	if (!func_20() == 0)
	{
		if (func_101(uParam1) > 0)
		{
			iVar4 = 0;
			while (iVar4 < uParam1->f_7375.f_13)
			{
				if (((!is_entity_dead(&(uParam1->f_7375.f_13[iVar4])) && is_entity_a_ped(&(uParam1->f_7375.f_13[iVar4]))) && !is_in_itemset(&(uParam1->f_7375.f_13[iVar4]), iVar0)) && get_ped_index_from_entity_index(&(uParam1->f_7375.f_13[iVar4])) != Global_35)
				{
					add_to_itemset(&(uParam1->f_7375.f_13[iVar4]), iVar0);
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
		func_103(uParam1, 4194304);
	}
	if (func_104())
	{
		func_103(uParam1, 8388608);
	}
	if (func_105())
	{
		if (!func_104() && !func_102())
		{
			func_103(uParam1, 4);
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
		func_107(uParam1, func_106());
	}
	func_108(uParam1, uParam0);
	func_109(uParam1);
	if (uParam1->f_13105 > _0x62de46f061caa468())
	{
		_0xf008e0ba1fe1d644((uParam1->f_13105 - _0x62de46f061caa468()));
	}
}

void func_5(var uParam0)
{
	cVar0 = func_110(uParam0->f_607);
	set_mission_name(true, &cVar0);
	if (!get_mission_flag())
	{
		set_mission_flag(true);
	}
	_0x1096603b519c905f(&cVar0);
	if (uParam0->f_607 != 77)
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
	func_40(func_115(uParam0));
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
	func_118(uParam0);
	_0x33d51f801cb16e4f();
	if (!Global_1935630->f_12)
	{
		func_119(0, 0);
		_set_ped_crouch_movement(Global_35, false, 0, false);
		if (!func_120(uParam0, 16384) && (func_121(uParam0, func_33(uParam0), 2) || func_105()))
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
				if (!func_105() && !func_121(uParam0, func_33(uParam0), 2))
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
		func_123(uParam0);
	}
	func_70(1);
	func_39(0);
	func_124(uParam0, -1038436471);
	iLocal_30 = func_125(uParam0);
	iLocal_30 = iLocal_30;
	if (!Global_1935630->f_12)
	{
		if (!func_105())
		{
			Var2 = { func_34(func_33(uParam0)) };
			if (func_33(uParam0) != 0)
			{
				Var2 = { func_126(uParam0->f_607) };
			}
			if (!func_127(Var2))
			{
				func_103(uParam0, 1048576);
			}
			func_107(uParam0, 0);
			if (func_128(uParam0, 3) || func_129())
			{
				func_130(uParam0, func_126(uParam0->f_607), 0);
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
			func_107(uParam0, func_106());
		}
		_0x15b0cc1b36f1de29(&((*Global_1835011)[uParam0->f_607]->f_8), 0, func_132(func_33(uParam0)), func_105());
	}
	func_133(uParam0);
	func_134(uParam0, 0);
	func_135(uParam0, 0);
	if (!func_136(uParam0, func_33(uParam0)))
	{
		func_107(uParam0, 0);
	}
	func_137(uParam0);
	func_138(uParam0);
	func_139(uParam0);
	func_103(uParam0, 2097152);
	func_140(uParam0, func_33(uParam0), 134217728);
	if (func_82(32768))
	{
		func_1(uParam0, 4);
	}
	func_141(uParam0);
	func_142(uParam0, func_33(uParam0));
	func_143(func_61(uParam0));
	if (!func_120(uParam0, 65536))
	{
		func_144(func_61(uParam0));
	}
	func_145(uParam0, player_ped_id(), "ARTHUR", 0);
	func_146(uParam0);
	func_147(uParam0);
	func_148(uParam0);
	func_149(uParam0, 30f);
	func_150(uParam0, 40f);
	func_151(uParam0, Global_35, 0, 0, 0, 0, 0);
	func_98(0);
	_0xa6a3a3f96b8b030e();
	func_18(1);
	_uilog_mark_all_entries_availability(2, "");
	if (uParam0->f_607 != 77)
	{
		cVar6 = func_110(uParam0->f_607);
		_uilog_mark_entry_availability(1, get_hash_key(&cVar6), 0, "");
	}
	if (is_scenario_type_enabled("WORLD_PLAYER_SEAT_LEDGE"))
	{
		_set_scenario_type_enabled_hash(-2012097661, false);
	}
}

bool func_6(var uParam0, int iParam1)
{
	return (uParam0->f_5309 && iParam1) != 0;
}

void func_7(var uParam0)
{
	if ((_0xf46108c50a22b029() && !Global_43891) && !func_116(func_77()))
	{
		_0xf45e46deecf7df6e(16384, 0, 0, -1, -1);
	}
	if (!func_121(uParam0, func_33(uParam0), 16384))
	{
		func_152();
	}
	if (!func_8(uParam0, 32768))
	{
		_0xf45e46deecf7df6e(4096, 0, 0, -1, -1);
	}
	if (!func_8(uParam0, 2048))
	{
		func_153(1, 0);
	}
	switch (func_154(uParam0))
	{
		case -1:
			break;
		case 0:
			MemCopy(&uVar0, {func_155(func_61(uParam0))}, 4);
			if (!is_string_null_or_empty(&uVar0))
			{
				func_103(uParam0, 64);
			}
			func_156(uParam0, 0);
			func_157(uParam0);
			if (func_158(uParam0))
			{
				if (!is_entity_dead(func_159(uParam0)) && func_128(uParam0, 3))
				{
					freeze_entity_position(func_159(uParam0), false);
				}
				func_160(uParam0, 1);
			}
			if (func_6(uParam0, -2147483648))
			{
				func_160(uParam0, 2);
			}
			break;
		case 1:
			if (func_161(uParam0))
			{
				func_1(uParam0, -2147483648);
				func_160(uParam0, 2);
			}
			func_156(uParam0, func_162(uParam0, func_33(uParam0)) > 4);
			break;
		case 2:
			if (func_2(uParam0, 0))
			{
				func_1(uParam0, -2147483648);
				func_160(uParam0, 3);
			}
			break;
		case 3:
			terminate_this_thread();
			break;
	}
	if (func_154(uParam0) < 2)
	{
	}
}

bool func_8(var uParam0, int iParam1)
{
	return (uParam0->f_5307 && iParam1) != 0;
}

bool func_9(var uParam0)
{
	bVar0 = func_22(uParam0) != false;
	set_ped_config_flag(&(Local_193[1]), 192, false);
	set_ped_config_flag(&(Local_193[1]), 307, false);
	set_ped_config_flag(&(Local_193[1]), 167, false);
	stop_ped_speaking(&(Local_193[0]), false);
	if (func_163(19, 28, 0))
	{
		func_164(19, 28, 0);
	}
	if (func_163(19, 66, 0))
	{
		func_164(19, 66, 0);
	}
	if (func_163(22, 28, 0))
	{
		func_164(22, 28, 0);
	}
	func_165(uParam0, bVar0);
	func_166(uParam0, 22, &(Local_193[0]), 0, 1, 1, 0);
	func_166(uParam0, 19, &(Local_193[1]), 0, 0, 1, 0);
	if (does_entity_exist(iLocal_113))
	{
		delete_object(&iLocal_113);
	}
	func_167();
	func_168();
	func_169(bVar0);
	func_170(bVar0);
	func_171();
	func_172(bVar0);
	func_173();
	func_174(iLocal_114);
	func_175(2, 512);
	func_177(&iLocal_228, func_176(1, 0) - Vector(200f, 200f, 200f), func_176(1, 0) + Vector(200f, 200f, 200f), 0, 0);
	func_178();
	_0x19b2c7a6c34fad54(player_id(), 1f);
	stop_ped_speaking(&(Local_14.f_3[5]), false);
	_0xcb9401f918cb0f75(Global_35, "ForceHandsOnBelt", 0, -1);
	_0xbbadfb5e5e5766fb(get_player_index(), 1f);
	_0x2eb75fb86c41f026(Local_115[6]->f_1, 3, 1);
	_0x2eb75fb86c41f026(Local_115[5]->f_1, 3, 1);
	_0xc3abcfbc7d74afa5(Local_115[5]->f_1, 6, 0);
	set_ped_config_flag(Local_115[6]->f_1, 355, false);
	_0x6569f31a01b4c097(&(Local_115[5]), 1, 1);
	_0x6569f31a01b4c097(&(Local_115[5]), 0, 1);
	iVar1 = 0;
	while (iVar1 <= 2)
	{
		_0x18ff3110cf47115d(&(Local_115[iVar1]), 2, 1);
		iVar1++;
	}
	_0x57c242543b7b8fb9(-18102128, 0);
	_0x57c242543b7b8fb9(1151226872, 0);
	_0x57c242543b7b8fb9(1485561723, 0);
	_0x57c242543b7b8fb9(-750353502, 0);
	_0x9cf1836c03fb67a2(&uLocal_286, 0);
	remove_model_hide(1115.19f, -1305.3f, 65.53f, 1f, 159788540, 1);
	if (_does_scenario_point_exist(iVar320))
	{
		_delete_scenario_point(iVar320);
	}
	if (does_entity_exist(iLocal_111))
	{
		delete_object(&iLocal_111);
	}
	if (does_entity_exist(iLocal_106))
	{
		delete_object(&iLocal_106);
	}
	if (does_entity_exist(iLocal_112))
	{
		delete_object(&iLocal_112);
	}
	if (does_entity_exist(iLocal_105))
	{
		delete_object(&iLocal_105);
	}
	func_179(4, 4, 1);
	func_179(12, 4, 1);
	iVar2 = get_interior_at_coords(1109.29f, -1302.8f, 66.22f);
	if (is_interior_entity_set_active(iVar2, "rad_house_int_medicine"))
	{
		deactivate_interior_entity_set(iVar2, "rad_house_int_medicine", true);
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

void func_17(var uParam0, bool bParam1)
{
	Var0 = func_186(func_12(uParam0->f_607));
	Var0.f_1 = 0;
	Var0.f_2 = func_132(func_33(uParam0));
	Var0.f_4 = (get_entity_health(Global_35) * 100 / get_entity_max_health(Global_35, false));
	Var0.f_5 = Global_40.f_7729;
	Var0.f_6 = func_208(0);
	if (bParam1)
	{
		Var0.f_3 = 5;
	}
	else
	{
		Var0.f_3 = func_22(uParam0);
	}
	_0xd894437e12c17aec(&((*Global_1835011)[uParam0->f_607]->f_8), &Var0);
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

int func_22(var uParam0)
{
	return uParam0->f_10783;
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

bool func_28(var uParam0, bool bParam1)
{
	if (func_8(uParam0, 128) && func_29())
	{
		return true;
	}
	if (func_214(&(uParam0->f_13118)) >= 4000)
	{
		return true;
	}
	if (!func_31(uParam0))
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

void func_30(var uParam0)
{
	func_215(!func_6(uParam0, 32), 1);
	func_1(uParam0, 32);
}

bool func_31(var uParam0)
{
	return true;
}

bool func_32()
{
	return func_183(Global_1572864->f_8);
}

int func_33(var uParam0)
{
	return uParam0->f_597;
}

struct<4> func_34(int iParam0)
{
	if (iParam0 == iLocal_98)
	{
		func_217(&Var0, func_216(0, 0));
	}
	else if (iParam0 == iLocal_99)
	{
		func_217(&Var0, func_216(0, 1));
	}
	else if (iParam0 == iLocal_100)
	{
		func_217(&Var0, func_216(0, 2));
	}
	else if (iParam0 == iLocal_101)
	{
		func_217(&Var0, func_216(0, 4));
	}
	else if (iParam0 == iLocal_102)
	{
		func_217(&Var0, func_216(0, 5));
	}
	else if (iParam0 == iLocal_103)
	{
		func_217(&Var0, func_216(0, 6));
	}
	else if (iParam0 == iLocal_104)
	{
		func_217(&Var0, func_216(0, 7));
	}
	return Var0;
}

int func_35(var uParam0)
{
	return func_218(uParam0, func_33(uParam0));
}

void func_36(var uParam0, struct<4> Param1, struct<4> Param5, int iParam9, int iParam10)
{
	Var0 = { Param1 };
	Var0.f_3 = Param1.f_3;
	Var4 = { Param5 };
	Var4.f_3 = Param5.f_3;
	func_201(0);
	func_219(func_12(uParam0->f_607), Var0, Var4, func_132(iParam9), func_132(iParam10));
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

void func_46(var uParam0)
{
	if (func_20() == 0)
	{
		return;
	}
	switch (uParam0->f_607)
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

void func_56(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < uParam0->f_13145)
	{
		if (func_247(uParam0->f_5423[iVar0]))
		{
			if (!is_entity_dead(&(uParam0->f_5423[iVar0])))
			{
				if (is_entity_a_ped(&(uParam0->f_5423[iVar0])))
				{
					clear_ped_tasks_immediately(get_ped_index_from_entity_index(&(uParam0->f_5423[iVar0])), false, true);
				}
			}
		}
		iVar0++;
	}
	if (func_248(uParam0->f_5421))
	{
		iVar0 = 0;
		while (iVar0 < func_249(uParam0->f_5421))
		{
			iVar1 = func_250(uParam0->f_5421, iVar0);
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

void func_57(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	iVar0 = 0;
	while (iVar0 < 27)
	{
		iVar1 = iVar0;
		if (func_251(iVar1))
		{
			iVar2 = Global_1360165[iVar0];
			func_166(uParam0, iVar1, iVar2, iParam1, bParam2, bParam3, 0);
		}
		iVar0++;
	}
}

void func_58(var uParam0, bool bParam1)
{
	_0x0751d461f06e41ce(get_player_index(), 33, 2, 0);
	iVar0 = func_252(uParam0);
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	if (is_entity_dead(iVar0) || is_ped_injured(iVar0))
	{
	}
	iVar1 = func_253(iVar0);
	iVar2 = get_id_of_this_thread();
	bVar3 = false;
	if (is_thread_active(iVar2, false) && func_254(iVar1) == iVar2)
	{
		bVar3 = true;
	}
	if (bVar3)
	{
		if (bParam1)
		{
			func_255(7);
		}
		else
		{
			func_256(iVar0, 0);
		}
		func_257(uParam0, 16);
		set_ped_config_flag(iVar0, 219, false);
	}
}

void func_59(int iParam0)
{
	iParam0 = func_258(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_259(iParam0, 32);
	func_260();
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

int func_61(var uParam0)
{
	return uParam0->f_607;
}

void func_62(int iParam0)
{
	Var0 = { func_261(iParam0) };
	if (!is_string_null_or_empty(&Var0))
	{
		_text_database_delete(&Var0);
	}
}

void func_63(int iParam0)
{
	Var0 = { func_262(iParam0) };
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

void func_67(var uParam0)
{
	func_263(&(uParam0->f_13121));
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
		iVar2 = func_264(iParam0);
		if (iVar2 == 36)
		{
			iVar1 = 99;
			if (func_265(iVar1))
			{
				if (func_266(iVar1, 4))
				{
					func_267(iVar1, 1);
				}
			}
		}
		else if (iVar2 == 38)
		{
			func_268(1);
		}
	}
	else if (iVar0 == 8)
	{
		iVar3 = func_264(iParam0);
		if (iVar3 == 59)
		{
			func_268(1);
		}
		else if (iVar3 == 61)
		{
			func_268(0);
		}
		else if (iVar3 == 83)
		{
			func_268(0);
		}
	}
}

void func_73()
{
	iVar0 = 0;
	while (iVar0 < &Global_1347702)
	{
		if (func_265(iVar0))
		{
			if (func_266(iVar0, 4))
			{
				if (func_266(iVar0, 16))
				{
					func_269(iVar0, 1);
				}
				if (func_266(iVar0, 8))
				{
					func_270(iVar0, 1);
				}
			}
		}
		iVar0++;
	}
}

void func_74(var uParam0)
{
	if (func_20() == 0)
	{
		return;
	}
	iVar0 = func_33(uParam0);
	iVar1 = func_162(uParam0, iVar0);
	bVar2 = false;
	if (iVar1 == 5 || iVar1 == 6)
	{
		bVar2 = true;
	}
	iVar3 = 0;
	if (!bVar2)
	{
		if (func_271(uParam0) == 0 && iVar0 == 0)
		{
			iVar3 = 1;
		}
	}
	iVar4 = 0;
	if (!bVar2)
	{
		if (func_22(uParam0) == 0)
		{
			iVar4 = 1;
		}
	}
	if (iVar3 || iVar4)
	{
		func_272(iVar3, iVar4);
	}
	if (bVar2)
	{
		func_273(uParam0);
	}
}

void func_75(var uParam0)
{
	iVar0 = 0;
	if (func_274(uParam0))
	{
		fVar1 = to_float((_get_bounty_for_player(get_player_index()) - (*Global_2621440)[0]->f_9.f_20));
		if (fVar1 > 0f)
		{
			fVar2 = (1f + (to_float(get_random_int_in_range(50, 200)) / 1000f));
			iVar0 = (iVar0 + round((fVar1 * fVar2)));
		}
	}
	func_275(iVar0, 0, 1065353216, 1, 0, 0, 1, 752097756);
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
		if (((!bVar0 && func_276(iParam0) == 1) && iParam0 != 120) && iParam0 != 92)
		{
			func_278(iParam0, func_277());
			func_279(iParam0, 67108864);
		}
	}
	else if (bVar0)
	{
		func_280(iParam0, 67108864);
		func_278(iParam0, -15);
	}
	func_281(iParam0);
}

void func_79(bool bParam0)
{
	if (!bParam0)
	{
		func_282(11);
	}
	else
	{
		func_283(11);
	}
}

void func_80(int iParam0)
{
	if (func_284(iParam0, 0))
	{
		func_285(262144, 5, 0, 1);
		func_286(720f, 1, 0);
	}
	switch (iParam0)
	{
		case 18:
			func_287(101, 7, 1f, 0, 1);
			func_287(89, 7, 1f, 0, 1);
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
	if (func_288(iParam0) == 4)
	{
		func_289(iParam0, func_277());
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
		func_290(0, 2);
		if (!bVar1 && bParam1)
		{
			func_291();
		}
	}
	else
	{
		func_197(0);
	}
	if (!iVar0 == 1 && !iVar0 == 8)
	{
		func_292(iParam0);
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
						if (func_264(iParam0) == 77)
						{
							stat_id_set_gxt_label(&Var4, &((*Global_1835011)[76]->f_8), true);
						}
						else
						{
							stat_id_set_gxt_label(&Var4, &((*Global_1835011)[func_264(iParam0)]->f_8), true);
						}
					}
					else if ((func_264(iParam0) != 95 && func_264(iParam0) != 82) && !func_293((*Global_1347702)[func_264(iParam0)]->f_12, 512))
					{
						stat_id_set_gxt_label(&Var4, &((*Global_1347702)[func_264(iParam0)]->f_3), true);
					}
				}
			}
			else
			{
				switch (_0x225640e09effdc3f())
				{
					case 0:
						stat_id_set_gxt_label(&Var4, &((*Global_1835011)[func_264(iParam0)]->f_8), true);
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
		func_295(func_264(iParam0), iVar6, func_294());
	}
	else if (iVar0 == 8)
	{
		func_297(func_264(iParam0), iVar6, func_294(), func_296());
	}
	if (!func_187(iParam0) == 5 && !func_187(iParam0) == 6)
	{
		iVar9 = func_298(iParam0, &uVar7, &iVar8);
		if (iVar9 != 176656832)
		{
			func_299(iVar9, uVar7, -469960592, iVar8, 1, 1, 0);
		}
	}
	if (!&Global_1879534 && !Global_1879534->f_1)
	{
		switch (iVar0)
		{
			case 1:
				iVar10 = func_300(func_264(iParam0), &iVar11);
				if (!Global_17504.f_9)
				{
					iVar10 = func_301((iVar10 - 20), 0, iVar10);
					iVar11 = func_301((iVar11 - 10), 0, iVar11);
				}
				func_302(1);
				func_303(iVar10, iVar11, 1);
				Global_17504.f_9 = 0;
				Global_17504.f_10 = 0;
				Global_1899528->f_217 = 1;
				break;
			case 4:
				func_303(45, 0, 1);
				break;
			case 8:
				iVar10 = func_304(func_264(iParam0), &iVar11);
				if (!Global_17504.f_9)
				{
					iVar10 = func_301((iVar10 - 20), 0, iVar10);
					iVar11 = func_301((iVar11 - 10), 0, iVar11);
				}
				func_303(iVar10, iVar11, 1);
				Global_17504.f_9 = 0;
				Global_17504.f_10 = 0;
				if (func_305(func_264(iParam0)))
				{
					func_306(14, 0, 0, 0, 0, 0, 1065353216, 0);
				}
				Global_1899528->f_217 = 1;
				break;
			case 9:
				func_303(120, 0, 1);
				break;
			case 2:
				func_303(120, 0, 1);
				break;
			case 6:
				func_303(func_308(func_307(iParam0)), 0, 1);
				break;
			case 5:
				func_303(120, 0, 1);
				break;
		}
	}
	func_199(iParam0, 1);
	func_289(iParam0, func_277());
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
				switch (func_264(iParam0))
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
				if (func_265(func_264(iParam0)) && func_293((*Global_1347702)[func_264(iParam0)]->f_12, 4))
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
				if (func_264(iParam0) != 77)
				{
					Global_1879514->f_1 = iParam0;
					Global_1879514->f_11 = bParam3;
					Global_1879514->f_13 = func_129();
				}
				break;
			case 8:
				if (func_264(iParam0) != 58)
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
				switch (func_264(iParam0))
				{
					case 0:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_PROFESSION_ODRISCOLL"));
						_0xd8c7162ab2e2af45(-1753910767);
						break;
					case 1:
						func_309();
						_0xbb697756309d77ee(1);
						break;
					case 4:
						func_310(-1781387050, 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_310(1433048902, 4, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_310(-597058368, 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_310(-529638012, 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_310(500564674, 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_310(-875449072, 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_310(1237770824, 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_310(236757114, 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_310(-601932535, 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_310(-1267972061, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_311(-1267972061);
						func_310(1619534881, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_311(1619534881);
						func_310(-755457379, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_311(-755457379);
						func_310(1015404643, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_311(1015404643);
						func_310(-1724192342, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_311(-1724192342);
						func_310(1310680212, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_311(1310680212);
						func_310(-566881549, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_311(-566881549);
						func_310(-1753730528, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_311(-1753730528);
						func_310(147796381, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_311(147796381);
						func_310(-378547623, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_311(-378547623);
						func_310(829545206, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_311(829545206);
						func_310(891318243, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_311(891318243);
						func_310(-1016714371, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_310(-1838434463, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_310(-1448210800, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_310(-248960099, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_312();
						func_313(967523420);
						func_314();
						func_315();
						break;
					case 5:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_TOMMY"));
						break;
					case 14:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_LEVITICUS"));
						break;
					case 2:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key(func_316(10, 0)));
						break;
					case 8:
						_0x946d46cd6dfb9742(get_player_index(), 0, 621714131);
						break;
					case 15:
						func_310(1030791766, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
						if (!_unlock_is_visible(1231074654))
						{
							_unlock_set_visible(1231074654, true);
							func_317(449, 0);
						}
						break;
					case 10:
						if (!_unlock_is_visible(1880205078))
						{
							_unlock_set_visible(1880205078, true);
							func_317(446, 0);
						}
						break;
					case 16:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("ALLY_LEIGHGRAY"));
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("ALLY_ARCHIBALD"));
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_PROFESSION_GRAY"));
						break;
					case 18:
						func_318(304805134, 1, 1);
						if (!func_319((*Global_1347702)[21]->f_15, 1))
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
						func_320();
						break;
					case 26:
						func_321();
						break;
					case 17:
						func_322(Global_35, 176992230, 0, -358215195, 1, 1);
						if (func_323())
						{
							func_324(1905553950);
						}
						break;
					case 19:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_TAVISH_GRAY"));
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_CLAY"));
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_CLIVE"));
						break;
					case 33:
						if (!func_325(-514575035, -1))
						{
							iVar15 = func_277();
							func_326(&iVar15, 0, 0, 0, 2, 0, 0, 0);
							func_327(-514575035, iVar15, 0);
						}
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_EVELYN_MILLER"));
						if (func_323())
						{
							func_324(1529685685);
						}
						break;
					case 34:
						if (func_323())
						{
							func_324(-2082646505);
						}
						break;
					case 28:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_BRONTE"));
						break;
					case 31:
						func_328();
						break;
					case 37:
						func_329();
						if (func_330())
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
						func_331();
						break;
					case 43:
						func_332();
						break;
					case 44:
						if (!func_319((*Global_1347702)[82]->f_15, 1))
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
						if (!func_319((*Global_1347702)[83]->f_15, 1))
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
						func_333();
						break;
					case 59:
						func_334();
						break;
					case 60:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_TOM_DICKENS"));
						break;
					case 61:
						func_335();
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
						func_336();
						if (!_unlock_is_visible(1673898385))
						{
							_unlock_set_visible(1673898385, true);
							func_317(451, 0);
						}
						if (!func_337(-1992824800))
						{
							if (func_337(1520110311))
							{
								iVar16 = func_277();
								func_326(&iVar16, 0, 0, 6, 0, 0, 0, 0);
								func_327(1937177603, iVar16, 1);
							}
						}
						if (func_338(4))
						{
							if (!func_339(684296857, 1, 0))
							{
								iVar17 = func_277();
								func_326(&iVar17, 0, 0, 6, 0, 0, 0, 0);
								func_327(-1439688706, iVar17, 1);
							}
						}
						func_310(1224687176, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_310(-4440804, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						break;
					case 74:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_ALBERT_CAKE"));
						func_340(89200);
						func_340(2300);
						func_340(2300);
						break;
					case 68:
						func_341();
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
						func_342();
						func_340(-139100);
						break;
					case 69:
						if (func_319((*Global_1347702)[9]->f_15, 1))
						{
							func_340(-6000);
						}
						break;
					case 70:
						func_340(23400);
						func_340(1900);
						func_340(-15000);
						break;
					case 71:
						func_340(-5500);
						break;
				}
				break;
			case 8:
				switch (func_264(iParam0))
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
						func_343();
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
						func_344();
						break;
					case 66:
						func_345();
						func_346();
						break;
					case 67:
						if (!func_347(6))
						{
							func_348(6);
						}
						if (!func_347(3))
						{
							func_348(3);
						}
						if (func_323())
						{
							func_324(1534638301);
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
						if (func_319((*Global_1835011)[69]->f_1, 1))
						{
							func_349(0);
							func_340(40500);
						}
						else
						{
							func_349(0);
							func_340(46500);
						}
						break;
				}
				break;
			case 6:
				switch (func_264(iParam0))
				{
					case 0:
						switch (func_307(iParam0))
						{
							case 5:
								_0x946d46cd6dfb9742(get_player_index(), 0, 1014740297);
								break;
						}
						break;
				}
				break;
		}
		func_350(iParam0);
		func_351();
		switch (iVar0)
		{
			case 1:
				switch (func_264(iParam0))
				{
					case 4:
						func_352(iParam0, 1000, 0, 1065353216, 1, 0, 0, 1);
						break;
					case 61:
					case 62:
					case 63:
						func_352(iParam0, 300, 0, 1065353216, 1, 0, 0, 1);
						break;
					case 25:
						func_352(iParam0, 150000, 1, 0.5f, 4, 0, 0, 1);
						break;
					case 12:
						func_352(iParam0, 120000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 53:
						func_352(iParam0, 90000, 1, 0.5f, 4, 0, 0, 1);
						break;
					case 20:
						func_352(iParam0, 85000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 19:
						func_352(iParam0, 70000, 1, 0.5f, 3, 0, 0, 1);
						break;
					case 24:
						iVar18 = func_353(iParam0);
						func_352(iParam0, iVar18, 1, 0.5f, 4, 0, 0, 1);
						break;
					case 28:
						func_352(iParam0, 45000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 34:
						func_352(iParam0, 600000, 1, 0.5f, 4, 0, 0, 1);
						if (!func_339(-2046502963, 1, 0))
						{
							func_310(-2046502963, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
						}
						break;
					case 29:
						func_352(iParam0, 4600, 1, 0f, 3, 0, 0, 1);
						break;
					case 37:
						break;
					case 58:
						break;
					case 57:
						func_352(iParam0, 2100000, 1, 0.9047619f, 8, 0, 0, 1);
						break;
					case 76:
						func_352(iParam0, 2042100, 0, 1065353216, 1, 0, 0, 1);
						break;
					case 72:
						if (func_353(iParam0) == 0)
						{
							func_352(iParam0, 20000, 0, 1065353216, 1, 0, 0, 1);
						}
						else
						{
							func_352(iParam0, 15000, 0, 1065353216, 1, 0, 0, 1);
						}
						break;
				}
				break;
			case 8:
				if (func_293((*Global_1347702)[func_264(iParam0)]->f_12, 536870912))
				{
					func_354(11, 1);
				}
				switch (func_264(iParam0))
				{
					case 109:
						func_352(iParam0, 1500, 0, 1065353216, 1, 0, 0, 1);
						break;
					case 55:
						func_354(8, 1);
						break;
					case 138:
						set_bit(&(Global_40.f_9052), 1);
						set_bit(&(Global_40.f_9052), 3);
						break;
					case 94:
						func_352(iParam0, 30000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 63:
						func_352(iParam0, 60000, 1, 0.5f, 3, 0, 0, 1);
						break;
					case 37:
						func_352(iParam0, 75000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 116:
						func_352(iParam0, 25000, 1, 0.5f, 1, 0, 0, 1);
						break;
					case 9:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_ANSEL_ATHERTON"));
						break;
				}
				break;
			case 11:
				if (iParam0 == func_355(0, 10, 11, 2116153146))
				{
					func_352(iParam0, func_353(iParam0), 1, 0.5f, 3, 0, 0, 1);
				}
				else if (iParam0 == func_355(0, 7, 11, -379687487))
				{
					func_352(iParam0, func_356(9), 1, 0.5f, 3, 0, 0, 1);
				}
				else if (iParam0 == func_355(0, 8, 11, -1386089015))
				{
					func_352(iParam0, func_356(10), 1, 0.5f, 2, 0, 0, 1);
				}
				else if (iParam0 == func_355(0, 11, 11, -1952009645))
				{
					func_352(iParam0, func_356(8), 1, 0.5f, 3, 0, 0, 1);
				}
				else if (iParam0 == func_355(0, 12, 11, 2065895756))
				{
					func_352(iParam0, func_356(11), 1, 0.5f, 2, 0, 0, 1);
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
						if (iVar0 == 8 && func_264(iParam0) == 58)
						{
							Global_1879514->f_1 = iParam0;
						}
						func_358(func_357(Global_1879514->f_1));
						if (iVar0 == 8 && func_264(iParam0) == 58)
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
						if (func_265(func_264(iParam0)) && func_293((*Global_1347702)[func_264(iParam0)]->f_12, 1))
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
			func_359(bParam2, iVar20);
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
			if ((iVar1 == 1 || iVar1 == 8) || (iVar1 == 11 && iParam0 == func_355(0, 10, 11, 2116153146)))
			{
				Global_1898438 = get_game_timer();
				Global_1879514->f_1 = iParam0;
				Global_1879514->f_19 = func_360();
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
			switch (func_264(iParam0))
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
			switch (func_264(iParam0))
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

int func_85(var uParam0)
{
	cVar0 = func_110(uParam0->f_607);
	return get_hash_key(&cVar0);
}

void func_86()
{
	func_91(4112);
	func_90(6);
	vVar2 = { func_361((*Global_2621440)[0]->f_9.f_7, &uVar0, &uVar1, 0, 1, 1, 0, 0, 0) };
	func_362(vVar2, uVar1, uVar0, 0);
	func_363(vVar2);
	Global_40.f_9.f_15 = func_364(vVar2, 0);
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
	func_365();
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
	func_366(Var10, 0);
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
			func_302(1);
			func_303(15, 0, 1);
			break;
		case 4:
			func_303(10, 0, 1);
			break;
		case 8:
			func_303(10, 0, 1);
			break;
		case 9:
			func_303(10, 0, 1);
			break;
		case 2:
			func_303(10, 0, 1);
			break;
		case 6:
			func_303(10, 0, 1);
			break;
		case 5:
			func_303(10, 0, 1);
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

struct<8> func_96(var uParam0)
{
	return uParam0->f_10784;
}

void func_97(int iParam0, int iParam1, char* sParam2, bool bParam3, bool bParam4, bool bParam5)
{
	if (func_367(Global_1347343->f_11, 536870912))
	{
		return;
	}
	if (bParam3)
	{
		func_368(&(Global_1347343->f_11), 64);
	}
	if (bParam4)
	{
		func_368(&(Global_1347343->f_11), 16384);
	}
	if (func_369() >= 2)
	{
		if (!func_367(Global_1347343->f_11, 16384))
		{
			func_368(&(Global_1347343->f_11), 8);
		}
		func_204(0.88f);
	}
	StringCopy(&(Global_1347343->f_3), sParam2, 64);
	Global_1347343->f_2 = iParam0;
	Global_1347343 = 0;
	Global_1347343->f_1 = iParam1;
	func_222(Global_1935630, 2048);
	func_370(bParam5);
}

void func_98(bool bParam0)
{
	if (bParam0)
	{
	}
	_0x6ac4af46a6b8dfb2(bParam0);
}

void func_99(var uParam0, int iParam1)
{
	uParam0->f_5307 = (uParam0->f_5307 || iParam1);
}

void func_100(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < Global_43619)
	{
		if (does_entity_exist(&(Global_43619[iVar0])))
		{
			*uParam0->f_7375.f_13[iVar0] = { *Global_43619[iVar0] };
			func_371(&(uParam0->f_10792), &(Global_43619[iVar0]), &(Global_43619[iVar0]->f_1), 0);
		}
		iVar0++;
	}
	if (_does_anim_scene_exist(Global_43800))
	{
		uParam0->f_7375.f_804 = Global_43800;
		take_ownership_of_anim_scene(uParam0->f_7375.f_804);
	}
	if (func_191(&Global_1935630, 524288))
	{
		func_71(Global_1935630, 524288);
		func_372(uParam0, 67108864);
	}
}

int func_101(var uParam0)
{
	return func_373(&(uParam0->f_7375));
}

bool func_102()
{
	return Global_1572864->f_14;
}

void func_103(var uParam0, int iParam1)
{
	uParam0->f_5308 = (uParam0->f_5308 || iParam1);
}

bool func_104()
{
	return Global_1572864->f_13;
}

bool func_105()
{
	return func_374() != -1;
}

int func_106()
{
	return Global_1572864->f_9;
}

void func_107(var uParam0, int iParam1)
{
	uParam0->f_597 = iParam1;
	settimera(0);
}

void func_108(var uParam0, var uParam1)
{
	uParam0->f_607 = -1;
	func_375(uParam0);
	uParam0->f_634[0] = 56021;
	uParam0->f_634[1] = 56021;
	uParam0->f_637 = 0;
	func_377(uParam0, *uParam1);
	func_378(uParam0);
}

void func_109(var uParam0)
{
	iLocal_105 = get_object_index_from_entity_index(func_379(uParam0, -494496318, 0));
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
			func_380(iVar0, iVar1);
			iVar1++;
		}
		iVar0++;
	}
}

bool func_115(var uParam0)
{
	switch (uParam0->f_607)
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
				bVar3 = get_ped_index_from_entity_index(iVar2);
				if (bParam0)
				{
					if (_0x800df3fc913355f3(_0x32a1e3b83d501096(bVar3)))
					{
						_0x7b204f88f6c3d287(_0x32a1e3b83d501096(bVar3));
					}
					else
					{
						delete_ped(&bVar3);
					}
				}
				else
				{
					clear_ped_tasks(bVar3, 0, 0);
					if (bParam2)
					{
						_0xdf94844d474f31e5(bVar3);
					}
				}
			}
			iVar1 = (iVar1 + -1);
		}
	}
	destroy_itemset(iVar0);
}

void func_118(var uParam0)
{
	if (func_20() == 0)
	{
		return;
	}
	switch (uParam0->f_607)
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

bool func_120(var uParam0, int iParam1)
{
	return (uParam0->f_5308 && iParam1) != 0;
}

bool func_121(var uParam0, int iParam1, int iParam2)
{
	return func_381(uParam0->f_1[func_132(iParam1)]->f_11, iParam2);
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

void func_123(var uParam0)
{
	if (func_29())
	{
		func_382(&(uParam0->f_7375));
	}
}

void func_124(var uParam0, int iParam1)
{
	if (!_is_this_model_a_horse(iParam1))
	{
		return;
	}
	uParam0->f_8268 = iParam1;
}

int func_125(var uParam0)
{
	return uParam0->f_8268;
}

Vector3 func_126(int iParam0)
{
	return func_383(iParam0);
}

bool func_127(struct<4> Param0)
{
	if (func_82(32768))
	{
		return true;
	}
	return func_384(Param0, Param0.f_3);
}

bool func_128(var uParam0, int iParam1)
{
	return (uParam0->f_608 && iParam1) != 0;
}

bool func_129()
{
	if (func_20() != -1)
	{
		return false;
	}
	if (!func_385())
	{
		return false;
	}
	if (!func_319((*Global_1835011)[1]->f_1, 1))
	{
		return true;
	}
	if ((func_319((*Global_1835011)[2]->f_1, 1) && func_319((*Global_1347702)[120]->f_15, 1)) && !func_319((*Global_1835011)[4]->f_1, 1))
	{
		return true;
	}
	if (func_319((*Global_1835011)[37]->f_1, 1) && !func_319((*Global_1835011)[39]->f_1, 1))
	{
		return true;
	}
	if (func_319((*Global_1835011)[57]->f_1, 1) && !func_319((*Global_1835011)[60]->f_1, 1))
	{
		return true;
	}
	if (func_319((*Global_1835011)[26]->f_1, 1) && !func_319((*Global_1347702)[67]->f_15, 1))
	{
		return true;
	}
	if ((func_319((*Global_1835011)[62]->f_1, 1) && func_319((*Global_1835011)[63]->f_1, 1)) && !func_319((*Global_1835011)[64]->f_1, 1))
	{
		return true;
	}
	if (func_319((*Global_1835011)[75]->f_1, 1) && !func_319((*Global_1347702)[1]->f_15, 1))
	{
		return true;
	}
	if (func_319((*Global_1835011)[76]->f_1, 1) && !func_319((*Global_1835011)[77]->f_1, 1))
	{
		return true;
	}
	if ((func_319((*Global_1835011)[40]->f_1, 1) && func_319((*Global_1835011)[41]->f_1, 1)) && !func_319((*Global_1835011)[44]->f_1, 1))
	{
		return true;
	}
	if ((func_319((*Global_1835011)[62]->f_1, 1) && func_319((*Global_1835011)[63]->f_1, 1)) && !func_319((*Global_1835011)[64]->f_1, 1))
	{
		return true;
	}
	if ((func_319((*Global_1835011)[65]->f_1, 1) && func_319((*Global_1835011)[66]->f_1, 1)) && !func_319((*Global_1835011)[67]->f_1, 1))
	{
		return true;
	}
	return false;
}

void func_130(var uParam0, vector3 vParam1, float fParam4)
{
	if (func_120(uParam0, 33554432))
	{
		return;
	}
	if (func_120(uParam0, 4096))
	{
		return;
	}
	if (func_386(vParam1))
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
		func_103(uParam0, 8);
	}
	func_103(uParam0, 4096);
	_0x4759cc730f947c81();
	_0x1ff00db43026b12f();
	start_player_teleport(player_id(), vParam1, fParam4, false, true, true, false);
	do_screen_fade_out(0);
	_set_milliseconds_per_game_minute(9999999);
	func_213(&(uParam0->f_603));
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
		return func_387();
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

void func_133(var uParam0)
{
	if (_uilog_is_entry_registered(2, func_85(uParam0)))
	{
		_uilog_remove_entry(2, func_85(uParam0));
	}
	if (!_uilog_is_entry_registered(1, func_85(uParam0)))
	{
		func_388(uParam0->f_607);
	}
}

void func_134(var uParam0, int iParam1)
{
	uParam0->f_598 = iParam1;
}

void func_135(var uParam0, int iParam1)
{
	uParam0->f_599 = iParam1;
	func_27(&(uParam0->f_600), 1);
}

bool func_136(var uParam0, int iParam1)
{
	return uParam0->f_1[func_132(iParam1)]->f_12;
}

void func_137(var uParam0)
{
	func_389(&(uParam0->f_638));
	func_390(&(uParam0->f_819));
	func_391(&(uParam0->f_1020));
	func_392(&(uParam0->f_1081));
	func_393(&(uParam0->f_1126));
	func_394(&(uParam0->f_5147));
	func_395(&(uParam0->f_1124));
	func_396(&(uParam0->f_5188));
	func_397(&(uParam0->f_5239));
	func_398(&(uParam0->f_5249));
	func_399(&(uParam0->f_5265));
	func_400(&(uParam0->f_5286));
}

void func_138(var uParam0)
{
	if (!is_itemset_valid(Local_14))
	{
		Local_14 = create_itemset(true);
	}
	func_401(uParam0, -1154205140, 67108863);
	func_401(uParam0, -891510636, 67108863);
	func_401(uParam0, 2133848994, 67108863);
}

bool func_139(var uParam0)
{
	func_402(uParam0, "script@story@sus1@leadin@INT@ilo", uLocal_67[0], 7, 0, 0, 0, 1);
	func_402(uParam0, "script@story@sus1@ig@ig2_tilly_foreman_interaction@ig2_tilly", uLocal_67[1], 14, 0, 0, 0, 1);
	func_402(uParam0, "script@story@sus1@LEADIN@mcs1@ilo", uLocal_67[2], 14, 0, "PL_ENTER_LOOK", 0, 1);
	func_402(uParam0, "script@story@sus1@ig@ig2_tilly_foreman_interaction@ig2_guard", uLocal_67[3], 14, 0, 0, 0, 1);
	func_402(uParam0, "script@story@sus1@ig@ig1_susan_kills_guard@ig1_guard", uLocal_67[6], 14, 0, 0, 0, 1);
	func_402(uParam0, "script@story@sus1@ig@ig1_susan_kills_guard@ig1_guard_susan_action_b", uLocal_67[5], 14, 0, 0, 0, 1);
	func_402(uParam0, "script@story@sus1@ig@ig1_susan_kills_guard@ig1_susan", uLocal_67[4], 14, 0, 0, 0, 1);
	func_402(uParam0, "script@story@sus1@leadin@ext@tilly_steps", uLocal_67[7], 32, 0, 0, 0, 1);
	func_402(uParam0, "script@story@sus1@leadout@mcs1@pull_up", uLocal_67[8], 60, 0, "PL_LEADOUT", 0, 1);
	func_403(uParam0, "susan_1_gps_route", 1, 2, -1);
	func_403(uParam0, "susan_1_horse_chase", 67108863, 2, -1);
	func_403(uParam0, "susan_1_assist_route", 3, 2, -1);
	func_404(uParam0, cVar301, 48);
	func_404(uParam0, cVar302, 48);
	func_401(uParam0, -283162583, 67108863);
	func_401(uParam0, -1554827654, 67108863);
	func_401(uParam0, -1693870200, 67108863);
	func_401(uParam0, -1250098797, 67108863);
	func_401(uParam0, -318278790, 67108863);
	func_401(uParam0, -1140650619, 67108863);
	func_401(uParam0, 1864950433, 67108863);
	func_401(uParam0, 1547859810, 67108863);
	func_401(uParam0, 624070311, 67108863);
	func_401(uParam0, -891510636, 67108863);
	func_401(uParam0, -494496318, 67108863);
	func_401(uParam0, 2038507899, 67108863);
	func_405(uParam0, 2055893578, 67108863, -1, 0);
	return uParam0->f_607 == uParam0->f_607;
}

void func_140(var uParam0, int iParam1, int iParam2)
{
	func_406(&(uParam0->f_1[func_132(iParam1)]->f_11), iParam2);
}

void func_141(var uParam0)
{
	func_103(uParam0, 2);
	func_103(uParam0, 1);
	iLocal_307[3] = -1250098797;
	iLocal_307[4] = -1693870200;
	iLocal_307[5] = -318278790;
	iLocal_307[6] = -1140650619;
}

void func_142(var uParam0, int iParam1)
{
	func_407(&(uParam0->f_638), &(uParam0->f_819), &(uParam0->f_1020), &(uParam0->f_1081), &(uParam0->f_1124), &(uParam0->f_1126), &(uParam0->f_5147), &(uParam0->f_5188), &(uParam0->f_5239), &(uParam0->f_5249), &(uParam0->f_5265), &(uParam0->f_5286), iParam1);
}

void func_143(int iParam0)
{
	Var0 = { func_261(iParam0) };
	if (!is_string_null_or_empty(&Var0))
	{
		_text_database_request(&Var0);
	}
}

void func_144(int iParam0)
{
	Var0 = { func_262(iParam0) };
	if (!is_string_null_or_empty(&Var0))
	{
		_text_database_request(&Var0);
	}
}

void func_145(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	func_408(&(uParam0->f_5310), iParam1, sParam2, bParam3);
}

void func_146(var uParam0)
{
	if (!func_248(uParam0->f_5421))
	{
		uParam0->f_5421 = { func_409() };
	}
}

void func_147(var uParam0)
{
	if (!func_20() == 0 || network_is_host_of_this_script())
	{
		func_27(&(uParam0->f_603), 1);
	}
}

void func_148(var uParam0)
{
}

void func_149(var uParam0, float fParam1)
{
	func_410(&(uParam0->f_7375), fParam1);
}

void func_150(var uParam0, float fParam1)
{
	func_411(&(uParam0->f_7375), fParam1);
}

void func_151(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	func_412(uParam0, iParam1, sParam2, iParam3, iParam4, bParam5, 0);
	func_371(&(uParam0->f_10792), iParam1, sParam2, bParam6);
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

int func_154(var uParam0)
{
	return *uParam0;
}

Vector3 func_155(int iParam0)
{
	if (!func_182(iParam0))
	{
		return vVar0;
	}
	return (*Global_1835011)[iParam0]->f_9;
}

void func_156(var uParam0, bool bParam1)
{
	if (!func_121(uParam0, func_33(uParam0), 134217728))
	{
		func_139(uParam0);
		func_140(uParam0, func_33(uParam0), 134217728);
	}
	if (bParam1 && !func_121(uParam0, func_35(uParam0), 536870912))
	{
		if (func_413(uParam0, func_35(uParam0), 0))
		{
			func_140(uParam0, func_35(uParam0), 536870912);
		}
	}
	if (func_8(uParam0, 8192))
	{
		if (!func_8(uParam0, 536870912))
		{
			if (func_414(&(uParam0->f_1126), func_33(uParam0)))
			{
				func_99(uParam0, 536870912);
			}
		}
		return;
	}
	bVar0 = false;
	if (func_413(uParam0, func_33(uParam0), 1))
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		func_99(uParam0, 8192);
	}
}

int func_157(var uParam0)
{
	return 1;
}

bool func_158(var uParam0)
{
	if (func_415(uParam0) < 1)
	{
		func_416(uParam0, func_128(uParam0, 3), !func_8(uParam0, 2097152), uParam0->f_5410, !func_8(uParam0, 32), 0);
		func_417(uParam0, 1, uParam0->f_5413, uParam0->f_5413.f_1, uParam0->f_5413.f_2, uParam0->f_5416, 1, 1, 1);
	}
	if ((!func_120(uParam0, 4) && !func_105()) && !func_128(uParam0, 3))
	{
		if (!func_120(uParam0, 32))
		{
			if (func_20() == 0)
			{
				func_103(uParam0, 32);
			}
			else
			{
				func_418(uParam0);
			}
		}
		if (func_120(uParam0, 32))
		{
			func_419(uParam0);
		}
	}
	switch (func_415(uParam0))
	{
		case -1:
		case 0:
			func_420(uParam0, 1);
			break;
		case 1:
			if (func_421(uParam0))
			{
				if (func_120(uParam0, 4096))
				{
					func_420(uParam0, 2);
				}
				else
				{
					func_420(uParam0, 3);
				}
			}
			break;
		case 2:
			if (func_422(uParam0))
			{
				func_420(uParam0, 3);
			}
			break;
		case 3:
			if (func_423(uParam0))
			{
				func_420(uParam0, 4);
			}
			break;
		case 4:
			return true;
	}
	return false;
}

var func_159(var uParam0)
{
	return uParam0->f_5408;
}

void func_160(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

bool func_161(var uParam0)
{
	if (func_33(uParam0) == 26)
	{
		func_424(uParam0, 0);
		return true;
	}
	if (func_425(uParam0))
	{
		iVar0 = func_33(uParam0);
		func_107(uParam0, func_35(uParam0));
		if (func_33(uParam0) == 26)
		{
			func_424(uParam0, 0);
			return true;
		}
		else if (func_121(uParam0, iVar0, 128))
		{
			func_425(uParam0);
		}
	}
	return false;
}

int func_162(var uParam0, int iParam1)
{
	return uParam0->f_1[func_132(iParam1)]->f_10;
}

bool func_163(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_426(iParam0))
		{
			return false;
		}
	}
	func_427(iParam1, &iVar0, &iVar1);
	return is_bit_set(&((*Global_1360165)[iParam0]->f_58[iVar0]), iVar1);
}

void func_164(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_426(iParam0))
		{
			return;
		}
	}
	func_427(iParam1, &iVar0, &iVar1);
	clear_bit((*Global_1360165)[iParam0]->f_58[iVar0], iVar1);
}

void func_165(var uParam0, bool bParam1)
{
	bParam1 = bParam1;
	uParam0->f_607 = uParam0->f_607;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		func_428(Local_115[iVar0]);
		func_428(&(Local_115[iVar0]->f_1));
		iVar0++;
	}
	if (func_251(19))
	{
		if (bParam1)
		{
			func_166(uParam0, 19, &(Local_193[1]), 0, 0, 1, 0);
		}
	}
	if (func_251(22))
	{
		if (bParam1)
		{
		}
	}
}

void func_166(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (!func_429(iParam1))
	{
		return;
	}
	if (!func_251(iParam1))
	{
		return;
	}
	if (bParam5 && !bParam6)
	{
		if (func_22(uParam0) != 0 && func_154(uParam0) >= 2)
		{
			bParam5 = false;
		}
	}
	if (does_entity_exist(iParam2))
	{
		func_430(uParam0, iParam2);
		func_431(iParam2);
	}
	func_432(iParam1);
	func_433(iParam1, 0);
	func_434(iParam1, 0, bParam4, bParam5, -1082130432, 1, 1, 0, 0, 0, 0);
	if (bParam5)
	{
	}
}

void func_167()
{
	iVar0 = 0;
	while (iVar0 < 7)
	{
		func_435(&(Local_115[iVar0]->f_2));
		iVar0++;
	}
	func_435(&iLocal_62);
}

void func_168()
{
}

void func_169(bool bParam0)
{
	iVar0 = 0;
	while (iVar0 < 1)
	{
		func_436(uLocal_107[iVar0], bParam0);
		iVar0++;
	}
	bParam0 = bParam0;
}

void func_170(bool bParam0)
{
	bParam0 = bParam0;
	if (does_entity_exist(iLocal_227))
	{
		if (bParam0)
		{
			if (is_ped_in_vehicle(Global_35, iLocal_227, false))
			{
				clear_ped_tasks_immediately(Global_35, false, true);
			}
			delete_vehicle(&iLocal_227);
		}
		else
		{
			if (is_ped_in_vehicle(Global_35, iLocal_227, false))
			{
				clear_ped_tasks_immediately(Global_35, false, true);
			}
			delete_vehicle(&iLocal_227);
		}
	}
}

void func_171()
{
	func_437(-18102128, 0, 0);
	func_437(1151226872, 0, 0);
	func_437(1485561723, 0, 0);
	func_437(-750353502, 0, 0);
	door_system_set_open_ratio(-18102128, 0f, 1);
	door_system_set_open_ratio(1151226872, 0f, 1);
	door_system_set_open_ratio(1485561723, 0f, 1);
	door_system_set_open_ratio(-750353502, 0f, 1);
}

void func_172(bool bParam0)
{
	if (bParam0)
	{
		_0x9851de7aec10b4e1(func_176(1, 0), 100f, 1, 0);
	}
}

void func_173()
{
	_delete_volume(Local_31);
	_delete_volume(Local_31.f_1);
	_delete_volume(Local_31.f_2);
	_delete_volume(Local_31.f_3);
	_delete_volume(Local_31.f_4);
	_delete_volume(Local_31.f_5);
	_delete_volume(Local_31.f_6);
	_delete_volume(Local_31.f_7);
	_delete_volume(Local_31.f_8);
	_delete_volume(Local_31.f_9);
	_delete_volume(Local_31.f_10);
	_delete_volume(Local_31.f_11);
	_delete_volume(Local_31.f_12);
	_delete_volume(Local_31.f_13);
	_delete_volume(Local_31.f_14);
	_delete_volume(Local_31.f_15);
	_delete_volume(Local_31.f_16);
	_delete_volume(Local_31.f_17);
	_delete_volume(Local_31.f_18);
	_delete_volume(Local_31.f_19);
	_delete_volume(Local_31.f_20);
	_delete_volume(Local_31.f_21);
	_delete_volume(Local_31.f_22);
	_delete_volume(Local_31.f_23);
	_delete_volume(Local_31.f_25);
	_delete_volume(Local_31.f_26);
	_delete_volume(Local_31.f_27);
}

void func_174(int iParam0)
{
	if (_does_volume_exist(iParam0))
	{
		_delete_volume(iParam0);
	}
}

void func_175(int iParam0, int iParam1)
{
	if (!func_438(iParam0, iParam1))
	{
		return;
	}
	Global_1392240->f_1[iParam0]->f_14 = (Global_1392240->f_1[iParam0]->f_14 - (Global_1392240->f_1[iParam0]->f_14 && iParam1));
}

Vector3 func_176(int iParam0, int iParam1)
{
	return func_439(iParam0, iParam1);
}

void func_177(var uParam0, vector3 vParam1, vector3 vParam4, var uParam7, bool bParam8)
{
	clear_ped_non_creation_area();
	vVar0 = { func_440(vParam1, vParam4, uParam7) };
	vVar3 = { func_441(vParam1, vParam4, uParam7) };
	set_ped_paths_back_to_original(vVar0, vVar3, 0);
	if (_0x91a5f9cbebb9d936(*uParam0))
	{
		remove_scenario_blocking_area(*uParam0, bParam8);
	}
}

void func_178()
{
	if (!func_163(19, 28, 0))
	{
		func_442(19, 28, 0);
		func_442(19, 66, 0);
	}
	_0x27e8a84c12b0b7d1(&(Local_193[1]), 464906090, 1);
	_0x27e8a84c12b0b7d1(&(Local_193[1]), -1496612359, 1);
	if (func_443(1632247697) && _0xa0bc8faed8cfeb3c(&(Local_193[1])))
	{
		func_444(&(Local_193[1]), 464906090);
	}
	else if (!func_443(1632247697) && _0xa0bc8faed8cfeb3c(&(Local_193[1])))
	{
		func_444(&(Local_193[1]), -1496612359);
	}
}

void func_179(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_429(iParam0))
		{
			return;
		}
	}
	Global_40.f_4942[iParam0] = (Global_40.f_4942[iParam0] || iParam1);
}

int func_180(int iParam0)
{
	return iParam0;
}

void func_181(int iParam0)
{
	if (!func_445(iParam0))
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
	iVar0 = func_288(iParam0);
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
	iVar0 = func_446(iParam0);
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
	return func_448(func_447(iParam0));
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
		if (func_449())
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
		iVar0 = func_264(&(Global_1898164->f_1[0]));
		if (func_265(iVar0) && func_293((*Global_1347702)[iVar0]->f_12, 131072))
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
			iVar0 = func_264(iParam0);
			return func_450(iVar0);
		case 8:
			iVar1 = func_264(iParam0);
			if (func_293((*Global_1347702)[iVar1]->f_12, 1))
			{
				return func_451(iVar1);
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
		func_452(iVar0, Global_1898077->f_12);
	}
	else
	{
		Global_1898077->f_1 = 0;
		Global_1898077->f_7 = iVar0;
		Global_1898077->f_8 = func_453();
		Global_1898077->f_9 = func_454(Global_1894899->f_2);
		func_455(Global_1898077->f_7, Global_1898077->f_8, Global_1898077->f_9);
	}
	Global_1898077->f_2 = 0;
}

int func_194()
{
	if (!func_319((*Global_1835011)[4]->f_1, 1))
	{
		return 0;
	}
	else if (!func_319((*Global_1347702)[66]->f_15, 1))
	{
		return 1;
	}
	else if (!func_319((*Global_1347702)[67]->f_15, 1))
	{
		return 2;
	}
	else if (!func_319((*Global_1835011)[38]->f_1, 1))
	{
		return 3;
	}
	else if (!func_319((*Global_1347702)[68]->f_15, 1))
	{
		return 4;
	}
	else if (!func_319((*Global_1835011)[59]->f_1, 1))
	{
		return 5;
	}
	else if (!func_319((*Global_1835011)[67]->f_1, 1))
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
	func_456(iParam0, iParam1);
}

int func_196(int iParam0)
{
	return &(Global_1898164->f_1[iParam0]);
}

int func_197(bool bParam0)
{
	if (!bParam0 && func_457(373691918))
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
	if (func_458(iParam0))
	{
		if (bParam1)
		{
			func_459(-525676072);
		}
		else
		{
			func_460(-525676072);
		}
	}
}

int func_200(int iParam0)
{
	return func_462(func_461(iParam0));
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
	return func_463(_0xc17f69e1418cd11f(3));
}

bool func_207()
{
	iVar0 = _0xc17f69e1418cd11f(1);
	return (iVar0 != 0 && _0x59fa676177dbe4c9(iVar0) == 4);
}

int func_208(int iParam0)
{
	iParam0 = func_258(iParam0);
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
	if (!func_464(iParam0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if ((*Global_40.f_11206[iParam0])[iVar0]->f_3 == iParam1)
		{
			func_465(iParam0, (*Global_40.f_11206[iParam0])[iVar0]);
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
		func_466(sParam0, 1);
		return true;
	}
	if (bParam1)
	{
		if (sParam0->f_9 == 17 || sParam0->f_9 == 19)
		{
			set_audio_flag(sParam0, true);
			func_466(sParam0, 1);
			return false;
		}
		if (sParam0->f_9 == 18 || sParam0->f_9 == 20)
		{
			set_audio_flag(sParam0, false);
			func_466(sParam0, 1);
			return false;
		}
	}
	else
	{
		if (sParam0->f_9 == 10 || sParam0->f_9 == 12)
		{
			set_audio_flag(sParam0, true);
			func_466(sParam0, 1);
			return false;
		}
		if (sParam0->f_9 == 11 || sParam0->f_9 == 13)
		{
			set_audio_flag(sParam0, false);
			func_466(sParam0, 1);
			return false;
		}
	}
	if (!is_string_null_or_empty(sParam0))
	{
		trigger_music_event(sParam0);
		func_466(sParam0, 1);
		return true;
	}
	func_466(sParam0, 1);
	return false;
}

bool func_212(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_213(float fParam0)
{
	func_467(fParam0, 0f);
}

int func_214(float fParam0)
{
	if (!func_26(fParam0))
	{
		return round((fParam0->f_1 * 1000f));
	}
	if (func_468(fParam0))
	{
		return round((fParam0->f_2 * 1000f));
	}
	return (func_469() - round((fParam0->f_1 * 1000f)));
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
		func_470(0);
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

struct<4> func_216(int iParam0, int iParam1)
{
	return func_471(iParam0, iParam1);
}

void func_217(var uParam0, struct<4> Param1)
{
	*uParam0 = { Param1 };
	uParam0->f_3 = Param1.f_3;
}

int func_218(var uParam0, int iParam1)
{
	return uParam0->f_1[func_132(iParam1)]->f_9;
}

void func_219(int iParam0, struct<4> Param1, struct<4> Param5, int iParam9, int iParam10)
{
	Global_1572864->f_8 = iParam0;
	Global_1572864->f_9 = iParam9;
	Global_1572864->f_10 = iParam10;
	StringCopy(&cVar0, "INVALID", 8);
	if (func_188(iParam0) == 1)
	{
		cVar0 = func_110(func_472(iParam0));
		_0x8ec7890d446bd9c1(&cVar0, 0, Global_1572864->f_9);
	}
	else if (func_188(iParam0) == 8)
	{
		cVar0 = func_474(func_473(iParam0));
		_0x8ec7890d446bd9c1(&cVar0, 0, Global_1572864->f_9);
	}
	func_475(1, 1);
	func_476(1, Param1, Param1.f_3);
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
	func_466(sParam0, 2);
}

void func_221(int iParam0, int iParam1)
{
	if (!func_477(iParam0))
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
	return func_478(get_id_of_this_thread());
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
	func_479(bParam0);
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
	if (!func_480(iParam0))
	{
		return;
	}
	(*Global_1310750)[iParam0]->f_46 = 0;
}

void func_235()
{
	func_481(64);
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
		return func_482(&(Global_1109400->f_4), iVar0, 5);
	}
	if (iParam1 == func_483())
	{
		return func_482(&(Global_1109400->f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (&Global_1225639->f_21[iParam1])
	{
		return func_482(&((*Global_1108178)[iParam1]->f_4), iVar0, 5);
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
				func_280(iVar1, 11);
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
	if (func_484(uParam0, 1) || func_484(uParam0, 2))
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
	if (!func_429(iParam0))
	{
		return false;
	}
	if (!func_485(iParam0))
	{
		return false;
	}
	return (*Global_1360165)[iParam0]->f_129 == get_id_of_this_thread();
}

int func_252(var uParam0)
{
	return uParam0->f_5411;
}

int func_253(int iParam0)
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

int func_254(int iParam0)
{
	iParam0 = func_258(iParam0);
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

void func_255(int iParam0)
{
	iParam0 = func_258(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = get_id_of_this_thread();
	func_486(iParam0);
	if (func_487(iParam0))
	{
		if (func_254(iParam0) != iVar0)
		{
			return;
		}
	}
	func_488(iParam0);
	func_489(iParam0);
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
			if (!func_490(iVar2))
			{
				set_ped_model_is_suppressed(iVar2, false);
			}
		}
		func_491(iParam0);
	}
}

void func_256(int iParam0, bool bParam1)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (is_entity_dead(iParam0) || is_ped_injured(iParam0))
	{
		return;
	}
	if (!func_492(iParam0))
	{
		return;
	}
	iVar0 = func_253(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (iVar0 >= 7)
	{
		return;
	}
	func_59(iVar0);
	func_486(iVar0);
	iVar1 = get_id_of_this_thread();
	iVar2 = func_254(iVar0);
	if (!bParam1)
	{
		if (iVar1 != iVar2)
		{
			return;
		}
		if (!func_487(iVar0))
		{
			return;
		}
	}
	func_493(iVar0);
	set_ped_keep_task(iParam0, true);
	if (bParam1 && func_20() == -1)
	{
		if (!_0x88ad6cc10d8d35b2(iParam0))
		{
			set_entity_as_mission_entity(iParam0, true, true);
		}
	}
}

void func_257(var uParam0, int iParam1)
{
	uParam0->f_5308 = (uParam0->f_5308 - (uParam0->f_5308 && iParam1));
}

int func_258(int iParam0)
{
	if (iParam0 == 7)
	{
		return Global_40.f_1095;
	}
	return iParam0;
}

void func_259(int iParam0, int iParam1)
{
	iParam0 = func_258(iParam0);
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

void func_260()
{
	if (func_494(0))
	{
		func_495(0);
	}
	if (func_494(1))
	{
		func_495(1);
	}
	if (func_494(5))
	{
		func_495(5);
	}
	if (func_494(6))
	{
		func_488(6);
	}
}

struct<2> func_261(int iParam0)
{
	MemCopy(&Var0, {func_110(iParam0)}, 2);
	return Var0;
}

struct<2> func_262(int iParam0)
{
	Var0 = { func_261(iParam0) };
	StringConCat(&Var0, "AUD", 16);
	return Var0;
}

void func_263(var uParam0)
{
	_0xebff94328ff7a18a(-3.141593f, 3.141593f);
	if (_uiprompt_is_valid(uParam0->f_11))
	{
		_uiprompt_delete(uParam0->f_11);
	}
}

int func_264(int iParam0)
{
	if (!func_183(iParam0))
	{
		return -1;
	}
	return func_496(func_447(iParam0));
}

bool func_265(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_266(int iParam0, int iParam1)
{
	return (Global_40.f_490.f_402[iParam0] && iParam1) != 0;
}

void func_267(int iParam0, bool bParam1)
{
	iVar0 = func_497(iParam0);
	if (_uilog_is_entry_registered(iVar0, func_498(iParam0)))
	{
		_uilog_remove_entry(iVar0, func_498(iParam0));
	}
	if (bParam1)
	{
		if (iVar0 == 1)
		{
			if (_uilog_is_entry_registered(2, func_498(iParam0)))
			{
				_uilog_remove_entry(2, func_498(iParam0));
			}
		}
	}
	func_499(iParam0, 4);
	func_499(iParam0, 8);
	func_499(iParam0, 16);
}

void func_268(bool bParam0)
{
	iVar0 = 0;
	while (iVar0 < &Global_1347702)
	{
		if (func_265(iVar0))
		{
			if (func_266(iVar0, 4))
			{
				func_269(iVar0, bParam0);
			}
		}
		iVar0++;
	}
}

void func_269(int iParam0, bool bParam1)
{
	if (!func_266(iParam0, 4))
	{
		return;
	}
	if (!_uilog_is_entry_registered(func_497(iParam0), func_498(iParam0)))
	{
		return;
	}
	if (bParam1)
	{
		_uilog_mark_entry_availability(func_497(iParam0), func_498(iParam0), 2, "");
		func_500(iParam0, 16);
	}
	else
	{
		if (func_266(iParam0, 8))
		{
			_uilog_mark_entry_availability(func_497(iParam0), func_498(iParam0), 1, "");
		}
		else
		{
			_uilog_mark_entry_availability(func_497(iParam0), func_498(iParam0), 0, "");
		}
		func_499(iParam0, 16);
	}
}

void func_270(int iParam0, bool bParam1)
{
	if ((*Global_1347702)[iParam0]->f_12 & 67108864 != 0)
	{
		return;
	}
	if (!func_266(iParam0, 4))
	{
		return;
	}
	if (!_uilog_is_entry_registered(func_497(iParam0), func_498(iParam0)))
	{
		return;
	}
	if (bParam1)
	{
		if (func_266(iParam0, 16))
		{
		}
		else
		{
			_uilog_mark_entry_availability(func_497(iParam0), func_498(iParam0), 1, "");
		}
		func_500(iParam0, 8);
	}
	else
	{
		if (func_266(iParam0, 16))
		{
		}
		else
		{
			_uilog_mark_entry_availability(func_497(iParam0), func_498(iParam0), 0, "");
		}
		func_499(iParam0, 8);
	}
}

int func_271(var uParam0)
{
	if (func_120(uParam0, 8388608))
	{
		return 2;
	}
	if (func_120(uParam0, 4194304))
	{
		return 4;
	}
	if (func_120(uParam0, 4))
	{
		return 1;
	}
	if (func_128(uParam0, 1) && func_82(32768))
	{
		return 3;
	}
	return 0;
}

void func_272(int iParam0, int iParam1)
{
	if (func_494(0))
	{
		if (func_501(0))
		{
			func_502(0);
		}
	}
	if (func_494(1))
	{
		if (func_501(1))
		{
			func_502(1);
		}
	}
}

void func_273(var uParam0)
{
	if (func_120(uParam0, 1))
	{
		return;
	}
	if (is_entity_dead(uParam0->f_5411))
	{
		if (func_120(uParam0, 16))
		{
			func_58(uParam0, 0);
		}
		if (func_417(uParam0, 0, uParam0->f_5413, uParam0->f_5413.f_1, uParam0->f_5413.f_2, uParam0->f_5416, 1, 1, 1))
		{
		}
	}
}

bool func_274(var uParam0)
{
	return false;
	switch (uParam0->f_607)
	{
		case 11:
		case 12:
			return true;
	}
	return false;
}

void func_275(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, int iParam6, int iParam7)
{
	if (!bParam1)
	{
		func_503(iParam0, sParam4, iParam5);
	}
	func_504(iParam0, bParam1, fParam2, iParam3, iParam7);
}

int func_276(int iParam0)
{
	if (!func_240(iParam0))
	{
		return 0;
	}
	return (*Global_1888801)[iParam0]->f_20;
}

int func_277()
{
	return &Global_1899515;
}

void func_278(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_23118[iParam0]->f_2 = iParam1;
		return;
	}
	Global_1058888->f_40615[iParam0]->f_2 = iParam1;
}

void func_279(int iParam0, int iParam1)
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

void func_280(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_23118[iParam0] = (&Global_23118[iParam0] - (Global_23118[iParam0] && iParam1));
		return;
	}
	Global_1058888->f_40615[iParam0] = (&Global_1058888->f_40615[iParam0] - (Global_1058888->f_40615[iParam0] && iParam1));
}

void func_281(int iParam0)
{
	if (!func_240(iParam0))
	{
		return;
	}
	if (func_505(iParam0))
	{
		func_506(iParam0);
	}
	else
	{
		func_507(iParam0);
	}
}

int func_282(int iParam0)
{
	if (func_508(&(Global_1109400->f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

int func_283(int iParam0)
{
	if (func_509(&(Global_1109400->f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

bool func_284(int iParam0, int iParam1)
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

void func_285(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	iVar0 = 0;
	while (iVar0 < 120)
	{
		iVar1 = 0;
		if (func_510(Global_1310750[iVar0], iParam0))
		{
			if (!func_511(iVar0))
			{
				iVar1 = 1;
			}
			else if (iParam0 == 16777216)
			{
				if (func_512(iVar0) < func_513(iParam1))
				{
					iVar1 = 1;
				}
			}
			func_287(iVar0, iParam1, 1f, (iVar1 || iParam2), bParam3);
		}
		iVar0++;
	}
}

void func_286(float fParam0, bool bParam1, bool bParam2)
{
	fVar0 = func_514();
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

void func_287(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
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
	func_515(iParam0, bParam3, round((fVar0 * fParam2)), round((fVar1 * fParam2)), round((fVar2 * fParam2)), round((fVar3 * fParam2)), bParam4, 1);
}

int func_288(int iParam0)
{
	if (!func_183(iParam0))
	{
		return -1;
	}
	return func_187(iParam0);
}

void func_289(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_6 = iParam1;
}

int func_290(bool bParam0, int iParam1)
{
	if (!bParam0 && func_457(373691918))
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

void func_291()
{
	Var0 = Global_35;
	Var0.f_12 = 8;
	Var0.f_8 = 0;
	iVar17 = 0;
	while (iVar17 < 27)
	{
		if (func_429(iVar17))
		{
			iVar18 = func_516(iVar17);
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
	func_517(&(Global_1359489->f_55));
	if (func_518(1777191912, 1))
	{
		func_519(1777191912, 1, 0);
	}
}

void func_292(int iParam0)
{
	if (!func_183(iParam0))
	{
		return;
	}
	func_521(iParam0, (func_520(iParam0) + shift_left(1, 16)));
}

bool func_293(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_294()
{
	return func_522() > 0;
}

void func_295(int iParam0, int iParam1, bool bParam2)
{
	switch (iParam0)
	{
		case 67:
			func_523(-1032423150, iParam1);
			break;
		case 18:
			func_523(294066959, iParam1);
			func_523(-1925639563, iParam1);
			func_523(-378582304, iParam1);
			func_523(-338306437, iParam1);
			break;
		case 20:
			func_523(437270255, iParam1);
			break;
		case 2:
			func_523(-304000413, iParam1);
			func_523(-533612796, iParam1);
			func_523(48036954, iParam1);
			break;
		case 23:
			func_523(193108691, iParam1);
			func_523(491732588, iParam1);
			func_523(671962088, iParam1);
			func_524(1);
			break;
		case 16:
			func_523(-1836056650, iParam1);
			func_523(-754657922, iParam1);
			func_523(-1752355838, iParam1);
			func_523(-1375324510, iParam1);
			break;
		case 59:
			func_523(-514392105, iParam1);
			func_523(-822060246, iParam1);
			if (func_525(146))
			{
				func_523(1372748575, iParam1);
			}
			func_524(1);
			break;
		case 76:
			func_523(1991352213, iParam1);
			if (func_526() == 0)
			{
				func_523(1852488616, iParam1);
			}
			else
			{
				func_523(-9866350, iParam1);
			}
			break;
		case 44:
			func_523(863852599, iParam1);
			func_523(1228374935, iParam1);
			func_523(1517889050, iParam1);
			func_523(830657578, iParam1);
			func_523(1901354958, iParam1);
			break;
		case 46:
			func_523(-582805654, iParam1);
			func_523(250378940, iParam1);
			func_523(-2143265426, iParam1);
			break;
		case 17:
			func_523(-941494139, iParam1);
			func_523(1641489521, iParam1);
			break;
		case 19:
			func_523(-1829423531, iParam1);
			func_523(-1590504752, iParam1);
			func_523(1357221321, iParam1);
			break;
		case 21:
			func_523(-1037992610, iParam1);
			func_523(-1286414399, iParam1);
			func_524(0);
			break;
		case 15:
			func_523(-1014460309, iParam1);
			func_523(-1030502825, iParam1);
			break;
		case 33:
			func_523(479388090, iParam1);
			func_523(-1396342239, iParam1);
			func_523(-619618632, iParam1);
			break;
		case 34:
			func_523(1193561641, iParam1);
			break;
		case 64:
			func_523(1363960851, iParam1);
			break;
		case 60:
			func_523(-1232453926, iParam1);
			func_523(-882833584, iParam1);
			break;
		case 73:
			func_523(2023205767, iParam1);
			break;
		case 74:
			func_523(-2135286513, iParam1);
			if (func_526() == 0)
			{
				func_523(33799444, iParam1);
			}
			else
			{
				func_523(-161343203, iParam1);
			}
			break;
		case 8:
			func_523(841639693, iParam1);
			func_523(358952323, iParam1);
			break;
		case 36:
			func_523(852538149, iParam1);
			func_523(689020839, iParam1);
			if (&Global_1357515 == 0)
			{
				func_523(-404049058, iParam1);
			}
			else if (&Global_1357515 == 1)
			{
				func_523(1116039310, iParam1);
			}
			break;
		case 27:
			func_523(107633428, iParam1);
			func_523(335902282, iParam1);
			func_523(575673055, iParam1);
			func_523(-425944207, iParam1);
			break;
		case 28:
			func_523(-1941530250, iParam1);
			func_523(1399269304, iParam1);
			func_523(1839684664, iParam1);
			func_523(923168503, iParam1);
			func_523(-1485078322, iParam1);
			break;
		case 29:
			func_523(574995900, iParam1);
			func_523(-1691275407, iParam1);
			func_523(-1725307861, iParam1);
			break;
		case 31:
			func_523(-2108383238, iParam1);
			func_523(-1321828931, iParam1);
			func_523(-1632118592, iParam1);
			func_523(334938948, iParam1);
			break;
		case 4:
			func_523(115823701, iParam1);
			func_523(-1896939736, iParam1);
			func_523(-1830746356, iParam1);
			func_523(-1235169781, iParam1);
			func_524(0);
			break;
		case 6:
			func_523(1801727621, iParam1);
			if (&Global_1357515 == -1)
			{
				func_523(-999872881, iParam1);
			}
			else if (&Global_1357515 == 0)
			{
				func_523(-1227289741, iParam1);
			}
			else if (&Global_1357515 == 1)
			{
				func_523(-384176140, iParam1);
			}
			break;
		case 25:
			func_523(1056132658, iParam1);
			break;
		case 24:
			if (&Global_1357515 == -1)
			{
				func_523(1343889751, iParam1);
			}
			else if (&Global_1357515 == 0)
			{
				func_523(-948326001, iParam1);
			}
			else if (&Global_1357515 == 1)
			{
				func_523(-1374849484, iParam1);
			}
			break;
		case 48:
			func_523(-1632856601, iParam1);
			if (&Global_1357515 == -1)
			{
				func_523(217772674, iParam1);
			}
			else
			{
				func_523(2071798160, iParam1);
			}
			if (func_527(51))
			{
				func_523(-792802286, iParam1);
			}
			break;
		case 49:
			func_523(-1972727021, iParam1);
			if (&Global_1357515 == 0)
			{
				func_523(-1444030885, iParam1);
			}
			else if (&Global_1357515 == 1)
			{
				func_523(-1272255787, iParam1);
			}
			else if (&Global_1357515 == 2)
			{
				func_523(1402120602, iParam1);
			}
			break;
		case 58:
			func_523(-1661934591, iParam1);
			break;
		case 50:
			func_523(-1713759426, iParam1);
			break;
		case 52:
			func_523(-314799932, iParam1);
			func_523(-462260432, iParam1);
			func_523(822929377, iParam1);
			if (bParam2 == 1)
			{
				func_523(345256028, iParam1);
				func_523(-1635084094, iParam1);
			}
			else
			{
				func_523(114267347, iParam1);
			}
			break;
		case 32:
			func_523(615304157, iParam1);
			break;
		case 47:
			func_523(415434835, iParam1);
			break;
		case 69:
			func_523(1373465877, iParam1);
			if (func_319((*Global_1347702)[9]->f_15, 1))
			{
				func_523(-2058273527, iParam1);
			}
			break;
		case 70:
			func_523(451334985, iParam1);
			if (func_526() == 0)
			{
				func_523(-224150200, iParam1);
			}
			else
			{
				func_523(289012628, iParam1);
			}
			break;
		case 71:
			if (func_526() == 0)
			{
				func_523(-41692120, iParam1);
			}
			else
			{
				func_523(1537840678, iParam1);
			}
			break;
		case 37:
			func_523(1520478365, iParam1);
			break;
		case 9:
			if (&Global_1357515 == -1)
			{
				func_523(1842132550, iParam1);
			}
			else
			{
				func_523(-785735240, iParam1);
			}
			func_523(-1605690566, iParam1);
			break;
		case 13:
			func_523(-731367459, iParam1);
			func_523(224176585, iParam1);
			func_523(-14545580, iParam1);
			break;
		case 53:
			func_523(1095274522, iParam1);
			break;
		case 54:
			func_523(-572027988, iParam1);
			break;
		case 56:
			func_523(1339307101, iParam1);
			func_523(2102267732, iParam1);
			break;
		case 57:
			func_523(710102686, iParam1);
			break;
		case 22:
			func_523(-1754368482, iParam1);
			func_523(-2071408557, iParam1);
			break;
		case 12:
			func_523(-181334543, iParam1);
			break;
		case 0:
			func_523(-2134669864, iParam1);
			func_523(-548289709, iParam1);
			func_523(-911271922, iParam1);
			func_523(-604455775, iParam1);
			break;
		case 1:
			func_524(1);
			break;
		case 3:
			if (func_330())
			{
				if (_journal_can_write_entry(-1478534115))
				{
					func_523(-1286192062, iParam1);
				}
			}
			else if (_journal_can_write_entry(-1286192062))
			{
				func_523(-1478534115, iParam1);
			}
			break;
		default:
			break;
	}
}

bool func_296()
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

void func_297(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	switch (iParam0)
	{
		case 0:
			func_523(-145926707, iParam1);
			func_523(-604922090, iParam1);
			func_523(-848690769, iParam1);
			break;
		case 1:
			func_523(-1477631591, iParam1);
			break;
		case 2:
			func_523(76112544, iParam1);
			break;
		case 9:
			func_523(1396404308, iParam1);
			func_523(-1357381228, iParam1);
			if (func_319((*Global_1835011)[69]->f_1, 1))
			{
				func_523(1902679064, iParam1);
			}
			else
			{
				func_523(-2146422425, iParam1);
			}
			break;
		case 22:
			func_523(-1534761730, iParam1);
			break;
		case 26:
			if (bParam3 == 1)
			{
				func_523(-1934184559, iParam1);
				func_523(1281755988, iParam1);
			}
			else
			{
				func_523(-1745220872, iParam1);
				func_523(-1044976796, iParam1);
			}
			break;
		case 29:
			if (bParam3 == 1)
			{
				func_523(-1641504538, iParam1);
				func_523(-988014485, iParam1);
			}
			else if (func_525(26))
			{
				func_523(-343043950, iParam1);
				func_523(-640062214, iParam1);
			}
			else
			{
				func_523(-1272028496, iParam1);
			}
			break;
		case 32:
			if (bParam3 == 1)
			{
				if (&Global_1357515 == -1)
				{
					func_523(-1816782797, iParam1);
				}
				else if (&Global_1357515 == 0)
				{
					func_523(-176175898, iParam1);
				}
				else if (&Global_1357515 == 1)
				{
					func_523(1711460080, iParam1);
				}
				else if (&Global_1357515 == 2)
				{
					func_523(-2108576508, iParam1);
				}
				else if (&Global_1357515 == 3)
				{
					func_523(-1103692224, iParam1);
				}
				else if (&Global_1357515 == 4)
				{
					func_523(1301690984, iParam1);
				}
			}
			else
			{
				func_523(699457343, iParam1);
				if (&Global_1357515 == -1)
				{
					func_523(-908444626, iParam1);
				}
				else if (&Global_1357515 == 0)
				{
					func_523(-1475448104, iParam1);
				}
				else if (&Global_1357515 == 1)
				{
					func_523(1727640249, iParam1);
				}
				else if (&Global_1357515 == 2)
				{
					func_523(-2050867743, iParam1);
				}
				else if (&Global_1357515 == 3)
				{
					func_523(-996445915, iParam1);
				}
				else if (&Global_1357515 == 4)
				{
					func_523(-1868882771, iParam1);
				}
			}
			break;
		case 35:
			if (bParam3 == 1)
			{
				func_523(-754570528, iParam1);
			}
			else
			{
				func_523(1690083163, iParam1);
			}
			break;
		case 36:
			if (bParam3 == 1)
			{
				func_523(-2072125821, iParam1);
			}
			else
			{
				func_523(270040030, iParam1);
			}
			break;
		case 37:
			func_523(-870030001, iParam1);
			break;
		case 53:
			if (bParam3 == 1)
			{
				func_523(-505314737, iParam1);
				func_523(-1853052860, iParam1);
			}
			else
			{
				func_523(-1975624994, iParam1);
				func_523(1648135852, iParam1);
			}
			break;
		case 54:
			if (bParam3 == 1)
			{
				func_523(1690231002, iParam1);
			}
			else
			{
				func_523(517031924, iParam1);
			}
			break;
		case 55:
			if (bParam3 == 1)
			{
				func_523(1225386280, iParam1);
			}
			else if (func_525(54))
			{
				func_523(-283235773, iParam1);
			}
			else
			{
				func_523(701962369, iParam1);
			}
			break;
		case 38:
			if (bParam3 == 1)
			{
				func_523(1355398007, iParam1);
			}
			else
			{
				func_523(-1900349467, iParam1);
			}
			break;
		case 39:
			if (bParam3 == 1)
			{
				func_523(574636806, iParam1);
			}
			else
			{
				func_523(-196256251, iParam1);
			}
			break;
		case 40:
			if (bParam3 == 1)
			{
				func_523(821118338, iParam1);
			}
			else if (func_525(39))
			{
				func_523(846829260, iParam1);
			}
			else
			{
				func_523(-1212247553, iParam1);
			}
			break;
		case 43:
			if (bParam3 == 1)
			{
				if (func_353((*Global_1835011)[33]->f_1) == 1)
				{
					func_523(1422779093, iParam1);
				}
				else
				{
					func_523(-1769536986, iParam1);
				}
			}
			else
			{
				func_523(-600786233, iParam1);
			}
			break;
		case 45:
			if (bParam3 == 1)
			{
				func_523(352134789, iParam1);
			}
			else if (func_525(43))
			{
				func_523(260723113, iParam1);
			}
			else
			{
				func_523(1080243038, iParam1);
			}
			break;
		case 41:
			if (bParam3 == 1)
			{
				func_523(-457958799, iParam1);
			}
			else
			{
				func_523(2076458086, iParam1);
			}
			break;
		case 42:
			if (func_525(41))
			{
				func_523(-546824600, iParam1);
			}
			else
			{
				func_523(-308364587, iParam1);
			}
			break;
		case 49:
			if (bParam3 == 1)
			{
				func_523(1297261593, iParam1);
			}
			else
			{
				func_523(1940089142, iParam1);
			}
			break;
		case 50:
			if (bParam3 == 1)
			{
				func_523(2068484886, iParam1);
			}
			else if (func_525(49))
			{
				func_523(-1489080639, iParam1);
				func_523(-2102244050, iParam1);
			}
			else
			{
				func_523(-1863040467, iParam1);
			}
			break;
		case 51:
			func_523(-2055943209, iParam1);
			break;
		case 58:
			if (func_319((*Global_1347702)[23]->f_15, 1))
			{
				func_523(1650066845, iParam1);
			}
			else
			{
				func_523(151370023, iParam1);
			}
			func_523(1426057961, iParam1);
			func_523(476379584, iParam1);
			break;
		case 59:
			func_523(-1638117866, iParam1);
			break;
		case 62:
			func_523(199541730, iParam1);
			break;
		case 63:
			func_523(1703485804, iParam1);
			func_523(-800449045, iParam1);
			break;
		case 65:
			func_523(-1678210868, iParam1);
			func_523(-1448238026, iParam1);
			func_523(-1200864845, iParam1);
			func_523(1473511536, iParam1);
			break;
		case 66:
			func_523(-1774490051, iParam1);
			func_523(-34645921, iParam1);
			func_523(174027075, iParam1);
			func_523(-1155999, iParam1);
			func_524(1);
			break;
		case 67:
			func_523(701612593, iParam1);
			func_523(-1069631343, iParam1);
			func_523(1673428882, iParam1);
			break;
		case 68:
			func_523(-739133286, iParam1);
			func_523(-2130089358, iParam1);
			func_523(2056190391, iParam1);
			func_523(1941753817, iParam1);
			func_524(0);
			break;
		case 70:
			func_523(-1217555753, iParam1);
			break;
		case 71:
			func_523(697048821, iParam1);
			break;
		case 73:
			func_523(-553148661, iParam1);
			break;
		case 75:
			func_523(1349250531, iParam1);
			break;
		case 77:
			if (bParam3 == 1)
			{
				func_523(1414263863, iParam1);
			}
			else
			{
				func_523(-1772294468, iParam1);
			}
			break;
		case 79:
			if (bParam3 == 1)
			{
				func_523(1835465936, iParam1);
				func_523(523715611, iParam1);
			}
			else if (func_525(78))
			{
				func_523(1420338873, iParam1);
			}
			else
			{
				func_523(-46362051, iParam1);
			}
			break;
		case 80:
			if (bParam3 == 1)
			{
				func_523(10180941, iParam1);
			}
			else if (func_525(79))
			{
				func_523(768420635, iParam1);
			}
			else
			{
				func_523(-1734012650, iParam1);
			}
			break;
		case 85:
			if (bParam3 == 1)
			{
				func_523(-383601523, iParam1);
			}
			else
			{
				func_523(1004812390, iParam1);
			}
			break;
		case 86:
			if (bParam3 == 1)
			{
				func_523(1606472408, iParam1);
			}
			else
			{
				func_523(1405690220, iParam1);
			}
			break;
		case 87:
			if (bParam3 == 1)
			{
				func_523(-203571927, iParam1);
			}
			else
			{
				func_523(640033630, iParam1);
			}
			break;
		case 88:
			if (bParam3 == 1)
			{
				func_523(729886222, iParam1);
			}
			else
			{
				func_523(-158717807, iParam1);
			}
			break;
		case 89:
			if (bParam3 == 1)
			{
				func_523(-714816362, iParam1);
			}
			else
			{
				func_523(1160146336, iParam1);
			}
			break;
		case 92:
			if (bParam3 == 1)
			{
				func_523(-932932179, iParam1);
				func_523(-1458537240, iParam1);
			}
			else
			{
				func_523(-1764383885, iParam1);
				func_523(894349517, iParam1);
			}
			break;
		case 93:
			if (bParam3 == 1)
			{
				func_523(1741466706, iParam1);
			}
			else
			{
				func_523(1405815775, iParam1);
			}
			break;
		case 94:
			func_523(1163067702, iParam1);
			if (&Global_1357515 == -1)
			{
				func_523(1905280979, iParam1);
			}
			else
			{
				func_523(-1966245299, iParam1);
			}
			func_523(721468880, iParam1);
			break;
		case 99:
			func_523(800644248, iParam1);
			break;
		case 101:
			if (bParam3 == 1)
			{
				func_523(1502176860, iParam1);
				if (&Global_1357515 == -1)
				{
					func_523(-1117781095, iParam1);
				}
				else
				{
					func_523(-618709225, iParam1);
				}
			}
			else if (&Global_1357515 == -1)
			{
				func_523(141494548, iParam1);
			}
			else
			{
				func_523(-633957459, iParam1);
			}
			break;
		case 102:
			if (bParam3 == 1)
			{
				func_523(-369525697, iParam1);
			}
			else if (func_525(101))
			{
				func_523(1595015219, iParam1);
			}
			else
			{
				func_523(-321486961, iParam1);
			}
			break;
		case 103:
			func_523(1422724221, iParam1);
			break;
		case 104:
			if (bParam3 == 1)
			{
				func_523(793460477, iParam1);
				func_523(-1610242176, iParam1);
			}
			else if (func_525(103))
			{
				func_523(1830897187, iParam1);
			}
			else
			{
				func_523(1419017828, iParam1);
			}
			break;
		case 105:
			if (bParam3 == 1)
			{
				func_523(1528309077, iParam1);
			}
			else if (func_525(104))
			{
				func_523(1864966105, iParam1);
			}
			else
			{
				func_523(-103336013, iParam1);
			}
			break;
		case 108:
			func_523(1175579551, iParam1);
			break;
		case 109:
			if (bParam3 == 1)
			{
				func_523(-1123227713, iParam1);
				func_523(-889574341, iParam1);
			}
			else
			{
				func_523(2065385917, iParam1);
				func_523(780305039, iParam1);
			}
			break;
		case 110:
			if (bParam3 == 1)
			{
				func_523(-887421691, iParam1);
			}
			else if (func_525(109))
			{
				func_523(-1318117949, iParam1);
			}
			else
			{
				func_523(1632244327, iParam1);
			}
			break;
		case 111:
			if (bParam3 == 1)
			{
				if (&Global_1357515 == 0)
				{
					func_523(284822762, iParam1);
				}
				else
				{
					func_523(-1425017554, iParam1);
				}
			}
			else if (func_525(110))
			{
				if (&Global_1357515 == 0)
				{
					func_523(553087292, iParam1);
				}
				else
				{
					func_523(-1766870331, iParam1);
					func_523(1971788022, iParam1);
				}
			}
			else if (&Global_1357515 == 0)
			{
				func_523(-1980598735, iParam1);
			}
			else
			{
				func_523(-442732098, iParam1);
				func_523(1955756409, iParam1);
			}
			break;
		case 115:
			func_523(394303528, iParam1);
			func_523(-2040171028, iParam1);
			break;
		case 143:
			if (bParam3 == 1)
			{
				func_523(1182403394, iParam1);
			}
			else
			{
				func_523(-2116547899, iParam1);
			}
			break;
		case 144:
			if (bParam3 == 1)
			{
				func_523(924445424, iParam1);
			}
			else
			{
				func_523(1227062271, iParam1);
			}
			break;
		case 117:
			if (bParam3 == 1)
			{
				func_523(430755273, iParam1);
				func_523(-1473879802, iParam1);
			}
			else
			{
				func_523(1121266049, iParam1);
			}
			break;
		case 118:
			if (bParam3 == 1)
			{
				func_523(73885747, iParam1);
			}
			else if (func_525(117))
			{
				func_523(1559707913, iParam1);
			}
			else
			{
				func_523(926897873, iParam1);
			}
			break;
		case 119:
			if (bParam3 == 1)
			{
				func_523(-2103887972, iParam1);
			}
			else if (func_525(118))
			{
				func_523(-435828462, iParam1);
			}
			else
			{
				func_523(-516020583, iParam1);
			}
			break;
		case 121:
			if (bParam3 == 1)
			{
				func_523(2054486196, iParam1);
			}
			else
			{
				func_523(1809320262, iParam1);
			}
			break;
		case 122:
			if (bParam3 == 1)
			{
				func_523(-570086056, iParam1);
			}
			else if (func_525(121))
			{
				func_523(32337856, iParam1);
			}
			else
			{
				func_523(-206811842, iParam1);
			}
			break;
		case 124:
			if (bParam3 == 1)
			{
				func_523(813493663, iParam1);
			}
			else if (func_525(122))
			{
				func_523(-2132763590, iParam1);
			}
			else
			{
				func_523(477901035, iParam1);
			}
			break;
		case 125:
			if (bParam3 == 1)
			{
				func_523(-66240572, iParam1);
				func_523(1563075046, iParam1);
			}
			else
			{
				func_523(-787011772, iParam1);
				func_523(-1523377438, iParam1);
			}
			break;
		case 127:
			func_523(61020800, iParam1);
			break;
		case 129:
			func_523(428985222, iParam1);
			break;
		case 131:
			func_523(-1393851036, iParam1);
			break;
		case 133:
			func_523(1559531342, iParam1);
			break;
		case 134:
			func_523(-718846442, iParam1);
			break;
		case 135:
			if (bParam3 == 1)
			{
				if (&Global_1357515 == -1)
				{
					func_523(-1374407408, iParam1);
				}
				else
				{
					func_523(471210931, iParam1);
				}
			}
			else if ((_journal_can_write_entry(1732474719) && _journal_can_write_entry(801682048)) && _journal_can_write_entry(-1986404392))
			{
				if (&Global_1357515 == -1)
				{
					func_523(-472672138, iParam1);
				}
				else
				{
					func_523(-2132098614, iParam1);
				}
			}
			else if (&Global_1357515 == -1)
			{
				func_523(-1678710489, iParam1);
			}
			else
			{
				func_523(1522210661, iParam1);
			}
			break;
		case 136:
			if (bParam3 == 1)
			{
				func_523(1717582460, iParam1);
			}
			else
			{
				func_523(343644664, iParam1);
			}
			break;
		case 137:
			if (bParam3 == 1)
			{
				func_523(1568112362, iParam1);
				func_523(1388317526, iParam1);
			}
			else if (func_525(136))
			{
				func_523(-1597534828, iParam1);
				func_523(-1207918353, iParam1);
			}
			else
			{
				func_523(-1940891082, iParam1);
				func_523(-598277294, iParam1);
			}
			break;
		case 142:
			if (bParam2 == 1)
			{
				func_523(448334530, iParam1);
				func_523(2145375502, iParam1);
			}
			else
			{
				func_523(-1891994685, iParam1);
			}
			break;
		case 146:
			if (bParam3 == 1)
			{
				if (&Global_1357515 == 1)
				{
					func_523(1159121660, iParam1);
				}
				else if (&Global_1357515 == 0)
				{
					func_523(-1968554187, iParam1);
				}
			}
			else if (&Global_1357515 == 1)
			{
				func_523(841927377, iParam1);
			}
			else if (&Global_1357515 == 0)
			{
				func_523(848633571, iParam1);
			}
			break;
		case 147:
			if (bParam3 == 1)
			{
				func_523(-66616327, iParam1);
			}
			else
			{
				func_523(1978361607, iParam1);
			}
			break;
		case 148:
			if (bParam3 == 1)
			{
				func_523(1862916706, iParam1);
			}
			else if (func_525(147))
			{
				func_523(675105199, iParam1);
			}
			else
			{
				func_523(-1993800776, iParam1);
			}
			break;
		case 149:
			if (bParam3 == 1)
			{
				func_523(174409701, iParam1);
			}
			else if (func_525(148))
			{
				func_523(-1730895475, iParam1);
			}
			else
			{
				func_523(-342396910, iParam1);
			}
			break;
		case 150:
			if (bParam3 == 1)
			{
				func_523(1295237052, iParam1);
			}
			else if (func_525(149))
			{
				func_523(-788577684, iParam1);
			}
			else
			{
				func_523(1527015024, iParam1);
			}
			break;
		default:
			break;
	}
}

int func_298(int iParam0, var uParam1, int iParam2)
{
	*uParam1 = 1137976064;
	*iParam2 = -1;
	iVar0 = func_188(iParam0);
	switch (iVar0)
	{
		case 1:
			iVar1 = func_472(iParam0);
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
					if (func_353((*Global_1835011)[9]->f_1) == 0)
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
			iVar2 = func_264(iParam0);
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
			iVar3 = func_264(iParam0);
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

int func_299(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
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
	iVar2 = func_528(iParam0);
	iVar3 = func_529(iParam0);
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
				iVar1 = func_277();
				func_326(&iVar1, 0, 0, iParam3, 0, 0, 0, 0);
			}
			else
			{
				iVar1 = -15;
			}
			Global_40.f_4283.f_6[iVar0]->f_1 = iVar1;
			Global_40.f_4283.f_6[iVar0]->f_4 = iVar2;
			func_530(iParam0, 1);
			if (func_531(iVar2))
			{
				iVar4 = 0;
				while (iVar4 < 60)
				{
					if (Global_40.f_4283.f_6[iVar4]->f_4 == iVar2 && &Global_40.f_4283.f_6[iVar4] != iParam0)
					{
						func_532(Global_40.f_4283.f_6[iVar4], 1, 0);
					}
					iVar4++;
				}
			}
			if (bParam5)
			{
				if (bParam6)
				{
					func_533(1, iParam0);
				}
				else
				{
					func_534(1, iParam0);
				}
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_300(int iParam0, int iParam1)
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

int func_301(int iParam0, int iParam1, int iParam2)
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

void func_302(bool bParam0)
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

void func_303(int iParam0, int iParam1, bool bParam2)
{
	iVar0 = iParam0 * 1000;
	if ((iVar0 + get_game_timer()) > Global_1327479->f_4)
	{
		func_535(iParam0, iParam1, bParam2);
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

int func_304(int iParam0, int iParam1)
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

bool func_305(int iParam0)
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

void func_306(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, bool bParam5, float fParam6, bool bParam7)
{
	if (func_20() != -1)
	{
		return;
	}
	if ((Global_36616 && func_536(iParam1)) != 0)
	{
		return;
	}
	iVar0 = func_537(iParam0);
	iVar0 = round((IntToFloat(iVar0) * fParam6));
	if ((((((iParam1 != 1142025875 && iParam1 != 1587891565) && iParam1 != -643014279) && iParam1 != -597116214) && iParam1 != 551416228) && iParam1 != -735200598) && iParam1 != -2010847721)
	{
		func_538(iVar0, 0, iParam0, iParam1, sParam3, iParam4, bParam5, bParam7);
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
			func_539(iVar1, iVar0, iParam0, iParam1, iParam4, bParam5);
		}
		else
		{
			func_538(iVar0, 1, iParam0, iParam1, sParam3, iParam4, bParam5, 0);
		}
	}
}

int func_307(int iParam0)
{
	if (!func_183(iParam0))
	{
		return -1;
	}
	return func_540(func_447(iParam0));
}

int func_308(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return 120;
	}
	return 60;
}

void func_309()
{
	_sc_feed_submit_preset_message(2, 1);
	if (is_orbis_version())
	{
		iVar0 = func_541(13);
		(*Global_1898441)[iVar0] = 13;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_WIN2_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_WIN2_COM", 24);
	}
}

bool func_310(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
{
	if (!func_542(iParam0, 0))
	{
		return false;
	}
	if (!func_543(iParam0, iParam1, bParam2, iParam5))
	{
		return false;
	}
	if (!func_544(iParam0, &iVar0, iParam1))
	{
		return false;
	}
	func_545(iParam0, bParam2);
	iVar2 = 0;
	if (func_546(iParam0, 0, 0) == 0)
	{
		if (func_547(iParam0))
		{
			iVar5 = func_548(iParam0);
			iVar6 = func_549(iVar5);
			iVar7 = func_550(iVar6) + 1;
			func_551(iVar5);
			if (func_552(38))
			{
				func_317(483, 0);
			}
			else
			{
				func_317(482, 0);
			}
			if (iVar7 == func_553(iVar6))
			{
				func_310(func_554(iVar6), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				if (func_385() && func_555(4))
				{
					if (func_385() && (func_556(38) || func_552(38)))
					{
						func_558(38, func_554(iVar6), 0, 0, func_557(), 0, -1, 0);
						func_559(2);
					}
					else
					{
						func_558(38, func_554(iVar6), 0, 0, func_557(), 0, -1, 0);
						func_559(1);
					}
				}
			}
			else if (func_385() && func_555(4))
			{
				if (func_385() && (func_556(38) || func_552(38)))
				{
					func_558(38, 0, 0, 0, func_557(), 0, -1, 0);
					func_559(2);
				}
				else
				{
					func_558(38, 0, 0, 0, func_557(), 0, -1, 0);
					func_559(1);
				}
			}
			if (func_385() && func_555(4))
			{
				if (!Global_1914319->f_17376)
				{
					if (func_385() && (func_556(38) || func_552(38)))
					{
						func_560(38, _0x13aaecda43318bfe(-2076669067, iVar6), _0xd52d20b0c76bb26d(-2076669067, iVar6), iVar7, 12, 0, iVar6);
					}
					else
					{
						func_560(38, get_hash_key("toast_log_blips"), get_hash_key("BLIP_RC_COLLECTABLE_CIGCARD"), iVar7, 12, 0, iVar6);
					}
				}
			}
		}
	}
	if (func_561(iParam0) == -1037537535)
	{
		if ((!func_562(iParam0, 866047851) && !func_562(iParam0, -1979000645)) && !func_562(iParam0, 1248798204))
		{
			bVar3 = true;
		}
	}
	if (func_563(iParam0, 8388608) && !func_564(28))
	{
		func_565(28);
	}
	if (!bVar3)
	{
		if (func_562(iParam0, -1588156645))
		{
			bParam2 = true;
			bVar4 = true;
			if (func_566(iParam0) == -1447088266)
			{
				iVar1 = func_568(func_567(iParam0, 1), 0);
				if (is_weapon_valid(iVar1))
				{
					if (func_20() == -1)
					{
						func_569(iVar1);
					}
					if (func_570(0) && func_571(iVar1, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_572(iParam0, iVar0, iParam5);
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
						func_569(iParam0);
					}
					if (func_570(0) && func_571(iParam0, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_572(iVar1, iVar0, iParam5);
						if (!bParam9)
						{
							bParam2 = false;
						}
					}
				}
			}
		}
		else if (func_561(iParam0) == -427144552)
		{
			if (!func_573(iParam0, iParam5, &bParam2, bParam3, bParam4))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_561(iParam0) == 307971639 && func_574(iParam0))
		{
			if (!func_575(iParam0, &iVar0, iParam5))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_562(iParam0, 866047851))
		{
			func_576(iParam0);
		}
		else if (func_562(iParam0, 2000026003))
		{
			func_577(iParam0);
		}
		else if (func_562(iParam0, -103750053))
		{
			func_95(func_578(-1019857971), iVar0);
		}
		else if (iParam0 == 2093098109)
		{
			func_95(func_579(-717883113, 2091222383), iVar0);
		}
		else if (func_562(iParam0, -121341956) && !func_562(iParam0, 606799272))
		{
			if (iParam0 != 191707516 && iParam0 != 1993672959)
			{
				if (func_319((*Global_1835011)[4]->f_1, 1))
				{
					func_317(498, 0);
				}
			}
			if (func_562(iParam0, -2017733358) || func_562(iParam0, -1369131378))
			{
				func_580(iParam0);
			}
		}
		else if (func_562(iParam0, -136654233))
		{
			if (func_562(iParam0, -1021472396))
			{
			}
		}
		else if (func_562(iParam0, -1466706512) && func_562(iParam0, 1147021565))
		{
			func_317(484, 0);
		}
		else if (func_562(iParam0, 1147021565) && func_562(iParam0, -524514947))
		{
		}
		else if (func_562(iParam0, 554195525))
		{
		}
		else if (func_562(iParam0, 589988438))
		{
			if (func_581())
			{
				func_582(1339418451, 0, 1065353216, 1, 0, 0, 0, -1);
				bParam2 = true;
				bVar4 = true;
			}
		}
		else if (func_562(iParam0, 787083290) && func_562(iParam0, 949916894))
		{
			func_583(iParam0);
		}
		else if (func_562(iParam0, -1718133314))
		{
			func_584(iParam0);
		}
		else if (func_562(iParam0, -1738650224))
		{
			func_585(iParam0);
		}
		else if (func_562(iParam0, -1112814642) && func_562(iParam0, 949916894))
		{
			func_586(iParam0);
		}
		else if (iParam0 == -569063887)
		{
			Global_1935496->f_20 = 0;
		}
		else if (func_562(iParam0, 1841149704))
		{
			func_587();
		}
		else if (func_562(iParam0, 606799272))
		{
			func_588(iParam0, iParam1);
			func_589(iParam0);
		}
		else if (func_562(iParam0, -1112814642) && func_562(iParam0, -1697809989))
		{
			func_590(iParam0, 0, 0, 0);
		}
		else if (func_562(iParam0, -2017733358) || func_562(iParam0, -1369131378))
		{
			func_580(iParam0);
		}
		else if (func_562(iParam0, -1921346699))
		{
			if (func_20() != -1)
			{
				return false;
			}
			func_591(iParam0, iParam5, iParam8);
			bParam2 = true;
		}
		else if (func_562(iParam0, 1192444843))
		{
			switch (iParam0)
			{
				case 1815744868:
					if (!func_339(215778062, 1, 0))
					{
						func_310(215778062, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 1334018438:
					if (!func_339(670273567, 1, 0))
					{
						func_310(670273567, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 1055480217:
					if (!func_339(-967317137, 1, 0))
					{
						func_310(-967317137, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case -978159653:
					if (!func_339(526074061, 1, 0))
					{
						func_310(526074061, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 2100131425:
					if (!func_339(-1045488665, 1, 0))
					{
						func_310(-1045488665, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case -2041382104:
					if (!func_339(471514780, 1, 0))
					{
						func_310(471514780, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
			}
		}
		else if (func_562(iParam0, -839724752) && func_563(iParam0, 4))
		{
			if (!func_552(42))
			{
				func_592(iParam0);
			}
		}
		else if (func_562(iParam0, 1399091007))
		{
			func_593(iParam0, &iVar2);
			bParam2 = true;
			bVar4 = true;
		}
		else if (func_562(iParam0, 1248798204))
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
				func_310(iVar8, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_565(24);
				if (&Global_1946804->f_1497.f_1[27] == &Global_1946804->f_57[27])
				{
					func_594(player_ped_id(), -1185145312, 0, 99217379, 1, 1, 1, 0, 1, 0);
				}
				if (func_595(&iVar9, 0))
				{
					func_571(iVar9, 0, 0, bParam4, 3, 0, 752097756, 0);
				}
				break;
			case 1171350303:
				if (func_20() == -1 && &Global_1946804->f_1497.f_1[25] == &Global_1946804->f_57[25])
				{
					func_594(player_ped_id(), 1171350303, 0, 673166414, 1, 1, 1, 0, 1, 0);
				}
				break;
			case -160924582:
				break;
			case 2131771850:
				func_317(415, 0);
				Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
				func_596();
				Global_40.f_11095.f_61 = (Global_40.f_11095.f_61 + 0.1f);
				func_597();
				Global_40.f_11095.f_55 = (Global_40.f_11095.f_55 + 0.1f);
				Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
				Global_40.f_11095.f_56 = (Global_40.f_11095.f_56 + 0.1f);
				Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
				func_598();
				Global_40.f_11095.f_63 = (Global_40.f_11095.f_63 + 0.1f);
				func_599();
				Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
				Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
				Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
				func_600();
				break;
			case -102111672:
				bParam2 = true;
				bVar4 = true;
				break;
			case -1937935584:
				func_601(499813453, 854119837, 0);
				func_602(499813453, 0);
				func_603(1);
				break;
			case 2127812557:
				func_601(499813453, -1292544588, 0);
				func_602(499813453, 0);
				func_603(2);
				break;
			case 808991383:
				func_601(499813453, -1003325394, 0);
				func_602(499813453, 0);
				func_603(4);
				break;
			case 1134518629:
				func_601(666607663, -335460405, 0);
				func_602(666607663, 0);
				func_604(1);
				break;
			case 902940106:
				func_601(666607663, 903797617, 0);
				func_602(666607663, 0);
				func_604(2);
				break;
			case -418174898:
				func_601(666607663, 669728650, 0);
				func_602(666607663, 0);
				func_604(4);
				break;
			case -648114971:
				func_601(-220219788, 1214120047, 0);
				func_602(-220219788, 0);
				func_605(1);
				break;
			case 211153747:
				func_601(-220219788, 655769340, 0);
				func_602(-220219788, 0);
				func_605(2);
				break;
			case -32876996:
				func_601(-220219788, 885316185, 0);
				func_602(-220219788, 0);
				func_605(4);
				break;
			case 1191437462:
				func_601(218622660, -1491419385, 0);
				func_602(218622660, 0);
				func_606(1);
				break;
			case 1119149048:
				func_601(218622660, 1809565830, 0);
				func_602(218622660, 0);
				func_606(2);
				break;
			case 506073827:
				func_601(390004462, -628873767, 0);
				func_602(390004462, 0);
				func_607(1);
				break;
			case -1876986168:
				func_601(390004462, -405421956, 0);
				func_602(390004462, 0);
				func_607(2);
				break;
			case 2142623221:
				func_601(390004462, -1108972386, 0);
				func_602(390004462, 0);
				func_607(4);
				break;
			case 1508215381:
				func_601(6410548, 1053716392, 0);
				func_602(6410548, 0);
				func_608(1);
				break;
			case -888935280:
				func_601(6410548, 806507056, 0);
				func_602(6410548, 0);
				func_608(2);
				break;
			case -1252474566:
				func_601(6410548, 1571925350, 0);
				func_602(6410548, 0);
				func_608(4);
				break;
			case -1465702449:
				func_601(6410548, 1330352282, 0);
				func_602(6410548, 0);
				func_608(8);
				break;
			case -21093309:
				func_610(242, func_609(-21093309), 0);
				break;
			case 204375141:
				func_610(240, func_609(204375141), 0);
				break;
			case -417963070:
				func_610(241, func_609(-417963070), 0);
				break;
			case -1080874779:
			case -755485480:
			case 230530039:
			case 299161628:
				if (get_game_timer() >= (Global_1935689->f_10197 + 60000))
				{
					func_611(594, 1934060482, 1, 1);
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
					func_611(594, 1110018439, 1, 1);
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
					func_611(594, 1408511260, 1, 1);
					Global_1935689->f_10197 = get_game_timer();
				}
				break;
			case -1976480343:
			case -953313786:
			case 730856618:
				if (get_game_timer() >= (Global_1935689->f_10197 + 60000))
				{
					func_611(594, -1228016946, 1, 1);
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
					func_611(595, -103579, 1, 1);
					Global_1935689->f_10197 = get_game_timer();
				}
				break;
			case -1977068039:
			case -399865011:
				if (get_game_timer() >= (Global_1935689->f_10197 + 60000))
				{
					func_611(595, -1531530025, 1, 1);
					Global_1935689->f_10197 = get_game_timer();
				}
				break;
			case 80178851:
				func_317(488, 0);
				break;
			case 1613651027:
				func_317(491, 0);
				break;
			case -885810591:
				func_317(485, 0);
				if ((get_random_int_in_range(0, 65536) % 3) == 0)
				{
					func_310(func_612(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				else
				{
					func_310(func_613(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				break;
			case -601932535:
				if (func_564(1))
				{
					func_317(487, 0);
				}
				break;
			case -898386032:
				func_317(486, 0);
				break;
			case -2035110427:
				if (func_20() == -1)
				{
					iParam0 = -1448210800;
				}
				break;
			case 1510719693:
				func_317(496, 0);
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
		func_614(&iVar10);
		if (!func_615(iVar10, iVar0, iParam5))
		{
			return false;
		}
		else if (!func_570(0))
		{
			return true;
		}
		if (func_561(iParam0) == -1037537535)
		{
			func_616(iParam0);
		}
		if (func_562(iParam0, -1979000645))
		{
			func_617(iParam0);
		}
	}
	else if (iVar2 != 0)
	{
		if (func_570(0))
		{
			Var11.f_1 = 10;
			Var11.f_12 = 10;
			_0x48e4d50f87a96aa5(Global_35, 0, 0, iVar2, &Var11, 0);
			iVar34 = 0;
			while (iVar34 < Var11)
			{
				func_310(&(Var11.f_1[iVar34]), &(Var11.f_12[iVar34]), 0, 0, 0, -897553835, 0, 0, 0, 0);
				iVar34++;
			}
		}
		else
		{
			func_618(iVar2, 0);
		}
	}
	Var35 = { func_619(iParam0) };
	if (_stat_id_is_valid(&Var35))
	{
		_0x6a0184e904cdf25e(&Var35, iVar0);
	}
	func_620(iParam0);
	if (fParam6 > 0f)
	{
		if (func_562(iParam0, -839724752))
		{
			func_621(iParam0, fParam6);
		}
	}
	else if (!bParam2)
	{
		bVar37 = iParam5 == 1248274121;
		func_622(iParam0, iVar0, 0, bVar37, 0);
	}
	return true;
}

void func_311(int iParam0)
{
	if (func_562(iParam0, 1989861793))
	{
		iVar0 = func_623(iParam0, 1697966752);
		if (iVar0 != 0)
		{
			Var3 = { func_624(-1591664384, -1591664384, 0, 0, 0, 0, -1, iVar0, 0) };
			if (func_625(Var3, &iVar1, &iVar2, 0))
			{
				bVar13 = false;
				iVar14 = 0;
				while (iVar14 < iVar2)
				{
					iVar15 = func_626(iVar14, iVar1);
					if (iVar15 != iParam0 && func_542(iVar15, 0))
					{
						if (func_627(iVar15, 0, 0, 1, 0))
						{
							bVar13 = true;
						}
					}
					iVar14++;
				}
				func_628(iVar1);
				if (bVar13)
				{
					func_629(iParam0);
				}
				else
				{
					func_317(306, 0);
				}
			}
		}
	}
}

void func_312()
{
	if (func_20() != -1)
	{
		return;
	}
	func_630();
	func_631();
	func_632();
	func_633();
	func_634();
	func_635();
	func_636();
}

void func_313(int iParam0)
{
	func_637(iParam0, 1, 1, -142743235, 1);
	if (func_638(iParam0))
	{
		func_639(iParam0, 1, 1);
	}
	bVar3 = false;
	bVar7 = false;
	iVar8 = func_641(func_640(iParam0), 1);
	if (iVar8 >= 39)
	{
		bVar7 = true;
	}
	func_642(-2124052603);
	iVar1 = 0;
	while (iVar1 < 39)
	{
		vVar4.x = &Global_1946804->f_57[iVar1];
		*Global_1946804->f_1616.f_1[iVar1] = { vVar4 };
		Global_1946804->f_1616.f_1[iVar1]->f_2 = (Global_1946804->f_1497.f_1[iVar1]->f_2 || Global_1946804->f_1378.f_1[iVar1]->f_2);
		iVar1++;
	}
	if (func_643() == -2125499975)
	{
		iVar2 = 2020890174;
	}
	else
	{
		iVar2 = 1105329772;
	}
	func_644(&(Global_1946804->f_1616), iVar2, &uVar9, 1, 0, 0, 0);
	func_644(&(Global_1946804->f_1616), 211609491, &uVar9, 1, 0, 0, 0);
	*Global_1946804->f_1616.f_1[8] = { func_645(8, 0) };
	*Global_1946804->f_1616.f_1[9] = { func_645(9, 0) };
	*Global_1946804->f_1616.f_1[0] = { func_645(0, 0) };
	*Global_1946804->f_1616.f_1[2] = { func_645(2, 0) };
	*Global_1946804->f_1616.f_1[3] = { func_645(3, 0) };
	*Global_1946804->f_1616.f_1[1] = { func_645(1, 0) };
	*Global_1946804->f_1616.f_1[5] = { func_645(5, 0) };
	*Global_1946804->f_1616.f_1[6] = { func_645(6, 0) };
	*Global_1946804->f_1616.f_1[7] = { func_645(7, 0) };
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (bVar7)
		{
			iVar8 = 0;
			while (iVar8 < 39)
			{
				if (iParam0 == func_646(iVar8, iVar0))
				{
					func_647(Global_1946804->f_1616.f_1[iVar8], iVar8, iVar0);
				}
				else
				{
					iVar8++;
				}
			}
		}
		else if (iParam0 == func_646(iVar8, iVar0))
		{
			func_647(Global_1946804->f_1616.f_1[iVar8], iVar8, iVar0);
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

void func_314()
{
	iVar5 = 16;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		iVar1 = func_646(iVar5, iVar0);
		if (iVar1 == &Global_1946804->f_57[iVar5] || iVar1 == 0)
		{
			if (func_643() == -2125499975 || func_643() == -449205311)
			{
				vVar2.x = -2018863109;
				vVar2.f_1 = 1530758430;
				func_647(&vVar2, iVar5, iVar0);
			}
			else
			{
				vVar2.x = 1734931872;
				vVar2.f_1 = 1155669136;
				func_647(&vVar2, iVar5, iVar0);
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

void func_315()
{
	_sc_feed_submit_preset_message(2, 2);
	if (is_orbis_version())
	{
		iVar0 = func_541(14);
		(*Global_1898441)[iVar0] = 14;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_MUD1_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_MUD1_COM", 24);
	}
}

char* func_316(int iParam0, bool bParam1)
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
			if ((func_319((*Global_1835011)[59]->f_1, 1) || func_319((*Global_1347702)[1]->f_15, 1)) || func_184((*Global_1347702)[1]->f_15))
			{
				return "COMP_RUFUS";
			}
			else if (func_518(403634348, 1))
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

void func_317(int iParam0, bool bParam1)
{
	func_648(iParam0, &iVar0, &iVar1);
	if (!func_649(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_650(iVar0, iVar1);
}

void func_318(int iParam0, bool bParam1, bool bParam2)
{
	iVar0 = func_641(iParam0, 1);
	func_651(Global_1946804->f_1497.f_1[iVar0], 2, 6);
	func_651(Global_1946804->f_1378.f_1[iVar0], 2, 6);
	if (bParam1)
	{
		Global_1946804->f_1497.f_1[iVar0] = &Global_1946804->f_57[iVar0];
		Global_1946804->f_1497.f_1[iVar0]->f_1 = 0;
		*Global_1946804->f_1378.f_1[iVar0] = { *Global_1946804->f_1497.f_1[iVar0] };
		if (bParam2)
		{
			func_652(17, iParam0, 0, 0, 0);
		}
	}
	if (func_20() == -1)
	{
		iVar1 = 0;
		while (iVar1 < 5)
		{
			func_651(Global_26796.f_26[iVar1]->f_1.f_1[iVar0], 2, 6);
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
			func_651(Global_36638.f_45.f_350.f_26[iVar1]->f_1.f_1[iVar0], 2, 6);
			if (bParam1)
			{
				Global_36638.f_45.f_350.f_26[iVar1]->f_1.f_1[iVar0] = &Global_1946804->f_57[iVar0];
				Global_36638.f_45.f_350.f_26[iVar1]->f_1.f_1[iVar0]->f_1 = 0;
			}
			iVar1++;
		}
	}
}

bool func_319(int iParam0, bool bParam1)
{
	switch (func_288(iParam0))
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

void func_320()
{
	_sc_feed_submit_preset_message(2, 5);
	if (is_orbis_version())
	{
		iVar0 = func_541(17);
		(*Global_1898441)[iVar0] = 17;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_BRA2_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_BRA2_COM", 24);
	}
}

void func_321()
{
	_sc_feed_submit_preset_message(2, 6);
	if (is_orbis_version())
	{
		iVar0 = func_541(18);
		(*Global_1898441)[iVar0] = 18;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_BRA3_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_BRA3_COM", 24);
	}
}

int func_322(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (iParam3 == -358215195)
	{
		Var0 = { func_653(iParam1, 1, 0) };
		iParam3 = func_654(Var0.f_4);
		if (iParam3 == -358215195)
		{
			return 0;
		}
	}
	func_655(iParam3);
	return func_594(iParam0, iParam1, iParam2, iParam3, bParam4, bParam5, 1, 0, 1, 0);
}

bool func_323()
{
	return _unlock_is_unlocked(99890643);
}

void func_324(int iParam0)
{
	if (!func_656(iParam0))
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

bool func_325(int iParam0, int iParam1)
{
	if (!func_657(iParam0))
	{
		return false;
	}
	if ((iParam1 == -1 || iParam1 < 0) || iParam1 > 179)
	{
		iParam1 = func_658(iParam0);
	}
	if (iParam1 == -1)
	{
		return false;
	}
	return func_659(Global_40.f_9910[iParam1], 4);
}

void func_326(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	iVar0 = func_660(*iParam0);
	iVar1 = func_661(*iParam0);
	iVar2 = func_662(*iParam0);
	iVar3 = func_663(*iParam0);
	iVar4 = func_664(*iParam0);
	iVar5 = func_665(*iParam0);
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
	iVar6 = func_666(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_666(iVar1, iVar0);
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
	func_667(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_327(int iParam0, int iParam1, bool bParam2)
{
	if (!func_657(iParam0))
	{
		return;
	}
	if (!func_668(iParam1))
	{
		return;
	}
	if (func_669(iParam1, 1))
	{
		return;
	}
	iVar0 = func_658(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (func_325(iParam0, -1))
	{
		return;
	}
	else
	{
		func_670(Global_40.f_9910[iVar0], 2);
	}
	Global_40.f_9910[iVar0]->f_4 = iParam1;
	if (bParam2)
	{
		if (!func_190(0, 0, 1))
		{
			func_359(0, 17);
		}
	}
}

void func_328()
{
	_sc_feed_submit_preset_message(2, 7);
	if (is_orbis_version())
	{
		iVar0 = func_541(19);
		(*Global_1898441)[iVar0] = 19;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_MOB5_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_MOB5_COM", 24);
	}
}

void func_329()
{
	_sc_feed_submit_preset_message(2, 8);
	if (is_orbis_version())
	{
		iVar0 = func_541(20);
		(*Global_1898441)[iVar0] = 20;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_SAI1_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_SAI1_COM", 24);
	}
}

bool func_330()
{
	return _unlock_is_unlocked(-121456797);
}

void func_331()
{
	_sc_feed_submit_preset_message(2, 9);
	if (is_orbis_version())
	{
		iVar0 = func_541(21);
		(*Global_1898441)[iVar0] = 21;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_GUA1_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_GUA1_COM", 24);
	}
}

void func_332()
{
	_sc_feed_submit_preset_message(2, 10);
	if (is_orbis_version())
	{
		iVar0 = func_541(22);
		(*Global_1898441)[iVar0] = 22;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_GUA3_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_GUA3_COM", 24);
	}
}

void func_333()
{
	_sc_feed_submit_preset_message(2, 12);
	if (is_orbis_version())
	{
		iVar0 = func_541(24);
		(*Global_1898441)[iVar0] = 24;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_ODR5_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_ODR5_COM", 24);
	}
}

void func_334()
{
	_sc_feed_submit_preset_message(2, 13);
	if (is_orbis_version())
	{
		iVar0 = func_541(25);
		(*Global_1898441)[iVar0] = 25;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_FIN1_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_FIN1_COM", 24);
	}
}

void func_335()
{
	_sc_feed_submit_preset_message(2, 14);
	if (is_orbis_version())
	{
		iVar0 = func_541(27);
		(*Global_1898441)[iVar0] = 27;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_MAR51_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_MAR51_COM", 24);
	}
}

void func_336()
{
	_sc_feed_submit_preset_message(2, 15);
	if (is_orbis_version())
	{
		iVar0 = func_541(28);
		(*Global_1898441)[iVar0] = 28;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_ABI21_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_ABI_21_COM", 24);
	}
}

bool func_337(int iParam0)
{
	return _0x9a03f22ad446eeac(iParam0) > 0;
}

bool func_338(int iParam0)
{
	return (Global_40.f_12019.f_4 && iParam0) != 0;
}

bool func_339(int iParam0, int iParam1, bool bParam2)
{
	if (!func_542(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_561(iParam0);
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
		if (!func_671(iParam0, 1))
		{
			return false;
		}
	}
	return func_546(iParam0, 0, bParam2) >= iParam1;
}

void func_340(int iParam0)
{
	if (func_82(32768))
	{
		return;
	}
	if (iParam0 < 0)
	{
		func_672(_create_var_string(2, "MISSION_COMPLETE_BANK_FEED", absi(iParam0)), "itemtype_textures", get_hash_key("ITEMTYPE_BANK_DEBT"), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
		Global_1879514->f_14 = 1;
		Global_1879514->f_15 = 0;
	}
	else
	{
		func_672(_create_var_string(2, "MISSION_COMPLETE_LOAN_FEED", iParam0), "itemtype_textures", get_hash_key("ITEMTYPE_BANK_DEBT"), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Negative", 0, 1);
		Global_1879514->f_14 = 0;
		Global_1879514->f_15 = 1;
	}
}

void func_341()
{
	_sc_feed_submit_preset_message(2, 16);
	if (is_orbis_version())
	{
		iVar0 = func_541(29);
		(*Global_1898441)[iVar0] = 29;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_BEE22_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_BEE22_COM", 24);
	}
}

void func_342()
{
	_sc_feed_submit_preset_message(2, 17);
	if (is_orbis_version())
	{
		iVar0 = func_541(26);
		(*Global_1898441)[iVar0] = 26;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_FIN2_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_FIN2_COM", 24);
	}
}

void func_343()
{
	_sc_feed_submit_preset_message(2, 11);
	if (is_orbis_version())
	{
		iVar0 = func_541(23);
		(*Global_1898441)[iVar0] = 23;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_DOC_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_DOC_COM", 24);
	}
}

void func_344()
{
	_sc_feed_submit_preset_message(2, 3);
	if (is_orbis_version())
	{
		iVar0 = func_541(15);
		(*Global_1898441)[iVar0] = 15;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_DOW3_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_DOW3_COM", 24);
	}
}

void func_345()
{
	_sc_feed_submit_preset_message(2, 4);
	if (is_orbis_version())
	{
		iVar0 = func_541(16);
		(*Global_1898441)[iVar0] = 16;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_DUT1_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_DUT1_COM", 24);
	}
}

void func_346()
{
	if (func_673() > 1)
	{
		func_674();
	}
	else
	{
		if (!_unlock_is_visible(-707360575))
		{
			_unlock_set_visible(-707360575, true);
			func_317(444, 1);
		}
		if (!_unlock_is_visible(-1201174711))
		{
			_unlock_set_visible(-1201174711, true);
			func_317(447, 1);
		}
		if (!_unlock_is_visible(151582343))
		{
			_unlock_set_visible(151582343, true);
			func_317(448, 1);
		}
		if (!_unlock_is_visible(-642492359))
		{
			_unlock_set_visible(-642492359, true);
			func_317(450, 1);
		}
		if (!_unlock_is_visible(5171247))
		{
			_unlock_set_visible(5171247, true);
			func_317(452, 1);
		}
	}
}

bool func_347(int iParam0)
{
	return func_675(iParam0, 4, 1);
}

void func_348(int iParam0)
{
	func_179(iParam0, 4, 1);
}

void func_349(int iParam0)
{
	if (iParam0 < 0)
	{
		iParam0 = 0;
	}
	Global_40.f_4283.f_326 = iParam0;
	Var0 = { func_94(-160912108) };
	stat_id_set_int(&Var0, iParam0, true);
}

void func_350(int iParam0)
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
			func_95(func_579(909007663, -587839005), 1);
			iVar0 = func_264(iParam0);
			func_95(func_94(-634848880), 1);
			switch (func_450(iVar0))
			{
				case 0:
					func_95(func_579(909007663, 1325140787), 1);
					break;
				case 1:
					func_95(func_579(909007663, 2101241783), 1);
					break;
				case 2:
					func_95(func_579(909007663, -1296936294), 1);
					break;
				case 3:
					func_95(func_579(909007663, -798388728), 1);
					break;
				case 4:
					func_95(func_579(909007663, -1787586531), 1);
					break;
				case 5:
					func_95(func_579(909007663, -1002834519), 1);
					break;
				case 6:
					func_95(func_579(909007663, -50600144), 1);
					break;
				case 7:
					func_95(func_579(909007663, -348503123), 1);
					break;
				case 8:
					func_95(func_579(909007663, -528798161), 1);
					break;
				default:
					iVar2 = 0;
					break;
			}
			if (iVar0 == 7)
			{
				func_95(func_579(909007663, -406093146), 1);
			}
			if (iVar2 && _0xe824ce7d13fcb35e(get_hash_key(&((*Global_1835011)[iVar0]->f_8))))
			{
				func_95(func_579(909007663, 532323983), 1);
			}
			break;
		case 8:
			iVar1 = func_264(iParam0);
			if (func_293((*Global_1347702)[iVar1]->f_12, 1))
			{
				func_95(func_94(-634848880), 1);
			}
			if (func_293((*Global_1347702)[iVar1]->f_12, 4) || iVar1 == 59)
			{
				if (func_293((*Global_1347702)[iVar1]->f_12, 1))
				{
					func_95(func_579(909007663, -587839005), 1);
				}
				else
				{
					func_95(func_579(909007663, -2049243343), 1);
				}
			}
			if (func_293((*Global_1347702)[iVar1]->f_12, 1))
			{
				switch (func_451(iVar1))
				{
					case 0:
						func_95(func_579(909007663, 1325140787), 1);
						break;
					case 1:
						func_95(func_579(909007663, 2101241783), 1);
						break;
					case 2:
						func_95(func_579(909007663, -1296936294), 1);
						break;
					case 3:
						func_95(func_579(909007663, -798388728), 1);
						break;
					case 4:
						func_95(func_579(909007663, -1787586531), 1);
						break;
					case 5:
						func_95(func_579(909007663, -1002834519), 1);
						break;
					case 6:
						func_95(func_579(909007663, -50600144), 1);
						break;
					case 7:
						func_95(func_579(909007663, -348503123), 1);
						break;
					case 8:
						func_95(func_579(909007663, -528798161), 1);
						break;
					default:
						iVar2 = 0;
						break;
				}
				if (iVar2 && _0xe824ce7d13fcb35e(get_hash_key(&((*Global_1347702)[iVar1]->f_3))))
				{
					func_95(func_579(909007663, 532323983), 1);
				}
			}
			else if (func_293((*Global_1347702)[iVar1]->f_12, 4))
			{
				if (func_293((*Global_1347702)[iVar1]->f_12, 4194304))
				{
				}
				else if (!func_293((*Global_1347702)[iVar1]->f_12, 512))
				{
					func_95(func_579(909007663, 551192206), 1);
				}
				else
				{
					func_95(func_579(909007663, -406093146), 1);
				}
			}
			break;
	}
}

void func_351()
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
	else if ((func_190(0, 0, 1) || func_676()) || func_129())
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
		if (!_spactionproxy_process_action(uVar4, func_677(&uVar4, &iVar1, &iVar2, &iVar3)))
		{
		}
	else
	{
		}
	}
	if (iVar1 == 1)
	{
		func_678(_create_var_string(2, "SHOP_CATALOGUE_DELIVERY"), _create_var_string(2, "SHOP_CATALOGUE_PURCHASE_RECEIVED_SINGLE", 1), 908516622, -576888982, -2, 0, 0, 0, 0, 1, 1);
	}
	else if (iVar1 > 1)
	{
		func_678(_create_var_string(2, "SHOP_CATALOGUE_DELIVERY"), _create_var_string(2, "SHOP_CATALOGUE_PURCHASE_RECEIVED_PLURAL", iVar1), 908516622, -576888982, -2, 0, 0, 0, 0, 1, 1);
	}
	if (iVar3 > 0)
	{
		func_679(iVar3, 0, 0);
	}
	if (iVar1 > 0)
	{
		func_359(0, -1);
	}
	if (iVar2 > 0)
	{
		func_680("SHOP_CATALOGUE_PURCHASE_FAILED", 10000, 0, 0, 0, 1);
	}
	func_681(1, 0);
	Global_1956575->f_4 = 1;
}

void func_352(int iParam0, int iParam1, bool bParam2, float fParam3, int iParam4, char* sParam5, int iParam6, int iParam7)
{
	if (func_82(32768))
	{
		return;
	}
	func_275(iParam1, bParam2, fParam3, iParam4, sParam5, iParam6, iParam7, 752097756);
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
		func_682(iParam0, iParam1, fParam3, iParam4);
	}
}

int func_353(int iParam0)
{
	if (!func_183(iParam0))
	{
		return -1;
	}
	return func_683(iParam0);
}

int func_354(int iParam0, int iParam1)
{
	if (!func_684(iParam0))
	{
		return 0;
	}
	if (!func_385())
	{
		return 0;
	}
	if (!func_685(iParam0, &iVar0, &iVar1))
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

int func_355(int iParam0, int iParam1, int iParam2, int iParam3)
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
	if (iVar2 >= func_686())
	{
		iVar2 = func_686();
	}
	iVar5 = func_687(iVar3, iVar4, iParam2);
	if (Global_1572887->f_12 == -1)
	{
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			iVar6 = iVar0;
			if (func_447(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_447(iVar6) == 0)
			{
				return func_688(iVar3, iVar4, iParam2, iVar0, iParam3);
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
			if (func_447(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_447(iVar6) == 0)
			{
				return func_688(iVar3, iVar4, iParam2, iVar0, iParam3);
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
				return func_688(iVar3, iVar4, iParam2, iVar0, 0);
			}
			iVar0++;
		}
	}
	return -1;
}

int func_356(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_689(1330954593, 0, -1);
		case 1:
			return func_689(1330954593, 0, -1);
		case 2:
			return func_689(1330954593, 0, -1) * 2;
		case 4:
			return func_689(1330954593, 0, -1);
		case 5:
			return func_689(1330954593, 0, -1);
		case 6:
			return func_689(1330954593, 0, -1) * 2;
		case 12:
			return 75000;
		case 8:
			return func_689(1330954593, 0, -1) * 3;
		case 9:
			return func_689(1330954593, 0, -1) * 3;
		case 10:
			return func_689(1330954593, 0, -1) * 3;
		case 11:
			return func_689(1330954593, 0, -1);
		default:
			break;
	}
	return 0;
}

char[] func_357(int iParam0)
{
	if (!func_183(iParam0))
	{
		return cVar0;
	}
	switch (func_188(iParam0))
	{
		case 1:
			cVar0 = (*Global_1835011)[func_472(iParam0)]->f_8;
			break;
		case 8:
			cVar0 = (*Global_1347702)[func_264(iParam0)]->f_3;
			break;
		case 11:
			if (iParam0 == func_355(0, 10, 11, 2116153146))
			{
				StringCopy(&cVar0, "CABR01", 8);
			}
			break;
	}
	return cVar0;
}

void func_358(char[4] cParam0)
{
	if (!Global_1879514->f_11)
	{
		iVar0 = func_360();
		iVar1 = get_hash_key(&cParam0);
		if (_0x57e798b54c45ee1a(iVar1) != 5 && iVar0 == 5)
		{
			if (func_188(Global_1879514->f_1) == 1)
			{
				func_354(5, 1);
			}
			else if (func_188(Global_1879514->f_1) == 8 && (func_293((*Global_1347702)[func_264(Global_1879514->f_1)]->f_12, 1) || func_293((*Global_1347702)[func_264(Global_1879514->f_1)]->f_12, 33554432)))
			{
				func_354(5, 1);
			}
		}
		_0xe824ce7d13fcb300(get_hash_key(&cParam0), iVar0);
	}
	else
	{
		_0xe824ce7d13fcb300(get_hash_key(&cParam0), 3);
	}
}

void func_359(bool bParam0, int iParam1)
{
	if (_0x5fc9357c26daefce())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_690(&Global_0, 8);
	}
	if (!func_385() || func_20() != -1)
	{
		return;
	}
	func_690(&Global_0, 1);
}

int func_360()
{
	iVar0 = func_691(Global_1879514->f_1);
	if (Global_1425247->f_53)
	{
		return 0;
	}
	if (func_692(iVar0))
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

Vector3 func_361(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10)
{
	vVar0 = { func_693(vParam0, iParam3, iParam4, iParam5, iParam6, 1, iParam7, bParam8, bParam9, bParam10, -1, 1103626240) };
	if (func_386(vVar0))
	{
		vVar0 = { func_693(vParam0, iParam3, iParam4, 0, 1, 1, iParam7, bParam8, 0, 0, -1, 1103626240) };
	}
	return vVar0;
}

void func_362(vector3 vParam0, int iParam3, var uParam4, int iParam5)
{
	Global_1310720->f_1 = { vParam0 };
	Global_40.f_9.f_10 = uParam4;
	Global_40.f_9.f_11 = iParam3;
	Global_40.f_9.f_12 = iParam5;
}

void func_363(vector3 vParam0)
{
	Global_40.f_9.f_7 = { vParam0 };
}

int func_364(vector3 vParam0, int iParam3)
{
	iVar0 = func_77();
	if (func_240(iVar0))
	{
		if (_0xf256a75210c5c0eb((*Global_1888801)[iVar0]->f_3, vParam0))
		{
			return iVar0;
		}
	}
	return func_694(vParam0, iParam3);
}

void func_365()
{
	func_695();
	func_696();
	func_697();
	_0x11b0a0b282fa9b10(0);
}

void func_366(struct<16> Param0, int iParam16)
{
	if (is_string_null_or_empty(&(Param0.f_10)))
	{
		return;
	}
	if (Global_1934603->f_161 >= 10)
	{
		return;
	}
	if (!func_698(iParam16, 2))
	{
		if (_get_number_of_references_of_script_with_name_hash(get_hash_key(&(Param0.f_10))) > 0 || func_699(&(Param0.f_10)))
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
			func_700(iParam16);
			return;
		}
		iVar0++;
	}
}

bool func_367(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_368(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_369()
{
	return Global_1572864->f_12;
}

void func_370(bool bParam0)
{
	if (func_463(Global_1935630->f_3))
	{
		return;
	}
	iVar0 = 1;
	Var1.f_2 = 4;
	Var1 = "HUD_PENALTY_SOUNDSET";
	Var1.f_1 = "HUD_FAIL";
	Var1.f_3 = func_701();
	Var1.f_3.f_3 = iVar0;
	if ((!func_702(Global_1347343->f_2) && !func_367(Global_1347343->f_11, 64)) || func_82(32768))
	{
		Var1.f_7 = func_703();
		Var1.f_7.f_3 = iVar0;
	}
	if (!func_367(Global_1347343->f_11, 1024) && !func_82(32768))
	{
		Var1.f_11 = func_704();
		Var1.f_11.f_3 = iVar0;
	}
	if (func_367(Global_1347343->f_11, 8))
	{
		Var1.f_15 = func_705();
		Var1.f_15.f_3 = iVar0;
	}
	if (Global_1347343->f_1 != 2)
	{
		Global_1935630->f_3 = func_706(&Var1, "REPLAY_T", &(Global_1347343->f_3), 0, 1);
	}
	else
	{
		Global_1935630->f_3 = func_707(&Var1, "REPLAY_T_DEAD", 0, 1);
	}
	set_player_invincible(player_id(), true);
	if (!is_ped_in_any_vehicle(Global_35, false) && !is_entity_attached(Global_35))
	{
		freeze_entity_position(Global_35, true);
	}
	func_368(&(Global_1347343->f_11), 1073741824);
	if (bParam0)
	{
		func_368(&(Global_1347343->f_11), 1048576);
	}
	_0x16e9abdd34ddd931();
}

void func_371(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	func_708(uParam0);
	iVar0 = func_709(uParam0, iParam1);
	if (bParam3)
	{
		if (is_string_null_or_empty(sParam2))
		{
			sParam2 = func_710(iParam1);
		}
		iVar0 = func_711(uParam0, sParam2);
		if (iVar0 == -1)
		{
			iVar0 = func_712(uParam0);
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
		iVar0 = func_712(uParam0);
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
	func_713(uParam0, 2);
}

void func_372(var uParam0, int iParam1)
{
	func_714(&(uParam0->f_7375), iParam1);
}

int func_373(var uParam0)
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

int func_374()
{
	return func_472(func_715());
}

void func_375(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < func_387())
	{
		func_716(uParam0, iVar0);
		iVar0++;
	}
}

int func_376(var uParam0)
{
	uParam0->f_607 = uParam0->f_607;
	return 1;
}

void func_377(var uParam0, var uParam1)
{
	uParam0->f_607 = uParam1;
}

void func_378(var uParam0)
{
	func_722(uParam0, iLocal_98, iLocal_99, 103942, 104171, 104294, 104552, 105007, "SUS1_INT", 2, -1);
	func_722(uParam0, iLocal_99, iLocal_100, 105162, 105259, 105284, 105447, 105708, "", 64, -1);
	func_722(uParam0, iLocal_100, iLocal_101, 105754, 106036, 106101, 106157, 106449, "", 64, -1);
	func_722(uParam0, iLocal_101, iLocal_102, 106539, 106933, 107360, 107837, 108013, "SUS1_MCS1", 66, -1);
	func_722(uParam0, iLocal_102, iLocal_103, 108054, 108397, 108429, 108650, 108898, "", 64, -1);
	func_722(uParam0, iLocal_103, iLocal_104, 108921, 109346, 109365, 109460, 110085, "", 0, -1);
	func_722(uParam0, iLocal_104, 26, 110108, 110271, 110610, 110684, 110714, "SUS1_EXT", 2, -1);
}

int func_379(var uParam0, int iParam1, bool bParam2)
{
	if (!is_itemset_valid(Global_43616))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < get_itemset_size(Global_43616))
	{
		iVar1 = _get_entity_from_item(get_indexed_item_in_itemset(iVar0, Global_43616));
		if (does_entity_exist(iVar1))
		{
			if (!decor_exist_on(get_indexed_item_in_itemset(iVar0, Global_43616), func_753()) && get_entity_model(iVar1) == iParam1)
			{
				if (!_0x88ad6cc10d8d35b2(iVar1))
				{
					set_entity_as_mission_entity(iVar1, true, true);
				}
				if (bParam2)
				{
					remove_from_itemset(get_indexed_item_in_itemset(iVar0, Global_43616), Global_43616);
				}
				return iVar1;
			}
		}
		iVar0++;
	}
	return 0;
}

void func_380(int iParam0, int iParam1)
{
	uVar0 = Global_1905944[iParam0];
	clear_bit(&uVar0, iParam1);
	(*Global_1905944)[iParam0] = uVar0;
}

bool func_381(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_382(var uParam0)
{
	if (!func_754(uParam0, 4))
	{
		if (func_755(uParam0->f_860, 16384))
		{
			animpostfx_play("CamTransition01");
		}
		vVar0 = { func_756(uParam0) };
		if (!func_755(uParam0->f_860, 524288))
		{
			func_757(&(uParam0->f_872));
		}
		func_758(&(uParam0->f_860), 0, 2, vVar0.x, vVar0.y, vVar0.z, 0);
		func_759(uParam0, 0f, 0f, 0f);
		func_760(uParam0);
		func_761(uParam0);
		func_762(uParam0, 0f, 0f, 0f, 0, 0);
		func_763(uParam0);
		func_714(uParam0, 4);
		func_764(uParam0, 0);
		func_765(&(Global_1946804->f_1497), Global_35, 1, 64, 1, 1, 1);
		if (_0x927b810e43e99932(&(uParam0->f_873)))
		{
			_0x0a5a4f1979abb40e(&(uParam0->f_873));
		}
	}
}

Vector3 func_383(int iParam0)
{
	if (func_766(iParam0))
	{
		return func_767(iParam0);
	}
	return (*Global_1835011)[iParam0]->f_18;
}

int func_384(vector3 vParam0, var uParam3)
{
	if (_0x1b065a2bf7953815(0) != 1)
	{
		func_475(0, 1);
	}
	else
	{
		return 0;
	}
	iVar0 = func_768(Global_35, 0, 2, 0);
	if (!is_weapon_valid(iVar0))
	{
		iVar0 = func_769(0, 0);
		if (func_656(iVar0))
		{
			set_current_ped_weapon(Global_35, iVar0, true, 2, false, false);
			func_770(1, 0);
		}
	}
	else
	{
		func_770(1, 0);
	}
	func_202(0);
	func_476(0, vParam0, uParam3);
	return 1;
}

bool func_385()
{
	return true;
	if (Global_1572887->f_12 == 0)
	{
		return true;
	}
	return Global_40.f_1;
}

bool func_386(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

int func_387()
{
	return 26;
}

void func_388(int iParam0)
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

void func_389(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 60)
	{
		func_771((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_390(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 40)
	{
		func_772((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_391(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 20)
	{
		func_773((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_392(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 14)
	{
		func_774((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_393(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 60)
	{
		func_775((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_394(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 10)
	{
		func_776((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_395(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
}

void func_396(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 10)
	{
		func_777((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_397(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 3)
	{
		func_778((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_398(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		func_779((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_399(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		func_780((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_400(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		func_781((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_401(var uParam0, int iParam1, int iParam2)
{
	if (func_120(uParam0, 2097152))
	{
		return;
	}
	iVar0 = func_782(&(uParam0->f_638), iParam1);
	if (iVar0 == -1)
	{
		iVar0 = func_783(&(uParam0->f_638));
	}
	if (iVar0 == -1)
	{
		return;
	}
	uParam0->f_638[iVar0] = iParam1;
	uParam0->f_638[iVar0]->f_2 = (uParam0->f_638[iVar0]->f_2 || iParam2);
}

void func_402(var uParam0, char[4] cParam1, var uParam2, int iParam3, int iParam4, char* sParam5, int iParam6, bool bParam7)
{
	if (!func_784(iParam3, func_33(uParam0)) && !func_784(iParam3, func_35(uParam0)))
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
	iVar0 = func_785(&(uParam0->f_1126), cParam1, *uParam2);
	if (iVar0 == -1)
	{
		iVar0 = func_786(&(uParam0->f_1126));
	}
	if (iVar0 == -1)
	{
		return;
	}
	if (!_does_anim_scene_exist(*uParam2))
	{
		*uParam2 = _create_anim_scene(cParam1, iParam4, sParam5, false, true);
	}
	uParam0->f_1126[iVar0]->f_1 = *uParam2;
	uParam0->f_1126[iVar0] = cParam1;
	uParam0->f_1126[iVar0]->f_3 = (uParam0->f_1126[iVar0]->f_3 || iParam3);
	uParam0->f_1126[iVar0]->f_65 = iParam6;
	uParam0->f_1126[iVar0]->f_66 = bParam7;
	if (!bParam7)
	{
		func_787(&(uParam0->f_1126[iVar0]->f_2), 4);
	}
}

void func_403(var uParam0, char[4] cParam1, int iParam2, int iParam3, int iParam4)
{
	if (func_120(uParam0, 2097152))
	{
		return;
	}
	iVar0 = func_788(&(uParam0->f_819), cParam1);
	if (iVar0 == -1)
	{
		iVar0 = func_789(&(uParam0->f_819));
	}
	if (iVar0 == -1)
	{
		return;
	}
	uParam0->f_819[iVar0] = cParam1;
	uParam0->f_819[iVar0]->f_4 = (uParam0->f_819[iVar0]->f_4 || iParam2);
	uParam0->f_819[iVar0]->f_1 = iParam3;
	uParam0->f_819[iVar0]->f_2 = iParam4;
}

void func_404(var uParam0, char[4] cParam1, int iParam2)
{
	if (func_120(uParam0, 2097152))
	{
		return;
	}
	iVar0 = func_790(&(uParam0->f_1020), cParam1);
	if (iVar0 == -1)
	{
		iVar0 = func_791(&(uParam0->f_1020));
	}
	if (iVar0 == -1)
	{
		return;
	}
	uParam0->f_1020[iVar0] = cParam1;
	uParam0->f_1020[iVar0]->f_2 = (uParam0->f_1020[iVar0]->f_2 || iParam2);
}

void func_405(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (func_120(uParam0, 2097152))
	{
		return;
	}
	iVar0 = func_792(&(uParam0->f_5188), iParam1);
	if (iVar0 == -1)
	{
		iVar0 = func_793(&(uParam0->f_5188));
	}
	if (iVar0 == -1)
	{
		return;
	}
	uParam0->f_5188[iVar0] = iParam1;
	uParam0->f_5188[iVar0]->f_1 = iParam3;
	uParam0->f_5188[iVar0]->f_2 = iParam4;
	uParam0->f_5188[iVar0]->f_4 = (uParam0->f_5188[iVar0]->f_4 || iParam2);
}

void func_406(int iParam0, int iParam1)
{
	func_794(iParam0, iParam1);
}

void func_407(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, int iParam12)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_795((*uParam0)[iVar0]))
		{
			if (func_784((*uParam0)[iVar0]->f_2, iParam12))
			{
				func_796((*uParam0)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (func_797((*uParam1)[iVar0]))
		{
			if (func_784((*uParam1)[iVar0]->f_4, iParam12))
			{
				func_798((*uParam1)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam2)
	{
		if (func_799((*uParam2)[iVar0]))
		{
			if (func_784((*uParam2)[iVar0]->f_2, iParam12))
			{
				func_800((*uParam2)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam3)
	{
		if (func_801((*uParam3)[iVar0]))
		{
			if (func_784((*uParam3)[iVar0]->f_2, iParam12))
			{
				func_802((*uParam3)[iVar0]);
			}
		}
		iVar0++;
	}
	if (func_784(uParam4->f_1, iParam12))
	{
		func_803(uParam4);
	}
	iVar0 = 0;
	while (iVar0 < *uParam5)
	{
		if (func_804((*uParam5)[iVar0]))
		{
			if (func_784((*uParam5)[iVar0]->f_3, iParam12))
			{
				func_805((*uParam5)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam5)
	{
		if (func_804((*uParam5)[iVar0]))
		{
			iVar1 = 0;
			while (iVar1 < 20)
			{
				if (func_806((*uParam5)[iVar0]->f_4[iVar1]))
				{
					if (func_784((*uParam5)[iVar0]->f_4[iVar1]->f_2, iParam12))
					{
						func_807((*uParam5)[iVar0]->f_4[iVar1], (*uParam5)[iVar0]->f_1);
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
		if (func_808((*uParam6)[iVar0]))
		{
			if (func_784((*uParam6)[iVar0]->f_3, iParam12))
			{
				func_809((*uParam6)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam7)
	{
		if (func_810((*uParam7)[iVar0]))
		{
			if (func_784((*uParam7)[iVar0]->f_4, iParam12))
			{
				func_811((*uParam7)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam8)
	{
		if (func_812((*uParam8)[iVar0]))
		{
			if (func_784((*uParam8)[iVar0]->f_2, iParam12))
			{
				func_813((*uParam8)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam9)
	{
		if (func_814((*uParam9)[iVar0]))
		{
			if (func_784((*uParam9)[iVar0]->f_2, iParam12))
			{
				func_815((*uParam9)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam10)
	{
		if (func_816((*uParam10)[iVar0]))
		{
			if (func_784((*uParam10)[iVar0]->f_3, iParam12))
			{
				func_817((*uParam10)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam11)
	{
		if (func_818((*uParam11)[iVar0]))
		{
			if (func_784((*uParam11)[iVar0]->f_2, iParam12))
			{
				func_819((*uParam11)[iVar0]);
			}
		}
		iVar0++;
	}
}

void func_408(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	if (is_entity_dead(iParam1))
	{
		return;
	}
	if (func_820(uParam0, iParam1, sParam2))
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

struct<2> func_409()
{
	Var0 = create_itemset(true);
	return Var0;
}

void func_410(var uParam0, float fParam1)
{
	uParam0->f_794 = fParam1;
}

void func_411(var uParam0, float fParam1)
{
	uParam0->f_795 = fParam1;
}

void func_412(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	func_821(&(uParam0->f_7375), iParam1, sParam2, iParam3, iParam4, bParam5);
	func_371(&(uParam0->f_10792), iParam1, sParam2, bParam6);
}

bool func_413(var uParam0, int iParam1, bool bParam2)
{
	iVar0 = 1;
	if (bParam2 && func_23(&(uParam0->f_8269)))
	{
		if (!func_121(uParam0, iParam1, 268435456))
		{
			MemCopy(&cVar1, {func_822(uParam0->f_607)}, 3);
			if (func_823(&(uParam0->f_8269), &cVar1, 0, func_132(iParam1), 1, 0))
			{
				if (func_24(&(uParam0->f_8269)))
				{
					func_824(&(uParam0->f_8269));
				}
				func_140(uParam0, iParam1, 268435456);
			}
			else
			{
				iVar0 = 0;
			}
		}
	}
	if (!func_825(&(uParam0->f_638), &(uParam0->f_819), &(uParam0->f_1020), &(uParam0->f_1081), &(uParam0->f_1124), &(uParam0->f_1126), &(uParam0->f_5147), &(uParam0->f_5188), &(uParam0->f_5239), &(uParam0->f_5249), &(uParam0->f_5265), &(uParam0->f_5286), iParam1))
	{
		iVar0 = 0;
	}
	return iVar0;
}

bool func_414(var uParam0, int iParam1)
{
	iVar1 = 1;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_804((*uParam0)[iVar0]))
		{
			if (func_784((*uParam0)[iVar0]->f_3, iParam1))
			{
				if ((*uParam0)[iVar0]->f_65 > 0f || func_826((*uParam0)[iVar0]->f_2, 4))
				{
					if (!func_827((*uParam0)[iVar0]))
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

int func_415(var uParam0)
{
	return uParam0->f_596;
}

bool func_416(var uParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, int iParam5)
{
	if (func_120(uParam0, 2))
	{
		return true;
	}
	if (func_20() == 0)
	{
		return true;
	}
	if (does_entity_exist(uParam0->f_5408))
	{
		return true;
	}
	iVar0 = func_828(func_61(uParam0));
	if (!func_29())
	{
		vVar2 = { func_126(uParam0->f_607) };
	}
	if (func_829(uParam0, iVar0, &uVar1, bParam1, vVar2.x, vVar2.y, vVar2.z, 0, bParam2, iParam3, bParam4, iParam5, 1, 0))
	{
		uParam0->f_5408 = uVar1;
		return true;
	}
	return false;
}

bool func_417(var uParam0, bool bParam1, var uParam2, var uParam3, var uParam4, float fParam5, int iParam6, int iParam7, int iParam8)
{
	if (does_entity_exist(uParam0->f_5411))
	{
		if (!func_120(uParam0, 16777216))
		{
			if (!func_830(uParam0))
			{
				func_103(uParam0, 16777216);
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
				iVar12 = func_831(&iVar11, &Var0);
				if (iVar11 != 0)
				{
					func_103(uParam0, 16777216);
					if (iVar11 == 2 && !is_entity_dead(iVar12))
					{
						if (iVar12 == uParam0->f_5411)
						{
							func_103(uParam0, 16777216);
						}
						else if (func_832(iVar12, uParam0->f_5411, 5f, 1))
						{
							if (func_833(iVar12))
							{
								_0x0348469daa17576c(iVar12);
							}
							clear_ped_tasks_immediately(iVar12, false, true);
							_set_entity_coords_and_heading(iVar12, uParam0->f_5417, uParam0->f_5420, true, false, true);
						}
					}
				}
			}
			return false;
		}
		if (!is_entity_dead(uParam0->f_5411))
		{
			return true;
		}
	}
	if (func_120(uParam0, 1))
	{
		return true;
	}
	vVar14 = { func_126(uParam0->f_607) };
	if (func_20() == 0)
	{
		request_model(func_125(uParam0), false);
		if (!has_model_loaded(func_125(uParam0)))
		{
			return false;
		}
		if (func_834(&iVar17, func_125(uParam0), vVar14, 0f, 0, 0, 1, 1, 1))
		{
			set_network_id_exists_on_all_machines(iVar17, true);
			iVar13 = net_to_ped(iVar17);
		}
	}
	else
	{
		if (((((uParam0->f_607 == 38 || uParam0->f_607 == 39) || uParam0->f_607 == 43) || uParam0->f_607 == 40) || uParam0->f_607 == 41) || uParam0->f_607 == 42)
		{
			func_103(uParam0, 1);
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
		if (func_120(uParam0, 262144))
		{
			Var18.f_2 = 1;
		}
		else if (func_120(uParam0, 32768))
		{
			Var18.f_2 = 0;
		}
		iVar29 = 0;
		iVar13 = func_831(&iVar29, &Var18);
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
			if (!func_120(uParam0, 16))
			{
				func_103(uParam0, 16);
			}
		}
	}
	if (does_entity_exist(iVar13))
	{
		uParam0->f_5411 = iVar13;
		uParam0->f_5412 = iVar13;
		func_835(uParam0, bParam1);
		if (!func_120(uParam0, 256))
		{
			if (!func_120(uParam0, 32768))
			{
				vVar14.x = uParam2;
				vVar14.f_1 = uParam3;
				vVar14.f_2 = uParam4;
				if ((!func_833(iVar13) || func_836(Global_35, iVar13, 1, 1) > 200f) && !func_386(vVar14))
				{
					if (!func_29())
					{
						freeze_entity_position(iVar13, false);
						func_837(iVar13, vVar14, fParam5, 2, 1073741824);
					}
				}
			}
		}
		else
		{
			Stack.Push(uParam0);
			Call_Loc(uParam0->f_10782);
		}
		return false;
	}
	return false;
}

void func_418(var uParam0)
{
	if (!func_120(uParam0, 32) && func_128(uParam0, 3))
	{
		if (func_838(uParam0->f_607, &iVar0, &uVar1))
		{
			set_clock_time(iVar0, 0, 0);
			func_103(uParam0, 32);
		}
	}
	if (!func_120(uParam0, 32))
	{
		if (func_839(&(uParam0->f_609), uParam0->f_607))
		{
			func_103(uParam0, 32);
		}
	}
}

void func_419(var uParam0)
{
	if (!func_120(uParam0, 128))
	{
		if (func_120(uParam0, 16384))
		{
			func_840(uParam0);
			if (func_841(uParam0))
			{
				func_51(&(uParam0->f_10792));
				func_842(uParam0, 2097152);
				func_257(uParam0, 16384);
				func_103(uParam0, 128);
			}
			return;
		}
		if (func_128(uParam0, 1))
		{
			return;
		}
		if (func_120(uParam0, 64))
		{
			func_840(uParam0);
			MemCopy(&Var0, {func_155(func_61(uParam0))}, 4);
			if (func_843(uParam0, Var0))
			{
				if (func_415(uParam0) != 4)
				{
					do_screen_fade_out(0);
				}
				func_103(uParam0, 128);
			}
		}
		else
		{
			if (func_415(uParam0) != 4)
			{
				do_screen_fade_out(1);
			}
			func_103(uParam0, 128);
		}
	}
}

void func_420(var uParam0, int iParam1)
{
	uParam0->f_596 = iParam1;
}

bool func_421(var uParam0)
{
	iVar0 = 1;
	if (!func_844(uParam0))
	{
		iVar0 = 0;
	}
	if (!func_416(uParam0, func_128(uParam0, 3), !func_8(uParam0, 2097152), uParam0->f_5410, !func_8(uParam0, 32), 0))
	{
		iVar0 = 0;
	}
	if (!func_417(uParam0, 1, uParam0->f_5413, uParam0->f_5413.f_1, uParam0->f_5413.f_2, uParam0->f_5416, 1, 1, 1))
	{
		iVar0 = 0;
	}
	if (!_0x5e420ff293ee5472())
	{
		iVar0 = 0;
	}
	if (func_120(uParam0, 4) && !_0x0ee3f0d7feccc54f())
	{
		iVar0 = 0;
	}
	if (!func_23(&(uParam0->f_8269)))
	{
		MemCopy(&cVar1, {func_822(uParam0->f_607)}, 3);
		if (func_845(&(uParam0->f_8269), &cVar1, 0, 1, 1))
		{
		}
		else
		{
			iVar0 = 0;
		}
	}
	if (func_128(uParam0, 1))
	{
		if (!func_26(&(uParam0->f_13115)))
		{
			func_27(&(uParam0->f_13115), 0);
		}
		if (func_846(&(uParam0->f_13115)) < 30f)
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

bool func_422(var uParam0)
{
	bVar0 = (_has_player_teleport_finished(player_id()) || !is_player_teleport_active());
	if (func_846(&(uParam0->f_603)) >= uParam0->f_13144)
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		if (is_player_teleport_active())
		{
			stop_player_teleport();
		}
		if ((func_82(32768) && func_847()) && func_846(&(uParam0->f_603)) < (uParam0->f_13144 + 10f))
		{
			return false;
		}
		if (func_120(uParam0, 8) && is_valid_interior(get_interior_at_coords(func_126(uParam0->f_607))))
		{
			unpin_interior(get_interior_at_coords(func_126(uParam0->f_607)));
			func_257(uParam0, 8);
		}
		_set_milliseconds_per_game_minute(2000);
		func_848(0, 0);
		func_257(uParam0, 4096);
		return true;
	}
	return false;
}

bool func_423(var uParam0)
{
	if (func_122(392538360))
	{
	}
	if (func_122(1676963302))
	{
	}
	if (func_122(-183018591))
	{
	}
	if (func_122(-1471716628))
	{
	}
	func_849();
	if (!func_850(uParam0))
	{
		return false;
	}
	func_851(uParam0);
	if (!func_852())
	{
		return false;
	}
	func_853(&(uParam0->f_7375), Local_31.f_26, 0, 0, 0, 0);
	_0xb56d41a694e42e86(Local_31.f_27, 10208, 0, 0, -1, -1, 2);
	_0x18262cafebb5fbe1(Local_31.f_27, 10208, 0, 0, -1, -1, 0);
	func_854(uParam0);
	func_855();
	func_856();
	func_857();
	func_859(uParam0, 127356);
	func_861(uParam0, 127443);
	func_863(uParam0, 129829);
	func_178();
	func_864(uParam0);
	iLocal_228 = func_865(func_176(1, 0) - Vector(200f, 200f, 200f), func_176(1, 0) + Vector(200f, 200f, 200f), func_176(1, 0), 400f, 0, 0);
	_0x57c242543b7b8fb9(-18102128, 1);
	_0x57c242543b7b8fb9(1151226872, 1);
	_0x57c242543b7b8fb9(1485561723, 1);
	_0x57c242543b7b8fb9(-750353502, 1);
	func_866(uParam0);
	return true;
}

void func_424(var uParam0, int iParam1)
{
	func_66(iParam1);
	uParam0->f_10783 = iParam1;
}

bool func_425(var uParam0)
{
	func_867(uParam0);
	func_868(uParam0);
	iVar0 = func_33(uParam0);
	iVar1 = func_35(uParam0);
	iVar2 = func_162(uParam0, iVar0);
	if (func_8(uParam0, 2097152))
	{
		if (iVar2 == 7 || iVar2 < 3)
		{
			func_841(uParam0);
		}
	}
	func_869(uParam0);
	func_870(uParam0);
	func_871(uParam0);
	func_872(uParam0);
	func_873(uParam0);
	func_874(uParam0);
	if (iVar2 != 5 && iVar2 != 6)
	{
		func_875(uParam0);
	}
	if ((func_33(uParam0) == 0 && iVar2 < 3) && func_271(uParam0) == 0)
	{
		func_419(uParam0);
	}
	if (func_121(uParam0, iVar0, 512))
	{
		set_vehicle_density_multiplier_this_frame(0f);
		set_random_vehicle_density_multiplier_this_frame(0f);
		set_parked_vehicle_density_multiplier_this_frame(0f);
	}
	func_74(uParam0);
	switch (iVar2)
	{
		case 0:
			if (func_876(uParam0, iVar0, 0))
			{
				if (func_877(uParam0, func_33(uParam0)) != -1 && _0x62de46f061caa468() < func_877(uParam0, func_33(uParam0)))
				{
					_0xf008e0ba1fe1d644((func_877(uParam0, func_33(uParam0)) - _0x62de46f061caa468()));
				}
				if ((func_33(uParam0) == 25 || func_33(uParam0) == 26) && func_82(32768))
				{
					func_372(uParam0, 524288);
				}
				if (func_120(uParam0, 4))
				{
					if (!func_8(uParam0, 4))
					{
						func_878(uParam0, iVar0);
						func_99(uParam0, 4);
					}
					func_879(uParam0);
					func_880(uParam0, iVar0, 1);
				}
				else
				{
					func_880(uParam0, iVar0, 1);
				}
			}
			break;
		case 1:
			if (func_844(uParam0))
			{
				if (func_881(uParam0))
				{
					if (func_8(uParam0, 4))
					{
						func_842(uParam0, 4);
					}
					func_880(uParam0, iVar0, 2);
				}
			}
			else if (func_882(uParam0) >= uParam0->f_13144)
			{
				if (func_8(uParam0, 4))
				{
					func_842(uParam0, 4);
				}
				func_880(uParam0, iVar0, 2);
			}
			break;
		case 2:
			if (func_876(uParam0, iVar0, 2))
			{
				if (!func_883(uParam0))
				{
					func_880(uParam0, iVar0, 4);
					if (func_884(uParam0, iVar0, iVar1))
					{
						func_880(uParam0, iVar0, 5);
					}
				}
				else
				{
					func_885(uParam0);
					func_880(uParam0, iVar0, 3);
					if (func_886(uParam0, iVar0))
					{
						func_880(uParam0, iVar0, 4);
						if (func_884(uParam0, iVar0, iVar1))
						{
							func_880(uParam0, iVar0, 5);
						}
					}
				}
			}
			else if (func_887(uParam0))
			{
				func_886(uParam0, iVar0);
			}
			break;
		case 3:
			if (func_886(uParam0, iVar0))
			{
				func_880(uParam0, iVar0, 4);
				if (func_884(uParam0, iVar0, iVar1))
				{
					func_880(uParam0, iVar0, 5);
				}
			}
			break;
		case 4:
			if (func_884(uParam0, iVar0, iVar1))
			{
				func_880(uParam0, iVar0, 5);
			}
			break;
		case 5:
			if (!func_20() == 0)
			{
				func_888(uParam0);
				func_889(uParam0, iVar0);
				func_890(uParam0);
				func_891(uParam0);
				if (func_121(uParam0, iVar1, 2))
				{
					if (func_892(uParam0, iVar1))
					{
						func_893(uParam0, iVar1);
					}
				}
			}
			if (func_876(uParam0, iVar0, 5))
			{
				if (func_876(uParam0, iVar0, 7))
				{
					if (!func_121(uParam0, func_33(uParam0), 67108864))
					{
						func_894(uParam0, func_33(uParam0));
					}
					func_895(uParam0, iVar1);
					func_868(uParam0);
					return true;
				}
				else
				{
					func_880(uParam0, iVar0, 7);
				}
			}
			else
			{
				if (!func_121(uParam0, func_33(uParam0), 4194304))
				{
					if ((!is_screen_faded_in() && !is_screen_fading_in()) && !func_121(uParam0, func_33(uParam0), 16))
					{
						do_screen_fade_in(0);
						func_896(0);
					}
					func_140(uParam0, func_33(uParam0), 4194304);
				}
				if ((func_897(get_player_index(), 0, 0, 1) && !func_120(uParam0, 8192)) && !func_121(uParam0, func_33(uParam0), 8))
				{
					func_47(1, 0);
					func_898("MISSION_WANTED", 7500, 0, 1, 0, 0, -1, -1, 0);
					if (func_899(uParam0))
					{
						func_880(uParam0, iVar0, 6);
					}
				}
				if (func_8(uParam0, 268435456))
				{
					if (_0x1b065a2bf7953815(1) != 1)
					{
						func_36(uParam0, func_34(iVar0), func_34(iVar1), iVar0, iVar1);
						func_842(uParam0, 268435456);
					}
				}
				if (func_120(uParam0, 1048576))
				{
					if (func_127(func_34(0)))
					{
						func_257(uParam0, 1048576);
					}
				}
			}
			break;
		case 6:
			if (!func_20() == 0)
			{
				func_888(uParam0);
				func_889(uParam0, iVar0);
				func_890(uParam0);
				func_891(uParam0);
				if (func_121(uParam0, func_35(uParam0), 2))
				{
					if (func_892(uParam0, func_35(uParam0)))
					{
						func_893(uParam0, func_35(uParam0));
					}
				}
			}
			if ((!func_897(get_player_index(), 0, 0, 1) || func_120(uParam0, 8192)) || func_121(uParam0, func_33(uParam0), 8))
			{
				if (func_876(uParam0, iVar0, 5))
				{
					if (func_900(uParam0))
					{
						func_880(uParam0, iVar0, 7);
					}
				}
				else
				{
					func_900(uParam0);
					func_880(uParam0, iVar0, 5);
				}
			}
			else
			{
				func_876(uParam0, iVar0, 5);
				func_901(uParam0);
			}
			break;
		case 7:
			if (func_876(uParam0, iVar0, 7))
			{
				if (!func_121(uParam0, func_33(uParam0), 67108864))
				{
					func_894(uParam0, func_33(uParam0));
				}
				func_895(uParam0, iVar1);
				func_868(uParam0);
				return true;
			}
			break;
		default:
			func_880(uParam0, iVar0, 7);
			break;
	}
	return false;
}

bool func_426(int iParam0)
{
	return iParam0 > -1;
}

int func_427(int iParam0, int iParam1, int iParam2)
{
	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
	return 1;
}

void func_428(int* iParam0)
{
	if (does_entity_exist(*iParam0))
	{
		if (does_entity_belong_to_this_script(*iParam0, true))
		{
			set_ped_as_no_longer_needed(iParam0);
		}
	}
}

bool func_429(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 27)
	{
		return false;
	}
	return true;
}

void func_430(var uParam0, int iParam1)
{
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	if (!func_902(uParam0, iParam1, &iVar0))
	{
		return;
	}
	if (is_entity_an_object(iParam1) && func_903(uParam0, get_object_index_from_entity_index(iParam1)))
	{
		_0x4465c3d1475bd3fd(get_entity_model(iParam1));
	}
	if (does_blip_exist(uParam0->f_5423[iVar0]->f_8))
	{
		remove_blip(&(uParam0->f_5423[iVar0]->f_8));
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
	_copy_memory(uParam0->f_5423[iVar0], uParam0->f_5423[(uParam0->f_13145 - 1)], 65);
	_copy_memory(uParam0->f_5423[(uParam0->f_13145 - 1)], &Var1, 65);
	uParam0->f_13145 = (uParam0->f_13145 - 1);
}

void func_431(int iParam0)
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

void func_432(int iParam0)
{
	func_904(iParam0, 8, 0);
}

void func_433(int iParam0, bool bParam1)
{
	if (!func_426(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (func_905(&((*Global_1360165)[iParam0]->f_12), 1))
		{
			func_904(iParam0, 1, 0);
		}
	}
	func_904(iParam0, 16, bParam1);
}

void func_434(int iParam0, bool bParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	if (!func_429(iParam0))
	{
		return;
	}
	if (func_485(iParam0))
	{
		if ((*Global_1360165)[iParam0]->f_129 != 0 && (*Global_1360165)[iParam0]->f_129 != get_id_of_this_thread())
		{
			return;
		}
	}
	if (bParam10)
	{
		func_442(iParam0, 56, 1);
		func_27(&(Global_1359489->f_40), 1);
	}
	func_433(iParam0, 0);
	func_904(iParam0, 4, 0);
	func_432(iParam0);
	func_906(iParam0);
	func_164(iParam0, 37, 1);
	bVar0 = func_907(Global_1360165[iParam0], 0);
	iVar1 = func_908(iParam0, 0);
	bVar2 = _0x800df3fc913355f3(iVar1);
	if (get_ped_config_flag(Global_1360165[iParam0], 503, true) && Global_1359489->f_16 & 8388608 == 0)
	{
		set_ped_config_flag(Global_1360165[iParam0], 503, false);
	}
	if (func_163(iParam0, 64, 1))
	{
		func_164(iParam0, 64, 1);
	}
	if (bParam3)
	{
		func_164(iParam0, 33, 1);
		func_164(iParam0, 34, 1);
		func_909(iParam0, 1056964608, -1, 1061158912);
		func_910(iParam0, 1, 1, 0);
		if (bParam6)
		{
			func_442(iParam0, 30, 1);
		}
		if (bParam7)
		{
			func_442(iParam0, 35, 1);
			if (bParam8)
			{
				func_442(iParam0, 62, 1);
			}
		}
		if (bVar0)
		{
			func_911(iParam0, 0);
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
		func_164(iParam0, 28, 1);
	}
	else
	{
		if (!bVar0)
		{
			set_ped_keep_task(Global_1360165[iParam0], true);
		}
		func_442(iParam0, 33, 1);
		func_910(iParam0, 0, 1, 0);
		if (fParam4 > 0f)
		{
			(*Global_1360165)[iParam0]->f_133 = fParam4;
			func_27(&((*Global_1360165)[iParam0]->f_130), 1);
		}
		else
		{
			func_517(&((*Global_1360165)[iParam0]->f_130));
		}
		if (bParam9)
		{
			func_442(iParam0, 34, 1);
		}
	}
	if (bParam1 || bParam2)
	{
		if (does_entity_exist(Global_1360165[iParam0]))
		{
			func_912(iParam0, bParam2, bParam2, bParam2, 0);
		}
	}
	else if (bVar0)
	{
		set_ped_can_use_auto_conversation_lookat(Global_1360165[iParam0], false);
	}
	if (func_163(iParam0, 45, 1))
	{
		func_164(iParam0, 45, 1);
	}
	func_913(iParam0, 16, 1);
	func_164(iParam0, 44, 1);
	(*Global_1360165)[iParam0]->f_129 = 0;
	Global_40.f_4942[iParam0]->f_4 = 0;
	if (bParam5)
	{
		if (func_907(func_914(iParam0), 0))
		{
			func_915(0, iParam0, bParam3, 0, bParam2);
		}
	}
}

void func_435(int* iParam0)
{
	if (does_blip_exist(*iParam0))
	{
		remove_blip(iParam0);
	}
}

void func_436(int* iParam0, bool bParam1)
{
	if (does_entity_exist(*iParam0))
	{
		if (bParam1)
		{
			delete_object(iParam0);
		}
		else
		{
			set_object_as_no_longer_needed(iParam0);
		}
	}
}

void func_437(int iParam0, int iParam1, bool bParam2)
{
	func_916(iParam0, 0, 0);
	if (func_917(iParam0))
	{
		if (door_system_get_door_state(iParam0) != iParam1 || bParam2)
		{
			door_system_set_door_state(iParam0, iParam1);
		}
	}
}

bool func_438(int iParam0, int iParam1)
{
	return (Global_1392240->f_1[iParam0]->f_14 && iParam1) != 0;
}

Vector3 func_439(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 1891.121f, -1826.389f, 42.4409f;
				case 1:
					return 1123.709f, -1317.33f, 64.7159f;
				case 2:
					return 1114.229f, -1306.295f, 65.6488f;
				case 3:
					return 1113.234f, -1301.76f, 65.6074f;
				case 4:
					return 1114.615f, -1293.174f, 65.1256f;
				case 5:
					return 801.7079f, -1059.659f, 49.2334f;
				case 6:
					return 827.5694f, -951.5749f, 55f;
				case 7:
					return 1116.961f, -1314.979f, 64.9927f;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 1129.235f, -1316.452f, 64.9835f;
				case 1:
					return 1111.793f, -1296.457f, 65.4908f;
				case 2:
					return 1115.799f, -1312.311f, 64.7845f;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return 1116.094f, -1309.76f, 64.9031f;
				case 1:
					return 1118.413f, -1299.57f, 65.5983f;
				case 2:
					return 1112.434f, -1300.421f, 65.6231f;
				case 3:
					return 816.1795f, -1039.008f, 49.5242f;
				case 4:
					return 827.0554f, -949.5092f, 55.25f;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return 1106.618f, -1292.685f, 65.5875f;
				case 1:
					return 1111.448f, -1294.421f, 65.4164f;
				case 2:
					return 1855.976f, -1841.73f, 42.5366f;
				case 3:
					return 1851.86f, -1829.93f, 43.67f;
				case 4:
					return 1126.645f, -1317.891f, 64.9926f;
				case 5:
					return 828.5116f, -956.7164f, 55.3095f;
				case 6:
					return 1125.179f, -1298.702f, 65.4f;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return 1068.46f, -1296.57f, 65.98f;
					Jump @851; //curOff = 785
					return 1065.44f, -1297.1f, 65.5f;
					Jump @851; //curOff = 806
					return 1108.1f, -1280.71f, 65.99f;
					Jump @851; //curOff = 827
					return 1051.36f, -1299.83f, 61.4f;
					Jump @1249; //curOff = 851
					switch (iParam1)
					{
						case 0:
							return 1892.141f, -1825.997f, 42.2004f;
						case 1:
							return 1126.682f, -1315.3f, 64.3753f;
						case 2:
							return 1112.807f, -1306.49f, 65.5569f;
						case 3:
							return 1115.122f, -1295.212f, 64.6735f;
						case 4:
							return 800.7581f, -1057.518f, 49.1071f;
						case 5:
							return 827.3954f, -957.2243f, 55.5f;
						case 6:
							return 1116.639f, -1308.702f, 65.7953f;
					}
					Jump @1249; //curOff = 1051
					switch (iParam1)
					{
						case 0:
							return 1117.106f, -1298.502f, 66.4355f;
						case 1:
							return 1114.589f, -1307.637f, 65.7061f;
						case 2:
							return 1111.959f, -1296.472f, 66.4291f;
					}
					Jump @1249; //curOff = 1143
					switch (iParam1)
					{
						case 0:
							return 824.4166f, -958.4858f, 55.0801f;
					}
					Jump @1249; //curOff = 1181
					switch (iParam1)
					{
						case 0:
							return 1861.154f, -1837.293f, 42.1829f;
						case 1:
							return 1862.887f, -1835.018f, 41.9329f;
					}
					return 0f, 0f, 0f;
				}

Vector3 func_440(vector3 vParam0, vector3 vParam3, float fParam6)
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

Vector3 func_441(vector3 vParam0, vector3 vParam3, float fParam6)
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

void func_442(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_426(iParam0))
		{
			return;
		}
	}
	func_427(iParam1, &iVar0, &iVar1);
	set_bit((*Global_1360165)[iParam0]->f_58[iVar0], iVar1);
}

bool func_443(int iParam0)
{
	switch (iParam0)
	{
		case -173507739:
		case 1632247697:
			return true;
		default:
			break;
	}
	return false;
}

void func_444(int iParam0, int iParam1)
{
	if (!is_entity_dead(iParam0))
	{
		if (func_918(iParam0, iParam1))
		{
			if (func_919(iParam0, iParam1))
			{
				if (func_920(iParam0, iParam1))
				{
					_apply_ped_metaped_outfit(decor_get_int(iParam0, "metaped_outfit_request"), iParam0, true, false);
					func_921(iParam0);
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

bool func_445(int iParam0)
{
	return func_922(iParam0, 2);
}

int func_446(int iParam0)
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

int func_447(int iParam0)
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

int func_448(int iParam0)
{
	return iParam0 & 31;
}

bool func_449()
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

int func_450(int iParam0)
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

int func_451(int iParam0)
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

void func_452(int iParam0, var uParam1)
{
	Var0 = iParam0;
	Var0.f_1 = uParam1;
	network_set_rich_presence(4, &Var0, 2, 2);
}

int func_453()
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

int func_454(int iParam0)
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

void func_455(var uParam0, var uParam1, var uParam2)
{
	vVar0.x = uParam0;
	vVar0.f_1 = uParam1;
	vVar0.f_2 = uParam2;
	network_set_rich_presence(3, &vVar0, 3, 3);
}

void func_456(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_12106[iParam0]->f_1 = iParam1;
		return;
	}
	if (iParam1 == 0 || iParam1 == -1)
	{
		func_923(iParam0);
	}
	else
	{
		func_924(iParam0, iParam1);
	}
	func_925();
}

bool func_457(int iParam0)
{
	iVar0 = func_926(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887->f_12 == -1)
	{
		return is_bit_set(&(Global_40.f_283[iVar1]), iVar2);
	}
	return is_bit_set(&(Global_1058888->f_40567[iVar1]), iVar2);
}

bool func_458(int iParam0)
{
	if (!func_183(iParam0))
	{
		return false;
	}
	switch (func_188(iParam0))
	{
		case 1:
			switch (func_264(iParam0))
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
			switch (func_264(iParam0))
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

void func_459(int iParam0)
{
	iVar2 = func_927(0);
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_566(iVar1) == iParam0)
		{
			_0x6a564540fac12211(iVar2, iVar1);
		}
		iVar0++;
	}
	func_929(func_928(iParam0), 6);
}

void func_460(int iParam0)
{
	iVar2 = func_927(0);
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_566(iVar1) == iParam0)
		{
			_0x766315a564594401(iVar2, iVar1, 0);
		}
		iVar0++;
	}
	func_930(func_928(iParam0), 6);
}

int func_461(int iParam0)
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

int func_462(int iParam0)
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
	func_931(iParam0, Global_1898164->f_162);
	return 1;
}

bool func_463(int iParam0)
{
	return iParam0 != 0;
}

bool func_464(int iParam0)
{
	if (iParam0 != -1)
	{
		return true;
	}
	return false;
}

void func_465(int iParam0, var uParam1)
{
	if (!func_464(iParam0))
	{
		return;
	}
	if (*uParam1 == -1600776215)
	{
		return;
	}
	func_932(iParam0, *uParam1, 0);
	func_933(uParam1);
	Global_1935183->f_24 = 1;
}

void func_466(char* sParam0, int iParam1)
{
	sParam0->f_8 = (sParam0->f_8 || iParam1);
}

void func_467(float fParam0, float fParam1)
{
	fParam0->f_1 = (func_514() - fParam1);
	func_934(fParam0, 1);
	func_935(fParam0, 2);
	fParam0->f_2 = 0f;
}

bool func_468(float fParam0)
{
	return func_212(*fParam0, 2);
}

int func_469()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return iVar0;
	}
	return get_game_timer();
}

void func_470(bool bParam0)
{
	if (func_936())
	{
		Global_1357509 = 1;
	}
	if (func_937(-92416669))
	{
	}
	if (bParam0 && Global_1935630->f_44 == -1016714371)
	{
		set_current_ped_weapon(Global_35, -1569615261, true, 0, false, false);
		Global_1935630->f_44 = -1569615261;
	}
}

struct<4> func_471(int iParam0, int iParam1)
{
	Var0 = { func_439(iParam0, iParam1) };
	Var0.f_3 = func_938(iParam0, iParam1);
	return Var0;
}

int func_472(int iParam0)
{
	if (func_188(iParam0) == 1)
	{
		return func_264(iParam0);
	}
	return -1;
}

int func_473(int iParam0)
{
	if (func_188(iParam0) == 8)
	{
		return func_264(iParam0);
	}
	return -1;
}

char[] func_474(int iParam0)
{
	if (!func_265(iParam0))
	{
		return uVar0;
	}
	uVar0 = (*Global_1347702)[iParam0]->f_3;
	return uVar0;
}

void func_475(int iParam0, bool bParam1)
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
		func_939(1, bParam1);
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
		(*Global_2621440)[iParam0]->f_9.f_14 = func_277();
	}
}

void func_476(int iParam0, vector3 vParam1, var uParam4)
{
	(*Global_2621440)[iParam0]->f_9.f_7 = { vParam1 };
	(*Global_2621440)[iParam0]->f_9.f_13 = uParam4;
	(*Global_2621440)[iParam0]->f_9 = 5;
	(*Global_2621440)[iParam0]->f_9.f_15 = func_364(vParam1, 1);
}

bool func_477(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 13)
	{
		return false;
	}
	return true;
}

bool func_478(int iParam0)
{
	return Global_43884 == iParam0;
}

void func_479(bool bParam0)
{
	Global_1935496->f_18 = !bParam0;
}

bool func_480(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 120);
}

void func_481(int iParam0)
{
	Global_1310750->f_16035 = (Global_1310750->f_16035 - (Global_1310750->f_16035 && iParam0));
}

bool func_482(var uParam0, int iParam1, int iParam2)
{
	return is_bit_set(uParam0[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return is_bit_set(uParam0[iVar0], iVar1);
}

int func_483()
{
	return Global_1109400->f_245;
}

bool func_484(var uParam0, int iParam1)
{
	return func_381(uParam0->f_64, iParam1);
}

bool func_485(int iParam0)
{
	return func_675(iParam0, 16, 1);
}

void func_486(int iParam0)
{
	iParam0 = func_258(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_254(iParam0);
	if (!_does_thread_exist(iVar0))
	{
		func_493(iParam0);
	}
	else if (!is_thread_active(iVar0, false))
	{
		func_493(iParam0);
	}
}

bool func_487(int iParam0)
{
	iParam0 = func_258(iParam0);
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

void func_488(int iParam0)
{
	iParam0 = func_258(iParam0);
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

void func_489(int iParam0)
{
	iParam0 = func_258(iParam0);
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

bool func_490(int iParam0)
{
	if (!func_940(iParam0))
	{
		return false;
	}
	if (!func_323())
	{
		return true;
	}
	return false;
}

void func_491(int iParam0)
{
	iParam0 = func_258(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_494(iParam0))
	{
		return;
	}
	iVar0 = func_208(iParam0);
	func_941(iParam0);
	if (!_0x88ad6cc10d8d35b2(iVar0))
	{
		set_entity_as_mission_entity(iVar0, true, true);
	}
	iVar1 = get_entity_model(iVar0);
	if (_0xaa9f048dcf69b6dc(iVar1))
	{
		if (!func_490(iVar1))
		{
			set_ped_model_is_suppressed(iVar1, false);
		}
	}
	delete_ped(&iVar0);
	func_942(iParam0, 0);
	func_493(iParam0);
}

bool func_492(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (is_entity_dead(iParam0) || is_ped_injured(iParam0))
	{
	}
	iVar0 = func_253(iParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	return true;
}

void func_493(int iParam0)
{
	iParam0 = func_258(iParam0);
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

bool func_494(int iParam0)
{
	iParam0 = func_258(iParam0);
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

void func_495(int iParam0)
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
	if (func_943(iParam0, 64))
	{
		func_488(iParam0);
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
	bVar3 = func_564(42);
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
				func_944(&((*Global_1900383)[iParam0]->f_27));
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
		func_488(iParam0);
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
		if (func_945(1) < 1)
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
		func_946(&((*Global_1900383)[iParam0]->f_26), bVar6);
	}
	if (!does_blip_exist((*Global_1900383)[iParam0]->f_26))
	{
		return;
	}
	bVar8 = false;
	if (func_943(iParam0, 32))
	{
		bVar8 = true;
	}
	bVar9 = is_ped_in_writhe(iVar0);
	bVar10 = false;
	iVar11 = func_947(iParam0);
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
	fVar15 = func_948(vVar12, Global_36);
	bVar16 = false;
	if (fVar15 > func_949(iParam0))
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
		func_950((*Global_1900383)[iParam0]->f_26);
		func_951((*Global_1900383)[iParam0]->f_26);
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
	if (func_833(iVar0) && !bVar9)
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
	iVar21 = func_945(iParam0);
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

int func_496(int iParam0)
{
	return shift_right(iParam0, 5) & 1023;
}

int func_497(int iParam0)
{
	if ((*Global_1347702)[iParam0]->f_12 & 1 != 0 || (*Global_1347702)[iParam0]->f_12 & 33554432 != 0)
	{
		return 1;
	}
	return 3;
}

int func_498(int iParam0)
{
	uVar0 = (*Global_1347702)[iParam0]->f_3;
	return get_hash_key(&uVar0);
}

void func_499(int iParam0, int iParam1)
{
	Global_40.f_490.f_402[iParam0] = (&Global_40.f_490.f_402[iParam0] - (Global_40.f_490.f_402[iParam0] && iParam1));
}

void func_500(int iParam0, int iParam1)
{
	Global_40.f_490.f_402[iParam0] = (Global_40.f_490.f_402[iParam0] || iParam1);
}

bool func_501(int iParam0)
{
	iParam0 = func_258(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (!func_494(iParam0))
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

void func_502(int iParam0)
{
	iParam0 = func_258(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_494(iParam0))
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

void func_503(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (is_string_null_or_empty(sParam1))
	{
		sParam1 = "FEED_MONEY_EARN";
	}
	func_672(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 1831944558, 0, 109029619, 0, 0, 0, 1);
}

void func_504(int iParam0, bool bParam1, float fParam2, int iParam3, int iParam4)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if (bParam1)
	{
		iVar0 = round((to_float(iParam0) * fParam2));
		iVar1 = ((iParam0 - iVar0) / iParam3);
		if (func_952())
		{
			iVar2 = floor((to_float(iVar1) * 0.1f));
		}
		iParam0 = (iParam0 + iVar2);
		iVar1 = (iVar1 + iVar2);
		func_672(_create_var_string(2, "FEED_GANG_TOTAL_EARN", iParam0), "ITEMTYPE_TEXTURES", -1957849484, 0, 109029619, 0, 0, 0, 1);
		iParam0 = (iParam0 - iVar0);
		if (iVar0 > 0)
		{
			func_953(iVar0);
			func_954(iVar0, 0, 0);
		}
		func_672(_create_var_string(2, "FEED_GANG_PLAYER_EARN", iVar1), "ITEMTYPE_TEXTURES", 1831944558, 0, 109029619, 0, 0, 0, 1);
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

bool func_505(int iParam0)
{
	if (!func_240(iParam0))
	{
		return false;
	}
	return func_244(iParam0, 67108864);
}

void func_506(int iParam0)
{
	StringCopy(&cVar0, func_955(iParam0), 64);
	StringConCat(&cVar0, "_OUTLINE", 64);
	sVar8 = func_956(cVar0);
	_0x563fcb6620523917(get_hash_key(sVar8), -1482012664);
}

void func_507(int iParam0)
{
	StringCopy(&cVar0, func_955(iParam0), 64);
	StringConCat(&cVar0, "_OUTLINE", 64);
	sVar8 = func_956(cVar0);
	iVar9 = get_hash_key(sVar8);
	if (_0xe38450dbcbc70e3d(iVar9, -1305340593) || _0xe38450dbcbc70e3d(iVar9, -1482012664))
	{
		_0x6786d7afac3162b3(iVar9);
	}
}

bool func_508(var uParam0, int iParam1, int iParam2)
{
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	bVar2 = is_bit_set(uParam0[iVar0], iVar1);
	clear_bit((*uParam0)[iVar0], iVar1);
	return bVar2;
}

bool func_509(var uParam0, int iParam1, int iParam2)
{
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	bVar2 = is_bit_set(uParam0[iVar0], iVar1);
	set_bit((*uParam0)[iVar0], iVar1);
	return !bVar2;
}

bool func_510(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_511(int iParam0)
{
	if (!func_480(iParam0))
	{
		return true;
	}
	return Global_17504.f_42[iParam0]->f_4 > 0;
}

int func_512(int iParam0)
{
	if (func_480(iParam0))
	{
		return Global_17504.f_42[iParam0]->f_4;
	}
	return 0;
}

int func_513(int iParam0)
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

float func_514()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return (to_float(iVar0) / 1000f);
	}
	return (to_float(get_game_timer()) / 1000f);
}

void func_515(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	iVar0 = (((iParam2 + (60 * iParam3)) + (3600 * iParam4)) + (86400 * iParam5));
	if (func_957(iParam0) == 1 && bParam7)
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

int func_516(int iParam0)
{
	if (!func_426(iParam0))
	{
		return 0;
	}
	if (!does_entity_exist(Global_1360165[iParam0]))
	{
		(*Global_1360165)[iParam0] = 0;
	}
	return Global_1360165[iParam0];
}

void func_517(float fParam0)
{
	fParam0->f_1 = 0f;
	fParam0->f_2 = 0f;
	*fParam0 = 0;
}

bool func_518(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return func_958(iParam0);
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

int func_519(int iParam0, bool bParam1, bool bParam2)
{
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (&Global_40.f_4283.f_6[iVar0] == iParam0)
		{
			func_532(Global_40.f_4283.f_6[iVar0], bParam1, bParam2);
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_520(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_2;
	}
	return -1;
}

void func_521(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_2 = iParam1;
}

int func_522()
{
	return Global_40.f_11095.f_35;
}

void func_523(int iParam0, int iParam1)
{
	if (iParam1 == 1)
	{
		func_959(iParam0, 0);
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
		func_524(1);
		Global_40.f_11922[0] = iParam0;
	}
}

void func_524(int iParam0)
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
			func_959(&(Global_40.f_11922[iVar0]), 0);
			Global_40.f_11922[iVar0] = 0;
			iVar1 = 1;
		}
		iVar0++;
	}
	if (iVar1 == 1)
	{
		func_960(1);
	}
}

bool func_525(int iParam0)
{
	return Global_40.f_490.f_402[iParam0] & 1 != 0;
}

int func_526()
{
	iVar0 = func_961((*Global_1347702)[9]->f_15);
	iVar1 = func_961((*Global_1835011)[69]->f_1);
	if (func_962(iVar0, iVar1, 1))
	{
		return 0;
	}
	return 1;
}

bool func_527(int iParam0)
{
	if (!func_182(iParam0))
	{
		return false;
	}
	return func_319((*Global_1835011)[iParam0]->f_1, 1);
}

int func_528(int iParam0)
{
	Var0 = Global_1357549->f_576;
	Var0.f_1 = 0;
	Var0.f_3 = iParam0;
	iVar5 = 0;
	if (func_963(Var0, 70005598, &iVar6, 0))
	{
		iVar5 = func_964(iVar6);
	}
	return iVar5;
}

int func_529(int iParam0)
{
	Var0 = Global_1357549->f_576;
	Var0.f_1 = 0;
	Var0.f_3 = iParam0;
	iVar5 = 1;
	if (func_965(Var0, -1875502208, &iVar5, 0))
	{
	}
	return iVar5;
}

void func_530(int iParam0, bool bParam1)
{
	func_966(iParam0, &iVar0, &iVar1);
	if (bParam1)
	{
		set_bit(Global_1357549->f_1848[iVar0], iVar1);
	}
	else
	{
		clear_bit(Global_1357549->f_1848[iVar0], iVar1);
	}
}

bool func_531(int iParam0)
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

void func_532(var uParam0, bool bParam1, bool bParam2)
{
	if (*uParam0 == 176656832)
	{
		return;
	}
	func_530(*uParam0, 0);
	if (bParam1)
	{
		if (bParam2)
		{
			func_533(2, *uParam0);
		}
		else
		{
			func_534(2, *uParam0);
		}
	}
	func_967(uParam0);
}

void func_533(int iParam0, int iParam1)
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

void func_534(int iParam0, int iParam1)
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

void func_535(int iParam0, int iParam1, bool bParam2)
{
	Global_1327479->f_4 = get_game_timer();
	func_968(iParam0, iParam1, bParam2);
}

int func_536(int iParam0)
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

int func_537(int iParam0)
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

void func_538(int iParam0, bool bParam1, int iParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, bool bParam7)
{
	iVar0 = func_969();
	if (iParam3 == 1142025875 || iParam3 == 1587891565)
	{
		if (bParam6)
		{
			iParam0 = func_970(iParam0);
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
	if (func_564(6))
	{
		iVar2 = 320;
		iVar3 = -320;
		if (!func_971())
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
	Global_40.f_11095.f_35 = func_301(Global_40.f_11095.f_35, iVar3, iVar2);
	iVar1 = func_969();
	if ((iVar1 != iVar0 && (iVar1 != 0 || iParam3 == -1091304842)) || bParam7)
	{
		iVar6 = func_972(iVar1);
		func_974(func_973(), 0, 4000);
		func_975(Global_40.f_11095.f_35);
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
		func_976(0);
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
				if (iParam0 > func_537(14))
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
					sParam4 = func_977(iParam3);
				}
				if (is_string_null_or_empty(sParam4))
				{
					func_672(_create_var_string(2, "PLAYER_HONOR_CHANGE_POS"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_GOOD"), 0, 109029619, "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_672(_create_var_string(2, "PLAYER_HONOR_CHANGE_POS_EVENT"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_GOOD"), 0, 109029619, "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
		else
		{
			func_95(func_94(-1636809477), 1);
			Global_1347477->f_204 = 0;
			if (!bParam1)
			{
				if (iParam0 < func_537(4))
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
					sParam4 = func_977(iParam3);
				}
				if (is_string_null_or_empty(sParam4))
				{
					func_672(_create_var_string(2, "PLAYER_HONOR_CHANGE_NEG"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_BAD"), 1, 859817522, "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_672(_create_var_string(2, "PLAYER_HONOR_CHANGE_NEG_EVENT"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_BAD"), 1, 859817522, "Honor_Display_Sounds", sVar7, 0, 1);
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
		func_354(10, 1);
	}
}

void func_539(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	Global_1347477->f_155[iParam0] = iParam1;
	Global_1347477->f_155[iParam0]->f_2 = iParam2;
	Global_1347477->f_155[iParam0]->f_3 = iParam3;
	Global_1347477->f_155[iParam0]->f_4 = iParam4;
	Global_1347477->f_155[iParam0]->f_5 = bParam5;
	Global_1347477->f_155[iParam0]->f_1 = get_game_timer() + 500;
}

int func_540(int iParam0)
{
	return shift_right(iParam0, 15) & 16383;
}

int func_541(int iParam0)
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

bool func_542(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _item_database_is_key_valid(iParam0, iParam1);
}

bool func_543(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (func_20() == -1)
	{
		if (func_978(iParam0) && func_979(iParam0))
		{
			func_980(iParam0, iParam1, 1, &bParam2, iParam3);
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

bool func_544(int iParam0, int iParam1, int iParam2)
{
	*iParam1 = iParam2;
	func_981(iParam0, iParam1);
	Var0 = { func_653(iParam0, 0, 1) };
	iVar5 = func_982(iParam0, &Var0, 0, 0);
	iVar6 = func_983(iParam0, 0);
	if ((iVar5 > 1 && !func_129()) && (iVar6 + iParam2) >= iVar5)
	{
		if (func_562(iParam0, -2051813666))
		{
			func_317(583, 1);
		}
		else
		{
			func_317(582, 0);
		}
	}
	if (func_984(iParam0, &Var0, *iParam1, 0, 0))
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

void func_545(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return;
	}
	switch (func_623(iParam0, -949239683))
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

int func_546(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_542(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_561(iParam0);
	if (iVar0 == 307971639 || (bParam1 && iVar0 == -427144552))
	{
		iVar1 = func_985(iParam0, 1);
		if (iVar1 != 0)
		{
			return get_ped_ammo_by_type(Global_35, iVar1);
		}
	}
	else if (iVar0 == -427144552)
	{
		return func_986(iParam0, 0);
	}
	iVar2 = _0xe787f05dfc977bde(func_927(bParam2), iParam0, 0);
	return iVar2;
}

bool func_547(int iParam0)
{
	if (func_20() != -1)
	{
		return false;
	}
	return func_548(iParam0) != 0;
}

int func_548(int iParam0)
{
	iVar1 = 0;
	while (iVar1 < func_987())
	{
		iVar0 = _0x126cbebba46693cf(iVar1, -2076669067, 0);
		if (iParam0 == func_988(iVar0))
		{
			return iVar0;
		}
		iVar1++;
	}
	return 0;
}

int func_549(int iParam0)
{
	return _0x6052b4de6657684f(iParam0);
}

int func_550(int iParam0)
{
	iVar1 = 0;
	while (iVar1 < func_987())
	{
		iVar0 = _0x126cbebba46693cf(iVar1, -2076669067, 0);
		if (iParam0 == func_549(iVar0))
		{
			if (func_339(func_988(iVar0), 1, 0))
			{
				iVar2++;
			}
		}
		iVar1++;
	}
	return iVar2;
}

void func_551(int iParam0)
{
	_0x3ea62e56f386c997(iParam0, 1);
	func_989(48);
	func_359(0, -1);
}

bool func_552(int iParam0)
{
	if (func_20() != -1)
	{
		return false;
	}
	return func_319((*Global_1347702)[iParam0]->f_15, 1);
}

int func_553(int iParam0)
{
	return _0x62cab7db62ead434(-2076669067, iParam0);
}

int func_554(int iParam0)
{
	return _0x93f2e7b5db85657b(-2076669067, iParam0);
}

bool func_555(int iParam0)
{
	if (func_20() != -1)
	{
		return false;
	}
	return func_319((*Global_1835011)[iParam0]->f_1, 1);
}

bool func_556(int iParam0)
{
	if (func_20() != -1)
	{
		return false;
	}
	if (!func_265(iParam0))
	{
		return false;
	}
	return func_184((*Global_1347702)[iParam0]->f_15);
}

int func_557()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		if (func_339(func_990(iVar1), 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_558(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, bool bParam7)
{
	switch (iParam0)
	{
		case 38:
			sVar0 = "MISSION_RCCIG";
			sVar1 = "SP_MISSIONS_13";
			if (func_385() && (func_556(38) || func_552(38)))
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
			if (func_385() && (func_556(39) || func_552(39)))
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
			iVar9 = func_991(iParam3, 19);
			iVar14 = -1531394072;
			iVar11 = get_hash_key("BLIP_RC_COLLECTABLE_EXOTICS");
			iVar13 = 911890963;
			break;
		case 41:
			if (func_385() && (func_556(41) || func_552(41)))
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
			if (func_385() && (func_556(49) || func_552(49)))
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
			iVar9 = func_991(iParam3, 20);
			iVar14 = 678508515;
			iVar11 = 1986498931;
			iVar13 = -1424865411;
			break;
	}
	sVar2 = func_992(iParam0, iVar14, iParam6, sVar2, sParam4, iVar10, iParam3);
	if (iParam6 == 8)
	{
		iVar11 = get_hash_key("TOAST_MEDAL_COLLECTABLE");
		iVar12 = get_hash_key("hud_toasts");
	}
	else
	{
		iVar12 = get_hash_key("toast_log_blips");
	}
	if (func_993(iParam0, iVar13, iVar14))
	{
	}
	if (func_994(iParam0, iVar13, vVar6, sVar4, sVar3))
	{
	}
	if (func_995(iParam0, iVar13, sVar2, sVar5, sVar0, sVar1, iVar11, iVar12))
	{
	}
	if (func_996(iParam0, iVar13, iVar14, iParam3, iParam1, iParam6, iVar9, iParam2, iVar10, bParam5))
	{
	}
	if (func_997(iParam0, iVar13, iVar14, iParam6))
	{
	}
	if (func_998(iParam0, iVar13, iVar14, iParam6, bParam7))
	{
	}
}

void func_559(int iParam0)
{
	Global_40.f_12004 = (Global_40.f_12004 || iParam0);
}

void func_560(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	switch (iParam0)
	{
		case 38:
			sVar0 = "COL_CC_TITLE";
			sVar3 = "COL_CC_CARD_FOUND";
			iVar7 = -2076669067;
			if (func_385() && (func_556(38) || func_552(38)))
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
			if (func_385() && (func_556(39) || func_552(39)))
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
			if (func_385() && (func_556(49) || func_552(49)))
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
		if (func_385() && (func_556(38) || func_552(38)))
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
			func_999(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 1)
		{
			sVar3 = "COL_CC_CARD_POSTED_OBJ";
			func_999(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 0)
		{
			func_678(_create_var_string(2, sVar0), _create_var_string(2, func_1000(func_554(iParam6))), iVar5, iVar4, -2, 0, 0, 0, 0, 1, 1);
			func_999(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			sVar1 = "COL_CC_INTRO";
			func_999(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == -440187297)
	{
		if (func_385() && (func_556(39) || func_552(39)))
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
			func_999(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_999(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == 2103522376)
	{
		if (func_385() && (func_556(49) || func_552(49)))
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
			func_999(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_999(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else
	{
		_uilog_set_pending_details_id(1, iVar6);
		if (iParam5 == 1)
		{
			func_999(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_999(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
}

int func_561(int iParam0)
{
	if (!func_542(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

bool func_562(int iParam0, int iParam1)
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

bool func_563(int iParam0, int iParam1)
{
	if (!func_542(iParam0, 0))
	{
		return false;
	}
	return _0x245d07651b1d183b(iParam0, iParam1);
}

bool func_564(int iParam0)
{
	if (!func_1001(iParam0))
	{
		return false;
	}
	return func_1002(iParam0);
}

void func_565(int iParam0)
{
	if (!func_1001(iParam0))
	{
		return;
	}
	func_1003(iParam0);
	func_1004(iParam0);
}

int func_566(int iParam0)
{
	if (!func_542(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_567(int iParam0, bool bParam1)
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
	if (func_542(iVar0, 0))
	{
		if (bParam1)
		{
			if (func_1005(iVar0) || func_122(iVar0))
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

int func_568(int iParam0, bool bParam1)
{
	if (!func_542(iParam0, 0))
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

void func_569(int iParam0)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	if (!func_656(iParam0))
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

bool func_570(bool bParam0)
{
	if (func_20() == -1)
	{
		return true;
	}
	return _inventory_are_local_changes_allowed(func_927(bParam0));
}

bool func_571(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
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
		Var0 = { func_653(iParam0, 0, 1) };
		iVar5 = 1728382685;
		Var6.f_9 = -1591664384;
		iVar28 = 0;
		while (iVar28 < 4)
		{
			iVar5 = func_1006((386 + iVar28), 1);
			if (func_1007(iParam0, &Var0, iVar5, 0))
			{
				if (func_1008(iParam0, &Var6, iVar5))
				{
					Var29 = { func_1009(iParam0, Var0, iVar5, 0) };
					func_1010(iParam0, &Var29, &Var0, 1, -142743235, 1, 0);
				}
				else
				{
					iVar28++;
				}
				if (func_570(0))
				{
					_give_weapon_to_ped_2(Global_35, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
					if (!has_ped_got_weapon(Global_35, iParam0, 0, false))
					{
						return false;
					}
					func_572(_get_ammo_type_for_weapon(iParam0), iParam1, iParam6);
					func_1011(iParam0, iParam1);
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

bool func_572(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return true;
	}
	if (!func_574(iParam0))
	{
		return false;
	}
	if (!func_570(0))
	{
		return false;
	}
	_add_ammo_to_ped_by_type(Global_35, iParam0, iParam1, iParam2);
	return true;
}

bool func_573(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	iVar0 = func_568(iParam0, 0);
	if (is_weapon_valid(iVar0))
	{
		if (func_20() == -1)
		{
			func_569(iVar0);
			if (iParam1 == 1248274121)
			{
				func_1012(iVar0);
			}
		}
		if (!func_984(iParam0, &uVar1, 1, 0, 0))
		{
			func_980(iParam0, 1, 0, bParam2, iParam1);
			iVar6 = func_1013(iVar0);
			if (_is_weapon_sniper(iVar0))
			{
				func_571(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == -1415022764 || iVar0 == -160924582)
			{
				func_571(iVar0, 0, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == 2055893578)
			{
				func_571(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (_is_weapon_melee(iVar0))
			{
				if (iVar0 == 494733111 && !func_971())
				{
					return false;
				}
				if (_0x2c83212a7aa51d3d(iParam0))
				{
				}
				else if (!func_1014(iVar0))
				{
					func_571(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
				}
				else
				{
					func_571(iVar0, _get_weapon_clip_size(iVar0) * 4, bParam3, bParam4, 0, 0, iParam1, 0);
				}
			}
			else if (_is_weapon_one_handed(iVar0))
			{
				iVar7 = func_1015(Global_35, 2, 0, 1);
				if ((((func_656(iVar7) && !Global_43891) && iVar7 != iVar0) && !func_564(24)) && bParam4)
				{
					_0xe9bd19f8121ade3e(Global_35, iVar7);
				}
				bVar8 = true;
				if (func_656(iVar7) && func_564(24))
				{
					if (!func_571(iVar0, iVar6, bParam3, bParam4, 3, bVar8, iParam1, 0))
					{
						return false;
					}
				}
				else if (!func_571(iVar0, iVar6, bParam3, bParam4, 0, bVar8, iParam1, 0))
				{
					return false;
				}
			}
			else if (!func_571(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0))
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
		func_317(480, 1);
	}
	return true;
}

bool func_574(int iParam0)
{
	return _is_ammo_valid(iParam0);
}

bool func_575(int iParam0, int iParam1, int iParam2)
{
	if (!func_574(iParam0))
	{
		return false;
	}
	iVar4 = _get_weapon_type_from_ammo_type(iParam0);
	iVar3 = get_ped_ammo_by_type(Global_35, iParam0);
	if (func_656(iVar4))
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
	if (func_339(611073244, 1, 0) && iParam2 == -897553835)
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
		func_610(func_1016(iParam0), func_609(iParam0), 1);
		return false;
	}
	if (iVar2 == (iVar3 + iVar0))
	{
		if (func_20() == -1)
		{
			if (func_319((*Global_1835011)[14]->f_1, 1))
			{
				func_317(416, 0);
			}
		}
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_570(0))
	{
		if (func_572(iParam0, iVar0, iParam2))
		{
			*iParam1 = iVar0;
			return true;
		}
	}
	else
	{
		return func_615(iParam0, *iParam1, iParam2);
	}
	return false;
}

void func_576(int iParam0)
{
	if ((iParam0 == -615217896 && !func_330()) || iParam0 != -615217896)
	{
		if (func_1017(Global_35, iParam0, &uVar0))
		{
			func_594(player_ped_id(), iParam0, 0, -358215195, 1, 1, 1, 0, 1, 1);
		}
	}
	switch (iParam0)
	{
		case -62615415:
			Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
			func_600();
			break;
		case -832719552:
			Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
			func_600();
			break;
		case -1941112926:
			Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
			func_600();
			break;
		case -615217896:
			Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
			func_598();
			break;
		case -121629511:
			Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.2f);
			func_596();
			break;
	}
}

void func_577(int iParam0)
{
	switch (iParam0)
	{
		case -224110471:
			Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
			func_596();
			break;
		case 1289585739:
			Global_40.f_11095.f_61 = (Global_40.f_11095.f_61 + 0.1f);
			func_597();
			break;
		case 1441506783:
			Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
			break;
		case 780305678:
			Global_40.f_11095.f_56 = (Global_40.f_11095.f_56 + 0.1f);
			break;
		case -935153695:
			Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
			func_598();
			break;
		case 655868243:
			Global_40.f_11095.f_63 = (Global_40.f_11095.f_63 + 0.1f);
			func_599();
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
			func_600();
			break;
		case -569248339:
			Global_40.f_11095.f_64 = (Global_40.f_11095.f_64 + 0.3f);
			func_1018();
			break;
		case -1196089647:
			Global_40.f_11095.f_68 = (Global_40.f_11095.f_68 + 0.1f);
			break;
		case -982895431:
			Global_40.f_11095.f_69 = (Global_40.f_11095.f_69 + 0.1f);
			func_1019();
			break;
		case -1056342069:
			Global_40.f_11095.f_70 = (Global_40.f_11095.f_70 + 0.2f);
			break;
	}
}

struct<2> func_578(int iParam0)
{
	Var0.f_1 = iParam0;
	return Var0;
}

struct<2> func_579(int iParam0, int iParam1)
{
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

void func_580(int iParam0)
{
	bVar0 = func_562(iParam0, -2017733358);
	if (func_1020() < 3)
	{
		if (bVar0)
		{
			if (func_1022(func_1021(iParam0), iParam0))
			{
				func_610(79, func_609(func_1021(iParam0)), 1);
			}
			else
			{
				func_610(78, func_609(func_1021(iParam0)), 1);
			}
		}
		else
		{
			func_610(80, func_609(func_1023(iParam0)), 1);
		}
	}
}

bool func_581()
{
	if (((((func_1024(839908568, 400) || func_1024(-1134030454, 400)) || func_1024(623353496, 400)) || func_1024(-344413337, 400)) || func_1024(-1664948962, 400)) || func_1024(1795228059, 400))
	{
		return true;
	}
	return false;
}

int func_582(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, int iParam7)
{
	iVar0 = func_689(iParam0, bParam6, iParam7);
	if (!bParam1)
	{
		func_503(iVar0, sParam4, iParam5);
	}
	iVar1 = 752097756;
	if (bParam6)
	{
		iVar1 = -897553835;
	}
	func_504(iVar0, bParam1, fParam2, iParam3, iVar1);
	return iVar0;
}

void func_583(int iParam0)
{
	switch (iParam0)
	{
		case -625427311:
			func_558(51, 0, 0, 1520110311, 0, 0, 4, 0);
			func_560(51, 0, 0, 0, 0, -1, 0);
			func_1025(8192);
			break;
		case 581047644:
			func_558(51, 0, 0, -1992824800, 0, 0, 1, 0);
			func_560(51, 0, 0, 0, 0, -1, 0);
			func_1025(524288);
			break;
		case -644199619:
			func_558(39, 0, 0, 0, 0, 0, 1, 0);
			func_560(39, 0, 0, 0, 0, -1, 0);
			func_1026(16);
			break;
		case 684296857:
			func_558(41, 0, 0, 0, 0, 0, 1, 0);
			func_560(41, 0, 0, 0, 0, -1, 0);
			func_1027(8);
			break;
		case 466137807:
			func_558(49, 0, 0, 0, 0, 0, 1, 0);
			func_560(49, 0, 0, 0, 0, -1, 0);
			func_1028(16);
			break;
		case -1087522507:
			func_558(43, 0, 0, -1791518714, func_1029(1), 0, -1, 0);
			func_1030(1);
			break;
		case -405829000:
			func_558(43, 0, 0, -2087881550, func_1029(2), 0, -1, 0);
			func_1030(2);
			break;
		case 378660860:
			func_558(43, 0, 0, 1908068621, func_1029(4), 0, -1, 0);
			func_1030(4);
			break;
		case 1566111097:
			func_558(43, 0, 0, 1611247019, func_1029(8), 0, -1, 0);
			func_1030(8);
			break;
		case 1276007140:
			func_558(43, 0, 0, 1319635688, func_1029(16), 0, -1, 0);
			func_1030(16);
			break;
	}
}

void func_584(int iParam0)
{
	if (func_1031() == 1)
	{
		if (func_552(39))
		{
			func_317(342, 0);
		}
		else
		{
			func_317(343, 0);
			func_1026(1);
		}
	}
	if (func_1031() >= 30)
	{
		func_317(344, 0);
	}
	func_558(39, 0, 0, 0, 0, 0, -1, 0);
	func_560(39, 0, 0, func_1031(), 30, 1, 0);
}

void func_585(int iParam0)
{
	if (func_1032() == 1)
	{
		if (func_552(49))
		{
			func_317(409, 0);
		}
		else
		{
			func_317(410, 0);
			func_1028(1);
		}
	}
	if (func_1032() >= 10)
	{
		func_317(411, 0);
	}
	func_558(49, 0, 0, 0, 0, 0, -1, 0);
	func_560(49, 0, 0, func_1032(), 10, 1, 0);
}

void func_586(int iParam0)
{
	switch (iParam0)
	{
		case 1369162587:
			_0x3ea62e56f386c997(-949689219, 1);
			func_317(437, 0);
			func_317(440, 0);
			func_1033(-949689219, 444160793, &sVar0, 1, 0, 0);
			func_558(51, 0, 0, -949689219, sVar0, 0, -1, 0);
			func_560(51, 0, 0, sVar0, func_991(-949689219, 20), 1, 0);
			func_1025(1);
			func_1034(-748969569, 0, 0);
			break;
		case 1610047510:
			_0x3ea62e56f386c997(-1248968496, 1);
			func_1033(-1248968496, -1969404854, &sVar0, 1, 0, 0);
			func_558(51, 0, 0, -1248968496, sVar0, 0, -1, 0);
			func_560(51, 0, 0, sVar0, func_991(-1248968496, 20), 1, 0);
			func_1025(8);
			break;
		case 1317879106:
			_0x3ea62e56f386c997(1706369307, 1);
			func_1033(1706369307, -832850511, &sVar0, 1, 0, 0);
			func_558(51, 0, 0, 1706369307, sVar0, 0, -1, 0);
			func_560(51, 0, 0, sVar0, func_991(1706369307, 20), 1, 0);
			func_1025(64);
			break;
		case 1062444751:
			_0x3ea62e56f386c997(1520110311, 1);
			func_1033(1520110311, -100913452, &sVar0, 1, 0, 0);
			func_558(51, 0, 0, 1520110311, sVar0, 0, -1, 0);
			func_560(51, 0, 0, sVar0, func_991(1520110311, 20), 1, 0);
			func_1025(512);
			break;
		case 754186760:
			_0x3ea62e56f386c997(-1992824800, 1);
			func_317(438, 0);
			func_1033(-1992824800, 905173572, &sVar0, 1, 0, 0);
			func_558(51, 0, 0, -1992824800, sVar0, 0, -1, 0);
			func_560(51, 0, 0, sVar0, func_991(-1992824800, 20), 1, 0);
			func_1025(32768);
			break;
		default:
			func_317(439, 0);
			break;
	}
}

void func_587()
{
	if (chal_get_num_ranks_completed(-1278339625) < 2)
	{
		chal_add_goal_progress_int(-1278339625, -1316535105, 1);
	}
}

void func_588(int iParam0, int iParam1)
{
	iVar1 = 0;
	if (func_20() == -1)
	{
		if (!func_552(43))
		{
			if (iParam0 == 281887510)
			{
				func_317(348, 0);
			}
			else if (iParam0 == -164081697)
			{
				func_317(350, 0);
			}
			else if (iParam0 == -1161319399)
			{
				func_317(352, 0);
			}
			else if (iParam0 == 728781265)
			{
				func_317(400, 0);
			}
		}
		else if (func_562(iParam0, 412399755))
		{
			func_1035(-1791518714);
			if (func_1036() == 0)
			{
				func_359(0, 10);
				iVar1 = func_1037(iParam0, iParam1, 1);
				if (((iParam0 == 281887510 || iParam0 == -164081697) || iParam0 == -1161319399) || iParam0 == 728781265)
				{
					if (func_1038(iParam0) < func_1039(iParam0))
					{
						func_558(43, iParam0, iParam1, -1791518714, iVar1, 0, -1, 0);
						func_560(43, 0, 0, iVar1, 30, 1, 0);
					}
				}
			}
		}
		if (!func_552(44))
		{
			if (iParam0 == -222563712)
			{
				func_317(354, 0);
			}
			else if (iParam0 == 1794857344)
			{
				func_317(399, 0);
			}
			else if (iParam0 == 1952409553)
			{
				func_317(401, 0);
			}
		}
		else if (func_562(iParam0, 709057512))
		{
			func_1035(-2087881550);
			if (func_1036() == 1)
			{
				func_359(0, 10);
				iVar1 = func_1037(iParam0, iParam1, 2);
				if ((iParam0 == -222563712 || iParam0 == 1794857344) || iParam0 == 1952409553)
				{
					if (func_1038(iParam0) < func_1039(iParam0))
					{
						func_558(43, iParam0, iParam1, -2087881550, iVar1, 0, -1, 0);
						func_560(43, 0, 0, iVar1, 37, 1, 0);
					}
				}
			}
		}
		if (!func_552(45))
		{
			if (iParam0 == 2116770557)
			{
				func_317(359, 0);
			}
			else if (iParam0 == -651064726)
			{
				func_317(394, 0);
			}
			else if (iParam0 == -404270094)
			{
				func_317(395, 0);
			}
			else if (iParam0 == 2093126853)
			{
				func_317(398, 0);
			}
		}
		else if (func_562(iParam0, -1478961327))
		{
			func_1035(1908068621);
			if (func_1036() == 2)
			{
				func_359(0, 10);
				iVar1 = func_1037(iParam0, iParam1, 4);
				if (iParam0 == 2116770557)
				{
					if (!func_1040(_0x126cbebba46693cf(iVar0, 2114735110, 0)) >= 25)
					{
						func_1041(_0x126cbebba46693cf(iVar0, 2114735110, 0), 1);
						func_989(48);
					}
					if (func_1038(iParam0) < func_1039(iParam0))
					{
						func_558(43, iParam0, iParam1, 1908068621, iVar1, 0, -1, 0);
						func_560(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
				else if ((iParam0 == -651064726 || iParam0 == -404270094) || iParam0 == 2093126853)
				{
					if (func_1038(iParam0) < func_1039(iParam0))
					{
						func_558(43, iParam0, iParam1, 1908068621, iVar1, 0, -1, 0);
						func_560(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
			}
		}
		if (!func_552(46))
		{
			if (iParam0 == 2085530337)
			{
				func_317(356, 0);
			}
			else if (iParam0 == -150591160)
			{
				func_317(402, 0);
			}
			else if (iParam0 == -323969289)
			{
				func_317(404, 0);
			}
			else if (iParam0 == 1504361882)
			{
				func_317(406, 0);
			}
		}
		else if (func_562(iParam0, -1238404098))
		{
			func_1035(1611247019);
			if (func_1036() == 3)
			{
				func_359(0, 10);
				iVar1 = func_1037(iParam0, iParam1, 8);
				if (((iParam0 == 2085530337 || iParam0 == -150591160) || iParam0 == -323969289) || iParam0 == 1504361882)
				{
					if (func_1038(iParam0) < func_1039(iParam0))
					{
						func_558(43, iParam0, iParam1, 1611247019, iVar1, 0, -1, 0);
						func_560(43, 0, 0, iVar1, 50, 1, 0);
					}
				}
			}
		}
		if (!func_552(47))
		{
			if (iParam0 == -1521783510)
			{
				func_317(396, 0);
			}
			else if (iParam0 == 1714875242)
			{
				func_317(397, 0);
			}
			else if (iParam0 == 927763737)
			{
				func_317(405, 0);
			}
			else if (iParam0 == 1019229063)
			{
				func_317(403, 0);
			}
		}
		else if (func_562(iParam0, 1160548794))
		{
			func_1035(1319635688);
			if (func_1036() == 4)
			{
				func_359(0, 10);
				iVar1 = func_1037(iParam0, iParam1, 16);
				if (((iParam0 == -1521783510 || iParam0 == 1714875242) || iParam0 == 927763737) || iParam0 == 1019229063)
				{
					if (func_1038(iParam0) < func_1039(iParam0))
					{
						func_558(43, iParam0, iParam1, 1319635688, iVar1, 0, -1, 0);
						func_560(43, 0, 0, iVar1, 25, 1, 0);
					}
				}
			}
		}
	}
}

void func_589(int iParam0)
{
	if (iParam0 == 2116770557)
	{
		if (!func_1040(_0x126cbebba46693cf(iVar0, 2114735110, 0)) >= 25)
		{
			func_1041(_0x126cbebba46693cf(iVar0, 2114735110, 0), 1);
			func_989(48);
		}
	}
}

void func_590(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar0 = _0x126cbebba46693cf(iVar1, 678508515, -1160144609);
		if (func_339(func_1042(iVar0, 10), 1, 0))
		{
			if (bParam2)
			{
				func_1043(iParam0, iVar0, sVar2, iParam1, bParam2);
			}
			else
			{
				func_1044(iParam0, iVar0, bParam3);
			}
		}
		iVar1++;
	}
}

void func_591(int iParam0, int iParam1, int iParam2)
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
				func_582(0, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, iVar0);
				return;
			}
		}
	}
	switch (iParam0)
	{
		case 489075255:
			func_582(-949580860, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1394529493:
			func_582(-1171997683, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1262623627:
			func_582(-2140931002, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1124867377:
			func_582(-1116228267, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1790920086:
			func_582(2112896861, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -2001202686:
			func_582(-1915150712, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1111063991:
			func_582(994220262, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1576210101:
			func_582(-1388440107, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 675090918:
			func_582(-1531790128, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 355838765:
			func_582(1351791770, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -343824903:
			func_582(-161493966, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1142684684:
			func_582(668131102, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1243851340:
			if (!func_1045())
			{
				func_582(1330954593, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			}
			break;
		case -525490740:
			func_582(817681514, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1736635264:
			func_582(1404311868, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1302860970:
			func_582(-175152067, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -1027115192:
			func_582(-526915387, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -1064332555:
			func_582(101362741, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -1954478446:
			func_582(1458818027, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -518592739:
			func_582(-1957208512, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -2010073778:
			func_582(2066857461, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -700133011:
			func_582(803940201, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -1415414735:
			func_582(-1717765429, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case 2045548742:
			func_582(1379920914, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case 830381058:
			func_582(447209691, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
	}
}

void func_592(int iParam0)
{
	if (func_552(41))
	{
		func_317(363, 0);
	}
	else
	{
		func_317(362, 0);
	}
	switch (iParam0)
	{
		case 323124696:
			func_1046(-1865241121);
			func_1047(-642026005);
			func_1048(-642026005);
			func_359(0, 10);
			break;
		case -2108314374:
			func_1046(2117142684);
			func_1047(-940584364);
			func_1048(-940584364);
			func_359(0, 10);
			break;
		case -1193798153:
			func_1046(-1409326024);
			func_1047(1972645282);
			func_1048(1972645282);
			func_359(0, 10);
			break;
		case -787702678:
			func_1046(-641744968);
			func_1047(1667205433);
			func_1048(1667205433);
			func_359(0, 10);
			break;
		case -804542901:
			func_1046(-946988203);
			func_1047(1362715885);
			func_1048(1362715885);
			func_359(0, 10);
			break;
		case -1696275132:
			func_1046(-646136018);
			func_1047(1053540370);
			func_1048(1053540370);
			func_359(0, 10);
			break;
		case -161595323:
			func_1046(-955835837);
			func_1047(-1100103852);
			func_1048(-1100103852);
			func_359(0, 10);
			break;
		case -1114363619:
			func_1046(-179276075);
			func_1047(-1409869209);
			func_1048(-1409869209);
			func_359(0, 10);
			break;
		case -368407134:
			func_1046(-492711560);
			func_1047(-1760235357);
			func_1048(-1760235357);
			func_359(0, 10);
			break;
		case 1997759228:
			func_1046(1764383959);
			func_1047(-138366827);
			func_1048(-138366827);
			func_359(0, 10);
			break;
		case 1265573293:
			func_1046(317501533);
			func_1047(-1261163843);
			func_1048(-1261163843);
			func_359(0, 10);
			break;
		case -1030441283:
			func_1046(817753087);
			func_1047(-963523016);
			func_1048(-963523016);
			func_359(0, 10);
			break;
		case -1490884871:
			func_1046(576606016);
			func_1047(560825326);
			func_1048(560825326);
			func_359(0, 10);
			break;
		case -395458616:
			func_1046(814934957);
			func_1047(858269539);
			func_1048(858269539);
			break;
	}
}

void func_593(int iParam0, int iParam1)
{
	func_1049(iParam0, iParam1, &uVar0);
}

int func_594(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	if (iParam3 == -358215195)
	{
		Var0 = { func_653(iParam1, 1, 0) };
		iParam3 = func_654(Var0.f_4);
		if (iParam3 == -358215195)
		{
			return 0;
		}
	}
	if (!func_1050(iParam1, iParam2, func_641(iParam3, 1), bParam4, bParam9))
	{
		return 0;
	}
	func_1051(1, (func_20() == -1 && bParam5), 1);
	switch (iParam3)
	{
		case 1145151482:
		case 1742327865:
			if (bParam8 && iParam1 != &Global_1946804->f_57[func_641(iParam3, 1)])
			{
				func_652(31, 0, 0, 0, 0);
			}
			break;
		case 1108822547:
			if (func_1052(32768) && iParam1 != &Global_1946804->f_57[func_641(iParam3, 1)])
			{
				func_1053();
				func_652(22, iParam3, 256, 0, 0);
			}
			clear_ped_damage_decal_by_zone(iParam0, 2, "ALL");
			clear_ped_blood_damage_by_zone(iParam0, 2);
			break;
	}
	if (!bParam6)
	{
		if (bParam7)
		{
			func_652(22, iParam3, 0, 0, 0);
		}
		return 1;
	}
	iVar5 = func_1054(iParam3);
	if (is_ped_a_player(iParam0))
	{
		func_652(19, 0, iVar5, 0, 0);
		if ((iParam3 == 1742327865 || iParam3 == 1108822547) || iParam3 == 1145151482)
		{
			func_1055(0);
			func_1056(36, 0, 0);
		}
	}
	else
	{
		iVar5 |= 1;
		func_652(19, 0, iVar5, iParam0, 0);
	}
	return 1;
}

bool func_595(int iParam0, bool bParam1)
{
	Var3.f_9 = -1591664384;
	bVar17 = false;
	*iParam0 = 0;
	iVar18 = func_1015(get_player_ped(get_player_index()), 2, 1, 0);
	iVar19 = func_1015(get_player_ped(get_player_index()), 3, 1, 0);
	if (func_1057("ALL WEAPONS", &iVar0, &iVar1, -1591664384, 0))
	{
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (func_1058(&Var3, iVar2, iVar0, iVar1))
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
						func_1059(iVar0);
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

void func_596()
{
	_0x11a7ff918ef6bc66(player_id(), (1f - Global_40.f_11095.f_60));
}

void func_597()
{
	fVar0 = Global_40.f_11095.f_62;
	fVar1 = (Global_40.f_11095.f_62 + Global_40.f_11095.f_61);
	_0x497a6539bb0e8787(player_id(), (1f - fVar0), (1f - fVar1));
}

void func_598()
{
	_0xe0d6c2a146a5c993(player_id(), (1f / (1f + Global_40.f_11095.f_58)));
}

void func_599()
{
	_0xb427911ea6dffef3(player_id(), (1f - Global_40.f_11095.f_63));
}

void func_600()
{
	func_1060();
	func_1061();
	func_1062();
}

void func_601(int iParam0, int iParam1, bool bParam2)
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

void func_602(int iParam0, bool bParam1)
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
	func_999(_create_var_string(2, sVar1), _create_var_string(2, sVar2), get_hash_key("toast_log_blips"), get_hash_key("BLIP_RC_TREASURE_HUNTER"), 1433015236, _create_var_string(2, sVar3), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
}

void func_603(int iParam0)
{
	Global_40.f_12004.f_7 = (Global_40.f_12004.f_7 || iParam0);
}

void func_604(int iParam0)
{
	Global_40.f_12004.f_8 = (Global_40.f_12004.f_8 || iParam0);
}

void func_605(int iParam0)
{
	Global_40.f_12004.f_9 = (Global_40.f_12004.f_9 || iParam0);
}

void func_606(int iParam0)
{
	Global_40.f_12004.f_10 = (Global_40.f_12004.f_10 || iParam0);
}

void func_607(int iParam0)
{
	Global_40.f_12004.f_11 = (Global_40.f_12004.f_11 || iParam0);
}

void func_608(int iParam0)
{
	Global_40.f_12004.f_12 = (Global_40.f_12004.f_12 || iParam0);
}

int func_609(int iParam0)
{
	if (!func_542(iParam0, 0))
	{
		return 0;
	}
	return iParam0;
}

void func_610(int iParam0, int iParam1, bool bParam2)
{
	func_648(iParam0, &iVar0, &iVar1);
	if (!func_649(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_1063(iParam0, 1024))
	{
		return;
	}
	func_650(iVar0, iVar1);
	Global_1905944->f_22[iParam0]->f_3[0] = iParam1;
	Global_1905944->f_22[iParam0]->f_3[0]->f_1 = 2;
}

void func_611(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	func_648(iParam0, &iVar0, &iVar1);
	if (!func_649(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_1063(iParam0, 1024))
	{
		return;
	}
	func_650(iVar0, iVar1);
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

int func_612()
{
	iVar0 = _0x5461c821d00fe15a(-2076669067, 0);
	if (iVar0 == func_987())
	{
		return func_613();
	}
	iVar4 = (func_987() - iVar0);
	iVar5 = get_random_int_in_range(0, iVar4);
	iVar2 = 0;
	while (iVar2 < func_987())
	{
		iVar1 = _0x126cbebba46693cf(iVar2, -2076669067, 0);
		if (!func_1064(iVar1))
		{
			if (iVar5 == iVar3)
			{
				return func_988(iVar1);
			}
			iVar3++;
		}
		iVar2++;
	}
	return 0;
}

int func_613()
{
	iVar0 = get_random_int_in_range(0, func_987());
	return func_988(_0x126cbebba46693cf(iVar0, -2076669067, 0));
}

void func_614(int iParam0)
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

bool func_615(int iParam0, int iParam1, int iParam2)
{
	if (!func_542(iParam0, 0))
	{
		return false;
	}
	if (iParam1 < 1)
	{
		return false;
	}
	Var0 = { func_653(iParam0, 0, 1) };
	Var5 = { func_1009(iParam0, Var0, Var0.f_4, 0) };
	return func_1065(iParam0, &Var5, &Var0, iParam1, iParam2, 0);
}

void func_616(int iParam0)
{
	if (func_20() != -1)
	{
		return;
	}
	switch (func_566(iParam0))
	{
		case 81053684:
			if (iParam0 == -1623728698 && func_1066(81053684, 0) <= 0)
			{
				func_652(32, iParam0, 0, 0, 0);
			}
			break;
		case -2061583405:
			if (iParam0 == -1535516064 || iParam0 == -763730846)
			{
				func_652(32, iParam0, 0, 0, 0);
			}
			break;
		case -999503751:
			iVar0 = func_1067(iParam0);
			if (func_1068(iVar0))
			{
				func_1069(iVar0, (iVar0 >= 0 && iVar0 <= 5), 1);
			}
			else
			{
				func_652(30, iParam0, 0, 0, 0);
			}
			if (func_643() == -2125499975 || func_643() == -449205311)
			{
				switch (iParam0)
				{
					case 624063935:
					case 1160643979:
					case 1661121390:
						func_652(32, iParam0, 0, 0, 0);
						break;
				}
			}
			else if (func_643() == 1160113249)
			{
				switch (iParam0)
				{
					case -361635024:
						func_652(32, iParam0, 0, 0, 0);
						break;
				}
			}
			break;
		case -525676072:
			if (!func_1070(-525676072, 0))
			{
				if (func_1071(-525676072, &iVar1))
				{
					func_652(33, iVar1, 0, 0, 0);
				}
			}
			func_652(32, iParam0, 0, 0, 0);
			break;
	}
	if ((iParam0 == 899611344 || iParam0 == -1515874150) || iParam0 == -1185145312)
	{
		if (!func_1072(99217379))
		{
			func_594(Global_35, iParam0, 0, 99217379, 1, 1, 1, 0, 1, 1);
		}
		func_565(24);
		if (func_595(&iVar2, 0))
		{
			func_571(iVar2, 0, 0, 1, 3, 0, 752097756, 0);
		}
	}
}

void func_617(int iParam0)
{
	if (func_562(iParam0, 943695443))
	{
		func_1073(0, iParam0);
	}
	else if (func_562(iParam0, -2096528786))
	{
		func_1073(1, iParam0);
	}
	else if (func_562(iParam0, -1094167013))
	{
		func_1073(2, iParam0);
	}
	else if (func_562(iParam0, 1936654645))
	{
		func_1073(3, iParam0);
	}
	else if (func_562(iParam0, 1306489306))
	{
		func_1073(4, iParam0);
	}
	else if (func_562(iParam0, 435762317))
	{
		func_1073(5, iParam0);
	}
	else if (func_562(iParam0, 1259363210))
	{
		func_1073(6, iParam0);
	}
	else if (func_562(iParam0, 881398259))
	{
		func_1073(7, iParam0);
	}
	else if (func_562(iParam0, -541549214))
	{
		func_1073(8, iParam0);
	}
	else if (func_562(iParam0, 130796156))
	{
		func_1073(-1, iParam0);
	}
}

int func_618(int iParam0, int iParam1)
{
	Var4.f_1 = 10;
	func_1074(&Var4, 1356624740);
	return func_1075(iParam0, &Var4, &uVar0, iParam1);
}

struct<2> func_619(int iParam0)
{
	if (!func_542(iParam0, 0))
	{
		return Var0;
	}
	if (func_562(iParam0, -305066475))
	{
		if (func_20() == -1)
		{
			if (func_562(iParam0, -537818634))
			{
				return func_94(189951448);
			}
			else
			{
				return func_94(1176172851);
			}
		}
	}
	else if (func_562(iParam0, -537818634))
	{
		return func_94(-963660207);
	}
	if (func_562(iParam0, 2084895747))
	{
		return func_94(1694039471);
	}
	return Var2;
}

void func_620(int iParam0)
{
	switch (iParam0)
	{
		case 236757114:
			if (func_20() == -1)
			{
				if (func_319((*Global_1835011)[4]->f_1, 1))
				{
					func_317(109, 1);
				}
			}
			break;
	}
}

void func_621(int iParam0, char* sParam1)
{
	sVar0 = func_1077(func_1076(0));
	func_672(_create_var_string(38, "ITEM_CAUGHT_PUMP", sParam1, sVar0), "inventory_items", func_1078(iParam0), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

void func_622(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (iParam0 == 1662813436)
	{
		return;
	}
	if (!func_542(iParam0, 0))
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
	if (!func_1079())
	{
		func_1080(iParam0, iParam1, bParam2, bParam4);
		return;
	}
	bVar0 = false;
	iVar1 = absi(iParam1);
	StringCopy(&cVar2, func_1081(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
	if (iParam1 > 0)
	{
	}
	else
	{
		if (bParam3 || bParam4)
		{
			StringCopy(&cVar2, func_1081(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
		}
		else if (bParam2 && func_563(iParam0, 2097152))
		{
			StringCopy(&cVar2, "ITEM_READ_PUMP_MULT", 32);
		}
		bVar0 = true;
	}
	iVar6 = func_561(iParam0);
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
	else if (!func_1082(iParam0, &Var7, iVar11, iVar10, 0, -401018458))
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
	sVar15 = func_1083(_create_var_string(10, &cVar2, _create_var_string(0, func_609(iParam0)), iVar1), iVar12);
	if (((((iParam1 == 1 || func_562(iParam0, 1443104131)) || iParam0 == -885810591) || iParam0 == -1424823393) || iParam0 == 1463786584) || iParam0 == 1358243310)
	{
		sVar15 = _create_var_string(0, func_609(iParam0));
	}
	func_672(sVar15, Var7.f_1, get_hash_key(Var7), iVar14, iVar12, "Transaction_Feed_Sounds", sVar13, 0, 1);
}

int func_623(int iParam0, int iParam1)
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

struct<10> func_624(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
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

bool func_625(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, int iParam10, int iParam11, int iParam12)
{
	*iParam10 = _item_database_create_item_collection(&uParam0, iParam11, iParam12);
	if (*iParam10 >= 0)
	{
		return true;
	}
	return false;
}

int func_626(int iParam0, int iParam1)
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

bool func_627(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!func_542(iParam0, 0))
	{
		return false;
	}
	if (iParam1 != 0 && !func_1084(iParam0, iParam1, 1))
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
				if (Var2.f_2 == 1644203656 && func_1084(iParam0, Var2, 1))
				{
					if (func_1085(iParam0, Var2))
					{
						bVar0 = true;
					}
				}
			}
			iVar49++;
		}
	}
	else if (func_1085(iParam0, iParam1))
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		if (!bParam2)
		{
			func_317(206, 0);
		}
	}
	if (bParam3)
	{
		if (!func_190(0, 0, 1))
		{
			func_359(1, 5);
		}
	}
	if (bVar0)
	{
		return true;
	}
	return false;
}

int func_628(int iParam0)
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

void func_629(int iParam0)
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
		func_317(iVar0, 0);
	}
}

void func_630()
{
	bVar0 = is_dlc_present(33819255);
	if (!bVar0)
	{
		if (_unlock_is_unlocked(-121456797))
		{
			_0xe824ce7d13fcb300(2116153146, 0);
			func_1086(0);
			_unlock_set_unlocked(-121456797, false);
			func_1087();
		}
		return;
	}
	if (!func_319((*Global_1835011)[4]->f_1, 1))
	{
		return;
	}
	func_1088();
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
	func_1086(1);
}

void func_631()
{
	if (!func_319((*Global_1835011)[4]->f_1, 1))
	{
		return;
	}
	if (_unlock_is_unlocked(304788622))
	{
		return;
	}
	func_310(1351927599, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
	_unlock_set_unlocked(304788622, true);
	if (_unlock_is_unlocked(-1968398307))
	{
		return;
	}
	_unlock_set_unlocked(-1968398307, true);
}

void func_632()
{
	bVar0 = is_dlc_present(-751383868);
	if (!bVar0)
	{
		if (_unlock_is_unlocked(1244328330))
		{
			func_1089(0);
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
	if (!func_319((*Global_1835011)[4]->f_1, 1))
	{
		return;
	}
	_unlock_set_unlocked(1244328330, true);
	func_1089(1);
}

void func_633()
{
	bVar0 = is_dlc_present(-1499823613);
	if (!bVar0)
	{
		if (_unlock_is_unlocked(398807247))
		{
			func_1090(15000, 0, 0, 0, 1);
			func_1089(0);
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
	if (!func_319((*Global_1835011)[4]->f_1, 1))
	{
		return;
	}
	_unlock_set_unlocked(398807247, true);
	func_275(15000, 0, 1065353216, 1, 0, 0, 1, 752097756);
	func_1089(1);
}

void func_634()
{
	bVar0 = is_dlc_present(-679138445);
	if (bVar0)
	{
		if (_0xf83d3dda4d3c8169(-1491419385) > 0)
		{
			if ((!func_339(1191437462, 1, 0) && !func_184((*Global_1835011)[23]->f_1)) && !Global_43891)
			{
				func_310(1191437462, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			}
			if (!func_1091(1))
			{
				func_606(1);
			}
		}
		if (_0xf83d3dda4d3c8169(1809565830) > 0)
		{
			if ((!func_339(1119149048, 1, 0) && !func_184((*Global_1835011)[23]->f_1)) && !Global_43891)
			{
				func_310(1119149048, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			}
			if (!func_1091(2))
			{
				func_606(2);
			}
		}
		if (_0xf83d3dda4d3c8169(2056119786) > 0 && !func_1091(4))
		{
			func_606(4);
		}
		if (func_1091(0))
		{
			func_1092(0);
		}
	}
	else
	{
		if (_0xf83d3dda4d3c8169(-1491419385) > 0)
		{
			if (func_339(1191437462, 1, 0))
			{
				func_637(1191437462, 1, 1, -142743235, 0);
			}
		}
		if (_0xf83d3dda4d3c8169(1809565830) > 0)
		{
			if (func_339(1119149048, 1, 0))
			{
				func_637(1119149048, 1, 1, -142743235, 0);
			}
		}
		if (func_1091(1))
		{
			func_1092(1);
		}
		if (func_1091(2))
		{
			func_1092(2);
		}
		if (func_1091(4))
		{
			func_1092(4);
		}
		if (!func_1091(0))
		{
			func_606(0);
		}
	}
}

void func_635()
{
	bVar0 = _unlock_is_unlocked(240039223);
	if (!bVar0)
	{
		return;
	}
	if (!func_319((*Global_1835011)[4]->f_1, 1))
	{
		return;
	}
	if (_unlock_is_unlocked(-236259196))
	{
		return;
	}
	Var1 = { func_1093() };
	if (!_0xb881ca836cc4b6d4(&Var1))
	{
		func_569(127400949);
		if (func_571(127400949, 0, 0, 0, 0, 0, 752097756, 0))
		{
			Var1 = { func_1093() };
		}
	}
	if (_0xb881ca836cc4b6d4(&Var1))
	{
		func_1094(-2055673461, Var1, 1423542233);
		func_1094(-202131179, Var1, -1264898804);
		func_1094(2013836545, Var1, 1592019450);
		func_1094(1497476650, Var1, 1117400455);
		func_1094(1063571467, Var1, 1150213537);
		func_1094(2107224237, Var1, 1598825281);
		func_1094(1747981656, Var1, -712527121);
		func_1094(-1371140647, Var1, 454332195);
		func_1094(-19142973, Var1, 256105670);
		func_1094(-2074737817, Var1, -1328061889);
		func_1094(-1114256243, Var1, -782241404);
		func_1094(-1653277288, Var1, 1669853467);
		func_1094(1869398132, Var1, -1559225678);
		func_1094(459868358, Var1, -266425508);
		if (!_0x3ab6c7b0bb0df4b1(Global_35, -1) && !func_29())
		{
			get_current_ped_weapon(Global_35, &iVar15, false, 2, false);
			get_current_ped_weapon(Global_35, &iVar16, false, 0, false);
			if (func_656(iVar16))
			{
				if (iVar16 != 127400949)
				{
					if (_is_weapon_one_handed(iVar16))
					{
						if (func_564(24))
						{
							set_current_ped_weapon(Global_35, iVar16, true, 3, false, false);
						}
						set_current_ped_weapon(Global_35, 127400949, true, 0, false, false);
					}
					else if (_is_weapon_two_handed(iVar16))
					{
						if ((func_564(24) && func_656(iVar15)) && iVar15 != 127400949)
						{
							set_current_ped_weapon(Global_35, iVar15, true, 3, false, false);
						}
						set_current_ped_weapon(Global_35, 127400949, true, 2, false, false);
					}
				}
			}
			else if (!func_656(iVar15))
			{
				set_current_ped_weapon(Global_35, 127400949, true, 2, false, false);
			}
			else if (iVar15 != 127400949)
			{
				if (func_564(24))
				{
					set_current_ped_weapon(Global_35, iVar15, true, 3, false, false);
				}
				set_current_ped_weapon(Global_35, 127400949, true, 2, false, false);
			}
		}
		_unlock_set_unlocked(-236259196, true);
	}
}

void func_636()
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

int func_637(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	if (!func_542(iParam0, 0))
	{
		return 0;
	}
	bVar0 = iParam3 == 562618531;
	bVar1 = iParam3 == 1992602754;
	bVar2 = iParam3 == -1387038764;
	iVar3 = func_985(iParam0, 1);
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
			func_622(iParam0, -iParam1, bVar0, bVar1, bVar2);
		}
		return 0;
	}
	if (!func_339(iParam0, 1, bParam4))
	{
		return 0;
	}
	Var5 = { func_619(iParam0) };
	if (_stat_id_is_valid(&Var5))
	{
		if ((func_546(iParam0, 0, 0) - iParam1) >= 0)
		{
			_0xbd861ae8a5181ed7(&Var5, iParam1);
		}
		else if ((func_546(iParam0, 0, 0) - iParam1) < 0)
		{
			func_637(iParam0, func_546(iParam0, 0, 0), bParam2, iParam3, bParam4);
			return 0;
		}
	}
	if (func_561(iParam0) == -427144552)
	{
		if (!func_1095(iParam0, iParam1, 0, iParam3))
		{
			return 0;
		}
	}
	else if (!func_1096(iParam0, iParam1, iParam3, bParam2, bParam4))
	{
		return 0;
	}
	if (iParam0 == -569063887)
	{
		Global_1935496->f_20 = 0;
	}
	if (!func_570(0))
	{
		bParam2 = true;
	}
	if (!bParam2 && iParam0 != 1309979101)
	{
		func_622(iParam0, -iParam1, bVar0, bVar1, bVar2);
	}
	func_1097(iParam0, iParam1);
	return 1;
}

bool func_638(int iParam0)
{
	switch (func_566(iParam0))
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

void func_639(int iParam0, bool bParam1, bool bParam2)
{
	switch (func_566(iParam0))
	{
		case -2061583405:
			bVar0 = func_1098(iParam0, &(Global_1946804->f_2657.f_21));
			break;
		case 81053684:
			bVar0 = func_1098(iParam0, &(Global_1946804->f_2657.f_23));
			break;
		case -999503751:
			bVar0 = func_1098(iParam0, &(Global_1946804->f_2657.f_20));
			break;
		case -525676072:
			bVar0 = func_1098(iParam0, &(Global_1946804->f_2657.f_22));
			break;
		case -1719060085:
			bVar0 = func_1098(iParam0, &(Global_1946804->f_2657.f_24));
			break;
		case -413129408:
			bVar0 = func_1098(iParam0, &(Global_1946804->f_2657.f_25));
			break;
	}
	if (!bVar0)
	{
		return;
	}
	if (bParam2)
	{
		func_1099();
	}
	if (bParam1)
	{
		func_1100(0, 0);
	}
}

int func_640(int iParam0)
{
	Var0 = { func_653(iParam0, 1, 0) };
	return func_654(Var0.f_4);
}

int func_641(int iParam0, int iParam1)
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

void func_642(int iParam0)
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
		iVar0 = func_641(iVar1, 1);
		if (iVar0 < 0 || iVar0 >= 39)
		{
		}
		else
		{
			func_1101(Global_1946804->f_1378.f_1[iVar0], 2, 6);
		}
	}
}

int func_643()
{
	return Global_1946804->f_1;
}

bool func_644(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)
{
	Var4 = func_1102(iParam6);
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
		func_1104(uParam0, func_1103(iVar0), 1);
	}
	while (_0xed4413cee1bf142c(&Var4))
	{
		if (!_0x44b3a36933ac009c(&iVar0, &Var4, 1409451727))
		{
		}
		else
		{
			iVar3 = iVar0;
			iVar1 = func_641(iVar3, 1);
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
							if (func_1105(iVar3) && func_1106(&(uParam0->f_1[iVar1]), iVar3, &iVar0))
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
							func_1107(uParam0, &(uParam0->f_1[&Global_1946804->f_2612[iVar1]]), &(Global_1946804->f_2612[iVar1]), 0, 0);
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

Vector3 func_645(int iParam0, int iParam1)
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

int func_646(int iParam0, int iParam1)
{
	vVar0 = { func_645(iParam0, iParam1) };
	return vVar0.x;
}

void func_647(var uParam0, int iParam1, int iParam2)
{
	*Global_26796.f_26[iParam2]->f_1.f_1[iParam1] = { *uParam0 };
	Global_26796.f_26[iParam2]->f_1.f_1[iParam1]->f_2 = (Global_26796.f_26[iParam2]->f_1.f_1[iParam1]->f_2 - Global_26796.f_26[iParam2]->f_1.f_1[iParam1]->f_2 & 1);
}

void func_648(int iParam0, int iParam1, int iParam2)
{
	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

bool func_649(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return false;
	}
	if (func_1108(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_1109(iParam0))
	{
		return false;
	}
	if (func_1110(iParam0))
	{
		return false;
	}
	if ((Global_1898164->f_163 && !func_1063(iParam0, 1)) || func_82(32768))
	{
		if (!func_1063(iParam0, 262144) || !Global_1905944->f_5696)
		{
			return false;
		}
	}
	if (!func_1111())
	{
		return false;
	}
	return true;
}

void func_650(int iParam0, int iParam1)
{
	uVar0 = Global_1905944[iParam0];
	set_bit(&uVar0, iParam1);
	(*Global_1905944)[iParam0] = uVar0;
}

void func_651(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 = (uParam0->f_2 - (uParam0->f_2 && iParam1));
}

void func_652(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (bParam4)
	{
		func_1112(16384);
	}
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	Var0.f_2 = iParam2;
	Var0.f_3 = iParam3;
	func_1113(Var0);
}

struct<5> func_653(int iParam0, bool bParam1, bool bParam2)
{
	Var0 = { func_1114(bParam1) };
	Var0.f_4 = 1084182731;
	switch (func_561(iParam0))
	{
		case -1037537535:
			if (!_inventory_fits_slot_id(iParam0, 1034665895))
			{
				Var0 = { func_1009(889965687, Var0, 1034665895, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, 889965687);
			}
			else
			{
				Var0.f_4 = 1034665895;
			}
			break;
		case -427144552:
			Var0 = { func_1115(bParam1) };
			if (bParam2 && func_1116(iParam0, 1))
			{
				Var5.f_9 = -1591664384;
				if (!func_1007(iParam0, &Var0, 1728382685, 0))
				{
					Var0.f_4 = 1728382685;
				}
				else if (!func_1007(iParam0, &Var0, -649335959, 0))
				{
					Var0.f_4 = -649335959;
				}
				else if (func_1008(iParam0, &Var5, 1728382685))
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
			Var0 = { func_1117(bParam1) };
			switch (func_566(iParam0))
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
			if (func_1118(iParam0, -1823706425))
			{
				Var0 = { func_1009(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, -1838434463);
			}
			else if (func_1118(iParam0, -1483207246))
			{
				Var0 = { func_1009(889965687, Var0, 1034665895, bParam1) };
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
				if (!func_1119(Var0, &Var27, bParam1, 0))
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

int func_654(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (Global_1946804->f_57[iVar0]->f_8 == iParam0)
		{
			return func_1120(iVar0, 1);
		}
		iVar0++;
	}
	return -358215195;
}

void func_655(int iParam0)
{
	func_1101(Global_1946804->f_1497.f_1[func_641(iParam0, 1)], 2, 6);
	func_1101(Global_1946804->f_1378.f_1[func_641(iParam0, 1)], 2, 6);
}

bool func_656(int iParam0)
{
	return (is_weapon_valid(iParam0) && iParam0 != -1569615261);
}

bool func_657(int iParam0)
{
	return iParam0 != 0;
}

int func_658(int iParam0)
{
	iVar0 = -1;
	if (!func_657(iParam0))
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

bool func_659(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

int func_660(int iParam0)
{
	return (shift_right(iParam0, 26) & 31 * func_1121(is_bit_set(iParam0, 31), -1, 1)) + 1898;
}

int func_661(int iParam0)
{
	return shift_right(iParam0, 22) & 15;
}

int func_662(int iParam0)
{
	return shift_right(iParam0, 17) & 31;
}

int func_663(int iParam0)
{
	return shift_right(iParam0, 12) & 31;
}

int func_664(int iParam0)
{
	return shift_right(iParam0, 6) & 63;
}

int func_665(int iParam0)
{
	return shift_right(iParam0, 0) & 63;
}

int func_666(int iParam0, int iParam1)
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

void func_667(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_1122(iParam0, iParam6);
	func_1123(iParam0, iParam5);
	func_1124(iParam0, iParam4);
	func_1125(iParam0, iParam3);
	func_1126(iParam0, iParam2);
	func_1127(iParam0, iParam1);
}

bool func_668(int iParam0)
{
	if (iParam0 == -15)
	{
		return false;
	}
	iVar0 = func_665(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return false;
	}
	iVar1 = func_664(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return false;
	}
	iVar2 = func_663(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return false;
	}
	iVar3 = func_660(iParam0);
	if ((iVar3 <= 0 || iVar3 > 1930) || iVar3 < 1866)
	{
		return false;
	}
	iVar4 = func_661(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return false;
	}
	iVar5 = func_662(iParam0);
	if (iVar5 < 1 || iVar5 > func_666(iVar4, iVar3))
	{
		return false;
	}
	return true;
}

bool func_669(int iParam0, bool bParam1)
{
	return func_962(func_277(), iParam0, bParam1);
}

void func_670(var uParam0, int iParam1)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

bool func_671(int iParam0, int iParam1)
{
	if (!func_542(iParam0, 0))
	{
		return false;
	}
	if (Global_1935630->f_12)
	{
		return false;
	}
	iVar0 = func_985(iParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_1057("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_1058(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_656(Var4.f_4))
			{
			}
			else if (_get_ammo_type_for_weapon(Var4.f_4) == iVar0)
			{
				func_1059(iVar1);
				return true;
			}
			iVar3++;
		}
		func_1059(iVar1);
	}
	return false;
}

var func_672(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
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
	func_1128(sParam0, sParam1, iParam2);
	return uVar20;
}

int func_673()
{
	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar2 = func_1129(iVar1);
		if (!_unlock_is_visible(func_1130(iVar2)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_674()
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		iVar1 = func_1129(iVar0);
		if (!_unlock_is_visible(func_1130(iVar1)))
		{
			_unlock_set_visible(func_1130(iVar1), true);
		}
		iVar0++;
	}
}

bool func_675(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_426(iParam0))
		{
			return false;
		}
	}
	return (Global_40.f_4942[iParam0] && iParam1) != 0;
}

bool func_676()
{
	return (func_191(&Global_1935630, 4096) || _get_number_of_references_of_script_with_name_hash(1637780761) > 0);
}

int func_677(var uParam0, int iParam1, int iParam2, int iParam3)
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
	if (!func_542(iVar0, 0))
	{
		return 0;
	}
	if (!func_1131(iVar0))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	iVar3 = 1;
	func_1132(iVar0, iVar1, &iVar3, 0);
	iVar4 = (iVar2 * iVar3);
	if (func_562(iVar0, 58855631))
	{
		iVar4 = iVar2;
	}
	Var5 = { func_653(iVar0, 0, 1) };
	iVar10 = func_1133(iVar0, &Var5, 0, 0);
	if (iVar10 == 0)
	{
		return 0;
	}
	else if (iVar10 < iVar4)
	{
		iVar2 = ceil((to_float(iVar10) / to_float(iVar3)));
		iVar4 = iVar10;
	}
	iVar11 = (func_1134(iVar0, iVar1, 1, 0, 0) * iVar2);
	if (iVar11 <= 0)
	{
		return 0;
	}
	if (!func_1135(iVar11))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	if (!func_310(iVar0, iVar4, 1, 0, 0, 1248274121, 0, 0, 0, 0))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	func_1090(iVar11, 0, 0, 0, 1);
	*iParam3 = (*iParam3 + iVar11);
	*iParam1 = (*iParam1 + iVar2);
	return 1;
}

var func_678(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
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

void func_679(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (is_string_null_or_empty(sParam1))
	{
		sParam1 = "FEED_MONEY_SPEND";
	}
	func_672(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 1831944558, 1, 859817522, 0, 0, 0, 1);
}

var func_680(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

void func_681(bool bParam0, bool bParam1)
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

void func_682(int iParam0, int iParam1, float fParam2, int iParam3)
{
	iVar0 = floor((to_float(iParam1) * fParam2));
	iVar1 = ((iParam1 - iVar0) / iParam3);
	if (func_952())
	{
		iVar2 = floor((to_float(iVar1) * 0.1f));
		_uilog_add_total_take_entry(1072517412, 908516622, _create_var_string(2, "MISSION_COMPLETE_TAKE_GANG"), _create_var_string(2, "MISSION_COMPLETE_TAKE_AMOUNT", iVar0), -1689362167);
	}
	else
	{
		_uilog_add_total_take_entry(2067252994, 908516622, _create_var_string(2, "MISSION_COMPLETE_TAKE_GANG"), _create_var_string(2, "MISSION_COMPLETE_TAKE_AMOUNT", iVar0), -1689362167);
	}
	iVar3 = iVar1;
	if (func_952())
	{
		iVar3 = (iVar3 + iVar2);
	}
	_0xe6dc9b21ac7a8729(func_186(iParam0), iVar3, iVar1, iParam3);
	iVar4 = func_264(iParam0);
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
					func_1136(1, iVar1);
					func_1136(8, iVar1);
					func_1136(7, iVar1);
					break;
				case 12:
					func_1136(6, iVar1);
					break;
				case 53:
					func_1136(3, iVar1);
					func_1136(7, iVar1);
					func_1136(4, iVar1);
					break;
				case 20:
					func_1136(8, iVar1);
					break;
				case 19:
					func_1136(1, iVar1);
					func_1136(2, iVar1);
					break;
				case 24:
					func_1136(3, iVar1);
					func_1136(9, iVar1);
					func_1136(20, iVar1);
					break;
				case 28:
					func_1136(1, iVar1);
					break;
				case 34:
					func_1136(23, iVar1);
					func_1136(2, iVar1);
					func_1136(18, iVar1);
					break;
				case 29:
					func_1136(0, iVar1);
					func_1136(9, iVar1);
					break;
				case 37:
					break;
				case 58:
					break;
				case 57:
					func_1136(0, iVar1);
					func_1136(3, iVar1);
					func_1136(2, iVar1);
					func_1136(11, iVar1);
					func_1136(6, iVar1);
					func_1136(25, iVar1);
					func_1136(24, iVar1);
					break;
			}
			break;
		case 8:
			switch (iVar4)
			{
				case 94:
					func_1136(5, iVar1);
					break;
				case 63:
					func_1136(1, iVar1);
					func_1136(3, iVar1);
					break;
				case 37:
					func_1136(23, iVar1);
					break;
				case 116:
					break;
			}
			break;
		case 11:
			if (iParam0 == func_355(0, 10, 11, 2116153146))
			{
				func_1136(7, iVar1);
				func_1136(4, iVar1);
			}
			else if (iParam0 == func_355(0, 7, 11, -379687487))
			{
				func_1136(8, iVar1);
				func_1136(15, iVar1);
			}
			else if (iParam0 == func_355(0, 8, 11, -1386089015))
			{
				func_1136(3, iVar1);
			}
			else if (iParam0 == func_355(0, 11, 11, -1952009645))
			{
				func_1136(6, iVar1);
				func_1136(3, iVar1);
			}
			else if (iParam0 == func_355(0, 12, 11, 2065895756))
			{
				func_1136(9, iVar1);
			}
			break;
	}
	_uilog_set_total_take_summary(_create_var_string(2, "MISSION_COMPLETE_TAKE_TOTAL", iParam1), _create_var_string(2, "MISSION_COMPLETE_TAKE_TOTAL_GANG", func_1137()));
	if (!func_1138(629))
	{
		func_317(629, 0);
	}
}

int func_683(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_3;
	}
	return 0;
}

bool func_684(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 17)
	{
		return false;
	}
	return true;
}

bool func_685(int iParam0, int iParam1, int iParam2)
{
	if (!func_684(iParam0))
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

int func_686()
{
	if (Global_1572887->f_12 == -1)
	{
		return 771;
	}
	return 20001;
}

int func_687(int iParam0, int iParam1, int iParam2)
{
	return ((iParam2 & 31 || shift_left(iParam0 & 1023, 5)) || shift_left(iParam1 & 16383, 15));
}

int func_688(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (!func_1139(iParam2))
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
	if (iParam3 < 0 || iParam3 > func_686())
	{
		return -1;
	}
	iVar0 = func_687(iParam0, iParam1, iParam2);
	iVar1 = iParam3;
	func_456(iVar1, 0);
	func_521(iVar1, 0);
	func_1140(iVar1, 0);
	func_1141(iVar1, 0);
	func_1142(iVar1, iVar0);
	if (iParam4 != 0)
	{
		func_1143(iVar1, iParam4);
	}
	return iVar1;
}

int func_689(int iParam0, bool bParam1, int iParam2)
{
	if (iParam2 != -1)
	{
		return iParam2;
	}
	fVar0 = 1f;
	if (bParam1 && func_339(1811977508, 1, 0))
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
			if (func_542(iVar25, 0) && func_562(iVar25, -1921346699))
			{
				return ceil((IntToFloat(&Var1.f_12[iVar24]) * fVar0));
			}
		}
		iVar24++;
	}
	return 0;
}

void func_690(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

int func_691(int iParam0)
{
	if (!func_183(iParam0))
	{
		return 0;
	}
	cVar0 = func_357(iParam0);
	if (is_string_null_or_empty(&cVar0))
	{
		return 0;
	}
	iVar1 = get_hash_key(&cVar0);
	iVar2 = iVar1;
	return iVar2;
}

bool func_692(int iParam0)
{
	return _0x4dac398297981b87(iParam0);
}

Vector3 func_693(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, bool bParam13)
{
	bVar2 = 9999999f;
	func_1144(&bVar12, &uVar13);
	bVar14 = false;
	if (bVar12)
	{
		if (func_1145() == 0 && !func_1146(0))
		{
			bVar14 = true;
		}
	}
	if (!func_1147(15, &Var15))
	{
		return 0f, 0f, 0f;
	}
	_0x748c5f51a18cb8f0(0);
	Var20 = { Var15 };
	if (bParam7)
	{
		bVar10 = func_1148();
		if (_does_volume_exist(bVar10))
		{
		}
	}
	if (!func_1149(Global_1310720->f_21))
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
			vVar7 = { func_1150(iVar0, iVar1) };
			bVar11 = func_1151(iVar0, iVar1);
			bVar3 = vdist(vParam0, vVar7);
			if (((((bVar3 < bVar2 && bVar3 > bParam10) && !func_386(vVar7)) && func_1152(iVar0, bParam8, iParam12)) && !func_1153(iVar0)) || bVar11)
			{
				if (func_1154(vVar7, iVar0, iVar1, iParam5, iParam6, bVar14, bVar10, bParam9, bParam13))
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

int func_694(vector3 vParam0, bool bParam3)
{
	iVar0 = func_1155(vParam0);
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

void func_695()
{
	disable_script_brain_set(1);
}

void func_696()
{
}

void func_697()
{
	disable_script_brain_set(2);
}

bool func_698(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_699(char* sParam0)
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

void func_700(int iParam0)
{
	if (func_698(iParam0, 1))
	{
		func_1156(1);
	}
}

int func_701()
{
	return -1904156936;
}

bool func_702(int iParam0)
{
	if (!func_183(iParam0))
	{
		return false;
	}
	switch (func_188(iParam0))
	{
		case 1:
			iVar0 = func_264(iParam0);
			return (((((((((((((iVar0 == 38 || iVar0 == 39) || iVar0 == 43) || iVar0 == 0) || iVar0 == 1) || iVar0 == 3) || iVar0 == 4) || iVar0 == 60) || iVar0 == 59) || iVar0 == 77) || iVar0 == 64) || iVar0 == 44) || iVar0 == 42) || iVar0 == 67);
		case 8:
			iVar1 = func_264(iParam0);
			return (((iVar1 == 67 || iVar1 == 82) || iVar1 == 83) || iVar1 == 1);
	}
	return false;
}

int func_703()
{
	return 166188472;
}

int func_704()
{
	return 2015838421;
}

int func_705()
{
	return 207908017;
}

var func_706(var uParam0, char* sParam1, var uParam2, int iParam3, int iParam4)
{
	vVar0.x = iParam3;
	vVar0.f_1 = sParam1;
	vVar0.f_2 = uParam2;
	uVar3 = _0x9f2cc2439a04e7ba(uParam0, &vVar0, iParam4);
	return uVar3;
}

var func_707(var uParam0, char* sParam1, int iParam2, int iParam3)
{
	Var0 = iParam2;
	Var0.f_1 = sParam1;
	uVar3 = _0x815c4065ae6e6071(uParam0, &Var0, iParam3);
	return uVar3;
}

void func_708(var uParam0)
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

int func_709(var uParam0, int iParam1)
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

char* func_710(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return "";
	}
	if (is_entity_a_ped(iParam0))
	{
		return func_1157(get_ped_index_from_entity_index(iParam0));
	}
	else if (is_entity_an_object(iParam0))
	{
		return func_1158(get_object_index_from_entity_index(iParam0));
	}
	else if (is_entity_a_vehicle(iParam0))
	{
		return func_1159(get_vehicle_index_from_entity_index(iParam0));
	}
	return "";
}

int func_711(var uParam0, char* sParam1)
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

int func_712(var uParam0)
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

void func_713(var uParam0, int iParam1)
{
	uParam0->f_2054 = (uParam0->f_2054 || iParam1);
}

void func_714(var uParam0, int iParam1)
{
	uParam0->f_8 = (uParam0->f_8 || iParam1);
}

int func_715()
{
	return Global_1572864->f_8;
}

void func_716(var uParam0, int iParam1)
{
	func_1160(uParam0, iParam1);
	func_1161(uParam0, iParam1, 26);
}

bool func_717(var uParam0)
{
	if (!does_entity_exist(iLocal_105))
	{
		iLocal_105 = create_object(-494496318, 1883.958f, -1877.707f, 30.8094f, true, true, false, false, true);
	}
	if (func_120(uParam0, 8388608) || func_82(32768))
	{
		set_entity_coords(func_1162(20), 1905.324f, -1851.992f, 41.0647f, true, false, true, true);
	}
	if (func_120(uParam0, 4))
	{
		set_gameplay_cam_relative_heading(123f, 1f);
		set_gameplay_cam_relative_pitch(0f, 1f);
		if (!does_entity_exist(iLocal_227))
		{
			func_1163(uParam0);
		}
		if (does_entity_exist(iLocal_227))
		{
			iVar0 = 0;
			while (iVar0 < 1)
			{
				if (_0xa0bc8faed8cfeb3c(_get_ped_in_draft_seat(iLocal_227, iVar0)))
				{
					return true;
				}
				else
				{
					return false;
				}
				iVar0++;
			}
		}
	}
	func_178();
	func_1164(1);
	return uParam0->f_607 == uParam0->f_607;
}

bool func_718(var uParam0)
{
	if (!is_entity_dead(func_252(uParam0)))
	{
		set_animal_tuning_bool_param(func_252(uParam0), 48, true);
	}
	create_model_hide(1115.19f, -1305.3f, 65.53f, 1f, 159788540, true);
	func_1165(19, 0, 0);
	set_blocking_of_non_temporary_events(&(Local_193[1]), true);
	func_911(19, 1);
	func_853(&(uParam0->f_7375), Local_31.f_25, 264160, 0, 0, 0);
	func_851(uParam0);
	return uParam0->f_607 == uParam0->f_607;
}

bool func_719(var uParam0)
{
	if (!does_entity_exist(iLocal_227))
	{
		func_1163(uParam0);
	}
	if (does_entity_exist(iLocal_227))
	{
		vVar0 = { get_entity_coords(iLocal_227, true, false) };
		set_vehicle_extra(iLocal_227, 1, true);
		set_vehicle_extra(iLocal_227, 2, true);
		set_vehicle_extra(iLocal_227, 3, true);
		set_entity_visible(iLocal_227, true);
	}
	if (!is_ped_in_vehicle(Global_35, iLocal_227, false))
	{
		set_ped_into_vehicle(Global_35, iLocal_227, -1);
		set_ped_into_vehicle(&(Local_193[1]), iLocal_227, 0);
	}
	_0xba8818212633500a(iLocal_227, 7, 1);
	func_1165(19, 0, 0);
	func_911(19, 1);
	func_433(19, 1);
	func_27(&uLocal_230, 1);
	func_1166();
	iLocal_62 = func_1167(-308585968, Local_31, 1);
	iVar3 = 0;
	while (iVar3 < 6)
	{
		iVar4 = _get_ped_in_draft_seat(iLocal_227, iVar3);
		if (!func_907(iVar4, 0))
		{
		}
		else
		{
			_set_attribute_core_value(iVar4, 1, 100);
		}
		iVar3++;
	}
	func_1168();
	_0x0d7fd6a55fd63aef(10, 3, 0);
	_0x0d7fd6a55fd63aef(11, 3, 0);
	_0x0d7fd6a55fd63aef(13, 3, 0);
	return uParam0->f_607 == uParam0->f_607;
}

int func_720(var uParam0)
{
	func_1169(uParam0);
	func_1170(uParam0);
	func_1171(uParam0);
	func_1172(uParam0);
	func_1173(uParam0);
	func_1174(uParam0);
	func_1175(uParam0);
	switch (func_1176(uParam0))
	{
		case 0:
			func_1177(Global_35, _0xf70f00013a62f866(Local_31.f_8), 0, 30f, 20f, 10f, 5f, 1, 1, 1, 0);
			if (func_1178(Global_35, Local_31.f_9, 1, 0) || func_1179())
			{
				func_1177(Global_35, _0xf70f00013a62f866(Local_31.f_8), 0, 70f, 60f, 50f, 40f, 1, 1, 1, 0);
			}
			else if (is_entity_in_volume(Global_35, Local_31.f_8, true, 0) || ((is_entity_in_volume(Global_35, Local_31.f_8, true, 0) && is_entity_in_volume(&(Local_193[1]), Local_31.f_10, true, 0)) && !is_entity_in_volume(Global_35, Local_31.f_9, true, 0)))
			{
				bring_vehicle_to_halt(iLocal_227, 4f, -1, false);
				func_174(Local_31);
				func_1180(1);
				set_current_ped_weapon(Global_35, -1569615261, false, 0, false, false);
				task_swap_weapon(Global_35, 0, 0, 0, 0);
				if (does_blip_exist(iLocal_62))
				{
					remove_blip(&iLocal_62);
				}
				if (!is_entity_dead(&(Local_115[0])) && _0x9fa00e2fc134a9d0(&(Local_193[1])))
				{
					func_1181(19);
					func_1182(uParam0, "SUS1_S1_OBJ3", -1082130432, 0, 0, -1, -1, 0);
				}
				else if (!is_entity_dead(&(Local_115[0])) && !_0x9fa00e2fc134a9d0(&(Local_193[1])))
				{
					func_1181(19);
					func_1182(uParam0, "SUS1_S1_OBJ3", -1082130432, 0, 0, -1, -1, 0);
				}
				if (_0x9fa00e2fc134a9d0(iLocal_227))
				{
					func_1183(iLocal_227);
				}
				clear_gps_multi_route();
				clear_gps_custom_route();
				set_gps_active(false);
				return 1;
			}
			break;
	}
	return 0;
}

bool func_721(var uParam0)
{
	func_1184();
	func_1185();
	return uParam0->f_607 == uParam0->f_607;
}

void func_722(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10)
{
	func_140(uParam0, iParam1, iParam9);
	func_1186(uParam0, iParam1);
	func_1161(uParam0, iParam1, iParam2);
	func_1187(uParam0, &iParam3, iParam1, 0);
	func_1187(uParam0, &iParam4, iParam1, 2);
	func_1187(uParam0, &iParam5, iParam1, 4);
	func_1187(uParam0, &iParam6, iParam1, 5);
	func_1187(uParam0, &iParam7, iParam1, 7);
	func_880(uParam0, iParam1, 0);
	StringCopy(&cVar0, sParam8, 32);
	func_1188(uParam0, iParam1, cVar0);
	func_1189(uParam0, iParam1, iParam10);
}

bool func_723(var uParam0)
{
	if (is_vehicle_driveable(iLocal_227, false, false) && !is_entity_dead(&(Local_193[1])))
	{
		set_ped_into_vehicle(&(Local_193[1]), iLocal_227, 0);
		set_ped_into_vehicle(Global_35, iLocal_227, -1);
	}
	create_model_hide(1115.19f, -1305.3f, 65.53f, 1f, 159788540, true);
	func_178();
	return uParam0->f_607 == uParam0->f_607;
}

bool func_724(var uParam0)
{
	func_851(uParam0);
	return uParam0->f_607 == uParam0->f_607;
}

bool func_725(var uParam0)
{
	func_1180(1);
	func_27(&uLocal_230, 1);
	func_1190(uParam0);
	func_1191(-18102128, 1, 0f, 0, 1, 0f, 0, 0);
	func_1191(1151226872, 1, 0f, 0, 1, 0f, 0, 0);
	func_1191(1485561723, 1, 0f, 0, 1, 0f, 0, 0);
	func_1191(-750353502, 1, 0f, 0, 1, 0f, 0, 0);
	func_864(uParam0);
	iVar0 = get_interior_at_coords(1109.29f, -1302.8f, 66.22f);
	if (!is_interior_entity_set_active(iVar0, "rad_house_int_medicine"))
	{
		activate_interior_entity_set(iVar0, "rad_house_int_medicine", 0);
	}
	_0xcb9401f918cb0f75(Global_35, "ForceHandsOnBelt", 1, -1);
	return uParam0->f_607 == uParam0->f_607;
}

int func_726(var uParam0)
{
	func_1192(uParam0);
	func_1193(uParam0);
	func_1173(uParam0);
	func_1174(uParam0);
	func_1194(uParam0, 0);
	switch (func_1176(uParam0))
	{
		case 0:
			if (!func_1195(uLocal_77, 128))
			{
				if (is_entity_dead(&(Local_115[0])))
				{
					func_794(&uLocal_77, 128);
				}
			}
			if (func_1196(Global_35, _0xf70f00013a62f866(Local_31.f_8), &uLocal_248, 45f, 30f, 25f, 24f, 1f, 0, 0, 1, 1, 1) || (!is_ped_in_any_vehicle(Global_35, false) && func_1197(1)))
			{
				func_134(uParam0, 1);
			}
			break;
		case 1:
		case 2:
			set_player_may_not_enter_any_vehicle(player_id());
			_0x9f9a829c6751f3c7(player_id(), 28, 1);
			if (has_anim_event_fired(&(Local_193[1]), 111373670) && func_1176(uParam0) == 1)
			{
				func_134(uParam0, 2);
			}
			if (func_1198(Global_35, Local_31.f_3, 1))
			{
				return 1;
			}
			break;
	}
	return 0;
}

bool func_727(var uParam0)
{
	_0xcb9401f918cb0f75(Global_35, "ForceHandsOnBelt", 0, -1);
	func_1185();
	func_435(&(Local_115[0]->f_2));
	return uParam0->f_607 == uParam0->f_607;
}

bool func_728(var uParam0)
{
	func_1199(Global_35, func_216(0, 2), 2, 1073741824);
	iVar0 = add_cover_point(1115.12f, -1305.28f, 65.6f, 6f, 1, 2, 4, false);
	task_put_ped_directly_into_cover(&(Local_193[1]), 1115.12f, -1305.28f, 65.6f, -1, 0, 0f, 0, 0, iVar0, 0, 1, 0);
	func_1200(-668482597, 1000, 0, 1, 1, 0, 0, 0);
	func_1201(&uLocal_260, 20f, 0);
	func_1202(&(Local_115[1]), 1);
	create_model_hide(1115.19f, -1305.3f, 65.53f, 1f, 159788540, true);
	set_ped_config_flag(&(Local_193[1]), 248, true);
	iVar1 = get_interior_at_coords(1109.29f, -1302.8f, 66.22f);
	if (!is_interior_entity_set_active(iVar1, "rad_house_int_medicine"))
	{
		activate_interior_entity_set(iVar1, "rad_house_int_medicine", 0);
	}
	if (!_0xa0bc8faed8cfeb3c(&(Local_193[1])))
	{
		return false;
	}
	door_system_set_open_ratio(-18102128, 0f, 1);
	door_system_set_open_ratio(1151226872, 0f, 1);
	door_system_set_open_ratio(1485561723, 0f, 1);
	door_system_set_open_ratio(-750353502, 0f, 1);
	return uParam0->f_607 == uParam0->f_607;
}

bool func_729(var uParam0)
{
	func_851(uParam0);
	func_1203(uParam0, "1-LeftApproach-MultiStart");
	func_1203(uParam0, "2-RightApproach-MultiStart");
	func_1203(uParam0, "3-NormalStart");
	func_1204(uParam0, "3-NormalStart");
	return uParam0->f_607 == uParam0->f_607;
}

bool func_730(var uParam0)
{
	func_1182(uParam0, "SUS1_S3_OBJ1", -1082130432, 0, 0, -1, -1, 0);
	func_27(&uLocal_230, 1);
	set_blocking_of_non_temporary_events(&(Local_193[1]), true);
	return uParam0->f_607 == uParam0->f_607;
}

int func_731(var uParam0)
{
	set_player_may_not_enter_any_vehicle(player_id());
	_0x9f9a829c6751f3c7(player_id(), 28, 1);
	func_1205(uParam0);
	func_1206(uParam0);
	func_1207();
	func_1208();
	func_1173(uParam0);
	func_1194(uParam0, 0);
	func_1209();
	func_1174(uParam0);
	if (_0x3ab6c7b0bb0df4b1(Global_35, &(uLocal_67[2])) || _is_anim_scene_finished(&(uLocal_67[2]), false))
	{
		_0xe296208c273bd7f0(-1, -1, 0, 17, 1, 0);
	}
	switch (func_1176(uParam0))
	{
		case 0:
			if (((!func_907(&(Local_115[1]), 2) || !func_907(&(Local_115[1]), 0)) && (!func_907(&(Local_115[2]), 2) || !func_907(&(Local_115[2]), 0))) && (!func_907(&(Local_115[0]), 2) || !func_907(&(Local_115[0]), 0)))
			{
				func_435(&iLocal_64);
				func_27(&(Local_193[0]->f_4), 1);
				func_134(uParam0, 2);
			}
			if (func_1210() == 16)
			{
				return 1;
			}
			break;
		case 2:
			if (func_1210() == 16)
			{
				return 1;
			}
			break;
	}
	return 0;
}

bool func_732(var uParam0)
{
	if (_does_metaped_outfit_exist_for_ped_model(2081154332, 1038525765))
	{
		if (does_entity_exist(iLocal_106))
		{
			delete_object(&iLocal_106);
		}
	}
	_0xe296208c273bd7f0(-1, -1, 0, 17, 1, 0);
	_delete_anim_scene(&(uLocal_67[1]));
	if (does_blip_exist(iLocal_64))
	{
		remove_blip(&iLocal_64);
	}
	func_1185();
	return uParam0->f_607 == uParam0->f_607;
}

bool func_733(var uParam0)
{
	if (!is_ped_on_mount(Global_35))
	{
		_set_ped_on_mount(Global_35, Local_115[6]->f_1, -1, true);
	}
	if (!is_ped_on_mount(&(Local_193[1])))
	{
		_set_ped_on_mount(&(Local_193[1]), Local_115[6]->f_1, 0, true);
	}
	if (func_120(uParam0, 4))
	{
		_set_ped_on_mount(&(Local_115[3]), Local_115[3]->f_1, -1, true);
		_0x06d26a96ca1bca75(Local_115[3]->f_1, 3, 0f, 0);
	}
	func_1199(Local_115[3]->f_1, func_216(4, 2), 2, 1073741824);
	_0xdd1232b332cbb9e7(3, 1, 0);
	func_1211(uParam0, "2-RightApproach-MultiStart");
	func_1204(uParam0, "2-RightApproach-MultiStart");
	if (!has_ped_got_weapon(&(Local_193[1]), 379542007, 0, false))
	{
		func_1212(&(Local_193[1]), 379542007, -1, 1, 0, 1056964608, 1065353216, 0);
		set_current_ped_weapon(&(Local_193[1]), 379542007, false, 0, false, false);
	}
	func_864(uParam0);
	if (func_443(1632247697) && _0xa0bc8faed8cfeb3c(&(Local_193[1])))
	{
		func_444(&(Local_193[1]), -405718983);
	}
	else if (!func_443(1632247697) && _0xa0bc8faed8cfeb3c(&(Local_193[1])))
	{
		func_444(&(Local_193[1]), 1085627780);
	}
	if (func_120(uParam0, 4))
	{
		_give_weapon_to_ped_2(&(Local_193[0]), -183018591, 0, true, false, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
	}
	set_gameplay_cam_relative_heading(0f, 1f);
	set_gameplay_cam_relative_pitch(0f, 1f);
	return uParam0->f_607 == uParam0->f_607;
}

bool func_734(var uParam0)
{
	if (_0x5da36cccb63c0895(&(Local_193[0]), 1, 1))
	{
		_0x7e8f9949b7aabbf0(&(Local_193[0]), 1, 1);
	}
	func_851(uParam0);
	if (does_entity_exist(&(Local_115[5])))
	{
		set_entity_visible(&(Local_115[5]), true);
	}
	if (does_entity_exist(Local_115[5]->f_1))
	{
		set_entity_visible(Local_115[5]->f_1, true);
	}
	func_1213(Local_115[5]->f_1, 551416228);
	iVar0 = 3;
	while (iVar0 <= 4)
	{
		if (does_entity_exist(Local_115[iVar0]->f_1) && does_entity_exist(Local_115[iVar0]->f_1))
		{
			set_entity_visible(&(Local_115[iVar0]), true);
			set_entity_visible(Local_115[iVar0]->f_1, true);
		}
		func_1213(Local_115[iVar0]->f_1, 551416228);
		iVar0++;
	}
	if (!does_entity_exist(Local_115[6]->f_1))
	{
		Local_115[6]->f_1 = func_1216(&(iLocal_307[6]), func_1214(0, 6), func_1215(0, 6), 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
	}
	func_1213(Local_115[6]->f_1, 0);
	if (!does_entity_exist(iLocal_113) && !has_ped_got_weapon(&(Local_193[0]), -183018591, 0, false))
	{
		iLocal_113 = _create_weapon_object(-183018591, 1, 1110.93f, -1295.82f, 65.72f, true, 1f);
	}
	func_151(uParam0, Global_35, "ARTHUR", 0, 0, 0, 0);
	func_151(uParam0, &(Local_193[1]), "SusanGrimshaw", 0, 0, 0, 0);
	func_151(uParam0, &(Local_193[0]), "TILLY", 0, 0, 0, 0);
	func_151(uParam0, Local_115[6]->f_1, "HORSE_01", 0, 0, 0, 0);
	func_412(uParam0, iLocal_113, "w_repeater_carbine01", 0, 0, 0, 0);
	return uParam0->f_607 == uParam0->f_607;
}

bool func_735(var uParam0)
{
	set_ped_config_flag(&(Local_115[5]), 277, true);
	func_134(uParam0, 0);
	func_27(&uLocal_230, 1);
	func_119(0, 0);
	func_1217(1);
	set_ped_accuracy(&(Local_193[1]), 5);
	func_1199(&(Local_193[0]), func_216(6, 2), 2, 1073741824);
	func_1199(Local_115[5]->f_1, func_216(4, 3), 2, 1073741824);
	func_1199(Local_115[4]->f_1, func_216(4, 1), 2, 1073741824);
	if (!is_entity_dead(Local_115[6]->f_1))
	{
		set_ped_can_be_knocked_off_vehicle(&(Local_193[1]), 1);
	}
	clear_ped_tasks_immediately(Local_115[5]->f_1, false, true);
	clear_ped_tasks_immediately(Local_115[3]->f_1, false, true);
	clear_ped_tasks_immediately(Local_115[4]->f_1, false, true);
	set_blocking_of_non_temporary_events(Local_115[6]->f_1, true);
	force_ped_motion_state(Local_115[5]->f_1, -1115154469, false, 0, false);
	force_ped_motion_state(Local_115[3]->f_1, -1115154469, false, 0, false);
	force_ped_motion_state(Local_115[4]->f_1, -1115154469, false, 0, false);
	func_851(uParam0);
	uLocal_286 = _0xfa50f79257745e74(773.037f, -1174.548f, 45.06f, 3f, 3, -1, 0);
	_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_ANTONY_FOREMAN"));
	_0xc6dcc2a3a8825c85(1);
	set_vehicle_density_multiplier_this_frame(0f);
	clear_area(get_entity_coords(Global_35, true, false), 250f, 8);
	_0xa769d753922b031b(&(Local_193[1]), 1f, 1f);
	set_ped_accuracy(&(Local_193[1]), 0);
	set_blocking_of_non_temporary_events(&(Local_193[1]), true);
	set_ped_config_flag(&(Local_193[1]), 192, true);
	set_ped_config_flag(&(Local_193[1]), 307, true);
	set_decision_maker(&(Local_193[1]), -1143637011);
	if (_does_anim_scene_exist(&(uLocal_67[5])))
	{
		_delete_anim_scene(&(uLocal_67[5]));
	}
	if (_does_anim_scene_exist(&(uLocal_67[6])))
	{
		_delete_anim_scene(&(uLocal_67[6]));
	}
	set_current_ped_weapon(Global_35, -1569615261, false, 0, false, false);
	return uParam0->f_607 == uParam0->f_607;
}

int func_736(var uParam0)
{
	func_1218(uParam0);
	func_1219(uParam0);
	func_1220();
	func_1221();
	func_1222();
	func_1223();
	func_1224();
	set_vehicle_density_multiplier_this_frame(0f);
	set_random_vehicle_density_multiplier_this_frame(0f);
	_0xbbadfb5e5e5766fb(get_player_index(), 0.5f);
	switch (func_1176(uParam0))
	{
		case 0:
			func_1225();
			if (func_1226(0) == 1)
			{
				func_213(&uLocal_230);
				if (func_1227(&(Local_115[3]), Global_35) && func_1227(&(Local_115[4]), Global_35))
				{
					func_1228(uParam0, 807491215);
				}
				func_134(uParam0, 29);
			}
			break;
		case 29:
			if (!func_1229())
			{
				return 1;
			}
			break;
	}
	return 0;
}

bool func_737(var uParam0)
{
	set_ped_config_flag(&(Local_115[5]), 277, false);
	set_time_scale(1f);
	func_1185();
	return uParam0->f_607 == uParam0->f_607;
}

bool func_738(var uParam0)
{
	func_1199(&(Local_115[5]), func_216(2, 4), 4, 1073741824);
	func_1199(Local_115[5]->f_1, func_216(2, 4), 4, 1073741824);
	func_1230(&(Local_115[5]), Local_115[5]->f_1, 0, -1, 1);
	if (!does_entity_exist(Local_115[6]->f_1))
	{
		Local_115[6]->f_1 = func_1216(&(iLocal_307[6]), func_1214(0, 6), func_1215(0, 6), 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
	}
	func_1199(Local_115[6]->f_1, func_216(0, 5), 2, 1073741824);
	func_1230(Global_35, Local_115[6]->f_1, 0, -1, 1);
	func_1230(&(Local_193[1]), Local_115[6]->f_1, 0, 0, 1);
	set_entity_visible(&(Local_115[5]), true);
	set_entity_visible(Local_115[5]->f_1, true);
	_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_ANTONY_FOREMAN"));
	if (!has_ped_got_weapon(&(Local_193[1]), 379542007, 0, false))
	{
		func_1212(&(Local_193[1]), 379542007, -1, 1, 0, 1056964608, 1065353216, 0);
		set_current_ped_weapon(&(Local_193[1]), 379542007, false, 0, false, false);
	}
	if (!_0xa0bc8faed8cfeb3c(Local_115[6]->f_1))
	{
		return false;
	}
	set_gameplay_cam_relative_heading(0f, 1f);
	set_gameplay_cam_relative_pitch(0f, 1f);
	return uParam0->f_607 == uParam0->f_607;
}

bool func_739(var uParam0)
{
	func_851(uParam0);
	func_517(&uLocal_287);
	return uParam0->f_607 == uParam0->f_607;
}

bool func_740(var uParam0)
{
	set_current_ped_weapon(Global_35, 2055893578, true, 0, true, false);
	_0xcffc3eccd7a5cceb(get_player_index(), 2055893578, 0);
	func_27(&uLocal_230, 1);
	set_blocking_of_non_temporary_events(&(Local_193[1]), true);
	set_ped_config_flag(&(Local_193[1]), 192, true);
	set_ped_config_flag(&(Local_193[1]), 307, true);
	clear_ped_tasks(&(Local_193[1]), 1, 0);
	set_decision_maker(&(Local_193[1]), -1143637011);
	set_ped_can_be_knocked_off_vehicle(&(Local_115[5]), 2);
	remove_all_ped_weapons(&(Local_193[0]), true, true);
	if (func_443(1632247697) && _0xa0bc8faed8cfeb3c(&(Local_193[1])))
	{
		func_444(&(Local_193[1]), -405718983);
	}
	else if (!func_443(1632247697) && _0xa0bc8faed8cfeb3c(&(Local_193[1])))
	{
		func_444(&(Local_193[1]), 1085627780);
	}
	return uParam0->f_607 == uParam0->f_607;
}

int func_741(var uParam0)
{
	func_1231(uParam0);
	func_1232(uParam0);
	func_1233();
	func_1222();
	func_1225();
	func_1234();
	func_1235();
	set_vehicle_density_multiplier_this_frame(0f);
	set_random_vehicle_density_multiplier_this_frame(0f);
	switch (func_1176(uParam0))
	{
		case 0:
			if (_is_ped_hogtied(&(Local_115[5])) || is_ped_performing_melee_action(Global_35, 16384, 0))
			{
				task_clear_look_at(&(Local_193[1]));
				func_1236(uParam0, "SUS1_S6_HOGTIE", 0);
				if (!is_entity_dead(Local_115[6]->f_1) && !is_entity_dead(Local_115[5]->f_1))
				{
					if (_get_rider_of_mount(Local_115[6]->f_1, true) == 0)
					{
						if (func_836(Local_115[6]->f_1, Global_35, 1, 1) > 8f && !func_1237(Local_115[6]->f_1, 1227113341))
						{
							task_go_to_entity(Local_115[6]->f_1, Global_35, -1, 7.5f, 1.25f, 5f, 0);
						}
					}
				}
				return 1;
			}
			break;
	}
	return 0;
}

bool func_742(var uParam0)
{
	func_1185();
	return uParam0->f_607 == uParam0->f_607;
}

bool func_743(var uParam0)
{
	func_1199(&(Local_115[5]), func_216(2, 4), 2, 1073741824);
	task_carriable(&(Local_115[5]), _get_optimal_carry_config(&(Local_115[5]), 1), 0, 0, 0);
	_0x18ff3110cf47115d(&(Local_115[5]), 1, 0);
	if (!does_blip_exist(Local_115[5]->f_2))
	{
		Local_115[5]->f_2 = _blip_add_for_entity(831283580, &(Local_115[5]));
		set_blip_sprite(Local_115[5]->f_2, -1489164512, true);
		_blip_set_modifier(Local_115[5]->f_2, 231194138);
	}
	set_entity_visible(&(Local_115[5]), true);
	_0xff745b0346e19e2c(_get_optimal_carry_config(&(Local_115[5]), 1));
	func_171();
	if (!does_entity_exist(Local_115[6]->f_1))
	{
		Local_115[6]->f_1 = func_1216(&(iLocal_307[6]), func_1214(0, 6), func_1215(0, 6), 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
		set_animal_tuning_bool_param(Local_115[6]->f_1, 48, true);
		func_1238(&(Local_14.f_1), 1);
		_0x437c08db4febe2bd(Local_115[6]->f_1, "MalePassenger", 1f, -1);
		func_1213(Local_115[6]->f_1, 0);
		_0x2eb75fb86c41f026(Local_115[6]->f_1, 3, 0);
		_0x06d26a96ca1bca75(Local_115[6]->f_1, 3, 0f, 0);
		return false;
	}
	func_1199(Local_115[6]->f_1, func_216(3, 5), 2, 1073741824);
	_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_ANTONY_FOREMAN"));
	set_blocking_of_non_temporary_events(&(Local_193[1]), true);
	func_1199(&(Local_193[1]), func_216(5, 5), 2, 1073741824);
	func_864(uParam0);
	func_178();
	remove_all_ped_weapons(&(Local_193[0]), true, true);
	if (_0xb8f52a3f84a7cc59(_get_optimal_carry_config(&(Local_115[5]), 1)))
	{
		return uParam0->f_607 == uParam0->f_607;
		return true;
	}
	return false;
}

bool func_744(var uParam0)
{
	return uParam0->f_607 == uParam0->f_607;
}

bool func_745(var uParam0)
{
	func_1204(uParam0, "1-Start");
	func_149(uParam0, 40f);
	func_1239(&(Local_115[1]), 1);
	_0x2eb75fb86c41f026(Local_115[6]->f_1, 3, 0);
	func_1240(uParam0, "SUS1_S7_OBJ_RET", 0, 7500, 0, -1082130432, 0, 0, -1, -1, 0);
	func_517(&uLocal_230);
	return uParam0->f_607 == uParam0->f_607;
}

int func_746(var uParam0)
{
	func_1241(uParam0);
	func_1242(uParam0);
	func_1243(uParam0);
	func_1234();
	func_1235();
	func_1244(uParam0);
	func_1245(uParam0);
	_0x785177e4d57d7389(player_id(), -1728509733, 0, 0, -1);
	_0xc3abcfbc7d74afa5(Local_115[5]->f_1, 6, 1);
	if (!is_entity_dead(&(Local_115[5])))
	{
		_0x6569f31a01b4c097(&(Local_115[5]), 7, 0);
		_0x6569f31a01b4c097(&(Local_115[5]), 5, 0);
		_0x6569f31a01b4c097(&(Local_115[5]), 4, 0);
		_0x6569f31a01b4c097(&(Local_115[5]), 1, 0);
		_0x6569f31a01b4c097(&(Local_115[5]), 0, 0);
	}
	switch (func_1176(uParam0))
	{
		case 0:
			if (func_1246(Global_35, func_176(1, 2), &uLocal_251, 30f, 12f, 9f, 7f, 2f, 1, 0, 1, 1, 0))
			{
			}
			func_1247(&(uParam0->f_7375), &(Local_115[5]), "ANTONYFOREMEN", 0, 0, 0);
			if (!func_1195(uLocal_77, 256))
			{
				if (func_1248(Global_35) && func_1250(func_1249(Global_35), &(Local_115[5])))
				{
					func_794(&uLocal_77, 256);
				}
			}
			if (func_1251(&(Local_115[5]), func_176(1, 2), 5f, 1, 1) && _0x61914209c36efddb(&(Local_115[5])) == 6)
			{
				if (!func_26(&uLocal_230))
				{
					func_27(&uLocal_230, 1);
					func_134(uParam0, 1);
				}
			}
			if (is_entity_in_volume(Global_35, Local_31.f_23, true, 0) && func_1252(Global_35, &(Local_193[1]), 0f))
			{
				disable_control_action(2, -762150781, false);
			}
			if (((func_836(&(Local_115[5]), &(Local_193[1]), 1, 1) < 7.5f && _0x61914209c36efddb(&(Local_115[5])) == 5) && _0x61914209c36efddb(&(Local_115[5])) != 9) && !func_1237(Local_115[6]->f_1, 713668775))
			{
				set_ped_config_flag(Local_115[6]->f_1, 355, true);
				task_follow_nav_mesh_to_coord(Local_115[6]->f_1, 1112.009f, -1317.201f, 63.9672f, 1f, -1, 0.25f, 5242880, 40000f);
			}
			break;
		case 1:
			_0xe296208c273bd7f0(-1, -1, 0, 17, 1, 0);
			_0xc9caeaeec1256e54(-1679307491);
			func_1253();
			if (func_846(&uLocal_230) > 2f)
			{
				return 1;
			}
			if ((is_entity_in_volume(Global_35, Local_31.f_23, true, 0) && func_1252(Global_35, &(Local_193[1]), 0f)) && func_846(&uLocal_230) > 1.5f)
			{
				return 1;
			}
			break;
	}
	return 0;
}

bool func_747(var uParam0)
{
	func_1185();
	return uParam0->f_607 == uParam0->f_607;
}

bool func_748(var uParam0)
{
	clear_ped_tasks_immediately(&(Local_115[5]), true, true);
	if (!is_entity_dead(func_208(7)))
	{
		task_carriable(&(Local_115[5]), _get_optimal_carry_config(&(Local_115[5]), 1), func_208(7), 0, 0);
		_set_ped_on_mount(Global_35, func_208(7), -1, true);
	}
	_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_ANTONY_FOREMAN"));
	_0x18ff3110cf47115d(&(Local_115[5]), 1, 0);
	set_entity_visible(&(Local_115[5]), true);
	func_1247(&(uParam0->f_7375), &(Local_115[5]), "ANTONYFOREMEN", 0, 0, 0);
	func_1204(uParam0, "1-Start");
	remove_all_ped_weapons(&(Local_193[0]), true, true);
	return uParam0->f_607 == uParam0->f_607;
}

bool func_749(var uParam0)
{
	func_1254(Local_31.f_18, 0);
	clear_ped_tasks_immediately(&(Local_193[1]), true, true);
	clear_ped_tasks_immediately(&(Local_193[0]), true, true);
	func_151(uParam0, &(Local_193[1]), "SusanGrimshaw", 1, 0, 0, 0);
	clear_ped_tasks_immediately(Global_35, true, true);
	func_151(uParam0, Global_35, "ARTHUR", 0, 0, 0, 0);
	func_151(uParam0, &(Local_193[0]), "TILLY", 0, 0, 0, 0);
	detach_entity(&(Local_115[5]), false, false);
	clear_ped_tasks_immediately(&(Local_115[5]), true, true);
	if (!is_entity_dead(&(Local_115[5])))
	{
		if (is_entity_attached(&(Local_115[5])))
		{
		}
	}
	if (!is_entity_dead(iLocal_227))
	{
		iVar0 = 0;
		while (iVar0 < 6)
		{
			if (!is_entity_dead(iLocal_227))
			{
				if (does_entity_exist(_get_ped_in_draft_seat(iLocal_227, iVar0)))
				{
				}
			}
			iVar0++;
		}
		if (!is_entity_dead(iLocal_227))
		{
			if (does_entity_exist(_get_ped_in_draft_seat(iLocal_227, 0)))
			{
				func_151(uParam0, _get_ped_in_draft_seat(iLocal_227, 0), "Horse_01", 0, 0, 0, 0);
			}
			if (does_entity_exist(_get_ped_in_draft_seat(iLocal_227, 1)))
			{
				func_151(uParam0, _get_ped_in_draft_seat(iLocal_227, 1), "Horse_01^1", 0, 0, 0, 0);
			}
		}
	}
	func_412(uParam0, iLocal_227, "WAGON02X", 0, 0, 0, 0);
	if (does_entity_exist(iLocal_111))
	{
		delete_object(&iLocal_111);
	}
	if (does_entity_exist(iLocal_112))
	{
		delete_object(&iLocal_112);
	}
	return uParam0->f_607 == uParam0->f_607;
}

bool func_750(var uParam0)
{
	func_27(&uLocal_230, 1);
	_0x6569f31a01b4c097(&(Local_115[5]), 1, 1);
	_0x6569f31a01b4c097(&(Local_115[5]), 0, 1);
	if (func_251(19))
	{
		func_166(uParam0, 19, &(Local_193[1]), 0, 0, 1, 0);
	}
	return uParam0->f_607 == uParam0->f_607;
}

int func_751(var uParam0)
{
	switch (func_1176(uParam0))
	{
		case 0:
			break;
	}
	return 1;
}

bool func_752(var uParam0)
{
	func_1185();
	if (func_82(32768))
	{
		func_372(uParam0, 524288);
	}
	if (func_381(iLocal_61, 1))
	{
		return uParam0->f_607 == uParam0->f_607;
	}
	else if (func_381(iLocal_61, 2))
	{
		return uParam0->f_607 == uParam0->f_607;
	}
	return false;
}

char* func_753()
{
	return "cutDeleteMe";
}

bool func_754(var uParam0, int iParam1)
{
	return (uParam0->f_8 && iParam1) != 0;
}

bool func_755(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

Vector3 func_756(var uParam0)
{
	return uParam0->f_862;
}

void func_757(var uParam0)
{
	if (func_1255(&iVar0))
	{
		if (func_542(iVar0, 0))
		{
			if (func_566(iVar0) == -525676072)
			{
				_set_ped_component_disabled(Global_35, 1249071452, 0);
				func_594(Global_35, -2065815962, 0, 1108822547, 0, 1, 0, 0, 0, 0);
			}
			else
			{
				_set_ped_component_disabled(Global_35, 1606587013, 0);
			}
			if (!func_542(*uParam0, 0))
			{
				*uParam0 = iVar0;
			}
		}
	}
}

void func_758(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (Global_1935630->f_12)
	{
		return;
	}
	Global_16 = 1;
	if (!network_is_game_in_progress())
	{
		func_119(0, 0);
		func_1256(-1);
	}
	func_1257(1);
	set_entity_invincible(Global_35, true);
	if (!func_755(*iParam0, 32))
	{
		iParam1 |= 16;
	}
	if (!func_755(*iParam0, 64))
	{
		iParam1 |= 8;
	}
	if (!func_755(*iParam0, 128))
	{
		iParam1 |= 32;
	}
	if (func_755(*iParam0, 131072))
	{
		iParam1 |= 2048;
	}
	if (!func_755(*iParam0, 32768))
	{
		set_player_control(get_player_index(), false, iParam1, true);
	}
	if (!func_755(*iParam0, 1))
	{
		_0xf239400e16c23e08(0, 0);
	}
	if (!func_755(*iParam0, 65536))
	{
		set_everyone_ignore_player(player_id(), true);
	}
	if (!func_755(*iParam0, 4) && !func_755(*iParam0, 2))
	{
		_hide_hud_component(-1679307491);
	}
	else
	{
		_display_hud_component(-1679307491);
	}
	if (!func_755(*iParam0, 2048))
	{
		func_770(0, 0);
	}
	if (func_755(*iParam0, 8))
	{
		clear_ped_tasks_immediately(Global_35, false, true);
	}
	if (func_755(*iParam0, 256))
	{
		_hide_ped_weapons(Global_35, 2, true);
	}
	if (func_755(*iParam0, 8192))
	{
		func_1258();
	}
	if (!func_755(*iParam0, 262144))
	{
		set_ped_reset_flag(Global_35, 264, true);
	}
	if (!func_755(*iParam0, 512))
	{
		if (is_gameplay_hint_active())
		{
			stop_gameplay_hint(false);
		}
	}
	if (!func_755(*iParam0, 1024))
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
		if (!func_755(*iParam0, 16))
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
						if (func_1259() == iVar7)
						{
							bVar8 = true;
						}
					}
					vVar3.x = iParam3;
					vVar3.f_1 = iParam4;
					vVar3.f_2 = iParam5;
					if (func_386(vVar3))
					{
						vVar3 = { get_offset_from_entity_in_world_coords(Global_35, 0f, IntToFloat((-1 + iVar2)), 0f) };
						func_1260(&vVar3, 50, 10, 0);
					}
					_0xed00d72f81cf7278(iVar7, 0, 1);
					set_entity_coords(iVar7, vVar3, false, true, true, true);
					if (bVar8)
					{
						func_1261(2);
						func_1262(-1);
						func_1263(vVar3);
						func_1265(func_1264());
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
		bVar9 = get_mount(Global_35);
		if (!is_entity_dead(bVar9))
		{
			clear_ped_tasks(bVar9, 1, 0);
			task_stand_still(bVar9, -1);
		}
	}
	if (!func_755(*iParam0, 4096))
	{
		func_1266(Global_35);
	}
	if (!func_755(*iParam0, 1048576))
	{
		_0xdd1232b332cbb9e7(7, 1, 0);
	}
	if (!func_755(*iParam0, 2097152))
	{
		if (func_1267() || _0x50f124e6ef188b22(Global_35))
		{
			func_1164(1);
		}
	}
	if (Global_1359489->f_16 & 4194304 == 0)
	{
		Global_1359489->f_16 |= 4194304;
	}
	*iParam0 = 0;
}

void func_759(var uParam0, vector3 vParam1)
{
	uParam0->f_862 = { vParam1 };
}

void func_760(var uParam0)
{
	if (func_754(uParam0, 2048) && !func_386(func_1268(uParam0)))
	{
		bVar0 = _does_volume_exist(uParam0->f_4);
		iVar1 = _get_last_mount(Global_35);
		if ((!is_entity_dead(iVar1) && ((bVar0 && is_entity_in_volume(iVar1, uParam0->f_4, true, 0)) || func_754(uParam0, -2147483648))) && get_mount(Global_35) != iVar1)
		{
			iVar2 = 2;
			if (is_ped_in_writhe(iVar1))
			{
				iVar2 |= 32;
			}
			func_837(iVar1, func_1268(uParam0), func_1269(uParam0), iVar2, 1073741824);
		}
		iVar3 = get_players_last_vehicle();
		if ((!is_entity_dead(iVar3) && ((bVar0 && is_entity_in_volume(iVar3, uParam0->f_4, true, 0)) || func_754(uParam0, -2147483648))) && !is_ped_in_vehicle(Global_35, iVar3, true))
		{
			func_837(iVar3, func_1268(uParam0), func_1269(uParam0), 2, 1073741824);
		}
	}
}

void func_761(var uParam0)
{
	if ((func_754(uParam0, 268435456) && !func_386(func_1268(uParam0))) && is_ped_in_any_vehicle(Global_35, false))
	{
		iVar0 = get_vehicle_ped_is_using(Global_35);
		if (!is_entity_dead(iVar0))
		{
			vVar1 = { func_1268(uParam0) };
			func_837(iVar0, vVar1, func_1270(vVar1, Global_36, 1), 2, 1073741824);
			set_vehicle_on_ground_properly(iVar0, 0f);
			set_entity_velocity(iVar0, 0f, 0f, 0f);
			set_vehicle_forward_speed(iVar0, 0f);
		}
	}
}

void func_762(var uParam0, vector3 vParam1, int iParam4, bool bParam5)
{
	uParam0->f_865 = { vParam1 };
	uParam0->f_868 = iParam4;
	if (func_386(vParam1))
	{
		func_1271(uParam0, 2048, 1);
	}
	else
	{
		func_714(uParam0, 2048);
		if (bParam5)
		{
			func_714(uParam0, -2147483648);
		}
	}
}

void func_763(var uParam0)
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
					if (!func_1272(uParam0->f_13[iVar0], 8))
					{
						if (func_656(func_1015(iVar1, 0, 1, 0)))
						{
							if (!func_1273(uParam0, get_current_ped_weapon_entity_index(iVar1, 0)))
							{
								set_current_ped_weapon(iVar1, -1569615261, true, 0, false, false);
							}
						}
						if (func_656(func_1015(iVar1, 1, 1, 0)))
						{
							if (!func_1273(uParam0, get_current_ped_weapon_entity_index(iVar1, 1)))
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

void func_764(var uParam0, bool bParam1)
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

void func_765(var uParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
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
			func_1112(262144);
		}
	}
	else
	{
		bParam6 = false;
		if (iParam3 == -1 || iParam3 == 8)
		{
			func_1274(iParam1, 29, bVar4, 1, 0);
			func_1274(iParam1, 31, bVar4, 1, 0);
			func_1274(iParam1, 30, bVar4, 1, 0);
			func_1274(iParam1, 22, bVar4, 1, 0);
			func_1274(iParam1, 37, bVar4, 1, 0);
		}
	}
	if ((func_1052(32768) && func_1275(1108822547, 8)) && func_1276(10, iParam3))
	{
		func_1277(iParam1, 0, 1);
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
			iVar3 = func_1120(iVar1, 1);
			if (func_1275(iVar3, 8))
			{
			}
			else if (&Global_1946804->f_57[iVar1]->f_2[0] == -1802376732 || &uParam0->f_1[iVar1] == 0)
			{
			}
			else
			{
				iVar2 = &uParam0->f_1[iVar1];
				if (!func_1276(iVar1, iParam3))
				{
				}
				else if ((func_1275(iVar3, 6) || &uParam0->f_1[iVar1] == &Global_1946804->f_57[iVar1]) || uParam0->f_1[iVar1]->f_1 == 289238755)
				{
					if (!func_1275(iVar3, 1) || bParam2)
					{
						Global_1946804->f_857++;
						if (!bParam6)
						{
							func_1274(iParam1, iVar1, bVar4, 1, 0);
						}
						if (uParam0->f_1[iVar1]->f_1 == 289238755)
						{
							Global_1946804->f_2456[iVar1]->f_1 = 289238755;
						}
						func_1278(iVar3, 1, 6);
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
								func_1274(iParam1, iVar1, bVar4, 1, &(uParam0->f_1[iVar1]));
							}
							Global_1946804->f_2456[iVar1] = &uParam0->f_1[iVar1];
							Global_1946804->f_2456[iVar1]->f_1 = uParam0->f_1[iVar1]->f_1;
							if (func_1275(iVar3, 1))
							{
								func_1279(iVar3, 1, 6);
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

bool func_766(int iParam0)
{
	switch (iParam0)
	{
		case 14:
		case 34:
			return !func_1280((*Global_1835011)[iParam0]);
	}
	return false;
}

Vector3 func_767(int iParam0)
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

int func_768(int iParam0, bool bParam1, int iParam2, bool bParam3)
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

int func_769(int iParam0, int iParam1)
{
	return func_1281(&uVar0, iParam0, iParam1);
}

void func_770(bool bParam0, bool bParam1)
{
	iVar2 = 0;
	while (iVar2 < 29)
	{
		iVar4 = iVar2;
		if (get_current_ped_weapon(Global_35, &iVar3, false, iVar4, true))
		{
			if (func_656(iVar3) && _0x705be297eebdb95d(iVar3))
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
		func_1217(1);
	}
}

void func_771(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
}

void func_772(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_1 = 0;
}

void func_773(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
}

void func_774(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
}

void func_775(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

void func_776(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

void func_777(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
}

void func_778(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
}

void func_779(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
}

void func_780(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

void func_781(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
}

int func_782(var uParam0, int iParam1)
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

int func_783(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (!func_795((*uParam0)[iVar0]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_784(int iParam0, int iParam1)
{
	iVar0 = func_1282(iParam1);
	return (iParam0 && iVar0) != 0;
}

int func_785(var uParam0, char* sParam1, int iParam2)
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

int func_786(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (!func_804((*uParam0)[iVar0]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_787(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_788(var uParam0, char* sParam1)
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

int func_789(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 40)
	{
		if (!func_797((*uParam0)[iVar0]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_790(var uParam0, char* sParam1)
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

int func_791(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (!func_799((*uParam0)[iVar0]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_792(var uParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (uParam0[iVar0] != 0)
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

int func_793(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (!func_810((*uParam0)[iVar0]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_794(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 || iParam1);
}

bool func_795(var uParam0)
{
	return *uParam0 != 0;
}

void func_796(var uParam0)
{
	if (!func_826(uParam0->f_1, 1))
	{
		request_model(*uParam0, false);
		func_787(&(uParam0->f_1), 1);
	}
}

bool func_797(var uParam0)
{
	return !is_string_null_or_empty(*uParam0);
}

void func_798(var uParam0)
{
	if (!func_826(uParam0->f_3, 1))
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
		func_787(&(uParam0->f_3), 1);
	}
}

bool func_799(var uParam0)
{
	return !is_string_null_or_empty(*uParam0);
}

void func_800(var uParam0)
{
	if (!func_826(uParam0->f_1, 1))
	{
		request_anim_dict(*uParam0);
		func_787(&(uParam0->f_1), 1);
	}
}

bool func_801(var uParam0)
{
	return !is_string_null_or_empty(*uParam0);
}

bool func_802(var uParam0)
{
	if (func_826(uParam0->f_1, 2))
	{
		return true;
	}
	if (!func_826(uParam0->f_1, 1))
	{
		func_1283(uParam0);
	}
	if (_0x85b8f04555ab49b8(*uParam0))
	{
		func_787(&(uParam0->f_1), 2);
		return true;
	}
	return false;
}

bool func_803(var uParam0)
{
	if (func_826(*uParam0, 2))
	{
		return true;
	}
	if (!func_826(*uParam0, 1))
	{
		func_1284(uParam0);
	}
	if (has_ptfx_asset_loaded())
	{
		func_787(uParam0, 2);
		return true;
	}
	return false;
}

bool func_804(var uParam0)
{
	return !is_string_null_or_empty(*uParam0);
}

void func_805(var uParam0)
{
	if (!func_826(uParam0->f_2, 1))
	{
		if (func_1285(uParam0))
		{
			if (_is_anim_scene_metadata_loaded(uParam0->f_1, false))
			{
				sVar0 = func_1286(get_entity_model(Global_35));
				if (_0x6f1f0b17109309da(uParam0->f_1, sVar0))
				{
					set_anim_scene_entity(uParam0->f_1, sVar0, Global_35, 0);
				}
				else if (_0x6f1f0b17109309da(uParam0->f_1, "player_zero") && func_296())
				{
					set_anim_scene_entity(uParam0->f_1, "player_zero", Global_35, 0);
				}
				else if (_0x6f1f0b17109309da(uParam0->f_1, "player_three") && func_971())
				{
					set_anim_scene_entity(uParam0->f_1, "player_three", Global_35, 0);
				}
				load_anim_scene(uParam0->f_1);
				func_787(&(uParam0->f_2), 1);
			}
		}
	}
}

bool func_806(var uParam0)
{
	return !is_string_null_or_empty(*uParam0);
}

void func_807(var uParam0, int iParam1)
{
	if (!func_826(uParam0->f_1, 1))
	{
		if (!_is_anim_scene_loaded(iParam1, true, false))
		{
			return;
		}
		_0xdf7b5144e25cd3fe(iParam1, *uParam0);
		func_787(&(uParam0->f_1), 1);
	}
}

bool func_808(var uParam0)
{
	return *uParam0 != 0;
}

void func_809(var uParam0)
{
	if (!func_826(uParam0->f_2, 1))
	{
		_request_propset(*uParam0);
		func_787(&(uParam0->f_2), 1);
	}
}

bool func_810(var uParam0)
{
	return *uParam0 != 0;
}

void func_811(var uParam0)
{
	if (!func_826(uParam0->f_3, 1))
	{
		_0x72d4cb5db927009c(*uParam0, uParam0->f_1, uParam0->f_2);
		func_787(&(uParam0->f_3), 1);
	}
}

bool func_812(var uParam0)
{
	return !is_string_null_or_empty(*uParam0);
}

void func_813(var uParam0)
{
	if (!func_826(uParam0->f_1, 1))
	{
		request_script_audio_bank(*uParam0);
		func_787(&(uParam0->f_1), 1);
	}
}

bool func_814(var uParam0)
{
	return func_1287(*uParam0);
}

void func_815(var uParam0)
{
	if (!func_826(uParam0->f_1, 1))
	{
		_request_imap(*uParam0);
		func_787(&(uParam0->f_1), 1);
	}
}

bool func_816(var uParam0)
{
	return !is_string_null_or_empty(*uParam0);
}

void func_817(var uParam0)
{
	if (!func_826(uParam0->f_2, 1))
	{
		_0xe368e8422c860ba7(*uParam0, uParam0->f_1, -2);
		func_787(&(uParam0->f_2), 1);
	}
}

bool func_818(var uParam0)
{
	return !is_string_null_or_empty(*uParam0);
}

void func_819(var uParam0)
{
	if (!func_826(uParam0->f_1, 1))
	{
		_0x2b6529c54d29037a(*uParam0);
		func_787(&(uParam0->f_1), 1);
	}
}

bool func_820(var uParam0, int iParam1, char* sParam2)
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

void func_821(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5)
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
		sParam2 = func_710(iParam1);
	}
	if (is_string_null_or_empty(sParam2))
	{
		if (does_entity_exist(iParam1))
		{
		}
		return;
	}
	iVar0 = func_1288(uParam0, iParam1);
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
		iVar1 = func_1289(uParam0, sParam2);
		if (does_entity_exist(iVar1) && iVar1 != iParam1)
		{
			func_1290(uParam0, iVar1);
		}
	}
	if (iVar0 == -1)
	{
		iVar0 = func_1291(uParam0);
	}
	if (iVar0 != -1)
	{
		uParam0->f_13[iVar0] = iParam1;
		StringCopy(&(uParam0->f_13[iVar0]->f_1), sParam2, 64);
		uParam0->f_13[iVar0]->f_9 = iParam3;
		uParam0->f_13[iVar0]->f_10 = iParam4;
		if (bParam5)
		{
			func_1292(uParam0->f_13[iVar0], 2);
		}
		else
		{
			func_1293(uParam0->f_13[iVar0], 2);
		}
	}
}

struct<4> func_822(int iParam0)
{
	if (!func_182(iParam0))
	{
		return Var0;
	}
	return (*Global_1835011)[iParam0]->f_3;
}

bool func_823(var uParam0, char* sParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (!bParam4 && !uParam0->f_2501)
	{
		if (!func_845(uParam0, sParam1, iParam2, bParam4, bParam5))
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
			if (func_1294(uParam0, 0))
			{
				if (func_1295(uParam0, iParam2, iParam3, &cVar2, &iVar1, &iVar18))
				{
					if (func_1296(uParam0, 1, &iVar0))
					{
					}
					if (func_1297(uParam0, 3, &cVar2))
					{
					}
					if (func_1296(uParam0, 4, &iVar1))
					{
						cVar2.f_8 = iVar1;
					}
					if (func_1296(uParam0, 7, &(cVar2.f_12)))
					{
					}
					if (func_1296(uParam0, 8, &iVar1))
					{
						cVar2.f_10 = iVar1;
					}
					if (func_1296(uParam0, 10, &(cVar2.f_14)))
					{
					}
					if (func_1296(uParam0, 11, &iVar1))
					{
						cVar2.f_15 = iVar1;
					}
					if (iVar18 == 0)
					{
						if (iVar0 < 40 && uParam0->f_2504 < 40)
						{
							if (!func_1298(uParam0, &cVar2, uParam0->f_2504))
							{
								*(*uParam0)[uParam0->f_2504] = { cVar2 };
								func_466((*uParam0)[uParam0->f_2504], 1048576);
								uParam0->f_2504++;
							}
						}
					}
					else if (iVar18 == 3)
					{
						if (iVar0 < 40 && uParam0->f_2505 < 40)
						{
							*uParam0->f_641[uParam0->f_2505] = { cVar2 };
							func_466(uParam0->f_641[uParam0->f_2505], 1048576);
							uParam0->f_2505++;
						}
					}
					else if (iVar18 == 1)
					{
						if (iVar0 < 60 && uParam0->f_2506 < 60)
						{
							*uParam0->f_1282[uParam0->f_2506] = { cVar2 };
							func_466(uParam0->f_1282[uParam0->f_2506], 1048576);
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
						if (!func_1298(&(uParam0->f_2243), &cVar2, uParam0->f_2507))
						{
							*uParam0->f_2243[uParam0->f_2507] = { cVar2 };
							func_466(uParam0->f_2243[uParam0->f_2507], 1048576);
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
			if (func_1294(uParam0, 12))
			{
				if (func_1296(uParam0, 13, &iVar0))
				{
				}
				if (func_1296(uParam0, 14, &iVar1))
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

void func_824(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((func_210((*uParam0)[iVar0], 1048576) && (*uParam0)[iVar0]->f_9 == 8) && !func_210((*uParam0)[iVar0], 1))
		{
			func_1299((*uParam0)[iVar0]);
		}
		iVar0++;
	}
}

bool func_825(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, int iParam12)
{
	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < *uParam0)
	{
		if (func_795((*uParam0)[iVar1]))
		{
			if (func_784((*uParam0)[iVar1]->f_2, iParam12))
			{
				if (!func_1300((*uParam0)[iVar1]))
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
		if (func_797((*uParam1)[iVar1]))
		{
			if (func_784((*uParam1)[iVar1]->f_4, iParam12))
			{
				if (!func_1301((*uParam1)[iVar1]))
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
		if (func_799((*uParam2)[iVar1]))
		{
			if (func_784((*uParam2)[iVar1]->f_2, iParam12))
			{
				if (!func_1302((*uParam2)[iVar1]))
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
		if (func_801((*uParam3)[iVar1]))
		{
			if (func_784((*uParam3)[iVar1]->f_2, iParam12))
			{
				if (!func_802((*uParam3)[iVar1]))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	if (func_784(uParam4->f_1, iParam12))
	{
		if (!func_803(uParam4))
		{
			iVar0 = 0;
		}
	}
	iVar1 = 0;
	while (iVar1 < *uParam5)
	{
		if (func_804((*uParam5)[iVar1]))
		{
			if (func_784((*uParam5)[iVar1]->f_3, iParam12))
			{
				if (func_1285((*uParam5)[iVar1]))
				{
					if (!func_827((*uParam5)[iVar1]))
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
		if (func_804((*uParam5)[iVar1]))
		{
			if (func_784((*uParam5)[iVar1]->f_3, iParam12))
			{
				if (func_1285((*uParam5)[iVar1]))
				{
					if (func_827((*uParam5)[iVar1]))
					{
						iVar2 = 0;
						while (iVar2 < 20)
						{
							if (func_806((*uParam5)[iVar1]->f_4[iVar2]))
							{
								if (!func_1303((*uParam5)[iVar1]->f_4[iVar2], (*uParam5)[iVar1]->f_1))
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
		if (func_808((*uParam6)[iVar1]))
		{
			if (func_784((*uParam6)[iVar1]->f_3, iParam12))
			{
				if (!func_1304((*uParam6)[iVar1]))
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
		if (func_810((*uParam7)[iVar1]))
		{
			if (func_784((*uParam7)[iVar1]->f_4, iParam12))
			{
				if (!func_1305((*uParam7)[iVar1]))
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
		if (func_812((*uParam8)[iVar1]))
		{
			if (func_784((*uParam8)[iVar1]->f_2, iParam12))
			{
				if (!func_1306((*uParam8)[iVar1]))
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
		if (func_814((*uParam9)[iVar1]))
		{
			if (func_784((*uParam9)[iVar1]->f_2, iParam12))
			{
				if (!func_1307((*uParam9)[iVar1]))
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
		if (func_816((*uParam10)[iVar1]))
		{
			if (func_784((*uParam10)[iVar1]->f_3, iParam12))
			{
				if (!func_1308((*uParam10)[iVar1]))
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
		if (func_818((*uParam11)[iVar1]))
		{
			if (func_784((*uParam11)[iVar1]->f_2, iParam12))
			{
				if (!func_1309((*uParam11)[iVar1]))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	return iVar0;
}

bool func_826(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_827(var uParam0)
{
	if (func_826(uParam0->f_2, 2))
	{
		return true;
	}
	if (!func_826(uParam0->f_2, 1))
	{
		func_805(uParam0);
	}
	if (_is_anim_scene_loaded(uParam0->f_1, true, false))
	{
		func_787(&(uParam0->f_2), 2);
		return true;
	}
	return false;
}

int func_828(int iParam0)
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

bool func_829(var uParam0, int iParam1, var uParam2, bool bParam3, float fParam4, float fParam5, float fParam6, float fParam7, bool bParam8, int iParam9, bool bParam10, int iParam11, bool bParam12, bool bParam13)
{
	if (!func_429(iParam1))
	{
		return false;
	}
	if ((!is_entity_dead(*uParam2) && func_251(iParam1)) && func_1162(iParam1) == *uParam2)
	{
		return true;
	}
	*uParam2 = func_1310(iParam1, 1, 0, fParam4, fParam5, fParam6, fParam7, bParam8, 1, 0, 0, bParam10, 0, iParam9, 0, 0, 0, iParam11, 1, 1, bParam13, 0, 1, 0, 1);
	if (does_entity_exist(*uParam2))
	{
		func_1311(uParam0, *uParam2, iParam1, bParam3, (bParam8 && bParam12), bParam10, bParam13);
		func_1312(iParam1);
		return true;
	}
	return false;
}

bool func_830(var uParam0)
{
	if (!func_386(uParam0->f_5417))
	{
		return true;
	}
	switch (uParam0->f_607)
	{
		case 7:
			func_1313(uParam0, -271.1003f, 798.9771f, 118.0088f, 359.8847f);
			break;
		case 15:
			func_1313(uParam0, -101.4083f, -34.0691f, 94.9419f, 43.5697f);
			break;
		case 8:
			func_1313(uParam0, 884.1405f, 1283.638f, 233.1437f, 288.539f);
			break;
		case 25:
			func_1313(uParam0, 1154.01f, -87.7217f, 87.745f, 333.9165f);
			break;
		case 14:
			func_1313(uParam0, -257.4742f, 716.4608f, 114.3661f, 298.3928f);
			break;
		case 9:
			func_1313(uParam0, -113.3479f, -14.8907f, 96.1036f, 66.3363f);
			break;
		case 13:
			func_1313(uParam0, -893.1545f, -1097.781f, 59.3724f, 67.7581f);
			break;
		case 11:
			func_1313(uParam0, -1528.842f, -315.0988f, 143.0872f, 97.0964f);
			break;
		case 26:
			func_1313(uParam0, 705.8042f, -1230.294f, 44.2243f, 60.9884f);
			break;
		case 53:
			func_1313(uParam0, 705.8099f, -1229.4f, 44.2311f, 67.5463f);
			break;
		case 16:
			func_1313(uParam0, 667.7685f, -1211.293f, 45.3101f, 92.5271f);
			break;
		case 17:
			func_1313(uParam0, 1339.753f, -1305.21f, 75.5849f, 337.5673f);
			break;
		case 19:
			func_1313(uParam0, 1857.32f, -1367.512f, 41.2697f, 162.265f);
			break;
		case 24:
			func_1313(uParam0, 691.6649f, -1235.476f, 43.3174f, 227.0576f);
			break;
		case 23:
			func_1313(uParam0, 676.2985f, -1227.818f, 43.598f, 352.091f);
			break;
		case 22:
			func_1313(uParam0, 663.6722f, -1229.636f, 43.3769f, 171.6396f);
			break;
		case 36:
			func_1313(uParam0, 2647.098f, -1270.327f, 51.0841f, 113.0633f);
			break;
		case 28:
			func_1313(uParam0, 2413.412f, -1220.656f, 44.9084f, 0.0301f);
			break;
		case 30:
			func_1313(uParam0, 1853.05f, -1835.788f, 42.0957f, 29.7034f);
			break;
		case 37:
			func_1313(uParam0, 1842.425f, -1833.848f, 43.2426f, 0.0743f);
			break;
		case 45:
			func_1313(uParam0, 2824.987f, -1165.335f, 47.3695f, 190.1776f);
			break;
		case 48:
			func_1313(uParam0, 483.1636f, 2222.628f, 246.0867f, 109.4105f);
			break;
		case 49:
			func_1313(uParam0, 2376.538f, 1339.845f, 105.3362f, 193.8848f);
			break;
		case 50:
			func_1313(uParam0, 2377.94f, 1338.177f, 105.4092f, 196.4492f);
			break;
		case 51:
			func_1313(uParam0, 491.0881f, 2221.171f, 246.1786f, 246.5501f);
			break;
		case 55:
			func_1313(uParam0, 2774.684f, 513.5845f, 66.9882f, 355.826f);
			break;
		case 76:
			func_1313(uParam0, -1616.827f, -1379.19f, 81.8942f, 339.9481f);
			break;
		case 73:
			func_1313(uParam0, -1611.214f, -1344.436f, 81.8767f, 359.9349f);
			break;
		case 75:
			func_1313(uParam0, -1678.714f, -1378.879f, 83.969f, 347.6046f);
			break;
		case 69:
			func_1313(uParam0, -302.3015f, 786.3279f, 116.9486f, 185.0768f);
			break;
		case 70:
			func_1313(uParam0, -1566.102f, -1448.615f, 90.6887f, 291.3719f);
			break;
		case 71:
			func_1313(uParam0, -1625.965f, -1395.404f, 81.6263f, 114.6379f);
			break;
		case 72:
			func_1313(uParam0, -835.0144f, -1343.726f, 42.473f, 0.0002f);
			break;
	}
	return !func_386(uParam0->f_5417);
}

int func_831(int iParam0, var uParam1)
{
	uParam1->f_10 = func_258(uParam1->f_10);
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
		if (func_386(uParam1->f_6))
		{
		}
	}
	bVar0 = func_385();
	if (*uParam1)
	{
		if (bVar0 && !func_319((*Global_1835011)[4]->f_1, 1))
		{
			if (func_1314(5))
			{
				func_491(5);
				func_1315(5);
				func_1262(0);
				func_1261(0);
			}
		}
	}
	if (func_1316(Global_36) == 8)
	{
		*iParam0 = 1;
		return 0;
	}
	if ((bVar0 && func_319((*Global_1835011)[37]->f_1, 1)) && !func_319((*Global_1835011)[43]->f_1, 1))
	{
		*iParam0 = 1;
		return 0;
	}
	if ((bVar0 && func_319((*Global_1835011)[43]->f_1, 1)) && !func_319((*Global_1835011)[44]->f_1, 1))
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
	if (func_494(iVar1))
	{
		bVar3 = true;
		if (func_1317(iVar1))
		{
			bVar4 = true;
		}
		if (func_501(iVar1))
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
				func_502(uParam1->f_10);
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
			if (!func_1314(0) && func_1314(1))
			{
				func_1318(1, 0);
				*iParam0 = 0;
				return 0;
			}
		}
	}
	if (uParam1->f_4)
	{
		if (uParam1->f_10 == 0)
		{
			if (func_1319())
			{
				func_1320();
			}
			func_1262(0);
			func_1261(0);
			func_1263(uParam1->f_6);
		}
	}
	if (!func_494(uParam1->f_10))
	{
		if (*uParam1)
		{
			if ((func_1321(uParam1->f_10) == 0 || func_1322(uParam1->f_10) == 0) || func_1323(uParam1->f_10) == 0)
			{
				func_1324(uParam1->f_10);
			}
			func_1325(uParam1->f_10);
			func_1326(uParam1->f_10, uParam1->f_6, uParam1->f_9);
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
	if (func_494(iVar1))
	{
		bVar3 = true;
		if (func_1317(iVar1))
		{
			bVar4 = true;
		}
		if (func_501(iVar1))
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
			if (!func_386(uParam1->f_6))
			{
				set_entity_coords(iVar2, uParam1->f_6, false, true, true, true);
				set_entity_heading(iVar2, uParam1->f_9);
				_0x9587913b9e772d29(iVar2, 0);
			}
		}
	}
	if (func_1327(uParam1->f_10))
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
			Var8 = { func_1328(uParam1->f_10) };
			Var10 = { func_1329() };
			func_1330(iVar2, &Var8, &Var10, 0);
			_set_ped_as_saddle_horse_for_player(iVar6, iVar2);
			set_ped_config_flag(iVar2, 186, false);
		}
	}
	if (!uParam1->f_1)
	{
		*iParam0 = 2;
		return iVar2;
	}
	if (!func_487(uParam1->f_10))
	{
		set_entity_as_mission_entity(iVar2, true, true);
		func_1331(uParam1->f_10);
		if (uParam1->f_2 && !func_386(uParam1->f_6))
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
	func_486(uParam1->f_10);
	if (func_487(uParam1->f_10))
	{
		iVar16 = func_254(uParam1->f_10);
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

bool func_832(int iParam0, int iParam1, float fParam2, bool bParam3)
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

bool func_833(int iParam0)
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

bool func_834(int iParam0, int iParam1, vector3 vParam2, float fParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10)
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
	if (!func_1332(iParam1))
	{
		return false;
	}
	iVar0 = func_1333(iParam1, vParam2, fParam5, iParam8, 1, bParam6, bParam7);
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

void func_835(var uParam0, bool bParam1)
{
	if (!is_entity_dead(uParam0->f_5411))
	{
		if (!_0x88ad6cc10d8d35b2(uParam0->f_5411))
		{
			set_entity_as_mission_entity(uParam0->f_5411, true, true);
		}
		if ((bParam1 && !_0x3ab6c7b0bb0df4b1(uParam0->f_5411, -1)) && !func_120(uParam0, 32768))
		{
			clear_ped_tasks(uParam0->f_5411, 1, 0);
		}
		if (!func_20() == 0)
		{
			set_ped_relationship_group_hash(uParam0->f_5411, 1030835986);
		}
		else
		{
			set_ped_relationship_group_hash(uParam0->f_5411, get_ped_relationship_group_default_hash(player_ped_id()));
			set_entity_can_be_damaged(uParam0->f_5411, false);
		}
		if (get_ped_config_flag(uParam0->f_5411, 136, true))
		{
			set_ped_config_flag(uParam0->f_5411, 136, false);
		}
	}
}

float func_836(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

void func_837(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
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
	if (iParam0 == func_1334(Global_35) && is_player_teleport_active())
	{
	}
	if (func_1335(iParam0))
	{
		if (func_833(get_ped_index_from_entity_index(iParam0)))
		{
			_0x0348469daa17576c(iParam0);
		}
	}
	if (func_381(iParam5, 4) && is_entity_a_ped(iParam0))
	{
		iVar1 = get_ped_index_from_entity_index(iParam0);
		if (is_ped_on_vehicle(iVar1, false))
		{
			iVar0 = get_vehicle_ped_is_in(iVar1, true);
			if (does_entity_exist(iVar0) && !is_entity_dead(iVar0))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_837(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (is_ped_on_mount(iVar1))
		{
			iVar2 = get_mount(iVar1);
			if (does_entity_exist(iVar2) && !is_entity_dead(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_837(iVar2, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
	}
	if (!func_381(iParam5, 32))
	{
		if (bVar4 && is_entity_attached(iParam0))
		{
			clear_ped_tasks_immediately(get_ped_index_from_entity_index(iParam0), false, true);
		}
	}
	if (func_381(iParam5, 2))
	{
		if (is_entity_a_vehicle(iParam0))
		{
			_set_entity_coords_and_heading(iParam0, vParam1, fParam4, true, func_381(iParam5, 32), true);
		}
		else
		{
			_set_entity_coords_and_heading(iParam0, vParam1, fParam4, true, func_381(iParam5, 32), true);
			_0x9587913b9e772d29(iParam0, 0);
		}
	}
	else if (func_381(iParam5, 129))
	{
		if (func_381(iParam5, 128))
		{
			if (get_water_height_no_waves(vParam1, &uVar5))
			{
				vParam1.f_2 = uVar5;
			}
		}
		set_entity_coords_no_offset(iParam0, vParam1, func_381(iParam5, 32), true, true);
		set_entity_heading(iParam0, fParam4);
	}
	else
	{
		_set_entity_coords_and_heading(iParam0, vParam1, fParam4, true, func_381(iParam5, 32), true);
	}
	if (bVar4)
	{
		if (!func_381(iParam5, 16))
		{
			_set_ped_crouch_movement(get_ped_index_from_entity_index(iParam0), bVar3, 0, false);
		}
		if (func_1335(iParam0))
		{
			bVar6 = get_ped_index_from_entity_index(iParam0);
			_0x0348469daa17576c(bVar6);
			if (!func_381(iParam5, 32))
			{
				clear_ped_tasks(bVar6, 1, 0);
				task_stand_still(bVar6, -1);
			}
		}
		set_ped_cloth_package_index(get_ped_index_from_entity_index(iParam0), 1);
		if (get_ped_index_from_entity_index(iParam0) == Global_35 && !func_381(iParam5, 64))
		{
			if (!is_screen_faded_out())
			{
			}
			set_gameplay_cam_relative_heading(0f, 1f);
			set_gameplay_cam_relative_pitch(0f, 1f);
		}
	}
}

bool func_838(int iParam0, int iParam1, int iParam2)
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

bool func_839(var uParam0, int iParam1)
{
	switch (func_1336(uParam0))
	{
		case 0:
			if (!func_1337(iParam1, &(uParam0->f_8), &(uParam0->f_6)))
			{
				return true;
			}
			func_1338(uParam0, 1);
			break;
		case 1:
			func_1339(uParam0);
			render_script_cams(true, false, 3000, true, false, 0);
			iVar0 = 0;
			func_758(&iVar0, 0, 2, 0, 0, 0, 0);
			func_1338(uParam0, 2);
			break;
		case 2:
			if (func_1340(uParam0))
			{
				func_1341(uParam0->f_8, 5000f, 0);
				_0x4759cc730f947c81();
				func_27(&(uParam0->f_3), 1);
				func_1338(uParam0, 3);
			}
			break;
		case 3:
			if (func_846(&(uParam0->f_3)) >= 1f)
			{
				func_1338(uParam0, 4);
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
			func_1342(&iVar1, 0);
			release_script_audio_bank();
			func_1338(uParam0, 0);
			return true;
	}
	return false;
}

void func_840(var uParam0)
{
	if (!func_120(uParam0, 524288))
	{
		MemCopy(&uVar0, {func_110(uParam0->f_607)}, 8);
		func_1343(&uVar0, 15000, 0, 0, 0, 1);
		func_103(uParam0, 524288);
	}
}

bool func_841(var uParam0)
{
	iVar0 = func_35(uParam0);
	if (func_162(uParam0, func_33(uParam0)) <= 3)
	{
		iVar0 = func_33(uParam0);
	}
	Var1 = { func_1344(uParam0, iVar0) };
	if (func_1346(&(uParam0->f_10792), Var1, func_1345(&(uParam0->f_10792)), 0))
	{
		func_140(uParam0, func_33(uParam0), 262144);
		if (func_1347(&(uParam0->f_10792), 524288))
		{
			func_372(uParam0, 67108864);
			func_1348(&(uParam0->f_10792), 524288);
		}
		func_1349(&(uParam0->f_7375), &(uParam0->f_10792));
		return true;
	}
	return false;
}

void func_842(var uParam0, int iParam1)
{
	uParam0->f_5307 = (uParam0->f_5307 - (uParam0->f_5307 && iParam1));
}

bool func_843(var uParam0, struct<4> Param1)
{
	if (is_string_null_or_empty(&Param1))
	{
		return true;
	}
	if (func_8(uParam0, 16777216))
	{
		func_1350(uParam0);
		func_1351(uParam0);
		return true;
	}
	if (func_1352(Param1, &(uParam0->f_7375), uParam0))
	{
		return true;
	}
	if (func_154(uParam0) == 0)
	{
		func_868(uParam0);
	}
	if (func_29())
	{
		if (!func_8(uParam0, 262144))
		{
			stop_gameplay_hint(true);
			render_script_cams(false, false, 3000, true, false, 0);
			if (does_cam_exist(uParam0->f_609.f_2))
			{
				destroy_cam(uParam0->f_609.f_2, false);
			}
			func_51(&(uParam0->f_10792));
			func_1353(uParam0);
			func_842(uParam0, 524288);
			func_1354(uParam0);
			func_149(uParam0, 30f);
			func_150(uParam0, 40f);
			func_99(uParam0, 262144);
		}
		if (!func_8(uParam0, 524288) && _0xef324e9550a394d5(uParam0->f_7375.f_804))
		{
			func_99(uParam0, 524288);
		}
	}
	return false;
}

bool func_844(var uParam0)
{
	iVar0 = 1;
	if (!func_1355(func_61(uParam0), func_120(uParam0, 65536)))
	{
		iVar0 = 0;
	}
	Var1 = { func_1356(func_61(uParam0)) };
	if (!is_string_null_or_empty(&Var1))
	{
		if (!func_1357(func_61(uParam0)))
		{
			iVar0 = 0;
		}
	}
	if (!func_413(uParam0, func_33(uParam0), 1))
	{
		iVar0 = 0;
	}
	if (func_120(uParam0, 4) && !_0x5e420ff293ee5472())
	{
		iVar0 = 0;
	}
	MemCopy(&cVar9, {func_822(uParam0->f_607)}, 3);
	if (!func_23(&(uParam0->f_8269)))
	{
		if (!func_845(&(uParam0->f_8269), &cVar9, 0, 1, 1))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

bool func_845(var uParam0, char* sParam1, int iParam2, bool bParam3, bool bParam4)
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
	func_1358(uParam0);
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

float func_846(float fParam0)
{
	if (!func_26(fParam0))
	{
		return fParam0->f_1;
	}
	if (func_468(fParam0))
	{
		return fParam0->f_2;
	}
	return (func_514() - fParam0->f_1);
}

bool func_847()
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

void func_848(float fParam0, float fParam1)
{
	set_gameplay_cam_relative_heading(fParam0, 1f);
	set_gameplay_cam_relative_pitch(fParam1, 1f);
}

void func_849()
{
}

bool func_850(var uParam0)
{
	if (func_33(uParam0) == iLocal_98)
	{
		if (!does_entity_exist(iVar281))
		{
			func_829(uParam0, 15, &uLocal_284, 0, 0f, 0f, 0f, 0f, 1, 0, 0, 1, 1, 0);
			return false;
		}
	}
	if (func_33(uParam0) == iLocal_99 || func_33(uParam0) == iLocal_100)
	{
		if (!func_1359(uParam0))
		{
			return false;
		}
	}
	if (((func_33(uParam0) == iLocal_101 || func_33(uParam0) == iLocal_102) || func_33(uParam0) == iLocal_103) || func_33(uParam0) == iLocal_104)
	{
		if (!func_1360(uParam0))
		{
			return false;
		}
	}
	if (func_33(uParam0) == iLocal_103)
	{
		if (!func_1361())
		{
			return false;
		}
	}
	if (func_33(uParam0) == iLocal_101)
	{
		if (!func_1362())
		{
			return false;
		}
	}
	if (func_33(uParam0) == iLocal_101 || func_33(uParam0) == iLocal_102)
	{
		if (!func_1363())
		{
			return false;
		}
	}
	if ((func_33(uParam0) == iLocal_101 || func_33(uParam0) == iLocal_102) || func_33(uParam0) == iLocal_103)
	{
		if (!func_1364(uParam0))
		{
			return false;
		}
	}
	if (((((func_33(uParam0) == iLocal_99 || func_33(uParam0) == iLocal_100) || func_33(uParam0) == iLocal_101) || func_33(uParam0) == iLocal_102) || func_33(uParam0) == iLocal_103) || func_33(uParam0) == iLocal_104)
	{
		if (!func_1365(uParam0))
		{
			return false;
		}
	}
	if ((((((func_33(uParam0) == iLocal_98 || func_33(uParam0) == iLocal_99) || func_33(uParam0) == iLocal_100) || func_33(uParam0) == iLocal_101) || func_33(uParam0) == iLocal_102) || func_33(uParam0) == iLocal_103) || func_33(uParam0) == iLocal_104)
	{
		if (!func_1367(uParam0, func_1366(func_33(uParam0))))
		{
			return false;
		}
	}
	if (((((func_33(uParam0) == iLocal_99 || func_33(uParam0) == iLocal_100) || func_33(uParam0) == iLocal_101) || func_33(uParam0) == iLocal_102) || func_33(uParam0) == iLocal_103) || func_33(uParam0) == iLocal_104)
	{
		if (!func_1163(uParam0))
		{
			return false;
		}
	}
	return true;
}

void func_851(var uParam0)
{
	if (!is_entity_dead(Global_35))
	{
		func_145(uParam0, Global_35, "ARTHUR", 0);
	}
	if (!is_entity_dead(&(Local_193[1])))
	{
		func_145(uParam0, &(Local_193[1]), "SUSAN", 0);
	}
	if (!is_entity_dead(&(Local_115[0])))
	{
		func_145(uParam0, &(Local_115[0]), "SUS1_GUARD1", 0);
	}
	if (!is_entity_dead(&(Local_115[1])))
	{
		func_145(uParam0, &(Local_115[1]), "SUS1_GUARD3", 0);
	}
	if (!is_entity_dead(&(Local_115[2])))
	{
		func_145(uParam0, &(Local_115[2]), "SUS1_GUARD2", 0);
	}
	if (!is_entity_dead(&(Local_115[5])))
	{
		func_145(uParam0, &(Local_115[5]), "ANTHONY_FOREMAN", 0);
	}
	if (!is_entity_dead(&(Local_115[3])))
	{
		func_145(uParam0, &(Local_115[3]), "SUS1_GANG1", 0);
	}
	if (!is_entity_dead(&(Local_115[4])))
	{
		func_145(uParam0, &(Local_115[4]), "SUS1_GANG2", 0);
	}
	if (!is_entity_dead(&(Local_193[0])))
	{
		func_145(uParam0, &(Local_193[0]), "TILLY", 0);
	}
	uParam0->f_607 = uParam0->f_607;
}

bool func_852()
{
	if (!_does_volume_exist(Local_31))
	{
		Local_31 = _create_volume_cylinder_with_custom_name(1127.52f, -1314.09f, 64.08f, 0f, 0f, 0f, 7f, 7f, 7f, "HouseParking");
	}
	if (!_does_volume_exist(Local_31.f_1))
	{
		Local_31.f_1 = _create_volume_aggregate();
		_0x39816f6f94f385ad(Local_31.f_1, 1118.067f, -1302.731f, 66.37063f, 0f, 0f, -75.38332f, 2.689761f, 5.654922f, 2.499385f);
		_0x39816f6f94f385ad(Local_31.f_1, 1119.185f, -1305.034f, 66.37063f, 0f, 0f, -75.38332f, 2.345625f, 4.646863f, 2.499385f);
	}
	if (!_does_volume_exist(Local_31.f_2))
	{
		Local_31.f_2 = _create_volume_box(1117.031f, -1298.79f, 66.37063f, 0f, 0f, -75.38332f, 5.029932f, 5.654922f, 2.499385f);
	}
	if (!_does_volume_exist(Local_31.f_3))
	{
		Local_31.f_3 = _create_volume_aggregate();
		_0x39816f6f94f385ad(Local_31.f_3, 1118.095f, -1301.144f, 66.09779f, 0f, 0f, -75.01131f, 10.57965f, 5.106618f, 2.499385f);
		_0x39816f6f94f385ad(Local_31.f_3, 1108.834f, -1303.624f, 66.09779f, 0f, 0f, -75.01131f, 10.57965f, 4.487142f, 2.499385f);
		_0x39816f6f94f385ad(Local_31.f_3, 1112.993f, -1301.305f, 66.09779f, 0f, 0f, -75.01131f, 8.256206f, 4.750737f, 2.499385f);
	}
	if (!_does_volume_exist(Local_31.f_4))
	{
		Local_31.f_4 = _create_volume_box(1113.606f, -1302.357f, 66.27009f, 0f, 0f, -75.06032f, 10.60032f, 14.40849f, 2.634665f);
	}
	if (!_does_volume_exist(Local_31.f_5))
	{
		Local_31.f_5 = _create_volume_box(1118.322f, -1303.774f, 66.37063f, 0f, 0f, -75.38332f, 4.991179f, 5.654922f, 2.499385f);
	}
	if (!_does_volume_exist(Local_31.f_7))
	{
		Local_31.f_7 = _create_volume_sphere(1886.39f, -1870.559f, 45.44644f, 0f, 0f, 0f, 39f, 39f, 22f);
	}
	if (!_does_volume_exist(Local_31.f_6))
	{
		Local_31.f_6 = _create_volume_box(1111.896f, -1297.143f, 66.29101f, 0f, 0f, -72.76813f, 1f, 1.201944f, 2.261119f);
	}
	if (!_does_volume_exist(Local_31.f_8))
	{
		Local_31.f_8 = _create_volume_cylinder(1114.26f, -1306.836f, 59.8911f, 0f, 0f, 0f, 21.52588f, 21.28818f, 15f);
	}
	if (!_does_volume_exist(Local_31.f_9))
	{
		Local_31.f_9 = _create_volume_box(1111.432f, -1295.534f, 69.29878f, 0f, 0f, 14.04433f, 44.4165f, 25.0552f, 11.90511f);
	}
	if (!_does_volume_exist(Local_31.f_10))
	{
		Local_31.f_10 = _create_volume_cylinder(1114.26f, -1306.836f, 59.8911f, 0f, 0f, 0f, 29f, 29f, 15f);
	}
	if (!_does_volume_exist(Local_31.f_11))
	{
		Local_31.f_11 = _create_volume_cylinder(1114.288f, -1301.956f, 59.891f, 0f, 0f, 13f, 10f, 16f, 15f);
	}
	if (!_does_volume_exist(Local_31.f_12))
	{
		Local_31.f_12 = _create_volume_cylinder(1115.427f, -1309.245f, 66.43633f, 0f, 0f, 0f, 4.536389f, 6.578217f, 2.365261f);
	}
	if (!_does_volume_exist(Local_31.f_13))
	{
		Local_31.f_13 = _create_volume_cylinder(1115.615f, -1311.309f, 67.15942f, 0f, 0f, 0f, 4.5f, 4.5f, 3.279876f);
	}
	if (!_does_volume_exist(Local_31.f_14))
	{
		Local_31.f_14 = _create_volume_cylinder(995.368f, -1317.582f, 62.81912f, 0f, 0f, 0f, 15.54467f, 15.84916f, 7.568371f);
	}
	if (!_does_volume_exist(Local_31.f_15))
	{
		Local_31.f_15 = _create_volume_cylinder(898.982f, -1320.631f, 62.81912f, 0f, 0f, 13.42246f, 19.75484f, 15.84916f, 13.22604f);
	}
	if (!_does_volume_exist(Local_31.f_16))
	{
		Local_31.f_16 = _create_volume_cylinder(844.3723f, -1301.839f, 52.09399f, 0f, 0f, 10.37853f, 19.75484f, 15.84916f, 13.22604f);
	}
	if (!_does_volume_exist(Local_31.f_17))
	{
		Local_31.f_17 = _create_volume_box(1110.198f, -1300.573f, 66.37063f, 0f, 0f, -75.38332f, 5.029932f, 7.825245f, 2.499385f);
	}
	if (!_does_volume_exist(Local_31.f_18))
	{
		Local_31.f_18 = _create_volume_aggregate();
		_0xbce668aaf83608be(Local_31.f_18, 1113.393f, -1309.74f, 66.24419f, 0f, 0f, 80.04412f, 3.49347f, 7.216607f, 2.365261f);
		_0x39816f6f94f385ad(Local_31.f_18, 1123.937f, -1314.397f, 65.41772f, 0f, 0f, -8.241943f, 17.21199f, 6.310714f, 3.124192f);
	}
	if (!_does_volume_exist(Local_31.f_19))
	{
		Local_31.f_19 = _create_volume_box(1120.735f, -1306.717f, 64.87163f, 0f, 0f, 14.21172f, 3.11555f, 1.291362f, 1f);
	}
	if (!_does_volume_exist(Local_31.f_20))
	{
		Local_31.f_20 = _create_volume_box(1115.96f, -1313.009f, 65.57087f, 0f, 0f, 14.94772f, 13.00604f, 10.00838f, 4.354444f);
	}
	if (!_does_volume_exist(Local_31.f_21))
	{
		Local_31.f_21 = _create_volume_box_with_custom_name(1117.199f, -1297.492f, 65.84922f, 0f, 0f, 0f, 4f, 2f, 3f, "leftTideUpBox");
	}
	if (!_does_volume_exist(Local_31.f_22))
	{
		Local_31.f_22 = _create_volume_box_with_custom_name(1117.162f, -1299.509f, 65.87424f, 0f, 0f, 0f, 4f, 2f, 3f, "rightTideUpBox");
	}
	if (!_does_volume_exist(Local_31.f_23))
	{
		Local_31.f_23 = _create_volume_box_with_custom_name(1115.601f, -1308.594f, 64.93907f, 0f, 0f, 14.99999f, 2f, 3f, 4f, "blockForemanDropping");
	}
	if (!_does_volume_exist(Local_31.f_25))
	{
		Local_31.f_25 = _create_volume_box_with_custom_name(1850.899f, -1829.421f, 41.38991f, 1f, 0f, 55f, 6f, 8f, 9f, "IntroCutsceneRestrict");
	}
	if (!_does_volume_exist(Local_31.f_26))
	{
		Local_31.f_26 = _create_volume_box(1877.251f, -1881.726f, 42.148f, 0f, 0f, 0f, 5f, 5f, 12f);
	}
	if (!_does_volume_exist(Local_31.f_27))
	{
		Local_31.f_27 = _create_volume_box(1852.134f, -1830.088f, 42.91753f, 0f, 0f, -35f, 10f, 10f, 10f);
	}
	if ((((((((((((((((((((((((((!_does_volume_exist(Local_31) || !_does_volume_exist(Local_31.f_1)) || !_does_volume_exist(Local_31.f_2)) || !_does_volume_exist(Local_31.f_3)) || !_does_volume_exist(Local_31.f_4)) || !_does_volume_exist(Local_31.f_5)) || !_does_volume_exist(Local_31.f_7)) || !_does_volume_exist(Local_31.f_6)) || !_does_volume_exist(Local_31.f_8)) || !_does_volume_exist(Local_31.f_9)) || !_does_volume_exist(Local_31.f_10)) || !_does_volume_exist(Local_31.f_11)) || !_does_volume_exist(Local_31.f_12)) || !_does_volume_exist(Local_31.f_13)) || !_does_volume_exist(Local_31.f_14)) || !_does_volume_exist(Local_31.f_15)) || !_does_volume_exist(Local_31.f_16)) || !_does_volume_exist(Local_31.f_17)) || !_does_volume_exist(Local_31.f_18)) || !_does_volume_exist(Local_31.f_19)) || !_does_volume_exist(Local_31.f_20)) || !_does_volume_exist(Local_31.f_21)) || !_does_volume_exist(Local_31.f_22)) || !_does_volume_exist(Local_31.f_23)) || !_does_volume_exist(Local_31.f_25)) || !_does_volume_exist(Local_31.f_26)) || !_does_volume_exist(Local_31.f_27))
	{
		return false;
	}
	return true;
}

void func_853(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	if (!_does_volume_exist(iParam1))
	{
		return;
	}
	func_1368(uParam0);
	uParam0->f_4 = iParam1;
	func_1369(uParam0, iParam2, iParam3, iParam4, iParam5);
}

void func_854(var uParam0)
{
	uParam0->f_607 = uParam0->f_607;
}

void func_855()
{
	iVar0 = func_1370(iLocal_227, 0);
	iVar1 = func_1370(iLocal_227, 1);
	set_ped_config_flag(iVar0, 301, true);
	set_ped_config_flag(iVar1, 301, true);
}

void func_856()
{
	func_1191(-18102128, 1, 0f, 0, 1, 0f, 0, 0);
	func_1191(1151226872, 1, 0f, 0, 1, 0f, 0, 0);
	func_1191(1485561723, 1, 0f, 0, 1, 0f, 0, 0);
	func_1191(-750353502, 1, 0f, 0, 1, 0f, 0, 0);
}

void func_857()
{
	if (!is_entity_dead(&(Local_193[1])))
	{
		_0x437c08db4febe2bd(&(Local_193[1]), "MalePassenger", 1f, -1);
		set_ped_config_flag(&(Local_193[1]), 382, true);
	}
	func_1239(&(Local_193[0]), 0);
}

bool func_858(var uParam0)
{
	if (func_33(uParam0) == iLocal_98)
	{
	}
	if (func_33(uParam0) == iLocal_101)
	{
		_0xe296208c273bd7f0(-1, -1, 0, 17, 1, 0);
	}
	if (func_33(uParam0) == iLocal_104)
	{
	}
	return uParam0->f_607 == uParam0->f_607;
}

void func_859(var uParam0, int iParam1)
{
	uParam0->f_8265 = iParam1;
	func_103(uParam0, 2048);
}

bool func_860(var uParam0)
{
	if (func_33(uParam0) == iLocal_98)
	{
		func_762(&(uParam0->f_7375), 1842.8f, -1860.35f, 41.96f, 7.63f, 1);
		func_760(&(uParam0->f_7375));
		_0xc67a4910425f11f1(player_id(), 0);
		iVar0 = 0;
		while (iVar0 <= 23)
		{
			if ((iVar0 != 19 && does_entity_exist(func_1162(iVar0))) && func_1371(func_1162(iVar0), Local_31.f_27, 0, 1))
			{
				set_entity_coords(func_1162(iVar0), 1905.324f, -1851.992f, 41.0647f, true, false, true, true);
			}
			iVar0++;
		}
		if (does_entity_exist(func_516(4)))
		{
			func_1372(4);
			func_1373(4, 1, 1, 1, 0);
		}
		if (does_entity_exist(func_516(12)))
		{
			func_1372(12);
			func_1373(12, 1, 1, 1, 0);
		}
		if (!does_entity_exist(iLocal_227))
		{
			iLocal_227 = _get_anim_scene_vehicle(uParam0->f_7375.f_804, "wagon02x", true);
			if (does_entity_exist(iLocal_227))
			{
				if (!func_1374(1))
				{
					return false;
				}
			}
		}
		else if (!func_1374(0))
		{
			return false;
		}
	}
	if (func_33(uParam0) == iLocal_101)
	{
		if (_does_metaped_outfit_exist_for_ped_model(-1945712043, 1038525765))
		{
			_0xa2f8b3b5fedfc100(&(Local_193[0]), -1945712043);
			_update_ped_variation(&(Local_193[0]), false, true, true, true, false);
		}
		if (func_1362())
		{
			if (func_1360(uParam0))
			{
				if (func_1363())
				{
					if (does_entity_exist(Local_115[6]->f_1))
					{
						switch (iVar322)
						{
							case 0:
								if ((func_1375(&(uParam0->f_7375)) - func_1376(&(uParam0->f_7375))) < 15000)
								{
									_set_entity_coords_and_heading(&(Local_115[3]), 1117.5f, -1280.02f, 65.6f, 79.86f, true, false, true);
									iLocal_325 = 1;
								}
								break;
							case 1:
								if ((func_1375(&(uParam0->f_7375)) - func_1376(&(uParam0->f_7375))) < 8300)
								{
									_set_entity_coords_and_heading(&(Local_115[3]), 1117.5f, -1280.02f, 65.6f, 79.86f, true, false, true);
									task_look_at_entity(&(Local_115[3]), Global_35, 2500, 0, 51, 0);
									task_look_at_entity(&(Local_115[4]), Global_35, 2500, 0, 51, 0);
									task_look_at_entity(&(Local_115[5]), Global_35, 2500, 0, 51, 0);
									task_mount_animal(&(Local_115[3]), Local_115[3]->f_1, -1, -1, 2f, 1, 0, 0);
									force_ped_motion_state(Local_115[4]->f_1, -530524, false, 0, false);
									force_ped_motion_state(Local_115[5]->f_1, -530524, false, 0, false);
									iLocal_325 = 2;
								}
								break;
							case 2:
								if ((func_1375(&(uParam0->f_7375)) - func_1376(&(uParam0->f_7375))) < 8300)
								{
									set_ped_min_move_blend_ratio(Local_115[4]->f_1, 1.501f);
									set_ped_min_move_blend_ratio(Local_115[5]->f_1, 1.501f);
								}
								if ((func_1375(&(uParam0->f_7375)) - func_1376(&(uParam0->f_7375))) < 8300)
								{
									iLocal_325 = 3;
								}
								break;
							case 3:
								if ((func_1375(&(uParam0->f_7375)) - func_1376(&(uParam0->f_7375))) < 10000)
								{
									if (is_waypoint_playback_going_on_for_ped(&(Local_115[3]), 0))
									{
										waypoint_playback_override_speed(&(Local_115[3]), 2f, 0, -1082130432, 0);
									}
									iLocal_325 = 4;
								}
								break;
							case 4:
								if (is_waypoint_playback_going_on_for_ped(&(Local_115[5]), 0))
								{
									waypoint_playback_override_speed(&(Local_115[5]), 2.5f, 0, -1082130432, 0);
								}
								if ((func_1375(&(uParam0->f_7375)) - func_1376(&(uParam0->f_7375))) < 8300)
								{
									_0x06d26a96ca1bca75(Local_115[3]->f_1, 3, 1f, 0);
									task_follow_waypoint_recording(&(Local_115[4]), "susan_1_horse_chase", 35, 22532, -1, 0, 0, -1);
									task_follow_waypoint_recording(&(Local_115[5]), "susan_1_horse_chase", 35, 22532, -1, 0, 0, -1);
									if (is_waypoint_playback_going_on_for_ped(&(Local_115[5]), 0))
									{
										waypoint_playback_override_speed(&(Local_115[5]), 2.5f, 0, -1082130432, 0);
									}
									if (is_waypoint_playback_going_on_for_ped(&(Local_115[4]), 0))
									{
										waypoint_playback_override_speed(&(Local_115[4]), 1.501f, 0, -1082130432, 0);
									}
									func_851(uParam0);
									iLocal_325 = 5;
								}
								break;
							case 5:
								if (is_waypoint_playback_going_on_for_ped(&(Local_115[5]), 0))
								{
									waypoint_playback_override_speed(&(Local_115[5]), 2f, 0, -1082130432, 0);
								}
								if (is_waypoint_playback_going_on_for_ped(&(Local_115[3]), 0))
								{
									waypoint_playback_override_speed(&(Local_115[3]), 2f, 0, -1082130432, 0);
								}
								if (is_waypoint_playback_going_on_for_ped(&(Local_115[4]), 0))
								{
									waypoint_playback_override_speed(&(Local_115[4]), 1.501f, 0, -1082130432, 0);
								}
								break;
						}
					}
				}
			}
		}
		set_anim_scene_entity(&(uLocal_67[8]), "ARTHUR", Global_35, 0);
		set_anim_scene_entity(&(uLocal_67[8]), "SUSANGRIMSHAW", &(Local_193[1]), 0);
		set_anim_scene_entity(&(uLocal_67[8]), "HORSE", Local_115[6]->f_1, 0);
		if (_0x1f0e401031e20146(uParam0->f_7375.f_804, "2-RightApproach-MultiStart") || _0x1f0e401031e20146(uParam0->f_7375.f_804, "1-LeftApproach-MultiStart"))
		{
			if (_get_anim_scene_progress(uParam0->f_7375.f_804) > 0.99f && !_is_anim_scene_finished(&(uLocal_67[8]), false))
			{
				start_anim_scene(&(uLocal_67[8]));
			}
			if (_get_anim_scene_time(uParam0->f_7375.f_804) > 32f)
			{
				if (func_443(1632247697) && _0xa0bc8faed8cfeb3c(&(Local_193[1])))
				{
					func_444(&(Local_193[1]), -405718983);
				}
				else if (!func_443(1632247697) && _0xa0bc8faed8cfeb3c(&(Local_193[1])))
				{
					func_444(&(Local_193[1]), 1085627780);
				}
				if (!bVar287)
				{
					clear_ped_tasks_immediately(Local_115[3]->f_1, false, true);
					func_1199(Local_115[3]->f_1, func_216(4, 2), 2, 1073741824);
					task_follow_waypoint_recording(&(Local_115[3]), "susan_1_horse_chase", 0, 4196366, -1, 0, 0, -1);
					iLocal_290 = 1;
				}
				if (is_waypoint_playback_going_on_for_ped(&(Local_115[3]), 0))
				{
					waypoint_playback_override_speed(&(Local_115[3]), 2.5f, 0, -1082130432, 0);
				}
			}
		}
		else
		{
			if (_get_anim_scene_progress(uParam0->f_7375.f_804) > 0.99f && !_is_anim_scene_finished(&(uLocal_67[8]), false))
			{
				start_anim_scene(&(uLocal_67[8]));
			}
			if (_get_anim_scene_time(uParam0->f_7375.f_804) > 28f)
			{
				if (func_443(1632247697) && _0xa0bc8faed8cfeb3c(&(Local_193[1])))
				{
					func_444(&(Local_193[1]), -405718983);
				}
				else if (!func_443(1632247697) && _0xa0bc8faed8cfeb3c(&(Local_193[1])))
				{
					func_444(&(Local_193[1]), 1085627780);
				}
				if (!bVar287)
				{
					clear_ped_tasks_immediately(Local_115[3]->f_1, false, true);
					force_ped_motion_state(Local_115[3]->f_1, -1115154469, false, 0, false);
					func_1199(Local_115[3]->f_1, func_216(4, 2), 2, 1073741824);
					task_follow_waypoint_recording(&(Local_115[3]), "susan_1_horse_chase", 0, 4196366, -1, 0, 0, -1);
					iLocal_290 = 1;
				}
				if (is_waypoint_playback_going_on_for_ped(&(Local_115[3]), 0))
				{
					waypoint_playback_override_speed(&(Local_115[3]), 2.5f, 0, -1082130432, 0);
				}
			}
		}
	}
	if (func_33(uParam0) == iLocal_103)
	{
		if (_does_metaped_outfit_exist_for_ped_model(-1945712043, 1038525765))
		{
			_0xa2f8b3b5fedfc100(&(Local_193[0]), -1945712043);
			_update_ped_variation(&(Local_193[0]), false, true, true, true, false);
		}
	}
	if (func_33(uParam0) == iLocal_104)
	{
		if (_get_anim_scene_time(uParam0->f_7375.f_804) < 0.5f)
		{
			func_762(&(uParam0->f_7375), 1109.15f, -1315.9f, 64.03f, -55.89f, 1);
			func_760(&(uParam0->f_7375));
		}
		if (_does_metaped_outfit_exist_for_ped_model(-1945712043, 1038525765))
		{
			_0xa2f8b3b5fedfc100(&(Local_193[0]), -1945712043);
			_update_ped_variation(&(Local_193[0]), false, true, true, true, false);
		}
		func_1203(uParam0, "2A-Kill");
		func_1203(uParam0, "2B-LetGo");
		if (((!is_entity_dead(Local_115[6]->f_1) && !is_entity_on_screen(Local_115[6]->f_1)) && !is_ped_using_any_scenario(Local_115[6]->f_1)) && !func_1237(Local_115[6]->f_1, -982327190))
		{
			_set_entity_coords_and_heading(Local_115[6]->f_1, 1112.009f, -1317.201f, 63.9672f, 259.6204f, true, false, true);
			task_stand_still(Local_115[6]->f_1, -1);
		}
		if ((((is_entity_dead(Local_115[6]->f_1) && !is_entity_dead(Local_115[5]->f_1)) && !is_entity_on_screen(Local_115[5]->f_1)) && !is_ped_using_any_scenario(Local_115[5]->f_1)) && !func_1237(Local_115[5]->f_1, -982327190))
		{
			_set_entity_coords_and_heading(Local_115[5]->f_1, 1112.009f, -1317.201f, 63.9672f, 259.6204f, true, false, true);
			task_stand_still(Local_115[5]->f_1, -1);
		}
		if (_0x1f0e401031e20146(uParam0->f_7375.f_804, "2B-LetGo"))
		{
			if (_0xb89fcff19dafff28(uParam0->f_7375.f_804, "ANTONYFOREMEN") || _get_anim_scene_progress(uParam0->f_7375.f_804) > 0.9f)
			{
				delete_ped(Local_115[5]);
			}
		}
		if (((_does_anim_scene_exist(uParam0->f_7375.f_804) && _0x8d81e7824b7753f7(uParam0->f_7375.f_804, "SUS1_EXT_P2_T03_SHOT_2", 1)) || _0x1f0e401031e20146(uParam0->f_7375.f_804, "2A-Kill")) || _0x1f0e401031e20146(uParam0->f_7375.f_804, "2B-LetGo"))
		{
			if (!func_1377(uParam0))
			{
			}
		}
	}
	return uParam0->f_607 == uParam0->f_607;
}

void func_861(var uParam0, int iParam1)
{
	uParam0->f_8266 = iParam1;
	func_103(uParam0, 1024);
}

bool func_862(var uParam0)
{
	if (func_33(uParam0) == iLocal_98)
	{
		if (does_entity_exist(func_516(4)))
		{
			func_1372(4);
			func_1373(4, 1, 1, 1, 0);
		}
		if (does_entity_exist(func_516(12)))
		{
			func_1372(12);
			func_1373(12, 1, 1, 1, 0);
		}
	}
	if (func_33(uParam0) == iLocal_101)
	{
		_set_ped_on_mount(&(Local_115[3]), Local_115[3]->f_1, -1, true);
		_0x06d26a96ca1bca75(Local_115[3]->f_1, 3, 0f, 0);
		if (!bVar287)
		{
			clear_ped_tasks_immediately(Local_115[3]->f_1, false, true);
			force_ped_motion_state(Local_115[3]->f_1, -1115154469, false, 0, false);
			func_1199(Local_115[3]->f_1, func_216(4, 2), 2, 1073741824);
			task_follow_waypoint_recording(&(Local_115[3]), "susan_1_horse_chase", 0, 4196366, -1, 0, 0, -1);
			iLocal_290 = 1;
		}
		if (func_443(1632247697) && _0xa0bc8faed8cfeb3c(&(Local_193[1])))
		{
			func_444(&(Local_193[1]), -405718983);
		}
		else if (!func_443(1632247697) && _0xa0bc8faed8cfeb3c(&(Local_193[1])))
		{
			func_444(&(Local_193[1]), 1085627780);
		}
	}
	if (func_33(uParam0) == iLocal_104)
	{
		if (func_82(32768))
		{
			func_1378(uParam0, 524288);
		}
		if ((!is_entity_dead(Local_115[6]->f_1) && !is_entity_on_screen(Local_115[6]->f_1)) && !is_ped_using_any_scenario(Local_115[6]->f_1))
		{
			_set_entity_coords_and_heading(Local_115[6]->f_1, 1112.009f, -1317.201f, 63.9672f, 259.6204f, true, false, true);
			func_1379(Local_115[6]->f_1, 696740378, -1, 1, 0, -1082130432);
		}
		if (((is_entity_dead(Local_115[6]->f_1) && !is_entity_dead(Local_115[5]->f_1)) && !is_entity_on_screen(Local_115[5]->f_1)) && !is_ped_using_any_scenario(Local_115[5]->f_1))
		{
			_set_entity_coords_and_heading(Local_115[5]->f_1, 1128.165f, -1308.074f, 64.8107f, 131.6204f, true, false, true);
			func_1379(Local_115[5]->f_1, 696740378, -1, 1, 0, -1082130432);
		}
	}
	return uParam0->f_607 == uParam0->f_607;
}

void func_863(var uParam0, int iParam1)
{
	uParam0->f_8267 = iParam1;
	func_103(uParam0, 131072);
}

void func_864(var uParam0)
{
	iVar0 = func_33(uParam0);
	switch (iVar0)
	{
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 25:
			if (_0xa0bc8faed8cfeb3c(&(Local_193[0])) && does_entity_exist(&(Local_193[0])))
			{
				_0x27e8a84c12b0b7d1(&(Local_193[0]), -105586907, 1);
				func_444(&(Local_193[0]), -105586907);
				if (((func_33(uParam0) != iLocal_101 && func_33(uParam0) != iLocal_102) && func_33(uParam0) != iLocal_103) && func_33(uParam0) != iLocal_104)
				{
					_set_ped_body_component(&(Local_193[0]), -1945712043);
				}
				func_442(22, 28, 0);
				func_442(22, 66, 0);
				func_164(22, 25, 0);
				_update_ped_variation(&(Local_193[0]), false, true, true, true, false);
			}
			break;
	}
}

int func_865(vector3 vParam0, vector3 vParam3, vector3 vParam6, float fParam9, var uParam10, int iParam11)
{
	vVar1 = { func_440(vParam0, vParam3, uParam10) };
	vVar4 = { func_441(vParam0, vParam3, uParam10) };
	func_1341(vParam6, fParam9, iParam11);
	set_ped_non_creation_area(vVar1, vVar4);
	set_ped_paths_in_area(vVar1, vVar4, false, 0);
	iVar0 = add_scenario_blocking_area(vVar1, vVar4, iParam11, 15);
	return iVar0;
}

void func_866(var uParam0)
{
	if (func_33(uParam0) == iLocal_98)
	{
		func_151(uParam0, &(Local_193[1]), "SusanGrimshaw", 0, 0, 0, 0);
		func_151(uParam0, &(Local_193[0]), "TILLY", 0, 0, 0, 0);
		func_151(uParam0, iVar281, "Marybeth", 0, 0, 0, 0);
		func_151(uParam0, Global_35, "ARTHUR", 0, 0, 0, 0);
	}
}

void func_867(var uParam0)
{
	uParam0->f_607 = uParam0->f_607;
	if (is_entity_dead(Global_35))
	{
	}
	if (((does_entity_exist(&(Local_193[1])) && _0x30569f348d126a5a(&(Local_193[1])) != 464906090) && _is_anim_scene_started(&(uLocal_67[7]), false)) && func_443(1632247697))
	{
		func_444(&(Local_193[1]), 464906090);
	}
	if ((func_33(uParam0) == iLocal_98 || func_33(uParam0) == iLocal_99) || func_33(uParam0) == iLocal_100)
	{
		if (does_entity_exist(&(Local_193[0])))
		{
			if (!_does_metaped_outfit_exist_for_ped_model(-1945712043, 1038525765))
			{
				_0x27e8a84c12b0b7d1(&(Local_193[0]), -105586907, 1);
				func_444(&(Local_193[0]), -105586907);
				_set_ped_body_component(&(Local_193[0]), -1945712043);
				_update_ped_variation(&(Local_193[0]), false, true, true, true, false);
			}
			if (_0x30569f348d126a5a(&(Local_193[0])) != -105586907)
			{
				func_444(&(Local_193[0]), -105586907);
				_set_ped_body_component(&(Local_193[0]), -1945712043);
				_update_ped_variation(&(Local_193[0]), false, true, true, true, false);
			}
		}
	}
	if ((func_33(uParam0) == iLocal_102 || func_33(uParam0) == iLocal_103) || func_33(uParam0) == iLocal_104)
	{
		if (does_entity_exist(&(Local_193[0])))
		{
			if (_does_metaped_outfit_exist_for_ped_model(-1945712043, 1038525765))
			{
				_0xa2f8b3b5fedfc100(&(Local_193[0]), -1945712043);
				_update_ped_variation(&(Local_193[0]), false, true, true, true, false);
			}
		}
	}
}

void func_868(var uParam0)
{
	if (!func_23(&(uParam0->f_8269)))
	{
		return;
	}
	if (!func_121(uParam0, func_33(uParam0), 268435456))
	{
		return;
	}
	func_1380(uParam0);
}

void func_869(var uParam0)
{
	if (!func_8(uParam0, 8388608))
	{
		if (func_162(uParam0, func_33(uParam0)) == 5 || func_162(uParam0, func_33(uParam0)) == 6)
		{
			if (!func_206())
			{
				if (func_846(&(uParam0->f_13112)) < 5f)
				{
					_0x9f9a829c6751f3c7(get_player_index(), 31, 0);
				}
			}
			else
			{
				func_213(&(uParam0->f_13112));
			}
		}
	}
	else
	{
		_0x9f9a829c6751f3c7(get_player_index(), 31, 1);
	}
}

void func_870(var uParam0)
{
	if (func_121(uParam0, func_33(uParam0), 8388608))
	{
		if (func_1381(uParam0))
		{
			_uiprompt_enable_prompt_type_this_frame(6);
			func_1382();
		}
		else
		{
			_display_hud_component(-1679307491);
			func_1383(uParam0, func_33(uParam0), 8388608);
		}
	}
}

void func_871(var uParam0)
{
	if (Global_1935630->f_12)
	{
		return;
	}
	if (func_8(uParam0, 256))
	{
		return;
	}
	if (!func_8(uParam0, 1048576))
	{
		if (func_231() || func_54())
		{
			func_99(uParam0, 1048576);
		}
	}
	else if (!func_231() && !func_54())
	{
		func_842(uParam0, 1048576);
	}
	if (!func_8(uParam0, 134217728))
	{
		if ((func_8(uParam0, 1048576) && !func_121(uParam0, func_33(uParam0), 524288)) && !func_121(uParam0, func_33(uParam0), 1))
		{
			if (!Global_1935630->f_12)
			{
				_0xb832f1a686b9b810(Global_35, true, 0);
				func_99(uParam0, 134217728);
			}
		}
	}
	else if ((!func_8(uParam0, 1048576) || func_121(uParam0, func_33(uParam0), 524288)) || func_121(uParam0, func_33(uParam0), 1))
	{
		if (!Global_1935630->f_12)
		{
			_0xb832f1a686b9b810(Global_35, false, 0);
			func_842(uParam0, 134217728);
		}
	}
}

void func_872(var uParam0)
{
	if (Global_1935630->f_12)
	{
		return;
	}
	if (func_121(uParam0, func_33(uParam0), 1) && !func_121(uParam0, func_33(uParam0), 1048576))
	{
		set_ped_reset_flag(Global_35, 175, true);
	}
}

void func_873(var uParam0)
{
	if (Global_1935630->f_12)
	{
		return;
	}
	if (!func_121(uParam0, func_33(uParam0), 2097152))
	{
		set_ped_reset_flag(Global_35, 187, true);
	}
}

void func_874(var uParam0)
{
	if (!is_itemset_valid(Local_14))
	{
		return;
	}
	iVar0 = get_itemset_size(Local_14);
	if (uParam0->f_13179 == -1 || uParam0->f_13179 > (iVar0 - 1))
	{
		uParam0->f_13179 = (iVar0 - 1);
	}
	iVar1 = uParam0->f_13179;
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
	uParam0->f_13179 = (iVar1 - 1);
	if (iVar1 <= 0)
	{
		uParam0->f_13179 = (get_itemset_size(Local_14) - 1);
	}
}

int func_875(var uParam0)
{
	if ((func_20() != -1 || func_33(uParam0) == 25) || func_33(uParam0) == 26)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_13145)
	{
		if (func_247(uParam0->f_5423[iVar0]))
		{
			func_1384(uParam0->f_5423[iVar0]);
		}
		iVar0++;
	}
	return 0;
}

bool func_876(var uParam0, int iParam1, int iParam2)
{
	iVar0 = func_132(iParam1);
	if (!func_1385(iVar0))
	{
		return false;
	}
	iVar1 = func_1386(iParam2);
	if (!func_1387(iVar1))
	{
		return false;
	}
	if (!func_1388(uParam0, iParam1, iParam2))
	{
		return true;
	}
	Stack.Push(uParam0);
	Call_Loc(uParam0->f_1[iVar0][iVar1]);
	if (StackVal)
	{
		return true;
	}
	return false;
}

int func_877(var uParam0, int iParam1)
{
	return uParam0->f_1[func_132(iParam1)]->f_21;
}

bool func_878(var uParam0, int iParam1)
{
	if (iParam1 == iLocal_98)
	{
	}
	else if (iParam1 == iLocal_99)
	{
	}
	else if (iParam1 == iLocal_100)
	{
	}
	else if (iParam1 == iLocal_101)
	{
	}
	else if (iParam1 == iLocal_102)
	{
	}
	else if (iParam1 == iLocal_103)
	{
	}
	return uParam0->f_607 == uParam0->f_607;
}

void func_879(var uParam0)
{
	if (!func_20() == 0 || network_is_host_of_this_script())
	{
		func_213(&(uParam0->f_603));
	}
}

void func_880(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_1[func_132(iParam1)]->f_10 = iParam2;
	settimera(0);
}

bool func_881(var uParam0)
{
	if (!is_screen_faded_out())
	{
		return true;
	}
	if (!func_26(&(uParam0->f_13109)))
	{
		func_27(&(uParam0->f_13109), 0);
	}
	else if (func_846(&(uParam0->f_13109)) >= 10f)
	{
		return true;
	}
	iVar0 = 1;
	if (func_248(uParam0->f_5421))
	{
		iVar1 = 0;
		while (iVar1 < func_249(uParam0->f_5421))
		{
			iVar2 = func_250(uParam0->f_5421, iVar1);
			if (does_entity_exist(iVar2))
			{
				if (is_entity_a_ped(iVar2))
				{
					iVar3 = func_1389(uParam0->f_5421, iVar1);
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

float func_882(var uParam0)
{
	return func_846(&(uParam0->f_603));
}

bool func_883(var uParam0)
{
	if ((func_120(uParam0, 4) || func_120(uParam0, 128)) && !func_102())
	{
		return false;
	}
	return true;
}

bool func_884(var uParam0, int iParam1, int iParam2)
{
	if (func_8(uParam0, -2147483648))
	{
		return true;
	}
	if (func_876(uParam0, iParam1, 4))
	{
		if (func_33(uParam0) != 25 && func_33(uParam0) != 26)
		{
			if (!func_8(uParam0, 512) && !func_120(uParam0, 4))
			{
				func_36(uParam0, func_34(iParam1), func_34(iParam2), iParam1, iParam2);
			}
			else
			{
				Var0 = { func_34(iParam2) };
				*Global_1347394 = { Var0 };
				Global_1347394->f_3 = Var0.f_3;
				Global_1572864->f_10 = func_132(iParam2);
			}
		}
		func_1390(uParam0);
		if (func_1391(uParam0))
		{
			func_1392(uParam0);
		}
		if (func_121(uParam0, func_33(uParam0), 33554432) && func_8(uParam0, 524288))
		{
			_uilog_print_cached_objective();
		}
		func_842(uParam0, 524288);
		func_1393(&(uParam0->f_7375), 4);
		if (func_1381(uParam0))
		{
			func_140(uParam0, func_33(uParam0), 8388608);
			_hide_hud_component(-1679307491);
			_uiprompt_enable_prompt_type_this_frame(6);
			func_1382();
		}
		return true;
	}
	return false;
}

void func_885(var uParam0)
{
	func_1394(uParam0);
	if (func_121(uParam0, func_33(uParam0), 2))
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

bool func_886(var uParam0, int iParam1)
{
	if (func_120(uParam0, 16384))
	{
		if (func_841(uParam0))
		{
			func_51(&(uParam0->f_10792));
			func_842(uParam0, 2097152);
			func_257(uParam0, 16384);
			func_103(uParam0, 128);
			return true;
		}
		return false;
	}
	if (!func_8(uParam0, 4))
	{
		func_878(uParam0, iParam1);
		func_99(uParam0, 4);
	}
	Var0 = { func_1344(uParam0, iParam1) };
	if (func_121(uParam0, func_33(uParam0), 2))
	{
		if (func_8(uParam0, 2097152))
		{
			if (func_841(uParam0))
			{
				func_842(uParam0, 2097152);
				func_843(uParam0, Var0);
			}
			return false;
		}
		else
		{
			return func_843(uParam0, Var0);
		}
	}
	else if (func_8(uParam0, 2097152))
	{
		if (func_841(uParam0))
		{
			func_842(uParam0, 2097152);
			func_1351(uParam0);
			return true;
		}
		else
		{
			return false;
		}
	}
	if (func_121(uParam0, func_33(uParam0), 2))
	{
		return func_843(uParam0, Var0);
	}
	return true;
}

bool func_887(var uParam0)
{
	return func_1395(&(uParam0->f_7375));
}

void func_888(var uParam0)
{
	if (((!does_entity_exist(Global_35) || Global_1935630->f_12) || is_ped_fatally_injured(Global_35)) || get_entity_health(Global_35) <= 0)
	{
		if (func_1396(uParam0))
		{
			func_424(uParam0, 2);
			StringCopy(&cVar0, "PLAYER_DEAD", 64);
			if (get_ped_config_flag(Global_35, 11, true))
			{
				StringCopy(&cVar0, "PLAYER_KO", 64);
			}
			func_1397(uParam0, cVar0);
			func_160(uParam0, 2);
		}
	}
}

int func_889(var uParam0, int iParam1)
{
	if (((func_20() != -1 || func_33(uParam0) == 25) || func_33(uParam0) == 26) || Global_1935630->f_12)
	{
		return 0;
	}
	bVar0 = func_121(uParam0, func_33(uParam0), 1);
	iVar1 = 0;
	while (iVar1 < uParam0->f_13145)
	{
		if (func_247(uParam0->f_5423[iVar1]))
		{
			if (func_1398(uParam0->f_5423[iVar1]->f_7, iParam1))
			{
				func_1399(uParam0, uParam0->f_5423[iVar1], bVar0);
			}
		}
		iVar1++;
	}
	return 0;
}

void func_890(var uParam0)
{
	if ((is_screen_faded_out() && !is_player_playing(player_id())) && is_player_being_arrested(player_id(), false))
	{
		if (func_1400(uParam0))
		{
			func_424(uParam0, 6);
			StringCopy(&cVar0, "PLAYER_ARRESTED", 64);
			func_1397(uParam0, cVar0);
			func_160(uParam0, 2);
		}
	}
}

void func_891(var uParam0)
{
	switch (func_1401(&iVar0))
	{
		case 1:
			func_1402(uParam0, Var1, 1, 0);
			break;
		case 3:
			if (!_databinding_is_data_id_valid(uParam0->f_13178))
			{
				uParam0->f_13178 = _databinding_add_data_bool_from_path("", "bAllowedtoAbandon", 0);
			}
			if (func_183(iVar0) && iVar0 == func_12(uParam0->f_607))
			{
				bVar9 = true;
			}
			_databinding_write_data_bool(uParam0->f_13178, bVar9);
			break;
	}
}

bool func_892(var uParam0, int iParam1)
{
	if (func_8(uParam0, 4194304))
	{
		return false;
	}
	if (!func_121(uParam0, iParam1, 2))
	{
		return false;
	}
	return true;
}

int func_893(var uParam0, int iParam1)
{
	if (func_8(uParam0, 16777216))
	{
		func_1350(uParam0);
		func_842(uParam0, 65536);
		return 0;
	}
	if (!func_121(uParam0, iParam1, 2))
	{
		return 0;
	}
	Var0 = { func_1344(uParam0, iParam1) };
	if (func_1403(uParam0, &Var0))
	{
		if (!func_8(uParam0, 65536))
		{
			func_99(uParam0, 65536);
		}
		return 1;
	}
	return 0;
}

void func_894(var uParam0, int iParam1)
{
	func_1404(&(uParam0->f_638), &(uParam0->f_819), &(uParam0->f_1020), &(uParam0->f_1081), &(uParam0->f_1124), &(uParam0->f_1126), &(uParam0->f_5147), &(uParam0->f_5188), &(uParam0->f_5239), &(uParam0->f_5249), &(uParam0->f_5265), &(uParam0->f_5286), iParam1, func_218(uParam0, iParam1));
}

void func_895(var uParam0, int iParam1)
{
	if (!func_121(uParam0, func_33(uParam0), 67108864))
	{
		if (does_blip_exist(uParam0->f_5303))
		{
			remove_blip(&(uParam0->f_5303));
		}
		uParam0->f_7374 = 0;
		func_880(uParam0, iParam1, 2);
		func_134(uParam0, 0);
		func_135(uParam0, 0);
		func_99(uParam0, 8);
		func_842(uParam0, -2147483648);
		func_140(uParam0, func_33(uParam0), 67108864);
		func_842(uParam0, 4);
		func_842(uParam0, 8192);
		func_842(uParam0, 536870912);
		func_257(uParam0, 4);
		func_65(0);
		func_64(0);
		func_842(uParam0, 2);
		func_45();
		uParam0->f_5302 = 0;
		func_1405(uParam0);
		if ((func_35(uParam0) == 25 || func_35(uParam0) == 26) && func_82(32768))
		{
			func_372(uParam0, 524288);
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
				func_1406(1, 1);
			}
		}
	}
}

void func_896(bool bParam0)
{
	if (!func_190(0, 0, 1) || bParam0)
	{
		iVar0 = func_969();
		iVar1 = func_972(iVar0);
		fVar2 = (1f - (absf(to_float(iVar1)) / to_float(8)));
		fVar3 = func_1407(iVar0 < 0, 0f, (to_float(iVar1) / to_float(8)));
		fVar4 = func_1407(iVar0 > 0, 0f, (to_float(iVar1) / to_float(8)));
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

bool func_897(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (iParam0 == player_id())
	{
		return func_1408(bParam1, bParam2, bParam3);
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

var func_898(char* sParam0, int iParam1, bool bParam2, bool bParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, int iParam8)
{
	if (bParam2)
	{
		_0xdd1232b332cbb9e7(3, 1, 1);
	}
	if (Global_1572887->f_12 != -1)
	{
		return func_1409(sParam0, iParam1, 0, 0, 1, 1);
	}
	sVar0 = func_1410(iParam8, sParam0, sParam4, sParam5, sParam6, sParam7);
	if (bParam3)
	{
		_uilog_set_cached_objective(sVar0);
	}
	return func_1409(sVar0, iParam1, 0, 0, 1, 1);
}

bool func_899(var uParam0)
{
	return true;
}

bool func_900(var uParam0)
{
	return true;
}

int func_901(var uParam0)
{
	return 1;
}

bool func_902(var uParam0, int iParam1, int iParam2)
{
	if (!does_entity_exist(iParam1))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_13145)
	{
		if (func_247(uParam0->f_5423[iVar0]))
		{
			if (&uParam0->f_5423[iVar0] == iParam1)
			{
				*iParam2 = iVar0;
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_903(var uParam0, int iParam1)
{
	if (!does_entity_exist(iParam1))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_13145)
	{
		if (((func_247(uParam0->f_5423[iVar0]) && is_entity_an_object(&(uParam0->f_5423[iVar0]))) && get_object_index_from_entity_index(&(uParam0->f_5423[iVar0])) != iParam1) && get_entity_model(&(uParam0->f_5423[iVar0])) == get_entity_model(iParam1))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

void func_904(int iParam0, int iParam1, bool bParam2)
{
	if (!func_426(iParam0))
	{
		return;
	}
	func_1411(&((*Global_1360165)[iParam0]->f_13), iParam1, bParam2);
}

bool func_905(int iParam0, int iParam1)
{
	return (*iParam0 && iParam1) != 0;
}

void func_906(int iParam0)
{
	func_442(iParam0, 36, 1);
}

bool func_907(int iParam0, int iParam1)
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
	if (func_381(iVar0, 1))
	{
		if (is_ped_fatally_injured(iParam0))
		{
			return false;
		}
	}
	if (func_381(iVar0, 2))
	{
		if (_is_ped_hogtied(iParam0))
		{
			return false;
		}
	}
	if (func_381(iVar0, 8))
	{
		if (get_ped_config_flag(iParam0, 11, false))
		{
			return false;
		}
	}
	if (func_381(iVar0, 16))
	{
		if (!is_ped_on_mount(iParam0) && !is_ped_in_any_vehicle(iParam0, false))
		{
			return false;
		}
	}
	if (func_381(iVar0, 32))
	{
		if (is_entity_in_water(iParam0))
		{
			return false;
		}
	}
	if (func_381(iVar0, 64))
	{
		if (_0xb655db7582aec805(iParam0))
		{
			return false;
		}
	}
	if (func_381(iVar0, 128))
	{
		if (is_ped_ragdoll(iParam0))
		{
			return false;
		}
	}
	if (func_381(iVar0, 256))
	{
		if (!_0xa0bc8faed8cfeb3c(iParam0))
		{
			return false;
		}
	}
	return true;
}

int func_908(int iParam0, bool bParam1)
{
	if (!func_429(iParam0))
	{
		return 0;
	}
	if (bParam1)
	{
		if (!_0x800df3fc913355f3((*Global_1360165)[iParam0]->f_1))
		{
			func_1412(iParam0);
		}
	}
	return (*Global_1360165)[iParam0]->f_1;
}

void func_909(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (func_429(iParam0))
	{
		iVar1 = func_516(iParam0);
		if (!is_entity_dead(iVar1))
		{
			iVar0 = get_ped_max_health(iVar1);
			set_ped_config_flag(iVar1, 179, true);
			func_1413(iParam0);
		}
	}
	if (func_163(iParam0, 5, 1))
	{
		set_ped_config_flag(func_516(iParam0), 137, true);
	}
}

void func_910(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!func_426(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_164(iParam0, 50, 1);
		func_164(iParam0, 48, 1);
		func_164(iParam0, 49, 1);
		func_164(iParam0, 51, 1);
		func_164(iParam0, 52, 1);
		func_164(iParam0, 54, 1);
		func_164(iParam0, 55, 1);
	}
	else
	{
		func_442(iParam0, 50, 1);
		func_442(iParam0, 48, 1);
		func_442(iParam0, 49, 1);
		func_442(iParam0, 51, 1);
		if (bParam3)
		{
			func_442(iParam0, 54, 1);
		}
		else
		{
			func_164(iParam0, 54, 1);
		}
		if (!bParam2)
		{
			func_442(iParam0, 52, 1);
			if (bParam3)
			{
				func_442(iParam0, 55, 1);
			}
		}
		else
		{
			func_164(iParam0, 52, 1);
			if (!bParam3)
			{
				func_164(iParam0, 55, 1);
			}
		}
	}
}

void func_911(int iParam0, bool bParam1)
{
	if (!func_426(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		set_ped_config_flag(func_516(iParam0), 204, true);
	}
	else
	{
		set_ped_config_flag(func_516(iParam0), 204, false);
	}
}

void func_912(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (!func_429(iParam0))
	{
		return;
	}
	if (func_485(iParam0))
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
	if (func_163(iParam0, 32, 1))
	{
		if (!bParam2)
		{
			return;
		}
	}
	iVar0 = func_908(iParam0, 0);
	if (!_is_base_a_persistent_character(iVar0))
	{
		return;
	}
	iVar1 = func_516(iParam0);
	if (((does_entity_exist(iVar1) && func_1414(iParam0) < 10000f) && !bParam3) && !is_screen_faded_out())
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
		func_442(iParam0, 2, 1);
	}
	else
	{
		func_1415(iParam0);
		func_442(iParam0, 1, 1);
	}
}

void func_913(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_429(iParam0))
		{
			return;
		}
	}
	Global_40.f_4942[iParam0] = (&Global_40.f_4942[iParam0] - (Global_40.f_4942[iParam0] && iParam1));
}

int func_914(int iParam0)
{
	if (!func_429(iParam0))
	{
		return 0;
	}
	if (!does_entity_exist((*Global_1360165)[iParam0]->f_70))
	{
		(*Global_1360165)[iParam0]->f_70 = 0;
	}
	return (*Global_1360165)[iParam0]->f_70;
}

void func_915(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	if (!func_426(iParam1))
	{
		return;
	}
	iVar0 = func_914(iParam1);
	if (func_1416(iParam1))
	{
		if (!func_1417(iParam1))
		{
			return;
		}
	}
	func_164(iParam1, 39, 1);
	func_1418(iParam1, 64, 0);
	(*Global_1360165)[iParam1]->f_70.f_11 = 0;
	func_1418(iParam1, 8, 0);
	if (does_entity_exist(iVar0))
	{
		if (!bParam2)
		{
			func_1418(iParam1, 512, 1);
			set_ped_keep_task(iVar0, true);
		}
		else
		{
			set_blocking_of_non_temporary_events(iVar0, false);
			func_442(iParam1, 43, 1);
		}
		if (bParam4)
		{
			func_1419(iParam1, 0, 1, 1, 1);
		}
	}
}

int func_916(int iParam0, bool bParam1, bool bParam2)
{
	if (!is_door_registered_with_system(iParam0))
	{
		if ((network_is_in_session() && _does_thread_exist(&(Global_1051081->f_15[0]))) && bParam1)
		{
			_0xd99229fe93b46286(iParam0, 1, 1, 0, &(Global_1051081->f_15[0]), 0, 0);
		}
		else
		{
			_0xd99229fe93b46286(iParam0, 1, 0, 0, 0, 0, 0);
		}
	}
	else if ((network_is_in_session() && _does_thread_exist(&(Global_1051081->f_15[0]))) && bParam1)
	{
		if (!_0xb5ded7b65c604fdf(iParam0))
		{
			_0xd99229fe93b46286(iParam0, 1, 1, 0, &(Global_1051081->f_15[0]), 0, 0);
		}
	}
	if (bParam2)
	{
		_0x1f1fabfe9b2a1254(iParam0, 1);
	}
	return iParam0;
}

bool func_917(int iParam0)
{
	if (func_1420(iParam0))
	{
		return is_door_registered_with_system(iParam0);
	}
	return false;
}

bool func_918(int iParam0, int iParam1)
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

bool func_919(int iParam0, int iParam1)
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

bool func_920(int iParam0, int iParam1)
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
	if (!func_918(iParam0, iVar0))
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

void func_921(int iParam0)
{
	decor_remove(iParam0, "metaped_outfit_request");
	decor_remove(iParam0, "metaped_outfit_request_name");
}

bool func_922(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return ((*Global_1945938)[iParam0]->f_1 && iParam1) != 0;
}

int func_923(int iParam0)
{
	iVar0 = func_446(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return func_1421(iVar0);
}

int func_924(int iParam0, int iParam1)
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
			func_1422(iVar2);
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

void func_925()
{
	iVar0 = 0;
	while (iVar0 < Global_1058888->f_40501)
	{
		iVar0++;
	}
}

int func_926(int iParam0, int iParam1)
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

int func_927(bool bParam0)
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

int func_928(int iParam0)
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

void func_929(int iParam0, int iParam1)
{
	Global_1946804->f_2657.f_26.f_6 = (Global_1946804->f_2657.f_26.f_6 - (Global_1946804->f_2657.f_26.f_6 && iParam0));
}

void func_930(int iParam0, int iParam1)
{
	Global_1946804->f_2657.f_26.f_6 = (Global_1946804->f_2657.f_26.f_6 || iParam0);
}

void func_931(int iParam0, int iParam1)
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
			func_1423((iVar0 - 1), iVar0);
			iVar0 = (iVar0 - 1);
		}
	}
	else
	{
		iVar0 = iParam0;
		while (iVar0 < iParam1)
		{
			func_1423(iVar0, iVar0 + 1);
			iVar0++;
		}
	}
	if (func_183(&(Global_1898164->f_1[0])))
	{
		func_195(&(Global_1898164->f_1[0]), 3);
	}
}

void func_932(int iParam0, int iParam1, bool bParam2)
{
	if (!func_464(iParam0))
	{
		return;
	}
	func_1424(iParam1, &iVar0, &iVar1);
	if (bParam2)
	{
		set_bit((*Global_1935183->f_73[iParam0])[iVar0], iVar1);
	}
	else
	{
		clear_bit((*Global_1935183->f_73[iParam0])[iVar0], iVar1);
	}
}

void func_933(var uParam0)
{
	Var0 = -1600776215;
	Var0.f_1 = 820723243;
	Var0.f_2 = 1;
	*uParam0 = { Var0 };
}

void func_934(float fParam0, int iParam1)
{
	*fParam0 = (*fParam0 || iParam1);
}

void func_935(float fParam0, int iParam1)
{
	*fParam0 = (*fParam0 - (*fParam0 && iParam1));
}

bool func_936()
{
	if (_get_number_of_references_of_script_with_name_hash(-92416669) > 0)
	{
		return true;
	}
	return false;
}

bool func_937(int iParam0)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1934603->f_161)
	{
		if (iParam0 == get_hash_key(&((*Global_1934603)[iVar0]->f_10)))
		{
			func_1425(iVar0);
			return true;
		}
		iVar0++;
	}
	return false;
}

float func_938(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return -70.7654f;
				case 1:
					return 390.2346f;
				case 2:
					return 376.2346f;
				case 3:
					return 378.2346f;
				case 4:
					return 366.2346f;
				case 5:
					return -33.7654f;
				case 6:
					return -366.3369f;
				case 7:
					return 97.6631f;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 395.8289f;
				case 1:
					return 376.639f;
				case 2:
					return 399.5499f;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return 555.5393f;
				case 1:
					return 473.5393f;
				case 2:
					return 557.5393f;
				case 3:
					return 324.225f;
				case 4:
					return -463.7654f;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return 73.55f;
				case 1:
					return 284.1682f;
				case 2:
					return 34.3892f;
				case 3:
					return 52.53f;
				case 4:
					return 393.1674f;
				case 5:
					return 531.6631f;
				case 6:
					return 203.9436f;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return 114.6279f;
				case 1:
					return 112.57f;
				case 2:
					return 100.6279f;
				case 3:
					return 113.8297f;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					return 109.6294f;
				case 1:
					return 414.4724f;
				case 2:
					return 655.9109f;
				case 3:
					return 358.7609f;
				case 4:
					return 330.9354f;
				case 5:
					return -23.2212f;
				case 6:
					return 535.7942f;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					return 355.9873f;
				case 1:
					return 192.607f;
				case 2:
					return 12.4888f;
			}
			break;
		case 7:
			switch (iParam1)
			{
				case 0:
					return 169.3605f;
			}
			break;
		case 8:
			switch (iParam1)
			{
				case 0:
					return 53.6294f;
				case 1:
					return 47.6294f;
			}
			break;
	}
	return 0f;
}

void func_939(bool bParam0, bool bParam1)
{
	if (func_20() == -1)
	{
		func_1426();
	}
	else
	{
		return;
	}
	func_1427();
	Global_40.f_9.f_14 = func_277();
	Global_40.f_9.f_20 = _get_bounty_for_player(get_player_index());
	Global_40.f_11999 = _0xb00ce33465b5406d(1, "startup");
	if (bParam0 && !bParam1)
	{
		if (func_1428())
		{
			func_363(Global_1310720->f_1);
		}
		else if (func_1429() == func_364(Global_36, 1) && func_1430() != 2)
		{
			func_363(Global_40.f_6);
			Global_40.f_9 = 1;
		}
		else
		{
			func_363(Global_36);
		}
		func_1431(Global_36, &vVar0, &uVar4);
		if (!func_1428())
		{
			if (func_1432(vVar0, Global_36) < func_1432(Global_40.f_9.f_7, Global_36))
			{
				func_363(vVar0);
				Global_40.f_9 = uVar4;
			}
			else
			{
				Global_40.f_9 = 0;
			}
		}
		Global_40.f_9.f_15 = func_364(Global_40.f_9.f_7, 1);
	}
	else if (!bParam0)
	{
		func_1431(Global_36, &(Global_40.f_9.f_7), &(Global_40.f_9));
		override_save_house(true, Global_40.f_9.f_7, 0f, true, &vVar0, &uVar3);
	}
	if (!bParam1)
	{
		func_222(Global_1935630, 8192);
	}
	func_1433();
}

bool func_940(int iParam0)
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

void func_941(int iParam0)
{
	iParam0 = func_258(iParam0);
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
		iVar1 = func_1434(iVar6);
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

void func_942(int iParam0, int iParam1)
{
	iParam0 = func_258(iParam0);
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

bool func_943(int iParam0, int iParam1)
{
	iParam0 = func_258(iParam0);
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

void func_944(var uParam0)
{
	if (network_is_game_in_progress())
	{
		_set_blip_name_from_player_string(*uParam0, func_1436(func_1435(255), 109029619));
	}
	else if (func_296())
	{
		set_blip_name_from_text_file(*uParam0, "SADDLE_BLIP_ARTHUR");
	}
	else
	{
		func_971();
		set_blip_name_from_text_file(*uParam0, "SADDLE_BLIP_JOHN");
	}
}

int func_945(int iParam0)
{
	iParam0 = func_258(iParam0);
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

void func_946(var uParam0, bool bParam1)
{
	if (network_is_game_in_progress())
	{
		_set_blip_name_from_player_string(*uParam0, func_1436(func_1435(255), 109029619));
	}
	else
	{
		sVar0 = "";
		if (bParam1)
		{
			sVar0 = "HORSE_BLIP_TEMPORARY";
		}
		else if (func_296())
		{
			sVar0 = "HORSE_BLIP_ARTHUR";
		}
		else if (func_971())
		{
			sVar0 = "HORSE_BLIP_JOHN";
		}
		if (compare_strings(sVar0, "", false, -1) != 0)
		{
			set_blip_name_from_text_file(*uParam0, sVar0);
		}
	}
}

int func_947(int iParam0)
{
	iParam0 = func_258(iParam0);
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

float func_948(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist(vParam0, vParam3);
}

float func_949(int iParam0)
{
	iParam0 = func_258(iParam0);
	if (iParam0 == -1)
	{
		return -1f;
	}
	if (iParam0 >= 7)
	{
		return -1f;
	}
	iVar0 = func_1321(iParam0);
	if (!is_model_valid(iVar0))
	{
		return -1f;
	}
	iVar1 = func_945(iParam0);
	iVar2 = get_default_max_attribute_rank(iVar0, 7);
	fVar3 = _0xeb67d4e056c85a81(iVar1);
	fVar4 = _0x78d8c1d4eb80c588(iVar1);
	if (iVar1 >= iVar2)
	{
		return fVar3;
	}
	iVar5 = func_945(iParam0) + 1;
	fVar6 = func_1437(iParam0);
	fVar7 = to_float(get_default_attribute_points_needed_for_rank(iVar0, 7, iVar1));
	fVar8 = to_float(get_default_attribute_points_needed_for_rank(iVar0, 7, iVar5));
	fVar9 = (fVar6 - fVar7);
	fVar10 = (fVar8 - fVar7);
	fVar11 = (fVar9 / fVar10);
	fVar12 = func_1438(fVar3, fVar4, fVar11);
	return fVar12;
}

void func_950(int iParam0)
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

void func_951(int iParam0)
{
	_set_blip_flash_style(iParam0, 673950256);
	_set_blip_flash_style(iParam0, 561559387);
	_set_blip_flash_style(iParam0, -201249929);
}

bool func_952()
{
	if (func_330())
	{
		return _get_special_edition_cash_camp_bonus_enabled();
	}
	return false;
}

void func_953(int iParam0)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if ((Global_40.f_4283.f_325 + iParam0) < 0)
	{
		return;
	}
	func_1439((Global_40.f_4283.f_325 + iParam0));
}

void func_954(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (is_string_null_or_empty(sParam1))
	{
		sParam1 = "FEED_GANG_MONEY_EARN";
	}
	if (func_952())
	{
		func_672(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", -329231034, 0, -585750914, 0, 0, 0, 1);
	}
	else
	{
		func_672(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 2124880615, 0, -585750914, 0, 0, 0, 1);
	}
}

char* func_955(int iParam0)
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

char* func_956(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7)
{
	return _0xd8402b858f4ddd88(&cParam0, get_length_of_literal_string(&cParam0));
}

int func_957(int iParam0)
{
	return Global_17504.f_42[iParam0]->f_5;
}

bool func_958(int iParam0)
{
	func_966(iParam0, &iVar0, &iVar1);
	return is_bit_set(&(Global_1357549->f_1866[iVar0]), iVar1);
}

void func_959(int iParam0, int iParam1)
{
	_journal_write_entry(iParam0);
	if (iParam1 == 1)
	{
		func_960(1);
	}
}

void func_960(bool bParam0)
{
	if (bParam0)
	{
		func_1440(&(Global_40.f_12019.f_42), 1);
	}
	else
	{
		func_1441(&(Global_40.f_12019.f_42), 1);
	}
}

int func_961(int iParam0)
{
	if (!func_183(iParam0))
	{
		return -15;
	}
	return func_1442(iParam0);
}

bool func_962(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_668(iParam1) || !func_668(iParam0))
		{
			return true;
		}
	}
	return iParam0 > iParam1;
}

bool func_963(vector3 vParam0, int iParam3, var uParam4, int iParam5, int iParam6, bool bParam7)
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

int func_964(int iParam0)
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

bool func_965(vector3 vParam0, int iParam3, var uParam4, int iParam5, int iParam6, bool bParam7)
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

int func_966(int iParam0, int iParam1, int iParam2)
{
	iVar0 = func_1443(iParam0, 1);
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
	return 1;
}

void func_967(var uParam0)
{
	*uParam0 = 176656832;
	uParam0->f_1 = -15;
	uParam0->f_2 = 1017034651;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
}

void func_968(int iParam0, int iParam1, bool bParam2)
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

int func_969()
{
	iVar0 = func_522();
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

int func_970(int iParam0)
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
	fVar1 = func_1407(absf(fVar1) < 1f, func_1407(fVar1 < 0f, -1f, 1f), fVar1);
	return ceil(fVar1);
}

bool func_971()
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

int func_972(int iParam0)
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

int func_973()
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

void func_974(int iParam0, bool bParam1, int iParam2)
{
	func_1444((get_game_timer() + iParam2), !bParam1);
	_databinding_write_data_int(Global_1955569->f_1.f_2.f_1, iParam0);
	func_1445(iParam0);
}

void func_975(int iParam0)
{
	_databinding_write_data_bool(&(Global_1955569->f_5.f_2[0]->f_16[2]), false);
	_databinding_write_data_bool(&(Global_1955569->f_5.f_2[0]->f_32[2]), true);
	_databinding_write_data_string(&(Global_1955569->f_5.f_2[0]->f_20[2]), func_1446(iParam0));
	_databinding_write_data_string(&(Global_1955569->f_5.f_2[0]->f_24[2]), "pausemenu_player");
}

void func_976(bool bParam0)
{
	bVar3 = false;
	if (func_1447(&iVar4))
	{
		if (iVar4 <= 0)
		{
			return;
		}
		iVar5 = 0;
		while (iVar5 < iVar4)
		{
			if (func_1448(iVar5, &iVar2, &iVar0))
			{
				if (!func_542(iVar2, 0))
				{
				}
				else
				{
					iVar1 = func_1449(iVar2);
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
							if (func_561(iVar2) == -1013984273)
							{
								if (iVar0 == 1014511709)
								{
									bVar3 = func_969() <= -160;
								}
								else if (iVar0 == -1712679084)
								{
									bVar3 = func_969() >= 160;
								}
							}
							else
							{
								bVar3 = iVar0 == func_1450();
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

char* func_977(int iParam0)
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

bool func_978(int iParam0)
{
	return func_561(iParam0) == -427144552;
}

bool func_979(int iParam0)
{
	if (func_20() != -1)
	{
		return false;
	}
	if (func_563(iParam0, 1048576))
	{
		return false;
	}
	if (is_weapon_valid(iParam0))
	{
		return func_984(iParam0, &uVar0, 1, 0, 0);
	}
	return func_339(iParam0, 1, 0);
}

void func_980(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (func_561(iParam0) != -427144552)
	{
		return;
	}
	iVar0 = func_568(iParam0, 0);
	if (!is_weapon_valid(iVar0))
	{
		return;
	}
	if (bParam2 || !func_122(iVar0))
	{
		if (func_20() == -1)
		{
			func_569(iVar0);
		}
		if (bParam2 || (!has_ped_got_weapon(Global_35, iVar0, 0, false) && func_546(iParam0, 0, 0) == 0))
		{
			if (!*bParam3 && !iParam4 == 1248274121)
			{
				func_622(iParam0, iParam1, 0, 0, 0);
				play_sound_frontend("REWARD_NEW_GUN", "HUD_REWARD_SOUNDSET", true, 0);
				*bParam3 = 1;
			}
		}
	}
}

void func_981(int iParam0, int iParam1)
{
	if (func_562(iParam0, 58855631))
	{
		func_1132(iParam0, -915411861, &iVar0, 1);
		*iParam1 = (*iParam1 * iVar0);
	}
}

int func_982(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	if (!func_542(iParam0, 0))
	{
		return 0;
	}
	if (!func_570(0))
	{
		bParam2 = true;
	}
	if (bParam2)
	{
		return _0xe80e50bee276a54a(iParam0, uParam1->f_4);
	}
	return _0xaddd1e7c0ecf7d95(func_927(bParam3), iParam0);
}

int func_983(int iParam0, bool bParam1)
{
	if (func_574(iParam0))
	{
		return get_ped_ammo_by_type(Global_35, iParam0);
	}
	return _0xe787f05dfc977bde(func_927(bParam1), iParam0, 0);
}

bool func_984(int iParam0, var uParam1, int iParam2, bool bParam3, bool bParam4)
{
	func_1451(&iParam0);
	if (!func_542(iParam0, 0))
	{
		return false;
	}
	if (!func_570(0))
	{
		bParam3 = true;
	}
	if (func_978(iParam0) && _0x705be297eebdb95d(iParam0))
	{
		if (_is_weapon_one_handed(iParam0))
		{
			Var0 = { func_1115(0) };
			Var4.f_9 = -1591664384;
			if (!func_1007(iParam0, &Var0, 1728382685, 0))
			{
				return false;
			}
			else if (func_1008(iParam0, &Var4, 1728382685))
			{
				return false;
			}
			if (func_1116(iParam0, 1))
			{
				if (!func_1007(iParam0, &Var0, -649335959, 0))
				{
					return false;
				}
				else if (func_1008(iParam0, &Var4, -649335959))
				{
					return false;
				}
			}
		}
		else if (!func_1452(iParam0, &uVar26, 0))
		{
			return false;
		}
		return true;
	}
	iVar27 = func_982(iParam0, uParam1, bParam3, bParam4);
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
		iVar28 = func_1453(iParam0, *uParam1, uParam1->f_4, bParam4);
	}
	else
	{
		iVar28 = _0xe787f05dfc977bde(func_927(bParam4), iParam0, 0);
	}
	if ((iVar28 + iParam2) > iVar27)
	{
		return true;
	}
	return false;
}

int func_985(int iParam0, int iParam1)
{
	if (!func_542(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_561(iParam0);
	if (iVar0 == -427144552 && is_weapon_valid(iParam0))
	{
		return _get_ammo_type_for_weapon(iParam0);
	}
	else if (iVar0 == 307971639 && _is_ammo_valid(iParam0))
	{
		return iParam0;
	}
	if (func_562(iParam0, 1399091007))
	{
		func_1049(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

int func_986(int iParam0, bool bParam1)
{
	if (!is_weapon_valid(iParam0))
	{
		return 0;
	}
	Var0 = { func_1454(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam1)
	{
		func_1455(&Var0, func_1115(0));
	}
	if (!func_1456(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	func_1059(iVar14);
	return uVar15;
}

int func_987()
{
	return _0x62cab7db62ead434(-2076669067, 0);
}

int func_988(int iParam0)
{
	return _0xec3959e9950bf56b(iParam0);
}

void func_989(int iParam0)
{
	if (func_20() != -1)
	{
		return;
	}
	iVar0 = func_1457(iParam0);
	fVar1 = func_1458(iParam0);
	if ((Global_1347477->f_117 || !func_564(31)) || !func_1459(iVar0))
	{
		return;
	}
	if (fVar1 <= 0f)
	{
		return;
	}
	if (func_1460(iVar0) >= 7)
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
	func_1461(iVar0, (&Global_40.f_11095.f_11[iVar0] + fVar1), 0);
	func_672(_create_var_string(6, func_1462(iParam0), fVar1), "itemtype_textures", func_1463(iVar0), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

int func_990(int iParam0)
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

int func_991(int iParam0, int iParam1)
{
	if (!func_1147(17, &Var0))
	{
		return 0;
	}
	Var0.f_2 = iParam1;
	Var0.f_3 = iParam0;
	_datafile_get_int(&uVar5, &Var0);
	return uVar5;
}

char* func_992(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6)
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
			else if (func_557() >= 12)
			{
				sParam3 = _create_var_string(2, "COL_CC_CARD_POSTED_OBJ", func_1464(), 12);
			}
			else
			{
				sParam3 = _create_var_string(2, "COL_CC_CARD_FOUND_OBJ", func_1465(), 12);
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
			else if (func_1031() >= 30)
			{
				sParam3 = _create_var_string(2, "COL_DB_POSTED_OBJ", func_1466(), 30);
			}
			else
			{
				sParam3 = _create_var_string(2, "COL_DB_FOUND_OBJ", func_1031(), 30);
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
				sParam3 = _create_var_string(2, "COL_LF_CAUGHT_OBJ", func_1467(), 13);
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
			else if (func_1032() >= 10)
			{
				sParam3 = _create_var_string(2, "COL_RC_POSTED_OBJ", func_1468(), 10);
			}
			else
			{
				sParam3 = _create_var_string(2, "COL_RC_FOUND_OBJ", func_1032(), 10);
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
				sParam3 = _create_var_string(2, "COL_TX_CARCASS_COLLECTED_OBJ", sParam4, func_991(iParam6, 20));
			}
			break;
	}
	return sParam3;
}

bool func_993(int iParam0, int iParam1, int iParam2)
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

bool func_994(int iParam0, int iParam1, vector3 vParam2, char* sParam5, char* sParam6)
{
	if (!_uilog_is_entry_registered(3, iParam1))
	{
		_uilog_add_entry_hash(3, iParam1, vParam2, get_hash_key(sParam5), get_hash_key(sParam6), 0);
	}
	return true;
}

bool func_995(int iParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6, int iParam7)
{
	_uilog_add_or_update_objective(3, iParam1, get_hash_key(sParam2), sParam2, false, false, false);
	_uilog_set_entry_pinned(3, iParam1, true);
	_uilog_set_entry_brief_texture(3, iParam1, get_hash_key(sParam4), get_hash_key(sParam5));
	_uilog_set_entry_icon_texture(3, iParam1, iParam6, iParam7);
	_uilog_update_entry_subheader(3, iParam1, _create_var_string(2, sParam3));
	return true;
}

bool func_996(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
{
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < iParam6)
	{
		if (iParam2 == -2076669067)
		{
			iVar2 = func_1469(iVar0);
			if (iParam4 == iVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = (func_339(iVar2, 1, 0) || func_1471(func_1470(iVar2)));
			}
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1000(func_1469(iVar0))), func_1000(func_1469(iVar0)), bVar1, true, false);
		}
		if (iParam2 == -440187297)
		{
			if (iVar0 == 0)
			{
				bVar1 = func_1031() >= iParam8;
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1472(iVar0)), func_1472(iVar0), bVar1, true, false);
			}
			else if (iVar0 == 1)
			{
				bVar1 = func_1466() >= iParam8;
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1472(iVar0)), func_1472(iVar0), bVar1, true, false);
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
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1472(iVar0)), func_1472(iVar0), bVar1, true, false);
			}
		}
		if (iParam2 == -1531394072)
		{
			iVar2 = func_1042(iParam3, func_1473(iVar0));
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			else if (bParam9)
			{
				if (iParam4 == iVar2)
				{
					bVar1 = (func_1038(iVar2) - iParam7) >= func_991(iParam3, func_1474(iVar0));
				}
				else
				{
					bVar1 = func_1038(iVar2) >= func_991(iParam3, func_1474(iVar0));
				}
			}
			else if (iParam4 == iVar2)
			{
				bVar1 = (func_1038(iVar2) + iParam7) >= func_991(iParam3, func_1474(iVar0));
			}
			else
			{
				bVar1 = func_1038(iVar2) >= func_991(iParam3, func_1474(iVar0));
			}
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1475(iVar2)), func_1475(iVar2), bVar1, true, false);
		}
		if (iParam2 == 1995362678)
		{
			if (func_1476(_0x126cbebba46693cf(iVar0, 1995362678, 0)))
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
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1477(_0x126cbebba46693cf(iVar0, iParam2, 0))), func_1477(_0x126cbebba46693cf(iVar0, iParam2, 0)), bVar1, true, false);
		}
		if (iParam2 == 2103522376)
		{
			if (iVar0 == 0)
			{
				bVar1 = func_1032() >= iParam8;
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1478(iVar0)), func_1478(iVar0), bVar1, true, false);
			}
			else if (iVar0 == 1)
			{
				bVar1 = func_1468() >= iParam8;
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1478(iVar0)), func_1478(iVar0), bVar1, true, false);
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
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1478(iVar0)), func_1478(iVar0), bVar1, true, false);
			}
		}
		if (iParam2 == 678508515)
		{
			iVar2 = func_1042(iParam3, func_1473(iVar0));
			if (bParam9)
			{
				if (iParam4 == iVar2)
				{
					bVar1 = (func_1038(iVar2) - iParam7) >= true;
				}
				else
				{
					bVar1 = func_1479(iVar2);
				}
			}
			else if (iParam4 == iVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = func_1479(iVar2);
			}
			if (((((((iParam5 == 7 || iParam5 == 3) || iParam5 == 4) || iParam5 == 5) || iParam5 == 0) || iParam5 == 1) || iParam5 == 2) || iParam5 == 8)
			{
				bVar1 = true;
			}
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1480(iVar2)), func_1480(iVar2), bVar1, true, false);
		}
		iVar0++;
	}
	return true;
}

bool func_997(int iParam0, int iParam1, int iParam2, int iParam3)
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
		if (func_1467() >= 13)
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

bool func_998(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (func_183(func_196(0)) && ((func_1481(0) == 1 || func_1481(0) == 8) || func_1481(0) == 6))
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

var func_999(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, int iParam6, int iParam7, char* sParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13)
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

char* func_1000(int iParam0)
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

bool func_1001(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_1002(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return is_bit_set(&(Global_40.f_7857[iVar1]), iVar2);
}

void func_1003(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	uVar3 = &Global_40.f_7857[iVar1];
	set_bit(&uVar3, iVar2);
	Global_40.f_7857[iVar1] = uVar3;
}

void func_1004(int iParam0)
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
			func_1482(1);
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
			func_1483(1);
			break;
		case 19:
			_uitutorial_set_rpg_icon_visibility(1, 0);
			_uitutorial_set_rpg_icon_visibility(0, 0);
			func_1483(2);
			break;
		case 20:
			_uitutorial_set_rpg_icon_visibility(3, 0);
			_uitutorial_set_rpg_icon_visibility(2, 0);
			func_1483(3);
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
			func_1484(1);
			break;
		case 34:
			func_1485(1);
			break;
		case 35:
			func_1486(1);
			break;
		case 36:
			break;
		case 37:
			func_1487(0);
			break;
		case 38:
			func_1488(0);
			break;
		case 39:
			func_1489(0);
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
			if ((!&Global_1879534 && func_385()) && _is_deadeye_ability_locked(get_player_index(), 2))
			{
				func_678("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_MANUAL_PAINT", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_level(get_player_index(), 2);
			func_317(586, 0);
			break;
		case 3:
			if ((!&Global_1879534 && func_385()) && _is_deadeye_ability_locked(get_player_index(), 3))
			{
				func_678("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_STAY_ACTIVE", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_locked(get_player_index(), 3, false);
			_set_deadeye_ability_level(get_player_index(), 3);
			func_317(587, 0);
			break;
		case 4:
			if ((!&Global_1879534 && func_385()) && _is_deadeye_ability_locked(get_player_index(), 4))
			{
				func_678("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_FATAL", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_locked(get_player_index(), 3, false);
			_set_deadeye_ability_locked(get_player_index(), 4, false);
			_set_deadeye_ability_level(get_player_index(), 4);
			func_317(588, 0);
			break;
		case 5:
			if ((!&Global_1879534 && func_385()) && _is_deadeye_ability_locked(get_player_index(), 5))
			{
				func_678("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_CRITICAL", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_locked(get_player_index(), 3, false);
			_set_deadeye_ability_locked(get_player_index(), 4, false);
			_set_deadeye_ability_locked(get_player_index(), 5, false);
			_set_deadeye_ability_level(get_player_index(), 5);
			func_317(589, 0);
			break;
		case 24:
			_unlock_set_unlocked(-200143754, true);
			_unlock_set_visible(-200143754, true);
			_0x83b8d50eb9446bba(player_ped_id(), 1);
			if (func_20() == -1)
			{
				if (!func_1072(99217379) || func_1490(99217379) == 2110595215)
				{
					if (func_971())
					{
						iVar0 = -1515874150;
					}
					else
					{
						iVar0 = 899611344;
					}
					if (!func_339(iVar0, 1, 0))
					{
						func_615(iVar0, 1, 752097756);
					}
					func_594(Global_35, iVar0, 0, 99217379, 1, 1, 1, 0, 1, 1);
				}
			}
			break;
		case 48:
			if (func_20() == -1)
			{
				if (!func_339(1013902307, 1, 0))
				{
					func_615(1013902307, 1, 752097756);
				}
			}
			break;
		case 50:
			if (func_20() == -1)
			{
				if (!func_339(1013902307, 1, 0))
				{
					func_615(1013902307, 1, 752097756);
				}
				if (!func_339(142640135, 1, 0))
				{
					func_615(142640135, 1, 752097756);
				}
			}
			break;
		case 49:
			if (func_20() == -1)
			{
				if (!func_339(786809402, 1, 0))
				{
					func_615(786809402, 1, 752097756);
				}
			}
			break;
		case 51:
			if (func_20() == -1)
			{
				if (!func_339(786809402, 1, 0))
				{
					func_615(786809402, 1, 752097756);
				}
				if (!func_339(-518019409, 1, 0))
				{
					func_615(-518019409, 1, 752097756);
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
			func_1491();
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

bool func_1005(int iParam0)
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

int func_1006(int iParam0, int iParam1)
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

bool func_1007(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	return func_1453(iParam0, *uParam1, iParam2, bParam3) > 0;
}

bool func_1008(int iParam0, var uParam1, int iParam2)
{
	if (func_1492(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return false;
}

struct<4> func_1009(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	if (!func_542(iParam0, 0))
	{
		return Var0;
	}
	_0x886dfd3e185c8a89(func_927(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

bool func_1010(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(uParam1))
	{
		return false;
	}
	if (func_1493(iParam0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_1119(*uParam1, &Var0, bParam6, 0))
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
	if (!func_570(bParam6))
	{
		iVar14 = -1;
		return iVar14 != -1;
	}
	if (!_0x3e4e811480b3ae79(func_927(bParam6), uParam1, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

void func_1011(int iParam0, int iParam1)
{
	if ((get_ammo_in_clip(Global_35, &iVar0, iParam0) && iVar0 < iParam1) && iVar0 < _get_weapon_clip_size(iParam0))
	{
		iVar1 = func_1494(_get_weapon_clip_size(iParam0), iParam1);
		set_ammo_in_clip(Global_35, iParam0, iVar1);
	}
}

void func_1012(int iParam0)
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
	iVar2 = func_277();
	func_326(&iVar2, 0, 0, 0, 1, 0, 0, 0);
	decor_set_int(Global_35, sVar1, iVar2);
}

int func_1013(int iParam0)
{
	if (func_1495(iParam0))
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

bool func_1014(int iParam0)
{
	return _is_ammo_valid(_get_ammo_type_for_weapon(iParam0));
}

int func_1015(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	iVar0 = 0;
	if (!is_entity_dead(iParam0))
	{
		get_current_ped_weapon(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

int func_1016(int iParam0)
{
	iVar0 = _get_weapon_type_from_ammo_type(iParam0);
	if (_0x705be297eebdb95d(iVar0))
	{
		if (_is_weapon_two_handed(iVar0))
		{
			if (!func_564(50))
			{
				if (!func_564(48))
				{
					return 133;
				}
				return 135;
			}
		}
		else if (_is_weapon_one_handed(iVar0))
		{
			if (!func_564(51))
			{
				if (!func_564(49))
				{
					return 134;
				}
				return 136;
			}
		}
	}
	return 137;
}

bool func_1017(int iParam0, int iParam1, var uParam2)
{
	if (!func_542(iParam1, 0))
	{
		return false;
	}
	if (func_561(iParam1) != -1037537535)
	{
		return false;
	}
	bVar1 = func_20() != -1;
	iVar2 = _get_metaped_type(iParam0);
	if (func_566(iParam1) == -999503751)
	{
		return true;
	}
	iVar4 = func_640(iParam1);
	if (iVar4 == -358215195)
	{
		*uParam2 = 2084739242;
		return false;
	}
	bVar7 = false;
	iVar8 = iParam1;
	if (func_562(iParam1, 866047851))
	{
		iVar5 = func_641(iVar4, 1);
		if (func_1496(&(Global_1946804->f_1497)) >= 2 && &Global_1946804->f_1497.f_1[iVar5] != iVar8)
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
			iVar3 = func_566(&(Global_1946804->f_1497.f_1[iVar5]));
			if (bVar7 && iVar3 == -525676072)
			{
				*uParam2 = -1938792745;
				return false;
			}
			break;
		case -1944638739:
			iVar5 = 35;
			if (&Global_1946804->f_1497.f_1[iVar5] != &Global_1946804->f_57[iVar5] && func_562(iParam1, -1638171711))
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
			if (func_1497(1868067663, &uVar0))
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
				iVar10 = func_1498(iVar8, iVar4, iVar2, bVar1);
				iVar9 = func_1498(&(Global_1946804->f_1497.f_1[iVar5]), iVar4, iVar2, bVar1);
				if (((iVar11 + iVar10) - iVar9) > 31)
				{
					*uParam2 = -1608241763;
					return false;
				}
				Jump @776; //curOff = 583
				iVar3 = func_566(iParam1);
				iVar5 = 36;
				iVar6 = 35;
				if (iParam1 != &Global_1946804->f_57[iVar6] && func_562(&(Global_1946804->f_1497.f_1[iVar5]), -1638171711))
				{
					*uParam2 = -357399012;
					return false;
				}
				if (iVar3 == 1769055947 || iVar3 == 1545016984)
				{
				}
				else
				{
					if (iParam1 != &Global_1946804->f_57[iVar6] && func_1499(&(Global_1946804->f_1497.f_1[iVar5])))
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

void func_1018()
{
	_0xfe7c9cf376d23342(player_id(), (1f - (Global_40.f_11095.f_64 + Global_1347477->f_175)));
}

void func_1019()
{
	fVar0 = Global_40.f_11095.f_44;
	fVar1 = Global_40.f_11095.f_45;
	set_player_health_recharge_multiplier(player_id(), (1f - (fVar0 - Global_40.f_11095.f_69)));
	_0x08e22898a6af4905(player_id(), (1f - fVar0));
	_0xfeca17cf3343694b(player_id(), (1f - fVar0));
	_0xbbadfb5e5e5766fb(player_id(), (1f - fVar1));
}

int func_1020()
{
	iVar1 = 0;
	while (iVar1 < 26)
	{
		if (func_339(func_1500(iVar1), 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1021(int iParam0)
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

bool func_1022(int iParam0, int iParam1)
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
	if (func_339(iVar0, 1, 0) && func_339(iVar1, 1, 0))
	{
		return true;
	}
	return false;
}

int func_1023(int iParam0)
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

bool func_1024(int iParam0, int iParam1)
{
	iVar0 = func_1501(iParam0);
	if (iVar0 != -15)
	{
		func_326(&iVar0, 0, iParam1, 0, 0, 0, 0, 0);
		return !func_669(iVar0, 1);
	}
	return false;
}

void func_1025(int iParam0)
{
	Global_40.f_12004.f_6 = (Global_40.f_12004.f_6 || iParam0);
}

void func_1026(int iParam0)
{
	Global_40.f_12004.f_1 = (Global_40.f_12004.f_1 || iParam0);
}

void func_1027(int iParam0)
{
	Global_40.f_12004.f_3 = (Global_40.f_12004.f_3 || iParam0);
}

void func_1028(int iParam0)
{
	Global_40.f_12004.f_5 = (Global_40.f_12004.f_5 || iParam0);
}

int func_1029(int iParam0)
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
	iVar1 = func_1038(iVar9);
	iVar2 = func_1038(iVar10);
	iVar3 = func_1038(iVar11);
	iVar5 = func_1039(iVar9);
	iVar6 = func_1039(iVar10);
	iVar7 = func_1039(iVar11);
	if (iParam0 != 2)
	{
		iVar4 = func_1038(iVar12);
		iVar8 = func_1039(iVar12);
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

void func_1030(int iParam0)
{
	Global_40.f_12004.f_2 = (Global_40.f_12004.f_2 || iParam0);
}

int func_1031()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 30)
	{
		if (func_1502(_0x126cbebba46693cf(iVar1, -440187297, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1032()
{
	return _0x5461c821d00fe15a(2103522376, 0);
}

bool func_1033(int iParam0, int iParam1, char* sParam2, bool bParam3, int iParam4, bool bParam5)
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
			if (func_1479(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1479(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_1479(iVar0))
		{
			*sParam2++;
		}
		if (func_1479(iVar0))
		{
			return true;
		}
	}
	else if (iParam0 == -1248968496)
	{
		if (bParam3)
		{
			if (func_1479(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1479(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_1479(iVar0))
		{
			*sParam2++;
		}
		if (func_1479(iVar1))
		{
			*sParam2++;
		}
		if (func_1479(iVar0) && func_1479(iVar1))
		{
			return true;
		}
	}
	else if (iParam0 == 1706369307)
	{
		if (bParam3)
		{
			if (func_1479(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1479(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_1479(iVar0))
		{
			*sParam2++;
		}
		if (func_1479(iVar1))
		{
			*sParam2++;
		}
		if (func_1479(iVar2))
		{
			*sParam2++;
		}
		if ((func_1479(iVar0) && func_1479(iVar1)) && func_1479(iVar2))
		{
			return true;
		}
	}
	else
	{
		if (bParam3)
		{
			if (func_1479(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1479(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_1479(iVar0))
		{
			*sParam2++;
		}
		if (func_1479(iVar1))
		{
			*sParam2++;
		}
		if (func_1479(iVar2))
		{
			*sParam2++;
		}
		if (func_1479(iVar3))
		{
			*sParam2++;
		}
		if (((func_1479(iVar0) && func_1479(iVar1)) && func_1479(iVar2)) && func_1479(iVar3))
		{
			return true;
		}
	}
	return false;
}

void func_1034(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2)
	{
	}
	switch (iParam0)
	{
		case 1497516462:
			func_1503(1497516462);
			func_1504(2016141805);
			func_1504(1010885152);
			func_1504(-502324015);
			break;
		case 2016141805:
			func_1504(1497516462);
			func_1503(2016141805);
			func_1504(1010885152);
			func_1504(-502324015);
			break;
		case 1010885152:
			func_1504(1497516462);
			func_1504(2016141805);
			func_1503(1010885152);
			func_1504(-502324015);
			break;
		case -502324015:
			func_1504(1497516462);
			func_1504(2016141805);
			func_1504(1010885152);
			func_1503(-502324015);
			break;
		case -1056767524:
		case -538889627:
		case -538880323:
			func_1504(-538889627);
			func_1504(-538880323);
			func_1504(-1056767524);
			func_1503(iParam0);
			break;
		case -2038424081:
		case -1187950766:
		case -939420910:
		case 356365161:
		case 459290420:
		case 753127042:
		case 1884271742:
			func_1505();
			func_1503(iParam0);
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
			func_1506();
			func_1503(iParam0);
			break;
		case 2019386373:
			func_1504(-664252410);
			func_1504(2109952320);
			func_1503(2019386373);
			break;
		case -664252410:
			func_1504(2019386373);
			func_1504(2109952320);
			func_1503(-664252410);
			break;
		case 2109952320:
			func_1504(2019386373);
			func_1504(-664252410);
			func_1503(2109952320);
			break;
		case -1674179981:
			func_1504(-1835851517);
			func_1504(-1838352012);
			func_1503(-1674179981);
			break;
		case -1835851517:
			func_1504(-1674179981);
			func_1504(-1838352012);
			func_1503(-1835851517);
			break;
		case -1838352012:
			func_1504(-1674179981);
			func_1504(-1835851517);
			func_1503(-1838352012);
			break;
		case -1717960576:
			func_1504(210001842);
			func_1503(-1717960576);
			break;
		case 210001842:
			func_1504(-1717960576);
			func_1503(210001842);
			break;
		case -150493654:
			func_1504(-1271608261);
			func_1504(1846061697);
			func_1504(-1145519186);
			func_1503(-150493654);
			break;
		case -1271608261:
			func_1504(-150493654);
			func_1504(1846061697);
			func_1504(-1145519186);
			func_1503(-1271608261);
			break;
		case 1846061697:
			func_1504(-150493654);
			func_1504(-1271608261);
			func_1504(-1145519186);
			func_1503(1846061697);
			break;
		case -1145519186:
			func_1504(-150493654);
			func_1504(-1271608261);
			func_1504(1846061697);
			func_1503(-1145519186);
			break;
		case 1766284049:
			func_1504(280705402);
			func_1504(1926308480);
			func_1503(1766284049);
			break;
		case 280705402:
			func_1504(1766284049);
			func_1504(1926308480);
			func_1503(280705402);
			break;
		case 1926308480:
			func_1504(1766284049);
			func_1504(280705402);
			func_1503(1926308480);
			break;
		case 1609506757:
			if (bParam1)
			{
				func_1504(439465264);
				func_1503(1609506757);
			}
			else
			{
				func_1504(1609506757);
				func_1504(439465264);
			}
			break;
		case 439465264:
			if (func_457(1609506757))
			{
				if (bParam1)
				{
					func_1503(439465264);
				}
				else
				{
					func_1504(439465264);
				}
			}
			break;
		case 1822001510:
			func_1504(-1612662716);
			func_1503(1822001510);
			break;
		case -1612662716:
			func_1504(1822001510);
			func_1503(-1612662716);
			break;
		case 1306158345:
			func_1504(1952610440);
			func_1504(-223469678);
			func_1504(-404698347);
			func_1504(1517904467);
			func_1503(1306158345);
			break;
		case 1952610440:
			func_1504(1306158345);
			func_1504(-223469678);
			func_1504(-404698347);
			func_1504(1517904467);
			func_1503(1952610440);
			break;
		case -223469678:
			func_1504(1306158345);
			func_1504(1952610440);
			func_1504(-404698347);
			func_1504(1517904467);
			func_1503(-223469678);
			break;
		case -404698347:
			func_1504(1306158345);
			func_1504(1952610440);
			func_1504(-223469678);
			func_1504(1517904467);
			func_1503(-404698347);
			break;
		case 1517904467:
			func_1504(1306158345);
			func_1504(1952610440);
			func_1504(-223469678);
			func_1504(-404698347);
			func_1503(1517904467);
			break;
		case 1376646519:
			func_1504(931649776);
			func_1504(-434590080);
			func_1504(1743048395);
			func_1504(449774763);
			func_1503(1376646519);
			break;
		case 931649776:
			func_1504(1376646519);
			func_1504(-434590080);
			func_1504(1743048395);
			func_1504(449774763);
			func_1503(931649776);
			break;
		case -434590080:
			func_1504(1376646519);
			func_1504(931649776);
			func_1504(1743048395);
			func_1504(449774763);
			func_1503(-434590080);
			break;
		case 1743048395:
			func_1504(1376646519);
			func_1504(931649776);
			func_1504(-434590080);
			func_1504(449774763);
			func_1503(1743048395);
			break;
		case 449774763:
			func_1504(1376646519);
			func_1504(931649776);
			func_1504(-434590080);
			func_1504(1743048395);
			func_1503(449774763);
			break;
		case -1414537028:
			func_1504(38162571);
			func_1504(1350391819);
			func_1504(54073871);
			func_1503(-1414537028);
			break;
		case 38162571:
			func_1504(-1414537028);
			func_1504(1350391819);
			func_1504(54073871);
			func_1503(38162571);
			break;
		case 1350391819:
			func_1504(-1414537028);
			func_1504(38162571);
			func_1504(54073871);
			func_1503(1350391819);
			break;
		case 54073871:
			func_1504(-1414537028);
			func_1504(38162571);
			func_1504(1350391819);
			func_1503(54073871);
			break;
		case 198200492:
			func_1503(198200492);
			func_1504(-1124061431);
			func_1504(52706132);
			func_1504(-259123672);
			break;
		case -1124061431:
			func_1504(198200492);
			func_1503(-1124061431);
			func_1504(52706132);
			func_1504(-259123672);
			break;
		case 52706132:
			func_1504(198200492);
			func_1504(-1124061431);
			func_1503(52706132);
			func_1504(-259123672);
			break;
		case -259123672:
			func_1504(198200492);
			func_1504(-1124061431);
			func_1504(52706132);
			func_1503(-259123672);
			break;
		case -919512195:
			func_1503(-919512195);
			func_1504(-1925798111);
			func_1504(420709909);
			func_1504(1703426636);
			break;
		case -1925798111:
			func_1503(-1925798111);
			func_1504(-919512195);
			func_1504(420709909);
			func_1504(1703426636);
			break;
		case 420709909:
			func_1503(420709909);
			func_1504(-919512195);
			func_1504(-1925798111);
			func_1504(1703426636);
			break;
		case 1703426636:
			func_1503(1703426636);
			func_1504(-919512195);
			func_1504(-1925798111);
			func_1504(420709909);
			break;
		case -1223121209:
			func_1503(-1223121209);
			func_1504(630808005);
			break;
		case 630808005:
			func_1503(630808005);
			func_1504(-1223121209);
			break;
		case 1453909576:
			func_1503(1453909576);
			func_1504(1643531967);
			break;
		case 1643531967:
			func_1503(1643531967);
			func_1504(1453909576);
			break;
		case 0:
			func_1503(0);
			func_1504(473295046);
			func_1504(-1738165526);
			break;
		case 473295046:
			func_1503(473295046);
			func_1504(0);
			func_1504(-1738165526);
			break;
		case -1738165526:
			func_1503(-1738165526);
			func_1504(0);
			func_1504(473295046);
			break;
		case 932909855:
			func_1503(932909855);
			func_1504(2051822093);
			break;
		case 2051822093:
			func_1503(2051822093);
			func_1504(932909855);
			break;
		case 405586984:
			func_1503(405586984);
			func_1504(1509509592);
			func_1504(-959357075);
			func_1504(-1311865656);
			break;
		case 1509509592:
			func_1503(1509509592);
			func_1504(405586984);
			func_1504(-959357075);
			func_1504(-1311865656);
			break;
		case -959357075:
			func_1503(-959357075);
			func_1504(1509509592);
			func_1504(405586984);
			func_1504(-1311865656);
			break;
		case -1311865656:
			func_1503(-1311865656);
			func_1504(1509509592);
			func_1504(-959357075);
			func_1504(405586984);
			break;
		case -524145696:
			if (bParam1)
			{
				func_1503(-524145696);
			}
			else
			{
				func_1504(-524145696);
			}
			func_1504(1626481264);
			func_1504(282809459);
			break;
		case 282809459:
			func_1503(282809459);
			func_1504(1626481264);
			func_1504(-524145696);
			break;
		case 1626481264:
			func_1503(1626481264);
			func_1504(-524145696);
			func_1504(282809459);
			break;
		case 885203519:
			if (bParam1)
			{
				func_1503(885203519);
			}
			else
			{
				func_1504(885203519);
			}
			break;
		case -1080627546:
			if (bParam1)
			{
				func_1503(-1080627546);
			}
			else
			{
				func_1504(-1080627546);
			}
			break;
		default:
			if (bParam1)
			{
				if (!func_457(iParam0))
				{
					func_1503(iParam0);
				}
			}
			else if (func_457(iParam0))
			{
				func_1504(iParam0);
			}
			break;
	}
}

void func_1035(int iParam0)
{
	if (!func_1507(iParam0))
	{
		func_1509(func_1508(iParam0));
	}
}

int func_1036()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (func_1507(_0x126cbebba46693cf(iVar1, -1531394072, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1037(int iParam0, int iParam1, int iParam2)
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
	iVar1 = func_1038(iVar9);
	iVar2 = func_1038(iVar10);
	iVar3 = func_1038(iVar11);
	iVar5 = func_1039(iVar9);
	iVar6 = func_1039(iVar10);
	iVar7 = func_1039(iVar11);
	if (iParam2 != 2)
	{
		iVar4 = func_1038(iVar12);
		iVar8 = func_1039(iVar12);
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

int func_1038(int iParam0)
{
	if (func_339(iParam0, 1, 0))
	{
		iVar0 = func_546(iParam0, 0, 0);
	}
	return iVar0;
}

int func_1039(int iParam0)
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

int func_1040(int iParam0)
{
	return _0xf83d3dda4d3c8169(iParam0);
}

void func_1041(int iParam0, int iParam1)
{
	_0x3ea62e56f386c997(iParam0, iParam1);
}

int func_1042(int iParam0, int iParam1)
{
	if (!func_1147(17, &Var0))
	{
		return 0;
	}
	Var0.f_2 = iParam1;
	Var0.f_3 = iParam0;
	_datafile_get_hash(&uVar5, &Var0);
	return uVar5;
}

void func_1043(int iParam0, int iParam1, char* sParam2, int iParam3, bool bParam4)
{
	if ((((iParam0 == func_1042(iParam1, 5) || iParam0 == func_1042(iParam1, 6)) || iParam0 == func_1042(iParam1, 7)) || iParam0 == func_1042(iParam1, 8)) || iParam0 == func_1042(iParam1, 9))
	{
		func_1033(iParam1, iParam0, &sParam2, 0, iParam3, bParam4);
		func_558(51, 0, 0, iParam1, sParam2, 0, -1, 0);
		func_560(51, 0, 0, 0, 0, -1, 0);
	}
}

void func_1044(int iParam0, int iParam1, bool bParam2)
{
	iVar0 = 1;
	if ((((iParam0 == func_1042(iParam1, 5) || iParam0 == func_1042(iParam1, 6)) || iParam0 == func_1042(iParam1, 7)) || iParam0 == func_1042(iParam1, 8)) || iParam0 == func_1042(iParam1, 9))
	{
		if (func_1033(iParam1, iParam0, &iVar0, 0, 0, 0))
		{
			func_558(51, iParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				func_560(51, 0, 0, iVar0, func_991(iParam1, 20), 1, 0);
			}
		}
		else
		{
			func_558(51, iParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				func_560(51, 0, 0, iVar0, func_991(iParam1, 20), 1, 0);
			}
		}
	}
}

bool func_1045()
{
	if (func_184((*Global_1347702)[37]->f_15) && Global_1392388->f_7)
	{
		return true;
	}
	return false;
}

void func_1046(int iParam0)
{
	_0x3ea62e56f386c997(iParam0, 1);
}

void func_1047(int iParam0)
{
	if (!func_1510(iParam0))
	{
		_0x3ea62e56f386c997(iParam0, 1);
	}
}

void func_1048(int iParam0)
{
	_0x398fab9c96a81924(iParam0, 1);
}

void func_1049(int iParam0, int iParam1, var uParam2)
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

bool func_1050(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	func_1511();
	if (iParam2 == 39)
	{
		Var0 = { func_653(iParam0, 1, 0) };
		iParam2 = func_641(func_654(Var0.f_4), 1);
	}
	if (iParam2 < 0 || iParam2 >= 39)
	{
		return false;
	}
	if (func_562(iParam0, 866047851) && func_1496(&(Global_1946804->f_1378)) >= 2)
	{
		return false;
	}
	if ((func_1052(32768) && iParam2 == 10) && iParam0 != &Global_1946804->f_57[iParam2])
	{
		func_1512(func_1120(iParam2, 1));
	}
	iVar5 = 0;
	if (bParam4)
	{
		iVar5 = 3;
	}
	func_1513(iParam2);
	func_1514(iParam2, iVar5);
	if (&Global_1946804->f_1378.f_1[iParam2] != &Global_1946804->f_57[iParam2] && Global_1946804->f_57[iParam2]->f_1 > 1)
	{
		func_1101(Global_1946804->f_1378.f_1[iParam2], 4, 6);
		func_1101(Global_1946804->f_1497.f_1[iParam2], 4, 6);
	}
	func_1107(&(Global_1946804->f_1378), iParam0, iParam2, bParam4, 1);
	if (iParam1 == 0)
	{
		iParam1 = Global_1946804->f_1378.f_1[iParam2]->f_1;
	}
	Global_1946804->f_1378.f_1[iParam2] = iParam0;
	Global_1946804->f_1378.f_1[iParam2]->f_1 = func_1515(iParam0, iParam2, iParam1, func_20() != -1);
	if (bParam4)
	{
		func_1516(&(Global_1946804->f_1378), 1, 3);
	}
	else
	{
		func_1516(&(Global_1946804->f_1378), 1, 0);
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
				func_1279(func_1120(&(Global_1946804->f_2589.f_2[iVar6]), 1), 1, 6);
			}
			iVar6++;
		}
	}
	return true;
}

void func_1051(bool bParam0, bool bParam1, bool bParam2)
{
	func_1517(&(Global_1946804->f_2589), bParam0, bParam1, bParam2);
}

bool func_1052(int iParam0)
{
	return (Global_1946804 && iParam0) != 0;
}

void func_1053()
{
	func_1518(&(Global_1946804->f_2776));
	func_1519(32768);
	func_1279(1108822547, 8, 6);
}

int func_1054(int iParam0)
{
	iVar0 = 0;
	iVar1 = func_641(iParam0, 1);
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

void func_1055(int iParam0)
{
	if (func_1520(iParam0, 4096))
	{
		Global_1946804->f_858++;
	}
	if (Global_1946804->f_858 <= 0)
	{
		return;
	}
	Var0.f_1 = iParam0;
	Var0 = 34;
	func_1521(Var0);
}

void func_1056(int iParam0, int iParam1, int iParam2)
{
	Var0.f_1 = iParam2;
	Var0 = iParam0;
	Var0.f_2 = iParam1;
	func_1521(Var0);
}

bool func_1057(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	*iParam1 = _0x80d78bdc9d88ef07(func_927(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_1058(var uParam0, int iParam1, int iParam2, int iParam3)
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

int func_1059(int iParam0)
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

float func_1060()
{
	if (func_1522())
	{
		return 0f;
	}
	if (_0x200373a8df081f22(Global_35, 2) || Global_40.f_11095.f_46 == 0)
	{
		return func_1523(2);
	}
	if (Global_1347477->f_119)
	{
		return func_1523(2);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_46) * 60f);
	fVar0 = (fVar0 / to_float(7));
	fVar1 = func_1524();
	fVar2 = func_1525();
	fVar3 = func_1526();
	fVar4 = func_1527();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_50)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_1528()));
	fVar7 = (func_1523(2) - fVar6);
	iVar8 = round(((fVar0 / 60f) * to_float(7)));
	fVar9 = (100f * (to_float(90) / to_float(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_1529(3, round((to_float(iVar8) * fVar10)), 0);
	func_1530(3, fVar9, fVar9 > 100f);
	return func_1531(fVar7, -100f, 100f);
}

float func_1061()
{
	if (func_1522())
	{
		return 0f;
	}
	if (_0x200373a8df081f22(Global_35, 1) || Global_40.f_11095.f_47 == 0)
	{
		return func_1523(1);
	}
	if (Global_1347477->f_119)
	{
		return func_1523(1);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_47) * 60f);
	fVar0 = (fVar0 / to_float(7));
	fVar1 = func_1524();
	fVar2 = func_1525();
	fVar3 = func_1526();
	fVar4 = func_1527();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_51)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_1528()));
	fVar7 = (func_1523(1) - fVar6);
	iVar8 = round(((fVar0 / 60f) * to_float(7)));
	fVar9 = (100f * (to_float(90) / to_float(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_1529(2, round((to_float(iVar8) * fVar10)), 0);
	func_1530(2, fVar9, fVar9 > 100f);
	return func_1531(fVar7, -100f, 100f);
}

float func_1062()
{
	if (func_1522())
	{
		return 0f;
	}
	if (_0x200373a8df081f22(Global_35, 0) || Global_40.f_11095.f_48 == 0)
	{
		return func_1523(0);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_48) * 60f);
	if (func_1532())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_54 + 1f));
	}
	else if (func_1533())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_53 + 1f));
	}
	else if (Global_1347477->f_119)
	{
		return func_1523(0);
	}
	if (Global_40.f_11095.f_43)
	{
		fVar0 = (10f * 60f);
	}
	fVar0 = (fVar0 / to_float(7));
	fVar1 = func_1524();
	fVar2 = func_1525();
	fVar3 = func_1526();
	fVar4 = func_1527();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_49)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_1528()));
	fVar7 = (func_1523(0) - fVar6);
	iVar8 = round(((fVar0 / 60f) * to_float(7)));
	fVar9 = (100f * (to_float(90) / to_float(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_1529(1, round((to_float(iVar8) * fVar10)), 0);
	func_1530(1, fVar9, fVar9 > 100f);
	if (fVar7 <= -100f && _get_player_health(player_id()) < 1f)
	{
		return func_1523(0);
	}
	return func_1531(fVar7, -100f, 100f);
}

bool func_1063(int iParam0, int iParam1)
{
	return (Global_1905944->f_22[iParam0]->f_2 && iParam1) != 0;
}

bool func_1064(int iParam0)
{
	return _0xf83d3dda4d3c8169(iParam0) > 0;
}

bool func_1065(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5)
{
	if (!func_542(iParam0, 0))
	{
	}
	if (!_0xb881ca836cc4b6d4(uParam2))
	{
		return false;
	}
	if (func_984(iParam0, uParam2, iParam3, bParam5, 0))
	{
		return false;
	}
	if (!func_570(0))
	{
		return false;
	}
	if (!_0xcb5d11f9508a928d(func_927(0), uParam1, uParam2, iParam0, uParam2->f_4, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

int func_1066(int iParam0, bool bParam1)
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
				return func_1534();
			}
			break;
	}
	return 0;
}

int func_1067(int iParam0)
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

bool func_1068(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 95)
	{
		return false;
	}
	return true;
}

void func_1069(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_1068(iParam0))
	{
		return;
	}
	if (func_1535(iParam0))
	{
		return;
	}
	if (!func_1536(iParam0))
	{
		func_1537(iParam0, 1, 0);
	}
	iVar0 = func_1538(iParam0);
	if (iVar0 != 0 && !(iParam0 >= 0 && iParam0 <= 5))
	{
		if (func_1539(iParam0, 512))
		{
			func_652(30, iVar0, 0, 0, 0);
		}
	}
	if ((!func_207() && !bParam1) && !func_190(0, 0, 1))
	{
		func_680(_create_var_string(10, "OUT_JOURN_DONE", _create_var_string(0, iVar0)), 10000, 0, 0, 0, 1);
	}
	func_1540(iParam0, 6);
	if (bParam2)
	{
		if (!func_190(0, 0, 1))
		{
			func_359(1, 4);
		}
	}
}

bool func_1070(int iParam0, bool bParam1)
{
	return func_1066(iParam0, 0) < func_1541(iParam0, bParam1);
}

bool func_1071(int iParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_566(iVar1) == iParam0)
		{
			*iParam1 = iVar1;
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_1072(int iParam0)
{
	if (iParam0 == -358215195)
	{
		return false;
	}
	return &Global_1946804->f_1497.f_1[func_641(iParam0, 1)] != &Global_1946804->f_57[func_641(iParam0, 1)];
}

void func_1073(int iParam0, int iParam1)
{
	if (func_562(iParam1, 130796156))
	{
		func_1542(iParam1, 0);
	}
	else if (func_562(iParam1, 930141731))
	{
		func_1542(iParam1, 1);
		func_1543(iParam0);
	}
}

void func_1074(var uParam0, int iParam1)
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

int func_1075(int iParam0, var uParam1, var uParam2, int iParam3)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!_cashinventory_is_session_ready())
	{
		return 0;
	}
	func_1544(uParam1);
	if (!_0x77b299e8799b1332(&uVar0, &(uParam1->f_1), uParam2))
	{
		return 0;
	}
	Var1.f_2.f_1 = 10;
	Var1 = iParam3;
	Var1.f_2 = { *uParam1 };
	func_1545(uParam2, iParam0, Var1);
	return 1;
}

int func_1076(int iParam0)
{
	return &(Global_1900073->f_159[iParam0]);
}

char* func_1077(int iParam0)
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

int func_1078(int iParam0)
{
	if (!func_1546(iParam0, &uVar0, 805880880, 0, 0, -401018458))
	{
		return -1102349958;
	}
	return uVar0;
}

bool func_1079()
{
	return !&Global_1911774;
}

void func_1080(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

char* func_1081(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

bool func_1082(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

char* func_1083(char* sParam0, int iParam1)
{
	return _create_var_string(42, "COLOR_STRING", _create_color_string(iParam1), sParam0);
}

bool func_1084(int iParam0, int iParam1, bool bParam2)
{
	if ((bParam2 && func_20() == 0) && !_unlock_is_visible(iParam0))
	{
		return false;
	}
	if (!func_1547(iParam0, iParam1, &uVar0, &iVar11) || iVar11 < 1)
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

bool func_1085(int iParam0, int iParam1)
{
	if (func_20() != -1)
	{
		return false;
	}
	if (func_1547(iParam0, iParam1, &uVar2, &iVar1))
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

void func_1086(bool bParam0)
{
	if (bParam0)
	{
		func_310(2032023096, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_310(-615217896, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		func_310(655868243, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		func_1087();
		_unlock_set_unlocked(645322743, true);
	}
	else
	{
		func_1548(2032023096);
		func_313(-615217896);
		func_637(655868243, 1, 1, -142743235, 1);
		func_1550(146323340, func_1549());
		Var0 = { func_1329() };
		if (func_1551(&Var0) == -1387633835)
		{
			func_1552(&Var0);
			func_1553(Var0);
		}
		iVar7 = -868094182;
		iVar8 = 1074477367;
		iVar9 = 1;
		func_1554(&iVar7, &iVar8, &iVar9);
		iVar6 = 0;
		while (iVar6 < 7)
		{
			if (func_1322(iVar6) == 2010625508)
			{
				func_1555(iVar6, iVar7);
				func_1556(iVar6, iVar8);
				func_1557(iVar6, iVar9);
				func_1558(iVar6, 0);
				if (func_1559(iVar6))
				{
					func_1560(iVar6);
				}
				iVar10 = func_1561(iVar8);
				func_1562(iVar6, iVar10);
			}
			iVar6++;
		}
		_unlock_set_unlocked(645322743, false);
	}
}

int func_1087()
{
	if (!func_1563(-1898635967, func_1549(), 1))
	{
		return 0;
	}
	if (func_330())
	{
		if (!func_1563(146323340, func_1549(), 0))
		{
			return 0;
		}
	}
	return 1;
}

void func_1088()
{
	func_324(34411519);
	func_324(834124286);
	func_324(-570967010);
}

void func_1089(bool bParam0)
{
	if (bParam0)
	{
		if (_unlock_is_unlocked(-1426541042))
		{
			return;
		}
		func_310(-1080874779, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_310(-223790555, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_310(1566032147, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_310(891311852, 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_310(-1353737667, 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_310(-330313895, 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_310(-2051332199, 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_310(1237770824, 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_310(-1795542128, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_310(-1757588258, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_310(-1921080134, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		_unlock_set_unlocked(-1426541042, true);
	}
	else
	{
		if (!_unlock_is_unlocked(-1426541042))
		{
			return;
		}
		func_637(-1080874779, 3, 1, -142743235, 1);
		func_637(-223790555, 3, 1, -142743235, 1);
		func_637(1566032147, 3, 1, -142743235, 1);
		func_637(891311852, 5, 1, -142743235, 1);
		func_637(-1353737667, 5, 1, -142743235, 1);
		func_637(-330313895, 5, 1, -142743235, 1);
		func_637(-2051332199, 5, 1, -142743235, 1);
		func_637(1237770824, 5, 1, -142743235, 1);
		func_637(-1795542128, 3, 1, -142743235, 1);
		func_637(-1757588258, 3, 1, -142743235, 1);
		func_637(-1921080134, 10, 1, -142743235, 1);
		iVar1 = -868094182;
		iVar2 = 1074477367;
		iVar3 = 1;
		func_1554(&iVar1, &iVar2, &iVar3);
		iVar0 = 0;
		while (iVar0 < 7)
		{
			if (func_1322(iVar0) == 153881023)
			{
				func_1555(iVar0, iVar1);
				func_1556(iVar0, iVar2);
				func_1557(iVar0, iVar3);
				func_1558(iVar0, 0);
				if (func_1559(iVar0))
				{
					func_1560(iVar0);
				}
				iVar4 = func_1561(iVar2);
				func_1562(iVar0, iVar4);
			}
			iVar0++;
		}
		func_1087();
		_unlock_set_unlocked(-1426541042, false);
	}
}

void func_1090(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4)
{
	func_1564(iParam0);
	if (bParam3)
	{
		func_679(iParam0, sParam1, iParam2);
	}
}

bool func_1091(int iParam0)
{
	return (Global_40.f_12004.f_10 && iParam0) != 0;
}

void func_1092(int iParam0)
{
	Global_40.f_12004.f_10 = (Global_40.f_12004.f_10 - (Global_40.f_12004.f_10 && iParam0));
}

struct<14> func_1093()
{
	Var3.f_9 = -1591664384;
	Var17.f_9 = -1591664384;
	if (func_1057("ALL WEAPONS", &iVar0, &iVar1, -1591664384, 0))
	{
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (!func_1058(&Var3, iVar2, iVar0, iVar1))
			{
				Jump @136; //curOff = 80
			}
			else if (Var3.f_4 != 127400949)
			{
			}
			else if (func_1008(Var3.f_4, &Var17, Var3.f_9))
			{
			}
			else
			{
				func_1059(iVar0);
				return Var3;
			}
			iVar2++;
		}
		func_1059(iVar0);
	}
	Var39.f_9 = -1591664384;
	return Var39;
}

void func_1094(int iParam0, struct<4> Param1, int iParam5)
{
	Var0 = { Param1 };
	Var0.f_4 = iParam5;
	Var5.f_9 = -1591664384;
	if (func_1565(Param1, iParam5, &Var5, 0))
	{
		func_1010(Var5.f_4, &Var5, &Var0, -1, -142743235, 1, 0);
	}
	func_1065(iParam0, &Var19, &Var0, 1, 752097756, 0);
	func_1566(Var19, 1);
}

bool func_1095(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (!is_weapon_valid(iParam0))
	{
		return false;
	}
	Var0 = { func_1454(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam2)
	{
		func_1455(&Var0, func_1115(0));
	}
	if (!func_1456(&Var0, &iVar14, &iVar15, 0))
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
			if (!func_1058(&Var16, iVar35, iVar14, iVar15))
			{
			}
			else
			{
				Var30.f_4 = Var16.f_9;
				Var30 = { Var16.f_5 };
				if (func_1010(iParam0, &Var16, &Var30, 1, iParam3, 0, 0))
				{
					iVar36++;
				}
			}
			iVar35++;
		}
	}
	func_1059(iVar14);
	if (iVar36 < iParam1)
	{
	}
	return true;
}

bool func_1096(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (!func_542(iParam0, 0))
	{
		return false;
	}
	if (iParam1 < 1)
	{
		return false;
	}
	Var0 = { func_653(iParam0, bParam4, 1) };
	if (Var0.f_4 == 1084182731)
	{
		return func_1567(iParam0, iParam1, iParam2, bParam3, bParam4);
	}
	Var5 = { func_1009(iParam0, Var0, Var0.f_4, bParam4) };
	return func_1010(iParam0, &Var5, &Var0, iParam1, iParam2, bParam3, bParam4);
}

void func_1097(int iParam0, int iParam1)
{
	if (!Global_1901328->f_94)
	{
		if (func_562(iParam0, 606799272))
		{
			func_1568(iParam0, iParam1);
		}
		if (func_562(iParam0, -1112814642) && func_562(iParam0, -1697809989))
		{
			func_590(iParam0, iParam1, 1, 0);
		}
	}
}

int func_1098(int iParam0, var uParam1)
{
	iVar1 = iParam0;
	if (!func_1569(iVar1, &iVar0))
	{
		return 0;
	}
	if (Global_1946804->f_2657.f_19 == 1)
	{
		Global_1946804->f_2657.f_19 = 0;
		*uParam1 = 0;
		if (func_566(iParam0) != -999503751)
		{
			func_1570(&(Global_1946804->f_2657.f_26), 0, Global_1946804->f_2657.f_19);
		}
		Global_1946804->f_2657[0] = 0;
		return 1;
	}
	Global_1946804->f_2657.f_19 = (Global_1946804->f_2657.f_19 - 1);
	*uParam1 = (*uParam1 - 1);
	Global_1946804->f_2657[iVar0] = &Global_1946804->f_2657[Global_1946804->f_2657.f_19];
	Global_1946804->f_2657[Global_1946804->f_2657.f_19] = 0;
	if (func_566(iParam0) != -999503751)
	{
		func_1570(&(Global_1946804->f_2657.f_26), iVar0, Global_1946804->f_2657.f_19);
	}
	func_1571(iParam0, 1);
	return 1;
}

void func_1099()
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

void func_1100(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		func_1572(0);
	}
	if (bParam0)
	{
		func_1112(8);
		func_1112(512);
	}
	else
	{
		func_1112(8);
		func_1112(16);
	}
}

void func_1101(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

int func_1102(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = func_643();
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

int func_1103(int iParam0)
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

void func_1104(var uParam0, int iParam1, bool bParam2)
{
	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (func_1573(uParam0->f_1[iVar0], 2))
		{
			iVar7 = func_1120(iVar0, 1);
			if (func_1276(iVar0, iParam1))
			{
				vVar4 = { func_645(iVar0, -1) };
				if ((vVar4.x != &Global_1946804->f_57[iVar0] && vVar4.x != 0) && (&uParam0->f_1[iVar0] != vVar4.x || uParam0->f_1[iVar0]->f_1 != vVar4.y))
				{
					*uParam0->f_1[iVar0] = { vVar4 };
				}
				if (func_1275(iVar7, 4))
				{
					func_1279(iVar7, 4, 6);
				}
			}
			else
			{
				func_1278(iVar7, 4, 6);
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

bool func_1105(int iParam0)
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
	func_1574(&(Global_1946804->f_964), iVar0, -367421157, 1409451727, 1, iParam0);
	_0x91ded5dd64bb2691(&(Global_1946804->f_964));
	if (!_0x44b3a36933ac009c(&uVar1, &(Global_1946804->f_964), 1409451727))
	{
		return false;
	}
	return true;
}

bool func_1106(int iParam0, int iParam1, int iParam2)
{
	*iParam2 = 1155669136;
	return true;
}

void func_1107(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	iVar1 = 12;
	iVar2 = func_566(&(uParam0->f_1[iParam2]));
	iVar3 = 0;
	if (bParam3)
	{
		iVar3 = 3;
	}
	if (func_1276(iParam2, 65536) && &uParam0->f_1[iVar1] == -452402570)
	{
		uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
		uParam0->f_1[iVar1]->f_1 = 0;
		if (bParam4)
		{
			func_1514(iVar1, iVar3);
		}
	}
	if (func_1072(-1586649372) && func_1276(iParam2, 524288))
	{
		iVar1 = 33;
		uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
		uParam0->f_1[iVar1]->f_1 = 0;
		if (bParam4)
		{
			func_1514(iVar1, iVar3);
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
						func_1514(iVar1, iVar3);
					}
				}
			}
			func_1575(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
			break;
		case 688587926:
			func_1575(uParam0, 0, (1 && bParam4), (1 && bParam4), bParam3);
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
						func_1514(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 525
				func_1575(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				iVar1 = 16;
				if (uParam0->f_1[iVar1]->f_1 == 1155669136)
				{
					uParam0->f_1[iVar1]->f_1 = -1539589426;
					if (bParam4)
					{
						func_1514(iVar1, iVar3);
					}
				}
				if (uParam0->f_1[iVar1]->f_1 == 1530758430)
				{
					uParam0->f_1[iVar1]->f_1 = 1334603721;
					if (bParam4)
					{
						func_1514(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 656
				func_1575(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				Jump @1415; //curOff = 691
				func_1575(uParam0, (1 && bParam4), (1 && bParam4), 0, bParam3);
				iVar1 = 22;
				if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1])
				{
					uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
					uParam0->f_1[iVar1]->f_1 = 0;
					if (bParam4)
					{
						func_1514(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 786
				func_1575(uParam0, (1 && bParam4), 0, 1, bParam3);
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
							func_1514(iVar1, iVar3);
						}
					}
					iVar1 = 38;
					if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1])
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_1514(iVar1, iVar3);
						}
					}
					iVar1 = 35;
					if (-923693316 == func_566(&(uParam0->f_1[iVar1])))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_1514(iVar1, iVar3);
						}
					}
				}
				else
				{
					iVar1 = 35;
					if ((func_1499(iParam1) && &uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1]) && -923693316 == func_566(&(uParam0->f_1[iVar1])))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_1514(iVar1, iVar3);
						}
					}
				}
				Jump @1415; //curOff = 1130
				iVar1 = 36;
				if (&uParam0->f_1[iParam2] != &Global_1946804->f_57[iParam2] && func_562(&(Global_1946804->f_1497.f_1[iVar1]), -1638171711))
				{
					uParam0->f_1[iParam2] = &Global_1946804->f_57[iParam2];
					uParam0->f_1[iParam2]->f_1 = 0;
					if (bParam4)
					{
						func_1514(iVar1, iVar3);
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
						func_1514(iVar1, iVar3);
					}
				}
				if (&uParam0->f_1[iParam2] != &Global_1946804->f_57[iParam2] && (func_1499(&(Global_1946804->f_1497.f_1[iVar1])) || func_562(&(Global_1946804->f_1497.f_1[iVar1]), -1638171711)))
				{
					uParam0->f_1[iParam2] = &Global_1946804->f_57[iParam2];
					uParam0->f_1[iParam2]->f_1 = 0;
					if (bParam4)
					{
						func_1514(iVar1, iVar3);
					}
				}
			}
			switch (func_566(iParam1))
			{
				case 81053684:
					iVar1 = 10;
					if (-525676072 == func_566(&(uParam0->f_1[iVar1])))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_1514(iVar1, iVar3);
						}
					}
					break;
				case -525676072:
					iVar1 = 12;
					if (81053684 == func_566(&(uParam0->f_1[iVar1])) || func_562(&(uParam0->f_1[iVar1]), 866047851))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_1514(iVar1, iVar3);
						}
					}
					break;
			}
			default:
				break;
	}
}

bool func_1108(int iParam0, int iParam1)
{
	if (func_20() != -1)
	{
		return is_bit_set(&(Global_36638.f_1444[iParam0]), iParam1);
	}
	return is_bit_set(&(Global_40.f_7832[iParam0]), iParam1);
}

bool func_1109(int iParam0)
{
	if (func_20() != -1)
	{
		if (func_1063(iParam0, 4))
		{
			return false;
		}
	}
	else if (func_1063(iParam0, 2))
	{
		return false;
	}
	return true;
}

bool func_1110(int iParam0)
{
	iVar1 = get_cloud_time_as_int();
	if (!func_1063(iParam0, 65536) && !func_1063(iParam0, 32768))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_7756)
	{
		if (Global_40.f_7756[iVar0]->f_2 == iParam0)
		{
			iVar3 = 3;
			if (func_1063(iParam0, 131072))
			{
				iVar3 = 2;
			}
			iVar2 = (&Global_40.f_7756[iVar0] - iVar1);
			if (Global_40.f_7756[iVar0]->f_1 >= iVar3)
			{
				return true;
			}
			if (iVar2 < 1800 && func_1063(iParam0, 32768))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_1111()
{
	return Global_1905944->f_5694;
}

void func_1112(int iParam0)
{
	Global_1946804 = (Global_1946804 || iParam0);
}

void func_1113(struct<4> Param0)
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
			if (func_1576(Param0))
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
			func_1577(Param0);
			*Global_1946804->f_668[Global_1946804->f_856] = { Param0 };
			Global_1946804->f_850++;
			Global_1946804->f_856 = (Global_1946804->f_856 + 1 % 25);
			func_1112(8);
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
			if (func_1576(Param0))
			{
				return;
			}
			func_1577(Param0);
			*Global_1946804->f_567[Global_1946804->f_851] = { Param0 };
			Global_1946804->f_851++;
			func_1112(8);
			break;
		case 30:
		case 31:
		case 32:
		case 33:
		case 35:
		case 36:
			func_1056(Param0, Param0.f_1, Param0.f_2);
			break;
	}
}

struct<4> func_1114(bool bParam0)
{
	return func_1009(1328661203, func_1578(), -1591664384, bParam0);
}

struct<4> func_1115(bool bParam0)
{
	iVar0 = func_927(bParam0);
	if (iVar0 == 2)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224215))
		{
			*Global_1224215 = { func_1009(923904168, func_1114(bParam0), -740156546, bParam0) };
		}
		return *Global_1224215;
	}
	else if (iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224223))
		{
			*Global_1224223 = { func_1009(923904168, func_1114(bParam0), -740156546, 0) };
		}
		return *Global_1224223;
	}
	return func_1009(923904168, func_1114(bParam0), -740156546, 0);
}

bool func_1116(int iParam0, bool bParam1)
{
	if (func_566(iParam0) == 1779021115)
	{
		return false;
	}
	if (_is_weapon_one_handed(iParam0))
	{
		if (bParam1)
		{
			return func_564(24);
		}
		else
		{
			return true;
		}
	}
	return false;
}

struct<4> func_1117(bool bParam0)
{
	iVar0 = func_927(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224219))
		{
			*Global_1224219 = { func_1009(271701509, func_1114(bParam0), 12999093, 0) };
		}
		return *Global_1224219;
	}
	return func_1009(271701509, func_1114(bParam0), 12999093, 0);
}

bool func_1118(int iParam0, int iParam1)
{
	if (iParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_566(iParam0);
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

bool func_1119(var uParam0, var uParam1, bool bParam2, int iParam3, var uParam4, bool bParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(&uParam0))
	{
		return false;
	}
	if (!_0x9700e8efc4ab9089(func_927(bParam5), &uParam0, uParam4, !bParam6))
	{
		return false;
	}
	return true;
}

int func_1120(int iParam0, int iParam1)
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

int func_1121(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_1122(int iParam0, int iParam1)
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

void func_1123(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 62914560);
	*iParam0 = (*iParam0 || shift_left(iParam1, 22));
}

void func_1124(int iParam0, int iParam1)
{
	iVar0 = func_661(*iParam0);
	iVar1 = func_660(*iParam0);
	if (iParam1 < 1 || iParam1 > func_666(iVar0, iVar1))
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4063232);
	*iParam0 = (*iParam0 || shift_left(iParam1, 17));
}

void func_1125(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 126976);
	*iParam0 = (*iParam0 || shift_left(iParam1, 12));
}

void func_1126(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4032);
	*iParam0 = (*iParam0 || shift_left(iParam1, 6));
}

void func_1127(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 63);
	*iParam0 = (*iParam0 || shift_left(iParam1, 0));
}

void func_1128(char* sParam0, char* sParam1, int iParam2)
{
	_0x74bcceb233ad95b2(-466562563, get_hash_key(sParam0));
	_0x74bcceb233ad95b2(1885309238, get_hash_key(sParam1));
	_0x74bcceb233ad95b2(-826961056, iParam2);
}

int func_1129(int iParam0)
{
	return floor(pow(2f, to_float(iParam0)));
}

int func_1130(int iParam0)
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

bool func_1131(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	bVar0 = false;
	if (func_20() == -1)
	{
		if (func_978(iParam0))
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

int func_1132(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (!func_542(iParam0, 0))
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

int func_1133(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	func_1451(&iParam0);
	if (!func_542(iParam0, 0))
	{
		return 0;
	}
	if (!func_570(0))
	{
		bParam2 = true;
	}
	iVar0 = func_982(iParam0, uParam1, bParam2, bParam3);
	if (iVar0 < 0)
	{
		return 2147483647;
	}
	if (bParam2)
	{
		iVar1 = func_1453(iParam0, *uParam1, uParam1->f_4, bParam3);
	}
	else
	{
		iVar1 = _0xe787f05dfc977bde(func_927(bParam3), iParam0, 0);
	}
	if (iVar0 > iVar1)
	{
		return (iVar0 - iVar1);
	}
	return 0;
}

int func_1134(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (func_562(iParam0, -5284486))
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
		if (func_1579(iParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
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
		iVar64 = func_623(iParam0, 862142561);
		if (iVar64 != 0)
		{
			Var50.f_8 = iVar64;
			iVar61 = _item_database_create_item_collection(&Var50, &iVar60, 1);
			if (iVar61 != -1)
			{
				iVar62 = 0;
				while (iVar62 < iVar60)
				{
					iVar63 = func_626(iVar62, iVar61);
					if (func_542(iVar63, 0) && iVar63 != iParam0)
					{
						if (bParam4)
						{
							iVar49 = (iVar49 + func_1134(iVar63, -915411861, 1, 0, 0));
						}
						else
						{
							Var35 = iVar63;
							iVar33 = _0x640f890c3e5a3ffd(1, &Var35, &iVar34);
							if (iVar33 != -1)
							{
								if (iVar34 == 0)
								{
									iVar49 = (iVar49 + func_1134(iVar63, -915411861, 1, 0, 0));
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
	if (!func_1579(iParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
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

bool func_1135(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return iParam0 <= func_1580(1);
}

void func_1136(int iParam0, char* sParam1)
{
	if (iParam0 != 18 && iParam0 != 7)
	{
		_uilog_add_total_take_entry(get_hash_key(func_1581(iParam0)), 1997120069, _create_var_string(10, "MISSION_COMPLETE_TAKE_COMP", _create_var_string(2, func_316(iParam0, 0))), _create_var_string(2, "MISSION_COMPLETE_TAKE_AMOUNT", sParam1), 601389479);
	}
	else
	{
		_uilog_add_total_take_entry(get_hash_key(func_1581(iParam0)), 1997120069, _create_var_string(10, "MISSION_COMPLETE_TAKE_COMP_NOS", _create_var_string(2, func_316(iParam0, 0))), _create_var_string(2, "MISSION_COMPLETE_TAKE_AMOUNT", sParam1), 601389479);
	}
}

var func_1137()
{
	return Global_40.f_4283.f_325;
}

bool func_1138(int iParam0)
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

bool func_1139(int iParam0)
{
	return (iParam0 > 0 && iParam0 < 13);
}

void func_1140(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_3 = iParam1;
}

void func_1141(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_4 = iParam1;
}

void func_1142(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_12106[iParam0] = iParam1;
		return;
	}
	Global_1058888->f_498[iParam0] = iParam1;
}

void func_1143(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_12106[iParam0]->f_5 = iParam1;
		return;
	}
	Global_1058888->f_498[iParam0]->f_1 = iParam1;
}

int func_1144(bool bParam0, var uParam1)
{
	*bParam0 = 0;
	*uParam1 = 0;
	bVar0 = func_385();
	bVar1 = false;
	if (bVar0 && !func_1582(4))
	{
		bVar1 = true;
	}
	if ((bVar0 && func_1582(37)) && !func_1582(43))
	{
		*bParam0 = 0;
		*uParam1 = 0;
		return 0;
	}
	bVar2 = false;
	if ((bVar0 && func_1582(43)) && !func_1582(44))
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
		if (func_1323(0) == 1)
		{
			*bParam0 = 1;
		}
		if (func_1323(1) == 1)
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

int func_1145()
{
	return Global_40.f_1095.f_3054;
}

bool func_1146(int iParam0)
{
	iParam0 = func_258(iParam0);
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

bool func_1147(int iParam0, var uParam1)
{
	if (!func_1583(iParam0))
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

int func_1148()
{
	if (func_385())
	{
		if (!func_1582(3))
		{
			return func_1584(43);
		}
		if (func_1582(38) && !func_1582(43))
		{
			return func_1585(8);
		}
	}
	return 0;
}

bool func_1149(int iParam0)
{
	if (!func_240(iParam0))
	{
		return false;
	}
	return (((*Global_1888801)[iParam0]->f_20 == 1 || (*Global_1888801)[iParam0]->f_20 == 2) && !func_1586(iParam0));
}

Vector3 func_1150(int iParam0, int iParam1)
{
	func_1147(15, &Var0);
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

int func_1151(int iParam0, int iParam1)
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
	iVar0 = func_1587(Global_1310720->f_21, 2);
	if (iVar0 == -1)
	{
		return 0;
	}
	func_1147(15, &Var1);
	Var1.f_2 = -1999103282;
	Var1.f_3 = iParam0;
	Var1.f_4 = iParam1;
	if (_datafile_get_data_node_index(&(Var1.f_1), &Var1))
	{
		Var1.f_2 = 383290544;
		_datafile_get_hash(&iVar6, &Var1);
		if (func_1588(iVar0) == iVar6)
		{
			return 1;
		}
	}
	return 0;
}

bool func_1152(int iParam0, bool bParam1, int iParam2)
{
	iVar0 = func_1589(iParam0);
	if (func_457(373691918) && Global_1310720->f_12)
	{
		return iVar0 == 4;
	}
	if (iParam2 != -1)
	{
		return iVar0 == iParam2;
	}
	return (bParam1 || iVar0 == -1);
}

bool func_1153(int iParam0)
{
	if (!func_1147(15, &Var0))
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

bool func_1154(vector3 vParam0, int iParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	if (bParam5)
	{
		if (func_1590(iParam3, iParam4))
		{
			return false;
		}
	}
	if (!bParam7 || func_1591(5))
	{
		if (func_1592(iParam3, iParam4))
		{
			return false;
		}
	}
	iVar0 = func_1316(vParam0);
	if (bParam6)
	{
		iVar1 = func_364(vParam0, 1);
		if (func_116(iVar1) || func_1593(iVar0, 1))
		{
			return false;
		}
	}
	if (!func_1594(iParam3, iParam4))
	{
		return false;
	}
	if (!func_1595())
	{
		if (func_1596(iParam3, iParam4))
		{
			return false;
		}
	}
	if (!_does_volume_exist(bParam8))
	{
		if (!func_1597(iVar0))
		{
			return false;
		}
		if (Global_1310720->f_23 >= 3)
		{
			if (Global_1310720->f_21 != -1)
			{
				if (Global_1310720->f_21 == func_364(vParam0, 0))
				{
					return false;
				}
			}
		}
	}
	if (!func_1598(iParam3, iParam4))
	{
		return false;
	}
	if (func_1599(0) == 3)
	{
		if (((vParam0.x > -1480f && vParam0.x < -1475f) && vParam0.y > -359f) && vParam0.y < -354f)
		{
			return false;
		}
	}
	if (!func_1600(65536, 2))
	{
		if (((vParam0.x > 1673f && vParam0.x < 1676f) && vParam0.y > -1888f) && vParam0.y < -1885f)
		{
			return false;
		}
	}
	if (func_385())
	{
		if (_does_volume_exist(bParam8))
		{
			if (!_0xf256a75210c5c0eb(bParam8, vParam0))
			{
				return false;
			}
		}
		if (func_1601(vParam0, bParam10) || func_1602(vParam0, bParam10))
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

int func_1155(vector3 vParam0)
{
	iVar0 = func_1603(vParam0, 0f, 0f, 0, 2);
	return func_1603(vParam0, (*Global_1894052)[iVar0]->f_1, (*Global_1894052)[iVar0]->f_2, Global_1894052[iVar0], 4);
}

void func_1156(int iParam0)
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

char* func_1157(int iParam0)
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
	return func_1286(iVar0);
}

char* func_1158(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return "";
	}
	iVar0 = get_entity_model(iParam0);
	return func_1604(iVar0);
}

char* func_1159(int iParam0)
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

void func_1160(var uParam0, int iParam1)
{
	iVar0 = func_132(iParam1);
	if (!func_1385(iVar0))
	{
		return;
	}
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 <= 7)
	{
		(*uParam0->f_1[iVar0])[iVar1] = 56021;
		clear_bit(&(uParam0->f_1[iVar0]->f_17), iVar1);
		iVar1++;
	}
}

void func_1161(var uParam0, int iParam1, int iParam2)
{
	iVar0 = func_132(iParam1);
	if (func_1385(iVar0))
	{
		uParam0->f_1[iVar0]->f_9 = iParam2;
	}
}

int func_1162(int iParam0)
{
	if (func_429(iParam0))
	{
		return Global_1360165[iParam0];
	}
	return 0;
}

bool func_1163(var uParam0)
{
	if (!does_entity_exist(iLocal_227))
	{
		if (func_33(uParam0) == iLocal_98)
		{
			iLocal_227 = create_vehicle(-283162583, func_176(3, 3), func_1605(3, 3), true, true, false, false);
		}
		else
		{
			iLocal_227 = create_vehicle(-283162583, func_176(3, 4), func_1605(3, 4), true, true, false, false);
			func_412(uParam0, iLocal_227, "WAGON02X", 0, 0, 0, 0);
		}
	}
	if (does_entity_exist(iLocal_227))
	{
		if (!is_entity_dead(iLocal_227))
		{
			if (!func_1374(0))
			{
				return false;
			}
		}
	}
	else
	{
		return false;
	}
	return true;
}

void func_1164(bool bParam0)
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
	func_1606(0f);
	Global_1935436->f_11 = 1;
	if (func_296())
	{
		set_ambient_voice_name(Global_35, "ARTHUR");
	}
	else
	{
		set_ambient_voice_name(Global_35, "JOHN_PLAYER");
	}
	if (animpostfx_is_running("PlayerDrunk01"))
	{
		func_1607();
	}
	if (is_gameplay_cam_shaking())
	{
		stop_gameplay_cam_shaking(false);
	}
}

void func_1165(int iParam0, bool bParam1, int iParam2)
{
	if (!func_429(iParam0))
	{
		return;
	}
	if (!func_1608(iParam0))
	{
		return;
	}
	if (bParam1 && !does_entity_exist(iParam2))
	{
		return;
	}
	if (bParam1 && is_entity_dead(iParam2))
	{
		return;
	}
	iVar0 = func_516(iParam0);
	if (bParam1)
	{
		set_ped_config_flag(iParam2, 155, true);
		set_blocking_of_non_temporary_events(iVar0, false);
	}
	else
	{
		set_blocking_of_non_temporary_events(iVar0, true);
	}
	set_ped_config_flag(iVar0, 152, bParam1);
	set_ped_config_flag(iVar0, 154, bParam1);
	set_ped_config_flag(iVar0, 156, bParam1);
	set_ped_config_flag(iVar0, 25, bParam1);
	set_ped_combat_attributes(iVar0, 87, bParam1);
	if (bParam1)
	{
		_0xd428c3f92fc3f6f8(iVar0, func_1609(iParam0));
		_0x9238a3d970bbb0a9(iVar0, -1972074710);
		_0x9238a3d970bbb0a9(Global_35, -1972074710);
	}
	else
	{
		_0x9a4ac116cc1eee14(iVar0);
		if (!func_1610())
		{
			_0x9a4ac116cc1eee14(Global_35);
		}
	}
}

void func_1166()
{
	set_anim_scene_entity(&(uLocal_67[0]), "P_CS_BOOK_SMALL01X", iLocal_105, 0);
	set_anim_scene_entity(&(uLocal_67[0]), "MARYBETH", iVar282, 0);
	start_anim_scene(&(uLocal_67[0]));
	set_anim_scene_bool(&(uLocal_67[0]), "Loop", false, false);
}

int func_1167(int iParam0, int iParam1, bool bParam2)
{
	iVar0 = _0xa6ef0c54a3443e70(iParam0, iParam1);
	if (bParam2)
	{
		_blip_set_modifier(iVar0, 231194138);
	}
	return iVar0;
}

void func_1168()
{
	_0x1e017404784aa6a3(&(Local_193[1]), -203846402);
	_0x0d7fd6a55fd63aef(8, 3, 1);
	_0x0d7fd6a55fd63aef(26, 3, 1);
	_0x0d7fd6a55fd63aef(19, 3, 1);
	_0x0d7fd6a55fd63aef(12, 3, 1);
	_0x0d7fd6a55fd63aef(21, 3, 1);
}

void func_1169(var uParam0)
{
	if (_0xd89504d9d7d5057d("SUS1_S1_BANT1"))
	{
		func_1611(&(Local_193[1]), "SUS1_S1_BANT1", 1, 1);
	}
	else if (_0xd89504d9d7d5057d("SUS1_S1_BANT1B"))
	{
		func_1611(&(Local_193[1]), "SUS1_S1_BANT1B", 1, 1);
	}
	else if (_0xd89504d9d7d5057d("SUS1_S1_BANT1C"))
	{
		func_1611(&(Local_193[1]), "SUS1_S1_BANT1C", 1, 1);
	}
	switch (func_1612(uParam0))
	{
		case 0:
			if (is_vehicle_driveable(iLocal_227, false, false) && is_ped_in_vehicle(Global_35, iLocal_227, false))
			{
				func_135(uParam0, 1);
				func_1236(uParam0, "SUS1_INT_LO", 0);
			}
			else if (func_1613(&uLocal_236, 1f))
			{
				_0xdd1232b332cbb9e7(3, 1, 0);
				if (does_blip_exist(iLocal_62))
				{
					remove_blip(&iLocal_62);
				}
				func_1182(uParam0, "SUS1_S1_OBJ1", -1082130432, 0, 0, -1, -1, 0);
				func_135(uParam0, 1);
				func_517(&uLocal_236);
			}
			break;
		case 1:
			if (is_vehicle_driveable(iLocal_227, false, false))
			{
				if (is_ped_in_vehicle(Global_35, iLocal_227, false))
				{
					if (((!func_1195(uLocal_77, 16384) && !func_1614("SUS1_INT_LO")) && func_1236(uParam0, "SUS1_S1_BANT1", 0)) || func_1195(uLocal_77, 16384))
					{
						func_794(&uLocal_77, 16384);
						_0xdd1232b332cbb9e7(3, 1, 0);
						func_1182(uParam0, "SUS1_S1_OBJ2", -1082130432, 0, 0, -1, -1, 0);
						if (does_blip_exist(iLocal_62))
						{
							remove_blip(&iLocal_62);
						}
						func_135(uParam0, 2);
					}
				}
			}
			break;
		case 2:
			if (get_current_scripted_conversation_line("SUS1_S1_BANT1") == 3)
			{
				func_1240(uParam0, "SUS1_S1_OBJ2", 0, 7500, 0, -1082130432, 0, 0, -1, -1, 0);
			}
			if ((((((is_vehicle_driveable(iLocal_227, false, false) && is_ped_in_vehicle(Global_35, iLocal_227, false)) && func_1582(28)) && !func_1615(1)) && !func_1195(uLocal_77, 512)) && !func_1195(uLocal_77, 65536)) && !func_1616("SUS1_S1_BANT1"))
			{
				func_1236(uParam0, "SUS1_S1_BANT1B", 0);
				func_794(&uLocal_77, 65536);
			}
			else if (((!func_1582(28) && !func_1615(1)) && !func_1195(uLocal_77, 512)) && !func_1195(uLocal_77, 65536))
			{
				if (_0xd89504d9d7d5057d("SUS1_S1_BANT1") && !func_1616("SUS1_S1_BANT1"))
				{
					func_1236(uParam0, "SUS1_S1_BANT1C", 0);
					func_794(&uLocal_77, 65536);
				}
				else if (!_0xd89504d9d7d5057d("SUS1_S1_BANT1"))
				{
					func_1236(uParam0, "SUS1_S1_BANT1C", 0);
					func_794(&uLocal_77, 65536);
				}
			}
			if (!is_ped_in_vehicle(Global_35, iLocal_227, false))
			{
				func_135(uParam0, 0);
			}
			if (!func_1195(uLocal_77, 32768))
			{
				if (func_1229() && func_1251(Global_35, func_176(1, 0), 180f, 1, 1))
				{
					func_47(1, 0);
					func_794(&uLocal_77, 32768);
				}
			}
			if (!func_1195(uLocal_77, 512))
			{
				if (func_1251(Global_35, func_176(1, 0), 160f, 1, 1))
				{
					_0x36559148b78853b3(1, 1, 0);
					if (!func_1615(1) && func_1236(uParam0, "SUS1_S1_OBJ2", 0))
					{
						func_794(&uLocal_77, 512);
					}
				}
			}
			if (!func_1195(uLocal_77, 2048) && func_1195(uLocal_77, 512))
			{
				if (does_entity_exist(&(Local_115[0])))
				{
					if (!func_1229())
					{
						if (!func_1178(Global_35, Local_31.f_9, 1, 0) && func_836(Global_35, &(Local_115[0]), 1, 1) < 80f)
						{
							if (func_836(Global_35, &(Local_115[0]), 1, 1) < 30f)
							{
								func_794(&uLocal_77, 2048);
							}
							else if (!is_entity_occluded(&(Local_115[0])) && _0x7f9b9791d4cb71f6(Global_35, &(Local_115[0]), 0, 0) == 1)
							{
								if (func_1236(uParam0, "SUS1_SPOTGRD", 0))
								{
									func_794(&uLocal_77, 2048);
								}
							}
						}
					}
				}
			}
			if ((func_1617(Global_35, _0xf70f00013a62f866(Local_31.f_8), 1) > 26f && func_1617(Global_35, _0xf70f00013a62f866(Local_31.f_8), 1) < 50f) && is_ped_in_vehicle(Global_35, iLocal_227, false))
			{
				set_ped_reset_flag(Global_35, 181, true);
				set_ped_reset_flag(Global_35, 240, true);
			}
			if (!func_1195(uLocal_77, 4096))
			{
				if (func_1617(Global_35, _0xf70f00013a62f866(Local_31.f_8), 1) < 25f)
				{
					if (!func_1618())
					{
						if (func_1236(uParam0, "SUS1_STOPCART", 0))
						{
							func_794(&uLocal_77, 4096);
							set_ped_reset_flag(Global_35, 181, false);
							set_ped_reset_flag(Global_35, 240, false);
						}
					}
				}
			}
			break;
	}
}

void func_1170(var uParam0)
{
	if (is_entity_in_volume(Global_35, Local_31.f_8, true, 0) && !is_entity_in_volume(&(Local_193[1]), Local_31.f_10, true, 0))
	{
		func_1619(uParam0, "SUS1_FAIL_ERLY", "", 1, 0);
	}
	if (is_entity_in_volume(Global_35, Local_31.f_11, true, 0) && !is_entity_in_volume(&(Local_193[1]), Local_31.f_11, true, 0))
	{
		func_1619(uParam0, "SUS1_FAIL_ERLY", "", 1, 0);
	}
	if (is_entity_in_volume(Global_35, Local_31.f_8, true, 0) && func_897(get_player_index(), 1, 0, 1))
	{
		func_1619(uParam0, "SUS1_FAIL_WANTED", "", 1, 0);
	}
	if (is_entity_in_volume(Global_35, Local_31.f_7, true, 0) && is_entity_in_volume(&(Local_193[1]), Local_31.f_7, true, 0))
	{
		func_1619(uParam0, "SUS1_FAIL_CAMP", "", 1, 0);
	}
	func_1620(uParam0, 1);
	func_1621(uParam0);
	uParam0->f_607 = uParam0->f_607;
}

void func_1171(var uParam0)
{
	if (func_1251(Global_35, func_176(1, 0), 200f, 1, 1))
	{
		if (func_1622(1112.577f, -1300.28f, 66.5558f, &uLocal_350, &uLocal_351) || func_1251(Global_35, func_176(1, 0), 50f, 1, 1))
		{
			if (func_1365(uParam0))
			{
				func_1359(uParam0);
			}
		}
	}
}

void func_1172(var uParam0)
{
	func_40(1);
	if (!is_entity_dead(&(Local_193[1])))
	{
		switch (Local_193[1]->f_3)
		{
			case 0:
				if (is_vehicle_driveable(iLocal_227, false, false))
				{
					if (func_1623(19, 0))
					{
						func_1624(19);
					}
					func_911(19, 1);
					func_1165(19, 0, 0);
					func_1625();
					task_enter_vehicle(0, iLocal_227, -1, 0, 2f, 1, 0);
					func_1626(&(Local_193[1]), -1082130432, -1082130432);
					func_1627(Local_193[1], 2);
				}
				break;
			case 2:
				if (!is_ped_in_any_vehicle(&(Local_193[1]), false) && !_0x619e63980bfc0096(&(Local_193[1]), iLocal_227, 0))
				{
					if (get_script_task_status(&(Local_193[1]), -1794415470, true) == 8)
					{
						task_enter_vehicle(&(Local_193[1]), iLocal_227, -1, 0, 2f, 1, 0);
					}
				}
				break;
			case 3:
				if (func_1617(Global_35, func_176(1, 0), 1) < 140f || is_entity_in_volume(&(Local_193[1]), Local_31.f_8, true, 0))
				{
					func_1624(19);
					_task_move_in_traffic_2(&(Local_193[1]), func_176(1, 0), 2f, 3f, 0, 0);
					if (does_blip_exist(iLocal_62))
					{
						remove_blip(&iLocal_62);
					}
					clear_gps_multi_route();
					func_1628(uParam0, &(Local_193[1]), 1105014447, 422991367, 1, 1);
					func_1627(Local_193[1], 4);
					func_27(&(Local_193[1]->f_4), 1);
				}
				break;
			case 4:
				if (func_846(&(Local_193[1]->f_4)) < 4f)
				{
					set_ped_max_move_blend_ratio(func_208(7), 2.5f);
				}
				break;
		}
	}
}

void func_1173(var uParam0)
{
	if (!is_ambient_speech_disabled(&(Local_193[0])))
	{
		stop_ped_speaking(&(Local_193[0]), true);
	}
	if (does_entity_exist(&(Local_193[0])))
	{
		_uiprompt_set_ambient_group_this_frame(&(Local_193[0]), 2f, 3, 1, 0, 0, 0);
	}
	set_ped_reset_flag(&(Local_115[1]), 53, true);
	if (is_entity_dead(&(Local_115[1])) || (_does_anim_scene_exist(&(uLocal_67[3])) && _0xb89fcff19dafff28(&(uLocal_67[3]), "S_M_M_CGHWORKER_01")))
	{
		if (iVar325 != 6 && iVar325 != 16)
		{
			if (!is_entity_dead(&(Local_115[1])))
			{
				set_blocking_of_non_temporary_events(&(Local_115[1]), false);
				set_relationship_between_groups(6, 1269650476, 1030835986);
				register_hated_targets_around_ped(&(Local_115[1]), 30f);
			}
			if (_does_anim_scene_exist(&(uLocal_67[3])))
			{
				if (_is_anim_scene_started(&(uLocal_67[3]), false))
				{
					_delete_anim_scene(&(uLocal_67[3]));
				}
			}
		}
	}
	switch (iVar325)
	{
		case 0:
			if (!is_entity_dead(&(Local_193[0])) && !is_entity_dead(&(Local_115[1])))
			{
				if (_is_anim_scene_loaded(&(uLocal_67[1]), true, false) && _is_anim_scene_loaded(&(uLocal_67[3]), true, false))
				{
					iLocal_109 = _0xc6a6789bb405d11c(&(Local_115[1]), 1);
					iLocal_106 = create_object(2038507899, 1119.49f, -1299.61f, 65.38f, true, true, false, false, true);
					set_anim_scene_entity(&(uLocal_67[1]), "CS_Tilly", &(Local_193[0]), 0);
					set_anim_scene_entity(&(uLocal_67[2]), "p_cs_ropehandssplit", iLocal_106, 0);
					set_anim_scene_entity(&(uLocal_67[3]), "S_M_M_CGHWORKER_01", &(Local_115[1]), 0);
					set_anim_scene_entity(&(uLocal_67[3]), "w_repeater_carbine", iLocal_109, 1);
					func_1629(1);
				}
			}
			break;
		case 1:
			if (_is_anim_scene_loaded(&(uLocal_67[1]), true, false) && _is_anim_scene_loaded(&(uLocal_67[3]), true, false))
			{
				_0xdf7b5144e25cd3fe(&(uLocal_67[1]), "pbl_Convo_Loop");
				_0xdf7b5144e25cd3fe(&(uLocal_67[1]), "pbl_React_To_Player");
				_0xdf7b5144e25cd3fe(&(uLocal_67[1]), "pbl_Tilly_Shot_React_FWD");
				_0xdf7b5144e25cd3fe(&(uLocal_67[1]), "pbl_Tilly_Struggle_Idle_Loop");
				_0xdf7b5144e25cd3fe(&(uLocal_67[1]), "pbl_Tilly_Gagged_Callover_FWD");
				_0xdf7b5144e25cd3fe(&(uLocal_67[3]), "pbl_Foreman_Convo_Loop");
				_0xdf7b5144e25cd3fe(&(uLocal_67[3]), "pbl_Foreman_React_To_Player");
				func_1629(2);
			}
			break;
		case 2:
			if (_0x23e33cb9f4a3f547(&(uLocal_67[1]), "pbl_Convo_Loop") && _0x23e33cb9f4a3f547(&(uLocal_67[3]), "pbl_Foreman_Convo_Loop"))
			{
				_set_anim_scene_playback_list_bool(&(uLocal_67[1]), "pbl_Convo_Loop", true);
				start_anim_scene(&(uLocal_67[1]));
				_set_anim_scene_playback_list_bool(&(uLocal_67[3]), "pbl_Foreman_Convo_Loop", true);
				start_anim_scene(&(uLocal_67[3]));
				func_1629(3);
			}
			break;
		case 3:
			if (is_entity_dead(&(Local_115[1])))
			{
				func_1629(7);
			}
			if (func_1198(Global_35, Local_31.f_2, 1) || func_1630(1151226872) < -0.05f)
			{
				if (_0x23e33cb9f4a3f547(&(uLocal_67[1]), "pbl_Tilly_Shot_React_FWD") && _0x23e33cb9f4a3f547(&(uLocal_67[3]), "pbl_Foreman_React_To_Player"))
				{
					_set_anim_scene_playback_list_bool(&(uLocal_67[1]), "pbl_Tilly_Shot_React_FWD", true);
					_set_anim_scene_playback_list_bool(&(uLocal_67[3]), "pbl_Foreman_React_To_Player", true);
					func_1629(4);
				}
			}
			break;
		case 4:
		case 5:
			if (is_entity_dead(&(Local_115[1])))
			{
				func_1629(6);
			}
			else if (_does_anim_scene_exist(&(uLocal_67[3])) && _get_anim_scene_progress(&(uLocal_67[3])) > 0.95f)
			{
				set_blocking_of_non_temporary_events(&(Local_115[1]), true);
				func_1625();
				task_aim_gun_at_entity(0, Global_35, 100, 1, 0);
				task_combat_ped(0, Global_35, 50331648, 0);
				func_1626(&(Local_115[1]), -1082130432, -1082130432);
				force_ped_motion_state(&(Local_115[1]), 1063765679, false, 0, false);
				_0x2208438012482a1a(&(Local_115[1]), false, false);
				func_1629(6);
			}
			break;
		case 6:
			if (is_entity_dead(&(Local_115[1])))
			{
				if (_is_anim_scene_loaded(&(uLocal_67[2]), true, false))
				{
					if (_0x23e33cb9f4a3f547(&(uLocal_67[1]), "pbl_Tilly_Gagged_Callover_FWD"))
					{
						_set_anim_scene_playback_list_bool(&(uLocal_67[1]), "pbl_Tilly_Gagged_Callover_FWD", false);
					}
					func_1629(7);
				}
			}
			break;
		case 7:
		case 8:
		case 9:
			if (_0xa24c1d341c6e0d53(1, 0, 0))
			{
				func_1629(14);
			}
			if (iVar325 == 7)
			{
				if (_0x8d81e7824b7753f7(&(uLocal_67[1]), "s_tilly_Struggle_idle_loop", 1) || func_836(Global_35, &(Local_193[0]), 0, 1) < 4.1f)
				{
					set_anim_scene_entity(&(uLocal_67[2]), "ARTHUR", Global_35, 0);
					set_anim_scene_entity(&(uLocal_67[2]), "TILLY", &(Local_193[0]), 0);
					start_anim_scene(&(uLocal_67[2]));
					_0xdf7b5144e25cd3fe(&(uLocal_67[2]), "PL_CUT_LEFT");
					_0xdf7b5144e25cd3fe(&(uLocal_67[2]), "PL_CUT_RIGHT");
					_0xdf7b5144e25cd3fe(&(uLocal_67[2]), "PL_FIDGET");
					_0xdf7b5144e25cd3fe(&(uLocal_67[2]), "PL_LOOK_FIDGET");
					func_1629(8);
				}
			}
			if (iVar325 == 8)
			{
				if (!func_1198(Global_35, Local_31.f_2, 1))
				{
					if (_0x23e33cb9f4a3f547(&(uLocal_67[2]), "PL_FIDGET"))
					{
						_set_anim_scene_playback_list_bool(&(uLocal_67[2]), "PL_FIDGET", true);
						_0xdf7b5144e25cd3fe(&(uLocal_67[2]), "PL_LOOK_FIDGET");
						func_1629(9);
					}
				}
			}
			if (iVar325 == 9)
			{
				if (func_1198(Global_35, Local_31.f_2, 1))
				{
					if (_0x23e33cb9f4a3f547(&(uLocal_67[2]), "PL_LOOK_FIDGET"))
					{
						_set_anim_scene_playback_list_bool(&(uLocal_67[2]), "PL_LOOK_FIDGET", true);
						_0xdf7b5144e25cd3fe(&(uLocal_67[2]), "PL_FIDGET");
						func_1629(8);
					}
				}
			}
			if (func_10(iVar312))
			{
				if (func_1631(iVar312, 1))
				{
					func_11(&iLocal_315, 1, 1);
					vLocal_316 = { 1117.51f, -1299.62f, 65.38f };
					vLocal_319 = { 1118.03f, -1298.05f, 65.38f };
					if (func_1617(&(Local_115[1]), vLocal_316, 0) > 0.5f && func_1617(&(Local_115[1]), vLocal_319, 0) > 0.5f)
					{
						if (func_1617(Global_35, vLocal_316, 1) < func_1617(Global_35, vLocal_319, 1))
						{
							if (func_1617(Global_35, vLocal_316, 0) < 0.5f)
							{
								func_1629(13);
							}
							else
							{
								set_player_control(player_id(), false, 256, false);
								task_follow_nav_mesh_to_coord(Global_35, vLocal_316, 1f, 20000, 0.25f, 0, 40000f);
								_0xe296208c273bd7f0(-1, -1, 0, 17, 1, 0);
								func_1629(10);
							}
						}
						else if (func_1617(Global_35, vLocal_319, 0) < 0.5f)
						{
							func_1629(12);
						}
						else
						{
							set_player_control(player_id(), false, 256, false);
							task_follow_nav_mesh_to_coord(Global_35, vLocal_319, 1f, 20000, 0.25f, 0, 40000f);
							_0xe296208c273bd7f0(-1, -1, 0, 17, 1, 0);
							func_1629(11);
						}
					}
					else if (func_1617(&(Local_115[1]), vLocal_316, 0) < func_1617(&(Local_115[1]), vLocal_319, 0))
					{
						if (func_1617(Global_35, vLocal_319, 0) < 0.5f)
						{
							func_1629(12);
						}
						else
						{
							set_player_control(player_id(), false, 256, false);
							task_follow_nav_mesh_to_coord(Global_35, vLocal_319, 1f, 20000, 0.25f, 0, 40000f);
							_0xe296208c273bd7f0(-1, -1, 0, 17, 1, 0);
							func_1629(11);
						}
					}
					else if (func_1617(Global_35, vLocal_316, 0) < 0.5f)
					{
						func_1629(13);
					}
					else
					{
						set_player_control(player_id(), false, 256, false);
						task_follow_nav_mesh_to_coord(Global_35, vLocal_316, 1f, 20000, 0.25f, 0, 40000f);
						_0xe296208c273bd7f0(-1, -1, 0, 17, 1, 0);
						func_1629(10);
					}
				}
			}
			break;
		case 10:
			if (func_1617(Global_35, vLocal_316, 0) < 0.5f)
			{
				func_1629(13);
			}
			if (get_script_task_status(Global_35, 713668775, true) == 8)
			{
				func_1629(13);
			}
			break;
		case 11:
			if (func_1617(Global_35, vLocal_319, 0) < 0.5f)
			{
				func_1629(12);
			}
			if (get_script_task_status(Global_35, 713668775, true) == 8)
			{
				func_1629(12);
			}
			break;
		case 12:
			_set_anim_scene_playback_list_bool(&(uLocal_67[2]), "PL_CUT_LEFT", true);
			_0xe296208c273bd7f0(-1, -1, 0, 17, 1, 0);
			func_1629(15);
			break;
		case 13:
			_set_anim_scene_playback_list_bool(&(uLocal_67[2]), "PL_CUT_RIGHT", true);
			_0xe296208c273bd7f0(-1, -1, 0, 17, 1, 0);
			func_1629(15);
			break;
		case 14:
			if (is_entity_in_volume(Global_35, Local_31.f_22, true, 0) && func_1631(iVar312, 1))
			{
				func_1211(uParam0, "2-RightApproach-MultiStart");
				func_1204(uParam0, "2-RightApproach-MultiStart");
				func_1629(16);
			}
			if (is_entity_in_volume(Global_35, Local_31.f_21, true, 0) && func_1631(iVar312, 1))
			{
				func_1204(uParam0, "1-LeftApproach-MultiStart");
				func_1211(uParam0, "1-LeftApproach-MultiStart");
				func_1629(16);
			}
			if (!_0xa24c1d341c6e0d53(1, 0, 0))
			{
				func_1211(uParam0, "3-NormalStart");
				func_1204(uParam0, "3-NormalStart");
				func_1629(7);
			}
			break;
		case 15:
			if (_does_anim_scene_exist(&(uLocal_67[2])) && _get_anim_scene_progress(&(uLocal_67[2])) > 0.98f)
			{
				func_1629(16);
			}
			break;
	}
	if ((((func_836(Global_35, &(Local_193[0]), 1, 1) < 2.5f && func_1632(&(Local_115[1]), 0)) && func_1632(&(Local_115[2]), 0)) && func_1015(Global_35, 0, 1, 0) != -618550132) && does_entity_exist(&(Local_193[0])))
	{
		_hide_ped_weapons(Global_35, 2, true);
	}
	if (((func_836(Global_35, &(Local_193[0]), 1, 1) < 2.5f && func_1632(&(Local_115[1]), 0)) && func_1632(&(Local_115[2]), 0)) && does_entity_exist(&(Local_193[0])))
	{
		set_current_ped_weapon(Global_35, -618550132, false, 0, false, false);
		disable_control_action(0, -1404316431, false);
	}
	if (func_1178(Global_35, Local_31.f_2, 1, 0))
	{
		set_ped_reset_flag(Global_35, 129, true);
	}
}

void func_1174(var uParam0)
{
	set_ped_max_move_blend_ratio(&(Local_193[1]), 1.5f);
	set_ped_reset_flag(&(Local_193[1]), 296, true);
	if (!is_entity_dead(&(Local_115[0])))
	{
		if (((iVar328 != 16 && iVar328 != 17) && iVar328 != 14) && iVar328 != 15)
		{
			if (((((func_1633(&(Local_115[0]), 1, 1, 1, 0, 0) || is_ped_shooting(Global_35)) || _0x29fce825613fefca(&(Local_115[0]), 1000)) || has_entity_been_damaged_by_entity(&(Local_115[0]), Global_35, 1, 1)) || is_ped_in_melee_combat(Global_35)) || func_1251(Global_35, 1114.38f, -1306.8f, 65.46f, 2f, 1, 1))
			{
				if (func_836(Global_35, &(Local_115[0]), 1, 1) < 15f)
				{
					func_47(0, 0);
					if (func_1236(uParam0, "SUS1_S2_BANT2", 0))
					{
						func_1634(17);
						clear_ped_tasks(&(Local_115[0]), 1, 0);
						func_1625();
						task_set_blocking_of_non_temporary_events(0, false);
						task_combat_hated_targets(0, -1f);
						func_1626(&(Local_115[0]), -1082130432, -1082130432);
						if (!_0x9fa00e2fc134a9d0(&(Local_115[0])))
						{
							Local_115[0]->f_2 = _blip_add_for_entity(831283580, &(Local_115[0]));
						}
						if (_does_volume_exist(iLocal_114))
						{
							_delete_volume(iLocal_114);
						}
						_0xcb9401f918cb0f75(Global_35, "ForceHandsOnBelt", 0, -1);
						func_1635(14);
						if (func_1227(&(Local_115[0]), Global_35))
						{
							func_794(&uLocal_78, 256);
						}
					}
				}
			}
		}
		switch (iVar327)
		{
			case 0:
				if (!is_entity_dead(&(Local_193[1])) && !is_entity_dead(&(Local_115[0])))
				{
					set_anim_scene_entity(&(uLocal_67[6]), "G_M_M_UNIAFRICANAMERICANGANG_01", &(Local_115[0]), 0);
					start_anim_scene(&(uLocal_67[6]));
					_0xdf7b5144e25cd3fe(&(uLocal_67[6]), "pbl_Guard_Seated");
					_0xdf7b5144e25cd3fe(&(uLocal_67[6]), "pbl_Guard_Walk");
					vVar0 = { 1.5f, 5f, 0f };
					if (func_1617(&(Local_115[0]), get_offset_from_entity_in_world_coords(iLocal_227, -2f, 0f, 0f), 1) < func_1617(&(Local_115[0]), get_offset_from_entity_in_world_coords(iLocal_227, 2f, 0f, 0f), 1))
					{
						vLocal_338 = { get_offset_from_entity_in_world_coords(iLocal_227, vVar0) };
						fLocal_341 = func_1636(get_entity_coords(&(Local_115[0]), true, false), vLocal_338);
					}
					else
					{
						vLocal_338 = { get_offset_from_entity_in_world_coords(iLocal_227, 2f, 2f, 0f) };
						fLocal_341 = func_1636(get_entity_coords(&(Local_115[0]), true, false), vLocal_338);
					}
					vLocal_335 = { _get_object_offset_from_coords(get_entity_coords(&(Local_115[0]), true, false), fVar338, -3.5f, 4.3f, 0f) - Vector(1f, 0f, 0f) };
					vLocal_332 = { _get_object_offset_from_coords(get_entity_coords(&(Local_115[0]), true, false), fVar338, -3f, 4f, 0f) - Vector(1f, 0f, 0f) };
					vLocal_332.f_2 = 65.55f;
					vLocal_335.f_2 = 65.55f;
					task_look_at_entity(&(Local_115[0]), &(Local_193[1]), -1, 0, 51, 0);
					if (!_does_volume_exist(iLocal_114) && does_entity_exist(&(Local_115[0])))
					{
						iLocal_114 = _0x0eb78c2b156635b1(665633627, get_entity_coords(&(Local_115[0]), true, false), 0f, 0f, 0f, 0.5f, 0.5f, 2f);
					}
					if (_does_volume_exist(iLocal_114))
					{
						_0x7c00cfc48a782dc0(iLocal_114, &(Local_115[0]), 0f, 0f, -0.1f, 0f, 0f, 0f, 2, 1);
					}
					func_1634(1);
				}
				break;
			case 1:
				if ((_is_anim_scene_loaded(&(uLocal_67[6]), true, false) && _0x23e33cb9f4a3f547(&(uLocal_67[6]), "pbl_Guard_Seated")) && _0x23e33cb9f4a3f547(&(uLocal_67[6]), "pbl_Guard_Walk"))
				{
					func_1634(2);
				}
				break;
			case 2:
				if ((is_entity_in_volume(Global_35, Local_31.f_8, true, 0) && !is_entity_in_volume(Global_35, Local_31.f_9, true, 0)) || iVar328 == 11)
				{
					if (func_1637(uLocal_67[6], "pbl_Guard_React_Left"))
					{
						func_1634(3);
						func_1180(2);
					}
				}
				break;
			case 3:
				if (_0xf94692eb9dc15d74(&(uLocal_67[6]), 0))
				{
					func_1634(4);
				}
				break;
			case 4:
				func_1625();
				task_follow_nav_mesh_to_coord(0, vLocal_332, 1f, 20000, 0.25f, 0, (fVar338 - 33f));
				task_look_at_entity(0, &(Local_193[1]), -1, 0, 51, 0);
				func_1626(&(Local_115[0]), -1082130432, -1082130432);
				func_1634(5);
				break;
			case 5:
				if (get_script_task_status(&(Local_115[0]), 242628503, true) == 8 || func_836(&(Local_115[0]), &(Local_193[1]), 0, 1) < 2f)
				{
					func_1634(6);
				}
				break;
		}
	}
	else if (does_entity_exist(&(Local_115[0])))
	{
		if (_get_anim_scene_time(&(uLocal_67[5])) >= 5.9f)
		{
			if (_does_volume_exist(iLocal_114))
			{
				_delete_volume(iLocal_114);
			}
		}
		if (func_1227(&(Local_115[0]), Global_35) || !_is_anim_scene_started(&(uLocal_67[5]), false))
		{
			if (iVar328 != 16 && iVar328 != 17)
			{
				func_1635(16);
			}
			if (_does_volume_exist(iLocal_114))
			{
				_delete_volume(iLocal_114);
			}
			if (_0x4912dfe492db98cd(&(Local_193[1]), "IsSeductive"))
			{
				_0xcb9401f918cb0f75(&(Local_193[1]), "IsSeductive", 0, -1);
			}
			_0xcb9401f918cb0f75(Global_35, "ForceHandsOnBelt", 0, -1);
			if (func_1227(&(Local_115[0]), Global_35))
			{
				func_794(&uLocal_78, 256);
			}
		}
	}
	if (!is_entity_dead(&(Local_193[1])))
	{
		switch (iVar328)
		{
			case 8:
				if (func_1197(1))
				{
					if (_is_anim_scene_loaded(&(uLocal_67[4]), true, false))
					{
						set_anim_scene_entity(&(uLocal_67[4]), "CS_SusanGrimwshaw", &(Local_193[1]), 0);
						set_anim_scene_entity(&(uLocal_67[4]), "G_M_M_UNIAFRICANAMERICANGANG_01", &(Local_115[0]), 0);
						set_anim_scene_entity(&(uLocal_67[4]), "WAGON", iLocal_227, 0);
						set_anim_scene_entity(&(uLocal_67[4]), "ARTHUR", Global_35, 0);
						func_1635(9);
					}
				}
				break;
			case 9:
				if (func_1637(uLocal_67[4], "pbl_Action_A"))
				{
					if (func_1195(uLocal_77, 8192))
					{
						func_1625();
						start_anim_scene(&(uLocal_67[4]));
						func_1626(&(Local_193[1]), -1082130432, -1082130432);
						if (!does_entity_exist(iLocal_110))
						{
							iLocal_110 = create_object(624070311, get_entity_coords(&(Local_193[1]), true, false) - Vector(15f, 0f, 0f), true, true, false, false, true);
						}
						attach_anim_scene_to_entity(&(uLocal_67[4]), iLocal_227, get_entity_bone_index_by_name(iLocal_227, "chassis_dummy"));
						func_1635(10);
					}
				}
				break;
			case 10:
				if (!func_1229())
				{
					if (func_1236(uParam0, "SUS1_SEDUCEGRD", 0))
					{
						func_1635(11);
					}
				}
				break;
			case 11:
				if (!is_ped_in_any_vehicle(&(Local_193[1]), true))
				{
					if (!func_386(vLocal_335))
					{
						task_follow_nav_mesh_to_coord(&(Local_193[1]), vLocal_335, 1f, -1, 0.25f, 0, (fVar338 - 80f));
						if (!_0x4912dfe492db98cd(&(Local_193[1]), "IsSeductive"))
						{
							_0xcb9401f918cb0f75(&(Local_193[1]), "IsSeductive", 1, -1);
						}
						func_1635(12);
					}
					else
					{
						vVar3 = { 1.5f, 5f, 0f };
						if (func_1617(&(Local_115[0]), get_offset_from_entity_in_world_coords(iLocal_227, -2f, 0f, 0f), 1) < func_1617(&(Local_115[0]), get_offset_from_entity_in_world_coords(iLocal_227, 2f, 0f, 0f), 1))
						{
							vLocal_338 = { get_offset_from_entity_in_world_coords(iLocal_227, vVar3) };
							fLocal_341 = func_1636(get_entity_coords(&(Local_115[0]), true, false), vLocal_338);
						}
						else
						{
							vLocal_338 = { get_offset_from_entity_in_world_coords(iLocal_227, 2f, 2f, 0f) };
							fLocal_341 = func_1636(get_entity_coords(&(Local_115[0]), true, false), vLocal_338);
						}
						vLocal_335 = { _get_object_offset_from_coords(get_entity_coords(&(Local_115[0]), true, false), fVar338, -3.5f, 4.3f, 0f) - Vector(1f, 0f, 0f) };
						vLocal_332 = { _get_object_offset_from_coords(get_entity_coords(&(Local_115[0]), true, false), fVar338, -3f, 4f, 0f) - Vector(1f, 0f, 0f) };
						vLocal_332.f_2 = 65.55f;
						vLocal_335.f_2 = 65.55f;
					}
				}
				break;
			case 12:
				if (func_1617(&(Local_193[1]), vLocal_335, 0) < 0.8f)
				{
					if (((_is_anim_scene_loaded(&(uLocal_67[5]), true, false) && !func_1229()) && func_1195(uLocal_78, 64)) || (_0xd89504d9d7d5057d("SUS1_GETLOST") && func_1638("SUS1_GETLOST")))
					{
						if (func_1637(uLocal_67[5], "pbl_Action"))
						{
							set_anim_scene_entity(&(uLocal_67[5]), "p_knife02x", iLocal_110, 1);
							set_anim_scene_entity(&(uLocal_67[5]), "G_M_M_UNIAFRICANAMERICANGANG_01", &(Local_115[0]), 0);
							set_anim_scene_entity(&(uLocal_67[5]), "susan", &(Local_193[1]), 0);
							vLocal_332 = { get_entity_coords(&(Local_115[0]), true, false) };
							set_anim_scene_origin(&(uLocal_67[5]), vLocal_332, get_entity_rotation(&(Local_115[0]), 2) - Vector(-38f, 0f, 0f), 2);
							if (!func_1618())
							{
								start_anim_scene(&(uLocal_67[5]));
								func_1635(13);
							}
						}
					}
				}
				break;
			case 13:
				if (_0x005e6f28dd7ed58d(&(uLocal_67[5]), "susan"))
				{
					func_1635(16);
				}
				if (_0x005e6f28dd7ed58d(&(uLocal_67[5]), "G_M_M_UNIAFRICANAMERICANGANG_01"))
				{
					if (get_entity_health(&(Local_115[0])) != 0)
					{
						_set_entity_health(&(Local_115[0]), 0, 0);
					}
				}
				break;
			case 14:
				if (_does_anim_scene_exist(&(uLocal_67[5])))
				{
					if (_is_anim_scene_started(&(uLocal_67[5]), false))
					{
						_delete_anim_scene(&(uLocal_67[5]));
					}
				}
				if (_does_anim_scene_exist(&(uLocal_67[6])))
				{
					if (_is_anim_scene_started(&(uLocal_67[6]), false))
					{
						_delete_anim_scene(&(uLocal_67[6]));
					}
				}
				if (!_is_anim_scene_started(&(uLocal_67[4]), false))
				{
					func_1212(&(Local_193[1]), 379542007, 30, 1, 0, 1056964608, 1065353216, 0);
					set_current_ped_weapon(&(Local_193[1]), 379542007, false, 0, false, false);
					if (does_entity_exist(iLocal_110))
					{
						delete_object(&iLocal_110);
					}
					_0xfc3db99c8144cd81(&(Local_193[1]), Local_31.f_20, 0, 0, 0);
					task_combat_ped(&(Local_193[1]), &(Local_115[0]), 0, 0);
					func_1635(15);
				}
				break;
			case 16:
				set_ped_config_flag(&(Local_193[1]), 248, true);
				if (!_is_anim_scene_started(&(uLocal_67[4]), false) && !_is_anim_scene_started(&(uLocal_67[5]), false))
				{
					if (is_ped_on_mount(&(Local_193[1])))
					{
						task_dismount_animal(&(Local_193[1]), 0, 0, 0, 0, 0);
					}
					func_1212(&(Local_193[1]), 379542007, 30, 0, 0, 1056964608, 1065353216, 0);
					set_current_ped_weapon(&(Local_193[1]), 379542007, false, 0, false, false);
					iVar6 = add_cover_point(1115.12f, -1305.28f, 65.6f, 6f, 1, 2, 4, false);
					_0xcb9401f918cb0f75(Global_35, "ForceHandsOnBelt", 0, -1);
					if (!func_1237(&(Local_193[1]), 242628503))
					{
						func_1625();
						task_go_to_entity(0, &(Local_115[0]), -1, 1.5f, 2f, 2f, 0);
						task_loot_entity(0, &(Local_115[0]));
						task_swap_weapon(0, 1, 0, 0, 0);
						task_put_ped_directly_into_cover(0, 1112.286f, -1301.43f, 66.3034f, -1, 0, 0f, 0, 0, iVar6, 0, 0, 0);
						func_1626(&(Local_193[1]), -1082130432, -1082130432);
					}
					func_1635(17);
				}
				break;
		}
	}
}

void func_1175(var uParam0)
{
	func_1639(19, 1);
	if (func_897(get_player_index(), 1, 0, 1))
	{
		func_1182(uParam0, "MISSION_WANTED", -1082130432, 0, 0, -1, -1, 0);
		clear_gps_custom_route();
		set_gps_active(false);
		if (does_blip_exist(iLocal_62))
		{
			remove_blip(&iLocal_62);
		}
		if (_0x9fa00e2fc134a9d0(iLocal_227))
		{
			func_1183(iLocal_227);
		}
	}
	else if (!is_ped_in_vehicle(Global_35, iLocal_227, false) && !func_897(get_player_index(), 1, 0, 1))
	{
		func_1182(uParam0, "SUS1_S1_OBJ1", -1082130432, 0, 0, -1, -1, 0);
		if (!does_blip_exist(iLocal_63))
		{
			iLocal_63 = _blip_add_for_entity(631964804, iLocal_227);
			_blip_set_modifier(iLocal_63, -401963276);
		}
		if (does_blip_exist(iLocal_62))
		{
			remove_blip(&iLocal_62);
		}
	}
	else
	{
		func_1182(uParam0, "SUS1_S1_OBJ2", -1082130432, 0, 0, -1, -1, 0);
		if (!does_blip_exist(iLocal_62))
		{
			iLocal_62 = func_1167(-308585968, Local_31, 1);
			_start_gps_custom_route_from_waypoint_recording_route("susan_1_gps_route", 0, 513, 76603059, false, true);
			set_gps_custom_route_render(true, 3, 30);
			set_gps_active(true);
		}
		if (_0x9fa00e2fc134a9d0(iLocal_227))
		{
			func_1183(iLocal_227);
		}
	}
	if (!is_ped_in_vehicle(Global_35, iLocal_227, false))
	{
		set_gps_active(false);
		clear_gps_custom_route();
		clear_gps_multi_route();
	}
}

int func_1176(var uParam0)
{
	return uParam0->f_598;
}

void func_1177(bool bParam0, vector3 vParam1, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12)
{
	if (bParam4)
	{
	}
	if (is_entity_dead(bParam0))
	{
		return;
	}
	if (!is_ped_human(bParam0))
	{
		return;
	}
	if (func_1640(vParam1, 0f, 0f, 0f))
	{
		return;
	}
	if (((bParam5 < 0f || bParam6 < 0f) || bParam7 < 0f) || bParam8 < 0f)
	{
		return;
	}
	if (((((!bParam5 > bParam6 || !bParam5 > bParam7) || !bParam5 > bParam8) || !bParam6 > bParam7) || !bParam6 > bParam8) || !bParam7 > bParam8)
	{
		return;
	}
	iVar0 = get_mount(bParam0);
	if (is_ped_in_any_vehicle(bParam0, false))
	{
		iVar1 = get_vehicle_ped_is_in(bParam0, false);
	}
	bVar3 = func_1617(bParam0, vParam1, 1);
	if ((bVar3 <= bParam5 && bVar3 > bParam6) && bVar3 > bParam7)
	{
		if (does_entity_exist(iVar0) && !is_entity_dead(iVar0))
		{
			set_ped_max_move_blend_ratio(iVar0, 1.75f);
		}
		if ((func_1641() && !is_entity_dead(iVar1)) && _is_draft_vehicle(iVar1))
		{
			iVar4 = 0;
			while (iVar4 < 6)
			{
				iVar2 = _get_ped_in_draft_seat(iVar1, iVar4);
				if (!is_entity_dead(iVar2))
				{
					set_ped_max_move_blend_ratio(iVar2, 1.75f);
					_0x0c3f0f7f92ca847c(iVar1, _0x46bf2a810679d6e6(iVar2, 1.75f));
				}
				iVar4++;
			}
		}
	}
	if (bVar3 <= bParam6 && bVar3 > bParam7)
	{
		if (bParam11)
		{
			set_ped_max_move_blend_ratio(bParam0, 1.5f);
		}
		if (does_entity_exist(iVar0) && !is_entity_dead(iVar0))
		{
			set_ped_max_move_blend_ratio(iVar0, 1.25f);
		}
		if (!is_entity_dead(iVar1) && _is_draft_vehicle(iVar1))
		{
			iVar4 = 0;
			while (iVar4 < 6)
			{
				iVar2 = _get_ped_in_draft_seat(iVar1, iVar4);
				if (!is_entity_dead(iVar2))
				{
					set_ped_max_move_blend_ratio(iVar2, 1.25f);
					_0x0c3f0f7f92ca847c(iVar1, _0x46bf2a810679d6e6(iVar2, 1.25f));
				}
				iVar4++;
			}
		}
	}
	if (bVar3 <= bParam7)
	{
		if (bParam11)
		{
			set_ped_max_move_blend_ratio(bParam0, 1f);
		}
		if (does_entity_exist(iVar0) && !is_entity_dead(iVar0))
		{
			set_ped_max_move_blend_ratio(iVar0, 1f);
			if (bParam9 == 1)
			{
				if (_0x33fa048675821da7(iVar0, 3))
				{
					_0x06d26a96ca1bca75(iVar0, 3, 0f, 0);
				}
			}
		}
		if (!is_entity_dead(iVar1) && _is_draft_vehicle(iVar1))
		{
			iVar4 = 0;
			while (iVar4 < 6)
			{
				iVar2 = _get_ped_in_draft_seat(iVar1, iVar4);
				if (!is_entity_dead(iVar2))
				{
					set_ped_max_move_blend_ratio(iVar2, 1f);
					if (bParam9 == 1)
					{
						if (does_entity_exist(iVar0) && !is_entity_dead(iVar0))
						{
							if (_0x33fa048675821da7(iVar0, 3))
							{
								_0x06d26a96ca1bca75(iVar2, 3, 0f, 0);
							}
						}
					}
					_0x0c3f0f7f92ca847c(iVar1, _0x46bf2a810679d6e6(iVar2, 1f));
				}
				iVar4++;
			}
		}
	}
	if (bParam4)
	{
		if (bVar3 <= bParam8)
		{
			if (bParam0 == Global_35)
			{
				set_player_may_not_enter_any_vehicle(player_id());
				_0x9f9a829c6751f3c7(player_id(), 28, 1);
			}
			if (!is_entity_dead(iVar0) && !func_1642(bParam0, 501393341))
			{
				task_dismount_animal(bParam0, iParam12, 0, 0, 0, 0);
			}
			if (!is_entity_dead(iVar1) && !func_1642(bParam0, -828834893))
			{
				task_leave_any_vehicle(bParam0, 0, iParam12);
			}
		}
	}
}

bool func_1178(int iParam0, int iParam1, bool bParam2, int iParam3)
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

bool func_1179()
{
	if (!_does_volume_exist(iVar340))
	{
		iLocal_342 = _create_volume_box(0f, 0f, 0f, 0f, 0f, 0f, 1.5f, 2f, 2f);
		_0x7c00cfc48a782dc0(iVar340, iLocal_227, 1.75f, 1.5f, 0f, 0f, 0f, 0f, 2, 1);
	}
	if (_0x40f769d31a00d5a0(iVar340, Local_31.f_3) || _0x40f769d31a00d5a0(iVar340, Local_31.f_19))
	{
		return true;
	}
	return false;
}

void func_1180(int iParam0)
{
	set_bit(&uLocal_324, iParam0);
}

void func_1181(int iParam0)
{
	func_904(iParam0, 8, 1);
}

void func_1182(var uParam0, char* sParam1, float fParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6, int iParam7)
{
	sVar0 = func_1410(iParam7, sParam1, sParam3, sParam4, sParam5, sParam6);
	if (get_hash_key(sParam1) != uParam0->f_5302)
	{
		_uilog_set_cached_objective(sVar0);
		uParam0->f_5302 = get_hash_key(sParam1);
		_uilog_add_or_update_objective(1, func_85(uParam0), get_hash_key(sParam1), sParam1, fParam2 >= 0.9f, false, false);
	}
	func_140(uParam0, func_33(uParam0), 33554432);
}

void func_1183(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	iVar0 = get_blip_from_entity(iParam0);
	func_435(&iVar0);
}

void func_1184()
{
	_0x2b4ce170de09f346(&(Local_193[1]), -203846402);
	_0x0d7fd6a55fd63aef(8, 3, 0);
	_0x0d7fd6a55fd63aef(26, 3, 0);
	_0x0d7fd6a55fd63aef(19, 3, 0);
	_0x0d7fd6a55fd63aef(12, 3, 0);
	_0x0d7fd6a55fd63aef(21, 3, 0);
}

void func_1185()
{
	func_435(&iLocal_62);
	func_1643(&Local_115, 0);
	func_1643(&Local_193, 0);
	func_1644(&uLocal_77, 1);
	func_1644(&uLocal_77, 2);
	func_1644(&uLocal_77, 4);
}

void func_1186(var uParam0, int iParam1)
{
	uParam0->f_1[func_132(iParam1)]->f_12 = 1;
}

void func_1187(var uParam0, int iParam1, int iParam2, int iParam3)
{
	iVar0 = func_132(iParam2);
	if (!func_1385(iVar0))
	{
		return;
	}
	iVar1 = func_1386(iParam3);
	if (!func_1387(iVar1))
	{
		return;
	}
	(*uParam0->f_1[iVar0])[iVar1] = *iParam1;
	set_bit(&(uParam0->f_1[iVar0]->f_17), iVar1);
}

void func_1188(var uParam0, int iParam1, char[16] cParam2)
{
	uParam0->f_1[func_132(iParam1)]->f_13 = { cParam2 };
}

void func_1189(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_1[func_132(iParam1)]->f_21 = iParam2;
}

void func_1190(var uParam0)
{
	if (_does_anim_scene_exist(&(uLocal_67[0])))
	{
		func_1645(&(uLocal_67[0]));
	}
	if (does_entity_exist(iLocal_105))
	{
		delete_object(&iLocal_105);
	}
	if (func_251(15))
	{
		func_166(uParam0, 15, iVar281, 0, 0, 1, 0);
	}
}

void func_1191(int iParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4, float fParam5, int iParam6, bool bParam7)
{
	func_916(iParam0, 0, 0);
	if (func_917(iParam0))
	{
		door_system_set_open_ratio(iParam0, fParam2, iParam6);
		if (fParam5 > 0f)
		{
			door_system_set_automatic_rate(iParam0, fParam5);
		}
		if (bParam3)
		{
			func_1646(iParam0, fParam2, 1, iParam6);
		}
		else if (bParam1)
		{
			if (bParam4)
			{
				func_1647(iParam0, 1);
			}
			else
			{
				func_1648(iParam0, 1);
			}
		}
		else
		{
			func_1649(iParam0, 1);
		}
		if (bParam7)
		{
			_0x276aaf0f1c7f2494(iParam0, 1);
		}
	}
	else if (func_1650())
	{
	}
	else if (network_is_in_session())
	{
	}
}

void func_1192(var uParam0)
{
	if (!is_entity_dead(&(Local_115[0])) && _0x9fa00e2fc134a9d0(&(Local_193[1])))
	{
		func_1181(19);
		func_1182(uParam0, "SUS1_S1_OBJ3", -1082130432, 0, 0, -1, -1, 0);
	}
	else if (!is_entity_dead(&(Local_115[0])) && !_0x9fa00e2fc134a9d0(&(Local_193[1])))
	{
		func_1181(19);
		func_1182(uParam0, "SUS1_S1_OBJ3", -1082130432, 0, 0, -1, -1, 0);
	}
	if (is_entity_dead(&(Local_115[0])))
	{
		if (func_1612(uParam0) < 4)
		{
			func_135(uParam0, 4);
		}
	}
	if (!func_1195(uLocal_77, 8192))
	{
		if (!func_1229())
		{
			if (func_1236(uParam0, "SUS1_GRDQUEST", 0))
			{
				func_794(&uLocal_77, 8192);
			}
		}
	}
	if (!func_1195(uLocal_78, 512))
	{
		if (iVar328 == 12)
		{
			if (!func_1195(uLocal_78, 256))
			{
				if (!func_1229())
				{
					if (!is_entity_dead(&(Local_115[0])))
					{
						func_794(&uLocal_78, 512);
					}
				}
			}
		}
	}
	if (!func_1195(uLocal_78, 32))
	{
		if (func_1651())
		{
			func_794(&uLocal_78, 32);
		}
	}
	if (func_1195(uLocal_78, 32) && !func_1195(uLocal_78, 64))
	{
		if (!func_1618())
		{
			if (!bVar324)
			{
				if (func_1236(uParam0, "SUS1_GETLOST", 0))
				{
					func_794(&uLocal_78, 64);
				}
			}
			else
			{
				func_794(&uLocal_78, 64);
			}
		}
	}
	if (!func_1195(uLocal_78, 128))
	{
		if (is_entity_dead(&(Local_115[0])))
		{
			if (func_1229())
			{
				func_47(0, 0);
			}
			if (!func_1229())
			{
				if ((func_1195(uLocal_78, 256) && func_1236(uParam0, "SUS1_S2_OBJ3_B", 0)) || (!func_1195(uLocal_78, 256) && func_1236(uParam0, "SUS1_S2_OBJ3", 0)))
				{
					func_1182(uParam0, "SUS1_S2_OBJ1", -1082130432, 0, 0, -1, -1, 0);
					if (does_blip_exist(iLocal_62))
					{
						remove_blip(&iLocal_62);
					}
					if (!does_blip_exist(iLocal_64) && func_1652(19))
					{
						iLocal_64 = _0xa6ef0c54a3443e70(1247852480, Local_31.f_4);
						_blip_set_modifier(iLocal_64, 231194138);
						func_432(19);
					}
					func_794(&uLocal_78, 8);
					func_794(&uLocal_78, 128);
					func_856();
				}
			}
		}
	}
	if (!func_1195(uLocal_78, 4))
	{
		if (_0xef2d9ed7ce684f08(&(Local_115[0])) == &Local_193[1])
		{
			func_794(&uLocal_78, 2048);
		}
		if (func_1195(uLocal_78, 2048))
		{
			if (func_1653(uParam0, &uLocal_260, 4f, "SUS1_S2_SUSLOOT"))
			{
				func_794(&uLocal_78, 4);
			}
		}
	}
	if (func_1195(uLocal_78, 4) || (func_1654(&(Local_115[0])) && !func_1618()))
	{
		if (func_836(Global_35, &(Local_193[1]), 1, 1) < 25f)
		{
			func_1653(uParam0, &uLocal_260, 14f, "SUS1_S2_OBT_DWD");
		}
	}
}

void func_1193(var uParam0)
{
	func_1620(uParam0, 1);
	func_1621(uParam0);
	uParam0->f_607 = uParam0->f_607;
}

void func_1194(var uParam0, bool bParam1)
{
	set_all_random_peds_flee_this_frame(player_id());
	if (!func_1195(uLocal_77, 1024))
	{
		if (func_353(func_1655(35)) == 1)
		{
			func_1656(func_1655(35), 0);
		}
		if ((((((is_ped_shooting(Global_35) || is_ped_shooting(&(Local_115[0]))) || is_ped_shooting(&(Local_193[1]))) || func_26(&uLocal_343)) || is_entity_in_volume(Global_35, Local_31.f_3, true, 0)) || bParam1) || func_1657(1485561723))
		{
			if (!func_26(&uLocal_343))
			{
				func_27(&uLocal_343, 1);
			}
			else if (func_846(&uLocal_343) > 0f || bParam1)
			{
				func_794(&uLocal_77, 1024);
				func_1656(func_1655(35), 1);
				if (!is_entity_dead(&(Local_115[2])))
				{
					set_ped_target_loss_response(&(Local_115[2]), 1);
					_0x802092b07e3b1eea(&(Local_115[2]), get_entity_coords(Global_35, true, false), 3);
					task_combat_ped(&(Local_115[2]), Global_35, 0, 0);
					set_ped_sphere_defensive_area(&(Local_115[2]), 1108.93f, -1299.69f, 65.41f, 1f, 1, false, 0);
					if (func_846(&uLocal_343) > 0.5f)
					{
						clear_ped_tasks(&(Local_115[2]), 1, 0);
					}
				}
			}
			if (!func_1195(uLocal_77, 262144))
			{
				func_1236(uParam0, "SUS1_G2_SHOCK", 0);
				func_27(&uLocal_346, 0);
				func_794(&uLocal_77, 262144);
			}
		}
	}
	if ((func_1195(uLocal_77, 262144) && func_1658(&uLocal_346) > 7.5f) && !func_1618())
	{
		func_1236(uParam0, "SUS1_G2_ANGER", 0);
		func_213(&uLocal_346);
	}
}

bool func_1195(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_1196(bool bParam0, vector3 vParam1, float fParam4, float fParam5, bool bParam6, bool bParam7, bool bParam8, float fParam9, bool bParam10, int iParam11, bool bParam12, bool bParam13, bool bParam14)
{
	func_1177(bParam0, vParam1, 0, fParam5, bParam6, bParam7, bParam8, bParam12, bParam13, bParam14, 0);
	iVar1 = get_mount(bParam0);
	if (is_ped_in_any_vehicle(bParam0, false))
	{
		iVar2 = get_vehicle_ped_is_in(bParam0, false);
	}
	bVar4 = func_1617(bParam0, vParam1, 1);
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
		func_517(fParam4);
	}
	if (func_26(fParam4))
	{
		if (bParam14)
		{
			set_ped_max_move_blend_ratio(bParam0, 1f);
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
		if (func_846(fParam4) >= fParam9)
		{
			if (bParam0 == Global_35)
			{
				set_player_may_not_enter_any_vehicle(player_id());
				_0x9f9a829c6751f3c7(player_id(), 28, 1);
			}
			if (!is_entity_dead(iVar1) && !func_1642(bParam0, 501393341))
			{
				if (is_ped_on_mount(bParam0))
				{
					task_dismount_animal(bParam0, 0, 0, 0, 0, 0);
					return true;
				}
			}
			if (!is_entity_dead(iVar2) && !func_1642(bParam0, -828834893))
			{
				if (is_ped_in_any_vehicle(bParam0, false))
				{
					task_leave_any_vehicle(bParam0, 0, 0);
					return true;
				}
			}
		}
		if (bParam0 == Global_35 && iParam11 == 0)
		{
			if (get_is_task_active(bParam0, 8))
			{
				clear_ped_tasks(bParam0, 1, 0);
			}
			set_ped_reset_flag(bParam0, 175, true);
		}
	}
	return false;
}

bool func_1197(int iParam0)
{
	return is_bit_set(iVar321, iParam0);
}

bool func_1198(int iParam0, int iParam1, bool bParam2)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (!bParam2 && is_entity_dead(iParam0))
	{
		return false;
	}
	if (is_entity_in_volume(iParam0, iParam1, true, 0))
	{
		return true;
	}
	return false;
}

void func_1199(int iParam0, struct<4> Param1, int iParam5, float fParam6)
{
	func_837(iParam0, Param1, Param1.f_3, iParam5, fParam6);
}

void func_1200(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7)
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

void func_1201(float fParam0, float fParam1, bool bParam2)
{
	if (bParam2 || !func_26(fParam0))
	{
		func_467(fParam0, fParam1);
	}
}

void func_1202(int iParam0, bool bParam1)
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

void func_1203(var uParam0, char[4] cParam1)
{
	func_1659(&(uParam0->f_7375), cParam1, func_162(uParam0, func_33(uParam0)) != 5);
}

void func_1204(var uParam0, char[4] cParam1)
{
	func_1660(&(uParam0->f_7375), cParam1);
	func_372(uParam0, 33554432);
}

void func_1205(var uParam0)
{
	switch (func_1612(uParam0))
	{
		case 0:
			if (func_1613(&uLocal_236, 1f))
			{
				if (!does_blip_exist(iLocal_64))
				{
					iLocal_64 = _0xa6ef0c54a3443e70(1247852480, Local_31.f_4);
					func_1182(uParam0, "SUS1_S3_OBJ1", -1082130432, 0, 0, -1, -1, 0);
					remove_blip(&uLocal_65);
				}
				func_517(&uLocal_236);
				func_135(uParam0, 1);
			}
			break;
		case 1:
			if (func_1198(Global_35, Local_31.f_3, 1))
			{
				if (!func_1195(uLocal_78, 2))
				{
					if (!func_1618() && func_1236(uParam0, "SUS1_S3_OBJ1", 0))
					{
						func_794(&uLocal_78, 2);
					}
				}
			}
			if (is_entity_dead(&(Local_115[2])) && !func_1195(uLocal_78, 1))
			{
				if (!func_1195(uLocal_78, 65536))
				{
					func_1236(uParam0, "SUS1_G3_SHOCK", 0);
					func_794(&uLocal_78, 65536);
				}
				if (!func_1618() && !func_1195(uLocal_78, 1048576))
				{
					func_1236(uParam0, "SUS1_IG2", 0);
					func_794(&uLocal_78, 1048576);
				}
				if ((!func_1618() && !func_1195(uLocal_78, 131072)) && func_1195(uLocal_78, 1048576))
				{
					func_1236(uParam0, "SUS1_S4_BANT1", 0);
					func_794(&uLocal_78, 131072);
				}
				if (((!func_1614("SUS1_G3_SHOCK") && !func_1614("SUS1_S4_BANT1")) && !func_1614("SUS1_IG2")) && !func_1195(uLocal_78, 262144))
				{
					func_1236(uParam0, "SUS1_G3_ANGER", 0);
					func_794(&uLocal_78, 262144);
					func_794(&uLocal_78, 1);
				}
			}
			if (!func_1195(uLocal_78, 1024))
			{
				if (!is_entity_dead(&(Local_115[1])))
				{
					if (iVar325 == 4 || iVar325 == 5)
					{
						if (func_1236(uParam0, "SUS1_S4_AR_ENTR", 0))
						{
							func_1661("SUS1_G3_SHOCK", 0, 0);
							func_1661("SUS1_S4_BANT1", 0, 0);
							func_1661("SUS1_G3_ANGER", 0, 0);
							func_1661("SUS1_IG2", 0, 0);
							func_794(&uLocal_78, 1024);
							func_794(&uLocal_78, 1);
						}
					}
				}
			}
			if (!func_26(&uLocal_245))
			{
				func_27(&uLocal_245, 1);
			}
			else if (func_846(&uLocal_245) > 15f)
			{
				if (!func_1229())
				{
					if (func_1236(uParam0, "SUS1_SUS_YELL_T", 0))
					{
						func_467(&uLocal_245, get_random_float_in_range(2f, 5f));
					}
				}
			}
			if (get_interior_from_entity(Global_35) == 0)
			{
				if (func_836(Global_35, &(Local_193[1]), 1, 1) < 25f)
				{
					if (!func_1229())
					{
						func_1653(uParam0, &uLocal_260, 1f, "SUS1_S2_OBT_DWD");
					}
				}
			}
			if (func_1176(uParam0) == 2)
			{
				iLocal_62 = _blip_add_for_entity(422991367, &(Local_193[0]));
				set_blip_name_from_text_file(iLocal_62, "COMP_TILLY");
				_blip_set_modifier(iLocal_62, -981020806);
				func_1661("SUS1_SUS_YELL_T", 1, 0);
				func_1182(uParam0, "SUS1_S3_OBJ3", -1082130432, 0, 0, -1, -1, 0);
				func_135(uParam0, 51);
			}
			break;
	}
}

void func_1206(var uParam0)
{
	func_1662(uParam0, _0xf70f00013a62f866(Local_31.f_3), "SUS1_WARN_LEFT", "SUS1_FAIL_LEFT", 20f, 40f, 0, 0, 0, 1, 1);
	func_1620(uParam0, 1);
	func_1621(uParam0);
	uParam0->f_607 = uParam0->f_607;
}

void func_1207()
{
	func_794(&uLocal_77, 8);
	if (!func_1195(uLocal_77, 16))
	{
		if (!func_907(&(Local_115[1]), 2) && func_1198(Global_35, Local_31.f_2, 1))
		{
			func_794(&uLocal_77, 16);
		}
	}
}

void func_1208()
{
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (!is_entity_dead(&(Local_115[iVar0])))
		{
			switch (Local_115[iVar0]->f_3)
			{
				case 0:
					if (iVar0 == 0)
					{
						func_1663(&(Local_115[iVar0]), func_176(2, 3), 2f, 1, 0);
						func_1202(&(Local_115[0]), 0);
						func_213(&(Local_115[iVar0]->f_4));
						func_1627(Local_115[iVar0], 6);
					}
					if (iVar0 == 1)
					{
						_0xfc3db99c8144cd81(&(Local_115[iVar0]), Local_31.f_2, 0, 0, 0);
						func_1239(&(Local_115[iVar0]), 0);
						func_213(&(Local_115[iVar0]->f_4));
						func_1627(Local_115[iVar0], 1);
					}
					if (iVar0 == 2)
					{
						func_1663(&(Local_115[iVar0]), 1111.15f, -1300.98f, 65.41f, 5f, 1, 0);
						func_1202(&(Local_115[iVar0]), 1);
						func_213(&(Local_115[iVar0]->f_4));
						if (func_353(func_1655(35)) == 1)
						{
							func_1627(Local_115[iVar0], 6);
						}
						else
						{
							func_1627(Local_115[iVar0], 1);
						}
					}
					break;
				case 1:
					if (iVar0 == 2)
					{
						if (func_1198(Global_35, Local_31.f_3, 1))
						{
							func_213(&(Local_115[iVar0]->f_4));
							func_1627(Local_115[iVar0], 6);
						}
					}
					if (func_1658(&(Local_115[iVar0]->f_4)) < 2f)
					{
					}
					else
					{
						if (iVar0 == 1)
						{
							if (func_1198(Global_35, Local_31.f_2, 1) || func_1630(1151226872) < -0.5f)
							{
								func_213(&(Local_115[iVar0]->f_4));
								func_1202(&(Local_115[iVar0]), 1);
								func_1627(Local_115[iVar0], 6);
							}
						}
						Jump @597; //curOff = 414
						if (iVar0 == 0)
						{
							func_1625();
							task_combat_hated_targets_around_ped(0, 200f, 0, 0);
							func_1626(&(Local_115[iVar0]), -1082130432, -1082130432);
						}
						if (iVar0 == 2)
						{
							func_1625();
							task_aim_at_entity(0, Global_35, 2000, 0, 0);
							task_combat_hated_targets_around_ped(0, 200f, 0, 0);
							func_1626(&(Local_115[iVar0]), -1082130432, -1082130432);
						}
						if (!does_blip_exist(Local_115[iVar0]->f_2))
						{
							Local_115[iVar0]->f_2 = _blip_add_for_entity(831283580, &(Local_115[iVar0]));
							_blip_set_modifier(Local_115[iVar0]->f_2, -1034486097);
						}
						func_213(&(Local_115[iVar0]->f_4));
						func_1627(Local_115[iVar0], 7);
						Jump @612; //curOff = 597
						func_435(&(Local_115[iVar0]->f_2));
					}
					iVar0++;
					default:
						break;
			}
		}
	}
}

int func_1209()
{
	if (!bVar327)
	{
		if (((func_907(&(Local_193[0]), 0) && func_836(Global_35, &(Local_193[0]), 0, 1) < 2f) && is_entity_dead(&(Local_115[1]))) && is_entity_dead(&(Local_115[2])))
		{
			func_1664();
			iLocal_329 = 1;
		}
	}
	return 0;
}

int func_1210()
{
	return uVar326;
}

void func_1211(var uParam0, char[4] cParam1)
{
	func_1665(&(uParam0->f_7375), cParam1);
}

int func_1212(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	bVar0 = func_1666(iParam3, 1);
	bVar1 = func_1666(iParam3, 2);
	bVar2 = !func_1666(iParam3, 4);
	bVar3 = func_1666(iParam3, 8);
	bVar4 = !func_1666(iParam3, 16);
	bVar5 = func_1666(iParam3, 32);
	bVar6 = func_1666(iParam3, 64);
	return func_1667(iParam0, iParam1, bVar0, bVar1, iParam4, bVar2, bVar3, iParam5, iParam6, iParam2, bVar4, bVar5, bParam7, bVar6);
}

void func_1213(int iParam0, int iParam1)
{
	if (does_entity_exist(iParam0))
	{
		if (decor_exist_on(iParam0, "honor_block"))
		{
			iVar0 = decor_get_int(iParam0, "honor_block");
		}
		iVar0 = (iVar0 || func_536(iParam1));
		decor_set_int(iParam0, "honor_block", iVar0);
	}
}

Vector3 func_1214(int iParam0, int iParam1)
{
	return func_1668(iParam0, iParam1);
}

float func_1215(int iParam0, int iParam1)
{
	return func_1669(iParam0, iParam1);
}

int func_1216(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
{
	iVar0 = create_ped(iParam0, vParam1, fParam4, bParam5, bParam6, bParam13, bParam14);
	if (!does_entity_exist(iVar0))
	{
		return 0;
	}
	func_1670(iVar0, iParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

void func_1217(int iParam0)
{
	_0x51345ae20f22c261(player_id(), to_float(iParam0 * 14), 0, 0, 0);
}

void func_1218(var uParam0)
{
	StringCopy(&cVar0, "SUS1_WAIT", 24);
	iVar3 = func_1671();
	switch (func_1612(uParam0))
	{
		case 0:
			if (func_1613(&uLocal_236, 1.5f))
			{
				if (func_1672(&(uParam0->f_5310), cVar0, 0, -1, 0, 0))
				{
					iLocal_285 = func_1226(0);
					func_517(&uLocal_236);
					func_135(uParam0, 1);
					func_1182(uParam0, "SUS1_S5_OBJ1", -1082130432, 0, 0, -1, -1, 0);
				}
			}
			break;
		case 1:
			if (!func_1229())
			{
				func_517(&uLocal_236);
				func_135(uParam0, 2);
			}
			break;
		case 2:
			if (!func_206())
			{
				if (func_1236(uParam0, "SUS1_S5_OBJ1", 0))
				{
					func_135(uParam0, 3);
				}
			}
			break;
		case 3:
			if (!is_entity_dead(&(Local_193[1])))
			{
				if (func_836(Global_35, &(Local_193[1]), 1, 1) > 15f)
				{
					if (!func_206() && !func_1229())
					{
						func_1182(uParam0, "SUS1_S5_OBJ2", -1082130432, 0, 0, -1, -1, 0);
						func_1628(uParam0, &(Local_193[1]), 1105014447, 422991367, 1, 1);
						func_135(uParam0, 5);
					}
				}
			}
			if (is_ped_on_mount(Global_35) && is_ped_on_mount(&(Local_193[1])))
			{
				if (get_mount(Global_35) == get_mount(&(Local_193[1])))
				{
					if (!func_26(&uLocal_263))
					{
						vLocal_275 = { get_entity_coords(Global_35, true, false) };
						func_1201(&uLocal_263, 3f, 1);
					}
					else if (func_1617(Global_35, vLocal_275, 1) < 10f)
					{
						if ((func_846(&uLocal_263) % 100f) > 8f)
						{
							if (!func_1229())
							{
								if (func_1236(uParam0, "SUS1_S5_HORSTOP", 0))
								{
									func_1201(&uLocal_263, 100f, 1);
									vLocal_275 = { get_entity_coords(Global_35, true, false) };
								}
							}
						}
					}
					else
					{
						func_1201(&uLocal_263, 100f, 1);
						vLocal_275 = { get_entity_coords(Global_35, true, false) };
					}
				}
			}
			if (func_1612(uParam0) != 5)
			{
				if (func_26(&uLocal_236))
				{
					if (is_ped_shooting(Global_35))
					{
						uLocal_273 = Global_35;
					}
					if (is_ped_shooting(&(Local_193[1])))
					{
						uLocal_273 = &Local_193[1];
					}
					if (func_1226(0) != iVar282)
					{
						iLocal_285 = func_1226(0);
						uLocal_272 = uVar270;
						func_135(uParam0, 4);
					}
					else if (!func_206() && !func_1229())
					{
						if (is_entity_in_volume(&(Local_193[1]), Local_31.f_14, true, 0))
						{
							if (!func_1197(3))
							{
								if (func_1236(uParam0, "SUS1_S5_TREES", 0))
								{
									func_1180(3);
									func_1201(&uLocal_236, get_random_float_in_range(0f, 4f), 1);
								}
							}
						}
						if (is_entity_in_volume(&(Local_193[1]), Local_31.f_15, true, 0))
						{
							if (!func_1197(4))
							{
								if (func_1236(uParam0, "SUS1_S5_HILL", 0))
								{
									func_1180(4);
									func_1201(&uLocal_236, get_random_float_in_range(0f, 4f), 1);
								}
							}
						}
						if (is_entity_in_volume(&(Local_193[1]), Local_31.f_16, true, 0))
						{
							if (!func_1197(5))
							{
								if (func_1236(uParam0, "SUS1_S5_SHORE", 0))
								{
									func_1180(5);
									func_1201(&uLocal_236, get_random_float_in_range(0f, 4f), 1);
								}
							}
						}
						if (func_1673() > 40f)
						{
							if (func_846(&uLocal_236) >= 15f)
							{
								if (func_1236(uParam0, "SUS1_S5_OBJ2", 0))
								{
									func_1201(&uLocal_236, get_random_float_in_range(0f, 1f), 1);
								}
							}
						}
						else if (func_846(&uLocal_236) >= 5f)
						{
							if (iVar271 < 2)
							{
								if (func_1236(uParam0, "SUS1_S5_SUSYELL", 0))
								{
									func_1201(&uLocal_236, get_random_float_in_range(0f, 1f), 1);
									iLocal_274 = get_random_int_in_range(0, 6);
								}
							}
							else if (iVar271 < 4)
							{
								if (func_1236(uParam0, "SUS1_S5_URGE", 0))
								{
									func_1201(&uLocal_236, get_random_float_in_range(0f, 1f), 1);
									iLocal_274 = get_random_int_in_range(0, 6);
								}
							}
							else if (iVar271 >= 4)
							{
								if (!is_entity_dead(&(Local_115[3])))
								{
									func_851(uParam0);
									if (func_1236(uParam0, "SUS1_GANGYELL1", 0))
									{
										func_1201(&uLocal_236, get_random_float_in_range(0f, 1f), 1);
										iLocal_274 = get_random_int_in_range(0, 6);
									}
								}
								else if (!is_entity_dead(&(Local_115[4])))
								{
									if (func_1236(uParam0, "SUS1_GANGYELL2", 0))
									{
										func_1201(&uLocal_236, get_random_float_in_range(0f, 1f), 1);
										iLocal_274 = get_random_int_in_range(0, 6);
									}
								}
							}
						}
					}
				}
				else if (!func_206())
				{
					func_27(&uLocal_236, 1);
				}
			}
			break;
		case 4:
			if (!func_1229())
			{
				if (func_1226(0) != 1)
				{
					if (!func_1229())
					{
						if (is_entity_dead(&(Local_115[3])) || is_entity_dead(&(Local_115[4])))
						{
							if (((iVar269 == Global_35 && iVar3 == &Local_115[3]) && func_836(Global_35, &(Local_115[3]), 1, 1) > 20f) || ((iVar269 == Global_35 && iVar3 == &Local_115[4]) && func_836(Global_35, &(Local_115[4]), 1, 1) > 20f))
							{
								func_1236(uParam0, "SUS1_S5_GOODSHT", 0);
								func_1182(uParam0, "SUS1_S5_OBJ1", -1082130432, 0, 0, -1, -1, 0);
								func_135(uParam0, 3);
								func_27(&uLocal_236, 1);
							}
							else if (((iVar269 == Global_35 && iVar3 == &Local_115[3]) && func_836(Global_35, &(Local_115[3]), 1, 1) < 20f) || ((iVar269 == Global_35 && iVar3 == &Local_115[4]) && func_836(Global_35, &(Local_115[4]), 1, 1) < 20f))
							{
								func_1236(uParam0, "SUS1_S5_OBJ2c", 0);
								func_1182(uParam0, "SUS1_S5_OBJ1", -1082130432, 0, 0, -1, -1, 0);
								func_135(uParam0, 3);
								func_27(&uLocal_236, 1);
							}
							else if (iVar269 != Global_35)
							{
								func_1236(uParam0, "SUS1_S5_OBJ2b", 0);
								func_1182(uParam0, "SUS1_S5_OBJ1", -1082130432, 0, 0, -1, -1, 0);
								func_135(uParam0, 3);
								func_27(&uLocal_236, 1);
							}
						}
					}
				}
				else
				{
					func_135(uParam0, 51);
				}
			}
			break;
		case 5:
			if (!is_entity_dead(&(Local_193[1])))
			{
				if (((is_ped_on_mount(&(Local_193[1])) && is_ped_on_mount(Global_35)) && func_836(Global_35, &(Local_193[1]), 1, 1) < 5f) || (!is_ped_on_mount(Global_35) && func_836(Global_35, &(Local_193[1]), 1, 1) < 5f))
				{
					_0xdd1232b332cbb9e7(3, 1, 0);
					func_1674(uParam0, &(Local_193[1]), 1);
					func_135(uParam0, 3);
				}
			}
			break;
	}
}

void func_1219(var uParam0)
{
	if (is_entity_dead(Local_115[6]->f_1) || is_ped_in_writhe(Local_115[6]->f_1))
	{
		func_1619(uParam0, "ALLY_DEAD_HORSE_PLAYER", "", 1, 0);
	}
	if (is_entity_dead(&(Local_115[5])))
	{
		func_1619(uParam0, "SUS1_FAIL_DEAD", "", 1, 0);
	}
	else
	{
		iVar2 = 3;
		while (iVar2 <= 5)
		{
			if (!is_entity_dead(&(Local_115[iVar2])))
			{
				fVar1 = func_836(Global_35, &(Local_115[iVar2]), 1, 1);
				if (fVar1 < fVar0 || fVar0 == 0f)
				{
					fVar0 = fVar1;
				}
			}
			iVar2++;
		}
		if (fVar0 > 225f)
		{
			func_1240(uParam0, "SUS1_WARN_GLOST_CATCH_UP", 0, 7500, 0, -1082130432, 0, 0, -1, -1, 0);
		}
		else
		{
			func_1182(uParam0, "SUS1_S5_OBJ1", -1082130432, 0, 0, -1, -1, 0);
		}
		if (fVar0 > 250f)
		{
			func_1619(uParam0, "SUS1_FAIL_GLOST", "", 1, 0);
		}
		if (fVar0 > 100f)
		{
			if (!func_1195(uLocal_77, 1048576))
			{
				func_680("SUS1_R_HELP", 10000, 0, 0, 0, 1);
				func_794(&uLocal_77, 1048576);
			}
		}
	}
	iVar3 = func_1671();
	if ((&Local_115[4] == iVar3 && !func_1632(&(Local_115[3]), 0)) && !func_1237(&(Local_115[3]), 518218985))
	{
		clear_ped_tasks(&(Local_115[3]), 1, 0);
		set_ped_to_ragdoll(Local_115[3]->f_1, 5, 10, 0, false, false, false);
		func_1675(&(Local_115[3]), 0, 0);
	}
	if (_is_ped_lassoed(&(Local_115[5])))
	{
		clear_ped_tasks(&(Local_115[3]), 1, 0);
		clear_ped_tasks(&(Local_115[4]), 1, 0);
		if (!func_1237(&(Local_115[4]), 518218985))
		{
			task_smart_flee_ped(&(Local_115[3]), Global_35, -1f, -1, 0, 3f, 0);
			task_smart_flee_ped(&(Local_115[4]), Global_35, -1f, -1, 0, 3f, 0);
		}
		if (!func_26(&uLocal_266))
		{
			func_213(&uLocal_266);
		}
	}
	if (func_846(&uLocal_266) >= 5f)
	{
		func_1619(uParam0, "SUS1_FAIL_GLOST", "", 1, 0);
	}
	func_1620(uParam0, 1);
	func_1621(uParam0);
	uParam0->f_607 = uParam0->f_607;
}

void func_1220()
{
	if (!is_entity_dead(&(Local_115[5])))
	{
		switch (Local_115[5]->f_3)
		{
			case 0:
				_0x18ff3110cf47115d(&(Local_115[5]), 1, 0);
				func_213(&(Local_115[5]->f_4));
				func_1627(Local_115[5], 2);
				break;
			case 2:
				if (func_1658(&(Local_115[5]->f_4)) >= 0.5f)
				{
					func_1625();
					task_follow_waypoint_recording(0, "susan_1_horse_chase", 30, 4196366, -1, 0, 0, -1);
					func_1626(&(Local_115[5]), -1082130432, -1082130432);
					func_213(&(Local_115[5]->f_4));
					func_1627(Local_115[5], 3);
				}
				break;
			case 3:
				if (is_waypoint_playback_going_on_for_ped(&(Local_115[5]), 0))
				{
					waypoint_recording_get_num_points("susan_1_horse_chase", &iVar0);
					waypoint_recording_get_coord("susan_1_horse_chase", (iVar0 - 1), &vVar1);
					if (func_1617(&(Local_115[5]), vVar1, 1) < 10f)
					{
						task_smart_flee_ped(&(Local_115[5]), Global_35, 500f, -1, 0, 2.5f, 0);
						force_ped_motion_state(Local_115[5]->f_1, -530524, false, 0, false);
						func_27(&uLocal_352, 0);
					}
				}
				else if (func_1248(&(Local_115[5])))
				{
					if (func_26(&uLocal_352) && func_846(&uLocal_352) < 2f)
					{
						if (!is_entity_dead(Local_115[5]->f_1))
						{
							force_ped_motion_state(Local_115[5]->f_1, -530524, false, 0, false);
						}
					}
				}
				break;
		}
	}
}

void func_1221()
{
	iVar0 = func_1671();
	if ((!func_1632(&(Local_115[3]), 0) && !does_blip_exist(Local_115[3]->f_2)) && &Local_115[3] == iVar0)
	{
		func_1183(&(Local_115[4]));
		Local_115[3]->f_2 = _blip_add_for_entity(831283580, &(Local_115[3]));
		_blip_set_modifier(Local_115[3]->f_2, 231194138);
	}
	if ((!func_1632(&(Local_115[4]), 0) && !does_blip_exist(Local_115[4]->f_2)) && &Local_115[4] == iVar0)
	{
		func_1183(&(Local_115[3]));
		Local_115[4]->f_2 = _blip_add_for_entity(831283580, &(Local_115[4]));
		_blip_set_modifier(Local_115[4]->f_2, 231194138);
	}
	if ((!func_1632(&(Local_115[4]), 0) && !does_blip_exist(Local_115[4]->f_2)) && func_1632(&(Local_115[3]), 0))
	{
		func_1183(&(Local_115[3]));
		Local_115[4]->f_2 = _blip_add_for_entity(831283580, &(Local_115[4]));
		_blip_set_modifier(Local_115[4]->f_2, 231194138);
	}
	if ((!does_blip_exist(Local_115[5]->f_2) && is_entity_dead(&(Local_115[3]))) && is_entity_dead(&(Local_115[4])))
	{
		Local_115[5]->f_2 = _blip_add_for_entity(831283580, &(Local_115[5]));
		set_blip_sprite(Local_115[5]->f_2, -1489164512, true);
		_blip_set_modifier(Local_115[5]->f_2, 231194138);
	}
	iVar1 = 3;
	while (iVar1 <= 4)
	{
		if (!is_entity_dead(&(Local_115[iVar1])))
		{
			switch (Local_115[iVar1]->f_3)
			{
				case 0:
					func_213(&(Local_115[iVar1]->f_4));
					_0xae6004120c18df97(Local_115[iVar1]->f_1, 0, 0);
					func_1627(Local_115[iVar1], 2);
					break;
				case 2:
					if (func_1658(&(Local_115[iVar1]->f_4)) >= 0f)
					{
						func_1625();
						task_follow_waypoint_recording(0, "susan_1_horse_chase", 0, 4212750, -1, 0, 0, -1);
						task_follow_to_offset_of_entity(0, &(Local_115[5]), 0f, IntToFloat((-5 + (-5 * iVar1))), 0f, 2.5f, -1, 1036831949, 1, 1, 0, 0, 1);
						func_1626(&(Local_115[iVar1]), -1082130432, -1082130432);
						func_467(&(Local_115[iVar1]->f_4), 5f);
						force_ped_motion_state(Local_115[iVar1]->f_1, -1115154469, false, 0, false);
						func_1627(Local_115[iVar1], 3);
					}
					break;
				case 3:
					if (!func_1676(iVar1))
					{
						if (func_1658(&(Local_115[iVar1]->f_4)) >= 10f && func_832(&(Local_115[iVar1]), Global_35, 25f, 1))
						{
							func_213(&(Local_115[iVar1]->f_4));
							func_1627(Local_115[iVar1], 6);
						}
					}
					break;
				case 6:
					if (!func_1676(iVar1))
					{
						if (is_waypoint_playback_going_on_for_ped(&(Local_115[iVar1]), 0))
						{
							func_1212(&(Local_115[iVar1]), 379542007, 100, 5, 0, 1056964608, 1065353216, 0);
							waypoint_playback_start_shooting_at_entity(&(Local_115[iVar1]), Global_35, 0, -687903391, -1082130432);
							set_ped_accuracy(&(Local_115[iVar1]), 5);
							set_combat_float(&(Local_115[iVar1]), 6, 0.1f);
						}
						func_213(&(Local_115[iVar1]->f_4));
						func_1627(Local_115[iVar1], 7);
					}
					break;
				case 7:
					if (!func_1676(iVar1))
					{
						if (func_1658(&(Local_115[iVar1]->f_4)) >= 4f)
						{
							if (is_waypoint_playback_going_on_for_ped(&(Local_115[iVar1]), 0))
							{
								waypoint_playback_stop_aiming_or_shooting(&(Local_115[iVar1]));
							}
							func_467(&(Local_115[iVar1]->f_4), get_random_float_in_range(3f, 6f));
							func_1627(Local_115[iVar1], 3);
						}
					}
					break;
			}
			if (!is_ped_on_mount(&(Local_115[iVar1])))
			{
				_0xae6004120c18df97(Local_115[iVar1]->f_1, 0, 1);
				_set_entity_health(&(Local_115[iVar1]), 0, 0);
			}
		}
		else
		{
			if (func_1226(0) == 0)
			{
				if (!func_1195(Local_115[iVar1]->f_7, 1))
				{
					func_1677(1);
					if (!is_entity_dead(Local_115[iVar1]->f_1))
					{
						set_gameplay_entity_hint(Local_115[iVar1]->f_1, 0f, 0f, 0f, true, 2000, 2000, 2000, 0);
					}
					func_213(&(Local_115[iVar1]->f_4));
					func_794(&(Local_115[iVar1]->f_7), 1);
				}
				else if (!func_1195(Local_115[iVar1]->f_7, 2))
				{
					if (func_1658(&(Local_115[iVar1]->f_4)) >= 0.75f || (func_1678(&(Local_115[iVar1]), &(Local_115[5])) + 2f) > func_1678(Global_35, &(Local_115[5])))
					{
						func_1677(0);
						func_1679();
						func_794(&(Local_115[iVar1]->f_7), 2);
					}
				}
			}
			if (!is_entity_dead(Local_115[iVar1]->f_1))
			{
				task_smart_flee_ped(Local_115[iVar1]->f_1, Global_35, 150f, -1, 0, 3f, 0);
				_0xe8f1a5b4ced3725a(Local_115[iVar1]->f_1, get_offset_from_entity_in_world_coords(Local_115[iVar1]->f_1, 0f, 20f, 0f), -1082130432);
				set_ped_keep_task(Local_115[iVar1]->f_1, true);
				set_ped_as_no_longer_needed(&(Local_115[iVar1]->f_1));
				Local_115[iVar1]->f_1 = 0;
			}
			func_435(&(Local_115[iVar1]->f_2));
		}
		iVar1++;
	}
}

void func_1222()
{
	iVar0 = 3;
	while (iVar0 <= 5)
	{
		switch (iVar0)
		{
			case 3:
				fVar1 = func_836(&(Local_115[iVar0]), Global_35, 1, 1);
				if (get_ped_waypoint_progress(&(Local_115[iVar0])) <= 85)
				{
					waypoint_playback_override_speed(&(Local_115[iVar0]), 2.5f, 0, -1082130432, 0);
				}
				if (get_ped_waypoint_progress(&(Local_115[iVar0])) >= 85)
				{
					if (fVar1 > 45f)
					{
						waypoint_playback_override_speed(&(Local_115[iVar0]), 1.5f, 0, -1082130432, 0);
					}
					else if (fVar1 > 35f)
					{
						waypoint_playback_override_speed(&(Local_115[iVar0]), 1.501f, 0, -1082130432, 0);
					}
					else if (fVar1 > 27f)
					{
						waypoint_playback_override_speed(&(Local_115[iVar0]), 1.75f, 0, -1082130432, 0);
					}
					else if (fVar1 > 20f)
					{
						waypoint_playback_override_speed(&(Local_115[iVar0]), 2f, 0, -1082130432, 0);
					}
					else if (fVar1 > 14f)
					{
						waypoint_playback_override_speed(&(Local_115[iVar0]), 2f, 0, -1082130432, 0);
					}
					else if (fVar1 > 0f)
					{
						waypoint_playback_override_speed(&(Local_115[iVar0]), 2f, 0, -1082130432, 0);
						set_ped_max_move_blend_ratio(Local_115[6]->f_1, 2.5f);
					}
				}
				if (!func_1680(&(Local_115[iVar0]), Local_115[iVar0]->f_1, 0))
				{
					func_1675(&(Local_115[iVar0]), 0, 0);
				}
				break;
			case 4:
				fVar2 = func_836(&(Local_115[iVar0]), Global_35, 1, 1);
				if (get_ped_waypoint_progress(&(Local_115[iVar0])) <= 135)
				{
					waypoint_playback_override_speed(&(Local_115[iVar0]), 3f, 0, -1082130432, 0);
				}
				else
				{
					if (is_entity_dead(&(Local_115[3])))
					{
						fVar3 = 1f;
					}
					else
					{
						fVar3 = 3f;
					}
					if (!is_entity_dead(&(Local_115[3])) && fVar2 > 235f)
					{
						waypoint_playback_override_speed(&(Local_115[iVar0]), 0.101f, 0, -1082130432, 0);
					}
					else if (fVar2 > (55f * fVar3))
					{
						waypoint_playback_override_speed(&(Local_115[iVar0]), 1.5f, 0, -1082130432, 0);
					}
					else if (fVar2 > (45f * fVar3))
					{
						waypoint_playback_override_speed(&(Local_115[iVar0]), 1.501f, 0, -1082130432, 0);
					}
					else if (fVar2 > (30f * fVar3))
					{
						waypoint_playback_override_speed(&(Local_115[iVar0]), 1.75f, 0, -1082130432, 0);
					}
					else if (fVar2 > (20f * fVar3))
					{
						waypoint_playback_override_speed(&(Local_115[iVar0]), 2.5f, 0, -1082130432, 0);
					}
					else if (fVar2 > (15f * fVar3))
					{
						waypoint_playback_override_speed(&(Local_115[iVar0]), 3f, 0, -1082130432, 0);
						set_ped_max_move_blend_ratio(Global_35, 3f);
					}
				}
				if (!func_1680(&(Local_115[iVar0]), Local_115[iVar0]->f_1, 0))
				{
					func_1675(&(Local_115[iVar0]), 0, 0);
				}
				break;
			case 5:
				fVar4 = func_836(&(Local_115[5]), Global_35, 1, 1);
				fVar5 = func_836(&(Local_115[5]), &(Local_115[4]), 1, 1);
				if (get_ped_waypoint_progress(&(Local_115[5])) <= 150)
				{
					waypoint_playback_override_speed(&(Local_115[iVar0]), 3f, 0, -1082130432, 0);
				}
				else if (!is_entity_dead(&(Local_115[4])))
				{
					if (fVar5 > 100f)
					{
						waypoint_playback_override_speed(&(Local_115[iVar0]), 0.101f, 0, -1082130432, 0);
					}
					else if (fVar5 > 60f)
					{
						waypoint_playback_override_speed(&(Local_115[iVar0]), 1.5f, 0, -1082130432, 0);
					}
					else if (fVar5 > 50f)
					{
						waypoint_playback_override_speed(&(Local_115[iVar0]), 1.501f, 0, -1082130432, 0);
					}
					else if (fVar5 > 35f)
					{
						waypoint_playback_override_speed(&(Local_115[iVar0]), 2f, 0, -1082130432, 0);
					}
					else if (fVar5 > 25f)
					{
						waypoint_playback_override_speed(&(Local_115[iVar0]), 2.5f, 0, -1082130432, 0);
					}
					else if (fVar5 > 10f)
					{
						waypoint_playback_override_speed(&(Local_115[iVar0]), 3f, 0, -1082130432, 0);
					}
				}
				else if (get_ped_waypoint_progress(&(Local_115[5])) <= 549)
				{
					if (fVar4 > 60f)
					{
						waypoint_playback_override_speed(&(Local_115[iVar0]), 1.5f, 0, -1082130432, 0);
					}
					else if (fVar4 > 50f)
					{
						waypoint_playback_override_speed(&(Local_115[iVar0]), 1.501f, 0, -1082130432, 0);
					}
					else if (fVar4 > 30f)
					{
						waypoint_playback_override_speed(&(Local_115[iVar0]), 2.001f, 0, -1082130432, 0);
					}
					else if (fVar4 > 10f)
					{
						waypoint_playback_override_speed(&(Local_115[iVar0]), 2.5f, 0, -1082130432, 0);
					}
					else if (fVar4 > 5f)
					{
						waypoint_playback_override_speed(&(Local_115[iVar0]), 2.5f, 0, -1082130432, 0);
					}
				}
				else if (get_ped_waypoint_progress(&(Local_115[5])) >= 550)
				{
					if (fVar4 > 60f)
					{
						waypoint_playback_override_speed(&(Local_115[iVar0]), 1.5f, 0, -1082130432, 0);
					}
					else if (fVar4 > 50f)
					{
						waypoint_playback_override_speed(&(Local_115[iVar0]), 1.501f, 0, -1082130432, 0);
					}
					else if (fVar4 > 30f)
					{
						waypoint_playback_override_speed(&(Local_115[iVar0]), 2.001f, 0, -1082130432, 0);
					}
					else if (fVar4 > 10f)
					{
						waypoint_playback_override_speed(&(Local_115[iVar0]), 2.001f, 0, -1082130432, 0);
					}
					else if (fVar4 > 5f)
					{
						waypoint_playback_override_speed(&(Local_115[iVar0]), 2.001f, 0, -1082130432, 0);
					}
				}
				break;
		}
		iVar0++;
	}
}

void func_1223()
{
	if (!is_player_control_on(player_id()))
	{
		if (is_ped_on_mount(Global_35))
		{
			set_player_control(player_id(), true, 0, false);
		}
	}
}

void func_1224()
{
	if (!is_entity_dead(&(Local_193[1])))
	{
		if (is_ped_on_mount(&(Local_193[1])))
		{
			if (!func_26(&uLocal_355))
			{
				func_27(&uLocal_355, 1);
				_0x8b1e8e35a6e814ea(&(Local_193[1]), 1479995766, -1082130432);
			}
			else if (func_846(&uLocal_355) > 4f)
			{
				iVar0 = func_1671();
				if (!is_entity_dead(iVar0))
				{
					if (func_836(&(Local_193[1]), iVar0, 1, 1) < 15f && !func_1237(&(Local_193[1]), 167901368))
					{
						set_ped_ammo(&(Local_193[1]), 379542007, -1);
						task_shoot_at_entity(&(Local_193[1]), iVar0, -1, -687903391, 1);
						set_ped_accuracy(&(Local_193[1]), 100);
					}
					else if (func_836(&(Local_193[1]), iVar0, 1, 1) > 15f && !func_1237(&(Local_193[1]), 167901368))
					{
						task_shoot_at_entity(&(Local_193[1]), iVar0, -1, -687903391, 1);
						_0xa769d753922b031b(&(Local_193[1]), 1f, 1f);
						set_ped_accuracy(&(Local_193[1]), 0);
					}
				}
			}
		}
	}
	if (!has_ped_got_weapon(&(Local_193[1]), 379542007, 0, false))
	{
		_give_weapon_to_ped_2(&(Local_193[1]), 379542007, -1, true, true, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
	}
	if (!func_1681(Local_193[1], 379542007))
	{
		set_current_ped_weapon(&(Local_193[1]), 379542007, true, 0, false, false);
	}
	if (!is_ped_on_mount(Global_35) && is_ped_on_mount(&(Local_193[1])))
	{
		task_horse_action(Local_115[6]->f_1, 3, 0, 0);
	}
}

void func_1225()
{
	if (!is_ped_injured(&(Local_193[1])))
	{
		switch (Local_193[1]->f_3)
		{
			case 0:
				if (!has_ped_got_weapon(&(Local_193[1]), 379542007, 0, false))
				{
					func_1212(&(Local_193[1]), 379542007, 30, 5, 0, 1056964608, 1065353216, 0);
					set_current_ped_weapon(&(Local_193[1]), 379542007, false, 0, false, false);
				}
				else
				{
					set_current_ped_weapon(&(Local_193[1]), 379542007, false, 0, false, false);
					func_1682(128);
					func_1627(Local_193[1], 6);
				}
				break;
			case 6:
				if (is_ped_on_mount(&(Local_193[1])))
				{
					iVar1 = get_mount(&(Local_193[1]));
					_0x06d26a96ca1bca75(iVar1, 3, 0f, 0);
					if (!is_entity_dead(iVar1))
					{
						if (!is_ped_on_mount(Global_35))
						{
							if (func_836(Global_35, iVar1, 1, 1) > 15f)
							{
								if (get_script_task_status(iVar1, 1227113341, true) == 8 && !is_ped_on_mount(&(Local_193[1])))
								{
									task_go_to_entity(iVar1, Global_35, -1, 10f, 2f, 2f, 0);
								}
							}
						}
					}
				}
				if (!is_ped_on_mount(&(Local_193[1])))
				{
					func_1627(Local_193[1], 2);
				}
				else
				{
					iVar0 = 3;
					while (iVar0 <= 4)
					{
						if (!is_entity_dead(&(Local_115[iVar0])))
						{
							if (!func_26(&uLocal_287))
							{
								func_27(&uLocal_287, 0);
							}
							if (func_846(&uLocal_287) > 1.5f)
							{
							}
							if (func_836(&(Local_193[1]), &(Local_115[iVar0]), 1, 1) < 25f)
							{
								func_27(&(Local_193[1]->f_4), 1);
								Local_193[1]->f_8 = iVar0;
								func_1627(Local_193[1], 18);
							}
						}
						iVar0++;
					}
				}
				break;
			case 18:
				if (!is_ped_on_mount(&(Local_193[1])))
				{
					func_1627(Local_193[1], 2);
				}
				else if (!func_907(&(Local_115[Local_193[1]->f_8]), 0))
				{
					func_1627(Local_193[1], 6);
					clear_ped_tasks(&(Local_193[1]), 1, 0);
				}
				else if (func_846(&(Local_193[1]->f_4)) > 4f)
				{
					if (!is_entity_dead(&(Local_115[Local_193[1]->f_8])))
					{
						func_27(&(Local_193[1]->f_4), 1);
					}
				}
				break;
			case 2:
				if (get_script_task_status(&(Local_193[1]), 1868526510, true) == 8)
				{
					if (!is_ped_on_mount(&(Local_193[1])))
					{
						disable_control_action(0, 308778731, false);
						disable_control_action(0, 1002303471, false);
						disable_control_action(0, 1520437207, false);
						if (is_ped_on_mount(Global_35))
						{
							iVar2 = get_mount(Global_35);
							if (func_907(iVar2, 0))
							{
								task_mount_animal(&(Local_193[1]), iVar2, 20000, 0, 1073741824, 1, 0, 0);
							}
						}
						else
						{
							iVar2 = _get_last_mount(Global_35);
							if (func_907(iVar2, 0))
							{
								if (func_836(&(Local_193[1]), iVar2, 1, 1) < 25f)
								{
									task_mount_animal(&(Local_193[1]), iVar2, 20000, 0, 1073741824, 1, 0, 0);
								}
							}
						}
					}
					else
					{
						func_1627(Local_193[1], 6);
					}
				}
				break;
		}
	}
}

int func_1226(int iParam0)
{
	iVar0 = 3;
	while (iVar0 <= 5)
	{
		if (func_1683(iVar0))
		{
			if (func_907(&(Local_115[iVar0]), iParam0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return iVar1;
}

bool func_1227(int iParam0, int iParam1)
{
	if (does_entity_exist(iParam0))
	{
		if (is_entity_a_ped(iParam0))
		{
			if (is_entity_dead(iParam0))
			{
				if (get_ped_source_of_death(get_ped_index_from_entity_index(iParam0)) == iParam1)
				{
					return true;
				}
			}
		}
	}
	return false;
}

void func_1228(var uParam0, int iParam1)
{
	iVar0 = func_691(func_12(uParam0->f_607));
	if (func_692(iVar0))
	{
		func_1684(iVar0, iParam1);
	}
}

bool func_1229()
{
	return func_1685(1);
}

int func_1230(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
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

void func_1231(var uParam0)
{
	switch (func_1612(uParam0))
	{
		case 0:
			if (func_1613(&uLocal_236, 1f))
			{
				if (!func_1229())
				{
					if (func_1236(uParam0, "SUS1_S5_OBJ3", 0) || func_1658(&uLocal_236) >= 5f)
					{
						func_517(&uLocal_236);
						iLocal_274 = get_random_int_in_range(0, 2);
						waypoint_playback_override_speed(&(Local_115[5]), 2.3f, 0, -1082130432, 0);
						func_135(uParam0, 1);
						settimera(0);
					}
				}
			}
			break;
		case 1:
			if (timera() > 5000 && !func_1195(uLocal_77, 524288))
			{
				func_1240(uParam0, "SUS1_S6_OBJ1", 0, 7500, 0, -1082130432, 0, 0, -1, -1, 0);
				func_794(&uLocal_77, 524288);
			}
			if (!is_entity_dead(&(Local_115[5])))
			{
				if ((!func_26(&uLocal_269) && !func_1618()) && !func_1195(uLocal_78, 524288))
				{
					func_27(&uLocal_269, 0);
				}
				if ((!func_1195(uLocal_78, 524288) && !func_1618()) && func_1658(&uLocal_269) > 3f)
				{
					func_1236(uParam0, "SUS1_S5_DNTKILL", 0);
					func_794(&uLocal_78, 524288);
					func_213(&uLocal_236);
					func_517(&uLocal_269);
				}
				if (_is_ped_lassoed(&(Local_115[5])))
				{
					if (func_206())
					{
						_0xdd1232b332cbb9e7(3, 1, 0);
					}
					if (!func_1195(uLocal_78, 8192))
					{
						if (func_1236(uParam0, "SUS1_S6_OBJ1", 0))
						{
							func_794(&uLocal_78, 8192);
							func_1182(uParam0, "SUS1_S6_OBJ2", -1082130432, 0, 0, -1, -1, 0);
							func_1201(&uLocal_236, 0f, 1);
							func_27(&uLocal_242, 1);
							func_135(uParam0, 3);
						}
					}
					else
					{
						func_1182(uParam0, "SUS1_S6_OBJ2", -1082130432, 0, 0, -1, -1, 0);
						func_1201(&uLocal_236, 0f, 1);
						func_27(&uLocal_242, 1);
						func_135(uParam0, 3);
					}
				}
				else
				{
					if (!func_26(&uLocal_236))
					{
						func_1201(&uLocal_236, 4f, 1);
					}
					else if (func_846(&uLocal_236) > 7f)
					{
						if (!func_1229())
						{
							if (iVar271 == 0)
							{
								if (func_1236(uParam0, "SUS1_S5_LDRYELL", 0))
								{
									iLocal_274 = get_random_int_in_range(0, 2);
									func_1201(&uLocal_236, 0f, 1);
								}
							}
							else if (func_1236(uParam0, "SUS1_S5_LASDAWD", 0))
							{
								iLocal_274 = get_random_int_in_range(0, 2);
								func_1201(&uLocal_236, 0f, 1);
							}
						}
					}
					if (has_entity_been_damaged_by_entity(&(Local_115[5]), Global_35, 1, 1))
					{
						if ((_0x3ec28da1ffac9ddd(&(Local_115[5]), Global_35, 1, 1) && !_is_ped_hogtying(Global_35)) && !_is_ped_hogtied(&(Local_115[5])))
						{
							func_135(uParam0, 2);
						}
					}
				}
			}
			if ((((!is_ped_on_mount(Global_35) && !is_ped_on_mount(&(Local_115[5]))) && !_is_ped_lassoed(&(Local_115[5]))) && !func_1618()) && !func_26(&uLocal_239))
			{
				func_27(&uLocal_239, 0);
			}
			if ((!func_1195(uLocal_78, 32768) && !func_1618()) && func_1658(&uLocal_239) >= 2f)
			{
				func_1236(uParam0, "SUS1_S5_LASREM", 0);
				func_794(&uLocal_78, 32768);
			}
			break;
		case 2:
			if (!_is_ped_hogtying(Global_35) || !_is_ped_hogtied(&(Local_115[5])))
			{
				if (!func_1618() && func_1236(uParam0, "SUS1_S5_OBJ3b", 0))
				{
					func_1180(6);
					clear_entity_last_damage_entity(&(Local_115[5]));
					func_135(uParam0, 1);
				}
			}
			break;
		case 3:
			if (func_26(&uLocal_239))
			{
				func_517(&uLocal_239);
			}
			if (!func_26(&uLocal_242))
			{
				func_27(&uLocal_242, 0);
			}
			if ((func_846(&uLocal_242) > 5f && _is_ped_lassoed(&(Local_115[5]))) && !func_1618())
			{
				func_27(&uLocal_242, 1);
				func_1236(uParam0, "SUS1_S6_LASOO", 0);
			}
			if (func_26(&uLocal_236))
			{
				if (func_846(&uLocal_236) > 10f)
				{
					if ((_is_ped_lassoed(&(Local_115[5])) && !_is_ped_hogtied(&(Local_115[5]))) && _0x61914209c36efddb(&(Local_115[5])) != 1)
					{
						if (!func_1229())
						{
							if (func_1236(uParam0, "SUS1_S6_HOGDAWD", 0))
							{
								func_27(&uLocal_236, 1);
							}
						}
					}
				}
			}
			else if (_is_ped_lassoed(&(Local_115[5])) && !_is_ped_hogtied(&(Local_115[5])))
			{
				func_27(&uLocal_236, 1);
			}
			if ((((!_is_ped_lassoed(&(Local_115[5])) && !_is_ped_hogtied(&(Local_115[5]))) && _0x61914209c36efddb(&(Local_115[5])) == 0) && !is_ped_getting_up(&(Local_115[5]))) && get_entity_speed(&(Local_115[5])) > 1.5f)
			{
				if (func_26(&uLocal_236))
				{
					func_517(&uLocal_236);
				}
				if (!func_1618())
				{
					if (func_1236(uParam0, "SUS1_S6_ANTFREE", 0))
					{
						func_135(uParam0, 1);
					}
				}
			}
			break;
	}
}

void func_1232(var uParam0)
{
	if (is_entity_dead(&(Local_115[5])))
	{
		func_1619(uParam0, "SUS1_FAIL_DEAD", "", 1, 0);
	}
	else
	{
		fVar0 = func_836(Global_35, &(Local_115[5]), 1, 1);
		if (fVar0 > 200f)
		{
			func_1619(uParam0, "SUS1_FAIL_LOST", "", 1, 0);
		}
		if (fVar0 > 150f)
		{
			if (!func_1195(uLocal_77, 2097152))
			{
				func_680("SUS1_R_HELP", 10000, 0, 0, 0, 1);
				func_794(&uLocal_77, 2097152);
			}
		}
	}
	func_1620(uParam0, 0);
	if (func_1678(Global_35, &(Local_193[1])) > 35f && is_ped_on_mount(&(Local_115[5])))
	{
		func_1686(uParam0, &(Local_193[1]), "GRIMSHAW_RETURN", "GRIMSHAW_ABANDON", 40f, 70f, 0, 0, 1, 422991367, 1);
	}
	func_1621(uParam0);
	uParam0->f_607 = uParam0->f_607;
}

void func_1233()
{
	_0xc3abcfbc7d74afa5(Local_115[5]->f_1, 6, 1);
	if (func_1680(&(Local_115[5]), Local_115[5]->f_1, 0))
	{
		_0xae6004120c18df97(Local_115[5]->f_1, 0, 0);
	}
	else
	{
		_0xae6004120c18df97(Local_115[5]->f_1, 0, 1);
	}
	if (!is_entity_dead(&(Local_115[5])))
	{
		switch (Local_115[5]->f_3)
		{
			case 0:
				if (!does_blip_exist(Local_115[5]->f_2))
				{
					Local_115[5]->f_2 = _blip_add_for_entity(831283580, &(Local_115[5]));
					set_blip_sprite(Local_115[5]->f_2, -1489164512, true);
					_blip_set_modifier(Local_115[5]->f_2, 231194138);
				}
				_set_entity_health(&(Local_115[5]), 75, 0);
				_0x18ff3110cf47115d(&(Local_115[5]), 1, 0);
				_0xba8818212633500a(Local_115[5]->f_1, 0, 1);
				func_213(&(Local_115[5]->f_4));
				func_1627(Local_115[5], 2);
				break;
			case 2:
				if (func_1237(&(Local_115[5]), 518218985))
				{
					func_1627(Local_115[5], 4);
				}
				else
				{
					func_1625();
					task_follow_waypoint_recording(0, "susan_1_horse_chase", 0, 2060, -1, 0, 0, -1);
					func_1626(&(Local_115[5]), -1082130432, -1082130432);
					func_213(&(Local_115[5]->f_4));
					func_1627(Local_115[5], 3);
				}
				break;
			case 3:
				if (is_waypoint_playback_going_on_for_ped(&(Local_115[5]), 0))
				{
					waypoint_recording_get_num_points("susan_1_horse_chase", &iVar0);
					waypoint_recording_get_coord("susan_1_horse_chase", (iVar0 - 1), &vVar1);
					if (!func_26(&uLocal_352))
					{
						if (func_1617(&(Local_115[5]), vVar1, 1) < 10f)
						{
							_0x2e1d6d87346bb7d2(&(Local_115[5]), Global_35, 0, 0);
							func_27(&uLocal_352, 0);
						}
					}
					else if (func_846(&uLocal_352) > 0.5f)
					{
						task_smart_flee_ped(&(Local_115[5]), Global_35, 500f, -1, 0, 2.001f, 0);
						_0x06d26a96ca1bca75(Local_115[5]->f_1, 3, 1f, 0);
					}
				}
				else if (func_1248(&(Local_115[5])))
				{
					if (func_26(&uLocal_352) && func_846(&uLocal_352) < 2f)
					{
						if (!is_entity_dead(Local_115[5]->f_1))
						{
							_0x06d26a96ca1bca75(Local_115[5]->f_1, 3, 1f, 0);
						}
					}
				}
				set_ped_can_ragdoll(&(Local_115[5]), true);
				set_ped_can_be_knocked_off_vehicle(&(Local_115[5]), 2);
				if ((has_entity_been_damaged_by_any_ped(&(Local_115[5])) || has_entity_been_damaged_by_any_object(&(Local_115[5]))) || (has_entity_been_damaged_by_any_vehicle(&(Local_115[5])) && !func_1687(Local_115[5]->f_1, 1041577989)))
				{
					task_horse_action(Local_115[5]->f_1, 2, Local_115[5]->f_1, 0);
					set_ped_to_ragdoll(&(Local_115[5]), 5, 6, 0, false, false, false);
					_0x8b3cb08158e98481(&(Local_115[5]), 1);
					set_ped_config_flag(&(Local_115[5]), 336, true);
					func_794(&uLocal_77, 131072);
				}
				if (get_ped_waypoint_progress(&(Local_115[5])) >= 550)
				{
					_0x06d26a96ca1bca75(Local_115[5]->f_1, 3, 1f, 0);
				}
				if (!is_waypoint_playback_going_on_for_ped(&(Local_115[5]), 0) && !is_ped_fleeing(&(Local_115[5])))
				{
					task_smart_flee_ped(&(Local_115[5]), Global_35, -1f, -1, 0, 2.5f, 0);
				}
				if (!func_1248(&(Local_115[5])))
				{
					if (is_ped_ragdoll(&(Local_115[5])) || func_1195(uLocal_77, 131072))
					{
						func_213(&(Local_115[5]->f_4));
						_set_entity_health(&(Local_115[5]), 125, 0);
						_0x8b3cb08158e98481(&(Local_115[5]), 1);
						set_ped_config_flag(&(Local_115[5]), 336, true);
						_0xae6004120c18df97(&(Local_115[5]), 0, 1);
						if (get_current_ped_weapon(&(Local_115[5]), &uVar4, true, 0, false))
						{
							_0xcef4c65de502d367(&(Local_115[5]), 1, 0, 0, 0);
						}
						_0x06d26a96ca1bca75(Local_115[5]->f_1, 3, 0f, 0);
						_task_smart_flee_style_ped(&(Local_115[5]), Global_35, 3, 33, 300f, -1, 0);
						clear_entity_last_damage_entity(&(Local_115[5]));
						func_1627(Local_115[5], 5);
					}
				}
				break;
			case 5:
				if (!is_ped_ragdoll(&(Local_115[5])))
				{
					func_1627(Local_115[5], 4);
				}
				break;
			case 4:
				if (!func_1195(Local_115[5]->f_7, 64))
				{
					if (!is_ped_on_mount(&(Local_115[5])))
					{
					}
				}
				if (!func_1195(Local_115[5]->f_7, 64))
				{
					if (!func_1237(&(Local_115[5]), 518218985))
					{
						if (!func_1248(&(Local_115[5])) && !func_1195(uLocal_77, 131072))
						{
							_task_smart_flee_style_ped(&(Local_115[5]), Global_35, 3, 33, 300f, -1, 0);
						}
						else if (!func_1248(&(Local_115[5])) && !func_1195(uLocal_77, 131072))
						{
							_0x8b3cb08158e98481(&(Local_115[5]), 1);
							_task_smart_flee_style_ped(&(Local_115[5]), Global_35, 3, 33, 300f, -1, 0);
						}
						else
						{
							_task_smart_flee_style_ped(&(Local_115[5]), Global_35, 3, 33, 300f, -1, 0);
						}
					}
				}
				break;
		}
		if (!func_1248(&(Local_115[5])))
		{
			task_look_at_entity(&(Local_193[1]), &(Local_115[5]), -1, 0, 51, 0);
		}
	}
	if (!func_1195(Local_115[5]->f_7, 16))
	{
		if (!func_1248(&(Local_115[5])) || _is_ped_lassoed(&(Local_115[5])))
		{
			if (!is_entity_dead(Local_115[5]->f_1) && !func_1237(Local_115[5]->f_1, 242628503))
			{
				func_1625();
				task_horse_action(false, 2, 0, 0);
				task_smart_flee_ped(0, Global_35, 10f, 3, 2048, 3f, 0);
				func_1626(Local_115[5]->f_1, -1082130432, -1082130432);
				set_blocking_of_non_temporary_events(Local_115[5]->f_1, true);
				func_794(&(Local_115[5]->f_7), 16);
			}
		}
	}
}

void func_1234()
{
	if (!is_entity_dead(Local_115[5]->f_1))
	{
		if (func_1195(Local_115[5]->f_7, 16) && !func_1195(Local_115[5]->f_7, 32))
		{
			if (_get_rider_of_mount(Local_115[5]->f_1, true) == 0)
			{
				if (func_836(Local_115[5]->f_1, &(Local_193[1]), 1, 1) > 20f)
				{
					if (get_script_task_status(Local_115[5]->f_1, 1227113341, true) == 8)
					{
						task_go_to_entity(Local_115[5]->f_1, &(Local_193[1]), -1, 10f, 1.25f, 11f, 0);
					}
				}
			}
			else if (_get_rider_of_mount(Local_115[5]->f_1, true) == &Local_193[1])
			{
				func_794(&(Local_115[5]->f_7), 32);
			}
		}
	}
	if ((((_is_ped_lassoed(&(Local_115[5])) && !_is_ped_hogtied(&(Local_115[5]))) && func_836(&(Local_115[5]), Local_115[5]->f_1, 1, 1) < 4f) && !func_1237(Local_115[5]->f_1, 2106541073)) && !is_ped_on_mount(Global_35))
	{
		vLocal_278 = { get_entity_coords(&(Local_115[5]), true, false) - get_entity_coords(Global_35, true, false) };
		vLocal_278 = { func_1688(vLocal_278) };
		vLocal_278 = { vLocal_278 * Vector(4f, 4f, 4f) };
		vLocal_281 = { get_entity_coords(Local_115[5]->f_1, true, false) + vLocal_278 };
		task_go_straight_to_coord(Local_115[5]->f_1, vLocal_281, 1f, -1, 40000f, 1056964608, 0);
	}
}

void func_1235()
{
	if ((((!func_1680(Global_35, Local_115[6]->f_1, 0) && !func_1237(Local_115[6]->f_1, -982327190)) && !func_1237(Local_115[6]->f_1, 1227113341)) && !_0x9e2d5d6bc97a5f1e(Local_115[6]->f_1, -1, 15)) && !func_1237(Local_115[6]->f_1, 713668775))
	{
		task_stand_still(Local_115[6]->f_1, -1);
	}
}

bool func_1236(var uParam0, char* sParam1, bool bParam2)
{
	StringCopy(&cVar0, sParam1, 24);
	if (func_1672(&(uParam0->f_5310), cVar0, 0, -1, bParam2, 0))
	{
		return true;
	}
	return false;
}

bool func_1237(bool bParam0, int iParam1)
{
	if (does_entity_exist(bParam0))
	{
		if (!is_ped_injured(bParam0))
		{
			if (iParam1 == 2104565373 && is_driveby_task_underneath_driving_task(bParam0))
			{
				return true;
			}
			if (get_script_task_status(bParam0, iParam1, true) == 1 || get_script_task_status(bParam0, iParam1, true) == 0)
			{
				return true;
			}
		}
	}
	return false;
}

void func_1238(var uParam0, int iParam1)
{
	uParam0->f_1 = (uParam0->f_1 - (uParam0->f_1 && iParam1));
}

void func_1239(int iParam0, int iParam1)
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

var func_1240(var uParam0, char* sParam1, int iParam2, int iParam3, bool bParam4, float fParam5, char* sParam6, char* sParam7, char* sParam8, char* sParam9, int iParam10)
{
	func_1182(uParam0, sParam1, fParam5, sParam6, sParam7, sParam8, sParam9, iParam10);
	if (bParam4)
	{
		_uilog_set_has_displayed_cached_objective();
		uVar0 = func_898(sParam1, iParam3, bParam4, 1, sParam6, sParam7, sParam8, sParam9, iParam10);
	}
	else if (!func_1689(uParam0, sParam1))
	{
		sVar1 = func_1410(iParam10, sParam1, sParam6, sParam7, sParam8, sParam9);
		_uilog_set_has_displayed_cached_objective();
		uVar0 = func_1409(sVar1, iParam3, 0, 0, 0, 1);
	}
	return uVar0;
}

void func_1241(var uParam0)
{
	switch (func_1612(uParam0))
	{
		case 0:
			if (!func_1618())
			{
				if (func_1236(uParam0, "SUS1_S6_OBJ2", 0))
				{
					func_135(uParam0, 1);
				}
			}
			break;
		case 1:
			if (!func_1618())
			{
				if (!is_entity_dead(Local_115[5]->f_1) && func_1236(uParam0, "SUS1_S6_AHORSE", 0))
				{
					func_135(uParam0, 2);
					func_27(&uLocal_294, 0);
				}
				else if (is_entity_dead(Local_115[5]->f_1))
				{
					func_135(uParam0, 2);
				}
			}
			break;
		case 2:
			if ((((_is_ped_hogtied(&(Local_115[5])) && func_1658(&uLocal_294) > 15f) && _0x61914209c36efddb(&(Local_115[5])) != 7) && _0x61914209c36efddb(&(Local_115[5])) != 8) && !func_1618())
			{
				func_1236(uParam0, "SUS1_S6_NOTON", 0);
				func_213(&uLocal_294);
			}
			if (_0x61914209c36efddb(&(Local_115[5])) == 7 && func_1248(Global_35))
			{
				if (!func_1195(uLocal_78, 4096) && !func_1618())
				{
					if (func_1236(uParam0, "SUS1_S7_BANT1", 0))
					{
						func_794(&uLocal_78, 4096);
						func_27(&uLocal_298, 0);
					}
				}
			}
			if (!func_1197(7))
			{
				if (is_entity_in_volume(Global_35, Local_31.f_8, true, 0) && !is_entity_in_volume(Global_35, Local_31.f_9, true, 0))
				{
					if (_0x61914209c36efddb(&(Local_115[5])) == 7 || _0x61914209c36efddb(&(Local_115[5])) == 5)
					{
						func_47(0, 0);
						if (func_1236(uParam0, "SUS1_S7_BANT2", 0))
						{
							func_1182(uParam0, "SUS1_S7_OBJ3", -1082130432, 0, 0, -1, -1, 0);
							func_135(uParam0, 4);
							func_1180(7);
						}
					}
				}
			}
			if (!is_entity_dead(&(Local_115[5])))
			{
				if (func_836(Global_35, &(Local_115[5]), 1, 1) > 20f)
				{
					func_1182(uParam0, "SUS1_S7_OBJ_RET", -1082130432, 0, 0, -1, -1, 0);
					if (does_blip_exist(iLocal_62))
					{
						remove_blip(&iLocal_62);
					}
					iLocal_62 = func_1690(408396114, &(Local_115[5]), 1);
					func_135(uParam0, 3);
				}
			}
			break;
		case 3:
			if (!is_entity_dead(&(Local_115[5])))
			{
				if ((_0x61914209c36efddb(&(Local_115[5])) == 5 || _0x61914209c36efddb(&(Local_115[5])) == 4) || ((_0x61914209c36efddb(&(Local_115[5])) == 7 && is_ped_on_mount(Global_35)) && _get_carrier_as_mount(&(Local_115[5])) == get_mount(Global_35)))
				{
					func_135(uParam0, 1);
				}
			}
			break;
		case 4:
			if (!func_1229())
			{
				if (func_1236(uParam0, "SUS1_S7_BANT3", 0))
				{
					func_27(&uLocal_236, 1);
					func_1240(uParam0, "SUS1_S7_OBJ3", 0, 7500, 0, -1082130432, 0, 0, -1, -1, 0);
					func_135(uParam0, 5);
				}
			}
			break;
		case 5:
			if (_0x61914209c36efddb(&(Local_115[5])) == 7)
			{
				if (func_846(&uLocal_236) > 30f)
				{
					if (func_1236(uParam0, "SUS1_S7_OFFHRSE", 0))
					{
						func_213(&uLocal_236);
					}
				}
			}
			else
			{
				func_135(uParam0, 6);
			}
			break;
		case 6:
			if (func_846(&uLocal_236) > 30f && _0x61914209c36efddb(&(Local_115[5])) != 7)
			{
				if (func_1236(uParam0, "SUS1_S7_BODYDR", 0))
				{
					func_213(&uLocal_236);
				}
			}
			else if (func_846(&uLocal_236) > 30f && _0x61914209c36efddb(&(Local_115[5])) == 7)
			{
				if (func_1236(uParam0, "SUS1_S7_OFFHRSE", 0))
				{
					func_213(&uLocal_236);
				}
			}
			break;
	}
}

void func_1242(var uParam0)
{
	iVar3 = 100;
	iVar4 = 0;
	if (does_entity_exist(&(Local_193[2])))
	{
		if (func_1678(Global_35, &(Local_193[2])) < 7.5f && func_1237(&(Local_193[2]), 1227113341))
		{
			clear_ped_tasks(&(Local_193[2]), 1, 0);
		}
	}
	if (!is_entity_dead(&(Local_193[1])))
	{
		if (((Local_193[1]->f_3 == 24 || Local_193[1]->f_3 == 25) || Local_193[1]->f_3 == 3) || Local_193[1]->f_3 == 22)
		{
			if (is_entity_dead(Local_193[1]->f_1))
			{
				Local_193[1]->f_3 = 23;
			}
		}
		switch (Local_193[1]->f_3)
		{
			case 0:
				if (func_1623(19, 0))
				{
					func_1624(19);
				}
				_0x94a3c1b804d291ec(&(Local_193[1]), 0, 0, 0, 1);
				if (is_ped_on_mount(&(Local_193[1])))
				{
					func_1625();
					task_dismount_animal(0, 0, 0, 0, 0, 0);
					task_turn_ped_to_face_entity(0, Global_35, 0, -1082130432, -1082130432, -1082130432);
					func_1626(&(Local_193[1]), -1082130432, -1082130432);
				}
				func_1627(Local_193[1], 2);
				break;
			case 2:
				if (!is_entity_dead(Local_115[5]->f_1))
				{
					if (!is_ped_on_mount(&(Local_193[1])))
					{
						if (_get_rider_of_mount(Local_115[5]->f_1, false) == 0)
						{
							if (get_script_task_status(&(Local_193[1]), 1868526510, true) == 8)
							{
								Local_193[1]->f_1 = Local_115[5]->f_1;
								task_mount_animal(&(Local_193[1]), Local_115[5]->f_1, 20000, -1, 1073741824, 1, 0, 0);
							}
						}
					}
					else if (_get_rider_of_mount(Local_193[1]->f_1, false) == &Local_193[1])
					{
						task_turn_ped_to_face_entity(&(Local_193[1]), Global_35, 0, -1082130432, -1082130432, -1082130432);
						func_1627(Local_193[1], 3);
					}
				}
				else if (is_entity_dead(Local_115[5]->f_1))
				{
					if (!is_ped_on_mount(&(Local_193[1])))
					{
						if (_get_rider_of_mount(Local_115[5]->f_1, false) == 0)
						{
							if (get_script_task_status(&(Local_193[1]), 1868526510, true) == 8)
							{
								Local_193[1]->f_1 = Local_115[6]->f_1;
								task_mount_animal(&(Local_193[1]), Local_115[6]->f_1, 20000, -1, 1073741824, 1, 0, 0);
								if (iVar290 == 0)
								{
									iVar4 = 0;
									while (iVar4 < iVar3)
									{
										vVar0 = { func_1691(get_entity_coords(Global_35, true, false), 100f, 0f) };
										if (would_entity_be_occluded(-1250098797, vVar0, true))
										{
											Local_193[2] = func_1692(vVar0, 184.0113f, 1, 1, 1, 1, 1);
											_set_entity_coords_and_heading(&(Local_193[2]), vVar0, 184.0113f, true, false, true);
											_0x9587913b9e772d29(&(Local_193[2]), 0);
											set_entity_proofs(&(Local_193[2]), 8, false);
											iLocal_293 = 1;
										}
										else
										{
											iVar4++;
										}
									}
								}
							}
						}
					}
					else if (_get_rider_of_mount(Local_193[1]->f_1, false) == &Local_193[1] && iVar289 == 0)
					{
						func_1693(Global_35, 869278708, 1971704925);
						task_go_to_entity(&(Local_193[2]), Global_35, -1, 0.5f, 2f, 2f, 0);
						task_turn_ped_to_face_entity(&(Local_193[1]), Global_35, 0, -1082130432, -1082130432, -1082130432);
						iLocal_292 = 1;
						func_1627(Local_193[1], 3);
					}
				}
				break;
			case 23:
				Local_193[1]->f_1 = func_1694(19, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0);
				if (!is_entity_dead(Local_193[1]->f_1))
				{
					task_go_to_entity(Local_193[1]->f_1, &(Local_193[1]), -1, 5f, 2f, 2f, 0);
					func_1627(Local_193[1], 24);
					vVar5 = { get_entity_coords(Local_193[1]->f_1, true, false) };
				}
				break;
			case 24:
				if (get_script_task_status(Local_193[1]->f_1, 1227113341, true) == 8)
				{
					task_mount_animal(&(Local_193[1]), Local_193[1]->f_1, 20000, -1, 1073741824, 1, 0, 0);
					func_1627(Local_193[1], 25);
				}
				break;
			case 25:
				if (is_ped_on_mount(&(Local_193[1])))
				{
					func_1627(Local_193[1], 3);
					set_ped_config_flag(&(Local_193[1]), 167, true);
				}
				break;
			case 3:
				if ((!func_1614("SUS1_S6_OBJ2") || _0x61914209c36efddb(&(Local_115[5])) == 5) || _0x61914209c36efddb(&(Local_115[5])) == 4)
				{
					_0x2eb75fb86c41f026(Local_115[5]->f_1, 3, 0);
					task_follow_nav_mesh_to_coord(&(Local_193[1]), 1123.309f, -1308.048f, 66.4708f, 3f, -1, 0.25f, 4194820, 40000f);
					func_1627(Local_193[1], 22);
				}
				break;
			case 22:
				if ((!is_ped_on_mount(&(Local_193[1])) && !func_1237(&(Local_193[1]), 242628503)) && !func_1632(Local_115[5]->f_1, 0))
				{
					func_1625();
					task_mount_animal(0, Local_115[5]->f_1, 20000, -1, 1073741824, 1, 0, 0);
					task_follow_nav_mesh_to_coord(0, 1123.309f, -1308.048f, 66.4708f, 3f, -1, 0.25f, 4194820, 40000f);
					func_1626(&(Local_193[1]), -1082130432, -1082130432);
				}
				else if ((func_1632(Local_115[5]->f_1, 0) && !is_ped_on_mount(&(Local_193[1]))) && !func_1237(&(Local_193[1]), 242628503))
				{
					func_1625();
					task_mount_animal(0, Local_115[6]->f_1, 20000, -1, 1073741824, 1, 0, 0);
					task_follow_nav_mesh_to_coord(0, 1123.309f, -1308.048f, 66.4708f, 3f, -1, 0.25f, 4194820, 40000f);
					func_1626(&(Local_193[1]), -1082130432, -1082130432);
				}
				if (func_836(&(Local_193[1]), Global_35, 1, 1) > 20f)
				{
					func_430(uParam0, &(Local_193[1]));
					func_433(19, 0);
					func_1639(19, 1);
					func_1627(Local_193[1], 26);
				}
				break;
			case 26:
				if (get_script_task_status(&(Local_193[1]), 713668775, true) == 8)
				{
					if (func_1617(&(Local_193[1]), 1123.309f, -1308.048f, 66.4708f, 1) < 20f)
					{
						task_flush_route();
						task_extend_route(1119.31f, -1310.385f, 64.3595f);
						task_extend_route(func_176(5, 6));
						func_1625();
						task_dismount_animal(0, 0, 0, 0, 0, 0);
						task_follow_point_route(0, 1f, 0, 0.5f, 3f, func_1605(5, 6));
						task_achieve_heading(0, func_1605(5, 6), 0);
						func_1626(&(Local_193[1]), -1082130432, -1082130432);
						func_1627(Local_193[1], 4);
					}
					else
					{
						task_follow_nav_mesh_to_coord(&(Local_193[1]), 1123.309f, -1308.048f, 66.4708f, 3f, -1, 0.25f, 4198916, 40000f);
					}
				}
				if ((func_1617(Global_35, func_176(1, 0), 1) < 100f || func_836(Global_35, &(Local_193[1]), 1, 1) > 150f) || (func_836(Global_35, &(Local_193[1]), 1, 1) > 80f && !is_entity_on_screen(&(Local_193[1]))))
				{
					func_1627(Local_193[1], 4);
				}
				if (func_836(Global_35, &(Local_193[1]), 1, 1) > 40f && !is_entity_on_screen(&(Local_193[1])))
				{
					func_1627(Local_193[1], 4);
				}
				break;
			case 4:
				_remove_ped_from_mount(&(Local_193[1]), true, false);
				_set_entity_coords_and_heading(&(Local_193[1]), 1115.55f, -1310.08f, 64.46f, 175.79f, true, false, true);
				_0x9587913b9e772d29(&(Local_193[1]), 0);
				_set_entity_coords_and_heading(&(Local_193[0]), func_176(6, 1), func_1605(6, 1), true, false, true);
				set_blocking_of_non_temporary_events(&(Local_193[1]), true);
				set_blocking_of_non_temporary_events(&(Local_193[0]), true);
				if (does_entity_exist(Local_115[5]->f_1) && !is_entity_dead(Local_115[5]->f_1))
				{
					if (!does_entity_belong_to_this_script(Local_115[5]->f_1, true))
					{
						set_entity_as_mission_entity(Local_115[5]->f_1, true, true);
					}
					delete_ped(&(Local_115[5]->f_1));
				}
				if (does_entity_exist(Local_193[1]->f_1))
				{
					if (!does_entity_belong_to_this_script(Local_193[1]->f_1, true))
					{
						set_entity_as_mission_entity(Local_193[1]->f_1, true, true);
					}
					delete_ped(&(Local_193[1]->f_1));
				}
				func_1341(func_176(5, 6), 60f, 0);
				func_1627(Local_193[1], 28);
				break;
			case 28:
				if (_is_anim_scene_loaded(&(uLocal_67[7]), true, false))
				{
					set_anim_scene_entity(&(uLocal_67[7]), "Arthur", Global_35, 0);
					set_anim_scene_entity(&(uLocal_67[7]), "SusanGrimshaw", &(Local_193[1]), 0);
					set_anim_scene_entity(&(uLocal_67[7]), "Tilly", &(Local_193[0]), 0);
					_0xdf7b5144e25cd3fe(&(uLocal_67[7]), "PL_IDLE_A");
					_0xdf7b5144e25cd3fe(&(uLocal_67[7]), "PL_IDLE_B");
					_0xdf7b5144e25cd3fe(&(uLocal_67[7]), "PL_IDLE_C");
					_0xdf7b5144e25cd3fe(&(uLocal_67[7]), "PL_APPROACH");
					_0xdf7b5144e25cd3fe(&(uLocal_67[7]), "PL_BREAKOUT");
					func_1627(Local_193[1], 29);
				}
				break;
			case 29:
				if (func_1637(uLocal_67[7], "PL_IDLE_A"))
				{
					start_anim_scene(&(uLocal_67[7]));
					func_178();
					func_864(uParam0);
					if (does_entity_exist(iLocal_113))
					{
						delete_object(&iLocal_113);
					}
					func_27(&uLocal_233, 1);
					func_1695();
					func_1627(Local_193[1], 30);
				}
				break;
			case 30:
				if (!func_1197(7))
				{
					if (func_26(&uLocal_233))
					{
						if (func_846(&uLocal_233) > 12f)
						{
							if (func_1637(uLocal_67[7], func_1696()))
							{
								func_467(&uLocal_233, get_random_float_in_range(0f, 4f));
								func_1695();
							}
						}
					}
				}
				if (func_1197(7))
				{
					if (func_1637(uLocal_67[7], "PL_APPROACH"))
					{
						func_1627(Local_193[1], 31);
					}
				}
				break;
			case 5:
				iVar8 = func_1694(22, 0, 1, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0);
				if (!is_entity_dead(iVar8))
				{
					delete_ped(&iVar8);
				}
				break;
		}
	}
	if (func_1248(Global_35))
	{
		set_entity_proofs(&(Local_193[2]), 0, false);
	}
}

void func_1243(var uParam0)
{
	if (is_entity_dead(&(Local_115[5])))
	{
		func_1619(uParam0, "SUS1_FAIL_DEAD", "", 1, 0);
	}
	if (is_entity_in_volume(Global_35, Local_31.f_8, true, 0) && func_897(get_player_index(), 1, 0, 1))
	{
		func_1619(uParam0, "SUS1_FAIL_WANTED", "", 1, 0);
	}
	if (((_0x61914209c36efddb(&(Local_115[5])) != 5 && _0x61914209c36efddb(&(Local_115[5])) != 7) && _0x61914209c36efddb(&(Local_115[5])) != 8) && _0x61914209c36efddb(&(Local_115[5])) != 9)
	{
		func_1686(uParam0, &(Local_115[5]), "FOREMAN_RETURN", "FOREMAN_ABANDON", 50f, 100f, 0, 0, 1, 422991367, 0);
	}
	iVar0 = _get_carrier_as_mount(&(Local_115[5]));
	if (_0x61914209c36efddb(&(Local_115[5])) == 7 && !is_ped_on_mount(Global_35))
	{
		func_1686(uParam0, iVar0, "HORSE_RET", "HORSE_FAIL", 50f, 100f, 0, 0, 1, 422991367, 0);
	}
	func_40(1);
	if (func_897(get_player_index(), 1, 0, 1))
	{
		func_1619(uParam0, "SUS1_FAIL_WANTED_2", "", 1, 0);
	}
	func_1620(uParam0, 0);
	func_1621(uParam0);
	uParam0->f_607 = uParam0->f_607;
}

void func_1244(var uParam0)
{
	if (is_entity_in_volume(Global_35, Local_31.f_10, true, 0))
	{
		func_11(&iLocal_297, 1, 1);
	}
	if (_0x61914209c36efddb(&(Local_115[5])) == 7 && func_1248(Global_35))
	{
		disable_control_action(0, 440314811, false);
	}
	if (!func_1248(Global_35) || _0x61914209c36efddb(&(Local_115[5])) != 7)
	{
		func_11(&iLocal_297, 1, 1);
	}
	switch (iLocal_60)
	{
		case 0:
			if (is_any_speech_playing(Global_35) && func_10(iVar294))
			{
				func_1697(iVar294, 1);
			}
			else
			{
				func_1697(iVar294, 0);
			}
			if ((((_0x61914209c36efddb(&(Local_115[5])) == 7 && func_1248(Global_35)) && !func_10(iVar294)) && func_846(&uLocal_298) > 6f) && !is_entity_in_volume(Global_35, Local_31.f_10, true, 0))
			{
				iLocal_297 = func_1698("SUS1_HIT_FOREMAN", 86159939, &(Local_115[5]), 2, 0, 0, 0, 0, 1070386381, 570, 4000, 10, 1073741824, 0, 1704213876, 0, 0);
			}
			else if (func_1699(iVar294, 1) || func_1700(iVar294, 1))
			{
				func_213(&uLocal_298);
				func_11(&iLocal_297, 1, 1);
				task_play_anim(Global_35, sVar301, func_1701(1), 4f, -4f, -1, 16, 0f, false, 0, false, 0, false);
				func_1236(uParam0, "SUS1_S7_HIT", 0);
				iLocal_60 = 1;
			}
			break;
		case 1:
			func_27(&uLocal_301, 0);
			if (func_1658(&uLocal_301) >= 0.6f)
			{
				pause_scripted_conversation("SUS1_S7_BANT1", false, true, false, false);
			}
			if (func_1658(&uLocal_301) >= 0.8f)
			{
				func_517(&uLocal_301);
				task_play_anim(&(Local_115[5]), sVar302, sVar303, 8f, -4f, -1, 16, 0.695f, false, 0, false, 0, false);
				func_1236(uParam0, "SUS1_S7_REACT", 0);
				iLocal_60 = 2;
			}
			break;
		case 2:
			if (is_any_speech_playing(Global_35) && func_10(iVar294))
			{
				func_1697(iVar294, 1);
			}
			else
			{
				func_1697(iVar294, 0);
			}
			if (!func_1614("SUS1_S7_REACT") && _0xd89504d9d7d5057d("SUS1_S7_BANT1"))
			{
				restart_scripted_conversation("SUS1_S7_BANT1");
			}
			if ((((_0x61914209c36efddb(&(Local_115[5])) == 7 && func_1248(Global_35)) && !func_10(iVar294)) && func_846(&uLocal_298) > 15f) && !is_entity_in_volume(Global_35, Local_31.f_10, true, 0))
			{
				iLocal_297 = func_1698("SUS1_HIT_FOREMAN", 86159939, &(Local_115[5]), 2, 0, 0, 0, 0, 1070386381, 570, 4000, 10, 1073741824, 0, 1704213876, 0, 0);
			}
			else if (func_1699(iVar294, 1) || func_1700(iVar294, 1))
			{
				func_213(&uLocal_301);
				func_11(&iLocal_297, 1, 1);
				task_play_anim(Global_35, sVar301, func_1701(1), 4f, -4f, -1, 16, 0f, false, 0, false, 0, false);
				func_1236(uParam0, "SUS1_S7_HIT", 0);
				iLocal_60 = 3;
			}
			break;
		case 3:
			func_27(&uLocal_301, 0);
			if (func_1658(&uLocal_301) >= 0.6f)
			{
				pause_scripted_conversation("SUS1_S7_BANT1", false, true, false, false);
			}
			if (func_1658(&uLocal_301) >= 0.8f)
			{
				task_play_anim(&(Local_115[5]), sVar302, sVar303, 8f, -4f, -1, 16, 0.695f, false, 0, false, 0, false);
				func_1236(uParam0, "SUS1_S7_REACT", 0);
				iLocal_60 = 4;
			}
			break;
		case 4:
			if (is_any_speech_playing(Global_35) && func_10(iVar294))
			{
				func_1697(iVar294, 1);
			}
			else
			{
				func_1697(iVar294, 0);
			}
			if (!func_1614("SUS1_S7_REACT") && _0xd89504d9d7d5057d("SUS1_S7_BANT1"))
			{
				restart_scripted_conversation("SUS1_S7_BANT1");
			}
			if ((((_0x61914209c36efddb(&(Local_115[5])) == 7 && func_1248(Global_35)) && !func_10(iVar294)) && func_846(&uLocal_298) > 25f) && !is_entity_in_volume(Global_35, Local_31.f_10, true, 0))
			{
				iLocal_297 = func_1698("SUS1_HIT_FOREMAN", 86159939, &(Local_115[5]), 2, 0, 0, 0, 0, 1070386381, 570, 4000, 10, 1073741824, 0, 1704213876, 0, 0);
			}
			else if (func_1699(iVar294, 1) || func_1700(iVar294, 1))
			{
				func_213(&uLocal_301);
				func_11(&iLocal_297, 1, 1);
				task_play_anim(Global_35, sVar301, func_1701(1), 4f, -4f, -1, 16, 0f, false, 0, false, 0, false);
				func_1236(uParam0, "SUS1_S7_HIT", 0);
				func_27(&uLocal_301, 0);
				iLocal_60 = 5;
			}
			break;
		case 5:
			if (func_1658(&uLocal_301) >= 0.6f)
			{
				pause_scripted_conversation("SUS1_S7_BANT1", false, true, false, false);
			}
			if (func_1658(&uLocal_301) >= 0.8f)
			{
				task_play_anim(&(Local_115[5]), sVar302, sVar303, 8f, -4f, -1, 16, 0.695f, false, 0, false, 0, false);
				func_517(&uLocal_301);
			}
			if (!func_1618())
			{
				func_1236(uParam0, "SUS1_S7_FINAL", 0);
				iLocal_60 = 6;
			}
			break;
		case 6:
			break;
	}
}

void func_1245(var uParam0)
{
	iVar0 = _get_carrier_as_mount(&(Local_115[5]));
	if (((!_0x9fa00e2fc134a9d0(&(Local_115[5])) && _0x61914209c36efddb(&(Local_115[5])) != 7) && _0x61914209c36efddb(&(Local_115[5])) != 8) && _0x61914209c36efddb(&(Local_115[5])) != 9)
	{
		if (!is_entity_in_volume(Global_35, Local_31.f_8, true, 0))
		{
			Local_115[5]->f_2 = _blip_add_for_entity(831283580, &(Local_115[5]));
			set_blip_sprite(Local_115[5]->f_2, -1489164512, true);
		}
		if (does_blip_exist(Local_115[5]->f_2))
		{
			_blip_set_modifier(Local_115[5]->f_2, 231194138);
		}
	}
	if (((_0x61914209c36efddb(&(Local_115[5])) != 5 && _0x61914209c36efddb(&(Local_115[5])) != 7) && _0x61914209c36efddb(&(Local_115[5])) != 8) && _0x61914209c36efddb(&(Local_115[5])) != 9)
	{
		if (!is_entity_in_volume(Global_35, Local_31.f_8, true, 0))
		{
			func_1182(uParam0, "SUS1_S7_OBJ_RET", -1082130432, 0, 0, -1, -1, 0);
			if (does_blip_exist(iLocal_62))
			{
				remove_blip(&iLocal_62);
			}
			if (does_blip_exist(iLocal_66))
			{
				remove_blip(&iLocal_66);
			}
			if (func_1702(0))
			{
				func_59(0);
			}
			if (func_1702(1))
			{
				func_59(1);
			}
		}
	}
	if (((_0x61914209c36efddb(&(Local_115[5])) == 5 || _0x61914209c36efddb(&(Local_115[5])) == 9) || _0x61914209c36efddb(&(Local_115[5])) == 4) || (_0x61914209c36efddb(&(Local_115[5])) == 7 && is_ped_on_mount(Global_35)))
	{
		if (!is_entity_in_volume(Global_35, Local_31.f_8, true, 0))
		{
			func_1182(uParam0, "SUS1_S7_OBJ2", -1082130432, 0, 0, -1, -1, 0);
			if (!does_blip_exist(iLocal_62))
			{
				iLocal_62 = func_1167(-308585968, Local_31.f_13, 1);
				set_blip_name_from_text_file(iLocal_62, "SUS1_RP_BLIP");
			}
			if (does_blip_exist(iLocal_62))
			{
				_blip_set_modifier(iLocal_62, 231194138);
			}
			if (_0x9fa00e2fc134a9d0(&(Local_115[5])))
			{
				func_1183(&(Local_115[5]));
			}
			if (does_blip_exist(iLocal_66))
			{
				remove_blip(&iLocal_66);
			}
			if (func_1702(0))
			{
				func_59(0);
			}
			if (func_1702(1))
			{
				func_59(1);
			}
		}
	}
	if ((_0x61914209c36efddb(&(Local_115[5])) == 7 && !is_ped_on_mount(Global_35)) || (_0x61914209c36efddb(&(Local_115[5])) == 8 && !is_ped_on_mount(Global_35)))
	{
		if (!is_entity_in_volume(Global_35, Local_31.f_8, true, 0))
		{
			func_1182(uParam0, "SUS1_S7_OBJ_MOUNT", -1082130432, 0, 0, -1, -1, 0);
			if (func_208(0) == iVar0 && !func_1702(0))
			{
				func_1703(0);
			}
			else if (func_208(1) == iVar0 && !func_1702(1))
			{
				func_1703(1);
			}
			if ((!does_blip_exist(iLocal_66) && func_208(0) != iVar0) && func_208(1) != iVar0)
			{
				iLocal_66 = func_1704(iVar0, -89429847, 1, 1);
			}
			if (does_blip_exist(iLocal_66))
			{
				_blip_set_modifier(iLocal_66, -401963276);
				_blip_set_modifier(iLocal_66, 231194138);
			}
			if (_0x9fa00e2fc134a9d0(&(Local_115[5])))
			{
				func_1183(&(Local_115[5]));
			}
			if (does_blip_exist(iLocal_62))
			{
				remove_blip(&iLocal_62);
			}
		}
	}
	if ((is_entity_in_volume(Global_35, Local_31.f_8, true, 0) && !is_entity_in_volume(Global_35, Local_31.f_9, true, 0)) && is_entity_in_volume(&(Local_115[5]), Local_31.f_8, true, 0))
	{
		func_1182(uParam0, "SUS1_S7_OBJ3", -1082130432, 0, 0, -1, -1, 0);
	}
}

bool func_1246(bool bParam0, vector3 vParam1, float fParam4, float fParam5, bool bParam6, bool bParam7, bool bParam8, float fParam9, bool bParam10, int iParam11, bool bParam12, bool bParam13, bool bParam14)
{
	func_1177(bParam0, vParam1, 0, fParam5, bParam6, bParam7, bParam8, bParam12, bParam13, bParam14, 0);
	iVar1 = get_mount(bParam0);
	if (is_ped_in_any_vehicle(bParam0, false))
	{
		iVar2 = get_vehicle_ped_is_in(bParam0, false);
	}
	bVar4 = func_1617(bParam0, vParam1, 1);
	if (!func_26(fParam4))
	{
		if (bVar4 <= bParam8)
		{
			func_27(fParam4, 0);
		}
	}
	else if (bParam10 && bVar4 > bParam8)
	{
		func_517(fParam4);
	}
	if (func_26(fParam4))
	{
		if (bParam14)
		{
			set_ped_max_move_blend_ratio(bParam0, 1f);
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
		if (func_846(fParam4) >= fParam9)
		{
			if (bParam0 == Global_35)
			{
			}
			if (!is_entity_dead(iVar1) && !func_1642(bParam0, 501393341))
			{
				if (is_ped_on_mount(bParam0) && !bVar274)
				{
					task_dismount_animal(bParam0, 0, 0, 0, 0, 0);
					iLocal_291 = 1;
					return true;
				}
			}
			if (!is_entity_dead(iVar2) && !func_1642(bParam0, -828834893))
			{
				if (is_ped_in_any_vehicle(bParam0, false))
				{
					task_leave_any_vehicle(bParam0, 0, 0);
					return true;
				}
			}
		}
		if (bParam0 == Global_35 && iParam11 == 0)
		{
			if (get_is_task_active(bParam0, 8))
			{
				clear_ped_tasks(bParam0, 1, 0);
			}
			set_ped_reset_flag(bParam0, 175, true);
		}
	}
	return false;
}

void func_1247(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5)
{
	func_821(uParam0, iParam1, sParam2, iParam3, iParam4, bParam5);
}

bool func_1248(int iParam0)
{
	if (is_ped_injured(iParam0))
	{
		return false;
	}
	return is_ped_on_mount(iParam0);
}

int func_1249(int iParam0)
{
	if (!is_ped_injured(iParam0))
	{
		return get_mount(iParam0);
	}
	return 0;
}

bool func_1250(int iParam0, int iParam1)
{
	if (!does_entity_exist(iParam1))
	{
		return false;
	}
	if (_get_carrier_as_ped(iParam1) != iParam0)
	{
		return false;
	}
	iVar0 = _0x61914209c36efddb(iParam1);
	if (iVar0 == 5)
	{
		return true;
	}
	if (iVar0 == 7)
	{
		return true;
	}
	return false;
}

bool func_1251(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6)
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
	else if (func_1432(get_entity_coords(iParam0, bParam5, false), vParam1) <= (fParam4 * fParam4))
	{
		return true;
	}
	return false;
}

bool func_1252(int iParam0, int iParam1, float fParam2)
{
	return func_1705(iParam0, get_entity_coords(iParam1, false, false), fParam2);
}

void func_1253()
{
	if (func_206())
	{
		_0xdd1232b332cbb9e7(3, 1, 0);
	}
}

void func_1254(var uParam0, bool bParam1)
{
	iVar0 = 16384;
	if (bParam1)
	{
		iVar0 |= 524288;
	}
	_0x2fcd528a397e5c88(uParam0, iVar0);
}

bool func_1255(int iParam0)
{
	if (-1829635046 == func_1706(81053684))
	{
		if (func_1707(iParam0))
		{
			return true;
		}
	}
	else if (func_1497(-525676072, iParam0))
	{
		if (func_1707(iParam0))
		{
			return true;
		}
	}
	return false;
}

void func_1256(int iParam0)
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

void func_1257(int iParam0)
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

void func_1258()
{
	iVar0 = func_1015(Global_35, 9, 1, 0);
	if (func_656(iVar0))
	{
		return;
	}
	iVar0 = func_1015(Global_35, 7, 1, 0);
	if (func_656(iVar0))
	{
		set_current_ped_weapon(Global_35, iVar0, true, 8, false, false);
	}
	iVar0 = func_1015(Global_35, 0, 1, 0);
	if (func_656(iVar0) && _is_weapon_two_handed(iVar0))
	{
		set_current_ped_weapon(Global_35, iVar0, true, 9, false, false);
		return;
	}
	iVar0 = func_1015(Global_35, 1, 1, 0);
	if (func_656(iVar0) && _is_weapon_two_handed(iVar0))
	{
		set_current_ped_weapon(Global_35, iVar0, true, 9, false, false);
		return;
	}
	iVar0 = func_1015(Global_35, 18, 1, 0);
	if (func_656(iVar0) && _is_weapon_two_handed(iVar0))
	{
		set_current_ped_weapon(Global_35, iVar0, true, 9, false, false);
		return;
	}
	iVar0 = func_1708();
	if (func_656(iVar0))
	{
		if (has_ped_got_weapon(Global_35, iVar0, 0, true))
		{
			func_1667(Global_35, iVar0, 1, 0, 9, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
		}
		else
		{
			set_current_ped_weapon(Global_35, iVar0, true, 9, false, false);
		}
		return;
	}
	iVar0 = func_1709(6291456, 0);
	if (func_656(iVar0))
	{
		if (!has_ped_got_weapon(Global_35, iVar0, 0, true))
		{
			func_1667(Global_35, iVar0, 1, 0, 9, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
		}
		else
		{
			set_current_ped_weapon(Global_35, iVar0, true, 9, false, false);
		}
	}
}

int func_1259()
{
	return Global_1900383->f_393;
}

int func_1260(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (func_1640(*uParam0, 0f, 0f, 0f))
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

void func_1261(int iParam0)
{
	Global_40.f_1095.f_3054.f_1 = iParam0;
}

void func_1262(int iParam0)
{
	Global_40.f_1095.f_3054 = iParam0;
}

void func_1263(vector3 vParam0)
{
	Global_40.f_1095.f_3054.f_77 = { vParam0 };
}

var func_1264()
{
	return &Global_1899515;
}

void func_1265(var uParam0)
{
	Global_40.f_1095.f_3054.f_2 = uParam0;
}

void func_1266(int iParam0)
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

bool func_1267()
{
	return (func_1710() || func_1711());
}

Vector3 func_1268(var uParam0)
{
	return uParam0->f_865;
}

float func_1269(var uParam0)
{
	return uParam0->f_868;
}

float func_1270(struct<2> Param0, int iParam2, struct<2> Param3, var uParam5, int iParam6)
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

void func_1271(var uParam0, int iParam1, bool bParam2)
{
	uParam0->f_8 = (uParam0->f_8 - (uParam0->f_8 && iParam1));
	if (((iParam1 == 512 && bParam2) && _does_anim_scene_exist(uParam0->f_804)) && _0xef324e9550a394d5(uParam0->f_804))
	{
		_0x8a8208ae92bf87a5(uParam0->f_804);
	}
}

bool func_1272(var uParam0, int iParam1)
{
	return (uParam0->f_11 && iParam1) != 0;
}

bool func_1273(var uParam0, int iParam1)
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

void func_1274(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	iVar2 = func_1120(iParam1, 1);
	if (!bParam2 && iVar2 == 1367443060)
	{
		bParam3 = false;
	}
	if (iParam4 != 0)
	{
		if (iVar2 == 1108822547)
		{
			iVar1 = func_1712(iParam4);
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

bool func_1275(int iParam0, int iParam1)
{
	return ((Global_1946804->f_57[func_641(iParam0, 1)])->f_10 && iParam1) != 0;
}

bool func_1276(int iParam0, int iParam1)
{
	return (Global_1946804->f_57[iParam0]->f_9 && iParam1) != 0;
}

void func_1277(int iParam0, bool bParam1, bool bParam2)
{
	iVar0 = 10;
	if (func_1275(1108822547, 6))
	{
		if (bParam2)
		{
			func_1274(iParam0, iVar0, func_20() != -1, 0, 0);
			func_1278(1108822547, 1, 6);
		}
		else
		{
			return;
		}
	}
	else
	{
		_0xbc6df00d7a4a6819(iParam0, Global_1946804->f_2776.f_1, &(Global_1946804->f_2776.f_3[0]), &(Global_1946804->f_2776.f_3[1]), &(Global_1946804->f_2776.f_3[2]), Global_1946804->f_2776.f_8, Global_1946804->f_2776.f_9, Global_1946804->f_2776.f_10, Global_1946804->f_2776.f_11);
		func_1279(1108822547, 1, 6);
	}
	Global_1946804->f_857++;
	if (!bParam1)
	{
		return;
	}
	_update_ped_variation(iParam0, false, true, true, true, false);
}

void func_1278(int iParam0, int iParam1, int iParam2)
{
	(Global_1946804->f_57[func_641(iParam0, 1)])->f_10 = ((Global_1946804->f_57[func_641(iParam0, 1)])->f_10 || iParam1);
}

void func_1279(int iParam0, int iParam1, int iParam2)
{
	(Global_1946804->f_57[func_641(iParam0, 1)])->f_10 = ((Global_1946804->f_57[func_641(iParam0, 1)])->f_10 - ((Global_1946804->f_57[func_641(iParam0, 1)])->f_10 && iParam1));
}

bool func_1280(var uParam0)
{
	if (func_1713(&(uParam0->f_29), 62))
	{
		switch (func_1714())
		{
			case 1:
				if (!func_1713(&(uParam0->f_29), 6))
				{
					return false;
				}
				break;
			case 2:
				if (!func_1713(&(uParam0->f_29), 8))
				{
					return false;
				}
				break;
			case 4:
				if (!func_1713(&(uParam0->f_29), 16))
				{
					return false;
				}
				break;
			case 8:
				if (!func_1713(&(uParam0->f_29), 32))
				{
					if (func_1713(&(uParam0->f_29), 2))
					{
						if (func_663(func_277()) < 5)
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

int func_1281(var uParam0, int iParam1, int iParam2)
{
	iVar0 = 0;
	Var4.f_9 = -1591664384;
	bVar18 = func_1715(iParam1, 128);
	Var23.f_9 = -1591664384;
	if (func_1057("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_1058(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_656(Var4.f_4))
			{
			}
			else if (!_0x705be297eebdb95d(Var4.f_4))
			{
			}
			else if (iParam2 != 0 && Var4.f_4 == iParam2)
			{
			}
			else if ((!func_1715(iParam1, 512) && func_1492(Var4.f_4, &uVar19, &Var23, 1728382685)) && !Var23.f_21)
			{
			}
			else if (!bVar18 || _0xf29a186ed428b552(Global_35, Var4.f_4))
			{
				if (((_is_weapon_one_handed(Var4.f_4) && (!_is_weapon_shotgun(Var4.f_4) || func_1715(iParam1, 32))) && (!_is_weapon_pistol(Var4.f_4) || !func_1715(iParam1, 16777216))) && (!_is_weapon_revolver(Var4.f_4) || !func_1715(iParam1, 33554432)))
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
		func_1059(iVar1);
	}
	if (func_656(iVar0))
	{
	}
	else if (!func_1715(iParam1, 512))
	{
		iParam1 |= 512;
		return func_1281(uParam0, iParam1, iParam2);
	}
	else if (func_1715(iParam1, 256))
	{
		iVar0 = -1569615261;
	}
	return iVar0;
}

int func_1282(int iParam0)
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

void func_1283(var uParam0)
{
	if (!func_826(uParam0->f_1, 1))
	{
		_0x03ddbf2d73799f9e(*uParam0);
		func_787(&(uParam0->f_1), 1);
	}
}

void func_1284(var uParam0)
{
	if (!func_826(*uParam0, 1))
	{
		request_ptfx_asset();
		func_787(uParam0, 1);
	}
}

bool func_1285(var uParam0)
{
	if (func_826(uParam0->f_2, 1))
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

char* func_1286(int iParam0)
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

bool func_1287(int iParam0)
{
	return iParam0 != 0;
}

int func_1288(var uParam0, int iParam1)
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

int func_1289(var uParam0, char* sParam1)
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

void func_1290(var uParam0, int iParam1)
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

int func_1291(var uParam0)
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

void func_1292(var uParam0, int iParam1)
{
	uParam0->f_11 = (uParam0->f_11 || iParam1);
}

void func_1293(var uParam0, int iParam1)
{
	uParam0->f_11 = (uParam0->f_11 - (uParam0->f_11 && iParam1));
}

bool func_1294(var uParam0, int iParam1)
{
	uParam0->f_2495.f_2 = iParam1;
	return _datafile_get_data_node_index(&(uParam0->f_2495.f_1), &(uParam0->f_2495));
}

bool func_1295(var uParam0, int iParam1, int iParam2, char[4] cParam3, int iParam4, int iParam5)
{
	if (iParam2 == -1)
	{
		if (func_1296(uParam0, 2, iParam4))
		{
			*iParam5 = *iParam4;
		}
		if (func_1296(uParam0, 6, &(cParam3->f_11)))
		{
		}
		if (func_1296(uParam0, 9, &(cParam3->f_13)))
		{
		}
		if (func_1296(uParam0, 5, iParam4))
		{
			cParam3->f_9 = *iParam4;
		}
		return true;
	}
	if (func_1296(uParam0, 2, iParam4))
	{
		*iParam5 = *iParam4;
	}
	if (func_1296(uParam0, 6, &(cParam3->f_11)))
	{
	}
	if (func_1296(uParam0, 5, iParam4))
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
			if (func_1296(uParam0, 9, &(cParam3->f_13)))
			{
			}
			return true;
		}
		return false;
	}
	if (func_1296(uParam0, 9, &(cParam3->f_13)))
	{
	}
	return (iParam2 >= cParam3->f_11 && iParam2 <= cParam3->f_13);
}

bool func_1296(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2495.f_2 = iParam1;
	return _datafile_get_int(iParam2, &(uParam0->f_2495));
}

bool func_1297(var uParam0, int iParam1, char[4] cParam2)
{
	uParam0->f_2495.f_2 = iParam1;
	return _datafile_get_string(cParam2, &(uParam0->f_2495));
}

bool func_1298(var uParam0, char* sParam1, int iParam2)
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

void func_1299(char* sParam0)
{
	if (!is_audio_scene_active(sParam0))
	{
		start_audio_scene(sParam0);
	}
	func_466(sParam0, 1);
}

bool func_1300(var uParam0)
{
	if (func_826(uParam0->f_1, 2))
	{
		return true;
	}
	if (!func_826(uParam0->f_1, 1))
	{
		func_796(uParam0);
	}
	if (has_model_loaded(*uParam0))
	{
		func_787(&(uParam0->f_1), 2);
		return true;
	}
	return false;
}

bool func_1301(var uParam0)
{
	if (func_826(uParam0->f_3, 2))
	{
		return true;
	}
	if (!func_826(uParam0->f_3, 1))
	{
		func_798(uParam0);
	}
	switch (uParam0->f_1)
	{
		case 2:
			if (get_is_waypoint_recording_loaded(*uParam0))
			{
				func_787(&(uParam0->f_3), 2);
				return true;
			}
			break;
		case 1:
			if (has_vehicle_recording_been_loaded(uParam0->f_2, *uParam0))
			{
				func_787(&(uParam0->f_3), 2);
				return true;
			}
			break;
	}
	return false;
}

bool func_1302(var uParam0)
{
	if (func_826(uParam0->f_1, 2))
	{
		return true;
	}
	if (!func_826(uParam0->f_1, 1))
	{
		func_800(uParam0);
	}
	if (has_anim_dict_loaded(*uParam0))
	{
		func_787(&(uParam0->f_1), 2);
		return true;
	}
	return false;
}

bool func_1303(var uParam0, int iParam1)
{
	if (func_826(uParam0->f_1, 2))
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
	if (!func_826(uParam0->f_1, 1))
	{
		func_807(uParam0, iParam1);
	}
	if (_0x23e33cb9f4a3f547(iParam1, *uParam0))
	{
		func_787(&(uParam0->f_1), 2);
		return true;
	}
	return false;
}

bool func_1304(var uParam0)
{
	if (func_826(uParam0->f_2, 2))
	{
		return true;
	}
	if (!func_826(uParam0->f_2, 1))
	{
		func_809(uParam0);
	}
	if (_has_propset_loaded(*uParam0))
	{
		func_787(&(uParam0->f_2), 2);
		return true;
	}
	return false;
}

bool func_1305(var uParam0)
{
	if (func_826(uParam0->f_3, 2))
	{
		return true;
	}
	if (!func_826(uParam0->f_3, 1))
	{
		func_811(uParam0);
	}
	if (_0xff07cf465f48b830(*uParam0))
	{
		func_787(&(uParam0->f_3), 2);
		return true;
	}
	return false;
}

bool func_1306(var uParam0)
{
	if (func_826(uParam0->f_1, 2))
	{
		return true;
	}
	if (!func_826(uParam0->f_1, 1))
	{
		func_813(uParam0);
	}
	if (request_script_audio_bank(*uParam0))
	{
		func_787(&(uParam0->f_1), 2);
		return true;
	}
	return false;
}

bool func_1307(var uParam0)
{
	if (func_826(uParam0->f_1, 2))
	{
		return true;
	}
	if (!func_826(uParam0->f_1, 1))
	{
		func_815(uParam0);
	}
	if (_is_imap_active(*uParam0))
	{
		func_787(&(uParam0->f_1), 2);
		return true;
	}
	return false;
}

bool func_1308(var uParam0)
{
	if (func_826(uParam0->f_2, 2))
	{
		return true;
	}
	if (!func_826(uParam0->f_2, 1))
	{
		func_817(uParam0);
	}
	if (_0xe368e8422c860ba7(*uParam0, uParam0->f_1, -2))
	{
		func_787(&(uParam0->f_2), 2);
		return true;
	}
	return false;
}

bool func_1309(var uParam0)
{
	if (func_826(uParam0->f_1, 2))
	{
		return true;
	}
	if (!func_826(uParam0->f_1, 1))
	{
		func_819(uParam0);
	}
	if (_0x2c04d89a0fb4e244(*uParam0))
	{
		func_787(&(uParam0->f_1), 2);
		return true;
	}
	return false;
}

int func_1310(int iParam0, bool bParam1, int iParam2, float fParam3, float fParam4, float fParam5, float fParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, int iParam17, bool bParam18, bool bParam19, bool bParam20, bool bParam21, bool bParam22, bool bParam23, bool bParam24)
{
	if (!func_429(iParam0))
	{
		return 0;
	}
	vVar0.x = fParam3;
	vVar0.f_1 = fParam4;
	vVar0.f_2 = fParam5;
	if (((Global_1572864->f_13 || Global_1572864->f_14) || Global_1572864->f_8 != 0) || Global_1391438->f_5 & 8 != 0)
	{
		bVar3 = true;
	}
	switch ((*Global_1360165)[iParam0]->f_11)
	{
		case 0:
			if (func_163(iParam0, 2, 1))
			{
				func_164(iParam0, 2, 1);
			}
			if (func_675(iParam0, 16, 1))
			{
				if (*Global_1360165)[iParam0]->f_129 != get_id_of_this_thread()
				{
					if (bParam14)
					{
						func_442(iParam0, 29, 1);
						return 0;
					}
					if (is_thread_active((*Global_1360165)[iParam0]->f_129, false))
					{
					}
					else
					{
						func_434(iParam0, 0, 0, 1, -1082130432, 1, 1, 0, 0, 0, 0);
					}
					return 0;
				}
				else if (func_907(Global_1360165[iParam0], 0))
				{
					return Global_1360165[iParam0];
				}
			}
			if (func_907(Global_1360165[iParam0], 0))
			{
				if (is_scripted_speech_playing(Global_1360165[iParam0]))
				{
					return 0;
				}
				if (is_ped_ragdoll(Global_1360165[iParam0]))
				{
					if (bParam1)
					{
						func_1716(iParam0, 1, "Stealing, but companion is a ragdoll");
					}
					else
					{
						return 0;
					}
				}
				func_442(iParam0, 44, 1);
				(*Global_1360165)[iParam0]->f_1156 = get_id_of_this_thread();
				func_1717(iParam0, 2);
				return 0;
			}
			else if (bParam1)
			{
				func_442(iParam0, 44, 1);
				(*Global_1360165)[iParam0]->f_1156 = get_id_of_this_thread();
				func_1717(iParam0, 1);
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
			if (!func_163(iParam0, 44, 0))
			{
				func_442(iParam0, 44, 0);
			}
			if (func_1718(iParam0, vVar0, iParam13, 0, 1, iParam17, bParam20, -1, 1, 0))
			{
				func_1717(iParam0, 2);
			}
			break;
		case 2:
			set_ped_config_flag(Global_1360165[iParam0], 171, true);
			if (!_0x88ad6cc10d8d35b2(Global_1360165[iParam0]))
			{
				set_entity_as_mission_entity(Global_1360165[iParam0], true, true);
			}
			func_164(iParam0, 18, 1);
			set_entity_visible(Global_1360165[iParam0], true);
			set_ped_relationship_group_hash(Global_1360165[iParam0], 1030835986);
			_0xf74e134f40192884(Global_1360165[iParam0], 0);
			_0x6759bee6762e140b((*Global_1360165)[iParam0]->f_1);
			set_ped_config_flag(Global_1360165[iParam0], 130, false);
			func_910(iParam0, bParam9, 1, 0);
			if (bParam22)
			{
				func_1719(iParam0, 0, 0, 1);
			}
			func_164(iParam0, 33, 1);
			func_164(iParam0, 34, 1);
			func_164(iParam0, 29, 1);
			if (!func_386(vVar0) && bParam7)
			{
				func_1717(iParam0, 3);
			}
			else if (iParam13 != 0)
			{
				func_1717(iParam0, 4);
			}
			else
			{
				func_1717(iParam0, 5);
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
						func_1716(iParam0, 1, "Teleporting a stolen companion using a scenario.");
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
				func_837(Global_1360165[iParam0], vVar0, fParam6, 2, 1073741824);
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
				func_1717(iParam0, 4);
			}
			else
			{
				func_1717(iParam0, 5);
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
				if (func_1720(iParam0, iParam13))
				{
					if (_0xa0bc8faed8cfeb3c(Global_1360165[iParam0]))
					{
						func_1721(iParam0, iParam13, 0);
						func_1722(iParam0, Global_1360165[iParam0], iParam13, 1);
						if (func_163(iParam0, 25, 0))
						{
							func_164(iParam0, 25, 0);
						}
						func_442(iParam0, 66, 0);
						func_1717(iParam0, 5);
						(*Global_1360165)[iParam0]->f_63 = iParam13;
					}
					else
					{
						return 0;
					}
				}
				else
				{
					func_1717(iParam0, 5);
				}
				func_442(iParam0, 28, 1);
			}
			else
			{
				func_1717(iParam0, 5);
			}
			break;
		case 5:
			if (_0xa0bc8faed8cfeb3c(Global_1360165[iParam0]))
			{
				func_1717(iParam0, 6);
			}
			break;
		case 6:
			if (func_907(Global_1360165[iParam0], 0))
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
					func_1723(iParam0);
				}
				if (bParam21)
				{
					clear_ped_secondary_task(Global_1360165[iParam0]);
					func_1724(Global_1360165[iParam0], 1);
				}
			}
			func_1717(iParam0, 7);
		case 7:
			func_910(iParam0, bParam9, bParam15, 0);
			func_904(iParam0, 4, bParam11);
			func_906(iParam0);
			if (bParam20)
			{
				if (func_1725(Global_1360165[iParam0]))
				{
				}
			}
			func_1726(iParam0, Global_1360165[iParam0]);
			if (!bParam23 && !get_ped_config_flag(Global_1360165[iParam0], 503, true))
			{
				set_ped_config_flag(Global_1360165[iParam0], 503, true);
			}
			Global_40.f_4942[iParam0]->f_4 = Global_40.f_4942[iParam0]->f_3;
			func_1717(iParam0, 0);
			func_179(iParam0, 16, 1);
			func_164(iParam0, 44, 1);
			(*Global_1360165)[iParam0]->f_1156 = 0;
			(*Global_1360165)[iParam0]->f_129 = get_id_of_this_thread();
			return Global_1360165[iParam0];
	}
	return 0;
}

void func_1311(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	func_1727(iParam1, bParam3, bParam4, bParam6);
	if (!func_120(uParam0, 512))
	{
		if (func_120(uParam0, 4) && bParam4)
		{
			vVar0 = { get_offset_from_entity_in_world_coords(Global_35, 5f, 0f, 0f) };
			func_1728(iParam1, vVar0);
		}
	}
	else
	{
		Stack.Push(uParam0);
		Call_Loc(uParam0->f_10781);
	}
	func_1729(uParam0, iParam1, iParam2, func_316(iParam2, 0));
	func_1730(uParam0, iParam1, 512);
	if (bParam5)
	{
		func_1730(uParam0, iParam1, 128);
	}
	else
	{
		func_1731(uParam0, iParam1, 128);
	}
	switch (iParam2)
	{
		case 1:
		case default:
	}
}

void func_1312(int iParam0)
{
	if (!func_429(iParam0))
	{
		return;
	}
	iVar0 = func_516(iParam0);
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	_0x406ccf555b04fad3(iVar0, 0, 0f);
}

void func_1313(var uParam0, vector3 vParam1, float fParam4)
{
	uParam0->f_5417 = { vParam1 };
	uParam0->f_5420 = fParam4;
}

bool func_1314(int iParam0)
{
	iParam0 = func_258(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (func_1323(iParam0) == 0)
	{
		return false;
	}
	return true;
}

void func_1315(int iParam0)
{
	iParam0 = func_258(iParam0);
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
	func_1732(&Var0);
	func_1733(iParam0, Var0);
	func_1734(&(Global_40.f_1095.f_1[iParam0]->f_15));
	func_1735(&(Global_40.f_1095.f_1[iParam0]->f_298));
	func_1736(&(Global_40.f_1095.f_1[iParam0]->f_356));
	func_1737(&(Global_40.f_1095.f_1[iParam0]->f_372));
	iVar2 = 0;
	while (iVar2 < 2)
	{
		func_1738(iVar2, Global_40.f_1095.f_1[iParam0]->f_398[iVar2]);
		iVar2++;
	}
	iVar3 = 0;
	while (iVar3 < 3)
	{
		func_1739(iVar3, Global_40.f_1095.f_1[iParam0]->f_407[iVar3]);
		iVar3++;
	}
	func_1740(&(Global_40.f_1095.f_1[iParam0]->f_420));
	func_1741(&(Global_40.f_1095.f_1[iParam0]->f_422));
	func_1742(&(Global_40.f_1095.f_1[iParam0]->f_425));
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

int func_1316(vector3 vParam0)
{
	return func_1743(_get_map_zone_at_coords(vParam0, 10));
}

bool func_1317(int iParam0)
{
	iParam0 = func_258(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (!func_494(iParam0))
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

void func_1318(int iParam0, int iParam1)
{
	iVar0 = get_player_index();
	if (is_player_dead(iVar0))
	{
	}
	func_488(iParam0);
	func_488(iParam0);
	func_1744(iParam0, iParam1);
	func_1745(iParam0, iParam1);
	func_1746(iParam0, iParam1);
	iVar1 = func_208(iParam0);
	if (does_entity_exist(iVar1))
	{
		if (iParam0 == 0 || iParam0 == 1)
		{
			func_1747(iVar1);
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
			func_1747(iVar3);
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
	func_260();
}

bool func_1319()
{
	iVar0 = func_1259();
	if (does_entity_exist(iVar0))
	{
		return true;
	}
	return false;
}

void func_1320()
{
	iVar0 = func_1259();
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	if (!_0x88ad6cc10d8d35b2(iVar0))
	{
		set_entity_as_mission_entity(iVar0, true, true);
	}
	delete_object(&iVar0);
	func_1748(0);
}

int func_1321(int iParam0)
{
	iParam0 = func_258(iParam0);
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

int func_1322(int iParam0)
{
	iParam0 = func_258(iParam0);
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

int func_1323(int iParam0)
{
	iParam0 = func_258(iParam0);
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

void func_1324(int iParam0)
{
	iParam0 = func_258(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_1554(&iVar0, &iVar1, &iVar2);
	func_1555(iParam0, iVar0);
	func_1556(iParam0, iVar1);
	func_1557(iParam0, iVar2);
	func_1749(iParam0, 1);
	func_1750(iParam0, 1);
}

void func_1325(int iParam0)
{
	iParam0 = func_258(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_1751(iParam0, 1);
}

void func_1326(int iParam0, vector3 vParam1, var uParam4)
{
	iParam0 = func_258(iParam0);
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

bool func_1327(int iParam0)
{
	iParam0 = func_258(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	return func_943(iParam0, 1);
}

struct<2> func_1328(int iParam0)
{
	iParam0 = func_258(iParam0);
	if (iParam0 == -1)
	{
		return Var0;
	}
	if (iParam0 >= 7)
	{
		return Var0;
	}
	if (!func_1752(iParam0, &uVar2))
	{
	}
	if (!func_1753(iParam0, &uVar3))
	{
	}
	Var0 = uVar2;
	Var0.f_1 = uVar3;
	return Var0;
}

struct<6> func_1329()
{
	if (func_1754(-997150586, &uVar6))
	{
		Var0.f_4 = uVar6;
	}
	if (func_1754(-1189569496, &uVar7))
	{
		Var0 = uVar7;
	}
	if (func_1754(325139909, &uVar8))
	{
		Var0.f_2 = uVar8;
	}
	if (func_1754(1310070322, &uVar9))
	{
		Var0.f_5 = uVar9;
	}
	if (func_1754(986998820, &uVar10))
	{
		Var0.f_3 = uVar10;
	}
	if (func_1754(-415648720, &uVar11))
	{
		Var0.f_1 = uVar11;
	}
	return Var0;
}

void func_1330(int iParam0, var uParam1, var uParam2, int iParam3)
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
	func_1755(iParam0);
	func_1756(iParam0, uParam1);
	func_1757(iParam0);
	func_1758(iParam0, uParam2);
	if (iParam3 != 0)
	{
		func_1759(iParam0, iParam3, 0);
	}
	_update_ped_variation(iParam0, false, true, true, true, true);
}

void func_1331(int iParam0)
{
	iParam0 = func_258(iParam0);
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

bool func_1332(int iParam0)
{
	if (iParam0 == 0)
	{
		return true;
	}
	request_model(iParam0, false);
	return has_model_loaded(iParam0);
}

int func_1333(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)
{
	iVar0 = create_ped(iParam0, vParam1, fParam4, bParam6, bParam7, false, false);
	if (bParam5)
	{
		_set_random_outfit_variation(iVar0, true);
	}
	return iVar0;
}

int func_1334(var uParam0)
{
	return uParam0;
}

bool func_1335(int iParam0)
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

int func_1336(var uParam0)
{
	return *uParam0;
}

bool func_1337(int iParam0, var uParam1, int iParam2)
{
	return false;
	if (iParam0 <= -1 || iParam0 > 80)
	{
		return false;
	}
	*uParam1 = { func_1760(iParam0) };
	if (func_1640(*uParam1, 0f, 0f, 0f))
	{
		return false;
	}
	if (!func_838(iParam0, iParam2, &iVar0))
	{
		return false;
	}
	if (func_1761(*iParam2, iVar0))
	{
		return false;
	}
	return true;
}

void func_1338(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_1339(var uParam0)
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

bool func_1340(var uParam0)
{
	switch (func_1762(uParam0))
	{
		case 0:
			uParam0->f_24 = func_277();
			iVar4 = func_277();
			func_1125(&iVar4, uParam0->f_6);
			func_1126(&iVar4, 0);
			func_1127(&iVar4, 0);
			if (func_962(uParam0->f_24, iVar4, 1))
			{
				func_326(&iVar4, 0, 0, 0, 1, 0, 0, 0);
			}
			func_1763(uParam0->f_24, iVar4, &iVar0, &iVar1, &iVar2, &uVar3, &uVar3, &uVar3);
			uParam0->f_7 = ((iVar0 + iVar1 * 60) + iVar2 * 3600);
			func_1764(uParam0, 1);
			break;
		case 1:
			fVar5 = func_1765(uParam0, -1082130432);
			if (fVar5 >= 0.5f)
			{
				func_1764(uParam0, 2);
			}
			break;
		case 2:
			fVar5 = func_1765(uParam0, -1082130432);
			if (fVar5 >= 0.99f || fVar5 == -1f)
			{
				iVar4 = uParam0->f_24;
				func_326(&iVar4, uParam0->f_7, 0, 0, 0, 0, 0, 0);
				set_clock_time(func_663(iVar4), func_664(iVar4), func_665(iVar4));
				func_1766(get_clock_hours());
				func_1767(1, 0, 0);
				return true;
			}
			break;
	}
	return false;
}

void func_1341(vector3 vParam0, float fParam3, bool bParam4)
{
	iVar0 = 16384;
	if (bParam4)
	{
		iVar0 |= 524288;
	}
	clear_area(vParam0, fParam3, iVar0);
}

void func_1342(int iParam0, int iParam1)
{
	if (Global_1935630->f_12)
	{
		return;
	}
	func_1768(2000);
	Global_16 = 0;
	func_1769();
	set_entity_invincible(Global_35, func_1770(*iParam0, 8));
	if (!func_1770(*iParam0, 1))
	{
		set_player_control(get_player_index(), true, 0, false);
	}
	_0xa0cefcea390aab9b(0);
	set_all_random_peds_flee(player_id(), false);
	set_everyone_ignore_player(player_id(), false);
	if (func_1770(*iParam0, 2) || func_1770(*iParam0, 4))
	{
		_hide_hud_component(-1679307491);
	}
	else
	{
		_display_hud_component(-1679307491);
	}
	if (!func_1770(*iParam0, 16))
	{
		func_228(1);
	}
	if (func_1770(*iParam0, 32))
	{
		func_594(Global_35, -383172193, 0, 1742327865, 0, 1, 0, 0, 1, 0);
		func_1771(-1623728698, 0);
	}
	func_765(&(Global_1946804->f_1497), Global_35, 1, 49217, 1, 1, 1);
	if (Global_1359489->f_16 & 4194304 != 0)
	{
		Global_1359489->f_16 = (Global_1359489->f_16 - Global_1359489->f_16 & 4194304);
	}
	*iParam0 = 0;
}

var func_1343(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

struct<4> func_1344(var uParam0, int iParam1)
{
	return uParam0->f_1[func_132(iParam1)]->f_13;
}

int func_1345(var uParam0)
{
	return *uParam0;
}

bool func_1346(var uParam0, struct<4> Param1, int iParam5, bool bParam6)
{
	if (func_1347(uParam0, 32768))
	{
		return true;
	}
	if (func_1772(uParam0) >= 3)
	{
		uParam0->f_2286 = func_897(get_player_index(), 0, 0, 1);
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
		func_1773(uParam0);
	}
	if (func_1772(uParam0) < 10)
	{
		if (func_1772(uParam0) == 3)
		{
			func_1774(uParam0, iParam5, bParam6);
		}
		else if (func_1772(uParam0) > 3)
		{
			if (func_1345(uParam0) == 0)
			{
				if (!func_1347(uParam0, 524288))
				{
					func_1775(uParam0);
				}
				else if (is_screen_faded_out())
				{
					func_1776(uParam0, 4);
					func_1777(uParam0, 10);
					func_1778(uParam0, iParam5);
					return true;
				}
			}
			if (!func_1347(uParam0, 67108864) && !Global_1935630->f_12)
			{
				set_ped_reset_flag(Global_35, 25, true);
			}
			if (!func_1779(uParam0->f_1406[uParam0->f_2074], 16))
			{
				disable_control_action(0, -1404316431, false);
				disable_control_action(0, -1304887797, false);
			}
			_0x8910c24b7e0046ec();
			func_1780(0);
			func_1781();
			disable_control_action(0, -1722177808, false);
			disable_control_action(0, 1644850270, false);
			disable_control_action(0, 2139949496, false);
			if (uParam0->f_2074 >= 0)
			{
				if (!func_1779(uParam0->f_1406[uParam0->f_2078], 32768))
				{
					_uiprompt_enable_prompt_type_this_frame(6);
				}
				if (func_1782(uParam0, uParam0->f_2074))
				{
					if (func_1783(uParam0) < 7 && uParam0->f_2078 >= 0)
					{
						func_1784(uParam0, uParam0->f_1406[uParam0->f_2078]->f_27, uParam0->f_1735[uParam0->f_2078]->f_1, 1065353216);
					}
				}
				else if (uParam0->f_2078 >= 0)
				{
					func_1784(uParam0, uParam0->f_1406[uParam0->f_2078]->f_27, uParam0->f_1735[uParam0->f_2078]->f_1, 1065353216);
				}
				func_1785(uParam0);
			}
		}
	}
	bVar0 = func_1786(uParam0, iParam5, bParam6);
	bVar1 = _0xa24c1d341c6e0d53(1, 0, 0);
	if (bVar0)
	{
		if ((!func_1347(uParam0, 268435456) && bVar1) && !func_1347(uParam0, 262144))
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
				func_713(uParam0, 131072);
				func_713(uParam0, 268435456);
			}
		}
		if (func_1787(uParam0, 64) || (uParam0->f_2074 >= 0 && !func_1779(uParam0->f_1406[uParam0->f_2074], 524288)))
		{
			if (_0xa2b1c7ef759a63ce() > 0f || func_1345(uParam0) == 0)
			{
				_0xc9caeaeec1256e54(-1679307491);
				_0xe296208c273bd7f0(-1, -1, 0, 17, 1, 0);
			}
		}
	}
	if (func_1772(uParam0) == 3 || func_1347(uParam0, 131072))
	{
		func_1788(uParam0);
		if (!func_1347(uParam0, 262144))
		{
			if ((bVar0 && func_1347(uParam0, 65536)) || func_1347(uParam0, 131072))
			{
				func_713(uParam0, 32768);
				func_1776(uParam0, 4);
				func_1777(uParam0, 10);
				uParam0->f_2159 = 1;
				func_1778(uParam0, iParam5);
				return true;
			}
		}
	}
	if (func_1772(uParam0) >= 3)
	{
		func_1789(uParam0, iParam5);
		func_1790(uParam0);
		if (!func_1791(uParam0, 1))
		{
			func_1792(uParam0);
		}
		func_1793(uParam0);
	}
	switch (func_1772(uParam0))
	{
		case 0:
			func_1794(uParam0, Param1, iParam5);
			break;
		case 1:
			func_1795(uParam0);
			break;
		case 2:
			func_1796(uParam0);
			break;
		case 3:
			if (func_1797(uParam0))
			{
				func_1798(2);
				func_1784(uParam0, uParam0->f_1406[uParam0->f_2074]->f_27, uParam0->f_1735[uParam0->f_2074]->f_1, 1065353216);
				func_213(&(uParam0->f_2262));
				func_1776(uParam0, 1);
				func_1799();
				func_1777(uParam0, 5);
			}
			break;
		case 5:
		case 6:
		case 8:
			_0x9f9a829c6751f3c7(get_player_index(), 31, 1);
			if (!func_1347(uParam0, 67108864))
			{
				set_ped_reset_flag(Global_35, 25, true);
			}
			set_ped_reset_flag(Global_35, 264, true);
			set_ped_reset_flag(Global_35, 321, true);
			if (func_1772(uParam0) == 5)
			{
				if (func_1800(uParam0))
				{
					func_1776(uParam0, 2);
					func_1777(uParam0, 6);
				}
			}
			if (func_1772(uParam0) == 6)
			{
				if (func_1801(uParam0))
				{
					func_1776(uParam0, 3);
					func_1777(uParam0, 8);
				}
			}
			if (uParam0->f_2075 >= 0 || func_1658(&(uParam0->f_2262)) >= 15f)
			{
				if (func_1802(uParam0, iParam5))
				{
					if (func_1803(uParam0))
					{
						uParam0->f_2075 = func_1804(uParam0);
						func_213(&(uParam0->f_2262));
						set_player_control(get_player_index(), true, 0, false);
						_display_hud_component(-1679307491);
						clear_ped_tasks(Global_35, 1, 0);
						func_1776(uParam0, 6);
						func_1777(uParam0, 9);
					}
					else
					{
						func_1776(uParam0, 4);
						func_1777(uParam0, 10);
						func_1778(uParam0, iParam5);
						return true;
					}
				}
			}
			break;
		case 9:
			if (func_1802(uParam0, iParam5))
			{
				func_1778(uParam0, iParam5);
				func_1777(uParam0, 10);
				return true;
			}
			break;
		case 10:
			return true;
	}
	return false;
}

bool func_1347(var uParam0, int iParam1)
{
	return (uParam0->f_2054 && iParam1) != 0;
}

void func_1348(var uParam0, int iParam1)
{
	uParam0->f_2054 = (uParam0->f_2054 - (uParam0->f_2054 && iParam1));
}

void func_1349(var uParam0, var uParam1)
{
	if (func_1347(uParam1, 32768))
	{
		Var0 = { func_1805(uParam0) };
		func_1665(uParam0, &Var0);
		if (func_1347(uParam1, 131072))
		{
			func_714(uParam0, 268435456);
			if (func_386(uParam0->f_865))
			{
				uParam0->f_865 = { func_1806(uParam1, uParam1->f_2074) };
			}
			if (func_386(uParam0->f_862))
			{
				uParam0->f_862 = { func_1806(uParam1, uParam1->f_2074) };
				get_ground_z_for_3d_coord(uParam0->f_862, &(uParam0->f_862.f_2), false);
				uParam0->f_862.f_2 = (uParam0->f_862.f_2 + 0.5f);
			}
		}
		if (func_1347(uParam1, 268435456))
		{
			func_1807(&(uParam0->f_860), 16384);
		}
	}
	else if (func_1347(uParam1, 524288))
	{
		func_714(uParam0, 67108864);
		func_1348(uParam1, 524288);
	}
	if (func_1787(uParam1, 128))
	{
		func_714(uParam0, 32);
	}
	if (uParam1->f_2293 != 0)
	{
		uParam0->f_872 = uParam1->f_2293;
		if (uParam1->f_2074 >= 0 && func_1779(uParam1->f_1406[uParam1->f_2074], 256))
		{
			func_1807(&(uParam0->f_860), 524288);
		}
	}
	if (*uParam1 == 0 && _0x927b810e43e99932(&(uParam1->f_2082)))
	{
		_copy_memory(&(uParam0->f_873), &(uParam1->f_2082), 16);
	}
}

void func_1350(var uParam0)
{
	if (func_754(&(uParam0->f_7375), 128) || func_754(&(uParam0->f_7375), 256))
	{
		if (_does_anim_scene_exist(uParam0->f_7375.f_804))
		{
			_delete_anim_scene(uParam0->f_7375.f_804);
		}
		func_1368(&(uParam0->f_7375));
		func_1271(&(uParam0->f_7375), 128, 1);
		func_1271(&(uParam0->f_7375), 256, 1);
		func_1271(&(uParam0->f_7375), 4096, 1);
	}
}

void func_1351(var uParam0)
{
	func_1808(&(uParam0->f_7375));
}

bool func_1352(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	func_1809(uParam4, &uParam0);
	if (func_754(uParam4, 2) && !func_754(uParam4, 67108864))
	{
		disable_control_action(0, -842734359, false);
	}
	if (func_1810(uParam4) != 1)
	{
		func_1811(uParam4);
	}
	_0xf45e46deecf7df6e(4096, 0, 0, -1, -1);
	set_ped_reset_flag(Global_35, 134, true);
	_uiprompt_enable_prompt_type_this_frame(6);
	_0x9f9a829c6751f3c7(get_player_index(), 31, 1);
	switch (func_1810(uParam4))
	{
		case 1:
			if (_does_anim_scene_exist(uParam4->f_804) && _is_anim_scene_loaded(uParam4->f_804, true, false))
			{
				if (!_is_anim_scene_started(uParam4->f_804, false))
				{
					func_1812(uParam4, &uParam0, uParam5);
				}
				else if (_0xef324e9550a394d5(uParam4->f_804))
				{
					func_1813(uParam4, 4);
					return false;
				}
				else
				{
					if (func_1814(uParam4, 2))
					{
						Stack.Push(uParam4);
						Call_Loc(uParam4->f_797);
					}
					func_1815(uParam5);
				}
				func_1813(uParam4, 3);
			}
			else if (!_does_anim_scene_exist(uParam4->f_804))
			{
				if (!is_screen_fading_out())
				{
					do_screen_fade_out(0);
				}
				if (func_121(uParam5, func_33(uParam5), 262144))
				{
					if (!func_754(uParam4, 2097152))
					{
						func_1816(uParam4);
					}
				}
				else if (!is_string_null_or_empty(&(uParam4->f_806)) && (!func_8(uParam5, 8) || func_754(uParam4, 134217728)))
				{
				}
				else
				{
					func_1817(uParam4);
				}
				func_213(&(uParam4->f_1));
				func_1813(uParam4, 2);
			}
			else
			{
				if (!is_screen_fading_out() && !is_screen_faded_out())
				{
					do_screen_fade_out(0);
				}
				func_1818(uParam4);
				if (!func_26(&(uParam4->f_1)))
				{
					func_27(&(uParam4->f_1), 0);
				}
				else if (func_846(&(uParam4->f_1)) >= 60f)
				{
					if (_does_anim_scene_exist(uParam4->f_804))
					{
						_delete_anim_scene(uParam4->f_804);
					}
					func_1813(uParam4, 4);
				}
			}
			break;
		case 2:
			if (!_does_anim_scene_exist(uParam4->f_804) || !_is_anim_scene_loaded(uParam4->f_804, true, false))
			{
				if (func_1819(uParam4, &uParam0, 1, 1))
				{
					if (!_is_anim_scene_loaded(uParam4->f_804, true, false))
					{
						func_1813(uParam4, 4);
					}
					else if (!func_386(func_1820(uParam4)) && !func_1251(Global_35, func_1820(uParam4), 100f, 1, 1))
					{
						func_1257(1);
						start_player_teleport(get_player_index(), func_1820(uParam4), 0f, true, true, true, false);
					}
				}
				else if (func_846(&(uParam4->f_1)) >= 60f)
				{
					if (_does_anim_scene_exist(uParam4->f_804))
					{
						_delete_anim_scene(uParam4->f_804);
					}
					func_1813(uParam4, 4);
				}
			}
			else if (!is_player_teleport_active() || _has_player_teleport_finished(get_player_index()))
			{
				if (func_271(uParam5) != 0 || (func_154(uParam5) == 1 && func_162(uParam5, func_33(uParam5)) >= 3))
				{
					if (!get_is_loading_screen_active())
					{
						_0xa565fac215cbc77d();
						func_16(1, 0);
						func_1812(uParam4, &uParam0, uParam5);
						func_1813(uParam4, 3);
					}
					else
					{
						shutdown_loading_screen();
					}
				}
			}
			else if (func_846(&(uParam4->f_1)) >= 60f)
			{
				if (_does_anim_scene_exist(uParam4->f_804))
				{
					_delete_anim_scene(uParam4->f_804);
				}
				func_1813(uParam4, 4);
			}
			break;
		case 3:
			func_382(uParam4);
			if (func_1814(uParam4, 2))
			{
				Stack.Push(uParam4);
				Call_Loc(uParam4->f_797);
			}
			func_1815(uParam5);
			if ((_does_anim_scene_exist(uParam4->f_804) && _is_anim_scene_started(uParam4->f_804, false)) && (_0xef324e9550a394d5(uParam4->f_804) || func_754(uParam4, 512)))
			{
				if (!func_754(uParam4, 1024) && func_1821(uParam4, 1))
				{
					set_gameplay_cam_relative_heading(0f, 1f);
					set_gameplay_cam_relative_pitch(0f, 1f);
				}
				if (!func_754(uParam4, 512))
				{
					func_213(&(uParam4->f_1));
					func_714(uParam4, 512);
					func_1813(uParam4, 4);
				}
				else if (func_754(uParam4, 524288))
				{
					if (is_screen_faded_in() || is_screen_fading_in())
					{
					}
					do_screen_fade_out(0);
				}
			}
			else
			{
				func_1811(uParam4);
			}
			if (func_754(uParam4, 524288))
			{
				if (IntToFloat(absi((func_1375(uParam4) - func_1376(uParam4)))) <= 2f)
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
				if (func_1822(uParam4, Global_35, 4))
				{
					_0x1b70811d3bf75db9(1, 1);
				}
				if ((is_screen_faded_out() || is_screen_fading_out()) && func_1376(uParam4) > 5000)
				{
					_0x1b70811d3bf75db9(1, 1);
				}
			}
			if (func_1823(uParam4))
			{
				if (!_does_anim_scene_exist(uParam4->f_804))
				{
				}
				func_1824(uParam4);
				return true;
			}
			else
			{
				if (func_754(uParam4, 67108864))
				{
					if (is_screen_faded_out())
					{
						if (!_is_anim_scene_paused(uParam4->f_804) && !_0xef324e9550a394d5(uParam4->f_804))
						{
							_delete_anim_scene_2(uParam4->f_804);
						}
						func_213(&(uParam4->f_1));
						_0x1b70811d3bf75db9(1, 1);
						func_714(uParam4, 512);
						func_1271(uParam4, 67108864, 1);
						func_1813(uParam4, 4);
					}
					else if (!is_screen_fading_out() && !is_screen_faded_out())
					{
						do_screen_fade_out(1000);
					}
				}
				else if ((((!func_754(uParam4, 16384) && !_0xef324e9550a394d5(uParam4->f_804)) && is_screen_faded_out()) && func_1376(uParam4) <= 5000) && func_1376(uParam4) >= 0)
				{
					do_screen_fade_in(1000);
				}
				if (!func_754(uParam4, 536870912) && has_anim_event_fired(Global_35, -1495039362))
				{
					func_1342(&(uParam4->f_861), 0);
					func_714(uParam4, 536870912);
				}
				if (func_1376(uParam4) >= 5000 && func_1376(uParam4) <= (func_1375(uParam4) - 5000))
				{
					func_1825();
				}
			}
			break;
		case 6:
			if (func_1823(uParam4))
			{
				func_1824(uParam4);
				return true;
			}
			break;
		case 4:
			if (func_754(uParam4, 524288))
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
						func_714(uParam4, 1073741824);
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
				if (func_154(uParam5) == 1 && func_162(uParam5, func_33(uParam5)) >= 3)
				{
					if (func_1826(uParam5))
					{
						if (_does_anim_scene_exist(uParam4->f_804) && _is_anim_scene_paused(uParam4->f_804))
						{
							set_anim_scene_paused(uParam4->f_804, false);
						}
						func_1813(uParam4, 3);
					}
					else if (func_846(&(uParam4->f_1)) >= 30f)
					{
						if (_does_anim_scene_exist(uParam4->f_804) && _is_anim_scene_paused(uParam4->f_804))
						{
							set_anim_scene_paused(uParam4->f_804, false);
						}
						func_1813(uParam4, 3);
					}
				}
				if (iVar0 == 0)
				{
					Stack.Push(!func_1814(uParam4, 4));
					Stack.Push(uParam4);
					Call_Loc(uParam4->f_798);
					if (StackVal || StackVal)
					{
						if (_does_anim_scene_exist(uParam4->f_804) && _is_anim_scene_paused(uParam4->f_804))
						{
							set_anim_scene_paused(uParam4->f_804, false);
						}
						func_1813(uParam4, 3);
					}
					else if (func_846(&(uParam4->f_1)) >= 30f)
					{
						if (_does_anim_scene_exist(uParam4->f_804) && _is_anim_scene_paused(uParam4->f_804))
						{
							set_anim_scene_paused(uParam4->f_804, false);
						}
						func_1813(uParam4, 3);
					}
				}
				if (func_1810(uParam4) == 3)
				{
					if (func_754(uParam4, 524288))
					{
						do_screen_fade_out(0);
					}
				}
			}
			break;
		case 5:
			func_1813(uParam4, 4);
			break;
	}
	return false;
}

void func_1353(var uParam0)
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
			if (decor_exist_on(get_indexed_item_in_itemset(iVar0, Global_43616), func_753()))
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

void func_1354(var uParam0)
{
	func_1816(&(uParam0->f_7375));
}

bool func_1355(int iParam0, bool bParam1)
{
	iVar0 = 1;
	MemCopy(&uVar1, {func_261(iParam0)}, 8);
	StringCopy(&cVar9, _get_label_text_2(&uVar1), 64);
	if (!is_string_null_or_empty(&cVar9))
	{
		if (!func_1827(iParam0))
		{
			iVar0 = 0;
		}
	}
	if (!bParam1)
	{
		MemCopy(&uVar1, {func_262(iParam0)}, 8);
		StringCopy(&cVar9, _get_label_text_2(&uVar1), 64);
		if (!is_string_null_or_empty(&cVar9))
		{
			if (!func_1828(iParam0))
			{
				iVar0 = 0;
			}
		}
	}
	return iVar0;
}

struct<8> func_1356(int iParam0)
{
	MemCopy(&cVar0, {func_261(iParam0)}, 8);
	StringConCat(&cVar0, "_Sounds", 64);
	return cVar0;
}

bool func_1357(int iParam0)
{
	Var0 = { func_1356(iParam0) };
	if (!is_string_null_or_empty(&Var0))
	{
		if (!_0xd9130842d7226045(&Var0, 0))
		{
			return false;
		}
	}
	return true;
}

void func_1358(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 15)
	{
		_datafile_register_query(uParam0->f_2495, iVar0, func_1829(iVar0));
		iVar0++;
	}
}

bool func_1359(var uParam0)
{
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (((func_33(uParam0) == iLocal_100 && iVar0 != 0) || func_33(uParam0) == iLocal_99) || func_33(uParam0) == iLocal_98)
		{
			if (!does_entity_exist(&(Local_115[iVar0])))
			{
				if (func_1830(iVar0, 1))
				{
					Local_115[iVar0] = &Local_14.f_3[iVar0];
					_0x18ff3110cf47115d(&(Local_115[iVar0]), 2, 0);
					_0x18ff3110cf47115d(&(Local_115[iVar0]), 1, 0);
					_0x18ff3110cf47115d(&(Local_115[iVar0]), 0, 0);
					set_ped_flee_attributes(&(Local_115[iVar0]), 16896, true);
					set_ped_config_flag(&(Local_115[iVar0]), 250, true);
					if (iVar0 == 0)
					{
						func_1202(&(Local_115[iVar0]), 1);
						remove_all_ped_weapons(&(Local_115[iVar0]), true, true);
						func_145(uParam0, &(Local_115[0]), "SUS1_GUARD1", 0);
					}
					if (iVar0 == 2)
					{
						uLocal_323 = create_scenario_point(-1426662425, 1108.82f, -1299.25f, 65.86f, -144.4694f, 0f, -1f, 1);
						_task_use_scenario_point(&(Local_115[2]), uVar320, 0, -1, false, true, 0, false, -1f, false);
					}
					func_1238(&(Local_14.f_1), 1);
					return false;
				}
			}
		}
		iVar0++;
	}
	return true;
}

bool func_1360(var uParam0)
{
	if (!does_entity_exist(&(Local_115[5])))
	{
		if (func_1830(5, 1))
		{
			Local_115[5] = &Local_14.f_3[5];
			_set_entity_health(&(Local_115[5]), 75, 0);
			func_151(uParam0, &(Local_115[5]), "ANTONYFOREMEN", 0, 0, 0, 0);
			func_1238(&(Local_14.f_1), 1);
			return false;
		}
		return false;
	}
	return true;
}

bool func_1361()
{
	if (!does_entity_exist(Local_115[5]->f_1))
	{
		Local_115[5]->f_1 = func_1216(-318278790, func_439(7, 0), func_938(7, 0), 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
		func_1238(&(Local_14.f_1), 1);
		return false;
	}
	return true;
}

bool func_1362()
{
	iVar0 = 3;
	while (iVar0 <= 4)
	{
		if (!does_entity_exist(&(Local_115[iVar0])))
		{
			if (func_1830(iVar0, 1))
			{
				Local_115[iVar0] = &Local_14.f_3[iVar0];
				set_ped_config_flag(&(Local_115[iVar0]), 167, true);
				set_ped_config_flag(&(Local_115[iVar0]), 186, false);
				_0xae6004120c18df97(&(Local_115[iVar0]), 0, 0);
				func_1238(&(Local_14.f_1), 1);
				return false;
			}
		}
		iVar0++;
	}
	return true;
}

bool func_1363()
{
	iVar0 = 3;
	while (iVar0 <= 4)
	{
		if (!is_entity_dead(&(Local_115[iVar0])))
		{
			if (!does_entity_exist(Local_115[iVar0]->f_1))
			{
				Local_115[iVar0]->f_1 = func_1216(&(iLocal_307[iVar0]), func_1668(0, iVar0), func_1669(0, iVar0), 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
				func_1230(&(Local_115[4]), Local_115[iVar0]->f_1, 0, -1, 1);
				set_ped_config_flag(Local_115[iVar0]->f_1, 186, false);
				func_1213(Local_115[iVar0]->f_1, 551416228);
				return false;
			}
		}
		iVar0++;
	}
	if (!does_entity_exist(Local_115[5]->f_1))
	{
		Local_115[5]->f_1 = func_1216(&(iLocal_307[5]), func_1214(0, 5), func_1215(0, 5), 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
		func_1230(&(Local_115[5]), Local_115[5]->f_1, 0, -1, 1);
		func_1238(&(Local_14.f_1), 1);
		_0x06d26a96ca1bca75(Local_115[5]->f_1, 3, 0f, 0);
		set_ped_flee_attributes(Local_115[5]->f_1, 512, true);
		func_1213(Local_115[5]->f_1, 0);
		func_1213(Local_115[5]->f_1, 551416228);
		return false;
	}
	return true;
}

bool func_1364(var uParam0)
{
	if (func_120(uParam0, 4194304))
	{
		return true;
	}
	else if (!does_entity_exist(Local_115[6]->f_1))
	{
		Local_115[6]->f_1 = func_1216(&(iLocal_307[6]), func_1214(0, 6), func_1215(0, 6), 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
		set_animal_tuning_bool_param(Local_115[6]->f_1, 48, true);
		func_1238(&(Local_14.f_1), 1);
		_0x437c08db4febe2bd(Local_115[6]->f_1, "MalePassenger", 1f, -1);
		func_1213(Local_115[6]->f_1, 0);
		return false;
	}
	return true;
}

bool func_1365(var uParam0)
{
	if (!does_entity_exist(&(Local_193[0])))
	{
		func_829(uParam0, 22, Local_193[0], 0, 0f, 0f, 0f, 0f, 1, 0, 0, 1, 1, 0);
		func_864(uParam0);
		if (!func_163(22, 28, 0))
		{
			func_442(22, 28, 0);
		}
		if (does_entity_exist(&(Local_193[0])))
		{
			func_151(uParam0, &(Local_193[0]), "TILLY", 0, 0, 0, 0);
			switch (iLocal_59)
			{
				case 0:
					if (_0xa0bc8faed8cfeb3c(&(Local_193[0])))
					{
						iLocal_59 = 1;
					}
					break;
				case 1:
					if (_0xa0bc8faed8cfeb3c(&(Local_193[0])))
					{
						_update_ped_variation(&(Local_193[0]), true, false, true, true, false);
						iLocal_59 = 2;
					}
					break;
				case 2:
					if ((((_0xa0bc8faed8cfeb3c(&(Local_193[0])) && func_33(uParam0) != iLocal_101) && func_33(uParam0) != iLocal_102) && func_33(uParam0) != iLocal_103) && func_33(uParam0) != iLocal_104)
					{
						_set_ped_body_component(&(Local_193[0]), -1945712043);
						_update_ped_variation(&(Local_193[0]), true, false, true, true, false);
					}
					break;
			}
			if (!is_entity_dead(&(Local_193[0])))
			{
			}
			set_blocking_of_non_temporary_events(&(Local_193[0]), true);
			if (func_33(uParam0) == iLocal_103 || func_33(uParam0) == iLocal_104)
			{
				_set_entity_coords_and_heading(&(Local_193[0]), func_176(6, 1), func_1605(6, 1), true, false, true);
			}
			else
			{
				_set_entity_coords_and_heading(&(Local_193[0]), func_176(6, 0), func_1605(6, 0), true, false, true);
				return true;
			}
			iVar0 = func_1694(22, 0, 1, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0);
			if (!is_entity_dead(iVar0))
			{
				delete_ped(&iVar0);
			}
		}
		else
		{
			return false;
		}
	}
	return true;
}

int func_1366(int iParam0)
{
	if (iParam0 == iLocal_98)
	{
		return 0;
	}
	else if (iParam0 == iLocal_99)
	{
		return 1;
	}
	else if (iParam0 == iLocal_100)
	{
		return 2;
	}
	else if (iParam0 == iLocal_101)
	{
		return 3;
	}
	else if (iParam0 == iLocal_102)
	{
		return 4;
	}
	else if (iParam0 == iLocal_103)
	{
		return 5;
	}
	else if (iParam0 == iLocal_104)
	{
		return 6;
	}
	return 0;
}

bool func_1367(var uParam0, int iParam1)
{
	if (!does_entity_exist(&(Local_193[1])))
	{
		if (func_829(uParam0, 19, Local_193[1], 0, 0f, 0f, 0f, 0f, 0, -2040275819, 1, 1, 1, 0) && _0xa0bc8faed8cfeb3c(&(Local_193[1])))
		{
			func_433(19, 1);
			if (iParam1 >= 1)
			{
				func_1165(19, 0, 0);
				set_blocking_of_non_temporary_events(&(Local_193[1]), true);
				func_1624(19);
			}
			if (iParam1 > 0)
			{
				_set_entity_coords_and_heading(&(Local_193[1]), func_176(5, iParam1), func_1605(5, iParam1), true, false, true);
			}
			func_178();
			set_decision_maker(&(Local_193[1]), -455129387);
			func_1667(&(Local_193[1]), 379542007, 0, 0, 0, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
			set_ped_combat_attributes(&(Local_193[1]), 93, true);
			set_ped_combat_attributes(&(Local_193[1]), 54, true);
			set_ped_config_flag(&(Local_193[1]), 168, false);
			set_ped_flee_attributes(&(Local_193[1]), 512, true);
			if (is_ped_on_mount(&(Local_193[1])))
			{
				_remove_ped_from_mount(&(Local_193[1]), true, false);
			}
			func_151(uParam0, &(Local_193[1]), "SusanGrimshaw", 0, 0, 0, 0);
			if (iParam1 == 5)
			{
				if (!is_entity_dead(Local_115[5]->f_1))
				{
					_set_ped_on_mount(&(Local_193[1]), Local_115[5]->f_1, -1, true);
				}
			}
			if (iParam1 == 4)
			{
				if (!is_entity_dead(func_208(7)))
				{
					_set_ped_on_mount(&(Local_193[1]), func_208(7), 0, true);
				}
			}
			if (iParam1 == 6)
			{
				set_blocking_of_non_temporary_events(&(Local_193[1]), true);
			}
			if (iParam1 == 2)
			{
				if (has_ped_got_weapon(&(Local_193[1]), 379542007, 0, false))
				{
				}
				_set_entity_coords_and_heading(&(Local_193[1]), 1115.12f, -1305.28f, 65.6f, 45.62f, true, false, true);
				set_current_ped_weapon(&(Local_193[1]), 379542007, false, 0, false, false);
				set_blocking_of_non_temporary_events(&(Local_193[1]), true);
				iVar0 = add_cover_point(1115.12f, -1305.28f, 65.6f, 6f, 1, 2, 4, false);
				func_1625();
				task_put_ped_directly_into_cover(0, 1115.12f, -1305.28f, 65.6f, -1, 0, 0f, 0, 0, iVar0, 0, 0, 0);
				task_swap_weapon(0, 1, 1, 0, 0);
				func_1626(&(Local_193[1]), -1082130432, -1082130432);
			}
		}
		else
		{
			return false;
		}
	}
	else
	{
		return true;
	}
	return true;
}

void func_1368(var uParam0)
{
	if (_does_volume_exist(uParam0->f_4))
	{
		if (func_754(uParam0, 16))
		{
			_0xa1cfb35069d23c23(uParam0->f_4);
			_0x74c2b3dc0b294102(uParam0->f_4);
			func_1831(uParam0);
			_0xd17672447692478e(uParam0->f_4, 0);
		}
	}
	if (func_754(uParam0, 8))
	{
		_delete_volume(uParam0->f_4);
		func_1271(uParam0, 8, 1);
	}
	uParam0->f_4 = 0;
	func_1271(uParam0, 16, 1);
}

void func_1369(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (func_754(uParam0, 16))
	{
		return;
	}
	if (!_does_volume_exist(uParam0->f_4) && !func_1640(uParam0->f_5, 0f, 0f, 0f))
	{
		uParam0->f_4 = _create_volume_box_with_custom_name(uParam0->f_5, 0f, 0f, 0f, 5f, 5f, 5f, func_1832());
		func_714(uParam0, 8);
	}
	if (_does_volume_exist(uParam0->f_4))
	{
		_0xb56d41a694e42e86(uParam0->f_4, iParam1, iParam4, 0, -1, -1, iParam3);
		_0x18262cafebb5fbe1(uParam0->f_4, iParam1, 0, 0, -1, -1, 0);
		func_1833(uParam0, uParam0->f_4, 0, 1);
		_0xc1799fafd2fdf52b(uParam0->f_4, 0, 0, iParam2);
		func_714(uParam0, 16);
	}
}

int func_1370(int iParam0, int iParam1)
{
	iVar0 = _get_ped_in_draft_seat(iParam0, iParam1);
	if (!does_entity_exist(iVar0))
	{
	}
	if (is_entity_dead(iVar0))
	{
	}
	return iVar0;
}

bool func_1371(int iParam0, int iParam1, int iParam2, bool bParam3)
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

void func_1372(int iParam0)
{
	func_913(iParam0, 4, 1);
}

void func_1373(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (!does_entity_exist(func_516(iParam0)))
	{
		func_164(iParam0, 4, 1);
		func_164(iParam0, 17, 1);
		func_164(iParam0, 1, 1);
		func_164(iParam0, 2, 1);
		return;
	}
	if (!func_429(iParam0))
	{
		return;
	}
	if (func_1834(iParam0) && !bParam2)
	{
		return;
	}
	if (func_485(iParam0) && !bParam2)
	{
		return;
	}
	if (iParam0 == Global_1357549->f_1497 && !bParam2)
	{
		return;
	}
	if (((!bParam3 && does_entity_exist(func_516(iParam0))) && func_1414(iParam0) < 5000f) && !is_screen_faded_out())
	{
		return;
	}
	func_164(iParam0, 4, 1);
	func_164(iParam0, 17, 1);
	func_164(iParam0, 1, 1);
	func_164(iParam0, 2, 1);
	func_1835(iParam0, func_516(iParam0));
	func_912(iParam0, 1, 1, 1, bParam4);
}

bool func_1374(bool bParam0)
{
	if (does_entity_exist(iLocal_227))
	{
		if (bParam0 || (does_entity_exist(_get_ped_in_draft_seat(iLocal_227, 0)) && does_entity_exist(_get_ped_in_draft_seat(iLocal_227, 1))))
		{
			_0x4c60c333f9cca2b6(iLocal_227, 1);
			set_vehicle_extra(iLocal_227, 1, true);
			set_vehicle_extra(iLocal_227, 2, true);
			set_vehicle_extra(iLocal_227, 3, true);
			set_entity_only_damaged_by_player(iLocal_227, true);
			if (!bParam0)
			{
				set_entity_only_damaged_by_player(_get_ped_in_draft_seat(iLocal_227, 0), true);
				set_entity_only_damaged_by_player(_get_ped_in_draft_seat(iLocal_227, 1), true);
			}
			if ((is_vehicle_extra_turned_on(iLocal_227, 1) || is_vehicle_extra_turned_on(iLocal_227, 2)) || is_vehicle_extra_turned_on(iLocal_227, 3))
			{
				return false;
			}
			else
			{
				return true;
			}
		}
	}
	return false;
}

int func_1375(var uParam0)
{
	if (!_does_anim_scene_exist(uParam0->f_804) || !_is_anim_scene_started(uParam0->f_804, false))
	{
		return -1;
	}
	return floor((_get_anim_scene_duration(uParam0->f_804) * 1000f));
}

int func_1376(var uParam0)
{
	if (!_does_anim_scene_exist(uParam0->f_804) || !_is_anim_scene_started(uParam0->f_804, false))
	{
		return -1;
	}
	return floor((_get_anim_scene_time(uParam0->f_804) * 1000f));
}

bool func_1377(var uParam0)
{
	switch (iLocal_79)
	{
		case 0:
			set_player_control(player_id(), false, 0, true);
			if (func_1836(&uLocal_80))
			{
				iLocal_79 = 1;
			}
			else
			{
				func_1837(&uLocal_80, "SUS1_SPARE", "SUS1_KILL", func_522(), 0, 17000, 1, -1, -1);
			}
			break;
		case 1:
			if (_get_anim_scene_time(uParam0->f_7375.f_804) > 74.9f)
			{
				set_anim_scene_bool(uParam0->f_7375.f_804, "b_SubtitlesOff", true, false);
			}
			if (func_1838(&uLocal_80))
			{
				if (func_1839(&uLocal_80) || _0x1f0e401031e20146(uParam0->f_7375.f_804, "2B-LetGo"))
				{
					set_anim_scene_bool(uParam0->f_7375.f_804, "b_SubtitlesOff", false, false);
					func_113(1);
					set_player_control(player_id(), true, 0, false);
					func_406(&iLocal_61, 1);
					if (_0x1f0e401031e20146(uParam0->f_7375.f_804, "1-Start"))
					{
						set_anim_scene_bool(uParam0->f_7375.f_804, "Loop", true, false);
						set_anim_scene_bool(uParam0->f_7375.f_804, "Kill_is", false, false);
						func_1665(&(uParam0->f_7375), "2B-LetGo");
					}
					else
					{
						_0xea323f5e1a4da2f1(-163964935, "SUS1_SPARE");
						func_1840(&uLocal_80);
						iLocal_79 = 2;
						return true;
					}
				}
				else if (func_1841(&uLocal_80) || _0x1f0e401031e20146(uParam0->f_7375.f_804, "2A-Kill"))
				{
					set_anim_scene_bool(uParam0->f_7375.f_804, "b_SubtitlesOff", false, false);
					set_player_control(player_id(), true, 0, false);
					func_406(&iLocal_61, 2);
					func_1656((*Global_1347702)[16]->f_15, 1);
					if (_0x1f0e401031e20146(uParam0->f_7375.f_804, "1-Start"))
					{
						set_anim_scene_bool(uParam0->f_7375.f_804, "Loop", true, false);
						set_anim_scene_bool(uParam0->f_7375.f_804, "Kill_is", true, false);
						func_1665(&(uParam0->f_7375), "2A-Kill");
					}
					else
					{
						_0xea323f5e1a4da2f1(648122183, "SUS1_KILL");
						func_1840(&uLocal_80);
						iLocal_79 = 2;
						return true;
					}
				}
				else
				{
					return false;
				}
			}
			break;
	}
	return false;
}

void func_1378(var uParam0, int iParam1)
{
	func_1271(&(uParam0->f_7375), iParam1, 1);
}

void func_1379(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, float fParam5)
{
	_task_start_scenario_in_place(iParam0, iParam1, iParam2, bParam3, iParam4, fParam5, false);
}

void func_1380(var uParam0)
{
	iVar16 = func_33(uParam0);
	iVar17 = func_132(iVar16);
	iVar18 = func_162(uParam0, iVar16);
	if (uParam0->f_8269.f_2504 > 0)
	{
		iVar19 = 0;
		while (iVar19 < uParam0->f_8269.f_2504)
		{
			if (func_210(uParam0->f_8269[iVar19], 1048576))
			{
				if (func_1842(uParam0, uParam0->f_8269[iVar19], iVar16, iVar17, iVar18))
				{
					func_1299(uParam0->f_8269[iVar19]);
				}
				else if (func_1843(uParam0, uParam0->f_8269[iVar19], iVar16, iVar17, iVar18))
				{
					func_220(uParam0->f_8269[iVar19]);
					if (iVar19 < (uParam0->f_8269.f_2504 - 1))
					{
						_copy_memory(uParam0->f_8269[iVar19], uParam0->f_8269[(uParam0->f_8269.f_2504 - 1)], 16);
						_copy_memory(uParam0->f_8269[uParam0->f_8269.f_2504], &uVar0, 16);
						iVar19 = (iVar19 - 1);
					}
					else
					{
						_copy_memory(uParam0->f_8269[iVar19], &uVar0, 16);
					}
					uParam0->f_8269.f_2504 = (uParam0->f_8269.f_2504 - 1);
				}
			}
			iVar19++;
		}
	}
	if (uParam0->f_8269.f_2505 > 0)
	{
		iVar19 = 0;
		while (iVar19 < uParam0->f_8269.f_2505)
		{
			if (func_210(uParam0->f_8269.f_641[iVar19], 1048576))
			{
				if (func_1844(uParam0, uParam0->f_8269.f_641[iVar19], iVar16, iVar17, iVar18, 1))
				{
					func_1845(uParam0->f_8269.f_641[iVar19]);
					if (iVar19 < (uParam0->f_8269.f_2505 - 1))
					{
						_copy_memory(uParam0->f_8269.f_641[iVar19], uParam0->f_8269.f_641[(uParam0->f_8269.f_2505 - 1)], 16);
						_copy_memory(uParam0->f_8269.f_641[(uParam0->f_8269.f_2505 - 1)], &uVar0, 16);
						iVar19 = (iVar19 - 1);
					}
					else
					{
						_copy_memory(uParam0->f_8269.f_641[iVar19], &uVar0, 16);
					}
					uParam0->f_8269.f_2505 = (uParam0->f_8269.f_2505 - 1);
				}
			}
			iVar19++;
		}
	}
	if (uParam0->f_8269.f_2506 > 0)
	{
		iVar19 = 0;
		while (iVar19 < uParam0->f_8269.f_2506)
		{
			if (func_210(uParam0->f_8269.f_1282[iVar19], 1048576))
			{
				if (func_1844(uParam0, uParam0->f_8269.f_1282[iVar19], iVar16, iVar17, iVar18, 0))
				{
					if (func_211(uParam0->f_8269.f_1282[iVar19], 1))
					{
						if (func_210(uParam0->f_8269.f_1282[iVar19], 4))
						{
							func_1846(&(uParam0->f_8269));
						}
						if (iVar19 < (uParam0->f_8269.f_2506 - 1))
						{
							_copy_memory(uParam0->f_8269.f_1282[iVar19], uParam0->f_8269.f_1282[(uParam0->f_8269.f_2506 - 1)], 16);
							_copy_memory(uParam0->f_8269.f_1282[(uParam0->f_8269.f_2506 - 1)], &uVar0, 16);
							iVar19 = (iVar19 - 1);
						}
						else
						{
							_copy_memory(uParam0->f_8269.f_1282[iVar19], &uVar0, 16);
						}
						uParam0->f_8269.f_2506 = (uParam0->f_8269.f_2506 - 1);
					}
				}
			}
			iVar19++;
		}
	}
	if (uParam0->f_8269.f_2507 > 0)
	{
		iVar19 = 0;
		while (iVar19 < uParam0->f_8269.f_2507)
		{
			if (func_210(uParam0->f_8269.f_2243[iVar19], 1048576))
			{
				if (func_1842(uParam0, uParam0->f_8269.f_2243[iVar19], iVar16, iVar17, iVar18))
				{
					func_1847(uParam0, uParam0->f_8269.f_2243[iVar19], 1);
					func_466(uParam0->f_8269.f_2243[iVar19], 1);
				}
				else if (func_1843(uParam0, uParam0->f_8269.f_2243[iVar19], iVar16, iVar17, iVar18))
				{
					func_1847(uParam0, uParam0->f_8269.f_2243[iVar19], 0);
					func_466(uParam0->f_8269.f_2243[iVar19], 2);
					if (iVar19 < (uParam0->f_8269.f_2507 - 1))
					{
						_copy_memory(uParam0->f_8269.f_2243[iVar19], uParam0->f_8269.f_2243[iVar19 + 1], 16);
						_copy_memory(uParam0->f_8269.f_2243[iVar19 + 1], &uVar0, 16);
						iVar19 = (iVar19 - 1);
					}
					else
					{
						_copy_memory(uParam0->f_8269.f_2243[iVar19], &uVar0, 16);
					}
					uParam0->f_8269.f_2507 = (uParam0->f_8269.f_2507 - 1);
				}
			}
			iVar19++;
		}
	}
}

bool func_1381(var uParam0)
{
	if (func_121(uParam0, func_33(uParam0), 16777216))
	{
		return false;
	}
	if (!func_121(uParam0, func_33(uParam0), 2))
	{
		return false;
	}
	if (!Global_1935630->f_12)
	{
		return ((get_is_task_active(Global_35, 3) || func_1642(Global_35, -2017877118)) || _0x3ab6c7b0bb0df4b1(Global_35, -1));
	}
	return false;
}

void func_1382()
{
	_0x8910c24b7e0046ec();
	disable_control_action(0, -1404316431, false);
	func_1780(0);
	func_1848();
}

void func_1383(var uParam0, int iParam1, int iParam2)
{
	func_1849(&(uParam0->f_1[func_132(iParam1)]->f_11), iParam2);
	if (iParam2 == 8388608)
	{
		_display_hud_component(-1679307491);
	}
}

void func_1384(var uParam0)
{
	if (func_484(uParam0, 32768))
	{
		return;
	}
	bVar0 = func_484(uParam0, 1024);
	if (func_484(uParam0, 128) || bVar0)
	{
		if (func_484(uParam0, 4096))
		{
			if (!func_484(uParam0, 2048))
			{
				iVar1 = get_blip_from_entity(*uParam0);
				if (does_blip_exist(iVar1))
				{
					_blip_set_modifier(iVar1, -1186550032);
				}
				func_1850(uParam0, 2048);
				return;
			}
		}
		else if (func_484(uParam0, 2048))
		{
			iVar2 = get_blip_from_entity(*uParam0);
			if (does_blip_exist(iVar2))
			{
				_set_blip_flash_style(iVar2, -1186550032);
			}
			func_1851(uParam0, 2048);
		}
		if (func_484(uParam0, 512))
		{
			if (func_429(uParam0->f_10))
			{
				if (func_832(Global_35, *uParam0, 150f, 1) || bVar0)
				{
					if (!func_1852(uParam0->f_10))
					{
						func_433(uParam0->f_10, 1);
						func_1639(uParam0->f_10, 0);
					}
				}
				else if ((func_1852(uParam0->f_10) && !bVar0) && !func_484(uParam0, 16384))
				{
					func_433(uParam0->f_10, 0);
					func_1639(uParam0->f_10, 1);
				}
			}
		}
		else if (!does_blip_exist(uParam0->f_8))
		{
			if (!does_blip_exist(get_blip_from_entity(*uParam0)))
			{
				if (func_832(Global_35, *uParam0, 150f, 1))
				{
					uParam0->f_8 = _blip_add_for_entity(422991367, *uParam0);
					if (!is_string_null_or_empty(uParam0->f_4))
					{
						set_blip_name_from_text_file(uParam0->f_8, uParam0->f_4);
					}
				}
			}
		}
		else if ((does_blip_exist(get_blip_from_entity(*uParam0)) && uParam0->f_8 != get_blip_from_entity(*uParam0)) || !func_832(Global_35, *uParam0, 150f, 1))
		{
			remove_blip(&(uParam0->f_8));
		}
	}
	else if (func_484(uParam0, 512))
	{
		if (func_429(uParam0->f_10))
		{
			if (func_1852(uParam0->f_10))
			{
				func_433(uParam0->f_10, 0);
				func_1639(uParam0->f_10, 1);
			}
		}
	}
	else if (does_blip_exist(uParam0->f_8))
	{
		remove_blip(&(uParam0->f_8));
	}
}

bool func_1385(int iParam0)
{
	return (iParam0 < func_387() && iParam0 >= 0);
}

int func_1386(int iParam0)
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

bool func_1387(int iParam0)
{
	return (iParam0 < 9 && iParam0 >= 0);
}

bool func_1388(var uParam0, int iParam1, int iParam2)
{
	iVar0 = func_132(iParam1);
	if (!func_1385(iVar0))
	{
		return false;
	}
	iVar1 = func_1386(iParam2);
	if (!func_1387(iVar1))
	{
		return false;
	}
	return is_bit_set(uParam0->f_1[iVar0]->f_17, iVar1);
}

int func_1389(struct<2> Param0, int iParam2)
{
	if (!func_248(Param0))
	{
		return 0;
	}
	iVar0 = get_indexed_item_in_itemset(iParam2, Param0);
	iVar1 = iVar0;
	return iVar1;
}

void func_1390(var uParam0)
{
	func_1853(uParam0);
	if (func_271(uParam0) == 1 && is_screen_faded_out())
	{
		_0x297b72e2af094742(6);
	}
	else if (func_271(uParam0) == 0 && !func_8(uParam0, 8))
	{
		func_840(uParam0);
	}
	func_51(&(uParam0->f_10792));
	func_1854(uParam0);
	func_1855(uParam0, 67108864);
	func_1855(uParam0, 8192);
	func_842(uParam0, 4);
	func_842(uParam0, 512);
	func_842(uParam0, 65536);
	func_842(uParam0, 1024);
	func_842(uParam0, 262144);
	func_842(uParam0, 16777216);
	func_842(uParam0, 64);
	func_257(uParam0, 128);
	func_99(uParam0, -2147483648);
	func_1856(uParam0, 1);
	if (func_120(uParam0, 4194304))
	{
		func_140(uParam0, func_33(uParam0), 1073741824);
	}
	func_257(uParam0, 4194304);
	func_257(uParam0, 8388608);
	if (!func_121(uParam0, func_33(uParam0), 2048))
	{
		set_player_control(get_player_index(), true, 0, false);
	}
	if (func_20() == 0)
	{
		func_21(8);
		func_79(1);
	}
	if (func_121(uParam0, func_33(uParam0), 64) || !func_115(uParam0))
	{
		func_40(0);
	}
	else
	{
		func_40(1);
	}
	_set_milliseconds_per_game_minute(2000);
	if (!func_8(uParam0, 131072))
	{
		set_everyone_ignore_player(get_player_index(), false);
	}
	func_517(&(uParam0->f_13106));
	func_213(&(uParam0->f_13112));
	func_1857(uParam0, func_121(uParam0, func_33(uParam0), 1));
	if (!func_121(uParam0, func_33(uParam0), 1024))
	{
		_display_hud_component(-1679307491);
	}
	if (!func_121(uParam0, func_33(uParam0), 32768))
	{
		func_228(1);
	}
	if (func_877(uParam0, func_35(uParam0)) != -1 && _0x62de46f061caa468() < func_877(uParam0, func_35(uParam0)))
	{
		_0xf008e0ba1fe1d644((func_877(uParam0, func_35(uParam0)) - _0x62de46f061caa468()));
	}
	if (_missiondata_timecycle_box_exists())
	{
		_missiondata_timecycle_box_delete();
	}
	Var0 = { func_1858(uParam0) };
	_missiondata_timecycle_box_set_modifier(&Var0);
	Global_43805 = -1;
	if (func_121(uParam0, func_33(uParam0), 1))
	{
		func_222(Global_1935630, 2097152);
	}
	else
	{
		func_71(Global_1935630, 2097152);
	}
	func_1859(uParam0);
	if (func_33(uParam0) == 25 && func_82(32768))
	{
		func_1860(uParam0, 16);
	}
	if (func_121(uParam0, func_33(uParam0), 512))
	{
		func_1861(1f, 0f, 0f, 0f);
	}
	else
	{
		func_44();
	}
}

bool func_1391(var uParam0)
{
	if (func_120(uParam0, 4) && !func_29())
	{
		return true;
	}
	return false;
}

void func_1392(var uParam0)
{
	func_1815(uParam0);
}

void func_1393(var uParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < 65)
	{
		func_1293(uParam0->f_13[iVar0], iParam1);
		iVar0++;
	}
}

void func_1394(var uParam0)
{
	func_1862(uParam0);
	if (_get_ped_crouch_movement(Global_35))
	{
		func_99(uParam0, 1024);
	}
}

bool func_1395(var uParam0)
{
	return (_does_anim_scene_exist(uParam0->f_804) && _is_anim_scene_started(uParam0->f_804, false));
}

bool func_1396(var uParam0)
{
	return true;
}

void func_1397(var uParam0, char[32] cParam1)
{
	uParam0->f_10784 = { cParam1 };
}

bool func_1398(var uParam0, int iParam1)
{
	iVar0 = func_1863(iParam1);
	return (uParam0 && iVar0) != 0;
}

int func_1399(var uParam0, var uParam1, bool bParam2)
{
	if (Global_1935630->f_12)
	{
		return 0;
	}
	if (func_1864(uParam0, uParam1))
	{
		return 0;
	}
	if (func_429(uParam1->f_10))
	{
		set_ped_reset_flag(get_ped_index_from_entity_index(*uParam1), 53, true);
	}
	func_1384(uParam1);
	func_1865(uParam1);
	if (!bParam2)
	{
		func_1866(uParam0, uParam1);
	}
	iVar0 = 0;
	while (iVar0 < get_number_of_events(0))
	{
		switch (get_event_at_index(0, iVar0))
		{
			case -140551285:
				func_1867(uParam0, uParam1, iVar0);
				break;
			case 402722103:
			case 2145012826:
				func_1868(uParam0, uParam1, iVar0);
				break;
		}
		iVar0++;
	}
	func_1869(uParam0, uParam1);
	func_1870(uParam1);
	return 0;
}

bool func_1400(var uParam0)
{
	return true;
}

int func_1401(int iParam0)
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
						*iParam0 = func_1871(vVar0.z);
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

void func_1402(var uParam0, char[4] cParam1, bool bParam2, int iParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, bool bParam9, bool bParam10)
{
	func_1619(uParam0, &cParam1, "", bParam9, bParam10);
}

bool func_1403(var uParam0, char[4] cParam1)
{
	if (!func_121(uParam0, func_33(uParam0), 256))
	{
		if (!func_121(uParam0, func_33(uParam0), 65536))
		{
			if (func_1872(cParam1))
			{
				func_140(uParam0, func_33(uParam0), 131072);
			}
			func_140(uParam0, func_33(uParam0), 65536);
		}
		if (func_121(uParam0, func_33(uParam0), 131072))
		{
			if (!func_1347(&(uParam0->f_10792), 1))
			{
				return false;
			}
			else
			{
				func_1873(&(uParam0->f_7375), &(uParam0->f_10792));
				func_140(uParam0, func_33(uParam0), 256);
			}
		}
		else
		{
			func_140(uParam0, func_33(uParam0), 256);
		}
	}
	return func_1819(&(uParam0->f_7375), cParam1, (func_8(uParam0, 33554432) || (is_screen_faded_out() && !func_8(uParam0, 1073741824))), 1);
}

void func_1404(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, int iParam12, int iParam13)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_784((*uParam0)[iVar0]->f_2, iParam12))
		{
			func_1874(&((*uParam0)[iVar0]->f_2), iParam12);
			if (func_1875(&((*uParam0)[iVar0]->f_2), iParam13))
			{
				func_1876((*uParam0)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (func_784((*uParam1)[iVar0]->f_4, iParam12))
		{
			func_1874(&((*uParam1)[iVar0]->f_4), iParam12);
			if (func_1875(&((*uParam1)[iVar0]->f_4), iParam13))
			{
				func_1877((*uParam1)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam2)
	{
		if (func_784((*uParam2)[iVar0]->f_2, iParam12))
		{
			func_1874(&((*uParam2)[iVar0]->f_2), iParam12);
			if (func_1875(&((*uParam2)[iVar0]->f_2), iParam13))
			{
				func_1878((*uParam2)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam3)
	{
		if (func_784((*uParam3)[iVar0]->f_2, iParam12))
		{
			func_1874(&((*uParam3)[iVar0]->f_2), iParam12);
			if (func_1875(&((*uParam3)[iVar0]->f_2), iParam13))
			{
				func_1879((*uParam3)[iVar0]);
			}
		}
		iVar0++;
	}
	if (func_784(uParam4->f_1, iParam12))
	{
		func_1874(&(uParam4->f_1), iParam12);
		if (func_1875(&(uParam4->f_1), iParam13))
		{
			func_1880(uParam4);
		}
	}
	iVar0 = 0;
	while (iVar0 < *uParam5)
	{
		if (func_784((*uParam5)[iVar0]->f_3, iParam12))
		{
			func_1874(&((*uParam5)[iVar0]->f_3), iParam12);
			if (func_1875(&((*uParam5)[iVar0]->f_3), iParam13))
			{
				func_1881((*uParam5)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam6)
	{
		if (func_784((*uParam6)[iVar0]->f_3, iParam12))
		{
			func_1874(&((*uParam6)[iVar0]->f_3), iParam12);
			if (func_1875(&((*uParam6)[iVar0]->f_3), iParam13))
			{
				func_1882((*uParam6)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam7)
	{
		if (func_784((*uParam7)[iVar0]->f_4, iParam12))
		{
			func_1874(&((*uParam7)[iVar0]->f_4), iParam12);
			if (func_1875(&((*uParam7)[iVar0]->f_4), iParam13))
			{
				func_1883((*uParam7)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam8)
	{
		if (func_784((*uParam8)[iVar0]->f_2, iParam12))
		{
			func_1874(&((*uParam8)[iVar0]->f_2), iParam12);
			if (func_1875(&((*uParam8)[iVar0]->f_2), iParam13))
			{
				func_1884((*uParam8)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam9)
	{
		if (func_784((*uParam9)[iVar0]->f_2, iParam12))
		{
			func_1874(&((*uParam9)[iVar0]->f_2), iParam12);
			if (func_1875(&((*uParam9)[iVar0]->f_2), iParam13))
			{
				func_1885((*uParam9)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam10)
	{
		if (func_784((*uParam10)[iVar0]->f_3, iParam12))
		{
			func_1874(&((*uParam10)[iVar0]->f_3), iParam12);
			if (func_1875(&((*uParam10)[iVar0]->f_3), iParam13))
			{
				func_1886((*uParam10)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam11)
	{
		if (func_784((*uParam11)[iVar0]->f_2, iParam12))
		{
			func_1874(&((*uParam11)[iVar0]->f_2), iParam12);
			if (func_1875(&((*uParam11)[iVar0]->f_2), iParam13))
			{
				func_1887((*uParam11)[iVar0]);
			}
		}
		iVar0++;
	}
}

void func_1405(var uParam0)
{
	iVar0 = func_1888(uParam0);
	_0x50b72a754ee64a71(iVar0);
}

void func_1406(bool bParam0, bool bParam1)
{
	if (func_1889(255) == 4)
	{
		return;
	}
	if (func_386(get_entity_coords(get_player_ped(player_id()), false, false)))
	{
		return;
	}
	if (!bParam0)
	{
		func_282(0);
	}
	else
	{
		if (bParam1)
		{
			func_1890(0, 0, 0, 1);
		}
		func_283(0);
		func_1891(&(Global_1109400->f_389));
		Global_1109400->f_389 = 0f;
		Global_1109400->f_389.f_5 = 1;
		Global_1109400->f_389.f_16 = 0;
		Global_1109400->f_389.f_17.f_6 = { get_entity_coords(get_player_ped(player_id()), false, false) };
		Global_1109400->f_389.f_17.f_3 = { 0f, 0f, 0f };
		Global_1109400->f_389.f_17 = { Global_1899378->f_23.f_1, Global_1899378->f_23.f_1, Global_1899378->f_23.f_1 };
		Global_1109400->f_389.f_17.f_9 = -432403087;
		func_1892(&(Global_1109400->f_428));
		Global_1109400->f_428.f_6 = { Global_1109400->f_389.f_17.f_6 };
		Global_1109400->f_428 = Global_1109400->f_389;
		Global_1109400->f_428.f_5 = 1;
		if (bParam1)
		{
			Global_1109400->f_22.f_16 = 0;
			Global_1109400->f_22.f_17 = 0;
		}
	}
	func_1893(Global_1109400->f_389, 42);
	func_1894(Global_1109400->f_428, 42);
}

bool func_1407(bool bParam0, bool bParam1, float fParam2)
{
	if (bParam0)
	{
		return bParam1;
	}
	return fParam2;
}

int func_1408(bool bParam0, bool bParam1, bool bParam2)
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

var func_1409(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

char* func_1410(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5)
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

void func_1411(var uParam0, int iParam1, bool bParam2)
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

void func_1412(int iParam0)
{
	if (!func_426(iParam0))
	{
		return;
	}
	if (!_is_base_a_persistent_character((*Global_1360165)[iParam0]->f_1))
	{
		iVar0 = func_1896(iParam0);
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

void func_1413(int iParam0)
{
	if (func_429(iParam0))
	{
		if (does_entity_exist(func_516(iParam0)))
		{
			func_179(iParam0, 67108864, 1);
			func_164(iParam0, 19, 1);
		}
	}
}

float func_1414(int iParam0)
{
	if (!func_426(iParam0))
	{
		return 0f;
	}
	return (*Global_1360165)[iParam0]->f_134;
}

void func_1415(int iParam0)
{
	iVar0 = func_516(iParam0);
	iVar1 = func_908(iParam0, 0);
	func_1835(iParam0, iVar0);
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

bool func_1416(int iParam0)
{
	if (!func_426(iParam0))
	{
		return false;
	}
	if ((*Global_1360165)[iParam0]->f_70.f_11 == 0 || (*Global_1360165)[iParam0]->f_70.f_11 == (*Global_1360165)[iParam0]->f_128)
	{
		return false;
	}
	return true;
}

bool func_1417(int iParam0)
{
	if (!func_426(iParam0))
	{
		return false;
	}
	return (*Global_1360165)[iParam0]->f_70.f_11 == get_id_of_this_thread();
}

void func_1418(int iParam0, int iParam1, bool bParam2)
{
	if (!func_426(iParam0))
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

int func_1419(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (!func_426(iParam0))
	{
		return 0;
	}
	iVar0 = func_914(iParam0);
	if (func_907(iVar0, 0))
	{
		if (func_907(_get_rider_of_mount(iVar0, false), 0) && !bParam4)
		{
			return 0;
		}
		if ((bParam1 || !func_1416(iParam0)) || func_1417(iParam0))
		{
			if (bParam2 || !(is_entity_on_screen(iVar0) && func_1897(player_ped_id(), iVar0, 1) < 10000f))
			{
				iVar1 = func_1898(iParam0, 1);
				if (iVar1 != 0)
				{
					if (!_0x88ad6cc10d8d35b2(iVar0))
					{
						set_entity_as_mission_entity(iVar0, true, true);
					}
					func_1899(iParam0);
					_0x7b204f88f6c3d287(func_1900(iParam0, 0));
					_0xfcc6db8dbe709bc8(func_1900(iParam0, 0));
					func_1901(iParam0);
				}
			}
			else
			{
				if (func_675(iParam0, 32768, 1))
				{
					iVar2 = func_1900(iParam0, 0);
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
		if (func_907((*Global_1360165)[iParam0]->f_124, 0))
		{
			if (func_675(iParam0, 32768, 1))
			{
				if (!_0x88ad6cc10d8d35b2((*Global_1360165)[iParam0]->f_124))
				{
					set_entity_as_mission_entity((*Global_1360165)[iParam0]->f_124, true, true);
				}
				func_1899(iParam0);
				_0x7b204f88f6c3d287(func_1900(iParam0, 0));
				_0xfcc6db8dbe709bc8(func_1900(iParam0, 0));
			}
			else
			{
				set_entity_as_mission_entity((*Global_1360165)[iParam0]->f_124, true, true);
				func_1899(iParam0);
				delete_ped(&((*Global_1360165)[iParam0]->f_124));
			}
		}
	}
	(*Global_1360165)[iParam0]->f_70.f_1 = 0;
	func_1902(iParam0, 0);
	return 1;
}

bool func_1420(int iParam0)
{
	return iParam0 != 0;
}

int func_1421(int iParam0)
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

int func_1422(int iParam0)
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

void func_1423(int iParam0, int iParam1)
{
	Var0 = { *Global_1898164->f_1[iParam0] };
	*Global_1898164->f_1[iParam0] = { *Global_1898164->f_1[iParam1] };
	*Global_1898164->f_1[iParam1] = { Var0 };
}

int func_1424(int iParam0, int iParam1, int iParam2)
{
	iVar0 = func_1903(iParam0, 1);
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
	return 1;
}

void func_1425(int iParam0)
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

void func_1426()
{
	if (func_20() != -1)
	{
		return;
	}
	if (!func_385())
	{
		return;
	}
	func_1904(&(Global_40.f_40));
}

void func_1427()
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

bool func_1428()
{
	return !func_386(Global_1310720->f_1);
}

int func_1429()
{
	return Global_40.f_4283.f_1;
}

int func_1430()
{
	return Global_40.f_4283.f_4;
}

void func_1431(vector3 vParam0, var uParam3, var uParam4)
{
	fVar0 = 1E+07f;
	fVar1 = 1E+07f;
	if (func_1905())
	{
		fVar0 = func_948(vParam0, Global_40.f_6);
	}
	if (func_1906(33554432))
	{
		if (!func_1907(Global_40.f_2, 0f, 0f, 0f, 1056964608, 1))
		{
			fVar1 = func_948(vParam0, Global_40.f_2);
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

float func_1432(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist2(vParam0, vParam3);
}

void func_1433()
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
	fVar0 = (fVar0 + (0.9259259f * to_float(func_1908(909007663, 1325140787))));
	fVar0 = (fVar0 + (0.2525252f * to_float(func_1908(909007663, 2101241783))));
	fVar0 = (fVar0 + (0.2923976f * to_float(func_1908(909007663, -1296936294))));
	fVar0 = (fVar0 + (0.462963f * to_float(func_1908(909007663, -798388728))));
	fVar0 = (fVar0 + (0.9259259f * to_float(func_1908(909007663, -1787586531))));
	fVar0 = (fVar0 + (0.308642f * to_float(func_1908(909007663, -1002834519))));
	fVar0 = (fVar0 + (5.555555f * to_float(func_1908(909007663, -50600144))));
	fVar0 = (fVar0 + (0.6944444f * to_float(func_1908(909007663, -348503123))));
	fVar0 = (fVar0 + (0.3703704f * to_float(func_1908(909007663, -528798161))));
	fVar0 = (fVar0 + (0.5f * func_1909(10f, to_float(func_1908(909007663, 551192206)))));
	fVar0 = (fVar0 + (0.6f * func_1909(5f, to_float(func_1908(909007663, -406093146)))));
	fVar0 = (fVar0 + (0.2f * func_1909(25f, to_float(func_1910(-1029789297)))));
	fVar0 = (fVar0 + (2f * func_1909(1f, to_float(func_1910(-843295694)))));
	fVar0 = (fVar0 + (0.3333333f * func_1909(6f, to_float(func_1910(64058978)))));
	fVar0 = (fVar0 + (3f * func_1909(1f, to_float(func_1910(795577402)))));
	iVar1 = func_1911();
	fVar0 = (fVar0 + (0.1111111f * func_1909(9f, to_float(iVar1))));
	fVar2 = (to_float(_0x5461c821d00fe15a(-2076669067, 1665658745)) / to_float(_0x62cab7db62ead434(-2076669067, 1665658745)));
	fVar2 = func_1912(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, -263938772)) / to_float(_0x62cab7db62ead434(-2076669067, -263938772))));
	fVar2 = func_1912(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, 228647253)) / to_float(_0x62cab7db62ead434(-2076669067, 228647253))));
	fVar2 = func_1912(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, 1695604435)) / to_float(_0x62cab7db62ead434(-2076669067, 1695604435))));
	fVar2 = func_1912(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, -379038926)) / to_float(_0x62cab7db62ead434(-2076669067, -379038926))));
	fVar2 = func_1912(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, 1597499323)) / to_float(_0x62cab7db62ead434(-2076669067, 1597499323))));
	fVar2 = func_1912(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, -278663717)) / to_float(_0x62cab7db62ead434(-2076669067, -278663717))));
	fVar2 = func_1912(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, 586249988)) / to_float(_0x62cab7db62ead434(-2076669067, 586249988))));
	fVar2 = func_1912(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, -419800938)) / to_float(_0x62cab7db62ead434(-2076669067, -419800938))));
	fVar2 = func_1912(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, -1362069171)) / to_float(_0x62cab7db62ead434(-2076669067, -1362069171))));
	fVar2 = func_1912(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, -740350755)) / to_float(_0x62cab7db62ead434(-2076669067, -740350755))));
	fVar2 = func_1912(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, 1511070393)) / to_float(_0x62cab7db62ead434(-2076669067, 1511070393))));
	fVar0 = (fVar0 + func_1909(1f, fVar2));
	fVar0 = (fVar0 + (0.05f * func_1909(to_float(20), to_float(func_1913()))));
	if (func_1914(40))
	{
		fVar0 = (fVar0 + (1f * 1f));
	}
	if (func_1914(42))
	{
		fVar0 = (fVar0 + (1f * 1f));
	}
	if (func_1914(48))
	{
		fVar0 = (fVar0 + (1f * 1f));
	}
	if (func_1914(50))
	{
		fVar0 = (fVar0 + (1f * 1f));
	}
	if (func_1914(52))
	{
		fVar0 = (fVar0 + (1f * 1f));
	}
	fVar2 = (to_float(_0x5461c821d00fe15a(1765845133, 499813453)) / to_float(_0x62cab7db62ead434(1765845133, 499813453)));
	fVar2 = func_1912(fVar2, (to_float(_0x5461c821d00fe15a(1765845133, 666607663)) / to_float(_0x62cab7db62ead434(1765845133, 666607663))));
	fVar2 = func_1912(fVar2, (to_float(_0x5461c821d00fe15a(1765845133, -220219788)) / to_float(_0x62cab7db62ead434(1765845133, -220219788))));
	fVar2 = func_1912(fVar2, (to_float(_0x5461c821d00fe15a(1765845133, 218622660)) / to_float(_0x62cab7db62ead434(1765845133, 218622660))));
	fVar2 = func_1912(fVar2, (to_float(_0x5461c821d00fe15a(1765845133, 390004462)) / to_float(_0x62cab7db62ead434(1765845133, 390004462))));
	fVar2 = func_1912(fVar2, (to_float(_0x5461c821d00fe15a(1765845133, 6410548)) / to_float(_0x62cab7db62ead434(1765845133, 6410548))));
	fVar0 = (fVar0 + (1f * func_1909(1f, fVar2)));
	fVar0 = (fVar0 + (0.2f * func_1909(5f, to_float(func_1910(1933084904)))));
	fVar0 = (fVar0 + (0.2f * func_1909(5f, to_float(func_1908(-1756227506, -734935893)))));
	fVar0 = (fVar0 + (to_float(func_1494(_0x729d52f61a5a9e22(1979337996), 50)) / to_float(50)));
	fVar0 = (fVar0 + (to_float(func_1494(_0x729d52f61a5a9e22(-2125891426), 10)) / to_float(10)));
	fVar0 = (fVar0 + (to_float(func_1494(_0x729d52f61a5a9e22(1630085303), 10)) / to_float(10)));
	fVar0 = (fVar0 + _0x725d52f21a5e9e22(-1658238931));
	fVar0 = (fVar0 + (to_float(func_1494(_0x729d52f61a5a9e22(1807539419), 20)) / to_float(20)));
	fVar0 = (fVar0 + (to_float(func_1494(_0x729d52f61a5a9e22(717108105), 10)) / to_float(10)));
	fVar0 = (fVar0 + (to_float(func_1494(_0x729d52f61a5a9e22(-2143405780), 48)) / to_float(48)));
	func_1915(&iVar3, &iVar4);
	fVar0 = (fVar0 + (2f * func_1909((to_float(iVar3) / to_float(iVar4)), 1f)));
	fVar0 = (fVar0 + (2f * func_1909(1f, to_float(func_1916(-2116919750)))));
	fVar5 = to_float(func_1917());
	fVar0 = (fVar0 + ((3f * fVar5) / to_float(9)));
	fVar0 = (fVar0 + ((1f / 4f) * func_1909(1f, to_float(func_1908(1511238709, -747096482)))));
	fVar0 = (fVar0 + ((1f / 4f) * func_1909(1f, to_float(func_1908(1511238709, 549911940)))));
	fVar0 = (fVar0 + ((1f / 4f) * func_1909(1f, to_float(func_1908(1511238709, -760820978)))));
	fVar0 = (fVar0 + ((1f / 4f) * func_1909(1f, to_float(func_1908(1511238709, -1672018311)))));
	fVar0 = (fVar0 + (0.2f * func_1909(5f, to_float(func_1910(-1342635612)))));
	fVar0 = (fVar0 + (0.5f * func_1909(1f, to_float(func_1910(-2061916883)))));
	fVar0 = (fVar0 + (0.5f * func_1909(1f, to_float(func_1910(281346304)))));
	fVar0 = (fVar0 + (0.5f * func_1909(1f, to_float(func_1910(-299021541)))));
	fVar0 = (fVar0 + ((0.5f / 6f) * func_1909(1f, to_float(func_1908(-1276738576, 307971639)))));
	fVar0 = (fVar0 + ((0.5f / 6f) * func_1909(1f, to_float(func_1908(-1276738576, -1555359431)))));
	fVar0 = (fVar0 + ((0.5f / 6f) * func_1909(1f, to_float(func_1908(-1276738576, 644069854)))));
	fVar0 = (fVar0 + ((0.5f / 6f) * func_1909(1f, to_float(func_1908(-1276738576, -97115714)))));
	fVar0 = (fVar0 + ((0.5f / 6f) * func_1909(1f, to_float(func_1908(-1276738576, -2143405780)))));
	fVar0 = (fVar0 + ((0.5f / 6f) * func_1909(1f, to_float(func_1908(-1276738576, 1455184052)))));
	fVar0 = (fVar0 + ((1f / 4f) * func_1909(1f, to_float(func_1908(978382515, -2072933068)))));
	fVar0 = (fVar0 + ((1f / 4f) * func_1909(1f, to_float(func_1908(978382515, 574993838)))));
	fVar0 = (fVar0 + ((1f / 4f) * func_1909(1f, to_float(func_1908(978382515, -605765767)))));
	fVar0 = (fVar0 + ((1f / 4f) * func_1909(1f, to_float(func_1908(978382515, 1015970717)))));
	Var6 = { func_94(1215094015) };
	fVar8 = func_1918(Var6);
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
					func_1919(Global_1898330[iVar61]);
				}
				else
				{
					func_1920(iVar61, 0);
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

int func_1434(int iParam0)
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

char* func_1435(int iParam0)
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

char* func_1436(char* sParam0, int iParam1)
{
	if (iParam1 == 109029619)
	{
		return _create_var_string(10, "PLAYER_STRING", sParam0);
	}
	return func_1083(_create_var_string(10, "PLAYER_STRING", sParam0), iParam1);
}

float func_1437(int iParam0)
{
	iParam0 = func_258(iParam0);
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

float func_1438(float fParam0, float fParam1, float fParam2)
{
	return (((1f - fParam2) * fParam0) + (fParam2 * fParam1));
}

void func_1439(int iParam0)
{
	if (iParam0 < 0)
	{
		iParam0 = 0;
	}
	Global_40.f_4283.f_325 = iParam0;
	Var0 = { func_94(1356759001) };
	stat_id_set_int(&Var0, iParam0, true);
}

void func_1440(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_1441(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_1442(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_6;
	}
	return -15;
}

int func_1443(int iParam0, int iParam1)
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

void func_1444(int iParam0, bool bParam1)
{
	Global_1955569->f_1 = iParam0;
	if (bParam1)
	{
		func_1921(bParam1);
	}
}

void func_1445(int iParam0)
{
	_0x74bcceb233ad95b2(-156028329, iParam0);
}

char* func_1446(int iParam0)
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

bool func_1447(int iParam0)
{
	if (!func_1147(23, &vVar0))
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

bool func_1448(int iParam0, int iParam1, int iParam2)
{
	if (!func_1147(23, &Var0))
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

int func_1449(int iParam0)
{
	return iParam0;
}

int func_1450()
{
	iVar0 = func_969();
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

int func_1451(int iParam0)
{
	if (!func_542(*iParam0, 0))
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

bool func_1452(int iParam0, var uParam1, bool bParam2)
{
	if (!func_542(iParam0, 0))
	{
		return false;
	}
	Var0 = { func_653(iParam0, 0, 1) };
	iVar5 = 1728382685;
	Var6.f_9 = -1591664384;
	bVar28 = false;
	iVar29 = 0;
	while (iVar29 < 4)
	{
		iVar5 = func_1006((386 + iVar29), 1);
		if (func_1007(iParam0, &Var0, iVar5, 0))
		{
			bVar28 = func_1008(iParam0, &Var6, iVar5);
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

int func_1453(int iParam0, struct<4> Param1, int iParam5, bool bParam6)
{
	if (!func_542(iParam0, 0))
	{
		return 0;
	}
	Var0 = { func_1009(iParam0, Param1, iParam5, bParam6) };
	if (!_0xb881ca836cc4b6d4(&Var0))
	{
		return 0;
	}
	uVar4 = _0xc97e0d2302382211(func_927(bParam6), &Var0, 0);
	return uVar4;
}

struct<14> func_1454(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

void func_1455(var uParam0, struct<4> Param1)
{
	if (_0xb881ca836cc4b6d4(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

bool func_1456(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	*iParam1 = _0x640f890c3e5a3ffd(func_927(bParam3), uParam0, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

int func_1457(int iParam0)
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

float func_1458(int iParam0)
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
			return func_1922(iParam0);
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
			return func_1922(iParam0);
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
			return func_1922(iParam0);
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

bool func_1459(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_564(18);
		case 2:
			return func_564(20);
		case 1:
			return func_564(19);
		default:
			break;
	}
	return true;
}

int func_1460(int iParam0)
{
	return func_1923(&(Global_40.f_11095.f_11[iParam0]));
}

void func_1461(int iParam0, float fParam1, bool bParam2)
{
	if (func_20() != -1)
	{
		return;
	}
	if (Global_1347477->f_117 || !func_564(31))
	{
		return;
	}
	iVar0 = func_1460(iParam0);
	fVar1 = &Global_40.f_11095.f_11[iParam0];
	if (iVar0 >= 7)
	{
		return;
	}
	set_attribute_points(Global_35, iParam0, floor(fParam1));
	Global_40.f_11095.f_11[iParam0] = fParam1;
	iVar2 = func_1460(iParam0);
	if (func_1924(iParam0) && func_1925(iParam0))
	{
		if (!bParam2)
		{
			iVar3 = func_1926(fVar1, fParam1);
			if (fParam1 > IntToFloat(func_1927(iParam0)) && (iVar2 > iVar0 || iVar3 != 0))
			{
				if (!is_radar_hidden() && !Global_16)
				{
					if (iVar2 > iVar0)
					{
						func_317(func_1928(iParam0), 0);
					}
					func_1929(iParam0, iVar2, iVar3);
					func_1930(iParam0, 7000);
				}
				Global_1347477->f_8 = 1;
			}
		}
	}
	Global_1347477->f_1 = iParam0;
	Global_1347477 = get_game_timer();
}

char* func_1462(int iParam0)
{
	return "PLAYER_RPG_XP_GAIN";
}

int func_1463(int iParam0)
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

int func_1464()
{
	return func_1931(Global_40.f_12019);
}

int func_1465()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		iVar2 = func_990(iVar1);
		if (func_339(iVar2, 1, 0) || func_1471(func_1470(iVar2)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1466()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 30)
	{
		if (func_1932(_0x126cbebba46693cf(iVar1, -440187297, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1467()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 14)
	{
		if (func_1476(_0x126cbebba46693cf(iVar1, 1995362678, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1468()
{
	return _0x3a65f4844913a047(2103522376, 0);
}

int func_1469(int iParam0)
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

int func_1470(int iParam0)
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

bool func_1471(int iParam0)
{
	return (Global_40.f_12019 && iParam0) != 0;
}

char* func_1472(int iParam0)
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

int func_1473(int iParam0)
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

int func_1474(int iParam0)
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

char* func_1475(int iParam0)
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

bool func_1476(int iParam0)
{
	return _0x9a03f22ad446eeac(iParam0) > 0;
}

char* func_1477(int iParam0)
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

char* func_1478(int iParam0)
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

bool func_1479(int iParam0)
{
	if (func_1933(iParam0) && func_339(iParam0, 1, 0))
	{
		return true;
	}
	else if (func_1934(iParam0) && func_1935(iParam0))
	{
		return true;
	}
	return false;
}

char* func_1480(int iParam0)
{
	if (!func_542(iParam0, 0))
	{
		return "";
	}
	return _get_label_text_by_hash(func_609(iParam0));
}

int func_1481(int iParam0)
{
	return Global_1898164->f_1[iParam0]->f_2;
}

void func_1482(bool bParam0)
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

void func_1483(int iParam0)
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

void func_1484(bool bParam0)
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

void func_1485(bool bParam0)
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

void func_1486(bool bParam0)
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

void func_1487(bool bParam0)
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

void func_1488(bool bParam0)
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

void func_1489(bool bParam0)
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

int func_1490(int iParam0)
{
	if (iParam0 == -358215195)
	{
		return 0;
	}
	return &(Global_1946804->f_1497.f_1[func_641(iParam0, 1)]);
}

void func_1491()
{
	if (!_unlock_is_unlocked(-1526891582))
	{
		func_1936();
		_unlock_set_unlocked(-1526891582, true);
		func_569(-916314281);
		func_615(-916314281, 1, 752097756);
		set_current_ped_weapon(Global_35, -916314281, true, 2, false, false);
		func_569(494733111);
		func_615(494733111, 1, 752097756);
		set_current_ped_weapon(Global_35, 494733111, true, 4, false, false);
	}
}

bool func_1492(int iParam0, var uParam1, var uParam2, int iParam3)
{
	iVar0 = func_927(0);
	*uParam1 = { func_1009(iParam0, func_1115(0), iParam3, 0) };
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

bool func_1493(int iParam0)
{
	if (_item_database_is_intrinsic_item(iParam0))
	{
		return true;
	}
	return false;
}

int func_1494(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

bool func_1495(int iParam0)
{
	return _is_weapon_bow(iParam0);
}

int func_1496(var uParam0)
{
	iVar0 = 0;
	iVar1 = 22;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_562(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 37;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_562(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 12;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_562(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 29;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_562(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 30;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_562(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 31;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_562(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	return iVar0;
}

bool func_1497(int iParam0, int iParam1)
{
	iVar1 = func_641(func_1937(iParam0), 1);
	if (iVar1 >= 39)
	{
		return false;
	}
	if (&Global_1946804->f_1497.f_1[iVar1] != 0 && &Global_1946804->f_1497.f_1[iVar1] != &Global_1946804->f_57[iVar1])
	{
		iVar0 = &Global_1946804->f_1497.f_1[iVar1];
		if (func_566(iVar0) == iParam0)
		{
			*iParam1 = iVar0;
			return true;
		}
	}
	*iParam1 = 0;
	return false;
}

int func_1498(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam0 == &Global_1946804->f_57[func_641(iParam1, 1)])
	{
		return 0;
	}
	iVar0 = 0;
	if (!func_1052(524288))
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

bool func_1499(int iParam0)
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

int func_1500(int iParam0)
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
			return -390982951;
			return -1018798851;
			return -757567246;
			return -2054602073;
			return -378441099;
			return -585121677;
			return 1566949660;
			return 0;
		}

int func_1501(int iParam0)
{
	return func_1938(iParam0, -1);
}

bool func_1502(int iParam0)
{
	return _0xf83d3dda4d3c8169(iParam0) > 0;
}

void func_1503(int iParam0)
{
	iVar0 = func_926(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887->f_12 == -1)
	{
		set_bit(Global_40.f_283[iVar1], iVar2);
	}
	else
	{
		iVar3 = network_player_id_to_int();
		if (iVar3 == 255)
		{
			Global_1058888->f_40567.f_46 = 1;
			set_bit(Global_1058888->f_40567.f_14[iVar1], iVar2);
		}
		else
		{
			set_bit((*Global_1055058)[iVar3]->f_72[iVar1], iVar2);
		}
		set_bit(Global_1058888->f_40567[iVar1], iVar2);
	}
	Global_1934765 = 0;
}

void func_1504(int iParam0)
{
	iVar0 = func_926(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887->f_12 == -1)
	{
		clear_bit(Global_40.f_283[iVar1], iVar2);
	}
	else
	{
		iVar3 = network_player_id_to_int();
		if (iVar3 == 255)
		{
			Global_1058888->f_40567.f_46 = 1;
			clear_bit(Global_1058888->f_40567.f_14[iVar1], iVar2);
		}
		else
		{
			clear_bit((*Global_1055058)[iVar3]->f_72[iVar1], iVar2);
		}
	}
	Global_1934765 = 0;
}

void func_1505()
{
	func_1504(-939420910);
	func_1504(-1187950766);
	func_1504(356365161);
	func_1504(753127042);
	func_1504(-2038424081);
	func_1504(1884271742);
	func_1504(459290420);
}

void func_1506()
{
	func_1504(704802028);
	func_1504(588987611);
	func_1504(2008888900);
	func_1504(1649996811);
	func_1504(227918160);
	func_1504(168171957);
	func_1504(1193080109);
	func_1504(-491981251);
	func_1504(-639037538);
	func_1504(-618620429);
}

bool func_1507(int iParam0)
{
	return _0xf83d3dda4d3c8169(iParam0) > 0;
}

int func_1508(int iParam0)
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

void func_1509(int iParam0)
{
	Global_40.f_12019.f_43 = (Global_40.f_12019.f_43 || iParam0);
}

bool func_1510(int iParam0)
{
	return _0xf83d3dda4d3c8169(iParam0) > 0;
}

void func_1511()
{
	Global_1946804->f_1378 = Global_1946804->f_1497;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		*Global_1946804->f_1378.f_1[iVar0] = { *Global_1946804->f_1497.f_1[iVar0] };
		iVar0++;
	}
}

void func_1512(int iParam0)
{
	func_1279(iParam0, 8, 6);
}

void func_1513(int iParam0)
{
	func_1939(&(Global_1946804->f_2589), iParam0);
}

void func_1514(int iParam0, int iParam1)
{
	func_1940(&(Global_1946804->f_2589), iParam0, iParam1);
}

int func_1515(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	iVar0 = func_1941(0);
	if (iParam2 != 0 && func_1942(iParam0, iVar0, iParam2, bParam3) != -1)
	{
		return iParam2;
	}
	if (func_1106(iParam0, func_1120(iParam1, 1), &iParam2))
	{
		return iParam2;
	}
	return 0;
}

void func_1516(var uParam0, bool bParam1, int iParam2)
{
	bVar6 = func_20() != -1;
	iVar7 = func_1941(0);
	if (func_1052(32768))
	{
		iVar1++;
	}
	iVar2 = 0;
	while (iVar2 < 39)
	{
		iVar0 = &Global_1946804->f_57.f_430[iVar2];
		if (iVar0 <= -1 || iVar0 >= 39)
		{
		}
		else
		{
			iVar5 = func_1120(iVar0, 1);
			if (func_1275(iVar5, 8))
			{
			}
			else if (&Global_1946804->f_57[iVar0]->f_2[0] == -1802376732 || &uParam0->f_1[iVar0] == 0)
			{
			}
			else if (func_1275(iVar5, 6) || &uParam0->f_1[iVar0] == &Global_1946804->f_57[iVar0])
			{
			}
			else
			{
				iVar4 = func_1498(&(uParam0->f_1[iVar0]), iVar5, iVar7, bVar6);
				if ((iVar1 + iVar4) > 31)
				{
					iVar3 = iVar2;
				}
				else
				{
					iVar1 = (iVar1 + iVar4);
					iVar2++;
				}
				iVar8 = func_1943(uParam0);
				if (iVar3 > 0)
				{
					if (!func_1052(524288))
					{
						func_1112(524288);
						iVar1 = (iVar1 - iVar8);
					}
					iVar2 = iVar3;
					while (iVar2 <= 38)
					{
						iVar0 = &Global_1946804->f_57.f_430[iVar2];
						if (iVar0 <= -1 || iVar0 >= 39)
						{
						}
						else
						{
							iVar5 = func_1120(iVar0, 1);
							if (func_1275(iVar5, 8))
							{
							}
							else if (&Global_1946804->f_57[iVar0]->f_2[0] == -1802376732 || &uParam0->f_1[iVar0] == 0)
							{
							}
							else if (func_1275(iVar5, 6) || &uParam0->f_1[iVar0] == &Global_1946804->f_57[iVar0])
							{
							}
							else
							{
								iVar4 = func_1498(&(uParam0->f_1[iVar0]), iVar5, iVar7, bVar6);
								if ((iVar1 + iVar4) > 31)
								{
									uParam0->f_1[iVar0] = &Global_1946804->f_57[iVar0];
									uParam0->f_1[iVar0]->f_1 = 0;
									if (bParam1)
									{
										func_1514(iVar0, iParam2);
									}
								}
								iVar1 = (iVar1 + iVar4);
							}
						}
						iVar2++;
					}
				}
				if ((iVar1 + iVar8) < 31)
				{
					func_1519(524288);
				}
			}
		}
	}
}

void func_1517(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (*uParam0 <= 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_1944(&(uParam0->f_2[iVar0]), bParam1, bParam2);
		iVar0++;
	}
	if (func_20() == -1)
	{
		if ((Global_40.f_7729 != 0 || !func_1945(2, Global_26796.f_776)) || Global_1946804->f_1497 != func_1538(0))
		{
			if (Global_40.f_7157[Global_40.f_7729] & 512 != 0)
			{
				Global_40.f_7157[Global_40.f_7729] = (&Global_40.f_7157[Global_40.f_7729] - Global_40.f_7157[Global_40.f_7729] & 4096);
				Global_40.f_7729 = 0;
				Global_1905941 = Global_40.f_7729;
				Global_40.f_7157[Global_40.f_7729] |= 4096;
				Global_1946804->f_1497 = func_1538(Global_40.f_7729);
				Global_1946804->f_1378 = func_1538(Global_40.f_7729);
				Global_26796.f_776 = 0;
				func_1946(-1, 0, 6);
			}
		}
	}
	if (bParam3)
	{
		func_1100(0, 1);
	}
}

void func_1518(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_8 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3[0] = 0;
	uParam0->f_3[1] = 0;
	uParam0->f_3[2] = 0;
	uParam0->f_3[3] = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	if (uParam0->f_12)
	{
		_0x13e7320c762f0477(uParam0->f_13);
	}
	uParam0->f_12 = 0;
}

void func_1519(int iParam0)
{
	Global_1946804 = (&Global_1946804 - (Global_1946804 && iParam0));
}

bool func_1520(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_1521(struct<4> Param0)
{
	if (Global_1946804->f_852 >= 20)
	{
		return;
	}
	if (func_1576(Param0))
	{
		iVar0 = 0;
		while (iVar0 < Global_1946804->f_852)
		{
			iVar1 = ((Global_1946804->f_853 + iVar0) % 20);
			if (((&Global_1946804->f_769[iVar1] == Param0 && Global_1946804->f_769[iVar1]->f_2 == Param0.f_2) && Global_1946804->f_769[iVar1]->f_3 == Param0.f_3) && Global_1946804->f_769[iVar1]->f_1 == Param0.f_1)
			{
				return;
			}
			if (&Global_1946804->f_769[iVar1] == 34 && func_1576(20))
			{
				return;
			}
			iVar0++;
		}
	}
	func_1577(Param0);
	*Global_1946804->f_769[Global_1946804->f_854] = { Param0 };
	Global_1946804->f_852++;
	Global_1946804->f_854 = (Global_1946804->f_854 + 1 % 20);
	func_1112(8);
}

bool func_1522()
{
	if (Global_1572887->f_12 != -1)
	{
		return false;
	}
	return Global_1347477->f_203;
}

float func_1523(int iParam0)
{
	return &(Global_40.f_11095[iParam0]);
}

float func_1524()
{
	fVar0 = func_1947(13);
	iVar1 = func_1948(fVar0);
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

float func_1525()
{
	if (is_ped_on_mount(Global_35))
	{
		return 0.25f;
	}
	return 0f;
}

float func_1526()
{
	if (func_330())
	{
		if (_get_special_edition_core_stats_bonus_enabled())
		{
			return 0.2f;
		}
	}
	return 0f;
}

float func_1527()
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

float func_1528()
{
	return Global_1955565->f_3;
}

void func_1529(int iParam0, char* sParam1, bool bParam2)
{
	sVar0 = func_1949(iParam0, 1, 0, 0);
	sVar0 = _create_var_string(2, sVar0, sParam1);
	_databinding_write_data_string(&(Global_1955569->f_5.f_2[iParam0]->f_12[1]), sVar0);
	_databinding_write_data_bool(&(Global_1955569->f_5.f_2[iParam0]->f_16[1]), bParam2);
}

void func_1530(int iParam0, float fParam1, bool bParam2)
{
	sVar0 = func_1949(iParam0, 2, 0, 0);
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

float func_1531(float fParam0, float fParam1, float fParam2)
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

bool func_1532()
{
	return func_1947(12) <= -99f;
}

bool func_1533()
{
	return func_1947(12) >= 99f;
}

int func_1534()
{
	iVar2 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_566(iVar1) == -999503751)
		{
			if (func_1950() != iVar1)
			{
				iVar2++;
			}
		}
		iVar0++;
	}
	return iVar2;
}

bool func_1535(int iParam0)
{
	if (!func_1068(iParam0))
	{
		return false;
	}
	if (func_1539(iParam0, 4))
	{
		return true;
	}
	return false;
}

bool func_1536(int iParam0)
{
	if (!func_1068(iParam0))
	{
		return false;
	}
	if (func_1539(iParam0, 2))
	{
		return true;
	}
	return false;
}

void func_1537(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_1068(iParam0))
	{
		return;
	}
	if (!func_1536(iParam0))
	{
		func_1540(iParam0, 2);
		if (bParam2)
		{
			if (!func_190(0, 0, 1))
			{
				func_359(1, 4);
			}
		}
		if ((!func_207() && !bParam1) && !func_190(0, 0, 1))
		{
			func_680(_create_var_string(10, "OUT_JOURN_ADD", func_1951(iParam0)), 10000, 0, 0, 0, 1);
		}
	}
}

int func_1538(int iParam0)
{
	switch (iParam0)
	{
		case 14:
			return 439606975;
		case 6:
			return 1661121390;
		case 7:
			return 1164374808;
		case 8:
			return 1160643979;
		case 9:
			return 624063935;
		case 10:
			return -1476781101;
		case 11:
			return 294553332;
		case 12:
			return 1788874135;
		case 15:
			return 1560492757;
		case 16:
			return -769081407;
		case 17:
			return 1902428294;
		case 18:
			return -2114499732;
		case 19:
			return 800827126;
		case 20:
			return 688004210;
		case 0:
			return 166243423;
		case 1:
			return 1383300684;
		case 2:
			return 2051441678;
		case 3:
			return 162509669;
		case 4:
			return 635948769;
		case 5:
			return 274995506;
		case 24:
			return -1826731591;
		case 25:
			return 2119049229;
		case 26:
			return 1352942778;
		case 27:
			return 1964379549;
		case 28:
			return 1201189539;
		case 21:
			return 1351927599;
		case 22:
			return 2032023096;
		case 23:
			return -291256376;
		case 66:
			return -1243402388;
		case 67:
			return 65931886;
		case 68:
			return 1371678229;
		case 69:
			return 2102263084;
		case 61:
			return -272211555;
		case 64:
			return -55563408;
		case 71:
			return -1914506115;
		case 75:
			return 802495462;
		case 77:
			return 842905332;
		case 78:
			return -1951220140;
		case 79:
			return 1511551084;
		case 81:
			return -1725704631;
		case 83:
			return 1257427489;
		case 85:
			return -659341240;
		case 87:
			return 2038771525;
		case 89:
			return -535599244;
		case 73:
			return -389591806;
		case 70:
			return -1205612021;
		case 93:
			return 890706995;
		case 90:
			return 1156438275;
		case 91:
			return -1611873049;
		case 92:
			return 594312243;
		case 94:
			return -978578725;
		case 13:
			return 1784889667;
		case 62:
			return -361635024;
		case 76:
			return 1460520700;
		case 80:
			return 523337834;
		case 82:
			return -19271249;
		case 84:
			return 214175524;
		case 86:
			return -1303643297;
		case 88:
			return 411856831;
		case 72:
			return -926815459;
		case 74:
			return -1300731953;
		case 65:
			return -409616653;
		case 29:
			return 509954990;
		case 30:
			return -445916744;
		case 31:
			return -866249154;
		case 32:
			return -2077063704;
		case 33:
			return 205207539;
		case 34:
			return -1033657275;
		case 35:
			return 1806002837;
		case 36:
			return 705324896;
		case 37:
			return -1541763703;
		case 38:
			return 387052410;
		case 39:
			return -361288914;
		case 40:
			return -911054515;
		case 41:
			return 1084200963;
		case 42:
			return 1847948074;
		case 43:
			return -1212526764;
		case 44:
			return 1851440270;
		case 45:
			return -2028985700;
		case 46:
			return 1074435214;
		case 47:
			return -883015675;
		case 48:
			return -1047155604;
		case 49:
			return 1123231221;
		case 50:
			return 1866989210;
		case 51:
			return 478183719;
		case 52:
			return -1698955868;
		case 53:
			return -2029378634;
		case 54:
			return 1339864416;
		case 55:
			return 890998115;
		case 56:
			return -1376288999;
		case 57:
			return -1041123771;
		case 58:
			return 1389254668;
		case 59:
			return -346112633;
		case 60:
			return 773309172;
		default:
			break;
	}
	return 0;
}

bool func_1539(int iParam0, int iParam1)
{
	if (!func_1068(iParam0))
	{
		return false;
	}
	return (Global_40.f_7157[iParam0] && iParam1) != 0;
}

void func_1540(int iParam0, int iParam1)
{
	if (!func_1068(iParam0))
	{
		return;
	}
	Global_40.f_7157[iParam0] = (Global_40.f_7157[iParam0] || iParam1);
}

int func_1541(int iParam0, bool bParam1)
{
	iVar0 = 0;
	switch (iParam0)
	{
		case -2061583405:
			iVar0 = Global_1946804->f_2657.f_26.f_1;
			break;
		case 81053684:
			iVar0 = 1;
			break;
		case -525676072:
			iVar0 = Global_1946804->f_2657.f_26.f_2;
			break;
		case -1719060085:
			iVar0 = 1;
			break;
		case -999503751:
			iVar0 = Global_1946804->f_2657.f_26;
			break;
		case -413129408:
			iVar0 = 1;
			break;
		default:
			return 0;
	}
	switch (iParam0)
	{
		case -999503751:
			if (iVar0 > 0 && !bParam1)
			{
				iVar0 = (iVar0 - 1);
			}
			break;
	}
	return iVar0;
}

void func_1542(int iParam0, bool bParam1)
{
	iVar0 = func_1952(iParam0);
	switch (iVar0)
	{
		case 0:
			if (bParam1)
			{
				func_565(50);
			}
			else
			{
				func_565(48);
			}
			break;
		case 1:
			if (bParam1)
			{
				func_565(51);
			}
			else
			{
				func_565(49);
			}
			break;
		case 2:
			if (bParam1)
			{
				if (!func_1953(iVar0))
				{
					Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
					func_596();
				}
			}
			else
			{
				Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
				func_596();
			}
			break;
		case 3:
			func_565(24);
			if (bParam1)
			{
				if (!func_1953(iVar0))
				{
					Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
					func_596();
				}
			}
			break;
	}
}

void func_1543(int iParam0)
{
	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
			if (func_1954(0))
			{
				iVar0++;
			}
			if (func_1954(2))
			{
				iVar0++;
			}
			if (func_1954(4))
			{
				iVar0++;
			}
			if (!func_1955(16))
			{
				if (iVar0 == 1)
				{
					func_1956();
					func_317(456, 1);
					func_1957(16);
				}
			}
			if (!func_1955(32))
			{
				if (iVar0 >= 3)
				{
					func_1956();
					func_317(456, 1);
					func_1957(32);
				}
			}
			break;
		case 1:
		case 3:
		case 7:
			if (func_1954(1))
			{
				iVar0++;
			}
			if (func_1954(3))
			{
				iVar0++;
			}
			if (func_1954(7))
			{
				iVar0++;
			}
			if (!func_1955(1))
			{
				if (iVar0 == 1)
				{
					func_1958();
					func_317(457, 1);
					func_1957(1);
				}
			}
			if (!func_1955(2))
			{
				if (iVar0 >= 3)
				{
					func_1958();
					func_317(457, 1);
					func_1957(2);
				}
			}
			break;
		case 5:
		case 6:
		case 8:
			if (func_1954(5))
			{
				iVar0++;
			}
			if (func_1954(6))
			{
				iVar0++;
			}
			if (func_1954(8))
			{
				iVar0++;
			}
			if (!func_1955(4))
			{
				if (iVar0 == 1)
				{
					func_1959();
					func_317(455, 1);
					func_1957(4);
				}
			}
			if (!func_1955(8))
			{
				if (iVar0 >= 3)
				{
					func_1959();
					func_317(455, 1);
					func_1957(8);
				}
			}
			break;
	}
}

void func_1544(var uParam0)
{
	func_1074(uParam0, 143479330);
	if (Global_1946804->f_1 == 2026485318)
	{
		func_1074(uParam0, 617531372);
	}
	else
	{
		func_1074(uParam0, 291123060);
	}
}

void func_1545(var uParam0, int iParam1, struct<14> Param2)
{
	if (!func_1960(uParam0))
	{
		return;
	}
	if (&Global_1224866 < 20)
	{
		Global_1224866 = &Global_1224866 + 1;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 19)
		{
			*Global_1224866->f_1[iVar0] = { *(Global_1224866->f_1[iVar0 + 1]) };
			iVar0++;
		}
	}
	Var1.f_7.f_2.f_1 = 10;
	Var1 = { *uParam0 };
	Var1.f_4 = iParam1;
	Var1.f_6 = 1;
	Var1.f_7 = { Param2 };
	*(Global_1224866->f_1[(&Global_1224866 - 1)]) = { Var1 };
}

bool func_1546(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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
				Jump @230; //curOff = 56
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
					Jump @230; //curOff = 137
				}
				else if (iParam3 != 0 && iVar2 != iParam3)
				{
					Jump @230; //curOff = 160
				}
				else if (iParam4 != 0 && iVar1 != iParam4)
				{
					Jump @230; //curOff = 183
				}
				else if (iParam5 != 0 && iVar2 == iParam5)
				{
				}
				else
				{
					*uParam1 = iVar1;
					uParam1->f_1 = iVar2;
					uParam1->f_2 = iParam2;
					return true;
				}
			}
			iVar0++;
		}
	}
	return false;
}

bool func_1547(int iParam0, int iParam1, var uParam2, int iParam3)
{
	*iParam3 = 0;
	if (*uParam2 < 10)
	{
		return false;
	}
	if (!func_542(iParam0, 0))
	{
		return false;
	}
	Var0.f_4 = 15;
	Var0.f_36 = 10;
	if (!_item_database_fillout_acquire_cost(iParam0, iParam1, &Var0))
	{
		return false;
	}
	*iParam3 = Var0.f_35;
	iVar47 = 0;
	while (iVar47 < Var0.f_35)
	{
		(*uParam2)[iVar47] = &Var0.f_36[iVar47];
		iVar47++;
	}
	return true;
}

void func_1548(int iParam0)
{
	func_637(iParam0, 1, 1, -142743235, 1);
	iVar34 = func_1961(iParam0, &uVar18);
	func_1962(iParam0, &uVar18, &iVar34, 1);
	if (func_643() == -2125499975)
	{
		iVar38 = 2020890174;
	}
	else
	{
		iVar38 = 1105329772;
	}
	func_1963(iParam0, &(Global_26796.f_627.f_121.f_20));
	func_639(iParam0, 1, 1);
	iVar36 = 0;
	while (iVar36 < iVar34)
	{
		func_637(&(uVar18[iVar36]), 1, 1, -142743235, 1);
		switch (func_566(&(uVar18[iVar36])))
		{
			case -2061583405:
				func_1963(&(uVar18[iVar36]), &(Global_26796.f_627.f_121.f_21));
				break;
			case 81053684:
				func_1963(&(uVar18[iVar36]), &(Global_26796.f_627.f_121.f_23));
				break;
			case -525676072:
				func_1963(&(uVar18[iVar36]), &(Global_26796.f_627.f_121.f_22));
				break;
			case -1719060085:
				func_1963(&(uVar18[iVar36]), &(Global_26796.f_627.f_121.f_24));
				break;
			case -413129408:
				func_1963(&(uVar18[iVar36]), &(Global_26796.f_627.f_121.f_25));
				break;
		}
		func_639(&(uVar18[iVar36]), 1, 1);
		iVar0[iVar36] = func_641(func_640(&(uVar18[iVar36])), 1);
		iVar36++;
	}
	func_1964(&(Global_1946804->f_1616));
	func_644(&(Global_1946804->f_1616), iVar38, &uVar39, 1, 0, 0, 0);
	*Global_1946804->f_1616.f_1[8] = { func_645(8, 0) };
	*Global_1946804->f_1616.f_1[9] = { func_645(9, 0) };
	*Global_1946804->f_1616.f_1[0] = { func_645(0, 0) };
	*Global_1946804->f_1616.f_1[2] = { func_645(2, 0) };
	*Global_1946804->f_1616.f_1[3] = { func_645(3, 0) };
	*Global_1946804->f_1616.f_1[1] = { func_645(1, 0) };
	*Global_1946804->f_1616.f_1[5] = { func_645(5, 0) };
	*Global_1946804->f_1616.f_1[6] = { func_645(6, 0) };
	*Global_1946804->f_1616.f_1[7] = { func_645(7, 0) };
	iVar35 = 0;
	while (iVar35 < 5)
	{
		iVar36 = 0;
		while (iVar36 < iVar34)
		{
			if (&uVar18[iVar36] == func_646(&(iVar0[iVar36]), iVar35))
			{
				func_639(func_1965(iVar35), 1, 1);
				func_1966(iVar35);
				if (iVar35 == 0)
				{
					bVar17 = true;
					iVar37 = 0;
					while (iVar37 < 39)
					{
						if (!func_1573(Global_1946804->f_1616.f_1[iVar37], 2))
						{
						}
						else
						{
							func_647(Global_1946804->f_1616.f_1[iVar37], iVar37, 0);
							*Global_1946804->f_1497.f_1[iVar37] = { *Global_1946804->f_1616.f_1[iVar37] };
						}
						iVar37++;
					}
				}
			}
			else
			{
				iVar36++;
			}
		}
		iVar35++;
	}
	iVar36 = 0;
	while (iVar36 < iVar34)
	{
		if (&uVar18[iVar36] == &Global_1946804->f_1497.f_1[&iVar0[iVar36]])
		{
			bVar16 = true;
		}
		else
		{
			iVar36++;
		}
	}
	if ((bVar16 || bVar17) || Global_40.f_7729 == func_1067(iParam0))
	{
		if (!func_1967(8))
		{
			if (func_643() == -2125499975)
			{
				if (bVar17)
				{
					func_644(&(Global_1946804->f_1616), 1661121390, &uVar39, 0, 1, 0, -2125499975);
					Global_1946804->f_1616 = 166243423;
					func_1968(&(Global_1946804->f_1616), 0);
					if (Global_40.f_7729 == 0)
					{
						func_1969(2, 0, 6);
					}
				}
				if (bVar16 || Global_40.f_7729 == func_1067(iParam0))
				{
					Global_1905941 = 6;
				}
			}
			else
			{
				if (bVar17)
				{
					func_644(&(Global_1946804->f_1616), -361635024, &uVar39, 0, 1, 0, 1160113249);
					Global_1946804->f_1616 = 166243423;
					func_1968(&(Global_1946804->f_1616), 0);
					if (Global_40.f_7729 == 0)
					{
						func_1969(2, 0, 6);
					}
				}
				if (bVar16 || Global_40.f_7729 == func_1067(iParam0))
				{
					Global_1905941 = 62;
				}
			}
			if (bVar16 || Global_40.f_7729 == func_1067(iParam0))
			{
				if (is_entity_dead(get_player_ped(player_id())))
				{
					func_1970(Global_40.f_7729, 4096);
					func_1540(&Global_1905941, 4096);
					Global_40.f_7729 = &Global_1905941;
				}
				else
				{
					func_1971(get_player_ped(player_id()), &Global_1905941, 1, 0, 0);
				}
			}
		}
	}
	bVar40 = false;
	iVar36 = 0;
	while (iVar36 < iVar34)
	{
		if (&uVar18[iVar36] == &Global_26796.f_627.f_1.f_1.f_1[&iVar0[iVar36]])
		{
			bVar40 = true;
		}
		else
		{
			iVar36++;
		}
	}
	if (!bVar40)
	{
		return;
	}
	func_644(&(Global_1946804->f_1616), 1661121390, &uVar39, 0, 1, 0, -2125499975);
	func_644(&(Global_1946804->f_1616), 2020890174, &uVar39, 1, 0, 0, -2125499975);
	*Global_1946804->f_1616.f_1[8] = { *Global_26796.f_627.f_1.f_1.f_1[8] };
	*Global_1946804->f_1616.f_1[9] = { *Global_26796.f_627.f_1.f_1.f_1[9] };
	*Global_1946804->f_1616.f_1[0] = { *Global_26796.f_627.f_1.f_1.f_1[0] };
	*Global_1946804->f_1616.f_1[2] = { *Global_26796.f_627.f_1.f_1.f_1[2] };
	*Global_1946804->f_1616.f_1[3] = { *Global_26796.f_627.f_1.f_1.f_1[3] };
	*Global_1946804->f_1616.f_1[1] = { *Global_26796.f_627.f_1.f_1.f_1[1] };
	*Global_1946804->f_1616.f_1[5] = { *Global_26796.f_627.f_1.f_1.f_1[5] };
	*Global_1946804->f_1616.f_1[6] = { *Global_26796.f_627.f_1.f_1.f_1[6] };
	*Global_1946804->f_1616.f_1[7] = { *Global_26796.f_627.f_1.f_1.f_1[7] };
	Global_26796.f_627 = Global_1946804->f_1616;
	Global_26796.f_627.f_1.f_1 = Global_1946804->f_1616;
	iVar36 = 0;
	while (iVar36 < 39)
	{
		*Global_26796.f_627.f_1.f_1.f_1[iVar36] = { *Global_1946804->f_1616.f_1[iVar36] };
		iVar36++;
	}
}

struct<4> func_1549()
{
	Var0 = { func_1114(0) };
	return func_1009(856287005, Var0, -218846335, 0);
}

int func_1550(int iParam0, struct<4> Param1)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	uVar1 = 1;
	iVar11 = _item_database_get_bundle_item_count(iParam0, &uVar1);
	Var12 = { Param1 };
	iVar0 = 0;
	while (iVar0 < iVar11)
	{
		if (_item_database_get_bundle_item_info(iParam0, &uVar1, iVar0, &Var3))
		{
			if (func_542(Var3, 0))
			{
				Var12.f_4 = Var3.f_1;
				if (func_1453(Var3, Param1, Var12.f_4, 0) > 0)
				{
				}
				else
				{
					func_1972(&uVar7);
					if (func_1010(Var3, &uVar7, &Var12, -1, -142743235, 0, 0))
					{
					}
				}
			}
		}
		iVar0++;
	}
	return 1;
}

int func_1551(var uParam0)
{
	return uParam0->f_1;
}

void func_1552(var uParam0)
{
	func_1973(uParam0);
	func_1975(uParam0, func_1974(-1346384396));
	func_1976(uParam0, func_1974(-712836614));
	func_1977(uParam0, func_1974(-1629133289));
	func_1978(uParam0, func_1974(1302066700));
	func_1979(uParam0, func_1974(599669344));
	func_1980(uParam0, func_1974(-1555511632));
}

void func_1553(struct<6> Param0)
{
	if (!func_1981(Param0.f_4, 1))
	{
	}
	if (!func_1981(Param0, 1))
	{
	}
	if (!func_1981(Param0.f_2, 1))
	{
	}
	if (!func_1981(Param0.f_5, 1))
	{
	}
	if (!func_1981(Param0.f_3, 1))
	{
	}
	if (!func_1981(Param0.f_1, 1))
	{
	}
}

int func_1554(int iParam0, int iParam1, int iParam2)
{
	*iParam0 = 0;
	*iParam1 = 0;
	*iParam2 = 0;
	if (func_385())
	{
		if (func_296())
		{
			bVar0 = false;
			if (!func_319((*Global_1835011)[15]->f_1, 1) && !func_564(42))
			{
				bVar0 = true;
			}
			if (bVar0)
			{
				*iParam0 = func_1982();
				*iParam1 = func_1983();
				*iParam2 = func_1984();
				return 1;
			}
			else
			{
				*iParam0 = func_1985();
				*iParam1 = func_1986();
				*iParam2 = func_1987();
				return 1;
			}
		}
		else if (func_971())
		{
			if (!func_319((*Global_1835011)[60]->f_1, 1))
			{
				*iParam0 = func_1988();
				*iParam1 = func_1989();
				*iParam2 = func_1990();
				return 1;
			}
			else
			{
				*iParam0 = func_1991();
				*iParam1 = func_1992();
				*iParam2 = func_1993();
				return 1;
			}
		}
	}
	else if (func_296())
	{
		*iParam0 = func_1994();
		*iParam1 = func_1995();
		*iParam2 = func_1996();
		return 1;
	}
	else if (func_971())
	{
		*iParam0 = func_1997();
		*iParam1 = func_1998();
		*iParam2 = func_1999();
		return 1;
	}
	return 0;
}

void func_1555(int iParam0, int iParam1)
{
	iParam0 = func_258(iParam0);
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

void func_1556(int iParam0, int iParam1)
{
	iParam0 = func_258(iParam0);
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

void func_1557(int iParam0, int iParam1)
{
	iParam0 = func_258(iParam0);
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

void func_1558(int iParam0, int iParam1)
{
	iParam0 = func_258(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_40.f_1095.f_1[iParam0]->f_434 = iParam1;
}

bool func_1559(int iParam0)
{
	iVar0 = func_2000(iParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	Var1 = { func_1114(0) };
	if (func_2001(&Var1, iVar0, 0) > 0)
	{
		return true;
	}
	return false;
}

int func_1560(int iParam0)
{
	Var0.f_9 = -1591664384;
	if (!func_2002(iParam0, &Var0))
	{
		return 0;
	}
	Var29 = { Var0.f_5 };
	Var29.f_4 = Var0.f_9;
	if (!func_1010(Var0.f_4, &Var0, &Var29, -1, -142743235, 0, 0))
	{
		return 0;
	}
	return 1;
}

int func_1561(int iParam0)
{
	if (iParam0 == 808655744)
	{
		return 559905966;
	}
	switch (iParam0)
	{
		case -450053710:
			return 1538827865;
		case -1679658797:
			return -1792561227;
		case 1792770814:
			return 1033678910;
		case -1963397600:
			return -1942141178;
		case -1250098797:
			return 671599957;
		case -318278790:
			return -1554935503;
		case 55096099:
			return 694610769;
		case -458397856:
			return 1941463607;
		case -444610976:
			return -887316537;
		case 746627200:
			return 1762474047;
		case 705691988:
			return -828859553;
		case 2130094044:
			return 1410237043;
		case -1554827654:
			return -2026073756;
		case 604357666:
			return 729407854;
		case -1029277326:
			return 2002245664;
		case -1140650619:
			return -1120227140;
		case -1999198818:
			return 1142681594;
		case 1496579364:
			return 1214981718;
		case -1523757120:
			return -845373950;
		case -403470324:
			return -864588185;
		case 1576849913:
			return 1482814085;
		case -925223936:
			return -1040918754;
		case -1547438906:
			return 535545841;
		case -635239558:
			return 1686036388;
		case -2026265047:
			return -621245377;
		case -586898625:
			return 2125477381;
		case 937246805:
			return 1808724704;
		case 1593035738:
			return -1745871311;
		case 861505058:
			return -1366099125;
		case 687445866:
			return -1900776854;
		case 1705182311:
			return 1381855825;
		case -78273782:
			return -470894301;
		case -819697512:
			return -58297715;
		case -247265944:
			return 919533729;
		case -1516219602:
			return -1158763155;
		case -1265030920:
			return 1112812928;
		case 2024948086:
			return 753764318;
		case 1696286663:
			return 2100045093;
		case -1342159303:
			return 1097965086;
		case -1154406788:
			return -2136667309;
		case 2030804811:
			return -376463594;
		case 1230359523:
			return -1917318030;
		case -1038436471:
			return 1631640006;
		case -1063137731:
			return -1565311117;
		case 96930969:
			return 1714576673;
		case -1180427609:
			return 210760725;
		case 2119038574:
			return 2051021144;
		case 43825738:
			return 1924406350;
		case 2145697477:
			return -1990143531;
		case -1261814606:
			return 1741899492;
		case 107013696:
			return -1629575335;
		case 1066034872:
			return 1096294193;
		case 36009259:
			return -1162498792;
		case -1599683008:
			return -212500005;
		case -1693870200:
			return -538557079;
		case 1072019803:
			return 171150858;
		case 1074477367:
			return 67538819;
		case -85890205:
			return -126472599;
		case 1048964673:
			return -1219957736;
		case -727455979:
			return -332060056;
		case -1667789645:
			return 1917500091;
		case -1924405794:
			return -1043453945;
		case 1861665605:
			return 1723487083;
		case -526169133:
			return 2044230644;
		case 900144280:
			return 1680713143;
		case 1133837220:
			return 344528703;
		case 1702024301:
			return -1674873797;
		case -1604180548:
			return 281852151;
		case 1772321403:
			return -285185056;
		case -1028075925:
			return -1692268955;
		case 84224102:
			return 2130706226;
		case -1896838685:
			return -1754375530;
		case -420599285:
			return -71211764;
		case 478986344:
			return -1390353518;
		case 446670976:
			return 330935532;
		case 802784330:
			return -935042458;
		case 549900435:
			return -41062704;
		case -2063289686:
			return 887669186;
		case 917402668:
			return 2102774612;
		case -914712122:
			return -2011111190;
		case -598917269:
			return -535752499;
		default:
			break;
	}
	return 0;
}

int func_1562(int iParam0, int iParam1)
{
	if (!func_542(iParam1, 0))
	{
		return 0;
	}
	if (!func_2003(iParam1))
	{
		return 0;
	}
	if (func_1559(iParam0))
	{
		return 0;
	}
	iVar0 = func_2000(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	Var1 = { func_1114(0) };
	Var1.f_4 = iVar0;
	if (!func_1065(iParam1, &uVar6, &Var1, 1, 752097756, 0))
	{
		return 0;
	}
	return 1;
}

bool func_1563(int iParam0, struct<4> Param1, bool bParam5)
{
	if (iParam0 == 0)
	{
		return false;
	}
	uVar1 = 1;
	iVar11 = _item_database_get_bundle_item_count(iParam0, &uVar1);
	Var12 = { Param1 };
	iVar0 = 0;
	while (iVar0 < iVar11)
	{
		if (_item_database_get_bundle_item_info(iParam0, &uVar1, iVar0, &Var3))
		{
			if (func_542(Var3, 0))
			{
				Var12.f_4 = Var3.f_1;
				if (func_1453(Var3, Param1, Var12.f_4, 0) > 0)
				{
				}
				else
				{
					func_1972(&Var7);
					if (func_1065(Var3, &Var7, &Var12, 1, 752097756, 1))
					{
						if (bParam5)
						{
							func_1566(Var7, 1);
						}
					}
				}
			}
		}
		iVar0++;
	}
	return true;
}

void func_1564(int iParam0)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if (func_1580(1) < iParam0)
	{
		iParam0 = func_1580(1);
	}
	_money_decrement_cash_balance(iParam0);
	Var0 = { func_94(1644987397) };
	_0xbd861ae8a5181ed7(&Var0, iParam0);
}

bool func_1565(var uParam0, int iParam1, var uParam2, int iParam3, int iParam4, var uParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(&uParam0))
	{
		return false;
	}
	if (!_0x22e590f108289a9d(func_927(bParam6), &uParam0, iParam4, &Var0))
	{
		return false;
	}
	if (!func_1119(Var0, uParam5, bParam6, 0))
	{
		return false;
	}
	return true;
}

bool func_1566(struct<4> Param0, int iParam4)
{
	if (!func_570(0))
	{
		return func_2004(Param0, iParam4, 1) != -1;
	}
	if (!_0xb881ca836cc4b6d4(&Param0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_1119(Param0, &Var0, 0, 0))
	{
		return false;
	}
	if (Var0.f_10 == iParam4)
	{
		return true;
	}
	if (!_0x734311e2852760d0(func_927(0), &Param0, iParam4))
	{
		return false;
	}
	return true;
}

bool func_1567(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (func_1493(iParam0))
	{
		return false;
	}
	if (iParam1 <= 0)
	{
		return false;
	}
	if (!func_570(bParam4))
	{
		iVar0 = -1;
		return iVar0 != -1;
	}
	if (!_0xb4158c8c9a3b5dce(func_927(bParam4), iParam0, iParam1, iParam2))
	{
		return false;
	}
	return true;
}

void func_1568(int iParam0, int iParam1)
{
	iVar0 = 0;
	if (func_20() == -1)
	{
		if (func_552(43))
		{
			if (func_562(iParam0, 412399755))
			{
				func_1035(-1791518714);
				if (func_1036() == 0)
				{
					func_359(0, 10);
					iVar0 = func_2005(iParam0, iParam1, 1);
					if (((iParam0 == 281887510 || iParam0 == -164081697) || iParam0 == -1161319399) || iParam0 == 728781265)
					{
						if (func_1038(iParam0) < func_1039(iParam0))
						{
							func_558(43, iParam0, iParam1, -1791518714, iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (func_552(44))
		{
			if (func_562(iParam0, 709057512))
			{
				func_1035(-2087881550);
				if (func_1036() == 1)
				{
					func_359(0, 10);
					iVar0 = func_2005(iParam0, iParam1, 2);
					if ((iParam0 == -222563712 || iParam0 == 1794857344) || iParam0 == 1952409553)
					{
						if (func_1038(iParam0) < func_1039(iParam0))
						{
							func_558(43, iParam0, iParam1, -2087881550, iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!func_552(45))
		{
			if (func_562(iParam0, -1478961327))
			{
				func_1035(1908068621);
				if (func_1036() == 2)
				{
					func_359(0, 10);
					iVar0 = func_2005(iParam0, iParam1, 4);
					if (((iParam0 == 2116770557 || iParam0 == -651064726) || iParam0 == -404270094) || iParam0 == 2093126853)
					{
						if (func_1038(iParam0) < func_1039(iParam0))
						{
							func_558(43, iParam0, iParam1, 1908068621, iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!func_552(46))
		{
			if (func_562(iParam0, -1238404098))
			{
				func_1035(1611247019);
				if (func_1036() == 3)
				{
					func_359(0, 10);
					iVar0 = func_2005(iParam0, iParam1, 8);
					if (((iParam0 == 2085530337 || iParam0 == -150591160) || iParam0 == -323969289) || iParam0 == 1504361882)
					{
						if (func_1038(iParam0) < func_1039(iParam0))
						{
							func_558(43, iParam0, iParam1, 1611247019, iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!func_552(47))
		{
			if (func_562(iParam0, 1160548794))
			{
				func_1035(1319635688);
				if (func_1036() == 4)
				{
					func_359(0, 10);
					iVar0 = func_2005(iParam0, iParam1, 16);
					if (((iParam0 == -1521783510 || iParam0 == 1714875242) || iParam0 == 927763737) || iParam0 == 1019229063)
					{
						if (func_1038(iParam0) < func_1039(iParam0))
						{
							func_558(43, iParam0, iParam1, 1319635688, iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
	}
}

bool func_1569(int iParam0, int iParam1)
{
	*iParam1 = 0;
	*iParam1 = 0;
	while (*iParam1 < Global_1946804->f_2657.f_19)
	{
		if (iParam0 == &Global_1946804->f_2657[*iParam1])
		{
			return true;
		}
		*iParam1++;
	}
	return false;
}

void func_1570(var uParam0, int iParam1, int iParam2)
{
	iVar1 = func_2006(iParam1);
	func_2007(iParam1, iParam2);
	if (iVar1 >= 0 && uParam0->f_26 > 0)
	{
		func_2008(&(uParam0->f_26), iVar1);
		if (func_2009(uParam0->f_26, &iVar0))
		{
			func_2010(iVar0, iVar1);
		}
	}
}

bool func_1571(int iParam0, int iParam1)
{
	Var0 = { func_653(iParam0, 0, 0) };
	Var5 = { func_1009(iParam0, Var0, Var0.f_4, 0) };
	if (func_1453(iParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return false;
	}
	_0x9a113c660aea3832(func_927(0), &Var5, iParam1);
	return true;
}

void func_1572(int iParam0)
{
	Global_1946804->f_978 = iParam0;
}

bool func_1573(var uParam0, int iParam1)
{
	return (uParam0->f_2 && iParam1) != 0;
}

void func_1574(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	*uParam0 = iParam1;
	uParam0->f_1 = iParam2;
	uParam0->f_2 = iParam3;
	uParam0->f_3 = iParam4;
	uParam0->f_4 = iParam5;
	uParam0->f_6 = 0;
	uParam0->f_5 = 0;
}

void func_1575(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	iVar0 = 0;
	if (bParam4)
	{
		iVar0 = 3;
	}
	iVar1 = 12;
	iVar2 = 20;
	iVar3 = 16;
	if (uParam0->f_1[iVar3]->f_1 == 1216705912 || uParam0->f_1[iVar3]->f_1 == 654181853)
	{
		if (&uParam0->f_1[iVar1] == &Global_1946804->f_57[iVar1])
		{
			uParam0->f_1[iVar3]->f_1 = 1334603721;
		}
		else
		{
			uParam0->f_1[iVar3]->f_1 = -1539589426;
			uParam0->f_1[iVar1]->f_1 = 1155669136;
		}
		if (bParam2)
		{
			func_1514(iVar1, iVar0);
		}
		if (bParam1)
		{
			func_1514(iVar3, iVar0);
		}
	}
	if (uParam0->f_1[iVar2]->f_1 == -1333118809 || uParam0->f_1[iVar2]->f_1 == -1158926300)
	{
		uParam0->f_1[iVar2]->f_1 = 1155669136;
		if (bParam3)
		{
			func_1514(iVar2, iVar0);
		}
	}
}

bool func_1576(int iParam0)
{
	return &Global_1946804->f_529[iParam0] > 0;
}

void func_1577(int iParam0)
{
	Global_1946804->f_529[iParam0] = &Global_1946804->f_529[iParam0] + 1;
}

struct<4> func_1578()
{
	return Var0;
}

bool func_1579(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4, bool bParam5)
{
	*iParam3 = 0;
	if (*uParam2 < 15)
	{
		return false;
	}
	if (!func_542(iParam0, 0))
	{
		return false;
	}
	Var0.f_4 = 15;
	Var0.f_36 = 10;
	if (!_item_database_fillout_acquire_cost(iParam0, iParam1, &Var0))
	{
		if (!bParam5)
		{
		}
		return false;
	}
	if (!bParam5)
	{
	}
	*iParam3 = Var0.f_3;
	iVar47 = 0;
	while (iVar47 < Var0.f_3)
	{
		if (!bParam5)
		{
		}
		*(*uParam2)[iVar47] = { *Var0.f_4[iVar47] };
		iVar47++;
	}
	if (bParam4)
	{
		func_2011(iParam0, iParam1, uParam2, *iParam3);
	}
	return true;
}

int func_1580(int iParam0)
{
	return _money_get_cash_balance();
}

char* func_1581(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "HEADSHOT_DUTCH";
		case 1:
			return "HEADSHOT_JOHN";
		case 2:
			return "HEADSHOT_JAVIER";
		case 3:
			return "HEADSHOT_BILL";
		case 4:
			return "HEADSHOT_UNCLE";
		case 5:
			return "HEADSHOT_HOSEA";
		case 6:
			return "HEADSHOT_MICAH";
		case 7:
			return "HEADSHOT_CHARLES";
		case 8:
			return "HEADSHOT_SEAN";
		case 9:
			return "HEADSHOT_LENNY";
		case 10:
			return "HEADSHOT_KIERAN";
		case 11:
			return "HEADSHOT_SADIE";
		case 13:
			return "HEADSHOT_ABIGAIL";
		case 14:
			return "HEADSHOT_JACK";
		case 15:
			return "HEADSHOT_MARYBETH";
		case 16:
			return "HEADSHOT_MOLLY";
		case 17:
			return "HEADSHOT_PEARSON";
		case 18:
			return "HEADSHOT_STRAUSS";
		case 19:
			return "HEADSHOT_SUSAN";
		case 20:
			return "HEADSHOT_KAREN";
		case 21:
			return "HEADSHOT_SWANSON";
		case 22:
			return "HEADSHOT_TILLY";
		case 23:
			return "HEADSHOT_TRELAWNY";
		case 24:
			return "HEADSHOT_CLEET";
		case 25:
			return "HEADSHOT_JOE";
		default:
			break;
	}
	return "";
}

bool func_1582(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	if (Global_1572887->f_12 == -1)
	{
		return func_319((*Global_1835011)[iParam0]->f_1, 1);
	}
	return (_unlock_is_unlocked((*Global_1835011)[iParam0]->f_2) && !_unlock_is_visible((*Global_1835011)[iParam0]->f_2));
}

bool func_1583(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 25);
}

int func_1584(int iParam0)
{
	if (!func_240(iParam0))
	{
		return 0;
	}
	return (*Global_1888801)[iParam0]->f_3;
}

int func_1585(int iParam0)
{
	if (_does_volume_exist((*Global_1897952)[iParam0]->f_1))
	{
		return (*Global_1897952)[iParam0]->f_1;
	}
	switch (iParam0)
	{
		case 0:
			iVar0 = _create_volume_aggregate_with_custom_name("DISTRICT_BAYOU_NWA");
			_0x39816f6f94f385ad(iVar0, 2037.5f, -2050f, 150f, 0f, 0f, 18f, 575f, 750f, 700f);
			_0x39816f6f94f385ad(iVar0, 2485f, -1497.5f, 150f, 0f, 0f, 20f, 725f, 1050f, 700f);
			_0x39816f6f94f385ad(iVar0, 2060f, -1812.5f, 150f, 0f, 0f, 20f, 315f, 750f, 700f);
			_0x39816f6f94f385ad(iVar0, 1975f, -1452.5f, 150f, 0f, 0f, -43f, 200f, 350f, 700f);
			_0x39816f6f94f385ad(iVar0, 2022.5f, -1277.5f, 150f, 0f, 0f, -7f, 100f, 200f, 700f);
			_0x39816f6f94f385ad(iVar0, 2022.5f, -925f, 150f, 0f, 0f, 20f, 865f, 365f, 700f);
			_0x39816f6f94f385ad(iVar0, 2200f, -2440f, 150f, 0f, 0f, 0f, 500f, 1000f, 700f);
			_0x39816f6f94f385ad(iVar0, 1762.5f, -737.5f, 150f, 0f, 0f, 20f, 500f, 175f, 700f);
			_0x39816f6f94f385ad(iVar0, 2020.944f, -580.694f, 150f, 0f, 0f, -111f, 400f, 250f, 700f);
			_0x39816f6f94f385ad(iVar0, 2116.078f, -612.5f, 150f, 0f, 0f, -1f, 240f, 540f, 700f);
			_0x39816f6f94f385ad(iVar0, 2197.5f, -693.982f, 150f, 0f, 0f, -111f, 200f, 300f, 700f);
			_0x39816f6f94f385ad(iVar0, 2527.5f, -785f, 150f, 0f, 0f, -80f, 400f, 250f, 700f);
			_0x39816f6f94f385ad(iVar0, 3550f, -1455f, 150f, 0f, 0f, 0f, 1800f, 1000f, 700f);
			_0x39816f6f94f385ad(iVar0, 2687.5f, -757.5f, 150f, 0f, 0f, -80f, 400f, 75f, 700f);
			_0x39816f6f94f385ad(iVar0, 2826.796f, -755f, 150f, 0f, 0f, 0f, 282.646f, 400f, 700f);
			break;
		case 1:
			iVar0 = _create_volume_aggregate_with_custom_name("DISTRICT_BIG_VALLEY");
			_0x39816f6f94f385ad(iVar0, -1605f, -382.5f, 150f, 0f, 0f, 25f, 1100f, 1200f, 700f);
			_0x39816f6f94f385ad(iVar0, -2035f, -810f, 150f, 0f, 0f, -65f, 400f, 100f, 700f);
			_0x39816f6f94f385ad(iVar0, -1887.5f, -1050f, 150f, 0f, 0f, -45f, 210f, 100f, 700f);
			_0x39816f6f94f385ad(iVar0, -2210f, -625f, 150f, 0f, 0f, -65f, 200f, 100f, 700f);
			_0x39816f6f94f385ad(iVar0, -2827.5f, -82.5f, 150f, 0f, 0f, 167f, 1500f, 1000f, 700f);
			_0x39816f6f94f385ad(iVar0, -930f, -730f, 150f, 0f, 0f, 0f, 600f, 250f, 700f);
			_0x39816f6f94f385ad(iVar0, -825f, -780f, 150f, 0f, 0f, -45f, 300f, 300f, 700f);
			_0x39816f6f94f385ad(iVar0, -632.5f, -902.5f, 150f, 0f, 0f, -20f, 300f, 300f, 700f);
			_0x39816f6f94f385ad(iVar0, -820f, -170f, 150f, 0f, 0f, 37.5f, 500f, 350f, 700f);
			_0x39816f6f94f385ad(iVar0, -835f, -525f, 150f, 0f, 0f, 41f, 200f, 400f, 700f);
			_0x39816f6f94f385ad(iVar0, -532.5f, -32.5f, 150f, 0f, 0f, -27f, 150f, 200f, 700f);
			_0x39816f6f94f385ad(iVar0, -605f, 50f, 150f, 0f, 0f, -75f, 200f, 200f, 700f);
			_0x39816f6f94f385ad(iVar0, -540f, 50f, 150f, 0f, 0f, -140f, 150f, 200f, 700f);
			_0x39816f6f94f385ad(iVar0, -1127.5f, -90f, 150f, 0f, 0f, -32.5f, 200f, 100f, 700f);
			_0x39816f6f94f385ad(iVar0, -1500f, 392.5f, 150f, 0f, 0f, 160f, 700f, 400f, 700f);
			_0x39816f6f94f385ad(iVar0, -1477.5f, 552.5f, 150f, 0f, 0f, 143f, 800f, 300f, 700f);
			_0x39816f6f94f385ad(iVar0, -1656.969f, 378.098f, 150f, 0f, 0f, 122f, 795f, 1083f, 700f);
			_0x39816f6f94f385ad(iVar0, -2617.969f, 452.097f, 150f, 0f, 0f, 167f, 1763f, 1500f, 700f);
			break;
		case 2:
			iVar0 = _create_volume_aggregate_with_custom_name("DISTRICT_BLUEGILL_MARSH");
			_0x39816f6f94f385ad(iVar0, 3585f, -280f, 150f, 0f, 0f, 0f, 1800f, 550f, 700f);
			_0x39816f6f94f385ad(iVar0, 3085f, -337.5f, 150f, 0f, 0f, -80.5f, 300f, 1500f, 700f);
			_0x39816f6f94f385ad(iVar0, 2440f, -465f, 150f, 0f, 0f, -1f, 400f, 200f, 700f);
			_0x39816f6f94f385ad(iVar0, 2322.5f, -537.5f, 150f, 0f, 0f, -111f, 100f, 150f, 700f);
			_0x39816f6f94f385ad(iVar0, 3100f, 125f, 150f, 0f, 0f, 41f, 1700f, 350f, 700f);
			_0x39816f6f94f385ad(iVar0, 3670f, 80f, 150f, 0f, 0f, 41f, 1400f, 475f, 700f);
			_0x39816f6f94f385ad(iVar0, 2332.651f, -365.338f, 150f, 0f, 0f, 86f, 150f, 140f, 700f);
			_0x39816f6f94f385ad(iVar0, 2124.824f, -347.118f, 150f, 0f, 0f, 86f, 140f, 291f, 700f);
			_0x39816f6f94f385ad(iVar0, 3726.431f, -755f, 150f, 0f, 0f, 0f, 1518.809f, 400f, 700f);
			break;
		case 3:
			iVar0 = _create_volume_aggregate_with_custom_name("DISTRICT_CUMBERLAND_FOREST");
			_0x39816f6f94f385ad(iVar0, 190.4736f, 1214.829f, 200f, 0f, 0f, 59f, 488.2586f, 443.9291f, 800f);
			_0x39816f6f94f385ad(iVar0, 695f, 1075f, 200f, 0f, 0f, 35f, 250f, 250f, 800f);
			_0x39816f6f94f385ad(iVar0, -11.22244f, 1259.539f, 200f, 0f, 0f, 0f, 135f, 340.8336f, 800f);
			_0x39816f6f94f385ad(iVar0, 667.5f, 1675f, 200f, 0f, 0f, 15f, 150f, 325f, 800f);
			_0x39816f6f94f385ad(iVar0, 627.5f, 1255f, 200f, 0f, 0f, 9.999999f, 400f, 500f, 800f);
			_0x39816f6f94f385ad(iVar0, 507.5f, 1532.5f, 200f, 0f, 0f, -45f, 300f, 400f, 800f);
			_0x39816f6f94f385ad(iVar0, 72.5f, 1297.5f, 200f, 0f, 0f, 50f, 400f, 400f, 800f);
			_0x39816f6f94f385ad(iVar0, 615f, 1750f, 200f, 0f, 0f, -93f, 200f, 150f, 800f);
			_0x39816f6f94f385ad(iVar0, 510f, 1025f, 200f, 0f, 0f, 1f, 300f, 250f, 800f);
			_0x39816f6f94f385ad(iVar0, 330.2712f, 1028.66f, 200f, 0f, 0f, 82f, 300f, 100f, 800f);
			_0x39816f6f94f385ad(iVar0, 224.7084f, 1010.634f, 200f, 0f, 0f, 58.85596f, 175f, 267.2676f, 800f);
			_0x39816f6f94f385ad(iVar0, 153.0846f, 1314.722f, 200f, 0f, 0f, -23f, 400f, 409.2231f, 800f);
			break;
		case 4:
			iVar0 = _create_volume_aggregate_with_custom_name("DISTRICT_GREAT_PLAINS");
			_0x39816f6f94f385ad(iVar0, -1285f, -1725f, 150f, 0f, 0f, 20f, 500f, 250f, 700f);
			_0x39816f6f94f385ad(iVar0, -1360f, -1540f, 150f, 0f, 0f, 30f, 500f, 500f, 700f);
			_0x39816f6f94f385ad(iVar0, -1492.5f, -1262.5f, 150f, 0f, 0f, 15f, 500f, 250f, 700f);
			_0x39816f6f94f385ad(iVar0, -1410f, -1147.5f, 150f, 0f, 0f, 25f, 700f, 250f, 700f);
			_0x39816f6f94f385ad(iVar0, -865f, -1125f, 150f, 0f, 0f, -20f, 700f, 250f, 700f);
			_0x39816f6f94f385ad(iVar0, -865f, -1725f, 150f, 0f, 0f, 0f, 800f, 1200f, 700f);
			_0x39816f6f94f385ad(iVar0, -1300f, -1917.5f, 150f, 0f, 0f, -42f, 250f, 250f, 700f);
			_0x39816f6f94f385ad(iVar0, -1180f, -2122.5f, 150f, 0f, 0f, 20f, 300f, 350f, 700f);
			_0x39816f6f94f385ad(iVar0, -955f, -1065f, 150f, 0f, 0f, -45f, 250f, 250f, 700f);
			_0x39816f6f94f385ad(iVar0, -1052.5f, -990f, 150f, 0f, 0f, 1.25f, 200f, 200f, 700f);
			break;
		case 7:
			iVar0 = _create_volume_aggregate_with_custom_name("DISTRICT_GRIZZLIES_WEST");
			_0x39816f6f94f385ad(iVar0, -100f, 1557.5f, 200f, 0f, 0f, 50f, 225f, 200f, 800f);
			_0x39816f6f94f385ad(iVar0, -162.5f, 1660f, 200f, 0f, 0f, 0f, 135f, 500f, 800f);
			_0x39816f6f94f385ad(iVar0, -162.5f, 1952.5f, 200f, 0f, 0f, 9f, 300f, 800f, 800f);
			_0x39816f6f94f385ad(iVar0, -752.5f, 2135f, 200f, 0f, 0f, 0f, 1050f, 1975f, 800f);
			_0x39816f6f94f385ad(iVar0, -2139.972f, 1966.829f, 200f, 0f, 0f, 165f, 1814.271f, 1288f, 800f);
			_0x39816f6f94f385ad(iVar0, -1295f, 1090f, 200f, 0f, 0f, 122f, 1200f, 300f, 800f);
			_0x39816f6f94f385ad(iVar0, -1080f, 1132.5f, 200f, 0f, 0f, 105f, 1200f, 375f, 800f);
			_0x39816f6f94f385ad(iVar0, -895f, 1150f, 200f, 0f, 0f, 45f, 800f, 800f, 800f);
			_0x39816f6f94f385ad(iVar0, -845f, 720f, 200f, 0f, 0f, 0f, 200f, 300f, 800f);
			_0x39816f6f94f385ad(iVar0, -1015f, 560f, 200f, 0f, 0f, 143f, 75f, 200f, 800f);
			_0x39816f6f94f385ad(iVar0, -1940f, 3145f, 200f, 0f, 0f, 0f, 1400f, 2000f, 800f);
			_0x39816f6f94f385ad(iVar0, -757.5f, 3625f, 200f, 0f, 0f, 0f, 975f, 1050f, 800f);
			_0x39816f6f94f385ad(iVar0, -187.5f, 3210f, 200f, 0f, 0f, -6f, 400f, 1800f, 800f);
			_0x39816f6f94f385ad(iVar0, -2315.88f, 1498.498f, 150f, 0f, 0f, 167f, 1655f, 587f, 700f);
			break;
		case 6:
			iVar0 = _create_volume_aggregate_with_custom_name("DISTRICT_GRIZZLIES_EAST");
			_0x39816f6f94f385ad(iVar0, 190f, 1630f, 200f, 0f, 0f, -23f, 225f, 200f, 800f);
			_0x39816f6f94f385ad(iVar0, 715f, 3145f, 200f, 0f, 0f, 0f, 1200f, 2000f, 800f);
			_0x39816f6f94f385ad(iVar0, 1210f, 1212.5f, 200f, 0f, 0f, -14f, 585f, 500f, 800f);
			_0x39816f6f94f385ad(iVar0, 1510f, 1445f, 200f, 0f, 0f, 16f, 450f, 1000f, 800f);
			_0x39816f6f94f385ad(iVar0, 1935f, 1040f, 200f, 0f, 0f, 12f, 200f, 100f, 800f);
			_0x39816f6f94f385ad(iVar0, 1810f, 1030f, 200f, 0f, 0f, -14f, 100f, 100f, 800f);
			_0x39816f6f94f385ad(iVar0, 1495f, 1425f, 200f, 0f, 0f, -9f, 1200f, 650f, 800f);
			_0x39816f6f94f385ad(iVar0, 1050f, 1430f, 200f, 0f, 0f, 10f, 500f, 700f, 800f);
			_0x39816f6f94f385ad(iVar0, 2037.5f, 1630f, 200f, 0f, 0f, 118f, 200f, 200f, 800f);
			_0x39816f6f94f385ad(iVar0, 1400f, 2500f, 200f, 0f, 0f, -47f, 2000f, 800f, 800f);
			_0x39816f6f94f385ad(iVar0, 1810f, 2707.5f, 200f, 0f, 0f, -19f, 1500f, 900f, 800f);
			_0x39816f6f94f385ad(iVar0, 2175f, 3557.5f, 200f, 0f, 0f, -39f, 2000f, 1500f, 800f);
			_0x39816f6f94f385ad(iVar0, 1040f, 2120f, 200f, 0f, 0f, 15f, 800f, 1000f, 800f);
			_0x39816f6f94f385ad(iVar0, 410f, 2112.5f, 200f, 0f, 0f, -93f, 500f, 600f, 800f);
			_0x39816f6f94f385ad(iVar0, 307.5f, 1722.5f, 200f, 0f, 0f, -45f, 250f, 400f, 800f);
			_0x39816f6f94f385ad(iVar0, 472.5f, 1880f, 200f, 0f, 0f, -93f, 200f, 150f, 800f);
			_0x39816f6f94f385ad(iVar0, 135f, 2000f, 200f, 0f, 0f, 9f, 300f, 800f, 800f);
			_0x39816f6f94f385ad(iVar0, 217.5f, 3245f, 200f, 0f, 0f, -6f, 400f, 1800f, 800f);
			Jump @9446; //curOff = 4298
			if (_does_volume_exist((*Global_1897952)[6]->f_1) && _does_volume_exist((*Global_1897952)[7]->f_1))
			{
				iVar0 = _create_volume_aggregate_with_custom_name("DISTRICT_GRIZZLIES");
				_0x6e0d3c3f828da773(iVar0, (*Global_1897952)[6]->f_1);
				_0x6e0d3c3f828da773(iVar0, (*Global_1897952)[7]->f_1);
			}
			else
			{
				return 0;
			}
			Jump @9446; //curOff = 4382
			iVar0 = _create_volume_aggregate_with_custom_name("DISTRICT_GUARMA");
			_0xbce668aaf83608be(iVar0, 2410.933f, -7578.265f, 50f, 0f, 0f, 0f, 2000f, 2000f, 890f);
			_0xbce668aaf83608be(iVar0, 2388.016f, -4563.885f, 50f, 0f, 0f, 0f, 815f, 500f, 800f);
			Jump @9446; //curOff = 4473
			iVar0 = _create_volume_aggregate_with_custom_name("DISTRICT_HEARTLAND");
			_0x39816f6f94f385ad(iVar0, -357.5f, -120f, 200f, 0f, 0f, -27f, 150f, 350f, 800f);
			_0x39816f6f94f385ad(iVar0, -385f, 180f, 200f, 0f, 0f, -140f, 150f, 350f, 800f);
			_0x39816f6f94f385ad(iVar0, -600f, 280f, 200f, 0f, 0f, -75f, 150f, 350f, 800f);
			_0x39816f6f94f385ad(iVar0, 165f, 165f, 200f, 0f, 0f, 0f, 1100f, 1000f, 800f);
			_0x39816f6f94f385ad(iVar0, -465f, -340f, 200f, 0f, 0f, 37.5f, 500f, 275f, 800f);
			_0x39816f6f94f385ad(iVar0, -37.5f, -525f, 200f, 0f, 0f, 0f, 1125f, 400f, 800f);
			_0x39816f6f94f385ad(iVar0, 670f, -315f, 200f, 0f, 0f, -42f, 365f, 817f, 800f);
			_0x39816f6f94f385ad(iVar0, 860f, 487.5f, 200f, 0f, 0f, 35f, 650f, 900f, 800f);
			_0x39816f6f94f385ad(iVar0, 512.5f, 800f, 200f, 0f, 0f, 1f, 300f, 200f, 800f);
			_0x39816f6f94f385ad(iVar0, 1230f, 695f, 200f, 0f, 0f, -14f, 875f, 500f, 800f);
			_0x39816f6f94f385ad(iVar0, 1560f, 835f, 200f, 0f, 0f, 16f, 450f, 200f, 800f);
			_0x39816f6f94f385ad(iVar0, 1727.5f, 702.5f, 200f, 0f, 0f, -14f, 100f, 575f, 800f);
			_0x39816f6f94f385ad(iVar0, 964.14f, 59.521f, 200f, 0f, 0f, -71.00001f, 415f, 725f, 800f);
			_0x39816f6f94f385ad(iVar0, 1485f, 322.5f, 200f, 0f, 0f, -84f, 650f, 400f, 800f);
			_0x39816f6f94f385ad(iVar0, 1630f, 100f, 200f, 0f, 0f, -111f, 435f, 375f, 800f);
			_0x39816f6f94f385ad(iVar0, 1752.5f, 302.5f, 200f, 0f, 0f, -47f, 275f, 100f, 800f);
			_0x39816f6f94f385ad(iVar0, 103.6867f, 807.6879f, 200f, 0f, 0f, 58.7951f, 295.0871f, 709.0376f, 800f);
			_0x39816f6f94f385ad(iVar0, 302.139f, 780.344f, 200f, 0f, 0f, 82f, 200f, 157.492f, 800f);
			_0x39816f6f94f385ad(iVar0, -847.5f, 240f, 200f, 0f, 0f, 33f, 797f, 225f, 800f);
			_0x39816f6f94f385ad(iVar0, -975f, 280f, 200f, 0f, 0f, 142f, 329f, 450f, 800f);
			_0x39816f6f94f385ad(iVar0, -245.4394f, 1000f, 200f, 0f, 0f, 0f, 333.3127f, 300f, 800f);
			_0x39816f6f94f385ad(iVar0, -760f, 440f, 200f, 0f, 0f, 105f, 300f, 250f, 800f);
			_0x39816f6f94f385ad(iVar0, -520f, 507.5f, 200f, 0f, 0f, 0f, 450f, 450f, 800f);
			_0x39816f6f94f385ad(iVar0, -495f, 822.5f, 200f, 0f, 0f, 45f, 500f, 225f, 800f);
			_0x39816f6f94f385ad(iVar0, -140f, 705f, 200f, 0f, 0f, 59f, 250f, 650f, 800f);
			_0x39816f6f94f385ad(iVar0, -327.5f, 1080f, 200f, 0f, 0f, 45f, 100f, 100f, 800f);
			Jump @9446; //curOff = 5584
			iVar0 = _create_volume_aggregate_with_custom_name("DISTRICT_ROANOKE_RIDGE");
			_0x39816f6f94f385ad(iVar0, 1838.526f, 72.693f, 200f, 0f, 0f, -111f, 525f, 311f, 800f);
			_0x39816f6f94f385ad(iVar0, 2827.5f, 1215f, 200f, 0f, 0f, -9f, 1500f, 650f, 800f);
			_0x39816f6f94f385ad(iVar0, 1920f, 655f, 200f, 0f, 0f, -14f, 300f, 575f, 800f);
			_0x39816f6f94f385ad(iVar0, 2181.992f, -132.078f, 200f, 0f, 0f, 86f, 315f, 322f, 800f);
			_0x39816f6f94f385ad(iVar0, 2130f, 825f, 200f, 0f, 0f, 12f, 500f, 400f, 800f);
			_0x39816f6f94f385ad(iVar0, 2345f, 1795f, 200f, 0f, 0f, 118f, 200f, 500f, 800f);
			_0x39816f6f94f385ad(iVar0, 2775f, 725f, 200f, 0f, 0f, 41f, 2000f, 985f, 800f);
			_0x39816f6f94f385ad(iVar0, 2565f, 1537.5f, 200f, 0f, 0f, -47f, 1000f, 400f, 800f);
			_0x39816f6f94f385ad(iVar0, 3025f, 1632.5f, 200f, 0f, 0f, -19f, 1500f, 1000f, 800f);
			_0x39816f6f94f385ad(iVar0, 3730f, 2300f, 200f, 0f, 0f, -39f, 2000f, 1500f, 800f);
			Jump @9446; //curOff = 6027
			iVar0 = _create_volume_aggregate_with_custom_name("DISTRICT_SCARLETT_MEADOWS");
			_0x39816f6f94f385ad(iVar0, 1025f, -642.5f, 150f, 0f, 0f, -42f, 600f, 800f, 700f);
			_0x39816f6f94f385ad(iVar0, 1335f, -407.5f, 150f, 0f, 0f, -71f, 717f, 325f, 700f);
			_0x39816f6f94f385ad(iVar0, 1585f, -330f, 150f, 0f, 0f, -111f, 400f, 625f, 700f);
			_0x39816f6f94f385ad(iVar0, 1250f, -1702.5f, 150f, 0f, 0f, 0f, 594f, 2000f, 700f);
			_0x39816f6f94f385ad(iVar0, 612.5f, -1337.5f, 150f, 0f, 0f, 0f, 850f, 1200f, 700f);
			_0x39816f6f94f385ad(iVar0, 677.5f, -2270f, 150f, 0f, 0f, 45f, 1000f, 700f, 700f);
			_0x39816f6f94f385ad(iVar0, 1408.3f, -1687.9f, 150f, 0f, 0f, 5f, 450f, 1300f, 700f);
			_0x39816f6f94f385ad(iVar0, 1600f, -545f, 100f, 0f, 0f, 20f, 325f, 300f, 700f);
			_0x39816f6f94f385ad(iVar0, 1807.467f, -1544.09f, 150f, 0f, 0f, -72f, 309f, 562f, 700f);
			_0x39816f6f94f385ad(iVar0, 1705.656f, -1257.077f, 150f, 0f, 0f, 20f, 400f, 50f, 700f);
			_0x39816f6f94f385ad(iVar0, 1946.824f, -1264.023f, 150f, 0f, 0f, 21f, 100f, 176f, 700f);
			_0x39816f6f94f385ad(iVar0, 1735.228f, -1334.945f, 150f, 0f, 0f, 20f, 295f, 150f, 700f);
			_0x39816f6f94f385ad(iVar0, 1902.5f, -432.5f, 150f, 0f, 0f, -111f, 365f, 75f, 700f);
			_0x39816f6f94f385ad(iVar0, 1827.5f, -580f, 150f, 0f, 0f, 20f, 75f, 75f, 700f);
			_0x39816f6f94f385ad(iVar0, 1571.834f, -1097.489f, 150f, 0f, 0f, 20f, 85f, 371f, 700f);
			_0x39816f6f94f385ad(iVar0, 1661.989f, -1972.796f, 150f, 0f, 0f, 18f, 85f, 371f, 700f);
			Jump @9446; //curOff = 6716
			iVar0 = _create_volume_aggregate_with_custom_name("DISTRICT_TALL_TREES");
			_0x39816f6f94f385ad(iVar0, -1762.5f, -2030f, 150f, 0f, 0f, 16f, 275f, 400f, 700f);
			_0x39816f6f94f385ad(iVar0, -1445f, -1987.5f, 150f, 0f, 0f, -42f, 125f, 50f, 700f);
			_0x39816f6f94f385ad(iVar0, -1600f, -1882.5f, 150f, 0f, 0f, 20f, 200f, 335f, 700f);
			_0x39816f6f94f385ad(iVar0, -1927.5f, -1750f, 150f, 0f, 0f, 30f, 690f, 300f, 700f);
			_0x39816f6f94f385ad(iVar0, -2052.5f, -1517.5f, 150f, 0f, 0f, 15f, 715f, 500f, 700f);
			_0x39816f6f94f385ad(iVar0, -2162.5f, -1237.5f, 150f, 0f, 0f, -45f, 500f, 500f, 700f);
			_0x39816f6f94f385ad(iVar0, -2272.5f, -1057.5f, 150f, 0f, 0f, -65f, 519f, 530f, 700f);
			_0x39816f6f94f385ad(iVar0, -2865f, -1112.5f, 150f, 0f, 0f, 167f, 1250f, 1000f, 700f);
			_0x39816f6f94f385ad(iVar0, -1972.5f, -2022.5f, 150f, 0f, 0f, 44f, 300f, 200f, 700f);
			_0x39816f6f94f385ad(iVar0, -1875f, -2087.5f, 150f, 0f, 0f, 70f, 300f, 180f, 700f);
			_0x39816f6f94f385ad(iVar0, -2140f, -1950f, 150f, 0f, 0f, 70f, 200f, 200f, 700f);
			_0x39816f6f94f385ad(iVar0, -2210f, -1890f, 150f, 0f, 0f, 24f, 200f, 175f, 700f);
			_0x39816f6f94f385ad(iVar0, -1397.5f, -2027.5f, 150f, 0f, 0f, 20f, 45f, 25f, 700f);
			Jump @9446; //curOff = 7288
			iVar0 = _create_volume_aggregate_with_custom_name("DISTRICT_CHOLLA_SPRINGS");
			_0x39816f6f94f385ad(iVar0, -3305f, -3380f, 150f, 0f, 0f, 123f, 300f, 575f, 700f);
			_0x39816f6f94f385ad(iVar0, -3335f, -3582.5f, 150f, 0f, 0f, 170f, 225f, 200f, 700f);
			_0x39816f6f94f385ad(iVar0, -3200f, -3515f, 150f, 0f, 0f, -154f, 235f, 300f, 700f);
			_0x39816f6f94f385ad(iVar0, -3515f, -3190f, 150f, 0f, 0f, 139f, 450f, 575f, 700f);
			_0x39816f6f94f385ad(iVar0, -3930f, -2912.5f, 150f, 0f, 0f, 154f, 700f, 575f, 700f);
			_0x39816f6f94f385ad(iVar0, -4537.5f, -2665f, 150f, 0f, 0f, -178f, 1000f, 800f, 700f);
			_0x39816f6f94f385ad(iVar0, -4967.5f, -2390f, 150f, 0f, 0f, -148f, 300f, 200f, 700f);
			_0x39816f6f94f385ad(iVar0, -4617.5f, -2080f, 150f, 0f, 0f, 175f, 1000f, 700f, 700f);
			_0x39816f6f94f385ad(iVar0, -3747.5f, -2030f, 150f, 0f, 0f, 99f, 700f, 1000f, 700f);
			_0x39816f6f94f385ad(iVar0, -3282.5f, -3050f, 150f, 0f, 0f, 107f, 750f, 400f, 700f);
			_0x39816f6f94f385ad(iVar0, -3370f, -2690f, 150f, 0f, 0f, 124f, 100f, 350f, 700f);
			_0x39816f6f94f385ad(iVar0, -3355f, -2345f, 150f, 0f, 0f, 69f, 200f, 250f, 700f);
			_0x39816f6f94f385ad(iVar0, -3657.5f, -2610f, 150f, 0f, 0f, 98f, 500f, 850f, 700f);
			Jump @9446; //curOff = 7860
			iVar0 = _create_volume_aggregate_with_custom_name("DISTRICT_GAPTOOTH_RIDGE");
			_0x39816f6f94f385ad(iVar0, -5420f, -3447.5f, 150f, 0f, 0f, 175f, 300f, 250f, 700f);
			_0x39816f6f94f385ad(iVar0, -5837.5f, -3530f, 150f, 0f, 0f, -32f, 1000f, 500f, 700f);
			_0x39816f6f94f385ad(iVar0, -6142.5f, -3665f, 150f, 0f, 0f, -8f, 800f, 300f, 700f);
			_0x39816f6f94f385ad(iVar0, -5747.5f, -2905f, 150f, 0f, 0f, 136.5f, 1300f, 750f, 700f);
			_0x39816f6f94f385ad(iVar0, -5407.5f, -2487.5f, 150f, 0f, 0f, -148f, 550f, 500f, 700f);
			_0x39816f6f94f385ad(iVar0, -5232.5f, -2825f, 150f, 0f, 0f, -178f, 400f, 530f, 700f);
			_0x39816f6f94f385ad(iVar0, -5667.5f, -2040f, 150f, 0f, 0f, 175f, 1100f, 800f, 700f);
			Jump @9446; //curOff = 8174
			iVar0 = _create_volume_aggregate_with_custom_name("DISTRICT_HENNIGAS_STEAD");
			_0x39816f6f94f385ad(iVar0, -2510f, -2542.5f, 150f, 0f, 0f, 44f, 1200f, 200f, 700f);
			_0x39816f6f94f385ad(iVar0, -1632.5f, -2480f, 150f, 0f, 0f, 16f, 275f, 535f, 700f);
			_0x39816f6f94f385ad(iVar0, -1990f, -2525f, 150f, 0f, 0f, 70f, 600f, 850f, 700f);
			_0x39816f6f94f385ad(iVar0, -1452.5f, -2342.5f, 150f, 0f, 0f, 16f, 150f, 625f, 700f);
			_0x39816f6f94f385ad(iVar0, -1480f, -2177.5f, 150f, 0f, 0f, 20f, 165f, 300f, 700f);
			_0x39816f6f94f385ad(iVar0, -1487.5f, -2087.5f, 150f, 0f, 0f, -42f, 60f, 150f, 700f);
			_0x39816f6f94f385ad(iVar0, -1350f, -2330f, 150f, 0f, 0f, 20f, 165f, 575f, 700f);
			_0x39816f6f94f385ad(iVar0, -1562.5f, -2652.5f, 150f, 0f, 0f, 28f, 500f, 200f, 700f);
			_0x39816f6f94f385ad(iVar0, -2445f, -2795f, 150f, 0f, 0f, 107f, 750f, 1350f, 700f);
			_0x39816f6f94f385ad(iVar0, -2675f, -2177.5f, 150f, 0f, 0f, 70f, 600f, 900f, 700f);
			_0x39816f6f94f385ad(iVar0, -2947.5f, -2465f, 150f, 0f, 0f, 98f, 150f, 600f, 700f);
			_0x39816f6f94f385ad(iVar0, -3097.5f, -1977.5f, 150f, 0f, 0f, 99f, 800f, 300f, 700f);
			_0x39816f6f94f385ad(iVar0, -2467.5f, -3145f, 150f, 0f, 0f, 123f, 150f, 200f, 700f);
			_0x39816f6f94f385ad(iVar0, -2577.5f, -3182.5f, 150f, 0f, 0f, 85f, 150f, 150f, 700f);
			_0x39816f6f94f385ad(iVar0, -2985f, -2502.5f, 150f, 0f, 0f, 124f, 150f, 500f, 700f);
			_0x39816f6f94f385ad(iVar0, -2942.5f, -2457.5f, 150f, 0f, 0f, 69f, 175f, 600f, 700f);
			Jump @9446; //curOff = 8875
			iVar0 = _create_volume_aggregate_with_custom_name("DISTRICT_RIO_BRAVO");
			_0x39816f6f94f385ad(iVar0, -3540f, -3635f, 150f, 0f, 0f, 123f, 125f, 100f, 700f);
			_0x39816f6f94f385ad(iVar0, -3880f, -3687.5f, 150f, 0f, 0f, 105f, 225f, 625f, 700f);
			_0x39816f6f94f385ad(iVar0, -4495f, -3610f, 150f, 0f, 0f, 96f, 600f, 625f, 700f);
			_0x39816f6f94f385ad(iVar0, -4922.5f, -3742.5f, 150f, 0f, 0f, 131f, 500f, 500f, 700f);
			_0x39816f6f94f385ad(iVar0, -5135f, -3900f, 150f, 0f, 0f, 22f, 200f, 500f, 700f);
			_0x39816f6f94f385ad(iVar0, -5205f, -3887.5f, 150f, 0f, 0f, -16f, 300f, 500f, 700f);
			_0x39816f6f94f385ad(iVar0, -5350f, -3835f, 150f, 0f, 0f, -32f, 150f, 500f, 700f);
			_0x39816f6f94f385ad(iVar0, -5125f, -3500f, 150f, 0f, 0f, 175f, 300f, 300f, 700f);
			_0x39816f6f94f385ad(iVar0, -4975f, -3360f, 150f, 0f, 0f, 137f, 450f, 350f, 700f);
			_0x39816f6f94f385ad(iVar0, -4645f, -3220f, 150f, 0f, 0f, -178f, 735f, 300f, 700f);
			_0x39816f6f94f385ad(iVar0, -4205f, -3420f, 150f, 0f, 0f, 154f, 450f, 575f, 700f);
			_0x39816f6f94f385ad(iVar0, -3795f, -3510f, 150f, 0f, 0f, 139f, 450f, 275f, 700f);
			_0x39816f6f94f385ad(iVar0, -3992.5f, -3567.5f, 150f, 0f, 0f, 0f, 200f, 200f, 700f);
			(*Global_1897952)[iParam0]->f_1 = iVar0;
			return iVar0;
		}

bool func_1586(int iParam0)
{
	if ((iParam0 == 22 || iParam0 == 37) && !func_971())
	{
		return true;
	}
	if (iParam0 == 61)
	{
		return true;
	}
	return false;
}

int func_1587(int iParam0, int iParam1)
{
	if (iParam1 == 11)
	{
		return 101;
	}
	else if (iParam1 == 32)
	{
		return 126;
	}
	else if (iParam1 == 34)
	{
		return 127;
	}
	switch (iParam0)
	{
		case 79:
			switch (iParam1)
			{
				case 0:
					return 128;
				case 6:
					return 130;
				case 27:
					return 131;
				case 26:
					return 129;
				case 19:
					return 59;
				default:
					break;
			}
			break;
		case 38:
			switch (iParam1)
			{
				case 15:
					return 6;
				case 33:
					return 11;
				case 29:
					return 106;
				case 30:
					return 107;
				case 3:
					return 7;
				case 8:
					return 9;
				case 10:
					return 10;
				case 9:
					return 13;
				case 2:
					return 14;
				case 1:
					return 15;
				case 31:
					return 108;
				case 22:
					return 16;
				case 7:
					return 17;
				case 21:
					return 12;
				default:
					break;
			}
			break;
		case 98:
			switch (iParam1)
			{
				case 0:
					return 132;
				case 6:
					return 134;
				case 27:
					return 135;
				case 26:
					return 133;
				case 19:
					return 57;
				default:
					break;
			}
			break;
		case 69:
			switch (iParam1)
			{
				case 4:
					return 18;
				case 3:
					return 19;
				case 2:
					return 20;
				case 1:
					return 21;
				case 31:
					return 105;
				default:
					break;
			}
			break;
		case 71:
			switch (iParam1)
			{
				case 0:
					return 137;
				case 6:
					return 139;
				case 27:
					return 140;
				case 26:
					return 138;
				case 19:
					return 56;
				default:
					break;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return 141;
				case 6:
					return 143;
				case 27:
					return 144;
				case 26:
					return 142;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 17:
					return 22;
				case 31:
					return 118;
				default:
					break;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 15:
					return 36;
				case 8:
					return 37;
				case 33:
					return 52;
				case 29:
					return 109;
				case 10:
					return 38;
				case 30:
					return 110;
				case 0:
					return 39;
				case 4:
					return 41;
				case 3:
					return 42;
				case 6:
					return 43;
				case 9:
					return 44;
				case 2:
					return 45;
				case 1:
					return 46;
				case 31:
					return 111;
				case 22:
					return 51;
				case 7:
					return 47;
				case 12:
					return 48;
				case 13:
					return 49;
				case 14:
					return 50;
				case 18:
					return 55;
				case 21:
					return 54;
				default:
					break;
			}
			break;
		case 105:
			switch (iParam1)
			{
				case 15:
					return 25;
				case 33:
					return 33;
				case 29:
					return 112;
				case 10:
					return 26;
				case 4:
					return 27;
				case 3:
					return 28;
				case 6:
					return 29;
				case 2:
					return 30;
				case 31:
					return 113;
				case 22:
					return 32;
				case 1:
					return 31;
				default:
					break;
			}
			break;
		case 101:
			switch (iParam1)
			{
				case 9:
					return 35;
				default:
					break;
			}
			break;
		case 13:
			switch (iParam1)
			{
				case 18:
					return 4;
				default:
					break;
			}
			break;
		case 23:
			switch (iParam1)
			{
				case 2:
					return 23;
				case 1:
					return 24;
				default:
					break;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 0:
					return 145;
				case 26:
					return 146;
				case 6:
					return 147;
				case 27:
					return 148;
				case 19:
					return 58;
				default:
					break;
			}
			break;
		case 26:
			switch (iParam1)
			{
				case 29:
					return 114;
				case 33:
					return 66;
				case 10:
					return 60;
				case 3:
					return 61;
				case 20:
					return 62;
				case 9:
					return 63;
				case 31:
					return 115;
				case 22:
					return 64;
				case 2:
					return 65;
				default:
					break;
			}
			break;
		case 14:
			switch (iParam1)
			{
				case 18:
					return 5;
				default:
					break;
			}
			break;
		case 76:
			switch (iParam1)
			{
				case 15:
					return 68;
				case 8:
					return 69;
				case 33:
					return 70;
				case 29:
					return 102;
				case 10:
					return 72;
				case 30:
					return 103;
				case 0:
					return 73;
				case 3:
					return 74;
				case 6:
					return 75;
				case 9:
					return 76;
				case 2:
					return 77;
				case 31:
					return 104;
				case 1:
					return 78;
				case 22:
					return 80;
				case 20:
					return 79;
				default:
					break;
			}
			break;
		case 92:
			switch (iParam1)
			{
				case 30:
					return 116;
				case 4:
					return 82;
				case 2:
					return 86;
				case 1:
					return 85;
				case 31:
					return 117;
				case 9:
					return 84;
				default:
					break;
			}
			break;
		case 78:
			switch (iParam1)
			{
				case 29:
					return 120;
				case 6:
					return 0;
				case 2:
					return 2;
				case 31:
					return 121;
				case 22:
					return 1;
				case 1:
					return 3;
				default:
					break;
			}
			break;
		case 90:
		case 128:
			switch (iParam1)
			{
				case 18:
					return 34;
				default:
					break;
			}
			break;
		case 28:
			switch (iParam1)
			{
				case 2:
					return 89;
				case 1:
					return 88;
				case 3:
					return 87;
				default:
					break;
			}
			break;
		case 65:
			switch (iParam1)
			{
				case 31:
					return 119;
				default:
					break;
			}
			break;
		case 82:
			switch (iParam1)
			{
				case 31:
					return 122;
				default:
					break;
			}
			break;
		case 110:
			switch (iParam1)
			{
				case 31:
					return 124;
				default:
					break;
			}
			break;
		case 115:
			switch (iParam1)
			{
				case 33:
					return 93;
				case 3:
					return 90;
				case 6:
					return 91;
				case 9:
					return 94;
				case 10:
					return 92;
				default:
					break;
			}
			break;
		case 120:
			switch (iParam1)
			{
				case 3:
					return 95;
				case 2:
					return 96;
				default:
					break;
			}
			break;
		case 123:
			switch (iParam1)
			{
				case 4:
					return 98;
				default:
					break;
			}
			break;
		case 117:
			switch (iParam1)
			{
				case 31:
					return 123;
				case 2:
					return 99;
				case 1:
					return 100;
				default:
					break;
			}
			break;
		case 113:
			switch (iParam1)
			{
				case 18:
					return 67;
				default:
					break;
			}
			break;
		case 127:
			switch (iParam1)
			{
				case 4:
					return 125;
				default:
					break;
			}
			break;
	}
	return -1;
}

int func_1588(int iParam0)
{
	switch (iParam0)
	{
		case 7:
			return 443958153;
		case 8:
			return 1035357148;
		case 9:
			return -990591911;
		case 17:
			return 1434435999;
		case 13:
			return 914613127;
		case 14:
			return 277114628;
		case 15:
			return -441298053;
		case 108:
			return 1671261677;
		case 12:
			return -2008988392;
		case 16:
			return -1779570775;
		case 106:
			return 1866591384;
		case 107:
			return -810797676;
		case 6:
			return 1591504033;
		case 10:
			return -1481022983;
		case 11:
			return -200160067;
		case 19:
			return 213861089;
		case 20:
			return 187124199;
		case 21:
			return -1639286351;
		case 18:
			return 1244472740;
		case 105:
			return -1711647719;
		case 22:
			return -184950877;
		case 118:
			return 354888782;
		case 39:
			return -922179383;
		case 42:
			return 877339314;
		case 41:
			return 327042733;
		case 43:
			return -1159824322;
		case 36:
			return 187784199;
		case 37:
			return 156869848;
		case 38:
			return 959980967;
		case 40:
			return 268171375;
		case 44:
			return -605457855;
		case 45:
			return -967272484;
		case 46:
			return 253446434;
		case 47:
			return -24930371;
		case 55:
			return -491616406;
		case 111:
			return 806137889;
		case 48:
			return 683812333;
		case 49:
			return 1055138492;
		case 50:
			return -1673339528;
		case 53:
			return 1428271505;
		case 54:
			return -2132681852;
		case 51:
			return 641024601;
		case 109:
			return 1479356600;
		case 110:
			return -1608228131;
		case 52:
			return 1700741106;
		case 23:
			return -768596287;
		case 24:
			return -1789795772;
		case 28:
			return 986912071;
		case 27:
			return 312948291;
		case 29:
			return 770563571;
		case 30:
			return 288839560;
		case 26:
			return 399352507;
		case 31:
			return -1241147617;
		case 113:
			return 399096998;
		case 32:
			return -483073269;
		case 112:
			return 1576805996;
		case 25:
			return -1427623397;
		case 33:
			return 305555540;
		case 60:
			return 2080716288;
		case 61:
			return 922959422;
		case 62:
			return 1948709075;
		case 63:
			return 599204508;
		case 65:
			return -362796541;
		case 115:
			return -1178912317;
		case 64:
			return -1575046645;
		case 114:
			return -176953214;
		case 66:
			return -1992095599;
		case 73:
			return 646741747;
		case 74:
			return -773037432;
		case 75:
			return 1444751354;
		case 69:
			return 709943351;
		case 77:
			return 731746260;
		case 76:
			return 405856312;
		case 72:
			return -1749578899;
		case 78:
			return 1581089825;
		case 104:
			return -883880335;
		case 71:
			return 1124822890;
		case 81:
			return 1618521465;
		case 80:
			return -1675300716;
		case 79:
			return -442258411;
		case 102:
			return 1665083003;
		case 103:
			return 810431028;
		case 68:
			return 1161446575;
		case 70:
			return -406930559;
		case 35:
			return 1523596125;
		case 86:
			return -372049939;
		case 85:
			return 226213668;
		case 82:
			return 1437804895;
		case 117:
			return 430529746;
		case 84:
			return -1254552445;
		case 83:
			return 1526480524;
		case 116:
			return 644508980;
		case 1:
			return 1628277480;
		case 120:
			return -1985767496;
		case 0:
			return 1117878254;
		case 2:
			return 622553269;
		case 3:
			return -1934358691;
		case 121:
			return 962619556;
		case 89:
			return 94750187;
		case 87:
			return 545745902;
		case 88:
			return 1875117241;
		case 101:
			return -1861588330;
		case 126:
			return -1079912632;
		case 127:
			return -1624899219;
		case 124:
			return 646944986;
		case 149:
			return 1712034773;
		case 150:
			return 1084233913;
		case 151:
			return -1628307596;
		case 152:
			return 1244193358;
		case 128:
			return -268420964;
		case 129:
			return -283845926;
		case 130:
			return 76731659;
		case 131:
			return 2141489518;
		case 59:
			return 1529797091;
		case 132:
			return 1120323763;
		case 133:
			return -1951530479;
		case 134:
			return 2034257465;
		case 135:
			return 278587369;
		case 57:
			return 1388932648;
		case 137:
			return 1467401843;
		case 138:
			return -1049737591;
		case 139:
			return 1175719437;
		case 140:
			return 2115547696;
		case 56:
			return 878376253;
		case 141:
			return -508879537;
		case 142:
			return -654369397;
		case 143:
			return 1573058547;
		case 144:
			return 1753151614;
		case 145:
			return -2113647360;
		case 146:
			return 1337275619;
		case 147:
			return -237650722;
		case 148:
			return 283754781;
		case 58:
			return -2076086367;
		case 136:
			return -487054121;
		case 119:
			return 551011289;
		case 122:
			return -647250101;
		case 95:
			return -1769964380;
		case 97:
			return -1464928880;
		case 96:
			return 1315212395;
		case 90:
			return -1495157302;
		case 93:
			return -2140031237;
		case 91:
			return -1829807698;
		case 92:
			return 186603357;
		case 94:
			return -1575817877;
		case 98:
			return 1087483310;
		case 125:
			return -552506176;
		case 123:
			return -614248279;
		case 99:
			return 441769767;
		case 100:
			return 1318049946;
		case 4:
			return 548657065;
		case 5:
			return 243086140;
		case 34:
			return -305029900;
		case 67:
			return 1008537949;
		default:
			break;
	}
	return 0;
}

int func_1589(int iParam0)
{
	if (!func_1147(15, &Var0))
	{
		return -1;
	}
	Var0.f_3 = iParam0;
	Var0.f_2 = -125049320;
	if (_datafile_get_hash(&iVar5, &Var0))
	{
		iVar6 = func_2012(iVar5);
		return iVar6;
	}
	return -1;
}

bool func_1590(int iParam0, int iParam1)
{
	iVar1 = (shift_left(iParam1, 11) || iParam0);
	iVar0 = 0;
	while (iVar0 < Global_40.f_9.f_16)
	{
		if (&Global_40.f_9.f_16[iVar0] == iVar1)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_1591(int iParam0)
{
	iParam0 = func_258(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (func_2013(iParam0) == 0)
	{
		return false;
	}
	return true;
}

bool func_1592(int iParam0, int iParam1)
{
	func_1147(15, &Var0);
	Var0.f_2 = -566397848;
	Var0.f_3 = iParam0;
	_datafile_get_data_node_index(&(Var0.f_1), &Var0);
	Var0.f_3 = iParam1;
	Var0.f_2 = 1368867264;
	_datafile_get_hash(&uVar6, &Var0);
	func_1147(15, &Var7);
	Var7.f_2 = -1222062814;
	Var7.f_3 = uVar6;
	if (_datafile_get_data_node_index(&(Var7.f_1), &Var7))
	{
		Var7.f_2 = -1148228754;
		_datafile_get_bool(&uVar5, &Var7);
	}
	return uVar5;
}

bool func_1593(int iParam0, bool bParam1)
{
	if (!func_2014(iParam0))
	{
		return false;
	}
	if (bParam1)
	{
		if (func_2015(iParam0, 8))
		{
			return false;
		}
	}
	if (func_2015(iParam0, 1))
	{
		return true;
	}
	return false;
}

bool func_1594(int iParam0, int iParam1)
{
	func_1147(15, &Var0);
	Var0.f_2 = -566397848;
	Var0.f_3 = iParam0;
	_datafile_get_data_node_index(&(Var0.f_1), &Var0);
	Var0.f_3 = iParam1;
	Var0.f_2 = 1368867264;
	_datafile_get_hash(&uVar5, &Var0);
	func_1147(15, &Var8);
	Var8.f_2 = -1222062814;
	Var8.f_3 = uVar5;
	if (_datafile_get_data_node_index(&(Var8.f_1), &Var8))
	{
		Var8.f_2 = 939842437;
		if (_datafile_get_hash(&iVar6, &Var8))
		{
			iVar7 = iVar6;
			return func_339(iVar7, 1, 0);
		}
	}
	return true;
}

bool func_1595()
{
	if (func_385())
	{
		if (!func_1582(4))
		{
			return true;
		}
	}
	return (_is_metaped_using_component(Global_35, -1725579161) || func_1497(-2061583405, &uVar0));
}

bool func_1596(int iParam0, int iParam1)
{
	func_1147(15, &Var0);
	Var0.f_2 = -566397848;
	Var0.f_3 = iParam0;
	_datafile_get_data_node_index(&(Var0.f_1), &Var0);
	Var0.f_3 = iParam1;
	Var0.f_2 = 1368867264;
	_datafile_get_hash(&uVar5, &Var0);
	func_1147(15, &Var7);
	Var7.f_2 = -1222062814;
	Var7.f_3 = uVar5;
	if (_datafile_get_data_node_index(&(Var7.f_1), &Var7))
	{
		Var7.f_2 = 1689379704;
		if (_datafile_get_bool(&uVar6, &Var7))
		{
			return uVar6;
		}
	}
	return false;
}

bool func_1597(int iParam0)
{
	if (!func_2014(Global_1310720->f_22))
	{
		return true;
	}
	if (func_1593(Global_1310720->f_22, 1))
	{
		return true;
	}
	if ((0 == iParam0 && 2 == Global_1310720->f_22) || (2 == iParam0 && 0 == Global_1310720->f_22))
	{
		return true;
	}
	return Global_1310720->f_22 == iParam0;
}

bool func_1598(int iParam0, int iParam1)
{
	func_1147(15, &Var0);
	Var0.f_2 = -1999103282;
	Var0.f_3 = iParam0;
	Var0.f_4 = iParam1;
	if (_datafile_get_data_node_index(&(Var0.f_1), &Var0))
	{
		Var0.f_2 = 1563492982;
		if (_datafile_get_hash(&iVar5, &Var0))
		{
			iVar6 = func_2016(iVar5);
			if (func_1582(iVar6))
			{
				return false;
			}
		}
		Var0.f_2 = 1975530226;
		if (_datafile_get_hash(&iVar5, &Var0))
		{
			iVar6 = func_2016(iVar5);
			if (!func_1582(iVar6))
			{
				return false;
			}
		}
		Var0.f_2 = 108838230;
		if (_datafile_get_hash(&iVar5, &Var0))
		{
			iVar7 = func_2017(iVar5);
			if (func_1914(iVar7))
			{
				return false;
			}
		}
		Var0.f_2 = 181294442;
		if (_datafile_get_hash(&iVar5, &Var0))
		{
			iVar7 = func_2017(iVar5);
			if (!func_1914(iVar7))
			{
				return false;
			}
		}
		return true;
	}
	return false;
}

int func_1599(int iParam0)
{
	if (!func_2018(iParam0))
	{
		return -1;
	}
	return &(Global_40.f_9096[iParam0]);
}

bool func_1600(int iParam0, int iParam1)
{
	return (Global_40.f_9571[iParam1] && iParam0) != 0;
}

int func_1601(vector3 vParam0, bool bParam3)
{
	iVar0 = 0;
	while (iVar0 < &Global_1898329)
	{
		if (!func_183(Global_1898330[iVar0]))
		{
		}
		else
		{
			switch ((*Global_1898346)[iVar0]->f_3)
			{
				case 1:
					iVar1 = (*Global_1898346)[iVar0]->f_4;
					if (vdist(func_126(iVar1), vParam0) < func_1407(func_2019(iVar1) == 0f, bParam3, func_2019(iVar1)))
					{
						return 1;
					}
					break;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_1602(vector3 vParam0, bool bParam3)
{
	iVar0 = 0;
	while (iVar0 < 201)
	{
		if (func_2020(iVar0, 0))
		{
			if (vdist(func_2021(iVar0), vParam0) < bParam3)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_1603(struct<2> Param0, float fParam2, float fParam3, float fParam4, int iParam5, int iParam6)
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

char* func_1604(int iParam0)
{
	switch (iParam0)
	{
		case -1698780291:
			return "P_CS_LEDGER01X";
		case -2049014994:
			return "P_CS_ROPE01X";
		case -1005172683:
			return "P_DOOR01X";
		case 325782917:
			return "P_DOOR03X";
		case 430302479:
			return "p_door12x";
		case -1819321039:
			return "P_DOOR13X";
		case -1899748000:
			return "p_door45x";
		case -1734239985:
			return "p_chairvictorian01x";
		case 1561132816:
			return "p_crate03x";
		case -607235640:
			return "p_cs_jug01x";
		case -243150339:
			return "p_cs_wagon02x";
		case -1497029950:
			return "P_DOOR37X";
		case -1957055091:
			return "p_door_val_genstore";
		case -1676410507:
			return "p_doorstrawberry01x";
		case 913112519:
			return "p_doorfrench01l";
		case -1004594895:
			return "p_doorfrench01r";
		case -546124888:
			return "p_doormansiongate01x";
		case 367033685:
			return "p_doornbd39x";
		case -398894636:
			return "p_doorsaloon02x";
		case -882474373:
			return "P_DOORVH_SALOON_L";
		case 376903871:
			return "P_DOORVH_SALOON_R";
		case -447184114:
			return "p_cigarlit01x";
		case -502353725:
			return "p_pebble01x";
		case 1590781012:
			return "p_cs_rope03x";
		case 98154799:
			return "P_CARDS01X";
		case 1834866537:
			return "P_CS_POKERHAND01X";
		case 1770671818:
			return "P_CS_POKERHAND02X";
		case -827620392:
			return "P_CS_HOLDEMHAND01X";
		case 343238651:
			return "P_CS_HOLDEMHAND02X";
		case -197909103:
			return "P_CS_BUCKET01X";
		case 574905658:
			return "p_cs_syringe01x";
		case -1971689092:
			return "p_bottleJD01x";
		case 1085457901:
			return "p_rag02x";
		case 1826097446:
			return "p_magneto02x";
		case -789465252:
			return "p_magneto01x";
		case -238490359:
			return "p_cs_wantedalive01x";
		case -997503794:
			return "P_CS_RCRIDETHELIGHTNING";
		case -1473388640:
			return "p_pen01x";
		case -1135604739:
			return "p_cs_letter01a_x";
		case 201002005:
			return "p_cs_electricchair01x";
		case -451122991:
			return "p_cs_generator01x";
		case -580353882:
			return "p_cs_electricHelmet01x";
		case -330691926:
			return "p_cs_gag01x";
		case -832187622:
			return "p_door_sha_man01x";
		case -2104766853:
			return "p_stool01x";
		case -1937484496:
			return "p_stool02x";
		case -156777810:
			return "p_jugglingball01x";
		case -1025740342:
			return "p_chair02x";
		case 998759471:
			return "p_chair04x";
		case -182450036:
			return "p_crate15x";
		case 539662086:
			return "p_cleaver01x";
		case 401116463:
			return "p_bottle003x";
		case -940999254:
			return "p_cs_book02x";
		case -1502733730:
			return "p_stickydymt_single";
		case -776888393:
			return "p_cs_fusedynamite01x";
		case -1901975761:
			return "p_dynamite01x";
		case 1170245472:
			return "p_cs_fusespool01x";
		case 1996775400:
			return "p_cs_detonator01x";
		case -2058893965:
			return "p_cs_bedrollclsd01x";
		case -967333571:
			return "P_CIGARETTE_CS01X";
		case -1413776846:
			return "P_MATCHES01X";
		case 617552302:
			return "P_MATCHSTICK01X";
		case -1321878957:
			return "P_WOODENCHAIR01X";
		case 1230724566:
			return "P_CHAIR_CRATE02X";
		case 164271545:
			return "p_knittingneedle01x";
		case -458984299:
			return "p_knittingsquare01x";
		case -1055906010:
			return "p_cs_rabbitMeat01x";
		case 622322952:
			return "p_cs_rabbitMeat02x";
		case -890087611:
			return "p_bottle03x";
		case -1281909308:
			return "p_cs_billstack01x";
		case 1711925122:
			return "p_cs_billSingle01x";
		case 2514129:
			return "p_binoculars01x";
		case -1866470762:
			return "p_doorrhosheriff02x";
		case -2021274799:
			return "P_BARSTOOL01X";
		case -491019543:
			return "p_cs_shotglass01x";
		case 1698150819:
			return "p_lamp18x";
		case -1963197288:
			return "p_clock06x";
		case 1527379014:
			return "p_bottle02x";
		case 876316748:
			return "p_cs_lootSack01x";
		case 1767344357:
			return "p_wineBox01x";
		case 822933632:
			return "p_strongBox01x";
		case 1497470487:
			return "P_CLOCKTABLE02X";
		case -1149199295:
			return "p_gen_statue03b";
		case 1186910594:
			return "P_STOOLWINTER01X";
		case 1954479996:
			return "P_CS_BARRAG01X";
		case 2003418568:
			return "P_PLATE01X";
		case 624070311:
			return "P_KNIFE01X";
		case 1547859810:
			return "P_KNIFE02X";
		case -1710894930:
			return "P_CS_CATFISH_WHOLE01X";
		case 431926707:
			return "P_CS_CATFISH_WHOLE01BX";
		case -1419711042:
			return "P_WOODWHITTLE01X";
		case 1810315535:
			return "P_STICKFIREPOKER01X";
		case 266900228:
			return "P_CS_WOODPILE01X";
		case 382293518:
			return "P_FORK01X";
		case 389673974:
			return "P_KNIFE04X";
		case -1874205952:
			return "p_knife03x";
		case 1983379698:
			return "P_CS_BOTTLESLIM01X";
		case 1246822101:
			return "P_CS_BLANKET01X";
		case 1496261474:
			return "P_BEDROLLCLOSED01X";
		case -1342227326:
			return "P_CS_KINDLING01X";
		case -1402507254:
			return "P_CIGARTHIN01X";
		case 1081626861:
			return "p_door_wglass01x";
		case 663716280:
			return "p_broom02x";
		case -969349845:
			return "P_AMB_CLIPBOARD_01";
		case -384257010:
			return "P_CHAIR07X";
		case 628727561:
			return "p_cs_cratetnt01x";
		case -1809617345:
			return "p_cs_flourbag01x";
		case 1521462563:
			return "p_cs_supplies01x";
		case -589352772:
			return "p_cs_supplies02x";
		case 1376394832:
			return "p_cs_supplies03x";
		case -542955242:
			return "p_door04x";
		case -29643421:
			return "p_door11x";
		case -856676249:
			return "p_doorrhosaloon01_l";
		case -1333989503:
			return "p_doorrhosaloon01_r";
		case -1403420972:
			return "P_VAL_GATE2M02X";
		case -1205874435:
			return "P_CS_STMDNKY01X";
		case 2051399415:
			return "P_CS_HOOKPULLEY01X";
		case 1932781590:
			return "P_CHAIR_CS05X";
		case 1489783104:
			return "P_CHAIR_18X";
		case -1581225876:
			return "P_CHAIR19X";
		case -895862876:
			return "P_CHAIR20X";
		case -289651159:
			return "P_CHAIR05X";
		case 1407600554:
			return "p_chair22x";
		case 986312695:
			return "p_glass01x";
		case -93693274:
			return "P_DININGCHAIRS01X";
		case 325252933:
			return "P_WINDSORCHAIR03X";
		case 1328906077:
			return "P_WINDSORCHAIR02X";
		case 1045059103:
			return "p_door_val_jail02x";
		case -155999274:
			return "P_CRATETNT01X";
		case -1956230403:
			return "P_CRATETNT02X";
		case -62869733:
			return "P_MONEYSTACK01X";
		case -422220273:
			return "P_AXE01X";
		case 2065139134:
			return "P_HOE01X";
		case 1170674247:
			return "P_SHOVEL01X";
		case 49937914:
			return "P_SHOVEL04X";
		case -296963090:
			return "P_BROOM01X";
		case -811821899:
			return "P_PITCHFORK01X";
		case 1993810557:
			return "P_SCYTHE01X";
		case 1472170582:
			return "P_SKIFF02x";
		case 673153214:
			return "p_door_nbx_doc01x_l";
		case 132005948:
			return "p_door_nbx_doc01x_r";
		case 1661843942:
			return "p_cs_camera";
		case 1765047802:
			return "p_cs_cameratripod";
		case -1329546951:
			return "p_cs_camerabag01x";
		case -569131374:
			return "p_cameraflash01x";
		case -1509314938:
			return "p_cs_shutterrelease";
		case -397513868:
			return "rowboatswamp";
		case -1399874861:
			return "P_CHAIR25X";
		case 1064769829:
			return "P_DOORBRAIT01BX";
		case -50604564:
			return "P_CS_MAP01X";
		case 1058703817:
			return "p_hammer03x";
		case -238593141:
			return "p_cs_nailbarrel01x";
		case 1210783447:
			return "p_cs_book04x";
		case -2118240499:
			return "p_cs_Fan01x";
		case -862949069:
			return "p_cs_ledgerSmall01x";
		case -1311208351:
			return "p_cs_envelope01x";
		case 826392697:
			return "p_wrappedmeat01x";
		case 1455710720:
			return "P_CS_LETTER02X";
		case -2102031605:
			return "p_cs_book03x";
		case 1955831280:
			return "p_cs_giftBox01x";
		case 305182125:
			return "p_boiler01x";
		case 888504590:
			return "p_boiler02x";
		case -82199229:
			return "p_mugCoffee01x";
		case -1174489568:
			return "p_glasstallbeer01x";
		case 1022056778:
			return "p_pitcher02x";
		case 155128635:
			return "p_tray03x";
		case 1971611315:
			return "p_sit_chairwicker01b";
		case -449688053:
			return "S_INV_ORLEANDER01CX";
		case -703216761:
			return "S_INV_ORLEANDER01DX";
		case -1700686082:
			return "P_LADLE02X";
		case -889047922:
			return "P_CS_POT01X";
		case 519549403:
			return "P_CHAIRDINING03X";
		case -755866836:
			return "P_SPOON01X";
		case 196631385:
			return "P_BOWL03X";
		case -569447711:
			return "P_CS_BRIDECATALOGUE01X";
		case -535756918:
			return "P_JEWELRYBOX02BX";
		case 2044431266:
			return "P_CS_LETTERFOLDED01X";
		case -583569159:
			return "P_CS_ARTHURHAT01X";
		case 578898429:
			return "P_OAR03X";
		case -765914358:
			return "P_DOOR_VAL_BANKVAULT";
		case -1190396102:
			return "P_DOOR_COMBANK01X";
		case -436606401:
			return "P_CS_DONATION01X";
		case 1592327736:
			return "p_door_nbx_bank03x_R";
		case -1006516120:
			return "p_door_nbx_bank03x_L";
		case -1078696833:
			return "p_camp_plate_02x";
		case -974192123:
			return "p_stewplate02x";
		case 120221819:
			return "p_cs_log01x";
		case -1814268450:
			return "p_ndb_hotelplank01x";
		case 314775562:
			return "p_glass06x";
		case -1594634038:
			return "p_cs_rag01x";
		case 819493639:
			return "p_inkwell01x";
		case -548150401:
			return "p_cigar02x";
		case 1843407141:
			return "p_bottleBeer01x";
		case -1883578190:
			return "p_beermugglass01x";
		case 851401507:
			return "p_nutBowl01x";
		case 1610236838:
			return "p_cs_sacklarge01x";
		case 633326690:
			return "p_cs_dressbox01x";
		case -300816757:
			return "p_bell05x";
		case 342335375:
			return "p_woodendeskchair01x";
		case -1443906703:
			return "p_chair06x";
		case -1031399461:
			return "p_jug01x";
		case -1907186363:
			return "S_INV_MEDICINE01X";
		case 2067968977:
			return "S_INV_MEDICINE_FTY";
		case -434431529:
			return "S_INV_Milkweed01bx";
		case -2051048367:
			return "p_bottleslim01x";
		case 1267814678:
			return "p_cs_journal01x";
		case -503626004:
			return "p_mortarpestle02x";
		case 197307092:
			return "s_inv_burdock01dx";
		case 604616887:
			return "p_cs_ropeLegSplit";
		case 2038507899:
			return "p_cs_ropeHandsSplit";
		case 388126459:
			return "p_fishingpole01x";
		case -1367341904:
			return "P_FISHINGPOLE02X";
		case -1629442620:
			return "p_cs_flowernecklace";
		case -475791515:
			return "P_CS_FLOWERS01X";
		case -1018099626:
			return "s_inv_yarrow01cx";
		case 1210527888:
			return "P_CS_FISHINGPOLEBAG01X";
		case 1785480577:
			return "P_STICK02X";
		case 1789147356:
			return "P_CS_SOCK01X";
		case 169503210:
			return "P_DOOR_VAL_BANK00_RX";
		case 160636303:
			return "P_DOOR_VAL_BANK00_RX";
		case -1456646750:
			return "p_can10x";
		case 1010765128:
			return "p_cs_rabbitgut";
		case -142576910:
			return "p_cs_rabbitheadless";
		case 2055623882:
			return "p_cs_rabbitfeetless";
		case -808559472:
			return "p_kettle03x";
		case -804436865:
			return "s_che_woodbin01x";
		case 1833396091:
			return "s_lootablepoorcase";
		case -1494278633:
			return "P_CS_BOOKHARDCV01X";
		case -1643891339:
			return "P_LETTERBUNDLE_01X";
		case -459043872:
			return "P_LETTERENVELOPE_CS01X";
		case 1825744405:
			return "P_PACKAGE08X";
		case 1713200946:
			return "P_CIGARBOX02X";
		case 1663122464:
			return "p_crucifix02x";
		case 934706428:
			return "p_bottleCrate01x";
		case -554014433:
			return "p_can05x";
		case -1682372069:
			return "p_cs_suitcase04x";
		case 69604629:
			return "p_cs_bagstrauss01x";
		case 29998454:
			return "P_BOTTLE008X";
		case 161697289:
			return "P_BOTTLE009X";
		case 1045394246:
			return "P_BOTTLE010X";
		case 1623781586:
			return "p_pocketMirror01x";
		case -1671495534:
			return "P_CIGARETTE01X";
		case 1207272102:
			return "P_TRAVELTRUNK02X";
		case -294963065:
			return "P_CHAIRWHITE01X";
		case -1947027049:
			return "P_JOURNAL_OPEN01X";
		case -1945229292:
			return "p_table42_cs";
		case -1028267229:
			return "p_cs_newspaper_02x";
		case -1537933036:
			return "P_CS_POTATOSLICE01X";
		case -1035439448:
			return "S_APLSD_LOG";
		case 1410968406:
			return "S_APLSD_HRSATT";
		case -1216485179:
			return "p_spittoon01x";
		case 787211696:
			return "p_woodbowl01x";
		case -1167561544:
			return "p_pencil01x";
		case 1467658477:
			return "P_SPOONMID01X";
		case -624124479:
			return "P_PAN01X";
		case 1211525499:
			return "P_Pipe01x";
		case 666597548:
			return "p_cs_railroadbond01x";
		case -989609930:
			return "p_sharpeningstone01x";
		case 1540392720:
			return "p_treestump02x";
		case -1638036806:
			return "p_plate17x";
		case -1566727213:
			return "p_cs_newspaper_01x";
		case 1783964157:
			return "p_sadiehat01x";
		case -1093732866:
			return "p_door_bla_jail_l_01x";
		case 784094203:
			return "p_door_bla_jail_r_01x";
		case 441245663:
			return "p_mashedPotato02x";
		case 2064348393:
			return "p_cs_bookHardCv08x";
	}
	return "";
}

float func_1605(int iParam0, int iParam1)
{
	return func_938(iParam0, iParam1);
}

void func_1606(float fParam0)
{
	func_2022(10, fParam0);
}

void func_1607()
{
	animpostfx_stop("PlayerDrunk01");
	Global_1935436->f_12 = 0f;
}

bool func_1608(int iParam0)
{
	if (func_429(iParam0))
	{
		if (func_907(Global_1360165[iParam0], 0))
		{
			return true;
		}
	}
	return false;
}

char* func_1609(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "DUTCH";
		case 3:
			return "BILL";
		case 1:
			return "JOHN";
		case 2:
			return "JAVIER";
		case 4:
			return "UNCLE";
		case 5:
			return "HOSEA";
		case 6:
			return "MICAH";
		case 7:
			return "CHARLES";
		case 8:
			return "SEAN";
		case 9:
			return "LENNY";
		case 13:
			return "ABIGAIL";
		case 10:
			return "KIERAN";
		case 14:
			return "JACK";
		case 15:
			return "MARYBETH";
		case 16:
			return "MOLLY";
		case 17:
			return "PEARSON";
		case 18:
			return "STRAUSS";
		case 19:
			return "GRIMSHAW";
		case 20:
			return "KAREN";
		case 21:
			return "SWANSON";
		case 22:
			return "TILLY";
		case 23:
			return "TRELAWNY";
		case 11:
			return "SADIE";
		case 24:
			return "CLEET";
		case 25:
			return "JOE";
		case 26:
			return "EAGLEFLIES";
		case 12:
			return "DOG";
		default:
			break;
	}
	return "Companion unknown";
}

bool func_1610()
{
	if (func_20() != -1)
	{
		return false;
	}
	return func_2023(1) > 0;
}

void func_1611(int iParam0, char* sParam1, bool bParam2, bool bParam3)
{
	if (!does_entity_exist(iParam0) || is_entity_dead(iParam0))
	{
		return;
	}
	if (is_string_null_or_empty(sParam1))
	{
		return;
	}
	if (_0xd89504d9d7d5057d(sParam1))
	{
		get_current_ped_weapon(iParam0, &iVar0, true, 0, false);
		if (!is_ped_in_combat(iParam0, 0) && (iVar0 == -1569615261 || !bParam2))
		{
			if (_0xf01c570e0a0a1e67(sParam1))
			{
				restart_scripted_conversation(sParam1);
			}
		}
		else if (!_0xf01c570e0a0a1e67(sParam1))
		{
			pause_scripted_conversation(sParam1, false, true, true, true);
		}
	}
	if (bParam3)
	{
		func_2024();
	}
}

bool func_1612(var uParam0)
{
	return uParam0->f_599;
}

bool func_1613(float fParam0, float fParam1)
{
	if (!func_26(fParam0))
	{
		func_27(fParam0, 0);
		return false;
	}
	if (func_846(fParam0) > fParam1)
	{
		return true;
	}
	return false;
}

int func_1614(char* sParam0)
{
	return func_2025(sParam0);
}

bool func_1615(int iParam0)
{
	return _0xa2cac9def0195e6f(iParam0);
}

bool func_1616(char* sParam0)
{
	return func_2026(sParam0);
}

bool func_1617(bool bParam0, vector3 vParam1, bool bParam4)
{
	if (!does_entity_exist(bParam0))
	{
		return 0f;
	}
	return get_distance_between_coords(get_entity_coords(bParam0, false, false), vParam1, bParam4);
}

bool func_1618()
{
	return func_1615(1);
}

void func_1619(var uParam0, char* sParam1, char* sParam2, bool bParam3, bool bParam4)
{
	if (bParam4)
	{
		func_424(uParam0, 2);
	}
	else
	{
		func_424(uParam0, 1);
	}
	StringCopy(&cVar0, sParam1, 64);
	func_1397(uParam0, cVar0);
	func_160(uParam0, 2);
	if (((!_0x139efb0a71dd9011() && !func_29()) && !func_6(uParam0, 80)) && bParam3)
	{
		func_30(uParam0);
	}
	func_27(&(uParam0->f_13118), 0);
}

void func_1620(var uParam0, bool bParam1)
{
	if (is_entity_dead(&(Local_193[1])))
	{
		func_1619(uParam0, "SUS1_FAIL_SDEAD", "", 1, 0);
	}
	if (is_entity_a_ped(&(Local_193[0])))
	{
		if (is_entity_dead(&(Local_193[0])))
		{
			func_1619(uParam0, "SUS1_FAIL_TDEAD", "", 1, 0);
		}
	}
	if (func_1678(Global_35, &(Local_193[1])) > 35f && bParam1)
	{
		func_1686(uParam0, &(Local_193[1]), "GRIMSHAW_RETURN", "GRIMSHAW_ABANDON", 40f, 70f, 0, 0, 1, 422991367, 1);
	}
}

void func_1621(var uParam0)
{
	if (does_entity_exist(iLocal_227))
	{
		if (is_vehicle_driveable(iLocal_227, false, false))
		{
			_0xa19447d83294e29f(iLocal_227, &uVar0, &iVar1);
			if (iVar1 == 0)
			{
				if (!func_26(&uLocal_254))
				{
					func_27(&uLocal_254, 1);
				}
				else
				{
					if (func_846(&uLocal_254) > 1f)
					{
						if (!is_entity_dead(iLocal_227))
						{
							iVar2 = 0;
							while (iVar2 < 1)
							{
								if (does_entity_exist(_get_ped_in_draft_seat(iLocal_227, iVar2)))
								{
									_0x4402960666000e62(iLocal_227, iVar2);
								}
								iVar2++;
							}
						}
					}
					if (func_846(&uLocal_254) > 3f)
					{
						func_1619(uParam0, "SUS1_FAIL_WAGON", "", 1, 0);
					}
				}
			}
			else if (func_26(&uLocal_254))
			{
				func_517(&uLocal_254);
			}
			if (is_entity_on_fire(iLocal_227))
			{
				func_2027(uParam0, &uLocal_257, "SUS1_FAIL_WAGON", 3f);
			}
		}
		else if (!func_26(&uLocal_254))
		{
			func_27(&uLocal_254, 1);
		}
		else if (func_846(&uLocal_254) > 3f)