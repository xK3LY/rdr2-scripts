void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_75 = 1;
	iLocal_76 = 2;
	iLocal_77 = 3;
	iLocal_78 = 4;
	iLocal_79 = 5;
	iLocal_80 = 25;
	sLocal_168 = "native1_path_to_shrine";
	cLocal_169 = "native1_path_to_camp";
	sLocal_170 = "native1_path_to_binocular_view";
	cLocal_171 = "native1_army_footpath_01";
	cLocal_172 = "native1_army_footpath_02";
	cLocal_173 = "native1_army_footpath_03";
	cLocal_174 = "native1_army_footpath_04";
	cLocal_175 = "native1_army_patrolpath_01";
	sLocal_176 = "amb_creature_mammal@world_wolf_eat_corpse@base";
	sLocal_177 = "AI_GESTURES@ARTHUR@STANDING@SPEAKER@RT_HAND";
	sLocal_178 = "AI_GESTURES@ARTHUR@STANDING@SPEAKER@LT_HAND";
	sLocal_179 = "greet_hat_tip_r_001";
	sLocal_180 = "greet_happy_r_001";
	sLocal_181 = "horse_run_away_l_004";
	iLocal_228 = -1061271860;
	iLocal_241 = get_random_int_in_range(25, 35);
	fLocal_242 = func_2(func_1());
	iLocal_243 = 2145697477;
	iLocal_244 = 528;
	iLocal_245 = 724769646;
	iLocal_246 = 15122;
	sLocal_345 = "";
	sLocal_346 = "";
	vLocal_2108 = { 1019.98f, 1454.15f, 275.4f };
	vLocal_2111 = { 1016.99f, 1454.2f, 275.4f };
	iLocal_2132 = 10;
	iLocal_2220 = 1;
	iLocal_2224 = 1;
	iLocal_2228 = create_itemset(true);
	iLocal_2229 = create_itemset(true);
	iLocal_2272 = -1;
	iLocal_2273 = -1;
	iLocal_2644 = 14;
	iLocal_2645 = 4;
	iLocal_2646 = 2;
	if (has_force_cleanup_occurred(4642))
	{
		func_3(&uLocal_2719, 1073741824);
		func_4(&uLocal_2719, 1);
		terminate_this_thread();
	}
	while (!func_5(64))
	{
		wait(0);
	}
	func_6(&uScriptParam_0, &uLocal_2719);
	func_7(&uLocal_2719);
	while (!func_8(&uLocal_2719, -2147483648))
	{
		func_9(&uLocal_2719);
		wait(0);
	}
	while (!func_4(&uLocal_2719, 0))
	{
		wait(0);
	}
	terminate_this_thread();
}

int func_1()
{
	return Global_1897952->f_41;
}

float func_2(int iParam0)
{
	fVar0 = 1f;
	switch (iParam0)
	{
		case 0:
		case 2:
			fVar0 = 2f;
			break;
		case 1:
		case 10:
			fVar0 = 1.25f;
			break;
		case 3:
		case 9:
		case 11:
		case 12:
			fVar0 = 1.25f;
			break;
		case 6:
		case 16:
			fVar0 = 0.25f;
			break;
		case 14:
			fVar0 = 0.65f;
			break;
		case 4:
		case 13:
		case 15:
			fVar0 = 0.5f;
			break;
		case 7:
			fVar0 = 0.25f;
			break;
	}
	return fVar0;
}

void func_3(char[4] cParam0, int iParam1)
{
	cParam0->f_5309 = (cParam0->f_5309 || iParam1);
}

bool func_4(char[4] cParam0, bool bParam1)
{
	if (func_10(cParam0, 4096))
	{
		return true;
	}
	if (get_cause_of_most_recent_force_cleanup() == 4096)
	{
		func_11(cParam0);
		_display_hud_component(-1679307491);
		_display_hud_component(1331687942);
		if (func_12(Global_43801))
		{
			func_13(&Global_43801, 1, 1);
		}
		_uilog_clear_cached_objective();
		_0x1096603b519c905f("");
		func_15(func_14(cParam0->f_607), 0, 2);
		func_16();
		func_17(1);
		func_18(1, 0);
		func_19(cParam0, 1);
		func_20(0);
		_uilog_mark_all_entries_availability(0, "");
		Global_36605 = 0;
		func_21(3);
		if (!is_scenario_type_enabled("WORLD_PLAYER_SEAT_LEDGE"))
		{
			_set_scenario_type_enabled_hash(-2012097661, true);
		}
		terminate_this_thread();
	}
	if (!bParam1)
	{
		if (!func_8(cParam0, 1048576))
		{
			if (func_22() == 0)
			{
				func_23(0);
			}
			else if (func_24(cParam0) != 0)
			{
				if (!is_screen_fading_out() && !is_screen_faded_out())
				{
					if (_0x1204eb53a5fbc63d())
					{
						return false;
					}
					if (func_24(cParam0) == 1 || func_24(cParam0) == 2)
					{
						if (func_25(&(cParam0->f_8269)) && func_26(&(cParam0->f_8269)))
						{
							func_27(0, &(cParam0->f_8269.f_1282));
						}
					}
					if (!func_28(&(cParam0->f_13118)))
					{
						func_29(&(cParam0->f_13118), 0);
					}
					bVar0 = _0x139efb0a71dd9011();
					if (bVar0)
					{
						func_3(cParam0, 256);
					}
					bVar1 = _0x7ce9dc58e3e4755f();
					if (bVar1 && func_8(cParam0, 256))
					{
						_0x16e9abdd34ddd931();
						do_screen_fade_out(0);
					}
					else
					{
						if (((!bVar0 && !func_30(cParam0, bVar1)) && !func_31()) && !func_8(cParam0, 80))
						{
							if (!bVar1)
							{
								func_32(cParam0);
							}
							return false;
						}
						if (func_8(cParam0, 64))
						{
							_0x16e9abdd34ddd931();
							do_screen_fade_out(0);
						}
						else if (func_24(cParam0) == 2)
						{
							if (cParam0->f_13104 == -1)
							{
								if (func_33(cParam0))
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
						else if (func_24(cParam0) == 1)
						{
							if (func_30(cParam0, bVar1))
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
			else if (func_8(cParam0, 2))
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
			if (!func_34() && func_24(cParam0) != 0)
			{
				func_38(cParam0, func_36(func_35(cParam0)), func_36(func_37(cParam0)), func_35(cParam0), func_37(cParam0));
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
	func_3(cParam0, 1048576);
	if (!func_8(cParam0, 2097152))
	{
		if (!func_11(cParam0))
		{
			return false;
		}
		func_3(cParam0, 2097152);
	}
	_0x1096603b519c905f("");
	clear_focus();
	if (_missiondata_timecycle_box_exists())
	{
		_missiondata_timecycle_box_delete();
	}
	set_time_scale(1f);
	func_39(&(cParam0->f_8269));
	if (func_25(&(cParam0->f_8269)))
	{
		func_40(&(cParam0->f_8269));
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
	func_41(1);
	func_42(1);
	_0xc5eb2755fa25f1e9(1);
	func_43(0);
	func_44();
	func_21(3);
	if (!func_8(cParam0, 8))
	{
		_display_hud_component(-1679307491);
		_display_hud_component(724769646);
	}
	func_17(1);
	func_45();
	func_46();
	set_mission_name(false, 0);
	func_47();
	_set_milliseconds_per_game_minute(2000);
	pause_clock(false, 0);
	_0x914071ff93af2692(player_id(), 1f);
	_0x19b2c7a6c34fad54(player_id(), 1f);
	func_48(cParam0);
	func_49(1, 0);
	func_50(2);
	if (!Global_1935630->f_12)
	{
		set_ped_config_flag(Global_35, 141, false);
		_0xaac0ee3b4999abb5(Global_35, 0);
		_0xb832f1a686b9b810(Global_35, func_51(), 0);
		set_ped_config_flag(Global_35, 308, false);
		set_ped_can_use_auto_conversation_lookat(Global_35, false);
		set_ped_config_flag(Global_35, 446, false);
		_0xeae3b5b019c8d23f(Global_35, 262143);
		func_52(Global_35);
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
	func_53(&(cParam0->f_10792));
	func_54();
	stop_gameplay_hint(true);
	func_41(1);
	func_55();
	if (func_56())
	{
		_0x2f9ac754fe179d58(0.3f);
	}
	func_57(0, 14);
	bVar2 = false;
	if (func_24(cParam0) == 0)
	{
		bVar2 = true;
	}
	else
	{
		func_58(cParam0);
	}
	func_59(cParam0, 0, !bVar2, bVar2);
	func_60(cParam0, !bVar2);
	func_61(0);
	func_61(1);
	_0xdf93973251fb2ca5(player_id(), 1);
	func_62(0);
	func_64(func_63(cParam0));
	func_65(func_63(cParam0));
	func_66(0);
	func_67(0);
	func_68(func_24(cParam0));
	func_69(cParam0);
	if (!bVar2)
	{
		func_18(1, 0);
	}
	if (func_24(cParam0) != 1)
	{
		func_70(0, &(cParam0->f_8269.f_1282));
	}
	Global_43805 = -1;
	func_71(1);
	func_72(0);
	func_73(Global_1935630, 2097152);
	func_20(0);
	_uilog_mark_all_entries_availability(0, "");
	if (func_24(cParam0) == 0)
	{
		func_74((*Global_1835011)[cParam0->f_607]->f_1);
	}
	func_75();
	if (!is_scenario_type_enabled("WORLD_PLAYER_SEAT_LEDGE"))
	{
		_set_scenario_type_enabled_hash(-2012097661, true);
	}
	if (!bParam1)
	{
		switch (func_24(cParam0))
		{
			case 0:
				if (!is_screen_faded_in())
				{
					if ((!is_screen_fading_in() && !func_8(cParam0, 4)) && !func_8(cParam0, 2))
					{
						do_screen_fade_in(1000);
					}
				}
				func_76(cParam0);
				func_77(cParam0);
				func_78();
				func_80(func_79(), 0);
				if (func_22() == 0)
				{
					func_81(0);
				}
				func_82(cParam0->f_607);
				bVar3 = func_83();
				if (!func_84(32768))
				{
					func_85(func_14(cParam0->f_607), !func_8(cParam0, 128), 1, bVar3, 1);
				}
				else
				{
					func_86(func_14(cParam0->f_607), bVar3);
				}
				func_19(cParam0, bParam1);
				if (cParam0->f_607 != 77)
				{
					_uilog_mark_mission_completed(func_87(cParam0));
				}
				func_16();
				if (func_84(32768))
				{
					do_screen_fade_out(0);
					func_88();
					func_89(0);
				}
				else if (func_8(cParam0, 2))
				{
					if (!is_screen_faded_out() && !is_screen_fading_out())
					{
						do_screen_fade_out(0);
					}
					func_90(1);
					func_91();
					func_92(6);
					func_93(4096);
				}
				break;
			case 1:
			case 2:
			case 3:
			case 6:
				func_94(func_14(cParam0->f_607));
				func_95();
				if (func_24(cParam0) == 2)
				{
					func_97(func_96(-1876607090), 1);
				}
				_0x55f37f5f3f2475e1();
				_0x062b4a4a3396351d(get_player_index());
				_0x07e8b8b20570271c(get_player_index());
				break;
			case 5:
				if (func_22() == 0)
				{
					func_81(0);
				}
				func_95();
				Var4 = { func_96(-1876607090) };
				_0x0fee2561120f3333(&Var4);
				func_15(func_14(cParam0->f_607), 0, 2);
				break;
			default:
				func_85(func_14(cParam0->f_607), 1, 1, 0, 1);
				func_16();
				break;
		}
		if (func_24(cParam0) != 0)
		{
			Var6 = { func_98(cParam0) };
			func_99(func_14(cParam0->f_607), func_24(cParam0), &Var6, 0, 0, func_8(cParam0, 64));
		}
	}
	func_100(1);
	func_21(3);
	func_101(cParam0, 4096);
	return true;
}

bool func_5(int iParam0)
{
	return (Global_21 && iParam0) != 0;
}

void func_6(var uParam0, char[4] cParam1)
{
	_0xed9582b3da8f02b4(20);
	cParam1->f_608 = uParam0->f_1;
	iVar0 = create_itemset(true);
	if (!func_22() == 0)
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
	func_102(cParam1);
	if (!func_22() == 0)
	{
		if (func_103(cParam1) > 0)
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
	if (func_104())
	{
		func_105(cParam1, 4194304);
	}
	if (func_106())
	{
		func_105(cParam1, 8388608);
	}
	if (func_107())
	{
		if (!func_106() && !func_104())
		{
			func_105(cParam1, 4);
		}
		else
		{
			if (func_106())
			{
			}
			if (func_104())
			{
			}
		}
		func_109(cParam1, func_108());
	}
	func_110(cParam1, uParam0);
	func_111(cParam1);
	if (cParam1->f_13105 > _0x62de46f061caa468())
	{
		_0xf008e0ba1fe1d644((cParam1->f_13105 - _0x62de46f061caa468()));
	}
}

void func_7(char[4] cParam0)
{
	cVar0 = func_112(cParam0->f_607);
	set_mission_name(true, &cVar0);
	if (!get_mission_flag())
	{
		set_mission_flag(true);
	}
	_0x1096603b519c905f(&cVar0);
	if (cParam0->f_607 != 77)
	{
		func_113();
		func_114(&cVar0, 0);
	}
	_0xdd1232b332cbb9e7(3, 1, 0);
	func_115(1);
	func_116();
	_0xa565fac215cbc77d();
	shutdown_loading_screen();
	func_47();
	func_42(func_117(cParam0));
	_0x55f37f5f3f2475e1();
	_0x292ad61a33a7a485();
	if ((_0xf46108c50a22b029() && !Global_43891) && !func_118(func_79()))
	{
		_0x2161278c6322f740(16384, 0, 0, -1, -1, 0);
	}
	func_119(1, 0, 1);
	_0x2161278c6322f740(4096, 0, 0, -1, -1, 0);
	delete_all_trains();
	set_random_trains(false);
	func_41(0);
	func_120(cParam0);
	_0x33d51f801cb16e4f();
	if (!Global_1935630->f_12)
	{
		func_121(0, 0);
		_set_ped_crouch_movement(Global_35, false, 0, false);
		if (!func_122(cParam0, 16384) && (func_123(cParam0, func_35(cParam0), 2) || func_107()))
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
				if (!func_107() && !func_123(cParam0, func_35(cParam0), 2))
				{
				}
			}
			else if (!func_124(iVar1) && !func_84(32768))
			{
				remove_weapon_from_ped(Global_35, iVar1, true, -142743235);
				set_current_ped_weapon(Global_35, -1569615261, true, 0, false, false);
			}
		}
		_0xb832f1a686b9b810(Global_35, false, 0);
		set_ped_can_use_auto_conversation_lookat(Global_35, true);
		func_125(cParam0);
	}
	func_72(1);
	func_41(0);
	func_126(cParam0, -1038436471);
	iLocal_73 = func_127(cParam0);
	iLocal_73 = iLocal_73;
	if (!Global_1935630->f_12)
	{
		if (!func_107())
		{
			Var2 = { func_36(func_35(cParam0)) };
			if (func_35(cParam0) != 0)
			{
				Var2 = { func_128(cParam0->f_607) };
			}
			if (!func_129(Var2))
			{
				func_105(cParam0, 1048576);
			}
			func_109(cParam0, 0);
			if (func_130(cParam0, 3) || func_131())
			{
				func_132(cParam0, func_128(cParam0->f_607), 0);
			}
		}
		else
		{
			if (!is_ped_injured(player_ped_id()))
			{
				freeze_entity_position(player_ped_id(), false);
				set_entity_visible(player_ped_id(), true);
				func_133(get_entity_coords(Global_35, true, false), 5000f, 1, 0, 0, 0, 0);
			}
			func_109(cParam0, func_108());
		}
		_0x15b0cc1b36f1de29(&((*Global_1835011)[cParam0->f_607]->f_8), 0, func_134(func_35(cParam0)), func_107());
	}
	func_135(cParam0);
	func_136(cParam0, 0);
	func_137(cParam0, 0);
	if (!func_138(cParam0, func_35(cParam0)))
	{
		func_109(cParam0, 0);
	}
	func_139(cParam0);
	func_140(cParam0);
	func_141(cParam0);
	func_105(cParam0, 2097152);
	func_142(cParam0, func_35(cParam0), 134217728);
	if (func_84(32768))
	{
		func_3(cParam0, 4);
	}
	func_143(cParam0);
	func_144(cParam0, func_35(cParam0));
	func_145(func_63(cParam0));
	if (!func_122(cParam0, 65536))
	{
		func_146(func_63(cParam0));
	}
	func_147(cParam0, player_ped_id(), "ARTHUR", 0);
	func_148(cParam0);
	func_149(cParam0);
	func_150(cParam0);
	func_151(cParam0, 30f);
	func_152(cParam0, 40f);
	func_153(cParam0, Global_35, 0, 0, 0, 0, 0);
	func_100(0);
	_0xa6a3a3f96b8b030e();
	func_20(1);
	_uilog_mark_all_entries_availability(2, "");
	if (cParam0->f_607 != 77)
	{
		cVar6 = func_112(cParam0->f_607);
		_uilog_mark_entry_availability(1, get_hash_key(&cVar6), 0, "");
	}
	if (is_scenario_type_enabled("WORLD_PLAYER_SEAT_LEDGE"))
	{
		_set_scenario_type_enabled_hash(-2012097661, false);
	}
}

bool func_8(char[4] cParam0, int iParam1)
{
	return (cParam0->f_5309 && iParam1) != 0;
}

void func_9(char[4] cParam0)
{
	if ((_0xf46108c50a22b029() && !Global_43891) && !func_118(func_79()))
	{
		_0xf45e46deecf7df6e(16384, 0, 0, -1, -1);
	}
	if (!func_123(cParam0, func_35(cParam0), 16384))
	{
		func_154();
	}
	if (!func_10(cParam0, 32768))
	{
		_0xf45e46deecf7df6e(4096, 0, 0, -1, -1);
	}
	if (!func_10(cParam0, 2048))
	{
		func_155(1, 0);
	}
	switch (func_156(cParam0))
	{
		case -1:
			break;
		case 0:
			MemCopy(&uVar0, {func_157(func_63(cParam0))}, 4);
			if (!is_string_null_or_empty(&uVar0))
			{
				func_105(cParam0, 64);
			}
			func_158(cParam0, 0);
			func_159(cParam0);
			if (func_160(cParam0))
			{
				if (!is_entity_dead(func_161(cParam0)) && func_130(cParam0, 3))
				{
					freeze_entity_position(func_161(cParam0), false);
				}
				func_162(cParam0, 1);
			}
			if (func_8(cParam0, -2147483648))
			{
				func_162(cParam0, 2);
			}
			break;
		case 1:
			if (func_163(cParam0))
			{
				func_3(cParam0, -2147483648);
				func_162(cParam0, 2);
			}
			func_158(cParam0, func_164(cParam0, func_35(cParam0)) > 4);
			break;
		case 2:
			if (func_4(cParam0, 0))
			{
				func_3(cParam0, -2147483648);
				func_162(cParam0, 3);
			}
			break;
		case 3:
			terminate_this_thread();
			break;
	}
	if (func_156(cParam0) < 2)
	{
	}
}

bool func_10(char[4] cParam0, int iParam1)
{
	return (cParam0->f_5307 && iParam1) != 0;
}

bool func_11(char[4] cParam0)
{
	iVar1 = func_35(cParam0);
	if (iVar1 == iLocal_79 && func_10(cParam0, 8))
	{
		iVar0 = 0;
		while (iVar0 < iVar353)
		{
			if (func_165(&(uLocal_356[iVar0]), 0) && func_166(&(uLocal_356[iVar0]), Global_35))
			{
				func_167(4);
			}
			else
			{
				iVar0++;
			}
		}
	}
	func_168();
	func_169(cParam0);
	func_170();
	func_171(&uLocal_2129, 1);
	func_172();
	func_173();
	func_174();
	func_175();
	set_ped_using_action_mode(Global_35, false, -1, 0);
	_0x9c113883487fd53c(-789269373, 0);
	_0x949b2f9ed2917f5d(Global_35, 17);
	_0xe5d3eb37abc1eb03(get_player_index());
	set_ped_config_flag(Global_35, 360, false);
	_0x9f9a829c6751f3c7(get_player_index(), 47, 0);
	_0x9fc5a003fb76edbd(player_id(), 0);
	_0x93624b36e8851b42(get_player_index());
	set_ped_can_use_auto_conversation_lookat(Global_35, false);
	set_ped_can_use_auto_conversation_lookat(iVar348, false);
	set_ped_can_use_auto_conversation_lookat(iVar346, false);
	func_176(&Local_464, 0);
	func_177(&(Local_464.f_1));
	func_178(&iLocal_349, 0);
	func_178(&iLocal_350, 0);
	func_178(Local_14.f_27[1], 0);
	func_178(&iLocal_351, 0);
	func_178(&iLocal_352, 0);
	func_176(&uLocal_364, 0);
	func_179();
	func_180();
	iVar0 = 0;
	while (iVar0 < iVar661)
	{
		func_176(Local_664[iVar0], 0);
		func_177(&(Local_664[iVar0]->f_1));
		func_178(Local_664[iVar0], func_181(cParam0));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iVar1262)
	{
		func_176(Local_1265[iVar0], 0);
		func_178(Local_1265[iVar0], func_181(cParam0));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iVar1463)
	{
		func_176(Local_1466[iVar0], 0);
		func_178(Local_1466[iVar0], func_181(cParam0));
		iVar0++;
	}
	func_182();
	iVar0 = 0;
	while (iVar0 < 4)
	{
		delete_object(Local_14.f_36[iVar0]);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iVar2121)
	{
		delete_object(uLocal_2124[iVar0]);
		iVar0++;
	}
	if (does_entity_exist(&(iLocal_2074[2])))
	{
		func_183(iLocal_2074[2], 1, 1);
	}
	iVar0 = 0;
	while (iVar0 < iVar2077)
	{
		if (does_entity_exist(&(uLocal_2080[iVar0])))
		{
			func_183(uLocal_2080[iVar0], 1, 1);
		}
		iVar0++;
	}
	if (does_entity_exist(iVar2087))
	{
		delete_object(&iLocal_2090);
	}
	if (does_entity_exist(iVar2088))
	{
		delete_object(&uLocal_2091);
	}
	if (does_particle_fx_looped_exist(iVar2124))
	{
		stop_particle_fx_looped(iVar2124, false);
	}
	destroy_cam(iVar2120, false);
	render_script_cams(false, false, 3000, true, false, 0);
	func_177(&iLocal_2131);
	func_177(&iLocal_2130);
	func_13(&iLocal_2156, 1, 1);
	func_42(1);
	func_43(0);
	func_184(&iLocal_2272);
	func_184(&iLocal_2273);
	delete_patrol_route("miss_ArmyPatrol01");
	delete_patrol_route("miss_ArmyPatrol02");
	func_185(&Local_2300);
	_0x411189e51b8020ba(Global_35, "stealth");
	return true;
}

bool func_12(int iParam0)
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

void func_13(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_12(*iParam0))
	{
		*iParam0 = 0;
		return;
	}
	iVar0 = func_186(*iParam0);
	if ((*Global_1945938)[iVar0]->f_16 != get_id_of_this_thread() && bParam2)
	{
		*iParam0 = 0;
		return;
	}
	func_187(iVar0);
	*iParam0 = 0;
}

int func_14(int iParam0)
{
	if (!func_188(iParam0))
	{
		return 0;
	}
	return (*Global_1835011)[iParam0]->f_1;
}

void func_15(int iParam0, bool bParam1, int iParam2)
{
	if (!func_189(iParam0))
	{
		if (!bParam1)
		{
		}
		return;
	}
	if (!func_190(iParam0) && !func_191(iParam0))
	{
		if (!bParam1)
		{
		}
		return;
	}
	if (func_192(iParam0) == 0)
	{
	}
	if (iParam2 == 2 && !func_190(iParam0))
	{
		iParam2 = -1;
	}
	if (func_193(iParam0) == 3 || (func_193(iParam0) == 1 && _0x01f4d242765c6b24(func_192(iParam0))))
	{
		func_195(func_194(iParam0), func_192(iParam0), iParam2);
		if ((!func_189(Global_1572864->f_8) && !func_196(0, 1, 0)) && !func_197(&Global_1935630, 32768))
		{
			iVar0 = func_198(iParam0);
			if (iVar0 != -1)
			{
				func_199(0);
			}
			else if (func_194(iParam0) == 8)
			{
				iVar0 = func_200();
				if (iVar0 != -1)
				{
					func_199(0);
				}
			}
		}
	}
	func_201(iParam0, 0);
	if (func_202(0) == iParam0)
	{
		func_42(1);
		func_203(0);
		func_204(1);
	}
	func_205(iParam0, 1);
	func_206(iParam0);
}

void func_16()
{
	Global_1572864->f_8 = -1;
	Global_1572864->f_9 = -1;
	Global_1572864->f_10 = -1;
	func_207(0);
	func_208(0);
	func_66(0);
	func_67(0);
	func_209(0);
	func_210(1f);
}

void func_17(bool bParam0)
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
		func_211();
	}
	_0xa0cefcea390aab9b(0);
}

void func_18(bool bParam0, int iParam1)
{
	if (func_212())
	{
		_0xdd1232b332cbb9e7(3, 1, 0);
	}
	if (bParam0)
	{
		if (func_213())
		{
			func_115(1);
		}
	}
	_0x36559148b78853b3(0, iParam1, 0);
}

void func_19(char[4] cParam0, bool bParam1)
{
	Var0 = func_192(func_14(cParam0->f_607));
	Var0.f_1 = 0;
	Var0.f_2 = func_134(func_35(cParam0));
	Var0.f_4 = (get_entity_health(Global_35) * 100 / get_entity_max_health(Global_35, false));
	Var0.f_5 = Global_40.f_7729;
	Var0.f_6 = func_214(0);
	if (bParam1)
	{
		Var0.f_3 = 5;
	}
	else
	{
		Var0.f_3 = func_24(cParam0);
	}
	_0xd894437e12c17aec(&((*Global_1835011)[cParam0->f_607]->f_8), &Var0);
}

void func_20(int iParam0)
{
	Global_36580 = iParam0;
}

int func_21(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 16)
	{
		func_215(iVar0, iParam0);
		iVar0++;
	}
	return 1;
}

int func_22()
{
	return Global_1572887->f_12;
}

void func_23(int iParam0)
{
	Global_1109400->f_22.f_10 = iParam0;
}

int func_24(char[4] cParam0)
{
	return cParam0->f_10783;
}

bool func_25(var uParam0)
{
	return uParam0->f_2501;
}

bool func_26(var uParam0)
{
	return uParam0->f_2500;
}

void func_27(int iParam0, var uParam1)
{
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (func_216((*uParam1)[iVar0], 1048576))
		{
			switch (iParam0)
			{
				case 0:
					if ((*uParam1)[iVar0]->f_9 == 7)
					{
						func_217((*uParam1)[iVar0], 1);
					}
					break;
				case 1:
				case 2:
					if ((*uParam1)[iVar0]->f_9 == 3)
					{
						func_217((*uParam1)[iVar0], 1);
					}
					break;
				case 3:
					if ((*uParam1)[iVar0]->f_9 == 2)
					{
						func_217((*uParam1)[iVar0], 1);
					}
					break;
			}
		}
		iVar0++;
	}
}

bool func_28(int iParam0)
{
	return func_218(*iParam0, 1);
}

void func_29(int iParam0, bool bParam1)
{
	if (bParam1 || !func_28(iParam0))
	{
		func_219(iParam0);
	}
}

bool func_30(char[4] cParam0, bool bParam1)
{
	if (func_10(cParam0, 128) && func_31())
	{
		return true;
	}
	if (func_220(&(cParam0->f_13118)) >= 4000)
	{
		return true;
	}
	if (!func_33(cParam0))
	{
		return false;
	}
	if (!bParam1)
	{
		return false;
	}
	return true;
}

bool func_31()
{
	return (_does_anim_scene_exist(Global_43800) && _is_anim_scene_started(Global_43800, false));
}

void func_32(char[4] cParam0)
{
	func_221(!func_8(cParam0, 32), 1);
	func_3(cParam0, 32);
}

bool func_33(char[4] cParam0)
{
	return true;
}

bool func_34()
{
	return func_189(Global_1572864->f_8);
}

int func_35(char[4] cParam0)
{
	return cParam0->f_597;
}

struct<4> func_36(int iParam0)
{
	if (iParam0 == iLocal_74)
	{
		func_223(&Var0, func_222(0, 0));
	}
	else if (iParam0 == iLocal_75)
	{
		func_223(&Var0, func_222(8, 0));
	}
	else if (iParam0 == iLocal_76)
	{
		func_223(&Var0, func_222(9, 0));
	}
	else if (iParam0 == iLocal_77)
	{
		func_223(&Var0, func_222(7, 0));
	}
	else if (iParam0 == iLocal_78)
	{
		func_223(&Var0, func_222(1, 0));
	}
	else if (iParam0 == iLocal_79)
	{
		func_223(&Var0, func_222(2, 0));
	}
	else if (iParam0 == iLocal_80)
	{
		func_223(&Var0, func_222(3, 0));
	}
	return Var0;
}

int func_37(char[4] cParam0)
{
	return func_224(cParam0, func_35(cParam0));
}

void func_38(char[4] cParam0, struct<4> Param1, struct<4> Param5, int iParam9, int iParam10)
{
	Var0 = { Param1 };
	Var0.f_3 = Param1.f_3;
	Var4 = { Param5 };
	Var4.f_3 = Param5.f_3;
	func_207(0);
	func_225(func_14(cParam0->f_607), Var0, Var4, func_134(iParam9), func_134(iParam10));
}

void func_39(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_216((*uParam0)[iVar0], 1048576) && (*uParam0)[iVar0]->f_9 == 9)
		{
			func_226((*uParam0)[iVar0]);
		}
		iVar0++;
	}
}

void func_40(var uParam0)
{
	_datafile_unload(uParam0->f_2495);
	uParam0->f_2495 = 0;
	uParam0->f_2501 = 0;
}

void func_41(bool bParam0)
{
	if (bParam0)
	{
		_0x2a7413168f6cd5a8();
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			func_227(iVar0, 4096);
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
	if (func_22() == -1)
	{
		Global_1430221->f_1 = !bParam0;
	}
}

void func_42(bool bParam0)
{
	if (bParam0)
	{
		set_wanted_level_multiplier(1f);
		func_73(Global_1935630, 4194304);
	}
	else
	{
		set_wanted_level_multiplier(0f);
		func_228(Global_1935630, 4194304);
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

void func_43(bool bParam0)
{
	if (bParam0)
	{
	}
	block_dispatch_service_resource_creation(15, bParam0);
	block_dispatch_service_resource_creation(6, bParam0);
	block_dispatch_service_resource_creation(1, bParam0);
}

void func_44()
{
	func_229();
	func_230();
	func_231();
	func_232();
}

void func_45()
{
	if (func_233())
	{
		Global_18 = 0;
		Global_43884 = 0;
		if (!func_31())
		{
			func_234(1);
		}
	}
}

void func_46()
{
	Global_1894899->f_186 = 0;
	func_235();
}

void func_47()
{
	_uilog_clear_cached_objective();
}

void func_48(char[4] cParam0)
{
	if (func_22() == 0)
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

void func_49(int iParam0, int iParam1)
{
	func_236(1, iParam0, iParam1);
}

void func_50(int iParam0)
{
	switch (func_22())
	{
		case -1:
			Global_1357549->f_1494 = (Global_1357549->f_1494 - (Global_1357549->f_1494 && iParam0));
			break;
	}
}

bool func_51()
{
	return (func_237() || func_56());
}

void func_52(int iParam0)
{
	if (!is_entity_dead(iParam0))
	{
		remove_ped_defensive_area(iParam0, true);
		remove_ped_defensive_area(iParam0, false);
	}
}

void func_53(var uParam0)
{
	func_238(uParam0);
	func_239(uParam0, 0);
	uParam0->f_1 = 0;
	func_45();
}

void func_54()
{
	iVar12 = 0;
	while (iVar12 < Global_43619)
	{
		*Global_43619[iVar12] = { Var0 };
		iVar12++;
	}
}

void func_55()
{
	iVar0 = 0;
	while (iVar0 < 120)
	{
		func_240(iVar0);
		iVar0++;
	}
	func_241();
	func_242();
}

bool func_56()
{
	return Global_1894899 & 2 != 0;
}

void func_57(bool bParam0, int iParam1)
{
	if (func_243())
	{
		if (func_244(255))
		{
			if (!func_245(36, 255))
			{
				return;
			}
		}
	}
	bVar0 = bParam0;
	if (!bParam0)
	{
		if (func_246(Global_1894899->f_2) && func_247(Global_1894899->f_2))
		{
			func_248(Global_1894899->f_2, 0);
			if (iParam1 != 0)
			{
				Global_1894899->f_7 = iParam1;
				func_249(16);
			}
		}
		else if (func_246(Global_1894899->f_2) && !func_250(Global_1894899->f_2, 2))
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
		func_251(16);
		func_252();
		if (bVar0)
		{
			func_251(1);
		}
	}
}

void func_58(char[4] cParam0)
{
	iVar0 = 0;
	while (iVar0 < cParam0->f_13145)
	{
		if (func_253(cParam0->f_5423[iVar0]))
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
	if (func_254(cParam0->f_5421))
	{
		iVar0 = 0;
		while (iVar0 < func_255(cParam0->f_5421))
		{
			iVar1 = func_256(cParam0->f_5421, iVar0);
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

void func_59(char[4] cParam0, int iParam1, bool bParam2, bool bParam3)
{
	iVar0 = 0;
	while (iVar0 < 27)
	{
		iVar1 = iVar0;
		if (func_257(iVar1))
		{
			iVar2 = Global_1360165[iVar0];
			func_258(cParam0, iVar1, iVar2, iParam1, bParam2, bParam3, 0);
		}
		iVar0++;
	}
}

void func_60(char[4] cParam0, bool bParam1)
{
	_0x0751d461f06e41ce(get_player_index(), 33, 2, 0);
	iVar0 = func_259(cParam0);
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	if (is_entity_dead(iVar0) || is_ped_injured(iVar0))
	{
	}
	iVar1 = func_260(iVar0);
	iVar2 = get_id_of_this_thread();
	bVar3 = false;
	if (is_thread_active(iVar2, false) && func_261(iVar1) == iVar2)
	{
		bVar3 = true;
	}
	if (bVar3)
	{
		if (bParam1)
		{
			func_262(7);
		}
		else
		{
			func_263(iVar0, 0);
		}
		func_264(cParam0, 16);
		set_ped_config_flag(iVar0, 219, false);
	}
}

void func_61(int iParam0)
{
	iParam0 = func_265(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_266(iParam0, 32);
	func_267();
}

void func_62(bool bParam0)
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

int func_63(char[4] cParam0)
{
	return cParam0->f_607;
}

void func_64(int iParam0)
{
	Var0 = { func_268(iParam0) };
	if (!is_string_null_or_empty(&Var0))
	{
		_text_database_delete(&Var0);
	}
}

void func_65(int iParam0)
{
	Var0 = { func_269(iParam0) };
	if (!is_string_null_or_empty(&Var0))
	{
		_text_database_delete(&Var0);
	}
}

void func_66(bool bParam0)
{
	Global_1572864->f_14 = bParam0;
	if (bParam0)
	{
		func_209(1);
	}
}

void func_67(bool bParam0)
{
	Global_1572864->f_13 = bParam0;
	if (bParam0)
	{
		func_209(0);
	}
}

void func_68(int iParam0)
{
}

void func_69(char[4] cParam0)
{
	func_270(&(cParam0->f_13121));
}

void func_70(int iParam0, var uParam1)
{
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (func_216((*uParam1)[iVar0], 1048576) && (*uParam1)[iVar0]->f_9 == 9)
		{
			func_217((*uParam1)[iVar0], 1);
		}
		iVar0++;
	}
}

void func_71(bool bParam0)
{
	Global_1935496->f_15 = !bParam0;
}

void func_72(int iParam0)
{
	if (!has_ped_got_weapon(Global_35, -1415022764, 0, false))
	{
		return;
	}
	Global_1900073->f_18 = iParam0;
}

void func_73(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_74(int iParam0)
{
	iVar0 = func_194(iParam0);
	iVar1 = -1;
	if (iVar0 == 1)
	{
		iVar2 = func_271(iParam0);
		if (iVar2 == 36)
		{
			iVar1 = 99;
			if (func_272(iVar1))
			{
				if (func_273(iVar1, 4))
				{
					func_274(iVar1, 1);
				}
			}
		}
		else if (iVar2 == 38)
		{
			func_275(1);
		}
	}
	else if (iVar0 == 8)
	{
		iVar3 = func_271(iParam0);
		if (iVar3 == 59)
		{
			func_275(1);
		}
		else if (iVar3 == 61)
		{
			func_275(0);
		}
		else if (iVar3 == 83)
		{
			func_275(0);
		}
	}
}

void func_75()
{
	iVar0 = 0;
	while (iVar0 < &Global_1347702)
	{
		if (func_272(iVar0))
		{
			if (func_273(iVar0, 4))
			{
				if (func_273(iVar0, 16))
				{
					func_276(iVar0, 1);
				}
				if (func_273(iVar0, 8))
				{
					func_277(iVar0, 1);
				}
			}
		}
		iVar0++;
	}
}

void func_76(char[4] cParam0)
{
	if (func_22() == 0)
	{
		return;
	}
	iVar0 = func_35(cParam0);
	iVar1 = func_164(cParam0, iVar0);
	bVar2 = false;
	if (iVar1 == 5 || iVar1 == 6)
	{
		bVar2 = true;
	}
	iVar3 = 0;
	if (!bVar2)
	{
		if (func_278(cParam0) == 0 && iVar0 == 0)
		{
			iVar3 = 1;
		}
	}
	iVar4 = 0;
	if (!bVar2)
	{
		if (func_24(cParam0) == 0)
		{
			iVar4 = 1;
		}
	}
	if (iVar3 || iVar4)
	{
		func_279(iVar3, iVar4);
	}
	if (bVar2)
	{
		func_280(cParam0);
	}
}

void func_77(char[4] cParam0)
{
	iVar0 = 0;
	if (func_281(cParam0))
	{
		fVar1 = to_float((_get_bounty_for_player(get_player_index()) - (*Global_2621440)[0]->f_9.f_20));
		if (fVar1 > 0f)
		{
			fVar2 = (1f + (to_float(get_random_int_in_range(50, 200)) / 1000f));
			iVar0 = (iVar0 + round((fVar1 * fVar2)));
		}
	}
	func_282(iVar0, 0, 1065353216, 1, 0, 0, 1, 752097756);
}

void func_78()
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

int func_79()
{
	return Global_1894899->f_2;
}

void func_80(int iParam0, bool bParam1)
{
	if (!func_246(iParam0))
	{
		return;
	}
	bVar0 = func_250(iParam0, 67108864);
	if (bParam1)
	{
		if (((!bVar0 && func_283(iParam0) == 1) && iParam0 != 120) && iParam0 != 92)
		{
			func_285(iParam0, func_284());
			func_286(iParam0, 67108864);
		}
	}
	else if (bVar0)
	{
		func_287(iParam0, 67108864);
		func_285(iParam0, -15);
	}
	func_288(iParam0);
}

void func_81(bool bParam0)
{
	if (!bParam0)
	{
		func_289(11);
	}
	else
	{
		func_290(11);
	}
}

void func_82(int iParam0)
{
	if (func_291(iParam0, 0))
	{
		func_292(262144, 5, 0, 1);
		func_293(720f, 1, 0);
	}
	switch (iParam0)
	{
		case 18:
			func_294(101, 7, 1f, 0, 1);
			func_294(89, 7, 1f, 0, 1);
			break;
	}
}

bool func_83()
{
	return Global_1572864->f_15;
}

bool func_84(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

void func_85(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (!func_189(iParam0))
	{
		return;
	}
	if (func_295(iParam0) == 4)
	{
		func_296(iParam0, func_284());
		if (!func_193(iParam0) == 5 && !func_193(iParam0) == 6)
		{
			if (bParam3)
			{
				func_201(iParam0, 6);
			}
			else
			{
				func_201(iParam0, 5);
			}
			func_206(iParam0);
		}
		return;
	}
	if (bParam1)
	{
		func_42(1);
	}
	iVar0 = func_194(iParam0);
	bVar1 = func_22() == false;
	if (iVar0 == 1 || iVar0 == 8)
	{
		func_297(0, 2);
		if (!bVar1 && bParam1)
		{
			func_298();
		}
	}
	else
	{
		func_203(0);
	}
	if (!iVar0 == 1 && !iVar0 == 8)
	{
		func_299(iParam0);
	}
	else
	{
		Var2 = { func_96(-1876607090) };
		_0x0fee2561120f3333(&Var2);
		if (!func_84(32768))
		{
			Var4 = { func_96(773573510) };
			if (!network_is_game_in_progress())
			{
				if (bParam1 && func_193(iParam0) != 0)
				{
					if (iVar0 == 1)
					{
						if (func_271(iParam0) == 77)
						{
							stat_id_set_gxt_label(&Var4, &((*Global_1835011)[76]->f_8), true);
						}
						else
						{
							stat_id_set_gxt_label(&Var4, &((*Global_1835011)[func_271(iParam0)]->f_8), true);
						}
					}
					else if ((func_271(iParam0) != 95 && func_271(iParam0) != 82) && !func_300((*Global_1347702)[func_271(iParam0)]->f_12, 512))
					{
						stat_id_set_gxt_label(&Var4, &((*Global_1347702)[func_271(iParam0)]->f_3), true);
					}
				}
			}
			else
			{
				switch (_0x225640e09effdc3f())
				{
					case 0:
						stat_id_set_gxt_label(&Var4, &((*Global_1835011)[func_271(iParam0)]->f_8), true);
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
		func_302(func_271(iParam0), iVar6, func_301());
	}
	else if (iVar0 == 8)
	{
		func_304(func_271(iParam0), iVar6, func_301(), func_303());
	}
	if (!func_193(iParam0) == 5 && !func_193(iParam0) == 6)
	{
		iVar9 = func_305(iParam0, &uVar7, &iVar8);
		if (iVar9 != 176656832)
		{
			func_306(iVar9, uVar7, -469960592, iVar8, 1, 1, 0);
		}
	}
	if (!&Global_1879534 && !Global_1879534->f_1)
	{
		switch (iVar0)
		{
			case 1:
				iVar10 = func_307(func_271(iParam0), &iVar11);
				if (!Global_17504.f_9)
				{
					iVar10 = func_308((iVar10 - 20), 0, iVar10);
					iVar11 = func_308((iVar11 - 10), 0, iVar11);
				}
				func_309(1);
				func_310(iVar10, iVar11, 1);
				Global_17504.f_9 = 0;
				Global_17504.f_10 = 0;
				Global_1899528->f_217 = 1;
				break;
			case 4:
				func_310(45, 0, 1);
				break;
			case 8:
				iVar10 = func_311(func_271(iParam0), &iVar11);
				if (!Global_17504.f_9)
				{
					iVar10 = func_308((iVar10 - 20), 0, iVar10);
					iVar11 = func_308((iVar11 - 10), 0, iVar11);
				}
				func_310(iVar10, iVar11, 1);
				Global_17504.f_9 = 0;
				Global_17504.f_10 = 0;
				if (func_312(func_271(iParam0)))
				{
					func_313(14, 0, 0, 0, 0, 0, 1065353216, 0);
				}
				Global_1899528->f_217 = 1;
				break;
			case 9:
				func_310(120, 0, 1);
				break;
			case 2:
				func_310(120, 0, 1);
				break;
			case 6:
				func_310(func_315(func_314(iParam0)), 0, 1);
				break;
			case 5:
				func_310(120, 0, 1);
				break;
		}
	}
	func_205(iParam0, 1);
	func_296(iParam0, func_284());
	func_206(iParam0);
	if ((!func_193(iParam0) == 0 && bParam1) && func_22() == -1)
	{
		iVar12 = func_198(iParam0);
		if (iVar12 != -1)
		{
			func_199(0);
		}
		else if (iVar0 == 8)
		{
			iVar12 = func_200();
			if (iVar12 != -1)
			{
				func_199(0);
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
				switch (func_271(iParam0))
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
				if (func_272(func_271(iParam0)) && func_300((*Global_1347702)[func_271(iParam0)]->f_12, 4))
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
				if (func_271(iParam0) != 77)
				{
					Global_1879514->f_1 = iParam0;
					Global_1879514->f_11 = bParam3;
					Global_1879514->f_13 = func_131();
				}
				break;
			case 8:
				if (func_271(iParam0) != 58)
				{
					Global_1879514->f_1 = iParam0;
					Global_1879514->f_11 = bParam3;
					Global_1879514->f_13 = func_131();
				}
				break;
		}
	}
	if (!func_193(iParam0) == 5 && !func_193(iParam0) == 6)
	{
		if (bParam3)
		{
			func_201(iParam0, 6);
		}
		else
		{
			func_201(iParam0, 5);
		}
		func_206(iParam0);
		bVar13 = true;
	}
	if (bVar13)
	{
		switch (iVar0)
		{
			case 1:
				switch (func_271(iParam0))
				{
					case 0:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_PROFESSION_ODRISCOLL"));
						_0xd8c7162ab2e2af45(-1753910767);
						break;
					case 1:
						func_316();
						_0xbb697756309d77ee(1);
						break;
					case 4:
						func_317(-1781387050, 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_317(1433048902, 4, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_317(-597058368, 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_317(-529638012, 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_317(500564674, 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_317(-875449072, 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_317(1237770824, 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_317(236757114, 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_317(-601932535, 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_317(-1267972061, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_318(-1267972061);
						func_317(1619534881, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_318(1619534881);
						func_317(-755457379, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_318(-755457379);
						func_317(1015404643, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_318(1015404643);
						func_317(-1724192342, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_318(-1724192342);
						func_317(1310680212, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_318(1310680212);
						func_317(-566881549, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_318(-566881549);
						func_317(-1753730528, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_318(-1753730528);
						func_317(147796381, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_318(147796381);
						func_317(-378547623, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_318(-378547623);
						func_317(829545206, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_318(829545206);
						func_317(891318243, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_318(891318243);
						func_317(-1016714371, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_317(-1838434463, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_317(-1448210800, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_317(-248960099, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_319();
						func_320(967523420);
						func_321();
						func_322();
						break;
					case 5:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_TOMMY"));
						break;
					case 14:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_LEVITICUS"));
						break;
					case 2:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key(func_323(10, 0)));
						break;
					case 8:
						_0x946d46cd6dfb9742(get_player_index(), 0, 621714131);
						break;
					case 15:
						func_317(1030791766, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
						if (!_unlock_is_visible(1231074654))
						{
							_unlock_set_visible(1231074654, true);
							func_324(449, 0);
						}
						break;
					case 10:
						if (!_unlock_is_visible(1880205078))
						{
							_unlock_set_visible(1880205078, true);
							func_324(446, 0);
						}
						break;
					case 16:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("ALLY_LEIGHGRAY"));
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("ALLY_ARCHIBALD"));
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_PROFESSION_GRAY"));
						break;
					case 18:
						func_325(304805134, 1, 1);
						if (!func_326((*Global_1347702)[21]->f_15, 1))
						{
							func_85((*Global_1347702)[21]->f_15, 0, 0, 0, 0);
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
						func_327();
						break;
					case 26:
						func_328();
						break;
					case 17:
						func_329(Global_35, 176992230, 0, -358215195, 1, 1);
						if (func_330())
						{
							func_331(1905553950);
						}
						break;
					case 19:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_TAVISH_GRAY"));
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_CLAY"));
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_CLIVE"));
						break;
					case 33:
						if (!func_332(-514575035, -1))
						{
							iVar15 = func_284();
							func_333(&iVar15, 0, 0, 0, 2, 0, 0, 0);
							func_334(-514575035, iVar15, 0);
						}
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_EVELYN_MILLER"));
						if (func_330())
						{
							func_331(1529685685);
						}
						break;
					case 34:
						if (func_330())
						{
							func_331(-2082646505);
						}
						break;
					case 28:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_BRONTE"));
						break;
					case 31:
						func_335();
						break;
					case 37:
						func_336();
						if (func_337())
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
						func_338();
						break;
					case 43:
						func_339();
						break;
					case 44:
						if (!func_326((*Global_1347702)[82]->f_15, 1))
						{
							func_85((*Global_1347702)[82]->f_15, 0, 0, 0, 0);
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
						if (!func_326((*Global_1347702)[83]->f_15, 1))
						{
							func_85((*Global_1347702)[83]->f_15, 0, 0, 0, 0);
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
						func_340();
						break;
					case 59:
						func_341();
						break;
					case 60:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_TOM_DICKENS"));
						break;
					case 61:
						func_342();
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
						func_343();
						if (!_unlock_is_visible(1673898385))
						{
							_unlock_set_visible(1673898385, true);
							func_324(451, 0);
						}
						if (!func_344(-1992824800))
						{
							if (func_344(1520110311))
							{
								iVar16 = func_284();
								func_333(&iVar16, 0, 0, 6, 0, 0, 0, 0);
								func_334(1937177603, iVar16, 1);
							}
						}
						if (func_345(4))
						{
							if (!func_346(684296857, 1, 0))
							{
								iVar17 = func_284();
								func_333(&iVar17, 0, 0, 6, 0, 0, 0, 0);
								func_334(-1439688706, iVar17, 1);
							}
						}
						func_317(1224687176, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_317(-4440804, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						break;
					case 74:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_ALBERT_CAKE"));
						func_347(89200);
						func_347(2300);
						func_347(2300);
						break;
					case 68:
						func_348();
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
						func_349();
						func_347(-139100);
						break;
					case 69:
						if (func_326((*Global_1347702)[9]->f_15, 1))
						{
							func_347(-6000);
						}
						break;
					case 70:
						func_347(23400);
						func_347(1900);
						func_347(-15000);
						break;
					case 71:
						func_347(-5500);
						break;
				}
				break;
			case 8:
				switch (func_271(iParam0))
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
						func_350();
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
						func_351();
						break;
					case 66:
						func_352();
						func_353();
						break;
					case 67:
						if (!func_354(6))
						{
							func_355(6);
						}
						if (!func_354(3))
						{
							func_355(3);
						}
						if (func_330())
						{
							func_331(1534638301);
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
						if (func_326((*Global_1835011)[69]->f_1, 1))
						{
							func_356(0);
							func_347(40500);
						}
						else
						{
							func_356(0);
							func_347(46500);
						}
						break;
				}
				break;
			case 6:
				switch (func_271(iParam0))
				{
					case 0:
						switch (func_314(iParam0))
						{
							case 5:
								_0x946d46cd6dfb9742(get_player_index(), 0, 1014740297);
								break;
						}
						break;
				}
				break;
		}
		func_357(iParam0);
		func_358();
		switch (iVar0)
		{
			case 1:
				switch (func_271(iParam0))
				{
					case 4:
						func_359(iParam0, 1000, 0, 1065353216, 1, 0, 0, 1);
						break;
					case 61:
					case 62:
					case 63:
						func_359(iParam0, 300, 0, 1065353216, 1, 0, 0, 1);
						break;
					case 25:
						func_359(iParam0, 150000, 1, 0.5f, 4, 0, 0, 1);
						break;
					case 12:
						func_359(iParam0, 120000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 53:
						func_359(iParam0, 90000, 1, 0.5f, 4, 0, 0, 1);
						break;
					case 20:
						func_359(iParam0, 85000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 19:
						func_359(iParam0, 70000, 1, 0.5f, 3, 0, 0, 1);
						break;
					case 24:
						iVar18 = func_360(iParam0);
						func_359(iParam0, iVar18, 1, 0.5f, 4, 0, 0, 1);
						break;
					case 28:
						func_359(iParam0, 45000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 34:
						func_359(iParam0, 600000, 1, 0.5f, 4, 0, 0, 1);
						if (!func_346(-2046502963, 1, 0))
						{
							func_317(-2046502963, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
						}
						break;
					case 29:
						func_359(iParam0, 4600, 1, 0f, 3, 0, 0, 1);
						break;
					case 37:
						break;
					case 58:
						break;
					case 57:
						func_359(iParam0, 2100000, 1, 0.9047619f, 8, 0, 0, 1);
						break;
					case 76:
						func_359(iParam0, 2042100, 0, 1065353216, 1, 0, 0, 1);
						break;
					case 72:
						if (func_360(iParam0) == 0)
						{
							func_359(iParam0, 20000, 0, 1065353216, 1, 0, 0, 1);
						}
						else
						{
							func_359(iParam0, 15000, 0, 1065353216, 1, 0, 0, 1);
						}
						break;
				}
				break;
			case 8:
				if (func_300((*Global_1347702)[func_271(iParam0)]->f_12, 536870912))
				{
					func_361(11, 1);
				}
				switch (func_271(iParam0))
				{
					case 109:
						func_359(iParam0, 1500, 0, 1065353216, 1, 0, 0, 1);
						break;
					case 55:
						func_361(8, 1);
						break;
					case 138:
						set_bit(&(Global_40.f_9052), 1);
						set_bit(&(Global_40.f_9052), 3);
						break;
					case 94:
						func_359(iParam0, 30000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 63:
						func_359(iParam0, 60000, 1, 0.5f, 3, 0, 0, 1);
						break;
					case 37:
						func_359(iParam0, 75000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 116:
						func_359(iParam0, 25000, 1, 0.5f, 1, 0, 0, 1);
						break;
					case 9:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_ANSEL_ATHERTON"));
						break;
				}
				break;
			case 11:
				if (iParam0 == func_362(0, 10, 11, 2116153146))
				{
					func_359(iParam0, func_360(iParam0), 1, 0.5f, 3, 0, 0, 1);
				}
				else if (iParam0 == func_362(0, 7, 11, -379687487))
				{
					func_359(iParam0, func_363(9), 1, 0.5f, 3, 0, 0, 1);
				}
				else if (iParam0 == func_362(0, 8, 11, -1386089015))
				{
					func_359(iParam0, func_363(10), 1, 0.5f, 2, 0, 0, 1);
				}
				else if (iParam0 == func_362(0, 11, 11, -1952009645))
				{
					func_359(iParam0, func_363(8), 1, 0.5f, 3, 0, 0, 1);
				}
				else if (iParam0 == func_362(0, 12, 11, 2065895756))
				{
					func_359(iParam0, func_363(11), 1, 0.5f, 2, 0, 0, 1);
				}
				break;
		}
		if (bParam1)
		{
			if (!func_193(iParam0) == 0)
			{
				if (func_192(iParam0) == 0)
				{
				}
				else if (_0x01f4d242765c6b24(func_192(iParam0)))
				{
					iVar19 = 0;
					if (bParam3)
					{
						iVar19 = 3;
					}
					func_195(func_194(iParam0), func_192(iParam0), iVar19);
					if (bParam4)
					{
						if (iVar0 == 8 && func_271(iParam0) == 58)
						{
							Global_1879514->f_1 = iParam0;
						}
						func_365(func_364(Global_1879514->f_1));
						if (iVar0 == 8 && func_271(iParam0) == 58)
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
						if (func_272(func_271(iParam0)) && func_300((*Global_1347702)[func_271(iParam0)]->f_12, 1))
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
			func_366(bParam2, iVar20);
		}
	}
	func_204(1);
	if ((bVar13 || func_131()) && (func_194(iParam0) == 1 || func_194(iParam0) == 8))
	{
		Global_1879534->f_6 = 1;
		Global_1879534->f_7 = 1;
	}
}

void func_86(int iParam0, bool bParam1)
{
	if (_0x01f4d242765c6b24(func_192(iParam0)))
	{
		iVar0 = 0;
		if (bParam1)
		{
			iVar0 = 3;
		}
		func_195(func_194(iParam0), func_192(iParam0), iVar0);
		if (func_84(32768))
		{
			iVar1 = func_194(iParam0);
			if ((iVar1 == 1 || iVar1 == 8) || (iVar1 == 11 && iParam0 == func_362(0, 10, 11, 2116153146)))
			{
				Global_1898438 = get_game_timer();
				Global_1879514->f_1 = iParam0;
				Global_1879514->f_19 = func_367();
				Global_1879514->f_18 = 1;
			}
		}
	}
	if (func_191(iParam0))
	{
		func_15(iParam0, 0, 2);
	}
	else if (func_190(iParam0))
	{
		if (!func_193(iParam0) == 5 && !func_193(iParam0) == 6)
		{
			if (bParam1)
			{
				func_201(iParam0, 6);
			}
			else
			{
				func_201(iParam0, 5);
			}
			func_206(iParam0);
		}
	}
	switch (func_194(iParam0))
	{
		case 1:
			switch (func_271(iParam0))
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
			switch (func_271(iParam0))
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

int func_87(char[4] cParam0)
{
	cVar0 = func_112(cParam0->f_607);
	return get_hash_key(&cVar0);
}

void func_88()
{
	func_93(4112);
	func_92(6);
	vVar2 = { func_368((*Global_2621440)[0]->f_9.f_7, &uVar0, &uVar1, 0, 1, 1, 0, 0, 0) };
	func_369(vVar2, uVar1, uVar0, 0);
	func_370(vVar2);
	Global_40.f_9.f_15 = func_371(vVar2, 0);
	clear_weather_type_persist();
	set_random_weather_type(false, true);
}

void func_89(int iParam0)
{
	if (func_22() != -1)
	{
		return;
	}
	func_93(32);
	if (iParam0 == 0)
	{
		func_93(16);
	}
	else if (iParam0 == 1)
	{
		func_93(8);
	}
	func_372();
	Global_43889 = 1;
}

void func_90(int iParam0)
{
	Global_1310720->f_9 = iParam0;
}

void func_91()
{
	Global_1310720->f_8 = 0;
	Global_1935630->f_4 = 1;
	Var10 = { Var0 };
	StringCopy(&(Var10.f_10), "respawn_persistence", 32);
	Var10.f_14 = 1024;
	Var10.f_15 = 0;
	func_373(Var10, 0);
}

void func_92(int iParam0)
{
	Global_1572864->f_21 = iParam0;
	Global_1310720->f_4 = get_game_timer();
}

void func_93(int iParam0)
{
	Global_1572864->f_3 = (Global_1572864->f_3 || iParam0);
}

void func_94(int iParam0)
{
	if (!func_189(iParam0))
	{
		return;
	}
	if (iParam0 != func_202(0))
	{
		return;
	}
	if (func_192(iParam0) == 0)
	{
	}
	iVar0 = func_194(iParam0);
	if (func_193(iParam0) == 3)
	{
		if (func_192(iParam0) == 0)
		{
		}
		else if (_0x01f4d242765c6b24(func_192(iParam0)))
		{
			if (func_194(iParam0) != 1 && func_194(iParam0) != 8)
			{
				func_195(func_194(iParam0), func_192(iParam0), 1);
			}
		}
	}
	Global_1898438 = (get_game_timer() - 10000);
	func_206(iParam0);
	func_42(1);
	func_203(0);
	func_201(iParam0, 0);
	switch (iVar0)
	{
		case 1:
			func_309(1);
			func_310(15, 0, 1);
			break;
		case 4:
			func_310(10, 0, 1);
			break;
		case 8:
			func_310(10, 0, 1);
			break;
		case 9:
			func_310(10, 0, 1);
			break;
		case 2:
			func_310(10, 0, 1);
			break;
		case 6:
			func_310(10, 0, 1);
			break;
		case 5:
			func_310(10, 0, 1);
			break;
	}
	func_204(1);
}

void func_95()
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

struct<2> func_96(int iParam0)
{
	Var0 = iParam0;
	return Var0;
}

void func_97(var uParam0, int iParam1, int iParam2)
{
	_0x6a0184e904cdf25e(&uParam0, iParam2);
}

struct<8> func_98(char[4] cParam0)
{
	return cParam0->f_10784;
}

void func_99(int iParam0, int iParam1, char* sParam2, bool bParam3, bool bParam4, bool bParam5)
{
	if (func_374(Global_1347343->f_11, 536870912))
	{
		return;
	}
	if (bParam3)
	{
		func_375(&(Global_1347343->f_11), 64);
	}
	if (bParam4)
	{
		func_375(&(Global_1347343->f_11), 16384);
	}
	if (func_376() >= 2)
	{
		if (!func_374(Global_1347343->f_11, 16384))
		{
			func_375(&(Global_1347343->f_11), 8);
		}
		func_210(0.88f);
	}
	StringCopy(&(Global_1347343->f_3), sParam2, 64);
	Global_1347343->f_2 = iParam0;
	Global_1347343 = 0;
	Global_1347343->f_1 = iParam1;
	func_228(Global_1935630, 2048);
	func_377(bParam5);
}

void func_100(bool bParam0)
{
	if (bParam0)
	{
	}
	_0x6ac4af46a6b8dfb2(bParam0);
}

void func_101(char[4] cParam0, int iParam1)
{
	cParam0->f_5307 = (cParam0->f_5307 || iParam1);
}

void func_102(char[4] cParam0)
{
	iVar0 = 0;
	while (iVar0 < Global_43619)
	{
		if (does_entity_exist(&(Global_43619[iVar0])))
		{
			*cParam0->f_7375.f_13[iVar0] = { *Global_43619[iVar0] };
			func_378(&(cParam0->f_10792), &(Global_43619[iVar0]), &(Global_43619[iVar0]->f_1), 0);
		}
		iVar0++;
	}
	if (_does_anim_scene_exist(Global_43800))
	{
		cParam0->f_7375.f_804 = Global_43800;
		take_ownership_of_anim_scene(cParam0->f_7375.f_804);
	}
	if (func_197(&Global_1935630, 524288))
	{
		func_73(Global_1935630, 524288);
		func_379(cParam0, 67108864);
	}
}

int func_103(var uParam0)
{
	return func_380(&(uParam0->f_7375));
}

bool func_104()
{
	return Global_1572864->f_14;
}

void func_105(char[4] cParam0, int iParam1)
{
	cParam0->f_5308 = (cParam0->f_5308 || iParam1);
}

bool func_106()
{
	return Global_1572864->f_13;
}

bool func_107()
{
	return func_381() != -1;
}

int func_108()
{
	return Global_1572864->f_9;
}

void func_109(char[4] cParam0, int iParam1)
{
	cParam0->f_597 = iParam1;
	settimera(0);
}

void func_110(char[4] cParam0, var uParam1)
{
	cParam0->f_607 = -1;
	func_382(cParam0);
	cParam0->f_634[0] = 57601;
	cParam0->f_634[1] = 57601;
	cParam0->f_637 = 0;
	func_384(cParam0, *uParam1);
	func_385(cParam0);
}

void func_111(char[4] cParam0)
{
	iVar0 = func_35(cParam0);
	vVar1 = { func_386(cParam0) };
	func_387(cParam0, vVar1);
	if (!(func_107() || func_130(cParam0, 3)))
	{
		iLocal_347 = func_259(cParam0);
		Var5 = { func_222(0, 13) };
		func_388(&iLocal_347, Var5, Var5.f_3, 1, 1065353216, 1, 1, 0);
		iLocal_349 = func_389(cParam0, -2046943672, "CS_RAINSFALL");
		if (func_165(iVar346, 0))
		{
			set_entity_as_mission_entity(iVar346, true, true);
		}
		func_390(cParam0);
	}
	if (iVar0 == iLocal_74)
	{
		iVar9 = Global_43838;
		if (func_391(iVar9))
		{
			iLocal_2239 = iVar9;
		}
		func_392(cParam0);
	}
}

char[] func_112(int iParam0)
{
	if (!func_188(iParam0))
	{
		return uVar0;
	}
	return (*Global_1835011)[iParam0]->f_8;
}

void func_113()
{
	Var0.f_1 = -1;
	_copy_memory(Global_1879514, &Var0, 20);
}

void func_114(char* sParam0, int iParam1)
{
	StringCopy(&(Global_1879514->f_2), sParam0, 32);
	Global_1879514->f_8 = iParam1;
}

void func_115(int iParam0)
{
	_0xdd1232b332cbb9e7(1, iParam0, 0);
}

void func_116()
{
	iVar0 = 0;
	while (iVar0 < 21)
	{
		iVar1 = 0;
		while (iVar1 < 31)
		{
			func_393(iVar0, iVar1);
			iVar1++;
		}
		iVar0++;
	}
}

bool func_117(char[4] cParam0)
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

bool func_118(int iParam0)
{
	if (!func_246(iParam0))
	{
		return false;
	}
	return func_250(iParam0, 33554432);
}

void func_119(bool bParam0, int iParam1, bool bParam2)
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

void func_120(char[4] cParam0)
{
	if (func_22() == 0)
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

void func_121(int iParam0, bool bParam1)
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

bool func_122(char[4] cParam0, int iParam1)
{
	return (cParam0->f_5308 && iParam1) != 0;
}

bool func_123(char[4] cParam0, int iParam1, int iParam2)
{
	return func_394(cParam0->f_1[func_134(iParam1)]->f_11, iParam2);
}

bool func_124(int iParam0)
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

void func_125(char[4] cParam0)
{
	if (func_31())
	{
		func_395(&(cParam0->f_7375));
	}
}

void func_126(char[4] cParam0, int iParam1)
{
	if (!_is_this_model_a_horse(iParam1))
	{
		return;
	}
	cParam0->f_8268 = iParam1;
}

int func_127(char[4] cParam0)
{
	return cParam0->f_8268;
}

Vector3 func_128(int iParam0)
{
	return func_396(iParam0);
}

bool func_129(struct<4> Param0)
{
	if (func_84(32768))
	{
		return true;
	}
	return func_397(Param0, Param0.f_3);
}

bool func_130(char[4] cParam0, int iParam1)
{
	return (cParam0->f_608 && iParam1) != 0;
}

bool func_131()
{
	if (func_22() != -1)
	{
		return false;
	}
	if (!func_398())
	{
		return false;
	}
	if (!func_326((*Global_1835011)[1]->f_1, 1))
	{
		return true;
	}
	if ((func_326((*Global_1835011)[2]->f_1, 1) && func_326((*Global_1347702)[120]->f_15, 1)) && !func_326((*Global_1835011)[4]->f_1, 1))
	{
		return true;
	}
	if (func_326((*Global_1835011)[37]->f_1, 1) && !func_326((*Global_1835011)[39]->f_1, 1))
	{
		return true;
	}
	if (func_326((*Global_1835011)[57]->f_1, 1) && !func_326((*Global_1835011)[60]->f_1, 1))
	{
		return true;
	}
	if (func_326((*Global_1835011)[26]->f_1, 1) && !func_326((*Global_1347702)[67]->f_15, 1))
	{
		return true;
	}
	if ((func_326((*Global_1835011)[62]->f_1, 1) && func_326((*Global_1835011)[63]->f_1, 1)) && !func_326((*Global_1835011)[64]->f_1, 1))
	{
		return true;
	}
	if (func_326((*Global_1835011)[75]->f_1, 1) && !func_326((*Global_1347702)[1]->f_15, 1))
	{
		return true;
	}
	if (func_326((*Global_1835011)[76]->f_1, 1) && !func_326((*Global_1835011)[77]->f_1, 1))
	{
		return true;
	}
	if ((func_326((*Global_1835011)[40]->f_1, 1) && func_326((*Global_1835011)[41]->f_1, 1)) && !func_326((*Global_1835011)[44]->f_1, 1))
	{
		return true;
	}
	if ((func_326((*Global_1835011)[62]->f_1, 1) && func_326((*Global_1835011)[63]->f_1, 1)) && !func_326((*Global_1835011)[64]->f_1, 1))
	{
		return true;
	}
	if ((func_326((*Global_1835011)[65]->f_1, 1) && func_326((*Global_1835011)[66]->f_1, 1)) && !func_326((*Global_1835011)[67]->f_1, 1))
	{
		return true;
	}
	return false;
}

void func_132(char[4] cParam0, vector3 vParam1, float fParam4)
{
	if (func_122(cParam0, 33554432))
	{
		return;
	}
	if (func_122(cParam0, 4096))
	{
		return;
	}
	if (func_399(vParam1))
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
		func_105(cParam0, 8);
	}
	func_105(cParam0, 4096);
	_0x4759cc730f947c81();
	_0x1ff00db43026b12f();
	start_player_teleport(player_id(), vParam1, fParam4, false, true, true, false);
	do_screen_fade_out(0);
	_set_milliseconds_per_game_minute(9999999);
	func_219(&(cParam0->f_603));
}

void func_133(vector3 vParam0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)
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

int func_134(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 27)
	{
		return func_400();
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

void func_135(char[4] cParam0)
{
	if (_uilog_is_entry_registered(2, func_87(cParam0)))
	{
		_uilog_remove_entry(2, func_87(cParam0));
	}
	if (!_uilog_is_entry_registered(1, func_87(cParam0)))
	{
		func_401(cParam0->f_607);
	}
}

void func_136(char[4] cParam0, int iParam1)
{
	cParam0->f_598 = iParam1;
}

void func_137(char[4] cParam0, int iParam1)
{
	cParam0->f_599 = iParam1;
	func_29(&(cParam0->f_600), 1);
}

bool func_138(char[4] cParam0, int iParam1)
{
	return cParam0->f_1[func_134(iParam1)]->f_12;
}

void func_139(char[4] cParam0)
{
	func_402(&(cParam0->f_638));
	func_403(&(cParam0->f_819));
	func_404(&(cParam0->f_1020));
	func_405(&(cParam0->f_1081));
	func_406(&(cParam0->f_1126));
	func_407(&(cParam0->f_5147));
	func_408(&(cParam0->f_1124));
	func_409(&(cParam0->f_5188));
	func_410(&(cParam0->f_5239));
	func_411(&(cParam0->f_5249));
	func_412(&(cParam0->f_5265));
	func_413(&(cParam0->f_5286));
}

void func_140(char[4] cParam0)
{
	if (!is_itemset_valid(Local_14))
	{
		Local_14 = create_itemset(true);
	}
	func_414(cParam0, 295806611, 67108863);
	func_414(cParam0, 193241785, 67108863);
	func_414(cParam0, 1727249588, 67108863);
	func_414(cParam0, 2055697445, 67108863);
	func_414(cParam0, 2010907555, 67108863);
	func_414(cParam0, 1369514652, 67108863);
	func_414(cParam0, 1679114625, 67108863);
	func_414(cParam0, -1679658797, 67108863);
	func_414(cParam0, -1143398950, 67108863);
	func_414(cParam0, -2144902919, 67108863);
	func_414(cParam0, 722236839, 67108863);
	func_414(cParam0, 2030804811, 67108863);
	func_414(cParam0, -2046943672, 67108863);
	func_414(cParam0, 2145697477, 67108863);
	func_414(cParam0, 1320786287, 67108863);
	func_414(cParam0, -1547438906, 67108863);
	func_414(cParam0, 295806611, 67108863);
	func_414(cParam0, 193241785, 67108863);
	func_414(cParam0, 1727249588, 67108863);
	func_414(cParam0, 2055697445, 67108863);
	func_414(cParam0, 2010907555, 67108863);
	func_414(cParam0, 1369514652, 67108863);
	func_414(cParam0, 1679114625, 67108863);
}

int func_141(char[4] cParam0)
{
	func_414(cParam0, 2145697477, 67108863);
	func_414(cParam0, -1952035829, 67108863);
	func_414(cParam0, 1624662158, 67108863);
	func_414(cParam0, 1605749521, 67108863);
	func_414(cParam0, -80167404, 67108863);
	func_414(cParam0, 1458354660, 67108863);
	func_414(cParam0, -402585707, 67108863);
	func_414(cParam0, -1882052649, 67108863);
	func_414(cParam0, -1443906703, 67108863);
	func_414(cParam0, 1320786287, 7);
	func_415(cParam0, sLocal_168, 7, 2, -1);
	func_415(cParam0, sLocal_170, 8, 2, -1);
	func_415(cParam0, cLocal_169, 56, 2, -1);
	func_415(cParam0, cLocal_171, 56, 2, -1);
	func_415(cParam0, cLocal_172, 56, 2, -1);
	func_415(cParam0, cLocal_173, 56, 2, -1);
	func_415(cParam0, cLocal_174, 56, 2, -1);
	func_415(cParam0, cLocal_175, 56, 2, -1);
	func_416(cParam0, sLocal_176, 1);
	func_416(cParam0, sLocal_178, 1);
	func_416(cParam0, sLocal_177, 1);
	func_418(cParam0, func_417(0), uLocal_111[0], 8, 0, 0, 0, 1);
	func_418(cParam0, func_417(2), uLocal_111[2], 8, 0, 0, 0, 1);
	func_418(cParam0, func_417(1), uLocal_111[1], 8, 0, 0, 0, 1);
	func_418(cParam0, func_417(3), uLocal_111[3], 8, 0, 0, 0, 1);
	func_418(cParam0, func_417(4), uLocal_111[4], 56, 0, 0, 0, 1);
	func_418(cParam0, func_417(5), uLocal_111[5], 8, 0, 0, 0, 1);
	func_418(cParam0, func_417(6), uLocal_111[6], 8, 0, 0, 0, 1);
	func_418(cParam0, func_417(7), uLocal_111[7], 56, 0, 0, 0, 1);
	func_418(cParam0, func_417(8), uLocal_111[8], 48, 0, 0, 0, 1);
	func_418(cParam0, func_417(9), uLocal_111[9], 4, 64, 0, 0, 1);
	func_418(cParam0, func_417(10), uLocal_111[10], 4, 0, 0, 0, 1);
	func_418(cParam0, func_417(11), uLocal_111[11], 524288, 0, 0, 0, 1);
	func_419(cParam0, &(uLocal_111[0]), "PL_Loop", 8);
	func_419(cParam0, &(uLocal_111[1]), "pl_Bottle_02_Enter", 8);
	func_419(cParam0, &(uLocal_111[1]), "pl_Camp_Enter", 8);
	func_419(cParam0, &(uLocal_111[3]), "pl_investigate_enter", 8);
	func_419(cParam0, &(uLocal_111[3]), "pl_investigate_exit", 8);
	func_419(cParam0, &(uLocal_111[3]), "pl_investigate_idle", 8);
	func_419(cParam0, &(uLocal_111[4]), "IG5_ARMY_SLEEP_BASE", 56);
	func_419(cParam0, &(uLocal_111[4]), "IG5_ARMY_WAKEUP", 56);
	func_419(cParam0, &(uLocal_111[5]), "pl_Arthur_Call_Over", 8);
	func_419(cParam0, &(uLocal_111[6]), "pl_Camp_Spotted_RainsFall", 24);
	func_419(cParam0, &(uLocal_111[8]), "pl_loop", 16);
	func_419(cParam0, &(uLocal_111[8]), "GRAB_COMBAT", 16);
	func_419(cParam0, &(uLocal_111[8]), "GRAB_NORMAL", 16);
	func_419(cParam0, &(uLocal_111[8]), "GRAB_STEALTH", 16);
	func_419(cParam0, &(uLocal_111[8]), "GRAB_STEALTH_TO_COMBAT", 16);
	func_419(cParam0, &(uLocal_111[9]), "pl_Herbs_Into_Satchel_LT", 4);
	func_419(cParam0, &(uLocal_111[9]), "pl_Herbs_Into_Satchel_RT", 4);
	func_419(cParam0, &(uLocal_111[11]), "PBL_1", 524288);
	return 1;
}

void func_142(char[4] cParam0, int iParam1, int iParam2)
{
	func_420(&(cParam0->f_1[func_134(iParam1)]->f_11), iParam2);
}

void func_143(char[4] cParam0)
{
	func_105(cParam0, 2);
}

void func_144(char[4] cParam0, int iParam1)
{
	func_421(&(cParam0->f_638), &(cParam0->f_819), &(cParam0->f_1020), &(cParam0->f_1081), &(cParam0->f_1124), &(cParam0->f_1126), &(cParam0->f_5147), &(cParam0->f_5188), &(cParam0->f_5239), &(cParam0->f_5249), &(cParam0->f_5265), &(cParam0->f_5286), iParam1);
}

void func_145(int iParam0)
{
	Var0 = { func_268(iParam0) };
	if (!is_string_null_or_empty(&Var0))
	{
		_text_database_request(&Var0);
	}
}

void func_146(int iParam0)
{
	Var0 = { func_269(iParam0) };
	if (!is_string_null_or_empty(&Var0))
	{
		_text_database_request(&Var0);
	}
}

void func_147(char[4] cParam0, int iParam1, char* sParam2, bool bParam3)
{
	func_422(&(cParam0->f_5310), iParam1, sParam2, bParam3);
}

void func_148(char[4] cParam0)
{
	if (!func_254(cParam0->f_5421))
	{
		cParam0->f_5421 = { func_423() };
	}
}

void func_149(char[4] cParam0)
{
	if (!func_22() == 0 || network_is_host_of_this_script())
	{
		func_29(&(cParam0->f_603), 1);
	}
}

void func_150(char[4] cParam0)
{
}

void func_151(char[4] cParam0, float fParam1)
{
	func_424(&(cParam0->f_7375), fParam1);
}

void func_152(char[4] cParam0, float fParam1)
{
	func_425(&(cParam0->f_7375), fParam1);
}

void func_153(char[4] cParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	func_426(cParam0, iParam1, sParam2, iParam3, iParam4, bParam5, 0);
	func_378(&(cParam0->f_10792), iParam1, sParam2, bParam6);
}

void func_154()
{
	_0x15abd5004cad2d99(0);
	_0x785177e4d57d7389(player_id(), 1352191066, 3, 3, 1);
	_0x785177e4d57d7389(player_id(), 1171995096, 4, 0, -1);
}

void func_155(bool bParam0, bool bParam1)
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

int func_156(char[4] cParam0)
{
	return *cParam0;
}

Vector3 func_157(int iParam0)
{
	if (!func_188(iParam0))
	{
		return vVar0;
	}
	return (*Global_1835011)[iParam0]->f_9;
}

void func_158(char[4] cParam0, bool bParam1)
{
	if (!func_123(cParam0, func_35(cParam0), 134217728))
	{
		func_141(cParam0);
		func_142(cParam0, func_35(cParam0), 134217728);
	}
	if (bParam1 && !func_123(cParam0, func_37(cParam0), 536870912))
	{
		if (func_427(cParam0, func_37(cParam0), 0))
		{
			func_142(cParam0, func_37(cParam0), 536870912);
		}
	}
	if (func_10(cParam0, 8192))
	{
		if (!func_10(cParam0, 536870912))
		{
			if (func_428(&(cParam0->f_1126), func_35(cParam0)))
			{
				func_101(cParam0, 536870912);
			}
		}
		return;
	}
	bVar0 = false;
	if (func_427(cParam0, func_35(cParam0), 1))
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		func_101(cParam0, 8192);
	}
}

int func_159(char[4] cParam0)
{
	return 1;
}

bool func_160(char[4] cParam0)
{
	if (func_429(cParam0) < 1)
	{
		func_430(cParam0, func_130(cParam0, 3), !func_10(cParam0, 2097152), cParam0->f_5410, !func_10(cParam0, 32), 0);
		func_431(cParam0, 1, cParam0->f_5413, cParam0->f_5413.f_1, cParam0->f_5413.f_2, cParam0->f_5416, 1, 1, 1);
	}
	if ((!func_122(cParam0, 4) && !func_107()) && !func_130(cParam0, 3))
	{
		if (!func_122(cParam0, 32))
		{
			if (func_22() == 0)
			{
				func_105(cParam0, 32);
			}
			else
			{
				func_432(cParam0);
			}
		}
		if (func_122(cParam0, 32))
		{
			func_433(cParam0);
		}
	}
	switch (func_429(cParam0))
	{
		case -1:
		case 0:
			func_434(cParam0, 1);
			break;
		case 1:
			if (func_435(cParam0))
			{
				if (func_122(cParam0, 4096))
				{
					func_434(cParam0, 2);
				}
				else
				{
					func_434(cParam0, 3);
				}
			}
			break;
		case 2:
			if (func_436(cParam0))
			{
				func_434(cParam0, 3);
			}
			break;
		case 3:
			if (func_437(cParam0))
			{
				func_434(cParam0, 4);
			}
			break;
		case 4:
			return true;
	}
	return false;
}

var func_161(char[4] cParam0)
{
	return cParam0->f_5408;
}

void func_162(char[4] cParam0, int iParam1)
{
	*cParam0 = iParam1;
}

bool func_163(char[4] cParam0)
{
	if (func_35(cParam0) == 26)
	{
		func_438(cParam0, 0);
		return true;
	}
	if (func_439(cParam0))
	{
		iVar0 = func_35(cParam0);
		func_109(cParam0, func_37(cParam0));
		if (func_35(cParam0) == 26)
		{
			func_438(cParam0, 0);
			return true;
		}
		else if (func_123(cParam0, iVar0, 128))
		{
			func_439(cParam0);
		}
	}
	return false;
}

int func_164(char[4] cParam0, int iParam1)
{
	return cParam0->f_1[func_134(iParam1)]->f_10;
}

bool func_165(int iParam0, int iParam1)
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
	if (func_394(iVar0, 1))
	{
		if (is_ped_fatally_injured(iParam0))
		{
			return false;
		}
	}
	if (func_394(iVar0, 2))
	{
		if (_is_ped_hogtied(iParam0))
		{
			return false;
		}
	}
	if (func_394(iVar0, 8))
	{
		if (get_ped_config_flag(iParam0, 11, false))
		{
			return false;
		}
	}
	if (func_394(iVar0, 16))
	{
		if (!is_ped_on_mount(iParam0) && !is_ped_in_any_vehicle(iParam0, false))
		{
			return false;
		}
	}
	if (func_394(iVar0, 32))
	{
		if (is_entity_in_water(iParam0))
		{
			return false;
		}
	}
	if (func_394(iVar0, 64))
	{
		if (_0xb655db7582aec805(iParam0))
		{
			return false;
		}
	}
	if (func_394(iVar0, 128))
	{
		if (is_ped_ragdoll(iParam0))
		{
			return false;
		}
	}
	if (func_394(iVar0, 256))
	{
		if (!_0xa0bc8faed8cfeb3c(iParam0))
		{
			return false;
		}
	}
	return true;
}

bool func_166(int iParam0, int iParam1)
{
	if (does_entity_exist(iParam1) && is_entity_dead(iParam1))
	{
		iVar1 = get_ped_source_of_death(iParam1);
		if (does_entity_exist(iVar1) && ((is_entity_a_ped(iVar1) || is_entity_a_vehicle(iVar1)) || is_entity_an_object(iVar1)))
		{
			if (is_entity_a_ped(iVar1))
			{
				iVar0 = get_ped_index_from_entity_index(iVar1);
				return iVar0 == iParam0;
			}
		}
	}
	return false;
}

void func_167(int iParam0)
{
	if (func_107())
	{
		iVar0 = iParam0;
		if (iVar0 > -1 && iVar0 < 26)
		{
			Global_1572864->f_9 = iParam0;
		}
		else
		{
			Global_1572864->f_9 = -1;
		}
	}
	else if (func_440())
	{
		Global_1572864->f_9 = iParam0;
	}
	else if (func_441())
	{
		Global_1572864->f_9 = iParam0;
	}
	else if (func_442())
	{
		Global_1572864->f_9 = iParam0;
	}
	else if (func_443())
	{
		Global_1572864->f_9 = iParam0;
	}
}

void func_168()
{
	func_46();
	_0xbc90bdf4e5228ea1();
}

void func_169(char[4] cParam0)
{
	iVar0 = func_35(cParam0);
	func_444(0, 0, 1103626240);
}

void func_170()
{
	if (_does_propset_exist(iLocal_227))
	{
		_delete_propset(iLocal_227, true, true);
		iLocal_232 = 0;
		iLocal_229 = 0;
	}
	if (does_entity_exist(&(iLocal_2074[2])))
	{
		func_445(iLocal_2074[2]);
	}
}

void func_171(var uParam0, int iParam1)
{
	if (!does_group_exist(*uParam0))
	{
		return;
	}
	if (!_0x0455546f23ff08e4(*uParam0))
	{
		remove_group(*uParam0);
		return;
	}
	iVar1 = 0;
	iVar2 = 0;
	get_group_size(*uParam0, &iVar2, &iVar1);
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		iVar3 = get_ped_as_group_member(*uParam0, iVar0);
		if (!func_165(iVar3, 0) || iVar3 == Global_35)
		{
		}
		else
		{
			if (iParam1 == 1 && _0xe24c64d9aded2ef5(get_player_index(), iVar3))
			{
				_0x0c6b89876262a99d(get_player_index(), iVar3);
			}
			set_ped_config_flag(iVar3, 279, false);
			remove_ped_from_group(iVar3);
		}
		iVar0++;
	}
	iVar4 = get_ped_as_group_leader(*uParam0);
	if (func_165(iVar4, 0) && iVar3 != Global_35)
	{
		if (iParam1 == 1 && _0xe24c64d9aded2ef5(get_player_index(), iVar4))
		{
			_0x0c6b89876262a99d(get_player_index(), iVar4);
		}
		set_ped_config_flag(iVar4, 279, false);
		remove_ped_from_group(iVar4);
	}
	remove_group(*uParam0);
}

void func_172()
{
	func_446(&(iLocal_124[19]));
	func_446(&(iLocal_124[38]));
	iVar0 = 0;
	while (iVar0 < 43)
	{
		func_447(&(iLocal_124[iVar0]));
		iVar0++;
	}
}

void func_173()
{
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!_does_scenario_point_exist(&(iLocal_2172[iVar0])))
		{
		}
		else
		{
			_delete_scenario_point(&(iLocal_2172[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!_does_scenario_point_exist(&(iLocal_2177[iVar0])))
		{
		}
		else
		{
			_delete_scenario_point(&(iLocal_2177[iVar0]));
		}
		iVar0++;
	}
}

void func_174()
{
	iVar0 = 0;
	while (iVar0 < 14)
	{
		func_448(uLocal_2141[iVar0], 1);
		iVar0++;
	}
	func_449(&(iLocal_124[38]));
}

void func_175()
{
	set_scenario_type_enabled("PROP_PLAYER_SLEEP_TENT_A_FRAME", true);
	set_scenario_type_enabled("WORLD_ANIMAL_RAM_GRAZING", true);
}

void func_176(var uParam0, int iParam1)
{
	uParam0->f_2 = iParam1;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 0;
	uParam0->f_14 = 0;
	uParam0->f_15 = 0;
	uParam0->f_16 = 0;
	func_450(&(uParam0->f_60));
}

void func_177(int* iParam0)
{
	if (does_blip_exist(*iParam0))
	{
		remove_blip(iParam0);
	}
}

void func_178(int* iParam0, bool bParam1)
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

void func_179()
{
	func_451(&(iLocal_124[19]), 0);
}

void func_180()
{
	set_player_noise_multiplier(get_player_index(), 1f);
}

bool func_181(char[4] cParam0)
{
	return func_24(cParam0) == 0;
}

void func_182()
{
	iLocal_234 = 0;
	iLocal_233 = 1;
	func_452(&uLocal_225);
}

void func_183(int* iParam0, bool bParam1, bool bParam2)
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
		if (is_entity_attached(*iParam0))
		{
			detach_entity(*iParam0, true, true);
		}
	}
	if (bParam2)
	{
		_mark_object_for_deletion(*iParam0);
	}
	else
	{
		set_object_as_no_longer_needed(iParam0);
	}
}

void func_184(int iParam0)
{
	if (*iParam0 != -1)
	{
		destroy_tracked_point(*iParam0);
		*iParam0 = -1;
	}
}

void func_185(var uParam0)
{
	func_453(uParam0);
	func_13(&(uParam0->f_287), 1, 1);
	if (!uParam0->f_62 == 0)
	{
		destroy_tracked_point(uParam0->f_62);
		uParam0->f_62 = 0;
	}
	func_454(&(uParam0->f_218));
	func_450(&(uParam0->f_324));
	func_450(&(uParam0->f_327));
	func_450(&(uParam0->f_330));
}

int func_186(int iParam0)
{
	return iParam0;
}

void func_187(int iParam0)
{
	if (!func_455(iParam0))
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

bool func_188(int iParam0)
{
	return (iParam0 > -1 && iParam0 <= 80);
}

bool func_189(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

bool func_190(int iParam0)
{
	iVar0 = func_295(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

bool func_191(int iParam0)
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
		iVar0 = func_193(iParam0);
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

int func_192(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_5;
	}
	return Global_1058888->f_498[iParam0]->f_1;
}

int func_193(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_1;
	}
	iVar0 = func_456(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888->f_40501.f_1[iVar0]->f_1;
}

int func_194(int iParam0)
{
	if (!func_189(iParam0))
	{
		return 0;
	}
	return func_458(func_457(iParam0));
}

void func_195(int iParam0, int iParam1, int iParam2)
{
	vVar0.f_1 = 0;
	vVar0.x = 0;
	vVar0.f_2 = 0;
	if (func_22() == 0)
	{
		vVar0.x = Global_265238->f_79565.f_208.f_17;
	}
	_0xd5910ecf81a2278c(iParam0, iParam1, iParam2, &vVar0);
}

bool func_196(int iParam0, bool bParam1, bool bParam2)
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
		if (func_459())
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
		iVar0 = func_271(&(Global_1898164->f_1[0]));
		if (func_272(iVar0) && func_300((*Global_1347702)[iVar0]->f_12, 131072))
		{
			return false;
		}
	}
	if (iParam0 == 0 && func_189(&(Global_1898164->f_1[0])))
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

bool func_197(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_198(int iParam0)
{
	switch (func_194(iParam0))
	{
		case 1:
			iVar0 = func_271(iParam0);
			return func_460(iVar0);
		case 8:
			iVar1 = func_271(iParam0);
			if (func_300((*Global_1347702)[iVar1]->f_12, 1))
			{
				return func_461(iVar1);
			}
			break;
	}
	return -1;
}

void func_199(bool bParam0)
{
	if (Global_1898077->f_1 == 0 && !bParam0)
	{
		return;
	}
	iVar0 = 0;
	if (func_22() != -1)
	{
		iVar0 = 1;
	}
	if ((Global_1898077->f_2 == 4 && Global_1898077->f_12 != Global_1898077->f_13) && !bParam0)
	{
		Global_1898077->f_1 = Global_1898077->f_2;
		Global_1898077->f_12 = Global_1898077->f_13;
		func_462(iVar0, Global_1898077->f_12);
	}
	else
	{
		Global_1898077->f_1 = 0;
		Global_1898077->f_7 = iVar0;
		Global_1898077->f_8 = func_463();
		Global_1898077->f_9 = func_464(Global_1894899->f_2);
		func_465(Global_1898077->f_7, Global_1898077->f_8, Global_1898077->f_9);
	}
	Global_1898077->f_2 = 0;
}

int func_200()
{
	if (!func_326((*Global_1835011)[4]->f_1, 1))
	{
		return 0;
	}
	else if (!func_326((*Global_1347702)[66]->f_15, 1))
	{
		return 1;
	}
	else if (!func_326((*Global_1347702)[67]->f_15, 1))
	{
		return 2;
	}
	else if (!func_326((*Global_1835011)[38]->f_1, 1))
	{
		return 3;
	}
	else if (!func_326((*Global_1347702)[68]->f_15, 1))
	{
		return 4;
	}
	else if (!func_326((*Global_1835011)[59]->f_1, 1))
	{
		return 5;
	}
	else if (!func_326((*Global_1835011)[67]->f_1, 1))
	{
		return 7;
	}
	else
	{
		return 8;
	}
	return -1;
}

void func_201(int iParam0, int iParam1)
{
	if (!func_189(iParam0))
	{
		return;
	}
	func_466(iParam0, iParam1);
}

int func_202(int iParam0)
{
	return &(Global_1898164->f_1[iParam0]);
}

int func_203(bool bParam0)
{
	if (!bParam0 && func_467(373691918))
	{
		return 0;
	}
	_0xc61edebf16cd9668(752193127, bParam0, 0);
	return 1;
}

void func_204(int iParam0)
{
	Global_1898164 = (Global_1898164 || iParam0);
}

void func_205(int iParam0, bool bParam1)
{
	if (func_22() != -1)
	{
		return;
	}
	if (func_202(0) != iParam0)
	{
		return;
	}
	if (func_468(iParam0))
	{
		if (bParam1)
		{
			func_469(-525676072);
		}
		else
		{
			func_470(-525676072);
		}
	}
}

int func_206(int iParam0)
{
	return func_472(func_471(iParam0));
}

void func_207(int iParam0)
{
	Global_1572864->f_12 = iParam0;
}

void func_208(int iParam0)
{
	Global_1572864->f_11 = iParam0;
}

void func_209(int iParam0)
{
	Global_1572864->f_15 = iParam0;
}

void func_210(float fParam0)
{
	Global_1572864->f_22 = fParam0;
}

void func_211()
{
	if (func_12(Global_43801))
	{
		func_13(&Global_43801, 0, 0);
	}
}

bool func_212()
{
	return func_473(_0xc17f69e1418cd11f(3));
}

bool func_213()
{
	iVar0 = _0xc17f69e1418cd11f(1);
	return (iVar0 != 0 && _0x59fa676177dbe4c9(iVar0) == 4);
}

int func_214(int iParam0)
{
	iParam0 = func_265(iParam0);
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

int func_215(int iParam0, int iParam1)
{
	if (!func_474(iParam0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if ((*Global_40.f_11206[iParam0])[iVar0]->f_3 == iParam1)
		{
			func_475(iParam0, (*Global_40.f_11206[iParam0])[iVar0]);
		}
		iVar0++;
	}
	return 1;
}

bool func_216(char* sParam0, int iParam1)
{
	return (sParam0->f_8 && iParam1) != 0;
}

bool func_217(char* sParam0, bool bParam1)
{
	if (func_216(sParam0, 1))
	{
		return false;
	}
	if (sParam0->f_9 == 15 || sParam0->f_9 == 16)
	{
		prepare_music_event(sParam0);
		func_476(sParam0, 1);
		return true;
	}
	if (bParam1)
	{
		if (sParam0->f_9 == 17 || sParam0->f_9 == 19)
		{
			set_audio_flag(sParam0, true);
			func_476(sParam0, 1);
			return false;
		}
		if (sParam0->f_9 == 18 || sParam0->f_9 == 20)
		{
			set_audio_flag(sParam0, false);
			func_476(sParam0, 1);
			return false;
		}
	}
	else
	{
		if (sParam0->f_9 == 10 || sParam0->f_9 == 12)
		{
			set_audio_flag(sParam0, true);
			func_476(sParam0, 1);
			return false;
		}
		if (sParam0->f_9 == 11 || sParam0->f_9 == 13)
		{
			set_audio_flag(sParam0, false);
			func_476(sParam0, 1);
			return false;
		}
	}
	if (!is_string_null_or_empty(sParam0))
	{
		trigger_music_event(sParam0);
		func_476(sParam0, 1);
		return true;
	}
	func_476(sParam0, 1);
	return false;
}

bool func_218(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_219(int iParam0)
{
	func_477(iParam0, 0f);
}

int func_220(int iParam0)
{
	if (!func_28(iParam0))
	{
		return round((iParam0->f_1 * 1000f));
	}
	if (func_478(iParam0))
	{
		return round((iParam0->f_2 * 1000f));
	}
	return (func_479() - round((iParam0->f_1 * 1000f)));
}

void func_221(bool bParam0, bool bParam1)
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
		func_480(0);
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

struct<4> func_222(int iParam0, int iParam1)
{
	return func_481(iParam0, iParam1);
}

void func_223(var uParam0, struct<4> Param1)
{
	*uParam0 = { Param1 };
	uParam0->f_3 = Param1.f_3;
}

int func_224(char[4] cParam0, int iParam1)
{
	return cParam0->f_1[func_134(iParam1)]->f_9;
}

void func_225(int iParam0, struct<4> Param1, struct<4> Param5, int iParam9, int iParam10)
{
	Global_1572864->f_8 = iParam0;
	Global_1572864->f_9 = iParam9;
	Global_1572864->f_10 = iParam10;
	StringCopy(&cVar0, "INVALID", 8);
	if (func_194(iParam0) == 1)
	{
		cVar0 = func_112(func_482(iParam0));
		_0x8ec7890d446bd9c1(&cVar0, 0, Global_1572864->f_9);
	}
	else if (func_194(iParam0) == 8)
	{
		cVar0 = func_484(func_483(iParam0));
		_0x8ec7890d446bd9c1(&cVar0, 0, Global_1572864->f_9);
	}
	func_485(1, 1);
	func_486(1, Param1, Param1.f_3);
	*Global_1347394 = { Param5 };
	func_66(0);
	func_67(0);
	func_210(1f);
}

void func_226(char* sParam0)
{
	if (is_audio_scene_active(sParam0))
	{
		stop_audio_scene(sParam0);
	}
	func_476(sParam0, 2);
}

void func_227(int iParam0, int iParam1)
{
	if (!func_487(iParam0))
	{
		return;
	}
	Global_40.f_11029[iParam0] = (Global_40.f_11029[iParam0] || iParam1);
}

void func_228(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_229()
{
	Global_1934266->f_78.f_62 = -1;
}

void func_230()
{
	StringCopy(&(Global_1934266->f_78.f_64), "", 24);
}

void func_231()
{
	StringCopy(&(Global_1934266->f_78.f_67), "", 24);
}

void func_232()
{
	Global_1934266->f_78.f_63 = 0;
}

bool func_233()
{
	return func_488(get_id_of_this_thread());
}

void func_234(bool bParam0)
{
	if (bParam0)
	{
		Global_1945938->f_865 = (Global_1945938->f_865 - Global_1945938->f_865 & 2);
	}
	else
	{
		Global_1945938->f_865 |= 2;
	}
	func_489(bParam0);
}

void func_235()
{
	if (!Global_1894899->f_186)
	{
		_0xf5ffb08976911b50(Global_1894899->f_182, Global_1894899->f_183, Global_1894899->f_184, Global_1894899->f_185);
	}
}

void func_236(int iParam0, int iParam1, int iParam2)
{
	_0x36559148b78853b3(iParam0, iParam1, iParam2);
}

bool func_237()
{
	return (Global_1894899 & 1 != 0 && func_79() != -1);
}

void func_238(var uParam0)
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

void func_239(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_240(int iParam0)
{
	if (!func_490(iParam0))
	{
		return;
	}
	(*Global_1310750)[iParam0]->f_46 = 0;
}

void func_241()
{
	func_491(64);
}

void func_242()
{
	Global_1310750->f_16072 = 0;
}

bool func_243()
{
	if (Global_1572887->f_12 == -1)
	{
		return false;
	}
	return Global_1058888->f_4;
}

bool func_244(int iParam0)
{
	return func_245(23, iParam0);
}

bool func_245(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_492(&(Global_1109400->f_4), iVar0, 5);
	}
	if (iParam1 == func_493())
	{
		return func_492(&(Global_1109400->f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (&Global_1225639->f_21[iParam1])
	{
		return func_492(&((*Global_1108178)[iParam1]->f_4), iVar0, 5);
	}
	return false;
}

bool func_246(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

bool func_247(int iParam0)
{
	if (!func_246(iParam0))
	{
		return false;
	}
	return func_250(iParam0, 8);
}

void func_248(int iParam0, int iParam1)
{
	if (!func_246(iParam0))
	{
		return;
	}
	(*Global_1888801)[iParam0]->f_19 = iParam1;
}

void func_249(int iParam0)
{
	Global_1894899 = (Global_1894899 || iParam0);
}

bool func_250(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		return (Global_23118[iParam0] && iParam1) != 0;
	}
	return (Global_1058888->f_40615[iParam0] && iParam1) != 0;
}

void func_251(int iParam0)
{
	Global_1894899 = (&Global_1894899 - (Global_1894899 && iParam0));
}

bool func_252()
{
	bVar0 = false;
	iVar1 = 0;
	while (iVar1 < 150)
	{
		if (func_250(iVar1, 1))
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
				if (func_22() == -1)
				{
					force_cleanup_for_thread_with_this_id((*Global_1888801)[iVar1]->f_9, 523);
				}
				else if (!_0x30bed53646c86d11((*Global_1888801)[iVar1]->f_9))
				{
					_0x7de4643157ad646c((*Global_1888801)[iVar1]->f_9);
				}
			}
			else if (func_250(iVar1, 2))
			{
				if (func_22() == -1)
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
				func_287(iVar1, 11);
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

bool func_253(var uParam0)
{
	if (func_494(uParam0, 1) || func_494(uParam0, 2))
	{
		return true;
	}
	return false;
}

bool func_254(int iParam0, var uParam1)
{
	return is_itemset_valid(iParam0);
}

int func_255(struct<2> Param0)
{
	if (!func_254(Param0))
	{
		return 0;
	}
	return get_itemset_size(Param0);
}

int func_256(struct<2> Param0, int iParam2)
{
	if (!func_254(Param0))
	{
		return 0;
	}
	iVar0 = get_indexed_item_in_itemset(iParam2, Param0);
	iVar1 = iVar0;
	return iVar1;
}

bool func_257(int iParam0)
{
	if (!func_495(iParam0))
	{
		return false;
	}
	if (!func_496(iParam0))
	{
		return false;
	}
	return (*Global_1360165)[iParam0]->f_129 == get_id_of_this_thread();
}

void func_258(char[4] cParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (!func_495(iParam1))
	{
		return;
	}
	if (!func_257(iParam1))
	{
		return;
	}
	if (bParam5 && !bParam6)
	{
		if (func_24(cParam0) != 0 && func_156(cParam0) >= 2)
		{
			bParam5 = false;
		}
	}
	if (does_entity_exist(iParam2))
	{
		func_497(cParam0, iParam2);
		func_498(iParam2);
	}
	func_499(iParam1);
	func_500(iParam1, 0);
	func_501(iParam1, 0, bParam4, bParam5, -1082130432, 1, 1, 0, 0, 0, 0);
	if (bParam5)
	{
	}
}

int func_259(char[4] cParam0)
{
	return cParam0->f_5411;
}

int func_260(int iParam0)
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

int func_261(int iParam0)
{
	iParam0 = func_265(iParam0);
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

void func_262(int iParam0)
{
	iParam0 = func_265(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = get_id_of_this_thread();
	func_502(iParam0);
	if (func_503(iParam0))
	{
		if (func_261(iParam0) != iVar0)
		{
			return;
		}
	}
	func_504(iParam0);
	func_505(iParam0);
	iVar1 = func_214(iParam0);
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
			if (!func_506(iVar2))
			{
				set_ped_model_is_suppressed(iVar2, false);
			}
		}
		func_507(iParam0);
	}
}

void func_263(int iParam0, bool bParam1)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (is_entity_dead(iParam0) || is_ped_injured(iParam0))
	{
		return;
	}
	if (!func_508(iParam0))
	{
		return;
	}
	iVar0 = func_260(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (iVar0 >= 7)
	{
		return;
	}
	func_61(iVar0);
	func_502(iVar0);
	iVar1 = get_id_of_this_thread();
	iVar2 = func_261(iVar0);
	if (!bParam1)
	{
		if (iVar1 != iVar2)
		{
			return;
		}
		if (!func_503(iVar0))
		{
			return;
		}
	}
	func_509(iVar0);
	set_ped_keep_task(iParam0, true);
	if (bParam1 && func_22() == -1)
	{
		if (!_0x88ad6cc10d8d35b2(iParam0))
		{
			set_entity_as_mission_entity(iParam0, true, true);
		}
	}
}

void func_264(char[4] cParam0, int iParam1)
{
	cParam0->f_5308 = (cParam0->f_5308 - (cParam0->f_5308 && iParam1));
}

int func_265(int iParam0)
{
	if (iParam0 == 7)
	{
		return Global_40.f_1095;
	}
	return iParam0;
}

void func_266(int iParam0, int iParam1)
{
	iParam0 = func_265(iParam0);
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

void func_267()
{
	if (func_510(0))
	{
		func_511(0);
	}
	if (func_510(1))
	{
		func_511(1);
	}
	if (func_510(5))
	{
		func_511(5);
	}
	if (func_510(6))
	{
		func_504(6);
	}
}

struct<2> func_268(int iParam0)
{
	MemCopy(&Var0, {func_112(iParam0)}, 2);
	return Var0;
}

struct<2> func_269(int iParam0)
{
	Var0 = { func_268(iParam0) };
	StringConCat(&Var0, "AUD", 16);
	return Var0;
}

void func_270(var uParam0)
{
	_0xebff94328ff7a18a(-3.141593f, 3.141593f);
	if (_uiprompt_is_valid(uParam0->f_11))
	{
		_uiprompt_delete(uParam0->f_11);
	}
}

int func_271(int iParam0)
{
	if (!func_189(iParam0))
	{
		return -1;
	}
	return func_512(func_457(iParam0));
}

bool func_272(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_273(int iParam0, int iParam1)
{
	return (Global_40.f_490.f_402[iParam0] && iParam1) != 0;
}

void func_274(int iParam0, bool bParam1)
{
	iVar0 = func_513(iParam0);
	if (_uilog_is_entry_registered(iVar0, func_514(iParam0)))
	{
		_uilog_remove_entry(iVar0, func_514(iParam0));
	}
	if (bParam1)
	{
		if (iVar0 == 1)
		{
			if (_uilog_is_entry_registered(2, func_514(iParam0)))
			{
				_uilog_remove_entry(2, func_514(iParam0));
			}
		}
	}
	func_515(iParam0, 4);
	func_515(iParam0, 8);
	func_515(iParam0, 16);
}

void func_275(bool bParam0)
{
	iVar0 = 0;
	while (iVar0 < &Global_1347702)
	{
		if (func_272(iVar0))
		{
			if (func_273(iVar0, 4))
			{
				func_276(iVar0, bParam0);
			}
		}
		iVar0++;
	}
}

void func_276(int iParam0, bool bParam1)
{
	if (!func_273(iParam0, 4))
	{
		return;
	}
	if (!_uilog_is_entry_registered(func_513(iParam0), func_514(iParam0)))
	{
		return;
	}
	if (bParam1)
	{
		_uilog_mark_entry_availability(func_513(iParam0), func_514(iParam0), 2, "");
		func_516(iParam0, 16);
	}
	else
	{
		if (func_273(iParam0, 8))
		{
			_uilog_mark_entry_availability(func_513(iParam0), func_514(iParam0), 1, "");
		}
		else
		{
			_uilog_mark_entry_availability(func_513(iParam0), func_514(iParam0), 0, "");
		}
		func_515(iParam0, 16);
	}
}

void func_277(int iParam0, bool bParam1)
{
	if ((*Global_1347702)[iParam0]->f_12 & 67108864 != 0)
	{
		return;
	}
	if (!func_273(iParam0, 4))
	{
		return;
	}
	if (!_uilog_is_entry_registered(func_513(iParam0), func_514(iParam0)))
	{
		return;
	}
	if (bParam1)
	{
		if (func_273(iParam0, 16))
		{
		}
		else
		{
			_uilog_mark_entry_availability(func_513(iParam0), func_514(iParam0), 1, "");
		}
		func_516(iParam0, 8);
	}
	else
	{
		if (func_273(iParam0, 16))
		{
		}
		else
		{
			_uilog_mark_entry_availability(func_513(iParam0), func_514(iParam0), 0, "");
		}
		func_515(iParam0, 8);
	}
}

int func_278(char[4] cParam0)
{
	if (func_122(cParam0, 8388608))
	{
		return 2;
	}
	if (func_122(cParam0, 4194304))
	{
		return 4;
	}
	if (func_122(cParam0, 4))
	{
		return 1;
	}
	if (func_130(cParam0, 1) && func_84(32768))
	{
		return 3;
	}
	return 0;
}

void func_279(int iParam0, int iParam1)
{
	if (func_510(0))
	{
		if (func_517(0))
		{
			func_518(0);
		}
	}
	if (func_510(1))
	{
		if (func_517(1))
		{
			func_518(1);
		}
	}
}

void func_280(char[4] cParam0)
{
	if (func_122(cParam0, 1))
	{
		return;
	}
	if (is_entity_dead(cParam0->f_5411))
	{
		if (func_122(cParam0, 16))
		{
			func_60(cParam0, 0);
		}
		if (func_431(cParam0, 0, cParam0->f_5413, cParam0->f_5413.f_1, cParam0->f_5413.f_2, cParam0->f_5416, 1, 1, 1))
		{
		}
	}
}

bool func_281(char[4] cParam0)
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

void func_282(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, int iParam6, int iParam7)
{
	if (!bParam1)
	{
		func_519(iParam0, sParam4, iParam5);
	}
	func_520(iParam0, bParam1, fParam2, iParam3, iParam7);
}

int func_283(int iParam0)
{
	if (!func_246(iParam0))
	{
		return 0;
	}
	return (*Global_1888801)[iParam0]->f_20;
}

int func_284()
{
	return &Global_1899515;
}

void func_285(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_23118[iParam0]->f_2 = iParam1;
		return;
	}
	Global_1058888->f_40615[iParam0]->f_2 = iParam1;
}

void func_286(int iParam0, int iParam1)
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

void func_287(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_23118[iParam0] = (&Global_23118[iParam0] - (Global_23118[iParam0] && iParam1));
		return;
	}
	Global_1058888->f_40615[iParam0] = (&Global_1058888->f_40615[iParam0] - (Global_1058888->f_40615[iParam0] && iParam1));
}

void func_288(int iParam0)
{
	if (!func_246(iParam0))
	{
		return;
	}
	if (func_521(iParam0))
	{
		func_522(iParam0);
	}
	else
	{
		func_523(iParam0);
	}
}

int func_289(int iParam0)
{
	if (func_524(&(Global_1109400->f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

int func_290(int iParam0)
{
	if (func_525(&(Global_1109400->f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

bool func_291(int iParam0, int iParam1)
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

void func_292(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	iVar0 = 0;
	while (iVar0 < 120)
	{
		iVar1 = 0;
		if (func_526(Global_1310750[iVar0], iParam0))
		{
			if (!func_527(iVar0))
			{
				iVar1 = 1;
			}
			else if (iParam0 == 16777216)
			{
				if (func_528(iVar0) < func_529(iParam1))
				{
					iVar1 = 1;
				}
			}
			func_294(iVar0, iParam1, 1f, (iVar1 || iParam2), bParam3);
		}
		iVar0++;
	}
}

void func_293(float fParam0, bool bParam1, bool bParam2)
{
	fVar0 = func_530();
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

void func_294(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
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
	func_531(iParam0, bParam3, round((fVar0 * fParam2)), round((fVar1 * fParam2)), round((fVar2 * fParam2)), round((fVar3 * fParam2)), bParam4, 1);
}

int func_295(int iParam0)
{
	if (!func_189(iParam0))
	{
		return -1;
	}
	return func_193(iParam0);
}

void func_296(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_6 = iParam1;
}

int func_297(bool bParam0, int iParam1)
{
	if (!bParam0 && func_467(373691918))
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
	func_203(bParam0);
	return 1;
}

void func_298()
{
	Var0 = Global_35;
	Var0.f_12 = 8;
	Var0.f_8 = 0;
	iVar17 = 0;
	while (iVar17 < 27)
	{
		if (func_495(iVar17))
		{
			iVar18 = func_532(iVar17);
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
	func_450(&(Global_1359489->f_55));
	if (func_533(1777191912, 1))
	{
		func_534(1777191912, 1, 0);
	}
}

void func_299(int iParam0)
{
	if (!func_189(iParam0))
	{
		return;
	}
	func_536(iParam0, (func_535(iParam0) + shift_left(1, 16)));
}

bool func_300(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_301()
{
	return func_537() > 0;
}

void func_302(int iParam0, int iParam1, bool bParam2)
{
	switch (iParam0)
	{
		case 67:
			func_538(-1032423150, iParam1);
			break;
		case 18:
			func_538(294066959, iParam1);
			func_538(-1925639563, iParam1);
			func_538(-378582304, iParam1);
			func_538(-338306437, iParam1);
			break;
		case 20:
			func_538(437270255, iParam1);
			break;
		case 2:
			func_538(-304000413, iParam1);
			func_538(-533612796, iParam1);
			func_538(48036954, iParam1);
			break;
		case 23:
			func_538(193108691, iParam1);
			func_538(491732588, iParam1);
			func_538(671962088, iParam1);
			func_539(1);
			break;
		case 16:
			func_538(-1836056650, iParam1);
			func_538(-754657922, iParam1);
			func_538(-1752355838, iParam1);
			func_538(-1375324510, iParam1);
			break;
		case 59:
			func_538(-514392105, iParam1);
			func_538(-822060246, iParam1);
			if (func_540(146))
			{
				func_538(1372748575, iParam1);
			}
			func_539(1);
			break;
		case 76:
			func_538(1991352213, iParam1);
			if (func_541() == 0)
			{
				func_538(1852488616, iParam1);
			}
			else
			{
				func_538(-9866350, iParam1);
			}
			break;
		case 44:
			func_538(863852599, iParam1);
			func_538(1228374935, iParam1);
			func_538(1517889050, iParam1);
			func_538(830657578, iParam1);
			func_538(1901354958, iParam1);
			Jump @2197; //curOff = 680
			func_538(-582805654, iParam1);
			func_538(250378940, iParam1);
			func_538(-2143265426, iParam1);
			Jump @2197; //curOff = 716
			func_538(-941494139, iParam1);
			func_538(1641489521, iParam1);
			Jump @2197; //curOff = 741
			func_538(-1829423531, iParam1);
			func_538(-1590504752, iParam1);
			func_538(1357221321, iParam1);
			Jump @2197; //curOff = 777
			func_538(-1037992610, iParam1);
			func_538(-1286414399, iParam1);
			func_539(0);
			Jump @2197; //curOff = 807
			func_538(-1014460309, iParam1);
			func_538(-1030502825, iParam1);
			Jump @2197; //curOff = 832
			func_538(479388090, iParam1);
			func_538(-1396342239, iParam1);
			func_538(-619618632, iParam1);
			Jump @2197; //curOff = 868
			func_538(1193561641, iParam1);
			Jump @2197; //curOff = 882
			func_538(1363960851, iParam1);
			Jump @2197; //curOff = 896
			func_538(-1232453926, iParam1);
			func_538(-882833584, iParam1);
			Jump @2197; //curOff = 921
			func_538(2023205767, iParam1);
			Jump @2197; //curOff = 935
			func_538(-2135286513, iParam1);
			if (func_541() == 0)
			{
				func_538(33799444, iParam1);
			}
			else
			{
				func_538(-161343203, iParam1);
			}
			Jump @2197; //curOff = 982
			func_538(841639693, iParam1);
			func_538(358952323, iParam1);
			Jump @2197; //curOff = 1007
			func_538(852538149, iParam1);
			func_538(689020839, iParam1);
			if (&Global_1357515 == 0)
			{
				func_538(-404049058, iParam1);
			}
			else if (&Global_1357515 == 1)
			{
				func_538(1116039310, iParam1);
			}
			Jump @2197; //curOff = 1073
			func_538(107633428, iParam1);
			func_538(335902282, iParam1);
			func_538(575673055, iParam1);
			func_538(-425944207, iParam1);
			Jump @2197; //curOff = 1120
			func_538(-1941530250, iParam1);
			func_538(1399269304, iParam1);
			func_538(1839684664, iParam1);
			func_538(923168503, iParam1);
			func_538(-1485078322, iParam1);
			Jump @2197; //curOff = 1178
			func_538(574995900, iParam1);
			func_538(-1691275407, iParam1);
			func_538(-1725307861, iParam1);
			Jump @2197; //curOff = 1214
			func_538(-2108383238, iParam1);
			func_538(-1321828931, iParam1);
			func_538(-1632118592, iParam1);
			func_538(334938948, iParam1);
			Jump @2197; //curOff = 1261
			func_538(115823701, iParam1);
			func_538(-1896939736, iParam1);
			func_538(-1830746356, iParam1);
			func_538(-1235169781, iParam1);
			func_539(0);
			Jump @2197; //curOff = 1313
			func_538(1801727621, iParam1);
			if (&Global_1357515 == -1)
			{
				func_538(-999872881, iParam1);
			}
			else if (&Global_1357515 == 0)
			{
				func_538(-1227289741, iParam1);
			}
			else if (&Global_1357515 == 1)
			{
				func_538(-384176140, iParam1);
			}
			Jump @2197; //curOff = 1390
			func_538(1056132658, iParam1);
			Jump @2197; //curOff = 1404
			if (&Global_1357515 == -1)
			{
				func_538(1343889751, iParam1);
			}
			else if (&Global_1357515 == 0)
			{
				func_538(-948326001, iParam1);
			}
			else if (&Global_1357515 == 1)
			{
				func_538(-1374849484, iParam1);
			}
			Jump @2197; //curOff = 1470
			func_538(-1632856601, iParam1);
			if (&Global_1357515 == -1)
			{
				func_538(217772674, iParam1);
			}
			else
			{
				func_538(2071798160, iParam1);
			}
			if (func_542(51))
			{
				func_538(-792802286, iParam1);
			}
			Jump @2197; //curOff = 1537
			func_538(-1972727021, iParam1);
			if (&Global_1357515 == 0)
			{
				func_538(-1444030885, iParam1);
			}
			else if (&Global_1357515 == 1)
			{
				func_538(-1272255787, iParam1);
			}
			else if (&Global_1357515 == 2)
			{
				func_538(1402120602, iParam1);
			}
			Jump @2197; //curOff = 1614
			func_538(-1661934591, iParam1);
			Jump @2197; //curOff = 1628
			func_538(-1713759426, iParam1);
			Jump @2197; //curOff = 1642
			func_538(-314799932, iParam1);
			func_538(-462260432, iParam1);
			func_538(822929377, iParam1);
			if (bParam2 == 1)
			{
				func_538(345256028, iParam1);
				func_538(-1635084094, iParam1);
			}
			else
			{
				func_538(114267347, iParam1);
			}
			Jump @2197; //curOff = 1720
			func_538(615304157, iParam1);
			Jump @2197; //curOff = 1734
			func_538(415434835, iParam1);
			Jump @2197; //curOff = 1748
			func_538(1373465877, iParam1);
			if (func_326((*Global_1347702)[9]->f_15, 1))
			{
				func_538(-2058273527, iParam1);
			}
			Jump @2197; //curOff = 1791
			func_538(451334985, iParam1);
			if (func_541() == 0)
			{
				func_538(-224150200, iParam1);
			}
			else
			{
				func_538(289012628, iParam1);
			}
			Jump @2197; //curOff = 1838
			if (func_541() == 0)
			{
				func_538(-41692120, iParam1);
			}
			else
			{
				func_538(1537840678, iParam1);
			}
			Jump @2197; //curOff = 1874
			func_538(1520478365, iParam1);
			Jump @2197; //curOff = 1888
			if (&Global_1357515 == -1)
			{
				func_538(1842132550, iParam1);
			}
			else
			{
				func_538(-785735240, iParam1);
			}
			func_538(-1605690566, iParam1);
			Jump @2197; //curOff = 1935
			func_538(-731367459, iParam1);
			func_538(224176585, iParam1);
			func_538(-14545580, iParam1);
			Jump @2197; //curOff = 1971
			func_538(1095274522, iParam1);
			Jump @2197; //curOff = 1985
			func_538(-572027988, iParam1);
			Jump @2197; //curOff = 1999
			func_538(1339307101, iParam1);
			func_538(2102267732, iParam1);
			Jump @2197; //curOff = 2024
			func_538(710102686, iParam1);
			Jump @2197; //curOff = 2038
			func_538(-1754368482, iParam1);
			func_538(-2071408557, iParam1);
			Jump @2197; //curOff = 2063
			func_538(-181334543, iParam1);
			Jump @2197; //curOff = 2077
			func_538(-2134669864, iParam1);
			func_538(-548289709, iParam1);
			func_538(-911271922, iParam1);
			func_538(-604455775, iParam1);
			Jump @2197; //curOff = 2124
			func_539(1);
			Jump @2197; //curOff = 2132
			if (func_337())
			{
				if (_journal_can_write_entry(-1478534115))
				{
					func_538(-1286192062, iParam1);
				}
			}
			else if (_journal_can_write_entry(-1286192062))
			{
				func_538(-1478534115, iParam1);
			}
		}

bool func_303()
{
	if (func_22() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == 225514697)
	{
		return true;
	}
	return false;
}

void func_304(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	switch (iParam0)
	{
		case 0:
			func_538(-145926707, iParam1);
			func_538(-604922090, iParam1);
			func_538(-848690769, iParam1);
			break;
		case 1:
			func_538(-1477631591, iParam1);
			break;
		case 2:
			func_538(76112544, iParam1);
			break;
		case 9:
			func_538(1396404308, iParam1);
			func_538(-1357381228, iParam1);
			if (func_326((*Global_1835011)[69]->f_1, 1))
			{
				func_538(1902679064, iParam1);
			}
			else
			{
				func_538(-2146422425, iParam1);
			}
			break;
		case 22:
			func_538(-1534761730, iParam1);
			break;
		case 26:
			if (bParam3 == 1)
			{
				func_538(-1934184559, iParam1);
				func_538(1281755988, iParam1);
			}
			else
			{
				func_538(-1745220872, iParam1);
				func_538(-1044976796, iParam1);
			}
			break;
		case 29:
			if (bParam3 == 1)
			{
				func_538(-1641504538, iParam1);
				func_538(-988014485, iParam1);
			}
			else if (func_540(26))
			{
				func_538(-343043950, iParam1);
				func_538(-640062214, iParam1);
			}
			else
			{
				func_538(-1272028496, iParam1);
			}
			break;
		case 32:
			if (bParam3 == 1)
			{
				if (&Global_1357515 == -1)
				{
					func_538(-1816782797, iParam1);
				}
				else if (&Global_1357515 == 0)
				{
					func_538(-176175898, iParam1);
				}
				else if (&Global_1357515 == 1)
				{
					func_538(1711460080, iParam1);
				}
				else if (&Global_1357515 == 2)
				{
					func_538(-2108576508, iParam1);
				}
				else if (&Global_1357515 == 3)
				{
					func_538(-1103692224, iParam1);
				}
				else if (&Global_1357515 == 4)
				{
					func_538(1301690984, iParam1);
				}
			}
			else
			{
				func_538(699457343, iParam1);
				if (&Global_1357515 == -1)
				{
					func_538(-908444626, iParam1);
				}
				else if (&Global_1357515 == 0)
				{
					func_538(-1475448104, iParam1);
				}
				else if (&Global_1357515 == 1)
				{
					func_538(1727640249, iParam1);
				}
				else if (&Global_1357515 == 2)
				{
					func_538(-2050867743, iParam1);
				}
				else if (&Global_1357515 == 3)
				{
					func_538(-996445915, iParam1);
				}
				else if (&Global_1357515 == 4)
				{
					func_538(-1868882771, iParam1);
				}
			}
			break;
		case 35:
			if (bParam3 == 1)
			{
				func_538(-754570528, iParam1);
			}
			else
			{
				func_538(1690083163, iParam1);
			}
			break;
		case 36:
			if (bParam3 == 1)
			{
				func_538(-2072125821, iParam1);
			}
			else
			{
				func_538(270040030, iParam1);
			}
			break;
		case 37:
			func_538(-870030001, iParam1);
			break;
		case 53:
			if (bParam3 == 1)
			{
				func_538(-505314737, iParam1);
				func_538(-1853052860, iParam1);
			}
			else
			{
				func_538(-1975624994, iParam1);
				func_538(1648135852, iParam1);
			}
			break;
		case 54:
			if (bParam3 == 1)
			{
				func_538(1690231002, iParam1);
			}
			else
			{
				func_538(517031924, iParam1);
			}
			break;
		case 55:
			if (bParam3 == 1)
			{
				func_538(1225386280, iParam1);
			}
			else if (func_540(54))
			{
				func_538(-283235773, iParam1);
			}
			else
			{
				func_538(701962369, iParam1);
			}
			break;
		case 38:
			if (bParam3 == 1)
			{
				func_538(1355398007, iParam1);
			}
			else
			{
				func_538(-1900349467, iParam1);
			}
			break;
		case 39:
			if (bParam3 == 1)
			{
				func_538(574636806, iParam1);
			}
			else
			{
				func_538(-196256251, iParam1);
			}
			break;
		case 40:
			if (bParam3 == 1)
			{
				func_538(821118338, iParam1);
			}
			else if (func_540(39))
			{
				func_538(846829260, iParam1);
			}
			else
			{
				func_538(-1212247553, iParam1);
			}
			break;
		case 43:
			if (bParam3 == 1)
			{
				if (func_360((*Global_1835011)[33]->f_1) == 1)
				{
					func_538(1422779093, iParam1);
				}
				else
				{
					func_538(-1769536986, iParam1);
				}
			}
			else
			{
				func_538(-600786233, iParam1);
			}
			break;
		case 45:
			if (bParam3 == 1)
			{
				func_538(352134789, iParam1);
			}
			else if (func_540(43))
			{
				func_538(260723113, iParam1);
			}
			else
			{
				func_538(1080243038, iParam1);
			}
			break;
		case 41:
			if (bParam3 == 1)
			{
				func_538(-457958799, iParam1);
			}
			else
			{
				func_538(2076458086, iParam1);
			}
			break;
		case 42:
			if (func_540(41))
			{
				func_538(-546824600, iParam1);
			}
			else
			{
				func_538(-308364587, iParam1);
			}
			break;
		case 49:
			if (bParam3 == 1)
			{
				func_538(1297261593, iParam1);
			}
			else
			{
				func_538(1940089142, iParam1);
			}
			break;
		case 50:
			if (bParam3 == 1)
			{
				func_538(2068484886, iParam1);
			}
			else if (func_540(49))
			{
				func_538(-1489080639, iParam1);
				func_538(-2102244050, iParam1);
			}
			else
			{
				func_538(-1863040467, iParam1);
			}
			break;
		case 51:
			func_538(-2055943209, iParam1);
			break;
		case 58:
			if (func_326((*Global_1347702)[23]->f_15, 1))
			{
				func_538(1650066845, iParam1);
			}
			else
			{
				func_538(151370023, iParam1);
			}
			func_538(1426057961, iParam1);
			func_538(476379584, iParam1);
			break;
		case 59:
			func_538(-1638117866, iParam1);
			break;
		case 62:
			func_538(199541730, iParam1);
			break;
		case 63:
			func_538(1703485804, iParam1);
			func_538(-800449045, iParam1);
			break;
		case 65:
			func_538(-1678210868, iParam1);
			func_538(-1448238026, iParam1);
			func_538(-1200864845, iParam1);
			func_538(1473511536, iParam1);
			break;
		case 66:
			func_538(-1774490051, iParam1);
			func_538(-34645921, iParam1);
			func_538(174027075, iParam1);
			func_538(-1155999, iParam1);
			func_539(1);
			break;
		case 67:
			func_538(701612593, iParam1);
			func_538(-1069631343, iParam1);
			func_538(1673428882, iParam1);
			break;
		case 68:
			func_538(-739133286, iParam1);
			func_538(-2130089358, iParam1);
			func_538(2056190391, iParam1);
			func_538(1941753817, iParam1);
			func_539(0);
			break;
		case 70:
			func_538(-1217555753, iParam1);
			break;
		case 71:
			func_538(697048821, iParam1);
			break;
		case 73:
			func_538(-553148661, iParam1);
			break;
		case 75:
			func_538(1349250531, iParam1);
			break;
		case 77:
			if (bParam3 == 1)
			{
				func_538(1414263863, iParam1);
			}
			else
			{
				func_538(-1772294468, iParam1);
			}
			break;
		case 79:
			if (bParam3 == 1)
			{
				func_538(1835465936, iParam1);
				func_538(523715611, iParam1);
			}
			else if (func_540(78))
			{
				func_538(1420338873, iParam1);
			}
			else
			{
				func_538(-46362051, iParam1);
			}
			break;
		case 80:
			if (bParam3 == 1)
			{
				func_538(10180941, iParam1);
			}
			else if (func_540(79))
			{
				func_538(768420635, iParam1);
			}
			else
			{
				func_538(-1734012650, iParam1);
			}
			break;
		case 85:
			if (bParam3 == 1)
			{
				func_538(-383601523, iParam1);
			}
			else
			{
				func_538(1004812390, iParam1);
			}
			break;
		case 86:
			if (bParam3 == 1)
			{
				func_538(1606472408, iParam1);
			}
			else
			{
				func_538(1405690220, iParam1);
			}
			break;
		case 87:
			if (bParam3 == 1)
			{
				func_538(-203571927, iParam1);
			}
			else
			{
				func_538(640033630, iParam1);
			}
			break;
		case 88:
			if (bParam3 == 1)
			{
				func_538(729886222, iParam1);
			}
			else
			{
				func_538(-158717807, iParam1);
			}
			break;
		case 89:
			if (bParam3 == 1)
			{
				func_538(-714816362, iParam1);
			}
			else
			{
				func_538(1160146336, iParam1);
			}
			break;
		case 92:
			if (bParam3 == 1)
			{
				func_538(-932932179, iParam1);
				func_538(-1458537240, iParam1);
			}
			else
			{
				func_538(-1764383885, iParam1);
				func_538(894349517, iParam1);
			}
			break;
		case 93:
			if (bParam3 == 1)
			{
				func_538(1741466706, iParam1);
			}
			else
			{
				func_538(1405815775, iParam1);
			}
			break;
		case 94:
			func_538(1163067702, iParam1);
			if (&Global_1357515 == -1)
			{
				func_538(1905280979, iParam1);
			}
			else
			{
				func_538(-1966245299, iParam1);
			}
			func_538(721468880, iParam1);
			break;
		case 99:
			func_538(800644248, iParam1);
			break;
		case 101:
			if (bParam3 == 1)
			{
				func_538(1502176860, iParam1);
				if (&Global_1357515 == -1)
				{
					func_538(-1117781095, iParam1);
				}
				else
				{
					func_538(-618709225, iParam1);
				}
			}
			else if (&Global_1357515 == -1)
			{
				func_538(141494548, iParam1);
			}
			else
			{
				func_538(-633957459, iParam1);
			}
			break;
		case 102:
			if (bParam3 == 1)
			{
				func_538(-369525697, iParam1);
			}
			else if (func_540(101))
			{
				func_538(1595015219, iParam1);
			}
			else
			{
				func_538(-321486961, iParam1);
			}
			break;
		case 103:
			func_538(1422724221, iParam1);
			break;
		case 104:
			if (bParam3 == 1)
			{
				func_538(793460477, iParam1);
				func_538(-1610242176, iParam1);
			}
			else if (func_540(103))
			{
				func_538(1830897187, iParam1);
			}
			else
			{
				func_538(1419017828, iParam1);
			}
			break;
		case 105:
			if (bParam3 == 1)
			{
				func_538(1528309077, iParam1);
			}
			else if (func_540(104))
			{
				func_538(1864966105, iParam1);
			}
			else
			{
				func_538(-103336013, iParam1);
			}
			break;
		case 108:
			func_538(1175579551, iParam1);
			break;
		case 109:
			if (bParam3 == 1)
			{
				func_538(-1123227713, iParam1);
				func_538(-889574341, iParam1);
			}
			else
			{
				func_538(2065385917, iParam1);
				func_538(780305039, iParam1);
			}
			break;
		case 110:
			if (bParam3 == 1)
			{
				func_538(-887421691, iParam1);
			}
			else if (func_540(109))
			{
				func_538(-1318117949, iParam1);
			}
			else
			{
				func_538(1632244327, iParam1);
			}
			break;
		case 111:
			if (bParam3 == 1)
			{
				if (&Global_1357515 == 0)
				{
					func_538(284822762, iParam1);
				}
				else
				{
					func_538(-1425017554, iParam1);
				}
			}
			else if (func_540(110))
			{
				if (&Global_1357515 == 0)
				{
					func_538(553087292, iParam1);
				}
				else
				{
					func_538(-1766870331, iParam1);
					func_538(1971788022, iParam1);
				}
			}
			else if (&Global_1357515 == 0)
			{
				func_538(-1980598735, iParam1);
			}
			else
			{
				func_538(-442732098, iParam1);
				func_538(1955756409, iParam1);
			}
			break;
		case 115:
			func_538(394303528, iParam1);
			func_538(-2040171028, iParam1);
			break;
		case 143:
			if (bParam3 == 1)
			{
				func_538(1182403394, iParam1);
			}
			else
			{
				func_538(-2116547899, iParam1);
			}
			break;
		case 144:
			if (bParam3 == 1)
			{
				func_538(924445424, iParam1);
			}
			else
			{
				func_538(1227062271, iParam1);
			}
			break;
		case 117:
			if (bParam3 == 1)
			{
				func_538(430755273, iParam1);
				func_538(-1473879802, iParam1);
			}
			else
			{
				func_538(1121266049, iParam1);
			}
			break;
		case 118:
			if (bParam3 == 1)
			{
				func_538(73885747, iParam1);
			}
			else if (func_540(117))
			{
				func_538(1559707913, iParam1);
			}
			else
			{
				func_538(926897873, iParam1);
			}
			break;
		case 119:
			if (bParam3 == 1)
			{
				func_538(-2103887972, iParam1);
			}
			else if (func_540(118))
			{
				func_538(-435828462, iParam1);
			}
			else
			{
				func_538(-516020583, iParam1);
			}
			break;
		case 121:
			if (bParam3 == 1)
			{
				func_538(2054486196, iParam1);
			}
			else
			{
				func_538(1809320262, iParam1);
			}
			break;
		case 122:
			if (bParam3 == 1)
			{
				func_538(-570086056, iParam1);
			}
			else if (func_540(121))
			{
				func_538(32337856, iParam1);
			}
			else
			{
				func_538(-206811842, iParam1);
			}
			break;
		case 124:
			if (bParam3 == 1)
			{
				func_538(813493663, iParam1);
			}
			else if (func_540(122))
			{
				func_538(-2132763590, iParam1);
			}
			else
			{
				func_538(477901035, iParam1);
			}
			break;
		case 125:
			if (bParam3 == 1)
			{
				func_538(-66240572, iParam1);
				func_538(1563075046, iParam1);
			}
			else
			{
				func_538(-787011772, iParam1);
				func_538(-1523377438, iParam1);
			}
			break;
		case 127:
			func_538(61020800, iParam1);
			break;
		case 129:
			func_538(428985222, iParam1);
			break;
		case 131:
			func_538(-1393851036, iParam1);
			break;
		case 133:
			func_538(1559531342, iParam1);
			break;
		case 134:
			func_538(-718846442, iParam1);
			break;
		case 135:
			if (bParam3 == 1)
			{
				if (&Global_1357515 == -1)
				{
					func_538(-1374407408, iParam1);
				}
				else
				{
					func_538(471210931, iParam1);
				}
			}
			else if ((_journal_can_write_entry(1732474719) && _journal_can_write_entry(801682048)) && _journal_can_write_entry(-1986404392))
			{
				if (&Global_1357515 == -1)
				{
					func_538(-472672138, iParam1);
				}
				else
				{
					func_538(-2132098614, iParam1);
				}
			}
			else if (&Global_1357515 == -1)
			{
				func_538(-1678710489, iParam1);
			}
			else
			{
				func_538(1522210661, iParam1);
			}
			break;
		case 136:
			if (bParam3 == 1)
			{
				func_538(1717582460, iParam1);
			}
			else
			{
				func_538(343644664, iParam1);
			}
			break;
		case 137:
			if (bParam3 == 1)
			{
				func_538(1568112362, iParam1);
				func_538(1388317526, iParam1);
			}
			else if (func_540(136))
			{
				func_538(-1597534828, iParam1);
				func_538(-1207918353, iParam1);
			}
			else
			{
				func_538(-1940891082, iParam1);
				func_538(-598277294, iParam1);
			}
			break;
		case 142:
			if (bParam2 == 1)
			{
				func_538(448334530, iParam1);
				func_538(2145375502, iParam1);
			}
			else
			{
				func_538(-1891994685, iParam1);
			}
			break;
		case 146:
			if (bParam3 == 1)
			{
				if (&Global_1357515 == 1)
				{
					func_538(1159121660, iParam1);
				}
				else if (&Global_1357515 == 0)
				{
					func_538(-1968554187, iParam1);
				}
			}
			else if (&Global_1357515 == 1)
			{
				func_538(841927377, iParam1);
			}
			else if (&Global_1357515 == 0)
			{
				func_538(848633571, iParam1);
			}
			break;
		case 147:
			if (bParam3 == 1)
			{
				func_538(-66616327, iParam1);
			}
			else
			{
				func_538(1978361607, iParam1);
			}
			break;
		case 148:
			if (bParam3 == 1)
			{
				func_538(1862916706, iParam1);
			}
			else if (func_540(147))
			{
				func_538(675105199, iParam1);
			}
			else
			{
				func_538(-1993800776, iParam1);
			}
			break;
		case 149:
			if (bParam3 == 1)
			{
				func_538(174409701, iParam1);
			}
			else if (func_540(148))
			{
				func_538(-1730895475, iParam1);
			}
			else
			{
				func_538(-342396910, iParam1);
			}
			break;
		case 150:
			if (bParam3 == 1)
			{
				func_538(1295237052, iParam1);
			}
			else if (func_540(149))
			{
				func_538(-788577684, iParam1);
			}
			else
			{
				func_538(1527015024, iParam1);
			}
			break;
		default:
			break;
	}
}

int func_305(int iParam0, var uParam1, int iParam2)
{
	*uParam1 = 1137976064;
	*iParam2 = -1;
	iVar0 = func_194(iParam0);
	switch (iVar0)
	{
		case 1:
			iVar1 = func_482(iParam0);
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
					if (func_360((*Global_1835011)[9]->f_1) == 0)
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
			iVar2 = func_271(iParam0);
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
			iVar3 = func_271(iParam0);
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

int func_306(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
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
	iVar2 = func_543(iParam0);
	iVar3 = func_544(iParam0);
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
				iVar1 = func_284();
				func_333(&iVar1, 0, 0, iParam3, 0, 0, 0, 0);
			}
			else
			{
				iVar1 = -15;
			}
			Global_40.f_4283.f_6[iVar0]->f_1 = iVar1;
			Global_40.f_4283.f_6[iVar0]->f_4 = iVar2;
			func_545(iParam0, 1);
			if (func_546(iVar2))
			{
				iVar4 = 0;
				while (iVar4 < 60)
				{
					if (Global_40.f_4283.f_6[iVar4]->f_4 == iVar2 && &Global_40.f_4283.f_6[iVar4] != iParam0)
					{
						func_547(Global_40.f_4283.f_6[iVar4], 1, 0);
					}
					iVar4++;
				}
			}
			if (bParam5)
			{
				if (bParam6)
				{
					func_548(1, iParam0);
				}
				else
				{
					func_549(1, iParam0);
				}
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_307(int iParam0, int iParam1)
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

int func_308(int iParam0, int iParam1, int iParam2)
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

void func_309(bool bParam0)
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

void func_310(int iParam0, int iParam1, bool bParam2)
{
	iVar0 = iParam0 * 1000;
	if ((iVar0 + get_game_timer()) > Global_1327479->f_4)
	{
		func_550(iParam0, iParam1, bParam2);
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

int func_311(int iParam0, int iParam1)
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

bool func_312(int iParam0)
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

void func_313(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, bool bParam5, float fParam6, bool bParam7)
{
	if (func_22() != -1)
	{
		return;
	}
	if ((Global_36616 && func_551(iParam1)) != 0)
	{
		return;
	}
	iVar0 = func_552(iParam0);
	iVar0 = round((IntToFloat(iVar0) * fParam6));
	if ((((((iParam1 != 1142025875 && iParam1 != 1587891565) && iParam1 != -643014279) && iParam1 != -597116214) && iParam1 != 551416228) && iParam1 != -735200598) && iParam1 != -2010847721)
	{
		func_553(iVar0, 0, iParam0, iParam1, sParam3, iParam4, bParam5, bParam7);
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
			func_554(iVar1, iVar0, iParam0, iParam1, iParam4, bParam5);
		}
		else
		{
			func_553(iVar0, 1, iParam0, iParam1, sParam3, iParam4, bParam5, 0);
		}
	}
}

int func_314(int iParam0)
{
	if (!func_189(iParam0))
	{
		return -1;
	}
	return func_555(func_457(iParam0));
}

int func_315(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return 120;
	}
	return 60;
}

void func_316()
{
	_sc_feed_submit_preset_message(2, 1);
	if (is_orbis_version())
	{
		iVar0 = func_556(13);
		(*Global_1898441)[iVar0] = 13;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_WIN2_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_WIN2_COM", 24);
	}
}

bool func_317(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
{
	if (!func_557(iParam0, 0))
	{
		return false;
	}
	if (!func_558(iParam0, iParam1, bParam2, iParam5))
	{
		return false;
	}
	if (!func_559(iParam0, &iVar0, iParam1))
	{
		return false;
	}
	func_560(iParam0, bParam2);
	iVar2 = 0;
	if (func_561(iParam0, 0, 0) == 0)
	{
		if (func_562(iParam0))
		{
			iVar5 = func_563(iParam0);
			iVar6 = func_564(iVar5);
			iVar7 = func_565(iVar6) + 1;
			func_566(iVar5);
			if (func_567(38))
			{
				func_324(483, 0);
			}
			else
			{
				func_324(482, 0);
			}
			if (iVar7 == func_568(iVar6))
			{
				func_317(func_569(iVar6), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				if (func_398() && func_570(4))
				{
					if (func_398() && (func_571(38) || func_567(38)))
					{
						func_573(38, func_569(iVar6), 0, 0, func_572(), 0, -1, 0);
						func_574(2);
					}
					else
					{
						func_573(38, func_569(iVar6), 0, 0, func_572(), 0, -1, 0);
						func_574(1);
					}
				}
			}
			else if (func_398() && func_570(4))
			{
				if (func_398() && (func_571(38) || func_567(38)))
				{
					func_573(38, 0, 0, 0, func_572(), 0, -1, 0);
					func_574(2);
				}
				else
				{
					func_573(38, 0, 0, 0, func_572(), 0, -1, 0);
					func_574(1);
				}
			}
			if (func_398() && func_570(4))
			{
				if (!Global_1914319->f_17376)
				{
					if (func_398() && (func_571(38) || func_567(38)))
					{
						func_575(38, _0x13aaecda43318bfe(-2076669067, iVar6), _0xd52d20b0c76bb26d(-2076669067, iVar6), iVar7, 12, 0, iVar6);
					}
					else
					{
						func_575(38, get_hash_key("toast_log_blips"), get_hash_key("BLIP_RC_COLLECTABLE_CIGCARD"), iVar7, 12, 0, iVar6);
					}
				}
			}
		}
	}
	if (func_576(iParam0) == -1037537535)
	{
		if ((!func_577(iParam0, 866047851) && !func_577(iParam0, -1979000645)) && !func_577(iParam0, 1248798204))
		{
			bVar3 = true;
		}
	}
	if (func_578(iParam0, 8388608) && !func_579(28))
	{
		func_580(28);
	}
	if (!bVar3)
	{
		if (func_577(iParam0, -1588156645))
		{
			bParam2 = true;
			bVar4 = true;
			if (func_581(iParam0) == -1447088266)
			{
				iVar1 = func_583(func_582(iParam0, 1), 0);
				if (is_weapon_valid(iVar1))
				{
					if (func_22() == -1)
					{
						func_584(iVar1);
					}
					if (func_585(0) && func_586(iVar1, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_587(iParam0, iVar0, iParam5);
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
					if (func_22() == -1)
					{
						func_584(iParam0);
					}
					if (func_585(0) && func_586(iParam0, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_587(iVar1, iVar0, iParam5);
						if (!bParam9)
						{
							bParam2 = false;
						}
					}
				}
			}
		}
		else if (func_576(iParam0) == -427144552)
		{
			if (!func_588(iParam0, iParam5, &bParam2, bParam3, bParam4))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_576(iParam0) == 307971639 && func_589(iParam0))
		{
			if (!func_590(iParam0, &iVar0, iParam5))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_577(iParam0, 866047851))
		{
			func_591(iParam0);
		}
		else if (func_577(iParam0, 2000026003))
		{
			func_592(iParam0);
		}
		else if (func_577(iParam0, -103750053))
		{
			func_97(func_593(-1019857971), iVar0);
		}
		else if (iParam0 == 2093098109)
		{
			func_97(func_594(-717883113, 2091222383), iVar0);
		}
		else if (func_577(iParam0, -121341956) && !func_577(iParam0, 606799272))
		{
			if (iParam0 != 191707516 && iParam0 != 1993672959)
			{
				if (func_326((*Global_1835011)[4]->f_1, 1))
				{
					func_324(498, 0);
				}
			}
			if (func_577(iParam0, -2017733358) || func_577(iParam0, -1369131378))
			{
				func_595(iParam0);
			}
		}
		else if (func_577(iParam0, -136654233))
		{
			if (func_577(iParam0, -1021472396))
			{
			}
		}
		else if (func_577(iParam0, -1466706512) && func_577(iParam0, 1147021565))
		{
			func_324(484, 0);
		}
		else if (func_577(iParam0, 1147021565) && func_577(iParam0, -524514947))
		{
		}
		else if (func_577(iParam0, 554195525))
		{
		}
		else if (func_577(iParam0, 589988438))
		{
			if (func_596())
			{
				func_597(1339418451, 0, 1065353216, 1, 0, 0, 0, -1);
				bParam2 = true;
				bVar4 = true;
			}
		}
		else if (func_577(iParam0, 787083290) && func_577(iParam0, 949916894))
		{
			func_598(iParam0);
		}
		else if (func_577(iParam0, -1718133314))
		{
			func_599(iParam0);
		}
		else if (func_577(iParam0, -1738650224))
		{
			func_600(iParam0);
		}
		else if (func_577(iParam0, -1112814642) && func_577(iParam0, 949916894))
		{
			func_601(iParam0);
		}
		else if (iParam0 == -569063887)
		{
			Global_1935496->f_20 = 0;
		}
		else if (func_577(iParam0, 1841149704))
		{
			func_602();
		}
		else if (func_577(iParam0, 606799272))
		{
			func_603(iParam0, iParam1);
			func_604(iParam0);
		}
		else if (func_577(iParam0, -1112814642) && func_577(iParam0, -1697809989))
		{
			func_605(iParam0, 0, 0, 0);
		}
		else if (func_577(iParam0, -2017733358) || func_577(iParam0, -1369131378))
		{
			func_595(iParam0);
		}
		else if (func_577(iParam0, -1921346699))
		{
			if (func_22() != -1)
			{
				return false;
			}
			func_606(iParam0, iParam5, iParam8);
			bParam2 = true;
		}
		else if (func_577(iParam0, 1192444843))
		{
			switch (iParam0)
			{
				case 1815744868:
					if (!func_346(215778062, 1, 0))
					{
						func_317(215778062, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 1334018438:
					if (!func_346(670273567, 1, 0))
					{
						func_317(670273567, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 1055480217:
					if (!func_346(-967317137, 1, 0))
					{
						func_317(-967317137, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case -978159653:
					if (!func_346(526074061, 1, 0))
					{
						func_317(526074061, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 2100131425:
					if (!func_346(-1045488665, 1, 0))
					{
						func_317(-1045488665, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case -2041382104:
					if (!func_346(471514780, 1, 0))
					{
						func_317(471514780, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
			}
		}
		else if (func_577(iParam0, -839724752) && func_578(iParam0, 4))
		{
			if (!func_567(42))
			{
				func_607(iParam0);
			}
		}
		else if (func_577(iParam0, 1399091007))
		{
			func_608(iParam0, &iVar2);
			bParam2 = true;
			bVar4 = true;
		}
		else if (func_577(iParam0, 1248798204))
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
				func_317(iVar8, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_580(24);
				if (&Global_1946804->f_1497.f_1[27] == &Global_1946804->f_57[27])
				{
					func_609(player_ped_id(), -1185145312, 0, 99217379, 1, 1, 1, 0, 1, 0);
				}
				if (func_610(&iVar9, 0))
				{
					func_586(iVar9, 0, 0, bParam4, 3, 0, 752097756, 0);
				}
				break;
			case 1171350303:
				if (func_22() == -1 && &Global_1946804->f_1497.f_1[25] == &Global_1946804->f_57[25])
				{
					func_609(player_ped_id(), 1171350303, 0, 673166414, 1, 1, 1, 0, 1, 0);
				}
				break;
			case -160924582:
				break;
			case 2131771850:
				func_324(415, 0);
				Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
				func_611();
				Global_40.f_11095.f_61 = (Global_40.f_11095.f_61 + 0.1f);
				func_612();
				Global_40.f_11095.f_55 = (Global_40.f_11095.f_55 + 0.1f);
				Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
				Global_40.f_11095.f_56 = (Global_40.f_11095.f_56 + 0.1f);
				Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
				func_613();
				Global_40.f_11095.f_63 = (Global_40.f_11095.f_63 + 0.1f);
				func_614();
				Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
				Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
				Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
				func_615();
				break;
			case -102111672:
				bParam2 = true;
				bVar4 = true;
				break;
			case -1937935584:
				func_616(499813453, 854119837, 0);
				func_617(499813453, 0);
				func_618(1);
				break;
			case 2127812557:
				func_616(499813453, -1292544588, 0);
				func_617(499813453, 0);
				func_618(2);
				break;
			case 808991383:
				func_616(499813453, -1003325394, 0);
				func_617(499813453, 0);
				func_618(4);
				break;
			case 1134518629:
				func_616(666607663, -335460405, 0);
				func_617(666607663, 0);
				func_619(1);
				break;
			case 902940106:
				func_616(666607663, 903797617, 0);
				func_617(666607663, 0);
				func_619(2);
				break;
			case -418174898:
				func_616(666607663, 669728650, 0);
				func_617(666607663, 0);
				func_619(4);
				break;
			case -648114971:
				func_616(-220219788, 1214120047, 0);
				func_617(-220219788, 0);
				func_620(1);
				break;
			case 211153747:
				func_616(-220219788, 655769340, 0);
				func_617(-220219788, 0);
				func_620(2);
				break;
			case -32876996:
				func_616(-220219788, 885316185, 0);
				func_617(-220219788, 0);
				func_620(4);
				break;
			case 1191437462:
				func_616(218622660, -1491419385, 0);
				func_617(218622660, 0);
				func_621(1);
				break;
			case 1119149048:
				func_616(218622660, 1809565830, 0);
				func_617(218622660, 0);
				func_621(2);
				break;
			case 506073827:
				func_616(390004462, -628873767, 0);
				func_617(390004462, 0);
				func_622(1);
				break;
			case -1876986168:
				func_616(390004462, -405421956, 0);
				func_617(390004462, 0);
				func_622(2);
				break;
			case 2142623221:
				func_616(390004462, -1108972386, 0);
				func_617(390004462, 0);
				func_622(4);
				break;
			case 1508215381:
				func_616(6410548, 1053716392, 0);
				func_617(6410548, 0);
				func_623(1);
				break;
			case -888935280:
				func_616(6410548, 806507056, 0);
				func_617(6410548, 0);
				func_623(2);
				break;
			case -1252474566:
				func_616(6410548, 1571925350, 0);
				func_617(6410548, 0);
				func_623(4);
				break;
			case -1465702449:
				func_616(6410548, 1330352282, 0);
				func_617(6410548, 0);
				func_623(8);
				break;
			case -21093309:
				func_625(242, func_624(-21093309), 0);
				break;
			case 204375141:
				func_625(240, func_624(204375141), 0);
				break;
			case -417963070:
				func_625(241, func_624(-417963070), 0);
				break;
			case -1080874779:
			case -755485480:
			case 230530039:
			case 299161628:
				if (get_game_timer() >= (Global_1935689->f_10197 + 60000))
				{
					func_626(594, 1934060482, 1, 1);
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
					func_626(594, 1110018439, 1, 1);
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
					func_626(594, 1408511260, 1, 1);
					Global_1935689->f_10197 = get_game_timer();
				}
				break;
			case -1976480343:
			case -953313786:
			case 730856618:
				if (get_game_timer() >= (Global_1935689->f_10197 + 60000))
				{
					func_626(594, -1228016946, 1, 1);
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
					func_626(595, -103579, 1, 1);
					Global_1935689->f_10197 = get_game_timer();
				}
				break;
			case -1977068039:
			case -399865011:
				if (get_game_timer() >= (Global_1935689->f_10197 + 60000))
				{
					func_626(595, -1531530025, 1, 1);
					Global_1935689->f_10197 = get_game_timer();
				}
				break;
			case 80178851:
				func_324(488, 0);
				break;
			case 1613651027:
				func_324(491, 0);
				break;
			case -885810591:
				func_324(485, 0);
				if ((get_random_int_in_range(0, 65536) % 3) == 0)
				{
					func_317(func_627(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				else
				{
					func_317(func_628(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				break;
			case -601932535:
				if (func_579(1))
				{
					func_324(487, 0);
				}
				break;
			case -898386032:
				func_324(486, 0);
				break;
			case -2035110427:
				if (func_22() == -1)
				{
					iParam0 = -1448210800;
				}
				break;
			case 1510719693:
				func_324(496, 0);
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
		func_629(&iVar10);
		if (!func_630(iVar10, iVar0, iParam5))
		{
			return false;
		}
		else if (!func_585(0))
		{
			return true;
		}
		if (func_576(iParam0) == -1037537535)
		{
			func_631(iParam0);
		}
		if (func_577(iParam0, -1979000645))
		{
			func_632(iParam0);
		}
	}
	else if (iVar2 != 0)
	{
		if (func_585(0))
		{
			Var11.f_1 = 10;
			Var11.f_12 = 10;
			_0x48e4d50f87a96aa5(Global_35, 0, 0, iVar2, &Var11, 0);
			iVar34 = 0;
			while (iVar34 < Var11)
			{
				func_317(&(Var11.f_1[iVar34]), &(Var11.f_12[iVar34]), 0, 0, 0, -897553835, 0, 0, 0, 0);
				iVar34++;
			}
		}
		else
		{
			func_633(iVar2, 0);
		}
	}
	Var35 = { func_634(iParam0) };
	if (_stat_id_is_valid(&Var35))
	{
		_0x6a0184e904cdf25e(&Var35, iVar0);
	}
	func_635(iParam0);
	if (fParam6 > 0f)
	{
		if (func_577(iParam0, -839724752))
		{
			func_636(iParam0, fParam6);
		}
	}
	else if (!bParam2)
	{
		bVar37 = iParam5 == 1248274121;
		func_637(iParam0, iVar0, 0, bVar37, 0);
	}
	return true;
}

void func_318(int iParam0)
{
	if (func_577(iParam0, 1989861793))
	{
		iVar0 = func_638(iParam0, 1697966752);
		if (iVar0 != 0)
		{
			Var3 = { func_639(-1591664384, -1591664384, 0, 0, 0, 0, -1, iVar0, 0) };
			if (func_640(Var3, &iVar1, &iVar2, 0))
			{
				bVar13 = false;
				iVar14 = 0;
				while (iVar14 < iVar2)
				{
					iVar15 = func_641(iVar14, iVar1);
					if (iVar15 != iParam0 && func_557(iVar15, 0))
					{
						if (func_642(iVar15, 0, 0, 1, 0))
						{
							bVar13 = true;
						}
					}
					iVar14++;
				}
				func_643(iVar1);
				if (bVar13)
				{
					func_644(iParam0);
				}
				else
				{
					func_324(306, 0);
				}
			}
		}
	}
}

void func_319()
{
	if (func_22() != -1)
	{
		return;
	}
	func_645();
	func_646();
	func_647();
	func_648();
	func_649();
	func_650();
	func_651();
}

void func_320(int iParam0)
{
	func_652(iParam0, 1, 1, -142743235, 1);
	if (func_653(iParam0))
	{
		func_654(iParam0, 1, 1);
	}
	bVar3 = false;
	bVar7 = false;
	iVar8 = func_656(func_655(iParam0), 1);
	if (iVar8 >= 39)
	{
		bVar7 = true;
	}
	func_657(-2124052603);
	iVar1 = 0;
	while (iVar1 < 39)
	{
		vVar4.x = &Global_1946804->f_57[iVar1];
		*Global_1946804->f_1616.f_1[iVar1] = { vVar4 };
		Global_1946804->f_1616.f_1[iVar1]->f_2 = (Global_1946804->f_1497.f_1[iVar1]->f_2 || Global_1946804->f_1378.f_1[iVar1]->f_2);
		iVar1++;
	}
	if (func_658() == -2125499975)
	{
		iVar2 = 2020890174;
	}
	else
	{
		iVar2 = 1105329772;
	}
	func_659(&(Global_1946804->f_1616), iVar2, &uVar9, 1, 0, 0, 0);
	func_659(&(Global_1946804->f_1616), 211609491, &uVar9, 1, 0, 0, 0);
	*Global_1946804->f_1616.f_1[8] = { func_660(8, 0) };
	*Global_1946804->f_1616.f_1[9] = { func_660(9, 0) };
	*Global_1946804->f_1616.f_1[0] = { func_660(0, 0) };
	*Global_1946804->f_1616.f_1[2] = { func_660(2, 0) };
	*Global_1946804->f_1616.f_1[3] = { func_660(3, 0) };
	*Global_1946804->f_1616.f_1[1] = { func_660(1, 0) };
	*Global_1946804->f_1616.f_1[5] = { func_660(5, 0) };
	*Global_1946804->f_1616.f_1[6] = { func_660(6, 0) };
	*Global_1946804->f_1616.f_1[7] = { func_660(7, 0) };
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (bVar7)
		{
			iVar8 = 0;
			while (iVar8 < 39)
			{
				if (iParam0 == func_661(iVar8, iVar0))
				{
					func_662(Global_1946804->f_1616.f_1[iVar8], iVar8, iVar0);
				}
				else
				{
					iVar8++;
				}
			}
		}
		else if (iParam0 == func_661(iVar8, iVar0))
		{
			func_662(Global_1946804->f_1616.f_1[iVar8], iVar8, iVar0);
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

void func_321()
{
	iVar5 = 16;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		iVar1 = func_661(iVar5, iVar0);
		if (iVar1 == &Global_1946804->f_57[iVar5] || iVar1 == 0)
		{
			if (func_658() == -2125499975 || func_658() == -449205311)
			{
				vVar2.x = -2018863109;
				vVar2.f_1 = 1530758430;
				func_662(&vVar2, iVar5, iVar0);
			}
			else
			{
				vVar2.x = 1734931872;
				vVar2.f_1 = 1155669136;
				func_662(&vVar2, iVar5, iVar0);
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

void func_322()
{
	_sc_feed_submit_preset_message(2, 2);
	if (is_orbis_version())
	{
		iVar0 = func_556(14);
		(*Global_1898441)[iVar0] = 14;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_MUD1_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_MUD1_COM", 24);
	}
}

char* func_323(int iParam0, bool bParam1)
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
			if ((func_326((*Global_1835011)[59]->f_1, 1) || func_326((*Global_1347702)[1]->f_15, 1)) || func_190((*Global_1347702)[1]->f_15))
			{
				return "COMP_RUFUS";
			}
			else if (func_533(403634348, 1))
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

void func_324(int iParam0, bool bParam1)
{
	func_663(iParam0, &iVar0, &iVar1);
	if (!func_664(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_665(iVar0, iVar1);
}

void func_325(int iParam0, bool bParam1, bool bParam2)
{
	iVar0 = func_656(iParam0, 1);
	func_666(Global_1946804->f_1497.f_1[iVar0], 2, 6);
	func_666(Global_1946804->f_1378.f_1[iVar0], 2, 6);
	if (bParam1)
	{
		Global_1946804->f_1497.f_1[iVar0] = &Global_1946804->f_57[iVar0];
		Global_1946804->f_1497.f_1[iVar0]->f_1 = 0;
		*Global_1946804->f_1378.f_1[iVar0] = { *Global_1946804->f_1497.f_1[iVar0] };
		if (bParam2)
		{
			func_667(17, iParam0, 0, 0, 0);
		}
	}
	if (func_22() == -1)
	{
		iVar1 = 0;
		while (iVar1 < 5)
		{
			func_666(Global_26796.f_26[iVar1]->f_1.f_1[iVar0], 2, 6);
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
			func_666(Global_36638.f_45.f_350.f_26[iVar1]->f_1.f_1[iVar0], 2, 6);
			if (bParam1)
			{
				Global_36638.f_45.f_350.f_26[iVar1]->f_1.f_1[iVar0] = &Global_1946804->f_57[iVar0];
				Global_36638.f_45.f_350.f_26[iVar1]->f_1.f_1[iVar0]->f_1 = 0;
			}
			iVar1++;
		}
	}
}

bool func_326(int iParam0, bool bParam1)
{
	switch (func_295(iParam0))
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

void func_327()
{
	_sc_feed_submit_preset_message(2, 5);
	if (is_orbis_version())
	{
		iVar0 = func_556(17);
		(*Global_1898441)[iVar0] = 17;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_BRA2_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_BRA2_COM", 24);
	}
}

void func_328()
{
	_sc_feed_submit_preset_message(2, 6);
	if (is_orbis_version())
	{
		iVar0 = func_556(18);
		(*Global_1898441)[iVar0] = 18;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_BRA3_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_BRA3_COM", 24);
	}
}

int func_329(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (iParam3 == -358215195)
	{
		Var0 = { func_668(iParam1, 1, 0) };
		iParam3 = func_669(Var0.f_4);
		if (iParam3 == -358215195)
		{
			return 0;
		}
	}
	func_670(iParam3);
	return func_609(iParam0, iParam1, iParam2, iParam3, bParam4, bParam5, 1, 0, 1, 0);
}

bool func_330()
{
	return _unlock_is_unlocked(99890643);
}

void func_331(int iParam0)
{
	if (!func_671(iParam0))
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

bool func_332(int iParam0, int iParam1)
{
	if (!func_672(iParam0))
	{
		return false;
	}
	if ((iParam1 == -1 || iParam1 < 0) || iParam1 > 179)
	{
		iParam1 = func_673(iParam0);
	}
	if (iParam1 == -1)
	{
		return false;
	}
	return func_674(Global_40.f_9910[iParam1], 4);
}

void func_333(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	iVar0 = func_675(*iParam0);
	iVar1 = func_676(*iParam0);
	iVar2 = func_677(*iParam0);
	iVar3 = func_678(*iParam0);
	iVar4 = func_679(*iParam0);
	iVar5 = func_680(*iParam0);
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
	iVar6 = func_681(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_681(iVar1, iVar0);
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
	func_682(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_334(int iParam0, int iParam1, bool bParam2)
{
	if (!func_672(iParam0))
	{
		return;
	}
	if (!func_391(iParam1))
	{
		return;
	}
	if (func_683(iParam1, 1))
	{
		return;
	}
	iVar0 = func_673(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (func_332(iParam0, -1))
	{
		return;
	}
	else
	{
		func_684(Global_40.f_9910[iVar0], 2);
	}
	Global_40.f_9910[iVar0]->f_4 = iParam1;
	if (bParam2)
	{
		if (!func_196(0, 0, 1))
		{
			func_366(0, 17);
		}
	}
}

void func_335()
{
	_sc_feed_submit_preset_message(2, 7);
	if (is_orbis_version())
	{
		iVar0 = func_556(19);
		(*Global_1898441)[iVar0] = 19;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_MOB5_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_MOB5_COM", 24);
	}
}

void func_336()
{
	_sc_feed_submit_preset_message(2, 8);
	if (is_orbis_version())
	{
		iVar0 = func_556(20);
		(*Global_1898441)[iVar0] = 20;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_SAI1_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_SAI1_COM", 24);
	}
}

bool func_337()
{
	return _unlock_is_unlocked(-121456797);
}

void func_338()
{
	_sc_feed_submit_preset_message(2, 9);
	if (is_orbis_version())
	{
		iVar0 = func_556(21);
		(*Global_1898441)[iVar0] = 21;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_GUA1_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_GUA1_COM", 24);
	}
}

void func_339()
{
	_sc_feed_submit_preset_message(2, 10);
	if (is_orbis_version())
	{
		iVar0 = func_556(22);
		(*Global_1898441)[iVar0] = 22;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_GUA3_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_GUA3_COM", 24);
	}
}

void func_340()
{
	_sc_feed_submit_preset_message(2, 12);
	if (is_orbis_version())
	{
		iVar0 = func_556(24);
		(*Global_1898441)[iVar0] = 24;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_ODR5_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_ODR5_COM", 24);
	}
}

void func_341()
{
	_sc_feed_submit_preset_message(2, 13);
	if (is_orbis_version())
	{
		iVar0 = func_556(25);
		(*Global_1898441)[iVar0] = 25;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_FIN1_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_FIN1_COM", 24);
	}
}

void func_342()
{
	_sc_feed_submit_preset_message(2, 14);
	if (is_orbis_version())
	{
		iVar0 = func_556(27);
		(*Global_1898441)[iVar0] = 27;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_MAR51_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_MAR51_COM", 24);
	}
}

void func_343()
{
	_sc_feed_submit_preset_message(2, 15);
	if (is_orbis_version())
	{
		iVar0 = func_556(28);
		(*Global_1898441)[iVar0] = 28;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_ABI21_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_ABI_21_COM", 24);
	}
}

bool func_344(int iParam0)
{
	return _0x9a03f22ad446eeac(iParam0) > 0;
}

bool func_345(int iParam0)
{
	return (Global_40.f_12019.f_4 && iParam0) != 0;
}

bool func_346(int iParam0, int iParam1, bool bParam2)
{
	if (!func_557(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_576(iParam0);
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
		if (!func_685(iParam0, 1))
		{
			return false;
		}
	}
	return func_561(iParam0, 0, bParam2) >= iParam1;
}

void func_347(int iParam0)
{
	if (func_84(32768))
	{
		return;
	}
	if (iParam0 < 0)
	{
		func_686(_create_var_string(2, "MISSION_COMPLETE_BANK_FEED", absi(iParam0)), "itemtype_textures", get_hash_key("ITEMTYPE_BANK_DEBT"), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
		Global_1879514->f_14 = 1;
		Global_1879514->f_15 = 0;
	}
	else
	{
		func_686(_create_var_string(2, "MISSION_COMPLETE_LOAN_FEED", iParam0), "itemtype_textures", get_hash_key("ITEMTYPE_BANK_DEBT"), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Negative", 0, 1);
		Global_1879514->f_14 = 0;
		Global_1879514->f_15 = 1;
	}
}

void func_348()
{
	_sc_feed_submit_preset_message(2, 16);
	if (is_orbis_version())
	{
		iVar0 = func_556(29);
		(*Global_1898441)[iVar0] = 29;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_BEE22_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_BEE22_COM", 24);
	}
}

void func_349()
{
	_sc_feed_submit_preset_message(2, 17);
	if (is_orbis_version())
	{
		iVar0 = func_556(26);
		(*Global_1898441)[iVar0] = 26;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_FIN2_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_FIN2_COM", 24);
	}
}

void func_350()
{
	_sc_feed_submit_preset_message(2, 11);
	if (is_orbis_version())
	{
		iVar0 = func_556(23);
		(*Global_1898441)[iVar0] = 23;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_DOC_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_DOC_COM", 24);
	}
}

void func_351()
{
	_sc_feed_submit_preset_message(2, 3);
	if (is_orbis_version())
	{
		iVar0 = func_556(15);
		(*Global_1898441)[iVar0] = 15;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_DOW3_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_DOW3_COM", 24);
	}
}

void func_352()
{
	_sc_feed_submit_preset_message(2, 4);
	if (is_orbis_version())
	{
		iVar0 = func_556(16);
		(*Global_1898441)[iVar0] = 16;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_DUT1_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_DUT1_COM", 24);
	}
}

void func_353()
{
	if (func_687() > 1)
	{
		func_688();
	}
	else
	{
		if (!_unlock_is_visible(-707360575))
		{
			_unlock_set_visible(-707360575, true);
			func_324(444, 1);
		}
		if (!_unlock_is_visible(-1201174711))
		{
			_unlock_set_visible(-1201174711, true);
			func_324(447, 1);
		}
		if (!_unlock_is_visible(151582343))
		{
			_unlock_set_visible(151582343, true);
			func_324(448, 1);
		}
		if (!_unlock_is_visible(-642492359))
		{
			_unlock_set_visible(-642492359, true);
			func_324(450, 1);
		}
		if (!_unlock_is_visible(5171247))
		{
			_unlock_set_visible(5171247, true);
			func_324(452, 1);
		}
	}
}

bool func_354(int iParam0)
{
	return func_689(iParam0, 4, 1);
}

void func_355(int iParam0)
{
	func_690(iParam0, 4, 1);
}

void func_356(int iParam0)
{
	if (iParam0 < 0)
	{
		iParam0 = 0;
	}
	Global_40.f_4283.f_326 = iParam0;
	Var0 = { func_96(-160912108) };
	stat_id_set_int(&Var0, iParam0, true);
}

void func_357(int iParam0)
{
	if (func_84(32768))
	{
		return;
	}
	if (!func_189(iParam0))
	{
		return;
	}
	func_228(Global_1935630, 8192);
	iVar2 = 1;
	switch (func_194(iParam0))
	{
		case 1:
			func_97(func_594(909007663, -587839005), 1);
			iVar0 = func_271(iParam0);
			func_97(func_96(-634848880), 1);
			switch (func_460(iVar0))
			{
				case 0:
					func_97(func_594(909007663, 1325140787), 1);
					break;
				case 1:
					func_97(func_594(909007663, 2101241783), 1);
					break;
				case 2:
					func_97(func_594(909007663, -1296936294), 1);
					break;
				case 3:
					func_97(func_594(909007663, -798388728), 1);
					break;
				case 4:
					func_97(func_594(909007663, -1787586531), 1);
					break;
				case 5:
					func_97(func_594(909007663, -1002834519), 1);
					break;
				case 6:
					func_97(func_594(909007663, -50600144), 1);
					break;
				case 7:
					func_97(func_594(909007663, -348503123), 1);
					break;
				case 8:
					func_97(func_594(909007663, -528798161), 1);
					break;
				default:
					iVar2 = 0;
					break;
			}
			if (iVar0 == 7)
			{
				func_97(func_594(909007663, -406093146), 1);
			}
			if (iVar2 && _0xe824ce7d13fcb35e(get_hash_key(&((*Global_1835011)[iVar0]->f_8))))
			{
				func_97(func_594(909007663, 532323983), 1);
			}
			break;
		case 8:
			iVar1 = func_271(iParam0);
			if (func_300((*Global_1347702)[iVar1]->f_12, 1))
			{
				func_97(func_96(-634848880), 1);
			}
			if (func_300((*Global_1347702)[iVar1]->f_12, 4) || iVar1 == 59)
			{
				if (func_300((*Global_1347702)[iVar1]->f_12, 1))
				{
					func_97(func_594(909007663, -587839005), 1);
				}
				else
				{
					func_97(func_594(909007663, -2049243343), 1);
				}
			}
			if (func_300((*Global_1347702)[iVar1]->f_12, 1))
			{
				switch (func_461(iVar1))
				{
					case 0:
						func_97(func_594(909007663, 1325140787), 1);
						break;
					case 1:
						func_97(func_594(909007663, 2101241783), 1);
						break;
					case 2:
						func_97(func_594(909007663, -1296936294), 1);
						break;
					case 3:
						func_97(func_594(909007663, -798388728), 1);
						break;
					case 4:
						func_97(func_594(909007663, -1787586531), 1);
						break;
					case 5:
						func_97(func_594(909007663, -1002834519), 1);
						break;
					case 6:
						func_97(func_594(909007663, -50600144), 1);
						break;
					case 7:
						func_97(func_594(909007663, -348503123), 1);
						break;
					case 8:
						func_97(func_594(909007663, -528798161), 1);
						break;
					default:
						iVar2 = 0;
						break;
				}
				if (iVar2 && _0xe824ce7d13fcb35e(get_hash_key(&((*Global_1347702)[iVar1]->f_3))))
				{
					func_97(func_594(909007663, 532323983), 1);
				}
			}
			else if (func_300((*Global_1347702)[iVar1]->f_12, 4))
			{
				if (func_300((*Global_1347702)[iVar1]->f_12, 4194304))
				{
				}
				else if (!func_300((*Global_1347702)[iVar1]->f_12, 512))
				{
					func_97(func_594(909007663, 551192206), 1);
				}
				else
				{
					func_97(func_594(909007663, -406093146), 1);
				}
			}
			break;
	}
}

void func_358()
{
	if (func_22() != -1)
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
	if (!func_5(64))
	{
		return;
	}
	else if (func_197(&Global_1935630, 131072))
	{
		return;
	}
	else if ((func_196(0, 0, 1) || func_691()) || func_131())
	{
		return;
	}
	iVar0 = func_200();
	if (((iVar0 == 0 || iVar0 == 4) || iVar0 == 6) || iVar0 == 7)
	{
		return;
	}
	while (_spactionproxy_get_next_pending_buy_action(&uVar4))
	{
		if (!_spactionproxy_process_action(uVar4, func_692(&uVar4, &iVar1, &iVar2, &iVar3)))
		{
		}
	else
	{
		}
	}
	if (iVar1 == 1)
	{
		func_693(_create_var_string(2, "SHOP_CATALOGUE_DELIVERY"), _create_var_string(2, "SHOP_CATALOGUE_PURCHASE_RECEIVED_SINGLE", 1), 908516622, -576888982, -2, 0, 0, 0, 0, 1, 1);
	}
	else if (iVar1 > 1)
	{
		func_693(_create_var_string(2, "SHOP_CATALOGUE_DELIVERY"), _create_var_string(2, "SHOP_CATALOGUE_PURCHASE_RECEIVED_PLURAL", iVar1), 908516622, -576888982, -2, 0, 0, 0, 0, 1, 1);
	}
	if (iVar3 > 0)
	{
		func_694(iVar3, 0, 0);
	}
	if (iVar1 > 0)
	{
		func_366(0, -1);
	}
	if (iVar2 > 0)
	{
		func_695("SHOP_CATALOGUE_PURCHASE_FAILED", 10000, 0, 0, 0, 1);
	}
	func_696(1, 0);
	Global_1956575->f_4 = 1;
}

void func_359(int iParam0, int iParam1, bool bParam2, float fParam3, int iParam4, char* sParam5, int iParam6, int iParam7)
{
	if (func_84(32768))
	{
		return;
	}
	func_282(iParam1, bParam2, fParam3, iParam4, sParam5, iParam6, iParam7, 752097756);
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
		func_697(iParam0, iParam1, fParam3, iParam4);
	}
}

int func_360(int iParam0)
{
	if (!func_189(iParam0))
	{
		return -1;
	}
	return func_698(iParam0);
}

int func_361(int iParam0, int iParam1)
{
	if (!func_699(iParam0))
	{
		return 0;
	}
	if (!func_398())
	{
		return 0;
	}
	if (!func_700(iParam0, &iVar0, &iVar1))
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

int func_362(int iParam0, int iParam1, int iParam2, int iParam3)
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
	if (iVar2 >= func_701())
	{
		iVar2 = func_701();
	}
	iVar5 = func_702(iVar3, iVar4, iParam2);
	if (Global_1572887->f_12 == -1)
	{
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			iVar6 = iVar0;
			if (func_457(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_457(iVar6) == 0)
			{
				return func_703(iVar3, iVar4, iParam2, iVar0, iParam3);
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
			if (func_457(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_457(iVar6) == 0)
			{
				return func_703(iVar3, iVar4, iParam2, iVar0, iParam3);
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
				return func_703(iVar3, iVar4, iParam2, iVar0, 0);
			}
			iVar0++;
		}
	}
	return -1;
}

int func_363(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_704(1330954593, 0, -1);
		case 1:
			return func_704(1330954593, 0, -1);
		case 2:
			return func_704(1330954593, 0, -1) * 2;
		case 4:
			return func_704(1330954593, 0, -1);
		case 5:
			return func_704(1330954593, 0, -1);
		case 6:
			return func_704(1330954593, 0, -1) * 2;
		case 12:
			return 75000;
		case 8:
			return func_704(1330954593, 0, -1) * 3;
		case 9:
			return func_704(1330954593, 0, -1) * 3;
		case 10:
			return func_704(1330954593, 0, -1) * 3;
		case 11:
			return func_704(1330954593, 0, -1);
		default:
			break;
	}
	return 0;
}

char[] func_364(int iParam0)
{
	if (!func_189(iParam0))
	{
		return cVar0;
	}
	switch (func_194(iParam0))
	{
		case 1:
			cVar0 = (*Global_1835011)[func_482(iParam0)]->f_8;
			break;
		case 8:
			cVar0 = (*Global_1347702)[func_271(iParam0)]->f_3;
			break;
		case 11:
			if (iParam0 == func_362(0, 10, 11, 2116153146))
			{
				StringCopy(&cVar0, "CABR01", 8);
			}
			break;
	}
	return cVar0;
}

void func_365(char[4] cParam0)
{
	if (!Global_1879514->f_11)
	{
		iVar0 = func_367();
		iVar1 = get_hash_key(&cParam0);
		if (_0x57e798b54c45ee1a(iVar1) != 5 && iVar0 == 5)
		{
			if (func_194(Global_1879514->f_1) == 1)
			{
				func_361(5, 1);
			}
			else if (func_194(Global_1879514->f_1) == 8 && (func_300((*Global_1347702)[func_271(Global_1879514->f_1)]->f_12, 1) || func_300((*Global_1347702)[func_271(Global_1879514->f_1)]->f_12, 33554432)))
			{
				func_361(5, 1);
			}
		}
		_0xe824ce7d13fcb300(get_hash_key(&cParam0), iVar0);
	}
	else
	{
		_0xe824ce7d13fcb300(get_hash_key(&cParam0), 3);
	}
}

void func_366(bool bParam0, int iParam1)
{
	if (_0x5fc9357c26daefce())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_705(&Global_0, 8);
	}
	if (!func_398() || func_22() != -1)
	{
		return;
	}
	func_705(&Global_0, 1);
}

int func_367()
{
	iVar0 = func_706(Global_1879514->f_1);
	if (Global_1425247->f_53)
	{
		return 0;
	}
	if (func_707(iVar0))
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

Vector3 func_368(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10)
{
	vVar0 = { func_708(vParam0, iParam3, iParam4, iParam5, iParam6, 1, iParam7, bParam8, bParam9, bParam10, -1, 1103626240) };
	if (func_399(vVar0))
	{
		vVar0 = { func_708(vParam0, iParam3, iParam4, 0, 1, 1, iParam7, bParam8, 0, 0, -1, 1103626240) };
	}
	return vVar0;
}

void func_369(vector3 vParam0, int iParam3, var uParam4, int iParam5)
{
	Global_1310720->f_1 = { vParam0 };
	Global_40.f_9.f_10 = uParam4;
	Global_40.f_9.f_11 = iParam3;
	Global_40.f_9.f_12 = iParam5;
}

void func_370(vector3 vParam0)
{
	Global_40.f_9.f_7 = { vParam0 };
}

int func_371(vector3 vParam0, int iParam3)
{
	iVar0 = func_79();
	if (func_246(iVar0))
	{
		if (_0xf256a75210c5c0eb((*Global_1888801)[iVar0]->f_3, vParam0))
		{
			return iVar0;
		}
	}
	return func_709(vParam0, iParam3);
}

void func_372()
{
	func_710();
	func_711();
	func_712();
	_0x11b0a0b282fa9b10(0);
}

void func_373(struct<16> Param0, int iParam16)
{
	if (is_string_null_or_empty(&(Param0.f_10)))
	{
		return;
	}
	if (Global_1934603->f_161 >= 10)
	{
		return;
	}
	if (!func_713(iParam16, 2))
	{
		if (_get_number_of_references_of_script_with_name_hash(get_hash_key(&(Param0.f_10))) > 0 || func_714(&(Param0.f_10)))
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
			func_715(iParam16);
			return;
		}
		iVar0++;
	}
}

bool func_374(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_375(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_376()
{
	return Global_1572864->f_12;
}

void func_377(bool bParam0)
{
	if (func_473(Global_1935630->f_3))
	{
		return;
	}
	iVar0 = 1;
	Var1.f_2 = 4;
	Var1 = "HUD_PENALTY_SOUNDSET";
	Var1.f_1 = "HUD_FAIL";
	Var1.f_3 = func_716();
	Var1.f_3.f_3 = iVar0;
	if ((!func_717(Global_1347343->f_2) && !func_374(Global_1347343->f_11, 64)) || func_84(32768))
	{
		Var1.f_7 = func_718();
		Var1.f_7.f_3 = iVar0;
	}
	if (!func_374(Global_1347343->f_11, 1024) && !func_84(32768))
	{
		Var1.f_11 = func_719();
		Var1.f_11.f_3 = iVar0;
	}
	if (func_374(Global_1347343->f_11, 8))
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
	func_375(&(Global_1347343->f_11), 1073741824);
	if (bParam0)
	{
		func_375(&(Global_1347343->f_11), 1048576);
	}
	_0x16e9abdd34ddd931();
}

void func_378(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	func_723(uParam0);
	iVar0 = func_724(uParam0, iParam1);
	if (bParam3)
	{
		if (is_string_null_or_empty(sParam2))
		{
			sParam2 = func_725(iParam1);
		}
		iVar0 = func_726(uParam0, sParam2);
		if (iVar0 == -1)
		{
			iVar0 = func_727(uParam0);
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
		iVar0 = func_727(uParam0);
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
	func_728(uParam0, 2);
}

void func_379(char[4] cParam0, int iParam1)
{
	func_729(&(cParam0->f_7375), iParam1);
}

int func_380(var uParam0)
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

int func_381()
{
	return func_482(func_730());
}

void func_382(char[4] cParam0)
{
	iVar0 = 0;
	while (iVar0 < func_400())
	{
		func_731(cParam0, iVar0);
		iVar0++;
	}
}

int func_383(var uParam0)
{
	uParam0->f_607 = uParam0->f_607;
	return 1;
}

void func_384(char[4] cParam0, var uParam1)
{
	cParam0->f_607 = uParam1;
}

void func_385(char[4] cParam0)
{
	func_737(cParam0, iLocal_74, iLocal_75, 104781, 104866, 105027, 105335, 105455, "NTV1_INT", 66, -1);
	func_737(cParam0, iLocal_75, iLocal_76, 105597, 105624, 105633, 105692, 106150, "", 64, -1);
	func_737(cParam0, iLocal_76, iLocal_77, 106166, 106199, 106208, 106279, 108212, "", 64, -1);
	func_737(cParam0, iLocal_77, iLocal_78, 108303, 108330, 108375, 108403, 108906, "", 66, -1);
	func_737(cParam0, iLocal_78, iLocal_79, 108951, 109043, 109095, 109221, 109889, "", 8, -1);
	func_737(cParam0, iLocal_79, iLocal_80, 109934, 110013, 110050, 110195, 111043, "", 8, -1);
	func_737(cParam0, iLocal_80, 26, 111081, 111108, 111147, 111332, 111672, "NTV1_EXT", 3098, -1);
}

struct<4> func_386(char[4] cParam0)
{
	iVar0 = func_35(cParam0);
	if (iVar0 == iLocal_74)
	{
		Var1 = { func_222(0, 13) };
	}
	else if (iVar0 == iLocal_75)
	{
		Var1 = { func_222(8, 2) };
	}
	else if (iVar0 == iLocal_76)
	{
		Var1 = { func_222(9, 2) };
	}
	else if (iVar0 == iLocal_77)
	{
		Var1 = { func_222(7, 2) };
	}
	else if (iVar0 == iLocal_78)
	{
		Var1 = { func_222(1, 2) };
	}
	else if (iVar0 == iLocal_79)
	{
		Var1 = { func_222(2, 2) };
	}
	else if (iVar0 == iLocal_80)
	{
		Var1 = { func_222(3, 2) };
	}
	return Var1;
}

void func_387(char[4] cParam0, vector3 vParam1)
{
	cParam0->f_5413 = { vParam1 };
}

int func_388(int iParam0, vector3 vParam1, int iParam4, bool bParam5, float fParam6, bool bParam7, int iParam8, int iParam9)
{
	if (!func_165(*iParam0, 0))
	{
		return 0;
	}
	if (!func_31() || iParam8 == 1)
	{
		func_768(*iParam0, vParam1, iParam4, 2, 1073741824);
	}
	set_blocking_of_non_temporary_events(*iParam0, true);
	set_entity_invincible(*iParam0, bParam5);
	set_entity_only_damaged_by_player(*iParam0, bParam5);
	_0x098caa6dbe7d8d82(*iParam0, 1);
	set_animal_tuning_bool_param(*iParam0, 48, true);
	_0x18ff3110cf47115d(*iParam0, 15, 1);
	set_ped_id_range(*iParam0, 9f);
	set_ped_hearing_range(*iParam0, 6f);
	set_ped_seeing_range(*iParam0, 9f);
	if (iParam9 == 0)
	{
		func_769(*iParam0, 1);
	}
	if (bParam7 == 1)
	{
		func_770(*iParam0, 1);
	}
	clear_ped_tasks(*iParam0, 1, 0);
	if (fParam6 == -1f)
	{
		func_771(*iParam0);
	}
	else
	{
		task_animal_unalerted(*iParam0, -1, 0, 0, 0);
	}
	return 1;
}

int func_389(char[4] cParam0, int iParam1, char* sParam2)
{
	iVar0 = func_772(cParam0, iParam1, sParam2);
	if (does_entity_exist(iVar0))
	{
		return get_ped_index_from_entity_index(iVar0);
	}
	return 0;
}

void func_390(char[4] cParam0)
{
	iVar0 = func_35(cParam0);
	func_773(cParam0, Global_35, "Arthur", 0, 0);
	func_773(cParam0, iVar346, "CS_RainsFall", 0, 0);
	func_773(cParam0, iVar348, "CaptainMonroe", 0, 0);
	func_774(cParam0, &(iLocal_2074[2]), "p_cs_indianpipebag01x", 0, 0);
	func_773(cParam0, iVar347, "Horse_01^1", 0, 0);
	func_773(cParam0, iVar344, "Horse_01^2", 0, 0);
	func_773(cParam0, iVar349, "Horse_01", 0, 0);
}

bool func_391(int iParam0)
{
	if (iParam0 == -15)
	{
		return false;
	}
	iVar0 = func_680(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return false;
	}
	iVar1 = func_679(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return false;
	}
	iVar2 = func_678(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return false;
	}
	iVar3 = func_675(iParam0);
	if ((iVar3 <= 0 || iVar3 > 1930) || iVar3 < 1866)
	{
		return false;
	}
	iVar4 = func_676(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return false;
	}
	iVar5 = func_677(iParam0);
	if (iVar5 < 1 || iVar5 > func_681(iVar4, iVar3))
	{
		return false;
	}
	return true;
}

void func_392(char[4] cParam0)
{
	iVar0 = func_35(cParam0);
	if (iLocal_240 == 1)
	{
		return;
	}
	if (iVar0 != iLocal_74)
	{
		return;
	}
	if (_does_anim_scene_exist(cParam0->f_7375.f_804))
	{
		if (func_775())
		{
			set_anim_scene_bool(cParam0->f_7375.f_804, "NightTime", true, false);
			iLocal_240 = 1;
		}
		else if (func_776())
		{
			set_anim_scene_bool(cParam0->f_7375.f_804, "NightTime", false, false);
			iLocal_240 = 1;
		}
	}
}

void func_393(int iParam0, int iParam1)
{
	uVar0 = Global_1905944[iParam0];
	clear_bit(&uVar0, iParam1);
	(*Global_1905944)[iParam0] = uVar0;
}

bool func_394(bool bParam0, bool bParam1)
{
	return (bParam0 && bParam1) != 0;
}

void func_395(var uParam0)
{
	if (!func_777(uParam0, 4))
	{
		if (func_778(uParam0->f_860, 16384))
		{
			animpostfx_play("CamTransition01");
		}
		vVar0 = { func_779(uParam0) };
		if (!func_778(uParam0->f_860, 524288))
		{
			func_780(&(uParam0->f_872));
		}
		func_781(&(uParam0->f_860), 0, 2, vVar0.x, vVar0.y, vVar0.z, 0);
		func_782(uParam0, 0f, 0f, 0f);
		func_783(uParam0);
		func_784(uParam0);
		func_785(uParam0, 0f, 0f, 0f, 0, 0);
		func_786(uParam0);
		func_729(uParam0, 4);
		func_787(uParam0, 0);
		func_788(&(Global_1946804->f_1497), Global_35, 1, 64, 1, 1, 1);
		if (_0x927b810e43e99932(&(uParam0->f_873)))
		{
			_0x0a5a4f1979abb40e(&(uParam0->f_873));
		}
	}
}

Vector3 func_396(int iParam0)
{
	if (func_789(iParam0))
	{
		return func_790(iParam0);
	}
	return (*Global_1835011)[iParam0]->f_18;
}

int func_397(vector3 vParam0, var uParam3)
{
	if (_0x1b065a2bf7953815(0) != 1)
	{
		func_485(0, 1);
	}
	else
	{
		return 0;
	}
	iVar0 = func_791(Global_35, 0, 2, 0);
	if (!is_weapon_valid(iVar0))
	{
		iVar0 = func_792(0, 0);
		if (func_671(iVar0))
		{
			set_current_ped_weapon(Global_35, iVar0, true, 2, false, false);
			func_793(1, 0);
		}
	}
	else
	{
		func_793(1, 0);
	}
	func_208(0);
	func_486(0, vParam0, uParam3);
	return 1;
}

bool func_398()
{
	return true;
	if (Global_1572887->f_12 == 0)
	{
		return true;
	}
	return Global_40.f_1;
}

bool func_399(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

int func_400()
{
	return 26;
}

void func_401(int iParam0)
{
	if (!func_188(iParam0))
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

void func_402(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 60)
	{
		func_794((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_403(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 40)
	{
		func_795((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_404(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 20)
	{
		func_796((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_405(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 14)
	{
		func_797((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_406(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 60)
	{
		func_798((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_407(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 10)
	{
		func_799((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_408(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
}

void func_409(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 10)
	{
		func_800((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_410(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 3)
	{
		func_801((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_411(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		func_802((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_412(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		func_803((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_413(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		func_804((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_414(char[4] cParam0, int iParam1, int iParam2)
{
	if (func_122(cParam0, 2097152))
	{
		return;
	}
	iVar0 = func_805(&(cParam0->f_638), iParam1);
	if (iVar0 == -1)
	{
		iVar0 = func_806(&(cParam0->f_638));
	}
	if (iVar0 == -1)
	{
		return;
	}
	cParam0->f_638[iVar0] = iParam1;
	cParam0->f_638[iVar0]->f_2 = (cParam0->f_638[iVar0]->f_2 || iParam2);
}

void func_415(char[4] cParam0, char[4] cParam1, int iParam2, int iParam3, int iParam4)
{
	if (func_122(cParam0, 2097152))
	{
		return;
	}
	iVar0 = func_807(&(cParam0->f_819), cParam1);
	if (iVar0 == -1)
	{
		iVar0 = func_808(&(cParam0->f_819));
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

void func_416(char[4] cParam0, char[4] cParam1, int iParam2)
{
	if (func_122(cParam0, 2097152))
	{
		return;
	}
	iVar0 = func_809(&(cParam0->f_1020), cParam1);
	if (iVar0 == -1)
	{
		iVar0 = func_810(&(cParam0->f_1020));
	}
	if (iVar0 == -1)
	{
		return;
	}
	cParam0->f_1020[iVar0] = cParam1;
	cParam0->f_1020[iVar0]->f_2 = (cParam0->f_1020[iVar0]->f_2 || iParam2);
}

char* func_417(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			sVar0 = "script@story@ntv1@ig@IG2_RF_Investigates@IG2_obj_loop";
			break;
		case 1:
			sVar0 = "script@story@ntv1@ig@IG2_RF_Investigates@IG2_RF_Investigates";
			break;
		case 2:
			sVar0 = "script@story@ntv1@ig@IG2_RF_Investigates@IG2_RF_Investigates";
			break;
		case 3:
			sVar0 = "script@story@ntv1@ig@IG3_Arthur_Investigates@ig3_arthur_investigates";
			break;
		case 4:
			sVar0 = "script@story@ntv1@ig@IG5@ig5_army_sleep";
			break;
		case 5:
			sVar0 = "script@story@ntv1@ig@IG6_Camp_Spotted@IG6_Camp_Spotted";
			break;
		case 6:
			sVar0 = "script@story@ntv1@ig@IG6_Camp_Spotted@IG6_Camp_Spotted";
			break;
		case 7:
			sVar0 = "script@story@ntv1@ig@IG7@ig7_disrespect_chanunpa";
			break;
		case 8:
			sVar0 = "script@story@ntv1@ig@IG8@ig8_collect_chanunpa";
			break;
		case 9:
			sVar0 = "script@story@ntv1@ig@IG10_Herbs_Into_Horse_Satchel@IG10_Herbs_Into_Horse_Satchel";
			break;
		case 10:
			sVar0 = "script@story@ntv1@ig@IG11@IG11_DISCOVER_COHUTTA";
			break;
		case 11:
			sVar0 = "script@timelapse@ntv1_ext_timelapse";
			break;
	}
	return sVar0;
}

void func_418(char[4] cParam0, char[4] cParam1, var uParam2, int iParam3, int iParam4, char* sParam5, int iParam6, bool bParam7)
{
	if (!func_811(iParam3, func_35(cParam0)) && !func_811(iParam3, func_37(cParam0)))
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
	iVar0 = func_812(&(cParam0->f_1126), cParam1, *uParam2);
	if (iVar0 == -1)
	{
		iVar0 = func_813(&(cParam0->f_1126));
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
		func_814(&(cParam0->f_1126[iVar0]->f_2), 4);
	}
}

void func_419(char[4] cParam0, int iParam1, char* sParam2, int iParam3)
{
	if (!func_811(iParam3, func_35(cParam0)) && !func_811(iParam3, func_37(cParam0)))
	{
		return;
	}
	if (is_string_null_or_empty(sParam2))
	{
		return;
	}
	if (!_does_anim_scene_exist(iParam1))
	{
		return;
	}
	if (_is_anim_scene_finished(iParam1, false))
	{
		return;
	}
	iVar0 = func_815(&(cParam0->f_1126), iParam1);
	if (iVar0 == -1)
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 < 20)
	{
		if (!is_string_null_or_empty(&(cParam0->f_1126[iVar0]->f_4[iVar1])) && are_strings_equal(&(cParam0->f_1126[iVar0]->f_4[iVar1]), sParam2))
		{
			return;
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < 20)
	{
		if (is_string_null_or_empty(&(cParam0->f_1126[iVar0]->f_4[iVar1])))
		{
			cParam0->f_1126[iVar0]->f_4[iVar1] = sParam2;
			cParam0->f_1126[iVar0]->f_4[iVar1]->f_2 = (cParam0->f_1126[iVar0]->f_4[iVar1]->f_2 || iParam3);
			return;
		}
		iVar1++;
	}
}

void func_420(int iParam0, bool bParam1)
{
	func_816(iParam0, bParam1);
}

void func_421(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, int iParam12)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_817((*uParam0)[iVar0]))
		{
			if (func_811((*uParam0)[iVar0]->f_2, iParam12))
			{
				func_818((*uParam0)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (func_819((*uParam1)[iVar0]))
		{
			if (func_811((*uParam1)[iVar0]->f_4, iParam12))
			{
				func_820((*uParam1)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam2)
	{
		if (func_821((*uParam2)[iVar0]))
		{
			if (func_811((*uParam2)[iVar0]->f_2, iParam12))
			{
				func_822((*uParam2)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam3)
	{
		if (func_823((*uParam3)[iVar0]))
		{
			if (func_811((*uParam3)[iVar0]->f_2, iParam12))
			{
				func_824((*uParam3)[iVar0]);
			}
		}
		iVar0++;
	}
	if (func_811(uParam4->f_1, iParam12))
	{
		func_825(uParam4);
	}
	iVar0 = 0;
	while (iVar0 < *uParam5)
	{
		if (func_826((*uParam5)[iVar0]))
		{
			if (func_811((*uParam5)[iVar0]->f_3, iParam12))
			{
				func_827((*uParam5)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam5)
	{
		if (func_826((*uParam5)[iVar0]))
		{
			iVar1 = 0;
			while (iVar1 < 20)
			{
				if (func_828((*uParam5)[iVar0]->f_4[iVar1]))
				{
					if (func_811((*uParam5)[iVar0]->f_4[iVar1]->f_2, iParam12))
					{
						func_829((*uParam5)[iVar0]->f_4[iVar1], (*uParam5)[iVar0]->f_1);
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
		if (func_830((*uParam6)[iVar0]))
		{
			if (func_811((*uParam6)[iVar0]->f_3, iParam12))
			{
				func_831((*uParam6)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam7)
	{
		if (func_832((*uParam7)[iVar0]))
		{
			if (func_811((*uParam7)[iVar0]->f_4, iParam12))
			{
				func_833((*uParam7)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam8)
	{
		if (func_834((*uParam8)[iVar0]))
		{
			if (func_811((*uParam8)[iVar0]->f_2, iParam12))
			{
				func_835((*uParam8)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam9)
	{
		if (func_836((*uParam9)[iVar0]))
		{
			if (func_811((*uParam9)[iVar0]->f_2, iParam12))
			{
				func_837((*uParam9)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam10)
	{
		if (func_838((*uParam10)[iVar0]))
		{
			if (func_811((*uParam10)[iVar0]->f_3, iParam12))
			{
				func_839((*uParam10)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam11)
	{
		if (func_840((*uParam11)[iVar0]))
		{
			if (func_811((*uParam11)[iVar0]->f_2, iParam12))
			{
				func_841((*uParam11)[iVar0]);
			}
		}
		iVar0++;
	}
}

void func_422(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	if (is_entity_dead(iParam1))
	{
		return;
	}
	if (func_842(uParam0, iParam1, sParam2))
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

struct<2> func_423()
{
	Var0 = create_itemset(true);
	return Var0;
}

void func_424(var uParam0, float fParam1)
{
	uParam0->f_794 = fParam1;
}

void func_425(var uParam0, float fParam1)
{
	uParam0->f_795 = fParam1;
}

void func_426(char[4] cParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	func_843(&(cParam0->f_7375), iParam1, sParam2, iParam3, iParam4, bParam5);
	func_378(&(cParam0->f_10792), iParam1, sParam2, bParam6);
}

bool func_427(char[4] cParam0, int iParam1, bool bParam2)
{
	iVar0 = 1;
	if (bParam2 && func_25(&(cParam0->f_8269)))
	{
		if (!func_123(cParam0, iParam1, 268435456))
		{
			MemCopy(&cVar1, {func_844(cParam0->f_607)}, 3);
			if (func_845(&(cParam0->f_8269), &cVar1, 0, func_134(iParam1), 1, 0))
			{
				if (func_26(&(cParam0->f_8269)))
				{
					func_846(&(cParam0->f_8269));
				}
				func_142(cParam0, iParam1, 268435456);
			}
			else
			{
				iVar0 = 0;
			}
		}
	}
	if (!func_847(&(cParam0->f_638), &(cParam0->f_819), &(cParam0->f_1020), &(cParam0->f_1081), &(cParam0->f_1124), &(cParam0->f_1126), &(cParam0->f_5147), &(cParam0->f_5188), &(cParam0->f_5239), &(cParam0->f_5249), &(cParam0->f_5265), &(cParam0->f_5286), iParam1))
	{
		iVar0 = 0;
	}
	return iVar0;
}

bool func_428(var uParam0, int iParam1)
{
	iVar1 = 1;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_826((*uParam0)[iVar0]))
		{
			if (func_811((*uParam0)[iVar0]->f_3, iParam1))
			{
				if ((*uParam0)[iVar0]->f_65 > 0f || func_848((*uParam0)[iVar0]->f_2, 4))
				{
					if (!func_849((*uParam0)[iVar0]))
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

int func_429(char[4] cParam0)
{
	return cParam0->f_596;
}

bool func_430(char[4] cParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, int iParam5)
{
	if (func_122(cParam0, 2))
	{
		return true;
	}
	if (func_22() == 0)
	{
		return true;
	}
	if (does_entity_exist(cParam0->f_5408))
	{
		return true;
	}
	iVar0 = func_850(func_63(cParam0));
	if (!func_31())
	{
		vVar2 = { func_128(cParam0->f_607) };
	}
	if (func_851(cParam0, iVar0, &uVar1, bParam1, vVar2.x, vVar2.y, vVar2.z, 0, bParam2, iParam3, bParam4, iParam5, 1, 0))
	{
		cParam0->f_5408 = uVar1;
		return true;
	}
	return false;
}

bool func_431(char[4] cParam0, bool bParam1, var uParam2, var uParam3, var uParam4, float fParam5, int iParam6, int iParam7, int iParam8)
{
	if (does_entity_exist(cParam0->f_5411))
	{
		if (!func_122(cParam0, 16777216))
		{
			if (!func_852(cParam0))
			{
				func_105(cParam0, 16777216);
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
				iVar12 = func_853(&iVar11, &Var0);
				if (iVar11 != 0)
				{
					func_105(cParam0, 16777216);
					if (iVar11 == 2 && !is_entity_dead(iVar12))
					{
						if (iVar12 == cParam0->f_5411)
						{
							func_105(cParam0, 16777216);
						}
						else if (func_854(iVar12, cParam0->f_5411, 5f, 1))
						{
							if (func_855(iVar12))
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
	if (func_122(cParam0, 1))
	{
		return true;
	}
	vVar14 = { func_128(cParam0->f_607) };
	if (func_22() == 0)
	{
		request_model(func_127(cParam0), false);
		if (!has_model_loaded(func_127(cParam0)))
		{
			return false;
		}
		if (func_856(&iVar17, func_127(cParam0), vVar14, 0f, 0, 0, 1, 1, 1))
		{
			set_network_id_exists_on_all_machines(iVar17, true);
			iVar13 = net_to_ped(iVar17);
		}
	}
	else
	{
		if (((((cParam0->f_607 == 38 || cParam0->f_607 == 39) || cParam0->f_607 == 43) || cParam0->f_607 == 40) || cParam0->f_607 == 41) || cParam0->f_607 == 42)
		{
			func_105(cParam0, 1);
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
		if (func_122(cParam0, 262144))
		{
			Var18.f_2 = 1;
		}
		else if (func_122(cParam0, 32768))
		{
			Var18.f_2 = 0;
		}
		iVar29 = 0;
		iVar13 = func_853(&iVar29, &Var18);
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
			if (!func_122(cParam0, 16))
			{
				func_105(cParam0, 16);
			}
		}
	}
	if (does_entity_exist(iVar13))
	{
		cParam0->f_5411 = iVar13;
		cParam0->f_5412 = iVar13;
		func_857(cParam0, bParam1);
		if (!func_122(cParam0, 256))
		{
			if (!func_122(cParam0, 32768))
			{
				vVar14.x = uParam2;
				vVar14.f_1 = uParam3;
				vVar14.f_2 = uParam4;
				if ((!func_855(iVar13) || func_858(Global_35, iVar13, 1, 1) > 200f) && !func_399(vVar14))
				{
					if (!func_31())
					{
						freeze_entity_position(iVar13, false);
						func_768(iVar13, vVar14, fParam5, 2, 1073741824);
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

void func_432(char[4] cParam0)
{
	if (!func_122(cParam0, 32) && func_130(cParam0, 3))
	{
		if (func_859(cParam0->f_607, &iVar0, &uVar1))
		{
			set_clock_time(iVar0, 0, 0);
			func_105(cParam0, 32);
		}
	}
	if (!func_122(cParam0, 32))
	{
		if (func_860(&(cParam0->f_609), cParam0->f_607))
		{
			func_105(cParam0, 32);
		}
	}
}

void func_433(char[4] cParam0)
{
	if (!func_122(cParam0, 128))
	{
		if (func_122(cParam0, 16384))
		{
			func_861(cParam0);
			if (func_862(cParam0))
			{
				func_53(&(cParam0->f_10792));
				func_863(cParam0, 2097152);
				func_264(cParam0, 16384);
				func_105(cParam0, 128);
			}
			return;
		}
		if (func_130(cParam0, 1))
		{
			return;
		}
		if (func_122(cParam0, 64))
		{
			func_861(cParam0);
			MemCopy(&Var0, {func_157(func_63(cParam0))}, 4);
			if (func_864(cParam0, Var0))
			{
				if (func_429(cParam0) != 4)
				{
					do_screen_fade_out(0);
				}
				func_105(cParam0, 128);
			}
		}
		else
		{
			if (func_429(cParam0) != 4)
			{
				do_screen_fade_out(1);
			}
			func_105(cParam0, 128);
		}
	}
}

void func_434(char[4] cParam0, int iParam1)
{
	cParam0->f_596 = iParam1;
}

bool func_435(char[4] cParam0)
{
	iVar0 = 1;
	if (!func_865(cParam0))
	{
		iVar0 = 0;
	}
	if (!func_430(cParam0, func_130(cParam0, 3), !func_10(cParam0, 2097152), cParam0->f_5410, !func_10(cParam0, 32), 0))
	{
		iVar0 = 0;
	}
	if (!func_431(cParam0, 1, cParam0->f_5413, cParam0->f_5413.f_1, cParam0->f_5413.f_2, cParam0->f_5416, 1, 1, 1))
	{
		iVar0 = 0;
	}
	if (!_0x5e420ff293ee5472())
	{
		iVar0 = 0;
	}
	if (func_122(cParam0, 4) && !_0x0ee3f0d7feccc54f())
	{
		iVar0 = 0;
	}
	if (!func_25(&(cParam0->f_8269)))
	{
		MemCopy(&cVar1, {func_844(cParam0->f_607)}, 3);
		if (func_866(&(cParam0->f_8269), &cVar1, 0, 1, 1))
		{
		}
		else
		{
			iVar0 = 0;
		}
	}
	if (func_130(cParam0, 1))
	{
		if (!func_28(&(cParam0->f_13115)))
		{
			func_29(&(cParam0->f_13115), 0);
		}
		if (func_867(&(cParam0->f_13115)) < 30f)
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

bool func_436(char[4] cParam0)
{
	bVar0 = (_has_player_teleport_finished(player_id()) || !is_player_teleport_active());
	if (func_867(&(cParam0->f_603)) >= cParam0->f_13144)
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		if (is_player_teleport_active())
		{
			stop_player_teleport();
		}
		if ((func_84(32768) && func_868()) && func_867(&(cParam0->f_603)) < (cParam0->f_13144 + 10f))
		{
			return false;
		}
		if (func_122(cParam0, 8) && is_valid_interior(get_interior_at_coords(func_128(cParam0->f_607))))
		{
			unpin_interior(get_interior_at_coords(func_128(cParam0->f_607)));
			func_264(cParam0, 8);
		}
		_set_milliseconds_per_game_minute(2000);
		func_869(0, 0);
		func_264(cParam0, 4096);
		return true;
	}
	return false;
}

bool func_437(char[4] cParam0)
{
	func_870();
	if (!func_871())
	{
		return false;
	}
	if (!func_872(cParam0))
	{
		return false;
	}
	func_390(cParam0);
	func_874(cParam0, 128092);
	func_876(cParam0, 128214);
	func_877();
	func_878(cParam0);
	func_879();
	func_43(1);
	func_42(0);
	func_880();
	func_881();
	func_882(cParam0);
	return true;
}

void func_438(char[4] cParam0, int iParam1)
{
	func_68(iParam1);
	cParam0->f_10783 = iParam1;
}

bool func_439(char[4] cParam0)
{
	func_883(cParam0);
	func_884(cParam0);
	iVar0 = func_35(cParam0);
	iVar1 = func_37(cParam0);
	iVar2 = func_164(cParam0, iVar0);
	if (func_10(cParam0, 2097152))
	{
		if (iVar2 == 7 || iVar2 < 3)
		{
			func_862(cParam0);
		}
	}
	func_885(cParam0);
	func_886(cParam0);
	func_887(cParam0);
	func_888(cParam0);
	func_889(cParam0);
	func_890(cParam0);
	if (iVar2 != 5 && iVar2 != 6)
	{
		func_891(cParam0);
	}
	if ((func_35(cParam0) == 0 && iVar2 < 3) && func_278(cParam0) == 0)
	{
		func_433(cParam0);
	}
	if (func_123(cParam0, iVar0, 512))
	{
		set_vehicle_density_multiplier_this_frame(0f);
		set_random_vehicle_density_multiplier_this_frame(0f);
		set_parked_vehicle_density_multiplier_this_frame(0f);
	}
	func_76(cParam0);
	switch (iVar2)
	{
		case 0:
			if (func_892(cParam0, iVar0, 0))
			{
				if (func_893(cParam0, func_35(cParam0)) != -1 && _0x62de46f061caa468() < func_893(cParam0, func_35(cParam0)))
				{
					_0xf008e0ba1fe1d644((func_893(cParam0, func_35(cParam0)) - _0x62de46f061caa468()));
				}
				if ((func_35(cParam0) == 25 || func_35(cParam0) == 26) && func_84(32768))
				{
					func_379(cParam0, 524288);
				}
				if (func_122(cParam0, 4))
				{
					if (!func_10(cParam0, 4))
					{
						func_894(cParam0, iVar0);
						func_101(cParam0, 4);
					}
					func_895(cParam0);
					func_896(cParam0, iVar0, 1);
				}
				else
				{
					func_896(cParam0, iVar0, 1);
				}
			}
			break;
		case 1:
			if (func_865(cParam0))
			{
				if (func_897(cParam0))
				{
					if (func_10(cParam0, 4))
					{
						func_863(cParam0, 4);
					}
					func_896(cParam0, iVar0, 2);
				}
			}
			else if (func_898(cParam0) >= cParam0->f_13144)
			{
				if (func_10(cParam0, 4))
				{
					func_863(cParam0, 4);
				}
				func_896(cParam0, iVar0, 2);
			}
			break;
		case 2:
			if (func_892(cParam0, iVar0, 2))
			{
				if (!func_899(cParam0))
				{
					func_896(cParam0, iVar0, 4);
					if (func_900(cParam0, iVar0, iVar1))
					{
						func_896(cParam0, iVar0, 5);
					}
				}
				else
				{
					func_901(cParam0);
					func_896(cParam0, iVar0, 3);
					if (func_902(cParam0, iVar0))
					{
						func_896(cParam0, iVar0, 4);
						if (func_900(cParam0, iVar0, iVar1))
						{
							func_896(cParam0, iVar0, 5);
						}
					}
				}
			}
			else if (func_903(cParam0))
			{
				func_902(cParam0, iVar0);
			}
			break;
		case 3:
			if (func_902(cParam0, iVar0))
			{
				func_896(cParam0, iVar0, 4);
				if (func_900(cParam0, iVar0, iVar1))
				{
					func_896(cParam0, iVar0, 5);
				}
			}
			break;
		case 4:
			if (func_900(cParam0, iVar0, iVar1))
			{
				func_896(cParam0, iVar0, 5);
			}
			break;
		case 5:
			if (!func_22() == 0)
			{
				func_904(cParam0);
				func_905(cParam0, iVar0);
				func_906(cParam0);
				func_907(cParam0);
				if (func_123(cParam0, iVar1, 2))
				{
					if (func_908(cParam0, iVar1))
					{
						func_909(cParam0, iVar1);
					}
				}
			}
			if (func_892(cParam0, iVar0, 5))
			{
				if (func_892(cParam0, iVar0, 7))
				{
					if (!func_123(cParam0, func_35(cParam0), 67108864))
					{
						func_910(cParam0, func_35(cParam0));
					}
					func_911(cParam0, iVar1);
					func_884(cParam0);
					return true;
				}
				else
				{
					func_896(cParam0, iVar0, 7);
				}
			}
			else
			{
				if (!func_123(cParam0, func_35(cParam0), 4194304))
				{
					if ((!is_screen_faded_in() && !is_screen_fading_in()) && !func_123(cParam0, func_35(cParam0), 16))
					{
						do_screen_fade_in(0);
						func_912(0);
					}
					func_142(cParam0, func_35(cParam0), 4194304);
				}
				if ((func_913(get_player_index(), 0, 0, 1) && !func_122(cParam0, 8192)) && !func_123(cParam0, func_35(cParam0), 8))
				{
					func_49(1, 0);
					func_914("MISSION_WANTED", 7500, 0, 1, 0, 0, -1, -1, 0);
					if (func_915(cParam0))
					{
						func_896(cParam0, iVar0, 6);
					}
				}
				if (func_10(cParam0, 268435456))
				{
					if (_0x1b065a2bf7953815(1) != 1)
					{
						func_38(cParam0, func_36(iVar0), func_36(iVar1), iVar0, iVar1);
						func_863(cParam0, 268435456);
					}
				}
				if (func_122(cParam0, 1048576))
				{
					if (func_129(func_36(0)))
					{
						func_264(cParam0, 1048576);
					}
				}
			}
			break;
		case 6:
			if (!func_22() == 0)
			{
				func_904(cParam0);
				func_905(cParam0, iVar0);
				func_906(cParam0);
				func_907(cParam0);
				if (func_123(cParam0, func_37(cParam0), 2))
				{
					if (func_908(cParam0, func_37(cParam0)))
					{
						func_909(cParam0, func_37(cParam0));
					}
				}
			}
			if ((!func_913(get_player_index(), 0, 0, 1) || func_122(cParam0, 8192)) || func_123(cParam0, func_35(cParam0), 8))
			{
				if (func_892(cParam0, iVar0, 5))
				{
					if (func_916(cParam0))
					{
						func_896(cParam0, iVar0, 7);
					}
				}
				else
				{
					func_916(cParam0);
					func_896(cParam0, iVar0, 5);
				}
			}
			else
			{
				func_892(cParam0, iVar0, 5);
				func_917(cParam0);
			}
			break;
		case 7:
			if (func_892(cParam0, iVar0, 7))
			{
				if (!func_123(cParam0, func_35(cParam0), 67108864))
				{
					func_910(cParam0, func_35(cParam0));
				}
				func_911(cParam0, iVar1);
				func_884(cParam0);
				return true;
			}
			break;
		default:
			func_896(cParam0, iVar0, 7);
			break;
	}
	return false;
}

bool func_440()
{
	return func_918() != -1;
}

bool func_441()
{
	return func_919() != -1;
}

bool func_442()
{
	if (func_730() < 651 || func_730() > 750)
	{
		return false;
	}
	return true;
}

bool func_443()
{
	return func_920() != -1;
}

void func_444(int iParam0, bool bParam1, float fParam2)
{
	func_921(iParam0, bParam1, fParam2);
}

void func_445(int* iParam0)
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
	if (is_entity_attached_to_any_ped(*iParam0))
	{
		detach_entity(*iParam0, true, true);
	}
	delete_object(iParam0);
}

void func_446(int iParam0)
{
	if (!_does_volume_exist(iParam0))
	{
		return;
	}
	clear_ped_non_creation_area();
	_0xa1cfb35069d23c23(iParam0);
	_0x74c2b3dc0b294102(iParam0);
}

void func_447(int iParam0)
{
	if (_does_volume_exist(iParam0))
	{
		_delete_volume(iParam0);
	}
}

void func_448(var uParam0, int iParam1)
{
	if (func_922(uParam0))
	{
		_0x9cf1836c03fb67a2(uParam0, iParam1);
	}
}

void func_449(int iParam0)
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

void func_450(int iParam0)
{
	iParam0->f_1 = 0f;
	iParam0->f_2 = 0f;
	*iParam0 = 0;
}

void func_451(int iParam0, int iParam1)
{
	if (func_923(iParam0))
	{
		return;
	}
	if (func_924(iParam0) == iParam1)
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

int func_452(var uParam0)
{
	if (*uParam0 != 0)
	{
		_0xd2b9c78537ed5759(*uParam0);
		*uParam0 = 0;
	}
	return 1;
}

void func_453(var uParam0)
{
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		func_925(uParam0->f_288[iVar0], &(uParam0->f_229[iVar0]));
		iVar0++;
	}
}

void func_454(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_177((*uParam0)[iVar0]);
		iVar0++;
	}
}

bool func_455(int iParam0)
{
	return func_926(iParam0, 2);
}

int func_456(int iParam0)
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

int func_457(int iParam0)
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

int func_458(int iParam0)
{
	return iParam0 & 31;
}

bool func_459()
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

int func_460(int iParam0)
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

int func_461(int iParam0)
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

void func_462(int iParam0, var uParam1)
{
	Var0 = iParam0;
	Var0.f_1 = uParam1;
	network_set_rich_presence(4, &Var0, 2, 2);
}

int func_463()
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

int func_464(int iParam0)
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

void func_465(var uParam0, var uParam1, var uParam2)
{
	vVar0.x = uParam0;
	vVar0.f_1 = uParam1;
	vVar0.f_2 = uParam2;
	network_set_rich_presence(3, &vVar0, 3, 3);
}

void func_466(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_12106[iParam0]->f_1 = iParam1;
		return;
	}
	if (iParam1 == 0 || iParam1 == -1)
	{
		func_927(iParam0);
	}
	else
	{
		func_928(iParam0, iParam1);
	}
	func_929();
}

bool func_467(int iParam0)
{
	iVar0 = func_930(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887->f_12 == -1)
	{
		return is_bit_set(&(Global_40.f_283[iVar1]), iVar2);
	}
	return is_bit_set(&(Global_1058888->f_40567[iVar1]), iVar2);
}

bool func_468(int iParam0)
{
	if (!func_189(iParam0))
	{
		return false;
	}
	switch (func_194(iParam0))
	{
		case 1:
			switch (func_271(iParam0))
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
			switch (func_271(iParam0))
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

void func_469(int iParam0)
{
	iVar2 = func_931(0);
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_581(iVar1) == iParam0)
		{
			_0x6a564540fac12211(iVar2, iVar1);
		}
		iVar0++;
	}
	func_933(func_932(iParam0), 6);
}

void func_470(int iParam0)
{
	iVar2 = func_931(0);
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_581(iVar1) == iParam0)
		{
			_0x766315a564594401(iVar2, iVar1, 0);
		}
		iVar0++;
	}
	func_934(func_932(iParam0), 6);
}

int func_471(int iParam0)
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

int func_472(int iParam0)
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
	func_935(iParam0, Global_1898164->f_162);
	return 1;
}

bool func_473(int iParam0)
{
	return iParam0 != 0;
}

bool func_474(int iParam0)
{
	if (iParam0 != -1)
	{
		return true;
	}
	return false;
}

void func_475(int iParam0, var uParam1)
{
	if (!func_474(iParam0))
	{
		return;
	}
	if (*uParam1 == -1600776215)
	{
		return;
	}
	func_936(iParam0, *uParam1, 0);
	func_937(uParam1);
	Global_1935183->f_24 = 1;
}

void func_476(char* sParam0, int iParam1)
{
	sParam0->f_8 = (sParam0->f_8 || iParam1);
}

void func_477(int iParam0, float fParam1)
{
	iParam0->f_1 = (func_530() - fParam1);
	func_938(iParam0, 1);
	func_939(iParam0, 2);
	iParam0->f_2 = 0f;
}

bool func_478(int iParam0)
{
	return func_218(*iParam0, 2);
}

int func_479()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return iVar0;
	}
	return get_game_timer();
}

void func_480(bool bParam0)
{
	if (func_940())
	{
		Global_1357509 = 1;
	}
	if (func_941(-92416669))
	{
	}
	if (bParam0 && Global_1935630->f_44 == -1016714371)
	{
		set_current_ped_weapon(Global_35, -1569615261, true, 0, false, false);
		Global_1935630->f_44 = -1569615261;
	}
}

struct<4> func_481(int iParam0, int iParam1)
{
	Var0 = { func_942(iParam0, iParam1) };
	Var0.f_3 = func_943(iParam0, iParam1);
	return Var0;
}

int func_482(int iParam0)
{
	if (func_194(iParam0) == 1)
	{
		return func_271(iParam0);
	}
	return -1;
}

int func_483(int iParam0)
{
	if (func_194(iParam0) == 8)
	{
		return func_271(iParam0);
	}
	return -1;
}

char[] func_484(int iParam0)
{
	if (!func_272(iParam0))
	{
		return uVar0;
	}
	uVar0 = (*Global_1347702)[iParam0]->f_3;
	return uVar0;
}

void func_485(int iParam0, bool bParam1)
{
	if (func_22() != -1)
	{
		return;
	}
	if (iParam0 == 0 && func_84(32768))
	{
		return;
	}
	if (!func_84(32768))
	{
		func_944(1, bParam1);
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
	if (func_84(32768))
	{
		(*Global_2621440)[iParam0]->f_9.f_14 = func_284();
	}
}

void func_486(int iParam0, vector3 vParam1, var uParam4)
{
	(*Global_2621440)[iParam0]->f_9.f_7 = { vParam1 };
	(*Global_2621440)[iParam0]->f_9.f_13 = uParam4;
	(*Global_2621440)[iParam0]->f_9 = 5;
	(*Global_2621440)[iParam0]->f_9.f_15 = func_371(vParam1, 1);
}

bool func_487(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 13)
	{
		return false;
	}
	return true;
}

bool func_488(int iParam0)
{
	return Global_43884 == iParam0;
}

void func_489(bool bParam0)
{
	Global_1935496->f_18 = !bParam0;
}

bool func_490(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 120);
}

void func_491(int iParam0)
{
	Global_1310750->f_16035 = (Global_1310750->f_16035 - (Global_1310750->f_16035 && iParam0));
}

bool func_492(var uParam0, int iParam1, int iParam2)
{
	return is_bit_set(uParam0[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return is_bit_set(uParam0[iVar0], iVar1);
}

int func_493()
{
	return Global_1109400->f_245;
}

bool func_494(var uParam0, int iParam1)
{
	return func_394(uParam0->f_64, iParam1);
}

bool func_495(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 27)
	{
		return false;
	}
	return true;
}

bool func_496(int iParam0)
{
	return func_689(iParam0, 16, 1);
}

void func_497(char[4] cParam0, int iParam1)
{
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	if (!func_945(cParam0, iParam1, &iVar0))
	{
		return;
	}
	if (is_entity_an_object(iParam1) && func_946(cParam0, get_object_index_from_entity_index(iParam1)))
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

void func_498(int iParam0)
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

void func_499(int iParam0)
{
	func_947(iParam0, 8, 0);
}

void func_500(int iParam0, bool bParam1)
{
	if (!func_948(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (func_949(&((*Global_1360165)[iParam0]->f_12), 1))
		{
			func_947(iParam0, 1, 0);
		}
	}
	func_947(iParam0, 16, bParam1);
}

void func_501(int iParam0, bool bParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	if (!func_495(iParam0))
	{
		return;
	}
	if (func_496(iParam0))
	{
		if ((*Global_1360165)[iParam0]->f_129 != 0 && (*Global_1360165)[iParam0]->f_129 != get_id_of_this_thread())
		{
			return;
		}
	}
	if (bParam10)
	{
		func_950(iParam0, 56, 1);
		func_29(&(Global_1359489->f_40), 1);
	}
	func_500(iParam0, 0);
	func_947(iParam0, 4, 0);
	func_499(iParam0);
	func_951(iParam0);
	func_952(iParam0, 37, 1);
	bVar0 = func_165(Global_1360165[iParam0], 0);
	iVar1 = func_953(iParam0, 0);
	bVar2 = _0x800df3fc913355f3(iVar1);
	if (get_ped_config_flag(Global_1360165[iParam0], 503, true) && Global_1359489->f_16 & 8388608 == 0)
	{
		set_ped_config_flag(Global_1360165[iParam0], 503, false);
	}
	if (func_954(iParam0, 64, 1))
	{
		func_952(iParam0, 64, 1);
	}
	if (bParam3)
	{
		func_952(iParam0, 33, 1);
		func_952(iParam0, 34, 1);
		func_955(iParam0, 1056964608, -1, 1061158912);
		func_956(iParam0, 1, 1, 0);
		if (bParam6)
		{
			func_950(iParam0, 30, 1);
		}
		if (bParam7)
		{
			func_950(iParam0, 35, 1);
			if (bParam8)
			{
				func_950(iParam0, 62, 1);
			}
		}
		if (bVar0)
		{
			func_957(iParam0, 0);
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
		func_952(iParam0, 28, 1);
	}
	else
	{
		if (!bVar0)
		{
			set_ped_keep_task(Global_1360165[iParam0], true);
		}
		func_950(iParam0, 33, 1);
		func_956(iParam0, 0, 1, 0);
		if (fParam4 > 0f)
		{
			(*Global_1360165)[iParam0]->f_133 = fParam4;
			func_29(&((*Global_1360165)[iParam0]->f_130), 1);
		}
		else
		{
			func_450(&((*Global_1360165)[iParam0]->f_130));
		}
		if (bParam9)
		{
			func_950(iParam0, 34, 1);
		}
	}
	if (bParam1 || bParam2)
	{
		if (does_entity_exist(Global_1360165[iParam0]))
		{
			func_958(iParam0, bParam2, bParam2, bParam2, 0);
		}
	}
	else if (bVar0)
	{
		set_ped_can_use_auto_conversation_lookat(Global_1360165[iParam0], false);
	}
	if (func_954(iParam0, 45, 1))
	{
		func_952(iParam0, 45, 1);
	}
	func_959(iParam0, 16, 1);
	func_952(iParam0, 44, 1);
	(*Global_1360165)[iParam0]->f_129 = 0;
	Global_40.f_4942[iParam0]->f_4 = 0;
	if (bParam5)
	{
		if (func_165(func_960(iParam0), 0))
		{
			func_961(0, iParam0, bParam3, 0, bParam2);
		}
	}
}

void func_502(int iParam0)
{
	iParam0 = func_265(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_261(iParam0);
	if (!_does_thread_exist(iVar0))
	{
		func_509(iParam0);
	}
	else if (!is_thread_active(iVar0, false))
	{
		func_509(iParam0);
	}
}

bool func_503(int iParam0)
{
	iParam0 = func_265(iParam0);
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

void func_504(int iParam0)
{
	iParam0 = func_265(iParam0);
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

void func_505(int iParam0)
{
	iParam0 = func_265(iParam0);
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

bool func_506(int iParam0)
{
	if (!func_962(iParam0))
	{
		return false;
	}
	if (!func_330())
	{
		return true;
	}
	return false;
}

void func_507(int iParam0)
{
	iParam0 = func_265(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_510(iParam0))
	{
		return;
	}
	iVar0 = func_214(iParam0);
	func_963(iParam0);
	if (!_0x88ad6cc10d8d35b2(iVar0))
	{
		set_entity_as_mission_entity(iVar0, true, true);
	}
	iVar1 = get_entity_model(iVar0);
	if (_0xaa9f048dcf69b6dc(iVar1))
	{
		if (!func_506(iVar1))
		{
			set_ped_model_is_suppressed(iVar1, false);
		}
	}
	delete_ped(&iVar0);
	func_964(iParam0, 0);
	func_509(iParam0);
}

bool func_508(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (is_entity_dead(iParam0) || is_ped_injured(iParam0))
	{
	}
	iVar0 = func_260(iParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	return true;
}

void func_509(int iParam0)
{
	iParam0 = func_265(iParam0);
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

bool func_510(int iParam0)
{
	iParam0 = func_265(iParam0);
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

void func_511(int iParam0)
{
	if (is_player_dead(player_id()))
	{
		return;
	}
	iVar0 = func_214(iParam0);
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
	if (func_965(iParam0, 64))
	{
		func_504(iParam0);
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
	bVar3 = func_579(42);
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
				func_966(&((*Global_1900383)[iParam0]->f_27));
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
		func_504(iParam0);
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
		if (func_967(1) < 1)
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
		func_968(&((*Global_1900383)[iParam0]->f_26), bVar6);
	}
	if (!does_blip_exist((*Global_1900383)[iParam0]->f_26))
	{
		return;
	}
	bVar8 = false;
	if (func_965(iParam0, 32))
	{
		bVar8 = true;
	}
	bVar9 = is_ped_in_writhe(iVar0);
	bVar10 = false;
	iVar11 = func_969(iParam0);
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
	fVar15 = func_970(vVar12, Global_36);
	bVar16 = false;
	if (fVar15 > func_971(iParam0))
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
		func_972((*Global_1900383)[iParam0]->f_26);
		func_973((*Global_1900383)[iParam0]->f_26);
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
	if (func_855(iVar0) && !bVar9)
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
	iVar21 = func_967(iParam0);
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

int func_512(int iParam0)
{
	return shift_right(iParam0, 5) & 1023;
}

int func_513(int iParam0)
{
	if ((*Global_1347702)[iParam0]->f_12 & 1 != 0 || (*Global_1347702)[iParam0]->f_12 & 33554432 != 0)
	{
		return 1;
	}
	return 3;
}

int func_514(int iParam0)
{
	uVar0 = (*Global_1347702)[iParam0]->f_3;
	return get_hash_key(&uVar0);
}

void func_515(int iParam0, int iParam1)
{
	Global_40.f_490.f_402[iParam0] = (&Global_40.f_490.f_402[iParam0] - (Global_40.f_490.f_402[iParam0] && iParam1));
}

void func_516(int iParam0, int iParam1)
{
	Global_40.f_490.f_402[iParam0] = (Global_40.f_490.f_402[iParam0] || iParam1);
}

bool func_517(int iParam0)
{
	iParam0 = func_265(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (!func_510(iParam0))
	{
		return false;
	}
	iVar0 = func_214(iParam0);
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

void func_518(int iParam0)
{
	iParam0 = func_265(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_510(iParam0))
	{
		return;
	}
	iVar0 = func_214(iParam0);
	if (is_entity_dead(iVar0))
	{
		return;
	}
	_set_entity_health(iVar0, 0, 0);
}

void func_519(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (is_string_null_or_empty(sParam1))
	{
		sParam1 = "FEED_MONEY_EARN";
	}
	func_686(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 1831944558, 0, 109029619, 0, 0, 0, 1);
}

void func_520(int iParam0, bool bParam1, float fParam2, int iParam3, int iParam4)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if (bParam1)
	{
		iVar0 = round((to_float(iParam0) * fParam2));
		iVar1 = ((iParam0 - iVar0) / iParam3);
		if (func_974())
		{
			iVar2 = floor((to_float(iVar1) * 0.1f));
		}
		iParam0 = (iParam0 + iVar2);
		iVar1 = (iVar1 + iVar2);
		func_686(_create_var_string(2, "FEED_GANG_TOTAL_EARN", iParam0), "ITEMTYPE_TEXTURES", -1957849484, 0, 109029619, 0, 0, 0, 1);
		iParam0 = (iParam0 - iVar0);
		if (iVar0 > 0)
		{
			func_975(iVar0);
			func_976(iVar0, 0, 0);
		}
		func_686(_create_var_string(2, "FEED_GANG_PLAYER_EARN", iVar1), "ITEMTYPE_TEXTURES", 1831944558, 0, 109029619, 0, 0, 0, 1);
	}
	else
	{
		iVar1 = iParam0;
	}
	if (iVar1 > 0)
	{
		_money_increment_cash_balance(iVar1, iParam4);
		func_97(func_96(1644987397), iVar1);
	}
}

bool func_521(int iParam0)
{
	if (!func_246(iParam0))
	{
		return false;
	}
	return func_250(iParam0, 67108864);
}

void func_522(int iParam0)
{
	StringCopy(&cVar0, func_977(iParam0), 64);
	StringConCat(&cVar0, "_OUTLINE", 64);
	sVar8 = func_978(cVar0);
	_0x563fcb6620523917(get_hash_key(sVar8), -1482012664);
}

void func_523(int iParam0)
{
	StringCopy(&cVar0, func_977(iParam0), 64);
	StringConCat(&cVar0, "_OUTLINE", 64);
	sVar8 = func_978(cVar0);
	iVar9 = get_hash_key(sVar8);
	if (_0xe38450dbcbc70e3d(iVar9, -1305340593) || _0xe38450dbcbc70e3d(iVar9, -1482012664))
	{
		_0x6786d7afac3162b3(iVar9);
	}
}

bool func_524(var uParam0, int iParam1, int iParam2)
{
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	bVar2 = is_bit_set(uParam0[iVar0], iVar1);
	clear_bit((*uParam0)[iVar0], iVar1);
	return bVar2;
}

bool func_525(var uParam0, int iParam1, int iParam2)
{
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	bVar2 = is_bit_set(uParam0[iVar0], iVar1);
	set_bit((*uParam0)[iVar0], iVar1);
	return !bVar2;
}

bool func_526(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_527(int iParam0)
{
	if (!func_490(iParam0))
	{
		return true;
	}
	return Global_17504.f_42[iParam0]->f_4 > 0;
}

int func_528(int iParam0)
{
	if (func_490(iParam0))
	{
		return Global_17504.f_42[iParam0]->f_4;
	}
	return 0;
}

int func_529(int iParam0)
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

float func_530()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return (to_float(iVar0) / 1000f);
	}
	return (to_float(get_game_timer()) / 1000f);
}

void func_531(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	iVar0 = (((iParam2 + (60 * iParam3)) + (3600 * iParam4)) + (86400 * iParam5));
	if (func_979(iParam0) == 1 && bParam7)
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
	if ((bParam1 || bParam6) || func_22() != -1)
	{
		Global_17504.f_42[iParam0]->f_4 = 0;
	}
	Global_17504.f_42[iParam0]->f_4 = (Global_17504.f_42[iParam0]->f_4 + iVar0);
}

int func_532(int iParam0)
{
	if (!func_948(iParam0))
	{
		return 0;
	}
	if (!does_entity_exist(Global_1360165[iParam0]))
	{
		(*Global_1360165)[iParam0] = 0;
	}
	return Global_1360165[iParam0];
}

bool func_533(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return func_980(iParam0);
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

int func_534(int iParam0, bool bParam1, bool bParam2)
{
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (&Global_40.f_4283.f_6[iVar0] == iParam0)
		{
			func_547(Global_40.f_4283.f_6[iVar0], bParam1, bParam2);
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_535(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_2;
	}
	return -1;
}

void func_536(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_2 = iParam1;
}

int func_537()
{
	return Global_40.f_11095.f_35;
}

void func_538(int iParam0, int iParam1)
{
	if (iParam1 == 1)
	{
		func_981(iParam0, 0);
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
		func_539(1);
		Global_40.f_11922[0] = iParam0;
	}
}

void func_539(int iParam0)
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
			func_981(&(Global_40.f_11922[iVar0]), 0);
			Global_40.f_11922[iVar0] = 0;
			iVar1 = 1;
		}
		iVar0++;
	}
	if (iVar1 == 1)
	{
		func_982(1);
	}
}

bool func_540(int iParam0)
{
	return Global_40.f_490.f_402[iParam0] & 1 != 0;
}

int func_541()
{
	iVar0 = func_983((*Global_1347702)[9]->f_15);
	iVar1 = func_983((*Global_1835011)[69]->f_1);
	if (func_984(iVar0, iVar1, 1))
	{
		return 0;
	}
	return 1;
}

bool func_542(int iParam0)
{
	if (!func_188(iParam0))
	{
		return false;
	}
	return func_326((*Global_1835011)[iParam0]->f_1, 1);
}

int func_543(int iParam0)
{
	Var0 = Global_1357549->f_576;
	Var0.f_1 = 0;
	Var0.f_3 = iParam0;
	iVar5 = 0;
	if (func_985(Var0, 70005598, &iVar6, 0))
	{
		iVar5 = func_986(iVar6);
	}
	return iVar5;
}

int func_544(int iParam0)
{
	Var0 = Global_1357549->f_576;
	Var0.f_1 = 0;
	Var0.f_3 = iParam0;
	iVar5 = 1;
	if (func_987(Var0, -1875502208, &iVar5, 0))
	{
	}
	return iVar5;
}

void func_545(int iParam0, bool bParam1)
{
	func_988(iParam0, &iVar0, &iVar1);
	if (bParam1)
	{
		set_bit(Global_1357549->f_1848[iVar0], iVar1);
	}
	else
	{
		clear_bit(Global_1357549->f_1848[iVar0], iVar1);
	}
}

bool func_546(int iParam0)
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

void func_547(var uParam0, bool bParam1, bool bParam2)
{
	if (*uParam0 == 176656832)
	{
		return;
	}
	func_545(*uParam0, 0);
	if (bParam1)
	{
		if (bParam2)
		{
			func_548(2, *uParam0);
		}
		else
		{
			func_549(2, *uParam0);
		}
	}
	func_989(uParam0);
}

void func_548(int iParam0, int iParam1)
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

void func_549(int iParam0, int iParam1)
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

void func_550(int iParam0, int iParam1, bool bParam2)
{
	Global_1327479->f_4 = get_game_timer();
	func_990(iParam0, iParam1, bParam2);
}

int func_551(int iParam0)
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

int func_552(int iParam0)
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

void func_553(int iParam0, bool bParam1, int iParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, bool bParam7)
{
	iVar0 = func_991();
	if (iParam3 == 1142025875 || iParam3 == 1587891565)
	{
		if (bParam6)
		{
			iParam0 = func_992(iParam0);
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
	if (func_579(6))
	{
		iVar2 = 320;
		iVar3 = -320;
		if (!func_993())
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
	Global_40.f_11095.f_35 = func_308(Global_40.f_11095.f_35, iVar3, iVar2);
	iVar1 = func_991();
	if ((iVar1 != iVar0 && (iVar1 != 0 || iParam3 == -1091304842)) || bParam7)
	{
		iVar6 = func_994(iVar1);
		func_996(func_995(), 0, 4000);
		func_997(Global_40.f_11095.f_35);
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
		func_998(0);
	}
	if (iParam0 != 0)
	{
		if (iParam0 > 0)
		{
			func_97(func_96(-558776548), 1);
			Global_1347477->f_204 = 1;
			if (does_entity_exist(iParam5))
			{
				decor_set_int(iParam5, "honor_bank", iParam0);
			}
			if (!bParam1)
			{
				if (iParam0 > func_552(14))
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
					sParam4 = func_999(iParam3);
				}
				if (is_string_null_or_empty(sParam4))
				{
					func_686(_create_var_string(2, "PLAYER_HONOR_CHANGE_POS"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_GOOD"), 0, 109029619, "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_686(_create_var_string(2, "PLAYER_HONOR_CHANGE_POS_EVENT"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_GOOD"), 0, 109029619, "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
		else
		{
			func_97(func_96(-1636809477), 1);
			Global_1347477->f_204 = 0;
			if (!bParam1)
			{
				if (iParam0 < func_552(4))
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
					sParam4 = func_999(iParam3);
				}
				if (is_string_null_or_empty(sParam4))
				{
					func_686(_create_var_string(2, "PLAYER_HONOR_CHANGE_NEG"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_BAD"), 1, 859817522, "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_686(_create_var_string(2, "PLAYER_HONOR_CHANGE_NEG_EVENT"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_BAD"), 1, 859817522, "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
	}
	Var8 = { func_96(-1990689970) };
	stat_id_set_int(&Var8, Global_40.f_11095.f_35, true);
	if (!bParam1)
	{
		_0xe6b763c7f4902201(iParam0, iParam3);
	}
	if (Global_40.f_11095.f_35 <= -320 || Global_40.f_11095.f_35 >= 320)
	{
		func_361(10, 1);
	}
}

void func_554(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	Global_1347477->f_155[iParam0] = iParam1;
	Global_1347477->f_155[iParam0]->f_2 = iParam2;
	Global_1347477->f_155[iParam0]->f_3 = iParam3;
	Global_1347477->f_155[iParam0]->f_4 = iParam4;
	Global_1347477->f_155[iParam0]->f_5 = bParam5;
	Global_1347477->f_155[iParam0]->f_1 = get_game_timer() + 500;
}

int func_555(int iParam0)
{
	return shift_right(iParam0, 15) & 16383;
}

int func_556(int iParam0)
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

bool func_557(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _item_database_is_key_valid(iParam0, iParam1);
}

bool func_558(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (func_22() == -1)
	{
		if (func_1000(iParam0) && func_1001(iParam0))
		{
			func_1002(iParam0, iParam1, 1, &bParam2, iParam3);
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

bool func_559(int iParam0, int iParam1, int iParam2)
{
	*iParam1 = iParam2;
	func_1003(iParam0, iParam1);
	Var0 = { func_668(iParam0, 0, 1) };
	iVar5 = func_1004(iParam0, &Var0, 0, 0);
	iVar6 = func_1005(iParam0, 0);
	if ((iVar5 > 1 && !func_131()) && (iVar6 + iParam2) >= iVar5)
	{
		if (func_577(iParam0, -2051813666))
		{
			func_324(583, 1);
		}
		else
		{
			func_324(582, 0);
		}
	}
	if (func_1006(iParam0, &Var0, *iParam1, 0, 0))
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

void func_560(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return;
	}
	switch (func_638(iParam0, -949239683))
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

int func_561(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_557(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_576(iParam0);
	if (iVar0 == 307971639 || (bParam1 && iVar0 == -427144552))
	{
		iVar1 = func_1007(iParam0, 1);
		if (iVar1 != 0)
		{
			return get_ped_ammo_by_type(Global_35, iVar1);
		}
	}
	else if (iVar0 == -427144552)
	{
		return func_1008(iParam0, 0);
	}
	iVar2 = _0xe787f05dfc977bde(func_931(bParam2), iParam0, 0);
	return iVar2;
}

bool func_562(int iParam0)
{
	if (func_22() != -1)
	{
		return false;
	}
	return func_563(iParam0) != 0;
}

int func_563(int iParam0)
{
	iVar1 = 0;
	while (iVar1 < func_1009())
	{
		iVar0 = _0x126cbebba46693cf(iVar1, -2076669067, 0);
		if (iParam0 == func_1010(iVar0))
		{
			return iVar0;
		}
		iVar1++;
	}
	return 0;
}

int func_564(int iParam0)
{
	return _0x6052b4de6657684f(iParam0);
}

int func_565(int iParam0)
{
	iVar1 = 0;
	while (iVar1 < func_1009())
	{
		iVar0 = _0x126cbebba46693cf(iVar1, -2076669067, 0);
		if (iParam0 == func_564(iVar0))
		{
			if (func_346(func_1010(iVar0), 1, 0))
			{
				iVar2++;
			}
		}
		iVar1++;
	}
	return iVar2;
}

void func_566(int iParam0)
{
	_0x3ea62e56f386c997(iParam0, 1);
	func_1011(48);
	func_366(0, -1);
}

bool func_567(int iParam0)
{
	if (func_22() != -1)
	{
		return false;
	}
	return func_326((*Global_1347702)[iParam0]->f_15, 1);
}

int func_568(int iParam0)
{
	return _0x62cab7db62ead434(-2076669067, iParam0);
}

int func_569(int iParam0)
{
	return _0x93f2e7b5db85657b(-2076669067, iParam0);
}

bool func_570(int iParam0)
{
	if (func_22() != -1)
	{
		return false;
	}
	return func_326((*Global_1835011)[iParam0]->f_1, 1);
}

bool func_571(int iParam0)
{
	if (func_22() != -1)
	{
		return false;
	}
	if (!func_272(iParam0))
	{
		return false;
	}
	return func_190((*Global_1347702)[iParam0]->f_15);
}

int func_572()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		if (func_346(func_1012(iVar1), 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_573(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, bool bParam7)
{
	switch (iParam0)
	{
		case 38:
			sVar0 = "MISSION_RCCIG";
			sVar1 = "SP_MISSIONS_13";
			if (func_398() && (func_571(38) || func_567(38)))
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
			if (func_398() && (func_571(39) || func_567(39)))
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
			iVar9 = func_1013(iParam3, 19);
			iVar14 = -1531394072;
			iVar11 = get_hash_key("BLIP_RC_COLLECTABLE_EXOTICS");
			iVar13 = 911890963;
			break;
		case 41:
			if (func_398() && (func_571(41) || func_567(41)))
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
			if (func_398() && (func_571(49) || func_567(49)))
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
			iVar9 = func_1013(iParam3, 20);
			iVar14 = 678508515;
			iVar11 = 1986498931;
			iVar13 = -1424865411;
			break;
	}
	sVar2 = func_1014(iParam0, iVar14, iParam6, sVar2, sParam4, iVar10, iParam3);
	if (iParam6 == 8)
	{
		iVar11 = get_hash_key("TOAST_MEDAL_COLLECTABLE");
		iVar12 = get_hash_key("hud_toasts");
	}
	else
	{
		iVar12 = get_hash_key("toast_log_blips");
	}
	if (func_1015(iParam0, iVar13, iVar14))
	{
	}
	if (func_1016(iParam0, iVar13, vVar6, sVar4, sVar3))
	{
	}
	if (func_1017(iParam0, iVar13, sVar2, sVar5, sVar0, sVar1, iVar11, iVar12))
	{
	}
	if (func_1018(iParam0, iVar13, iVar14, iParam3, iParam1, iParam6, iVar9, iParam2, iVar10, bParam5))
	{
	}
	if (func_1019(iParam0, iVar13, iVar14, iParam6))
	{
	}
	if (func_1020(iParam0, iVar13, iVar14, iParam6, bParam7))
	{
	}
}

void func_574(int iParam0)
{
	Global_40.f_12004 = (Global_40.f_12004 || iParam0);
}

void func_575(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	switch (iParam0)
	{
		case 38:
			sVar0 = "COL_CC_TITLE";
			sVar3 = "COL_CC_CARD_FOUND";
			iVar7 = -2076669067;
			if (func_398() && (func_571(38) || func_567(38)))
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
			if (func_398() && (func_571(39) || func_567(39)))
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
			if (func_398() && (func_571(49) || func_567(49)))
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
		if (func_398() && (func_571(38) || func_567(38)))
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
			func_1021(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 1)
		{
			sVar3 = "COL_CC_CARD_POSTED_OBJ";
			func_1021(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 0)
		{
			func_693(_create_var_string(2, sVar0), _create_var_string(2, func_1022(func_569(iParam6))), iVar5, iVar4, -2, 0, 0, 0, 0, 1, 1);
			func_1021(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			sVar1 = "COL_CC_INTRO";
			func_1021(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == -440187297)
	{
		if (func_398() && (func_571(39) || func_567(39)))
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
			func_1021(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_1021(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == 2103522376)
	{
		if (func_398() && (func_571(49) || func_567(49)))
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
			func_1021(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_1021(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else
	{
		_uilog_set_pending_details_id(1, iVar6);
		if (iParam5 == 1)
		{
			func_1021(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_1021(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
}

int func_576(int iParam0)
{
	if (!func_557(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

bool func_577(int iParam0, int iParam1)
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

bool func_578(int iParam0, int iParam1)
{
	if (!func_557(iParam0, 0))
	{
		return false;
	}
	return _0x245d07651b1d183b(iParam0, iParam1);
}

bool func_579(int iParam0)
{
	if (!func_1023(iParam0))
	{
		return false;
	}
	return func_1024(iParam0);
}

void func_580(int iParam0)
{
	if (!func_1023(iParam0))
	{
		return;
	}
	func_1025(iParam0);
	func_1026(iParam0);
}

int func_581(int iParam0)
{
	if (!func_557(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_582(int iParam0, bool bParam1)
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
	if (func_557(iVar0, 0))
	{
		if (bParam1)
		{
			if (func_1027(iVar0) || func_124(iVar0))
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

int func_583(int iParam0, bool bParam1)
{
	if (!func_557(iParam0, 0))
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

void func_584(int iParam0)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	if (!func_671(iParam0))
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

bool func_585(bool bParam0)
{
	if (func_22() == -1)
	{
		return true;
	}
	return _inventory_are_local_changes_allowed(func_931(bParam0));
}

bool func_586(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
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
		Var0 = { func_668(iParam0, 0, 1) };
		iVar5 = 1728382685;
		Var6.f_9 = -1591664384;
		iVar28 = 0;
		while (iVar28 < 4)
		{
			iVar5 = func_1028((386 + iVar28), 1);
			if (func_1029(iParam0, &Var0, iVar5, 0))
			{
				if (func_1030(iParam0, &Var6, iVar5))
				{
					Var29 = { func_1031(iParam0, Var0, iVar5, 0) };
					func_1032(iParam0, &Var29, &Var0, 1, -142743235, 1, 0);
				}
				else
				{
					iVar28++;
				}
				if (func_585(0))
				{
					_give_weapon_to_ped_2(Global_35, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
					if (!has_ped_got_weapon(Global_35, iParam0, 0, false))
					{
						return false;
					}
					func_587(_get_ammo_type_for_weapon(iParam0), iParam1, iParam6);
					func_1033(iParam0, iParam1);
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

bool func_587(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return true;
	}
	if (!func_589(iParam0))
	{
		return false;
	}
	if (!func_585(0))
	{
		return false;
	}
	_add_ammo_to_ped_by_type(Global_35, iParam0, iParam1, iParam2);
	return true;
}

bool func_588(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	iVar0 = func_583(iParam0, 0);
	if (is_weapon_valid(iVar0))
	{
		if (func_22() == -1)
		{
			func_584(iVar0);
			if (iParam1 == 1248274121)
			{
				func_1034(iVar0);
			}
		}
		if (!func_1006(iParam0, &uVar1, 1, 0, 0))
		{
			func_1002(iParam0, 1, 0, bParam2, iParam1);
			iVar6 = func_1035(iVar0);
			if (_is_weapon_sniper(iVar0))
			{
				func_586(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == -1415022764 || iVar0 == -160924582)
			{
				func_586(iVar0, 0, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == 2055893578)
			{
				func_586(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (_is_weapon_melee(iVar0))
			{
				if (iVar0 == 494733111 && !func_993())
				{
					return false;
				}
				if (_0x2c83212a7aa51d3d(iParam0))
				{
				}
				else if (!func_1036(iVar0))
				{
					func_586(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
				}
				else
				{
					func_586(iVar0, _get_weapon_clip_size(iVar0) * 4, bParam3, bParam4, 0, 0, iParam1, 0);
				}
			}
			else if (_is_weapon_one_handed(iVar0))
			{
				iVar7 = func_1037(Global_35, 2, 0, 1);
				if ((((func_671(iVar7) && !Global_43891) && iVar7 != iVar0) && !func_579(24)) && bParam4)
				{
					_0xe9bd19f8121ade3e(Global_35, iVar7);
				}
				bVar8 = true;
				if (func_671(iVar7) && func_579(24))
				{
					if (!func_586(iVar0, iVar6, bParam3, bParam4, 3, bVar8, iParam1, 0))
					{
						return false;
					}
				}
				else if (!func_586(iVar0, iVar6, bParam3, bParam4, 0, bVar8, iParam1, 0))
				{
					return false;
				}
			}
			else if (!func_586(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0))
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
		func_324(480, 1);
	}
	return true;
}

bool func_589(int iParam0)
{
	return _is_ammo_valid(iParam0);
}

bool func_590(int iParam0, int iParam1, int iParam2)
{
	if (!func_589(iParam0))
	{
		return false;
	}
	iVar4 = _get_weapon_type_from_ammo_type(iParam0);
	iVar3 = get_ped_ammo_by_type(Global_35, iParam0);
	if (func_671(iVar4))
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
	if (func_346(611073244, 1, 0) && iParam2 == -897553835)
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
		func_625(func_1038(iParam0), func_624(iParam0), 1);
		return false;
	}
	if (iVar2 == (iVar3 + iVar0))
	{
		if (func_22() == -1)
		{
			if (func_326((*Global_1835011)[14]->f_1, 1))
			{
				func_324(416, 0);
			}
		}
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_585(0))
	{
		if (func_587(iParam0, iVar0, iParam2))
		{
			*iParam1 = iVar0;
			return true;
		}
	}
	else
	{
		return func_630(iParam0, *iParam1, iParam2);
	}
	return false;
}

void func_591(int iParam0)
{
	if ((iParam0 == -615217896 && !func_337()) || iParam0 != -615217896)
	{
		if (func_1039(Global_35, iParam0, &uVar0))
		{
			func_609(player_ped_id(), iParam0, 0, -358215195, 1, 1, 1, 0, 1, 1);
		}
	}
	switch (iParam0)
	{
		case -62615415:
			Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
			func_615();
			break;
		case -832719552:
			Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
			func_615();
			break;
		case -1941112926:
			Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
			func_615();
			break;
		case -615217896:
			Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
			func_613();
			break;
		case -121629511:
			Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.2f);
			func_611();
			break;
	}
}

void func_592(int iParam0)
{
	switch (iParam0)
	{
		case -224110471:
			Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
			func_611();
			break;
		case 1289585739:
			Global_40.f_11095.f_61 = (Global_40.f_11095.f_61 + 0.1f);
			func_612();
			break;
		case 1441506783:
			Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
			break;
		case 780305678:
			Global_40.f_11095.f_56 = (Global_40.f_11095.f_56 + 0.1f);
			break;
		case -935153695:
			Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
			func_613();
			break;
		case 655868243:
			Global_40.f_11095.f_63 = (Global_40.f_11095.f_63 + 0.1f);
			func_614();
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
			func_615();
			break;
		case -569248339:
			Global_40.f_11095.f_64 = (Global_40.f_11095.f_64 + 0.3f);
			func_1040();
			break;
		case -1196089647:
			Global_40.f_11095.f_68 = (Global_40.f_11095.f_68 + 0.1f);
			break;
		case -982895431:
			Global_40.f_11095.f_69 = (Global_40.f_11095.f_69 + 0.1f);
			func_1041();
			break;
		case -1056342069:
			Global_40.f_11095.f_70 = (Global_40.f_11095.f_70 + 0.2f);
			break;
	}
}

struct<2> func_593(int iParam0)
{
	Var0.f_1 = iParam0;
	return Var0;
}

struct<2> func_594(int iParam0, int iParam1)
{
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

void func_595(int iParam0)
{
	bVar0 = func_577(iParam0, -2017733358);
	if (func_1042() < 3)
	{
		if (bVar0)
		{
			if (func_1044(func_1043(iParam0), iParam0))
			{
				func_625(79, func_624(func_1043(iParam0)), 1);
			}
			else
			{
				func_625(78, func_624(func_1043(iParam0)), 1);
			}
		}
		else
		{
			func_625(80, func_624(func_1045(iParam0)), 1);
		}
	}
}

bool func_596()
{
	if (((((func_1046(839908568, 400) || func_1046(-1134030454, 400)) || func_1046(623353496, 400)) || func_1046(-344413337, 400)) || func_1046(-1664948962, 400)) || func_1046(1795228059, 400))
	{
		return true;
	}
	return false;
}

int func_597(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, int iParam7)
{
	iVar0 = func_704(iParam0, bParam6, iParam7);
	if (!bParam1)
	{
		func_519(iVar0, sParam4, iParam5);
	}
	iVar1 = 752097756;
	if (bParam6)
	{
		iVar1 = -897553835;
	}
	func_520(iVar0, bParam1, fParam2, iParam3, iVar1);
	return iVar0;
}

void func_598(int iParam0)
{
	switch (iParam0)
	{
		case -625427311:
			func_573(51, 0, 0, 1520110311, 0, 0, 4, 0);
			func_575(51, 0, 0, 0, 0, -1, 0);
			func_1047(8192);
			break;
		case 581047644:
			func_573(51, 0, 0, -1992824800, 0, 0, 1, 0);
			func_575(51, 0, 0, 0, 0, -1, 0);
			func_1047(524288);
			break;
		case -644199619:
			func_573(39, 0, 0, 0, 0, 0, 1, 0);
			func_575(39, 0, 0, 0, 0, -1, 0);
			func_1048(16);
			break;
		case 684296857:
			func_573(41, 0, 0, 0, 0, 0, 1, 0);
			func_575(41, 0, 0, 0, 0, -1, 0);
			func_1049(8);
			break;
		case 466137807:
			func_573(49, 0, 0, 0, 0, 0, 1, 0);
			func_575(49, 0, 0, 0, 0, -1, 0);
			func_1050(16);
			break;
		case -1087522507:
			func_573(43, 0, 0, -1791518714, func_1051(1), 0, -1, 0);
			func_1052(1);
			break;
		case -405829000:
			func_573(43, 0, 0, -2087881550, func_1051(2), 0, -1, 0);
			func_1052(2);
			break;
		case 378660860:
			func_573(43, 0, 0, 1908068621, func_1051(4), 0, -1, 0);
			func_1052(4);
			break;
		case 1566111097:
			func_573(43, 0, 0, 1611247019, func_1051(8), 0, -1, 0);
			func_1052(8);
			break;
		case 1276007140:
			func_573(43, 0, 0, 1319635688, func_1051(16), 0, -1, 0);
			func_1052(16);
			break;
	}
}

void func_599(int iParam0)
{
	if (func_1053() == 1)
	{
		if (func_567(39))
		{
			func_324(342, 0);
		}
		else
		{
			func_324(343, 0);
			func_1048(1);
		}
	}
	if (func_1053() >= 30)
	{
		func_324(344, 0);
	}
	func_573(39, 0, 0, 0, 0, 0, -1, 0);
	func_575(39, 0, 0, func_1053(), 30, 1, 0);
}

void func_600(int iParam0)
{
	if (func_1054() == 1)
	{
		if (func_567(49))
		{
			func_324(409, 0);
		}
		else
		{
			func_324(410, 0);
			func_1050(1);
		}
	}
	if (func_1054() >= 10)
	{
		func_324(411, 0);
	}
	func_573(49, 0, 0, 0, 0, 0, -1, 0);
	func_575(49, 0, 0, func_1054(), 10, 1, 0);
}

void func_601(int iParam0)
{
	switch (iParam0)
	{
		case 1369162587:
			_0x3ea62e56f386c997(-949689219, 1);
			func_324(437, 0);
			func_324(440, 0);
			func_1055(-949689219, 444160793, &sVar0, 1, 0, 0);
			func_573(51, 0, 0, -949689219, sVar0, 0, -1, 0);
			func_575(51, 0, 0, sVar0, func_1013(-949689219, 20), 1, 0);
			func_1047(1);
			func_1056(-748969569, 0, 0);
			break;
		case 1610047510:
			_0x3ea62e56f386c997(-1248968496, 1);
			func_1055(-1248968496, -1969404854, &sVar0, 1, 0, 0);
			func_573(51, 0, 0, -1248968496, sVar0, 0, -1, 0);
			func_575(51, 0, 0, sVar0, func_1013(-1248968496, 20), 1, 0);
			func_1047(8);
			break;
		case 1317879106:
			_0x3ea62e56f386c997(1706369307, 1);
			func_1055(1706369307, -832850511, &sVar0, 1, 0, 0);
			func_573(51, 0, 0, 1706369307, sVar0, 0, -1, 0);
			func_575(51, 0, 0, sVar0, func_1013(1706369307, 20), 1, 0);
			func_1047(64);
			break;
		case 1062444751:
			_0x3ea62e56f386c997(1520110311, 1);
			func_1055(1520110311, -100913452, &sVar0, 1, 0, 0);
			func_573(51, 0, 0, 1520110311, sVar0, 0, -1, 0);
			func_575(51, 0, 0, sVar0, func_1013(1520110311, 20), 1, 0);
			func_1047(512);
			break;
		case 754186760:
			_0x3ea62e56f386c997(-1992824800, 1);
			func_324(438, 0);
			func_1055(-1992824800, 905173572, &sVar0, 1, 0, 0);
			func_573(51, 0, 0, -1992824800, sVar0, 0, -1, 0);
			func_575(51, 0, 0, sVar0, func_1013(-1992824800, 20), 1, 0);
			func_1047(32768);
			break;
		default:
			func_324(439, 0);
			break;
	}
}

void func_602()
{
	if (chal_get_num_ranks_completed(-1278339625) < 2)
	{
		chal_add_goal_progress_int(-1278339625, -1316535105, 1);
	}
}

void func_603(int iParam0, int iParam1)
{
	iVar1 = 0;
	if (func_22() == -1)
	{
		if (!func_567(43))
		{
			if (iParam0 == 281887510)
			{
				func_324(348, 0);
			}
			else if (iParam0 == -164081697)
			{
				func_324(350, 0);
			}
			else if (iParam0 == -1161319399)
			{
				func_324(352, 0);
			}
			else if (iParam0 == 728781265)
			{
				func_324(400, 0);
			}
		}
		else if (func_577(iParam0, 412399755))
		{
			func_1057(-1791518714);
			if (func_1058() == 0)
			{
				func_366(0, 10);
				iVar1 = func_1059(iParam0, iParam1, 1);
				if (((iParam0 == 281887510 || iParam0 == -164081697) || iParam0 == -1161319399) || iParam0 == 728781265)
				{
					if (func_1060(iParam0) < func_1061(iParam0))
					{
						func_573(43, iParam0, iParam1, -1791518714, iVar1, 0, -1, 0);
						func_575(43, 0, 0, iVar1, 30, 1, 0);
					}
				}
			}
		}
		if (!func_567(44))
		{
			if (iParam0 == -222563712)
			{
				func_324(354, 0);
			}
			else if (iParam0 == 1794857344)
			{
				func_324(399, 0);
			}
			else if (iParam0 == 1952409553)
			{
				func_324(401, 0);
			}
		}
		else if (func_577(iParam0, 709057512))
		{
			func_1057(-2087881550);
			if (func_1058() == 1)
			{
				func_366(0, 10);
				iVar1 = func_1059(iParam0, iParam1, 2);
				if ((iParam0 == -222563712 || iParam0 == 1794857344) || iParam0 == 1952409553)
				{
					if (func_1060(iParam0) < func_1061(iParam0))
					{
						func_573(43, iParam0, iParam1, -2087881550, iVar1, 0, -1, 0);
						func_575(43, 0, 0, iVar1, 37, 1, 0);
					}
				}
			}
		}
		if (!func_567(45))
		{
			if (iParam0 == 2116770557)
			{
				func_324(359, 0);
			}
			else if (iParam0 == -651064726)
			{
				func_324(394, 0);
			}
			else if (iParam0 == -404270094)
			{
				func_324(395, 0);
			}
			else if (iParam0 == 2093126853)
			{
				func_324(398, 0);
			}
		}
		else if (func_577(iParam0, -1478961327))
		{
			func_1057(1908068621);
			if (func_1058() == 2)
			{
				func_366(0, 10);
				iVar1 = func_1059(iParam0, iParam1, 4);
				if (iParam0 == 2116770557)
				{
					if (!func_1062(_0x126cbebba46693cf(iVar0, 2114735110, 0)) >= 25)
					{
						func_1063(_0x126cbebba46693cf(iVar0, 2114735110, 0), 1);
						func_1011(48);
					}
					if (func_1060(iParam0) < func_1061(iParam0))
					{
						func_573(43, iParam0, iParam1, 1908068621, iVar1, 0, -1, 0);
						func_575(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
				else if ((iParam0 == -651064726 || iParam0 == -404270094) || iParam0 == 2093126853)
				{
					if (func_1060(iParam0) < func_1061(iParam0))
					{
						func_573(43, iParam0, iParam1, 1908068621, iVar1, 0, -1, 0);
						func_575(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
			}
		}
		if (!func_567(46))
		{
			if (iParam0 == 2085530337)
			{
				func_324(356, 0);
			}
			else if (iParam0 == -150591160)
			{
				func_324(402, 0);
			}
			else if (iParam0 == -323969289)
			{
				func_324(404, 0);
			}
			else if (iParam0 == 1504361882)
			{
				func_324(406, 0);
			}
		}
		else if (func_577(iParam0, -1238404098))
		{
			func_1057(1611247019);
			if (func_1058() == 3)
			{
				func_366(0, 10);
				iVar1 = func_1059(iParam0, iParam1, 8);
				if (((iParam0 == 2085530337 || iParam0 == -150591160) || iParam0 == -323969289) || iParam0 == 1504361882)
				{
					if (func_1060(iParam0) < func_1061(iParam0))
					{
						func_573(43, iParam0, iParam1, 1611247019, iVar1, 0, -1, 0);
						func_575(43, 0, 0, iVar1, 50, 1, 0);
					}
				}
			}
		}
		if (!func_567(47))
		{
			if (iParam0 == -1521783510)
			{
				func_324(396, 0);
			}
			else if (iParam0 == 1714875242)
			{
				func_324(397, 0);
			}
			else if (iParam0 == 927763737)
			{
				func_324(405, 0);
			}
			else if (iParam0 == 1019229063)
			{
				func_324(403, 0);
			}
		}
		else if (func_577(iParam0, 1160548794))
		{
			func_1057(1319635688);
			if (func_1058() == 4)
			{
				func_366(0, 10);
				iVar1 = func_1059(iParam0, iParam1, 16);
				if (((iParam0 == -1521783510 || iParam0 == 1714875242) || iParam0 == 927763737) || iParam0 == 1019229063)
				{
					if (func_1060(iParam0) < func_1061(iParam0))
					{
						func_573(43, iParam0, iParam1, 1319635688, iVar1, 0, -1, 0);
						func_575(43, 0, 0, iVar1, 25, 1, 0);
					}
				}
			}
		}
	}
}

void func_604(int iParam0)
{
	if (iParam0 == 2116770557)
	{
		if (!func_1062(_0x126cbebba46693cf(iVar0, 2114735110, 0)) >= 25)
		{
			func_1063(_0x126cbebba46693cf(iVar0, 2114735110, 0), 1);
			func_1011(48);
		}
	}
}

void func_605(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar0 = _0x126cbebba46693cf(iVar1, 678508515, -1160144609);
		if (func_346(func_1064(iVar0, 10), 1, 0))
		{
			if (bParam2)
			{
				func_1065(iParam0, iVar0, sVar2, iParam1, bParam2);
			}
			else
			{
				func_1066(iParam0, iVar0, bParam3);
			}
		}
		iVar1++;
	}
}

void func_606(int iParam0, int iParam1, int iParam2)
{
	if (func_22() == -1)
	{
		if (does_entity_exist(iParam2))
		{
			iVar0 = _0x6f02b5e50511721e(iParam2);
			if (iVar0 < -1)
			{
			}
			else if (iVar0 >= 0)
			{
				func_597(0, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, iVar0);
				return;
			}
		}
	}
	switch (iParam0)
	{
		case 489075255:
			func_597(-949580860, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1394529493:
			func_597(-1171997683, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1262623627:
			func_597(-2140931002, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1124867377:
			func_597(-1116228267, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1790920086:
			func_597(2112896861, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -2001202686:
			func_597(-1915150712, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1111063991:
			func_597(994220262, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1576210101:
			func_597(-1388440107, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 675090918:
			func_597(-1531790128, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 355838765:
			func_597(1351791770, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -343824903:
			func_597(-161493966, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1142684684:
			func_597(668131102, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1243851340:
			if (!func_1067())
			{
				func_597(1330954593, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			}
			break;
		case -525490740:
			func_597(817681514, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1736635264:
			func_597(1404311868, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1302860970:
			func_597(-175152067, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -1027115192:
			func_597(-526915387, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -1064332555:
			func_597(101362741, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -1954478446:
			func_597(1458818027, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -518592739:
			func_597(-1957208512, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -2010073778:
			func_597(2066857461, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -700133011:
			func_597(803940201, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -1415414735:
			func_597(-1717765429, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case 2045548742:
			func_597(1379920914, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case 830381058:
			func_597(447209691, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
	}
}

void func_607(int iParam0)
{
	if (func_567(41))
	{
		func_324(363, 0);
	}
	else
	{
		func_324(362, 0);
	}
	switch (iParam0)
	{
		case 323124696:
			func_1068(-1865241121);
			func_1069(-642026005);
			func_1070(-642026005);
			func_366(0, 10);
			break;
		case -2108314374:
			func_1068(2117142684);
			func_1069(-940584364);
			func_1070(-940584364);
			func_366(0, 10);
			break;
		case -1193798153:
			func_1068(-1409326024);
			func_1069(1972645282);
			func_1070(1972645282);
			func_366(0, 10);
			break;
		case -787702678:
			func_1068(-641744968);
			func_1069(1667205433);
			func_1070(1667205433);
			func_366(0, 10);
			break;
		case -804542901:
			func_1068(-946988203);
			func_1069(1362715885);
			func_1070(1362715885);
			func_366(0, 10);
			break;
		case -1696275132:
			func_1068(-646136018);
			func_1069(1053540370);
			func_1070(1053540370);
			func_366(0, 10);
			break;
		case -161595323:
			func_1068(-955835837);
			func_1069(-1100103852);
			func_1070(-1100103852);
			func_366(0, 10);
			break;
		case -1114363619:
			func_1068(-179276075);
			func_1069(-1409869209);
			func_1070(-1409869209);
			func_366(0, 10);
			break;
		case -368407134:
			func_1068(-492711560);
			func_1069(-1760235357);
			func_1070(-1760235357);
			func_366(0, 10);
			break;
		case 1997759228:
			func_1068(1764383959);
			func_1069(-138366827);
			func_1070(-138366827);
			func_366(0, 10);
			break;
		case 1265573293:
			func_1068(317501533);
			func_1069(-1261163843);
			func_1070(-1261163843);
			func_366(0, 10);
			break;
		case -1030441283:
			func_1068(817753087);
			func_1069(-963523016);
			func_1070(-963523016);
			func_366(0, 10);
			break;
		case -1490884871:
			func_1068(576606016);
			func_1069(560825326);
			func_1070(560825326);
			func_366(0, 10);
			break;
		case -395458616:
			func_1068(814934957);
			func_1069(858269539);
			func_1070(858269539);
			break;
	}
}

void func_608(int iParam0, int iParam1)
{
	func_1071(iParam0, iParam1, &uVar0);
}

int func_609(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	if (iParam3 == -358215195)
	{
		Var0 = { func_668(iParam1, 1, 0) };
		iParam3 = func_669(Var0.f_4);
		if (iParam3 == -358215195)
		{
			return 0;
		}
	}
	if (!func_1072(iParam1, iParam2, func_656(iParam3, 1), bParam4, bParam9))
	{
		return 0;
	}
	func_1073(1, (func_22() == -1 && bParam5), 1);
	switch (iParam3)
	{
		case 1145151482:
		case 1742327865:
			if (bParam8 && iParam1 != &Global_1946804->f_57[func_656(iParam3, 1)])
			{
				func_667(31, 0, 0, 0, 0);
			}
			break;
		case 1108822547:
			if (func_1074(32768) && iParam1 != &Global_1946804->f_57[func_656(iParam3, 1)])
			{
				func_1075();
				func_667(22, iParam3, 256, 0, 0);
			}
			clear_ped_damage_decal_by_zone(iParam0, 2, "ALL");
			clear_ped_blood_damage_by_zone(iParam0, 2);
			break;
	}
	if (!bParam6)
	{
		if (bParam7)
		{
			func_667(22, iParam3, 0, 0, 0);
		}
		return 1;
	}
	iVar5 = func_1076(iParam3);
	if (is_ped_a_player(iParam0))
	{
		func_667(19, 0, iVar5, 0, 0);
		if ((iParam3 == 1742327865 || iParam3 == 1108822547) || iParam3 == 1145151482)
		{
			func_1077(0);
			func_1078(36, 0, 0);
		}
	}
	else
	{
		iVar5 |= 1;
		func_667(19, 0, iVar5, iParam0, 0);
	}
	return 1;
}

bool func_610(int iParam0, bool bParam1)
{
	Var3.f_9 = -1591664384;
	bVar17 = false;
	*iParam0 = 0;
	iVar18 = func_1037(get_player_ped(get_player_index()), 2, 1, 0);
	iVar19 = func_1037(get_player_ped(get_player_index()), 3, 1, 0);
	if (func_1079("ALL WEAPONS", &iVar0, &iVar1, -1591664384, 0))
	{
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (func_1080(&Var3, iVar2, iVar0, iVar1))
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
						func_1081(iVar0);
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

void func_611()
{
	_0x11a7ff918ef6bc66(player_id(), (1f - Global_40.f_11095.f_60));
}

void func_612()
{
	fVar0 = Global_40.f_11095.f_62;
	fVar1 = (Global_40.f_11095.f_62 + Global_40.f_11095.f_61);
	_0x497a6539bb0e8787(player_id(), (1f - fVar0), (1f - fVar1));
}

void func_613()
{
	_0xe0d6c2a146a5c993(player_id(), (1f / (1f + Global_40.f_11095.f_58)));
}

void func_614()
{
	_0xb427911ea6dffef3(player_id(), (1f - Global_40.f_11095.f_63));
}

void func_615()
{
	func_1082();
	func_1083();
	func_1084();
}

void func_616(int iParam0, int iParam1, bool bParam2)
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

void func_617(int iParam0, bool bParam1)
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
	func_1021(_create_var_string(2, sVar1), _create_var_string(2, sVar2), get_hash_key("toast_log_blips"), get_hash_key("BLIP_RC_TREASURE_HUNTER"), 1433015236, _create_var_string(2, sVar3), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
}

void func_618(int iParam0)
{
	Global_40.f_12004.f_7 = (Global_40.f_12004.f_7 || iParam0);
}

void func_619(int iParam0)
{
	Global_40.f_12004.f_8 = (Global_40.f_12004.f_8 || iParam0);
}

void func_620(int iParam0)
{
	Global_40.f_12004.f_9 = (Global_40.f_12004.f_9 || iParam0);
}

void func_621(int iParam0)
{
	Global_40.f_12004.f_10 = (Global_40.f_12004.f_10 || iParam0);
}

void func_622(int iParam0)
{
	Global_40.f_12004.f_11 = (Global_40.f_12004.f_11 || iParam0);
}

void func_623(int iParam0)
{
	Global_40.f_12004.f_12 = (Global_40.f_12004.f_12 || iParam0);
}

int func_624(int iParam0)
{
	if (!func_557(iParam0, 0))
	{
		return 0;
	}
	return iParam0;
}

void func_625(int iParam0, int iParam1, bool bParam2)
{
	func_663(iParam0, &iVar0, &iVar1);
	if (!func_664(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_1085(iParam0, 1024))
	{
		return;
	}
	func_665(iVar0, iVar1);
	Global_1905944->f_22[iParam0]->f_3[0] = iParam1;
	Global_1905944->f_22[iParam0]->f_3[0]->f_1 = 2;
}

void func_626(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	func_663(iParam0, &iVar0, &iVar1);
	if (!func_664(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_1085(iParam0, 1024))
	{
		return;
	}
	func_665(iVar0, iVar1);
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

int func_627()
{
	iVar0 = _0x5461c821d00fe15a(-2076669067, 0);
	if (iVar0 == func_1009())
	{
		return func_628();
	}
	iVar4 = (func_1009() - iVar0);
	iVar5 = get_random_int_in_range(0, iVar4);
	iVar2 = 0;
	while (iVar2 < func_1009())
	{
		iVar1 = _0x126cbebba46693cf(iVar2, -2076669067, 0);
		if (!func_1086(iVar1))
		{
			if (iVar5 == iVar3)
			{
				return func_1010(iVar1);
			}
			iVar3++;
		}
		iVar2++;
	}
	return 0;
}

int func_628()
{
	iVar0 = get_random_int_in_range(0, func_1009());
	return func_1010(_0x126cbebba46693cf(iVar0, -2076669067, 0));
}

void func_629(int iParam0)
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

bool func_630(int iParam0, int iParam1, int iParam2)
{
	if (!func_557(iParam0, 0))
	{
		return false;
	}
	if (iParam1 < 1)
	{
		return false;
	}
	Var0 = { func_668(iParam0, 0, 1) };
	Var5 = { func_1031(iParam0, Var0, Var0.f_4, 0) };
	return func_1087(iParam0, &Var5, &Var0, iParam1, iParam2, 0);
}

void func_631(int iParam0)
{
	if (func_22() != -1)
	{
		return;
	}
	switch (func_581(iParam0))
	{
		case 81053684:
			if (iParam0 == -1623728698 && func_1088(81053684, 0) <= 0)
			{
				func_667(32, iParam0, 0, 0, 0);
			}
			break;
		case -2061583405:
			if (iParam0 == -1535516064 || iParam0 == -763730846)
			{
				func_667(32, iParam0, 0, 0, 0);
			}
			break;
		case -999503751:
			iVar0 = func_1089(iParam0);
			if (func_1090(iVar0))
			{
				func_1091(iVar0, (iVar0 >= 0 && iVar0 <= 5), 1);
			}
			else
			{
				func_667(30, iParam0, 0, 0, 0);
			}
			if (func_658() == -2125499975 || func_658() == -449205311)
			{
				switch (iParam0)
				{
					case 624063935:
					case 1160643979:
					case 1661121390:
						func_667(32, iParam0, 0, 0, 0);
						break;
				}
			}
			else if (func_658() == 1160113249)
			{
				switch (iParam0)
				{
					case -361635024:
						func_667(32, iParam0, 0, 0, 0);
						break;
				}
			}
			break;
		case -525676072:
			if (!func_1092(-525676072, 0))
			{
				if (func_1093(-525676072, &iVar1))
				{
					func_667(33, iVar1, 0, 0, 0);
				}
			}
			func_667(32, iParam0, 0, 0, 0);
			break;
	}
	if ((iParam0 == 899611344 || iParam0 == -1515874150) || iParam0 == -1185145312)
	{
		if (!func_1094(99217379))
		{
			func_609(Global_35, iParam0, 0, 99217379, 1, 1, 1, 0, 1, 1);
		}
		func_580(24);
		if (func_610(&iVar2, 0))
		{
			func_586(iVar2, 0, 0, 1, 3, 0, 752097756, 0);
		}
	}
}

void func_632(int iParam0)
{
	if (func_577(iParam0, 943695443))
	{
		func_1095(0, iParam0);
	}
	else if (func_577(iParam0, -2096528786))
	{
		func_1095(1, iParam0);
	}
	else if (func_577(iParam0, -1094167013))
	{
		func_1095(2, iParam0);
	}
	else if (func_577(iParam0, 1936654645))
	{
		func_1095(3, iParam0);
	}
	else if (func_577(iParam0, 1306489306))
	{
		func_1095(4, iParam0);
	}
	else if (func_577(iParam0, 435762317))
	{
		func_1095(5, iParam0);
	}
	else if (func_577(iParam0, 1259363210))
	{
		func_1095(6, iParam0);
	}
	else if (func_577(iParam0, 881398259))
	{
		func_1095(7, iParam0);
	}
	else if (func_577(iParam0, -541549214))
	{
		func_1095(8, iParam0);
	}
	else if (func_577(iParam0, 130796156))
	{
		func_1095(-1, iParam0);
	}
}

int func_633(int iParam0, int iParam1)
{
	Var4.f_1 = 10;
	func_1096(&Var4, 1356624740);
	return func_1097(iParam0, &Var4, &uVar0, iParam1);
}

struct<2> func_634(int iParam0)
{
	if (!func_557(iParam0, 0))
	{
		return Var0;
	}
	if (func_577(iParam0, -305066475))
	{
		if (func_22() == -1)
		{
			if (func_577(iParam0, -537818634))
			{
				return func_96(189951448);
			}
			else
			{
				return func_96(1176172851);
			}
		}
	}
	else if (func_577(iParam0, -537818634))
	{
		return func_96(-963660207);
	}
	if (func_577(iParam0, 2084895747))
	{
		return func_96(1694039471);
	}
	return Var2;
}

void func_635(int iParam0)
{
	switch (iParam0)
	{
		case 236757114:
			if (func_22() == -1)
			{
				if (func_326((*Global_1835011)[4]->f_1, 1))
				{
					func_324(109, 1);
				}
			}
			break;
	}
}

void func_636(int iParam0, char* sParam1)
{
	sVar0 = func_1099(func_1098(0));
	func_686(_create_var_string(38, "ITEM_CAUGHT_PUMP", sParam1, sVar0), "inventory_items", func_1100(iParam0), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

void func_637(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (iParam0 == 1662813436)
	{
		return;
	}
	if (!func_557(iParam0, 0))
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
	if (!func_1101())
	{
		func_1102(iParam0, iParam1, bParam2, bParam4);
		return;
	}
	bVar0 = false;
	iVar1 = absi(iParam1);
	StringCopy(&cVar2, func_1103(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
	if (iParam1 > 0)
	{
	}
	else
	{
		if (bParam3 || bParam4)
		{
			StringCopy(&cVar2, func_1103(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
		}
		else if (bParam2 && func_578(iParam0, 2097152))
		{
			StringCopy(&cVar2, "ITEM_READ_PUMP_MULT", 32);
		}
		bVar0 = true;
	}
	iVar6 = func_576(iParam0);
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
	else if (!func_1104(iParam0, &Var7, iVar11, iVar10, 0, -401018458))
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
	sVar15 = func_1105(_create_var_string(10, &cVar2, _create_var_string(0, func_624(iParam0)), iVar1), iVar12);
	if (((((iParam1 == 1 || func_577(iParam0, 1443104131)) || iParam0 == -885810591) || iParam0 == -1424823393) || iParam0 == 1463786584) || iParam0 == 1358243310)
	{
		sVar15 = _create_var_string(0, func_624(iParam0));
	}
	func_686(sVar15, Var7.f_1, get_hash_key(Var7), iVar14, iVar12, "Transaction_Feed_Sounds", sVar13, 0, 1);
}

int func_638(int iParam0, int iParam1)
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

struct<10> func_639(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
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

bool func_640(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, int iParam10, int iParam11, int iParam12)
{
	*iParam10 = _item_database_create_item_collection(&uParam0, iParam11, iParam12);
	if (*iParam10 >= 0)
	{
		return true;
	}
	return false;
}

int func_641(int iParam0, int iParam1)
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

bool func_642(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!func_557(iParam0, 0))
	{
		return false;
	}
	if (iParam1 != 0 && !func_1106(iParam0, iParam1, 1))
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
				if (Var2.f_2 == 1644203656 && func_1106(iParam0, Var2, 1))
				{
					if (func_1107(iParam0, Var2))
					{
						bVar0 = true;
					}
				}
			}
			iVar49++;
		}
	}
	else if (func_1107(iParam0, iParam1))
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		if (!bParam2)
		{
			func_324(206, 0);
		}
	}
	if (bParam3)
	{
		if (!func_196(0, 0, 1))
		{
			func_366(1, 5);
		}
	}
	if (bVar0)
	{
		return true;
	}
	return false;
}

int func_643(int iParam0)
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

void func_644(int iParam0)
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
		func_324(iVar0, 0);
	}
}

void func_645()
{
	bVar0 = is_dlc_present(33819255);
	if (!bVar0)
	{
		if (_unlock_is_unlocked(-121456797))
		{
			_0xe824ce7d13fcb300(2116153146, 0);
			func_1108(0);
			_unlock_set_unlocked(-121456797, false);
			func_1109();
		}
		return;
	}
	if (!func_326((*Global_1835011)[4]->f_1, 1))
	{
		return;
	}
	func_1110();
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
	func_1108(1);
}

void func_646()
{
	if (!func_326((*Global_1835011)[4]->f_1, 1))
	{
		return;
	}
	if (_unlock_is_unlocked(304788622))
	{
		return;
	}
	func_317(1351927599, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
	_unlock_set_unlocked(304788622, true);
	if (_unlock_is_unlocked(-1968398307))
	{
		return;
	}
	_unlock_set_unlocked(-1968398307, true);
}

void func_647()
{
	bVar0 = is_dlc_present(-751383868);
	if (!bVar0)
	{
		if (_unlock_is_unlocked(1244328330))
		{
			func_1111(0);
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
	if (!func_326((*Global_1835011)[4]->f_1, 1))
	{
		return;
	}
	_unlock_set_unlocked(1244328330, true);
	func_1111(1);
}

void func_648()
{
	bVar0 = is_dlc_present(-1499823613);
	if (!bVar0)
	{
		if (_unlock_is_unlocked(398807247))
		{
			func_1112(15000, 0, 0, 0, 1);
			func_1111(0);
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
	if (!func_326((*Global_1835011)[4]->f_1, 1))
	{
		return;
	}
	_unlock_set_unlocked(398807247, true);
	func_282(15000, 0, 1065353216, 1, 0, 0, 1, 752097756);
	func_1111(1);
}

void func_649()
{
	bVar0 = is_dlc_present(-679138445);
	if (bVar0)
	{
		if (_0xf83d3dda4d3c8169(-1491419385) > 0)
		{
			if ((!func_346(1191437462, 1, 0) && !func_190((*Global_1835011)[23]->f_1)) && !Global_43891)
			{
				func_317(1191437462, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			}
			if (!func_1113(1))
			{
				func_621(1);
			}
		}
		if (_0xf83d3dda4d3c8169(1809565830) > 0)
		{
			if ((!func_346(1119149048, 1, 0) && !func_190((*Global_1835011)[23]->f_1)) && !Global_43891)
			{
				func_317(1119149048, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			}
			if (!func_1113(2))
			{
				func_621(2);
			}
		}
		if (_0xf83d3dda4d3c8169(2056119786) > 0 && !func_1113(4))
		{
			func_621(4);
		}
		if (func_1113(0))
		{
			func_1114(0);
		}
	}
	else
	{
		if (_0xf83d3dda4d3c8169(-1491419385) > 0)
		{
			if (func_346(1191437462, 1, 0))
			{
				func_652(1191437462, 1, 1, -142743235, 0);
			}
		}
		if (_0xf83d3dda4d3c8169(1809565830) > 0)
		{
			if (func_346(1119149048, 1, 0))
			{
				func_652(1119149048, 1, 1, -142743235, 0);
			}
		}
		if (func_1113(1))
		{
			func_1114(1);
		}
		if (func_1113(2))
		{
			func_1114(2);
		}
		if (func_1113(4))
		{
			func_1114(4);
		}
		if (!func_1113(0))
		{
			func_621(0);
		}
	}
}

void func_650()
{
	bVar0 = _unlock_is_unlocked(240039223);
	if (!bVar0)
	{
		return;
	}
	if (!func_326((*Global_1835011)[4]->f_1, 1))
	{
		return;
	}
	if (_unlock_is_unlocked(-236259196))
	{
		return;
	}
	Var1 = { func_1115() };
	if (!_0xb881ca836cc4b6d4(&Var1))
	{
		func_584(127400949);
		if (func_586(127400949, 0, 0, 0, 0, 0, 752097756, 0))
		{
			Var1 = { func_1115() };
		}
	}
	if (_0xb881ca836cc4b6d4(&Var1))
	{
		func_1116(-2055673461, Var1, 1423542233);
		func_1116(-202131179, Var1, -1264898804);
		func_1116(2013836545, Var1, 1592019450);
		func_1116(1497476650, Var1, 1117400455);
		func_1116(1063571467, Var1, 1150213537);
		func_1116(2107224237, Var1, 1598825281);
		func_1116(1747981656, Var1, -712527121);
		func_1116(-1371140647, Var1, 454332195);
		func_1116(-19142973, Var1, 256105670);
		func_1116(-2074737817, Var1, -1328061889);
		func_1116(-1114256243, Var1, -782241404);
		func_1116(-1653277288, Var1, 1669853467);
		func_1116(1869398132, Var1, -1559225678);
		func_1116(459868358, Var1, -266425508);
		if (!_0x3ab6c7b0bb0df4b1(Global_35, -1) && !func_31())
		{
			get_current_ped_weapon(Global_35, &iVar15, false, 2, false);
			get_current_ped_weapon(Global_35, &iVar16, false, 0, false);
			if (func_671(iVar16))
			{
				if (iVar16 != 127400949)
				{
					if (_is_weapon_one_handed(iVar16))
					{
						if (func_579(24))
						{
							set_current_ped_weapon(Global_35, iVar16, true, 3, false, false);
						}
						set_current_ped_weapon(Global_35, 127400949, true, 0, false, false);
					}
					else if (_is_weapon_two_handed(iVar16))
					{
						if ((func_579(24) && func_671(iVar15)) && iVar15 != 127400949)
						{
							set_current_ped_weapon(Global_35, iVar15, true, 3, false, false);
						}
						set_current_ped_weapon(Global_35, 127400949, true, 2, false, false);
					}
				}
			}
			else if (!func_671(iVar15))
			{
				set_current_ped_weapon(Global_35, 127400949, true, 2, false, false);
			}
			else if (iVar15 != 127400949)
			{
				if (func_579(24))
				{
					set_current_ped_weapon(Global_35, iVar15, true, 3, false, false);
				}
				set_current_ped_weapon(Global_35, 127400949, true, 2, false, false);
			}
		}
		_unlock_set_unlocked(-236259196, true);
	}
}

void func_651()
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

int func_652(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	if (!func_557(iParam0, 0))
	{
		return 0;
	}
	bVar0 = iParam3 == 562618531;
	bVar1 = iParam3 == 1992602754;
	bVar2 = iParam3 == -1387038764;
	iVar3 = func_1007(iParam0, 1);
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
			func_637(iParam0, -iParam1, bVar0, bVar1, bVar2);
		}
		return 0;
	}
	if (!func_346(iParam0, 1, bParam4))
	{
		return 0;
	}
	Var5 = { func_634(iParam0) };
	if (_stat_id_is_valid(&Var5))
	{
		if ((func_561(iParam0, 0, 0) - iParam1) >= 0)
		{
			_0xbd861ae8a5181ed7(&Var5, iParam1);
		}
		else if ((func_561(iParam0, 0, 0) - iParam1) < 0)
		{
			func_652(iParam0, func_561(iParam0, 0, 0), bParam2, iParam3, bParam4);
			return 0;
		}
	}
	if (func_576(iParam0) == -427144552)
	{
		if (!func_1117(iParam0, iParam1, 0, iParam3))
		{
			return 0;
		}
	}
	else if (!func_1118(iParam0, iParam1, iParam3, bParam2, bParam4))
	{
		return 0;
	}
	if (iParam0 == -569063887)
	{
		Global_1935496->f_20 = 0;
	}
	if (!func_585(0))
	{
		bParam2 = true;
	}
	if (!bParam2 && iParam0 != 1309979101)
	{
		func_637(iParam0, -iParam1, bVar0, bVar1, bVar2);
	}
	func_1119(iParam0, iParam1);
	return 1;
}

bool func_653(int iParam0)
{
	switch (func_581(iParam0))
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

void func_654(int iParam0, bool bParam1, bool bParam2)
{
	switch (func_581(iParam0))
	{
		case -2061583405:
			bVar0 = func_1120(iParam0, &(Global_1946804->f_2657.f_21));
			break;
		case 81053684:
			bVar0 = func_1120(iParam0, &(Global_1946804->f_2657.f_23));
			break;
		case -999503751:
			bVar0 = func_1120(iParam0, &(Global_1946804->f_2657.f_20));
			break;
		case -525676072:
			bVar0 = func_1120(iParam0, &(Global_1946804->f_2657.f_22));
			break;
		case -1719060085:
			bVar0 = func_1120(iParam0, &(Global_1946804->f_2657.f_24));
			break;
		case -413129408:
			bVar0 = func_1120(iParam0, &(Global_1946804->f_2657.f_25));
			break;
	}
	if (!bVar0)
	{
		return;
	}
	if (bParam2)
	{
		func_1121();
	}
	if (bParam1)
	{
		func_1122(0, 0);
	}
}

int func_655(int iParam0)
{
	Var0 = { func_668(iParam0, 1, 0) };
	return func_669(Var0.f_4);
}

int func_656(int iParam0, int iParam1)
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

void func_657(int iParam0)
{
	if (func_22() == -1)
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
		iVar0 = func_656(iVar1, 1);
		if (iVar0 < 0 || iVar0 >= 39)
		{
		}
		else
		{
			func_1123(Global_1946804->f_1378.f_1[iVar0], 2, 6);
		}
	}
}

int func_658()
{
	return Global_1946804->f_1;
}

bool func_659(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)
{
	Var4 = func_1124(iParam6);
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
		func_1126(uParam0, func_1125(iVar0), 1);
	}
	while (_0xed4413cee1bf142c(&Var4))
	{
		if (!_0x44b3a36933ac009c(&iVar0, &Var4, 1409451727))
		{
		}
		else
		{
			iVar3 = iVar0;
			iVar1 = func_656(iVar3, 1);
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
							if (func_1127(iVar3) && func_1128(&(uParam0->f_1[iVar1]), iVar3, &iVar0))
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
							func_1129(uParam0, &(uParam0->f_1[&Global_1946804->f_2612[iVar1]]), &(Global_1946804->f_2612[iVar1]), 0, 0);
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

Vector3 func_660(int iParam0, int iParam1)
{
	if (func_22() == -1)
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

int func_661(int iParam0, int iParam1)
{
	vVar0 = { func_660(iParam0, iParam1) };
	return vVar0.x;
}

void func_662(var uParam0, int iParam1, int iParam2)
{
	*Global_26796.f_26[iParam2]->f_1.f_1[iParam1] = { *uParam0 };
	Global_26796.f_26[iParam2]->f_1.f_1[iParam1]->f_2 = (Global_26796.f_26[iParam2]->f_1.f_1[iParam1]->f_2 - Global_26796.f_26[iParam2]->f_1.f_1[iParam1]->f_2 & 1);
}

void func_663(int iParam0, int iParam1, int iParam2)
{
	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

bool func_664(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return false;
	}
	if (func_1130(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_1131(iParam0))
	{
		return false;
	}
	if (func_1132(iParam0))
	{
		return false;
	}
	if ((Global_1898164->f_163 && !func_1085(iParam0, 1)) || func_84(32768))
	{
		if (!func_1085(iParam0, 262144) || !Global_1905944->f_5696)
		{
			return false;
		}
	}
	if (!func_1133())
	{
		return false;
	}
	return true;
}

void func_665(int iParam0, int iParam1)
{
	uVar0 = Global_1905944[iParam0];
	set_bit(&uVar0, iParam1);
	(*Global_1905944)[iParam0] = uVar0;
}

void func_666(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 = (uParam0->f_2 - (uParam0->f_2 && iParam1));
}

void func_667(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (bParam4)
	{
		func_1134(16384);
	}
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	Var0.f_2 = iParam2;
	Var0.f_3 = iParam3;
	func_1135(Var0);
}

struct<5> func_668(int iParam0, bool bParam1, bool bParam2)
{
	Var0 = { func_1136(bParam1) };
	Var0.f_4 = 1084182731;
	switch (func_576(iParam0))
	{
		case -1037537535:
			if (!_inventory_fits_slot_id(iParam0, 1034665895))
			{
				Var0 = { func_1031(889965687, Var0, 1034665895, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, 889965687);
			}
			else
			{
				Var0.f_4 = 1034665895;
			}
			break;
		case -427144552:
			Var0 = { func_1137(bParam1) };
			if (bParam2 && func_1138(iParam0, 1))
			{
				Var5.f_9 = -1591664384;
				if (!func_1029(iParam0, &Var0, 1728382685, 0))
				{
					Var0.f_4 = 1728382685;
				}
				else if (!func_1029(iParam0, &Var0, -649335959, 0))
				{
					Var0.f_4 = -649335959;
				}
				else if (func_1030(iParam0, &Var5, 1728382685))
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
			Var0 = { func_1139(bParam1) };
			switch (func_581(iParam0))
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
			if (func_1140(iParam0, -1823706425))
			{
				Var0 = { func_1031(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, -1838434463);
			}
			else if (func_1140(iParam0, -1483207246))
			{
				Var0 = { func_1031(889965687, Var0, 1034665895, bParam1) };
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
				if (!func_1141(Var0, &Var27, bParam1, 0))
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

int func_669(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (Global_1946804->f_57[iVar0]->f_8 == iParam0)
		{
			return func_1142(iVar0, 1);
		}
		iVar0++;
	}
	return -358215195;
}

void func_670(int iParam0)
{
	func_1123(Global_1946804->f_1497.f_1[func_656(iParam0, 1)], 2, 6);
	func_1123(Global_1946804->f_1378.f_1[func_656(iParam0, 1)], 2, 6);
}

bool func_671(int iParam0)
{
	return (is_weapon_valid(iParam0) && iParam0 != -1569615261);
}

bool func_672(int iParam0)
{
	return iParam0 != 0;
}

int func_673(int iParam0)
{
	iVar0 = -1;
	if (!func_672(iParam0))
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

bool func_674(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

int func_675(int iParam0)
{
	return (shift_right(iParam0, 26) & 31 * func_1143(is_bit_set(iParam0, 31), -1, 1)) + 1898;
}

int func_676(int iParam0)
{
	return shift_right(iParam0, 22) & 15;
}

int func_677(int iParam0)
{
	return shift_right(iParam0, 17) & 31;
}

int func_678(int iParam0)
{
	return shift_right(iParam0, 12) & 31;
}

int func_679(int iParam0)
{
	return shift_right(iParam0, 6) & 63;
}

int func_680(int iParam0)
{
	return shift_right(iParam0, 0) & 63;
}

int func_681(int iParam0, int iParam1)
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

void func_682(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_1144(iParam0, iParam6);
	func_1145(iParam0, iParam5);
	func_1146(iParam0, iParam4);
	func_1147(iParam0, iParam3);
	func_1148(iParam0, iParam2);
	func_1149(iParam0, iParam1);
}

bool func_683(int iParam0, bool bParam1)
{
	return func_984(func_284(), iParam0, bParam1);
}

void func_684(var uParam0, int iParam1)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

bool func_685(int iParam0, int iParam1)
{
	if (!func_557(iParam0, 0))
	{
		return false;
	}
	if (Global_1935630->f_12)
	{
		return false;
	}
	iVar0 = func_1007(iParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_1079("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_1080(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_671(Var4.f_4))
			{
			}
			else if (_get_ammo_type_for_weapon(Var4.f_4) == iVar0)
			{
				func_1081(iVar1);
				return true;
			}
			iVar3++;
		}
		func_1081(iVar1);
	}
	return false;
}

var func_686(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
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
	func_1150(sParam0, sParam1, iParam2);
	return uVar20;
}

int func_687()
{
	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar2 = func_1151(iVar1);
		if (!_unlock_is_visible(func_1152(iVar2)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_688()
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		iVar1 = func_1151(iVar0);
		if (!_unlock_is_visible(func_1152(iVar1)))
		{
			_unlock_set_visible(func_1152(iVar1), true);
		}
		iVar0++;
	}
}

bool func_689(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_948(iParam0))
		{
			return false;
		}
	}
	return (Global_40.f_4942[iParam0] && iParam1) != 0;
}

void func_690(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_495(iParam0))
		{
			return;
		}
	}
	Global_40.f_4942[iParam0] = (Global_40.f_4942[iParam0] || iParam1);
}

bool func_691()
{
	return (func_197(&Global_1935630, 4096) || _get_number_of_references_of_script_with_name_hash(1637780761) > 0);
}

int func_692(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (func_22() != -1)
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
	if (!func_557(iVar0, 0))
	{
		return 0;
	}
	if (!func_1153(iVar0))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	iVar3 = 1;
	func_1154(iVar0, iVar1, &iVar3, 0);
	iVar4 = (iVar2 * iVar3);
	if (func_577(iVar0, 58855631))
	{
		iVar4 = iVar2;
	}
	Var5 = { func_668(iVar0, 0, 1) };
	iVar10 = func_1155(iVar0, &Var5, 0, 0);
	if (iVar10 == 0)
	{
		return 0;
	}
	else if (iVar10 < iVar4)
	{
		iVar2 = ceil((to_float(iVar10) / to_float(iVar3)));
		iVar4 = iVar10;
	}
	iVar11 = (func_1156(iVar0, iVar1, 1, 0, 0) * iVar2);
	if (iVar11 <= 0)
	{
		return 0;
	}
	if (!func_1157(iVar11))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	if (!func_317(iVar0, iVar4, 1, 0, 0, 1248274121, 0, 0, 0, 0))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	func_1112(iVar11, 0, 0, 0, 1);
	*iParam3 = (*iParam3 + iVar11);
	*iParam1 = (*iParam1 + iVar2);
	return 1;
}

var func_693(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
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

void func_694(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (is_string_null_or_empty(sParam1))
	{
		sParam1 = "FEED_MONEY_SPEND";
	}
	func_686(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 1831944558, 1, 859817522, 0, 0, 0, 1);
}

var func_695(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

void func_696(bool bParam0, bool bParam1)
{
	if (func_22() != -1)
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

void func_697(int iParam0, int iParam1, float fParam2, int iParam3)
{
	iVar0 = floor((to_float(iParam1) * fParam2));
	iVar1 = ((iParam1 - iVar0) / iParam3);
	if (func_974())
	{
		iVar2 = floor((to_float(iVar1) * 0.1f));
		_uilog_add_total_take_entry(1072517412, 908516622, _create_var_string(2, "MISSION_COMPLETE_TAKE_GANG"), _create_var_string(2, "MISSION_COMPLETE_TAKE_AMOUNT", iVar0), -1689362167);
	}
	else
	{
		_uilog_add_total_take_entry(2067252994, 908516622, _create_var_string(2, "MISSION_COMPLETE_TAKE_GANG"), _create_var_string(2, "MISSION_COMPLETE_TAKE_AMOUNT", iVar0), -1689362167);
	}
	iVar3 = iVar1;
	if (func_974())
	{
		iVar3 = (iVar3 + iVar2);
	}
	_0xe6dc9b21ac7a8729(func_192(iParam0), iVar3, iVar1, iParam3);
	iVar4 = func_271(iParam0);
	if (func_194(iParam0) != 1 || (iVar4 != 37 && iVar4 != 58))
	{
		_uilog_add_total_take_entry(-1391579956, 1997120069, _create_var_string(2, "MISSION_COMPLETE_TAKE_ARTHUR"), _create_var_string(2, "MISSION_COMPLETE_TAKE_AMOUNT", iVar3), 601389479);
	}
	switch (func_194(iParam0))
	{
		case 1:
			switch (iVar4)
			{
				case 25:
					func_1158(1, iVar1);
					func_1158(8, iVar1);
					func_1158(7, iVar1);
					break;
				case 12:
					func_1158(6, iVar1);
					break;
				case 53:
					func_1158(3, iVar1);
					func_1158(7, iVar1);
					func_1158(4, iVar1);
					break;
				case 20:
					func_1158(8, iVar1);
					break;
				case 19:
					func_1158(1, iVar1);
					func_1158(2, iVar1);
					break;
				case 24:
					func_1158(3, iVar1);
					func_1158(9, iVar1);
					func_1158(20, iVar1);
					break;
				case 28:
					func_1158(1, iVar1);
					break;
				case 34:
					func_1158(23, iVar1);
					func_1158(2, iVar1);
					func_1158(18, iVar1);
					break;
				case 29:
					func_1158(0, iVar1);
					func_1158(9, iVar1);
					break;
				case 37:
					break;
				case 58:
					break;
				case 57:
					func_1158(0, iVar1);
					func_1158(3, iVar1);
					func_1158(2, iVar1);
					func_1158(11, iVar1);
					func_1158(6, iVar1);
					func_1158(25, iVar1);
					func_1158(24, iVar1);
					break;
			}
			break;
		case 8:
			switch (iVar4)
			{
				case 94:
					func_1158(5, iVar1);
					break;
				case 63:
					func_1158(1, iVar1);
					func_1158(3, iVar1);
					break;
				case 37:
					func_1158(23, iVar1);
					break;
				case 116:
					break;
			}
			break;
		case 11:
			if (iParam0 == func_362(0, 10, 11, 2116153146))
			{
				func_1158(7, iVar1);
				func_1158(4, iVar1);
			}
			else if (iParam0 == func_362(0, 7, 11, -379687487))
			{
				func_1158(8, iVar1);
				func_1158(15, iVar1);
			}
			else if (iParam0 == func_362(0, 8, 11, -1386089015))
			{
				func_1158(3, iVar1);
			}
			else if (iParam0 == func_362(0, 11, 11, -1952009645))
			{
				func_1158(6, iVar1);
				func_1158(3, iVar1);
			}
			else if (iParam0 == func_362(0, 12, 11, 2065895756))
			{
				func_1158(9, iVar1);
			}
			break;
	}
	_uilog_set_total_take_summary(_create_var_string(2, "MISSION_COMPLETE_TAKE_TOTAL", iParam1), _create_var_string(2, "MISSION_COMPLETE_TAKE_TOTAL_GANG", func_1159()));
	if (!func_1160(629))
	{
		func_324(629, 0);
	}
}

int func_698(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_3;
	}
	return 0;
}

bool func_699(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 17)
	{
		return false;
	}
	return true;
}

bool func_700(int iParam0, int iParam1, int iParam2)
{
	if (!func_699(iParam0))
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

int func_701()
{
	if (Global_1572887->f_12 == -1)
	{
		return 771;
	}
	return 20001;
}

int func_702(int iParam0, int iParam1, int iParam2)
{
	return ((iParam2 & 31 || shift_left(iParam0 & 1023, 5)) || shift_left(iParam1 & 16383, 15));
}

int func_703(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (!func_1161(iParam2))
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
	if (iParam3 < 0 || iParam3 > func_701())
	{
		return -1;
	}
	iVar0 = func_702(iParam0, iParam1, iParam2);
	iVar1 = iParam3;
	func_466(iVar1, 0);
	func_536(iVar1, 0);
	func_1162(iVar1, 0);
	func_1163(iVar1, 0);
	func_1164(iVar1, iVar0);
	if (iParam4 != 0)
	{
		func_1165(iVar1, iParam4);
	}
	return iVar1;
}

int func_704(int iParam0, bool bParam1, int iParam2)
{
	if (iParam2 != -1)
	{
		return iParam2;
	}
	fVar0 = 1f;
	if (bParam1 && func_346(1811977508, 1, 0))
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
			if (func_557(iVar25, 0) && func_577(iVar25, -1921346699))
			{
				return ceil((IntToFloat(&Var1.f_12[iVar24]) * fVar0));
			}
		}
		iVar24++;
	}
	return 0;
}

void func_705(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

int func_706(int iParam0)
{
	if (!func_189(iParam0))
	{
		return 0;
	}
	cVar0 = func_364(iParam0);
	if (is_string_null_or_empty(&cVar0))
	{
		return 0;
	}
	iVar1 = get_hash_key(&cVar0);
	iVar2 = iVar1;
	return iVar2;
}

bool func_707(int iParam0)
{
	return _0x4dac398297981b87(iParam0);
}

Vector3 func_708(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, bool bParam13)
{
	bVar2 = 9999999f;
	func_1166(&bVar12, &uVar13);
	bVar14 = false;
	if (bVar12)
	{
		if (func_1167() == 0 && !func_1168(0))
		{
			bVar14 = true;
		}
	}
	if (!func_1169(15, &Var15))
	{
		return 0f, 0f, 0f;
	}
	_0x748c5f51a18cb8f0(0);
	Var20 = { Var15 };
	if (bParam7)
	{
		bVar10 = func_1170();
		if (_does_volume_exist(bVar10))
		{
		}
	}
	if (!func_1171(Global_1310720->f_21))
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
			vVar7 = { func_1172(iVar0, iVar1) };
			bVar11 = func_1173(iVar0, iVar1);
			bVar3 = vdist(vParam0, vVar7);
			if (((((bVar3 < bVar2 && bVar3 > bParam10) && !func_399(vVar7)) && func_1174(iVar0, bParam8, iParam12)) && !func_1175(iVar0)) || bVar11)
			{
				if (func_1176(vVar7, iVar0, iVar1, iParam5, iParam6, bVar14, bVar10, bParam9, bParam13))
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

int func_709(vector3 vParam0, bool bParam3)
{
	iVar0 = func_1177(vParam0);
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

void func_710()
{
	disable_script_brain_set(1);
}

void func_711()
{
}

void func_712()
{
	disable_script_brain_set(2);
}

bool func_713(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_714(char* sParam0)
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

void func_715(int iParam0)
{
	if (func_713(iParam0, 1))
	{
		func_1178(1);
	}
}

int func_716()
{
	return -1904156936;
}

bool func_717(int iParam0)
{
	if (!func_189(iParam0))
	{
		return false;
	}
	switch (func_194(iParam0))
	{
		case 1:
			iVar0 = func_271(iParam0);
			return (((((((((((((iVar0 == 38 || iVar0 == 39) || iVar0 == 43) || iVar0 == 0) || iVar0 == 1) || iVar0 == 3) || iVar0 == 4) || iVar0 == 60) || iVar0 == 59) || iVar0 == 77) || iVar0 == 64) || iVar0 == 44) || iVar0 == 42) || iVar0 == 67);
		case 8:
			iVar1 = func_271(iParam0);
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

void func_723(var uParam0)
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

int func_724(var uParam0, int iParam1)
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

char* func_725(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return "";
	}
	if (is_entity_a_ped(iParam0))
	{
		return func_1179(get_ped_index_from_entity_index(iParam0));
	}
	else if (is_entity_an_object(iParam0))
	{
		return func_1180(get_object_index_from_entity_index(iParam0));
	}
	else if (is_entity_a_vehicle(iParam0))
	{
		return func_1181(get_vehicle_index_from_entity_index(iParam0));
	}
	return "";
}

int func_726(var uParam0, char* sParam1)
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

int func_727(var uParam0)
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

void func_728(var uParam0, int iParam1)
{
	uParam0->f_2054 = (uParam0->f_2054 || iParam1);
}

void func_729(var uParam0, int iParam1)
{
	uParam0->f_8 = (uParam0->f_8 || iParam1);
}

int func_730()
{
	return Global_1572864->f_8;
}

void func_731(char[4] cParam0, int iParam1)
{
	func_1182(cParam0, iParam1);
	func_1183(cParam0, iParam1, 26);
}

int func_732(char[4] cParam0)
{
	func_1184(func_35(cParam0), &iLocal_2215, 1120403456);
	func_101(cParam0, 33554432);
	if (func_130(cParam0, 3) && !func_122(cParam0, 4))
	{
		func_1185(cParam0);
	}
	_remove_imap(661576070);
	_request_imap(795060201);
	return 1;
}

int func_733(char[4] cParam0)
{
	if (func_122(cParam0, 4))
	{
		func_1187(iVar348, func_1186(4, 0), 2, 1073741824);
		func_1187(iVar346, func_222(0, 1), 2, 1073741824);
		func_1187(Global_35, func_222(0, 0), 2, 1073741824);
		func_1187(iVar347, func_222(0, 8), 2, 1073741824);
		func_1187(iVar344, func_222(0, 7), 2, 1073741824);
		func_1187(iVar349, func_222(0, 9), 2, 1073741824);
	}
	func_390(cParam0);
	func_1188(cParam0, "NTV1_O_FRF", -1082130432, 0, 0, -1, -1, 0);
	return 1;
}

int func_734(char[4] cParam0)
{
	if (func_10(cParam0, 524288) || func_122(cParam0, 4))
	{
		func_1189(iVar346, iVar347, 0, -1, 1);
		func_1187(iVar347, func_222(0, 11), 2, 1073741824);
		func_1189(Global_35, iVar344, 0, -1, 1);
		func_1187(iVar344, func_222(0, 10), 2, 1073741824);
		func_1189(iVar348, iVar349, 0, -1, 1);
		func_1187(iVar349, func_222(0, 12), 2, 1073741824);
	}
	else
	{
		func_1190(Global_35, iVar344, 0, 1065353216, 20000);
		_0xc71d07c96946e263(get_player_index(), iVar344);
	}
	func_1191(func_35(cParam0));
	func_1192(iVar348);
	func_1193(&uLocal_2129, &iLocal_349, 1, 10);
	func_1194(iVar2126, &iLocal_351, 1);
	func_1194(iVar2126, &Global_35, 0);
	func_1195(&Local_464, 1);
	func_1195(&Local_564, 111);
	set_ped_config_flag(iVar348, 167, true);
	_request_imap(661576070);
	_remove_imap(795060201);
	if (func_10(cParam0, 524288) || func_122(cParam0, 4))
	{
		func_869(-23.6768f, -13.4015f);
	}
	return 1;
}

int func_735(char[4] cParam0)
{
	func_1196(cParam0);
	func_1197(cParam0, &iLocal_349, &Local_464);
	func_1198(cParam0, &iLocal_351, &Local_564);
	func_1199(cParam0);
	_0xb832f1a686b9b810(Global_35, true, 1);
	switch (func_1200(cParam0))
	{
		case 0:
			if (func_1202(iVar346, func_1201(0, 15), func_1201(8, 4)))
			{
				func_136(cParam0, 29);
			}
			break;
		case 29:
			return 1;
	}
	return 0;
}

int func_736(var uParam0)
{
	func_1203(1);
	return 1;
}

void func_737(char[4] cParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10)
{
	func_142(cParam0, iParam1, iParam9);
	func_1204(cParam0, iParam1);
	func_1183(cParam0, iParam1, iParam2);
	func_1205(cParam0, &iParam3, iParam1, 0);
	func_1205(cParam0, &iParam4, iParam1, 2);
	func_1205(cParam0, &iParam5, iParam1, 4);
	func_1205(cParam0, &iParam6, iParam1, 5);
	func_1205(cParam0, &iParam7, iParam1, 7);
	func_896(cParam0, iParam1, 0);
	StringCopy(&cVar0, sParam8, 32);
	func_1206(cParam0, iParam1, cVar0);
	func_1207(cParam0, iParam1, iParam10);
}

int func_738(char[4] cParam0)
{
	func_1184(func_35(cParam0), &iLocal_2215, 1120403456);
	return 1;
}

int func_739(var uParam0)
{
	return 1;
}

int func_740(char[4] cParam0)
{
	func_1208(&(iLocal_124[28]), &iLocal_2228, -224542060);
	func_1191(func_35(cParam0));
	func_1209(&Global_35, &iLocal_347, 1);
	func_1209(&iLocal_349, &iLocal_350, 1);
	return 1;
}

int func_741(char[4] cParam0)
{
	func_1210(cParam0);
	func_1197(cParam0, &iLocal_349, &Local_464);
	func_1198(cParam0, &iLocal_351, &Local_564);
	_0xb832f1a686b9b810(Global_35, true, 1);
	switch (func_1200(cParam0))
	{
		case 0:
			func_1211(Global_35, func_1201(8, 5), 0, 10f, 8f, 1.5f, 1084227584, 1, 1, 1, 0);
			func_1211(Global_35, func_1201(8, 6), 0, 10f, 12f, 1.5f, 1084227584, 1, 1, 1, 0);
			func_1211(Global_35, func_1201(8, 7), 0, 10f, 20f, 1.5f, 1084227584, 1, 1, 1, 0);
			if (func_1212(cParam0, 25))
			{
				func_136(cParam0, 1);
			}
			break;
		case 1:
			if (is_ped_on_mount(Global_35))
			{
				func_1211(Global_35, func_1201(8, 5), 0, 10f, 8f, 1.5f, 1084227584, 1, 1, 1, 0);
				func_1211(Global_35, func_1201(8, 6), 0, 10f, 12f, 1.5f, 1084227584, 1, 1, 1, 0);
				func_1211(Global_35, func_1201(8, 7), 0, 10f, 20f, 1.5f, 1084227584, 1, 1, 1, 0);
			}
			if (func_1212(cParam0, 26))
			{
				func_450(&uLocal_2099);
				if (func_1213(5, 20))
				{
					_set_weather_type(433385945, false, true, true, 600f, false);
				}
				_0x9f9a829c6751f3c7(player_id(), 28, 0);
				func_136(cParam0, 2);
			}
			break;
		case 2:
			if (func_1202(iVar346, func_1201(8, 4), func_1201(9, 4)))
			{
				func_136(cParam0, 29);
			}
			break;
		case 29:
			return 1;
	}
	return 0;
}

int func_742(var uParam0)
{
	func_450(&uLocal_2099);
	return 1;
}

int func_743(char[4] cParam0)
{
	func_1214(19);
	func_1184(func_35(cParam0), &iLocal_2215, 500f);
	return 1;
}

int func_744(var uParam0)
{
	return 1;
}

int func_745(char[4] cParam0)
{
	func_1208(&(iLocal_124[28]), &iLocal_2229, 737977713);
	func_1191(func_35(cParam0));
	if (!func_10(cParam0, 8))
	{
		func_869(-21.8186f, -8.2282f);
		func_1195(&Local_464, 2);
	}
	return 1;
}

int func_746(char[4] cParam0)
{
	func_1215(cParam0);
	func_1197(cParam0, &iLocal_349, &Local_464);
	func_1197(cParam0, &iLocal_351, &Local_564);
	if (((!func_1212(cParam0, 28) || !func_1212(cParam0, 24)) && func_1200(cParam0) <= 1) && is_ped_on_mount(Global_35))
	{
		func_1211(Global_35, func_1201(9, 5), 0, 10f, 7f, 1.5f, 1084227584, 1, 1, 1, 0);
		func_1211(Global_35, func_1201(9, 6), 0, 10f, 12f, 1.5f, 1084227584, 1, 1, 1, 0);
		func_1211(Global_35, func_1201(9, 7), 0, 10f, 20f, 1.5f, 1084227584, 1, 1, 1, 0);
	}
	switch (func_1200(cParam0))
	{
		case 0:
			if (((func_1216(iVar346, func_1201(9, 4), 50f, 1, 1) || func_1216(iVar346, func_1201(9, 4), 50f, 1, 1)) && !is_ped_on_mount(Global_35)) || func_1212(cParam0, 27))
			{
				_0xb832f1a686b9b810(Global_35, false, 0);
				func_863(cParam0, 134217728);
				func_136(cParam0, 1);
			}
			else
			{
				_0xb832f1a686b9b810(Global_35, true, 1);
			}
			break;
		case 1:
			func_1217();
			func_1218(0);
			if (func_165(iVar344, 0))
			{
				set_ped_reset_flag(iVar344, 303, true);
			}
			if (func_1219(cParam0, &(iLocal_124[29]), &(iLocal_124[30]), "NTV1_O_RTRF", "NTV1_FAIL_LAW1", 0, 0, 1, 408396114))
			{
				if (does_blip_exist(cParam0->f_5303))
				{
					remove_blip(&(cParam0->f_5303));
					func_1220(cParam0, 1, 0);
				}
				func_1221(&iLocal_349);
			}
			if (is_ped_on_mount(player_ped_id()) && !is_entity_dead(get_mount(player_ped_id())))
			{
				set_ped_max_move_blend_ratio(get_mount(player_ped_id()), 1.501f);
			}
			else if (!func_1222(Global_35))
			{
				_0xc71d07c96946e263(get_player_index(), iVar344);
			}
			if (func_1212(cParam0, 28))
			{
				if (is_ped_on_mount(Global_35) && is_player_control_on(get_player_index()))
				{
					set_gameplay_entity_hint(iVar346, 0f, 0f, 0f, true, 4000, 5000, 3000, 0);
					clear_ped_tasks(iVar344, 1, 0);
					_hide_hud_component(724769646);
					set_player_control(get_player_index(), false, 256, false);
					_display_hud_component(724769646);
					func_29(&uLocal_2236, 0);
					return 0;
				}
				if (func_1223(&uLocal_2236, 2f) || !func_28(&uLocal_2236))
				{
					if (func_1224(iVar344, iVar347, 1f) == 3 && func_858(iVar347, iVar344, 1, 1) <= 3f)
					{
						cLocal_182 = "pl_Herbs_Into_Satchel_LT";
						Local_464.f_51 = { get_offset_from_entity_in_world_coords(iVar344, -1f, -0.75f, 0f) };
						Local_464.f_55 = func_1225(Local_464.f_51, get_entity_coords(iVar344, true, false), 1);
					}
					else
					{
						cLocal_182 = "pl_Herbs_Into_Satchel_RT";
						Local_464.f_51 = { get_offset_from_entity_in_world_coords(iVar344, 1f, -0.75f, 0f) };
						Local_464.f_55 = func_1225(Local_464.f_51, get_entity_coords(iVar344, true, false), 1);
					}
					Local_464.f_56 = func_1226(func_858(iVar346, iVar344, 1, 1) < 12f, 1f, 1.5f);
					func_1195(&Local_464, 84);
					func_450(&uLocal_2236);
					func_137(cParam0, 3);
					func_136(cParam0, 2);
				}
			}
			break;
		case 2:
			if (!is_ped_on_mount(Global_35))
			{
				_0xc71d07c96946e263(get_player_index(), iVar344);
				_0x9f9a829c6751f3c7(player_id(), 28, 1);
			}
			func_1217();
			func_1218(0);
			func_1227(uLocal_111[9], func_417(9), 0, 0);
			if (func_1219(cParam0, &(iLocal_124[29]), &(iLocal_124[30]), "NTV1_O_RTRF", "NTV1_FAIL_LAW1", 0, 0, 1, 408396114))
			{
				if (does_blip_exist(cParam0->f_5303))
				{
					remove_blip(&(cParam0->f_5303));
					func_1220(cParam0, 1, 0);
				}
				func_1221(&iLocal_349);
			}
			if (is_ped_on_mount(player_ped_id()) && !is_entity_dead(get_mount(player_ped_id())))
			{
				set_ped_max_move_blend_ratio(get_mount(player_ped_id()), 1.501f);
			}
			if (!func_28(&uLocal_2236) && func_1216(iVar346, Local_464.f_51, 5f, 1, 1))
			{
				func_29(&uLocal_2236, 0);
			}
			if (((func_1216(iVar346, Local_464.f_51, 1f, 1, 1) && func_1228(iVar346, Local_464.f_55, 60f)) && func_1229(&(uLocal_111[9]), cLocal_182, 1)) || (func_1216(iVar346, Local_464.f_51, 5f, 1, 1) && func_1223(&uLocal_2236, 13f)))
			{
				func_317(1668084914, 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
				func_317(-1620920647, 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
				vVar0 = { get_entity_coords(iVar344, true, false) };
				vVar0.f_2 = func_1230(vVar0);
				set_anim_scene_origin(&(uLocal_111[9]), vVar0, get_entity_rotation(iVar344, 2), 2);
				func_1231(9);
				func_1232(&(uLocal_111[9]));
				func_1218(0);
				func_136(cParam0, 3);
			}
			break;
		case 3:
			if (!is_ped_on_mount(Global_35))
			{
				_0xc71d07c96946e263(get_player_index(), iVar344);
				_0x9f9a829c6751f3c7(player_id(), 28, 1);
			}
			func_1217();
			func_1218(0);
			if (func_854(Global_35, iVar346, 10f, 1))
			{
				func_1233(iVar346, &(Local_464.f_68), 1500, Global_35);
				func_1233(Global_35, &uLocal_2275, 1500, iVar346);
			}
			if (func_1234(&(uLocal_111[9]), -1082130432))
			{
				func_1214(24);
				Local_464.f_56 = func_1226(func_858(iVar346, iVar347, 1, 1) < 12f, 1f, 1.5f);
				func_1195(&Local_464, 6);
				if (!is_player_control_on(get_player_index()))
				{
					func_1235();
					_display_hud_component(724769646);
					set_player_control(get_player_index(), true, 0, false);
				}
				func_1218(1);
				_0x9f9a829c6751f3c7(player_id(), 28, 0);
				func_137(cParam0, 5);
				func_136(cParam0, 7);
			}
			break;
		case 7:
			if (!func_1222(Global_35))
			{
				_0xc71d07c96946e263(get_player_index(), iVar344);
			}
			if (func_1212(cParam0, 28) && func_1212(cParam0, 24))
			{
				if (is_ped_on_mount(Global_35))
				{
					func_1236(iVar346, "cautious", 1);
					func_1237();
					func_450(&uLocal_2099);
					func_136(cParam0, 8);
				}
			}
			break;
		case 8:
			if (((func_1238(Global_35, func_1201(9, 8), &uLocal_2099, 1112014848, 1106247680, 8f, 20f, 1.5f, 0, 0, 1, 1, 1) || func_1238(Global_35, func_1201(9, 9), &uLocal_2099, 1112014848, 1106247680, 8f, 20f, 1.5f, 0, 0, 1, 1, 1)) || func_1239(Global_35, &(iLocal_124[18]), 1, 0)) || func_1239(Global_35, &(iLocal_124[19]), 1, 0))
			{
				func_1209(&Global_35, &iLocal_347, 0);
				func_1209(&iLocal_349, &iLocal_350, 0);
				func_177(&iLocal_2130);
				func_61(7);
				func_895(cParam0);
				func_136(cParam0, 9);
			}
			break;
		case 9:
			func_1240(cParam0);
			set_ped_max_move_blend_ratio(player_ped_id(), (1.5f + 0.25f));
			if (func_1212(cParam0, 2))
			{
				func_450(&uLocal_2099);
				_0x9f9a829c6751f3c7(player_id(), 28, 0);
				func_136(cParam0, 29);
			}
			break;
		case 29:
			return 1;
	}
	return 0;
}

int func_747(var uParam0)
{
	func_450(&uLocal_2099);
	func_1241();
	func_1242();
	func_61(7);
	_0x9f9a829c6751f3c7(player_id(), 28, 0);
	if (func_165(iVar346, 0))
	{
		func_1243(iVar346, 0);
	}
	iVar0 = 0;
	while (iVar0 < iVar2121)
	{
		delete_object(uLocal_2124[iVar0]);
		iVar0++;
	}
	return 1;
}

int func_748(char[4] cParam0)
{
	func_1184(func_35(cParam0), &iLocal_2215, 500f);
	return 1;
}

int func_749(char[4] cParam0)
{
	func_1203(0);
	func_1236(iVar346, "cautious", 1);
	func_1237();
	func_1244(1);
	func_1245();
	func_390(cParam0);
	return 1;
}

int func_750(var uParam0)
{
	Local_464.f_56 = 1f;
	func_1195(&Local_464, 22);
	func_1246();
	return 1;
}

int func_751(char[4] cParam0)
{
	func_1247(cParam0);
	func_1197(cParam0, &iLocal_349, &Local_464);
	func_1248(cParam0);
	func_1240(cParam0);
	if (func_1239(Global_35, &(iLocal_124[19]), 1, 0))
	{
		set_ped_max_move_blend_ratio(player_ped_id(), (1.5f + 0.25f));
	}
	_0x513f8aa5bf2f17cf(func_1201(4, 24), 100f, 1);
	switch (func_1200(cParam0))
	{
		case 0:
			if (func_1212(cParam0, 1) && !is_gameplay_hint_active())
			{
				func_185(&Local_2300);
				iLocal_2217 = 1;
				func_177(&iLocal_2130);
				func_177(&iLocal_2131);
				func_895(cParam0);
				func_136(cParam0, 1);
			}
			break;
		case 1:
			if (func_1249(cParam0))
			{
				func_895(cParam0);
				func_136(cParam0, 29);
			}
			break;
		case 29:
			if (func_854(Global_35, iVar346, 10f, 1))
			{
				func_1233(iVar346, &(Local_464.f_68), 1500, Global_35);
				func_1233(Global_35, &uLocal_2275, 1500, iVar346);
			}
			if (((func_1250("NTV1_IG6_HELP") && !func_1251("NTV1_O_ATC")) && !func_1252()) && (func_1253("NTV1_IG6_HELP", 11) <= 500 || func_1254("NTV1_IG6_HELP") <= 3000))
			{
				func_177(&iLocal_2130);
				func_177(&iLocal_2131);
				func_1255(iVar346, -546708623, 1);
				iLocal_2130 = _blip_add_for_radius(408396114, func_1201(4, 24), 20f);
				func_1256("NTV1_O_ATC", 1);
				func_1188(cParam0, "NTV1_O_ATC", -1082130432, 0, 0, -1, -1, 0);
				func_1257(cParam0, "NTV1_O_ATC", 5, 0, 0);
			}
			if (((func_898(cParam0) > 1.75f && !func_1250("NTV1_IG6_HELP")) || !func_854(Global_35, iVar346, 16.5f, 1)) || func_1212(cParam0, 4))
			{
				return 1;
			}
			break;
	}
	return 0;
}

bool func_752(var uParam0)
{
	if (_0xcf45df50c7775f2a())
	{
		_0x5a8b01199c3e79c3();
	}
	func_1241();
	func_1242();
	func_185(&Local_2300);
	return uParam0->f_607 == uParam0->f_607;
}

int func_753(char[4] cParam0)
{
	func_1184(func_35(cParam0), &iLocal_2215, 500f);
	func_1187(Global_35, func_222(2, 0), 2, 1073741824);
	if (!func_1258() || !func_1259())
	{
		return 0;
	}
	func_1187(Global_35, func_222(1, 0), 2, 1073741824);
	func_1245();
	return 1;
}

int func_754(char[4] cParam0)
{
	if (func_165(iVar346, 0))
	{
		func_1195(&Local_464, 93);
	}
	func_1260(&Local_664, 0);
	if (func_10(cParam0, 8))
	{
		func_170();
	}
	return 1;
}

int func_755(char[4] cParam0)
{
	if (func_10(cParam0, 8))
	{
		if (!func_1261())
		{
			return 0;
		}
	}
	if (func_122(cParam0, 4) || func_130(cParam0, 3))
	{
		func_869(6.8765f, -19.4781f);
		func_1236(Global_35, "stealth", 1);
	}
	func_136(cParam0, 0);
	func_1188(cParam0, "NTV1_O_ATC", -1082130432, 0, 0, -1, -1, 0);
	func_137(cParam0, 0);
	_0x9f9a829c6751f3c7(player_id(), 28, 0);
	return 1;
}

int func_756(char[4] cParam0)
{
	func_1262(cParam0);
	func_1197(cParam0, &iLocal_349, &Local_464);
	func_1240(cParam0);
	func_1263(cParam0);
	func_1264();
	if (iVar2214 == 0)
	{
		if (func_1200(cParam0) > 0)
		{
			if (!is_gameplay_hint_active())
			{
				func_185(&Local_2300);
				iLocal_2217 = 1;
			}
		}
	}
	switch (func_1200(cParam0))
	{
		case 0:
			if (func_1212(cParam0, 4))
			{
				func_1236(Global_35, "stealth", 1);
				func_137(cParam0, 1);
				func_136(cParam0, 1);
			}
			break;
		case 1:
			if (func_1212(cParam0, 7))
			{
				func_177(&iLocal_2130);
				func_177(&iLocal_2131);
				iLocal_2130 = func_1265(&(iLocal_2074[2]), 1055493006, 1, 1);
				func_137(cParam0, 2);
				func_136(cParam0, 2);
			}
			if (func_1266(&uLocal_356, iVar2129) && func_1212(cParam0, 13))
			{
				func_1236(Global_35, "stealth", 0);
				func_136(cParam0, 9);
			}
			break;
		case 2:
			if (func_1212(cParam0, 8))
			{
				if (func_1266(&uLocal_356, iVar2129) && !func_1212(cParam0, 13))
				{
					func_137(cParam0, 3);
					func_136(cParam0, 3);
				}
				else
				{
					func_136(cParam0, 29);
				}
			}
			else if (func_1266(&uLocal_356, iVar2129) && func_1212(cParam0, 13))
			{
				func_1236(Global_35, "stealth", 0);
				func_136(cParam0, 9);
			}
			else if (!func_1266(&uLocal_356, iVar2129))
			{
				func_136(cParam0, 10);
			}
			break;
		case 9:
			if (func_1212(cParam0, 7))
			{
				func_177(&iLocal_2130);
				func_177(&iLocal_2131);
				iLocal_2130 = func_1265(&(iLocal_2074[2]), 1055493006, 1, 1);
				func_137(cParam0, 2);
				func_136(cParam0, 11);
			}
			else if (!func_1266(&uLocal_356, iVar2129))
			{
				func_136(cParam0, 10);
			}
			break;
		case 10:
			if (func_1212(cParam0, 7))
			{
				func_177(&iLocal_2130);
				func_177(&iLocal_2131);
				iLocal_2130 = func_1265(&(iLocal_2074[2]), 1055493006, 1, 1);
				func_137(cParam0, 2);
				func_136(cParam0, 11);
			}
			break;
		case 11:
			if (func_1212(cParam0, 8))
			{
				if (func_1266(&uLocal_356, iVar2129) && !func_1212(cParam0, 13))
				{
					func_137(cParam0, 3);
					func_136(cParam0, 3);
				}
				else
				{
					func_136(cParam0, 29);
				}
			}
			break;
		case 3:
			if (func_1212(cParam0, 5))
			{
				func_136(cParam0, 29);
			}
			break;
		case 29:
			return 1;
	}
	return 0;
}

bool func_757(var uParam0)
{
	func_1241();
	func_1242();
	func_185(&Local_2300);
	_0x411189e51b8020ba(Global_35, "stealth");
	return uParam0->f_607 == uParam0->f_607;
}

int func_758(char[4] cParam0)
{
	if (!func_1258() || !func_1259())
	{
		return 0;
	}
	func_1184(func_35(cParam0), &iLocal_2215, 500f);
	func_1195(&Local_464, 37);
	func_1214(8);
	func_1245();
	_set_ped_crouch_movement(Global_35, true, 0, false);
	return 1;
}

int func_759(var uParam0)
{
	if (func_1213(5, 20))
	{
		_set_weather_type(1632247697, false, true, true, 90f, false);
	}
	return 1;
}

int func_760(char[4] cParam0)
{
	func_390(cParam0);
	func_136(cParam0, 0);
	func_137(cParam0, 0);
	func_1188(cParam0, "NTV1_O_RTRF", -1082130432, 0, 0, -1, -1, 0);
	func_1267(&iLocal_349);
	func_1268(iVar346, -546708623, 1);
	func_1269(cParam0);
	func_101(cParam0, 33554432);
	func_379(cParam0, 33554432);
	func_142(cParam0, func_35(cParam0), 65536);
	func_1270(cParam0, "PL2A_Men_Lived (normalstart)");
	func_1270(cParam0, "PL1A_Men_Died (normalstart)");
	_0x9f9a829c6751f3c7(player_id(), 28, 0);
	return 1;
}

int func_761(char[4] cParam0)
{
	func_1271(cParam0);
	func_1197(cParam0, &iLocal_349, &Local_464);
	func_1240(cParam0);
	func_1264();
	if (func_1222(Global_35))
	{
		func_1272();
	}
	if (func_1238(Global_35, func_1201(5, 3), &uLocal_2099, 1112014848, 1106247680, 11f, 7f, 1.25f, 0, 0, 1, 1, 1))
	{
		func_1273();
	}
	if (_does_anim_scene_exist(cParam0->f_7375.f_804))
	{
		func_1274(cParam0->f_7375.f_804, "PL2B_Men_Lived (multistart)");
		func_1274(cParam0->f_7375.f_804, "PL2A_Men_Lived (normalstart)");
		func_1274(cParam0->f_7375.f_804, "PL1B_Men_Died (multistart)");
		func_1274(cParam0->f_7375.f_804, "PL1A_Men_Died (normalstart)");
	}
	switch (func_1200(cParam0))
	{
		case 0:
			func_1275(cParam0);
			if ((func_1212(cParam0, 17) || !func_1212(cParam0, 13)) && ((func_165(Global_35, 0) && func_1216(Global_35, func_1201(1, 5), 60f, 1, 1)) || (func_165(iVar346, 0) && func_854(Global_35, iVar346, 60f, 1))))
			{
				_0x55f37f5f3f2475e1();
				iLocal_2274 = func_1276(&uLocal_356, 0);
				func_136(cParam0, 1);
			}
			break;
		case 1:
			func_1275(cParam0);
			if (func_165(iVar346, 0))
			{
				func_1277(cParam0);
				iLocal_2274 = func_1276(&uLocal_356, 0);
				func_136(cParam0, 2);
			}
			break;
		case 2:
			func_1275(cParam0);
			if (func_1278(player_id(), 0, 0, 1, 1) || (!func_1212(cParam0, 17) && func_1212(cParam0, 13)))
			{
				func_1279(17);
				func_137(cParam0, 10);
				func_136(cParam0, 0);
			}
			else if (iVar2271 > func_1276(&uLocal_356, 0))
			{
				func_136(cParam0, 1);
			}
			else if (func_854(Global_35, iVar346, 60f, 1))
			{
				func_1280();
				func_1195(&Local_464, 38);
				func_136(cParam0, 3);
			}
			break;
		case 3:
			func_1280();
			if (func_1278(player_id(), 0, 0, 1, 1) || (!func_1212(cParam0, 17) && func_1212(cParam0, 13)))
			{
				func_1279(17);
				func_137(cParam0, 10);
				func_136(cParam0, 0);
			}
			else if (iVar2271 > func_1276(&uLocal_356, 0))
			{
				func_136(cParam0, 1);
			}
			else if (func_1212(cParam0, 8) && (func_1281(cParam0, 0) || (_is_ped_carrying(Global_35) && func_1239(Global_35, &(iLocal_124[21]), 1, 0))))
			{
				set_ped_using_action_mode(Global_35, false, -1, 0);
				func_1277(cParam0);
				if (_is_ped_carrying(Global_35) && func_1239(Global_35, &(iLocal_124[21]), 1, 0))
				{
					func_728(&(cParam0->f_10792), 131072);
					func_728(&(cParam0->f_10792), 32768);
					func_1282(cParam0, 0);
				}
				return 1;
			}
			break;
		case 4:
		case 5:
		case 6:
			if (!func_1283() && !func_1284())
			{
				func_136(cParam0, 29);
			}
			break;
		case 29:
			if (!func_1283())
			{
				return 1;
			}
			else
			{
				func_895(cParam0);
			}
			break;
	}
	return 0;
}

bool func_762(char[4] cParam0)
{
	func_168();
	func_1277(cParam0);
	func_1241();
	func_1242();
	return cParam0->f_607 == cParam0->f_607;
}

int func_763(char[4] cParam0)
{
	func_1184(func_35(cParam0), &iLocal_2215, 500f);
	return 1;
}

int func_764(char[4] cParam0)
{
	_0x513f8aa5bf2f17cf(func_1201(3, 4), 50f, 1);
	func_1277(cParam0);
	func_390(cParam0);
	return 1;
}

int func_765(char[4] cParam0)
{
	_0xe296208c273bd7f0(-1, -1, 0, 17, 1, 0);
	_hide_hud_component(724769646);
	if (!is_screen_fading_out() && !is_screen_faded_out())
	{
		do_screen_fade_out(0);
	}
	func_1191(func_35(cParam0));
	if (func_165(iVar346, 0) && func_165(iVar347, 0))
	{
		clear_ped_tasks(iVar346, 1, 0);
		clear_sequence_task(&uLocal_2128);
		open_sequence_task(&uLocal_2128);
		task_follow_nav_mesh_to_coord(0, func_1201(3, 3), 1f, 20000, 1f, 0, 40000f);
		task_mount_animal(0, iVar347, 20000, -1, 1f, 1, 0, 0);
		close_sequence_task(iVar2125);
		task_perform_sequence(iVar346, iVar2125);
		clear_sequence_task(&uLocal_2128);
		set_ped_keep_task(iVar346, true);
	}
	func_895(cParam0);
	return 1;
}

int func_766(char[4] cParam0)
{
	switch (func_1200(cParam0))
	{
		case 0:
			_0xe296208c273bd7f0(-1, -1, 0, 17, 1, 0);
			_hide_hud_component(724769646);
			if (!is_screen_fading_out() && !is_screen_faded_out())
			{
				do_screen_fade_out(0);
			}
			func_1285();
			func_895(cParam0);
			func_136(cParam0, 1);
			break;
		case 1:
			_0xe296208c273bd7f0(-1, -1, 0, 17, 1, 0);
			if (!is_screen_fading_out() && !is_screen_faded_out())
			{
				do_screen_fade_out(0);
			}
			if (func_898(cParam0) >= 1f)
			{
				if (is_screen_faded_out() || is_screen_fading_out())
				{
					do_screen_fade_in(1000);
				}
				func_895(cParam0);
				func_136(cParam0, 2);
			}
			break;
		case 2:
			if (func_1234(&(uLocal_111[11]), -1082130432))
			{
				clear_bit(&(Global_1956580->f_1), 5);
				if (_0xa24c1d341c6e0d53(1, 0, 0))
				{
					func_869(0, 0);
				}
				_display_hud_component(724769646);
				func_895(cParam0);
				func_136(cParam0, 3);
			}
			break;
		case 3:
			if ((func_1212(cParam0, 10) && func_317(1768869276, 1, 1, 0, 0, 752097756, 0, 0, 0, 0)) || !func_1212(cParam0, 10))
			{
				func_136(cParam0, 29);
			}
			break;
		case 29:
			return 1;
	}
	return 0;
}

int func_767(var uParam0)
{
	if (_0xcf45df50c7775f2a())
	{
		_0x5a8b01199c3e79c3();
	}
	if (does_cam_exist(iVar2714))
	{
		destroy_cam(iVar2714, false);
	}
	func_1241();
	func_1242();
	func_1286(uParam0, -1, 0);
	_display_hud_component(724769646);
	return 1;
}

void func_768(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
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
	if (iParam0 == func_1287(Global_35) && is_player_teleport_active())
	{
	}
	if (func_1288(iParam0))
	{
		if (func_855(get_ped_index_from_entity_index(iParam0)))
		{
			_0x0348469daa17576c(iParam0);
		}
	}
	if (func_394(iParam5, 4) && is_entity_a_ped(iParam0))
	{
		iVar1 = get_ped_index_from_entity_index(iParam0);
		if (is_ped_on_vehicle(iVar1, false))
		{
			iVar0 = get_vehicle_ped_is_in(iVar1, true);
			if (does_entity_exist(iVar0) && !is_entity_dead(iVar0))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_768(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (is_ped_on_mount(iVar1))
		{
			iVar2 = get_mount(iVar1);
			if (does_entity_exist(iVar2) && !is_entity_dead(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_768(iVar2, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
	}
	if (!func_394(iParam5, 32))
	{
		if (bVar4 && is_entity_attached(iParam0))
		{
			clear_ped_tasks_immediately(get_ped_index_from_entity_index(iParam0), false, true);
		}
	}
	if (func_394(iParam5, 2))
	{
		if (is_entity_a_vehicle(iParam0))
		{
			_set_entity_coords_and_heading(iParam0, vParam1, fParam4, true, func_394(iParam5, 32), true);
		}
		else
		{
			_set_entity_coords_and_heading(iParam0, vParam1, fParam4, true, func_394(iParam5, 32), true);
			_0x9587913b9e772d29(iParam0, 0);
		}
	}
	else if (func_394(iParam5, 129))
	{
		if (func_394(iParam5, 128))
		{
			if (get_water_height_no_waves(vParam1, &uVar5))
			{
				vParam1.f_2 = uVar5;
			}
		}
		set_entity_coords_no_offset(iParam0, vParam1, func_394(iParam5, 32), true, true);
		set_entity_heading(iParam0, fParam4);
	}
	else
	{
		_set_entity_coords_and_heading(iParam0, vParam1, fParam4, true, func_394(iParam5, 32), true);
	}
	if (bVar4)
	{
		if (!func_394(iParam5, 16))
		{
			_set_ped_crouch_movement(get_ped_index_from_entity_index(iParam0), bVar3, 0, false);
		}
		if (func_1288(iParam0))
		{
			iVar6 = get_ped_index_from_entity_index(iParam0);
			_0x0348469daa17576c(iVar6);
			if (!func_394(iParam5, 32))
			{
				clear_ped_tasks(iVar6, 1, 0);
				task_stand_still(iVar6, -1);
			}
		}
		set_ped_cloth_package_index(get_ped_index_from_entity_index(iParam0), 1);
		if (get_ped_index_from_entity_index(iParam0) == Global_35 && !func_394(iParam5, 64))
		{
			if (!is_screen_faded_out())
			{
			}
			set_gameplay_cam_relative_heading(0f, 1f);
			set_gameplay_cam_relative_pitch(0f, 1f);
		}
	}
}

void func_769(int iParam0, bool bParam1)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	sVar0 = "HorseMission";
	if (bParam1)
	{
		if (!decor_exist_on(iParam0, sVar0))
		{
			decor_set_bool(iParam0, sVar0, bParam1);
		}
	}
	else if (decor_exist_on(iParam0, sVar0))
	{
		decor_remove(iParam0, sVar0);
	}
}

void func_770(int iParam0, bool bParam1)
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

int func_771(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return 0;
	}
	if (is_entity_dead(iParam0))
	{
		return 0;
	}
	if (is_ped_injured(iParam0))
	{
		return 0;
	}
	if (is_ped_in_writhe(iParam0))
	{
		return 0;
	}
	if (!func_1289(iParam0, -982327190))
	{
		task_stand_still(iParam0, -1);
	}
	_0xff1e339ce40eaaaf(iParam0, 0);
	set_animal_tuning_bool_param(iParam0, 48, true);
	_0xf74e134f40192884(iParam0, 2);
	return 1;
}

int func_772(char[4] cParam0, int iParam1, char* sParam2)
{
	iVar0 = 0;
	while (iVar0 < cParam0->f_7375.f_13)
	{
		if (does_entity_exist(&(cParam0->f_7375.f_13[iVar0])))
		{
			if (get_entity_model(&(cParam0->f_7375.f_13[iVar0])) == iParam1 && (are_strings_equal(&(cParam0->f_7375.f_13[iVar0]->f_1), sParam2) || is_string_null_or_empty(sParam2)))
			{
				return &(cParam0->f_7375.f_13[iVar0]);
			}
		}
		iVar0++;
	}
	return 0;
}

void func_773(char[4] cParam0, int iParam1, char* sParam2, int iParam3, int iParam4)
{
	if (!func_165(iParam1, 0))
	{
		return;
	}
	func_774(cParam0, iParam1, sParam2, iParam3, iParam4);
}

void func_774(char[4] cParam0, int iParam1, char* sParam2, int iParam3, int iParam4)
{
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	func_426(cParam0, iParam1, sParam2, iParam3, iParam4, 0, 0);
}

bool func_775()
{
	if (!func_391(iVar2237))
	{
		iLocal_2239 = func_284();
	}
	iVar0 = func_678(iVar2237);
	iVar1 = func_679(iVar2237);
	if (((iVar0 == 19 && iVar1 >= 30) || iVar0 >= 20) || ((iVar0 == 5 && iVar1 <= 10) || (iVar0 >= 0 && iVar0 < 5)))
	{
		return true;
	}
	return false;
}

bool func_776()
{
	if (!func_391(iVar2237))
	{
		iLocal_2239 = func_284();
	}
	iVar0 = func_678(iVar2237);
	iVar1 = func_679(iVar2237);
	if (((iVar0 == 5 && iVar1 >= 11) || (iVar0 >= 6 && iVar0 < 19)) || (iVar0 == 19 && iVar1 <= 29))
	{
		return true;
	}
	return false;
}

bool func_777(var uParam0, int iParam1)
{
	return (uParam0->f_8 && iParam1) != 0;
}

bool func_778(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

Vector3 func_779(var uParam0)
{
	return uParam0->f_862;
}

void func_780(var uParam0)
{
	if (func_1290(&iVar0))
	{
		if (func_557(iVar0, 0))
		{
			if (func_581(iVar0) == -525676072)
			{
				_set_ped_component_disabled(Global_35, 1249071452, 0);
				func_609(Global_35, -2065815962, 0, 1108822547, 0, 1, 0, 0, 0, 0);
			}
			else
			{
				_set_ped_component_disabled(Global_35, 1606587013, 0);
			}
			if (!func_557(*uParam0, 0))
			{
				*uParam0 = iVar0;
			}
		}
	}
}

void func_781(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (Global_1935630->f_12)
	{
		return;
	}
	Global_16 = 1;
	if (!network_is_game_in_progress())
	{
		func_121(0, 0);
		func_1291(-1);
	}
	func_1292(1);
	set_entity_invincible(Global_35, true);
	if (!func_778(*iParam0, 32))
	{
		iParam1 |= 16;
	}
	if (!func_778(*iParam0, 64))
	{
		iParam1 |= 8;
	}
	if (!func_778(*iParam0, 128))
	{
		iParam1 |= 32;
	}
	if (func_778(*iParam0, 131072))
	{
		iParam1 |= 2048;
	}
	if (!func_778(*iParam0, 32768))
	{
		set_player_control(get_player_index(), false, iParam1, true);
	}
	if (!func_778(*iParam0, 1))
	{
		_0xf239400e16c23e08(0, 0);
	}
	if (!func_778(*iParam0, 65536))
	{
		set_everyone_ignore_player(player_id(), true);
	}
	if (!func_778(*iParam0, 4) && !func_778(*iParam0, 2))
	{
		_hide_hud_component(-1679307491);
	}
	else
	{
		_display_hud_component(-1679307491);
	}
	if (!func_778(*iParam0, 2048))
	{
		func_793(0, 0);
	}
	if (func_778(*iParam0, 8))
	{
		clear_ped_tasks_immediately(Global_35, false, true);
	}
	if (func_778(*iParam0, 256))
	{
		_hide_ped_weapons(Global_35, 2, true);
	}
	if (func_778(*iParam0, 8192))
	{
		func_1293();
	}
	if (!func_778(*iParam0, 262144))
	{
		set_ped_reset_flag(Global_35, 264, true);
	}
	if (!func_778(*iParam0, 512))
	{
		if (is_gameplay_hint_active())
		{
			stop_gameplay_hint(false);
		}
	}
	if (!func_778(*iParam0, 1024))
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
		if (!func_778(*iParam0, 16))
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
						if (func_1294() == iVar7)
						{
							bVar8 = true;
						}
					}
					vVar3.x = iParam3;
					vVar3.f_1 = iParam4;
					vVar3.f_2 = iParam5;
					if (func_399(vVar3))
					{
						vVar3 = { get_offset_from_entity_in_world_coords(Global_35, 0f, IntToFloat((-1 + iVar2)), 0f) };
						func_1295(&vVar3, 50, 10, 0);
					}
					_0xed00d72f81cf7278(iVar7, 0, 1);
					set_entity_coords(iVar7, vVar3, false, true, true, true);
					if (bVar8)
					{
						func_1296(2);
						func_1297(-1);
						func_1298(vVar3);
						func_1300(func_1299());
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
	if (!func_778(*iParam0, 4096))
	{
		func_1301(Global_35);
	}
	if (!func_778(*iParam0, 1048576))
	{
		_0xdd1232b332cbb9e7(7, 1, 0);
	}
	if (!func_778(*iParam0, 2097152))
	{
		if (func_1302() || _0x50f124e6ef188b22(Global_35))
		{
			func_1303(1);
		}
	}
	if (Global_1359489->f_16 & 4194304 == 0)
	{
		Global_1359489->f_16 |= 4194304;
	}
	*iParam0 = 0;
}

void func_782(var uParam0, vector3 vParam1)
{
	uParam0->f_862 = { vParam1 };
}

void func_783(var uParam0)
{
	if (func_777(uParam0, 2048) && !func_399(func_1304(uParam0)))
	{
		bVar0 = _does_volume_exist(uParam0->f_4);
		iVar1 = _get_last_mount(Global_35);
		if ((!is_entity_dead(iVar1) && ((bVar0 && is_entity_in_volume(iVar1, uParam0->f_4, true, 0)) || func_777(uParam0, -2147483648))) && get_mount(Global_35) != iVar1)
		{
			iVar2 = 2;
			if (is_ped_in_writhe(iVar1))
			{
				iVar2 |= 32;
			}
			func_768(iVar1, func_1304(uParam0), func_1305(uParam0), iVar2, 1073741824);
		}
		iVar3 = get_players_last_vehicle();
		if ((!is_entity_dead(iVar3) && ((bVar0 && is_entity_in_volume(iVar3, uParam0->f_4, true, 0)) || func_777(uParam0, -2147483648))) && !is_ped_in_vehicle(Global_35, iVar3, true))
		{
			func_768(iVar3, func_1304(uParam0), func_1305(uParam0), 2, 1073741824);
		}
	}
}

void func_784(var uParam0)
{
	if ((func_777(uParam0, 268435456) && !func_399(func_1304(uParam0))) && is_ped_in_any_vehicle(Global_35, false))
	{
		iVar0 = get_vehicle_ped_is_using(Global_35);
		if (!is_entity_dead(iVar0))
		{
			vVar1 = { func_1304(uParam0) };
			func_768(iVar0, vVar1, func_1225(vVar1, Global_36, 1), 2, 1073741824);
			set_vehicle_on_ground_properly(iVar0, 0f);
			set_entity_velocity(iVar0, 0f, 0f, 0f);
			set_vehicle_forward_speed(iVar0, 0f);
		}
	}
}

void func_785(var uParam0, vector3 vParam1, int iParam4, bool bParam5)
{
	uParam0->f_865 = { vParam1 };
	uParam0->f_868 = iParam4;
	if (func_399(vParam1))
	{
		func_1306(uParam0, 2048, 1);
	}
	else
	{
		func_729(uParam0, 2048);
		if (bParam5)
		{
			func_729(uParam0, -2147483648);
		}
	}
}

void func_786(var uParam0)
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
					if (!func_1307(uParam0->f_13[iVar0], 8))
					{
						if (func_671(func_1037(iVar1, 0, 1, 0)))
						{
							if (!func_1308(uParam0, get_current_ped_weapon_entity_index(iVar1, 0)))
							{
								set_current_ped_weapon(iVar1, -1569615261, true, 0, false, false);
							}
						}
						if (func_671(func_1037(iVar1, 1, 1, 0)))
						{
							if (!func_1308(uParam0, get_current_ped_weapon_entity_index(iVar1, 1)))
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

void func_787(var uParam0, bool bParam1)
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

void func_788(var uParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	bVar4 = func_22() != -1;
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
			func_1134(262144);
		}
	}
	else
	{
		bParam6 = false;
		if (iParam3 == -1 || iParam3 == 8)
		{
			func_1309(iParam1, 29, bVar4, 1, 0);
			func_1309(iParam1, 31, bVar4, 1, 0);
			func_1309(iParam1, 30, bVar4, 1, 0);
			func_1309(iParam1, 22, bVar4, 1, 0);
			func_1309(iParam1, 37, bVar4, 1, 0);
		}
	}
	if ((func_1074(32768) && func_1310(1108822547, 8)) && func_1311(10, iParam3))
	{
		func_1312(iParam1, 0, 1);
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
			iVar3 = func_1142(iVar1, 1);
			if (func_1310(iVar3, 8))
			{
			}
			else if (&Global_1946804->f_57[iVar1]->f_2[0] == -1802376732 || &uParam0->f_1[iVar1] == 0)
			{
			}
			else
			{
				iVar2 = &uParam0->f_1[iVar1];
				if (!func_1311(iVar1, iParam3))
				{
				}
				else if ((func_1310(iVar3, 6) || &uParam0->f_1[iVar1] == &Global_1946804->f_57[iVar1]) || uParam0->f_1[iVar1]->f_1 == 289238755)
				{
					if (!func_1310(iVar3, 1) || bParam2)
					{
						Global_1946804->f_857++;
						if (!bParam6)
						{
							func_1309(iParam1, iVar1, bVar4, 1, 0);
						}
						if (uParam0->f_1[iVar1]->f_1 == 289238755)
						{
							Global_1946804->f_2456[iVar1]->f_1 = 289238755;
						}
						func_1313(iVar3, 1, 6);
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
								func_1309(iParam1, iVar1, bVar4, 1, &(uParam0->f_1[iVar1]));
							}
							Global_1946804->f_2456[iVar1] = &uParam0->f_1[iVar1];
							Global_1946804->f_2456[iVar1]->f_1 = uParam0->f_1[iVar1]->f_1;
							if (func_1310(iVar3, 1))
							{
								func_1314(iVar3, 1, 6);
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

bool func_789(int iParam0)
{
	switch (iParam0)
	{
		case 14:
		case 34:
			return !func_1315((*Global_1835011)[iParam0]);
	}
	return false;
}

Vector3 func_790(int iParam0)
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

int func_791(int iParam0, bool bParam1, int iParam2, bool bParam3)
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

int func_792(int iParam0, int iParam1)
{
	return func_1316(&uVar0, iParam0, iParam1);
}

void func_793(bool bParam0, bool bParam1)
{
	iVar2 = 0;
	while (iVar2 < 29)
	{
		iVar4 = iVar2;
		if (get_current_ped_weapon(Global_35, &iVar3, false, iVar4, true))
		{
			if (func_671(iVar3) && _0x705be297eebdb95d(iVar3))
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
		func_1317(1);
	}
}

void func_794(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
}

void func_795(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_1 = 0;
}

void func_796(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
}

void func_797(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
}

void func_798(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

void func_799(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

void func_800(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
}

void func_801(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
}

void func_802(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
}

void func_803(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

void func_804(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
}

int func_805(var uParam0, int iParam1)
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

int func_806(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (!func_817((*uParam0)[iVar0]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_807(var uParam0, char* sParam1)
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

int func_808(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 40)
	{
		if (!func_819((*uParam0)[iVar0]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_809(var uParam0, char* sParam1)
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

int func_810(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (!func_821((*uParam0)[iVar0]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_811(int iParam0, int iParam1)
{
	iVar0 = func_1318(iParam1);
	return (iParam0 && iVar0) != 0;
}

int func_812(var uParam0, char* sParam1, int iParam2)
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

int func_813(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (!func_826((*uParam0)[iVar0]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_814(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_815(var uParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (!is_string_null_or_empty(uParam0[iVar0]) && (*uParam0)[iVar0]->f_1 == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_816(int iParam0, bool bParam1)
{
	*iParam0 = (*iParam0 || bParam1);
}

bool func_817(var uParam0)
{
	return *uParam0 != 0;
}

void func_818(var uParam0)
{
	if (!func_848(uParam0->f_1, 1))
	{
		request_model(*uParam0, false);
		func_814(&(uParam0->f_1), 1);
	}
}

bool func_819(var uParam0)
{
	return !is_string_null_or_empty(*uParam0);
}

void func_820(var uParam0)
{
	if (!func_848(uParam0->f_3, 1))
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
		func_814(&(uParam0->f_3), 1);
	}
}

bool func_821(var uParam0)
{
	return !is_string_null_or_empty(*uParam0);
}

void func_822(var uParam0)
{
	if (!func_848(uParam0->f_1, 1))
	{
		request_anim_dict(*uParam0);
		func_814(&(uParam0->f_1), 1);
	}
}

bool func_823(var uParam0)
{
	return !is_string_null_or_empty(*uParam0);
}

bool func_824(var uParam0)
{
	if (func_848(uParam0->f_1, 2))
	{
		return true;
	}
	if (!func_848(uParam0->f_1, 1))
	{
		func_1319(uParam0);
	}
	if (_0x85b8f04555ab49b8(*uParam0))
	{
		func_814(&(uParam0->f_1), 2);
		return true;
	}
	return false;
}

bool func_825(var uParam0)
{
	if (func_848(*uParam0, 2))
	{
		return true;
	}
	if (!func_848(*uParam0, 1))
	{
		func_1320(uParam0);
	}
	if (has_ptfx_asset_loaded())
	{
		func_814(uParam0, 2);
		return true;
	}
	return false;
}

bool func_826(var uParam0)
{
	return !is_string_null_or_empty(*uParam0);
}

void func_827(var uParam0)
{
	if (!func_848(uParam0->f_2, 1))
	{
		if (func_1321(uParam0))
		{
			if (_is_anim_scene_metadata_loaded(uParam0->f_1, false))
			{
				sVar0 = func_1322(get_entity_model(Global_35));
				if (_0x6f1f0b17109309da(uParam0->f_1, sVar0))
				{
					set_anim_scene_entity(uParam0->f_1, sVar0, Global_35, 0);
				}
				else if (_0x6f1f0b17109309da(uParam0->f_1, "player_zero") && func_303())
				{
					set_anim_scene_entity(uParam0->f_1, "player_zero", Global_35, 0);
				}
				else if (_0x6f1f0b17109309da(uParam0->f_1, "player_three") && func_993())
				{
					set_anim_scene_entity(uParam0->f_1, "player_three", Global_35, 0);
				}
				load_anim_scene(uParam0->f_1);
				func_814(&(uParam0->f_2), 1);
			}
		}
	}
}

bool func_828(var uParam0)
{
	return !is_string_null_or_empty(*uParam0);
}

void func_829(var uParam0, int iParam1)
{
	if (!func_848(uParam0->f_1, 1))
	{
		if (!_is_anim_scene_loaded(iParam1, true, false))
		{
			return;
		}
		_0xdf7b5144e25cd3fe(iParam1, *uParam0);
		func_814(&(uParam0->f_1), 1);
	}
}

bool func_830(var uParam0)
{
	return *uParam0 != 0;
}

void func_831(var uParam0)
{
	if (!func_848(uParam0->f_2, 1))
	{
		_request_propset(*uParam0);
		func_814(&(uParam0->f_2), 1);
	}
}

bool func_832(var uParam0)
{
	return *uParam0 != 0;
}

void func_833(var uParam0)
{
	if (!func_848(uParam0->f_3, 1))
	{
		_0x72d4cb5db927009c(*uParam0, uParam0->f_1, uParam0->f_2);
		func_814(&(uParam0->f_3), 1);
	}
}

bool func_834(var uParam0)
{
	return !is_string_null_or_empty(*uParam0);
}

void func_835(var uParam0)
{
	if (!func_848(uParam0->f_1, 1))
	{
		request_script_audio_bank(*uParam0);
		func_814(&(uParam0->f_1), 1);
	}
}

bool func_836(var uParam0)
{
	return func_1323(*uParam0);
}

void func_837(var uParam0)
{
	if (!func_848(uParam0->f_1, 1))
	{
		_request_imap(*uParam0);
		func_814(&(uParam0->f_1), 1);
	}
}

bool func_838(var uParam0)
{
	return !is_string_null_or_empty(*uParam0);
}

void func_839(var uParam0)
{
	if (!func_848(uParam0->f_2, 1))
	{
		_0xe368e8422c860ba7(*uParam0, uParam0->f_1, -2);
		func_814(&(uParam0->f_2), 1);
	}
}

bool func_840(var uParam0)
{
	return !is_string_null_or_empty(*uParam0);
}

void func_841(var uParam0)
{
	if (!func_848(uParam0->f_1, 1))
	{
		_0x2b6529c54d29037a(*uParam0);
		func_814(&(uParam0->f_1), 1);
	}
}

bool func_842(var uParam0, int iParam1, char* sParam2)
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

void func_843(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5)
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
		sParam2 = func_725(iParam1);
	}
	if (is_string_null_or_empty(sParam2))
	{
		if (does_entity_exist(iParam1))
		{
		}
		return;
	}
	iVar0 = func_1324(uParam0, iParam1);
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
		iVar1 = func_1325(uParam0, sParam2);
		if (does_entity_exist(iVar1) && iVar1 != iParam1)
		{
			func_1326(uParam0, iVar1);
		}
	}
	if (iVar0 == -1)
	{
		iVar0 = func_1327(uParam0);
	}
	if (iVar0 != -1)
	{
		uParam0->f_13[iVar0] = iParam1;
		StringCopy(&(uParam0->f_13[iVar0]->f_1), sParam2, 64);
		uParam0->f_13[iVar0]->f_9 = iParam3;
		uParam0->f_13[iVar0]->f_10 = iParam4;
		if (bParam5)
		{
			func_1328(uParam0->f_13[iVar0], 2);
		}
		else
		{
			func_1329(uParam0->f_13[iVar0], 2);
		}
	}
}

struct<4> func_844(int iParam0)
{
	if (!func_188(iParam0))
	{
		return Var0;
	}
	return (*Global_1835011)[iParam0]->f_3;
}

bool func_845(var uParam0, char* sParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (!bParam4 && !uParam0->f_2501)
	{
		if (!func_866(uParam0, sParam1, iParam2, bParam4, bParam5))
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
			if (func_1330(uParam0, 0))
			{
				if (func_1331(uParam0, iParam2, iParam3, &cVar2, &iVar1, &iVar18))
				{
					if (func_1332(uParam0, 1, &iVar0))
					{
					}
					if (func_1333(uParam0, 3, &cVar2))
					{
					}
					if (func_1332(uParam0, 4, &iVar1))
					{
						cVar2.f_8 = iVar1;
					}
					if (func_1332(uParam0, 7, &(cVar2.f_12)))
					{
					}
					if (func_1332(uParam0, 8, &iVar1))
					{
						cVar2.f_10 = iVar1;
					}
					if (func_1332(uParam0, 10, &(cVar2.f_14)))
					{
					}
					if (func_1332(uParam0, 11, &iVar1))
					{
						cVar2.f_15 = iVar1;
					}
					if (iVar18 == 0)
					{
						if (iVar0 < 40 && uParam0->f_2504 < 40)
						{
							if (!func_1334(uParam0, &cVar2, uParam0->f_2504))
							{
								*(*uParam0)[uParam0->f_2504] = { cVar2 };
								func_476((*uParam0)[uParam0->f_2504], 1048576);
								uParam0->f_2504++;
							}
						}
					}
					else if (iVar18 == 3)
					{
						if (iVar0 < 40 && uParam0->f_2505 < 40)
						{
							*uParam0->f_641[uParam0->f_2505] = { cVar2 };
							func_476(uParam0->f_641[uParam0->f_2505], 1048576);
							uParam0->f_2505++;
						}
					}
					else if (iVar18 == 1)
					{
						if (iVar0 < 60 && uParam0->f_2506 < 60)
						{
							*uParam0->f_1282[uParam0->f_2506] = { cVar2 };
							func_476(uParam0->f_1282[uParam0->f_2506], 1048576);
							if (!bVar19 && func_216(&cVar2, 4))
							{
								prepare_music_event(uParam0->f_1282[uParam0->f_2506]);
								bVar19 = true;
							}
							uParam0->f_2506++;
						}
					}
					else if (iVar0 < 15 && uParam0->f_2507 < 15)
					{
						if (!func_1334(&(uParam0->f_2243), &cVar2, uParam0->f_2507))
						{
							*uParam0->f_2243[uParam0->f_2507] = { cVar2 };
							func_476(uParam0->f_2243[uParam0->f_2507], 1048576);
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
	if (!func_26(uParam0) && uParam0->f_2510 > 0)
	{
		iVar20 = uParam0->f_2511;
		while (iVar20 <= (uParam0->f_2510 - 1))
		{
			uParam0->f_2495.f_1 = 0;
			uParam0->f_2495.f_3 = iVar20;
			iVar22 = 0;
			if (func_1330(uParam0, 12))
			{
				if (func_1332(uParam0, 13, &iVar0))
				{
				}
				if (func_1332(uParam0, 14, &iVar1))
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
		func_40(uParam0);
	}
	return true;
}

void func_846(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((func_216((*uParam0)[iVar0], 1048576) && (*uParam0)[iVar0]->f_9 == 8) && !func_216((*uParam0)[iVar0], 1))
		{
			func_1335((*uParam0)[iVar0]);
		}
		iVar0++;
	}
}

bool func_847(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, int iParam12)
{
	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < *uParam0)
	{
		if (func_817((*uParam0)[iVar1]))
		{
			if (func_811((*uParam0)[iVar1]->f_2, iParam12))
			{
				if (!func_1336((*uParam0)[iVar1]))
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
		if (func_819((*uParam1)[iVar1]))
		{
			if (func_811((*uParam1)[iVar1]->f_4, iParam12))
			{
				if (!func_1337((*uParam1)[iVar1]))
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
		if (func_821((*uParam2)[iVar1]))
		{
			if (func_811((*uParam2)[iVar1]->f_2, iParam12))
			{
				if (!func_1338((*uParam2)[iVar1]))
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
		if (func_823((*uParam3)[iVar1]))
		{
			if (func_811((*uParam3)[iVar1]->f_2, iParam12))
			{
				if (!func_824((*uParam3)[iVar1]))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	if (func_811(uParam4->f_1, iParam12))
	{
		if (!func_825(uParam4))
		{
			iVar0 = 0;
		}
	}
	iVar1 = 0;
	while (iVar1 < *uParam5)
	{
		if (func_826((*uParam5)[iVar1]))
		{
			if (func_811((*uParam5)[iVar1]->f_3, iParam12))
			{
				if (func_1321((*uParam5)[iVar1]))
				{
					if (!func_849((*uParam5)[iVar1]))
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
		if (func_826((*uParam5)[iVar1]))
		{
			if (func_811((*uParam5)[iVar1]->f_3, iParam12))
			{
				if (func_1321((*uParam5)[iVar1]))
				{
					if (func_849((*uParam5)[iVar1]))
					{
						iVar2 = 0;
						while (iVar2 < 20)
						{
							if (func_828((*uParam5)[iVar1]->f_4[iVar2]))
							{
								if (!func_1339((*uParam5)[iVar1]->f_4[iVar2], (*uParam5)[iVar1]->f_1))
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
		if (func_830((*uParam6)[iVar1]))
		{
			if (func_811((*uParam6)[iVar1]->f_3, iParam12))
			{
				if (!func_1340((*uParam6)[iVar1]))
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
		if (func_832((*uParam7)[iVar1]))
		{
			if (func_811((*uParam7)[iVar1]->f_4, iParam12))
			{
				if (!func_1341((*uParam7)[iVar1]))
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
		if (func_834((*uParam8)[iVar1]))
		{
			if (func_811((*uParam8)[iVar1]->f_2, iParam12))
			{
				if (!func_1342((*uParam8)[iVar1]))
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
		if (func_836((*uParam9)[iVar1]))
		{
			if (func_811((*uParam9)[iVar1]->f_2, iParam12))
			{
				if (!func_1343((*uParam9)[iVar1]))
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
		if (func_838((*uParam10)[iVar1]))
		{
			if (func_811((*uParam10)[iVar1]->f_3, iParam12))
			{
				if (!func_1344((*uParam10)[iVar1]))
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
		if (func_840((*uParam11)[iVar1]))
		{
			if (func_811((*uParam11)[iVar1]->f_2, iParam12))
			{
				if (!func_1345((*uParam11)[iVar1]))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	return iVar0;
}

bool func_848(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_849(var uParam0)
{
	if (func_848(uParam0->f_2, 2))
	{
		return true;
	}
	if (!func_848(uParam0->f_2, 1))
	{
		func_827(uParam0);
	}
	if (_is_anim_scene_loaded(uParam0->f_1, true, false))
	{
		func_814(&(uParam0->f_2), 2);
		return true;
	}
	return false;
}

int func_850(int iParam0)
{
	if (!func_188(iParam0))
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

bool func_851(char[4] cParam0, int iParam1, var uParam2, bool bParam3, var uParam4, var uParam5, var uParam6, float fParam7, bool bParam8, int iParam9, bool bParam10, int iParam11, bool bParam12, bool bParam13)
{
	if (!func_495(iParam1))
	{
		return false;
	}
	if ((!is_entity_dead(*uParam2) && func_257(iParam1)) && func_1346(iParam1) == *uParam2)
	{
		return true;
	}
	*uParam2 = func_1347(iParam1, 1, 0, uParam4, uParam5, uParam6, fParam7, bParam8, 1, 0, 0, bParam10, 0, iParam9, 0, 0, 0, iParam11, 1, 1, bParam13, 0, 1, 0, 1);
	if (does_entity_exist(*uParam2))
	{
		func_1348(cParam0, *uParam2, iParam1, bParam3, (bParam8 && bParam12), bParam10, bParam13);
		func_1349(iParam1);
		return true;
	}
	return false;
}

bool func_852(char[4] cParam0)
{
	if (!func_399(cParam0->f_5417))
	{
		return true;
	}
	switch (cParam0->f_607)
	{
		case 7:
			func_1350(cParam0, -271.1003f, 798.9771f, 118.0088f, 359.8847f);
			break;
		case 15:
			func_1350(cParam0, -101.4083f, -34.0691f, 94.9419f, 43.5697f);
			break;
		case 8:
			func_1350(cParam0, 884.1405f, 1283.638f, 233.1437f, 288.539f);
			break;
		case 25:
			func_1350(cParam0, 1154.01f, -87.7217f, 87.745f, 333.9165f);
			break;
		case 14:
			func_1350(cParam0, -257.4742f, 716.4608f, 114.3661f, 298.3928f);
			break;
		case 9:
			func_1350(cParam0, -113.3479f, -14.8907f, 96.1036f, 66.3363f);
			break;
		case 13:
			func_1350(cParam0, -893.1545f, -1097.781f, 59.3724f, 67.7581f);
			break;
		case 11:
			func_1350(cParam0, -1528.842f, -315.0988f, 143.0872f, 97.0964f);
			break;
		case 26:
			func_1350(cParam0, 705.8042f, -1230.294f, 44.2243f, 60.9884f);
			break;
		case 53:
			func_1350(cParam0, 705.8099f, -1229.4f, 44.2311f, 67.5463f);
			break;
		case 16:
			func_1350(cParam0, 667.7685f, -1211.293f, 45.3101f, 92.5271f);
			break;
		case 17:
			func_1350(cParam0, 1339.753f, -1305.21f, 75.5849f, 337.5673f);
			break;
		case 19:
			func_1350(cParam0, 1857.32f, -1367.512f, 41.2697f, 162.265f);
			break;
		case 24:
			func_1350(cParam0, 691.6649f, -1235.476f, 43.3174f, 227.0576f);
			break;
		case 23:
			func_1350(cParam0, 676.2985f, -1227.818f, 43.598f, 352.091f);
			break;
		case 22:
			func_1350(cParam0, 663.6722f, -1229.636f, 43.3769f, 171.6396f);
			break;
		case 36:
			func_1350(cParam0, 2647.098f, -1270.327f, 51.0841f, 113.0633f);
			break;
		case 28:
			func_1350(cParam0, 2413.412f, -1220.656f, 44.9084f, 0.0301f);
			break;
		case 30:
			func_1350(cParam0, 1853.05f, -1835.788f, 42.0957f, 29.7034f);
			break;
		case 37:
			func_1350(cParam0, 1842.425f, -1833.848f, 43.2426f, 0.0743f);
			break;
		case 45:
			func_1350(cParam0, 2824.987f, -1165.335f, 47.3695f, 190.1776f);
			break;
		case 48:
			func_1350(cParam0, 483.1636f, 2222.628f, 246.0867f, 109.4105f);
			break;
		case 49:
			func_1350(cParam0, 2376.538f, 1339.845f, 105.3362f, 193.8848f);
			break;
		case 50:
			func_1350(cParam0, 2377.94f, 1338.177f, 105.4092f, 196.4492f);
			break;
		case 51:
			func_1350(cParam0, 491.0881f, 2221.171f, 246.1786f, 246.5501f);
			break;
		case 55:
			func_1350(cParam0, 2774.684f, 513.5845f, 66.9882f, 355.826f);
			break;
		case 76:
			func_1350(cParam0, -1616.827f, -1379.19f, 81.8942f, 339.9481f);
			break;
		case 73:
			func_1350(cParam0, -1611.214f, -1344.436f, 81.8767f, 359.9349f);
			break;
		case 75:
			func_1350(cParam0, -1678.714f, -1378.879f, 83.969f, 347.6046f);
			break;
		case 69:
			func_1350(cParam0, -302.3015f, 786.3279f, 116.9486f, 185.0768f);
			break;
		case 70:
			func_1350(cParam0, -1566.102f, -1448.615f, 90.6887f, 291.3719f);
			break;
		case 71:
			func_1350(cParam0, -1625.965f, -1395.404f, 81.6263f, 114.6379f);
			break;
		case 72:
			func_1350(cParam0, -835.0144f, -1343.726f, 42.473f, 0.0002f);
			break;
	}
	return !func_399(cParam0->f_5417);
}

int func_853(int iParam0, var uParam1)
{
	uParam1->f_10 = func_265(uParam1->f_10);
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
		if (func_399(uParam1->f_6))
		{
		}
	}
	bVar0 = func_398();
	if (*uParam1)
	{
		if (bVar0 && !func_326((*Global_1835011)[4]->f_1, 1))
		{
			if (func_1351(5))
			{
				func_507(5);
				func_1352(5);
				func_1297(0);
				func_1296(0);
			}
		}
	}
	if (func_1353(Global_36) == 8)
	{
		*iParam0 = 1;
		return 0;
	}
	if ((bVar0 && func_326((*Global_1835011)[37]->f_1, 1)) && !func_326((*Global_1835011)[43]->f_1, 1))
	{
		*iParam0 = 1;
		return 0;
	}
	if ((bVar0 && func_326((*Global_1835011)[43]->f_1, 1)) && !func_326((*Global_1835011)[44]->f_1, 1))
	{
		if (uParam1->f_10 == 0)
		{
			*iParam0 = 1;
			return 0;
		}
	}
	iVar1 = uParam1->f_10;
	iVar2 = func_214(iVar1);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	if (func_510(iVar1))
	{
		bVar3 = true;
		if (func_1354(iVar1))
		{
			bVar4 = true;
		}
		if (func_517(iVar1))
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
				func_518(uParam1->f_10);
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
			if (!func_1351(0) && func_1351(1))
			{
				func_1355(1, 0);
				*iParam0 = 0;
				return 0;
			}
		}
	}
	if (uParam1->f_4)
	{
		if (uParam1->f_10 == 0)
		{
			if (func_1356())
			{
				func_1357();
			}
			func_1297(0);
			func_1296(0);
			func_1298(uParam1->f_6);
		}
	}
	if (!func_510(uParam1->f_10))
	{
		if (*uParam1)
		{
			if ((func_1358(uParam1->f_10) == 0 || func_1359(uParam1->f_10) == 0) || func_1360(uParam1->f_10) == 0)
			{
				func_1361(uParam1->f_10);
			}
			func_1362(uParam1->f_10);
			func_1363(uParam1->f_10, uParam1->f_6, uParam1->f_9);
			*iParam0 = 0;
			return 0;
		}
		*iParam0 = 1;
		return 0;
	}
	iVar1 = uParam1->f_10;
	iVar2 = func_214(iVar1);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	if (func_510(iVar1))
	{
		bVar3 = true;
		if (func_1354(iVar1))
		{
			bVar4 = true;
		}
		if (func_517(iVar1))
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
			if (!func_399(uParam1->f_6))
			{
				set_entity_coords(iVar2, uParam1->f_6, false, true, true, true);
				set_entity_heading(iVar2, uParam1->f_9);
				_0x9587913b9e772d29(iVar2, 0);
			}
		}
	}
	if (func_1364(uParam1->f_10))
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
			Var8 = { func_1365(uParam1->f_10) };
			Var10 = { func_1366() };
			func_1367(iVar2, &Var8, &Var10, 0);
			_set_ped_as_saddle_horse_for_player(iVar6, iVar2);
			set_ped_config_flag(iVar2, 186, false);
		}
	}
	if (!uParam1->f_1)
	{
		*iParam0 = 2;
		return iVar2;
	}
	if (!func_503(uParam1->f_10))
	{
		set_entity_as_mission_entity(iVar2, true, true);
		func_1368(uParam1->f_10);
		if (uParam1->f_2 && !func_399(uParam1->f_6))
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
	func_502(uParam1->f_10);
	if (func_503(uParam1->f_10))
	{
		iVar16 = func_261(uParam1->f_10);
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

bool func_854(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (!does_entity_exist(iParam1))
	{
		return false;
	}
	if (vdist2(get_entity_coords(iParam0, bParam3, false), get_entity_coords(iParam1, bParam3, false)) <= (bParam2 * bParam2))
	{
		return true;
	}
	return false;
}

bool func_855(int iParam0)
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

bool func_856(int iParam0, int iParam1, vector3 vParam2, float fParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10)
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
	if (!func_1369(iParam1))
	{
		return false;
	}
	iVar0 = func_1370(iParam1, vParam2, fParam5, iParam8, 1, bParam6, bParam7);
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

void func_857(char[4] cParam0, bool bParam1)
{
	if (!is_entity_dead(cParam0->f_5411))
	{
		if (!_0x88ad6cc10d8d35b2(cParam0->f_5411))
		{
			set_entity_as_mission_entity(cParam0->f_5411, true, true);
		}
		if ((bParam1 && !_0x3ab6c7b0bb0df4b1(cParam0->f_5411, -1)) && !func_122(cParam0, 32768))
		{
			clear_ped_tasks(cParam0->f_5411, 1, 0);
		}
		if (!func_22() == 0)
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

float func_858(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

bool func_859(int iParam0, int iParam1, int iParam2)
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

bool func_860(var uParam0, int iParam1)
{
	switch (func_1371(uParam0))
	{
		case 0:
			if (!func_1372(iParam1, &(uParam0->f_8), &(uParam0->f_6)))
			{
				return true;
			}
			func_1373(uParam0, 1);
			break;
		case 1:
			func_1374(uParam0);
			render_script_cams(true, false, 3000, true, false, 0);
			iVar0 = 0;
			func_781(&iVar0, 0, 2, 0, 0, 0, 0);
			func_1373(uParam0, 2);
			break;
		case 2:
			if (func_1375(uParam0))
			{
				func_1376(uParam0->f_8, 5000f, 0);
				_0x4759cc730f947c81();
				func_29(&(uParam0->f_3), 1);
				func_1373(uParam0, 3);
			}
			break;
		case 3:
			if (func_867(&(uParam0->f_3)) >= 1f)
			{
				func_1373(uParam0, 4);
			}
			break;
		case 4:
			if (!func_31())
			{
				render_script_cams(false, false, 3000, true, false, 0);
				if (does_cam_exist(uParam0->f_2))
				{
					destroy_cam(uParam0->f_2, false);
				}
			}
			iVar1 = 1;
			func_1377(&iVar1, 0);
			release_script_audio_bank();
			func_1373(uParam0, 0);
			return true;
	}
	return false;
}

void func_861(char[4] cParam0)
{
	if (!func_122(cParam0, 524288))
	{
		MemCopy(&uVar0, {func_112(cParam0->f_607)}, 8);
		func_1378(&uVar0, 15000, 0, 0, 0, 1);
		func_105(cParam0, 524288);
	}
}

bool func_862(char[4] cParam0)
{
	iVar0 = func_37(cParam0);
	if (func_164(cParam0, func_35(cParam0)) <= 3)
	{
		iVar0 = func_35(cParam0);
	}
	Var1 = { func_1379(cParam0, iVar0) };
	if (func_1381(&(cParam0->f_10792), Var1, func_1380(&(cParam0->f_10792)), 0))
	{
		func_142(cParam0, func_35(cParam0), 262144);
		if (func_1382(&(cParam0->f_10792), 524288))
		{
			func_379(cParam0, 67108864);
			func_1383(&(cParam0->f_10792), 524288);
		}
		func_1384(&(cParam0->f_7375), &(cParam0->f_10792));
		return true;
	}
	return false;
}

void func_863(char[4] cParam0, int iParam1)
{
	cParam0->f_5307 = (cParam0->f_5307 - (cParam0->f_5307 && iParam1));
}

bool func_864(char[4] cParam0, struct<4> Param1)
{
	if (is_string_null_or_empty(&Param1))
	{
		return true;
	}
	if (func_10(cParam0, 16777216))
	{
		func_1385(cParam0);
		func_1386(cParam0);
		return true;
	}
	if (func_1387(Param1, &(cParam0->f_7375), cParam0))
	{
		return true;
	}
	if (func_156(cParam0) == 0)
	{
		func_884(cParam0);
	}
	if (func_31())
	{
		if (!func_10(cParam0, 262144))
		{
			stop_gameplay_hint(true);
			render_script_cams(false, false, 3000, true, false, 0);
			if (does_cam_exist(cParam0->f_609.f_2))
			{
				destroy_cam(cParam0->f_609.f_2, false);
			}
			func_53(&(cParam0->f_10792));
			func_1388(cParam0);
			func_863(cParam0, 524288);
			func_1269(cParam0);
			func_151(cParam0, 30f);
			func_152(cParam0, 40f);
			func_101(cParam0, 262144);
		}
		if (!func_10(cParam0, 524288) && _0xef324e9550a394d5(cParam0->f_7375.f_804))
		{
			func_101(cParam0, 524288);
		}
	}
	return false;
}

bool func_865(char[4] cParam0)
{
	iVar0 = 1;
	if (!func_1389(func_63(cParam0), func_122(cParam0, 65536)))
	{
		iVar0 = 0;
	}
	Var1 = { func_1390(func_63(cParam0)) };
	if (!is_string_null_or_empty(&Var1))
	{
		if (!func_1391(func_63(cParam0)))
		{
			iVar0 = 0;
		}
	}
	if (!func_427(cParam0, func_35(cParam0), 1))
	{
		iVar0 = 0;
	}
	if (func_122(cParam0, 4) && !_0x5e420ff293ee5472())
	{
		iVar0 = 0;
	}
	MemCopy(&cVar9, {func_844(cParam0->f_607)}, 3);
	if (!func_25(&(cParam0->f_8269)))
	{
		if (!func_866(&(cParam0->f_8269), &cVar9, 0, 1, 1))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

bool func_866(var uParam0, char* sParam1, int iParam2, bool bParam3, bool bParam4)
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
	func_1392(uParam0);
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

float func_867(int iParam0)
{
	if (!func_28(iParam0))
	{
		return iParam0->f_1;
	}
	if (func_478(iParam0))
	{
		return iParam0->f_2;
	}
	return (func_530() - iParam0->f_1);
}

bool func_868()
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

void func_869(float fParam0, float fParam1)
{
	set_gameplay_cam_relative_heading(fParam0, 1f);
	set_gameplay_cam_relative_pitch(fParam1, 1f);
}

void func_870()
{
	func_1393(iLocal_124[15], 455.0858f, 2220.748f, 237.6478f, 0f, 0f, 76.37069f, 113.7091f, 103.4265f, 66.52731f, "Wapiti", 0, 0);
	func_1393(iLocal_124[0], 875.4947f, 1793.299f, 312.1996f, -9.794339f, -10.01277f, -12.47027f, 17.17485f, 18.54888f, 26.58166f, "Herbs 01 Enter", 0, 0);
	func_1393(iLocal_124[1], 1076.824f, 1639.38f, 345.9943f, 0f, 0f, 107.7676f, 32.79908f, 36.18502f, 80.18594f, "Herbs 02 Enter", 0, 0);
	func_1393(iLocal_124[2], 863.6318f, 1807.434f, 303.2148f, -3.73093f, -10.26966f, -46.45719f, 12.05917f, 13.3445f, 20.79676f, "Herbs 01", 0, 0);
	func_1393(iLocal_124[3], 1050.982f, 1637.323f, 378.624f, 0f, 0f, -8.451299f, 28.08406f, 16.54615f, 15.9275f, "Herbs 02", 0, 0);
	func_1393(iLocal_124[4], 865.3292f, 1803.416f, 323.1339f, 0f, 0f, 0f, 1f, 1f, 3.85959f, "Herbs 01 Disable", 1, 0);
	func_1393(iLocal_124[5], 865.3292f, 1803.416f, 323.1339f, 0f, 0f, 0f, 1f, 1f, 3.85959f, "Herbs 02 Disable", 1, 0);
	func_1393(iLocal_124[6], 865.3292f, 1803.416f, 323.1339f, 0f, 0f, 0f, 1f, 1f, 3.85959f, "Herbs 01 Grief", 1, 1);
	func_1393(iLocal_124[7], 865.3292f, 1803.416f, 323.1339f, 0f, 0f, 0f, 1f, 1f, 3.85959f, "Herbs 02 Grief", 1, 1);
	func_1393(iLocal_124[25], 884.4998f, 1769.198f, 313.1809f, -9.794339f, -10.01277f, -12.47027f, 40.85122f, 21.02171f, 16.92409f, "Herbs 01 Player Rdy", 0, 0);
	func_1393(iLocal_124[26], 1077.344f, 1663.743f, 375.2655f, 0.301317f, -2.681713f, -14.33531f, 40.85122f, 21.02171f, 16.92409f, "Herbs 02 Player Rdy", 0, 0);
	func_1393(iLocal_124[27], 866.5153f, 1804.252f, 302.4087f, -3.73093f, -10.26966f, -46.45719f, 12.05917f, 13.3445f, 20.79676f, "English Mace (Herb Patch)", 0, 0);
	func_1393(iLocal_124[28], 1050.982f, 1637.323f, 378.624f, 0f, 0f, -8.451299f, 28.08406f, 16.54615f, 15.9275f, "Alaskan Ginseng (Herb Patch)", 0, 0);
	func_1393(iLocal_124[29], 1064.179f, 1651.24f, 378.624f, 0f, 0f, -24.75567f, 35.18069f, 61.40107f, 15.9275f, "Alaskan Ginseng RF Warn", 0, 0);
	func_1393(iLocal_124[30], 1065.188f, 1647.469f, 378.624f, 0f, 0f, -8.451297f, 66.89245f, 77.76637f, 26.77065f, "Alaskan Ginseng RF Fail", 0, 0);
	func_1393(iLocal_124[16], 665.3826f, 2001.659f, 229.7136f, 0f, 0f, 76.37069f, 21.36815f, 62.48703f, 17.71803f, "Monroe Begin Exit", 0, 0);
	func_1393(iLocal_124[41], 755.5781f, 1913.424f, 247.8224f, 0f, 0f, -42.81989f, 16.82948f, 86.56966f, 26.58166f, "Wolf Pack Hint", 0, 0);
	func_1393(iLocal_124[42], 819.8469f, 1858.075f, 255.5882f, 0f, 0f, -26.79295f, 16.82948f, 86.56966f, 26.58166f, "Wolf Pack Flee Trigger", 0, 0);
	func_1393(iLocal_124[17], 795.9052f, 1512.235f, 204.1345f, 0f, 0f, 5.967473f, 1f, 1f, 2.77818f, "Pick Up Sacred Items", 0, 0);
	func_1393(iLocal_124[32], 799.5425f, 1512.467f, 204.1345f, 0f, 0f, -22.86167f, 7.058056f, 4.54493f, 4.372033f, "Wake Slp Army Man Zone", 0, 0);
	func_1393(iLocal_124[33], 801.915f, 1514.004f, 204.1345f, 0f, 0f, -134.6941f, 2.889395f, 2.661756f, 4.372033f, "Kill Slp Army Man Zone", 0, 0);
	func_1393(iLocal_124[20], 984.6335f, 1451.93f, 279.5075f, 0f, 0f, 0f, 1.9134f, 2.309301f, 4.087741f, "Cohutta Shrine Grief", 1, 1);
	func_1393(iLocal_124[18], 1007.496f, 1450.622f, 281.0472f, 0f, 0f, 5.736554f, 14.36695f, 11.93891f, 13.05852f, "Arrive at Cohutta", 0, 0);
	if (!_does_volume_exist(&(iLocal_124[9])))
	{
		iLocal_124[9] = _create_volume_aggregate_with_custom_name("Avoid RF Inves 01");
		iVar0 = _create_volume_box(1005.228f, 1465.051f, 274.8318f, 0f, 0f, 19.37245f, 9.925971f, 6.719393f, 13.05852f);
		_0x6e0d3c3f828da773(&(iLocal_124[9]), iVar0);
		iVar1 = _create_volume_box(1005.467f, 1470.143f, 276.8904f, 0f, 0f, 25.69285f, 3.06175f, 4.124173f, 12.03381f);
		_0x6e0d3c3f828da773(&(iLocal_124[9]), iVar1);
	}
	func_1393(iLocal_124[10], 974.657f, 1446.68f, 275.3686f, 0f, 0f, 4.51808f, 1.714377f, 3.766947f, 13.05852f, "Avoid RF Inves 02", 0, 0);
	func_1393(iLocal_124[11], 983.7556f, 1470.725f, 273.6941f, 0f, 0f, -16.72551f, 2.392409f, 4.889244f, 13.05852f, "Avoid RF Inves 03", 0, 0);
	func_1393(iLocal_124[12], 969.1298f, 1461.091f, 275.3686f, 0f, 0f, -23.94255f, 1.825375f, 2.827315f, 13.05852f, "Avoid RF Inves 04", 0, 0);
	func_1393(iLocal_124[13], 986.0428f, 1461.218f, 275.3686f, 0f, 0f, -109.3623f, 1.825375f, 1.715174f, 8.148002f, "Avoid RF Inves 05", 0, 0);
	func_1393(iLocal_124[14], 985.3313f, 1448.722f, 275.3686f, 0f, 0f, -121.3255f, 1.825375f, 2.598416f, 8.148002f, "Avoid RF Inves 06", 0, 0);
	func_1393(iLocal_124[22], 998.9428f, 1462.284f, 276.2774f, 0f, 0f, -27.0066f, 31.21652f, 51.38261f, 26.09693f, "Can RF Inves logs", 0, 0);
	func_1393(iLocal_124[23], 962.9075f, 1469.784f, 277.2491f, 0f, 0f, -13.58017f, 6.055223f, 11.93891f, 12.98986f, "Army Camp Found", 0, 0);
	func_1393(iLocal_124[39], 800.6481f, 1521.43f, 204.1345f, 0f, 0f, -86.98692f, 5.349029f, 4.54493f, 4.372033f, "Army Knife Tent Area", 0, 0);
	func_1393(iLocal_124[40], 800.3039f, 1521.622f, 204.1345f, 0f, 0f, -12.39622f, 2.375951f, 3.99183f, 3.579743f, "Army Knife Tent Alert Area", 0, 0);
	func_1393(iLocal_124[24], 830.3113f, 1508.395f, 208.9845f, 0f, 0f, -26.26453f, 120.9482f, 49.65182f, 100.9048f, "Trigger 1st Patrol", 0, 0);
	func_1393(iLocal_124[34], 780.4147f, 1490.489f, 198.7438f, 0f, 0f, -8.973945f, 13.34755f, 4.54493f, 8.112068f, "Horse Flee", 0, 0);
	func_1393(iLocal_124[36], 867.2273f, 1505.582f, 208.9845f, 0f, 0f, -6.570179f, 283.1035f, 141.5789f, 187.3534f, "Army Camp Warn", 0, 0);
	func_1393(iLocal_124[37], 867.2273f, 1505.582f, 208.9845f, 0f, 0f, -6.570179f, 406.8375f, 337.99f, 187.3534f, "Army Camp Fail", 0, 0);
	func_1393(iLocal_124[35], 779.7474f, 1487.522f, 209.3284f, 0f, 0f, 0f, 113.1925f, 125.57f, 59.40342f, "Army Camp Investigate", 1, 0);
	func_1393(iLocal_124[21], 980.0048f, 1451.016f, 279.5075f, 0f, 0f, 0f, 2.26332f, 4.242612f, 4.087741f, "Army Camp Fail", 1, 0);
	if (!_does_volume_exist(&(iLocal_124[38])))
	{
		func_1393(iLocal_124[19], 983.1528f, 1456.048f, 281.5925f, 0f, 0f, 0f, 39.16177f, 45.84906f, 26.09693f, "Cohutta", 0, 0);
		func_1394(&(iLocal_124[19]), 0, 10208, 0);
	}
	if (!_does_volume_exist(&(iLocal_124[38])))
	{
		func_1395(iLocal_124[38], 803.4349f, 1507.566f, 208.9845f, 0f, 0f, 0f, 58.2063f, 53.68762f, 38.85653f, "Army Camp");
		func_1394(&(iLocal_124[38]), 0, 10208, 0);
	}
}

bool func_871()
{
	if (iLocal_229 == 0)
	{
		_request_propset(iLocal_228);
		iLocal_229 = 1;
	}
	if (_has_propset_loaded(iLocal_228))
	{
		return true;
	}
	return false;
}

bool func_872(char[4] cParam0)
{
	iVar0 = func_35(cParam0);
	if (!func_1396(cParam0))
	{
		return false;
	}
	if (!func_1397(cParam0))
	{
		return false;
	}
	if (iVar0 <= iLocal_74)
	{
		if (!func_1398(cParam0))
		{
			return false;
		}
	}
	if (iVar0 >= iLocal_77)
	{
		if (!func_1399(cParam0))
		{
			return false;
		}
	}
	return true;
}

int func_873(char[4] cParam0)
{
	func_392(cParam0);
	if (func_35(cParam0) == iLocal_74)
	{
		func_29(&uLocal_2105, 0);
		_remove_imap(661576070);
		_request_imap(795060201);
		if (func_1223(&uLocal_2105, 5f))
		{
		}
		else if (!_is_imap_active(795060201) || _is_imap_active(661576070))
		{
			return 0;
		}
	}
	return 1;
}

void func_874(char[4] cParam0, int iParam1)
{
	cParam0->f_8265 = iParam1;
	func_105(cParam0, 2048);
}

int func_875(char[4] cParam0)
{
	iVar0 = func_35(cParam0);
	if (iVar0 == iLocal_74)
	{
		_0x4046493d2eeaca0e();
		func_392(cParam0);
		if (_does_anim_scene_exist(cParam0->f_7375.f_804) && _is_anim_scene_started(cParam0->f_7375.f_804, false))
		{
			func_1400(cParam0);
			if ((has_anim_event_fired(Global_35, 1942959777) || has_anim_event_fired(Global_35, 1235383893)) && iLocal_238 == 0)
			{
				_set_weather_type(821931868, true, false, false, 0f, false);
				iLocal_238 = 1;
			}
			if (has_anim_event_fired(Global_35, -1141652977))
			{
				func_1401(cParam0);
			}
			if (!func_165(iVar347, 0))
			{
				func_1402(&(Local_14.f_25), 1);
				func_1403(1, 0);
				iLocal_350 = &Local_14.f_27[1];
			}
			else if (!func_165(iVar348, 0) || !func_165(iVar349, 0))
			{
				if (!func_1398(cParam0))
				{
				}
			}
			if (_get_anim_scene_progress(cParam0->f_7375.f_804) >= 0.25f)
			{
				if (!func_165(_get_anim_scene_ped(cParam0->f_7375.f_804, "CaptainMonroe", false), 0))
				{
					func_1404(cParam0->f_7375.f_804, "CaptainMonroe", iVar348);
				}
				if (!func_165(_get_anim_scene_ped(cParam0->f_7375.f_804, "Horse_01^2", false), 0))
				{
					func_1404(cParam0->f_7375.f_804, "Horse_01^2", iVar344);
				}
				if (!func_165(_get_anim_scene_ped(cParam0->f_7375.f_804, "Horse_01", false), 0))
				{
					func_1404(cParam0->f_7375.f_804, "Horse_01", iVar349);
				}
				if (!func_165(_get_anim_scene_ped(cParam0->f_7375.f_804, "Horse_01^1", false), 0))
				{
					func_1404(cParam0->f_7375.f_804, "Horse_01^1", iVar347);
				}
			}
		}
		if (func_1405(cParam0, Global_35, 0, 0, 1, 1))
		{
			func_1190(Global_35, iVar344, 0, 1065353216, 20000);
		}
		if (func_1405(cParam0, iVar346, 0, 0, 1, 1))
		{
			func_1190(iVar346, iVar347, 0, 1065353216, 20000);
			func_1189(iVar348, iVar349, 0, -1, 1);
		}
	}
	if (iVar0 == iLocal_80)
	{
		if (func_1406(cParam0, 524288) && iLocal_239 == 1)
		{
			_0xe296208c273bd7f0(-1, -1, 0, 17, 1, 0);
			_hide_hud_component(724769646);
			if (!is_screen_fading_out() && !is_screen_faded_out())
			{
				do_screen_fade_out(0);
			}
		}
		else if ((iLocal_239 == 0 && !func_1406(cParam0, 67108864)) && !func_1406(cParam0, 512))
		{
			if (is_screen_fading_out() || is_screen_faded_out())
			{
				do_screen_fade_in(1000);
			}
		}
		if (_does_anim_scene_exist(cParam0->f_7375.f_804) && _is_anim_scene_started(cParam0->f_7375.f_804, false))
		{
			if ((_get_anim_scene_progress(cParam0->f_7375.f_804) >= 0.99f || has_anim_event_fired(Global_35, 1163102853)) && iLocal_239 == 0)
			{
				do_screen_fade_out(2000);
				iLocal_239 = 1;
				func_379(cParam0, 524288);
			}
		}
	}
	return 1;
}

void func_876(char[4] cParam0, int iParam1)
{
	cParam0->f_8266 = iParam1;
	func_105(cParam0, 1024);
}

void func_877()
{
	_request_imap(795060201);
	func_1407(746475990);
	func_1408("ntv1_armycamp");
	set_scenario_type_enabled("PROP_PLAYER_SLEEP_TENT_A_FRAME", false);
	set_scenario_type_enabled("WORLD_ANIMAL_RAM_GRAZING", false);
}

void func_878(char[4] cParam0)
{
	if (iVar2223 == 1 && iVar2224 == 1)
	{
		return;
	}
	iVar0 = func_35(cParam0);
	if (iVar2223 == 0)
	{
		func_1409(-1, 1);
		iVar1 = 0;
		while (iVar1 < 9)
		{
			uLocal_2080[iVar1] = &Local_14.f_46[iVar1];
			if (iVar0 <= iLocal_77)
			{
				if (iVar1 != 2)
				{
					_0x67bfced22909834d(&(uLocal_2080[iVar1]));
					_0x18ff3110cf47115d(&(uLocal_2080[iVar1]), 2, 0);
					if (!_0x91a5f9cbebb9d936(&(Local_2300.f_262[iVar1])))
					{
						if (!_does_volume_exist(&(Local_2300.f_251[iVar1])))
						{
							func_1410(Local_2300.f_251[iVar1], get_entity_coords(&(uLocal_2080[iVar1]), true, false), 0f, 0f, 0f, 2f, 2f, 2.5f, "");
						}
						Local_2300.f_262[iVar1] = _0x4c39c95ae5db1329(&(Local_2300.f_251[iVar1]), 0, 16);
					}
				}
				if (iVar1 != 4 && iVar1 != 8)
				{
					_0x543dfe14be720027(get_player_index(), &(uLocal_2080[iVar1]), 0);
					_0x6ecfc621a168424c(&(uLocal_2080[iVar1]), &(uLocal_2080[iVar1]), 0, 0);
				}
			}
			iVar1++;
		}
		if (!does_entity_exist(iVar2087))
		{
			iLocal_2090 = create_object(-402585707, 982.8148f, 1471.028f, 277.2813f, true, true, false, false, true);
			set_entity_rotation(iVar2087, -12.4158f, -16.6733f, 114.4817f, 2, true);
			freeze_entity_position(iVar2087, true);
		}
		iLocal_2226 = 1;
	}
	if (iVar2224 == 0 && iVar0 >= iLocal_77)
	{
		if (func_1227(uLocal_111[0], func_417(0), 0, 0) && func_1229(&(uLocal_111[0]), "pl_loop", 1))
		{
			func_1231(0);
			func_1232(&(uLocal_111[0]));
			iLocal_2227 = 1;
		}
	}
}

void func_879()
{
	func_1411(-1, 1);
	iVar0 = 0;
	while (iVar0 < 2)
	{
		uLocal_2124[iVar0] = &Local_14.f_42[iVar0];
		iVar0++;
	}
}

void func_880()
{
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_399(*vLocal_2183[iVar0]))
		{
		}
		else
		{
			_0x4161648394262fdf(*vLocal_2183[iVar0], 5f);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_399(*vLocal_2196[iVar0]))
		{
		}
		else
		{
			_0x4161648394262fdf(*vLocal_2196[iVar0], 5f);
		}
		iVar0++;
	}
	_0x9c8f42a5d1859dc1(&(iLocal_124[2]));
	_0x9c8f42a5d1859dc1(&(iLocal_124[3]));
	if (!_does_scenario_point_exist(&(iLocal_2172[0])))
	{
		iVar1 = func_1412(15, func_1201(10, 0));
		if (iVar1 != -1)
		{
			func_1413(iVar1, 0);
		}
		iLocal_2172[0] = create_scenario_point(1045958732, func_1201(10, 0), 0, 2f, 0, 1);
	}
	if (!_does_scenario_point_exist(&(iLocal_2177[0])))
	{
		iVar2 = func_1412(2, func_1201(11, 0));
		if (iVar2 != -1)
		{
			func_1413(iVar2, 0);
		}
		iLocal_2177[0] = create_scenario_point(737977713, func_1201(11, 0), 0, 2f, 0, 1);
	}
}

void func_881()
{
	iVar0 = 0;
	while (iVar0 < 14)
	{
		vVar1 = { func_942(12, iVar0) };
		uLocal_2141[iVar0] = _0xfa50f79257745e74(vVar1, 1.25f, 1, -1, 0);
		iVar0++;
	}
	func_451(&(iLocal_124[38]), 1);
}

void func_882(char[4] cParam0)
{
	iVar0 = func_35(cParam0);
	func_1414(-1015925347, 0, 0, 1103626240);
	if (!func_391(iVar2236))
	{
		iLocal_2239 = func_284();
	}
	iVar1 = func_678(iVar2236);
	if (func_35(cParam0) >= iLocal_75 && func_35(cParam0) <= iLocal_77)
	{
		if (func_1415(iVar1, 5, 20))
		{
			_set_weather_type(433385945, true, true, false, 0f, false);
		}
	}
	else if (func_35(cParam0) >= iLocal_79)
	{
		if (func_1415(iVar1, 5, 20))
		{
			_set_weather_type(1632247697, true, true, false, 0f, false);
		}
	}
}

void func_883(char[4] cParam0)
{
	iVar0 = func_35(cParam0);
	func_1416(cParam0);
	func_1417(cParam0);
	if (iVar0 <= iLocal_76 && func_164(cParam0, func_35(cParam0)) == 5)
	{
		if (((iVar2065 == 1 && func_165(iVar346, 0)) && func_165(iVar347, 0)) && func_1418(cParam0, iVar346))
		{
			func_1419(cParam0, iVar347, iVar346);
		}
		if (((iVar2066 == 1 && func_165(iVar348, 0)) && func_165(iVar349, 0)) && func_1418(cParam0, iVar348))
		{
			func_1419(cParam0, iVar349, iVar348);
		}
		if ((((iVar2064 == 1 && func_165(Global_35, 0)) && func_165(iVar344, 0)) && func_1418(cParam0, iVar344)) && func_945(cParam0, Global_35, &uVar1))
		{
			func_1419(cParam0, iVar344, Global_35);
		}
	}
	func_1420(0, 0, 1008981770);
	func_1421(cParam0);
	func_1422(cParam0);
}

void func_884(char[4] cParam0)
{
	if (!func_25(&(cParam0->f_8269)))
	{
		return;
	}
	if (!func_123(cParam0, func_35(cParam0), 268435456))
	{
		return;
	}
	func_1423(cParam0);
}

void func_885(char[4] cParam0)
{
	if (!func_10(cParam0, 8388608))
	{
		if (func_164(cParam0, func_35(cParam0)) == 5 || func_164(cParam0, func_35(cParam0)) == 6)
		{
			if (!func_212())
			{
				if (func_867(&(cParam0->f_13112)) < 5f)
				{
					_0x9f9a829c6751f3c7(get_player_index(), 31, 0);
				}
			}
			else
			{
				func_219(&(cParam0->f_13112));
			}
		}
	}
	else
	{
		_0x9f9a829c6751f3c7(get_player_index(), 31, 1);
	}
}

void func_886(char[4] cParam0)
{
	if (func_123(cParam0, func_35(cParam0), 8388608))
	{
		if (func_1424(cParam0))
		{
			_uiprompt_enable_prompt_type_this_frame(6);
			func_1425();
		}
		else
		{
			_display_hud_component(-1679307491);
			func_1426(cParam0, func_35(cParam0), 8388608);
		}
	}
}

void func_887(char[4] cParam0)
{
	if (Global_1935630->f_12)
	{
		return;
	}
	if (func_10(cParam0, 256))
	{
		return;
	}
	if (!func_10(cParam0, 1048576))
	{
		if (func_237() || func_56())
		{
			func_101(cParam0, 1048576);
		}
	}
	else if (!func_237() && !func_56())
	{
		func_863(cParam0, 1048576);
	}
	if (!func_10(cParam0, 134217728))
	{
		if ((func_10(cParam0, 1048576) && !func_123(cParam0, func_35(cParam0), 524288)) && !func_123(cParam0, func_35(cParam0), 1))
		{
			if (!Global_1935630->f_12)
			{
				_0xb832f1a686b9b810(Global_35, true, 0);
				func_101(cParam0, 134217728);
			}
		}
	}
	else if ((!func_10(cParam0, 1048576) || func_123(cParam0, func_35(cParam0), 524288)) || func_123(cParam0, func_35(cParam0), 1))
	{
		if (!Global_1935630->f_12)
		{
			_0xb832f1a686b9b810(Global_35, false, 0);
			func_863(cParam0, 134217728);
		}
	}
}

void func_888(char[4] cParam0)
{
	if (Global_1935630->f_12)
	{
		return;
	}
	if (func_123(cParam0, func_35(cParam0), 1) && !func_123(cParam0, func_35(cParam0), 1048576))
	{
		set_ped_reset_flag(Global_35, 175, true);
	}
}

void func_889(char[4] cParam0)
{
	if (Global_1935630->f_12)
	{
		return;
	}
	if (!func_123(cParam0, func_35(cParam0), 2097152))
	{
		set_ped_reset_flag(Global_35, 187, true);
	}
}

void func_890(char[4] cParam0)
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

int func_891(char[4] cParam0)
{
	if ((func_22() != -1 || func_35(cParam0) == 25) || func_35(cParam0) == 26)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < cParam0->f_13145)
	{
		if (func_253(cParam0->f_5423[iVar0]))
		{
			func_1427(cParam0->f_5423[iVar0]);
		}
		iVar0++;
	}
	return 0;
}

bool func_892(char[4] cParam0, int iParam1, int iParam2)
{
	iVar0 = func_134(iParam1);
	if (!func_1428(iVar0))
	{
		return false;
	}
	iVar1 = func_1429(iParam2);
	if (!func_1430(iVar1))
	{
		return false;
	}
	if (!func_1431(cParam0, iParam1, iParam2))
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

int func_893(char[4] cParam0, int iParam1)
{
	return cParam0->f_1[func_134(iParam1)]->f_21;
}

int func_894(char[4] cParam0, int iParam1)
{
	return 1;
}

void func_895(char[4] cParam0)
{
	if (!func_22() == 0 || network_is_host_of_this_script())
	{
		func_219(&(cParam0->f_603));
	}
}

void func_896(char[4] cParam0, int iParam1, int iParam2)
{
	cParam0->f_1[func_134(iParam1)]->f_10 = iParam2;
	settimera(0);
}

bool func_897(char[4] cParam0)
{
	if (!is_screen_faded_out())
	{
		return true;
	}
	if (!func_28(&(cParam0->f_13109)))
	{
		func_29(&(cParam0->f_13109), 0);
	}
	else if (func_867(&(cParam0->f_13109)) >= 10f)
	{
		return true;
	}
	iVar0 = 1;
	if (func_254(cParam0->f_5421))
	{
		iVar1 = 0;
		while (iVar1 < func_255(cParam0->f_5421))
		{
			iVar2 = func_256(cParam0->f_5421, iVar1);
			if (does_entity_exist(iVar2))
			{
				if (is_entity_a_ped(iVar2))
				{
					iVar3 = func_1432(cParam0->f_5421, iVar1);
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

float func_898(char[4] cParam0)
{
	return func_867(&(cParam0->f_603));
}

bool func_899(char[4] cParam0)
{
	if ((func_122(cParam0, 4) || func_122(cParam0, 128)) && !func_104())
	{
		return false;
	}
	return true;
}

bool func_900(char[4] cParam0, int iParam1, int iParam2)
{
	if (func_10(cParam0, -2147483648))
	{
		return true;
	}
	if (func_892(cParam0, iParam1, 4))
	{
		if (func_35(cParam0) != 25 && func_35(cParam0) != 26)
		{
			if (!func_10(cParam0, 512) && !func_122(cParam0, 4))
			{
				func_38(cParam0, func_36(iParam1), func_36(iParam2), iParam1, iParam2);
			}
			else
			{
				Var0 = { func_36(iParam2) };
				*Global_1347394 = { Var0 };
				Global_1347394->f_3 = Var0.f_3;
				Global_1572864->f_10 = func_134(iParam2);
			}
		}
		func_1433(cParam0);
		if (func_1434(cParam0))
		{
			func_1435(cParam0);
		}
		if (func_123(cParam0, func_35(cParam0), 33554432) && func_10(cParam0, 524288))
		{
			_uilog_print_cached_objective();
		}
		func_863(cParam0, 524288);
		func_1436(&(cParam0->f_7375), 4);
		if (func_1424(cParam0))
		{
			func_142(cParam0, func_35(cParam0), 8388608);
			_hide_hud_component(-1679307491);
			_uiprompt_enable_prompt_type_this_frame(6);
			func_1425();
		}
		return true;
	}
	return false;
}

void func_901(char[4] cParam0)
{
	func_1437(cParam0);
	if (func_123(cParam0, func_35(cParam0), 2))
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

bool func_902(char[4] cParam0, int iParam1)
{
	if (func_122(cParam0, 16384))
	{
		if (func_862(cParam0))
		{
			func_53(&(cParam0->f_10792));
			func_863(cParam0, 2097152);
			func_264(cParam0, 16384);
			func_105(cParam0, 128);
			return true;
		}
		return false;
	}
	if (!func_10(cParam0, 4))
	{
		func_894(cParam0, iParam1);
		func_101(cParam0, 4);
	}
	Var0 = { func_1379(cParam0, iParam1) };
	if (func_123(cParam0, func_35(cParam0), 2))
	{
		if (func_10(cParam0, 2097152))
		{
			if (func_862(cParam0))
			{
				func_863(cParam0, 2097152);
				func_864(cParam0, Var0);
			}
			return false;
		}
		else
		{
			return func_864(cParam0, Var0);
		}
	}
	else if (func_10(cParam0, 2097152))
	{
		if (func_862(cParam0))
		{
			func_863(cParam0, 2097152);
			func_1386(cParam0);
			return true;
		}
		else
		{
			return false;
		}
	}
	if (func_123(cParam0, func_35(cParam0), 2))
	{
		return func_864(cParam0, Var0);
	}
	return true;
}

bool func_903(char[4] cParam0)
{
	return func_1438(&(cParam0->f_7375));
}

void func_904(char[4] cParam0)
{
	if (((!does_entity_exist(Global_35) || Global_1935630->f_12) || is_ped_fatally_injured(Global_35)) || get_entity_health(Global_35) <= 0)
	{
		if (func_1439(cParam0))
		{
			func_438(cParam0, 2);
			StringCopy(&cVar0, "PLAYER_DEAD", 64);
			if (get_ped_config_flag(Global_35, 11, true))
			{
				StringCopy(&cVar0, "PLAYER_KO", 64);
			}
			func_1440(cParam0, cVar0);
			func_162(cParam0, 2);
		}
	}
}

int func_905(char[4] cParam0, int iParam1)
{
	if (((func_22() != -1 || func_35(cParam0) == 25) || func_35(cParam0) == 26) || Global_1935630->f_12)
	{
		return 0;
	}
	bVar0 = func_123(cParam0, func_35(cParam0), 1);
	iVar1 = 0;
	while (iVar1 < cParam0->f_13145)
	{
		if (func_253(cParam0->f_5423[iVar1]))
		{
			if (func_1441(cParam0->f_5423[iVar1]->f_7, iParam1))
			{
				func_1442(cParam0, cParam0->f_5423[iVar1], bVar0);
			}
		}
		iVar1++;
	}
	return 0;
}

void func_906(char[4] cParam0)
{
	if ((is_screen_faded_out() && !is_player_playing(player_id())) && is_player_being_arrested(player_id(), false))
	{
		if (func_1443(cParam0))
		{
			func_438(cParam0, 6);
			StringCopy(&cVar0, "PLAYER_ARRESTED", 64);
			func_1440(cParam0, cVar0);
			func_162(cParam0, 2);
		}
	}
}

void func_907(char[4] cParam0)
{
	switch (func_1444(&iVar0))
	{
		case 1:
			func_1445(cParam0, Var1, 1, 0);
			break;
		case 3:
			if (!_databinding_is_data_id_valid(cParam0->f_13178))
			{
				cParam0->f_13178 = _databinding_add_data_bool_from_path("", "bAllowedtoAbandon", 0);
			}
			if (func_189(iVar0) && iVar0 == func_14(cParam0->f_607))
			{
				bVar9 = true;
			}
			_databinding_write_data_bool(cParam0->f_13178, bVar9);
			break;
	}
}

bool func_908(char[4] cParam0, int iParam1)
{
	if (func_10(cParam0, 4194304))
	{
		return false;
	}
	if (!func_123(cParam0, iParam1, 2))
	{
		return false;
	}
	return true;
}

int func_909(char[4] cParam0, int iParam1)
{
	if (func_10(cParam0, 16777216))
	{
		func_1385(cParam0);
		func_863(cParam0, 65536);
		return 0;
	}
	if (!func_123(cParam0, iParam1, 2))
	{
		return 0;
	}
	Var0 = { func_1379(cParam0, iParam1) };
	if (func_1446(cParam0, &Var0))
	{
		if (!func_10(cParam0, 65536))
		{
			func_101(cParam0, 65536);
		}
		return 1;
	}
	return 0;
}

void func_910(char[4] cParam0, int iParam1)
{
	func_1447(&(cParam0->f_638), &(cParam0->f_819), &(cParam0->f_1020), &(cParam0->f_1081), &(cParam0->f_1124), &(cParam0->f_1126), &(cParam0->f_5147), &(cParam0->f_5188), &(cParam0->f_5239), &(cParam0->f_5249), &(cParam0->f_5265), &(cParam0->f_5286), iParam1, func_224(cParam0, iParam1));
}

void func_911(char[4] cParam0, int iParam1)
{
	if (!func_123(cParam0, func_35(cParam0), 67108864))
	{
		if (does_blip_exist(cParam0->f_5303))
		{
			remove_blip(&(cParam0->f_5303));
		}
		cParam0->f_7374 = 0;
		func_896(cParam0, iParam1, 2);
		func_136(cParam0, 0);
		func_137(cParam0, 0);
		func_101(cParam0, 8);
		func_863(cParam0, -2147483648);
		func_142(cParam0, func_35(cParam0), 67108864);
		func_863(cParam0, 4);
		func_863(cParam0, 8192);
		func_863(cParam0, 536870912);
		func_264(cParam0, 4);
		func_67(0);
		func_66(0);
		func_863(cParam0, 2);
		func_47();
		cParam0->f_5302 = 0;
		func_1448(cParam0);
		if ((func_37(cParam0) == 25 || func_37(cParam0) == 26) && func_84(32768))
		{
			func_379(cParam0, 524288);
		}
		if (func_22() == 0)
		{
			if (_0xb655db7582aec805(Global_35))
			{
				func_23(0);
				_0xf6262491c7704a63(Global_35, 0);
			}
			else if (Global_1935630->f_12)
			{
				func_1449(1, 1);
			}
		}
	}
}

void func_912(bool bParam0)
{
	if (!func_196(0, 0, 1) || bParam0)
	{
		iVar0 = func_991();
		iVar1 = func_994(iVar0);
		bVar2 = (1f - (absf(to_float(iVar1)) / to_float(8)));
		bVar3 = func_1226(iVar0 < 0, 0f, (to_float(iVar1) / to_float(8)));
		bVar4 = func_1226(iVar0 > 0, 0f, (to_float(iVar1) / to_float(8)));
		animpostfx_play("RespawnWithHonor");
		_0xf972f0ab16dc5260("RespawnWithHonor", 1, bVar3);
		_0xf972f0ab16dc5260("RespawnWithHonor", 2, bVar2);
		_0xf972f0ab16dc5260("RespawnWithHonor", 3, bVar4);
	}
	else
	{
		animpostfx_play("RespawnMissionCheckpoint");
	}
}

bool func_913(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (iParam0 == player_id())
	{
		return func_1450(bParam1, bParam2, bParam3);
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

var func_914(char* sParam0, int iParam1, bool bParam2, bool bParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, int iParam8)
{
	if (bParam2)
	{
		_0xdd1232b332cbb9e7(3, 1, 1);
	}
	if (Global_1572887->f_12 != -1)
	{
		return func_1451(sParam0, iParam1, 0, 0, 1, 1);
	}
	sVar0 = func_1452(iParam8, sParam0, sParam4, sParam5, sParam6, sParam7);
	if (bParam3)
	{
		_uilog_set_cached_objective(sVar0);
	}
	return func_1451(sVar0, iParam1, 0, 0, 1, 1);
}

bool func_915(char[4] cParam0)
{
	return true;
}

bool func_916(char[4] cParam0)
{
	return true;
}

int func_917(char[4] cParam0)
{
	return 1;
}

int func_918()
{
	return func_483(func_730());
}

int func_919()
{
	return func_1453(func_730());
}

int func_920()
{
	if (func_194(func_730()) == 2)
	{
		if (func_271(func_730()) == 3)
		{
			iVar0 = func_314(func_730());
			if (func_1454(iVar0))
			{
				return iVar0;
			}
		}
	}
	return -1;
}

void func_921(int iParam0, bool bParam1, float fParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	iVar0 = func_1455(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	func_1456(iVar0);
	if (iVar0 == Global_1934765->f_338)
	{
		if (Global_1934765->f_337 == 0)
		{
			func_1457();
		}
		else
		{
			func_1458(bParam1, fParam2);
		}
	}
	else
	{
		uVar1 = Global_1934765->f_338;
		Global_1934765->f_338 = func_1459();
	}
}

bool func_922(var uParam0)
{
	if (*uParam0 == 0)
	{
		return false;
	}
	return *uParam0 != -1;
}

bool func_923(int iParam0)
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

int func_924(int iParam0)
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

void func_925(int iParam0, int iParam1)
{
	func_13(iParam0, 1, 1);
	if (does_entity_exist(iParam1))
	{
		_0x9dae1380cc5c6451(get_player_index(), iParam1);
		_0xe98d55c5983f2509(iParam1);
		if (is_entity_an_object(iParam1))
		{
			iVar0 = get_object_index_from_entity_index(iParam1);
			_0xa22712e8471aa08e(iVar0, 0, 0);
		}
	}
}

bool func_926(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return ((*Global_1945938)[iParam0]->f_1 && iParam1) != 0;
}

int func_927(int iParam0)
{
	iVar0 = func_456(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return func_1460(iVar0);
}

int func_928(int iParam0, int iParam1)
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
			func_1461(iVar2);
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

void func_929()
{
	iVar0 = 0;
	while (iVar0 < Global_1058888->f_40501)
	{
		iVar0++;
	}
}

int func_930(int iParam0, int iParam1)
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

int func_931(bool bParam0)
{
	if (func_22() == -1)
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

int func_932(int iParam0)
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

void func_933(int iParam0, int iParam1)
{
	Global_1946804->f_2657.f_26.f_6 = (Global_1946804->f_2657.f_26.f_6 - (Global_1946804->f_2657.f_26.f_6 && iParam0));
}

void func_934(int iParam0, int iParam1)
{
	Global_1946804->f_2657.f_26.f_6 = (Global_1946804->f_2657.f_26.f_6 || iParam0);
}

void func_935(int iParam0, int iParam1)
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
			func_1462((iVar0 - 1), iVar0);
			iVar0 = (iVar0 - 1);
		}
	}
	else
	{
		iVar0 = iParam0;
		while (iVar0 < iParam1)
		{
			func_1462(iVar0, iVar0 + 1);
			iVar0++;
		}
	}
	if (func_189(&(Global_1898164->f_1[0])))
	{
		func_201(&(Global_1898164->f_1[0]), 3);
	}
}

void func_936(int iParam0, int iParam1, bool bParam2)
{
	if (!func_474(iParam0))
	{
		return;
	}
	func_1463(iParam1, &iVar0, &iVar1);
	if (bParam2)
	{
		set_bit((*Global_1935183->f_73[iParam0])[iVar0], iVar1);
	}
	else
	{
		clear_bit((*Global_1935183->f_73[iParam0])[iVar0], iVar1);
	}
}

void func_937(var uParam0)
{
	Var0 = -1600776215;
	Var0.f_1 = 820723243;
	Var0.f_2 = 1;
	*uParam0 = { Var0 };
}

void func_938(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 || iParam1);
}

void func_939(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
}

bool func_940()
{
	if (_get_number_of_references_of_script_with_name_hash(-92416669) > 0)
	{
		return true;
	}
	return false;
}

bool func_941(int iParam0)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1934603->f_161)
	{
		if (iParam0 == get_hash_key(&((*Global_1934603)[iVar0]->f_10)))
		{
			func_1464(iVar0);
			return true;
		}
		iVar0++;
	}
	return false;
}

Vector3 func_942(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 439.5967f, 2229.392f, 247.7823f;
				case 1:
					return 437.5952f, 2230.451f, 247.1912f;
				case 2:
					return 443.6063f, 2232.555f, 246.9815f;
				case 3:
					return 446.3529f, 2233.312f, 248.1365f;
				case 4:
					return 489.7523f, 2221.281f, 246.77f;
				case 5:
					return 491.7072f, 2224.953f, 247.0337f;
				case 6:
					return 496.0803f, 2230.18f, 246.6552f;
				case 7:
					return 501.8292f, 2231.86f, 246.4456f;
				case 8:
					return 507.5135f, 2229.17f, 246.6667f;
				case 9:
					return 504.4138f, 2228.695f, 246.6577f;
				case 10:
					return 491.521f, 2227.262f, 245.9543f;
				case 11:
					return 491.3042f, 2220.875f, 246.1703f;
				case 12:
					return 489.358f, 2225.238f, 246.0243f;
				case 13:
					return 489.7828f, 2219.772f, 246.4641f;
				case 14:
					return 491.1532f, 2222.795f, 246.6907f;
				case 15:
					return 863.2647f, 1858.295f, 261.7855f;
				case 16:
					return 624.7574f, 1654.934f, 186.8128f;
				case 17:
					return 821.7154f, 1836.738f, 259.1483f;
				case 18:
					return 823.3138f, 1837.349f, 259.0204f;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 906.1078f, 1532.26f, 250.3782f;
				case 1:
					return 963.3765f, 1470.184f, 278.3124f;
				case 2:
					return 1008.946f, 1448.669f, 276.3778f;
				case 3:
					return 1011.835f, 1448.662f, 277.0002f;
				case 4:
					return 963.5499f, 1464.853f, 278.7187f;
				case 5:
					return 798.5596f, 1515.226f, 203.1745f;
				case 6:
					return 842.3685f, 1495.427f, 215.3428f;
				case 7:
					return 798.8973f, 1510.841f, 203.8575f;
				case 8:
					return 826.0523f, 1530.07f, 213.2006f;
				case 9:
					return 799.0901f, 1480.321f, 201.4258f;
				case 10:
					return 785.6824f, 1534.38f, 202.2242f;
				case 11:
					return 798.9106f, 1510.99f, 204.6075f;
				case 12:
					return 796.2554f, 1511.729f, 203.8481f;
				case 13:
					return 795.1889f, 1509.517f, 204.728f;
				case 14:
					return 797.8439f, 1510.24f, 204.0581f;
				case 15:
					return 799.4191f, 1510.809f, 204.1076f;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return 800.9693f, 1490.164f, 202.6117f;
				case 1:
					return 981.9986f, 1451.214f, 277.6985f;
				case 2:
					return 1009.445f, 1449f, 276.9004f;
				case 3:
					return 1011.9f, 1448.716f, 277.0044f;
				case 4:
					return 985.3459f, 1413.564f, 302.2119f;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return 978.554f, 1452.875f, 277.6204f;
				case 1:
					return 982.0422f, 1451.217f, 277.7214f;
				case 2:
					return 1009.476f, 1449.066f, 277.126f;
				case 3:
					return 1011.855f, 1448.648f, 276.9999f;
				case 4:
					return 1602.3f, 1452.2f, 144.6288f;
				case 5:
					return 1584.673f, 1460.016f, 145.623f;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return 821.4563f, 1504.68f, 209.7595f;
				case 1:
					return 806.6331f, 1526.522f, 206.1285f;
				case 2:
					return 785.5429f, 1520.004f, 202.9169f;
				case 3:
					return 781.5246f, 1509.407f, 202.403f;
				case 4:
					return 816.905f, 1516.555f, 207.5162f;
				case 5:
					return 788.2299f, 1511.374f, 203.3987f;
				case 6:
					return 792.9269f, 1495.842f, 202.8977f;
				case 7:
					return 823.4616f, 1492.46f, 208.8057f;
				case 8:
					return 805.3946f, 1507.427f, 204.0737f;
				case 9:
					return 811.2616f, 1498.931f, 205.4363f;
				case 10:
					return 786.2513f, 1502.52f, 203.2913f;
				case 11:
					return 771.5179f, 1510.121f, 200.7596f;
				case 12:
					return 803.5911f, 1510.584f, 203.8578f;
				case 13:
					return 805.7191f, 1535.304f, 207.4555f;
				case 14:
					return 774.4613f, 1523.539f, 201.5119f;
				case 15:
					return 809.7031f, 1482.741f, 203.6002f;
				case 16:
					return 805.2379f, 1512.836f, 203.9213f;
				case 17:
					return 827.6705f, 1504.101f, 210.8653f;
				case 18:
					return 877.332f, 1465.219f, 225.5493f;
				case 19:
					return 797.4094f, 1519.819f, 203.68f;
				case 20:
					return 770.2219f, 1500.261f, 200.1602f;
				case 21:
					return 756.5444f, 1509.755f, 199.0755f;
				case 22:
					return 753.6171f, 1545.847f, 197.2491f;
				case 23:
					return 782.3867f, 1512.912f, 202.7233f;
				case 24:
					return 799.0577f, 1509.299f, 205.8577f;
				case 25:
					return 804.0156f, 1455.037f, 203.6181f;
				case 26:
					return 769.3256f, 1592.012f, 208.7162f;
				case 27:
					return 748.7814f, 1518.466f, 202.8899f;
				case 28:
					return 849.307f, 1516.355f, 222.4637f;
				case 29:
					return 798.9699f, 1509.326f, 237.3577f;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					return 998.4043f, 1478.48f, 280.5224f;
				case 1:
					return 1002.648f, 1467.409f, 277.2791f;
				case 2:
					return 981.0096f, 1455.876f, 277.3744f;
				case 3:
					return 973.0919f, 1449.023f, 278.2278f;
				case 4:
					return 985.2153f, 1466.841f, 277.4808f;
				case 5:
					return 981.0239f, 1456.004f, 277.394f;
				case 6:
					return 968.7357f, 1461.76f, 279.4203f;
				case 7:
					return 964.1266f, 1461.792f, 278.9102f;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					return 1000.296f, 1476.971f, 278.757f;
				case 1:
					return 1004.073f, 1467.519f, 277.4429f;
				case 2:
					return 982.1084f, 1455.809f, 278.2282f;
				case 3:
					return 973.6355f, 1447.614f, 278.5336f;
				case 4:
					return 983.4549f, 1467.979f, 277.0614f;
				case 5:
					return 976.766f, 1453.375f, 277.6383f;
				case 6:
					return 968.688f, 1460.557f, 279.329f;
				case 7:
					return 964.0668f, 1469.177f, 278.1995f;
				case 8:
					return 798.9866f, 1509.429f, 211.1075f;
			}
			break;
		case 7:
			switch (iParam1)
			{
				case 0:
					return 991.642f, 1451.628f, 277.4586f;
				case 1:
					return 992.2947f, 1452.153f, 277.1874f;
				case 2:
					return 1009.481f, 1449.153f, 277.0401f;
				case 3:
					return 1011.863f, 1448.651f, 276.9446f;
				case 4:
					return 984.413f, 1456.207f, 277.5496f;
				case 5:
					return 987.0106f, 1454.391f, 277.5387f;
				case 6:
					return 987.8787f, 1452.012f, 277.3024f;
			}
			break;
		case 8:
			switch (iParam1)
			{
				case 0:
					return 855.9385f, 1856.891f, 259.72f;
				case 1:
					return 861.9072f, 1859.452f, 261.0202f;
				case 2:
					return 855.4708f, 1856.789f, 259.8612f;
				case 3:
					return 861.8713f, 1859.414f, 260.9564f;
				case 4:
					return 1067.241f, 1672.338f, 375.3809f;
				case 5:
					return 873.4074f, 1788.713f, 303.9468f;
				case 6:
					return 884.8112f, 1799.424f, 301.0668f;
				case 7:
					return 867.1108f, 1802.698f, 299.3835f;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 0:
					return 994.7864f, 1673.21f, 362.3523f;
				case 1:
					return 1000.667f, 1670.95f, 362.4702f;
				case 2:
					return 995.0222f, 1673.089f, 362.7333f;
				case 3:
					return 1000.674f, 1671.023f, 362.2303f;
				case 4:
					return 1009.204f, 1449.337f, 276.4265f;
				case 5:
					return 1054.914f, 1651.047f, 377.6006f;
				case 6:
					return 1062.972f, 1631.367f, 374.2169f;
				case 7:
					return 1041.743f, 1637.176f, 376.8541f;
				case 8:
					return 1006.367f, 1454.088f, 276.8042f;
				case 9:
					return 1004.055f, 1440.394f, 279.5542f;
			}
			break;
		case 10:
			switch (iParam1)
			{
				case 0:
					return 860.5f, 1803.012f, 298.4085f;
				case 1:
					return 868.0638f, 1807.586f, 299.1068f;
				case 2:
					return 866.0574f, 1801.371f, 299.5695f;
				case 3:
					return 869.6763f, 1804.551f, 299.79f;
			}
			break;
		case 11:
			switch (iParam1)
			{
				case 0:
					return 1045.484f, 1639.905f, 376.6894f;
				case 1:
					return 1041.235f, 1636.253f, 376.228f;
				case 2:
					return 1042.975f, 1638.743f, 376.6396f;
				case 3:
					return 1047.66f, 1632.514f, 375.2769f;
			}
			break;
		case 12:
			switch (iParam1)
			{
				case 0:
					return 821.2521f, 1838.054f, 258.9441f;
				case 1:
					return 1003.744f, 1468.406f, 277.4821f;
				case 2:
					return 937.7249f, 1726.498f, 346.2177f;
				case 3:
					return 598.1144f, 2169.776f, 223.924f;
				case 4:
					return 601.1649f, 2161.519f, 223.2615f;
				case 5:
					return 800.5005f, 1513.766f, 204.1788f;
				case 6:
					return 795.7394f, 1511.756f, 203.8575f;
				case 7:
					return 792.4367f, 1506.656f, 203.7262f;
				case 8:
					return 796.4488f, 1506.465f, 203.8454f;
				case 9:
					return 804.2932f, 1860.506f, 249.1387f;
				case 10:
					return 762.1212f, 1916.848f, 242.893f;
				case 11:
					return 758.9731f, 1917.039f, 242.1243f;
				case 12:
					return 754.7438f, 1919.388f, 241.1487f;
				case 13:
					return 792.4128f, 1520.563f, 203.5976f;
			}
			break;
		case 13:
			switch (iParam1)
			{
				case 0:
					return 984.9924f, 1460.254f, 277.1479f;
				case 1:
					return 1004.736f, 1468.076f, 277.6282f;
				case 2:
					return 993.8121f, 1441.766f, 278.338f;
				case 3:
					return 973.8138f, 1446.609f, 278.863f;
				case 4:
					return 982.6616f, 1471.065f, 277.2853f;
				case 5:
					return 983.9697f, 1448.176f, 277.5677f;
				case 6:
					return 968.2413f, 1460.024f, 279.2401f;
				case 7:
					return 960.2293f, 1469.465f, 277.9205f;
				case 8:
					return 798.9156f, 1504.075f, 203.5869f;
			}
			break;
	}
	return 0f, 0f, 0f;
}

float func_943(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 70.1404f;
				case 1:
					return -123.0481f;
				case 2:
					return -75.8596f;
				case 3:
					return -109.0481f;
				case 4:
					return 194.1404f;
				case 5:
					return -175.0481f;
				case 6:
					return -243.0481f;
				case 7:
					return -101.8596f;
				case 8:
					return -103.0481f;
				case 9:
					return -105.0481f;
				case 10:
					return -103.8596f;
				case 11:
					return -117.0481f;
				case 12:
					return -43.0481f;
				case 13:
					return -112.3348f;
				case 14:
					return -468.7432f;
				case 15:
					return 279.7228f;
				case 16:
					return 167.3737f;
				case 17:
					return 329.3345f;
				case 18:
					return 53.3345f;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 100.8404f;
				case 1:
					return 93.7228f;
				case 2:
					return -10.8108f;
				case 3:
					return 147.4183f;
				case 4:
					return 104.2132f;
				case 5:
					return 126f;
				case 6:
					return 98f;
				case 7:
					return 215.2117f;
				case 8:
					return 139.0761f;
				case 9:
					return 179.6955f;
				case 10:
					return 31.6955f;
				case 11:
					return 365.0246f;
				case 12:
					return 401.4676f;
				case 13:
					return 3.78f;
				case 14:
					return 223.4676f;
				case 15:
					return 561.4676f;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return 336.8072f;
				case 1:
					return 92.1612f;
				case 2:
					return -216.8108f;
				case 3:
					return -212.5817f;
				case 4:
					return 275.2117f;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return -115.1706f;
				case 1:
					return 92.527f;
				case 2:
					return 145.1892f;
				case 3:
					return -212.5817f;
				case 4:
					return -84.5817f;
				case 5:
					return 7.4183f;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return 86.744f;
				case 1:
					return 342.7438f;
				case 2:
					return 87.7358f;
				case 3:
					return 85.7358f;
				case 4:
					return 150.744f;
				case 5:
					return 76.7438f;
				case 6:
					return -184.2642f;
				case 7:
					return 197.7358f;
				case 8:
					return -19.256f;
				case 9:
					return 486.7438f;
				case 10:
					return 71.7358f;
				case 11:
					return 85.7358f;
				case 12:
					return 254.744f;
				case 13:
					return 414.7438f;
				case 14:
					return 43.7358f;
				case 15:
					return 201.7358f;
				case 16:
					return 236.744f;
				case 17:
					return 444.7438f;
				case 18:
					return 103.7358f;
				case 19:
					return 131.7358f;
				case 20:
					return 472.744f;
				case 21:
					return 474.7438f;
				case 22:
					return 11.7358f;
				case 23:
					return 249.7358f;
				case 24:
					return 88.7435f;
				case 25:
					return 180.7704f;
				case 26:
					return 18.7704f;
				case 27:
					return 88.7704f;
				case 28:
					return -62.3707f;
				case 29:
					return 89.3106f;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					return -50.6997f;
				case 1:
					return -81.3136f;
				case 2:
					return 113.8437f;
				case 3:
					return 208.527f;
				case 4:
					return 402.0725f;
				case 5:
					return 332.0725f;
				case 6:
					return 158.0725f;
				case 7:
					return 414.0725f;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					return 290.3115f;
				case 1:
					return 304.7906f;
				case 2:
					return 206.3961f;
				case 3:
					return 180.0725f;
				case 4:
					return 68.0725f;
				case 5:
					return -115.9275f;
				case 6:
					return 156.0725f;
				case 7:
					return 24.0725f;
				case 8:
					return 269.648f;
			}
			break;
		case 7:
			switch (iParam1)
			{
				case 0:
					return 411.2607f;
				case 1:
					return 85.7228f;
				case 2:
					return -216.8108f;
				case 3:
					return 149.4183f;
				case 4:
					return 66.2132f;
				case 5:
					return 126f;
				case 6:
					return -24.6819f;
			}
			break;
		case 8:
			switch (iParam1)
			{
				case 0:
					return 286.1404f;
				case 1:
					return 276.9519f;
				case 2:
					return 281.6652f;
				case 3:
					return 275.2568f;
				case 4:
					return 123.7228f;
				case 5:
					return 7.7228f;
				case 6:
					return 33.7228f;
				case 7:
					return 31.7228f;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 0:
					return -113.8596f;
				case 1:
					return -83.0481f;
				case 2:
					return 249.6652f;
				case 3:
					return -82.7432f;
				case 4:
					return 297.7228f;
				case 5:
					return 155.7228f;
				case 6:
					return 103.7228f;
				case 7:
					return 161.7228f;
				case 8:
					return 91.7228f;
				case 9:
					return 91.7228f;
			}
			break;
		case 10:
			switch (iParam1)
			{
				case 0:
					return 60.1404f;
				case 1:
					return 20.9519f;
				case 2:
					return 35.6652f;
				case 3:
					return -20.7432f;
			}
			break;
		case 11:
			switch (iParam1)
			{
				case 0:
					return 116.1404f;
				case 1:
					return 96.9519f;
				case 2:
					return 47.6652f;
				case 3:
					return 201.2568f;
			}
			break;
		case 12:
			switch (iParam1)
			{
				case 0:
					return 298.1252f;
				case 1:
					return 214.1252f;
				case 2:
					return 0.8903f;
				case 3:
					return 198.4063f;
				case 4:
					return 195.2143f;
				case 5:
					return 71.0208f;
				case 6:
					return 71.0208f;
				case 7:
					return 276.0857f;
				case 8:
					return 276.0857f;
				case 9:
					return -22.6295f;
				case 10:
					return 225.3705f;
				case 11:
					return 363.3705f;
				case 12:
					return 15.3705f;
				case 13:
					return 203.9904f;
			}
			break;
		case 13:
			switch (iParam1)
			{
				case 0:
					return 182.3115f;
				case 1:
					return 61.06f;
				case 2:
					return 338.3961f;
				case 3:
					return 73.1f;
				case 4:
					return 101.06f;
				case 5:
					return 156.0725f;
				case 6:
					return 64.87f;
				case 7:
					return 70.0725f;
				case 8:
					return 451.648f;
			}
			break;
	}
	return 0f;
}

void func_944(bool bParam0, bool bParam1)
{
	if (func_22() == -1)
	{
		func_1465();
	}
	else
	{
		return;
	}
	func_1466();
	Global_40.f_9.f_14 = func_284();
	Global_40.f_9.f_20 = _get_bounty_for_player(get_player_index());
	Global_40.f_11999 = _0xb00ce33465b5406d(1, "startup");
	if (bParam0 && !bParam1)
	{
		if (func_1467())
		{
			func_370(Global_1310720->f_1);
		}
		else if (func_1468() == func_371(Global_36, 1) && func_1469() != 2)
		{
			func_370(Global_40.f_6);
			Global_40.f_9 = 1;
		}
		else
		{
			func_370(Global_36);
		}
		func_1470(Global_36, &vVar0, &uVar4);
		if (!func_1467())
		{
			if (func_1471(vVar0, Global_36) < func_1471(Global_40.f_9.f_7, Global_36))
			{
				func_370(vVar0);
				Global_40.f_9 = uVar4;
			}
			else
			{
				Global_40.f_9 = 0;
			}
		}
		Global_40.f_9.f_15 = func_371(Global_40.f_9.f_7, 1);
	}
	else if (!bParam0)
	{
		func_1470(Global_36, &(Global_40.f_9.f_7), &(Global_40.f_9));
		override_save_house(true, Global_40.f_9.f_7, 0f, true, &vVar0, &uVar3);
	}
	if (!bParam1)
	{
		func_228(Global_1935630, 8192);
	}
	func_1472();
}

bool func_945(char[4] cParam0, int iParam1, int iParam2)
{
	if (!does_entity_exist(iParam1))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < cParam0->f_13145)
	{
		if (func_253(cParam0->f_5423[iVar0]))
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

bool func_946(char[4] cParam0, int iParam1)
{
	if (!does_entity_exist(iParam1))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < cParam0->f_13145)
	{
		if (((func_253(cParam0->f_5423[iVar0]) && is_entity_an_object(&(cParam0->f_5423[iVar0]))) && get_object_index_from_entity_index(&(cParam0->f_5423[iVar0])) != iParam1) && get_entity_model(&(cParam0->f_5423[iVar0])) == get_entity_model(iParam1))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

void func_947(int iParam0, int iParam1, bool bParam2)
{
	if (!func_948(iParam0))
	{
		return;
	}
	func_1473(&((*Global_1360165)[iParam0]->f_13), iParam1, bParam2);
}

bool func_948(int iParam0)
{
	return iParam0 > -1;
}

bool func_949(var uParam0, int iParam1)
{
	return (*uParam0 && iParam1) != 0;
}

void func_950(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_948(iParam0))
		{
			return;
		}
	}
	func_1474(iParam1, &iVar0, &iVar1);
	set_bit((*Global_1360165)[iParam0]->f_58[iVar0], iVar1);
}

void func_951(int iParam0)
{
	func_950(iParam0, 36, 1);
}

void func_952(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_948(iParam0))
		{
			return;
		}
	}
	func_1474(iParam1, &iVar0, &iVar1);
	clear_bit((*Global_1360165)[iParam0]->f_58[iVar0], iVar1);
}

int func_953(int iParam0, bool bParam1)
{
	if (!func_495(iParam0))
	{
		return 0;
	}
	if (bParam1)
	{
		if (!_0x800df3fc913355f3((*Global_1360165)[iParam0]->f_1))
		{
			func_1475(iParam0);
		}
	}
	return (*Global_1360165)[iParam0]->f_1;
}

bool func_954(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_948(iParam0))
		{
			return false;
		}
	}
	func_1474(iParam1, &iVar0, &iVar1);
	return is_bit_set(&((*Global_1360165)[iParam0]->f_58[iVar0]), iVar1);
}

void func_955(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (func_495(iParam0))
	{
		iVar1 = func_532(iParam0);
		if (!is_entity_dead(iVar1))
		{
			iVar0 = get_ped_max_health(iVar1);
			set_ped_config_flag(iVar1, 179, true);
			func_1476(iParam0);
		}
	}
	if (func_954(iParam0, 5, 1))
	{
		set_ped_config_flag(func_532(iParam0), 137, true);
	}
}

void func_956(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!func_948(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_952(iParam0, 50, 1);
		func_952(iParam0, 48, 1);
		func_952(iParam0, 49, 1);
		func_952(iParam0, 51, 1);
		func_952(iParam0, 52, 1);
		func_952(iParam0, 54, 1);
		func_952(iParam0, 55, 1);
	}
	else
	{
		func_950(iParam0, 50, 1);
		func_950(iParam0, 48, 1);
		func_950(iParam0, 49, 1);
		func_950(iParam0, 51, 1);
		if (bParam3)
		{
			func_950(iParam0, 54, 1);
		}
		else
		{
			func_952(iParam0, 54, 1);
		}
		if (!bParam2)
		{
			func_950(iParam0, 52, 1);
			if (bParam3)
			{
				func_950(iParam0, 55, 1);
			}
		}
		else
		{
			func_952(iParam0, 52, 1);
			if (!bParam3)
			{
				func_952(iParam0, 55, 1);
			}
		}
	}
}

void func_957(int iParam0, bool bParam1)
{
	if (!func_948(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		set_ped_config_flag(func_532(iParam0), 204, true);
	}
	else
	{
		set_ped_config_flag(func_532(iParam0), 204, false);
	}
}

void func_958(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (!func_495(iParam0))
	{
		return;
	}
	if (func_496(iParam0))
	{
		if (!func_257(iParam0))
		{
			return;
		}
		if (!bParam1)
		{
			return;
		}
	}
	if (func_954(iParam0, 32, 1))
	{
		if (!bParam2)
		{
			return;
		}
	}
	iVar0 = func_953(iParam0, 0);
	if (!_is_base_a_persistent_character(iVar0))
	{
		return;
	}
	iVar1 = func_532(iParam0);
	if (((does_entity_exist(iVar1) && func_1477(iParam0) < 10000f) && !bParam3) && !is_screen_faded_out())
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
		func_950(iParam0, 2, 1);
	}
	else
	{
		func_1478(iParam0);
		func_950(iParam0, 1, 1);
	}
}

void func_959(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_495(iParam0))
		{
			return;
		}
	}
	Global_40.f_4942[iParam0] = (&Global_40.f_4942[iParam0] - (Global_40.f_4942[iParam0] && iParam1));
}

int func_960(int iParam0)
{
	if (!func_495(iParam0))
	{
		return 0;
	}
	if (!does_entity_exist((*Global_1360165)[iParam0]->f_70))
	{
		(*Global_1360165)[iParam0]->f_70 = 0;
	}
	return (*Global_1360165)[iParam0]->f_70;
}

void func_961(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	if (!func_948(iParam1))
	{
		return;
	}
	iVar0 = func_960(iParam1);
	if (func_1479(iParam1))
	{
		if (!func_1480(iParam1))
		{
			return;
		}
	}
	func_952(iParam1, 39, 1);
	func_1481(iParam1, 64, 0);
	(*Global_1360165)[iParam1]->f_70.f_11 = 0;
	func_1481(iParam1, 8, 0);
	if (does_entity_exist(iVar0))
	{
		if (!bParam2)
		{
			func_1481(iParam1, 512, 1);
			set_ped_keep_task(iVar0, true);
		}
		else
		{
			set_blocking_of_non_temporary_events(iVar0, false);
			func_950(iParam1, 43, 1);
		}
		if (bParam4)
		{
			func_1482(iParam1, 0, 1, 1, 1);
		}
	}
}

bool func_962(int iParam0)
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

void func_963(int iParam0)
{
	iParam0 = func_265(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_214(iParam0);
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	iVar6 = 0;
	while (iVar6 < 3)
	{
		iVar1 = func_1483(iVar6);
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

void func_964(int iParam0, int iParam1)
{
	iParam0 = func_265(iParam0);
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

bool func_965(int iParam0, int iParam1)
{
	iParam0 = func_265(iParam0);
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

void func_966(var uParam0)
{
	if (network_is_game_in_progress())
	{
		_set_blip_name_from_player_string(*uParam0, func_1485(func_1484(255), 109029619));
	}
	else if (func_303())
	{
		set_blip_name_from_text_file(*uParam0, "SADDLE_BLIP_ARTHUR");
	}
	else
	{
		func_993();
		set_blip_name_from_text_file(*uParam0, "SADDLE_BLIP_JOHN");
	}
}

int func_967(int iParam0)
{
	iParam0 = func_265(iParam0);
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

void func_968(var uParam0, bool bParam1)
{
	if (network_is_game_in_progress())
	{
		_set_blip_name_from_player_string(*uParam0, func_1485(func_1484(255), 109029619));
	}
	else
	{
		sVar0 = "";
		if (bParam1)
		{
			sVar0 = "HORSE_BLIP_TEMPORARY";
		}
		else if (func_303())
		{
			sVar0 = "HORSE_BLIP_ARTHUR";
		}
		else if (func_993())
		{
			sVar0 = "HORSE_BLIP_JOHN";
		}
		if (compare_strings(sVar0, "", false, -1) != 0)
		{
			set_blip_name_from_text_file(*uParam0, sVar0);
		}
	}
}

int func_969(int iParam0)
{
	iParam0 = func_265(iParam0);
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

float func_970(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist(vParam0, vParam3);
}

float func_971(int iParam0)
{
	iParam0 = func_265(iParam0);
	if (iParam0 == -1)
	{
		return -1f;
	}
	if (iParam0 >= 7)
	{
		return -1f;
	}
	iVar0 = func_1358(iParam0);
	if (!is_model_valid(iVar0))
	{
		return -1f;
	}
	iVar1 = func_967(iParam0);
	iVar2 = get_default_max_attribute_rank(iVar0, 7);
	fVar3 = _0xeb67d4e056c85a81(iVar1);
	fVar4 = _0x78d8c1d4eb80c588(iVar1);
	if (iVar1 >= iVar2)
	{
		return fVar3;
	}
	iVar5 = func_967(iParam0) + 1;
	fVar6 = func_1486(iParam0);
	fVar7 = to_float(get_default_attribute_points_needed_for_rank(iVar0, 7, iVar1));
	fVar8 = to_float(get_default_attribute_points_needed_for_rank(iVar0, 7, iVar5));
	fVar9 = (fVar6 - fVar7);
	fVar10 = (fVar8 - fVar7);
	fVar11 = (fVar9 / fVar10);
	fVar12 = func_1487(fVar3, fVar4, fVar11);
	return fVar12;
}

void func_972(int iParam0)
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

void func_973(int iParam0)
{
	_set_blip_flash_style(iParam0, 673950256);
	_set_blip_flash_style(iParam0, 561559387);
	_set_blip_flash_style(iParam0, -201249929);
}

bool func_974()
{
	if (func_337())
	{
		return _get_special_edition_cash_camp_bonus_enabled();
	}
	return false;
}

void func_975(int iParam0)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if ((Global_40.f_4283.f_325 + iParam0) < 0)
	{
		return;
	}
	func_1488((Global_40.f_4283.f_325 + iParam0));
}

void func_976(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (is_string_null_or_empty(sParam1))
	{
		sParam1 = "FEED_GANG_MONEY_EARN";
	}
	if (func_974())
	{
		func_686(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", -329231034, 0, -585750914, 0, 0, 0, 1);
	}
	else
	{
		func_686(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 2124880615, 0, -585750914, 0, 0, 0, 1);
	}
}

char* func_977(int iParam0)
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

char* func_978(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7)
{
	return _0xd8402b858f4ddd88(&cParam0, get_length_of_literal_string(&cParam0));
}

int func_979(int iParam0)
{
	return Global_17504.f_42[iParam0]->f_5;
}

bool func_980(int iParam0)
{
	func_988(iParam0, &iVar0, &iVar1);
	return is_bit_set(&(Global_1357549->f_1866[iVar0]), iVar1);
}

void func_981(int iParam0, int iParam1)
{
	_journal_write_entry(iParam0);
	if (iParam1 == 1)
	{
		func_982(1);
	}
}

void func_982(bool bParam0)
{
	if (bParam0)
	{
		func_1489(&(Global_40.f_12019.f_42), 1);
	}
	else
	{
		func_1490(&(Global_40.f_12019.f_42), 1);
	}
}

int func_983(int iParam0)
{
	if (!func_189(iParam0))
	{
		return -15;
	}
	return func_1491(iParam0);
}

bool func_984(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_391(iParam1) || !func_391(iParam0))
		{
			return true;
		}
	}
	return iParam0 > iParam1;
}

bool func_985(vector3 vParam0, int iParam3, var uParam4, int iParam5, int iParam6, bool bParam7)
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

int func_986(int iParam0)
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

bool func_987(vector3 vParam0, int iParam3, var uParam4, int iParam5, int iParam6, bool bParam7)
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

int func_988(int iParam0, int iParam1, int iParam2)
{
	iVar0 = func_1492(iParam0, 1);
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
	return 1;
}

void func_989(var uParam0)
{
	*uParam0 = 176656832;
	uParam0->f_1 = -15;
	uParam0->f_2 = 1017034651;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
}

void func_990(int iParam0, int iParam1, bool bParam2)
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

int func_991()
{
	iVar0 = func_537();
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

int func_992(int iParam0)
{
	if (func_22() != -1)
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
	bVar1 = (to_float(iParam0) * fVar0);
	bVar1 = func_1226(absf(bVar1) < 1f, func_1226(bVar1 < 0f, -1f, 1f), bVar1);
	return ceil(bVar1);
}

bool func_993()
{
	if (func_22() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == 11966224)
	{
		return true;
	}
	return false;
}

int func_994(int iParam0)
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

int func_995()
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

void func_996(int iParam0, bool bParam1, int iParam2)
{
	func_1493((get_game_timer() + iParam2), !bParam1);
	_databinding_write_data_int(Global_1955569->f_1.f_2.f_1, iParam0);
	func_1494(iParam0);
}

void func_997(int iParam0)
{
	_databinding_write_data_bool(&(Global_1955569->f_5.f_2[0]->f_16[2]), false);
	_databinding_write_data_bool(&(Global_1955569->f_5.f_2[0]->f_32[2]), true);
	_databinding_write_data_string(&(Global_1955569->f_5.f_2[0]->f_20[2]), func_1495(iParam0));
	_databinding_write_data_string(&(Global_1955569->f_5.f_2[0]->f_24[2]), "pausemenu_player");
}

void func_998(bool bParam0)
{
	bVar3 = false;
	if (func_1496(&iVar4))
	{
		if (iVar4 <= 0)
		{
			return;
		}
		iVar5 = 0;
		while (iVar5 < iVar4)
		{
			if (func_1497(iVar5, &iVar2, &iVar0))
			{
				if (!func_557(iVar2, 0))
				{
				}
				else
				{
					iVar1 = func_1498(iVar2);
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
							if (func_576(iVar2) == -1013984273)
							{
								if (iVar0 == 1014511709)
								{
									bVar3 = func_991() <= -160;
								}
								else if (iVar0 == -1712679084)
								{
									bVar3 = func_991() >= 160;
								}
							}
							else
							{
								bVar3 = iVar0 == func_1499();
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

char* func_999(int iParam0)
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

bool func_1000(int iParam0)
{
	return func_576(iParam0) == -427144552;
}

bool func_1001(int iParam0)
{
	if (func_22() != -1)
	{
		return false;
	}
	if (func_578(iParam0, 1048576))
	{
		return false;
	}
	if (is_weapon_valid(iParam0))
	{
		return func_1006(iParam0, &uVar0, 1, 0, 0);
	}
	return func_346(iParam0, 1, 0);
}

void func_1002(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (func_576(iParam0) != -427144552)
	{
		return;
	}
	iVar0 = func_583(iParam0, 0);
	if (!is_weapon_valid(iVar0))
	{
		return;
	}
	if (bParam2 || !func_124(iVar0))
	{
		if (func_22() == -1)
		{
			func_584(iVar0);
		}
		if (bParam2 || (!has_ped_got_weapon(Global_35, iVar0, 0, false) && func_561(iParam0, 0, 0) == 0))
		{
			if (!*bParam3 && !iParam4 == 1248274121)
			{
				func_637(iParam0, iParam1, 0, 0, 0);
				play_sound_frontend("REWARD_NEW_GUN", "HUD_REWARD_SOUNDSET", true, 0);
				*bParam3 = 1;
			}
		}
	}
}

void func_1003(int iParam0, int iParam1)
{
	if (func_577(iParam0, 58855631))
	{
		func_1154(iParam0, -915411861, &iVar0, 1);
		*iParam1 = (*iParam1 * iVar0);
	}
}

int func_1004(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	if (!func_557(iParam0, 0))
	{
		return 0;
	}
	if (!func_585(0))
	{
		bParam2 = true;
	}
	if (bParam2)
	{
		return _0xe80e50bee276a54a(iParam0, uParam1->f_4);
	}
	return _0xaddd1e7c0ecf7d95(func_931(bParam3), iParam0);
}

int func_1005(int iParam0, bool bParam1)
{
	if (func_589(iParam0))
	{
		return get_ped_ammo_by_type(Global_35, iParam0);
	}
	return _0xe787f05dfc977bde(func_931(bParam1), iParam0, 0);
}

bool func_1006(int iParam0, var uParam1, int iParam2, bool bParam3, bool bParam4)
{
	func_1500(&iParam0);
	if (!func_557(iParam0, 0))
	{
		return false;
	}
	if (!func_585(0))
	{
		bParam3 = true;
	}
	if (func_1000(iParam0) && _0x705be297eebdb95d(iParam0))
	{
		if (_is_weapon_one_handed(iParam0))
		{
			Var0 = { func_1137(0) };
			Var4.f_9 = -1591664384;
			if (!func_1029(iParam0, &Var0, 1728382685, 0))
			{
				return false;
			}
			else if (func_1030(iParam0, &Var4, 1728382685))
			{
				return false;
			}
			if (func_1138(iParam0, 1))
			{
				if (!func_1029(iParam0, &Var0, -649335959, 0))
				{
					return false;
				}
				else if (func_1030(iParam0, &Var4, -649335959))
				{
					return false;
				}
			}
		}
		else if (!func_1501(iParam0, &uVar26, 0))
		{
			return false;
		}
		return true;
	}
	iVar27 = func_1004(iParam0, uParam1, bParam3, bParam4);
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
		iVar28 = func_1502(iParam0, *uParam1, uParam1->f_4, bParam4);
	}
	else
	{
		iVar28 = _0xe787f05dfc977bde(func_931(bParam4), iParam0, 0);
	}
	if ((iVar28 + iParam2) > iVar27)
	{
		return true;
	}
	return false;
}

int func_1007(int iParam0, int iParam1)
{
	if (!func_557(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_576(iParam0);
	if (iVar0 == -427144552 && is_weapon_valid(iParam0))
	{
		return _get_ammo_type_for_weapon(iParam0);
	}
	else if (iVar0 == 307971639 && _is_ammo_valid(iParam0))
	{
		return iParam0;
	}
	if (func_577(iParam0, 1399091007))
	{
		func_1071(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

int func_1008(int iParam0, bool bParam1)
{
	if (!is_weapon_valid(iParam0))
	{
		return 0;
	}
	Var0 = { func_1503(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam1)
	{
		func_1504(&Var0, func_1137(0));
	}
	if (!func_1505(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	func_1081(iVar14);
	return uVar15;
}

int func_1009()
{
	return _0x62cab7db62ead434(-2076669067, 0);
}

int func_1010(int iParam0)
{
	return _0xec3959e9950bf56b(iParam0);
}

void func_1011(int iParam0)
{
	if (func_22() != -1)
	{
		return;
	}
	iVar0 = func_1506(iParam0);
	fVar1 = func_1507(iParam0);
	if ((Global_1347477->f_117 || !func_579(31)) || !func_1508(iVar0))
	{
		return;
	}
	if (fVar1 <= 0f)
	{
		return;
	}
	if (func_1509(iVar0) >= 7)
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
	func_1510(iVar0, (&Global_40.f_11095.f_11[iVar0] + fVar1), 0);
	func_686(_create_var_string(6, func_1511(iParam0), fVar1), "itemtype_textures", func_1512(iVar0), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

int func_1012(int iParam0)
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

int func_1013(int iParam0, int iParam1)
{
	if (!func_1169(17, &Var0))
	{
		return 0;
	}
	Var0.f_2 = iParam1;
	Var0.f_3 = iParam0;
	_datafile_get_int(&uVar5, &Var0);
	return uVar5;
}

char* func_1014(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6)
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
			else if (func_572() >= 12)
			{
				sParam3 = _create_var_string(2, "COL_CC_CARD_POSTED_OBJ", func_1513(), 12);
			}
			else
			{
				sParam3 = _create_var_string(2, "COL_CC_CARD_FOUND_OBJ", func_1514(), 12);
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
			else if (func_1053() >= 30)
			{
				sParam3 = _create_var_string(2, "COL_DB_POSTED_OBJ", func_1515(), 30);
			}
			else
			{
				sParam3 = _create_var_string(2, "COL_DB_FOUND_OBJ", func_1053(), 30);
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
				sParam3 = _create_var_string(2, "COL_LF_CAUGHT_OBJ", func_1516(), 13);
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
			else if (func_1054() >= 10)
			{
				sParam3 = _create_var_string(2, "COL_RC_POSTED_OBJ", func_1517(), 10);
			}
			else
			{
				sParam3 = _create_var_string(2, "COL_RC_FOUND_OBJ", func_1054(), 10);
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
				sParam3 = _create_var_string(2, "COL_TX_CARCASS_COLLECTED_OBJ", sParam4, func_1013(iParam6, 20));
			}
			break;
	}
	return sParam3;
}

bool func_1015(int iParam0, int iParam1, int iParam2)
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

bool func_1016(int iParam0, int iParam1, vector3 vParam2, char* sParam5, char* sParam6)
{
	if (!_uilog_is_entry_registered(3, iParam1))
	{
		_uilog_add_entry_hash(3, iParam1, vParam2, get_hash_key(sParam5), get_hash_key(sParam6), 0);
	}
	return true;
}

bool func_1017(int iParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6, int iParam7)
{
	_uilog_add_or_update_objective(3, iParam1, get_hash_key(sParam2), sParam2, false, false, false);
	_uilog_set_entry_pinned(3, iParam1, true);
	_uilog_set_entry_brief_texture(3, iParam1, get_hash_key(sParam4), get_hash_key(sParam5));
	_uilog_set_entry_icon_texture(3, iParam1, iParam6, iParam7);
	_uilog_update_entry_subheader(3, iParam1, _create_var_string(2, sParam3));
	return true;
}

bool func_1018(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
{
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < iParam6)
	{
		if (iParam2 == -2076669067)
		{
			iVar2 = func_1518(iVar0);
			if (iParam4 == iVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = (func_346(iVar2, 1, 0) || func_1520(func_1519(iVar2)));
			}
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1022(func_1518(iVar0))), func_1022(func_1518(iVar0)), bVar1, true, false);
		}
		if (iParam2 == -440187297)
		{
			if (iVar0 == 0)
			{
				bVar1 = func_1053() >= iParam8;
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1521(iVar0)), func_1521(iVar0), bVar1, true, false);
			}
			else if (iVar0 == 1)
			{
				bVar1 = func_1515() >= iParam8;
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1521(iVar0)), func_1521(iVar0), bVar1, true, false);
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
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1521(iVar0)), func_1521(iVar0), bVar1, true, false);
			}
		}
		if (iParam2 == -1531394072)
		{
			iVar2 = func_1064(iParam3, func_1522(iVar0));
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			else if (bParam9)
			{
				if (iParam4 == iVar2)
				{
					bVar1 = (func_1060(iVar2) - iParam7) >= func_1013(iParam3, func_1523(iVar0));
				}
				else
				{
					bVar1 = func_1060(iVar2) >= func_1013(iParam3, func_1523(iVar0));
				}
			}
			else if (iParam4 == iVar2)
			{
				bVar1 = (func_1060(iVar2) + iParam7) >= func_1013(iParam3, func_1523(iVar0));
			}
			else
			{
				bVar1 = func_1060(iVar2) >= func_1013(iParam3, func_1523(iVar0));
			}
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1524(iVar2)), func_1524(iVar2), bVar1, true, false);
		}
		if (iParam2 == 1995362678)
		{
			if (func_1525(_0x126cbebba46693cf(iVar0, 1995362678, 0)))
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
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1526(_0x126cbebba46693cf(iVar0, iParam2, 0))), func_1526(_0x126cbebba46693cf(iVar0, iParam2, 0)), bVar1, true, false);
		}
		if (iParam2 == 2103522376)
		{
			if (iVar0 == 0)
			{
				bVar1 = func_1054() >= iParam8;
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1527(iVar0)), func_1527(iVar0), bVar1, true, false);
			}
			else if (iVar0 == 1)
			{
				bVar1 = func_1517() >= iParam8;
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1527(iVar0)), func_1527(iVar0), bVar1, true, false);
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
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1527(iVar0)), func_1527(iVar0), bVar1, true, false);
			}
		}
		if (iParam2 == 678508515)
		{
			iVar2 = func_1064(iParam3, func_1522(iVar0));
			if (bParam9)
			{
				if (iParam4 == iVar2)
				{
					bVar1 = (func_1060(iVar2) - iParam7) >= true;
				}
				else
				{
					bVar1 = func_1528(iVar2);
				}
			}
			else if (iParam4 == iVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = func_1528(iVar2);
			}
			if (((((((iParam5 == 7 || iParam5 == 3) || iParam5 == 4) || iParam5 == 5) || iParam5 == 0) || iParam5 == 1) || iParam5 == 2) || iParam5 == 8)
			{
				bVar1 = true;
			}
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1529(iVar2)), func_1529(iVar2), bVar1, true, false);
		}
		iVar0++;
	}
	return true;
}

bool func_1019(int iParam0, int iParam1, int iParam2, int iParam3)
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
		if (func_1516() >= 13)
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

bool func_1020(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (func_189(func_202(0)) && ((func_1530(0) == 1 || func_1530(0) == 8) || func_1530(0) == 6))
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

var func_1021(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, int iParam6, int iParam7, char* sParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13)
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

char* func_1022(int iParam0)
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

bool func_1023(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_1024(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return is_bit_set(&(Global_40.f_7857[iVar1]), iVar2);
}

void func_1025(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	uVar3 = &Global_40.f_7857[iVar1];
	set_bit(&uVar3, iVar2);
	Global_40.f_7857[iVar1] = uVar3;
}

void func_1026(int iParam0)
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
			func_1531(1);
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
			func_1532(1);
			break;
		case 19:
			_uitutorial_set_rpg_icon_visibility(1, 0);
			_uitutorial_set_rpg_icon_visibility(0, 0);
			func_1532(2);
			break;
		case 20:
			_uitutorial_set_rpg_icon_visibility(3, 0);
			_uitutorial_set_rpg_icon_visibility(2, 0);
			func_1532(3);
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
			func_1533(1);
			break;
		case 34:
			func_1534(1);
			break;
		case 35:
			func_1535(1);
			break;
		case 36:
			break;
		case 37:
			func_1536(0);
			break;
		case 38:
			func_1537(0);
			break;
		case 39:
			func_1538(0);
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
			if ((!&Global_1879534 && func_398()) && _is_deadeye_ability_locked(get_player_index(), 2))
			{
				func_693("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_MANUAL_PAINT", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_level(get_player_index(), 2);
			func_324(586, 0);
			break;
		case 3:
			if ((!&Global_1879534 && func_398()) && _is_deadeye_ability_locked(get_player_index(), 3))
			{
				func_693("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_STAY_ACTIVE", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_locked(get_player_index(), 3, false);
			_set_deadeye_ability_level(get_player_index(), 3);
			func_324(587, 0);
			break;
		case 4:
			if ((!&Global_1879534 && func_398()) && _is_deadeye_ability_locked(get_player_index(), 4))
			{
				func_693("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_FATAL", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_locked(get_player_index(), 3, false);
			_set_deadeye_ability_locked(get_player_index(), 4, false);
			_set_deadeye_ability_level(get_player_index(), 4);
			func_324(588, 0);
			break;
		case 5:
			if ((!&Global_1879534 && func_398()) && _is_deadeye_ability_locked(get_player_index(), 5))
			{
				func_693("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_CRITICAL", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_locked(get_player_index(), 3, false);
			_set_deadeye_ability_locked(get_player_index(), 4, false);
			_set_deadeye_ability_locked(get_player_index(), 5, false);
			_set_deadeye_ability_level(get_player_index(), 5);
			func_324(589, 0);
			break;
		case 24:
			_unlock_set_unlocked(-200143754, true);
			_unlock_set_visible(-200143754, true);
			_0x83b8d50eb9446bba(player_ped_id(), 1);
			if (func_22() == -1)
			{
				if (!func_1094(99217379) || func_1539(99217379) == 2110595215)
				{
					if (func_993())
					{
						iVar0 = -1515874150;
					}
					else
					{
						iVar0 = 899611344;
					}
					if (!func_346(iVar0, 1, 0))
					{
						func_630(iVar0, 1, 752097756);
					}
					func_609(Global_35, iVar0, 0, 99217379, 1, 1, 1, 0, 1, 1);
				}
			}
			break;
		case 48:
			if (func_22() == -1)
			{
				if (!func_346(1013902307, 1, 0))
				{
					func_630(1013902307, 1, 752097756);
				}
			}
			break;
		case 50:
			if (func_22() == -1)
			{
				if (!func_346(1013902307, 1, 0))
				{
					func_630(1013902307, 1, 752097756);
				}
				if (!func_346(142640135, 1, 0))
				{
					func_630(142640135, 1, 752097756);
				}
			}
			break;
		case 49:
			if (func_22() == -1)
			{
				if (!func_346(786809402, 1, 0))
				{
					func_630(786809402, 1, 752097756);
				}
			}
			break;
		case 51:
			if (func_22() == -1)
			{
				if (!func_346(786809402, 1, 0))
				{
					func_630(786809402, 1, 752097756);
				}
				if (!func_346(-518019409, 1, 0))
				{
					func_630(-518019409, 1, 752097756);
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
			func_1540();
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

bool func_1027(int iParam0)
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

int func_1028(int iParam0, int iParam1)
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
			return 1666399168;
			return -1911121386;
			return 1756656691;
			return -1774867076;
			return -421952220;
			return -1087003323;
			return 1231618917;
			return -1183777174;
			return -841767082;
			return 1043717005;
			return 142663787;
			return 1718143051;
			return -6605744;
			return 953047564;
			return 769706682;
			return 1635590003;
			return -2047978619;
			return -586319254;
			return 249896112;
			return -1060513333;
			return 1317351007;
			return -500478573;
			return -806573802;
			return -1109949204;
			return -740156546;
			return -684532710;
			return 1158805436;
			return -559473670;
			return -797147251;
			return -382216265;
			return 1419177114;
			return 1704297235;
			return -1139016418;
			return 897705377;
			return 17961769;
			return 205582207;
			return 900740963;
			return -1369589344;
			return -1695823795;
			return -41453074;
			return 539767227;
			return 1210490314;
			return -399684751;
			return 2138893455;
			return -1617010487;
			return -832377028;
			return -428040245;
			return 1279288897;
			return -594897905;
			return -1360459240;
			return 1838428396;
			return -1467846997;
			return -490610263;
			return -1885413079;
			return 708884155;
			return -134459952;
			return -1912136700;
			return -1268031552;
			return 1177953227;
			return 2130805296;
			return 38093490;
			return -269153218;
			return -1995068011;
			return -164284834;
			return 1446463345;
			return 1501315823;
			return -750379482;
			return -929560937;
			return 608323241;
			return 1030796013;
			return 1915057434;
			return -1582276476;
			return 692059311;
			return 2062839241;
			return -1884531872;
			return -866434534;
			return -1252192421;
			return 1243288963;
			return -1953772189;
			return 754411745;
			return 545309006;
			return -1089810811;
			return 1957869400;
			return -241412332;
			return -1548010959;
			return 550150488;
			return 946565453;
			return 434443248;
			return -1709914938;
			return 366686112;
			return -1370063350;
			return 2126829550;
			return 226552910;
			return 721193431;
			return -315672460;
			return 623544501;
			return 259556714;
			return -2125361825;
			return 1078230356;
			return 1885364811;
			return 1630382737;
			return 1738245512;
			return 1540262216;
			return 1016871472;
			return 13829069;
			return 737051352;
			return 1734614610;
			return -208715295;
			return 1435062936;
			return 1483055553;
			return 380335002;
			return -1079385677;
			return 676610411;
			return 2145419552;
			return 657238733;
			return 1850579281;
			return -1923957384;
			return -1142828108;
			return -1400618531;
			return -1433857135;
			return 209987206;
			return 1686943047;
			return -59178517;
			return 2134884601;
			return 651707517;
			return -633788535;
			return 116394463;
			return -1196973875;
			return 801752086;
			return 184475332;
			return -1880922659;
			return -898138634;
			return -2107418444;
			return -679970099;
			return -1531392549;
			return 1612483376;
			return 463930900;
			return -632148238;
			return 55303249;
			return 2108322089;
			return -1358896714;
			return 74475632;
			return -28710953;
			return -1791599168;
			return 1605938169;
			return 1255242276;
			return 636467727;
			return -1567688525;
			return -77886679;
			return -1057900679;
			return -1960888134;
			return -1719717295;
			return -1779244911;
			return -670540863;
			return 223362311;
			return 1150824567;
			return 974471191;
			return 1989683968;
			return 254804477;
			return 192057609;
			return 1553957817;
			return 2099829015;
			return -840300007;
			return -1948423372;
			return 981083654;
			return 1283289876;
			return -606884489;
			return -100418572;
			return 663645231;
			return 1442217033;
			return 1410986244;
			return 847409839;
			return 923926911;
			return 109995826;
			return -747412737;
			return 1114341727;
			return -539456939;
			return 45887121;
			return 913271624;
			return -1652812715;
			return -1791365775;
			return -979299941;
			return 713062001;
			return -575045963;
			return 1852965262;
			return -1398836354;
			return -1829885298;
			return -1773850357;
			return -564258009;
			return 2016532685;
			return -1070563798;
			return -1619221343;
			return -345571691;
			return 544288390;
			return 159578294;
			return -76852849;
			return 1110295244;
			return 2104563477;
			return 1947827651;
			return -933072766;
			return 2104388648;
			return -1677140601;
			return -2133097881;
			return -826678792;
			return -513522325;
			return 1970588249;
			return -2080032591;
			return 1758847745;
			return 895010282;
			return -511891179;
			return -1207567168;
			return -1315407613;
			return 1786352060;
			return -833319691;
			return 1591329969;
			return 2123222014;
			return -1578397674;
			return 1473261684;
			return -241855024;
			return 12999093;
			return -6796437;
			return -268116367;
			return -636470867;
			return 1737668280;
			return 892807236;
			return -733247890;
			return 24047176;
			return -1561999014;
			return -2052774042;
			return -997150586;
			return -1189569496;
			return 46488141;
			return 1046566686;
			return 325139909;
			return -1585141069;
			return 802754820;
			return 1415981582;
			return -1886147520;
			return 654877947;
			return -415648720;
			return 1221327846;
			return 923162715;
			return 625423581;
			return 326668608;
			return 669530755;
			return 429759982;
			return -2111934838;
			return 1886178087;
			return 1587783573;
			return -279722001;
			return 1310070322;
			return 724026534;
			return 137387616;
			return -653439684;
			return 1376835592;
			return -1824203570;
			return -1654197998;
			return 798987653;
			return 976923323;
			return 1167442289;
			return 986998820;
			return -2119169513;
			return -2015960939;
			return 1132377945;
			return 739936401;
			return 1201880974;
			return 819728896;
			return 1746010219;
			return 1433393959;
			return -1287636759;
			return -706917073;
			return -2166805;
			return -1391602433;
			return 1782075221;
			return 1282544585;
			return 1732594027;
			return -1058817012;
			return 1090546265;
			return -1783120823;
			return -1535745896;
			return -2086922122;
			return -1675198649;
			return 1189497682;
			return -1565675519;
			return -268973591;
			return 1039159916;
			return 1111816631;
			return 405591388;
			return 897456793;
			return 104187473;
			return 773808542;
			return -1120669954;
			return -1389278274;
			return 552979403;
			return -1571578784;
			return -708312114;
			return 688823508;
			return -1622147240;
			return 830292162;
			return 226276782;
			return -678416628;
			return -1098528034;
			return 316207340;
			return -1909200748;
			return -939652363;
			return -1990194462;
			return -375447933;
			return 537014919;
			return 1784584921;
			return -140655024;
			return 1084182731;
			return -1045471300;
			return 1617414719;
			return -787761753;
			return -490616606;
			return 1491346514;
			return -1360128126;
			return -1311702610;
			return -904250715;
			return 1034665895;
			return -101524555;
			return 1419152594;
			return -451359317;
			return -1915385310;
			return 1315162488;
			return -361152079;
			return -2041626192;
			return -2077812539;
			return -1371514637;
			return 1730017037;
			return 892816668;
			return -1994943603;
			return 603133554;
			return -30160144;
			return -1248299493;
			return 727393558;
			return 755611221;
			return -170255458;
			return 1011151573;
			return 1122339631;
			return 454815308;
			return 990701735;
			return -246340825;
			return -1410671073;
			return 1547608292;
			return -714132970;
			return 732290690;
			return 971340545;
			return -234132662;
			return -2143057988;
			return -993947465;
			return -486552269;
			return -1156317860;
			return 1229625803;
			return -388596167;
			return -1204639465;
			return -1384685096;
			return -2026728113;
			return -1228057307;
			return 1835126290;
			return 1890833594;
			return -751549960;
			return -1682270750;
			return -1839865333;
			return -1990383629;
			return 1712094016;
			return 1532953697;
			return 1620318083;
			return -307230331;
			return -1034549620;
			return -1293064293;
			return -1540142553;
			return -1769886012;
			return -1983081126;
			return -1106117124;
			return -1873108338;
			return -2097543219;
			return 155413195;
			return -1162387149;
			return 1728382685;
			return -649335959;
			return -1876502240;
			return -2107032155;
			return 1570861011;
			return 1075981185;
			return 960195961;
			return 1150460649;
			return 1689424794;
			return 619103418;
			return 1355448197;
			return 1681762005;
			return 1026887814;
			return 354352628;
			return 1519366642;
			return -82757515;
			return 386306655;
			return 1243962119;
			return 756214903;
			return -718417579;
			return -1445516411;
			return 1232060796;
			return -672392892;
			return 1465341584;
			return -427758369;
			return -735647142;
			return 1535838048;
			return -602272282;
			return 2051264661;
			return 487172188;
			return 282270687;
			return 1607708943;
			return 1686264939;
			return 314786149;
			return 1402841185;
			return 1099170772;
			return 2125676786;
			return -363896735;
			return -468790222;
			return -1779133048;
			return 1732537631;
			return 1755095401;
			return 835771095;
			return 1963317232;
			return 259627919;
			return 1299075397;
			return -1509094230;
			return 61132362;
			return 1549741908;
			return 288484254;
			return -1877032947;
			return -1395676456;
			return 1136146715;
			return 468034421;
			return 1079459546;
			return -140369351;
			return 1822341990;
			return 1219701681;
			return 1601295268;
			return -1692460667;
			return 1471419228;
			return 907446160;
			return -1126482585;
			return 1911050315;
			return -1343525599;
			return 1261891225;
			return 763162704;
			return 1335861197;
			return 526744654;
			return -1177461517;
			return -241638635;
			return 1024262875;
			return 853355463;
			return -337288221;
			return 361381308;
			return -1264898804;
			return -585289073;
			return 1423542233;
			return -948489286;
			return 2063859257;
			return -1652627327;
			return -1959697839;
			return -1532267859;
			return -1410062763;
			return -901428716;
			return -1628873469;
			return 144855571;
			return -617589883;
			return -1306457086;
			return 1713542477;
			return -305542365;
			return 1985390213;
			return -2145069367;
			return -1674390752;
			return -2117214398;
			return 1880805647;
			return -62390436;
			return 1815288415;
			return 196214097;
			return -201958220;
			return 244353594;
			return 302954672;
			return -1870144662;
			return 257892944;
			return -607182722;
			return -13254502;
			return 1400281261;
			return 1601515402;
			return -940704970;
			return -548371721;
			return -1022384613;
			return -357406394;
			return 1077068189;
			return -782241404;
			return 1669853467;
			return 1592019450;
			return 635273153;
			return -1559225678;
			return -266425508;
			return 1117400455;
			return 454332195;
			return -1328061889;
			return 561650932;
			return 256105670;
			return 1976779618;
			return -269095126;
			return 2145617267;
			return 1150213537;
			return 1598825281;
			return -712527121;
			return 1308553072;
			return 852866398;
			return -1794417972;
			return 293062146;
			return 95360094;
			return 807631773;
			return 1603958275;
			return 860052020;
			return -1885979781;
			return 746147970;
			return 666663006;
			return -2096186453;
			return 859409444;
			return -671427187;
			return 100192478;
			return 307812616;
			return 1670843243;
			return 899615863;
			return -298901850;
			return 1379186917;
			return -817206030;
			return -1150323212;
			return -247466821;
			return 427124242;
			return 855418120;
			return -777015093;
			return -722462870;
			return -937454324;
			return -339438116;
			return 2135639035;
			return 1254273765;
			return -792172668;
			return 1905987493;
			return 495693044;
			return -1693422950;
			return -205873076;
			return -2143114654;
			return -1420574021;
			return -1959250381;
			return -1088328663;
			return 513602003;
			return 359221401;
			return 1005272;
			return 1583044470;
			return 348853959;
			return 1045621973;
			return 1084576580;
			return 1651573695;
			return 1463321587;
			return -997505963;
			return -1649851713;
			return -386012962;
			return 1386101789;
			return 1227915917;
			return -218846335;
			return -352578118;
			return 1426626782;
			return -714081520;
			return 74547781;
			return 1271463052;
			return 1983140194;
			return 677262775;
			return -832337898;
			return -319249747;
			return -16955722;
			return -1535425646;
			return -1063641743;
			return -1041133401;
			return 1380479304;
			return 600890828;
			return 733333190;
			return 1843035435;
			return -304127320;
			return 122470371;
			return 0;
			return -1591664384;
			return -673000374;
			return -1150938404;
			return -1756997214;
			return -813824107;
			if (iParam1 >= 1)
			{
			}
			return StackVal;
			if (iParam1 >= 1)
			{
			}
			return StackVal;
		}

bool func_1029(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	return func_1502(iParam0, *uParam1, iParam2, bParam3) > 0;
}

bool func_1030(int iParam0, var uParam1, int iParam2)
{
	if (func_1541(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return false;
}

struct<4> func_1031(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	if (!func_557(iParam0, 0))
	{
		return Var0;
	}
	_0x886dfd3e185c8a89(func_931(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

bool func_1032(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(uParam1))
	{
		return false;
	}
	if (func_1542(iParam0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_1141(*uParam1, &Var0, bParam6, 0))
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
	if (!func_585(bParam6))
	{
		iVar14 = -1;
		return iVar14 != -1;
	}
	if (!_0x3e4e811480b3ae79(func_931(bParam6), uParam1, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

void func_1033(int iParam0, int iParam1)
{
	if ((get_ammo_in_clip(Global_35, &iVar0, iParam0) && iVar0 < iParam1) && iVar0 < _get_weapon_clip_size(iParam0))
	{
		iVar1 = func_1543(_get_weapon_clip_size(iParam0), iParam1);
		set_ammo_in_clip(Global_35, iParam0, iVar1);
	}
}

void func_1034(int iParam0)
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
	iVar2 = func_284();
	func_333(&iVar2, 0, 0, 0, 1, 0, 0, 0);
	decor_set_int(Global_35, sVar1, iVar2);
}

int func_1035(int iParam0)
{
	if (func_1544(iParam0))
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

bool func_1036(int iParam0)
{
	return _is_ammo_valid(_get_ammo_type_for_weapon(iParam0));
}

int func_1037(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	iVar0 = 0;
	if (!is_entity_dead(iParam0))
	{
		get_current_ped_weapon(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

int func_1038(int iParam0)
{
	iVar0 = _get_weapon_type_from_ammo_type(iParam0);
	if (_0x705be297eebdb95d(iVar0))
	{
		if (_is_weapon_two_handed(iVar0))
		{
			if (!func_579(50))
			{
				if (!func_579(48))
				{
					return 133;
				}
				return 135;
			}
		}
		else if (_is_weapon_one_handed(iVar0))
		{
			if (!func_579(51))
			{
				if (!func_579(49))
				{
					return 134;
				}
				return 136;
			}
		}
	}
	return 137;
}

bool func_1039(int iParam0, int iParam1, var uParam2)
{
	if (!func_557(iParam1, 0))
	{
		return false;
	}
	if (func_576(iParam1) != -1037537535)
	{
		return false;
	}
	bVar1 = func_22() != -1;
	iVar2 = _get_metaped_type(iParam0);
	if (func_581(iParam1) == -999503751)
	{
		return true;
	}
	iVar4 = func_655(iParam1);
	if (iVar4 == -358215195)
	{
		*uParam2 = 2084739242;
		return false;
	}
	bVar7 = false;
	iVar8 = iParam1;
	if (func_577(iParam1, 866047851))
	{
		iVar5 = func_656(iVar4, 1);
		if (func_1545(&(Global_1946804->f_1497)) >= 2 && &Global_1946804->f_1497.f_1[iVar5] != iVar8)
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
			iVar3 = func_581(&(Global_1946804->f_1497.f_1[iVar5]));
			if (bVar7 && iVar3 == -525676072)
			{
				*uParam2 = -1938792745;
				return false;
			}
			break;
		case -1944638739:
			iVar5 = 35;
			if (&Global_1946804->f_1497.f_1[iVar5] != &Global_1946804->f_57[iVar5] && func_577(iParam1, -1638171711))
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
			if (func_1546(1868067663, &uVar0))
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
				iVar10 = func_1547(iVar8, iVar4, iVar2, bVar1);
				iVar9 = func_1547(&(Global_1946804->f_1497.f_1[iVar5]), iVar4, iVar2, bVar1);
				if (((iVar11 + iVar10) - iVar9) > 31)
				{
					*uParam2 = -1608241763;
					return false;
				}
				Jump @776; //curOff = 583
				iVar3 = func_581(iParam1);
				iVar5 = 36;
				iVar6 = 35;
				if (iParam1 != &Global_1946804->f_57[iVar6] && func_577(&(Global_1946804->f_1497.f_1[iVar5]), -1638171711))
				{
					*uParam2 = -357399012;
					return false;
				}
				if (iVar3 == 1769055947 || iVar3 == 1545016984)
				{
				}
				else
				{
					if (iParam1 != &Global_1946804->f_57[iVar6] && func_1548(&(Global_1946804->f_1497.f_1[iVar5])))
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

void func_1040()
{
	_0xfe7c9cf376d23342(player_id(), (1f - (Global_40.f_11095.f_64 + Global_1347477->f_175)));
}

void func_1041()
{
	fVar0 = Global_40.f_11095.f_44;
	fVar1 = Global_40.f_11095.f_45;
	set_player_health_recharge_multiplier(player_id(), (1f - (fVar0 - Global_40.f_11095.f_69)));
	_0x08e22898a6af4905(player_id(), (1f - fVar0));
	_0xfeca17cf3343694b(player_id(), (1f - fVar0));
	_0xbbadfb5e5e5766fb(player_id(), (1f - fVar1));
}

int func_1042()
{
	iVar1 = 0;
	while (iVar1 < 26)
	{
		if (func_346(func_1549(iVar1), 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1043(int iParam0)
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

bool func_1044(int iParam0, int iParam1)
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
	if (func_346(iVar0, 1, 0) && func_346(iVar1, 1, 0))
	{
		return true;
	}
	return false;
}

int func_1045(int iParam0)
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

bool func_1046(int iParam0, int iParam1)
{
	iVar0 = func_1550(iParam0);
	if (iVar0 != -15)
	{
		func_333(&iVar0, 0, iParam1, 0, 0, 0, 0, 0);
		return !func_683(iVar0, 1);
	}
	return false;
}

void func_1047(int iParam0)
{
	Global_40.f_12004.f_6 = (Global_40.f_12004.f_6 || iParam0);
}

void func_1048(int iParam0)
{
	Global_40.f_12004.f_1 = (Global_40.f_12004.f_1 || iParam0);
}

void func_1049(int iParam0)
{
	Global_40.f_12004.f_3 = (Global_40.f_12004.f_3 || iParam0);
}

void func_1050(int iParam0)
{
	Global_40.f_12004.f_5 = (Global_40.f_12004.f_5 || iParam0);
}

int func_1051(int iParam0)
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
	iVar1 = func_1060(iVar9);
	iVar2 = func_1060(iVar10);
	iVar3 = func_1060(iVar11);
	iVar5 = func_1061(iVar9);
	iVar6 = func_1061(iVar10);
	iVar7 = func_1061(iVar11);
	if (iParam0 != 2)
	{
		iVar4 = func_1060(iVar12);
		iVar8 = func_1061(iVar12);
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

void func_1052(int iParam0)
{
	Global_40.f_12004.f_2 = (Global_40.f_12004.f_2 || iParam0);
}

int func_1053()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 30)
	{
		if (func_1551(_0x126cbebba46693cf(iVar1, -440187297, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1054()
{
	return _0x5461c821d00fe15a(2103522376, 0);
}

bool func_1055(int iParam0, int iParam1, char* sParam2, bool bParam3, int iParam4, bool bParam5)
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
			if (func_1528(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1528(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_1528(iVar0))
		{
			*sParam2++;
		}
		if (func_1528(iVar0))
		{
			return true;
		}
	}
	else if (iParam0 == -1248968496)
	{
		if (bParam3)
		{
			if (func_1528(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1528(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_1528(iVar0))
		{
			*sParam2++;
		}
		if (func_1528(iVar1))
		{
			*sParam2++;
		}
		if (func_1528(iVar0) && func_1528(iVar1))
		{
			return true;
		}
	}
	else if (iParam0 == 1706369307)
	{
		if (bParam3)
		{
			if (func_1528(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1528(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_1528(iVar0))
		{
			*sParam2++;
		}
		if (func_1528(iVar1))
		{
			*sParam2++;
		}
		if (func_1528(iVar2))
		{
			*sParam2++;
		}
		if ((func_1528(iVar0) && func_1528(iVar1)) && func_1528(iVar2))
		{
			return true;
		}
	}
	else
	{
		if (bParam3)
		{
			if (func_1528(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1528(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_1528(iVar0))
		{
			*sParam2++;
		}
		if (func_1528(iVar1))
		{
			*sParam2++;
		}
		if (func_1528(iVar2))
		{
			*sParam2++;
		}
		if (func_1528(iVar3))
		{
			*sParam2++;
		}
		if (((func_1528(iVar0) && func_1528(iVar1)) && func_1528(iVar2)) && func_1528(iVar3))
		{
			return true;
		}
	}
	return false;
}

void func_1056(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2)
	{
	}
	switch (iParam0)
	{
		case 1497516462:
			func_1552(1497516462);
			func_1553(2016141805);
			func_1553(1010885152);
			func_1553(-502324015);
			break;
		case 2016141805:
			func_1553(1497516462);
			func_1552(2016141805);
			func_1553(1010885152);
			func_1553(-502324015);
			break;
		case 1010885152:
			func_1553(1497516462);
			func_1553(2016141805);
			func_1552(1010885152);
			func_1553(-502324015);
			break;
		case -502324015:
			func_1553(1497516462);
			func_1553(2016141805);
			func_1553(1010885152);
			func_1552(-502324015);
			break;
		case -1056767524:
		case -538889627:
		case -538880323:
			func_1553(-538889627);
			func_1553(-538880323);
			func_1553(-1056767524);
			func_1552(iParam0);
			break;
		case -2038424081:
		case -1187950766:
		case -939420910:
		case 356365161:
		case 459290420:
		case 753127042:
		case 1884271742:
			func_1554();
			func_1552(iParam0);
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
			func_1555();
			func_1552(iParam0);
			break;
		case 2019386373:
			func_1553(-664252410);
			func_1553(2109952320);
			func_1552(2019386373);
			break;
		case -664252410:
			func_1553(2019386373);
			func_1553(2109952320);
			func_1552(-664252410);
			break;
		case 2109952320:
			func_1553(2019386373);
			func_1553(-664252410);
			func_1552(2109952320);
			break;
		case -1674179981:
			func_1553(-1835851517);
			func_1553(-1838352012);
			func_1552(-1674179981);
			break;
		case -1835851517:
			func_1553(-1674179981);
			func_1553(-1838352012);
			func_1552(-1835851517);
			break;
		case -1838352012:
			func_1553(-1674179981);
			func_1553(-1835851517);
			func_1552(-1838352012);
			break;
		case -1717960576:
			func_1553(210001842);
			func_1552(-1717960576);
			break;
		case 210001842:
			func_1553(-1717960576);
			func_1552(210001842);
			break;
		case -150493654:
			func_1553(-1271608261);
			func_1553(1846061697);
			func_1553(-1145519186);
			func_1552(-150493654);
			break;
		case -1271608261:
			func_1553(-150493654);
			func_1553(1846061697);
			func_1553(-1145519186);
			func_1552(-1271608261);
			break;
		case 1846061697:
			func_1553(-150493654);
			func_1553(-1271608261);
			func_1553(-1145519186);
			func_1552(1846061697);
			break;
		case -1145519186:
			func_1553(-150493654);
			func_1553(-1271608261);
			func_1553(1846061697);
			func_1552(-1145519186);
			break;
		case 1766284049:
			func_1553(280705402);
			func_1553(1926308480);
			func_1552(1766284049);
			break;
		case 280705402:
			func_1553(1766284049);
			func_1553(1926308480);
			func_1552(280705402);
			break;
		case 1926308480:
			func_1553(1766284049);
			func_1553(280705402);
			func_1552(1926308480);
			break;
		case 1609506757:
			if (bParam1)
			{
				func_1553(439465264);
				func_1552(1609506757);
			}
			else
			{
				func_1553(1609506757);
				func_1553(439465264);
			}
			break;
		case 439465264:
			if (func_467(1609506757))
			{
				if (bParam1)
				{
					func_1552(439465264);
				}
				else
				{
					func_1553(439465264);
				}
			}
			break;
		case 1822001510:
			func_1553(-1612662716);
			func_1552(1822001510);
			break;
		case -1612662716:
			func_1553(1822001510);
			func_1552(-1612662716);
			break;
		case 1306158345:
			func_1553(1952610440);
			func_1553(-223469678);
			func_1553(-404698347);
			func_1553(1517904467);
			func_1552(1306158345);
			break;
		case 1952610440:
			func_1553(1306158345);
			func_1553(-223469678);
			func_1553(-404698347);
			func_1553(1517904467);
			func_1552(1952610440);
			break;
		case -223469678:
			func_1553(1306158345);
			func_1553(1952610440);
			func_1553(-404698347);
			func_1553(1517904467);
			func_1552(-223469678);
			break;
		case -404698347:
			func_1553(1306158345);
			func_1553(1952610440);
			func_1553(-223469678);
			func_1553(1517904467);
			func_1552(-404698347);
			break;
		case 1517904467:
			func_1553(1306158345);
			func_1553(1952610440);
			func_1553(-223469678);
			func_1553(-404698347);
			func_1552(1517904467);
			break;
		case 1376646519:
			func_1553(931649776);
			func_1553(-434590080);
			func_1553(1743048395);
			func_1553(449774763);
			func_1552(1376646519);
			break;
		case 931649776:
			func_1553(1376646519);
			func_1553(-434590080);
			func_1553(1743048395);
			func_1553(449774763);
			func_1552(931649776);
			break;
		case -434590080:
			func_1553(1376646519);
			func_1553(931649776);
			func_1553(1743048395);
			func_1553(449774763);
			func_1552(-434590080);
			break;
		case 1743048395:
			func_1553(1376646519);
			func_1553(931649776);
			func_1553(-434590080);
			func_1553(449774763);
			func_1552(1743048395);
			break;
		case 449774763:
			func_1553(1376646519);
			func_1553(931649776);
			func_1553(-434590080);
			func_1553(1743048395);
			func_1552(449774763);
			break;
		case -1414537028:
			func_1553(38162571);
			func_1553(1350391819);
			func_1553(54073871);
			func_1552(-1414537028);
			break;
		case 38162571:
			func_1553(-1414537028);
			func_1553(1350391819);
			func_1553(54073871);
			func_1552(38162571);
			break;
		case 1350391819:
			func_1553(-1414537028);
			func_1553(38162571);
			func_1553(54073871);
			func_1552(1350391819);
			break;
		case 54073871:
			func_1553(-1414537028);
			func_1553(38162571);
			func_1553(1350391819);
			func_1552(54073871);
			break;
		case 198200492:
			func_1552(198200492);
			func_1553(-1124061431);
			func_1553(52706132);
			func_1553(-259123672);
			break;
		case -1124061431:
			func_1553(198200492);
			func_1552(-1124061431);
			func_1553(52706132);
			func_1553(-259123672);
			break;
		case 52706132:
			func_1553(198200492);
			func_1553(-1124061431);
			func_1552(52706132);
			func_1553(-259123672);
			break;
		case -259123672:
			func_1553(198200492);
			func_1553(-1124061431);
			func_1553(52706132);
			func_1552(-259123672);
			break;
		case -919512195:
			func_1552(-919512195);
			func_1553(-1925798111);
			func_1553(420709909);
			func_1553(1703426636);
			break;
		case -1925798111:
			func_1552(-1925798111);
			func_1553(-919512195);
			func_1553(420709909);
			func_1553(1703426636);
			break;
		case 420709909:
			func_1552(420709909);
			func_1553(-919512195);
			func_1553(-1925798111);
			func_1553(1703426636);
			break;
		case 1703426636:
			func_1552(1703426636);
			func_1553(-919512195);
			func_1553(-1925798111);
			func_1553(420709909);
			break;
		case -1223121209:
			func_1552(-1223121209);
			func_1553(630808005);
			break;
		case 630808005:
			func_1552(630808005);
			func_1553(-1223121209);
			break;
		case 1453909576:
			func_1552(1453909576);
			func_1553(1643531967);
			break;
		case 1643531967:
			func_1552(1643531967);
			func_1553(1453909576);
			break;
		case 0:
			func_1552(0);
			func_1553(473295046);
			func_1553(-1738165526);
			break;
		case 473295046:
			func_1552(473295046);
			func_1553(0);
			func_1553(-1738165526);
			break;
		case -1738165526:
			func_1552(-1738165526);
			func_1553(0);
			func_1553(473295046);
			break;
		case 932909855:
			func_1552(932909855);
			func_1553(2051822093);
			break;
		case 2051822093:
			func_1552(2051822093);
			func_1553(932909855);
			break;
		case 405586984:
			func_1552(405586984);
			func_1553(1509509592);
			func_1553(-959357075);
			func_1553(-1311865656);
			break;
		case 1509509592:
			func_1552(1509509592);
			func_1553(405586984);
			func_1553(-959357075);
			func_1553(-1311865656);
			break;
		case -959357075:
			func_1552(-959357075);
			func_1553(1509509592);
			func_1553(405586984);
			func_1553(-1311865656);
			break;
		case -1311865656:
			func_1552(-1311865656);
			func_1553(1509509592);
			func_1553(-959357075);
			func_1553(405586984);
			break;
		case -524145696:
			if (bParam1)
			{
				func_1552(-524145696);
			}
			else
			{
				func_1553(-524145696);
			}
			func_1553(1626481264);
			func_1553(282809459);
			break;
		case 282809459:
			func_1552(282809459);
			func_1553(1626481264);
			func_1553(-524145696);
			break;
		case 1626481264:
			func_1552(1626481264);
			func_1553(-524145696);
			func_1553(282809459);
			break;
		case 885203519:
			if (bParam1)
			{
				func_1552(885203519);
			}
			else
			{
				func_1553(885203519);
			}
			break;
		case -1080627546:
			if (bParam1)
			{
				func_1552(-1080627546);
			}
			else
			{
				func_1553(-1080627546);
			}
			break;
		default:
			if (bParam1)
			{
				if (!func_467(iParam0))
				{
					func_1552(iParam0);
				}
			}
			else if (func_467(iParam0))
			{
				func_1553(iParam0);
			}
			break;
	}
}

void func_1057(int iParam0)
{
	if (!func_1556(iParam0))
	{
		func_1558(func_1557(iParam0));
	}
}

int func_1058()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (func_1556(_0x126cbebba46693cf(iVar1, -1531394072, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1059(int iParam0, int iParam1, int iParam2)
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
	iVar1 = func_1060(iVar9);
	iVar2 = func_1060(iVar10);
	iVar3 = func_1060(iVar11);
	iVar5 = func_1061(iVar9);
	iVar6 = func_1061(iVar10);
	iVar7 = func_1061(iVar11);
	if (iParam2 != 2)
	{
		iVar4 = func_1060(iVar12);
		iVar8 = func_1061(iVar12);
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

int func_1060(int iParam0)
{
	if (func_346(iParam0, 1, 0))
	{
		iVar0 = func_561(iParam0, 0, 0);
	}
	return iVar0;
}

int func_1061(int iParam0)
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

int func_1062(int iParam0)
{
	return _0xf83d3dda4d3c8169(iParam0);
}

void func_1063(int iParam0, int iParam1)
{
	_0x3ea62e56f386c997(iParam0, iParam1);
}

int func_1064(int iParam0, int iParam1)
{
	if (!func_1169(17, &Var0))
	{
		return 0;
	}
	Var0.f_2 = iParam1;
	Var0.f_3 = iParam0;
	_datafile_get_hash(&uVar5, &Var0);
	return uVar5;
}

void func_1065(int iParam0, int iParam1, char* sParam2, int iParam3, bool bParam4)
{
	if ((((iParam0 == func_1064(iParam1, 5) || iParam0 == func_1064(iParam1, 6)) || iParam0 == func_1064(iParam1, 7)) || iParam0 == func_1064(iParam1, 8)) || iParam0 == func_1064(iParam1, 9))
	{
		func_1055(iParam1, iParam0, &sParam2, 0, iParam3, bParam4);
		func_573(51, 0, 0, iParam1, sParam2, 0, -1, 0);
		func_575(51, 0, 0, 0, 0, -1, 0);
	}
}

void func_1066(int iParam0, int iParam1, bool bParam2)
{
	iVar0 = 1;
	if ((((iParam0 == func_1064(iParam1, 5) || iParam0 == func_1064(iParam1, 6)) || iParam0 == func_1064(iParam1, 7)) || iParam0 == func_1064(iParam1, 8)) || iParam0 == func_1064(iParam1, 9))
	{
		if (func_1055(iParam1, iParam0, &iVar0, 0, 0, 0))
		{
			func_573(51, iParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				func_575(51, 0, 0, iVar0, func_1013(iParam1, 20), 1, 0);
			}
		}
		else
		{
			func_573(51, iParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				func_575(51, 0, 0, iVar0, func_1013(iParam1, 20), 1, 0);
			}
		}
	}
}

bool func_1067()
{
	if (func_190((*Global_1347702)[37]->f_15) && Global_1392388->f_7)
	{
		return true;
	}
	return false;
}

void func_1068(int iParam0)
{
	_0x3ea62e56f386c997(iParam0, 1);
}

void func_1069(int iParam0)
{
	if (!func_1559(iParam0))
	{
		_0x3ea62e56f386c997(iParam0, 1);
	}
}

void func_1070(int iParam0)
{
	_0x398fab9c96a81924(iParam0, 1);
}

void func_1071(int iParam0, int iParam1, var uParam2)
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

bool func_1072(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	func_1560();
	if (iParam2 == 39)
	{
		Var0 = { func_668(iParam0, 1, 0) };
		iParam2 = func_656(func_669(Var0.f_4), 1);
	}
	if (iParam2 < 0 || iParam2 >= 39)
	{
		return false;
	}
	if (func_577(iParam0, 866047851) && func_1545(&(Global_1946804->f_1378)) >= 2)
	{
		return false;
	}
	if ((func_1074(32768) && iParam2 == 10) && iParam0 != &Global_1946804->f_57[iParam2])
	{
		func_1561(func_1142(iParam2, 1));
	}
	iVar5 = 0;
	if (bParam4)
	{
		iVar5 = 3;
	}
	func_1562(iParam2);
	func_1563(iParam2, iVar5);
	if (&Global_1946804->f_1378.f_1[iParam2] != &Global_1946804->f_57[iParam2] && Global_1946804->f_57[iParam2]->f_1 > 1)
	{
		func_1123(Global_1946804->f_1378.f_1[iParam2], 4, 6);
		func_1123(Global_1946804->f_1497.f_1[iParam2], 4, 6);
	}
	func_1129(&(Global_1946804->f_1378), iParam0, iParam2, bParam4, 1);
	if (iParam1 == 0)
	{
		iParam1 = Global_1946804->f_1378.f_1[iParam2]->f_1;
	}
	Global_1946804->f_1378.f_1[iParam2] = iParam0;
	Global_1946804->f_1378.f_1[iParam2]->f_1 = func_1564(iParam0, iParam2, iParam1, func_22() != -1);
	if (bParam4)
	{
		func_1565(&(Global_1946804->f_1378), 1, 3);
	}
	else
	{
		func_1565(&(Global_1946804->f_1378), 1, 0);
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
				func_1314(func_1142(&(Global_1946804->f_2589.f_2[iVar6]), 1), 1, 6);
			}
			iVar6++;
		}
	}
	return true;
}

void func_1073(bool bParam0, bool bParam1, bool bParam2)
{
	func_1566(&(Global_1946804->f_2589), bParam0, bParam1, bParam2);
}

bool func_1074(int iParam0)
{
	return (Global_1946804 && iParam0) != 0;
}

void func_1075()
{
	func_1567(&(Global_1946804->f_2776));
	func_1568(32768);
	func_1314(1108822547, 8, 6);
}

int func_1076(int iParam0)
{
	iVar0 = 0;
	iVar1 = func_656(iParam0, 1);
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

void func_1077(int iParam0)
{
	if (func_1569(iParam0, 4096))
	{
		Global_1946804->f_858++;
	}
	if (Global_1946804->f_858 <= 0)
	{
		return;
	}
	Var0.f_1 = iParam0;
	Var0 = 34;
	func_1570(Var0);
}

void func_1078(int iParam0, int iParam1, int iParam2)
{
	Var0.f_1 = iParam2;
	Var0 = iParam0;
	Var0.f_2 = iParam1;
	func_1570(Var0);
}

bool func_1079(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	*iParam1 = _0x80d78bdc9d88ef07(func_931(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_1080(var uParam0, int iParam1, int iParam2, int iParam3)
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

int func_1081(int iParam0)
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

float func_1082()
{
	if (func_1571())
	{
		return 0f;
	}
	if (_0x200373a8df081f22(Global_35, 2) || Global_40.f_11095.f_46 == 0)
	{
		return func_1572(2);
	}
	if (Global_1347477->f_119)
	{
		return func_1572(2);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_46) * 60f);
	fVar0 = (fVar0 / to_float(7));
	fVar1 = func_1573();
	fVar2 = func_1574();
	fVar3 = func_1575();
	fVar4 = func_1576();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_50)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_1577()));
	fVar7 = (func_1572(2) - fVar6);
	iVar8 = round(((fVar0 / 60f) * to_float(7)));
	fVar9 = (100f * (to_float(90) / to_float(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_1578(3, round((to_float(iVar8) * fVar10)), 0);
	func_1579(3, fVar9, fVar9 > 100f);
	return func_1580(fVar7, -100f, 100f);
}

float func_1083()
{
	if (func_1571())
	{
		return 0f;
	}
	if (_0x200373a8df081f22(Global_35, 1) || Global_40.f_11095.f_47 == 0)
	{
		return func_1572(1);
	}
	if (Global_1347477->f_119)
	{
		return func_1572(1);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_47) * 60f);
	fVar0 = (fVar0 / to_float(7));
	fVar1 = func_1573();
	fVar2 = func_1574();
	fVar3 = func_1575();
	fVar4 = func_1576();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_51)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_1577()));
	fVar7 = (func_1572(1) - fVar6);
	iVar8 = round(((fVar0 / 60f) * to_float(7)));
	fVar9 = (100f * (to_float(90) / to_float(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_1578(2, round((to_float(iVar8) * fVar10)), 0);
	func_1579(2, fVar9, fVar9 > 100f);
	return func_1580(fVar7, -100f, 100f);
}

float func_1084()
{
	if (func_1571())
	{
		return 0f;
	}
	if (_0x200373a8df081f22(Global_35, 0) || Global_40.f_11095.f_48 == 0)
	{
		return func_1572(0);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_48) * 60f);
	if (func_1581())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_54 + 1f));
	}
	else if (func_1582())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_53 + 1f));
	}
	else if (Global_1347477->f_119)
	{
		return func_1572(0);
	}
	if (Global_40.f_11095.f_43)
	{
		fVar0 = (10f * 60f);
	}
	fVar0 = (fVar0 / to_float(7));
	fVar1 = func_1573();
	fVar2 = func_1574();
	fVar3 = func_1575();
	fVar4 = func_1576();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_49)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_1577()));
	fVar7 = (func_1572(0) - fVar6);
	iVar8 = round(((fVar0 / 60f) * to_float(7)));
	fVar9 = (100f * (to_float(90) / to_float(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_1578(1, round((to_float(iVar8) * fVar10)), 0);
	func_1579(1, fVar9, fVar9 > 100f);
	if (fVar7 <= -100f && _get_player_health(player_id()) < 1f)
	{
		return func_1572(0);
	}
	return func_1580(fVar7, -100f, 100f);
}

bool func_1085(int iParam0, int iParam1)
{
	return (Global_1905944->f_22[iParam0]->f_2 && iParam1) != 0;
}

bool func_1086(int iParam0)
{
	return _0xf83d3dda4d3c8169(iParam0) > 0;
}

bool func_1087(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5)
{
	if (!func_557(iParam0, 0))
	{
	}
	if (!_0xb881ca836cc4b6d4(uParam2))
	{
		return false;
	}
	if (func_1006(iParam0, uParam2, iParam3, bParam5, 0))
	{
		return false;
	}
	if (!func_585(0))
	{
		return false;
	}
	if (!_0xcb5d11f9508a928d(func_931(0), uParam1, uParam2, iParam0, uParam2->f_4, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

int func_1088(int iParam0, bool bParam1)
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
				return func_1583();
			}
			break;
	}
	return 0;
}

int func_1089(int iParam0)
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

bool func_1090(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 95)
	{
		return false;
	}
	return true;
}

void func_1091(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_1090(iParam0))
	{
		return;
	}
	if (func_1584(iParam0))
	{
		return;
	}
	if (!func_1585(iParam0))
	{
		func_1586(iParam0, 1, 0);
	}
	iVar0 = func_1587(iParam0);
	if (iVar0 != 0 && !(iParam0 >= 0 && iParam0 <= 5))
	{
		if (func_1588(iParam0, 512))
		{
			func_667(30, iVar0, 0, 0, 0);
		}
	}
	if ((!func_213() && !bParam1) && !func_196(0, 0, 1))
	{
		func_695(_create_var_string(10, "OUT_JOURN_DONE", _create_var_string(0, iVar0)), 10000, 0, 0, 0, 1);
	}
	func_1589(iParam0, 6);
	if (bParam2)
	{
		if (!func_196(0, 0, 1))
		{
			func_366(1, 4);
		}
	}
}

bool func_1092(int iParam0, bool bParam1)
{
	return func_1088(iParam0, 0) < func_1590(iParam0, bParam1);
}

bool func_1093(int iParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_581(iVar1) == iParam0)
		{
			*iParam1 = iVar1;
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_1094(int iParam0)
{
	if (iParam0 == -358215195)
	{
		return false;
	}
	return &Global_1946804->f_1497.f_1[func_656(iParam0, 1)] != &Global_1946804->f_57[func_656(iParam0, 1)];
}

void func_1095(int iParam0, int iParam1)
{
	if (func_577(iParam1, 130796156))
	{
		func_1591(iParam1, 0);
	}
	else if (func_577(iParam1, 930141731))
	{
		func_1591(iParam1, 1);
		func_1592(iParam0);
	}
}

void func_1096(var uParam0, int iParam1)
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

int func_1097(int iParam0, var uParam1, var uParam2, int iParam3)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!_cashinventory_is_session_ready())
	{
		return 0;
	}
	func_1593(uParam1);
	if (!_0x77b299e8799b1332(&uVar0, &(uParam1->f_1), uParam2))
	{
		return 0;
	}
	Var1.f_2.f_1 = 10;
	Var1 = iParam3;
	Var1.f_2 = { *uParam1 };
	func_1594(uParam2, iParam0, Var1);
	return 1;
}

int func_1098(int iParam0)
{
	return &(Global_1900073->f_159[iParam0]);
}

char* func_1099(int iParam0)
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

int func_1100(int iParam0)
{
	if (!func_1595(iParam0, &uVar0, 805880880, 0, 0, -401018458))
	{
		return -1102349958;
	}
	return uVar0;
}

bool func_1101()
{
	return !&Global_1911774;
}

void func_1102(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

char* func_1103(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

bool func_1104(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

char* func_1105(char* sParam0, int iParam1)
{
	return _create_var_string(42, "COLOR_STRING", _create_color_string(iParam1), sParam0);
}

bool func_1106(int iParam0, int iParam1, bool bParam2)
{
	if ((bParam2 && func_22() == 0) && !_unlock_is_visible(iParam0))
	{
		return false;
	}
	if (!func_1596(iParam0, iParam1, &uVar0, &iVar11) || iVar11 < 1)
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

bool func_1107(int iParam0, int iParam1)
{
	if (func_22() != -1)
	{
		return false;
	}
	if (func_1596(iParam0, iParam1, &uVar2, &iVar1))
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

void func_1108(bool bParam0)
{
	if (bParam0)
	{
		func_317(2032023096, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_317(-615217896, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		func_317(655868243, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		func_1109();
		_unlock_set_unlocked(645322743, true);
	}
	else
	{
		func_1597(2032023096);
		func_320(-615217896);
		func_652(655868243, 1, 1, -142743235, 1);
		func_1599(146323340, func_1598());
		Var0 = { func_1366() };
		if (func_1600(&Var0) == -1387633835)
		{
			func_1601(&Var0);
			func_1602(Var0);
		}
		iVar7 = -868094182;
		iVar8 = 1074477367;
		iVar9 = 1;
		func_1603(&iVar7, &iVar8, &iVar9);
		iVar6 = 0;
		while (iVar6 < 7)
		{
			if (func_1359(iVar6) == 2010625508)
			{
				func_1604(iVar6, iVar7);
				func_1605(iVar6, iVar8);
				func_1606(iVar6, iVar9);
				func_1607(iVar6, 0);
				if (func_1608(iVar6))
				{
					func_1609(iVar6);
				}
				iVar10 = func_1610(iVar8);
				func_1611(iVar6, iVar10);
			}
			iVar6++;
		}
		_unlock_set_unlocked(645322743, false);
	}
}

int func_1109()
{
	if (!func_1612(-1898635967, func_1598(), 1))
	{
		return 0;
	}
	if (func_337())
	{
		if (!func_1612(146323340, func_1598(), 0))
		{
			return 0;
		}
	}
	return 1;
}

void func_1110()
{
	func_331(34411519);
	func_331(834124286);
	func_331(-570967010);
}

void func_1111(bool bParam0)
{
	if (bParam0)
	{
		if (_unlock_is_unlocked(-1426541042))
		{
			return;
		}
		func_317(-1080874779, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_317(-223790555, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_317(1566032147, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_317(891311852, 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_317(-1353737667, 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_317(-330313895, 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_317(-2051332199, 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_317(1237770824, 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_317(-1795542128, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_317(-1757588258, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_317(-1921080134, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		_unlock_set_unlocked(-1426541042, true);
	}
	else
	{
		if (!_unlock_is_unlocked(-1426541042))
		{
			return;
		}
		func_652(-1080874779, 3, 1, -142743235, 1);
		func_652(-223790555, 3, 1, -142743235, 1);
		func_652(1566032147, 3, 1, -142743235, 1);
		func_652(891311852, 5, 1, -142743235, 1);
		func_652(-1353737667, 5, 1, -142743235, 1);
		func_652(-330313895, 5, 1, -142743235, 1);
		func_652(-2051332199, 5, 1, -142743235, 1);
		func_652(1237770824, 5, 1, -142743235, 1);
		func_652(-1795542128, 3, 1, -142743235, 1);
		func_652(-1757588258, 3, 1, -142743235, 1);
		func_652(-1921080134, 10, 1, -142743235, 1);
		iVar1 = -868094182;
		iVar2 = 1074477367;
		iVar3 = 1;
		func_1603(&iVar1, &iVar2, &iVar3);
		iVar0 = 0;
		while (iVar0 < 7)
		{
			if (func_1359(iVar0) == 153881023)
			{
				func_1604(iVar0, iVar1);
				func_1605(iVar0, iVar2);
				func_1606(iVar0, iVar3);
				func_1607(iVar0, 0);
				if (func_1608(iVar0))
				{
					func_1609(iVar0);
				}
				iVar4 = func_1610(iVar2);
				func_1611(iVar0, iVar4);
			}
			iVar0++;
		}
		func_1109();
		_unlock_set_unlocked(-1426541042, false);
	}
}

void func_1112(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4)
{
	func_1613(iParam0);
	if (bParam3)
	{
		func_694(iParam0, sParam1, iParam2);
	}
}

bool func_1113(int iParam0)
{
	return (Global_40.f_12004.f_10 && iParam0) != 0;
}

void func_1114(int iParam0)
{
	Global_40.f_12004.f_10 = (Global_40.f_12004.f_10 - (Global_40.f_12004.f_10 && iParam0));
}

struct<14> func_1115()
{
	Var3.f_9 = -1591664384;
	Var17.f_9 = -1591664384;
	if (func_1079("ALL WEAPONS", &iVar0, &iVar1, -1591664384, 0))
	{
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (!func_1080(&Var3, iVar2, iVar0, iVar1))
			{
				Jump @136; //curOff = 80
			}
			else if (Var3.f_4 != 127400949)
			{
			}
			else if (func_1030(Var3.f_4, &Var17, Var3.f_9))
			{
			}
			else
			{
				func_1081(iVar0);
				return Var3;
			}
			iVar2++;
		}
		func_1081(iVar0);
	}
	Var39.f_9 = -1591664384;
	return Var39;
}

void func_1116(int iParam0, struct<4> Param1, int iParam5)
{
	Var0 = { Param1 };
	Var0.f_4 = iParam5;
	Var5.f_9 = -1591664384;
	if (func_1614(Param1, iParam5, &Var5, 0))
	{
		func_1032(Var5.f_4, &Var5, &Var0, -1, -142743235, 1, 0);
	}
	func_1087(iParam0, &Var19, &Var0, 1, 752097756, 0);
	func_1615(Var19, 1);
}

bool func_1117(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (!is_weapon_valid(iParam0))
	{
		return false;
	}
	Var0 = { func_1503(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam2)
	{
		func_1504(&Var0, func_1137(0));
	}
	if (!func_1505(&Var0, &iVar14, &iVar15, 0))
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
			if (!func_1080(&Var16, iVar35, iVar14, iVar15))
			{
			}
			else
			{
				Var30.f_4 = Var16.f_9;
				Var30 = { Var16.f_5 };
				if (func_1032(iParam0, &Var16, &Var30, 1, iParam3, 0, 0))
				{
					iVar36++;
				}
			}
			iVar35++;
		}
	}
	func_1081(iVar14);
	if (iVar36 < iParam1)
	{
	}
	return true;
}

bool func_1118(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (!func_557(iParam0, 0))
	{
		return false;
	}
	if (iParam1 < 1)
	{
		return false;
	}
	Var0 = { func_668(iParam0, bParam4, 1) };
	if (Var0.f_4 == 1084182731)
	{
		return func_1616(iParam0, iParam1, iParam2, bParam3, bParam4);
	}
	Var5 = { func_1031(iParam0, Var0, Var0.f_4, bParam4) };
	return func_1032(iParam0, &Var5, &Var0, iParam1, iParam2, bParam3, bParam4);
}

void func_1119(int iParam0, int iParam1)
{
	if (!Global_1901328->f_94)
	{
		if (func_577(iParam0, 606799272))
		{
			func_1617(iParam0, iParam1);
		}
		if (func_577(iParam0, -1112814642) && func_577(iParam0, -1697809989))
		{
			func_605(iParam0, iParam1, 1, 0);
		}
	}
}

int func_1120(int iParam0, var uParam1)
{
	iVar1 = iParam0;
	if (!func_1618(iVar1, &iVar0))
	{
		return 0;
	}
	if (Global_1946804->f_2657.f_19 == 1)
	{
		Global_1946804->f_2657.f_19 = 0;
		*uParam1 = 0;
		if (func_581(iParam0) != -999503751)
		{
			func_1619(&(Global_1946804->f_2657.f_26), 0, Global_1946804->f_2657.f_19);
		}
		Global_1946804->f_2657[0] = 0;
		return 1;
	}
	Global_1946804->f_2657.f_19 = (Global_1946804->f_2657.f_19 - 1);
	*uParam1 = (*uParam1 - 1);
	Global_1946804->f_2657[iVar0] = &Global_1946804->f_2657[Global_1946804->f_2657.f_19];
	Global_1946804->f_2657[Global_1946804->f_2657.f_19] = 0;
	if (func_581(iParam0) != -999503751)
	{
		func_1619(&(Global_1946804->f_2657.f_26), iVar0, Global_1946804->f_2657.f_19);
	}
	func_1620(iParam0, 1);
	return 1;
}

void func_1121()
{
	if (func_22() == -1)
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

void func_1122(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		func_1621(0);
	}
	if (bParam0)
	{
		func_1134(8);
		func_1134(512);
	}
	else
	{
		func_1134(8);
		func_1134(16);
	}
}

void func_1123(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

int func_1124(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = func_658();
	}
	if (func_22() == -1)
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

int func_1125(int iParam0)
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

void func_1126(var uParam0, int iParam1, bool bParam2)
{
	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (func_1622(uParam0->f_1[iVar0], 2))
		{
			iVar7 = func_1142(iVar0, 1);
			if (func_1311(iVar0, iParam1))
			{
				vVar4 = { func_660(iVar0, -1) };
				if ((vVar4.x != &Global_1946804->f_57[iVar0] && vVar4.x != 0) && (&uParam0->f_1[iVar0] != vVar4.x || uParam0->f_1[iVar0]->f_1 != vVar4.y))
				{
					*uParam0->f_1[iVar0] = { vVar4 };
				}
				if (func_1310(iVar7, 4))
				{
					func_1314(iVar7, 4, 6);
				}
			}
			else
			{
				func_1313(iVar7, 4, 6);
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

bool func_1127(int iParam0)
{
	Global_1946804->f_964.f_2 = 0;
	if (func_22() == -1)
	{
		iVar0 = -380731322;
	}
	else
	{
		iVar0 = 1226838104;
	}
	func_1623(&(Global_1946804->f_964), iVar0, -367421157, 1409451727, 1, iParam0);
	_0x91ded5dd64bb2691(&(Global_1946804->f_964));
	if (!_0x44b3a36933ac009c(&uVar1, &(Global_1946804->f_964), 1409451727))
	{
		return false;
	}
	return true;
}

bool func_1128(int iParam0, int iParam1, int iParam2)
{
	*iParam2 = 1155669136;
	return true;
}

void func_1129(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	iVar1 = 12;
	iVar2 = func_581(&(uParam0->f_1[iParam2]));
	iVar3 = 0;
	if (bParam3)
	{
		iVar3 = 3;
	}
	if (func_1311(iParam2, 65536) && &uParam0->f_1[iVar1] == -452402570)
	{
		uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
		uParam0->f_1[iVar1]->f_1 = 0;
		if (bParam4)
		{
			func_1563(iVar1, iVar3);
		}
	}
	if (func_1094(-1586649372) && func_1311(iParam2, 524288))
	{
		iVar1 = 33;
		uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
		uParam0->f_1[iVar1]->f_1 = 0;
		if (bParam4)
		{
			func_1563(iVar1, iVar3);
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
						func_1563(iVar1, iVar3);
					}
				}
			}
			func_1624(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
			break;
		case 688587926:
			func_1624(uParam0, 0, (1 && bParam4), (1 && bParam4), bParam3);
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
						func_1563(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 525
				func_1624(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				iVar1 = 16;
				if (uParam0->f_1[iVar1]->f_1 == 1155669136)
				{
					uParam0->f_1[iVar1]->f_1 = -1539589426;
					if (bParam4)
					{
						func_1563(iVar1, iVar3);
					}
				}
				if (uParam0->f_1[iVar1]->f_1 == 1530758430)
				{
					uParam0->f_1[iVar1]->f_1 = 1334603721;
					if (bParam4)
					{
						func_1563(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 656
				func_1624(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				Jump @1415; //curOff = 691
				func_1624(uParam0, (1 && bParam4), (1 && bParam4), 0, bParam3);
				iVar1 = 22;
				if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1])
				{
					uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
					uParam0->f_1[iVar1]->f_1 = 0;
					if (bParam4)
					{
						func_1563(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 786
				func_1624(uParam0, (1 && bParam4), 0, 1, bParam3);
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
							func_1563(iVar1, iVar3);
						}
					}
					iVar1 = 38;
					if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1])
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_1563(iVar1, iVar3);
						}
					}
					iVar1 = 35;
					if (-923693316 == func_581(&(uParam0->f_1[iVar1])))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_1563(iVar1, iVar3);
						}
					}
				}
				else
				{
					iVar1 = 35;
					if ((func_1548(iParam1) && &uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1]) && -923693316 == func_581(&(uParam0->f_1[iVar1])))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_1563(iVar1, iVar3);
						}
					}
				}
				Jump @1415; //curOff = 1130
				iVar1 = 36;
				if (&uParam0->f_1[iParam2] != &Global_1946804->f_57[iParam2] && func_577(&(Global_1946804->f_1497.f_1[iVar1]), -1638171711))
				{
					uParam0->f_1[iParam2] = &Global_1946804->f_57[iParam2];
					uParam0->f_1[iParam2]->f_1 = 0;
					if (bParam4)
					{
						func_1563(iVar1, iVar3);
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
						func_1563(iVar1, iVar3);
					}
				}
				if (&uParam0->f_1[iParam2] != &Global_1946804->f_57[iParam2] && (func_1548(&(Global_1946804->f_1497.f_1[iVar1])) || func_577(&(Global_1946804->f_1497.f_1[iVar1]), -1638171711)))
				{
					uParam0->f_1[iParam2] = &Global_1946804->f_57[iParam2];
					uParam0->f_1[iParam2]->f_1 = 0;
					if (bParam4)
					{
						func_1563(iVar1, iVar3);
					}
				}
			}
			switch (func_581(iParam1))
			{
				case 81053684:
					iVar1 = 10;
					if (-525676072 == func_581(&(uParam0->f_1[iVar1])))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_1563(iVar1, iVar3);
						}
					}
					break;
				case -525676072:
					iVar1 = 12;
					if (81053684 == func_581(&(uParam0->f_1[iVar1])) || func_577(&(uParam0->f_1[iVar1]), 866047851))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_1563(iVar1, iVar3);
						}
					}
					break;
			}
			default:
				break;
	}
}

bool func_1130(int iParam0, int iParam1)
{
	if (func_22() != -1)
	{
		return is_bit_set(&(Global_36638.f_1444[iParam0]), iParam1);
	}
	return is_bit_set(&(Global_40.f_7832[iParam0]), iParam1);
}

bool func_1131(int iParam0)
{
	if (func_22() != -1)
	{
		if (func_1085(iParam0, 4))
		{
			return false;
		}
	}
	else if (func_1085(iParam0, 2))
	{
		return false;
	}
	return true;
}

bool func_1132(int iParam0)
{
	iVar1 = get_cloud_time_as_int();
	if (!func_1085(iParam0, 65536) && !func_1085(iParam0, 32768))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_7756)
	{
		if (Global_40.f_7756[iVar0]->f_2 == iParam0)
		{
			iVar3 = 3;
			if (func_1085(iParam0, 131072))
			{
				iVar3 = 2;
			}
			iVar2 = (&Global_40.f_7756[iVar0] - iVar1);
			if (Global_40.f_7756[iVar0]->f_1 >= iVar3)
			{
				return true;
			}
			if (iVar2 < 1800 && func_1085(iParam0, 32768))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_1133()
{
	return Global_1905944->f_5694;
}

void func_1134(int iParam0)
{
	Global_1946804 = (Global_1946804 || iParam0);
}

void func_1135(struct<4> Param0)
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
			if (func_1625(Param0))
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
			func_1626(Param0);
			*Global_1946804->f_668[Global_1946804->f_856] = { Param0 };
			Global_1946804->f_850++;
			Global_1946804->f_856 = (Global_1946804->f_856 + 1 % 25);
			func_1134(8);
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
			if (func_1625(Param0))
			{
				return;
			}
			func_1626(Param0);
			*Global_1946804->f_567[Global_1946804->f_851] = { Param0 };
			Global_1946804->f_851++;
			func_1134(8);
			break;
		case 30:
		case 31:
		case 32:
		case 33:
		case 35:
		case 36:
			func_1078(Param0, Param0.f_1, Param0.f_2);
			break;
	}
}

struct<4> func_1136(bool bParam0)
{
	return func_1031(1328661203, func_1627(), -1591664384, bParam0);
}

struct<4> func_1137(bool bParam0)
{
	iVar0 = func_931(bParam0);
	if (iVar0 == 2)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224215))
		{
			*Global_1224215 = { func_1031(923904168, func_1136(bParam0), -740156546, bParam0) };
		}
		return *Global_1224215;
	}
	else if (iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224223))
		{
			*Global_1224223 = { func_1031(923904168, func_1136(bParam0), -740156546, 0) };
		}
		return *Global_1224223;
	}
	return func_1031(923904168, func_1136(bParam0), -740156546, 0);
}

bool func_1138(int iParam0, bool bParam1)
{
	if (func_581(iParam0) == 1779021115)
	{
		return false;
	}
	if (_is_weapon_one_handed(iParam0))
	{
		if (bParam1)
		{
			return func_579(24);
		}
		else
		{
			return true;
		}
	}
	return false;
}

struct<4> func_1139(bool bParam0)
{
	iVar0 = func_931(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224219))
		{
			*Global_1224219 = { func_1031(271701509, func_1136(bParam0), 12999093, 0) };
		}
		return *Global_1224219;
	}
	return func_1031(271701509, func_1136(bParam0), 12999093, 0);
}

bool func_1140(int iParam0, int iParam1)
{
	if (iParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_581(iParam0);
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

bool func_1141(var uParam0, var uParam1, bool bParam2, int iParam3, var uParam4, bool bParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(&uParam0))
	{
		return false;
	}
	if (!_0x9700e8efc4ab9089(func_931(bParam5), &uParam0, uParam4, !bParam6))
	{
		return false;
	}
	return true;
}

int func_1142(int iParam0, int iParam1)
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

int func_1143(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_1144(int iParam0, int iParam1)
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

void func_1145(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 62914560);
	*iParam0 = (*iParam0 || shift_left(iParam1, 22));
}

void func_1146(int iParam0, int iParam1)
{
	iVar0 = func_676(*iParam0);
	iVar1 = func_675(*iParam0);
	if (iParam1 < 1 || iParam1 > func_681(iVar0, iVar1))
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4063232);
	*iParam0 = (*iParam0 || shift_left(iParam1, 17));
}

void func_1147(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 126976);
	*iParam0 = (*iParam0 || shift_left(iParam1, 12));
}

void func_1148(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4032);
	*iParam0 = (*iParam0 || shift_left(iParam1, 6));
}

void func_1149(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 63);
	*iParam0 = (*iParam0 || shift_left(iParam1, 0));
}

void func_1150(char* sParam0, char* sParam1, int iParam2)
{
	_0x74bcceb233ad95b2(-466562563, get_hash_key(sParam0));
	_0x74bcceb233ad95b2(1885309238, get_hash_key(sParam1));
	_0x74bcceb233ad95b2(-826961056, iParam2);
}

int func_1151(int iParam0)
{
	return floor(pow(2f, to_float(iParam0)));
}

int func_1152(int iParam0)
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

bool func_1153(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	bVar0 = false;
	if (func_22() == -1)
	{
		if (func_1000(iParam0))
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

int func_1154(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (!func_557(iParam0, 0))
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

int func_1155(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	func_1500(&iParam0);
	if (!func_557(iParam0, 0))
	{
		return 0;
	}
	if (!func_585(0))
	{
		bParam2 = true;
	}
	iVar0 = func_1004(iParam0, uParam1, bParam2, bParam3);
	if (iVar0 < 0)
	{
		return 2147483647;
	}
	if (bParam2)
	{
		iVar1 = func_1502(iParam0, *uParam1, uParam1->f_4, bParam3);
	}
	else
	{
		iVar1 = _0xe787f05dfc977bde(func_931(bParam3), iParam0, 0);
	}
	if (iVar0 > iVar1)
	{
		return (iVar0 - iVar1);
	}
	return 0;
}

int func_1156(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (func_577(iParam0, -5284486))
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
		if (func_1628(iParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
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
		iVar64 = func_638(iParam0, 862142561);
		if (iVar64 != 0)
		{
			Var50.f_8 = iVar64;
			iVar61 = _item_database_create_item_collection(&Var50, &iVar60, 1);
			if (iVar61 != -1)
			{
				iVar62 = 0;
				while (iVar62 < iVar60)
				{
					iVar63 = func_641(iVar62, iVar61);
					if (func_557(iVar63, 0) && iVar63 != iParam0)
					{
						if (bParam4)
						{
							iVar49 = (iVar49 + func_1156(iVar63, -915411861, 1, 0, 0));
						}
						else
						{
							Var35 = iVar63;
							iVar33 = _0x640f890c3e5a3ffd(1, &Var35, &iVar34);
							if (iVar33 != -1)
							{
								if (iVar34 == 0)
								{
									iVar49 = (iVar49 + func_1156(iVar63, -915411861, 1, 0, 0));
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
	if (!func_1628(iParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
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

bool func_1157(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return iParam0 <= func_1629(1);
}

void func_1158(int iParam0, char* sParam1)
{
	if (iParam0 != 18 && iParam0 != 7)
	{
		_uilog_add_total_take_entry(get_hash_key(func_1630(iParam0)), 1997120069, _create_var_string(10, "MISSION_COMPLETE_TAKE_COMP", _create_var_string(2, func_323(iParam0, 0))), _create_var_string(2, "MISSION_COMPLETE_TAKE_AMOUNT", sParam1), 601389479);
	}
	else
	{
		_uilog_add_total_take_entry(get_hash_key(func_1630(iParam0)), 1997120069, _create_var_string(10, "MISSION_COMPLETE_TAKE_COMP_NOS", _create_var_string(2, func_323(iParam0, 0))), _create_var_string(2, "MISSION_COMPLETE_TAKE_AMOUNT", sParam1), 601389479);
	}
}

var func_1159()
{
	return Global_40.f_4283.f_325;
}

bool func_1160(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (func_22() != -1)
	{
		return is_bit_set(&(Global_36638.f_1444[iVar1]), iVar2);
	}
	return is_bit_set(&(Global_40.f_7832[iVar1]), iVar2);
}

bool func_1161(int iParam0)
{
	return (iParam0 > 0 && iParam0 < 13);
}

void func_1162(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_3 = iParam1;
}

void func_1163(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_4 = iParam1;
}

void func_1164(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_12106[iParam0] = iParam1;
		return;
	}
	Global_1058888->f_498[iParam0] = iParam1;
}

void func_1165(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_12106[iParam0]->f_5 = iParam1;
		return;
	}
	Global_1058888->f_498[iParam0]->f_1 = iParam1;
}

int func_1166(bool bParam0, var uParam1)
{
	*bParam0 = 0;
	*uParam1 = 0;
	bVar0 = func_398();
	bVar1 = false;
	if (bVar0 && !func_1631(4))
	{
		bVar1 = true;
	}
	if ((bVar0 && func_1631(37)) && !func_1631(43))
	{
		*bParam0 = 0;
		*uParam1 = 0;
		return 0;
	}
	bVar2 = false;
	if ((bVar0 && func_1631(43)) && !func_1631(44))
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
		if (func_1360(0) == 1)
		{
			*bParam0 = 1;
		}
		if (func_1360(1) == 1)
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

int func_1167()
{
	return Global_40.f_1095.f_3054;
}

bool func_1168(int iParam0)
{
	iParam0 = func_265(iParam0);
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

bool func_1169(int iParam0, var uParam1)
{
	if (!func_1632(iParam0))
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

int func_1170()
{
	if (func_398())
	{
		if (!func_1631(3))
		{
			return func_1633(43);
		}
		if (func_1631(38) && !func_1631(43))
		{
			return func_1634(8);
		}
	}
	return 0;
}

bool func_1171(int iParam0)
{
	if (!func_246(iParam0))
	{
		return false;
	}
	return (((*Global_1888801)[iParam0]->f_20 == 1 || (*Global_1888801)[iParam0]->f_20 == 2) && !func_1635(iParam0));
}

Vector3 func_1172(int iParam0, int iParam1)
{
	func_1169(15, &Var0);
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

int func_1173(int iParam0, int iParam1)
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
	iVar0 = func_1636(Global_1310720->f_21, 2);
	if (iVar0 == -1)
	{
		return 0;
	}
	func_1169(15, &Var1);
	Var1.f_2 = -1999103282;
	Var1.f_3 = iParam0;
	Var1.f_4 = iParam1;
	if (_datafile_get_data_node_index(&(Var1.f_1), &Var1))
	{
		Var1.f_2 = 383290544;
		_datafile_get_hash(&iVar6, &Var1);
		if (func_1637(iVar0) == iVar6)
		{
			return 1;
		}
	}
	return 0;
}

bool func_1174(int iParam0, bool bParam1, int iParam2)
{
	iVar0 = func_1638(iParam0);
	if (func_467(373691918) && Global_1310720->f_12)
	{
		return iVar0 == 4;
	}
	if (iParam2 != -1)
	{
		return iVar0 == iParam2;
	}
	return (bParam1 || iVar0 == -1);
}

bool func_1175(int iParam0)
{
	if (!func_1169(15, &Var0))
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

bool func_1176(vector3 vParam0, int iParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	if (bParam5)
	{
		if (func_1639(iParam3, iParam4))
		{
			return false;
		}
	}
	if (!bParam7 || func_1640(5))
	{
		if (func_1641(iParam3, iParam4))
		{
			return false;
		}
	}
	iVar0 = func_1353(vParam0);
	if (bParam6)
	{
		iVar1 = func_371(vParam0, 1);
		if (func_118(iVar1) || func_1642(iVar0, 1))
		{
			return false;
		}
	}
	if (!func_1643(iParam3, iParam4))
	{
		return false;
	}
	if (!func_1644())
	{
		if (func_1645(iParam3, iParam4))
		{
			return false;
		}
	}
	if (!_does_volume_exist(bParam8))
	{
		if (!func_1646(iVar0))
		{
			return false;
		}
		if (Global_1310720->f_23 >= 3)
		{
			if (Global_1310720->f_21 != -1)
			{
				if (Global_1310720->f_21 == func_371(vParam0, 0))
				{
					return false;
				}
			}
		}
	}
	if (!func_1647(iParam3, iParam4))
	{
		return false;
	}
	if (func_1648(0) == 3)
	{
		if (((vParam0.x > -1480f && vParam0.x < -1475f) && vParam0.y > -359f) && vParam0.y < -354f)
		{
			return false;
		}
	}
	if (!func_1649(65536, 2))
	{
		if (((vParam0.x > 1673f && vParam0.x < 1676f) && vParam0.y > -1888f) && vParam0.y < -1885f)
		{
			return false;
		}
	}
	if (func_398())
	{
		if (_does_volume_exist(bParam8))
		{
			if (!_0xf256a75210c5c0eb(bParam8, vParam0))
			{
				return false;
			}
		}
		if (func_1650(vParam0, bParam10) || func_1651(vParam0, bParam10))
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

int func_1177(vector3 vParam0)
{
	iVar0 = func_1652(vParam0, 0f, 0f, 0, 2);
	return func_1652(vParam0, (*Global_1894052)[iVar0]->f_1, (*Global_1894052)[iVar0]->f_2, Global_1894052[iVar0], 4);
}

void func_1178(int iParam0)
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

char* func_1179(int iParam0)
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
	return func_1322(iVar0);
}

char* func_1180(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return "";
	}
	iVar0 = get_entity_model(iParam0);
	return func_1653(iVar0);
}

char* func_1181(int iParam0)
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

void func_1182(char[4] cParam0, int iParam1)
{
	iVar0 = func_134(iParam1);
	if (!func_1428(iVar0))
	{
		return;
	}
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 <= 7)
	{
		(*cParam0->f_1[iVar0])[iVar1] = 57601;
		clear_bit(&(cParam0->f_1[iVar0]->f_17), iVar1);
		iVar1++;
	}
}

void func_1183(char[4] cParam0, int iParam1, int iParam2)
{
	iVar0 = func_134(iParam1);
	if (func_1428(iVar0))
	{
		cParam0->f_1[iVar0]->f_9 = iParam2;
	}
}

void func_1184(int iParam0, int iParam1, float fParam2)
{
	if (*iParam1 == 0)
	{
		if (iParam0 == iLocal_74)
		{
			vVar0 = { func_222(0, 0) };
		}
		else if (iParam0 == iLocal_75)
		{
			vVar0 = { func_222(8, 0) };
		}
		else if (iParam0 == iLocal_76)
		{
			vVar0 = { func_222(9, 0) };
		}
		else if (iParam0 == iLocal_77)
		{
			vVar0 = { func_222(7, 0) };
		}
		else if (iParam0 == iLocal_78)
		{
			vVar0 = { func_222(1, 0) };
		}
		else if (iParam0 == iLocal_79)
		{
			vVar0 = { func_222(2, 0) };
		}
		else if (iParam0 == iLocal_80)
		{
			vVar0 = { func_222(3, 0) };
		}
		if (!is_entity_dead(Global_35))
		{
			vVar4 = { vVar0 };
			clear_ped_wetness(Global_35);
			clear_ped_blood_damage(Global_35);
			_set_ped_crouch_movement(Global_35, false, 0, false);
			set_ped_using_action_mode(Global_35, false, -1, 0);
			if (iParam0 != iLocal_74)
			{
				func_133(vVar4, fParam2, 1, 0, 0, 0, 0);
				stop_fire_in_range(vVar4, fParam2);
				remove_decals_in_range(vVar4, fParam2);
				remove_particle_fx_in_range(vVar4, fParam2);
			}
			_0x9851de7aec10b4e1(vVar4, fParam2, 1, 0);
			set_current_ped_weapon(Global_35, -1569615261, true, 0, false, false);
			_set_entity_health(Global_35, get_ped_max_health(Global_35), 0);
		}
		*iParam1 = 1;
	}
}

void func_1185(char[4] cParam0)
{
	if (func_326((*Global_1835011)[51]->f_1, 1))
	{
		func_1270(cParam0, "1-SonInJail-Normal");
		func_1270(cParam0, "1-SonInJail-Multi");
		func_1654(cParam0, "1-SonInJail-Multi");
	}
	else
	{
		func_1270(cParam0, "2-SonNotInJail-Normal");
		func_1270(cParam0, "2-SonNotInJail-Multi");
		func_1654(cParam0, "2-SonNotInJail-Multi");
	}
}

struct<4> func_1186(int iParam0, int iParam1)
{
	return func_1655(iParam0, iParam1);
}

void func_1187(int iParam0, struct<4> Param1, int iParam5, float fParam6)
{
	func_768(iParam0, Param1, Param1.f_3, iParam5, fParam6);
}

void func_1188(char[4] cParam0, char* sParam1, float fParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6, int iParam7)
{
	sVar0 = func_1452(iParam7, sParam1, sParam3, sParam4, sParam5, sParam6);
	if (get_hash_key(sParam1) != cParam0->f_5302)
	{
		_uilog_set_cached_objective(sVar0);
		cParam0->f_5302 = get_hash_key(sParam1);
		_uilog_add_or_update_objective(1, func_87(cParam0), get_hash_key(sParam1), sParam1, fParam2 >= 0.9f, false, false);
	}
	func_142(cParam0, func_35(cParam0), 33554432);
}

int func_1189(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
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

int func_1190(int iParam0, int iParam1, bool bParam2, float fParam3, int iParam4)
{
	if (!is_entity_dead(iParam0))
	{
		if (!is_entity_dead(iParam1))
		{
			if (!is_ped_on_mount(iParam0) && !does_entity_exist(_get_rider_of_mount(iParam1, false)))
			{
				set_entity_invincible(iParam1, bParam2);
				if (get_script_task_status(iParam0, 1868526510, true) != 1)
				{
					task_mount_animal(iParam0, iParam1, iParam4, -1, fParam3, 1, 0, 0);
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_1191(int iParam0)
{
	iLocal_2209 = 0;
	if ((iParam0 == iLocal_74 || iParam0 == iLocal_75) || iParam0 == iLocal_76)
	{
		set_bit(&iLocal_2209, 1);
		clear_player_has_damaged_at_least_one_non_animal_ped(get_player_index());
		set_bit(&iLocal_2209, 0);
	}
	else if (iParam0 == iLocal_77 || iParam0 == iLocal_78)
	{
		set_bit(&iLocal_2209, 0);
	}
	else if (iParam0 == iLocal_79)
	{
		set_bit(&iLocal_2209, 0);
	}
	else if (iParam0 == iLocal_80)
	{
	}
}

void func_1192(int iParam0)
{
	iVar1 = _0x0139637a3bff8b6d(iParam0, &iVar0);
	if (!_0x0772f87d7b07719a(player_id(), iVar0, iVar1))
	{
		_0x946d46cd6dfb9742(player_id(), iVar0, iVar1);
	}
}

void func_1193(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (!does_group_exist(*uParam0))
	{
		*uParam0 = create_group(2);
	}
	if (does_group_exist(*uParam0))
	{
		set_group_formation(*uParam0, iParam3);
		if (iParam3 == 5)
		{
			add_custom_formation_location(*uParam0, 0f, -6.5f, 0f, 0);
			add_custom_formation_location(*uParam0, 0f, -12f, 0f, 1);
		}
		if (!func_165(*iParam1, 0))
		{
			return;
		}
		set_ped_config_flag(*iParam1, 279, true);
		if (iParam2 == 0)
		{
			if (*iParam1 == Global_35)
			{
				func_1656(*uParam0);
			}
			else
			{
				set_ped_as_group_member(*iParam1, *uParam0);
				set_ped_config_flag(*iParam1, 280, true);
			}
		}
		else if (!_0x878b68960c1c2a35(*iParam1, *uParam0))
		{
			if (is_ped_in_group(*iParam1))
			{
				set_ped_config_flag(*iParam1, 279, false);
				remove_ped_from_group(*iParam1);
			}
			set_ped_as_group_leader(*iParam1, *uParam0, false);
		}
	}
}

void func_1194(int iParam0, int iParam1, int iParam2)
{
	if (!does_group_exist(iParam0) || !func_165(*iParam1, 0))
	{
		return;
	}
	if (is_ped_group_member(*iParam1, iParam0, 0))
	{
		return;
	}
	if (is_ped_in_group(*iParam1) && iParam2 == 1)
	{
		set_ped_config_flag(*iParam1, 279, false);
		remove_ped_from_group(*iParam1);
	}
	if (*iParam1 == Global_35)
	{
		func_1656(iParam0);
	}
	else
	{
		set_ped_config_flag(*iParam1, 279, true);
		set_ped_as_group_member(*iParam1, iParam0);
		set_ped_config_flag(*iParam1, 280, true);
	}
}

void func_1195(var uParam0, int iParam1)
{
	uParam0->f_9 = 0;
	uParam0->f_5 = uParam0->f_4;
	uParam0->f_4 = uParam0->f_3;
	uParam0->f_3 = uParam0->f_2;
	uParam0->f_2 = iParam1;
	uParam0->f_6 = 103;
	func_450(&(uParam0->f_60));
	func_450(&(uParam0->f_63));
}

void func_1196(char[4] cParam0)
{
	switch (func_1657(cParam0))
	{
		case 0:
			if (!func_1222(Global_35))
			{
				_0xc71d07c96946e263(get_player_index(), iVar344);
			}
			if (func_1251("NTV1_SETOFF") || func_1257(cParam0, "NTV1_SETOFF", 0, 0, 0))
			{
				func_1256("NTV1_SETOFF", 1);
				if (!is_ped_on_mount(Global_35))
				{
					_0xc71d07c96946e263(get_player_index(), iVar344);
					func_1188(cParam0, "NTV1_O_MNT", -1082130432, 0, 0, -1, -1, 0);
					if (!func_1658(7))
					{
						func_1659(7);
					}
				}
				else
				{
					func_1188(cParam0, "NTV1_O_FRF", -1082130432, 0, 0, -1, -1, 0);
				}
				func_137(cParam0, 1);
			}
			break;
		case 1:
			if (!func_1222(Global_35))
			{
				_0xc71d07c96946e263(get_player_index(), iVar344);
			}
			else if (is_ped_on_mount(Global_35))
			{
				func_1660(&iLocal_347);
				func_1188(cParam0, "NTV1_O_FRF", -1082130432, 0, 0, -1, -1, 0);
				func_1255(iVar344, -401963276, 1);
				func_1221(&iLocal_349);
				func_137(cParam0, 2);
			}
			break;
		case 2:
			if (!is_ped_on_mount(Global_35))
			{
				_0xc71d07c96946e263(get_player_index(), iVar344);
				func_1661(&iLocal_349);
				func_137(cParam0, 0);
			}
			else if (func_1662(&iLocal_349))
			{
				func_1188(cParam0, "NTV1_O_FRF", -1082130432, 0, 0, -1, -1, 0);
				func_137(cParam0, 3);
			}
			break;
		case 3:
			if (!func_165(iVar346, 0) || !is_waypoint_playback_going_on_for_ped(iVar346, 0))
			{
				return;
			}
			if ((((get_ped_waypoint_progress(iVar346) > 4 && func_1290(&uVar0)) && !func_1250("NTV1_MONNEWS")) && !func_1251("NTV1_BANDANA")) && func_1257(cParam0, "NTV1_BANDANA", 0, 0, 0))
			{
				func_1233(iVar346, &(Local_464.f_68), 1500, Global_35);
				func_1256("NTV1_BANDANA", 1);
			}
			else if ((get_ped_waypoint_progress(iVar346) > 6 && !func_1251("NTV1_MONNEWS")) && func_1257(cParam0, "NTV1_MONNEWS", 0, 0, 0))
			{
				func_1233(iVar346, &(Local_464.f_68), 4500, iVar348);
				set_ped_can_use_auto_conversation_lookat(iVar346, true);
				set_ped_can_use_auto_conversation_lookat(iVar348, true);
				set_ped_can_use_auto_conversation_lookat(Global_35, true);
				func_1256("NTV1_MONNEWS", 1);
			}
			if (((((get_ped_waypoint_progress(iVar346) > 92 && get_ped_waypoint_progress(iVar346) < 114) && func_1212(cParam0, 20)) && func_1631(56)) && !func_1251("NTV1_TRN3_BRIGE")) && func_1257(cParam0, "NTV1_TRN3_BRIGE", 0, 0, 0))
			{
				func_1233(iVar346, &(Local_464.f_68), 1500, Global_35);
				func_1256("NTV1_TRN3_BRIGE", 1);
			}
			else if (((get_ped_waypoint_progress(iVar346) > 100 && !func_1251("NTV1_RCONTINUE")) && func_1212(cParam0, 21)) && func_1257(cParam0, "NTV1_RCONTINUE", 0, 0, 0))
			{
				func_1233(iVar346, &(Local_464.f_68), 1500, Global_35);
				func_1256("NTV1_RCONTINUE", 1);
			}
			if (((get_ped_waypoint_progress(iVar346) > 134 || func_1239(Global_35, &(iLocal_124[41]), 1, 0)) && !func_1251("NTV1_TSHRI_03")) && ((func_1212(cParam0, 23) || func_1212(cParam0, 22)) || func_1257(cParam0, "NTV1_TSHRI_03", 0, 0, 0)))
			{
				set_gameplay_coord_hint(func_1663(0, 0), 6000, 5000, 3000, 0);
				func_1664(iVar346, &(Local_464.f_68), 3000, func_1663(0, 0));
				func_1256("NTV1_TSHRI_03", 1);
				func_137(cParam0, 4);
			}
			if (!is_ped_on_mount(Global_35))
			{
				_0xc71d07c96946e263(get_player_index(), iVar344);
				func_1661(&iLocal_349);
				func_137(cParam0, 0);
			}
			break;
		case 4:
			if (!func_1222(Global_35))
			{
				_0xc71d07c96946e263(get_player_index(), iVar344);
			}
			if (func_1212(cParam0, 23) || ((((!func_1665(&uLocal_353, 0) || (func_165(&(uLocal_353[0]), 0) && is_entity_on_fire(&(uLocal_353[0])))) || (func_165(&(uLocal_353[1]), 0) && is_entity_on_fire(&(uLocal_353[1])))) || has_entity_been_damaged_by_entity(&(uLocal_353[0]), Global_35, 1, 1)) || has_entity_been_damaged_by_entity(&(uLocal_353[1]), Global_35, 1, 1)))
			{
				func_13(uLocal_2168[0], 1, 1);
				func_13(uLocal_2168[1], 1, 1);
				func_1203(0);
				func_137(cParam0, 6);
			}
			else if ((!func_1250("NTV1_TSHRI_03") && (func_1212(cParam0, 22) || func_1239(Global_35, &(iLocal_124[42]), 1, 0))) && func_1666(Global_35, &uLocal_353, 30f, 0))
			{
				func_13(uLocal_2168[0], 1, 1);
				func_13(uLocal_2168[1], 1, 1);
				func_137(cParam0, 5);
			}
			break;
		case 5:
			if (!func_1222(Global_35))
			{
				_0xc71d07c96946e263(get_player_index(), iVar344);
			}
			if ((!func_1665(&uLocal_353, 0) || !is_sphere_visible(func_1663(0, 0), 5f)) || func_1257(cParam0, "NTV1_TSHRI_03C", 1, 0, 0))
			{
				if ((!func_1212(cParam0, 22) && !func_1212(cParam0, 23)) && is_sphere_visible(func_1663(0, 0), 5f))
				{
					task_play_anim(Global_35, sLocal_177, sLocal_181, 8f, -8f, -1, 4194324, 0f, false, 0, false, 0, false);
					func_1214(22);
				}
				func_137(cParam0, 15);
			}
			break;
		case 6:
			if (!func_1222(Global_35))
			{
				_0xc71d07c96946e263(get_player_index(), iVar344);
			}
			func_1203(0);
			func_1667("NTV1_TSHRI_03", 0, 0);
			if (func_1257(cParam0, "NTV1_TSHRI_03A", 0, 0, 0))
			{
				func_137(cParam0, 16);
			}
			break;
		case 15:
			if (!func_1222(Global_35))
			{
				_0xc71d07c96946e263(get_player_index(), iVar344);
			}
			if (func_1212(cParam0, 23) || ((((!func_1665(&uLocal_353, 0) || (func_165(&(uLocal_353[0]), 0) && is_entity_on_fire(&(uLocal_353[0])))) || (func_165(&(uLocal_353[1]), 0) && is_entity_on_fire(&(uLocal_353[1])))) || has_entity_been_damaged_by_entity(&(uLocal_353[0]), Global_35, 1, 1)) || has_entity_been_damaged_by_entity(&(uLocal_353[1]), Global_35, 1, 1)))
			{
				func_1203(0);
				func_137(cParam0, 6);
			}
			else if (((!func_1250("NTV1_TSHRI_03") && (func_1212(cParam0, 22) || func_1239(Global_35, &(iLocal_124[42]), 1, 0))) && func_1666(Global_35, &uLocal_353, 30f, 0)) || !func_1212(cParam0, 22))
			{
				if (!func_1212(cParam0, 22) || func_1257(cParam0, "NTV1_TSHRI_03B", 0, 0, 0))
				{
					func_137(cParam0, 16);
				}
			}
			break;
		case 16:
			if (!func_1222(Global_35))
			{
				_0xc71d07c96946e263(get_player_index(), iVar344);
			}
			if (!func_1250("NTV1_TSHRI_03A"))
			{
				func_1203(1);
			}
			if (!func_165(iVar346, 0) || !is_waypoint_playback_going_on_for_ped(iVar346, 0))
			{
				return;
			}
			if (((((get_ped_waypoint_progress(iVar346) > 4 && func_1290(&uVar0)) && !func_1250("NTV1_TSHRI_03A")) && !func_1250("NTV1_TSHRI_03B")) && !func_1251("NTV1_BANDANA")) && func_1257(cParam0, "NTV1_BANDANA", 0, 0, 0))
			{
				func_1233(iVar346, &(Local_464.f_68), 1500, Global_35);
				func_1256("NTV1_BANDANA", 1);
			}
			break;
	}
}

void func_1197(char[4] cParam0, int iParam1, var uParam2)
{
	if (!func_165(*iParam1, 0))
	{
		return;
	}
	if (func_35(cParam0) <= iLocal_77 || func_35(cParam0) == iLocal_79)
	{
		if (func_1212(cParam0, 18) && func_1668(cParam0, iVar344, "NTV1_WRN_LAW", func_1103(func_1212(cParam0, 8), "NTV1_FAIL_LAW1", "NTV1_FAIL_LAW2"), 300f, 400f, 0, 0, 1, 422991367, 1))
		{
			func_1221(iParam1);
		}
		else if (!func_1212(cParam0, 18) && func_1669(cParam0, 31, func_1226(func_35(cParam0) == iLocal_79, 200f, 45f), func_1226(func_35(cParam0) == iLocal_79, 300f, 60f), 0, 0, 1, 422991367))
		{
			func_1221(iParam1);
		}
		else if (func_35(cParam0) == iLocal_77)
		{
			if (iVar2219 == 1)
			{
				if (!func_1239(Global_35, &(iLocal_124[19]), 1, 0))
				{
					func_1255(*iParam1, -401963276, 1);
					func_1267(&iLocal_349);
				}
				else
				{
					func_1661(&iLocal_349);
				}
				iLocal_2224 = 0;
			}
		}
		else if (func_1212(cParam0, 18) && !func_1212(cParam0, 17))
		{
			func_1661(&iLocal_349);
		}
		else
		{
			func_1670(iParam1);
		}
	}
	switch (uParam2->f_2)
	{
		case 1:
			func_1195(uParam2, 2);
			break;
		case 2:
			if (is_ped_on_mount(*iParam1))
			{
				func_1195(uParam2, 6);
			}
			else
			{
				open_sequence_task(&uLocal_2128);
				if (func_165(iVar345, 0) && _is_mount_seat_free(iVar345, -1))
				{
					task_follow_nav_mesh_to_coord(0, get_entity_coords(iVar345, true, false), 1f, 40000, 1f, 0, 40000f);
					task_mount_animal(0, iVar345, 20000, -1, 1f, 1, 0, 0);
				}
				else if (func_165(iVar342, 0))
				{
					task_follow_nav_mesh_to_coord(0, get_entity_coords(iVar342, true, false), 1f, 40000, 1f, 0, 40000f);
					task_mount_animal(0, iVar342, 20000, -1, 1f, 1, 0, 0);
				}
				close_sequence_task(iVar2123);
				task_perform_sequence(*iParam1, iVar2123);
				clear_sequence_task(&uLocal_2128);
				func_1195(uParam2, 3);
			}
			break;
		case 3:
			if (is_ped_on_mount(*iParam1))
			{
				func_1195(uParam2, 6);
			}
			else if (!func_1671(*iParam1, 242628503) && !_is_ped_getting_into_a_mount_seat(*iParam1, true))
			{
				func_1195(uParam2, 2);
			}
			break;
		case 4:
			open_sequence_task(&uLocal_2128);
			task_turn_ped_to_face_entity(0, Global_35, -1, -1082130432, -1082130432, -1082130432);
			close_sequence_task(iVar2123);
			task_perform_sequence(*iParam1, iVar2123);
			clear_sequence_task(&uLocal_2128);
			func_1195(uParam2, 5);
			break;
		case 5:
			if ((is_ped_on_mount(Global_35) && func_854(*iParam1, Global_35, 12.5f, 1)) || func_1672(Global_35, *iParam1, sLocal_168, 1112014848))
			{
				func_1195(uParam2, 6);
			}
			break;
		case 6:
			open_sequence_task(&uLocal_2128);
			if (func_165(iVar345, 0) && !_is_ped_getting_into_a_mount_seat(*iParam1, true))
			{
				task_follow_nav_mesh_to_coord(0, get_entity_coords(iVar345, true, false), 1f, 20000, 1f, 0, 40000f);
				task_mount_animal(0, iVar345, 20000, -1, 1f, 1, 0, 0);
			}
			iVar4 = 5900;
			if ((uParam2->f_58 == 0 && func_35(cParam0) == iLocal_74) && !func_122(cParam0, 4))
			{
				if (func_1216(*iParam1, func_1201(0, 14), 3f, 1, 1))
				{
					uParam2->f_58 = 4;
				}
				iVar4 = 5894;
			}
			task_follow_waypoint_recording(0, sLocal_168, uParam2->f_58, iVar4, -1, 0, 0, -1);
			close_sequence_task(iVar2123);
			task_perform_sequence(*iParam1, iVar2123);
			clear_sequence_task(&uLocal_2128);
			if (func_35(cParam0) <= iLocal_74)
			{
				func_1193(&uLocal_2129, iParam1, 1, 10);
				_0xc99f104bdf8c7f5a(*iParam1, 0);
				_0x9bbeaf8b0c007f1e(*iParam1, 0);
				_0xd5bd1b5318a81994(iVar2124, 1);
				iLocal_2710 = 1;
			}
			else
			{
				func_1193(&uLocal_2129, iParam1, 1, 3);
				_0xc99f104bdf8c7f5a(*iParam1, 1);
				_0x9bbeaf8b0c007f1e(*iParam1, 1);
				_0xd5bd1b5318a81994(iVar2124, 0);
			}
			func_1194(iVar2124, &Global_35, 0);
			func_1195(uParam2, 7);
			break;
		case 7:
			if (is_waypoint_playback_going_on_for_ped(*iParam1, 0))
			{
				fVar5 = 1.18f;
				if (func_1672(Global_35, *iParam1, sLocal_168, 1112014848))
				{
					if (func_854(*iParam1, Global_35, 15f, 1))
					{
						fVar5 = 3f;
					}
					else
					{
						fVar5 = 2f;
					}
				}
				else if (func_1212(cParam0, 25))
				{
					if (func_1212(cParam0, 27))
					{
						if (func_1239(*iParam1, &(iLocal_124[1]), 1, 0))
						{
							fVar5 = 1.001f;
						}
						else if (get_ped_waypoint_progress(iVar344) > 500)
						{
							fVar5 = 1.001f;
						}
						else if ((get_ped_waypoint_progress(*iParam1) >= 416 && get_ped_waypoint_progress(*iParam1) < 440) || (get_ped_waypoint_progress(*iParam1) >= 493 && get_ped_waypoint_progress(*iParam1) < 502))
						{
							fVar5 = 1.25f;
						}
						else
						{
							fVar5 = 1.25f;
						}
					}
					else if ((((get_ped_waypoint_progress(*iParam1) >= 259 && get_ped_waypoint_progress(*iParam1) < 283) || (get_ped_waypoint_progress(*iParam1) >= 322 && get_ped_waypoint_progress(*iParam1) < 332)) || (get_ped_waypoint_progress(*iParam1) >= 235 && get_ped_waypoint_progress(*iParam1) < 249)) || (get_ped_waypoint_progress(*iParam1) >= 365 && get_ped_waypoint_progress(*iParam1) < 368))
					{
						fVar5 = 1.5f;
					}
					else if (get_ped_waypoint_progress(*iParam1) >= 368 && get_ped_waypoint_progress(*iParam1) < 377)
					{
						fVar5 = 1f;
					}
					else
					{
						fVar5 = 1.5f;
					}
				}
				else if (((get_ped_waypoint_progress(*iParam1) >= 126 && get_ped_waypoint_progress(*iParam1) < 143) || (get_ped_waypoint_progress(*iParam1) >= 210 && get_ped_waypoint_progress(*iParam1) < 235)) || (get_ped_waypoint_progress(*iParam1) >= 20 && get_ped_waypoint_progress(*iParam1) < 47))
				{
					fVar5 = 1.25f;
				}
				else if (get_ped_waypoint_progress(*iParam1) >= 0 && get_ped_waypoint_progress(*iParam1) < 20)
				{
					fVar5 = 1.5f;
				}
				else if ((get_ped_waypoint_progress(iVar344) > 485 || (get_ped_waypoint_progress(*iParam1) >= 245 && get_ped_waypoint_progress(*iParam1) < 252)) || (get_ped_waypoint_progress(*iParam1) >= 356 && get_ped_waypoint_progress(*iParam1) < 370))
				{
					fVar5 = 1.5f;
				}
				else if ((get_ped_waypoint_progress(*iParam1) >= 238 && get_ped_waypoint_progress(*iParam1) < 252) || (get_ped_waypoint_progress(*iParam1) >= 493 && get_ped_waypoint_progress(*iParam1) < 508))
				{
					fVar5 = 1.001f;
				}
				else if ((get_ped_waypoint_progress(*iParam1) >= 53 && get_ped_waypoint_progress(*iParam1) < 65) || (get_ped_waypoint_progress(*iParam1) >= 101 && get_ped_waypoint_progress(*iParam1) < 112))
				{
					fVar5 = 1.5f;
				}
				else if (get_ped_waypoint_progress(*iParam1) >= 65 && get_ped_waypoint_progress(*iParam1) < 101)
				{
					fVar5 = 1.5f;
				}
				else
				{
					fVar5 = 1.5f;
				}
				if (iVar2705 == 0 && ((get_ped_waypoint_progress(*iParam1) > 20 && get_ped_waypoint_progress(*iParam1) < 49) || (func_35(cParam0) >= iLocal_75 && (get_ped_waypoint_progress(*iParam1) > 50 && get_ped_waypoint_progress(*iParam1) <= 490))))
				{
					if ((func_35(cParam0) >= iLocal_75 && get_ped_waypoint_progress(*iParam1) > 50) && get_ped_waypoint_progress(*iParam1) <= 490)
					{
						func_1193(&uLocal_2129, iParam1, 1, 5);
					}
					else
					{
						func_1193(&uLocal_2129, iParam1, 1, 10);
						_0xc99f104bdf8c7f5a(*iParam1, 0);
						_0x9bbeaf8b0c007f1e(*iParam1, 0);
						_0xd5bd1b5318a81994(iVar2124, 1);
						iLocal_2710 = 1;
					}
					iLocal_2710 = 1;
					_0xc99f104bdf8c7f5a(*iParam1, 0);
					_0x9bbeaf8b0c007f1e(*iParam1, 0);
				}
				else if (iVar2705 == 1 && ((func_35(cParam0) <= iLocal_74 && get_ped_waypoint_progress(*iParam1) > 50) || get_ped_waypoint_progress(*iParam1) > 490))
				{
					func_1193(&uLocal_2129, iParam1, 1, 3);
					_0xd5bd1b5318a81994(iVar2124, 0);
					if (func_165(Global_35, 0))
					{
						_0x87c2724a56f66020(Global_35);
					}
					if (func_165(iVar346, 0))
					{
						_0x87c2724a56f66020(iVar346);
					}
					iLocal_2710 = 0;
				}
				iVar8 = 1;
				if ((((get_ped_waypoint_progress(*iParam1) >= 242 && get_ped_waypoint_progress(*iParam1) < 258) || (get_ped_waypoint_progress(*iParam1) >= 366 && get_ped_waypoint_progress(*iParam1) < 379)) || (func_1672(Global_35, *iParam1, sLocal_168, 1112014848) && (get_ped_waypoint_progress(*iParam1) >= 350 && get_ped_waypoint_progress(*iParam1) < 379))) || (func_1672(Global_35, *iParam1, sLocal_168, 1112014848) && (get_ped_waypoint_progress(*iParam1) >= 230 && get_ped_waypoint_progress(*iParam1) < 258)))
				{
					iVar8 = 0;
				}
				if (func_35(cParam0) == iLocal_74)
				{
					if (!is_ped_on_mount(Global_35))
					{
						fVar7 = 8f;
						bVar6 = 12.5f;
					}
					else
					{
						fVar7 = 6.5f;
						bVar6 = 18f;
					}
					func_1673(*iParam1, fVar5, 0, 1045220557, 1, fVar7, fVar7, bVar6, 1033476506, 1061158912, 1, iVar8, 1045220557, 0);
				}
				else
				{
					if (!is_ped_on_mount(Global_35))
					{
						fVar7 = 2f;
						bVar6 = func_1226(iVar8 == 0, 20f, 10f);
					}
					else
					{
						fVar7 = 4f;
						bVar6 = func_1226(iVar8 == 0, 20f, 12.5f);
						if ((func_1672(Global_35, *iParam1, sLocal_168, 1000f) || (func_1239(Global_35, &(iLocal_124[25]), 1, 0) && get_ped_waypoint_progress(*iParam1) < 271)) || (func_1239(Global_35, &(iLocal_124[26]), 1, 0) && get_ped_waypoint_progress(*iParam1) < 382))
						{
							bVar6 = 1000f;
							if (is_ped_on_mount(player_ped_id()) && !is_entity_dead(get_mount(player_ped_id())))
							{
								set_ped_max_move_blend_ratio(get_mount(player_ped_id()), 1.25f);
							}
						}
					}
					func_1673(*iParam1, fVar5, 0, 1045220557, 1, fVar7, fVar7, bVar6, 1033476506, 1061158912, 1, iVar8, 1045220557, 0);
				}
			}
			if (((!func_854(*iParam1, Global_35, func_1226(func_35(cParam0) == iLocal_74, 12f, 8.5f), 1) && is_ped_on_mount(*iParam1)) && is_waypoint_playback_going_on_for_ped(*iParam1, 0)) && get_entity_speed(*iParam1) == 0f)
			{
				func_29(&(uParam2->f_60), 0);
				if (!func_1250(sVar340) && func_1674(&(uParam2->f_60), 9f))
				{
					func_219(&(uParam2->f_60));
				}
			}
			else
			{
				func_450(&(uParam2->f_60));
			}
			if ((is_waypoint_playback_going_on_for_ped(*iParam1, 0) && get_ped_waypoint_progress(*iParam1) > 500) || func_1239(*iParam1, &(iLocal_124[18]), 1, 0))
			{
				uParam2->f_58 = 0;
				func_1195(uParam2, 8);
			}
			if (((is_waypoint_playback_going_on_for_ped(*iParam1, 0) && get_ped_waypoint_progress(*iParam1) > 236) && !func_1212(cParam0, 25)) && !func_1251("NTV1_HERBHOLD_01"))
			{
				if (func_1284())
				{
					if (!func_1675())
					{
						func_49(0, 0);
					}
					func_1676("NTV1_PICKH_1B");
					if (func_1257(cParam0, "NTV1_PICKH_1B", 1, 0, 0))
					{
						func_1256("NTV1_HERBHOLD_01", 1);
					}
				}
				else
				{
					func_1676("NTV1_PICKH_1A");
					if (func_1257(cParam0, "NTV1_PICKH_1A", 1, 0, 0))
					{
						func_1256("NTV1_HERBHOLD_01", 1);
					}
				}
				func_1203(0);
			}
			if (!func_1212(cParam0, 25) && func_1239(*iParam1, &(iLocal_124[0]), 1, 0))
			{
				if (!_does_scenario_point_exist(&(iLocal_2172[0])))
				{
					iLocal_2172[0] = create_scenario_point(1045958732, func_1201(10, 0), 0, 2f, 0, 1);
				}
				uParam2->f_58 = 0;
				uParam2->f_17 = { func_1201(10, 0) };
				func_1214(25);
				func_1195(uParam2, 143);
			}
			if (((is_waypoint_playback_going_on_for_ped(*iParam1, 0) && get_ped_waypoint_progress(*iParam1) > 360) && !func_1212(cParam0, 27)) && !func_1251("NTV1_HERBHOLD_02"))
			{
				if (func_1284())
				{
					if (!func_1675())
					{
						func_49(0, 0);
					}
					func_1676("NTV1_PICKH_2B");
					if (func_1257(cParam0, "NTV1_PICKH_2B", 1, 0, 0))
					{
						func_1256("NTV1_HERBHOLD_02", 1);
					}
				}
				else
				{
					func_1676("NTV1_PICKH_2A");
					if (func_1257(cParam0, "NTV1_PICKH_2A", 1, 0, 0))
					{
						func_1256("NTV1_HERBHOLD_02", 1);
					}
				}
				func_1203(0);
			}
			if (!func_1212(cParam0, 27) && func_1239(*iParam1, &(iLocal_124[1]), 1, 0))
			{
				if (!_does_scenario_point_exist(&(iLocal_2177[0])))
				{
					iLocal_2177[0] = create_scenario_point(737977713, func_1201(11, 0), 0, 2f, 0, 1);
				}
				uParam2->f_58 = 377;
				_0x9c8f42a5d1859dc1(&(iLocal_124[3]));
				uParam2->f_17 = { func_1201(11, 0) };
				func_1214(27);
				func_1195(uParam2, 143);
			}
			if (!is_ped_on_mount(*iParam1) || !func_1289(*iParam1, 242628503))
			{
				func_1195(uParam2, 2);
			}
			else if (is_waypoint_playback_going_on_for_ped(*iParam1, 0) && ((get_ped_waypoint_progress(*iParam1) < 238 || ((get_ped_waypoint_progress(*iParam1) > 258 && get_ped_waypoint_progress(*iParam1) < 362) && !func_1239(Global_35, &(iLocal_124[25]), 1, 0))) || (get_ped_waypoint_progress(*iParam1) > 379 && !func_1239(Global_35, &(iLocal_124[26]), 1, 0))))
			{
				func_1203(1);
			}
			else if (is_waypoint_playback_going_on_for_ped(*iParam1, 0) && ((get_ped_waypoint_progress(*iParam1) >= 238 && get_ped_waypoint_progress(*iParam1) < 259) || (get_ped_waypoint_progress(*iParam1) >= 362 && get_ped_waypoint_progress(*iParam1) <= 379)))
			{
				func_1203(0);
			}
			break;
		case 143:
			clear_ped_tasks(*iParam1, 1, 0);
			open_sequence_task(&uLocal_2128);
			if (is_ped_on_mount(*iParam1))
			{
				task_dismount_animal(0, 262144, 0, 0, 0, 0);
			}
			task_follow_nav_mesh_to_coord(0, uParam2->f_17, 1f, 60000, 1.5f, 0, 40000f);
			task_loot_nearest_entity(0, uParam2->f_17, 4, 100f);
			func_1677(&(uParam2->f_17), 100f);
			task_turn_ped_to_face_entity(0, Global_35, -1, -1082130432, -1082130432, -1082130432);
			close_sequence_task(iVar2123);
			task_perform_sequence(*iParam1, iVar2123);
			clear_sequence_task(&uLocal_2128);
			_0x2208438012482a1a(*iParam1, false, false);
			set_ped_can_ragdoll_from_player_impact(*iParam1, false);
			func_1233(*iParam1, &(uParam2->f_68), 4500, Global_35);
			func_1203(0);
			func_1195(uParam2, 144);
			break;
		case 144:
			if (func_854(Global_35, iVar344, 8f, 1) && func_1284())
			{
				func_1233(*iParam1, &(uParam2->f_68), 1500, Global_35);
				func_1233(Global_35, &uLocal_2275, 1500, *iParam1);
			}
			if (((!func_1251("NTV1_HERB_1A") && (((is_ped_facing_ped(*iParam1, Global_35, 90f) && get_sequence_progress(*iParam1) > 0) && func_1216(*iParam1, uParam2->f_17, 3f, 1, 1)) || get_sequence_progress(*iParam1) > 1)) && func_1212(cParam0, 25)) && !func_1212(cParam0, 27))
			{
				func_1676("NTV1_HERB_1A");
				if (func_1257(cParam0, "NTV1_HERB_1A", 0, 0, 0))
				{
					func_1256("NTV1_HERB_1A", 1);
				}
			}
			if (((!func_1251("NTV1_HERB_2A") && func_1251("NTV1_HERB_1A")) && (((is_ped_facing_ped(*iParam1, Global_35, 90f) && get_sequence_progress(*iParam1) > 0) && func_1216(*iParam1, uParam2->f_17, 3f, 1, 1)) || get_sequence_progress(*iParam1) > 1)) && func_1212(cParam0, 27))
			{
				func_1676("NTV1_HERB_2A");
				if (func_1257(cParam0, "NTV1_HERB_2A", 0, 0, 0))
				{
					func_1256("NTV1_HERB_2A", 1);
				}
			}
			if ((func_1671(*iParam1, 242628503) && (get_sequence_progress(*iParam1) > 2 && is_ped_facing_ped(*iParam1, Global_35, 90f))) || func_28(&(uParam2->f_60)))
			{
				if (!func_1250("NTV1_HERB_1A") && !func_1250("NTV1_HERB_2A"))
				{
					func_29(&(uParam2->f_60), 0);
				}
				if (func_1223(&(uParam2->f_60), 2.75f))
				{
				}
				if (func_1212(cParam0, 25) && !func_1212(cParam0, 27))
				{
					if (func_1223(&(uParam2->f_60), 1.2f))
					{
						func_1676("NTV1_HSTART");
					}
					if (func_1257(cParam0, "NTV1_HSTART", 0, 1.3f, 0) || (func_1223(&(uParam2->f_60), 2.75f) && func_1257(cParam0, "NTV1_HSTART", 1, 0, 0)))
					{
						func_449(&(iLocal_124[4]));
						func_449(&(iLocal_124[2]));
						func_447(&(iLocal_124[4]));
						func_447(&(iLocal_124[6]));
						func_1214(26);
						set_ped_can_ragdoll_from_player_impact(*iParam1, true);
						func_1195(uParam2, 6);
					}
				}
				else if (func_1212(cParam0, 27))
				{
					func_449(&(iLocal_124[5]));
					func_449(&(iLocal_124[2]));
					func_447(&(iLocal_124[5]));
					func_447(&(iLocal_124[7]));
					func_1214(28);
					set_ped_can_ragdoll_from_player_impact(*iParam1, true);
					func_1195(uParam2, 6);
				}
			}
			if ((func_1671(*iParam1, 242628503) && (get_sequence_progress(*iParam1) > 2 && is_ped_facing_ped(*iParam1, Global_35, 90f))) || func_28(&(uParam2->f_60)))
			{
			}
			if (!func_1671(*iParam1, 242628503))
			{
			}
			break;
		case 84:
			clear_ped_tasks(*iParam1, 1, 0);
			open_sequence_task(&uLocal_2128);
			task_follow_nav_mesh_to_coord(0, uParam2->f_51, uParam2->f_56, -1, 0.25f, 0, uParam2->f_55);
			close_sequence_task(iVar2123);
			task_perform_sequence(*iParam1, iVar2123);
			clear_sequence_task(&uLocal_2128);
			func_1195(uParam2, 85);
			break;
		case 85:
			break;
		case 8:
			clear_ped_tasks(*iParam1, 1, 0);
			open_sequence_task(&uLocal_2128);
			if (is_ped_on_mount(*iParam1))
			{
				task_dismount_animal(0, 0, 0, 0, 0, 0);
			}
			task_follow_nav_mesh_to_coord(0, func_1201(7, 1), (1.5f + 0.2f), 60000, 0.25f, 0, func_1678(7, 1));
			close_sequence_task(iVar2123);
			task_perform_sequence(*iParam1, iVar2123);
			clear_sequence_task(&uLocal_2128);
			func_1195(uParam2, 9);
			break;
		case 9:
			if (!is_ped_on_mount(*iParam1) && (!func_1671(*iParam1, 242628503) && (func_1216(*iParam1, func_1201(7, 1), 5f, 1, 1) || func_1239(Global_35, &(iLocal_124[18]), 1, 0))))
			{
				func_1195(uParam2, 10);
			}
			else if ((((!is_ped_on_mount(*iParam1) && !func_1671(*iParam1, 242628503)) && !func_1239(Global_35, &(iLocal_124[18]), 1, 0)) && !func_1216(*iParam1, func_1201(7, 1), 5f, 1, 1)) && !is_ped_ragdoll(*iParam1))
			{
				func_1195(uParam2, 8);
			}
			break;
		case 10:
			if (func_1227(uLocal_111[10], func_417(10), 0, 0) && !func_1250("NTV1_TSHRI_A"))
			{
				func_1231(10);
				func_1232(&(uLocal_111[10]));
				func_1195(uParam2, 11);
			}
			break;
		case 11:
			if (func_1234(&(uLocal_111[10]), -1082130432))
			{
				func_1214(2);
			}
			if (func_35(cParam0) >= iLocal_78 || func_1212(cParam0, 2))
			{
				func_1195(uParam2, 12);
			}
			break;
		case 12:
			func_447(&(iLocal_124[8]));
			if ((((iVar2205 == 1 && &Local_2300.f_13[0] == 1) || (iVar2205 == 3 && &Local_2300.f_13[1] == 1)) || (iVar2205 == 4 && &Local_2300.f_13[2] == 1)) || (iVar2205 == 6 && &Local_2300.f_13[3] == 1))
			{
				iLocal_2210 = func_308(iVar2205 + 1, 6, 7);
				uParam2->f_56 = 1f;
			}
			open_sequence_task(&uLocal_2128);
			task_follow_nav_mesh_to_coord(0, func_1201(5, iVar2205), uParam2->f_56, 60000, 0.25f, 0, func_1678(5, iVar2205));
			close_sequence_task(iVar2123);
			task_perform_sequence(*iParam1, iVar2123);
			clear_sequence_task(&uLocal_2128);
			func_1195(uParam2, 13);
			break;
		case 13:
			func_1227(uLocal_111[1], func_417(1), 0, 0);
			func_1227(uLocal_111[2], func_417(2), 0, 0);
			bVar0 = func_1679();
			bVar1 = (func_854(*iParam1, Global_35, 30f, 1) && _0x285d36c5c72b0569(Global_35) < 2f);
			if (bVar1)
			{
			}
			else if (func_1257(cParam0, func_1103(bVar0, "NTV1_HLP_DAWD", "NTV1_HLP_RAINS"), 0, 11.5f, 0))
			{
				func_1233(iVar344, &(Local_464.f_68), 2000, Global_35);
				func_219(&(cParam0->f_13106));
			}
			if (!func_1671(*iParam1, 242628503) || func_1216(*iParam1, func_1201(5, iVar2205), 1f, 1, 1))
			{
				if (iVar2205 > 6)
				{
					iLocal_2210 = 7;
					func_1195(uParam2, 14);
				}
				else if ((func_1680(*iParam1, 4f) && iVar2205 != 2) && iVar2205 != 5)
				{
					func_1195(uParam2, 14);
				}
				else
				{
					func_1195(uParam2, 22);
				}
			}
			break;
		case 22:
			clear_ped_tasks(*iParam1, 1, 0);
			open_sequence_task(&uLocal_2128);
			task_follow_nav_mesh_to_coord(0, func_1201(6, iVar2205), uParam2->f_56, 60000, 0.25f, 0, func_1678(6, iVar2205));
			task_wander_in_area(0, func_1201(6, iVar2205), 10f, 1077936128, 1086324736, 0);
			close_sequence_task(iVar2123);
			task_perform_sequence(*iParam1, iVar2123);
			clear_sequence_task(&uLocal_2128);
			func_1195(uParam2, 23);
			break;
		case 23:
			func_1227(uLocal_111[1], func_417(1), 0, 0);
			func_1227(uLocal_111[2], func_417(2), 0, 0);
			func_29(&(uParam2->f_60), 0);
			if (func_1223(&(uParam2->f_60), 20f))
			{
				iLocal_2210 = func_308(iVar2205 + 1, 6, 7);
				uParam2->f_56 = 1f;
				if (iVar2205 > 6 || !func_1681(func_1201(6, iVar2205), 4f))
				{
					iLocal_2210 = 7;
					func_1195(uParam2, 14);
				}
				else
				{
					func_1195(uParam2, 12);
				}
			}
			bVar0 = func_1679();
			bVar1 = (func_854(*iParam1, Global_35, 30f, 1) && _0x285d36c5c72b0569(Global_35) < 2f);
			if (bVar1)
			{
			}
			else if (func_1257(cParam0, func_1103(bVar0, "NTV1_HLP_DAWD", "NTV1_HLP_RAINS"), 0, 11.5f, 0))
			{
				func_219(&(cParam0->f_13106));
			}
			break;
		case 14:
			func_447(&(iLocal_124[8]));
			if ((((iVar2205 == 1 && &Local_2300.f_13[0] == 1) || (iVar2205 == 3 && &Local_2300.f_13[1] == 1)) || (iVar2205 == 4 && &Local_2300.f_13[2] == 1)) || (iVar2205 == 6 && &Local_2300.f_13[3] == 1))
			{
				iLocal_2210 = func_308(iVar2205 + 1, 6, 7);
				uParam2->f_56 = 1f;
			}
			open_sequence_task(&uLocal_2128);
			if (iVar2205 == 7)
			{
				if (func_1212(cParam0, 1))
				{
					uParam2->f_56 = 2f;
					task_follow_nav_mesh_to_coord(0, func_1201(6, iVar2205), uParam2->f_56, 60000, 4f, 0, 40000f);
					task_follow_nav_mesh_to_coord(0, func_1201(6, iVar2205), 1f, 60000, 0.25f, 0, func_1678(6, iVar2205));
				}
				else
				{
					task_follow_nav_mesh_to_coord(0, func_1201(1, 1), uParam2->f_56, 60000, 4f, 0, 40000f);
					task_follow_nav_mesh_to_coord(0, func_1201(1, 1), 1f, 60000, 0.25f, 0, func_1678(6, iVar2205));
				}
			}
			else
			{
				if (iVar2205 == 1)
				{
					cVar2 = "pl_Bottle_01_Enter";
				}
				if (iVar2205 == 3)
				{
					cVar2 = "pl_Flask_Enter";
				}
				if (iVar2205 == 4)
				{
					cVar2 = "pl_WoodPile_Enter";
				}
				if (iVar2205 == 6)
				{
					cVar2 = "pl_Bottle_02_Enter";
				}
				func_1231(1);
				func_1229(&(uLocal_111[1]), cVar2, 1);
				task_enter_anim_scene(0, &(uLocal_111[1]), "Rains_Fall", cVar2, (1f + 0.25f), 1, 0, 60000, -1082130432);
			}
			close_sequence_task(iVar2123);
			task_perform_sequence(*iParam1, iVar2123);
			clear_sequence_task(&uLocal_2128);
			func_1195(uParam2, 15);
			break;
		case 15:
			func_1227(uLocal_111[1], func_417(1), 0, 0);
			func_1227(uLocal_111[2], func_417(2), 0, 0);
			if (!func_1671(*iParam1, 242628503))
			{
				func_29(&(uParam2->f_60), 0);
			}
			else
			{
				func_450(&(uParam2->f_60));
			}
			if (func_1216(*iParam1, func_1201(6, iVar2205), 0.75f, 1, 1) || (!func_1671(*iParam1, 242628503) && func_1223(&(uParam2->f_60), 6f)))
			{
				if (iVar2205 > 6)
				{
					iLocal_2210 = 7;
					func_1214(0);
					func_1195(uParam2, 16);
				}
				else if ((func_1680(*iParam1, 4f) && iVar2205 != 2) && iVar2205 != 5)
				{
					func_1195(uParam2, 16);
				}
				else if (iVar2205 < 6)
				{
					func_1195(uParam2, 22);
				}
				else
				{
					iLocal_2210 = 7;
					func_1214(0);
					func_1195(uParam2, 16);
				}
			}
			break;
		case 16:
			if (iVar2205 == 1)
			{
				cVar2 = "pl_Bottle_01_Enter";
				Local_2300.f_13[0] = 1;
			}
			if (iVar2205 == 3)
			{
				cVar2 = "pl_Flask_Enter";
				Local_2300.f_13[1] = 1;
			}
			if (iVar2205 == 4)
			{
				cVar2 = "pl_WoodPile_Enter";
				Local_2300.f_13[2] = 1;
				if (does_entity_exist(iVar2085))
				{
					freeze_entity_position(iVar2085, false);
				}
			}
			if (iVar2205 == 6)
			{
				cVar2 = "pl_Bottle_02_Enter";
				Local_2300.f_13[3] = 1;
			}
			if (iVar2205 == 7)
			{
				if (func_1212(cParam0, 1))
				{
					cVar2 = "pl_Camp_Spotted_RainsFall";
				}
				else
				{
					cVar2 = "pl_Camp_Enter";
				}
				Local_2300.f_24[4] = 1;
			}
			if (func_1212(cParam0, 1))
			{
				if ((func_1234(&(uLocal_111[5]), -1082130432) && func_1227(uLocal_111[6], func_417(6), 0, 0)) || (func_1682(&(uLocal_111[5]), "pl_Arthur_Call_Over") && func_1234(&(uLocal_111[5]), 0.97f)))
				{
					if (func_1229(&(uLocal_111[6]), cVar2, 1))
					{
						set_anim_scene_origin(&(uLocal_111[6]), vLocal_2108, 0f, 0f, 0f, 2);
						func_1231(6);
						func_1232(&(uLocal_111[6]));
						func_1195(uParam2, 17);
					}
				}
			}
			else if ((!func_1212(cParam0, 1) && func_1227(uLocal_111[1], func_417(1), 0, 0)) && func_1229(&(uLocal_111[1]), cVar2, 1))
			{
				if (iVar2205 >= 7 || _0x337f1cc8ee895601(&(uLocal_111[1]), "RAINS_FALL"))
				{
					func_1231(1);
					func_1232(&(uLocal_111[1]));
					if ((iVar2205 >= 7 && !func_1251("NTV1_SMOKE")) && func_1257(cParam0, "NTV1_SMOKE", 0, 0, 0))
					{
						func_1256("NTV1_SMOKE", 1);
					}
					func_1195(uParam2, 17);
				}
			}
			else
			{
				func_29(&(uParam2->f_60), 0);
				if (func_1223(&(uParam2->f_60), 2.75f))
				{
					func_1195(uParam2, 14);
				}
			}
			break;
		case 17:
			if (iVar2205 == 1)
			{
				cVar2 = "s_Bottle_01_Loop";
				bVar9 = (!&Local_2300.f_2[0] && !func_854(*iParam1, Global_35, 10f, 1));
			}
			if (iVar2205 == 3)
			{
				cVar2 = "s_Flask_Loop";
				bVar9 = (!&Local_2300.f_2[1] && !func_854(*iParam1, Global_35, 10f, 1));
			}
			if (iVar2205 == 4)
			{
				cVar2 = "s_WoodPile_Loop";
				bVar9 = (!&Local_2300.f_2[2] && !func_854(*iParam1, Global_35, 10f, 1));
			}
			if (iVar2205 == 6)
			{
				cVar2 = "s_Bottle_02_Loop";
				bVar9 = (!&Local_2300.f_2[3] && !func_854(*iParam1, Global_35, 10f, 1));
			}
			if (iVar2205 == 7)
			{
				func_1214(0);
				cVar2 = "s_Camp_Loop";
				bVar9 = !func_1212(cParam0, 1);
			}
			if (func_1683(&(uLocal_111[1]), cVar2))
			{
				func_29(&(uParam2->f_60), 0);
				if (func_1223(&(uParam2->f_60), 1.25f) || bVar9 == 0)
				{
					if (iVar2205 == 7)
					{
						func_1214(0);
					}
					if (bVar9)
					{
						func_1195(uParam2, 18);
					}
					else
					{
						func_1195(uParam2, 20);
					}
				}
			}
			break;
		case 18:
			if (func_1224(iVar344, Global_35, 1f) == 3)
			{
				if (func_1224(iVar344, Global_35, 0f) == 1)
				{
					if (iVar2205 == 1)
					{
						cVar2 = "pl_Bottle_01_Call_Left_Bk";
					}
					if (iVar2205 == 3)
					{
						cVar2 = "pl_Flask_Call_Back_Lt";
					}
					if (iVar2205 == 4)
					{
						cVar2 = "pl_WoodPile_Call_Back_Lt";
					}
					if (iVar2205 == 6)
					{
						cVar2 = "pl_Bottle_02_Call_Back_Lt";
					}
					if (iVar2205 == 7)
					{
						cVar2 = "pl_Camp_Callover";
					}
				}
				else
				{
					if (iVar2205 == 1)
					{
						cVar2 = "pl_Bottle_01_Call_Left_Ft";
					}
					if (iVar2205 == 3)
					{
						cVar2 = "pl_Flask_Call_Lt";
					}
					if (iVar2205 == 4)
					{
						cVar2 = "pl_WoodPile_Call_Ft";
					}
					if (iVar2205 == 6)
					{
						cVar2 = "pl_Bottle_02_Call_Ft";
					}
					if (iVar2205 == 7)
					{
						cVar2 = "pl_Camp_Callover";
					}
				}
			}
			else if (func_1224(iVar344, Global_35, 0f) == 1)
			{
				if (iVar2205 == 1)
				{
					cVar2 = "pl_Bottle_01_Call_Left_Bk";
				}
				if (iVar2205 == 3)
				{
					cVar2 = "pl_Flask_Call_Back_Rt";
				}
				if (iVar2205 == 4)
				{
					cVar2 = "pl_WoodPile_Call_Back_Rt";
				}
				if (iVar2205 == 6)
				{
					cVar2 = "pl_Bottle_02_Call_Back_Rt";
				}
				if (iVar2205 == 7)
				{
					cVar2 = "pl_Camp_Callover";
				}
			}
			else
			{
				if (iVar2205 == 1)
				{
					cVar2 = "pl_Bottle_01_Call_Left_Ft";
				}
				if (iVar2205 == 3)
				{
					cVar2 = "pl_Flask_Call_Rt";
				}
				if (iVar2205 == 4)
				{
					cVar2 = "pl_WoodPile_Call_Ft";
				}
				if (iVar2205 == 6)
				{
					cVar2 = "pl_Bottle_02_Call_Ft";
				}
				if (iVar2205 == 7)
				{
					cVar2 = "pl_Camp_Callover";
				}
			}
			if (func_1229(&(uLocal_111[1]), cVar2, 1))
			{
				func_1667("NTV1_AL_CLUE", 0, 0);
				func_1667("NTV1_A2_CLUE", 0, 0);
				func_177(&iLocal_2130);
				func_177(&iLocal_2131);
				func_1267(iParam1);
				func_1188(cParam0, "NTV1_O_IC_RF", -1082130432, 0, 0, -1, -1, 0);
				func_1195(uParam2, 19);
			}
			break;
		case 19:
			if (iVar2205 == 1)
			{
				cVar2 = "s_Bottle_01_Loop";
			}
			if (iVar2205 == 3)
			{
				cVar2 = "s_Flask_Loop";
			}
			if (iVar2205 == 4)
			{
				cVar2 = "s_WoodPile_Loop";
			}
			if (iVar2205 == 6)
			{
				cVar2 = "s_Bottle_02_Loop";
			}
			if (iVar2205 == 7)
			{
				cVar2 = "s_Camp_Loop";
			}
			if (func_1683(&(uLocal_111[1]), cVar2))
			{
				func_1195(uParam2, 20);
			}
			break;
		case 20:
			func_29(&(uParam2->f_60), 0);
			if (((!func_1251("NTV1_HLP_CLUE") && func_1223(&(uParam2->f_60), 4f)) && !func_854(*iParam1, Global_35, 10f, 1)) && func_1257(cParam0, "NTV1_HLP_CLUE", 0, 0, 0))
			{
				func_1267(iParam1);
				func_1256("NTV1_HLP_CLUE", 1);
			}
			if (((func_1251("NTV1_HLP_CLUE") && !func_1250("NTV1_HLP_CLUE")) && !func_1251("NTV1_O_IC_RF")) && func_1257(cParam0, "NTV1_O_IC_RF", 5, 1.5f, 0))
			{
				func_1267(iParam1);
				func_1256("NTV1_O_IC_RF", 1);
			}
			if ((func_1223(&(uParam2->f_60), 13f) || func_854(*iParam1, Global_35, 6f, 1)) || (iVar2205 == 7 && func_1212(cParam0, 1)))
			{
				if (iVar2205 == 1)
				{
					cVar2 = "pl_Bottle_01_Action";
					sVar3 = "pl_Bottle_01_Action_Arthur";
				}
				if (iVar2205 == 3)
				{
					cVar2 = "pl_Flask_Action";
					sVar3 = "pl_Flask_Action_Arthur";
				}
				if (iVar2205 == 4)
				{
					cVar2 = "pl_WoodPile_Action";
					sVar3 = "pl_WoodPile_Action_Arthur";
				}
				if (iVar2205 == 6)
				{
					cVar2 = "pl_Bottle_02_Action";
					sVar3 = "pl_Bottle_02_Action_Arthur";
				}
				if (iVar2205 == 7)
				{
					cVar2 = "pl_Camp_Action";
					sVar3 = "";
				}
				if (func_1229(&(uLocal_111[1]), cVar2, 1))
				{
					if (func_854(*iParam1, Global_35, 6f, 1))
					{
						func_1661(iParam1);
					}
					func_1667("NTV1_AL_CLUE", 0, 0);
					func_1667("NTV1_A2_CLUE", 0, 0);
					func_1188(cParam0, "NTV1_O_SFC", -1082130432, 0, 0, -1, -1, 0);
					func_1256("NTV1_O_IC_RF", 0);
					func_1256("NTV1_HLP_CLUE", 0);
					func_1195(uParam2, 21);
				}
			}
			break;
		case 21:
			if (!_does_volume_exist(&(iLocal_124[8])))
			{
				vVar10 = { func_1201(6, iVar2205) };
				vVar10 = { vVar10 + func_1684(0f, 0f, func_1678(6, iVar2205)) * Vector(0.5f, 0.5f, 0.5f) };
				func_1393(iLocal_124[8], vVar10, 0f, 0f, 0f, 0.65f, 0.65f, 2.5f, "Clue Blocking Vol", 1, 0);
				_0x19c7567d2f2287d6(&(iLocal_124[8]), 7);
			}
			if (iVar2205 == 1 && !func_1251("NTV1_RF_CLUE_01"))
			{
				func_1256("NTV1_RF_CLUE_01", 1);
			}
			if (iVar2205 == 3 && !func_1251("NTV1_RF_CLUE_02"))
			{
				func_1256("NTV1_RF_CLUE_02", 1);
			}
			if (iVar2205 == 4 && !func_1251("NTV1_RF_CLUE_03"))
			{
				func_1256("NTV1_RF_CLUE_03", 1);
			}
			if (iVar2205 == 6 && !func_1251("NTV1_RF_CLUE_04"))
			{
				func_1256("NTV1_RF_CLUE_04", 1);
			}
			if (iVar2205 == 7 && !func_1251("NTV1_RF_CLUE_05"))
			{
				func_1256("NTV1_RF_CLUE_05", 1);
			}
			if (func_1234(&(uLocal_111[1]), 0.989f))
			{
				reset_anim_scene(&(uLocal_111[1]), 0);
				uParam2->f_56 = 1f;
				if (iVar2205 == 1)
				{
					Local_2300.f_24[0] = 1;
				}
				if (iVar2205 == 3)
				{
					Local_2300.f_24[1] = 1;
				}
				if (iVar2205 == 4)
				{
					Local_2300.f_24[2] = 1;
				}
				if (iVar2205 == 6)
				{
					Local_2300.f_24[3] = 1;
				}
				if (iVar2205 == 7)
				{
					if (func_1212(cParam0, 0))
					{
						Local_2300.f_24[4] = 1;
					}
				}
				func_1661(iParam1);
				if (iVar2205 == 7)
				{
					if (!func_1212(cParam0, 0))
					{
						func_1195(uParam2, 14);
					}
					else
					{
						func_1195(uParam2, 92);
					}
				}
				else
				{
					if (!does_blip_exist(iVar2126))
					{
						func_177(&iLocal_2130);
						func_177(&iLocal_2131);
						iLocal_2131 = _blip_add_for_radius(408396114, func_1201(7, 5), 32.5f);
					}
					func_1188(cParam0, "NTV1_O_SFC", -1082130432, 0, 0, -1, -1, 0);
					iLocal_2210 = func_308(iVar2205 + 1, 0, 8);
					func_1195(uParam2, 12);
				}
			}
			break;
		case 92:
			if (!func_1212(cParam0, 1))
			{
				func_177(&iLocal_2130);
				iLocal_2130 = func_1685(408396114, func_1201(13, 7), 1);
			}
			open_sequence_task(&uLocal_2128);
			task_turn_ped_to_face_entity(0, Global_35, -1, -1082130432, -1082130432, -1082130432);
			close_sequence_task(iVar2123);
			task_perform_sequence(*iParam1, iVar2123);
			clear_sequence_task(&uLocal_2128);
			func_1195(uParam2, 93);
			break;
		case 93:
			func_1214(0);
			func_29(&(uParam2->f_60), 0);
			if ((((iVar2205 >= 7 && !func_1251("NTV1_SMOKE")) && func_1223(&(uParam2->f_60), 5f)) && !func_854(*iParam1, Global_35, 10f, 1)) && func_1257(cParam0, "NTV1_SMOKE", 0, 0, 0))
			{
				func_1256("NTV1_SMOKE", 1);
			}
			if (((func_854(*iParam1, Global_35, 10f, 1) || func_1212(cParam0, 1)) || (func_35(cParam0) >= iLocal_78 && !func_854(*iParam1, Global_35, 10f, 1))) && func_35(cParam0) >= iLocal_78)
			{
				func_1195(uParam2, 37);
			}
			break;
		case 105:
			open_sequence_task(&uLocal_2128);
			task_follow_nav_mesh_to_coord(0, func_1201(5, iVar2205), (1f + 0.25f), 20000, 0.25f, 0, func_1678(5, iVar2205));
			close_sequence_task(iVar2123);
			task_perform_sequence(*iParam1, iVar2123);
			clear_sequence_task(&uLocal_2128);
			func_1195(uParam2, 106);
			break;
		case 106:
			if (!func_1671(*iParam1, 242628503))
			{
				func_1195(uParam2, 107);
			}
			break;
		case 107:
			clear_ped_tasks(*iParam1, 1, 0);
			open_sequence_task(&uLocal_2128);
			close_sequence_task(iVar2123);
			task_perform_sequence(*iParam1, iVar2123);
			clear_sequence_task(&uLocal_2128);
			func_1195(uParam2, 108);
			break;
		case 108:
			func_29(&(uParam2->f_60), 0);
			if (func_1223(&(uParam2->f_60), 7f))
			{
				iLocal_2210 = (iVar2205 - 1);
				if (iVar2205 < 0)
				{
					func_1195(uParam2, 37);
				}
				else
				{
					func_1195(uParam2, 105);
				}
			}
			break;
		case 88:
			clear_ped_tasks(*iParam1, 1, 0);
			open_sequence_task(&uLocal_2128);
			task_follow_nav_mesh_to_coord(0, func_1201(3, 1), 1f, 20000, 0.25f, 0, func_1678(3, 1));
			_task_start_scenario_in_place(0, 1446817251, 0, true, 0, -1f, false);
			close_sequence_task(iVar2123);
			task_perform_sequence(*iParam1, iVar2123);
			clear_sequence_task(&uLocal_2128);
			func_1195(uParam2, 89);
			break;
		case 89:
			break;
		case 37:
			if (!_does_scenario_point_exist(iVar2177))
			{
				iLocal_2182 = create_scenario_point(1446817251, func_1201(3, 1), func_1678(3, 1), 2f, 0, 1);
			}
			else
			{
				clear_ped_tasks(*iParam1, 1, 0);
				open_sequence_task(&uLocal_2128);
				if (!func_1216(*iParam1, func_1201(3, 1), 1f, 1, 1))
				{
					task_follow_nav_mesh_to_coord(0, func_1201(3, 1), 1f, 40000, 2.5f, 1049092, func_1678(3, 1));
				}
				_task_use_scenario_point(0, iVar2177, 0, 0, true, false, 0, true, -1f, false);
				close_sequence_task(iVar2123);
				task_perform_sequence(*iParam1, iVar2123);
				clear_sequence_task(&uLocal_2128);
				func_1195(uParam2, 38);
			}
			break;
		case 38:
			func_29(&(uParam2->f_60), 0);
			if ((!func_28(&(uParam2->f_60)) || func_1223(&(uParam2->f_60), 15f)) && func_854(Global_35, *iParam1, 15f, 1))
			{
				if (!func_1212(cParam0, 8))
				{
					if (_is_ped_carrying(Global_35))
					{
						if (func_1686(Global_35))
						{
							if (!func_1251("NTV1_HLP_ANIMAL") && func_1257(cParam0, "NTV1_HLP_ANIMAL", 1, 0, 0))
							{
								func_1233(iVar344, &(Local_464.f_68), 3000, Global_35);
								func_1233(Global_35, &uLocal_2275, 3000, iVar344);
								func_1256("NTV1_HLP_ANIMAL", 1);
								func_219(&(uParam2->f_60));
							}
						}
						else if (func_1687(Global_35))
						{
							if (!func_1251("NTV1_HLP_DEADP1") && func_1257(cParam0, "NTV1_HLP_DEADP1", 1, 0, 0))
							{
								func_1233(iVar344, &(Local_464.f_68), 3000, Global_35);
								func_1233(Global_35, &uLocal_2275, 3000, iVar344);
								func_1256("NTV1_HLP_DEADP1", 1);
								func_219(&(uParam2->f_60));
							}
						}
					}
					else if (func_1257(cParam0, func_1103(func_1212(cParam0, 4), "NTV1_HLP_NOITEM", "NTV1_HLP_LOIT"), 0, 0, 0))
					{
						func_1233(Global_35, &uLocal_2275, 1750, iVar344);
						func_219(&(uParam2->f_60));
					}
				}
				else if (func_1212(cParam0, 8))
				{
					if (func_1686(Global_35))
					{
						if (!func_1251("NTV1_HLP_ANIML2") && func_1257(cParam0, "NTV1_HLP_ANIML2", 1, 0, 0))
						{
							func_1233(iVar344, &(Local_464.f_68), 3000, Global_35);
							func_1233(Global_35, &uLocal_2275, 3000, iVar344);
							func_1256("NTV1_HLP_ANIML2", 1);
							func_219(&(uParam2->f_60));
						}
					}
					else if (func_1687(Global_35))
					{
						if (!func_1251("NTV1_HLP_DEADP2") && func_1257(cParam0, "NTV1_HLP_DEADP2", 1, 0, 0))
						{
							func_1233(iVar344, &(Local_464.f_68), 3000, Global_35);
							func_1233(Global_35, &uLocal_2275, 3000, iVar344);
							func_1256("NTV1_HLP_DEADP2", 1);
							func_219(&(uParam2->f_60));
						}
					}
					else if (!func_1251("NTV1_HLP_ITEMS") && func_1257(cParam0, "NTV1_HLP_ITEMS", 1, 0, 0))
					{
						func_1233(iVar344, &(Local_464.f_68), 3000, Global_35);
						func_1233(Global_35, &uLocal_2275, 3000, iVar344);
						func_1256("NTV1_HLP_ITEMS", 1);
						func_219(&(uParam2->f_60));
					}
				}
			}
			break;
		case 103:
			clear_ped_tasks(*iParam1, 1, 0);
			open_sequence_task(&uLocal_2128);
			if ((func_1037(*iParam1, 0, 1, 0) == -1569615261 && get_best_ped_weapon(*iParam1, false, false) != -1569615261) && get_best_ped_weapon(*iParam1, false, false) != 0)
			{
				set_current_ped_weapon(*iParam1, get_best_ped_weapon(*iParam1, false, false), true, 0, true, false);
				task_swap_weapon(0, 1, 0, 0, 0);
			}
			task_aim_at_entity(0, Global_35, 1750, 1, 0);
			task_look_at_entity(0, uParam2->f_49, -1, 0, 41, 0);
			close_sequence_task(iVar2123);
			task_perform_sequence(*iParam1, iVar2123);
			clear_sequence_task(&uLocal_2128);
			func_1233(*iParam1, &(uParam2->f_68), 3000, uParam2->f_49);
			func_1195(uParam2, 104);
			break;
		case 104:
			func_29(&(uParam2->f_60), 0);
			if (func_1223(&(uParam2->f_60), 0.75f))
			{
			}
			break;
		default:
			func_1688(cParam0, iParam1, uParam2);
			break;
	}
}

void func_1198(char[4] cParam0, int iParam1, var uParam2)
{
	if (func_1689(cParam0, iParam1))
	{
		if ((uParam2->f_2 != 141 && uParam2->f_2 != 142) && uParam2->f_2 != -1)
		{
			func_1195(uParam2, 142);
		}
	}
	else if (!func_165(*iParam1, iVar2127))
	{
		return;
	}
	switch (uParam2->f_2)
	{
		case 1:
			func_1195(uParam2, -1);
			break;
		case 111:
			if (is_ped_on_mount(iVar344))
			{
				if (is_ped_on_mount(*iParam1))
				{
					func_1194(iVar2124, iParam1, 1);
					set_blocking_of_non_temporary_events(*iParam1, true);
					set_ped_as_cop(iVar346, false);
					func_1690(cParam0, iVar346, 32, "ALLY_MONROE");
					set_ped_relationship_group_hash(iVar346, 1030835986);
					func_1195(uParam2, 112);
				}
				else
				{
					uParam2->f_56 = 1f;
					func_1195(uParam2, 2);
				}
			}
			break;
		case 112:
			if ((((func_165(iVar344, 0) && is_waypoint_playback_going_on_for_ped(iVar344, 0)) && get_ped_waypoint_progress(iVar344) > 45) && !func_1251("NTV1_CHOICE_CTX")) && !func_1250("NTV1_MONNEWS"))
			{
				func_1691(iParam1, &uLocal_2639, &uLocal_2640, "ALLY_MONROE", "NTV1_YES", "NTV1_NO", 30f, 30f);
				use_waypoint_recording_as_assisted_movement_route(sLocal_168, 1, 1f, 1f, 1);
				func_1256("NTV1_CHOICE_CTX", 1);
				func_29(&uLocal_2641, 0);
			}
			if (((((func_165(iVar344, 0) && is_waypoint_playback_going_on_for_ped(iVar344, 0)) && get_ped_waypoint_progress(iVar344) > 45) && !func_1251("NTV1_CHOICE")) && func_1223(&uLocal_2641, 3.5f)) && func_1257(cParam0, "NTV1_CHOICE", 0, 0, 0))
			{
				func_1256("NTV1_CHOICE", 1);
			}
			if ((!func_1251("NTV1_CHOICE_F") && !func_1251("NTV1_CHOICE_S")) && !func_1251("NTV1_CHOICE_F2"))
			{
				iVar0 = func_1692(iParam1, &uLocal_2639, &uLocal_2640);
			}
			else
			{
				iVar0 = -1;
			}
			if ((is_waypoint_playback_going_on_for_ped(iVar344, 0) && get_ped_waypoint_progress(iVar344) >= 111) || func_1223(&uLocal_2641, 12f))
			{
				iVar1 = 1;
			}
			else
			{
				iVar1 = 0;
			}
			if ((((((iVar0 == 0 || (iVar1 == 1 && func_301())) && !func_28(&(uParam2->f_60))) && !func_1251("NTV1_CHOICE_F")) && !func_1251("NTV1_CHOICE_F2")) && !func_1251("NTV1_CHOICE_S")) && !func_1251("NTV1_CHOICE_S2"))
			{
				func_13(&uLocal_2639, 1, 1);
				func_13(&uLocal_2640, 1, 1);
				_0xe98d55c5983f2509(*iParam1);
				if (func_360((*Global_1347702)[108]->f_15) != 1)
				{
					func_1693((*Global_1347702)[108]->f_15, 1);
				}
				if (func_1251("NTV1_CHOICE"))
				{
					func_1667("NTV1_CHOICE", 0, 0);
				}
				if ((iVar1 == 1 && !func_1251("NTV1_CHOICE_S2")) && func_1257(cParam0, "NTV1_CHOICE_S2", 1, 0, 0))
				{
					func_313(iVar2639, 66924911, 1, 0, *iParam1, 0, 1065353216, 0);
					use_waypoint_recording_as_assisted_movement_route(sLocal_168, 0, 1f, 1f, 1);
					func_1694(*iParam1, 0, 1, 0);
					func_1256("NTV1_CHOICE_S2", 1);
				}
				else if (!func_1251("NTV1_CHOICE_S") && func_1257(cParam0, "NTV1_CHOICE_S", 1, 0, 0))
				{
					func_313(iVar2639, 66924911, 1, 0, *iParam1, 0, 1065353216, 0);
					use_waypoint_recording_as_assisted_movement_route(sLocal_168, 0, 1f, 1f, 1);
					func_1694(*iParam1, 0, 1, 0);
					func_1256("NTV1_CHOICE_S", 1);
				}
			}
			else if ((((((iVar0 == 1 || (iVar1 == 1 && !func_301())) && !func_28(&(uParam2->f_60))) && !func_1251("NTV1_CHOICE_S")) && !func_1251("NTV1_CHOICE_S2")) && !func_1251("NTV1_CHOICE_F2")) && !func_1251("NTV1_CHOICE_F"))
			{
				func_13(&uLocal_2639, 1, 1);
				func_13(&uLocal_2640, 1, 1);
				_0xe98d55c5983f2509(*iParam1);
				if (func_1251("NTV1_CHOICE"))
				{
					func_1667("NTV1_CHOICE", 0, 0);
				}
				if ((iVar1 == 1 && !func_1251("NTV1_CHOICE_F2")) && func_1257(cParam0, "NTV1_CHOICE_F2", 1, 0, 0))
				{
					func_313(iVar2640, 66924911, 1, 0, *iParam1, 0, 1065353216, 0);
					use_waypoint_recording_as_assisted_movement_route(sLocal_168, 0, 1f, 1f, 1);
					func_1694(*iParam1, 0, 1, 0);
					func_1256("NTV1_CHOICE_F2", 1);
				}
				else if ((iVar1 == 0 && !func_1251("NTV1_CHOICE_F")) && func_1257(cParam0, "NTV1_CHOICE_F", 1, 0, 0))
				{
					func_313(iVar2640, 66924911, 1, 0, *iParam1, 0, 1065353216, 0);
					use_waypoint_recording_as_assisted_movement_route(sLocal_168, 0, 1f, 1f, 1);
					func_1694(*iParam1, 0, 1, 0);
					func_1256("NTV1_CHOICE_F", 1);
				}
			}
			if ((func_1212(cParam0, 20) || func_1212(cParam0, 22)) || func_35(cParam0) > iLocal_74)
			{
				if ((func_28(&(uParam2->f_60)) || ((func_1251("NTV1_CHOICE_S") || func_1251("NTV1_CHOICE_S2")) && func_1257(cParam0, "NTV1_MEXIT", 0, 0, 0))) || ((func_1251("NTV1_CHOICE_F") || func_1251("NTV1_CHOICE_F2")) && func_1257(cParam0, "NTV1_MEXIT_NO", 0, 0, 0)))
				{
					func_13(&uLocal_2639, 1, 1);
					func_13(&uLocal_2640, 1, 1);
					_0xe98d55c5983f2509(*iParam1);
					use_waypoint_recording_as_assisted_movement_route(sLocal_168, 0, 1f, 1f, 1);
					func_1694(*iParam1, 0, 1, 0);
					if (((!func_1251("NTV1_CHOICE_F") && !func_1251("NTV1_CHOICE_S")) && !func_1251("NTV1_CHOICE_S2")) && !func_1251("NTV1_CHOICE_F2"))
					{
						func_1256("NTV1_CHOICE_F", 1);
					}
					func_29(&(uParam2->f_60), 0);
					if (func_1223(&(uParam2->f_60), 1.5f))
					{
						func_1214(20);
						if (iVar1 == 1)
						{
							uParam2->f_56 = 3f;
							uParam2->f_51 = { func_1201(9, 3) };
						}
						else
						{
							uParam2->f_56 = 2.001f;
							uParam2->f_51 = { func_1201(0, 16) };
						}
						func_1195(uParam2, 74);
					}
				}
			}
			break;
		case 74:
			if (is_ped_in_group(*iParam1))
			{
				set_ped_config_flag(*iParam1, 279, false);
				remove_ped_from_group(*iParam1);
			}
			func_1194(iVar2124, iParam1, 1);
			set_group_formation(iVar2124, 5);
			add_custom_formation_location(iVar2124, -3f, 0f, 0f, 0);
			add_custom_formation_location(iVar2124, 0f, -6.5f, 0f, 1);
			_0x0e9e95fdedcc9d35(*iParam1, 0, 0);
			func_1195(uParam2, 76);
			break;
		case 76:
			func_29(&(uParam2->f_60), 0);
			if (!func_1223(&(uParam2->f_60), 3f))
			{
				return;
			}
			set_group_formation(iVar2124, 5);
			add_custom_formation_location(iVar2124, 0f, -6.5f, 0f, 0);
			add_custom_formation_location(iVar2124, 0f, -12f, 0f, 1);
			_0x87c2724a56f66020(*iParam1);
			set_blocking_of_non_temporary_events(*iParam1, true);
			clear_ped_tasks(*iParam1, 1, 0);
			open_sequence_task(&uLocal_2128);
			_task_move_in_traffic_4(0, uParam2->f_56, uParam2->f_51, 0);
			close_sequence_task(iVar2123);
			task_perform_sequence(*iParam1, iVar2123);
			clear_sequence_task(&uLocal_2128);
			func_1195(uParam2, 75);
			break;
		case 75:
			if ((((func_1216(*iParam1, uParam2->f_51, 2f, 1, 1) || !func_854(*iParam1, Global_35, 40f, 1)) || !func_1671(*iParam1, 242628503)) && is_entity_occluded(*iParam1)) && !is_entity_on_screen(*iParam1))
			{
				func_1214(21);
				func_1195(uParam2, 141);
			}
			func_29(&(uParam2->f_60), 0);
			if ((func_1223(&(uParam2->f_60), 10f) && func_854(*iParam1, Global_35, 10f, 1)) && func_1257(cParam0, "NTV1_FOLL_MON", 0, 0, 0))
			{
				uParam2->f_56 = 2.001f;
				uParam2->f_51 = { func_1201(0, 16) };
				func_1195(uParam2, 76);
			}
			if (func_1223(&(uParam2->f_60), 4f) && func_854(*iParam1, Global_35, 30f, 1))
			{
				if (func_1695(&Global_35))
				{
					task_play_anim(Global_35, sLocal_178, sLocal_180, 8f, -8f, -1, 4194324, 0f, false, 0, false, 0, false);
				}
				else
				{
					task_play_anim(Global_35, sLocal_178, sLocal_179, 8f, -8f, -1, 4194324, 0f, false, 0, false, 0, false);
				}
				func_1214(21);
				func_1195(uParam2, 77);
			}
			break;
		case 77:
			if ((((func_1216(*iParam1, uParam2->f_51, 2f, 1, 1) || !func_854(*iParam1, Global_35, 40f, 1)) || !func_1671(*iParam1, 242628503)) && is_entity_occluded(*iParam1)) && !is_entity_on_screen(*iParam1))
			{
				func_1214(21);
				func_1195(uParam2, 141);
			}
			func_29(&(uParam2->f_60), 0);
			if ((func_1223(&(uParam2->f_60), 2f) && func_854(*iParam1, Global_35, 15f, 1)) && func_1257(cParam0, "NTV1_FOLL_MON", 0, 0, 0))
			{
				uParam2->f_56 = 2.001f;
				uParam2->f_51 = { func_1201(0, 16) };
				func_1195(uParam2, 74);
			}
			break;
		case 141:
			uParam2->f_50 = uVar347;
			func_1696(cParam0, 32);
			func_497(cParam0, *iParam1);
			func_497(cParam0, uParam2->f_50);
			func_1697(&(uParam2->f_50));
			func_1697(iParam1);
			func_1195(uParam2, -1);
			break;
		case 142:
			if (func_35(cParam0) == iLocal_74)
			{
				func_1698(cParam0, iParam1, &(uParam2->f_60), "NTV1_ATTACK_MONROE", "NTV1_DEAD_MONROE", 1070386381);
			}
			func_1195(uParam2, -1);
			break;
		default:
			func_1688(cParam0, iParam1, uParam2);
			break;
	}
}

void func_1199(char[4] cParam0)
{
	if ((!is_waypoint_playback_going_on_for_ped(iVar346, 0) || get_ped_waypoint_progress(iVar346) < 110) && iVar2219 == 0)
	{
		return;
	}
	if (!func_1699())
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		func_1700(cParam0, uLocal_353[iVar0], Local_1265[iVar0]);
		set_ped_reset_flag(&(uLocal_353[iVar0]), 3, true);
		iVar0++;
	}
	set_ped_reset_flag(iVar360, 3, true);
	if ((is_waypoint_playback_going_on_for_ped(iVar346, 0) && get_ped_waypoint_progress(iVar346) >= 100) && get_ped_waypoint_progress(iVar346) <= 194)
	{
		_0x80fdeb3a9e9aa578(iVar360, 1);
	}
	if (is_waypoint_playback_going_on_for_ped(iVar346, 0) && get_ped_waypoint_progress(iVar346) >= 110)
	{
		if (_0x083d497d57b7400f(iVar360))
		{
			freeze_entity_position(iVar360, false);
		}
		if (func_165(iVar360, 0) && get_ped_waypoint_progress(iVar346) > 115)
		{
			set_ped_config_flag(iVar360, 186, true);
			set_entity_heading(iVar360, 23.0386f);
			set_entity_visible(iVar360, true);
			func_1701(iVar360, 0, 0);
			_0x9587913b9e772d29(iVar360, 0);
			set_entity_heading(iVar360, 23.0386f);
		}
	}
}

int func_1200(char[4] cParam0)
{
	return cParam0->f_598;
}

Vector3 func_1201(int iParam0, int iParam1)
{
	return func_942(iParam0, iParam1);
}

bool func_1202(int iParam0, vector3 vParam1, vector3 vParam4)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	vVar0 = { get_entity_coords(iParam0, true, false) };
	vVar3 = { vParam4 - vParam1 };
	vVar6 = { vParam4 - vVar0 };
	fVar9 = absf(vmag(vVar3));
	fVar10 = absf(vmag(vVar6));
	if (fVar10 < fVar9)
	{
		return true;
	}
	return false;
}

void func_1203(bool bParam0)
{
	if (bParam0 == iVar2644)
	{
		return;
	}
	if (bParam0)
	{
		_0x1e017404784aa6a3(uVar346, -1868085209);
		_0x0d7fd6a55fd63aef(21, 3, bParam0);
		_0x0d7fd6a55fd63aef(14, 3, bParam0);
		_0x0d7fd6a55fd63aef(15, 3, bParam0);
		_0x0d7fd6a55fd63aef(18, 3, bParam0);
		_0x0d7fd6a55fd63aef(19, 3, bParam0);
		_0x0d7fd6a55fd63aef(22, 3, bParam0);
		_0x0d7fd6a55fd63aef(25, 3, bParam0);
		_0x0d7fd6a55fd63aef(28, 2, bParam0);
	}
	else
	{
		_0x2b4ce170de09f346(uVar346, -1868085209);
		_0x660a8f876df1d4f8(21);
		_0x660a8f876df1d4f8(14);
		_0x660a8f876df1d4f8(15);
		_0x660a8f876df1d4f8(18);
		_0x660a8f876df1d4f8(19);
		_0x660a8f876df1d4f8(22);
		_0x660a8f876df1d4f8(25);
		_0x660a8f876df1d4f8(28);
	}
	bLocal_2647 = bParam0;
	if (bParam0 == 0)
	{
		func_1244(1);
	}
}

void func_1204(char[4] cParam0, int iParam1)
{
	cParam0->f_1[func_134(iParam1)]->f_12 = 1;
}

void func_1205(char[4] cParam0, int iParam1, int iParam2, int iParam3)
{
	iVar0 = func_134(iParam2);
	if (!func_1428(iVar0))
	{
		return;
	}
	iVar1 = func_1429(iParam3);
	if (!func_1430(iVar1))
	{
		return;
	}
	(*cParam0->f_1[iVar0])[iVar1] = *iParam1;
	set_bit(&(cParam0->f_1[iVar0]->f_17), iVar1);
}

void func_1206(char[4] cParam0, int iParam1, char[16] cParam2)
{
	cParam0->f_1[func_134(iParam1)]->f_13 = { cParam2 };
}

void func_1207(char[4] cParam0, int iParam1, int iParam2)
{
	cParam0->f_1[func_134(iParam1)]->f_21 = iParam2;
}

void func_1208(var uParam0, int iParam1, int iParam2)
{
	_0x9c8f42a5d1859dc1(uParam0);
	_0xb8e213d02f37947d(uParam0, *iParam1, iParam2, 0, 0, 0, 0);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < get_itemset_size(*iParam1))
	{
		uVar1 = get_indexed_scenario_point_index_in_itemset(iVar0, *iParam1);
		_0x5a40040bb5ae3ea2(uVar1);
		iVar0++;
	}
}

void func_1209(int iParam0, int iParam1, bool bParam2)
{
	if (func_165(*iParam0, 0))
	{
		set_ped_config_flag(*iParam0, 350, bParam2);
		set_ped_config_flag(*iParam0, 348, bParam2);
	}
	if (func_165(*iParam1, 0))
	{
		set_ped_config_flag(*iParam1, 350, bParam2);
		set_ped_config_flag(*iParam1, 348, bParam2);
	}
}

void func_1210(char[4] cParam0)
{
	switch (func_1657(cParam0))
	{
		case 0:
			if (!func_10(cParam0, 8))
			{
				func_869(-21.475f, -12.3894f);
				func_1195(&Local_464, 6);
			}
			func_1188(cParam0, "NTV1_O_FRF", -1082130432, 0, 0, -1, -1, 0);
			func_137(cParam0, 1);
			break;
		case 1:
			if (func_1662(&iLocal_349) && func_1257(cParam0, "NTV1_POST_WOLF", 0, 1f, 0))
			{
				func_1188(cParam0, "NTV1_O_FRF", -1082130432, 0, 0, -1, -1, 0);
				func_1670(&iLocal_349);
				func_1214(19);
				func_137(cParam0, 2);
			}
			if (!is_ped_on_mount(Global_35))
			{
				_0xc71d07c96946e263(get_player_index(), iVar344);
				func_137(cParam0, 20);
			}
			break;
		case 20:
			if (!is_ped_on_mount(Global_35))
			{
				_0xc71d07c96946e263(get_player_index(), iVar344);
				func_1188(cParam0, "NTV1_O_MNT", -1082130432, 0, 0, -1, -1, 0);
				func_1661(&iLocal_349);
				if (!func_1658(7))
				{
					func_1659(7);
				}
			}
			else
			{
				func_1188(cParam0, "NTV1_O_FRF", -1082130432, 0, 0, -1, -1, 0);
			}
			func_137(cParam0, 21);
			break;
		case 21:
			if (!func_1222(Global_35))
			{
				_0xc71d07c96946e263(get_player_index(), iVar344);
			}
			if (is_ped_on_mount(Global_35))
			{
				func_1188(cParam0, "NTV1_O_FRF", -1082130432, 0, 0, -1, -1, 0);
				func_1221(&iLocal_349);
				func_137(cParam0, 0);
			}
			break;
		case 2:
			if (!func_1222(Global_35))
			{
				_0xc71d07c96946e263(get_player_index(), iVar344);
			}
			if (func_1212(cParam0, 25))
			{
				if (!is_ped_on_mount(iVar346))
				{
					func_137(cParam0, 3);
				}
			}
			else if (!func_1251("NTV1_HERBHOLD_01"))
			{
				func_1702(cParam0);
			}
			break;
		case 3:
			if (func_1212(cParam0, 26))
			{
				func_1702(cParam0);
			}
			if (!func_1222(Global_35))
			{
				_0xc71d07c96946e263(get_player_index(), iVar344);
			}
			if (is_ped_on_mount(iVar346))
			{
				func_137(cParam0, 4);
			}
			else if (func_165(iVar344, 0))
			{
				set_ped_reset_flag(iVar344, 303, true);
			}
			break;
		case 4:
			if (!func_165(iVar346, 0) || !is_waypoint_playback_going_on_for_ped(iVar346, 0))
			{
				return;
			}
			if (((get_ped_waypoint_progress(iVar346) > 299 && get_ped_waypoint_progress(iVar346) < 313) && !func_1251("NTV1_CLIFF")) && func_1257(cParam0, "NTV1_CLIFF", 0, 0, 0))
			{
				func_1256("NTV1_CLIFF", 1);
			}
			func_1702(cParam0);
			if (!is_ped_on_mount(Global_35))
			{
				_0xc71d07c96946e263(get_player_index(), iVar344);
				func_137(cParam0, 15);
			}
			break;
		case 15:
			if (!is_ped_on_mount(Global_35))
			{
				_0xc71d07c96946e263(get_player_index(), iVar344);
				func_1188(cParam0, "NTV1_O_MNT", -1082130432, 0, 0, -1, -1, 0);
				func_1661(&iLocal_349);
				if (!func_1658(7))
				{
					func_1659(7);
				}
			}
			else
			{
				func_1188(cParam0, "NTV1_O_FRF", -1082130432, 0, 0, -1, -1, 0);
			}
			func_137(cParam0, 16);
			break;
		case 16:
			if (!func_1222(Global_35))
			{
				_0xc71d07c96946e263(get_player_index(), iVar344);
			}
			if (is_ped_on_mount(Global_35))
			{
				func_1188(cParam0, "NTV1_O_FRF", -1082130432, 0, 0, -1, -1, 0);
				func_1221(&iLocal_349);
				func_137(cParam0, 4);
			}
			break;
		case 5:
			if (!func_1222(Global_35))
			{
				_0xc71d07c96946e263(get_player_index(), iVar344);
			}
			if (func_1257(cParam0, "NTV1_TSHRI_A", 0, 0, 0))
			{
				func_137(cParam0, -1);
			}
			break;
	}
}

void func_1211(int iParam0, vector3 vParam1, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, int iParam10, bool bParam11, int iParam12)
{
	if (bParam4)
	{
	}
	if (is_entity_dead(iParam0))
	{
		return;
	}
	if (!is_ped_human(iParam0))
	{
		return;
	}
	if (func_1703(vParam1, 0f, 0f, 0f))
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
	iVar0 = get_mount(iParam0);
	if (is_ped_in_any_vehicle(iParam0, false))
	{
		iVar1 = get_vehicle_ped_is_in(iParam0, false);
	}
	bVar3 = func_1704(iParam0, vParam1, 1);
	if ((bVar3 <= bParam5 && bVar3 > bParam6) && bVar3 > bParam7)
	{
		if (does_entity_exist(iVar0) && !is_entity_dead(iVar0))
		{
			set_ped_max_move_blend_ratio(iVar0, 1.75f);
		}
		if ((func_1705() && !is_entity_dead(iVar1)) && _is_draft_vehicle(iVar1))
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
			set_ped_max_move_blend_ratio(iParam0, 1.5f);
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
			set_ped_max_move_blend_ratio(iParam0, 1f);
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
			if (iParam0 == Global_35)
			{
				set_player_may_not_enter_any_vehicle(player_id());
				_0x9f9a829c6751f3c7(player_id(), 28, 1);
			}
			if (!is_entity_dead(iVar0) && !func_1289(iParam0, 501393341))
			{
				task_dismount_animal(iParam0, iParam12, 0, 0, 0, 0);
			}
			if (!is_entity_dead(iVar1) && !func_1289(iParam0, -828834893))
			{
				task_leave_any_vehicle(iParam0, 0, iParam12);
			}
		}
	}
}

bool func_1212(char[4] cParam0, int iParam1)
{
	func_1706(cParam0, iParam1);
	if (&iLocal_81[iParam1] == 1)
	{
		return true;
	}
	return false;
}

bool func_1213(int iParam0, int iParam1)
{
	return func_1415(get_clock_hours(), iParam0, iParam1);
}

void func_1214(int iParam0)
{
	if (&iLocal_81[iParam0] == 0)
	{
		iLocal_81[iParam0] = 1;
	}
}

void func_1215(char[4] cParam0)
{
	switch (func_1657(cParam0))
	{
		case 0:
			func_1188(cParam0, "NTV1_O_FRF", -1082130432, 0, 0, -1, -1, 0);
			func_137(cParam0, 1);
			break;
		case 1:
			func_1702(cParam0);
			if (!func_10(cParam0, 8) && func_1662(&iLocal_349))
			{
				func_1188(cParam0, "NTV1_O_FRF", -1082130432, 0, 0, -1, -1, 0);
				func_1670(&iLocal_349);
				func_137(cParam0, 2);
			}
			else if (func_10(cParam0, 8))
			{
				func_137(cParam0, 2);
			}
			if (!is_ped_on_mount(Global_35))
			{
				_0xc71d07c96946e263(get_player_index(), iVar344);
				func_137(cParam0, 20);
			}
			break;
		case 20:
			if (!is_ped_on_mount(Global_35))
			{
				_0xc71d07c96946e263(get_player_index(), iVar344);
				func_1188(cParam0, "NTV1_O_MNT", -1082130432, 0, 0, -1, -1, 0);
				func_1661(&iLocal_349);
				if (!func_1658(7))
				{
					func_1659(7);
				}
			}
			else
			{
				func_1188(cParam0, "NTV1_O_FRF", -1082130432, 0, 0, -1, -1, 0);
			}
			func_137(cParam0, 21);
			break;
		case 21:
			if (!func_1222(Global_35))
			{
				_0xc71d07c96946e263(get_player_index(), iVar344);
			}
			if (is_ped_on_mount(Global_35))
			{
				func_1188(cParam0, "NTV1_O_FRF", -1082130432, 0, 0, -1, -1, 0);
				func_1221(&iLocal_349);
				func_137(cParam0, 1);
			}
			break;
		case 2:
			if (!func_1222(Global_35))
			{
				_0xc71d07c96946e263(get_player_index(), iVar344);
			}
			if (func_1212(cParam0, 27))
			{
				if (func_165(iVar344, 0))
				{
					set_ped_reset_flag(iVar344, 303, true);
				}
				if (!is_ped_on_mount(iVar346))
				{
					func_137(cParam0, -1);
				}
			}
			else if (!func_1251("NTV1_HERBHOLD_02"))
			{
				func_1702(cParam0);
			}
			break;
		case 3:
			if (!func_1222(Global_35))
			{
				_0xc71d07c96946e263(get_player_index(), iVar344);
			}
			if (func_1212(cParam0, 28) && func_854(iVar346, iVar344, 14f, 1))
			{
				if (func_1707(cParam0) >= 1.85f)
				{
					func_1676("NTV1_SADDLEBAG");
				}
				if (func_1257(cParam0, "NTV1_SADDLEBAG", 0, 2f, 0))
				{
					func_137(cParam0, -1);
				}
			}
			break;
		case 5:
			if (func_1707(cParam0) >= 1.25f)
			{
				func_1676("NTV1_HSTART2");
			}
			if (!func_1222(Global_35))
			{
				_0xc71d07c96946e263(get_player_index(), iVar344);
			}
			if (func_1257(cParam0, "NTV1_HSTART2", 0, 1.5f, 0))
			{
				func_137(cParam0, 10);
			}
			break;
		case 9:
			if (func_1212(cParam0, 28) && func_1212(cParam0, 24))
			{
				func_1702(cParam0);
			}
			if (!func_1222(Global_35))
			{
				_0xc71d07c96946e263(get_player_index(), iVar344);
			}
			else if (is_ped_on_mount(iVar346))
			{
				func_137(cParam0, 4);
			}
			break;
		case 10:
			if (!func_165(iVar346, 0) || !is_waypoint_playback_going_on_for_ped(iVar346, 0))
			{
				if (!func_1251("NTV1_NEAR1") && !func_1251("NTV1_NEAR2"))
				{
					func_1702(cParam0);
				}
				return;
			}
			if ((get_ped_waypoint_progress(iVar346) >= 490 && !func_1251("NTV1_NEAR1")) && !func_1251("NTV1_NEAR2"))
			{
				func_1217();
				func_1708();
				if (func_1284())
				{
					if (((func_1250("NTV1_TOP5") && _0xf336e9f989b3518f("NTV1_TOP5") == 0) || (func_1250("NTV1_TOP6_HA") && _0xf336e9f989b3518f("NTV1_TOP6_HA") == 0)) || (func_1250("NTV1_TOP6_HB") && _0xf336e9f989b3518f("NTV1_TOP6_HB") == 0))
					{
						sVar0 = "NTV1_NEAR2";
					}
					else
					{
						sVar0 = "NTV1_NEAR1";
					}
					func_49(0, 0);
					if (func_1257(cParam0, sVar0, 1, 0, 0))
					{
						func_1256(sVar0, 1);
					}
				}
				else if (func_1257(cParam0, "NTV1_NEAR1", 1, 0, 0))
				{
					func_1256("NTV1_NEAR1", 1);
				}
			}
			else if (get_ped_waypoint_progress(iVar346) < 490)
			{
				func_1702(cParam0);
			}
			if ((get_ped_waypoint_progress(iVar346) > 499 && !func_1251("NTV1_TSHRI_A")) && func_1257(cParam0, "NTV1_TSHRI_A", 1, 0, 0))
			{
				func_1256("NTV1_TSHRI_A", 1);
			}
			if (!is_ped_on_mount(Global_35))
			{
				_0xc71d07c96946e263(get_player_index(), iVar344);
				if (get_ped_waypoint_progress(iVar346) < 498)
				{
					func_137(cParam0, 15);
				}
			}
			break;
		case 15:
			if (!is_ped_on_mount(Global_35))
			{
				_0xc71d07c96946e263(get_player_index(), iVar344);
				func_1188(cParam0, "NTV1_O_MNT", -1082130432, 0, 0, -1, -1, 0);
				func_1661(&iLocal_349);
				if (!func_1658(7))
				{
					func_1659(7);
				}
			}
			else
			{
				func_1188(cParam0, "NTV1_O_FRF", -1082130432, 0, 0, -1, -1, 0);
			}
			func_137(cParam0, 16);
			break;
		case 16:
			if (!func_1222(Global_35))
			{
				_0xc71d07c96946e263(get_player_index(), iVar344);
			}
			if (is_ped_on_mount(Global_35))
			{
				func_1188(cParam0, "NTV1_O_FRF", -1082130432, 0, 0, -1, -1, 0);
				func_61(7);
				func_1221(&iLocal_349);
				func_137(cParam0, 10);
			}
			break;
	}
}

bool func_1216(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6)
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
	else if (func_1471(get_entity_coords(iParam0, bParam5, false), vParam1) <= (fParam4 * fParam4))
	{
		return true;
	}
	return false;
}

void func_1217()
{
	_uiprompt_disable_prompt_type_this_frame(7);
	_uiprompt_disable_prompt_type_this_frame(1);
	_uiprompt_disable_prompt_type_this_frame(9);
	_uiprompt_disable_prompt_type_this_frame(8);
}

void func_1218(int iParam0)
{
	if (iParam0 == 1)
	{
		if (_0xea8f168a76a0b9bc(get_player_index(), uVar344, 33, 2))
		{
			_0xa3db37edf9a74635(get_player_index(), uVar344, 33, 2, 0);
		}
		if (_0xea8f168a76a0b9bc(get_player_index(), uVar344, 11, 2))
		{
			_0xa3db37edf9a74635(get_player_index(), uVar344, 11, 2, 0);
		}
	}
	else
	{
		if (!_0xea8f168a76a0b9bc(get_player_index(), uVar344, 33, 2))
		{
			_0xa3db37edf9a74635(get_player_index(), uVar344, 33, 2, 1);
		}
		if (!_0xea8f168a76a0b9bc(get_player_index(), uVar344, 11, 2))
		{
			_0xa3db37edf9a74635(get_player_index(), uVar344, 11, 2, 1);
		}
	}
}

bool func_1219(char[4] cParam0, bool bParam1, bool bParam2, char* sParam3, char* sParam4, int iParam5, bool bParam6, bool bParam7, int iParam8)
{
	if (!_does_volume_exist(bParam1))
	{
		return false;
	}
	if (!_does_volume_exist(bParam2))
	{
		return false;
	}
	if (!_0xf256a75210c5c0eb(bParam2, Global_36))
	{
		func_1709(cParam0, sParam4, "", 1, 0);
		return true;
	}
	else if (!_0xf256a75210c5c0eb(bParam1, Global_36))
	{
		if (!func_1710(cParam0, 16))
		{
			func_1711(cParam0, sParam3, bParam6);
			if (does_blip_exist(cParam0->f_5303))
			{
				remove_blip(&(cParam0->f_5303));
			}
			cParam0->f_5303 = _0xa6ef0c54a3443e70(iParam8, bParam1);
			if (is_itemset_valid(iParam5))
			{
				func_1712(&iParam5, 0);
			}
			func_1713(cParam0, 16);
			func_1220(cParam0, 0, 0);
		}
		return true;
	}
	else if (func_1710(cParam0, 16))
	{
		if (does_blip_exist(cParam0->f_5303))
		{
			remove_blip(&(cParam0->f_5303));
			if (is_itemset_valid(iParam5))
			{
				func_1712(&iParam5, 1);
			}
			func_1220(cParam0, 1, 0);
		}
		func_1714(cParam0, 16);
		if (!func_1715(cParam0))
		{
			if (bParam7)
			{
				_0xdd1232b332cbb9e7(3, 1, 0);
				func_1716(cParam0);
			}
		}
		else
		{
			func_1717(cParam0);
		}
	}
	return false;
}

void func_1220(char[4] cParam0, bool bParam1, int iParam2)
{
	iVar0 = 0;
	while (iVar0 < 30)
	{
		if (func_253(cParam0->f_5423[iVar0]))
		{
			iVar1 = &cParam0->f_5423[iVar0];
			if (!is_entity_dead(iVar1) && iParam2 != iVar1)
			{
				if (bParam1)
				{
					func_1718(cParam0, iVar1, 4096);
					if (func_1719(cParam0, iVar1, 1024))
					{
						iVar2 = get_blip_from_entity(iVar1);
						if (does_blip_exist(iVar2))
						{
							_blip_set_modifier(iVar2, -546708623);
							_blip_set_modifier(iVar2, 231194138);
						}
					}
				}
				else
				{
					func_1720(cParam0, iVar1, 4096);
					if (func_1719(cParam0, iVar1, 1024))
					{
						iVar3 = get_blip_from_entity(iVar1);
						if (does_blip_exist(iVar3))
						{
							_set_blip_flash_style(iVar3, -546708623);
							_set_blip_flash_style(iVar3, 231194138);
						}
					}
				}
			}
		}
		iVar0++;
	}
}

void func_1221(int iParam0)
{
	if (!func_165(*iParam0, 0))
	{
		return;
	}
	if (iVar2221 == 0)
	{
		func_1265(*iParam0, -1749618580, 1, 1);
		func_1268(*iParam0, -401963276, 1);
		func_1268(*iParam0, 231194138, 1);
		iLocal_2224 = 1;
	}
}

bool func_1222(int iParam0)
{
	if (is_ped_injured(iParam0))
	{
		return false;
	}
	return is_ped_on_mount(iParam0);
}

bool func_1223(int iParam0, float fParam1)
{
	if (!func_28(iParam0))
	{
		return false;
	}
	if (func_867(iParam0) > fParam1)
	{
		return true;
	}
	return false;
}

int func_1224(int iParam0, int iParam1, float fParam2)
{
	vVar0 = { get_entity_coords(iParam1, false, false) };
	return func_1721(iParam0, vVar0, fParam2);
}

float func_1225(struct<2> Param0, int iParam2, struct<2> Param3, Vector3 vParam5, int iParam6)
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

bool func_1226(bool bParam0, bool bParam1, float fParam2)
{
	if (bParam0)
	{
		return bParam1;
	}
	return fParam2;
}

bool func_1227(var uParam0, char* sParam1, int iParam2, char* sParam3)
{
	if (!_does_anim_scene_exist(*uParam0))
	{
		*uParam0 = _create_anim_scene(sParam1, iParam2, sParam3, false, true);
	}
	if (_does_anim_scene_exist(*uParam0))
	{
		if (_is_anim_scene_loaded(*uParam0, true, false))
		{
			return true;
		}
		else if (!_is_anim_scene_loading(*uParam0, true))
		{
			load_anim_scene(*uParam0);
		}
	}
	return false;
}

bool func_1228(int iParam0, float fParam1, float fParam2)
{
	fVar0 = (fParam1 + (fParam2 / 2f));
	if (fVar0 > 360f)
	{
		fVar0 = (fVar0 - 360f);
	}
	fVar1 = (fParam1 - (fParam2 / 2f));
	if (fVar1 < 0f)
	{
		fVar1 = (fVar1 + 360f);
	}
	if (!is_ped_injured(iParam0))
	{
		if (fVar0 > fVar1)
		{
			if (get_entity_heading(iParam0) < fVar0 && get_entity_heading(iParam0) > fVar1)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
		else if (get_entity_heading(iParam0) < fVar0 || get_entity_heading(iParam0) > fVar1)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	return false;
}

bool func_1229(int iParam0, char* sParam1, bool bParam2)
{
	if (!_0x23e33cb9f4a3f547(iParam0, sParam1) && !func_1274(iParam0, sParam1))
	{
		return false;
	}
	if (!func_1682(iParam0, sParam1))
	{
		_set_anim_scene_playback_list_bool(iParam0, sParam1, bParam2);
	}
	return true;
}

var func_1230(vector3 vParam0)
{
	uVar0 = vParam0.z;
	if (get_ground_z_for_3d_coord(vParam0, &(vParam0.f_2), false))
	{
		return vParam0.z;
	}
	return uVar0;
}

void func_1231(int iParam0)
{
	if (!_is_anim_scene_loaded(&(uLocal_111[iParam0]), true, false))
	{
		return;
	}
	switch (iParam0)
	{
		case 0:
			func_1404(&(uLocal_111[iParam0]), "p_woodpile01x", &(uLocal_2080[2]));
			func_1404(&(uLocal_111[iParam0]), "s_inv_whiskey01x", &(uLocal_2080[0]));
			func_1404(&(uLocal_111[iParam0]), "s_inv_whiskey01x^1", &(uLocal_2080[3]));
			func_1404(&(uLocal_111[iParam0]), "s_inv_whiskey01x^2", &(uLocal_2080[4]));
			func_1404(&(uLocal_111[iParam0]), "p_flask01x", &(uLocal_2080[1]));
			func_1404(&(uLocal_111[iParam0]), "s_loginteract01x", iVar2087);
			break;
		case 1:
		case 2:
			func_1404(&(uLocal_111[iParam0]), "p_woodpile01x", &(uLocal_2080[2]));
			func_1404(&(uLocal_111[iParam0]), "s_inv_whiskey01x", &(uLocal_2080[0]));
			func_1404(&(uLocal_111[iParam0]), "s_inv_whiskey01x^1", &(uLocal_2080[3]));
			func_1404(&(uLocal_111[iParam0]), "s_inv_whiskey01x^2", &(uLocal_2080[4]));
			func_1404(&(uLocal_111[iParam0]), "p_flask01x", &(uLocal_2080[1]));
			func_1404(&(uLocal_111[iParam0]), "s_loginteract01x", iVar2087);
			func_1404(&(uLocal_111[iParam0]), "Rains_Fall", iVar346);
			func_1404(&(uLocal_111[iParam0]), "player_zero", Global_35);
			break;
		case 3:
			func_1404(&(uLocal_111[iParam0]), "player_zero", Global_35);
			break;
		case 4:
			func_1404(&(uLocal_111[iParam0]), "ArmOfficers1", &(uLocal_356[1]));
			break;
		case 5:
			func_1404(&(uLocal_111[iParam0]), "arthur", Global_35);
			break;
		case 6:
			func_1404(&(uLocal_111[iParam0]), "Rains_Fall", iVar346);
			break;
		case 7:
			if (func_1259())
			{
				func_1404(&(uLocal_111[iParam0]), "PeacePipe", &(iLocal_2074[1]));
				func_1404(&(uLocal_111[iParam0]), "IndianPipeBag", &(iLocal_2074[2]));
				func_1404(&(uLocal_111[iParam0]), "IndianSweetGrass", &(iLocal_2074[3]));
			}
			func_1404(&(uLocal_111[iParam0]), "ArmOfficer1", &(uLocal_356[1]));
			func_1404(&(uLocal_111[iParam0]), "ArmOfficer2", &(uLocal_356[2]));
			func_1404(&(uLocal_111[iParam0]), "ArmOfficer3", &(uLocal_356[3]));
			break;
		case 8:
			if (func_1259())
			{
				func_1404(&(uLocal_111[iParam0]), "IndianRattle", &(iLocal_2074[0]));
				func_1404(&(uLocal_111[iParam0]), "PeacePipe02", &(iLocal_2074[1]));
				func_1404(&(uLocal_111[iParam0]), "IndianPipeBag", &(iLocal_2074[2]));
				func_1404(&(uLocal_111[iParam0]), "IndianSweetGrass", &(iLocal_2074[3]));
			}
			func_1404(&(uLocal_111[iParam0]), "player", Global_35);
			break;
		case 9:
			func_1404(&(uLocal_111[iParam0]), "Rains_Fall", iVar346);
			func_1404(&(uLocal_111[iParam0]), "P_C_HORSE_01", iVar344);
			break;
		case 10:
			func_1404(&(uLocal_111[iParam0]), "rainsfall", iVar346);
			break;
		case 11:
			func_1404(&(uLocal_111[iParam0]), "arthur", Global_35);
			break;
	}
}

void func_1232(int iParam0)
{
	if (!_does_anim_scene_exist(iParam0))
	{
		return;
	}
	if (!_is_anim_scene_loaded(iParam0, true, false))
	{
		return;
	}
	if (_is_anim_scene_started(iParam0, false))
	{
		return;
	}
	start_anim_scene(iParam0);
}

void func_1233(int iParam0, var uParam1, int iParam2, int iParam3)
{
	if (!func_165(iParam0, 0))
	{
		return;
	}
	*uParam1 = { 0f, 0f, 0f };
	uParam1->f_4 = 21030;
	uParam1->f_8 = 4;
	uParam1->f_19 = 4;
	uParam1->f_21 = 4;
	uParam1->f_17 = 4;
	uParam1->f_18 = 4;
	uParam1->f_3 = iParam3;
	uParam1->f_7 = iParam2;
	_0x66f9eb44342bb4c5(iParam0, uParam1);
}

bool func_1234(int iParam0, float fParam1)
{
	if (!_does_anim_scene_exist(iParam0) || !_is_anim_scene_started(iParam0, false))
	{
		return true;
	}
	if (fParam1 > 0f && _get_anim_scene_progress(iParam0) >= fParam1)
	{
		return true;
	}
	return _is_anim_scene_finished(iParam0, false);
}

void func_1235()
{
	_0x88544c0e3291dcae(1);
	func_1722();
}

void func_1236(int iParam0, char* sParam1, bool bParam2)
{
	if (!func_165(iParam0, 0))
	{
		return;
	}
	if (bParam2)
	{
		if (_0xa29fd00d45311eb7(iParam0, sParam1) <= 0f)
		{
			_0x437c08db4febe2bd(iParam0, sParam1, 1f, -1);
		}
	}
	else if (_0xa29fd00d45311eb7(iParam0, sParam1) > 0f)
	{
		_0x437c08db4febe2bd(iParam0, sParam1, 0f, -1);
	}
}

void func_1237()
{
	func_451(&(iLocal_124[19]), 1);
}

bool func_1238(int iParam0, vector3 vParam1, int iParam4, float fParam5, bool bParam6, bool bParam7, bool bParam8, float fParam9, bool bParam10, int iParam11, bool bParam12, bool bParam13, bool bParam14)
{
	func_1211(iParam0, vParam1, 0, fParam5, bParam6, bParam7, bParam8, bParam12, bParam13, bParam14, 0);
	iVar1 = get_mount(iParam0);
	if (is_ped_in_any_vehicle(iParam0, false))
	{
		iVar2 = get_vehicle_ped_is_in(iParam0, false);
	}
	bVar4 = func_1704(iParam0, vParam1, 1);
	if (!func_28(iParam4))
	{
		if (bVar4 <= bParam8)
		{
			if (does_entity_exist(iVar1) || does_entity_exist(iVar2))
			{
				func_29(iParam4, 0);
			}
		}
	}
	else if (bParam10 && bVar4 > bParam8)
	{
		func_450(iParam4);
	}
	if (func_28(iParam4))
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
		if (func_867(iParam4) >= fParam9)
		{
			if (iParam0 == Global_35)
			{
				set_player_may_not_enter_any_vehicle(player_id());
				_0x9f9a829c6751f3c7(player_id(), 28, 1);
			}
			if (!is_entity_dead(iVar1) && !func_1289(iParam0, 501393341))
			{
				if (is_ped_on_mount(iParam0))
				{
					task_dismount_animal(iParam0, 0, 0, 0, 0, 0);
					return true;
				}
			}
			if (!is_entity_dead(iVar2) && !func_1289(iParam0, -828834893))
			{
				if (is_ped_in_any_vehicle(iParam0, false))
				{
					task_leave_any_vehicle(iParam0, 0, 0);
					return true;
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
	return false;
}

bool func_1239(int iParam0, int iParam1, bool bParam2, int iParam3)
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

void func_1240(char[4] cParam0)
{
	iVar0 = func_35(cParam0);
	if (!func_1399(cParam0))
	{
		return;
	}
	func_1723();
	func_1724(cParam0);
	func_1725(cParam0, uLocal_356[0], Local_664[0]);
	func_1726(cParam0, uLocal_356[1], Local_664[1]);
	func_1727(cParam0, uLocal_356[3], Local_664[3]);
	func_1728(cParam0, uLocal_356[2], Local_664[2]);
	func_1729(cParam0, uLocal_356[4], Local_664[4]);
	func_1730(cParam0, uLocal_356[5], Local_664[5]);
	func_1731(cParam0, Local_1466[0], Local_1466[0]);
	func_1731(cParam0, Local_1466[1], Local_1466[1]);
	func_1731(cParam0, Local_1466[2], Local_1466[2]);
	func_1731(cParam0, Local_1466[3], Local_1466[3]);
	func_1731(cParam0, Local_1466[4], Local_1466[4]);
	func_1731(cParam0, Local_1466[5], Local_1466[5]);
	func_1732();
	if (iVar0 == iLocal_78)
	{
		cVar1 = "NTV1_AC";
		sVar2 = "NTV1_AC_FAIL";
		if (func_1219(cParam0, &(iLocal_124[36]), &(iLocal_124[37]), cVar1, sVar2, 0, 0, 1, 408396114))
		{
			func_177(&iLocal_2130);
			func_177(&iLocal_2131);
		}
		else if (!func_1212(cParam0, 7))
		{
			if (!does_blip_exist(iVar2127))
			{
				iLocal_2130 = _blip_add_for_radius(408396114, func_1201(4, 24), 20f);
			}
		}
	}
	if ((((iVar2217 == 0 && func_1666(Global_35, &uLocal_356, 12f, 1)) && func_1239(Global_35, &(iLocal_124[38]), 1, 0)) && func_1733() >= 2f) && _get_ped_crouch_movement(Global_35) == 0)
	{
		iVar3 = 0;
		while (iVar3 < 6)
		{
			func_1734(&(Local_664[iVar3]->f_20), 1);
			iVar3++;
		}
		iLocal_2220 = 1;
	}
	else if (iVar2217 == 1 && (!func_1666(Global_35, &uLocal_356, 12f, 1) || func_1733() < 2f))
	{
		iVar3 = 0;
		while (iVar3 < 6)
		{
			func_1734(&(Local_664[iVar3]->f_20), 0);
			iVar3++;
		}
		iLocal_2220 = 0;
	}
	if (iVar2216 == 0)
	{
		if (func_1216(Global_35, func_1201(4, 24), 60f, 1, 1))
		{
			func_1735(&uLocal_356, -1186550032);
			iLocal_2219 = 1;
		}
	}
	else if (iVar0 < iLocal_78)
	{
		func_1736(&uLocal_356, -1186550032);
		iLocal_2219 = 0;
	}
	if (((iVar2216 == 1 && (!func_1212(cParam0, 13) || func_1212(cParam0, 17))) && func_1212(cParam0, 8)) && !func_1216(Global_35, func_1201(4, 24), 60f, 1, 1))
	{
		func_1736(&uLocal_356, -1186550032);
		iLocal_2219 = 0;
	}
	if (func_1212(cParam0, 14) && iVar2222 == 0)
	{
		func_313(iVar2643, 1385304395, 1, 0, iVar2706, 0, 1065353216, 0);
		iLocal_2225 = 1;
	}
	if (func_1212(cParam0, 4))
	{
		if ((does_entity_exist(&(iLocal_2074[2])) && (((is_entity_dead(&(iLocal_2074[2])) || (is_entity_on_fire(&(iLocal_2074[2])) && !func_165(_get_carrier_as_ped(&(iLocal_2074[2])), 0))) || has_entity_been_damaged_by_entity(&(iLocal_2074[2]), Global_35, 0, 0)) || is_explosion_in_sphere(-1, get_entity_coords(&(iLocal_2074[2]), true, false), 2f))) || func_28(&uLocal_2093))
		{
			func_29(&uLocal_2093, 0);
			if (func_1223(&uLocal_2093, 1.25f))
			{
				func_1709(cParam0, "NTV1_SI_DESTROY", "", 1, 0);
			}
		}
		if ((does_entity_exist(&(iLocal_2074[2])) && !_0x383f64263f946e45(&uVar4, &(iLocal_2074[2]), 4, Global_35, 0, 1)) || func_28(&uLocal_2096))
		{
			func_29(&uLocal_2096, 0);
			if (func_1223(&uLocal_2096, 1.25f))
			{
				func_1709(cParam0, "NTV1_SI_UNREACHABLE", "", 1, 0);
			}
		}
		if (func_1212(cParam0, 8))
		{
			if (func_1278(player_id(), 0, 1, 1, 1))
			{
				if (!func_1737("MISSION_WANTED", 0, 0, -1, -1, 0))
				{
					func_1255(iVar346, -546708623, 1);
					func_1661(&iLocal_349);
					func_1188(cParam0, "MISSION_WANTED", -1082130432, 0, 0, -1, -1, 0);
				}
			}
			else if ((!func_1212(cParam0, 13) || (func_1212(cParam0, 13) && func_1212(cParam0, 17))) && !func_1278(player_id(), 0, 0, 1, 1))
			{
				if (!func_1212(cParam0, 5))
				{
					if (!func_1737("NTV1_O_LTA", 0, 0, -1, -1, 0))
					{
						func_1267(&iLocal_349);
						func_1268(iVar346, -546708623, 1);
						func_1188(cParam0, "NTV1_O_LTA", -1082130432, 0, 0, -1, -1, 0);
					}
				}
				else if (!func_1737("NTV1_O_RTRF", 0, 0, -1, -1, 0))
				{
					func_1267(&iLocal_349);
					func_1268(iVar346, -546708623, 1);
					func_1188(cParam0, "NTV1_O_RTRF", -1082130432, 0, 0, -1, -1, 0);
				}
			}
		}
		else
		{
			func_1738(cParam0, func_1201(4, 24), "NTV1_AC", "NTV1_AC_FAIL", 150f, 225f, 0, 0, 0, 1, 1);
		}
	}
	if (!func_1212(cParam0, 16) && func_1212(cParam0, 13))
	{
		if (does_entity_exist(&(iLocal_2074[2])))
		{
			iVar5 = _get_carrier_as_mount(&(iLocal_2074[2]));
		}
		if ((func_1212(cParam0, 8) && func_165(iVar5, 0)) && func_1739(Global_35) == iVar5)
		{
			iVar3 = 0;
			while (iVar3 < 6)
			{
				func_1195(Local_664[iVar3], 2);
				iVar3++;
			}
			func_1214(16);
		}
	}
	if ((_0xa82964b9d8d6a983() > 0f || func_1278(player_id(), 0, 1, 1, 1)) && !func_1212(cParam0, 13))
	{
		func_42(0);
	}
}

void func_1241()
{
	iVar0 = iVar2238;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		iLocal_2240[iVar1] = 0;
		iVar1++;
	}
	iLocal_2271 = 0;
}

void func_1242()
{
	iLocal_2209 = 0;
	iLocal_2215 = 0;
	iLocal_2217 = 0;
	iLocal_2636 = 0;
}

int func_1243(int iParam0, bool bParam1)
{
	if (!is_ped_group_member(iParam0, get_player_group(get_player_index()), 0))
	{
	}
	set_ped_config_flag(iParam0, 279, false);
	set_blocking_of_non_temporary_events(iParam0, true);
	set_ped_config_flag(iParam0, 152, false);
	set_ped_config_flag(iParam0, 154, false);
	set_ped_config_flag(iParam0, 156, false);
	set_ped_config_flag(iParam0, 25, false);
	set_ped_config_flag(iParam0, 166, false);
	set_ped_config_flag(iParam0, 130, false);
	set_ped_config_flag(iParam0, 178, false);
	set_ped_combat_attributes(iParam0, 87, false);
	_0x9a4ac116cc1eee14(iParam0);
	if (!func_1740())
	{
		_0x9a4ac116cc1eee14(Global_35);
	}
	if (is_ped_in_group(iParam0))
	{
		remove_ped_from_group(iParam0);
	}
	if (does_blip_exist(get_blip_from_entity(iParam0)))
	{
		iVar0 = get_blip_from_entity(iParam0);
	}
	if (does_blip_exist(iVar0))
	{
		remove_blip(&iVar0);
	}
	if (bParam1)
	{
		if (does_entity_belong_to_this_script(iParam0, true))
		{
			set_ped_as_no_longer_needed(&iParam0);
		}
	}
	return 1;
}

void func_1244(bool bParam0)
{
	if (bParam0)
	{
		_0x1e017404784aa6a3(uVar346, -1868085209);
		_0x0d7fd6a55fd63aef(14, 3, bParam0);
		_0x0d7fd6a55fd63aef(19, 3, bParam0);
	}
	else
	{
		_0x2b4ce170de09f346(uVar346, -1868085209);
		_0x660a8f876df1d4f8(14);
		_0x660a8f876df1d4f8(19);
	}
}

void func_1245()
{
	func_1741(0f, 0f, 0f, 0f);
	_0xc6dcc2a3a8825c85(1);
}

void func_1246()
{
	StringCopy(Local_183[0], "NTV1_UC_IB", 16);
	StringCopy(Local_183[1], "NTV1_UC_IF", 16);
	StringCopy(Local_183[2], "NTV1_UC_IL", 16);
	StringCopy(Local_183[3], "NTV1_UC_IB", 16);
	StringCopy(Local_183[4], "NTV1_UC_IB", 16);
	StringCopy(Local_204[0], "NTV1_UC_IB2", 16);
	StringCopy(Local_204[1], "NTV1_UC_IF2", 16);
	StringCopy(Local_204[2], "NTV1_UC_IL2", 16);
	StringCopy(Local_204[3], "NTV1_UC_IB2", 16);
	StringCopy(Local_204[4], "NTV1_UC_IB2", 16);
	Local_2300.f_229[0] = &uLocal_2080[0];
	*Local_2300.f_107[0] = { func_1201(13, 1) };
	Local_2300.f_63[0] = func_1678(13, 1);
	Local_2300.f_273[0] = 0;
	Local_2300.f_240[0] = &iLocal_124[9];
	Local_2300.f_229[1] = &uLocal_2080[1];
	*Local_2300.f_107[1] = { func_1201(13, 3) };
	Local_2300.f_63[1] = func_1678(13, 3);
	Local_2300.f_273[1] = 0;
	Local_2300.f_240[1] = &iLocal_124[10];
	Local_2300.f_229[2] = &uLocal_2080[2];
	*Local_2300.f_107[2] = { func_1201(13, 4) };
	Local_2300.f_63[2] = func_1678(13, 4);
	Local_2300.f_273[2] = 0;
	Local_2300.f_240[2] = &iLocal_124[11];
	Local_2300.f_229[3] = &uLocal_2080[3];
	*Local_2300.f_107[3] = { func_1201(13, 6) };
	Local_2300.f_63[3] = func_1678(13, 6);
	Local_2300.f_273[3] = 0;
	Local_2300.f_240[3] = &iLocal_124[12];
	*Local_2300.f_107[4] = { func_1201(13, 7) };
	Local_2300.f_63[4] = func_1678(13, 7);
	Local_2300.f_273[4] = 0;
	*Local_2300.f_144[4] = { func_1201(4, 24) };
	Local_2300.f_288[0] = &uLocal_2157[0];
	Local_2300.f_288[1] = &uLocal_2157[1];
	Local_2300.f_288[2] = &uLocal_2157[2];
	Local_2300.f_288[3] = &uLocal_2157[3];
	Local_2300.f_74[0] = 10f;
	Local_2300.f_85[0] = 10f;
	Local_2300.f_96[0] = -0.008f;
	Local_2300.f_74[1] = 10f;
	Local_2300.f_85[1] = 10f;
	Local_2300.f_96[1] = -0.008f;
	Local_2300.f_74[2] = 10f;
	Local_2300.f_85[2] = 10f;
	Local_2300.f_96[2] = -0.008f;
	Local_2300.f_74[3] = 10f;
	Local_2300.f_85[3] = 10f;
	Local_2300.f_96[3] = -0.008f;
	Local_2300.f_74[4] = 10f;
	Local_2300.f_85[4] = 10f;
	Local_2300.f_96[4] = -0.008f;
	Local_2300.f_229[5] = &uLocal_2080[6];
	*Local_2300.f_107[5] = { func_1201(13, 0) };
	Local_2300.f_63[5] = func_1678(13, 0);
	Local_2300.f_273[5] = 0;
	Local_2300.f_240[5] = &iLocal_124[13];
	Local_2300.f_288[5] = &uLocal_2157[5];
	StringCopy(Local_183[5], "NTV1_UC_IF", 16);
	StringCopy(Local_204[5], "NTV1_UC_IF2", 16);
	Local_2300.f_74[5] = 10f;
	Local_2300.f_85[5] = 10f;
	Local_2300.f_96[5] = -0.008f;
	Local_2300.f_229[6] = &uLocal_2080[5];
	*Local_2300.f_107[6] = { func_1201(13, 2) };
	Local_2300.f_63[6] = func_1678(13, 2);
	Local_2300.f_273[6] = 0;
	Local_2300.f_288[6] = &uLocal_2157[6];
	StringCopy(Local_183[6], "NTV1_UC_IB", 16);
	StringCopy(Local_204[6], "NTV1_UC_IB2", 16);
	Local_2300.f_74[6] = 10f;
	Local_2300.f_85[6] = 10f;
	Local_2300.f_96[6] = -0.008f;
	Local_2300.f_229[7] = &uLocal_2080[7];
	*Local_2300.f_107[7] = { func_1201(13, 5) };
	Local_2300.f_63[7] = func_1678(13, 5);
	Local_2300.f_273[7] = 0;
	Local_2300.f_240[7] = &iLocal_124[14];
	Local_2300.f_288[7] = &uLocal_2157[7];
	StringCopy(Local_183[7], "NTV1_UC_IB", 16);
	StringCopy(Local_204[7], "NTV1_UC_IB2", 16);
	Local_2300.f_74[7] = 10f;
	Local_2300.f_85[7] = 10f;
	Local_2300.f_96[7] = -0.008f;
	func_1742(&Local_2300);
	func_1743(&Local_2300, &Local_183, 1075838976);
}

void func_1247(char[4] cParam0)
{
	switch (func_1657(cParam0))
	{
		case 0:
			if (func_1257(cParam0, "NTV1_ASHRI_01", 0, 0, 0))
			{
				func_1233(iVar346, &(Local_464.f_68), 1500, Global_35);
				func_1233(Global_35, &uLocal_2275, 1500, iVar346);
				func_1661(&iLocal_349);
				func_61(7);
				iLocal_2131 = _blip_add_for_radius(408396114, func_1201(7, 5), 32.5f);
				func_1188(cParam0, "NTV1_O_SFC", -1082130432, 0, 0, -1, -1, 0);
				func_137(cParam0, 1);
			}
			break;
		case 1:
			if (func_1257(cParam0, "NTV1_O_SFC", 5, 2f, 0))
			{
				func_1188(cParam0, "NTV1_O_SFC", -1082130432, 0, 0, -1, -1, 0);
				func_137(cParam0, 2);
			}
			break;
		case 2:
			if (func_1212(cParam0, 0) || func_1212(cParam0, 1))
			{
				func_1256("NTV1_RIRC_03", 1);
				func_1661(&iLocal_349);
				func_177(&iLocal_2131);
				if (!func_1212(cParam0, 1))
				{
					func_177(&iLocal_2130);
					iLocal_2130 = func_1685(408396114, func_1201(13, 7), 1);
				}
				func_1188(cParam0, "NTV1_O_ICC", -1082130432, 0, 0, -1, -1, 0);
				func_137(cParam0, 3);
			}
			break;
		case 3:
			if (func_1216(Global_35, func_1201(13, 7), 3f, 1, 1) || func_1257(cParam0, "NTV1_O_ICC", 6, 22f, 0))
			{
				func_1188(cParam0, "NTV1_O_ICC", -1082130432, 0, 0, -1, -1, 0);
				func_137(cParam0, -1);
			}
			break;
	}
}

void func_1248(char[4] cParam0)
{
	if (iVar2214 == 1)
	{
		return;
	}
	func_878(cParam0);
	func_1744(&Local_2300);
	func_1745(cParam0);
	if ((((func_1212(cParam0, 1) || func_1212(cParam0, 0)) && iVar2220 == 0) && !is_gameplay_hint_active()) && !_0x3ab6c7b0bb0df4b1(Global_35, &(uLocal_111[3])))
	{
		func_185(&Local_2300);
		iLocal_2217 = 1;
	}
	if (!func_1746(cParam0, &Local_2300, 0))
	{
		if (((&Local_2300.f_2[0] == 1 && iVar2207 <= 1) && !func_1251("NTV1_CLUE00_DONE")) && func_854(iVar346, Global_35, 13.5f, 1))
		{
			iLocal_2210 = 1;
			func_1256("NTV1_CLUE00_DONE", 1);
		}
	}
	else
	{
		if ((&Local_2300.f_2[6] == 0 && !func_1251("NTV1_CLUE06_DONE")) && func_1747(&Local_2300, 6))
		{
			Local_2300.f_2[6] = 1;
			func_1256("NTV1_CLUE06_DONE", 1);
		}
		if ((&Local_2300.f_2[7] == 0 && !func_1251("NTV1_CLUE07_DONE")) && func_1747(&Local_2300, 7))
		{
			Local_2300.f_2[7] = 1;
			func_1256("NTV1_CLUE07_DONE", 1);
		}
		func_1747(&Local_2300, 0);
	}
	if (!func_1746(cParam0, &Local_2300, 1))
	{
		if (((&Local_2300.f_2[1] == 1 && iVar2207 <= 2) && !func_1251("NTV1_CLUE01_DONE")) && func_854(iVar346, Global_35, 13.5f, 1))
		{
			bVar0 = (!does_entity_exist(&(Local_2300.f_229[1])) || has_object_been_broken(&(Local_2300.f_229[1])));
			iLocal_2210 = func_1143(!bVar0, 2, 3);
			func_1256("NTV1_CLUE01_DONE", 1);
		}
	}
	else
	{
		if ((&Local_2300.f_2[5] == 0 && !func_1251("NTV1_CLUE05_DONE")) && func_1747(&Local_2300, 5))
		{
			Local_2300.f_2[5] = 1;
			func_1256("NTV1_CLUE05_DONE", 1);
		}
		func_1747(&Local_2300, 1);
	}
	if (!func_1746(cParam0, &Local_2300, 2))
	{
		if (((&Local_2300.f_2[2] == 1 && iVar2207 <= 3) && !func_1251("NTV1_CLUE02_DONE")) && func_854(iVar346, Global_35, 13.5f, 1))
		{
			bVar1 = (!does_entity_exist(&(Local_2300.f_229[2])) || has_object_been_broken(&(Local_2300.f_229[2])));
			iLocal_2210 = func_1143(!bVar1, 3, 4);
			func_1256("NTV1_CLUE02_DONE", 1);
		}
	}
	if (!func_1746(cParam0, &Local_2300, 3))
	{
		if (((&Local_2300.f_2[3] == 1 && iVar2207 <= 4) && !func_1251("NTV1_CLUE03_DONE")) && func_854(iVar346, Global_35, 13.5f, 1))
		{
			bVar2 = (!does_entity_exist(&(Local_2300.f_229[3])) || has_object_been_broken(&(Local_2300.f_229[3])));
			iLocal_2210 = func_1143(!bVar2, 4, 6);
			func_1256("NTV1_CLUE03_DONE", 1);
		}
	}
	else
	{
		if ((&Local_2300.f_2[6] == 0 && !func_1251("NTV1_CLUE06_DONE")) && func_1747(&Local_2300, 6))
		{
			Local_2300.f_2[6] = 1;
			func_1256("NTV1_CLUE06_DONE", 1);
		}
		if ((&Local_2300.f_2[7] == 0 && !func_1251("NTV1_CLUE07_DONE")) && func_1747(&Local_2300, 7))
		{
			Local_2300.f_2[7] = 1;
			func_1256("NTV1_CLUE07_DONE", 1);
		}
		func_1747(&Local_2300, 3);
	}
	if (!func_1746(cParam0, &Local_2300, 5))
	{
		if (&Local_2300.f_2[5] == 1 && !func_1251("NTV1_CLUE05_DONE"))
		{
			func_1256("NTV1_CLUE05_DONE", 1);
		}
	}
	else if ((&Local_2300.f_2[1] == 0 && !func_1251("NTV1_CLUE01_DONE")) && func_1747(&Local_2300, 1))
	{
		Local_2300.f_2[1] = 1;
		func_1256("NTV1_CLUE01_DONE", 1);
	}
	if (!func_1746(cParam0, &Local_2300, 6))
	{
		if (&Local_2300.f_2[6] == 1 && !func_1251("NTV1_CLUE06_DONE"))
		{
			func_1256("NTV1_CLUE06_DONE", 1);
		}
	}
	else
	{
		if ((&Local_2300.f_2[0] == 0 && !func_1251("NTV1_CLUE00_DONE")) && func_1747(&Local_2300, 0))
		{
			Local_2300.f_2[0] = 1;
			func_1256("NTV1_CLUE00_DONE", 1);
		}
		if ((&Local_2300.f_2[7] == 0 && !func_1251("NTV1_CLUE07_DONE")) && func_1747(&Local_2300, 7))
		{
			Local_2300.f_2[7] = 1;
			func_1256("NTV1_CLUE07_DONE", 1);
		}
		func_1747(&Local_2300, 6);
	}
	if (!func_1746(cParam0, &Local_2300, 7))
	{
		if (&Local_2300.f_2[7] == 1 && !func_1251("NTV1_CLUE07_DONE"))
		{
			func_1256("NTV1_CLUE07_DONE", 1);
		}
	}
	else
	{
		if ((&Local_2300.f_2[6] == 0 && !func_1251("NTV1_CLUE06_DONE")) && func_1747(&Local_2300, 6))
		{
			Local_2300.f_2[6] = 1;
			func_1256("NTV1_CLUE06_DONE", 1);
		}
		if ((&Local_2300.f_2[0] == 0 && !func_1251("NTV1_CLUE00_DONE")) && func_1747(&Local_2300, 0))
		{
			Local_2300.f_2[0] = 1;
			func_1256("NTV1_CLUE00_DONE", 1);
		}
	}
}

bool func_1249(char[4] cParam0)
{
	if ((iVar2635 >= 1 && !is_player_control_on(get_player_index())) && is_ped_ragdoll(Global_35))
	{
		func_1709(cParam0, "PLAYER_DEAD", "", 1, 1);
	}
	switch (iVar2635)
	{
		case 0:
			if (func_1212(cParam0, 1))
			{
				if (!func_1258() || !func_1259())
				{
					return false;
				}
				func_1748(1);
			}
			break;
		case 1:
			if (func_1212(cParam0, 1))
			{
				set_player_control(get_player_index(), false, 0, false);
				_hide_hud_component(724769646);
				func_1749(0);
				func_47();
				func_177(&iLocal_2131);
				func_177(&iLocal_2130);
				func_1188(cParam0, "NTV1_O_ATC", -1082130432, 0, 0, -1, -1, 0);
				func_1255(iVar346, -546708623, 1);
				iLocal_2130 = _blip_add_for_radius(408396114, func_1201(4, 24), 20f);
				if (_0x45ab66d02b601fa7(get_player_index()))
				{
					_0x64ff4bf9af59e139(get_player_index(), 1);
				}
				if (_0xb16223cb7da965f0(get_player_index()))
				{
					_0xae637bb8ef017875(get_player_index(), 1);
				}
				func_1231(7);
				func_1232(&(uLocal_111[7]));
				if (iVar2207 <= 6 && !func_1212(cParam0, 0))
				{
					iLocal_2210 = 7;
				}
				func_1748(2);
			}
			break;
		case 2:
			if (!func_1749(0))
			{
				return false;
			}
			func_1272();
			clear_ped_tasks(Global_35, 1, 0);
			open_sequence_task(&uLocal_2128);
			if (is_ped_on_mount(Global_35))
			{
				task_dismount_animal(0, 0, 0, 0, 0, 0);
			}
			task_follow_waypoint_recording(0, sLocal_170, 0, 5644, -1, 0, 0, -1);
			task_achieve_heading(0, func_1678(13, 7), 0);
			close_sequence_task(iVar2125);
			task_perform_sequence(Global_35, iVar2125);
			clear_sequence_task(&uLocal_2128);
			set_current_ped_weapon(Global_35, -160924582, false, 0, false, false);
			_0xcffc3eccd7a5cceb(get_player_index(), -160924582, 0);
			func_450(&uLocal_2102);
			set_gameplay_coord_hint(func_1663(1, 0), 45000, 5000, 3000, 0);
			func_1748(3);
			break;
		case 3:
			func_29(&uLocal_2102, 0);
			func_1273();
			if (!func_346(-160924582, 1, 0))
			{
				func_317(-160924582, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			}
			if ((func_1750(Global_35, func_1201(13, 7), func_1678(13, 7), 0.75f, 16f, 1) && func_1751(func_1663(1, 0), 1103626240, 1)) || func_1223(&uLocal_2102, 5.5f))
			{
				if (func_1212(cParam0, 0))
				{
					set_current_ped_weapon(Global_35, -160924582, false, 0, false, true);
					_0xcffc3eccd7a5cceb(get_player_index(), -160924582, 0);
					func_1748(4);
				}
				else
				{
					set_current_ped_weapon(Global_35, -160924582, false, 0, false, true);
					_0xcffc3eccd7a5cceb(get_player_index(), -160924582, 0);
					func_1748(4);
				}
			}
			break;
		case 4:
			if (iVar2708 < 5)
			{
				task_swap_weapon(Global_35, 1, 0, 0, 0);
			}
			if (_0x45ab66d02b601fa7(get_player_index()))
			{
				_0x64ff4bf9af59e139(get_player_index(), 1);
			}
			if (_0xb16223cb7da965f0(get_player_index()))
			{
				_0xae637bb8ef017875(get_player_index(), 1);
			}
			uLocal_2711 = iVar2708 + 1;
			func_450(&uLocal_2102);
			func_1214(3);
			_0x3946fc742ac305cd(get_player_index(), iVar346, "Native_1", func_1201(6, 7), 0, 0);
			func_1748(5);
			break;
		case 5:
			func_29(&uLocal_2102, 0);
			if (func_1037(Global_35, 0, 1, 0) == -160924582)
			{
				func_450(&uLocal_2102);
				func_1748(6);
			}
			else if (func_1223(&uLocal_2102, 2f) && !func_1671(Global_35, 716706914))
			{
				if (!func_346(-160924582, 1, 0))
				{
					func_317(-160924582, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
				}
				set_current_ped_weapon(Global_35, -160924582, iVar2708 >= 5, 0, false, true);
				_0xcffc3eccd7a5cceb(get_player_index(), -160924582, 0);
				func_1748(4);
			}
			break;
		case 6:
			func_29(&uLocal_2102, 0);
			if (func_1223(&uLocal_2102, 0.2f))
			{
				if (func_1212(cParam0, 0))
				{
					if (func_1229(&(uLocal_111[6]), "pl_Camp_Spotted_RainsFall", 1))
					{
						set_anim_scene_origin(&(uLocal_111[6]), vLocal_2108, 0f, 0f, 0f, 2);
						func_1231(6);
						func_1232(&(uLocal_111[6]));
						func_1195(&Local_464, -1);
						set_player_control(get_player_index(), true, 0, false);
						set_player_forced_aim(get_player_index(), true, 0, -1, false);
						_hide_hud_component(724769646);
						if (is_first_person_aim_cam_active() && !is_gameplay_hint_active())
						{
							set_entity_heading(Global_35, func_1678(13, 7));
							set_gameplay_coord_hint(func_1663(1, 2), 10000, 0, 3000, 0);
						}
						func_1748(9);
					}
				}
				else if (func_1229(&(uLocal_111[5]), "pl_Arthur_Call_Over", 1))
				{
					vLocal_2111.f_2 = func_1230(vLocal_2111);
					set_anim_scene_origin(&(uLocal_111[5]), vLocal_2111, 0f, 0f, 0f, 2);
					func_1231(5);
					func_1232(&(uLocal_111[5]));
					func_1748(7);
				}
			}
			break;
		case 7:
			func_29(&uLocal_2102, 0);
			disable_control_action(0, -39308912, false);
			disable_control_action(0, 1301263553, false);
			disable_control_action(0, 992265328, false);
			disable_control_action(0, -1304887797, false);
			disable_control_action(0, -796643617, false);
			disable_control_action(0, -141724873, false);
			disable_control_action(0, 527275493, false);
			disable_control_action(0, 1287709438, false);
			if (!func_1682(&(uLocal_111[5]), "pl_Arthur_Call_Over"))
			{
				func_1752();
				set_player_forced_aim(get_player_index(), true, 0, -1, false);
			}
			if ((func_1234(&(uLocal_111[5]), 0.98f) && func_1682(&(uLocal_111[5]), "pl_Arthur_Call_Over")) || func_1682(&(uLocal_111[6]), "pl_Camp_Spotted_RainsFall"))
			{
				if (!func_1682(&(uLocal_111[6]), "pl_Camp_Spotted_RainsFall"))
				{
					reset_anim_scene(&(uLocal_111[6]), "pl_Camp_Spotted_RainsFall");
				}
				set_player_control(get_player_index(), true, 0, false);
				set_player_forced_aim(get_player_index(), true, 0, -1, false);
				_hide_hud_component(724769646);
				func_1748(8);
			}
			break;
		case 8:
			func_1752();
			set_player_forced_aim(get_player_index(), true, 0, -1, false);
			disable_control_action(0, -39308912, false);
			disable_control_action(0, 1301263553, false);
			disable_control_action(0, 992265328, false);
			disable_control_action(0, -1304887797, false);
			disable_control_action(0, -796643617, false);
			disable_control_action(0, -141724873, false);
			disable_control_action(0, 527275493, false);
			disable_control_action(0, 1287709438, false);
			if (func_1682(&(uLocal_111[6]), "pl_Camp_Spotted_RainsFall"))
			{
				set_player_control(get_player_index(), true, 0, false);
				set_player_forced_aim(get_player_index(), true, 0, -1, false);
				_hide_hud_component(724769646);
				func_1748(9);
			}
			else
			{
				func_29(&uLocal_2102, 0);
				if (func_1223(&uLocal_2102, 5f))
				{
					clear_ped_tasks_immediately(iVar346, false, true);
					if (func_1229(&(uLocal_111[6]), "pl_Camp_Spotted_RainsFall", 1))
					{
						set_anim_scene_origin(&(uLocal_111[6]), vLocal_2108, 0f, 0f, 0f, 2);
						func_1231(6);
						func_1232(&(uLocal_111[6]));
						iLocal_2210 = 7;
						func_450(&uLocal_2102);
						func_1195(&Local_464, 17);
					}
				}
			}
			break;
		case 9:
			func_29(&uLocal_2102, 0);
			if (func_854(Global_35, iVar346, 10f, 1))
			{
				func_1233(iVar346, &(Local_464.f_68), 1500, Global_35);
				func_1233(Global_35, &uLocal_2275, 1500, iVar346);
			}
			if (func_1252() || !func_1223(&uLocal_2102, 2.5f))
			{
				func_1752();
				set_player_forced_aim(get_player_index(), true, 0, -1, false);
				disable_control_action(0, -39308912, false);
				disable_control_action(0, 1301263553, false);
				disable_control_action(0, 992265328, false);
				disable_control_action(0, -1304887797, false);
				disable_control_action(0, -796643617, false);
				disable_control_action(0, -141724873, false);
				disable_control_action(0, 527275493, false);
				disable_control_action(0, 1287709438, false);
			}
			if (((func_1250("NTV1_IG6_HELP") && get_current_scripted_conversation_line("NTV1_IG6_HELP") >= 8) || func_1234(&(uLocal_111[6]), -1082130432)) || func_1223(&uLocal_2102, 30f))
			{
				func_1235();
				func_1748(10);
			}
			else if (func_1252())
			{
				func_1752();
				set_player_forced_aim(get_player_index(), true, 0, -1, false);
			}
			break;
		case 10:
			func_29(&uLocal_2102, 0);
			func_1753(iLocal_244, 1065353216);
			if (func_854(Global_35, iVar346, 10f, 1) && func_1250("NTV1_IG6_HELP"))
			{
				func_1233(iVar346, &(Local_464.f_68), 1500, Global_35);
				func_1233(Global_35, &uLocal_2275, 1500, iVar346);
			}
			if (func_1223(&uLocal_2102, 2f))
			{
				if (!func_1252() || func_1754(Global_35, 0) != -160924582)
				{
					set_player_control(get_player_index(), true, 0, false);
					set_player_forced_aim(get_player_index(), false, 0, -1, false);
					freeze_entity_position(Global_35, false);
					_display_hud_component(724769646);
					_0xc67a4910425f11f1(get_player_index(), 0);
					func_1748(11);
				}
				else if (func_1223(&uLocal_2102, 7.5f) && !func_1250("NTV1_IG6_HELP"))
				{
					set_player_forced_aim(get_player_index(), false, 0, -1, false);
				}
				else if (func_1252())
				{
					func_1752();
				}
			}
			else if (func_1252() || !func_1223(&uLocal_2102, 2.5f))
			{
				func_1752();
				set_player_forced_aim(get_player_index(), true, 0, -1, false);
				disable_control_action(0, -39308912, false);
				disable_control_action(0, 1301263553, false);
				disable_control_action(0, 992265328, false);
				disable_control_action(0, -1304887797, false);
				disable_control_action(0, -796643617, false);
				disable_control_action(0, -141724873, false);
				disable_control_action(0, 527275493, false);
				disable_control_action(0, 1287709438, false);
			}
			break;
		case 11:
			_0xc67a4910425f11f1(get_player_index(), 0);
			if (func_854(Global_35, iVar346, 10f, 1) && func_1250("NTV1_IG6_HELP"))
			{
				func_1233(iVar346, &(Local_464.f_68), 1500, Global_35);
				func_1233(Global_35, &uLocal_2275, 1500, iVar346);
			}
			return true;
		case -1:
			break;
	}
	return false;
}

bool func_1250(char* sParam0)
{
	return func_1755(sParam0);
}

bool func_1251(char* sParam0)
{
	iVar0 = get_hash_key(sParam0);
	if (func_1756(iVar0) != -1)
	{
		return true;
	}
	return false;
}

bool func_1252()
{
	if (func_791(Global_35, 1, 0, 1) != -160924582 && !is_entity_dead(Global_35))
	{
		return func_1757(4);
	}
	if (&Global_1911669 == 5)
	{
		return true;
	}
	return false;
}

int func_1253(char* sParam0, int iParam1)
{
	return _0x935dbd96d4a3da1f(sParam0, iParam1);
}

int func_1254(char* sParam0)
{
	return _0x295859eb18f48d82(sParam0);
}

bool func_1255(int iParam0, int iParam1, int iParam2)
{
	if (!does_entity_exist(iParam0) || (iParam2 == 1 && is_entity_dead(iParam0)))
	{
		return false;
	}
	iVar0 = get_blip_from_entity(iParam0);
	if (!does_blip_exist(iVar0))
	{
		return false;
	}
	return _set_blip_flash_style(iVar0, iParam1);
}

void func_1256(char* sParam0, bool bParam1)
{
	iVar0 = get_hash_key(sParam0);
	if (bParam1)
	{
		if (!func_1251(sParam0))
		{
			iVar1 = iVar2236;
			if (iVar2267 < iVar1)
			{
				iLocal_2240[iVar2267] = iVar0;
				iLocal_2271 = iVar2267 + 1;
			}
		}
	}
	else
	{
		iVar2 = func_1756(iVar0);
		if (iVar2 != -1)
		{
			iLocal_2240[iVar2] = 0;
			func_1758();
			iLocal_2271 = (iVar2267 - 1);
		}
	}
}

bool func_1257(char[4] cParam0, char* sParam1, int iParam2, float fParam3, char* sParam4)
{
	if (iParam2 == 0 || iParam2 == 4)
	{
		if (func_1284() || func_212())
		{
			return false;
		}
	}
	else if (iParam2 == 7 && func_213())
	{
		return false;
	}
	else if (iParam2 == 6 && func_1759(sParam1))
	{
		func_450(&(cParam0->f_13106));
		return true;
	}
	if (iParam2 != 2 && iParam2 != 3)
	{
		func_29(&(cParam0->f_13106), 0);
	}
	if ((func_1223(&(cParam0->f_13106), fParam3) || fParam3 <= 0f) || (iParam2 == 2 && iParam2 == 3))
	{
		switch (iParam2)
		{
			case 0:
				if (!func_1760(cParam0, sParam1, 0))
				{
					return false;
				}
				break;
			case 1:
				func_1760(cParam0, sParam1, 0);
				break;
			case 2:
			case 3:
				bVar0 = iParam2 == 2;
				if (!is_string_null_or_empty(sParam4))
				{
					if (_0x1ecc76792f661cf5(sParam4))
					{
						pause_scripted_conversation(sParam4, bVar0, true, false, true);
						func_450(&(cParam0->f_13106));
						return false;
					}
					else if (!_0xd89504d9d7d5057d(sParam4) || !_0xf01c570e0a0a1e67(sParam4))
					{
						if (iParam2 == 3)
						{
							func_1760(cParam0, sParam1, 0);
						}
						else if (!func_1760(cParam0, sParam1, 0))
						{
							return false;
						}
					}
					if (_0xd89504d9d7d5057d(sParam4) && _0xf01c570e0a0a1e67(sParam4))
					{
						if (!func_28(&(cParam0->f_13106)) && func_1760(cParam0, sParam1, 0))
						{
							func_29(&(cParam0->f_13106), 0);
							return false;
						}
						if (func_28(&(cParam0->f_13106)))
						{
							if (!_0x1ecc76792f661cf5(sParam1))
							{
								restart_scripted_conversation(sParam4);
								return true;
							}
							else
							{
								return false;
							}
						}
					}
				}
				else if (iParam2 == 3)
				{
					func_1760(cParam0, sParam1, 0);
				}
				else if (!func_1760(cParam0, sParam1, 0))
				{
					return false;
				}
				break;
			case 4:
			case 6:
				func_1761(cParam0, sParam1, 0, 7500, 0, -1082130432, 0, 0, -1, -1, 0);
				break;
			case 5:
				_0xdd1232b332cbb9e7(3, 1, 0);
				func_1761(cParam0, sParam1, 0, 7500, 1, -1082130432, 0, 0, -1, -1, 0);
				break;
			case 7:
				func_695(sParam1, 10000, 0, 0, 0, 1);
				break;
			case 8:
				func_115(1);
				func_695(sParam1, 10000, 0, 0, 0, 1);
				break;
			case 9:
				func_115(1);
				func_1762(sParam1, 0, 0, 1);
				break;
		}
		func_450(&(cParam0->f_13106));
		return true;
	}
	return false;
}

bool func_1258()
{
	if (iLocal_232 == 1)
	{
		return true;
	}
	if (_does_propset_exist(iLocal_227))
	{
		if (!_0xf42db680a8b2a4d9(iLocal_227))
		{
			return false;
		}
		else
		{
			iLocal_232 = 1;
			return true;
		}
	}
	iLocal_227 = _create_propset(iLocal_228, func_1201(1, 7), 1, 0f, 1200f, false, true);
	return false;
}

bool func_1259()
{
	if (iLocal_230 == 1)
	{
		return true;
	}
	if (!func_1258())
	{
		return false;
	}
	if (!is_itemset_valid(iVar2071))
	{
		iLocal_2073 = create_itemset(false);
	}
	if (_get_entities_from_propset(iLocal_227, iVar2071, 0, true, false) <= 0)
	{
	}
	if (!is_itemset_valid(iVar2071))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 <= (get_itemset_size(iVar2071) - 1))
	{
		iVar1 = _0x18013392501ce5dc(get_indexed_item_in_itemset(iVar0, iVar2071));
		if (!does_entity_exist(iVar1))
		{
		}
		else if (get_entity_model(iVar1) == 1864593632)
		{
			iLocal_2074[0] = iVar1;
			set_entity_load_collision_flag(&(iLocal_2074[0]), 1);
		}
		else if (get_entity_model(iVar1) == 1938396524)
		{
			iLocal_2074[1] = iVar1;
			set_entity_load_collision_flag(&(iLocal_2074[1]), 1);
		}
		else if (get_entity_model(iVar1) == 1679114625)
		{
			iLocal_2074[2] = iVar1;
			freeze_entity_position(&(iLocal_2074[2]), true);
			set_entity_load_collision_flag(&(iLocal_2074[2]), 1);
		}
		else if (get_entity_model(iVar1) == 1904304553)
		{
			iLocal_2074[3] = iVar1;
			set_entity_load_collision_flag(&(iLocal_2074[3]), 1);
		}
		iVar0++;
	}
	func_1763(0);
	iLocal_230 = 1;
	return true;
}

void func_1260(var uParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_1195((*uParam0)[iVar0], iParam1);
		iVar0++;
	}
}

bool func_1261()
{
	if (iLocal_231 == 1)
	{
		return true;
	}
	if (!func_871() || !func_1258())
	{
		return false;
	}
	_0xc4b67ef3fd65622d(iLocal_227, func_1201(1, 7), 1, 0);
	if (!is_itemset_valid(iVar2071))
	{
		iLocal_2073 = create_itemset(false);
	}
	clean_itemset(iVar2071);
	if (_get_entities_from_propset(iLocal_227, iVar2071, 0, true, false) <= 0)
	{
	}
	if (!is_itemset_valid(iVar2071))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 <= (get_itemset_size(iVar2071) - 1))
	{
		iVar1 = _0x18013392501ce5dc(get_indexed_item_in_itemset(iVar0, iVar2071));
		if (!does_entity_exist(iVar1))
		{
		}
		else if (get_entity_model(iVar1) == 1864593632)
		{
			iLocal_2074[0] = iVar1;
			set_entity_load_collision_flag(&(iLocal_2074[0]), 1);
		}
		else if (get_entity_model(iVar1) == 1938396524)
		{
			iLocal_2074[1] = iVar1;
			set_entity_load_collision_flag(&(iLocal_2074[1]), 1);
		}
		else if (get_entity_model(iVar1) == 1679114625)
		{
			iLocal_2074[2] = iVar1;
			freeze_entity_position(&(iLocal_2074[2]), true);
			set_entity_load_collision_flag(&(iLocal_2074[2]), 1);
		}
		else if (get_entity_model(iVar1) == 1904304553)
		{
			iLocal_2074[3] = iVar1;
			set_entity_load_collision_flag(&(iLocal_2074[3]), 1);
		}
		iVar0++;
	}
	func_1763(0);
	iLocal_231 = 1;
	return true;
}

void func_1262(char[4] cParam0)
{
	switch (func_1657(cParam0))
	{
		case 0:
			func_1188(cParam0, "NTV1_O_ATC", -1082130432, 0, 0, -1, -1, 0);
			func_177(&iLocal_2130);
			func_177(&iLocal_2131);
			func_1255(iVar346, -546708623, 1);
			iLocal_2131 = _blip_add_for_radius(408396114, func_1201(4, 24), 20f);
			func_137(cParam0, 49);
			break;
		case 49:
			if (((func_1759("NTV1_O_ATC") || func_1251("NTV1_O_ATC")) || func_1216(Global_35, func_1201(4, 24), 85f, 1, 1)) || func_1257(cParam0, "NTV1_O_ATC", 6, 3f, 0))
			{
				func_1188(cParam0, "NTV1_O_ATC", -1082130432, 0, 0, -1, -1, 0);
				func_137(cParam0, -1);
			}
			break;
		case 1:
			if (func_1212(cParam0, 4) && !func_1737("NTV1_O_SFSI", 0, 0, -1, -1, 0))
			{
				func_1188(cParam0, "NTV1_O_SFSI", -1082130432, 0, 0, -1, -1, 0);
			}
			if (!func_1251("NTV1_O_SFSI") && (func_1212(cParam0, 7) || func_1257(cParam0, "NTV1_O_SFSI", 5, 10f, 0)))
			{
				func_1188(cParam0, "NTV1_O_SFSI", -1082130432, 0, 0, -1, -1, 0);
				func_177(&iLocal_2130);
				func_177(&iLocal_2131);
				iLocal_2131 = _blip_add_for_radius(408396114, func_1201(4, 24), 20f);
				func_1256("NTV1_O_SFSI", 1);
				func_137(cParam0, -1);
			}
			break;
		case 2:
			if (func_1212(cParam0, 7) && !func_1737("NTV1_O_RSI", 0, 0, -1, -1, 0))
			{
				func_1188(cParam0, "NTV1_O_RSI", -1082130432, 0, 0, -1, -1, 0);
			}
			if ((func_1212(cParam0, 8) || iVar2633 >= 3) || func_1257(cParam0, "NTV1_O_RSI", 4, 22f, 0))
			{
				if (func_1212(cParam0, 8))
				{
					func_1188(cParam0, "NTV1_O_LTA", -1082130432, 0, 0, -1, -1, 0);
				}
				else
				{
					func_177(&iLocal_2130);
					iLocal_2130 = func_1265(&(iLocal_2074[2]), 1055493006, 1, 1);
					func_1188(cParam0, "NTV1_O_RSI", -1082130432, 0, 0, -1, -1, 0);
				}
				func_137(cParam0, 12);
			}
			break;
		case 12:
			if (!func_1266(&uLocal_356, iVar2129))
			{
				func_29(&uLocal_2233, 0);
			}
			if (((func_1223(&uLocal_2233, 5f) && !func_1212(cParam0, 8)) && iVar2633 < 3) && func_1257(cParam0, "NTV1_O_RSI", 4, 0, 0))
			{
				func_219(&uLocal_2233);
				_set_pickup_object_glow_enabled(&(iLocal_2074[2]), true);
				iLocal_2130 = func_1265(&(iLocal_2074[2]), 1055493006, 1, 1);
				func_137(cParam0, 22);
			}
			if (func_1212(cParam0, 8) && func_1257(cParam0, "NTV1_O_LTA", 4, 0, 0))
			{
				func_1188(cParam0, "NTV1_O_LTA", -1082130432, 0, 0, -1, -1, 0);
				func_137(cParam0, -1);
			}
			break;
		case 22:
			func_29(&uLocal_2233, 0);
			if (((func_1223(&uLocal_2233, 30f) && !func_1212(cParam0, 8)) && iVar2633 < 3) && func_1257(cParam0, "NTV1_O_RSI", 4, 0, 0))
			{
				func_219(&uLocal_2233);
			}
			if (func_1212(cParam0, 8))
			{
				func_1188(cParam0, "NTV1_O_RTRF", -1082130432, 0, 0, -1, -1, 0);
				func_137(cParam0, -1);
			}
			break;
		case 3:
			if (func_1212(cParam0, 8) && !func_1737("NTV1_O_RTRF", 0, 0, -1, -1, 0))
			{
				func_1267(&iLocal_349);
				func_1268(iVar346, -546708623, 1);
				func_1188(cParam0, "NTV1_O_RTRF", -1082130432, 0, 0, -1, -1, 0);
			}
			if (func_1257(cParam0, "NTV1_O_RTRF", 5, 1.5f, 0))
			{
				func_1188(cParam0, "NTV1_O_RTRF", -1082130432, 0, 0, -1, -1, 0);
				func_137(cParam0, -1);
			}
			break;
		case 10:
			if (func_1212(cParam0, 17))
			{
				func_1188(cParam0, "NTV1_O_RTRF", -1082130432, 0, 0, -1, -1, 0);
				func_1267(&iLocal_349);
				func_1268(iVar346, -546708623, 1);
				func_137(cParam0, 32);
			}
			else if (func_1212(cParam0, 13))
			{
				func_1255(iVar346, -546708623, 1);
				if (func_1251("MISSION_WANTED") || func_1257(cParam0, "MISSION_WANTED", 5, 0, 0))
				{
					func_1256("MISSION_WANTED", 1);
					func_137(cParam0, 31);
				}
			}
			break;
		case 31:
			if (func_1212(cParam0, 17))
			{
				func_1188(cParam0, "NTV1_O_RTRF", -1082130432, 0, 0, -1, -1, 0);
				func_1267(&iLocal_349);
				func_1268(iVar346, -546708623, 1);
				func_137(cParam0, 32);
			}
			break;
		case 32:
			if (func_1257(cParam0, "NTV1_O_RTRF", 5, 0, 0))
			{
				func_177(&iLocal_2131);
				func_177(&iLocal_2130);
				func_1188(cParam0, "NTV1_O_RTRF", -1082130432, 0, 0, -1, -1, 0);
				func_1267(&iLocal_349);
				func_1268(iVar346, -546708623, 1);
				func_137(cParam0, -1);
			}
			break;
	}
}

void func_1263(char[4] cParam0)
{
	if (iVar2633 != 5 && iVar2633 != -1)
	{
		func_1274(&(uLocal_111[8]), "GRAB_COMBAT");
		func_1274(&(uLocal_111[8]), "GRAB_NORMAL");
		func_1274(&(uLocal_111[8]), "GRAB_STEALTH");
		func_1274(&(uLocal_111[8]), "GRAB_STEALTH_TO_COMBAT");
	}
	switch (iVar2633)
	{
		case 0:
			if (does_entity_exist(&(iLocal_2074[2])))
			{
				if (!func_12(iVar2153))
				{
					iLocal_2156 = func_1764("NTV1_UC_PU", -473983589, &(iLocal_2074[2]), 3, 0, 0, 0, 5, 1070386381, 570, 4000, 10, 1073741824, 0, 1704213876, 0, 0);
					func_1765(&iLocal_2156, &(iLocal_2074[2]));
					func_1766(iVar2153, 128);
				}
				else if (func_1229(&(uLocal_111[8]), "pl_loop", 1))
				{
					freeze_entity_position(&(iLocal_2074[2]), false);
					func_1231(8);
					func_1232(&(uLocal_111[8]));
					func_1767(1);
				}
			}
			break;
		case 1:
			if (!func_12(iVar2153))
			{
				func_1767(0);
				return;
			}
			if (func_854(Global_35, &(iLocal_2074[2]), 1.85f, 1) || (does_entity_exist(&(iLocal_2074[0])) && func_854(Global_35, &(iLocal_2074[0]), 1.85f, 1)))
			{
				_uiprompt_set_ambient_group_this_frame(&(iLocal_2074[2]), 1.85f, 3, 1, 0, "NTV1_UC_SI_NAME", 0);
			}
			if (func_1768(iVar2153, 1))
			{
				_0xdd1232b332cbb9e7(3, 1, 0);
				func_13(&iLocal_2156, 1, 1);
				_0x94a3c1b804d291ec(Global_35, 0, 1, 0, 0);
				set_player_control(get_player_index(), false, 2304, false);
				_display_hud_component(iLocal_245);
				if (_is_ped_carrying(Global_35))
				{
					iVar0 = func_1769(Global_35);
					if (does_entity_exist(iVar0))
					{
						clear_ped_tasks(Global_35, 1, 0);
						task_place_carried_entity_at_coord(Global_35, iVar0, Global_36, 2f, 9);
						_0x2208438012482a1a(Global_35, false, false);
						func_1767(2);
					}
				}
				else
				{
					task_swap_weapon(Global_35, 1, 1, 0, 0);
					func_1770(Global_35, func_222(1, 12), 1f, 20000, 1048576000, 0);
					func_1767(3);
				}
			}
			break;
		case 2:
			if (!_is_ped_carrying(Global_35) && !func_1671(Global_35, -208384378))
			{
				_0x94a3c1b804d291ec(Global_35, 0, 1, 0, 0);
				set_player_control(get_player_index(), false, 2304, false);
				_display_hud_component(iLocal_245);
				task_swap_weapon(Global_35, 1, 1, 0, 0);
				func_1770(Global_35, func_222(1, 12), 1f, 20000, 1048576000, 0);
				func_1767(3);
			}
			else if (_is_ped_carrying(Global_35) && !func_1671(Global_35, -208384378))
			{
				func_29(&uLocal_2714, 0);
				if (func_1223(&uLocal_2714, 3f))
				{
					iVar1 = func_1769(Global_35);
					if (does_entity_exist(iVar1))
					{
						clear_ped_tasks(Global_35, 1, 0);
						task_place_carried_entity_at_coord(Global_35, iVar1, Global_36, 2f, 9);
						_0x2208438012482a1a(Global_35, false, false);
						func_1767(2);
					}
				}
			}
			break;
		case 3:
			bLocal_2712 = _get_ped_crouch_movement(Global_35);
			if (bVar2709)
			{
				if (func_1212(cParam0, 13))
				{
					cVar2 = "GRAB_STEALTH_TO_COMBAT";
				}
				else
				{
					cVar2 = "GRAB_STEALTH";
				}
			}
			else if (func_1212(cParam0, 13))
			{
				cVar2 = "GRAB_COMBAT";
			}
			else
			{
				cVar2 = "GRAB_NORMAL";
			}
			if ((func_1216(Global_35, func_1201(1, 12), 1f, 1, 1) && func_1228(Global_35, func_1678(1, 12), 30f)) && iVar2710 == 0)
			{
				set_current_ped_weapon(Global_35, -1569615261, false, 0, false, false);
				_0xcffc3eccd7a5cceb(get_player_index(), -1569615261, 0);
				open_sequence_task(&uLocal_2128);
				task_swap_weapon(0, 1, 0, 0, 0);
				func_1770(0, func_222(1, 12), 1f, 20000, 1048576000, 0);
				close_sequence_task(iVar2125);
				task_perform_sequence(Global_35, iVar2125);
				clear_sequence_task(&uLocal_2128);
				iLocal_2713 = 1;
			}
			if (((func_1037(Global_35, 0, 1, 0) == -1569615261 && (iVar2710 == 0 || ((iVar2710 == 1 && !func_1671(Global_35, 716706914)) && !func_1671(Global_35, 242628503)))) && (!func_1671(Global_35, 713668775) || (func_1216(Global_35, func_1201(1, 12), 1f, 1, 1) && func_1228(Global_35, func_1678(1, 12), 20f)))) && func_1229(&(uLocal_111[8]), cVar2, 1))
			{
				freeze_entity_position(&(iLocal_2074[2]), false);
				func_1231(8);
				func_1232(&(uLocal_111[8]));
				func_1767(4);
			}
			break;
		case 4:
			if (func_1234(&(uLocal_111[8]), 0.25f))
			{
				func_1214(9);
			}
			if (func_1234(&(uLocal_111[8]), 0.98f))
			{
				func_170();
				func_1214(8);
				_display_hud_component(iLocal_245);
				set_player_control(get_player_index(), true, 0, false);
				func_1767(5);
			}
			break;
		case 5:
			if (_0x005e6f28dd7ed58d(&(uLocal_111[8]), "player"))
			{
				func_170();
				if (bVar2709)
				{
					if (!_get_ped_crouch_movement(Global_35))
					{
						_set_ped_crouch_movement(Global_35, true, 0, true);
						func_1767(6);
					}
				}
				else
				{
					func_1767(6);
				}
			}
			break;
		case 6:
			func_1767(-1);
			break;
		case -1:
			break;
	}
}

void func_1264()
{
	_0x9f9a829c6751f3c7(player_id(), 47, 1);
	if (!bVar2219 && func_1037(Global_35, 0, 1, 0) == -1569615261)
	{
		iLocal_2221 = 1;
		_0x9fc5a003fb76edbd(player_id(), "NTV1_UC_KNOCK");
	}
	else if (bVar2219 && func_1037(Global_35, 0, 1, 0) != -1569615261)
	{
		iLocal_2221 = 0;
		_0x9fc5a003fb76edbd(player_id(), 0);
	}
}

int func_1265(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (!does_entity_exist(iParam0) || (iParam2 == 1 && is_entity_dead(iParam0)))
	{
		return 0;
	}
	iVar0 = get_blip_from_entity(iParam0);
	if (!does_blip_exist(iVar0))
	{
		iVar0 = _blip_add_for_entity(iParam1, iParam0);
	}
	else
	{
		_0xedd964b7984ac291(iVar0, iParam1);
	}
	if (bParam3)
	{
		if ((iParam1 == 408396114 || iParam1 == 1259054292) || iParam1 == -308585968)
		{
			_blip_set_modifier(iVar0, 231194138);
		}
	}
	return iVar0;
}

bool func_1266(var uParam0, int iParam1)
{
	iVar0 = *uParam0;
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (func_165(uParam0[iVar1], iParam1))
		{
			return true;
		}
		iVar1++;
	}
	return false;
}

void func_1267(int iParam0)
{
	if (!func_165(*iParam0, 0))
	{
		return;
	}
	func_1255(*iParam0, -401963276, 1);
	func_1265(*iParam0, 422991367, 1, 1);
	func_1268(*iParam0, -546708623, 1);
	func_1771(*iParam0, "NTV1_RF", 1);
}

bool func_1268(int iParam0, int iParam1, int iParam2)
{
	if (!does_entity_exist(iParam0) || (iParam2 == 1 && is_entity_dead(iParam0)))
	{
		return false;
	}
	iVar0 = get_blip_from_entity(iParam0);
	if (!does_blip_exist(iVar0))
	{
		return false;
	}
	return _blip_set_modifier(iVar0, iParam1);
}

void func_1269(char[4] cParam0)
{
	func_1772(&(cParam0->f_7375));
}

void func_1270(char[4] cParam0, char[4] cParam1)
{
	func_1773(&(cParam0->f_7375), cParam1, func_164(cParam0, func_35(cParam0)) != 5);
}

void func_1271(char[4] cParam0)
{
	switch (func_1657(cParam0))
	{
		case 0:
			if ((func_1212(cParam0, 13) && !func_1212(cParam0, 17)) || func_1278(player_id(), 0, 0, 1, 1))
			{
				func_137(cParam0, 10);
			}
			else if ((func_165(iVar346, 0) && func_854(Global_35, iVar346, 10f, 1)) || func_1257(cParam0, "NTV1_O_RTRF", 4, 1f, 0))
			{
				func_177(&iLocal_2131);
				func_177(&iLocal_2130);
				func_1267(&iLocal_349);
				func_1188(cParam0, "NTV1_O_RTRF", -1082130432, 0, 0, -1, -1, 0);
				func_137(cParam0, -1);
			}
			else if (does_entity_exist(&(iLocal_2074[2])) && (func_1774() || func_1212(cParam0, 8)))
			{
				func_1267(&iLocal_349);
				func_1268(iVar346, -546708623, 1);
			}
			break;
		case 1:
			if (func_1257(cParam0, "NTV1_HLP_ITEMS", 0, 0, 0))
			{
				func_1256("NTV1_HLP_ITEMS", 1);
				func_137(cParam0, -1);
			}
			break;
		case 10:
			if (func_1212(cParam0, 17) && !func_1278(player_id(), 0, 0, 1, 1))
			{
				func_1188(cParam0, "NTV1_O_RTRF", -1082130432, 0, 0, -1, -1, 0);
				func_1267(&iLocal_349);
				func_137(cParam0, 12);
			}
			else if (func_1212(cParam0, 13) && (func_1251("MISSION_WANTED") || func_1257(cParam0, "MISSION_WANTED", 5, 0, 0)))
			{
				func_1661(&iLocal_349);
				func_1256("MISSION_WANTED", 1);
				func_1188(cParam0, "MISSION_WANTED", -1082130432, 0, 0, -1, -1, 0);
				func_137(cParam0, 11);
			}
			break;
		case 11:
			if (!func_1278(player_id(), 0, 0, 1, 1) && func_1212(cParam0, 17))
			{
				func_177(&iLocal_2131);
				func_177(&iLocal_2130);
				func_1188(cParam0, "NTV1_O_RTRF", -1082130432, 0, 0, -1, -1, 0);
				func_1267(&iLocal_349);
				func_137(cParam0, 12);
			}
			break;
		case 12:
			if (!func_1278(player_id(), 0, 0, 1, 1) && func_1257(cParam0, "NTV1_O_RTRF", 4, 1.75f, 0))
			{
				func_177(&iLocal_2131);
				func_177(&iLocal_2130);
				func_1188(cParam0, "NTV1_O_RTRF", -1082130432, 0, 0, -1, -1, 0);
				func_1267(&iLocal_349);
				func_137(cParam0, -1);
			}
			break;
	}
}

void func_1272()
{
	if (is_ped_on_mount(Global_35))
	{
		iLocal_348 = get_mount(Global_35);
	}
}

void func_1273()
{
	if ((((!is_ped_on_mount(Global_35) && func_165(iVar346, 0)) && func_854(Global_35, iVar346, 4.75f, 1)) && !func_1671(iVar346, 518218985)) && !func_1671(iVar346, 242628503))
	{
		clear_ped_tasks(iVar346, 1, 0);
		task_smart_flee_coord(iVar346, Global_36, 4.75f, -1, 256, 0.101f);
		iLocal_348 = 0;
	}
}

bool func_1274(int iParam0, char* sParam1)
{
	if (!_does_anim_scene_exist(iParam0))
	{
		return false;
	}
	_0xdf7b5144e25cd3fe(iParam0, sParam1);
	if (_0x23e33cb9f4a3f547(iParam0, sParam1))
	{
		return true;
	}
	if (_0x0df57f86fe71dbe5(iParam0, sParam1))
	{
		return false;
	}
	return false;
}

void func_1275(char[4] cParam0)
{
	iVar0 = func_37(cParam0);
	if (func_164(cParam0, func_35(cParam0)) <= 3)
	{
		iVar0 = func_35(cParam0);
	}
	Var1 = { func_1379(cParam0, iVar0) };
	func_1775(&(cParam0->f_10792), Var1, func_1380(&(cParam0->f_10792)));
}

int func_1276(var uParam0, int iParam1)
{
	iVar0 = *uParam0;
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (func_165(uParam0[iVar1], iParam1))
		{
			iVar2++;
		}
		iVar1++;
	}
	return iVar2;
}

int func_1277(char[4] cParam0)
{
	iLocal_2637 = func_1776(func_1212(cParam0, 13), iVar2208, iVar2209, iVar2210, uVar2211);
	switch (iVar2634)
	{
		case 0:
			if (_0xa24c1d341c6e0d53(1, 0, 0) || _is_ped_carrying(Global_35))
			{
				StringCopy(&cVar0, "PL2B_Men_Lived (multistart)", 64);
			}
			else
			{
				StringCopy(&cVar0, "PL2A_Men_Lived (normalstart)", 64);
			}
			func_1214(10);
			break;
		case 1:
			if (_0xa24c1d341c6e0d53(1, 0, 0) || _is_ped_carrying(Global_35))
			{
				StringCopy(&cVar0, "PL1B_Men_Died (multistart)", 64);
			}
			else
			{
				StringCopy(&cVar0, "PL1A_Men_Died (normalstart)", 64);
			}
			break;
		case 2:
			if (_0xa24c1d341c6e0d53(1, 0, 0) || _is_ped_carrying(Global_35))
			{
				StringCopy(&cVar0, "PL2B_Men_Lived (multistart)", 64);
			}
			else
			{
				StringCopy(&cVar0, "PL2A_Men_Lived (normalstart)", 64);
			}
			func_1214(10);
			break;
		case 3:
			if (_0xa24c1d341c6e0d53(1, 0, 0) || _is_ped_carrying(Global_35))
			{
				StringCopy(&cVar0, "PL1B_Men_Died (multistart)", 64);
			}
			else
			{
				StringCopy(&cVar0, "PL1A_Men_Died (normalstart)", 64);
			}
			break;
	}
	func_379(cParam0, 33554432);
	func_1654(cParam0, &cVar0);
	func_1777(cParam0, cVar0);
	if (_does_anim_scene_exist(cParam0->f_7375.f_804) && func_1274(cParam0->f_7375.f_804, &cVar0))
	{
		func_1778(cParam0, &cVar0);
		func_390(cParam0);
		return 1;
	}
	return 0;
}

bool func_1278(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (func_913(iParam0, bParam1, bParam2, bParam3))
	{
		return true;
	}
	if (iParam4 == 1 && Global_1934266->f_78.f_59 != 0)
	{
		return true;
	}
	return false;
}

void func_1279(int iParam0)
{
	if (&iLocal_81[iParam0] == 1)
	{
		iLocal_81[iParam0] = 0;
	}
}

void func_1280()
{
	if (!does_entity_exist(&(iLocal_2074[2])))
	{
		func_1763(1);
	}
	if (!does_entity_exist(&(iLocal_2074[2])))
	{
		func_1779(-1, 1);
		iLocal_2074[2] = &Local_14.f_57[0];
		func_768(&(iLocal_2074[2]), func_1201(1, 7), func_1678(1, 7), 2, 1073741824);
		func_1763(1);
	}
}

bool func_1281(char[4] cParam0, int iParam1)
{
	if (func_10(cParam0, 2097152))
	{
		return true;
	}
	if (func_1780(cParam0, 0))
	{
		func_49(0, 0);
		func_1282(cParam0, iParam1);
		return true;
	}
	return false;
}

void func_1282(char[4] cParam0, int iParam1)
{
	Var0 = { func_1781(&(cParam0->f_7375)) };
	if ((((func_1382(&(cParam0->f_10792), 32768) && _does_anim_scene_exist(cParam0->f_7375.f_804)) && _is_anim_scene_loaded(cParam0->f_7375.f_804, true, false)) && _0xa9016536015de29d(cParam0->f_7375.f_804, &Var0)) && _0x23e33cb9f4a3f547(cParam0->f_7375.f_804, &Var0))
	{
		func_1778(cParam0, &Var0);
		func_1782(cParam0);
	}
	else
	{
		if (iParam1 == 1 && func_122(cParam0, 16384))
		{
			func_1783(&(cParam0->f_10792), Global_43805);
			func_728(&(cParam0->f_10792), 8);
		}
		func_239(&(cParam0->f_10792), iParam1);
		func_862(cParam0);
		func_101(cParam0, 2097152);
	}
}

var func_1283()
{
	return func_1784(1);
}

bool func_1284()
{
	return func_1785(1);
}

void func_1285()
{
	func_1187(Global_35, func_222(3, 4), 2, 1073741824);
	_0x9587913b9e772d29(Global_35, 0);
	func_1187(iVar345, func_222(3, 5), 2, 1073741824);
	_0x9587913b9e772d29(iVar345, 0);
	set_current_ped_weapon(Global_35, -1569615261, true, 0, false, false);
	set_current_ped_weapon(Global_35, -1569615261, true, 1, false, false);
	set_clock_time(8, 0, 0);
	_set_weather_type(1500834021, true, false, false, 0f, false);
	func_1231(11);
	func_1229(&(uLocal_111[11]), "PBL_1", 1);
	func_1232(&(uLocal_111[11]));
	set_bit(&(Global_1956580->f_1), 5);
}

void func_1286(var uParam0, int iParam1, int iParam2)
{
	if (func_84(32768))
	{
		return;
	}
	func_1786(&((*Global_1835011)[uParam0->f_607]->f_22), iParam1, iParam2);
}

int func_1287(var uParam0)
{
	return uParam0;
}

bool func_1288(int iParam0)
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

bool func_1289(int iParam0, int iParam1)
{
	iVar0 = get_script_task_status(iParam0, iParam1, true);
	if (iVar0 == 1 || iVar0 == 0)
	{
		return true;
	}
	return false;
}

bool func_1290(int iParam0)
{
	if (-1829635046 == func_1787(81053684))
	{
		if (func_1788(iParam0))
		{
			return true;
		}
	}
	else if (func_1546(-525676072, iParam0))
	{
		if (func_1788(iParam0))
		{
			return true;
		}
	}
	return false;
}

void func_1291(int iParam0)
{
	if (func_22() != -1)
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

void func_1292(int iParam0)
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

void func_1293()
{
	iVar0 = func_1037(Global_35, 9, 1, 0);
	if (func_671(iVar0))
	{
		return;
	}
	iVar0 = func_1037(Global_35, 7, 1, 0);
	if (func_671(iVar0))
	{
		set_current_ped_weapon(Global_35, iVar0, true, 8, false, false);
	}
	iVar0 = func_1037(Global_35, 0, 1, 0);
	if (func_671(iVar0) && _is_weapon_two_handed(iVar0))
	{
		set_current_ped_weapon(Global_35, iVar0, true, 9, false, false);
		return;
	}
	iVar0 = func_1037(Global_35, 1, 1, 0);
	if (func_671(iVar0) && _is_weapon_two_handed(iVar0))
	{
		set_current_ped_weapon(Global_35, iVar0, true, 9, false, false);
		return;
	}
	iVar0 = func_1037(Global_35, 18, 1, 0);
	if (func_671(iVar0) && _is_weapon_two_handed(iVar0))
	{
		set_current_ped_weapon(Global_35, iVar0, true, 9, false, false);
		return;
	}
	iVar0 = func_1789();
	if (func_671(iVar0))
	{
		if (has_ped_got_weapon(Global_35, iVar0, 0, true))
		{
			func_1790(Global_35, iVar0, 1, 0, 9, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
		}
		else
		{
			set_current_ped_weapon(Global_35, iVar0, true, 9, false, false);
		}
		return;
	}
	iVar0 = func_1791(6291456, 0);
	if (func_671(iVar0))
	{
		if (!has_ped_got_weapon(Global_35, iVar0, 0, true))
		{
			func_1790(Global_35, iVar0, 1, 0, 9, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
		}
		else
		{
			set_current_ped_weapon(Global_35, iVar0, true, 9, false, false);
		}
	}
}

int func_1294()
{
	return Global_1900383->f_393;
}

int func_1295(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (func_1703(*uParam0, 0f, 0f, 0f))
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

void func_1296(int iParam0)
{
	Global_40.f_1095.f_3054.f_1 = iParam0;
}

void func_1297(int iParam0)
{
	Global_40.f_1095.f_3054 = iParam0;
}

void func_1298(vector3 vParam0)
{
	Global_40.f_1095.f_3054.f_77 = { vParam0 };
}

var func_1299()
{
	return &Global_1899515;
}

void func_1300(var uParam0)
{
	Global_40.f_1095.f_3054.f_2 = uParam0;
}

void func_1301(int iParam0)
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

bool func_1302()
{
	return (func_1792() || func_1793());
}

void func_1303(bool bParam0)
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
	func_1794(0f);
	Global_1935436->f_11 = 1;
	if (func_303())
	{
		set_ambient_voice_name(Global_35, "ARTHUR");
	}
	else
	{
		set_ambient_voice_name(Global_35, "JOHN_PLAYER");
	}
	if (animpostfx_is_running("PlayerDrunk01"))
	{
		func_1795();
	}
	if (is_gameplay_cam_shaking())
	{
		stop_gameplay_cam_shaking(false);
	}
}

Vector3 func_1304(var uParam0)
{
	return uParam0->f_865;
}

float func_1305(var uParam0)
{
	return uParam0->f_868;
}

void func_1306(var uParam0, int iParam1, bool bParam2)
{
	uParam0->f_8 = (uParam0->f_8 - (uParam0->f_8 && iParam1));
	if (((iParam1 == 512 && bParam2) && _does_anim_scene_exist(uParam0->f_804)) && _0xef324e9550a394d5(uParam0->f_804))
	{
		_0x8a8208ae92bf87a5(uParam0->f_804);
	}
}

bool func_1307(var uParam0, int iParam1)
{
	return (uParam0->f_11 && iParam1) != 0;
}

bool func_1308(var uParam0, int iParam1)
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

void func_1309(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	iVar2 = func_1142(iParam1, 1);
	if (!bParam2 && iVar2 == 1367443060)
	{
		bParam3 = false;
	}
	if (iParam4 != 0)
	{
		if (iVar2 == 1108822547)
		{
			iVar1 = func_1796(iParam4);
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

bool func_1310(int iParam0, int iParam1)
{
	return ((Global_1946804->f_57[func_656(iParam0, 1)])->f_10 && iParam1) != 0;
}

bool func_1311(int iParam0, int iParam1)
{
	return (Global_1946804->f_57[iParam0]->f_9 && iParam1) != 0;
}

void func_1312(int iParam0, bool bParam1, bool bParam2)
{
	iVar0 = 10;
	if (func_1310(1108822547, 6))
	{
		if (bParam2)
		{
			func_1309(iParam0, iVar0, func_22() != -1, 0, 0);
			func_1313(1108822547, 1, 6);
		}
		else
		{
			return;
		}
	}
	else
	{
		_0xbc6df00d7a4a6819(iParam0, Global_1946804->f_2776.f_1, &(Global_1946804->f_2776.f_3[0]), &(Global_1946804->f_2776.f_3[1]), &(Global_1946804->f_2776.f_3[2]), Global_1946804->f_2776.f_8, Global_1946804->f_2776.f_9, Global_1946804->f_2776.f_10, Global_1946804->f_2776.f_11);
		func_1314(1108822547, 1, 6);
	}
	Global_1946804->f_857++;
	if (!bParam1)
	{
		return;
	}
	_update_ped_variation(iParam0, false, true, true, true, false);
}

void func_1313(int iParam0, int iParam1, int iParam2)
{
	(Global_1946804->f_57[func_656(iParam0, 1)])->f_10 = ((Global_1946804->f_57[func_656(iParam0, 1)])->f_10 || iParam1);
}

void func_1314(int iParam0, int iParam1, int iParam2)
{
	(Global_1946804->f_57[func_656(iParam0, 1)])->f_10 = ((Global_1946804->f_57[func_656(iParam0, 1)])->f_10 - ((Global_1946804->f_57[func_656(iParam0, 1)])->f_10 && iParam1));
}

bool func_1315(var uParam0)
{
	if (func_1797(&(uParam0->f_29), 62))
	{
		switch (func_1798())
		{
			case 1:
				if (!func_1797(&(uParam0->f_29), 6))
				{
					return false;
				}
				break;
			case 2:
				if (!func_1797(&(uParam0->f_29), 8))
				{
					return false;
				}
				break;
			case 4:
				if (!func_1797(&(uParam0->f_29), 16))
				{
					return false;
				}
				break;
			case 8:
				if (!func_1797(&(uParam0->f_29), 32))
				{
					if (func_1797(&(uParam0->f_29), 2))
					{
						if (func_678(func_284()) < 5)
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

int func_1316(var uParam0, int iParam1, int iParam2)
{
	iVar0 = 0;
	Var4.f_9 = -1591664384;
	bVar18 = func_1799(iParam1, 128);
	Var23.f_9 = -1591664384;
	if (func_1079("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_1080(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_671(Var4.f_4))
			{
			}
			else if (!_0x705be297eebdb95d(Var4.f_4))
			{
			}
			else if (iParam2 != 0 && Var4.f_4 == iParam2)
			{
			}
			else if ((!func_1799(iParam1, 512) && func_1541(Var4.f_4, &uVar19, &Var23, 1728382685)) && !Var23.f_21)
			{
			}
			else if (!bVar18 || _0xf29a186ed428b552(Global_35, Var4.f_4))
			{
				if (((_is_weapon_one_handed(Var4.f_4) && (!_is_weapon_shotgun(Var4.f_4) || func_1799(iParam1, 32))) && (!_is_weapon_pistol(Var4.f_4) || !func_1799(iParam1, 16777216))) && (!_is_weapon_revolver(Var4.f_4) || !func_1799(iParam1, 33554432)))
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
		func_1081(iVar1);
	}
	if (func_671(iVar0))
	{
	}
	else if (!func_1799(iParam1, 512))
	{
		iParam1 |= 512;
		return func_1316(uParam0, iParam1, iParam2);
	}
	else if (func_1799(iParam1, 256))
	{
		iVar0 = -1569615261;
	}
	return iVar0;
}

void func_1317(int iParam0)
{
	_0x51345ae20f22c261(player_id(), to_float(iParam0 * 14), 0, 0, 0);
}

int func_1318(int iParam0)
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

void func_1319(var uParam0)
{
	if (!func_848(uParam0->f_1, 1))
	{
		_0x03ddbf2d73799f9e(*uParam0);
		func_814(&(uParam0->f_1), 1);
	}
}

void func_1320(var uParam0)
{
	if (!func_848(*uParam0, 1))
	{
		request_ptfx_asset();
		func_814(uParam0, 1);
	}
}

bool func_1321(var uParam0)
{
	if (func_848(uParam0->f_2, 1))
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

char* func_1322(int iParam0)
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

bool func_1323(int iParam0)
{
	return iParam0 != 0;
}

int func_1324(var uParam0, int iParam1)
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

int func_1325(var uParam0, char* sParam1)
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

void func_1326(var uParam0, int iParam1)
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

int func_1327(var uParam0)
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

void func_1328(var uParam0, int iParam1)
{
	uParam0->f_11 = (uParam0->f_11 || iParam1);
}

void func_1329(var uParam0, int iParam1)
{
	uParam0->f_11 = (uParam0->f_11 - (uParam0->f_11 && iParam1));
}

bool func_1330(var uParam0, int iParam1)
{
	uParam0->f_2495.f_2 = iParam1;
	return _datafile_get_data_node_index(&(uParam0->f_2495.f_1), &(uParam0->f_2495));
}

bool func_1331(var uParam0, int iParam1, int iParam2, char[4] cParam3, int iParam4, int iParam5)
{
	if (iParam2 == -1)
	{
		if (func_1332(uParam0, 2, iParam4))
		{
			*iParam5 = *iParam4;
		}
		if (func_1332(uParam0, 6, &(cParam3->f_11)))
		{
		}
		if (func_1332(uParam0, 9, &(cParam3->f_13)))
		{
		}
		if (func_1332(uParam0, 5, iParam4))
		{
			cParam3->f_9 = *iParam4;
		}
		return true;
	}
	if (func_1332(uParam0, 2, iParam4))
	{
		*iParam5 = *iParam4;
	}
	if (func_1332(uParam0, 6, &(cParam3->f_11)))
	{
	}
	if (func_1332(uParam0, 5, iParam4))
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
			if (func_1332(uParam0, 9, &(cParam3->f_13)))
			{
			}
			return true;
		}
		return false;
	}
	if (func_1332(uParam0, 9, &(cParam3->f_13)))
	{
	}
	return (iParam2 >= cParam3->f_11 && iParam2 <= cParam3->f_13);
}

bool func_1332(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2495.f_2 = iParam1;
	return _datafile_get_int(iParam2, &(uParam0->f_2495));
}

bool func_1333(var uParam0, int iParam1, char[4] cParam2)
{
	uParam0->f_2495.f_2 = iParam1;
	return _datafile_get_string(cParam2, &(uParam0->f_2495));
}

bool func_1334(var uParam0, char* sParam1, int iParam2)
{
	if (iParam2 == 0)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < iParam2)
	{
		if (((func_216((*uParam0)[iVar0], 1048576) && are_strings_equal((*uParam0)[iVar0], sParam1)) && (*uParam0)[iVar0]->f_9 == sParam1->f_9) && (*uParam0)[iVar0]->f_10 == sParam1->f_10)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_1335(char* sParam0)
{
	if (!is_audio_scene_active(sParam0))
	{
		start_audio_scene(sParam0);
	}
	func_476(sParam0, 1);
}

bool func_1336(var uParam0)
{
	if (func_848(uParam0->f_1, 2))
	{
		return true;
	}
	if (!func_848(uParam0->f_1, 1))
	{
		func_818(uParam0);
	}
	if (has_model_loaded(*uParam0))
	{
		func_814(&(uParam0->f_1), 2);
		return true;
	}
	return false;
}

bool func_1337(var uParam0)
{
	if (func_848(uParam0->f_3, 2))
	{
		return true;
	}
	if (!func_848(uParam0->f_3, 1))
	{
		func_820(uParam0);
	}
	switch (uParam0->f_1)
	{
		case 2:
			if (get_is_waypoint_recording_loaded(*uParam0))
			{
				func_814(&(uParam0->f_3), 2);
				return true;
			}
			break;
		case 1:
			if (has_vehicle_recording_been_loaded(uParam0->f_2, *uParam0))
			{
				func_814(&(uParam0->f_3), 2);
				return true;
			}
			break;
	}
	return false;
}

bool func_1338(var uParam0)
{
	if (func_848(uParam0->f_1, 2))
	{
		return true;
	}
	if (!func_848(uParam0->f_1, 1))
	{
		func_822(uParam0);
	}
	if (has_anim_dict_loaded(*uParam0))
	{
		func_814(&(uParam0->f_1), 2);
		return true;
	}
	return false;
}

bool func_1339(var uParam0, int iParam1)
{
	if (func_848(uParam0->f_1, 2))
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
	if (!func_848(uParam0->f_1, 1))
	{
		func_829(uParam0, iParam1);
	}
	if (_0x23e33cb9f4a3f547(iParam1, *uParam0))
	{
		func_814(&(uParam0->f_1), 2);
		return true;
	}
	return false;
}

bool func_1340(var uParam0)
{
	if (func_848(uParam0->f_2, 2))
	{
		return true;
	}
	if (!func_848(uParam0->f_2, 1))
	{
		func_831(uParam0);
	}
	if (_has_propset_loaded(*uParam0))
	{
		func_814(&(uParam0->f_2), 2);
		return true;
	}
	return false;
}

bool func_1341(var uParam0)
{
	if (func_848(uParam0->f_3, 2))
	{
		return true;
	}
	if (!func_848(uParam0->f_3, 1))
	{
		func_833(uParam0);
	}
	if (_0xff07cf465f48b830(*uParam0))
	{
		func_814(&(uParam0->f_3), 2);
		return true;
	}
	return false;
}

bool func_1342(var uParam0)
{
	if (func_848(uParam0->f_1, 2))
	{
		return true;
	}
	if (!func_848(uParam0->f_1, 1))
	{
		func_835(uParam0);
	}
	if (request_script_audio_bank(*uParam0))
	{
		func_814(&(uParam0->f_1), 2);
		return true;
	}
	return false;
}

bool func_1343(var uParam0)
{
	if (func_848(uParam0->f_1, 2))
	{
		return true;
	}
	if (!func_848(uParam0->f_1, 1))
	{
		func_837(uParam0);
	}
	if (_is_imap_active(*uParam0))
	{
		func_814(&(uParam0->f_1), 2);
		return true;
	}
	return false;
}

bool func_1344(var uParam0)
{
	if (func_848(uParam0->f_2, 2))
	{
		return true;
	}
	if (!func_848(uParam0->f_2, 1))
	{
		func_839(uParam0);
	}
	if (_0xe368e8422c860ba7(*uParam0, uParam0->f_1, -2))
	{
		func_814(&(uParam0->f_2), 2);
		return true;
	}
	return false;
}

bool func_1345(var uParam0)
{
	if (func_848(uParam0->f_1, 2))
	{
		return true;
	}
	if (!func_848(uParam0->f_1, 1))
	{
		func_841(uParam0);
	}
	if (_0x2c04d89a0fb4e244(*uParam0))
	{
		func_814(&(uParam0->f_1), 2);
		return true;
	}
	return false;
}

int func_1346(int iParam0)
{
	if (func_495(iParam0))
	{
		return Global_1360165[iParam0];
	}
	return 0;
}

int func_1347(int iParam0, bool bParam1, int iParam2, var uParam3, var uParam4, var uParam5, float fParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, int iParam17, bool bParam18, bool bParam19, bool bParam20, bool bParam21, bool bParam22, bool bParam23, bool bParam24)
{
	if (!func_495(iParam0))
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
			if (func_954(iParam0, 2, 1))
			{
				func_952(iParam0, 2, 1);
			}
			if (func_689(iParam0, 16, 1))
			{
				if (*Global_1360165)[iParam0]->f_129 != get_id_of_this_thread()
				{
					if (bParam14)
					{
						func_950(iParam0, 29, 1);
						return 0;
					}
					if (is_thread_active((*Global_1360165)[iParam0]->f_129, false))
					{
					}
					else
					{
						func_501(iParam0, 0, 0, 1, -1082130432, 1, 1, 0, 0, 0, 0);
					}
					return 0;
				}
				else if (func_165(Global_1360165[iParam0], 0))
				{
					return Global_1360165[iParam0];
				}
			}
			if (func_165(Global_1360165[iParam0], 0))
			{
				if (is_scripted_speech_playing(Global_1360165[iParam0]))
				{
					return 0;
				}
				if (is_ped_ragdoll(Global_1360165[iParam0]))
				{
					if (bParam1)
					{
						func_1800(iParam0, 1, "Stealing, but companion is a ragdoll");
					}
					else
					{
						return 0;
					}
				}
				func_950(iParam0, 44, 1);
				(*Global_1360165)[iParam0]->f_1156 = get_id_of_this_thread();
				func_1801(iParam0, 2);
				return 0;
			}
			else if (bParam1)
			{
				func_950(iParam0, 44, 1);
				(*Global_1360165)[iParam0]->f_1156 = get_id_of_this_thread();
				func_1801(iParam0, 1);
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
			if (!func_954(iParam0, 44, 0))
			{
				func_950(iParam0, 44, 0);
			}
			if (func_1802(iParam0, vVar0, iParam13, 0, 1, iParam17, bParam20, -1, 1, 0))
			{
				func_1801(iParam0, 2);
			}
			break;
		case 2:
			set_ped_config_flag(Global_1360165[iParam0], 171, true);
			if (!_0x88ad6cc10d8d35b2(Global_1360165[iParam0]))
			{
				set_entity_as_mission_entity(Global_1360165[iParam0], true, true);
			}
			func_952(iParam0, 18, 1);
			set_entity_visible(Global_1360165[iParam0], true);
			set_ped_relationship_group_hash(Global_1360165[iParam0], 1030835986);
			_0xf74e134f40192884(Global_1360165[iParam0], 0);
			_0x6759bee6762e140b((*Global_1360165)[iParam0]->f_1);
			set_ped_config_flag(Global_1360165[iParam0], 130, false);
			func_956(iParam0, bParam9, 1, 0);
			if (bParam22)
			{
				func_1803(iParam0, 0, 0, 1);
			}
			func_952(iParam0, 33, 1);
			func_952(iParam0, 34, 1);
			func_952(iParam0, 29, 1);
			if (!func_399(vVar0) && bParam7)
			{
				func_1801(iParam0, 3);
			}
			else if (iParam13 != 0)
			{
				func_1801(iParam0, 4);
			}
			else
			{
				func_1801(iParam0, 5);
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
						func_1800(iParam0, 1, "Teleporting a stolen companion using a scenario.");
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
				func_768(Global_1360165[iParam0], vVar0, fParam6, 2, 1073741824);
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
				func_1801(iParam0, 4);
			}
			else
			{
				func_1801(iParam0, 5);
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
				if (func_1804(iParam0, iParam13))
				{
					if (_0xa0bc8faed8cfeb3c(Global_1360165[iParam0]))
					{
						func_1805(iParam0, iParam13, 0);
						func_1806(iParam0, Global_1360165[iParam0], iParam13, 1);
						if (func_954(iParam0, 25, 0))
						{
							func_952(iParam0, 25, 0);
						}
						func_950(iParam0, 66, 0);
						func_1801(iParam0, 5);
						(*Global_1360165)[iParam0]->f_63 = iParam13;
					}
					else
					{
						return 0;
					}
				}
				else
				{
					func_1801(iParam0, 5);
				}
				func_950(iParam0, 28, 1);
			}
			else
			{
				func_1801(iParam0, 5);
			}
			break;
		case 5:
			if (_0xa0bc8faed8cfeb3c(Global_1360165[iParam0]))
			{
				func_1801(iParam0, 6);
			}
			break;
		case 6:
			if (func_165(Global_1360165[iParam0], 0))
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
					func_1807(iParam0);
				}
				if (bParam21)
				{
					clear_ped_secondary_task(Global_1360165[iParam0]);
					func_1808(Global_1360165[iParam0], 1);
				}
			}
			func_1801(iParam0, 7);
		case 7:
			func_956(iParam0, bParam9, bParam15, 0);
			func_947(iParam0, 4, bParam11);
			func_951(iParam0);
			if (bParam20)
			{
				if (func_1809(Global_1360165[iParam0]))
				{
				}
			}
			func_1810(iParam0, Global_1360165[iParam0]);
			if (!bParam23 && !get_ped_config_flag(Global_1360165[iParam0], 503, true))
			{
				set_ped_config_flag(Global_1360165[iParam0], 503, true);
			}
			Global_40.f_4942[iParam0]->f_4 = Global_40.f_4942[iParam0]->f_3;
			func_1801(iParam0, 0);
			func_690(iParam0, 16, 1);
			func_952(iParam0, 44, 1);
			(*Global_1360165)[iParam0]->f_1156 = 0;
			(*Global_1360165)[iParam0]->f_129 = get_id_of_this_thread();
			return Global_1360165[iParam0];
	}
	return 0;
}

void func_1348(char[4] cParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	func_1811(iParam1, bParam3, bParam4, bParam6);
	if (!func_122(cParam0, 512))
	{
		if (func_122(cParam0, 4) && bParam4)
		{
			vVar0 = { get_offset_from_entity_in_world_coords(Global_35, 5f, 0f, 0f) };
			func_1812(iParam1, vVar0);
		}
	}
	else
	{
		Stack.Push(cParam0);
		Call_Loc(cParam0->f_10781);
	}
	func_1690(cParam0, iParam1, iParam2, func_323(iParam2, 0));
	func_1720(cParam0, iParam1, 512);
	if (bParam5)
	{
		func_1720(cParam0, iParam1, 128);
	}
	else
	{
		func_1718(cParam0, iParam1, 128);
	}
	switch (iParam2)
	{
		case 1:
		case default:
	}
}

void func_1349(int iParam0)
{
	if (!func_495(iParam0))
	{
		return;
	}
	iVar0 = func_532(iParam0);
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	_0x406ccf555b04fad3(iVar0, 0, 0f);
}

void func_1350(char[4] cParam0, vector3 vParam1, float fParam4)
{
	cParam0->f_5417 = { vParam1 };
	cParam0->f_5420 = fParam4;
}

bool func_1351(int iParam0)
{
	iParam0 = func_265(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (func_1360(iParam0) == 0)
	{
		return false;
	}
	return true;
}

void func_1352(int iParam0)
{
	iParam0 = func_265(iParam0);
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
	func_1813(&Var0);
	func_1814(iParam0, Var0);
	func_1815(&(Global_40.f_1095.f_1[iParam0]->f_15));
	func_1816(&(Global_40.f_1095.f_1[iParam0]->f_298));
	func_1817(&(Global_40.f_1095.f_1[iParam0]->f_356));
	func_1818(&(Global_40.f_1095.f_1[iParam0]->f_372));
	iVar2 = 0;
	while (iVar2 < 2)
	{
		func_1819(iVar2, Global_40.f_1095.f_1[iParam0]->f_398[iVar2]);
		iVar2++;
	}
	iVar3 = 0;
	while (iVar3 < 3)
	{
		func_1820(iVar3, Global_40.f_1095.f_1[iParam0]->f_407[iVar3]);
		iVar3++;
	}
	func_1821(&(Global_40.f_1095.f_1[iParam0]->f_420));
	func_1822(&(Global_40.f_1095.f_1[iParam0]->f_422));
	func_1823(&(Global_40.f_1095.f_1[iParam0]->f_425));
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

int func_1353(vector3 vParam0)
{
	return func_1824(_get_map_zone_at_coords(vParam0, 10));
}

bool func_1354(int iParam0)
{
	iParam0 = func_265(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (!func_510(iParam0))
	{
		return false;
	}
	iVar0 = func_214(iParam0);
	if (is_entity_dead(iVar0) || is_ped_injured(iVar0))
	{
		return true;
	}
	return false;
}

void func_1355(int iParam0, int iParam1)
{
	iVar0 = get_player_index();
	if (is_player_dead(iVar0))
	{
	}
	func_504(iParam0);
	func_504(iParam0);
	func_1825(iParam0, iParam1);
	func_1826(iParam0, iParam1);
	func_1827(iParam0, iParam1);
	iVar1 = func_214(iParam0);
	if (does_entity_exist(iVar1))
	{
		if (iParam0 == 0 || iParam0 == 1)
		{
			func_1828(iVar1);
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
	iVar3 = func_214(iParam1);
	if (does_entity_exist(iVar3))
	{
		if (iParam1 == 0 || iParam1 == 1)
		{
			func_1828(iVar3);
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
	func_267();
}

bool func_1356()
{
	iVar0 = func_1294();
	if (does_entity_exist(iVar0))
	{
		return true;
	}
	return false;
}

void func_1357()
{
	iVar0 = func_1294();
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	if (!_0x88ad6cc10d8d35b2(iVar0))
	{
		set_entity_as_mission_entity(iVar0, true, true);
	}
	delete_object(&iVar0);
	func_1829(0);
}

int func_1358(int iParam0)
{
	iParam0 = func_265(iParam0);
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

int func_1359(int iParam0)
{
	iParam0 = func_265(iParam0);
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

int func_1360(int iParam0)
{
	iParam0 = func_265(iParam0);
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

void func_1361(int iParam0)
{
	iParam0 = func_265(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_1603(&iVar0, &iVar1, &iVar2);
	func_1604(iParam0, iVar0);
	func_1605(iParam0, iVar1);
	func_1606(iParam0, iVar2);
	func_1830(iParam0, 1);
	func_1831(iParam0, 1);
}

void func_1362(int iParam0)
{
	iParam0 = func_265(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_1832(iParam0, 1);
}

void func_1363(int iParam0, vector3 vParam1, var uParam4)
{
	iParam0 = func_265(iParam0);
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

bool func_1364(int iParam0)
{
	iParam0 = func_265(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	return func_965(iParam0, 1);
}

struct<2> func_1365(int iParam0)
{
	iParam0 = func_265(iParam0);
	if (iParam0 == -1)
	{
		return Var0;
	}
	if (iParam0 >= 7)
	{
		return Var0;
	}
	if (!func_1833(iParam0, &uVar2))
	{
	}
	if (!func_1834(iParam0, &uVar3))
	{
	}
	Var0 = uVar2;
	Var0.f_1 = uVar3;
	return Var0;
}

struct<6> func_1366()
{
	if (func_1835(-997150586, &uVar6))
	{
		Var0.f_4 = uVar6;
	}
	if (func_1835(-1189569496, &uVar7))
	{
		Var0 = uVar7;
	}
	if (func_1835(325139909, &uVar8))
	{
		Var0.f_2 = uVar8;
	}
	if (func_1835(1310070322, &uVar9))
	{
		Var0.f_5 = uVar9;
	}
	if (func_1835(986998820, &uVar10))
	{
		Var0.f_3 = uVar10;
	}
	if (func_1835(-415648720, &uVar11))
	{
		Var0.f_1 = uVar11;
	}
	return Var0;
}

void func_1367(int iParam0, var uParam1, var uParam2, int iParam3)
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
	func_1836(iParam0);
	func_1837(iParam0, uParam1);
	func_1838(iParam0);
	func_1839(iParam0, uParam2);
	if (iParam3 != 0)
	{
		func_1840(iParam0, iParam3, 0);
	}
	_update_ped_variation(iParam0, false, true, true, true, true);
}

void func_1368(int iParam0)
{
	iParam0 = func_265(iParam0);
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

bool func_1369(int iParam0)
{
	if (iParam0 == 0)
	{
		return true;
	}
	request_model(iParam0, false);
	return has_model_loaded(iParam0);
}

int func_1370(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)
{
	iVar0 = create_ped(iParam0, vParam1, fParam4, bParam6, bParam7, false, false);
	if (bParam5)
	{
		_set_random_outfit_variation(iVar0, true);
	}
	return iVar0;
}

int func_1371(var uParam0)
{
	return *uParam0;
}

bool func_1372(int iParam0, var uParam1, int iParam2)
{
	return false;
	if (iParam0 <= -1 || iParam0 > 80)
	{
		return false;
	}
	*uParam1 = { func_1841(iParam0) };
	if (func_1703(*uParam1, 0f, 0f, 0f))
	{
		return false;
	}
	if (!func_859(iParam0, iParam2, &iVar0))
	{
		return false;
	}
	if (func_1213(*iParam2, iVar0))
	{
		return false;
	}
	return true;
}

void func_1373(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_1374(var uParam0)
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

bool func_1375(var uParam0)
{
	switch (func_1842(uParam0))
	{
		case 0:
			uParam0->f_24 = func_284();
			iVar4 = func_284();
			func_1147(&iVar4, uParam0->f_6);
			func_1148(&iVar4, 0);
			func_1149(&iVar4, 0);
			if (func_984(uParam0->f_24, iVar4, 1))
			{
				func_333(&iVar4, 0, 0, 0, 1, 0, 0, 0);
			}
			func_1843(uParam0->f_24, iVar4, &iVar0, &iVar1, &iVar2, &uVar3, &uVar3, &uVar3);
			uParam0->f_7 = ((iVar0 + iVar1 * 60) + iVar2 * 3600);
			func_1844(uParam0, 1);
			break;
		case 1:
			fVar5 = func_1845(uParam0, -1082130432);
			if (fVar5 >= 0.5f)
			{
				func_1844(uParam0, 2);
			}
			break;
		case 2:
			fVar5 = func_1845(uParam0, -1082130432);
			if (fVar5 >= 0.99f || fVar5 == -1f)
			{
				iVar4 = uParam0->f_24;
				func_333(&iVar4, uParam0->f_7, 0, 0, 0, 0, 0, 0);
				set_clock_time(func_678(iVar4), func_679(iVar4), func_680(iVar4));
				func_1846(get_clock_hours());
				func_1847(1, 0, 0);
				return true;
			}
			break;
	}
	return false;
}

void func_1376(vector3 vParam0, float fParam3, bool bParam4)
{
	iVar0 = 16384;
	if (bParam4)
	{
		iVar0 |= 524288;
	}
	clear_area(vParam0, fParam3, iVar0);
}

void func_1377(int iParam0, int iParam1)
{
	if (Global_1935630->f_12)
	{
		return;
	}
	func_1848(2000);
	Global_16 = 0;
	func_1849();
	set_entity_invincible(Global_35, func_1850(*iParam0, 8));
	if (!func_1850(*iParam0, 1))
	{
		set_player_control(get_player_index(), true, 0, false);
	}
	_0xa0cefcea390aab9b(0);
	set_all_random_peds_flee(player_id(), false);
	set_everyone_ignore_player(player_id(), false);
	if (func_1850(*iParam0, 2) || func_1850(*iParam0, 4))
	{
		_hide_hud_component(-1679307491);
	}
	else
	{
		_display_hud_component(-1679307491);
	}
	if (!func_1850(*iParam0, 16))
	{
		func_234(1);
	}
	if (func_1850(*iParam0, 32))
	{
		func_609(Global_35, -383172193, 0, 1742327865, 0, 1, 0, 0, 1, 0);
		func_1851(-1623728698, 0);
	}
	func_788(&(Global_1946804->f_1497), Global_35, 1, 49217, 1, 1, 1);
	if (Global_1359489->f_16 & 4194304 != 0)
	{
		Global_1359489->f_16 = (Global_1359489->f_16 - Global_1359489->f_16 & 4194304);
	}
	*iParam0 = 0;
}

var func_1378(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

struct<4> func_1379(char[4] cParam0, int iParam1)
{
	return cParam0->f_1[func_134(iParam1)]->f_13;
}

int func_1380(var uParam0)
{
	return *uParam0;
}

bool func_1381(var uParam0, struct<4> Param1, int iParam5, bool bParam6)
{
	if (func_1382(uParam0, 32768))
	{
		return true;
	}
	if (func_1852(uParam0) >= 3)
	{
		uParam0->f_2286 = func_913(get_player_index(), 0, 0, 1);
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
		func_1853(uParam0);
	}
	if (func_1852(uParam0) < 10)
	{
		if (func_1852(uParam0) == 3)
		{
			func_1854(uParam0, iParam5, bParam6);
		}
		else if (func_1852(uParam0) > 3)
		{
			if (func_1380(uParam0) == 0)
			{
				if (!func_1382(uParam0, 524288))
				{
					func_1855(uParam0);
				}
				else if (is_screen_faded_out())
				{
					func_1856(uParam0, 4);
					func_1857(uParam0, 10);
					func_1858(uParam0, iParam5);
					return true;
				}
			}
			if (!func_1382(uParam0, 67108864) && !Global_1935630->f_12)
			{
				set_ped_reset_flag(Global_35, 25, true);
			}
			if (!func_1859(uParam0->f_1406[uParam0->f_2074], 16))
			{
				disable_control_action(0, -1404316431, false);
				disable_control_action(0, -1304887797, false);
			}
			_0x8910c24b7e0046ec();
			func_1860(0);
			func_1861();
			disable_control_action(0, -1722177808, false);
			disable_control_action(0, 1644850270, false);
			disable_control_action(0, 2139949496, false);
			if (uParam0->f_2074 >= 0)
			{
				if (!func_1859(uParam0->f_1406[uParam0->f_2078], 32768))
				{
					_uiprompt_enable_prompt_type_this_frame(6);
				}
				if (func_1862(uParam0, uParam0->f_2074))
				{
					if (func_1863(uParam0) < 7 && uParam0->f_2078 >= 0)
					{
						func_1864(uParam0, uParam0->f_1406[uParam0->f_2078]->f_27, uParam0->f_1735[uParam0->f_2078]->f_1, 1065353216);
					}
				}
				else if (uParam0->f_2078 >= 0)
				{
					func_1864(uParam0, uParam0->f_1406[uParam0->f_2078]->f_27, uParam0->f_1735[uParam0->f_2078]->f_1, 1065353216);
				}
				func_1865(uParam0);
			}
		}
	}
	bVar0 = func_1866(uParam0, iParam5, bParam6);
	bVar1 = _0xa24c1d341c6e0d53(1, 0, 0);
	if (bVar0)
	{
		if ((!func_1382(uParam0, 268435456) && bVar1) && !func_1382(uParam0, 262144))
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
				func_728(uParam0, 131072);
				func_728(uParam0, 268435456);
			}
		}
		if (func_1867(uParam0, 64) || (uParam0->f_2074 >= 0 && !func_1859(uParam0->f_1406[uParam0->f_2074], 524288)))
		{
			if (_0xa2b1c7ef759a63ce() > 0f || func_1380(uParam0) == 0)
			{
				_0xc9caeaeec1256e54(-1679307491);
				_0xe296208c273bd7f0(-1, -1, 0, 17, 1, 0);
			}
		}
	}
	if (func_1852(uParam0) == 3 || func_1382(uParam0, 131072))
	{
		func_1868(uParam0);
		if (!func_1382(uParam0, 262144))
		{
			if ((bVar0 && func_1382(uParam0, 65536)) || func_1382(uParam0, 131072))
			{
				func_728(uParam0, 32768);
				func_1856(uParam0, 4);
				func_1857(uParam0, 10);
				uParam0->f_2159 = 1;
				func_1858(uParam0, iParam5);
				return true;
			}
		}
	}
	if (func_1852(uParam0) >= 3)
	{
		func_1869(uParam0, iParam5);
		func_1870(uParam0);
		if (!func_1871(uParam0, 1))
		{
			func_1872(uParam0);
		}
		func_1873(uParam0);
	}
	switch (func_1852(uParam0))
	{
		case 0:
			func_1874(uParam0, Param1, iParam5);
			break;
		case 1:
			func_1875(uParam0);
			break;
		case 2:
			func_1876(uParam0);
			break;
		case 3:
			if (func_1877(uParam0))
			{
				func_1878(2);
				func_1864(uParam0, uParam0->f_1406[uParam0->f_2074]->f_27, uParam0->f_1735[uParam0->f_2074]->f_1, 1065353216);
				func_219(&(uParam0->f_2262));
				func_1856(uParam0, 1);
				func_1879();
				func_1857(uParam0, 5);
			}
			break;
		case 5:
		case 6:
		case 8:
			_0x9f9a829c6751f3c7(get_player_index(), 31, 1);
			if (!func_1382(uParam0, 67108864))
			{
				set_ped_reset_flag(Global_35, 25, true);
			}
			set_ped_reset_flag(Global_35, 264, true);
			set_ped_reset_flag(Global_35, 321, true);
			if (func_1852(uParam0) == 5)
			{
				if (func_1880(uParam0))
				{
					func_1856(uParam0, 2);
					func_1857(uParam0, 6);
				}
			}
			if (func_1852(uParam0) == 6)
			{
				if (func_1881(uParam0))
				{
					func_1856(uParam0, 3);
					func_1857(uParam0, 8);
				}
			}
			if (uParam0->f_2075 >= 0 || func_1882(&(uParam0->f_2262)) >= 15f)
			{
				if (func_1883(uParam0, iParam5))
				{
					if (func_1884(uParam0))
					{
						uParam0->f_2075 = func_1885(uParam0);
						func_219(&(uParam0->f_2262));
						set_player_control(get_player_index(), true, 0, false);
						_display_hud_component(-1679307491);
						clear_ped_tasks(Global_35, 1, 0);
						func_1856(uParam0, 6);
						func_1857(uParam0, 9);
					}
					else
					{
						func_1856(uParam0, 4);
						func_1857(uParam0, 10);
						func_1858(uParam0, iParam5);
						return true;
					}
				}
			}
			break;
		case 9:
			if (func_1883(uParam0, iParam5))
			{
				func_1858(uParam0, iParam5);
				func_1857(uParam0, 10);
				return true;
			}
			break;
		case 10:
			return true;
	}
	return false;
}

bool func_1382(var uParam0, int iParam1)
{
	return (uParam0->f_2054 && iParam1) != 0;
}

void func_1383(var uParam0, int iParam1)
{
	uParam0->f_2054 = (uParam0->f_2054 - (uParam0->f_2054 && iParam1));
}

void func_1384(var uParam0, var uParam1)
{
	if (func_1382(uParam1, 32768))
	{
		Var0 = { func_1781(uParam0) };
		func_1886(uParam0, &Var0);
		if (func_1382(uParam1, 131072))
		{
			func_729(uParam0, 268435456);
			if (func_399(uParam0->f_865))
			{
				uParam0->f_865 = { func_1887(uParam1, uParam1->f_2074) };
			}
			if (func_399(uParam0->f_862))
			{
				uParam0->f_862 = { func_1887(uParam1, uParam1->f_2074) };
				get_ground_z_for_3d_coord(uParam0->f_862, &(uParam0->f_862.f_2), false);
				uParam0->f_862.f_2 = (uParam0->f_862.f_2 + 0.5f);
			}
		}
		if (func_1382(uParam1, 268435456))
		{
			func_1888(&(uParam0->f_860), 16384);
		}
	}
	else if (func_1382(uParam1, 524288))
	{
		func_729(uParam0, 67108864);
		func_1383(uParam1, 524288);
	}
	if (func_1867(uParam1, 128))
	{
		func_729(uParam0, 32);
	}
	if (uParam1->f_2293 != 0)
	{
		uParam0->f_872 = uParam1->f_2293;
		if (uParam1->f_2074 >= 0 && func_1859(uParam1->f_1406[uParam1->f_2074], 256))
		{
			func_1888(&(uParam0->f_860), 524288);
		}
	}
	if (*uParam1 == 0 && _0x927b810e43e99932(&(uParam1->f_2082)))
	{
		_copy_memory(&(uParam0->f_873), &(uParam1->f_2082), 16);
	}
}

void func_1385(char[4] cParam0)
{
	if (func_777(&(cParam0->f_7375), 128) || func_777(&(cParam0->f_7375), 256))
	{
		if (_does_anim_scene_exist(cParam0->f_7375.f_804))
		{
			_delete_anim_scene(cParam0->f_7375.f_804);
		}
		func_1889(&(cParam0->f_7375));
		func_1306(&(cParam0->f_7375), 128, 1);
		func_1306(&(cParam0->f_7375), 256, 1);
		func_1306(&(cParam0->f_7375), 4096, 1);
	}
}

void func_1386(char[4] cParam0)
{
	func_1890(&(cParam0->f_7375));
}

bool func_1387(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, var uParam4, char[4] cParam5)
{
	func_1891(uParam4, &cParam0);
	if (func_777(uParam4, 2) && !func_777(uParam4, 67108864))
	{
		disable_control_action(0, -842734359, false);
	}
	if (func_1892(uParam4) != 1)
	{
		func_1893(uParam4);
	}
	_0xf45e46deecf7df6e(4096, 0, 0, -1, -1);
	set_ped_reset_flag(Global_35, 134, true);
	_uiprompt_enable_prompt_type_this_frame(6);
	_0x9f9a829c6751f3c7(get_player_index(), 31, 1);
	switch (func_1892(uParam4))
	{
		case 1:
			if (_does_anim_scene_exist(uParam4->f_804) && _is_anim_scene_loaded(uParam4->f_804, true, false))
			{
				if (!_is_anim_scene_started(uParam4->f_804, false))
				{
					func_1894(uParam4, &cParam0, cParam5);
				}
				else if (_0xef324e9550a394d5(uParam4->f_804))
				{
					func_1895(uParam4, 4);
					return false;
				}
				else
				{
					if (func_1896(uParam4, 2))
					{
						Stack.Push(uParam4);
						Call_Loc(uParam4->f_797);
					}
					func_1897(cParam5);
				}
				func_1895(uParam4, 3);
			}
			else if (!_does_anim_scene_exist(uParam4->f_804))
			{
				if (!is_screen_fading_out())
				{
					do_screen_fade_out(0);
				}
				if (func_123(cParam5, func_35(cParam5), 262144))
				{
					if (!func_777(uParam4, 2097152))
					{
						func_1772(uParam4);
					}
				}
				else if (!is_string_null_or_empty(&(uParam4->f_806)) && (!func_10(cParam5, 8) || func_777(uParam4, 134217728)))
				{
				}
				else
				{
					func_1898(uParam4);
				}
				func_219(&(uParam4->f_1));
				func_1895(uParam4, 2);
			}
			else
			{
				if (!is_screen_fading_out() && !is_screen_faded_out())
				{
					do_screen_fade_out(0);
				}
				func_1899(uParam4);
				if (!func_28(&(uParam4->f_1)))
				{
					func_29(&(uParam4->f_1), 0);
				}
				else if (func_867(&(uParam4->f_1)) >= 60f)
				{
					if (_does_anim_scene_exist(uParam4->f_804))
					{
						_delete_anim_scene(uParam4->f_804);
					}
					func_1895(uParam4, 4);
				}
			}
			break;
		case 2:
			if (!_does_anim_scene_exist(uParam4->f_804) || !_is_anim_scene_loaded(uParam4->f_804, true, false))
			{
				if (func_1900(uParam4, &cParam0, 1, 1))
				{
					if (!_is_anim_scene_loaded(uParam4->f_804, true, false))
					{
						func_1895(uParam4, 4);
					}
					else if (!func_399(func_1901(uParam4)) && !func_1216(Global_35, func_1901(uParam4), 100f, 1, 1))
					{
						func_1292(1);
						start_player_teleport(get_player_index(), func_1901(uParam4), 0f, true, true, true, false);
					}
				}
				else if (func_867(&(uParam4->f_1)) >= 60f)
				{
					if (_does_anim_scene_exist(uParam4->f_804))
					{
						_delete_anim_scene(uParam4->f_804);
					}
					func_1895(uParam4, 4);
				}
			}
			else if (!is_player_teleport_active() || _has_player_teleport_finished(get_player_index()))
			{
				if (func_278(cParam5) != 0 || (func_156(cParam5) == 1 && func_164(cParam5, func_35(cParam5)) >= 3))
				{
					if (!get_is_loading_screen_active())
					{
						_0xa565fac215cbc77d();
						func_18(1, 0);
						func_1894(uParam4, &cParam0, cParam5);
						func_1895(uParam4, 3);
					}
					else
					{
						shutdown_loading_screen();
					}
				}
			}
			else if (func_867(&(uParam4->f_1)) >= 60f)
			{
				if (_does_anim_scene_exist(uParam4->f_804))
				{
					_delete_anim_scene(uParam4->f_804);
				}
				func_1895(uParam4, 4);
			}
			break;
		case 3:
			func_395(uParam4);
			if (func_1896(uParam4, 2))
			{
				Stack.Push(uParam4);
				Call_Loc(uParam4->f_797);
			}
			func_1897(cParam5);
			if ((_does_anim_scene_exist(uParam4->f_804) && _is_anim_scene_started(uParam4->f_804, false)) && (_0xef324e9550a394d5(uParam4->f_804) || func_777(uParam4, 512)))
			{
				if (!func_777(uParam4, 1024) && func_1902(uParam4, 1))
				{
					set_gameplay_cam_relative_heading(0f, 1f);
					set_gameplay_cam_relative_pitch(0f, 1f);
				}
				if (!func_777(uParam4, 512))
				{
					func_219(&(uParam4->f_1));
					func_729(uParam4, 512);
					func_1895(uParam4, 4);
				}
				else if (func_777(uParam4, 524288))
				{
					if (is_screen_faded_in() || is_screen_fading_in())
					{
					}
					do_screen_fade_out(0);
				}
			}
			else
			{
				func_1893(uParam4);
			}
			if (func_777(uParam4, 524288))
			{
				if (IntToFloat(absi((func_1903(uParam4) - func_1904(uParam4)))) <= 2f)
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
				if (func_1905(uParam4, Global_35, 4))
				{
					_0x1b70811d3bf75db9(1, 1);
				}
				if ((is_screen_faded_out() || is_screen_fading_out()) && func_1904(uParam4) > 5000)
				{
					_0x1b70811d3bf75db9(1, 1);
				}
			}
			if (func_1906(uParam4))
			{
				if (!_does_anim_scene_exist(uParam4->f_804))
				{
				}
				func_1907(uParam4);
				return true;
			}
			else
			{
				if (func_777(uParam4, 67108864))
				{
					if (is_screen_faded_out())
					{
						if (!_is_anim_scene_paused(uParam4->f_804) && !_0xef324e9550a394d5(uParam4->f_804))
						{
							_delete_anim_scene_2(uParam4->f_804);
						}
						func_219(&(uParam4->f_1));
						_0x1b70811d3bf75db9(1, 1);
						func_729(uParam4, 512);
						func_1306(uParam4, 67108864, 1);
						func_1895(uParam4, 4);
					}
					else if (!is_screen_fading_out() && !is_screen_faded_out())
					{
						do_screen_fade_out(1000);
					}
				}
				else if ((((!func_777(uParam4, 16384) && !_0xef324e9550a394d5(uParam4->f_804)) && is_screen_faded_out()) && func_1904(uParam4) <= 5000) && func_1904(uParam4) >= 0)
				{
					do_screen_fade_in(1000);
				}
				if (!func_777(uParam4, 536870912) && has_anim_event_fired(Global_35, -1495039362))
				{
					func_1377(&(uParam4->f_861), 0);
					func_729(uParam4, 536870912);
				}
				if (func_1904(uParam4) >= 5000 && func_1904(uParam4) <= (func_1903(uParam4) - 5000))
				{
					func_1908();
				}
			}
			break;
		case 6:
			if (func_1906(uParam4))
			{
				func_1907(uParam4);
				return true;
			}
			break;
		case 4:
			if (func_777(uParam4, 524288))
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
						func_729(uParam4, 1073741824);
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
				if (func_156(cParam5) == 1 && func_164(cParam5, func_35(cParam5)) >= 3)
				{
					if (func_1909(cParam5))
					{
						if (_does_anim_scene_exist(uParam4->f_804) && _is_anim_scene_paused(uParam4->f_804))
						{
							set_anim_scene_paused(uParam4->f_804, false);
						}
						func_1895(uParam4, 3);
					}
					else if (func_867(&(uParam4->f_1)) >= 30f)
					{
						if (_does_anim_scene_exist(uParam4->f_804) && _is_anim_scene_paused(uParam4->f_804))
						{
							set_anim_scene_paused(uParam4->f_804, false);
						}
						func_1895(uParam4, 3);
					}
				}
				if (iVar0 == 0)
				{
					Stack.Push(!func_1896(uParam4, 4));
					Stack.Push(uParam4);
					Call_Loc(uParam4->f_798);
					if (StackVal || StackVal)
					{
						if (_does_anim_scene_exist(uParam4->f_804) && _is_anim_scene_paused(uParam4->f_804))
						{
							set_anim_scene_paused(uParam4->f_804, false);
						}
						func_1895(uParam4, 3);
					}
					else if (func_867(&(uParam4->f_1)) >= 30f)
					{
						if (_does_anim_scene_exist(uParam4->f_804) && _is_anim_scene_paused(uParam4->f_804))
						{
							set_anim_scene_paused(uParam4->f_804, false);
						}
						func_1895(uParam4, 3);
					}
				}
				if (func_1892(uParam4) == 3)
				{
					if (func_777(uParam4, 524288))
					{
						do_screen_fade_out(0);
					}
				}
			}
			break;
		case 5:
			func_1895(uParam4, 4);
			break;
	}
	return false;
}

void func_1388(char[4] cParam0)
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
			if (decor_exist_on(get_indexed_item_in_itemset(iVar0, Global_43616), func_1910()))
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

bool func_1389(int iParam0, bool bParam1)
{
	iVar0 = 1;
	MemCopy(&uVar1, {func_268(iParam0)}, 8);
	StringCopy(&cVar9, _get_label_text_2(&uVar1), 64);
	if (!is_string_null_or_empty(&cVar9))
	{
		if (!func_1911(iParam0))
		{
			iVar0 = 0;
		}
	}
	if (!bParam1)
	{
		MemCopy(&uVar1, {func_269(iParam0)}, 8);
		StringCopy(&cVar9, _get_label_text_2(&uVar1), 64);
		if (!is_string_null_or_empty(&cVar9))
		{
			if (!func_1912(iParam0))
			{
				iVar0 = 0;
			}
		}
	}
	return iVar0;
}

struct<8> func_1390(int iParam0)
{
	MemCopy(&cVar0, {func_268(iParam0)}, 8);
	StringConCat(&cVar0, "_Sounds", 64);
	return cVar0;
}

bool func_1391(int iParam0)
{
	Var0 = { func_1390(iParam0) };
	if (!is_string_null_or_empty(&Var0))
	{
		if (!_0xd9130842d7226045(&Var0, 0))
		{
			return false;
		}
	}
	return true;
}

void func_1392(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 15)
	{
		_datafile_register_query(uParam0->f_2495, iVar0, func_1913(iVar0));
		iVar0++;
	}
}

void func_1393(var uParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7, char* sParam10, bool bParam11, int iParam12)
{
	if (!_does_volume_exist(*uParam0))
	{
		if (bParam11)
		{
			if (iParam12 == 1)
			{
				*uParam0 = _0x0eb78c2b156635b1(665633627, vParam1, vParam4, vParam7);
				_0x5b23dff8e0948bb2(*uParam0, 1);
			}
			else
			{
				func_1410(uParam0, vParam1, vParam4, vParam7, sParam10);
			}
		}
		else if (iParam12 == 1)
		{
			*uParam0 = _0x0eb78c2b156635b1(-1612834106, vParam1, vParam4, vParam7);
			_0x5b23dff8e0948bb2(*uParam0, 1);
		}
		else
		{
			func_1395(uParam0, vParam1, vParam4, vParam7, sParam10);
		}
	}
}

void func_1394(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	if (!_does_volume_exist(iParam0))
	{
		return;
	}
	func_1914(iParam0, bParam1);
	_0x18262cafebb5fbe1(iParam0, iParam2, iParam3, 0, -1, -1, 0);
	_0xb56d41a694e42e86(iParam0, iParam2, iParam3, 0, -1, -1, 2);
}

void func_1395(var uParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7, char* sParam10)
{
	*uParam0 = _create_volume_box_with_custom_name(vParam1, vParam4, vParam7, sParam10);
}

bool func_1396(char[4] cParam0)
{
	if (iVar2064 == 1)
	{
		return true;
	}
	iVar0 = func_35(cParam0);
	if (iVar0 == iLocal_74)
	{
		Var1 = { func_222(0, 7) };
	}
	else if (iVar0 == iLocal_75)
	{
		Var1 = { func_222(8, 0) };
	}
	else if (iVar0 == iLocal_76)
	{
		Var1 = { func_222(9, 0) };
	}
	else if (iVar0 == iLocal_77)
	{
		Var1 = { func_222(7, 0) };
	}
	else if (iVar0 == iLocal_78)
	{
		Var1 = { func_222(1, 0) };
	}
	else if (iVar0 == iLocal_79)
	{
		Var1 = { func_222(2, 0) };
	}
	else if (iVar0 == iLocal_80)
	{
		Var1 = { func_222(3, 0) };
	}
	iLocal_347 = func_259(cParam0);
	if (!func_165(iVar344, 0))
	{
		return false;
	}
	iVar9 = 0;
	if ((iVar0 == iLocal_74 && func_122(cParam0, 4)) || iVar0 > iLocal_74)
	{
		iVar9 = 1;
	}
	Var5 = { func_386(cParam0) };
	func_1915(&iLocal_347, Var5, Var5.f_3, 0, 1065353216, 0, iVar9, 1);
	Var10 = { func_1916() };
	func_1918(cParam0, iVar344, 358475, 0, &Var10, 67108863, 1023, 3, 40);
	if ((!is_player_teleport_active() && !func_31()) && iVar9 == 1)
	{
		func_768(Global_35, Var1, Var1.f_3, 2, 1073741824);
	}
	func_147(cParam0, Global_35, "ARTHUR", 0);
	if (!func_346(-160924582, 1, 0))
	{
		func_317(-160924582, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
	}
	set_ped_config_flag(Global_35, 360, true);
	set_ped_can_use_auto_conversation_lookat(Global_35, true);
	func_1919();
	if (iVar0 == iLocal_75 || iVar0 == iLocal_76)
	{
		func_1209(&Global_35, &iLocal_347, 1);
		func_1189(Global_35, iVar344, 0, -1, 1);
		clear_ped_tasks_immediately(iVar344, false, true);
		clear_ped_tasks(Global_35, 1, 0);
		func_1660(&iLocal_347);
	}
	if ((iVar0 == iLocal_74 || iVar0 == iLocal_75) || iVar0 == iLocal_76)
	{
		_0xb832f1a686b9b810(Global_35, true, 0);
		func_101(cParam0, 134217728);
	}
	iLocal_2067 = 1;
	return true;
}

bool func_1397(char[4] cParam0)
{
	if (iVar2065 == 1)
	{
		return true;
	}
	iVar0 = func_35(cParam0);
	if (iVar0 == iLocal_74)
	{
		Var1 = { func_222(0, 8) };
		Var5 = { func_222(0, 14) };
	}
	else if (iVar0 == iLocal_75)
	{
		Var1 = { func_222(8, 1) };
		Var5 = { func_222(8, 3) };
	}
	else if (iVar0 == iLocal_76)
	{
		Var1 = { func_222(9, 1) };
		Var5 = { func_222(9, 3) };
	}
	else if (iVar0 == iLocal_77)
	{
		Var1 = { func_222(7, 1) };
		Var5 = { func_222(7, 3) };
	}
	else if (iVar0 == iLocal_78)
	{
		Var1 = { func_222(1, 1) };
		Var5 = { func_222(1, 3) };
	}
	else if (iVar0 == iLocal_79)
	{
		Var1 = { func_222(2, 1) };
		Var5 = { func_222(2, 3) };
	}
	else if (iVar0 == iLocal_80)
	{
		Var1 = { func_222(3, 1) };
		Var5 = { func_222(3, 3) };
	}
	if (!func_165(iVar346, 0))
	{
		if (!func_1403(-1, 1))
		{
			return false;
		}
		iLocal_349 = &Local_14.f_27[0];
		iLocal_350 = &Local_14.f_27[1];
		return false;
	}
	else if (!func_165(iVar347, 0))
	{
		if (!func_1403(1, 1))
		{
			return false;
		}
		iLocal_350 = &Local_14.f_27[1];
		return false;
	}
	if (!func_1920(iVar346, 243346937) || !_0xa0bc8faed8cfeb3c(iVar346))
	{
		return false;
	}
	bVar9 = false;
	if ((iVar0 == iLocal_74 && func_122(cParam0, 4)) || iVar0 > iLocal_74)
	{
		bVar9 = true;
	}
	func_388(&iLocal_350, Var5, Var5.f_3, 0, -1f, bVar9, 1, 0);
	func_1921(cParam0, iVar347, 31);
	_0xba8818212633500a(iVar347, 6, 1);
	_0xae6004120c18df97(iVar347, 0, 0);
	set_ped_config_flag(iVar347, 324, true);
	set_ped_relationship_group_hash(iVar347, 1030835986);
	set_ped_config_flag(iVar346, 2, true);
	set_ped_can_use_auto_conversation_lookat(iVar346, true);
	Local_464.f_50 = iVar347;
	if (!func_31() && bVar9 == 1)
	{
		func_1187(iVar346, Var1, 2, 1073741824);
	}
	func_147(cParam0, iVar346, "RAINS_FALL", 0);
	func_1690(cParam0, iVar346, 31, "NTV1_RF");
	func_1771(iVar346, "NTV1_RF", 1);
	_0xe98d55c5983f2509(iVar346);
	set_ped_config_flag(iVar346, 297, false);
	set_ped_config_flag(iVar346, 146, true);
	set_ped_config_flag(iVar346, 301, false);
	set_blocking_of_non_temporary_events(iVar346, true);
	_0x098caa6dbe7d8d82(iVar346, 1);
	set_ped_can_be_targetted(iVar346, false);
	set_entity_as_mission_entity(iVar346, true, true);
	func_1922(iVar346, 243346937);
	func_1923(&(Local_464.f_20), iVar346);
	if (iVar0 == iLocal_74 || iVar0 == iLocal_75)
	{
		iLocal_247 = 0;
	}
	else if (iVar0 == iLocal_76)
	{
		iLocal_247 = 4;
	}
	if (iVar0 == iLocal_75 || iVar0 == iLocal_76)
	{
		func_1209(&iLocal_349, &iLocal_350, 1);
		func_1189(iVar346, iVar347, 0, -1, 1);
		clear_ped_tasks(iVar347, 1, 0);
	}
	if (iVar0 <= iLocal_76)
	{
		func_1203(1);
	}
	else if (iVar0 >= iLocal_77)
	{
		func_1244(1);
	}
	iLocal_2068 = 1;
	return true;
}

bool func_1398(char[4] cParam0)
{
	if ((func_165(iVar348, 0) && func_165(iVar349, 0)) || iVar2066 == 1)
	{
		return true;
	}
	iVar0 = func_35(cParam0);
	if (iVar0 == iLocal_74)
	{
		Var1 = { func_222(0, 9) };
		Var5 = { func_222(0, 9) };
	}
	else if (iVar0 == iLocal_75)
	{
		Var1 = { func_222(8, 9) };
		Var5 = { func_222(8, 9) };
	}
	else if (iVar0 == iLocal_76)
	{
		Var1 = { func_222(9, 9) };
		Var5 = { func_222(9, 9) };
	}
	if (!func_165(iVar348, 0) || !func_165(iVar349, 0))
	{
		if (!func_1924(-1, 1))
		{
			return false;
		}
		iLocal_351 = &Local_14.f_32[0];
		iLocal_352 = &Local_14.f_32[1];
		return false;
	}
	bVar9 = false;
	if ((iVar0 == iLocal_74 && func_122(cParam0, 4)) || iVar0 > iLocal_74)
	{
		bVar9 = true;
	}
	func_388(&iLocal_352, Var5, Var5.f_3, 0, -1f, bVar9, 1, 0);
	func_1921(cParam0, iVar349, 32);
	_0xba8818212633500a(iVar349, 6, 1);
	_0xae6004120c18df97(iVar349, 0, 0);
	set_ped_config_flag(iVar349, 324, true);
	set_ped_config_flag(iVar348, 2, true);
	set_ped_can_use_auto_conversation_lookat(iVar348, true);
	set_ped_relationship_group_hash(iVar349, 1030835986);
	Local_564.f_50 = iVar349;
	if (bVar9 == 1)
	{
		func_1187(iVar348, Var1, 2, 1073741824);
	}
	func_147(cParam0, iVar348, "MONROE", 0);
	func_1192(iVar348);
	set_ped_as_cop(iVar348, false);
	func_1690(cParam0, iVar348, 32, "ALLY_MONROE");
	set_ped_relationship_group_hash(iVar348, 1030835986);
	func_1771(iVar348, "ALLY_MONROE", 1);
	set_blocking_of_non_temporary_events(iVar348, true);
	set_entity_as_mission_entity(iVar348, true, true);
	set_ped_can_be_targetted(iVar348, false);
	func_1922(iVar348, 41788943);
	func_773(cParam0, iVar348, "CaptainMonroe", 0, 0);
	if ((iVar0 == iLocal_74 || iVar0 == iLocal_75) || iVar0 == iLocal_76)
	{
		func_1189(iVar348, iVar349, 0, -1, 1);
		clear_ped_tasks(iVar349, 1, 0);
	}
	iLocal_2069 = 1;
	return true;
}

bool func_1399(char[4] cParam0)
{
	func_1925();
	if (iVar2215 == 1)
	{
		return true;
	}
	if (!func_1926(-1, 1))
	{
		return false;
	}
	if (!func_1927(-1, 1))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		uLocal_356[iVar0] = &Local_14.f_9[iVar0];
		func_1928(uLocal_356[iVar0]);
		func_176(Local_664[iVar0], 0);
		func_1923(&(Local_664[iVar0]->f_20), &(uLocal_356[iVar0]));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		Local_1466[iVar0] = &Local_14.f_18[iVar0];
		func_388(Local_1466[iVar0], func_1929(2, iVar0), func_1930(2, iVar0), 0, 2f, 1, 1, 0);
		func_176(Local_1466[iVar0], 0);
		iVar0++;
	}
	func_1931(cParam0);
	func_1932();
	iLocal_2218 = 1;
	return true;
}

void func_1400(char[4] cParam0)
{
	if (iVar2715 == 0)
	{
		iVar0 = _get_anim_scene_ped(cParam0->f_7375.f_804, "A_M_O_WapTownfolk_01", false);
		iVar1 = _get_anim_scene_ped(cParam0->f_7375.f_804, "MSP_NATIVE1_AILING_NATIVE_01", false);
		iVar2 = _get_anim_scene_ped(cParam0->f_7375.f_804, "MSP_NATIVE1_AILING_NATIVE_02", false);
		iVar3 = _get_anim_scene_ped(cParam0->f_7375.f_804, "MSP_NATIVE1_ASSISTANT_01", false);
		if (((((((func_165(iVar0, 0) && _0xa0bc8faed8cfeb3c(iVar0)) && func_165(iVar1, 0)) && _0xa0bc8faed8cfeb3c(iVar1)) && func_165(iVar2, 0)) && _0xa0bc8faed8cfeb3c(iVar2)) && func_165(iVar3, 0)) && _0xa0bc8faed8cfeb3c(iVar3))
		{
			func_1933(iVar0);
			func_1933(iVar1);
			func_1933(iVar2);
			func_1933(iVar3);
			if (((!func_1695(&iVar0) && !func_1695(&iVar1)) && !func_1695(&iVar2)) && !func_1695(&iVar3))
			{
				iLocal_2718 = 1;
			}
		}
	}
}

void func_1401(char[4] cParam0)
{
	iVar0 = func_35(cParam0);
	if (iVar2067 == 1)
	{
		return;
	}
	if (!func_391(iVar2236))
	{
		iLocal_2239 = func_284();
	}
	func_682(&uVar1, 0, 30, 19, func_677(iVar2236), func_676(iVar2236), func_675(iVar2236));
	func_682(&uVar2, 0, 10, 5, func_677(iVar2236), func_676(iVar2236), func_675(iVar2236));
	func_682(&uVar3, 0, 11, 5, func_677(iVar2236), func_676(iVar2236), func_675(iVar2236));
	func_682(&uVar4, 0, 20, 6, func_677(iVar2236), func_676(iVar2236), func_675(iVar2236));
	iVar5 = func_678(iVar2236);
	iVar6 = func_679(iVar2236);
	if (((iVar5 == 19 && iVar6 >= 30) || iVar5 >= 20) || ((iVar5 == 5 && iVar6 <= 10) || (iVar5 >= 0 && iVar5 < 5)))
	{
		func_682(&iLocal_2239, 0, 30, 21, func_677(iVar2236), func_676(iVar2236), func_675(iVar2236));
		func_1934(iVar2236);
		_set_weather_type(821931868, true, true, false, 0f, false);
	}
	else if (((iVar5 == 5 && iVar6 >= 11) || (iVar5 >= 6 && iVar5 < 19)) || (iVar5 == 19 && iVar6 <= 29))
	{
		if ((iVar5 == 6 && iVar6 > 20) || iVar5 > 6)
		{
			func_682(&iLocal_2239, 0, iVar6, iVar5, func_677(iVar2236), func_676(iVar2236), func_675(iVar2236));
			func_1934(iVar2236);
			_set_weather_type(821931868, true, false, false, 0f, false);
		}
		else
		{
			func_682(&iLocal_2239, 0, 20, 6, func_677(iVar2236), func_676(iVar2236), func_675(iVar2236));
			func_1934(iVar2236);
			_set_weather_type(821931868, true, false, false, 0f, false);
		}
	}
	iLocal_2070 = 1;
}

void func_1402(var uParam0, int iParam1)
{
	uParam0->f_1 = (uParam0->f_1 - (uParam0->f_1 && iParam1));
}

bool func_1403(int iParam0, bool bParam1)
{
	if (!func_254(Local_14.f_25))
	{
		Local_14.f_25 = { func_423() };
	}
	if (func_1935(&(Local_14.f_25), 1))
	{
		return true;
	}
	if (!does_entity_exist(&(Local_14.f_27[0])) && (iParam0 == -1 || iParam0 == 0))
	{
		Local_14.f_27[0] = func_1936(-2046943672, 437.5849f, 2230.405f, 249.1208f, 240.1411f, 1, 1, 0, 1, 1, 1, 1, 0, 0, 0);
		set_ped_name_debug(&(Local_14.f_27[0]), "Rainsfall");
		func_1937(Local_14.f_25, &(Local_14.f_27[0]));
		func_1938(&(Local_14.f_27[0]), Local_14);
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
	if (!does_entity_exist(&(Local_14.f_27[1])) && (iParam0 == -1 || iParam0 == 1))
	{
		Local_14.f_27[1] = func_1936(2145697477, 491.1828f, 2222.667f, 247.1141f, 246.0715f, 1, 1, 0, 1, 1, 1, 1, 0, 0, 0);
		set_ped_name_debug(&(Local_14.f_27[1]), "Rainsfall_Horse");
		func_1937(Local_14.f_25, &(Local_14.f_27[1]));
		func_1938(&(Local_14.f_27[1]), Local_14);
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
	func_1939(&(Local_14.f_25), 1);
	return true;
}

void func_1404(int iParam0, char* sParam1, int iParam2)
{
	if (!does_entity_exist(iParam2))
	{
		return;
	}
	set_anim_scene_entity(iParam0, sParam1, iParam2, 0);
}

int func_1405(char[4] cParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, bool bParam5)
{
	return func_1940(cParam0, iParam1, sParam2, iParam3, bParam4, bParam5);
}

bool func_1406(char[4] cParam0, int iParam1)
{
	return func_777(&(cParam0->f_7375), iParam1);
}

void func_1407(int iParam0)
{
	if (!_is_imap_active(iParam0))
	{
		_request_imap(iParam0);
	}
}

void func_1408(char* sParam0)
{
	if (!_0x5ac0944c156e5f44(sParam0))
	{
		_0x7c334ff4d9215912(sParam0);
	}
}

void func_1409(int iParam0, bool bParam1)
{
	if (!is_itemset_valid(Local_14.f_45))
	{
		Local_14.f_45 = create_itemset(true);
	}
	if (!does_entity_exist(&(Local_14.f_46[0])) && (iParam0 == -1 || iParam0 == 0))
	{
		Local_14.f_46[0] = create_object(1727249588, 1004.691f, 1468.029f, 277.6124f, true, true, false, false, true);
		set_entity_rotation(&(Local_14.f_46[0]), 15.5726f, 71.0911f, 60.9585f, 2, true);
		freeze_entity_position(&(Local_14.f_46[0]), bParam1);
	}
	func_1938(&(Local_14.f_46[0]), Local_14);
	func_1938(&(Local_14.f_46[0]), Local_14.f_45);
	if (!does_entity_exist(&(Local_14.f_46[1])) && (iParam0 == -1 || iParam0 == 1))
	{
		Local_14.f_46[1] = create_object(193241785, 973.8544f, 1446.62f, 278.8728f, true, true, false, false, true);
		set_entity_rotation(&(Local_14.f_46[1]), 66.9726f, -1.3089f, 42.3589f, 2, true);
		freeze_entity_position(&(Local_14.f_46[1]), bParam1);
	}
	func_1938(&(Local_14.f_46[1]), Local_14);
	func_1938(&(Local_14.f_46[1]), Local_14.f_45);
	if (!does_entity_exist(&(Local_14.f_46[2])) && (iParam0 == -1 || iParam0 == 2))
	{
		Local_14.f_46[2] = create_object(1369514652, 982.8148f, 1471.028f, 277.2813f, true, true, false, false, true);
		set_entity_rotation(&(Local_14.f_46[2]), -12.4158f, -16.6733f, 114.4817f, 2, true);
		freeze_entity_position(&(Local_14.f_46[2]), bParam1);
	}
	func_1938(&(Local_14.f_46[2]), Local_14);
	func_1938(&(Local_14.f_46[2]), Local_14.f_45);
	if (!does_entity_exist(&(Local_14.f_46[3])) && (iParam0 == -1 || iParam0 == 3))
	{
		Local_14.f_46[3] = create_object(1727249588, 968.2615f, 1460.073f, 279.2508f, true, true, false, false, true);
		set_entity_rotation(&(Local_14.f_46[3]), -11.832f, 0.7349f, 163.6063f, 2, true);
		freeze_entity_position(&(Local_14.f_46[3]), bParam1);
	}
	func_1938(&(Local_14.f_46[3]), Local_14);
	func_1938(&(Local_14.f_46[3]), Local_14.f_45);
	if (!does_entity_exist(&(Local_14.f_46[4])) && (iParam0 == -1 || iParam0 == 4))
	{
		Local_14.f_46[4] = create_object(1727249588, 965.1879f, 1471.316f, 279.1816f, true, true, false, false, true);
		set_entity_rotation(&(Local_14.f_46[4]), -82.743f, -89.7031f, -169.9999f, 2, true);
		freeze_entity_position(&(Local_14.f_46[4]), bParam1);
	}
	func_1938(&(Local_14.f_46[4]), Local_14);
	func_1938(&(Local_14.f_46[4]), Local_14.f_45);
	if (!does_entity_exist(&(Local_14.f_46[5])) && (iParam0 == -1 || iParam0 == 5))
	{
		Local_14.f_46[5] = create_object(1727249588, 993.759f, 1441.758f, 278.3427f, true, true, false, false, true);
		set_entity_rotation(&(Local_14.f_46[5]), 15.5726f, 71.0911f, 10.9585f, 2, true);
		freeze_entity_position(&(Local_14.f_46[5]), bParam1);
	}
	func_1938(&(Local_14.f_46[5]), Local_14);
	func_1938(&(Local_14.f_46[5]), Local_14.f_45);
	if (!does_entity_exist(&(Local_14.f_46[6])) && (iParam0 == -1 || iParam0 == 6))
	{
		Local_14.f_46[6] = create_object(193241785, 985.0064f, 1460.29f, 277.1501f, true, true, false, false, true);
		set_entity_rotation(&(Local_14.f_46[6]), 66.9726f, -1.3089f, 170.3586f, 2, true);
		freeze_entity_position(&(Local_14.f_46[6]), bParam1);
	}
	func_1938(&(Local_14.f_46[6]), Local_14);
	func_1938(&(Local_14.f_46[6]), Local_14.f_45);
	if (!does_entity_exist(&(Local_14.f_46[7])) && (iParam0 == -1 || iParam0 == 7))
	{
		Local_14.f_46[7] = create_object(1727249588, 984.0213f, 1448.302f, 277.5449f, true, true, false, false, true);
		set_entity_rotation(&(Local_14.f_46[7]), -22.9f, 0f, -22f, 2, true);
		freeze_entity_position(&(Local_14.f_46[7]), bParam1);
	}
	func_1938(&(Local_14.f_46[7]), Local_14);
	func_1938(&(Local_14.f_46[7]), Local_14.f_45);
	if (!does_entity_exist(&(Local_14.f_46[8])) && (iParam0 == -1 || iParam0 == 8))
	{
		Local_14.f_46[8] = create_object(193241785, 965.0411f, 1471.67f, 279.1323f, true, true, false, false, true);
		set_entity_rotation(&(Local_14.f_46[8]), 66.9726f, -1.3089f, 94.3588f, 2, true);
		freeze_entity_position(&(Local_14.f_46[8]), bParam1);
	}
	func_1938(&(Local_14.f_46[8]), Local_14);
	func_1938(&(Local_14.f_46[8]), Local_14.f_45);
}

void func_1410(var uParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7, char* sParam10)
{
	*uParam0 = _create_volume_cylinder_with_custom_name(vParam1, vParam4, vParam7, sParam10);
}

void func_1411(int iParam0, bool bParam1)
{
	if (!is_itemset_valid(Local_14.f_41))
	{
		Local_14.f_41 = create_itemset(true);
	}
	if (!does_entity_exist(&(Local_14.f_42[0])) && (iParam0 == -1 || iParam0 == 0))
	{
		Local_14.f_42[0] = create_object(2010907555, 866.4849f, 1791.164f, 301.9409f, true, true, false, false, true);
		set_entity_rotation(&(Local_14.f_42[0]), 0f, 0f, 85.6007f, 2, true);
		freeze_entity_position(&(Local_14.f_42[0]), bParam1);
	}
	func_1938(&(Local_14.f_42[0]), Local_14);
	func_1938(&(Local_14.f_42[0]), Local_14.f_41);
	if (!does_entity_exist(&(Local_14.f_42[1])) && (iParam0 == -1 || iParam0 == 1))
	{
		Local_14.f_42[1] = create_object(2010907555, 1087.144f, 1650.018f, 372.262f, true, true, false, false, true);
		set_entity_rotation(&(Local_14.f_42[1]), 1.3441f, -9.6476f, -167.1697f, 2, true);
		freeze_entity_position(&(Local_14.f_42[1]), bParam1);
	}
	func_1938(&(Local_14.f_42[1]), Local_14);
	func_1938(&(Local_14.f_42[1]), Local_14.f_41);
}

int func_1412(int iParam0, vector3 vParam1)
{
	if (func_399(vParam1))
	{
		return -1;
	}
	fVar1 = 25f;
	iVar2 = -1;
	iVar3 = 0;
	while (iVar3 < 500)
	{
		if (!func_1941(iVar3))
		{
			return iVar2;
		}
		else if (func_1942(iVar3) != iParam0)
		{
			Jump @108; //curOff = 70
		}
		else
		{
			fVar0 = func_1471(vParam1, func_1943(iVar3));
			if (fVar0 < fVar1)
			{
				fVar1 = fVar0;
				iVar2 = iVar3;
			}
		}
		iVar3++;
	}
	return iVar2;
}

void func_1413(int iParam0, bool bParam1)
{
	if (iParam0 <= -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (func_1944(iParam0, iVar0))
		{
			func_1945(iParam0, iVar0);
		}
		iVar0++;
	}
	if (bParam1)
	{
		func_1946(iParam0, 1);
	}
}

void func_1414(int iParam0, int iParam1, bool bParam2, float fParam3)
{
	func_1947(iParam0, iParam1, bParam2, fParam3);
}

bool func_1415(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 == 24)
	{
		iParam1 = 0;
	}
	if (iParam1 < 0 || iParam1 >= 24)
	{
		return false;
	}
	if (iParam2 == 24)
	{
		iParam2 = 0;
	}
	if (iParam2 < 0 || iParam2 >= 24)
	{
		return false;
	}
	if (iParam1 == iParam2)
	{
		return true;
	}
	bVar0 = iParam2 < iParam1;
	iVar1 = iParam1;
	iVar2 = iParam2;
	if (bVar0)
	{
		iVar2 = 24;
	}
	if (iParam0 >= iVar1 && iParam0 < iVar2)
	{
		return true;
	}
	if (!bVar0)
	{
		return false;
	}
	iVar1 = 0;
	iVar2 = iParam2;
	if (iParam0 >= iVar1 && iParam0 < iVar2)
	{
		return true;
	}
	return false;
}

void func_1416(char[4] cParam0)
{
	iVar1 = 0;
	while (iVar1 < 29)
	{
		iVar0 = iVar1;
		if (&iLocal_81[iVar0] == 1)
		{
		}
		else
		{
			func_1706(cParam0, iVar0);
		}
		iVar1++;
	}
}

void func_1417(char[4] cParam0)
{
	if (func_903(cParam0))
	{
		return;
	}
	iVar0 = func_35(cParam0);
	if ((!func_165(iVar346, 0) || is_ped_injured(iVar346)) || is_entity_on_fire(iVar346))
	{
		func_1445(cParam0, func_1948(31, 0), 1, 0);
	}
	if (((!func_165(iVar347, 0) || is_ped_injured(iVar347)) || is_ped_in_writhe(iVar347)) || is_entity_on_fire(iVar347))
	{
		StringCopy(&cVar1, "NTV1_DEAD_RFHORSE", 64);
		func_1445(cParam0, cVar1, 1, 0);
	}
	if (((!func_165(iVar344, 0) || is_ped_injured(iVar344)) || is_ped_in_writhe(iVar344)) || is_entity_on_fire(iVar344))
	{
		func_1445(cParam0, func_1916(), 1, 0);
	}
	if (iVar0 == iLocal_74 && !func_1212(cParam0, 20))
	{
		if ((!func_165(iVar348, 0) || is_ped_injured(iVar348)) || is_entity_on_fire(iVar348))
		{
			func_1445(cParam0, func_1948(32, 0), 1, 0);
		}
		if (((!func_165(iVar349, 0) || is_ped_injured(iVar349)) || is_ped_in_writhe(iVar349)) || is_entity_on_fire(iVar349))
		{
			func_1445(cParam0, func_1949(32, 0), 1, 0);
		}
	}
	if ((iVar0 == iLocal_74 || iVar0 == iLocal_75) || iVar0 == iLocal_76)
	{
		if ((func_1239(Global_35, &(iLocal_124[15]), 1, 0) && has_player_damaged_at_least_one_non_animal_ped(get_player_index())) && _0x72ad59f7b7fb6e24(get_player_index(), 25000))
		{
			if (_0x1a6e84f13c952094(get_player_index(), 3000, &iVar9))
			{
				iVar13 = iVar9;
				iVar14 = 0;
				while (iVar14 < iVar13)
				{
					if (does_entity_exist(&(iVar9[iVar14])) && ((is_entity_dead(&(iVar9[iVar14])) || func_1950(&(iVar9[iVar14]), 3000, 0, 0)) || func_1951(&(iVar9[iVar14]), 0, &(Local_464.f_20), &(Local_464.f_48), 0, 0)))
					{
						func_1709(cParam0, "NTV1_KILL_RF", "", 1, 0);
					}
					iVar14++;
				}
			}
		}
	}
}

bool func_1418(char[4] cParam0, int iParam1)
{
	return func_945(cParam0, iParam1, &uVar0);
}

void func_1419(char[4] cParam0, int iParam1, int iParam2)
{
	if (!does_entity_exist(iParam2))
	{
		return;
	}
	if (!func_945(cParam0, iParam2, &iVar0))
	{
		return;
	}
	iVar2 = -1;
	iVar1 = 0;
	while (iVar1 < cParam0->f_13145)
	{
		if (func_253(cParam0->f_5423[iVar1]))
		{
			if (cParam0->f_5423[iVar1]->f_1 == iParam1)
			{
				iVar2 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar2 != -1 && does_entity_exist(cParam0->f_5423[iVar0]->f_1))
	{
		cParam0->f_5423[iVar2]->f_1 = cParam0->f_5423[iVar0]->f_1;
	}
	cParam0->f_5423[iVar0]->f_1 = iParam1;
	func_1952(cParam0->f_5423[iVar0], 64);
	if (is_entity_a_vehicle(iParam1))
	{
		func_1952(cParam0->f_5423[iVar0], 8);
	}
	else if (func_1288(iParam1))
	{
		func_1952(cParam0->f_5423[iVar0], 16);
	}
}

void func_1420(int iParam0, float fParam1, int iParam2)
{
	set_vehicle_density_multiplier_this_frame(fParam1);
	set_random_vehicle_density_multiplier_this_frame(fParam1);
	set_parked_vehicle_density_multiplier_this_frame(fParam1);
	_0xf45e46deecf7df6e(8192, 0, 0, -1, -1);
}

void func_1421(char[4] cParam0)
{
	iVar0 = func_35(cParam0);
	iVar2 = func_284();
	func_682(&iVar1, 0, 0, 19, func_677(iVar2), func_676(iVar2), func_675(iVar2));
	if (func_1213(5, 22) && func_1953(iVar1))
	{
		_pause_clock_this_frame(true);
	}
}

void func_1422(char[4] cParam0)
{
	if (func_1212(cParam0, 13) && iVar2068 == 0)
	{
		iLocal_2071 = 1;
		func_1954(cParam0, -1719884053);
	}
}

void func_1423(char[4] cParam0)
{
	iVar16 = func_35(cParam0);
	iVar17 = func_134(iVar16);
	iVar18 = func_164(cParam0, iVar16);
	if (cParam0->f_8269.f_2504 > 0)
	{
		iVar19 = 0;
		while (iVar19 < cParam0->f_8269.f_2504)
		{
			if (func_216(cParam0->f_8269[iVar19], 1048576))
			{
				if (func_1955(cParam0, cParam0->f_8269[iVar19], iVar16, iVar17, iVar18))
				{
					func_1335(cParam0->f_8269[iVar19]);
				}
				else if (func_1956(cParam0, cParam0->f_8269[iVar19], iVar16, iVar17, iVar18))
				{
					func_226(cParam0->f_8269[iVar19]);
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
			if (func_216(cParam0->f_8269.f_641[iVar19], 1048576))
			{
				if (func_1957(cParam0, cParam0->f_8269.f_641[iVar19], iVar16, iVar17, iVar18, 1))
				{
					func_1958(cParam0->f_8269.f_641[iVar19]);
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
			if (func_216(cParam0->f_8269.f_1282[iVar19], 1048576))
			{
				if (func_1957(cParam0, cParam0->f_8269.f_1282[iVar19], iVar16, iVar17, iVar18, 0))
				{
					if (func_217(cParam0->f_8269.f_1282[iVar19], 1))
					{
						if (func_216(cParam0->f_8269.f_1282[iVar19], 4))
						{
							func_1959(&(cParam0->f_8269));
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
			if (func_216(cParam0->f_8269.f_2243[iVar19], 1048576))
			{
				if (func_1955(cParam0, cParam0->f_8269.f_2243[iVar19], iVar16, iVar17, iVar18))
				{
					func_1960(cParam0, cParam0->f_8269.f_2243[iVar19], 1);
					func_476(cParam0->f_8269.f_2243[iVar19], 1);
				}
				else if (func_1956(cParam0, cParam0->f_8269.f_2243[iVar19], iVar16, iVar17, iVar18))
				{
					func_1960(cParam0, cParam0->f_8269.f_2243[iVar19], 0);
					func_476(cParam0->f_8269.f_2243[iVar19], 2);
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

bool func_1424(char[4] cParam0)
{
	if (func_123(cParam0, func_35(cParam0), 16777216))
	{
		return false;
	}
	if (!func_123(cParam0, func_35(cParam0), 2))
	{
		return false;
	}
	if (!Global_1935630->f_12)
	{
		return ((get_is_task_active(Global_35, 3) || func_1289(Global_35, -2017877118)) || _0x3ab6c7b0bb0df4b1(Global_35, -1));
	}
	return false;
}

void func_1425()
{
	_0x8910c24b7e0046ec();
	disable_control_action(0, -1404316431, false);
	func_1860(0);
	func_1961();
}

void func_1426(char[4] cParam0, int iParam1, int iParam2)
{
	func_1962(&(cParam0->f_1[func_134(iParam1)]->f_11), iParam2);
	if (iParam2 == 8388608)
	{
		_display_hud_component(-1679307491);
	}
}

void func_1427(var uParam0)
{
	if (func_494(uParam0, 32768))
	{
		return;
	}
	bVar0 = func_494(uParam0, 1024);
	if (func_494(uParam0, 128) || bVar0)
	{
		if (func_494(uParam0, 4096))
		{
			if (!func_494(uParam0, 2048))
			{
				iVar1 = get_blip_from_entity(*uParam0);
				if (does_blip_exist(iVar1))
				{
					_blip_set_modifier(iVar1, -1186550032);
				}
				func_1952(uParam0, 2048);
				return;
			}
		}
		else if (func_494(uParam0, 2048))
		{
			iVar2 = get_blip_from_entity(*uParam0);
			if (does_blip_exist(iVar2))
			{
				_set_blip_flash_style(iVar2, -1186550032);
			}
			func_1963(uParam0, 2048);
		}
		if (func_494(uParam0, 512))
		{
			if (func_495(uParam0->f_10))
			{
				if (func_854(Global_35, *uParam0, 150f, 1) || bVar0)
				{
					if (!func_1964(uParam0->f_10))
					{
						func_500(uParam0->f_10, 1);
						func_1965(uParam0->f_10, 0);
					}
				}
				else if ((func_1964(uParam0->f_10) && !bVar0) && !func_494(uParam0, 16384))
				{
					func_500(uParam0->f_10, 0);
					func_1965(uParam0->f_10, 1);
				}
			}
		}
		else if (!does_blip_exist(uParam0->f_8))
		{
			if (!does_blip_exist(get_blip_from_entity(*uParam0)))
			{
				if (func_854(Global_35, *uParam0, 150f, 1))
				{
					uParam0->f_8 = _blip_add_for_entity(422991367, *uParam0);
					if (!is_string_null_or_empty(uParam0->f_4))
					{
						set_blip_name_from_text_file(uParam0->f_8, uParam0->f_4);
					}
				}
			}
		}
		else if ((does_blip_exist(get_blip_from_entity(*uParam0)) && uParam0->f_8 != get_blip_from_entity(*uParam0)) || !func_854(Global_35, *uParam0, 150f, 1))
		{
			remove_blip(&(uParam0->f_8));
		}
	}
	else if (func_494(uParam0, 512))
	{
		if (func_495(uParam0->f_10))
		{
			if (func_1964(uParam0->f_10))
			{
				func_500(uParam0->f_10, 0);
				func_1965(uParam0->f_10, 1);
			}
		}
	}
	else if (does_blip_exist(uParam0->f_8))
	{
		remove_blip(&(uParam0->f_8));
	}
}

bool func_1428(int iParam0)
{
	return (iParam0 < func_400() && iParam0 >= 0);
}

int func_1429(int iParam0)
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

bool func_1430(int iParam0)
{
	return (iParam0 < 9 && iParam0 >= 0);
}

bool func_1431(char[4] cParam0, int iParam1, int iParam2)
{
	iVar0 = func_134(iParam1);
	if (!func_1428(iVar0))
	{
		return false;
	}
	iVar1 = func_1429(iParam2);
	if (!func_1430(iVar1))
	{
		return false;
	}
	return is_bit_set(cParam0->f_1[iVar0]->f_17, iVar1);
}

int func_1432(struct<2> Param0, int iParam2)
{
	if (!func_254(Param0))
	{
		return 0;
	}
	iVar0 = get_indexed_item_in_itemset(iParam2, Param0);
	iVar1 = iVar0;
	return iVar1;
}

void func_1433(char[4] cParam0)
{
	func_1966(cParam0);
	if (func_278(cParam0) == 1 && is_screen_faded_out())
	{
		_0x297b72e2af094742(6);
	}
	else if (func_278(cParam0) == 0 && !func_10(cParam0, 8))
	{
		func_861(cParam0);
	}
	func_53(&(cParam0->f_10792));
	func_1967(cParam0);
	func_1968(cParam0, 67108864);
	func_1968(cParam0, 8192);
	func_863(cParam0, 4);
	func_863(cParam0, 512);
	func_863(cParam0, 65536);
	func_863(cParam0, 1024);
	func_863(cParam0, 262144);
	func_863(cParam0, 16777216);
	func_863(cParam0, 64);
	func_264(cParam0, 128);
	func_101(cParam0, -2147483648);
	func_1969(cParam0, 1);
	if (func_122(cParam0, 4194304))
	{
		func_142(cParam0, func_35(cParam0), 1073741824);
	}
	func_264(cParam0, 4194304);
	func_264(cParam0, 8388608);
	if (!func_123(cParam0, func_35(cParam0), 2048))
	{
		set_player_control(get_player_index(), true, 0, false);
	}
	if (func_22() == 0)
	{
		func_23(8);
		func_81(1);
	}
	if (func_123(cParam0, func_35(cParam0), 64) || !func_117(cParam0))
	{
		func_42(0);
	}
	else
	{
		func_42(1);
	}
	_set_milliseconds_per_game_minute(2000);
	if (!func_10(cParam0, 131072))
	{
		set_everyone_ignore_player(get_player_index(), false);
	}
	func_450(&(cParam0->f_13106));
	func_219(&(cParam0->f_13112));
	func_1970(cParam0, func_123(cParam0, func_35(cParam0), 1));
	if (!func_123(cParam0, func_35(cParam0), 1024))
	{
		_display_hud_component(-1679307491);
	}
	if (!func_123(cParam0, func_35(cParam0), 32768))
	{
		func_234(1);
	}
	if (func_893(cParam0, func_37(cParam0)) != -1 && _0x62de46f061caa468() < func_893(cParam0, func_37(cParam0)))
	{
		_0xf008e0ba1fe1d644((func_893(cParam0, func_37(cParam0)) - _0x62de46f061caa468()));
	}
	if (_missiondata_timecycle_box_exists())
	{
		_missiondata_timecycle_box_delete();
	}
	Var0 = { func_1971(cParam0) };
	_missiondata_timecycle_box_set_modifier(&Var0);
	Global_43805 = -1;
	if (func_123(cParam0, func_35(cParam0), 1))
	{
		func_228(Global_1935630, 2097152);
	}
	else
	{
		func_73(Global_1935630, 2097152);
	}
	func_1972(cParam0);
	if (func_35(cParam0) == 25 && func_84(32768))
	{
		func_1973(cParam0, 16);
	}
	if (func_123(cParam0, func_35(cParam0), 512))
	{
		func_1741(1f, 0f, 0f, 0f);
	}
	else
	{
		func_46();
	}
}

bool func_1434(char[4] cParam0)
{
	if (func_122(cParam0, 4) && !func_31())
	{
		return true;
	}
	return false;
}

void func_1435(char[4] cParam0)
{
	func_1897(cParam0);
}

void func_1436(var uParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < 65)
	{
		func_1329(uParam0->f_13[iVar0], iParam1);
		iVar0++;
	}
}

void func_1437(char[4] cParam0)
{
	func_1974(cParam0);
	if (_get_ped_crouch_movement(Global_35))
	{
		func_101(cParam0, 1024);
	}
}

bool func_1438(var uParam0)
{
	return (_does_anim_scene_exist(uParam0->f_804) && _is_anim_scene_started(uParam0->f_804, false));
}

bool func_1439(char[4] cParam0)
{
	return true;
}

void func_1440(char[4] cParam0, char[32] cParam1)
{
	cParam0->f_10784 = { cParam1 };
}

bool func_1441(var uParam0, int iParam1)
{
	iVar0 = func_1975(iParam1);
	return (uParam0 && iVar0) != 0;
}

int func_1442(char[4] cParam0, var uParam1, bool bParam2)
{
	if (Global_1935630->f_12)
	{
		return 0;
	}
	if (func_1976(cParam0, uParam1))
	{
		return 0;
	}
	if (func_495(uParam1->f_10))
	{
		set_ped_reset_flag(get_ped_index_from_entity_index(*uParam1), 53, true);
	}
	func_1427(uParam1);
	func_1977(uParam1);
	if (!bParam2)
	{
		func_1978(cParam0, uParam1);
	}
	iVar0 = 0;
	while (iVar0 < get_number_of_events(0))
	{
		switch (get_event_at_index(0, iVar0))
		{
			case -140551285:
				func_1979(cParam0, uParam1, iVar0);
				break;
			case 402722103:
			case 2145012826:
				func_1980(cParam0, uParam1, iVar0);
				break;
		}
		iVar0++;
	}
	func_1981(cParam0, uParam1);
	func_1982(uParam1);
	return 0;
}

bool func_1443(char[4] cParam0)
{
	return true;
}

int func_1444(int iParam0)
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
						*iParam0 = func_1983(vVar0.z);
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

void func_1445(char[4] cParam0, char[4] cParam1, bool bParam2, int iParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, bool bParam9, bool bParam10)
{
	func_1709(cParam0, &cParam1, "", bParam9, bParam10);
}

bool func_1446(char[4] cParam0, char[4] cParam1)
{
	if (!func_123(cParam0, func_35(cParam0), 256))
	{
		if (!func_123(cParam0, func_35(cParam0), 65536))
		{
			if (func_1984(cParam1))
			{
				func_142(cParam0, func_35(cParam0), 131072);
			}
			func_142(cParam0, func_35(cParam0), 65536);
		}
		if (func_123(cParam0, func_35(cParam0), 131072))
		{
			if (!func_1382(&(cParam0->f_10792), 1))
			{
				return false;
			}
			else
			{
				func_1985(&(cParam0->f_7375), &(cParam0->f_10792));
				func_142(cParam0, func_35(cParam0), 256);
			}
		}
		else
		{
			func_142(cParam0, func_35(cParam0), 256);
		}
	}
	return func_1900(&(cParam0->f_7375), cParam1, (func_10(cParam0, 33554432) || (is_screen_faded_out() && !func_10(cParam0, 1073741824))), 1);
}

void func_1447(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, int iParam12, int iParam13)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_811((*uParam0)[iVar0]->f_2, iParam12))
		{
			func_1986(&((*uParam0)[iVar0]->f_2), iParam12);
			if (func_1987(&((*uParam0)[iVar0]->f_2), iParam13))
			{
				func_1988((*uParam0)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (func_811((*uParam1)[iVar0]->f_4, iParam12))
		{
			func_1986(&((*uParam1)[iVar0]->f_4), iParam12);
			if (func_1987(&((*uParam1)[iVar0]->f_4), iParam13))
			{
				func_1989((*uParam1)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam2)
	{
		if (func_811((*uParam2)[iVar0]->f_2, iParam12))
		{
			func_1986(&((*uParam2)[iVar0]->f_2), iParam12);
			if (func_1987(&((*uParam2)[iVar0]->f_2), iParam13))
			{
				func_1990((*uParam2)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam3)
	{
		if (func_811((*uParam3)[iVar0]->f_2, iParam12))
		{
			func_1986(&((*uParam3)[iVar0]->f_2), iParam12);
			if (func_1987(&((*uParam3)[iVar0]->f_2), iParam13))
			{
				func_1991((*uParam3)[iVar0]);
			}
		}
		iVar0++;
	}
	if (func_811(uParam4->f_1, iParam12))
	{
		func_1986(&(uParam4->f_1), iParam12);
		if (func_1987(&(uParam4->f_1), iParam13))
		{
			func_1992(uParam4);
		}
	}
	iVar0 = 0;
	while (iVar0 < *uParam5)
	{
		if (func_811((*uParam5)[iVar0]->f_3, iParam12))
		{
			func_1986(&((*uParam5)[iVar0]->f_3), iParam12);
			if (func_1987(&((*uParam5)[iVar0]->f_3), iParam13))
			{
				func_1993((*uParam5)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam6)
	{
		if (func_811((*uParam6)[iVar0]->f_3, iParam12))
		{
			func_1986(&((*uParam6)[iVar0]->f_3), iParam12);
			if (func_1987(&((*uParam6)[iVar0]->f_3), iParam13))
			{
				func_1994((*uParam6)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam7)
	{
		if (func_811((*uParam7)[iVar0]->f_4, iParam12))
		{
			func_1986(&((*uParam7)[iVar0]->f_4), iParam12);
			if (func_1987(&((*uParam7)[iVar0]->f_4), iParam13))
			{
				func_1995((*uParam7)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam8)
	{
		if (func_811((*uParam8)[iVar0]->f_2, iParam12))
		{
			func_1986(&((*uParam8)[iVar0]->f_2), iParam12);
			if (func_1987(&((*uParam8)[iVar0]->f_2), iParam13))
			{
				func_1996((*uParam8)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam9)
	{
		if (func_811((*uParam9)[iVar0]->f_2, iParam12))
		{
			func_1986(&((*uParam9)[iVar0]->f_2), iParam12);
			if (func_1987(&((*uParam9)[iVar0]->f_2), iParam13))
			{
				func_1997((*uParam9)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam10)
	{
		if (func_811((*uParam10)[iVar0]->f_3, iParam12))
		{
			func_1986(&((*uParam10)[iVar0]->f_3), iParam12);
			if (func_1987(&((*uParam10)[iVar0]->f_3), iParam13))
			{
				func_1998((*uParam10)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam11)
	{
		if (func_811((*uParam11)[iVar0]->f_2, iParam12))
		{
			func_1986(&((*uParam11)[iVar0]->f_2), iParam12);
			if (func_1987(&((*uParam11)[iVar0]->f_2), iParam13))
			{
				func_1999((*uParam11)[iVar0]);
			}
		}
		iVar0++;
	}
}

void func_1448(char[4] cParam0)
{
	iVar0 = func_2000(cParam0);
	_0x50b72a754ee64a71(iVar0);
}

void func_1449(bool bParam0, bool bParam1)
{
	if (func_2001(255) == 4)
	{
		return;
	}
	if (func_399(get_entity_coords(get_player_ped(player_id()), false, false)))
	{
		return;
	}
	if (!bParam0)
	{
		func_289(0);
	}
	else
	{
		if (bParam1)
		{
			func_2002(0, 0, 0, 1);
		}
		func_290(0);
		func_2003(&(Global_1109400->f_389));
		Global_1109400->f_389 = 0f;
		Global_1109400->f_389.f_5 = 1;
		Global_1109400->f_389.f_16 = 0;
		Global_1109400->f_389.f_17.f_6 = { get_entity_coords(get_player_ped(player_id()), false, false) };
		Global_1109400->f_389.f_17.f_3 = { 0f, 0f, 0f };
		Global_1109400->f_389.f_17 = { Global_1899378->f_23.f_1, Global_1899378->f_23.f_1, Global_1899378->f_23.f_1 };
		Global_1109400->f_389.f_17.f_9 = -432403087;
		func_2004(&(Global_1109400->f_428));
		Global_1109400->f_428.f_6 = { Global_1109400->f_389.f_17.f_6 };
		Global_1109400->f_428 = Global_1109400->f_389;
		Global_1109400->f_428.f_5 = 1;
		if (bParam1)
		{
			Global_1109400->f_22.f_16 = 0;
			Global_1109400->f_22.f_17 = 0;
		}
	}
	func_2005(Global_1109400->f_389, 42);
	func_2006(Global_1109400->f_428, 42);
}

int func_1450(bool bParam0, bool bParam1, bool bParam2)
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

var func_1451(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

char* func_1452(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5)
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
	return _create_var_string(2, func_2007(sParam1));
}

int func_1453(int iParam0)
{
	if (func_194(iParam0) == 6)
	{
		if (func_271(iParam0) == 0)
		{
			return func_314(iParam0);
		}
	}
	return -1;
}

bool func_1454(int iParam0)
{
	if (iParam0 != -1 && iParam0 < 8)
	{
		return true;
	}
	return false;
}

int func_1455(int iParam0)
{
	if (Global_1934765->f_337 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < Global_1934765->f_337)
	{
		if (Global_1934765->f_318[iVar0]->f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_1456(int iParam0)
{
	if (Global_1934765->f_337 == 0)
	{
		return;
	}
	if (Global_1934765->f_337 > 1)
	{
		iVar0 = iParam0;
		while (iVar0 <= (Global_1934765->f_337 - 2))
		{
			_copy_memory(Global_1934765->f_318[iVar0], Global_1934765->f_318[iVar0 + 1], 3);
			iVar0++;
		}
	}
	Global_1934765->f_337 = (Global_1934765->f_337 - 1);
}

void func_1457()
{
	_0x243cede8f916b994();
	Global_1934765->f_338 = -1;
}

void func_1458(bool bParam0, float fParam1)
{
	if (is_bit_set(Global_1934765->f_301, 1))
	{
		return;
	}
	iVar0 = func_1459();
	if (iVar0 < 0)
	{
		return;
	}
	if (iVar0 >= 6)
	{
		return;
	}
	if (iVar0 == Global_1934765->f_338)
	{
		return;
	}
	if (func_2008(&(Global_1934765->f_318[iVar0]), bParam0, fParam1))
	{
		Global_1934765->f_338 = iVar0;
	}
}

int func_1459()
{
	iVar0 = -1;
	iVar1 = -1;
	if (Global_1934765->f_337 <= 0)
	{
		return -1;
	}
	iVar2 = (Global_1934765->f_337 - 1);
	while (iVar2 >= 0)
	{
		iVar3 = func_2009(Global_1934765->f_318[iVar2]->f_1);
		if (iVar3 > iVar0)
		{
			iVar0 = iVar3;
			iVar1 = iVar2;
		}
		iVar2 = (iVar2 + -1);
	}
	return iVar1;
}

int func_1460(int iParam0)
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

int func_1461(int iParam0)
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

void func_1462(int iParam0, int iParam1)
{
	Var0 = { *Global_1898164->f_1[iParam0] };
	*Global_1898164->f_1[iParam0] = { *Global_1898164->f_1[iParam1] };
	*Global_1898164->f_1[iParam1] = { Var0 };
}

int func_1463(int iParam0, int iParam1, int iParam2)
{
	iVar0 = func_2010(iParam0, 1);
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
	return 1;
}

void func_1464(int iParam0)
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

void func_1465()
{
	if (func_22() != -1)
	{
		return;
	}
	if (!func_398())
	{
		return;
	}
	func_2011(&(Global_40.f_40));
}

void func_1466()
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

bool func_1467()
{
	return !func_399(Global_1310720->f_1);
}

int func_1468()
{
	return Global_40.f_4283.f_1;
}

int func_1469()
{
	return Global_40.f_4283.f_4;
}

void func_1470(vector3 vParam0, var uParam3, var uParam4)
{
	fVar0 = 1E+07f;
	fVar1 = 1E+07f;
	if (func_2012())
	{
		fVar0 = func_970(vParam0, Global_40.f_6);
	}
	if (func_2013(33554432))
	{
		if (!func_2014(Global_40.f_2, 0f, 0f, 0f, 1056964608, 1))
		{
			fVar1 = func_970(vParam0, Global_40.f_2);
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

float func_1471(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist2(vParam0, vParam3);
}

void func_1472()
{
	if (!func_197(&Global_1935630, 8192))
	{
		return;
	}
	if (func_84(32768))
	{
		return;
	}
	func_73(Global_1935630, 8192);
	fVar0 = 0f;
	fVar0 = (fVar0 + (0.9259259f * to_float(func_2015(909007663, 1325140787))));
	fVar0 = (fVar0 + (0.2525252f * to_float(func_2015(909007663, 2101241783))));
	fVar0 = (fVar0 + (0.2923976f * to_float(func_2015(909007663, -1296936294))));
	fVar0 = (fVar0 + (0.462963f * to_float(func_2015(909007663, -798388728))));
	fVar0 = (fVar0 + (0.9259259f * to_float(func_2015(909007663, -1787586531))));
	fVar0 = (fVar0 + (0.308642f * to_float(func_2015(909007663, -1002834519))));
	fVar0 = (fVar0 + (5.555555f * to_float(func_2015(909007663, -50600144))));
	fVar0 = (fVar0 + (0.6944444f * to_float(func_2015(909007663, -348503123))));
	fVar0 = (fVar0 + (0.3703704f * to_float(func_2015(909007663, -528798161))));
	fVar0 = (fVar0 + (0.5f * func_2016(10f, to_float(func_2015(909007663, 551192206)))));
	fVar0 = (fVar0 + (0.6f * func_2016(5f, to_float(func_2015(909007663, -406093146)))));
	fVar0 = (fVar0 + (0.2f * func_2016(25f, to_float(func_2017(-1029789297)))));
	fVar0 = (fVar0 + (2f * func_2016(1f, to_float(func_2017(-843295694)))));
	fVar0 = (fVar0 + (0.3333333f * func_2016(6f, to_float(func_2017(64058978)))));
	fVar0 = (fVar0 + (3f * func_2016(1f, to_float(func_2017(795577402)))));
	iVar1 = func_2018();
	fVar0 = (fVar0 + (0.1111111f * func_2016(9f, to_float(iVar1))));
	fVar2 = (to_float(_0x5461c821d00fe15a(-2076669067, 1665658745)) / to_float(_0x62cab7db62ead434(-2076669067, 1665658745)));
	fVar2 = func_2019(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, -263938772)) / to_float(_0x62cab7db62ead434(-2076669067, -263938772))));
	fVar2 = func_2019(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, 228647253)) / to_float(_0x62cab7db62ead434(-2076669067, 228647253))));
	fVar2 = func_2019(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, 1695604435)) / to_float(_0x62cab7db62ead434(-2076669067, 1695604435))));
	fVar2 = func_2019(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, -379038926)) / to_float(_0x62cab7db62ead434(-2076669067, -379038926))));
	fVar2 = func_2019(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, 1597499323)) / to_float(_0x62cab7db62ead434(-2076669067, 1597499323))));
	fVar2 = func_2019(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, -278663717)) / to_float(_0x62cab7db62ead434(-2076669067, -278663717))));
	fVar2 = func_2019(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, 586249988)) / to_float(_0x62cab7db62ead434(-2076669067, 586249988))));
	fVar2 = func_2019(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, -419800938)) / to_float(_0x62cab7db62ead434(-2076669067, -419800938))));
	fVar2 = func_2019(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, -1362069171)) / to_float(_0x62cab7db62ead434(-2076669067, -1362069171))));
	fVar2 = func_2019(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, -740350755)) / to_float(_0x62cab7db62ead434(-2076669067, -740350755))));
	fVar2 = func_2019(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, 1511070393)) / to_float(_0x62cab7db62ead434(-2076669067, 1511070393))));
	fVar0 = (fVar0 + func_2016(1f, fVar2));
	fVar0 = (fVar0 + (0.05f * func_2016(to_float(20), to_float(func_2020()))));
	if (func_2021(40))
	{
		fVar0 = (fVar0 + (1f * 1f));
	}
	if (func_2021(42))
	{
		fVar0 = (fVar0 + (1f * 1f));
	}
	if (func_2021(48))
	{
		fVar0 = (fVar0 + (1f * 1f));
	}
	if (func_2021(50))
	{
		fVar0 = (fVar0 + (1f * 1f));
	}
	if (func_2021(52))
	{
		fVar0 = (fVar0 + (1f * 1f));
	}
	fVar2 = (to_float(_0x5461c821d00fe15a(1765845133, 499813453)) / to_float(_0x62cab7db62ead434(1765845133, 499813453)));
	fVar2 = func_2019(fVar2, (to_float(_0x5461c821d00fe15a(1765845133, 666607663)) / to_float(_0x62cab7db62ead434(1765845133, 666607663))));
	fVar2 = func_2019(fVar2, (to_float(_0x5461c821d00fe15a(1765845133, -220219788)) / to_float(_0x62cab7db62ead434(1765845133, -220219788))));
	fVar2 = func_2019(fVar2, (to_float(_0x5461c821d00fe15a(1765845133, 218622660)) / to_float(_0x62cab7db62ead434(1765845133, 218622660))));
	fVar2 = func_2019(fVar2, (to_float(_0x5461c821d00fe15a(1765845133, 390004462)) / to_float(_0x62cab7db62ead434(1765845133, 390004462))));
	fVar2 = func_2019(fVar2, (to_float(_0x5461c821d00fe15a(1765845133, 6410548)) / to_float(_0x62cab7db62ead434(1765845133, 6410548))));
	fVar0 = (fVar0 + (1f * func_2016(1f, fVar2)));
	fVar0 = (fVar0 + (0.2f * func_2016(5f, to_float(func_2017(1933084904)))));
	fVar0 = (fVar0 + (0.2f * func_2016(5f, to_float(func_2015(-1756227506, -734935893)))));
	fVar0 = (fVar0 + (to_float(func_1543(_0x729d52f61a5a9e22(1979337996), 50)) / to_float(50)));
	fVar0 = (fVar0 + (to_float(func_1543(_0x729d52f61a5a9e22(-2125891426), 10)) / to_float(10)));
	fVar0 = (fVar0 + (to_float(func_1543(_0x729d52f61a5a9e22(1630085303), 10)) / to_float(10)));
	fVar0 = (fVar0 + _0x725d52f21a5e9e22(-1658238931));
	fVar0 = (fVar0 + (to_float(func_1543(_0x729d52f61a5a9e22(1807539419), 20)) / to_float(20)));
	fVar0 = (fVar0 + (to_float(func_1543(_0x729d52f61a5a9e22(717108105), 10)) / to_float(10)));
	fVar0 = (fVar0 + (to_float(func_1543(_0x729d52f61a5a9e22(-2143405780), 48)) / to_float(48)));
	func_2022(&iVar3, &iVar4);
	fVar0 = (fVar0 + (2f * func_2016((to_float(iVar3) / to_float(iVar4)), 1f)));
	fVar0 = (fVar0 + (2f * func_2016(1f, to_float(func_2023(-2116919750)))));
	fVar5 = to_float(func_2024());
	fVar0 = (fVar0 + ((3f * fVar5) / to_float(9)));
	fVar0 = (fVar0 + ((1f / 4f) * func_2016(1f, to_float(func_2015(1511238709, -747096482)))));
	fVar0 = (fVar0 + ((1f / 4f) * func_2016(1f, to_float(func_2015(1511238709, 549911940)))));
	fVar0 = (fVar0 + ((1f / 4f) * func_2016(1f, to_float(func_2015(1511238709, -760820978)))));
	fVar0 = (fVar0 + ((1f / 4f) * func_2016(1f, to_float(func_2015(1511238709, -1672018311)))));
	fVar0 = (fVar0 + (0.2f * func_2016(5f, to_float(func_2017(-1342635612)))));
	fVar0 = (fVar0 + (0.5f * func_2016(1f, to_float(func_2017(-2061916883)))));
	fVar0 = (fVar0 + (0.5f * func_2016(1f, to_float(func_2017(281346304)))));
	fVar0 = (fVar0 + (0.5f * func_2016(1f, to_float(func_2017(-299021541)))));
	fVar0 = (fVar0 + ((0.5f / 6f) * func_2016(1f, to_float(func_2015(-1276738576, 307971639)))));
	fVar0 = (fVar0 + ((0.5f / 6f) * func_2016(1f, to_float(func_2015(-1276738576, -1555359431)))));
	fVar0 = (fVar0 + ((0.5f / 6f) * func_2016(1f, to_float(func_2015(-1276738576, 644069854)))));
	fVar0 = (fVar0 + ((0.5f / 6f) * func_2016(1f, to_float(func_2015(-1276738576, -97115714)))));
	fVar0 = (fVar0 + ((0.5f / 6f) * func_2016(1f, to_float(func_2015(-1276738576, -2143405780)))));
	fVar0 = (fVar0 + ((0.5f / 6f) * func_2016(1f, to_float(func_2015(-1276738576, 1455184052)))));
	fVar0 = (fVar0 + ((1f / 4f) * func_2016(1f, to_float(func_2015(978382515, -2072933068)))));
	fVar0 = (fVar0 + ((1f / 4f) * func_2016(1f, to_float(func_2015(978382515, 574993838)))));
	fVar0 = (fVar0 + ((1f / 4f) * func_2016(1f, to_float(func_2015(978382515, -605765767)))));
	fVar0 = (fVar0 + ((1f / 4f) * func_2016(1f, to_float(func_2015(978382515, 1015970717)))));
	Var6 = { func_96(1215094015) };
	fVar8 = func_2025(Var6);
	_0xe141f6b40b1e3683(&Var6, fVar0);
	if (fVar0 > fVar8)
	{
	}
	if (func_189(&Global_1898437))
	{
		iVar60 = 0;
		iVar61 = 0;
		while (iVar61 < &Global_1898329)
		{
			if (!func_189(Global_1898330[iVar61]))
			{
			}
			else
			{
				iVar62 = func_193(Global_1898330[iVar61]);
				if (iVar62 == 3 || iVar62 == 4)
				{
				}
				else if (iVar62 != 1 && iVar62 != 2)
				{
					func_2026(Global_1898330[iVar61]);
				}
				else
				{
					func_2027(iVar61, 0);
					if (func_194(Global_1898330[iVar61]) == 1)
					{
						iVar9[iVar60] = func_192(Global_1898330[iVar61]);
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
									iVar9[iVar60] = func_192((*Global_1347702)[&Global_40.f_450[iVar63]]->f_15);
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
										_0x51ec204a6e5b5a1a(func_192(&Global_1898437), &iVar9);
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

void func_1473(var uParam0, int iParam1, bool bParam2)
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

int func_1474(int iParam0, int iParam1, int iParam2)
{
	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
	return 1;
}

void func_1475(int iParam0)
{
	if (!func_948(iParam0))
	{
		return;
	}
	if (!_is_base_a_persistent_character((*Global_1360165)[iParam0]->f_1))
	{
		iVar0 = func_2028(iParam0);
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

void func_1476(int iParam0)
{
	if (func_495(iParam0))
	{
		if (does_entity_exist(func_532(iParam0)))
		{
			func_690(iParam0, 67108864, 1);
			func_952(iParam0, 19, 1);
		}
	}
}

float func_1477(int iParam0)
{
	if (!func_948(iParam0))
	{
		return 0f;
	}
	return (*Global_1360165)[iParam0]->f_134;
}

void func_1478(int iParam0)
{
	iVar0 = func_532(iParam0);
	iVar1 = func_953(iParam0, 0);
	func_2029(iParam0, iVar0);
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

bool func_1479(int iParam0)
{
	if (!func_948(iParam0))
	{
		return false;
	}
	if ((*Global_1360165)[iParam0]->f_70.f_11 == 0 || (*Global_1360165)[iParam0]->f_70.f_11 == (*Global_1360165)[iParam0]->f_128)
	{
		return false;
	}
	return true;
}

bool func_1480(int iParam0)
{
	if (!func_948(iParam0))
	{
		return false;
	}
	return (*Global_1360165)[iParam0]->f_70.f_11 == get_id_of_this_thread();
}

void func_1481(int iParam0, int iParam1, bool bParam2)
{
	if (!func_948(iParam0))
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

int func_1482(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (!func_948(iParam0))
	{
		return 0;
	}
	iVar0 = func_960(iParam0);
	if (func_165(iVar0, 0))
	{
		if (func_165(_get_rider_of_mount(iVar0, false), 0) && !bParam4)
		{
			return 0;
		}
		if ((bParam1 || !func_1479(iParam0)) || func_1480(iParam0))
		{
			if (bParam2 || !(is_entity_on_screen(iVar0) && func_2030(player_ped_id(), iVar0, 1) < 10000f))
			{
				iVar1 = func_2031(iParam0, 1);
				if (iVar1 != 0)
				{
					if (!_0x88ad6cc10d8d35b2(iVar0))
					{
						set_entity_as_mission_entity(iVar0, true, true);
					}
					func_2032(iParam0);
					_0x7b204f88f6c3d287(func_2033(iParam0, 0));
					_0xfcc6db8dbe709bc8(func_2033(iParam0, 0));
					func_2034(iParam0);
				}
			}
			else
			{
				if (func_689(iParam0, 32768, 1))
				{
					iVar2 = func_2033(iParam0, 0);
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
		if (func_165((*Global_1360165)[iParam0]->f_124, 0))
		{
			if (func_689(iParam0, 32768, 1))
			{
				if (!_0x88ad6cc10d8d35b2((*Global_1360165)[iParam0]->f_124))
				{
					set_entity_as_mission_entity((*Global_1360165)[iParam0]->f_124, true, true);
				}
				func_2032(iParam0);
				_0x7b204f88f6c3d287(func_2033(iParam0, 0));
				_0xfcc6db8dbe709bc8(func_2033(iParam0, 0));
			}
			else
			{
				set_entity_as_mission_entity((*Global_1360165)[iParam0]->f_124, true, true);
				func_2032(iParam0);
				delete_ped(&((*Global_1360165)[iParam0]->f_124));
			}
		}
	}
	(*Global_1360165)[iParam0]->f_70.f_1 = 0;
	func_2035(iParam0, 0);
	return 1;
}

int func_1483(int iParam0)
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

char* func_1484(int iParam0)
{
	if (iParam0 == 255)
	{
		if (func_245(37, iParam0))
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
	if (func_245(37, iParam0))
	{
		return _0xd8402b858f4ddd88(&((*Global_1108178)[iParam0]->f_12), get_length_of_literal_string(&((*Global_1108178)[iParam0]->f_12)));
	}
	return get_player_name(&(Global_1225639->f_120[iParam0]));
}

char* func_1485(char* sParam0, int iParam1)
{
	if (iParam1 == 109029619)
	{
		return _create_var_string(10, "PLAYER_STRING", sParam0);
	}
	return func_1105(_create_var_string(10, "PLAYER_STRING", sParam0), iParam1);
}

float func_1486(int iParam0)
{
	iParam0 = func_265(iParam0);
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

float func_1487(float fParam0, float fParam1, float fParam2)
{
	return (((1f - fParam2) * fParam0) + (fParam2 * fParam1));
}

void func_1488(int iParam0)
{
	if (iParam0 < 0)
	{
		iParam0 = 0;
	}
	Global_40.f_4283.f_325 = iParam0;
	Var0 = { func_96(1356759001) };
	stat_id_set_int(&Var0, iParam0, true);
}

void func_1489(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_1490(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_1491(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_6;
	}
	return -15;
}

int func_1492(int iParam0, int iParam1)
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

void func_1493(int iParam0, bool bParam1)
{
	Global_1955569->f_1 = iParam0;
	if (bParam1)
	{
		func_2036(bParam1);
	}
}

void func_1494(int iParam0)
{
	_0x74bcceb233ad95b2(-156028329, iParam0);
}

char* func_1495(int iParam0)
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

bool func_1496(int iParam0)
{
	if (!func_1169(23, &vVar0))
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

bool func_1497(int iParam0, int iParam1, int iParam2)
{
	if (!func_1169(23, &Var0))
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

int func_1498(int iParam0)
{
	return iParam0;
}

int func_1499()
{
	iVar0 = func_991();
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

int func_1500(int iParam0)
{
	if (!func_557(*iParam0, 0))
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

bool func_1501(int iParam0, var uParam1, bool bParam2)
{
	if (!func_557(iParam0, 0))
	{
		return false;
	}
	Var0 = { func_668(iParam0, 0, 1) };
	iVar5 = 1728382685;
	Var6.f_9 = -1591664384;
	bVar28 = false;
	iVar29 = 0;
	while (iVar29 < 4)
	{
		iVar5 = func_1028((386 + iVar29), 1);
		if (func_1029(iParam0, &Var0, iVar5, 0))
		{
			bVar28 = func_1030(iParam0, &Var6, iVar5);
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

int func_1502(int iParam0, struct<4> Param1, int iParam5, bool bParam6)
{
	if (!func_557(iParam0, 0))
	{
		return 0;
	}
	Var0 = { func_1031(iParam0, Param1, iParam5, bParam6) };
	if (!_0xb881ca836cc4b6d4(&Var0))
	{
		return 0;
	}
	uVar4 = _0xc97e0d2302382211(func_931(bParam6), &Var0, 0);
	return uVar4;
}

struct<14> func_1503(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

void func_1504(var uParam0, struct<4> Param1)
{
	if (_0xb881ca836cc4b6d4(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

bool func_1505(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	*iParam1 = _0x640f890c3e5a3ffd(func_931(bParam3), uParam0, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

int func_1506(int iParam0)
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

float func_1507(int iParam0)
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
			return func_2037(iParam0);
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
			return func_2037(iParam0);
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
			return func_2037(iParam0);
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

bool func_1508(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_579(18);
		case 2:
			return func_579(20);
		case 1:
			return func_579(19);
		default:
			break;
	}
	return true;
}

int func_1509(int iParam0)
{
	return func_2038(&(Global_40.f_11095.f_11[iParam0]));
}

void func_1510(int iParam0, float fParam1, bool bParam2)
{
	if (func_22() != -1)
	{
		return;
	}
	if (Global_1347477->f_117 || !func_579(31))
	{
		return;
	}
	iVar0 = func_1509(iParam0);
	fVar1 = &Global_40.f_11095.f_11[iParam0];
	if (iVar0 >= 7)
	{
		return;
	}
	set_attribute_points(Global_35, iParam0, floor(fParam1));
	Global_40.f_11095.f_11[iParam0] = fParam1;
	iVar2 = func_1509(iParam0);
	if (func_2039(iParam0) && func_2040(iParam0))
	{
		if (!bParam2)
		{
			iVar3 = func_2041(fVar1, fParam1);
			if (fParam1 > IntToFloat(func_2042(iParam0)) && (iVar2 > iVar0 || iVar3 != 0))
			{
				if (!is_radar_hidden() && !Global_16)
				{
					if (iVar2 > iVar0)
					{
						func_324(func_2043(iParam0), 0);
					}
					func_2044(iParam0, iVar2, iVar3);
					func_2045(iParam0, 7000);
				}
				Global_1347477->f_8 = 1;
			}
		}
	}
	Global_1347477->f_1 = iParam0;
	Global_1347477 = get_game_timer();
}

char* func_1511(int iParam0)
{
	return "PLAYER_RPG_XP_GAIN";
}

int func_1512(int iParam0)
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

int func_1513()
{
	return func_2046(Global_40.f_12019);
}

int func_1514()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		iVar2 = func_1012(iVar1);
		if (func_346(iVar2, 1, 0) || func_1520(func_1519(iVar2)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1515()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 30)
	{
		if (func_2047(_0x126cbebba46693cf(iVar1, -440187297, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1516()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 14)
	{
		if (func_1525(_0x126cbebba46693cf(iVar1, 1995362678, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1517()
{
	return _0x3a65f4844913a047(2103522376, 0);
}

int func_1518(int iParam0)
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

int func_1519(int iParam0)
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

bool func_1520(int iParam0)
{
	return (Global_40.f_12019 && iParam0) != 0;
}

char* func_1521(int iParam0)
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

int func_1522(int iParam0)
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

int func_1523(int iParam0)
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

char* func_1524(int iParam0)
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

bool func_1525(int iParam0)
{
	return _0x9a03f22ad446eeac(iParam0) > 0;
}

char* func_1526(int iParam0)
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

char* func_1527(int iParam0)
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

bool func_1528(int iParam0)
{
	if (func_2048(iParam0) && func_346(iParam0, 1, 0))
	{
		return true;
	}
	else if (func_2049(iParam0) && func_2050(iParam0))
	{
		return true;
	}
	return false;
}

char* func_1529(int iParam0)
{
	if (!func_557(iParam0, 0))
	{
		return "";
	}
	return _get_label_text_by_hash(func_624(iParam0));
}

int func_1530(int iParam0)
{
	return Global_1898164->f_1[iParam0]->f_2;
}

void func_1531(bool bParam0)
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

void func_1532(int iParam0)
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

void func_1533(bool bParam0)
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

void func_1534(bool bParam0)
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

void func_1535(bool bParam0)
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

void func_1536(bool bParam0)
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

void func_1537(bool bParam0)
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

void func_1538(bool bParam0)
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

int func_1539(int iParam0)
{
	if (iParam0 == -358215195)
	{
		return 0;
	}
	return &(Global_1946804->f_1497.f_1[func_656(iParam0, 1)]);
}

void func_1540()
{
	if (!_unlock_is_unlocked(-1526891582))
	{
		func_2051();
		_unlock_set_unlocked(-1526891582, true);
		func_584(-916314281);
		func_630(-916314281, 1, 752097756);
		set_current_ped_weapon(Global_35, -916314281, true, 2, false, false);
		func_584(494733111);
		func_630(494733111, 1, 752097756);
		set_current_ped_weapon(Global_35, 494733111, true, 4, false, false);
	}
}

bool func_1541(int iParam0, var uParam1, var uParam2, int iParam3)
{
	iVar0 = func_931(0);
	*uParam1 = { func_1031(iParam0, func_1137(0), iParam3, 0) };
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

bool func_1542(int iParam0)
{
	if (_item_database_is_intrinsic_item(iParam0))
	{
		return true;
	}
	return false;
}

int func_1543(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

bool func_1544(int iParam0)
{
	return _is_weapon_bow(iParam0);
}

int func_1545(var uParam0)
{
	iVar0 = 0;
	iVar1 = 22;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_577(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 37;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_577(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 12;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_577(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 29;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_577(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 30;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_577(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 31;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_577(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	return iVar0;
}

bool func_1546(int iParam0, int iParam1)
{
	iVar1 = func_656(func_2052(iParam0), 1);
	if (iVar1 >= 39)
	{
		return false;
	}
	if (&Global_1946804->f_1497.f_1[iVar1] != 0 && &Global_1946804->f_1497.f_1[iVar1] != &Global_1946804->f_57[iVar1])
	{
		iVar0 = &Global_1946804->f_1497.f_1[iVar1];
		if (func_581(iVar0) == iParam0)
		{
			*iParam1 = iVar0;
			return true;
		}
	}
	*iParam1 = 0;
	return false;
}

int func_1547(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam0 == &Global_1946804->f_57[func_656(iParam1, 1)])
	{
		return 0;
	}
	iVar0 = 0;
	if (!func_1074(524288))
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

bool func_1548(int iParam0)
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

int func_1549(int iParam0)
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

int func_1550(int iParam0)
{
	return func_2053(iParam0, -1);
}

bool func_1551(int iParam0)
{
	return _0xf83d3dda4d3c8169(iParam0) > 0;
}

void func_1552(int iParam0)
{
	iVar0 = func_930(iParam0, 1);
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

void func_1553(int iParam0)
{
	iVar0 = func_930(iParam0, 1);
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

void func_1554()
{
	func_1553(-939420910);
	func_1553(-1187950766);
	func_1553(356365161);
	func_1553(753127042);
	func_1553(-2038424081);
	func_1553(1884271742);
	func_1553(459290420);
}

void func_1555()
{
	func_1553(704802028);
	func_1553(588987611);
	func_1553(2008888900);
	func_1553(1649996811);
	func_1553(227918160);
	func_1553(168171957);
	func_1553(1193080109);
	func_1553(-491981251);
	func_1553(-639037538);
	func_1553(-618620429);
}

bool func_1556(int iParam0)
{
	return _0xf83d3dda4d3c8169(iParam0) > 0;
}

int func_1557(int iParam0)
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

void func_1558(int iParam0)
{
	Global_40.f_12019.f_43 = (Global_40.f_12019.f_43 || iParam0);
}

bool func_1559(int iParam0)
{
	return _0xf83d3dda4d3c8169(iParam0) > 0;
}

void func_1560()
{
	Global_1946804->f_1378 = Global_1946804->f_1497;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		*Global_1946804->f_1378.f_1[iVar0] = { *Global_1946804->f_1497.f_1[iVar0] };
		iVar0++;
	}
}

void func_1561(int iParam0)
{
	func_1314(iParam0, 8, 6);
}

void func_1562(int iParam0)
{
	func_2054(&(Global_1946804->f_2589), iParam0);
}

void func_1563(int iParam0, int iParam1)
{
	func_2055(&(Global_1946804->f_2589), iParam0, iParam1);
}

int func_1564(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	iVar0 = func_2056(0);
	if (iParam2 != 0 && func_2057(iParam0, iVar0, iParam2, bParam3) != -1)
	{
		return iParam2;
	}
	if (func_1128(iParam0, func_1142(iParam1, 1), &iParam2))
	{
		return iParam2;
	}
	return 0;
}

void func_1565(var uParam0, bool bParam1, int iParam2)
{
	bVar6 = func_22() != -1;
	iVar7 = func_2056(0);
	if (func_1074(32768))
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
			iVar5 = func_1142(iVar0, 1);
			if (func_1310(iVar5, 8))
			{
			}
			else if (&Global_1946804->f_57[iVar0]->f_2[0] == -1802376732 || &uParam0->f_1[iVar0] == 0)
			{
			}
			else if (func_1310(iVar5, 6) || &uParam0->f_1[iVar0] == &Global_1946804->f_57[iVar0])
			{
			}
			else
			{
				iVar4 = func_1547(&(uParam0->f_1[iVar0]), iVar5, iVar7, bVar6);
				if ((iVar1 + iVar4) > 31)
				{
					iVar3 = iVar2;
				}
				else
				{
					iVar1 = (iVar1 + iVar4);
					iVar2++;
				}
				iVar8 = func_2058(uParam0);
				if (iVar3 > 0)
				{
					if (!func_1074(524288))
					{
						func_1134(524288);
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
							iVar5 = func_1142(iVar0, 1);
							if (func_1310(iVar5, 8))
							{
							}
							else if (&Global_1946804->f_57[iVar0]->f_2[0] == -1802376732 || &uParam0->f_1[iVar0] == 0)
							{
							}
							else if (func_1310(iVar5, 6) || &uParam0->f_1[iVar0] == &Global_1946804->f_57[iVar0])
							{
							}
							else
							{
								iVar4 = func_1547(&(uParam0->f_1[iVar0]), iVar5, iVar7, bVar6);
								if ((iVar1 + iVar4) > 31)
								{
									uParam0->f_1[iVar0] = &Global_1946804->f_57[iVar0];
									uParam0->f_1[iVar0]->f_1 = 0;
									if (bParam1)
									{
										func_1563(iVar0, iParam2);
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
					func_1568(524288);
				}
			}
		}
	}
}

void func_1566(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (*uParam0 <= 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_2059(&(uParam0->f_2[iVar0]), bParam1, bParam2);
		iVar0++;
	}
	if (func_22() == -1)
	{
		if ((Global_40.f_7729 != 0 || !func_2060(2, Global_26796.f_776)) || Global_1946804->f_1497 != func_1587(0))
		{
			if (Global_40.f_7157[Global_40.f_7729] & 512 != 0)
			{
				Global_40.f_7157[Global_40.f_7729] = (&Global_40.f_7157[Global_40.f_7729] - Global_40.f_7157[Global_40.f_7729] & 4096);
				Global_40.f_7729 = 0;
				Global_1905941 = Global_40.f_7729;
				Global_40.f_7157[Global_40.f_7729] |= 4096;
				Global_1946804->f_1497 = func_1587(Global_40.f_7729);
				Global_1946804->f_1378 = func_1587(Global_40.f_7729);
				Global_26796.f_776 = 0;
				func_2061(-1, 0, 6);
			}
		}
	}
	if (bParam3)
	{
		func_1122(0, 1);
	}
}

void func_1567(var uParam0)
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

void func_1568(int iParam0)
{
	Global_1946804 = (&Global_1946804 - (Global_1946804 && iParam0));
}

bool func_1569(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_1570(struct<4> Param0)
{
	if (Global_1946804->f_852 >= 20)
	{
		return;
	}
	if (func_1625(Param0))
	{
		iVar0 = 0;
		while (iVar0 < Global_1946804->f_852)
		{
			iVar1 = ((Global_1946804->f_853 + iVar0) % 20);
			if (((&Global_1946804->f_769[iVar1] == Param0 && Global_1946804->f_769[iVar1]->f_2 == Param0.f_2) && Global_1946804->f_769[iVar1]->f_3 == Param0.f_3) && Global_1946804->f_769[iVar1]->f_1 == Param0.f_1)
			{
				return;
			}
			if (&Global_1946804->f_769[iVar1] == 34 && func_1625(20))
			{
				return;
			}
			iVar0++;
		}
	}
	func_1626(Param0);
	*Global_1946804->f_769[Global_1946804->f_854] = { Param0 };
	Global_1946804->f_852++;
	Global_1946804->f_854 = (Global_1946804->f_854 + 1 % 20);
	func_1134(8);
}

bool func_1571()
{
	if (Global_1572887->f_12 != -1)
	{
		return false;
	}
	return Global_1347477->f_203;
}

float func_1572(int iParam0)
{
	return &(Global_40.f_11095[iParam0]);
}

float func_1573()
{
	fVar0 = func_2062(13);
	iVar1 = func_2063(fVar0);
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

float func_1574()
{
	if (is_ped_on_mount(Global_35))
	{
		return 0.25f;
	}
	return 0f;
}

float func_1575()
{
	if (func_337())
	{
		if (_get_special_edition_core_stats_bonus_enabled())
		{
			return 0.2f;
		}
	}
	return 0f;
}

float func_1576()
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

float func_1577()
{
	return Global_1955565->f_3;
}

void func_1578(int iParam0, char* sParam1, bool bParam2)
{
	sVar0 = func_2064(iParam0, 1, 0, 0);
	sVar0 = _create_var_string(2, sVar0, sParam1);
	_databinding_write_data_string(&(Global_1955569->f_5.f_2[iParam0]->f_12[1]), sVar0);
	_databinding_write_data_bool(&(Global_1955569->f_5.f_2[iParam0]->f_16[1]), bParam2);
}

void func_1579(int iParam0, float fParam1, bool bParam2)
{
	sVar0 = func_2064(iParam0, 2, 0, 0);
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

float func_1580(float fParam0, float fParam1, float fParam2)
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

bool func_1581()
{
	return func_2062(12) <= -99f;
}

bool func_1582()
{
	return func_2062(12) >= 99f;
}

int func_1583()
{
	iVar2 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_581(iVar1) == -999503751)
		{
			if (func_2065() != iVar1)
			{
				iVar2++;
			}
		}
		iVar0++;
	}
	return iVar2;
}

bool func_1584(int iParam0)
{
	if (!func_1090(iParam0))
	{
		return false;
	}
	if (func_1588(iParam0, 4))
	{
		return true;
	}
	return false;
}

bool func_1585(int iParam0)
{
	if (!func_1090(iParam0))
	{
		return false;
	}
	if (func_1588(iParam0, 2))
	{
		return true;
	}
	return false;
}

void func_1586(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_1090(iParam0))
	{
		return;
	}
	if (!func_1585(iParam0))
	{
		func_1589(iParam0, 2);
		if (bParam2)
		{
			if (!func_196(0, 0, 1))
			{
				func_366(1, 4);
			}
		}
		if ((!func_213() && !bParam1) && !func_196(0, 0, 1))
		{
			func_695(_create_var_string(10, "OUT_JOURN_ADD", func_2066(iParam0)), 10000, 0, 0, 0, 1);
		}
	}
}

int func_1587(int iParam0)
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

bool func_1588(int iParam0, int iParam1)
{
	if (!func_1090(iParam0))
	{
		return false;
	}
	return (Global_40.f_7157[iParam0] && iParam1) != 0;
}

void func_1589(int iParam0, int iParam1)
{
	if (!func_1090(iParam0))
	{
		return;
	}
	Global_40.f_7157[iParam0] = (Global_40.f_7157[iParam0] || iParam1);
}

int func_1590(int iParam0, bool bParam1)
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

void func_1591(int iParam0, bool bParam1)
{
	iVar0 = func_2067(iParam0);
	switch (iVar0)
	{
		case 0:
			if (bParam1)
			{
				func_580(50);
			}
			else
			{
				func_580(48);
			}
			break;
		case 1:
			if (bParam1)
			{
				func_580(51);
			}
			else
			{
				func_580(49);
			}
			break;
		case 2:
			if (bParam1)
			{
				if (!func_2068(iVar0))
				{
					Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
					func_611();
				}
			}
			else
			{
				Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
				func_611();
			}
			break;
		case 3:
			func_580(24);
			if (bParam1)
			{
				if (!func_2068(iVar0))
				{
					Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
					func_611();
				}
			}
			break;
	}
}

void func_1592(int iParam0)
{
	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
			if (func_2069(0))
			{
				iVar0++;
			}
			if (func_2069(2))
			{
				iVar0++;
			}
			if (func_2069(4))
			{
				iVar0++;
			}
			if (!func_2070(16))
			{
				if (iVar0 == 1)
				{
					func_2071();
					func_324(456, 1);
					func_2072(16);
				}
			}
			if (!func_2070(32))
			{
				if (iVar0 >= 3)
				{
					func_2071();
					func_324(456, 1);
					func_2072(32);
				}
			}
			break;
		case 1:
		case 3:
		case 7:
			if (func_2069(1))
			{
				iVar0++;
			}
			if (func_2069(3))
			{
				iVar0++;
			}
			if (func_2069(7))
			{
				iVar0++;
			}
			if (!func_2070(1))
			{
				if (iVar0 == 1)
				{
					func_2073();
					func_324(457, 1);
					func_2072(1);
				}
			}
			if (!func_2070(2))
			{
				if (iVar0 >= 3)
				{
					func_2073();
					func_324(457, 1);
					func_2072(2);
				}
			}
			break;
		case 5:
		case 6:
		case 8:
			if (func_2069(5))
			{
				iVar0++;
			}
			if (func_2069(6))
			{
				iVar0++;
			}
			if (func_2069(8))
			{
				iVar0++;
			}
			if (!func_2070(4))
			{
				if (iVar0 == 1)
				{
					func_2074();
					func_324(455, 1);
					func_2072(4);
				}
			}
			if (!func_2070(8))
			{
				if (iVar0 >= 3)
				{
					func_2074();
					func_324(455, 1);
					func_2072(8);
				}
			}
			break;
	}
}

void func_1593(var uParam0)
{
	func_1096(uParam0, 143479330);
	if (Global_1946804->f_1 == 2026485318)
	{
		func_1096(uParam0, 617531372);
	}
	else
	{
		func_1096(uParam0, 291123060);
	}
}

void func_1594(var uParam0, int iParam1, struct<14> Param2)
{
	if (!func_2075(uParam0))
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

bool func_1595(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

bool func_1596(int iParam0, int iParam1, var uParam2, int iParam3)
{
	*iParam3 = 0;
	if (*uParam2 < 10)
	{
		return false;
	}
	if (!func_557(iParam0, 0))
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

void func_1597(int iParam0)
{
	func_652(iParam0, 1, 1, -142743235, 1);
	iVar34 = func_2076(iParam0, &uVar18);
	func_2077(iParam0, &uVar18, &iVar34, 1);
	if (func_658() == -2125499975)
	{
		iVar38 = 2020890174;
	}
	else
	{
		iVar38 = 1105329772;
	}
	func_2078(iParam0, &(Global_26796.f_627.f_121.f_20));
	func_654(iParam0, 1, 1);
	iVar36 = 0;
	while (iVar36 < iVar34)
	{
		func_652(&(uVar18[iVar36]), 1, 1, -142743235, 1);
		switch (func_581(&(uVar18[iVar36])))
		{
			case -2061583405:
				func_2078(&(uVar18[iVar36]), &(Global_26796.f_627.f_121.f_21));
				break;
			case 81053684:
				func_2078(&(uVar18[iVar36]), &(Global_26796.f_627.f_121.f_23));
				break;
			case -525676072:
				func_2078(&(uVar18[iVar36]), &(Global_26796.f_627.f_121.f_22));
				break;
			case -1719060085:
				func_2078(&(uVar18[iVar36]), &(Global_26796.f_627.f_121.f_24));
				break;
			case -413129408:
				func_2078(&(uVar18[iVar36]), &(Global_26796.f_627.f_121.f_25));
				break;
		}
		func_654(&(uVar18[iVar36]), 1, 1);
		iVar0[iVar36] = func_656(func_655(&(uVar18[iVar36])), 1);
		iVar36++;
	}
	func_2079(&(Global_1946804->f_1616));
	func_659(&(Global_1946804->f_1616), iVar38, &uVar39, 1, 0, 0, 0);
	*Global_1946804->f_1616.f_1[8] = { func_660(8, 0) };
	*Global_1946804->f_1616.f_1[9] = { func_660(9, 0) };
	*Global_1946804->f_1616.f_1[0] = { func_660(0, 0) };
	*Global_1946804->f_1616.f_1[2] = { func_660(2, 0) };
	*Global_1946804->f_1616.f_1[3] = { func_660(3, 0) };
	*Global_1946804->f_1616.f_1[1] = { func_660(1, 0) };
	*Global_1946804->f_1616.f_1[5] = { func_660(5, 0) };
	*Global_1946804->f_1616.f_1[6] = { func_660(6, 0) };
	*Global_1946804->f_1616.f_1[7] = { func_660(7, 0) };
	iVar35 = 0;
	while (iVar35 < 5)
	{
		iVar36 = 0;
		while (iVar36 < iVar34)
		{
			if (&uVar18[iVar36] == func_661(&(iVar0[iVar36]), iVar35))
			{
				func_654(func_2080(iVar35), 1, 1);
				func_2081(iVar35);
				if (iVar35 == 0)
				{
					bVar17 = true;
					iVar37 = 0;
					while (iVar37 < 39)
					{
						if (!func_1622(Global_1946804->f_1616.f_1[iVar37], 2))
						{
						}
						else
						{
							func_662(Global_1946804->f_1616.f_1[iVar37], iVar37, 0);
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
	if ((bVar16 || bVar17) || Global_40.f_7729 == func_1089(iParam0))
	{
		if (!func_2082(8))
		{
			if (func_658() == -2125499975)
			{
				if (bVar17)
				{
					func_659(&(Global_1946804->f_1616), 1661121390, &uVar39, 0, 1, 0, -2125499975);
					Global_1946804->f_1616 = 166243423;
					func_2083(&(Global_1946804->f_1616), 0);
					if (Global_40.f_7729 == 0)
					{
						func_2084(2, 0, 6);
					}
				}
				if (bVar16 || Global_40.f_7729 == func_1089(iParam0))
				{
					Global_1905941 = 6;
				}
			}
			else
			{
				if (bVar17)
				{
					func_659(&(Global_1946804->f_1616), -361635024, &uVar39, 0, 1, 0, 1160113249);
					Global_1946804->f_1616 = 166243423;
					func_2083(&(Global_1946804->f_1616), 0);
					if (Global_40.f_7729 == 0)
					{
						func_2084(2, 0, 6);
					}
				}
				if (bVar16 || Global_40.f_7729 == func_1089(iParam0))
				{
					Global_1905941 = 62;
				}
			}
			if (bVar16 || Global_40.f_7729 == func_1089(iParam0))
			{
				if (is_entity_dead(get_player_ped(player_id())))
				{
					func_2085(Global_40.f_7729, 4096);
					func_1589(&Global_1905941, 4096);
					Global_40.f_7729 = &Global_1905941;
				}
				else
				{
					func_2086(get_player_ped(player_id()), &Global_1905941, 1, 0, 0);
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
	func_659(&(Global_1946804->f_1616), 1661121390, &uVar39, 0, 1, 0, -2125499975);
	func_659(&(Global_1946804->f_1616), 2020890174, &uVar39, 1, 0, 0, -2125499975);
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

struct<4> func_1598()
{
	Var0 = { func_1136(0) };
	return func_1031(856287005, Var0, -218846335, 0);
}

int func_1599(int iParam0, struct<4> Param1)
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
			if (func_557(Var3, 0))
			{
				Var12.f_4 = Var3.f_1;
				if (func_1502(Var3, Param1, Var12.f_4, 0) > 0)
				{
				}
				else
				{
					func_2087(&uVar7);
					if (func_1032(Var3, &uVar7, &Var12, -1, -142743235, 0, 0))
					{
					}
				}
			}
		}
		iVar0++;
	}
	return 1;
}

int func_1600(var uParam0)
{
	return uParam0->f_1;
}

void func_1601(var uParam0)
{
	func_2088(uParam0);
	func_2090(uParam0, func_2089(-1346384396));
	func_2091(uParam0, func_2089(-712836614));
	func_2092(uParam0, func_2089(-1629133289));
	func_2093(uParam0, func_2089(1302066700));
	func_2094(uParam0, func_2089(599669344));
	func_2095(uParam0, func_2089(-1555511632));
}

void func_1602(struct<6> Param0)
{
	if (!func_2096(Param0.f_4, 1))
	{
	}
	if (!func_2096(Param0, 1))
	{
	}
	if (!func_2096(Param0.f_2, 1))
	{
	}
	if (!func_2096(Param0.f_5, 1))
	{
	}
	if (!func_2096(Param0.f_3, 1))
	{
	}
	if (!func_2096(Param0.f_1, 1))
	{
	}
}

int func_1603(int iParam0, int iParam1, int iParam2)
{
	*iParam0 = 0;
	*iParam1 = 0;
	*iParam2 = 0;
	if (func_398())
	{
		if (func_303())
		{
			bVar0 = false;
			if (!func_326((*Global_1835011)[15]->f_1, 1) && !func_579(42))
			{
				bVar0 = true;
			}
			if (bVar0)
			{
				*iParam0 = func_2097();
				*iParam1 = func_2098();
				*iParam2 = func_2099();
				return 1;
			}
			else
			{
				*iParam0 = func_2100();
				*iParam1 = func_2101();
				*iParam2 = func_2102();
				return 1;
			}
		}
		else if (func_993())
		{
			if (!func_326((*Global_1835011)[60]->f_1, 1))
			{
				*iParam0 = func_2103();
				*iParam1 = func_2104();
				*iParam2 = func_2105();
				return 1;
			}
			else
			{
				*iParam0 = func_2106();
				*iParam1 = func_2107();
				*iParam2 = func_2108();
				return 1;
			}
		}
	}
	else if (func_303())
	{
		*iParam0 = func_2109();
		*iParam1 = func_2110();
		*iParam2 = func_2111();
		return 1;
	}
	else if (func_993())
	{
		*iParam0 = func_2112();
		*iParam1 = func_2113();
		*iParam2 = func_2114();
		return 1;
	}
	return 0;
}

void func_1604(int iParam0, int iParam1)
{
	iParam0 = func_265(iParam0);
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

void func_1605(int iParam0, int iParam1)
{
	iParam0 = func_265(iParam0);
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

void func_1606(int iParam0, int iParam1)
{
	iParam0 = func_265(iParam0);
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

void func_1607(int iParam0, int iParam1)
{
	iParam0 = func_265(iParam0);
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

bool func_1608(int iParam0)
{
	iVar0 = func_2115(iParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	Var1 = { func_1136(0) };
	if (func_2116(&Var1, iVar0, 0) > 0)
	{
		return true;
	}
	return false;
}

int func_1609(int iParam0)
{
	Var0.f_9 = -1591664384;
	if (!func_2117(iParam0, &Var0))
	{
		return 0;
	}
	Var29 = { Var0.f_5 };
	Var29.f_4 = Var0.f_9;
	if (!func_1032(Var0.f_4, &Var0, &Var29, -1, -142743235, 0, 0))
	{
		return 0;
	}
	return 1;
}

int func_1610(int iParam0)
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

int func_1611(int iParam0, int iParam1)
{
	if (!func_557(iParam1, 0))
	{
		return 0;
	}
	if (!func_2118(iParam1))
	{
		return 0;
	}
	if (func_1608(iParam0))
	{
		return 0;
	}
	iVar0 = func_2115(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	Var1 = { func_1136(0) };
	Var1.f_4 = iVar0;
	if (!func_1087(iParam1, &uVar6, &Var1, 1, 752097756, 0))
	{
		return 0;
	}
	return 1;
}

bool func_1612(int iParam0, struct<4> Param1, bool bParam5)
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
			if (func_557(Var3, 0))
			{
				Var12.f_4 = Var3.f_1;
				if (func_1502(Var3, Param1, Var12.f_4, 0) > 0)
				{
				}
				else
				{
					func_2087(&Var7);
					if (func_1087(Var3, &Var7, &Var12, 1, 752097756, 1))
					{
						if (bParam5)
						{
							func_1615(Var7, 1);
						}
					}
				}
			}
		}
		iVar0++;
	}
	return true;
}

void func_1613(int iParam0)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if (func_1629(1) < iParam0)
	{
		iParam0 = func_1629(1);
	}
	_money_decrement_cash_balance(iParam0);
	Var0 = { func_96(1644987397) };
	_0xbd861ae8a5181ed7(&Var0, iParam0);
}

bool func_1614(var uParam0, int iParam1, var uParam2, int iParam3, int iParam4, var uParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(&uParam0))
	{
		return false;
	}
	if (!_0x22e590f108289a9d(func_931(bParam6), &uParam0, iParam4, &Var0))
	{
		return false;
	}
	if (!func_1141(Var0, uParam5, bParam6, 0))
	{
		return false;
	}
	return true;
}

bool func_1615(struct<4> Param0, int iParam4)
{
	if (!func_585(0))
	{
		return func_2119(Param0, iParam4, 1) != -1;
	}
	if (!_0xb881ca836cc4b6d4(&Param0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_1141(Param0, &Var0, 0, 0))
	{
		return false;
	}
	if (Var0.f_10 == iParam4)
	{
		return true;
	}
	if (!_0x734311e2852760d0(func_931(0), &Param0, iParam4))
	{
		return false;
	}
	return true;
}

bool func_1616(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (func_1542(iParam0))
	{
		return false;
	}
	if (iParam1 <= 0)
	{
		return false;
	}
	if (!func_585(bParam4))
	{
		iVar0 = -1;
		return iVar0 != -1;
	}
	if (!_0xb4158c8c9a3b5dce(func_931(bParam4), iParam0, iParam1, iParam2))
	{
		return false;
	}
	return true;
}

void func_1617(int iParam0, int iParam1)
{
	iVar0 = 0;
	if (func_22() == -1)
	{
		if (func_567(43))
		{
			if (func_577(iParam0, 412399755))
			{
				func_1057(-1791518714);
				if (func_1058() == 0)
				{
					func_366(0, 10);
					iVar0 = func_2120(iParam0, iParam1, 1);
					if (((iParam0 == 281887510 || iParam0 == -164081697) || iParam0 == -1161319399) || iParam0 == 728781265)
					{
						if (func_1060(iParam0) < func_1061(iParam0))
						{
							func_573(43, iParam0, iParam1, -1791518714, iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (func_567(44))
		{
			if (func_577(iParam0, 709057512))
			{
				func_1057(-2087881550);
				if (func_1058() == 1)
				{
					func_366(0, 10);
					iVar0 = func_2120(iParam0, iParam1, 2);
					if ((iParam0 == -222563712 || iParam0 == 1794857344) || iParam0 == 1952409553)
					{
						if (func_1060(iParam0) < func_1061(iParam0))
						{
							func_573(43, iParam0, iParam1, -2087881550, iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!func_567(45))
		{
			if (func_577(iParam0, -1478961327))
			{
				func_1057(1908068621);
				if (func_1058() == 2)
				{
					func_366(0, 10);
					iVar0 = func_2120(iParam0, iParam1, 4);
					if (((iParam0 == 2116770557 || iParam0 == -651064726) || iParam0 == -404270094) || iParam0 == 2093126853)
					{
						if (func_1060(iParam0) < func_1061(iParam0))
						{
							func_573(43, iParam0, iParam1, 1908068621, iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!func_567(46))
		{
			if (func_577(iParam0, -1238404098))
			{
				func_1057(1611247019);
				if (func_1058() == 3)
				{
					func_366(0, 10);
					iVar0 = func_2120(iParam0, iParam1, 8);
					if (((iParam0 == 2085530337 || iParam0 == -150591160) || iParam0 == -323969289) || iParam0 == 1504361882)
					{
						if (func_1060(iParam0) < func_1061(iParam0))
						{
							func_573(43, iParam0, iParam1, 1611247019, iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!func_567(47))
		{
			if (func_577(iParam0, 1160548794))
			{
				func_1057(1319635688);
				if (func_1058() == 4)
				{
					func_366(0, 10);
					iVar0 = func_2120(iParam0, iParam1, 16);
					if (((iParam0 == -1521783510 || iParam0 == 1714875242) || iParam0 == 927763737) || iParam0 == 1019229063)
					{
						if (func_1060(iParam0) < func_1061(iParam0))
						{
							func_573(43, iParam0, iParam1, 1319635688, iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
	}
}

bool func_1618(int iParam0, int iParam1)
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

void func_1619(var uParam0, int iParam1, int iParam2)
{
	iVar1 = func_2121(iParam1);
	func_2122(iParam1, iParam2);
	if (iVar1 >= 0 && uParam0->f_26 > 0)
	{
		func_2123(&(uParam0->f_26), iVar1);
		if (func_2124(uParam0->f_26, &iVar0))
		{
			func_2125(iVar0, iVar1);
		}
	}
}

bool func_1620(int iParam0, int iParam1)
{
	Var0 = { func_668(iParam0, 0, 0) };
	Var5 = { func_1031(iParam0, Var0, Var0.f_4, 0) };
	if (func_1502(iParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return false;
	}
	_0x9a113c660aea3832(func_931(0), &Var5, iParam1);
	return true;
}

void func_1621(int iParam0)
{
	Global_1946804->f_978 = iParam0;
}

bool func_1622(var uParam0, int iParam1)
{
	return (uParam0->f_2 && iParam1) != 0;
}

void func_1623(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	*uParam0 = iParam1;
	uParam0->f_1 = iParam2;
	uParam0->f_2 = iParam3;
	uParam0->f_3 = iParam4;
	uParam0->f_4 = iParam5;
	uParam0->f_6 = 0;
	uParam0->f_5 = 0;
}

void func_1624(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
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
			func_1563(iVar1, iVar0);
		}
		if (bParam1)
		{
			func_1563(iVar3, iVar0);
		}
	}
	if (uParam0->f_1[iVar2]->f_1 == -1333118809 || uParam0->f_1[iVar2]->f_1 == -1158926300)
	{
		uParam0->f_1[iVar2]->f_1 = 1155669136;
		if (bParam3)
		{
			func_1563(iVar2, iVar0);
		}
	}
}

bool func_1625(int iParam0)
{
	return &Global_1946804->f_529[iParam0] > 0;
}

void func_1626(int iParam0)
{
	Global_1946804->f_529[iParam0] = &Global_1946804->f_529[iParam0] + 1;
}

struct<4> func_1627()
{
	return Var0;
}

bool func_1628(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4, bool bParam5)
{
	*iParam3 = 0;
	if (*uParam2 < 15)
	{
		return false;
	}
	if (!func_557(iParam0, 0))
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
		func_2126(iParam0, iParam1, uParam2, *iParam3);
	}
	return true;
}

int func_1629(int iParam0)
{
	return _money_get_cash_balance();
}

char* func_1630(int iParam0)
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

bool func_1631(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	if (Global_1572887->f_12 == -1)
	{
		return func_326((*Global_1835011)[iParam0]->f_1, 1);
	}
	return (_unlock_is_unlocked((*Global_1835011)[iParam0]->f_2) && !_unlock_is_visible((*Global_1835011)[iParam0]->f_2));
}

bool func_1632(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 25);
}

int func_1633(int iParam0)
{
	if (!func_246(iParam0))
	{
		return 0;
	}
	return (*Global_1888801)[iParam0]->f_3;
}

int func_1634(int iParam0)
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
			break;
		case 5:
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
			break;
		case 8:
			iVar0 = _create_volume_aggregate_with_custom_name("DISTRICT_GUARMA");
			_0xbce668aaf83608be(iVar0, 2410.933f, -7578.265f, 50f, 0f, 0f, 0f, 2000f, 2000f, 890f);
			_0xbce668aaf83608be(iVar0, 2388.016f, -4563.885f, 50f, 0f, 0f, 0f, 815f, 500f, 800f);
			break;
		case 9:
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
			break;
		case 10:
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
			break;
		case 11:
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
			break;
		case 12:
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
			break;
		case 15:
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
			break;
		case 13:
			iVar0 = _create_volume_aggregate_with_custom_name("DISTRICT_GAPTOOTH_RIDGE");
			_0x39816f6f94f385ad(iVar0, -5420f, -3447.5f, 150f, 0f, 0f, 175f, 300f, 250f, 700f);
			_0x39816f6f94f385ad(iVar0, -5837.5f, -3530f, 150f, 0f, 0f, -32f, 1000f, 500f, 700f);
			_0x39816f6f94f385ad(iVar0, -6142.5f, -3665f, 150f, 0f, 0f, -8f, 800f, 300f, 700f);
			_0x39816f6f94f385ad(iVar0, -5747.5f, -2905f, 150f, 0f, 0f, 136.5f, 1300f, 750f, 700f);
			_0x39816f6f94f385ad(iVar0, -5407.5f, -2487.5f, 150f, 0f, 0f, -148f, 550f, 500f, 700f);
			_0x39816f6f94f385ad(iVar0, -5232.5f, -2825f, 150f, 0f, 0f, -178f, 400f, 530f, 700f);
			_0x39816f6f94f385ad(iVar0, -5667.5f, -2040f, 150f, 0f, 0f, 175f, 1100f, 800f, 700f);
			break;
		case 16:
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
			break;
		case 14:
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
			break;
	}
	(*Global_1897952)[iParam0]->f_1 = iVar0;
	return iVar0;
}

bool func_1635(int iParam0)
{
	if ((iParam0 == 22 || iParam0 == 37) && !func_993())
	{
		return true;
	}
	if (iParam0 == 61)
	{
		return true;
	}
	return false;
}

int func_1636(int iParam0, int iParam1)
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
					break;