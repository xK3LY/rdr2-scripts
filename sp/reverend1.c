void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_17 = 1;
	iLocal_18 = 2;
	iLocal_19 = 3;
	iLocal_20 = 4;
	iLocal_21 = 5;
	iLocal_22 = 6;
	iLocal_23 = 7;
	iLocal_24 = 25;
	iLocal_25 = 1;
	iLocal_26 = 2;
	iLocal_27 = 4;
	iLocal_28 = 8;
	iLocal_29 = 16;
	iLocal_30 = 32;
	iLocal_31 = 64;
	iLocal_32 = 128;
	iLocal_33 = 524288;
	iLocal_34 = ((((((((iLocal_25 || iLocal_26) || iLocal_27) || iLocal_28) || iLocal_29) || iLocal_30) || iLocal_31) || iLocal_32) || iLocal_33);
	iLocal_35 = -692960126;
	iLocal_36 = 60202542;
	iLocal_37 = 40345436;
	iLocal_38 = 98154799;
	iLocal_39 = -289651159;
	iLocal_40 = -289651159;
	iLocal_41 = -289651159;
	iLocal_42 = -827620392;
	iLocal_43 = 343238651;
	iLocal_44 = 343238651;
	iLocal_45 = -164452766;
	iLocal_46 = -544816550;
	iLocal_47 = -1828437268;
	iLocal_48 = 1786827347;
	iLocal_49 = -1946016570;
	iLocal_50 = -1751580026;
	iLocal_51 = 1830978939;
	iLocal_52 = -1693870200;
	iLocal_53 = -1073876584;
	iLocal_54 = -950356675;
	iLocal_55 = -1809418382;
	sLocal_56 = "rev1_witness_flee";
	sLocal_57 = "rev1_camp_return_gps_route";
	cLocal_58 = "rev1_revroutetobridge";
	sLocal_59 = "rev1_station_assist";
	sLocal_60 = "MINI_GAMES@STORY@REV1@TRACK_RESCUE@ARTHUR";
	sLocal_61 = "MINI_GAMES@STORY@REV1@TRACK_RESCUE@REVEREND";
	iLocal_62 = -1;
	iLocal_148 = -1051532213;
	iLocal_149 = 980571552;
	iLocal_150 = -1;
	if (has_force_cleanup_occurred(4642))
	{
		func_1(&uLocal_2024, 1073741824);
		func_2(&uLocal_2024, 1);
		terminate_this_thread();
	}
	while (!func_3(64))
	{
		wait(0);
	}
	func_4(&uScriptParam_0, &uLocal_2024);
	func_5(&uLocal_2024);
	while (!func_6(&uLocal_2024, -2147483648))
	{
		func_7(&uLocal_2024);
		wait(0);
	}
	while (!func_2(&uLocal_2024, 0))
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
	iLocal_15 = func_125(cParam0);
	iLocal_15 = iLocal_15;
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
	if (func_163(26, 1))
	{
		set_entity_visible(&(iLocal_63[26]), true);
		set_entity_collision(&(iLocal_63[26]), true, false);
		freeze_entity_position(&(iLocal_63[26]), false);
	}
	_0xa1cfb35069d23c23(&(iLocal_108[30]));
	func_164();
	func_165(1);
	_0x74c2b3dc0b294102(&(iLocal_108[16]));
	_0xe5ef9de716ff737e(&(iLocal_108[16]), 1, 0);
	func_166(cParam0);
	func_167(cParam0);
	func_168(cParam0);
	func_169(cParam0);
	func_170(1);
	func_171(1);
	func_172();
	_0xdd1232b332cbb9e7(3, 1, 0);
	if (_0x7409669c5ed50144(-632030841))
	{
		_0x50b72a754ee64a71(-632030841);
	}
	func_173(30, 1);
	if (func_22(cParam0) == 0)
	{
		func_174((*Global_1835011)[cParam0->f_607]->f_1, 1);
	}
	else
	{
		func_174((*Global_1835011)[cParam0->f_607]->f_1, 0);
	}
	_0x411189e51b8020ba(Global_35, "cautious");
	set_audio_flag("SuppressNewTrainWhistles", false);
	set_audio_flag("SuppressNewAndExistingTrainWhistles", false);
	if (is_gameplay_hint_active())
	{
		stop_gameplay_hint(false);
	}
	_0xa6f67bec53379a32(Global_35, "HandsOnBelt");
	_0x5a8b01199c3e79c3();
	func_175(0);
	_0x0751d461f06e41ce(player_id(), 21, 2, 0);
	set_ped_can_use_auto_conversation_lookat(Global_35, false);
	_0xd1a70c1e8d1031fe(player_id(), 1);
	set_ped_can_leg_ik(Global_35, true);
	_0xc67a4910425f11f1(player_id(), 0);
	func_176();
	clear_bit(&(Global_1956580->f_1), 5);
	func_177(&uLocal_1838);
	if (get_milliseconds_per_game_minute() != 2000)
	{
		_set_milliseconds_per_game_minute(2000);
	}
	_0x6a564540fac12211(func_178(0), 2055893578);
	func_179();
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

bool func_26(var uParam0)
{
	return func_212(*uParam0, 1);
}

void func_27(var uParam0, bool bParam1)
{
	if (bParam1 || !func_26(uParam0))
	{
		func_213(uParam0);
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
	if (iParam0 == iLocal_16)
	{
		func_217(&Var0, func_216(iParam0));
	}
	else if (iParam0 == iLocal_17)
	{
		func_217(&Var0, func_216(iParam0));
	}
	else if (iParam0 == iLocal_18)
	{
		func_217(&Var0, func_216(iParam0));
	}
	else if (iParam0 == iLocal_19)
	{
		func_217(&Var0, func_216(iParam0));
	}
	else if (iParam0 == iLocal_20)
	{
		func_217(&Var0, func_216(iParam0));
	}
	else if (iParam0 == iLocal_21)
	{
		func_217(&Var0, func_216(iParam0));
	}
	else if (iParam0 == iLocal_22)
	{
		func_217(&Var0, func_216(iParam0));
	}
	else if (iParam0 == iLocal_23)
	{
		func_217(&Var0, func_216(iParam0));
	}
	else if (iParam0 == iLocal_24)
	{
		func_217(&Var0, func_216(iParam0));
	}
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
	if (!is_itemset_valid(iLocal_14))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < get_itemset_size(iLocal_14))
	{
		iVar1 = get_indexed_item_in_itemset(iVar0, iLocal_14);
		iVar2 = _get_entity_from_item(iVar1);
		if ((does_entity_exist(iVar2) && _0x88ad6cc10d8d35b2(iVar2)) && !_0xa7e51b53309eac97(iVar2))
		{
			delete_entity(&iVar2);
		}
		iVar0++;
	}
	destroy_itemset(iLocal_14);
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
	cParam0->f_634[0] = 57906;
	cParam0->f_634[1] = 57906;
	cParam0->f_637 = 0;
	func_378(cParam0, *uParam1);
	func_379(cParam0);
}

void func_109(char[4] cParam0)
{
	func_380(cParam0, 0, -1);
	func_381(cParam0);
	iVar0 = func_33(cParam0);
	vVar1 = { func_382(3, iVar0) };
	func_383(cParam0, vVar1);
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
			func_384(iVar0, iVar1);
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
	return func_385(cParam0->f_1[func_132(iParam1)]->f_11, iParam2);
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
		func_386(&(cParam0->f_7375));
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
	return func_387(iParam0);
}

bool func_127(struct<4> Param0)
{
	if (func_82(32768))
	{
		return true;
	}
	return func_388(Param0, Param0.f_3);
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
	if (!func_389())
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
	if (func_390(vParam1))
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
		return func_391();
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
		func_392(cParam0->f_607);
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
	func_393(&(cParam0->f_638));
	func_394(&(cParam0->f_819));
	func_395(&(cParam0->f_1020));
	func_396(&(cParam0->f_1081));
	func_397(&(cParam0->f_1126));
	func_398(&(cParam0->f_5147));
	func_399(&(cParam0->f_1124));
	func_400(&(cParam0->f_5188));
	func_401(&(cParam0->f_5239));
	func_402(&(cParam0->f_5249));
	func_403(&(cParam0->f_5265));
	func_404(&(cParam0->f_5286));
}

void func_138(char[4] cParam0)
{
	if (!is_itemset_valid(iLocal_14))
	{
		iLocal_14 = create_itemset(true);
	}
}

int func_139(char[4] cParam0)
{
	func_405(cParam0, iLocal_35, iLocal_34);
	func_405(cParam0, iLocal_36, iLocal_34);
	func_405(cParam0, iLocal_37, iLocal_34);
	func_405(cParam0, iLocal_38, iLocal_34);
	func_405(cParam0, iLocal_42, iLocal_34);
	func_405(cParam0, iLocal_43, iLocal_34);
	func_405(cParam0, iLocal_44, iLocal_34);
	func_405(cParam0, iLocal_40, iLocal_34);
	func_405(cParam0, iLocal_45, iLocal_34);
	func_405(cParam0, iLocal_46, iLocal_34);
	func_405(cParam0, iLocal_47, iLocal_34);
	func_405(cParam0, iLocal_48, iLocal_34);
	func_405(cParam0, iLocal_49, iLocal_34);
	func_405(cParam0, iLocal_50, iLocal_34);
	func_405(cParam0, iLocal_51, (iLocal_28 || iLocal_29));
	func_405(cParam0, iLocal_52, (iLocal_28 || iLocal_29));
	func_405(cParam0, iLocal_53, iLocal_34);
	func_405(cParam0, iLocal_55, iLocal_34);
	func_405(cParam0, iLocal_54, iLocal_34);
	func_406(cParam0, sLocal_60, iLocal_30);
	func_406(cParam0, sLocal_61, iLocal_30);
	func_407(cParam0, sLocal_56, iLocal_34, 2, -1);
	func_407(cParam0, sLocal_57, iLocal_34, 2, -1);
	func_407(cParam0, cLocal_58, ((iLocal_27 || iLocal_28) || iLocal_29), 2, -1);
	func_407(cParam0, sLocal_59, iLocal_27, 2, -1);
	func_409(cParam0, func_408(), iLocal_141[0], ((iLocal_25 || iLocal_26) || iLocal_27), 16, 0, 0, 1);
	func_409(cParam0, "script@story@rev1@ig@ig5_track_rescue@ig5_track_rescue", iLocal_141[1], (iLocal_30 || iLocal_31), 0, 0, 0, 1);
	func_411(cParam0, &(iLocal_141[0]), func_410(0), ((iLocal_25 || iLocal_26) || iLocal_27));
	func_411(cParam0, &(iLocal_141[0]), func_410(1), ((iLocal_25 || iLocal_26) || iLocal_27));
	func_411(cParam0, &(iLocal_141[0]), func_410(2), ((iLocal_25 || iLocal_26) || iLocal_27));
	func_411(cParam0, &(iLocal_141[0]), func_410(3), ((iLocal_25 || iLocal_26) || iLocal_27));
	func_411(cParam0, &(iLocal_141[0]), func_410(10), ((iLocal_25 || iLocal_26) || iLocal_27));
	func_411(cParam0, &(iLocal_141[0]), func_410(12), ((iLocal_25 || iLocal_26) || iLocal_27));
	func_411(cParam0, &(iLocal_141[0]), func_410(5), ((iLocal_25 || iLocal_26) || iLocal_27));
	func_411(cParam0, &(iLocal_141[1]), "Pbl_Rev_Loop_01", (iLocal_30 || iLocal_31));
	func_411(cParam0, &(iLocal_141[1]), "Pbl_Player_Approaches_Reverend_WALK", iLocal_31);
	func_411(cParam0, &(iLocal_141[1]), "Pbl_Player_Approaches_Reverend_RUN", iLocal_31);
	func_411(cParam0, &(iLocal_141[1]), "Pbl_Minigame", iLocal_31);
	func_411(cParam0, &(iLocal_141[1]), "Pbl_Player_Frees_Reverends_Foot", iLocal_31);
	func_412(cParam0, "CLIPSET@MINI_GAMES@STORY@REV1@TRACK_RESCUE@ARTHUR", iLocal_31);
	func_412(cParam0, "CLIPSET@MINI_GAMES@STORY@REV1@TRACK_RESCUE@REVEREND", iLocal_31);
	func_413(cParam0, "script_REV1_TrackRescue", iLocal_31);
	return 1;
}

void func_140(char[4] cParam0, int iParam1, int iParam2)
{
	func_414(&(cParam0->f_1[func_132(iParam1)]->f_11), iParam2);
}

void func_141(char[4] cParam0)
{
	func_103(cParam0, 2);
}

void func_142(char[4] cParam0, int iParam1)
{
	func_415(&(cParam0->f_638), &(cParam0->f_819), &(cParam0->f_1020), &(cParam0->f_1081), &(cParam0->f_1124), &(cParam0->f_1126), &(cParam0->f_5147), &(cParam0->f_5188), &(cParam0->f_5239), &(cParam0->f_5249), &(cParam0->f_5265), &(cParam0->f_5286), iParam1);
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
	func_416(&(cParam0->f_5310), iParam1, sParam2, bParam3);
}

void func_146(char[4] cParam0)
{
	if (!func_248(cParam0->f_5421))
	{
		cParam0->f_5421 = { func_417() };
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
	func_418(&(cParam0->f_7375), fParam1);
}

void func_150(char[4] cParam0, float fParam1)
{
	func_419(&(cParam0->f_7375), fParam1);
}

void func_151(char[4] cParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	func_420(cParam0, iParam1, sParam2, iParam3, iParam4, bParam5, 0);
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
		if (func_421(cParam0, func_35(cParam0), 0))
		{
			func_140(cParam0, func_35(cParam0), 536870912);
		}
	}
	if (func_8(cParam0, 8192))
	{
		if (!func_8(cParam0, 536870912))
		{
			if (func_422(&(cParam0->f_1126), func_33(cParam0)))
			{
				func_99(cParam0, 536870912);
			}
		}
		return;
	}
	bVar0 = false;
	if (func_421(cParam0, func_33(cParam0), 1))
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
	if (func_423(cParam0) < 1)
	{
		func_424(cParam0, func_128(cParam0, 3), !func_8(cParam0, 2097152), cParam0->f_5410, !func_8(cParam0, 32), 0);
		func_425(cParam0, 1, cParam0->f_5413, cParam0->f_5413.f_1, cParam0->f_5413.f_2, cParam0->f_5416, 1, 1, 1);
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
				func_426(cParam0);
			}
		}
		if (func_120(cParam0, 32))
		{
			func_427(cParam0);
		}
	}
	switch (func_423(cParam0))
	{
		case -1:
		case 0:
			func_428(cParam0, 1);
			break;
		case 1:
			if (func_429(cParam0))
			{
				if (func_120(cParam0, 4096))
				{
					func_428(cParam0, 2);
				}
				else
				{
					func_428(cParam0, 3);
				}
			}
			break;
		case 2:
			if (func_430(cParam0))
			{
				func_428(cParam0, 3);
			}
			break;
		case 3:
			if (func_431(cParam0))
			{
				func_428(cParam0, 4);
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
		func_432(cParam0, 0);
		return true;
	}
	if (func_433(cParam0))
	{
		iVar0 = func_33(cParam0);
		func_107(cParam0, func_35(cParam0));
		if (func_33(cParam0) == 26)
		{
			func_432(cParam0, 0);
			return true;
		}
		else if (func_121(cParam0, iVar0, 128))
		{
			func_433(cParam0);
		}
	}
	return false;
}

int func_162(char[4] cParam0, int iParam1)
{
	return cParam0->f_1[func_132(iParam1)]->f_10;
}

bool func_163(int iParam0, bool bParam1)
{
	return (((iParam0 > -1 && iParam0 < 27) && does_entity_exist(&(iLocal_63[iParam0]))) && (!bParam1 || func_434(&(iLocal_63[iParam0]), 0)));
}

void func_164()
{
	iVar0 = 0;
	while (iVar0 < 19)
	{
		func_436(func_435(iVar0));
		iVar0++;
	}
	if (func_437(8388608))
	{
		func_438(8388608);
	}
}

void func_165(bool bParam0)
{
	if (bParam0)
	{
		func_439(&(iLocal_108[18]));
	}
	else
	{
		func_440(&(iLocal_108[18]), 1);
	}
}

void func_166(char[4] cParam0)
{
	func_441(&uLocal_1725, &(iLocal_108[0]), 0);
	func_441(&uLocal_1726, &(iLocal_108[1]), 0);
	func_441(&uLocal_1727, &(iLocal_108[2]), 0);
	func_441(&uLocal_1728, &(iLocal_108[4]), 0);
	func_442();
}

void func_167(char[4] cParam0)
{
	if (func_434(Global_35, 0))
	{
		clear_ped_tasks(Global_35, 1, 0);
		clear_ped_secondary_task(Global_35);
	}
	if (func_434(&(iLocal_63[0]), 0))
	{
		if (func_22(cParam0) != 0)
		{
			clear_ped_tasks(&(iLocal_63[0]), 1, 0);
			clear_ped_secondary_task(&(iLocal_63[0]));
		}
	}
}

void func_168(char[4] cParam0)
{
	if (func_163(0, 0))
	{
		set_ped_can_be_targetted(&(iLocal_63[0]), true);
		set_ped_can_ragdoll_from_player_impact(&(iLocal_63[0]), false);
		set_ped_relationship_group_hash(&(iLocal_63[0]), -1538724068);
	}
	if (func_22(cParam0) != 0)
	{
		func_443(cParam0, 0, 1);
	}
	func_444();
	func_443(cParam0, 1, 1);
	func_443(cParam0, 2, 1);
	func_445(cParam0, 1, 0);
	func_446();
	func_447();
	func_448(&iLocal_145);
	clear_timecycle_modifier();
	clear_weather_type_persist();
	_set_milliseconds_per_game_minute(2000);
}

void func_169(char[4] cParam0)
{
	func_258(cParam0, 2);
}

void func_170(bool bParam0)
{
	if ((!func_449(25) && bParam0) || (func_449(25) && !bParam0))
	{
		return;
	}
	func_450(25, !bParam0);
	iVar0 = 503;
	while (iVar0 <= 506)
	{
		iVar1 = iVar0;
		if (bParam0)
		{
			func_451(iVar1);
			func_452(iVar1, 32);
		}
		else
		{
			iVar2 = func_453(iVar1);
			if (does_entity_exist(iVar2) && is_ped_dead_or_dying(iVar2, true))
			{
				iVar3 = func_454(iVar1);
				_0x49a8c2cd97815215(iVar3);
			}
			func_455(iVar1);
			func_456(iVar1, 32);
		}
		iVar0++;
	}
}

void func_171(bool bParam0)
{
	if (!bParam0)
	{
		delete_all_trains();
	}
	set_random_trains(bParam0);
	func_39(bParam0);
}

void func_172()
{
	_databinding_write_data_bool(Global_1911643->f_3, false);
	iVar0 = 0;
	while (iVar0 < &Global_1911643)
	{
		_databinding_remove_data_entry(&(Global_1911643->f_5[iVar0]));
		iVar0++;
	}
	_databinding_clear_binding_array(Global_1911643->f_4);
	Global_1911643 = 0;
	Global_1911643->f_1 = 0;
}

int func_173(int iParam0, bool bParam1)
{
	iVar0 = func_457(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	func_458(iParam0, 1);
	func_459(iVar0);
	if (bParam1)
	{
		func_460(Global_1899778, iVar0);
	}
	func_461(iVar0);
	return 1;
}

void func_174(int iParam0, bool bParam1)
{
	if (!func_183(iParam0))
	{
		return;
	}
	iVar0 = func_188(iParam0);
	iVar1 = -1;
	iVar2 = 0;
	bVar3 = false;
	if (iVar0 == 1)
	{
		iVar4 = func_265(iParam0);
		if (iVar4 == 23)
		{
			iVar1 = 134;
			if (bParam1)
			{
				if (func_462(iVar1, iVar2, bVar3, 0, 0))
				{
				}
				else
				{
					func_463(iVar1, iVar2, bVar3);
				}
			}
			else
			{
				func_464(iVar1, iVar2, bVar3);
			}
			iVar1 = 37;
			if (func_465(134, 0) && func_466(1) <= 1)
			{
				iVar2 = 1;
			}
			else
			{
				iVar2 = 0;
			}
		}
		else if (iVar4 == 16)
		{
			iVar2 = 0;
			if (bParam1)
			{
				if (func_467(134))
				{
					if (func_462(134, iVar2, 0, 0, 0))
					{
					}
					else
					{
						func_463(134, iVar2, 0);
					}
				}
				else
				{
					func_464(134, iVar2, 0);
				}
				if (!func_468(138) && func_467(138))
				{
					if (func_462(138, 1, 0, 0, 0))
					{
					}
					else
					{
						func_463(138, 1, 0);
					}
				}
				else
				{
					func_464(138, 1, 0);
				}
			}
			else
			{
				func_464(134, iVar2, 0);
				func_464(138, 1, 0);
			}
			return;
		}
		else if (iVar4 == 46)
		{
			if (func_468(58))
			{
				iVar1 = 140;
				if (bParam1)
				{
					if (func_462(iVar1, iVar2, bVar3, 0, 0))
					{
					}
					else
					{
						func_463(iVar1, iVar2, bVar3);
					}
				}
				else
				{
					func_464(iVar1, iVar2, bVar3);
				}
			}
		}
		else if (iVar4 == 17)
		{
			iVar1 = 134;
			if (bParam1)
			{
				if (func_462(iVar1, iVar2, bVar3, 0, 0))
				{
				}
				else
				{
					func_463(iVar1, iVar2, bVar3);
				}
			}
			else
			{
				func_464(iVar1, iVar2, bVar3);
			}
			if (func_468(5) && func_469(12))
			{
				iVar1 = 21;
				iVar2 = 1;
				if (bParam1)
				{
					if (func_462(iVar1, iVar2, bVar3, 0, 0))
					{
					}
					else
					{
						func_463(iVar1, iVar2, bVar3);
					}
				}
				else
				{
					func_464(iVar1, iVar2, bVar3);
				}
			}
			iVar1 = 138;
			iVar2 = 0;
		}
		else if (iVar4 == 15)
		{
			iVar1 = 63;
			if (bParam1)
			{
				if (func_462(iVar1, iVar2, bVar3, 0, 0))
				{
				}
				else
				{
					func_463(iVar1, iVar2, bVar3);
				}
			}
			else
			{
				func_464(iVar1, iVar2, bVar3);
			}
			iVar1 = 59;
			if (bParam1)
			{
				if (func_462(iVar1, iVar2, bVar3, 0, 0))
				{
				}
				else
				{
					func_463(iVar1, iVar2, bVar3);
				}
			}
			else
			{
				func_464(iVar1, iVar2, bVar3);
			}
		}
		else if (iVar4 == 33)
		{
			iVar1 = 99;
		}
		else if (iVar4 == 73)
		{
			iVar1 = 10;
			iVar2 = 1;
		}
		else if (iVar4 == 24)
		{
			iVar1 = 21;
			iVar2 = 0;
		}
		else if (iVar4 == 10)
		{
			iVar1 = 63;
			if (bParam1)
			{
				if (func_462(iVar1, iVar2, bVar3, 0, 0))
				{
				}
				else
				{
					func_463(iVar1, iVar2, bVar3);
				}
			}
			else
			{
				func_464(iVar1, iVar2, bVar3);
			}
			if ((func_320((*Global_1835011)[11]->f_1, 1) && func_320((*Global_1835011)[14]->f_1, 1)) && func_320((*Global_1347702)[61]->f_15, 1))
			{
				iVar1 = 66;
				iVar2 = 1;
				if (bParam1)
				{
					if (func_462(iVar1, iVar2, bVar3, 0, 0))
					{
					}
					else
					{
						func_463(iVar1, iVar2, bVar3);
					}
				}
				else
				{
					func_464(iVar1, iVar2, bVar3);
				}
			}
			iVar1 = 59;
			iVar2 = 0;
		}
		else if (iVar4 == 55)
		{
			iVar1 = 64;
		}
	}
	else if (iVar0 == 8)
	{
		iVar5 = func_265(iParam0);
		if (iVar5 == 0)
		{
			if (func_470(15))
			{
				if (bParam1)
				{
					if (func_471(15, 0, 0))
					{
					}
				}
				else
				{
					func_472(15, 0);
				}
			}
			iVar1 = 97;
		}
		else if (iVar5 == 1)
		{
			iVar1 = 96;
			iVar2 = 1;
		}
		else if (iVar5 == 61)
		{
			if (func_470(15))
			{
				if (bParam1)
				{
					if (func_471(15, 0, 0))
					{
					}
				}
				else
				{
					func_472(15, 0);
				}
			}
			if (func_470(9))
			{
				if (bParam1)
				{
					if (func_471(9, 0, 0))
					{
					}
				}
				else
				{
					func_472(9, 0);
				}
			}
			if (!func_320((*Global_1347702)[63]->f_15, 1))
			{
				iVar1 = 63;
			}
			else
			{
				iVar1 = 97;
				iVar2 = 1;
			}
		}
		else if (iVar5 == 62)
		{
			if (func_470(15))
			{
				if (bParam1)
				{
					if (func_471(15, 0, 0))
					{
					}
				}
				else
				{
					func_472(15, 0);
				}
			}
			if (func_470(9))
			{
				if (bParam1)
				{
					if (func_471(9, 0, 0))
					{
					}
				}
				else
				{
					func_472(9, 0);
				}
			}
			iVar1 = 112;
			if (bParam1)
			{
				if (func_462(iVar1, iVar2, bVar3, 0, 0))
				{
				}
				else
				{
					func_463(iVar1, iVar2, bVar3);
				}
			}
			else
			{
				func_464(iVar1, iVar2, bVar3);
			}
			iVar1 = 97;
			if (bParam1)
			{
				if (func_462(iVar1, iVar2, bVar3, 0, 0))
				{
				}
				else
				{
					func_463(iVar1, iVar2, bVar3);
				}
			}
			else
			{
				func_464(iVar1, iVar2, bVar3);
			}
			iVar1 = 63;
		}
		else if (iVar5 == 64)
		{
			iVar1 = 65;
			iVar2 = 1;
		}
		else if (iVar5 == 76)
		{
			iVar1 = 134;
			if (bParam1)
			{
				if (func_462(iVar1, iVar2, bVar3, 0, 0))
				{
				}
				else
				{
					func_463(iVar1, iVar2, bVar3);
				}
			}
			else
			{
				func_464(iVar1, iVar2, bVar3);
			}
			iVar1 = 37;
		}
		else if (iVar5 == 82)
		{
			iVar1 = 83;
			iVar2 = 1;
			bVar3 = true;
		}
		else if (iVar5 == 96)
		{
			iVar1 = 2;
		}
		else if (iVar5 == 84)
		{
			iVar1 = 85;
			iVar2 = 1;
		}
		else if (iVar5 == 97)
		{
			if (func_320((*Global_1835011)[6]->f_1, 1) && func_320((*Global_1835011)[13]->f_1, 1))
			{
				iVar1 = 112;
				iVar2 = 1;
				bVar3 = false;
				if (bParam1)
				{
					if (func_462(iVar1, iVar2, bVar3, 0, 0))
					{
					}
					else
					{
						func_463(iVar1, iVar2, bVar3);
					}
				}
				else
				{
					func_464(iVar1, iVar2, bVar3);
				}
			}
			iVar1 = -1;
		}
		else if (iVar5 == 114)
		{
			if (func_320((*Global_1835011)[9]->f_1, 1))
			{
				iVar1 = 0;
				iVar2 = 1;
			}
		}
		else if (iVar5 == 134)
		{
			iVar1 = 95;
			if (bParam1)
			{
				if (func_462(iVar1, iVar2, bVar3, 0, 0))
				{
				}
				else
				{
					func_463(iVar1, iVar2, bVar3);
				}
			}
			else
			{
				func_464(iVar1, iVar2, bVar3);
			}
			iVar1 = 138;
		}
	}
	if (iVar1 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (func_462(iVar1, iVar2, bVar3, 0, 0))
		{
		}
		else
		{
			func_463(iVar1, iVar2, bVar3);
		}
	}
	else
	{
		func_464(iVar1, iVar2, bVar3);
	}
}

bool func_175(bool bParam0)
{
	if (!func_449(26) && bParam0)
	{
		if (get_is_waypoint_recording_loaded(sLocal_59))
		{
			use_waypoint_recording_as_assisted_movement_route(sLocal_59, 1, 0.05f, 1f, 0);
			func_450(26, 1);
		}
	}
	else if (func_449(26) && !bParam0)
	{
		use_waypoint_recording_as_assisted_movement_route(sLocal_59, 0, 1f, 0.5f, 1);
		func_450(26, 0);
	}
	return func_449(26);
}

void func_176()
{
	_0x216bc0d3d2e413d2(player_id(), 0);
	_0xc6366a585659d15c(player_id(), 0);
	_0x98cd760de43b612e(player_id(), 0);
}

void func_177(var uParam0)
{
	if (uParam0->f_3)
	{
		if (func_10(uParam0->f_5))
		{
			func_11(&(uParam0->f_5), 1, 1);
		}
		if (func_10(uParam0->f_6))
		{
			func_11(&(uParam0->f_6), 1, 1);
		}
		*uParam0 = 0;
		uParam0->f_1 = 0;
		uParam0->f_9 = 0;
		uParam0->f_11 = 0;
		uParam0->f_12 = 0;
		uParam0->f_10 = 0;
		uParam0->f_16 = 0f;
		uParam0->f_17 = 0f;
		uParam0->f_7 = "";
		uParam0->f_8 = "";
		uParam0->f_3 = 0;
		uParam0->f_4 = 0;
		uParam0->f_13 = -1;
		if (uParam0->f_2 != 0)
		{
			animpostfx_stop("MissionChoice");
		}
		uParam0->f_2 = 0;
		_0x9428447ded71fc7e("player_decision_moment_scenes");
		_uiprompt_clear_horizontal_orientation(uParam0->f_15);
	}
}

int func_178(bool bParam0)
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

void func_179()
{
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (_is_tracked_point_valid(&(iLocal_1811[iVar0])))
		{
			destroy_tracked_point(&(iLocal_1811[iVar0]));
		}
		iVar0++;
	}
}

int func_180(int iParam0)
{
	return iParam0;
}

void func_181(int iParam0)
{
	if (!func_473(iParam0))
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
	iVar0 = func_474(iParam0);
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
	return func_476(func_475(iParam0));
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
		if (func_477())
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
			return func_478(iVar0);
		case 8:
			iVar1 = func_265(iParam0);
			if (func_294((*Global_1347702)[iVar1]->f_12, 1))
			{
				return func_479(iVar1);
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
		func_480(iVar0, Global_1898077->f_12);
	}
	else
	{
		Global_1898077->f_1 = 0;
		Global_1898077->f_7 = iVar0;
		Global_1898077->f_8 = func_481();
		Global_1898077->f_9 = func_482(Global_1894899->f_2);
		func_483(Global_1898077->f_7, Global_1898077->f_8, Global_1898077->f_9);
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
	func_484(iParam0, iParam1);
}

int func_196(int iParam0)
{
	return &(Global_1898164->f_1[iParam0]);
}

int func_197(bool bParam0)
{
	if (!bParam0 && func_485(373691918))
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
	if (func_486(iParam0))
	{
		if (bParam1)
		{
			func_487(-525676072);
		}
		else
		{
			func_488(-525676072);
		}
	}
}

int func_200(int iParam0)
{
	return func_490(func_489(iParam0));
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
	return func_491(_0xc17f69e1418cd11f(3));
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
	if (!func_492(iParam0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if ((*Global_40.f_11206[iParam0])[iVar0]->f_3 == iParam1)
		{
			func_493(iParam0, (*Global_40.f_11206[iParam0])[iVar0]);
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
		func_494(sParam0, 1);
		return true;
	}
	if (bParam1)
	{
		if (sParam0->f_9 == 17 || sParam0->f_9 == 19)
		{
			set_audio_flag(sParam0, true);
			func_494(sParam0, 1);
			return false;
		}
		if (sParam0->f_9 == 18 || sParam0->f_9 == 20)
		{
			set_audio_flag(sParam0, false);
			func_494(sParam0, 1);
			return false;
		}
	}
	else
	{
		if (sParam0->f_9 == 10 || sParam0->f_9 == 12)
		{
			set_audio_flag(sParam0, true);
			func_494(sParam0, 1);
			return false;
		}
		if (sParam0->f_9 == 11 || sParam0->f_9 == 13)
		{
			set_audio_flag(sParam0, false);
			func_494(sParam0, 1);
			return false;
		}
	}
	if (!is_string_null_or_empty(sParam0))
	{
		trigger_music_event(sParam0);
		func_494(sParam0, 1);
		return true;
	}
	func_494(sParam0, 1);
	return false;
}

bool func_212(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_213(var uParam0)
{
	func_495(uParam0, 0f);
}

int func_214(var uParam0)
{
	if (!func_26(uParam0))
	{
		return round((uParam0->f_1 * 1000f));
	}
	if (func_496(uParam0))
	{
		return round((uParam0->f_2 * 1000f));
	}
	return (func_497() - round((uParam0->f_1 * 1000f)));
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
		func_498(0);
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
	if (iParam0 == iLocal_16)
	{
		Var0 = { func_499(7, 0) };
	}
	else if (iParam0 == iLocal_17)
	{
		Var0 = { func_499(7, 1) };
	}
	else if (iParam0 == iLocal_18)
	{
		Var0 = { -322.6479f, -356.9647f, 87.0217f };
		Var0.f_3 = 207.2306f;
	}
	else if (iParam0 == iLocal_19)
	{
		Var0 = { -369.9883f, -442.89f, 79.0767f };
		Var0.f_3 = 147.48f;
	}
	else if (iParam0 == iLocal_20)
	{
		Var0 = { -373.757f, -449.2079f, 78.7838f };
		Var0.f_3 = 122.8296f;
	}
	else if (iParam0 == iLocal_21)
	{
		Var0 = { -478.748f, -505.4781f, 56.2533f };
		Var0.f_3 = 83.5251f;
	}
	else if (iParam0 == iLocal_22)
	{
		Var0 = { func_499(7, 6) };
	}
	else if (iParam0 == iLocal_23)
	{
		Var0 = { -574.6082f, -464.9856f, 79.0492f };
		Var0.f_3 = 113.1804f;
	}
	else if (iParam0 == iLocal_24)
	{
		Var0 = { func_499(7, 8) };
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
		cVar0 = func_110(func_500(iParam0));
		_0x8ec7890d446bd9c1(&cVar0, 0, Global_1572864->f_9);
	}
	else if (func_188(iParam0) == 8)
	{
		cVar0 = func_502(func_501(iParam0));
		_0x8ec7890d446bd9c1(&cVar0, 0, Global_1572864->f_9);
	}
	func_503(1, 1);
	func_504(1, Param1, Param1.f_3);
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
	func_494(sParam0, 2);
}

void func_221(int iParam0, int iParam1)
{
	if (!func_505(iParam0))
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
	return func_506(get_id_of_this_thread());
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
	func_507(bParam0);
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
	if (!func_508(iParam0))
	{
		return;
	}
	(*Global_1310750)[iParam0]->f_46 = 0;
}

void func_235()
{
	func_509(64);
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
		return func_510(&(Global_1109400->f_4), iVar0, 5);
	}
	if (iParam1 == func_511())
	{
		return func_510(&(Global_1109400->f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (&Global_1225639->f_21[iParam1])
	{
		return func_510(&((*Global_1108178)[iParam1]->f_4), iVar0, 5);
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
	if (func_512(uParam0, 1) || func_512(uParam0, 2))
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
	if (!func_513(iParam0))
	{
		return false;
	}
	if (!func_514(iParam0))
	{
		return false;
	}
	return (*Global_1360165)[iParam0]->f_129 == get_id_of_this_thread();
}

void func_252(char[4] cParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (!func_513(iParam1))
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
		func_515(cParam0, iParam2);
		func_516(iParam2);
	}
	func_517(iParam1);
	func_518(iParam1, 0);
	func_519(iParam1, 0, bParam4, bParam5, -1082130432, 1, 1, 0, 0, 0, 0);
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
	func_520(iParam0);
	if (func_521(iParam0))
	{
		if (func_255(iParam0) != iVar0)
		{
			return;
		}
	}
	func_522(iParam0);
	func_523(iParam0);
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
			if (!func_524(iVar2))
			{
				set_ped_model_is_suppressed(iVar2, false);
			}
		}
		func_525(iParam0);
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
	if (!func_526(iParam0))
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
	func_520(iVar0);
	iVar1 = get_id_of_this_thread();
	iVar2 = func_255(iVar0);
	if (!bParam1)
	{
		if (iVar1 != iVar2)
		{
			return;
		}
		if (!func_521(iVar0))
		{
			return;
		}
	}
	func_527(iVar0);
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
	if (func_528(0))
	{
		func_529(0);
	}
	if (func_528(1))
	{
		func_529(1);
	}
	if (func_528(5))
	{
		func_529(5);
	}
	if (func_528(6))
	{
		func_522(6);
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
	return func_530(func_475(iParam0));
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
	iVar0 = func_531(iParam0);
	if (_uilog_is_entry_registered(iVar0, func_532(iParam0)))
	{
		_uilog_remove_entry(iVar0, func_532(iParam0));
	}
	if (bParam1)
	{
		if (iVar0 == 1)
		{
			if (_uilog_is_entry_registered(2, func_532(iParam0)))
			{
				_uilog_remove_entry(2, func_532(iParam0));
			}
		}
	}
	func_533(iParam0, 4);
	func_533(iParam0, 8);
	func_533(iParam0, 16);
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
	if (!_uilog_is_entry_registered(func_531(iParam0), func_532(iParam0)))
	{
		return;
	}
	if (bParam1)
	{
		_uilog_mark_entry_availability(func_531(iParam0), func_532(iParam0), 2, "");
		func_534(iParam0, 16);
	}
	else
	{
		if (func_267(iParam0, 8))
		{
			_uilog_mark_entry_availability(func_531(iParam0), func_532(iParam0), 1, "");
		}
		else
		{
			_uilog_mark_entry_availability(func_531(iParam0), func_532(iParam0), 0, "");
		}
		func_533(iParam0, 16);
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
	if (!_uilog_is_entry_registered(func_531(iParam0), func_532(iParam0)))
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
			_uilog_mark_entry_availability(func_531(iParam0), func_532(iParam0), 1, "");
		}
		func_534(iParam0, 8);
	}
	else
	{
		if (func_267(iParam0, 16))
		{
		}
		else
		{
			_uilog_mark_entry_availability(func_531(iParam0), func_532(iParam0), 0, "");
		}
		func_533(iParam0, 8);
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
	if (func_528(0))
	{
		if (func_535(0))
		{
			func_536(0);
		}
	}
	if (func_528(1))
	{
		if (func_535(1))
		{
			func_536(1);
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
		if (func_425(cParam0, 0, cParam0->f_5413, cParam0->f_5413.f_1, cParam0->f_5413.f_2, cParam0->f_5416, 1, 1, 1))
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
		func_537(iParam0, sParam4, iParam5);
	}
	func_538(iParam0, bParam1, fParam2, iParam3, iParam7);
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
	if (func_539(iParam0))
	{
		func_540(iParam0);
	}
	else
	{
		func_541(iParam0);
	}
}

int func_283(int iParam0)
{
	if (func_542(&(Global_1109400->f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

int func_284(int iParam0)
{
	if (func_543(&(Global_1109400->f_4), iParam0, 5))
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
		if (func_544(Global_1310750[iVar0], iParam0))
		{
			if (!func_545(iVar0))
			{
				iVar1 = 1;
			}
			else if (iParam0 == 16777216)
			{
				if (func_546(iVar0) < func_547(iParam1))
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
	fVar0 = func_548();
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
	func_549(iParam0, bParam3, round((fVar0 * fParam2)), round((fVar1 * fParam2)), round((fVar2 * fParam2)), round((fVar3 * fParam2)), bParam4, 1);
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
	if (!bParam0 && func_485(373691918))
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
		if (func_513(iVar17))
		{
			iVar18 = func_550(iVar17);
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
	func_551(&(Global_1359489->f_55));
	if (func_552(1777191912, 1))
	{
		func_553(1777191912, 1, 0);
	}
}

void func_293(int iParam0)
{
	if (!func_183(iParam0))
	{
		return;
	}
	func_555(iParam0, (func_554(iParam0) + shift_left(1, 16)));
}

bool func_294(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_295()
{
	return func_556() > 0;
}

void func_296(int iParam0, int iParam1, bool bParam2)
{
	switch (iParam0)
	{
		case 67:
			func_557(-1032423150, iParam1);
			break;
		case 18:
			func_557(294066959, iParam1);
			func_557(-1925639563, iParam1);
			func_557(-378582304, iParam1);
			func_557(-338306437, iParam1);
			break;
		case 20:
			func_557(437270255, iParam1);
			break;
		case 2:
			func_557(-304000413, iParam1);
			func_557(-533612796, iParam1);
			func_557(48036954, iParam1);
			break;
		case 23:
			func_557(193108691, iParam1);
			func_557(491732588, iParam1);
			func_557(671962088, iParam1);
			func_558(1);
			break;
		case 16:
			func_557(-1836056650, iParam1);
			func_557(-754657922, iParam1);
			func_557(-1752355838, iParam1);
			func_557(-1375324510, iParam1);
			break;
		case 59:
			func_557(-514392105, iParam1);
			func_557(-822060246, iParam1);
			if (func_559(146))
			{
				func_557(1372748575, iParam1);
			}
			func_558(1);
			break;
		case 76:
			func_557(1991352213, iParam1);
			if (func_560() == 0)
			{
				func_557(1852488616, iParam1);
			}
			else
			{
				func_557(-9866350, iParam1);
			}
			break;
		case 44:
			func_557(863852599, iParam1);
			func_557(1228374935, iParam1);
			func_557(1517889050, iParam1);
			func_557(830657578, iParam1);
			func_557(1901354958, iParam1);
			break;
		case 46:
			func_557(-582805654, iParam1);
			func_557(250378940, iParam1);
			func_557(-2143265426, iParam1);
			break;
		case 17:
			func_557(-941494139, iParam1);
			func_557(1641489521, iParam1);
			break;
		case 19:
			func_557(-1829423531, iParam1);
			func_557(-1590504752, iParam1);
			func_557(1357221321, iParam1);
			break;
		case 21:
			func_557(-1037992610, iParam1);
			func_557(-1286414399, iParam1);
			func_558(0);
			break;
		case 15:
			func_557(-1014460309, iParam1);
			func_557(-1030502825, iParam1);
			break;
		case 33:
			func_557(479388090, iParam1);
			func_557(-1396342239, iParam1);
			func_557(-619618632, iParam1);
			break;
		case 34:
			func_557(1193561641, iParam1);
			break;
		case 64:
			func_557(1363960851, iParam1);
			break;
		case 60:
			func_557(-1232453926, iParam1);
			func_557(-882833584, iParam1);
			break;
		case 73:
			func_557(2023205767, iParam1);
			break;
		case 74:
			func_557(-2135286513, iParam1);
			if (func_560() == 0)
			{
				func_557(33799444, iParam1);
			}
			else
			{
				func_557(-161343203, iParam1);
			}
			break;
		case 8:
			func_557(841639693, iParam1);
			func_557(358952323, iParam1);
			break;
		case 36:
			func_557(852538149, iParam1);
			func_557(689020839, iParam1);
			if (&Global_1357515 == 0)
			{
				func_557(-404049058, iParam1);
			}
			else if (&Global_1357515 == 1)
			{
				func_557(1116039310, iParam1);
			}
			break;
		case 27:
			func_557(107633428, iParam1);
			func_557(335902282, iParam1);
			func_557(575673055, iParam1);
			func_557(-425944207, iParam1);
			break;
		case 28:
			func_557(-1941530250, iParam1);
			func_557(1399269304, iParam1);
			func_557(1839684664, iParam1);
			func_557(923168503, iParam1);
			func_557(-1485078322, iParam1);
			break;
		case 29:
			func_557(574995900, iParam1);
			func_557(-1691275407, iParam1);
			func_557(-1725307861, iParam1);
			break;
		case 31:
			func_557(-2108383238, iParam1);
			func_557(-1321828931, iParam1);
			func_557(-1632118592, iParam1);
			func_557(334938948, iParam1);
			break;
		case 4:
			func_557(115823701, iParam1);
			func_557(-1896939736, iParam1);
			func_557(-1830746356, iParam1);
			func_557(-1235169781, iParam1);
			func_558(0);
			break;
		case 6:
			func_557(1801727621, iParam1);
			if (&Global_1357515 == -1)
			{
				func_557(-999872881, iParam1);
			}
			else if (&Global_1357515 == 0)
			{
				func_557(-1227289741, iParam1);
			}
			else if (&Global_1357515 == 1)
			{
				func_557(-384176140, iParam1);
			}
			break;
		case 25:
			func_557(1056132658, iParam1);
			break;
		case 24:
			if (&Global_1357515 == -1)
			{
				func_557(1343889751, iParam1);
			}
			else if (&Global_1357515 == 0)
			{
				func_557(-948326001, iParam1);
			}
			else if (&Global_1357515 == 1)
			{
				func_557(-1374849484, iParam1);
			}
			break;
		case 48:
			func_557(-1632856601, iParam1);
			if (&Global_1357515 == -1)
			{
				func_557(217772674, iParam1);
			}
			else
			{
				func_557(2071798160, iParam1);
			}
			if (func_561(51))
			{
				func_557(-792802286, iParam1);
			}
			break;
		case 49:
			func_557(-1972727021, iParam1);
			if (&Global_1357515 == 0)
			{
				func_557(-1444030885, iParam1);
			}
			else if (&Global_1357515 == 1)
			{
				func_557(-1272255787, iParam1);
			}
			else if (&Global_1357515 == 2)
			{
				func_557(1402120602, iParam1);
			}
			break;
		case 58:
			func_557(-1661934591, iParam1);
			break;
		case 50:
			func_557(-1713759426, iParam1);
			break;
		case 52:
			func_557(-314799932, iParam1);
			func_557(-462260432, iParam1);
			func_557(822929377, iParam1);
			if (bParam2 == 1)
			{
				func_557(345256028, iParam1);
				func_557(-1635084094, iParam1);
			}
			else
			{
				func_557(114267347, iParam1);
			}
			break;
		case 32:
			func_557(615304157, iParam1);
			break;
		case 47:
			func_557(415434835, iParam1);
			break;
		case 69:
			func_557(1373465877, iParam1);
			if (func_320((*Global_1347702)[9]->f_15, 1))
			{
				func_557(-2058273527, iParam1);
			}
			break;
		case 70:
			func_557(451334985, iParam1);
			if (func_560() == 0)
			{
				func_557(-224150200, iParam1);
			}
			else
			{
				func_557(289012628, iParam1);
			}
			break;
		case 71:
			if (func_560() == 0)
			{
				func_557(-41692120, iParam1);
			}
			else
			{
				func_557(1537840678, iParam1);
			}
			break;
		case 37:
			func_557(1520478365, iParam1);
			break;
		case 9:
			if (&Global_1357515 == -1)
			{
				func_557(1842132550, iParam1);
			}
			else
			{
				func_557(-785735240, iParam1);
			}
			func_557(-1605690566, iParam1);
			break;
		case 13:
			func_557(-731367459, iParam1);
			func_557(224176585, iParam1);
			func_557(-14545580, iParam1);
			break;
		case 53:
			func_557(1095274522, iParam1);
			break;
		case 54:
			func_557(-572027988, iParam1);
			break;
		case 56:
			func_557(1339307101, iParam1);
			func_557(2102267732, iParam1);
			break;
		case 57:
			func_557(710102686, iParam1);
			break;
		case 22:
			func_557(-1754368482, iParam1);
			func_557(-2071408557, iParam1);
			break;
		case 12:
			func_557(-181334543, iParam1);
			break;
		case 0:
			func_557(-2134669864, iParam1);
			func_557(-548289709, iParam1);
			func_557(-911271922, iParam1);
			func_557(-604455775, iParam1);
			break;
		case 1:
			func_558(1);
			break;
		case 3:
			if (func_331())
			{
				if (_journal_can_write_entry(-1478534115))
				{
					func_557(-1286192062, iParam1);
				}
			}
			else if (_journal_can_write_entry(-1286192062))
			{
				func_557(-1478534115, iParam1);
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
			func_557(-145926707, iParam1);
			func_557(-604922090, iParam1);
			func_557(-848690769, iParam1);
			break;
		case 1:
			func_557(-1477631591, iParam1);
			break;
		case 2:
			func_557(76112544, iParam1);
			break;
		case 9:
			func_557(1396404308, iParam1);
			func_557(-1357381228, iParam1);
			if (func_320((*Global_1835011)[69]->f_1, 1))
			{
				func_557(1902679064, iParam1);
			}
			else
			{
				func_557(-2146422425, iParam1);
			}
			break;
		case 22:
			func_557(-1534761730, iParam1);
			break;
		case 26:
			if (bParam3 == 1)
			{
				func_557(-1934184559, iParam1);
				func_557(1281755988, iParam1);
			}
			else
			{
				func_557(-1745220872, iParam1);
				func_557(-1044976796, iParam1);
			}
			break;
		case 29:
			if (bParam3 == 1)
			{
				func_557(-1641504538, iParam1);
				func_557(-988014485, iParam1);
			}
			else if (func_559(26))
			{
				func_557(-343043950, iParam1);
				func_557(-640062214, iParam1);
			}
			else
			{
				func_557(-1272028496, iParam1);
			}
			break;
		case 32:
			if (bParam3 == 1)
			{
				if (&Global_1357515 == -1)
				{
					func_557(-1816782797, iParam1);
				}
				else if (&Global_1357515 == 0)
				{
					func_557(-176175898, iParam1);
				}
				else if (&Global_1357515 == 1)
				{
					func_557(1711460080, iParam1);
				}
				else if (&Global_1357515 == 2)
				{
					func_557(-2108576508, iParam1);
				}
				else if (&Global_1357515 == 3)
				{
					func_557(-1103692224, iParam1);
				}
				else if (&Global_1357515 == 4)
				{
					func_557(1301690984, iParam1);
				}
			}
			else
			{
				func_557(699457343, iParam1);
				if (&Global_1357515 == -1)
				{
					func_557(-908444626, iParam1);
				}
				else if (&Global_1357515 == 0)
				{
					func_557(-1475448104, iParam1);
				}
				else if (&Global_1357515 == 1)
				{
					func_557(1727640249, iParam1);
				}
				else if (&Global_1357515 == 2)
				{
					func_557(-2050867743, iParam1);
				}
				else if (&Global_1357515 == 3)
				{
					func_557(-996445915, iParam1);
				}
				else if (&Global_1357515 == 4)
				{
					func_557(-1868882771, iParam1);
				}
			}
			break;
		case 35:
			if (bParam3 == 1)
			{
				func_557(-754570528, iParam1);
			}
			else
			{
				func_557(1690083163, iParam1);
			}
			break;
		case 36:
			if (bParam3 == 1)
			{
				func_557(-2072125821, iParam1);
			}
			else
			{
				func_557(270040030, iParam1);
			}
			break;
		case 37:
			func_557(-870030001, iParam1);
			break;
		case 53:
			if (bParam3 == 1)
			{
				func_557(-505314737, iParam1);
				func_557(-1853052860, iParam1);
			}
			else
			{
				func_557(-1975624994, iParam1);
				func_557(1648135852, iParam1);
			}
			break;
		case 54:
			if (bParam3 == 1)
			{
				func_557(1690231002, iParam1);
			}
			else
			{
				func_557(517031924, iParam1);
			}
			break;
		case 55:
			if (bParam3 == 1)
			{
				func_557(1225386280, iParam1);
			}
			else if (func_559(54))
			{
				func_557(-283235773, iParam1);
			}
			else
			{
				func_557(701962369, iParam1);
			}
			break;
		case 38:
			if (bParam3 == 1)
			{
				func_557(1355398007, iParam1);
			}
			else
			{
				func_557(-1900349467, iParam1);
			}
			break;
		case 39:
			if (bParam3 == 1)
			{
				func_557(574636806, iParam1);
			}
			else
			{
				func_557(-196256251, iParam1);
			}
			break;
		case 40:
			if (bParam3 == 1)
			{
				func_557(821118338, iParam1);
			}
			else if (func_559(39))
			{
				func_557(846829260, iParam1);
			}
			else
			{
				func_557(-1212247553, iParam1);
			}
			break;
		case 43:
			if (bParam3 == 1)
			{
				if (func_354((*Global_1835011)[33]->f_1) == 1)
				{
					func_557(1422779093, iParam1);
				}
				else
				{
					func_557(-1769536986, iParam1);
				}
			}
			else
			{
				func_557(-600786233, iParam1);
			}
			break;
		case 45:
			if (bParam3 == 1)
			{
				func_557(352134789, iParam1);
			}
			else if (func_559(43))
			{
				func_557(260723113, iParam1);
			}
			else
			{
				func_557(1080243038, iParam1);
			}
			break;
		case 41:
			if (bParam3 == 1)
			{
				func_557(-457958799, iParam1);
			}
			else
			{
				func_557(2076458086, iParam1);
			}
			break;
		case 42:
			if (func_559(41))
			{
				func_557(-546824600, iParam1);
			}
			else
			{
				func_557(-308364587, iParam1);
			}
			break;
		case 49:
			if (bParam3 == 1)
			{
				func_557(1297261593, iParam1);
			}
			else
			{
				func_557(1940089142, iParam1);
			}
			break;
		case 50:
			if (bParam3 == 1)
			{
				func_557(2068484886, iParam1);
			}
			else if (func_559(49))
			{
				func_557(-1489080639, iParam1);
				func_557(-2102244050, iParam1);
			}
			else
			{
				func_557(-1863040467, iParam1);
			}
			break;
		case 51:
			func_557(-2055943209, iParam1);
			break;
		case 58:
			if (func_320((*Global_1347702)[23]->f_15, 1))
			{
				func_557(1650066845, iParam1);
			}
			else
			{
				func_557(151370023, iParam1);
			}
			func_557(1426057961, iParam1);
			func_557(476379584, iParam1);
			break;
		case 59:
			func_557(-1638117866, iParam1);
			break;
		case 62:
			func_557(199541730, iParam1);
			break;
		case 63:
			func_557(1703485804, iParam1);
			func_557(-800449045, iParam1);
			break;
		case 65:
			func_557(-1678210868, iParam1);
			func_557(-1448238026, iParam1);
			func_557(-1200864845, iParam1);
			func_557(1473511536, iParam1);
			break;
		case 66:
			func_557(-1774490051, iParam1);
			func_557(-34645921, iParam1);
			func_557(174027075, iParam1);
			func_557(-1155999, iParam1);
			func_558(1);
			break;
		case 67:
			func_557(701612593, iParam1);
			func_557(-1069631343, iParam1);
			func_557(1673428882, iParam1);
			break;
		case 68:
			func_557(-739133286, iParam1);
			func_557(-2130089358, iParam1);
			func_557(2056190391, iParam1);
			func_557(1941753817, iParam1);
			func_558(0);
			break;
		case 70:
			func_557(-1217555753, iParam1);
			break;
		case 71:
			func_557(697048821, iParam1);
			break;
		case 73:
			func_557(-553148661, iParam1);
			break;
		case 75:
			func_557(1349250531, iParam1);
			break;
		case 77:
			if (bParam3 == 1)
			{
				func_557(1414263863, iParam1);
			}
			else
			{
				func_557(-1772294468, iParam1);
			}
			break;
		case 79:
			if (bParam3 == 1)
			{
				func_557(1835465936, iParam1);
				func_557(523715611, iParam1);
			}
			else if (func_559(78))
			{
				func_557(1420338873, iParam1);
			}
			else
			{
				func_557(-46362051, iParam1);
			}
			break;
		case 80:
			if (bParam3 == 1)
			{
				func_557(10180941, iParam1);
			}
			else if (func_559(79))
			{
				func_557(768420635, iParam1);
			}
			else
			{
				func_557(-1734012650, iParam1);
			}
			break;
		case 85:
			if (bParam3 == 1)
			{
				func_557(-383601523, iParam1);
			}
			else
			{
				func_557(1004812390, iParam1);
			}
			break;
		case 86:
			if (bParam3 == 1)
			{
				func_557(1606472408, iParam1);
			}
			else
			{
				func_557(1405690220, iParam1);
			}
			break;
		case 87:
			if (bParam3 == 1)
			{
				func_557(-203571927, iParam1);
			}
			else
			{
				func_557(640033630, iParam1);
			}
			break;
		case 88:
			if (bParam3 == 1)
			{
				func_557(729886222, iParam1);
			}
			else
			{
				func_557(-158717807, iParam1);
			}
			break;
		case 89:
			if (bParam3 == 1)
			{
				func_557(-714816362, iParam1);
			}
			else
			{
				func_557(1160146336, iParam1);
			}
			break;
		case 92:
			if (bParam3 == 1)
			{
				func_557(-932932179, iParam1);
				func_557(-1458537240, iParam1);
			}
			else
			{
				func_557(-1764383885, iParam1);
				func_557(894349517, iParam1);
			}
			break;
		case 93:
			if (bParam3 == 1)
			{
				func_557(1741466706, iParam1);
			}
			else
			{
				func_557(1405815775, iParam1);
			}
			break;
		case 94:
			func_557(1163067702, iParam1);
			if (&Global_1357515 == -1)
			{
				func_557(1905280979, iParam1);
			}
			else
			{
				func_557(-1966245299, iParam1);
			}
			func_557(721468880, iParam1);
			break;
		case 99:
			func_557(800644248, iParam1);
			break;
		case 101:
			if (bParam3 == 1)
			{
				func_557(1502176860, iParam1);
				if (&Global_1357515 == -1)
				{
					func_557(-1117781095, iParam1);
				}
				else
				{
					func_557(-618709225, iParam1);
				}
			}
			else if (&Global_1357515 == -1)
			{
				func_557(141494548, iParam1);
			}
			else
			{
				func_557(-633957459, iParam1);
			}
			break;
		case 102:
			if (bParam3 == 1)
			{
				func_557(-369525697, iParam1);
			}
			else if (func_559(101))
			{
				func_557(1595015219, iParam1);
			}
			else
			{
				func_557(-321486961, iParam1);
			}
			break;
		case 103:
			func_557(1422724221, iParam1);
			break;
		case 104:
			if (bParam3 == 1)
			{
				func_557(793460477, iParam1);
				func_557(-1610242176, iParam1);
			}
			else if (func_559(103))
			{
				func_557(1830897187, iParam1);
			}
			else
			{
				func_557(1419017828, iParam1);
			}
			break;
		case 105:
			if (bParam3 == 1)
			{
				func_557(1528309077, iParam1);
			}
			else if (func_559(104))
			{
				func_557(1864966105, iParam1);
			}
			else
			{
				func_557(-103336013, iParam1);
			}
			break;
		case 108:
			func_557(1175579551, iParam1);
			break;
		case 109:
			if (bParam3 == 1)
			{
				func_557(-1123227713, iParam1);
				func_557(-889574341, iParam1);
			}
			else
			{
				func_557(2065385917, iParam1);
				func_557(780305039, iParam1);
			}
			break;
		case 110:
			if (bParam3 == 1)
			{
				func_557(-887421691, iParam1);
			}
			else if (func_559(109))
			{
				func_557(-1318117949, iParam1);
			}
			else
			{
				func_557(1632244327, iParam1);
			}
			break;
		case 111:
			if (bParam3 == 1)
			{
				if (&Global_1357515 == 0)
				{
					func_557(284822762, iParam1);
				}
				else
				{
					func_557(-1425017554, iParam1);
				}
			}
			else if (func_559(110))
			{
				if (&Global_1357515 == 0)
				{
					func_557(553087292, iParam1);
				}
				else
				{
					func_557(-1766870331, iParam1);
					func_557(1971788022, iParam1);
				}
			}
			else if (&Global_1357515 == 0)
			{
				func_557(-1980598735, iParam1);
			}
			else
			{
				func_557(-442732098, iParam1);
				func_557(1955756409, iParam1);
			}
			break;
		case 115:
			func_557(394303528, iParam1);
			func_557(-2040171028, iParam1);
			break;
		case 143:
			if (bParam3 == 1)
			{
				func_557(1182403394, iParam1);
			}
			else
			{
				func_557(-2116547899, iParam1);
			}
			break;
		case 144:
			if (bParam3 == 1)
			{
				func_557(924445424, iParam1);
			}
			else
			{
				func_557(1227062271, iParam1);
			}
			break;
		case 117:
			if (bParam3 == 1)
			{
				func_557(430755273, iParam1);
				func_557(-1473879802, iParam1);
			}
			else
			{
				func_557(1121266049, iParam1);
			}
			break;
		case 118:
			if (bParam3 == 1)
			{
				func_557(73885747, iParam1);
			}
			else if (func_559(117))
			{
				func_557(1559707913, iParam1);
			}
			else
			{
				func_557(926897873, iParam1);
			}
			break;
		case 119:
			if (bParam3 == 1)
			{
				func_557(-2103887972, iParam1);
			}
			else if (func_559(118))
			{
				func_557(-435828462, iParam1);
			}
			else
			{
				func_557(-516020583, iParam1);
			}
			break;
		case 121:
			if (bParam3 == 1)
			{
				func_557(2054486196, iParam1);
			}
			else
			{
				func_557(1809320262, iParam1);
			}
			break;
		case 122:
			if (bParam3 == 1)
			{
				func_557(-570086056, iParam1);
			}
			else if (func_559(121))
			{
				func_557(32337856, iParam1);
			}
			else
			{
				func_557(-206811842, iParam1);
			}
			break;
		case 124:
			if (bParam3 == 1)
			{
				func_557(813493663, iParam1);
			}
			else if (func_559(122))
			{
				func_557(-2132763590, iParam1);
			}
			else
			{
				func_557(477901035, iParam1);
			}
			break;
		case 125:
			if (bParam3 == 1)
			{
				func_557(-66240572, iParam1);
				func_557(1563075046, iParam1);
			}
			else
			{
				func_557(-787011772, iParam1);
				func_557(-1523377438, iParam1);
			}
			break;
		case 127:
			func_557(61020800, iParam1);
			break;
		case 129:
			func_557(428985222, iParam1);
			break;
		case 131:
			func_557(-1393851036, iParam1);
			break;
		case 133:
			func_557(1559531342, iParam1);
			break;
		case 134:
			func_557(-718846442, iParam1);
			break;
		case 135:
			if (bParam3 == 1)
			{
				if (&Global_1357515 == -1)
				{
					func_557(-1374407408, iParam1);
				}
				else
				{
					func_557(471210931, iParam1);
				}
			}
			else if ((_journal_can_write_entry(1732474719) && _journal_can_write_entry(801682048)) && _journal_can_write_entry(-1986404392))
			{
				if (&Global_1357515 == -1)
				{
					func_557(-472672138, iParam1);
				}
				else
				{
					func_557(-2132098614, iParam1);
				}
			}
			else if (&Global_1357515 == -1)
			{
				func_557(-1678710489, iParam1);
			}
			else
			{
				func_557(1522210661, iParam1);
			}
			break;
		case 136:
			if (bParam3 == 1)
			{
				func_557(1717582460, iParam1);
			}
			else
			{
				func_557(343644664, iParam1);
			}
			break;
		case 137:
			if (bParam3 == 1)
			{
				func_557(1568112362, iParam1);
				func_557(1388317526, iParam1);
			}
			else if (func_559(136))
			{
				func_557(-1597534828, iParam1);
				func_557(-1207918353, iParam1);
			}
			else
			{
				func_557(-1940891082, iParam1);
				func_557(-598277294, iParam1);
			}
			break;
		case 142:
			if (bParam2 == 1)
			{
				func_557(448334530, iParam1);
				func_557(2145375502, iParam1);
			}
			else
			{
				func_557(-1891994685, iParam1);
			}
			break;
		case 146:
			if (bParam3 == 1)
			{
				if (&Global_1357515 == 1)
				{
					func_557(1159121660, iParam1);
				}
				else if (&Global_1357515 == 0)
				{
					func_557(-1968554187, iParam1);
				}
			}
			else if (&Global_1357515 == 1)
			{
				func_557(841927377, iParam1);
			}
			else if (&Global_1357515 == 0)
			{
				func_557(848633571, iParam1);
			}
			break;
		case 147:
			if (bParam3 == 1)
			{
				func_557(-66616327, iParam1);
			}
			else
			{
				func_557(1978361607, iParam1);
			}
			break;
		case 148:
			if (bParam3 == 1)
			{
				func_557(1862916706, iParam1);
			}
			else if (func_559(147))
			{
				func_557(675105199, iParam1);
			}
			else
			{
				func_557(-1993800776, iParam1);
			}
			break;
		case 149:
			if (bParam3 == 1)
			{
				func_557(174409701, iParam1);
			}
			else if (func_559(148))
			{
				func_557(-1730895475, iParam1);
			}
			else
			{
				func_557(-342396910, iParam1);
			}
			break;
		case 150:
			if (bParam3 == 1)
			{
				func_557(1295237052, iParam1);
			}
			else if (func_559(149))
			{
				func_557(-788577684, iParam1);
			}
			else
			{
				func_557(1527015024, iParam1);
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
			iVar1 = func_500(iParam0);
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
	iVar2 = func_562(iParam0);
	iVar3 = func_563(iParam0);
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
			func_564(iParam0, 1);
			if (func_565(iVar2))
			{
				iVar4 = 0;
				while (iVar4 < 60)
				{
					if (Global_40.f_4283.f_6[iVar4]->f_4 == iVar2 && &Global_40.f_4283.f_6[iVar4] != iParam0)
					{
						func_566(Global_40.f_4283.f_6[iVar4], 1, 0);
					}
					iVar4++;
				}
			}
			if (bParam5)
			{
				if (bParam6)
				{
					func_567(1, iParam0);
				}
				else
				{
					func_568(1, iParam0);
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
		func_569(iParam0, iParam1, bParam2);
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
	if ((Global_36616 && func_570(iParam1)) != 0)
	{
		return;
	}
	iVar0 = func_571(iParam0);
	iVar0 = round((IntToFloat(iVar0) * fParam6));
	if ((((((iParam1 != 1142025875 && iParam1 != 1587891565) && iParam1 != -643014279) && iParam1 != -597116214) && iParam1 != 551416228) && iParam1 != -735200598) && iParam1 != -2010847721)
	{
		func_572(iVar0, 0, iParam0, iParam1, sParam3, iParam4, bParam5, bParam7);
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
			func_573(iVar1, iVar0, iParam0, iParam1, iParam4, bParam5);
		}
		else
		{
			func_572(iVar0, 1, iParam0, iParam1, sParam3, iParam4, bParam5, 0);
		}
	}
}

int func_308(int iParam0)
{
	if (!func_183(iParam0))
	{
		return -1;
	}
	return func_574(func_475(iParam0));
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
		iVar0 = func_575(13);
		(*Global_1898441)[iVar0] = 13;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_WIN2_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_WIN2_COM", 24);
	}
}

bool func_311(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
{
	if (!func_576(iParam0, 0))
	{
		return false;
	}
	if (!func_577(iParam0, iParam1, bParam2, iParam5))
	{
		return false;
	}
	if (!func_578(iParam0, &iVar0, iParam1))
	{
		return false;
	}
	func_579(iParam0, bParam2);
	iVar2 = 0;
	if (func_580(iParam0, 0, 0) == 0)
	{
		if (func_581(iParam0))
		{
			iVar5 = func_582(iParam0);
			iVar6 = func_583(iVar5);
			iVar7 = func_584(iVar6) + 1;
			func_585(iVar5);
			if (func_586(38))
			{
				func_318(483, 0);
			}
			else
			{
				func_318(482, 0);
			}
			if (iVar7 == func_587(iVar6))
			{
				func_311(func_588(iVar6), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				if (func_389() && func_589(4))
				{
					if (func_389() && (func_590(38) || func_586(38)))
					{
						func_592(38, func_588(iVar6), 0, 0, func_591(), 0, -1, 0);
						func_593(2);
					}
					else
					{
						func_592(38, func_588(iVar6), 0, 0, func_591(), 0, -1, 0);
						func_593(1);
					}
				}
			}
			else if (func_389() && func_589(4))
			{
				if (func_389() && (func_590(38) || func_586(38)))
				{
					func_592(38, 0, 0, 0, func_591(), 0, -1, 0);
					func_593(2);
				}
				else
				{
					func_592(38, 0, 0, 0, func_591(), 0, -1, 0);
					func_593(1);
				}
			}
			if (func_389() && func_589(4))
			{
				if (!Global_1914319->f_17376)
				{
					if (func_389() && (func_590(38) || func_586(38)))
					{
						func_594(38, _0x13aaecda43318bfe(-2076669067, iVar6), _0xd52d20b0c76bb26d(-2076669067, iVar6), iVar7, 12, 0, iVar6);
					}
					else
					{
						func_594(38, get_hash_key("toast_log_blips"), get_hash_key("BLIP_RC_COLLECTABLE_CIGCARD"), iVar7, 12, 0, iVar6);
					}
				}
			}
		}
	}
	if (func_595(iParam0) == -1037537535)
	{
		if ((!func_596(iParam0, 866047851) && !func_596(iParam0, -1979000645)) && !func_596(iParam0, 1248798204))
		{
			bVar3 = true;
		}
	}
	if (func_597(iParam0, 8388608) && !func_598(28))
	{
		func_599(28);
	}
	if (!bVar3)
	{
		if (func_596(iParam0, -1588156645))
		{
			bParam2 = true;
			bVar4 = true;
			if (func_600(iParam0) == -1447088266)
			{
				iVar1 = func_602(func_601(iParam0, 1), 0);
				if (is_weapon_valid(iVar1))
				{
					if (func_20() == -1)
					{
						func_603(iVar1);
					}
					if (func_604(0) && func_605(iVar1, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_606(iParam0, iVar0, iParam5);
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
						func_603(iParam0);
					}
					if (func_604(0) && func_605(iParam0, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_606(iVar1, iVar0, iParam5);
						if (!bParam9)
						{
							bParam2 = false;
						}
					}
				}
			}
		}
		else if (func_595(iParam0) == -427144552)
		{
			if (!func_607(iParam0, iParam5, &bParam2, bParam3, bParam4))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_595(iParam0) == 307971639 && func_608(iParam0))
		{
			if (!func_609(iParam0, &iVar0, iParam5))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_596(iParam0, 866047851))
		{
			func_610(iParam0);
		}
		else if (func_596(iParam0, 2000026003))
		{
			func_611(iParam0);
		}
		else if (func_596(iParam0, -103750053))
		{
			func_95(func_612(-1019857971), iVar0);
		}
		else if (iParam0 == 2093098109)
		{
			func_95(func_613(-717883113, 2091222383), iVar0);
		}
		else if (func_596(iParam0, -121341956) && !func_596(iParam0, 606799272))
		{
			if (iParam0 != 191707516 && iParam0 != 1993672959)
			{
				if (func_320((*Global_1835011)[4]->f_1, 1))
				{
					func_318(498, 0);
				}
			}
			if (func_596(iParam0, -2017733358) || func_596(iParam0, -1369131378))
			{
				func_614(iParam0);
			}
		}
		else if (func_596(iParam0, -136654233))
		{
			if (func_596(iParam0, -1021472396))
			{
			}
		}
		else if (func_596(iParam0, -1466706512) && func_596(iParam0, 1147021565))
		{
			func_318(484, 0);
		}
		else if (func_596(iParam0, 1147021565) && func_596(iParam0, -524514947))
		{
		}
		else if (func_596(iParam0, 554195525))
		{
		}
		else if (func_596(iParam0, 589988438))
		{
			if (func_615())
			{
				func_616(1339418451, 0, 1065353216, 1, 0, 0, 0, -1);
				bParam2 = true;
				bVar4 = true;
			}
		}
		else if (func_596(iParam0, 787083290) && func_596(iParam0, 949916894))
		{
			func_617(iParam0);
		}
		else if (func_596(iParam0, -1718133314))
		{
			func_618(iParam0);
		}
		else if (func_596(iParam0, -1738650224))
		{
			func_619(iParam0);
		}
		else if (func_596(iParam0, -1112814642) && func_596(iParam0, 949916894))
		{
			func_620(iParam0);
		}
		else if (iParam0 == -569063887)
		{
			Global_1935496->f_20 = 0;
		}
		else if (func_596(iParam0, 1841149704))
		{
			func_621();
		}
		else if (func_596(iParam0, 606799272))
		{
			func_622(iParam0, iParam1);
			func_623(iParam0);
		}
		else if (func_596(iParam0, -1112814642) && func_596(iParam0, -1697809989))
		{
			func_624(iParam0, 0, 0, 0);
		}
		else if (func_596(iParam0, -2017733358) || func_596(iParam0, -1369131378))
		{
			func_614(iParam0);
		}
		else if (func_596(iParam0, -1921346699))
		{
			if (func_20() != -1)
			{
				return false;
			}
			func_625(iParam0, iParam5, iParam8);
			bParam2 = true;
		}
		else if (func_596(iParam0, 1192444843))
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
		else if (func_596(iParam0, -839724752) && func_597(iParam0, 4))
		{
			if (!func_586(42))
			{
				func_626(iParam0);
			}
		}
		else if (func_596(iParam0, 1399091007))
		{
			func_627(iParam0, &iVar2);
			bParam2 = true;
			bVar4 = true;
		}
		else if (func_596(iParam0, 1248798204))
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
				func_599(24);
				if (&Global_1946804->f_1497.f_1[27] == &Global_1946804->f_57[27])
				{
					func_628(player_ped_id(), -1185145312, 0, 99217379, 1, 1, 1, 0, 1, 0);
				}
				if (func_629(&iVar9, 0))
				{
					func_605(iVar9, 0, 0, bParam4, 3, 0, 752097756, 0);
				}
				break;
			case 1171350303:
				if (func_20() == -1 && &Global_1946804->f_1497.f_1[25] == &Global_1946804->f_57[25])
				{
					func_628(player_ped_id(), 1171350303, 0, 673166414, 1, 1, 1, 0, 1, 0);
				}
				break;
			case -160924582:
				break;
			case 2131771850:
				func_318(415, 0);
				Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
				func_630();
				Global_40.f_11095.f_61 = (Global_40.f_11095.f_61 + 0.1f);
				func_631();
				Global_40.f_11095.f_55 = (Global_40.f_11095.f_55 + 0.1f);
				Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
				Global_40.f_11095.f_56 = (Global_40.f_11095.f_56 + 0.1f);
				Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
				func_632();
				Global_40.f_11095.f_63 = (Global_40.f_11095.f_63 + 0.1f);
				func_633();
				Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
				Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
				Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
				func_634();
				break;
			case -102111672:
				bParam2 = true;
				bVar4 = true;
				break;
			case -1937935584:
				func_635(499813453, 854119837, 0);
				func_636(499813453, 0);
				func_637(1);
				break;
			case 2127812557:
				func_635(499813453, -1292544588, 0);
				func_636(499813453, 0);
				func_637(2);
				break;
			case 808991383:
				func_635(499813453, -1003325394, 0);
				func_636(499813453, 0);
				func_637(4);
				break;
			case 1134518629:
				func_635(666607663, -335460405, 0);
				func_636(666607663, 0);
				func_638(1);
				break;
			case 902940106:
				func_635(666607663, 903797617, 0);
				func_636(666607663, 0);
				func_638(2);
				break;
			case -418174898:
				func_635(666607663, 669728650, 0);
				func_636(666607663, 0);
				func_638(4);
				break;
			case -648114971:
				func_635(-220219788, 1214120047, 0);
				func_636(-220219788, 0);
				func_639(1);
				break;
			case 211153747:
				func_635(-220219788, 655769340, 0);
				func_636(-220219788, 0);
				func_639(2);
				break;
			case -32876996:
				func_635(-220219788, 885316185, 0);
				func_636(-220219788, 0);
				func_639(4);
				break;
			case 1191437462:
				func_635(218622660, -1491419385, 0);
				func_636(218622660, 0);
				func_640(1);
				break;
			case 1119149048:
				func_635(218622660, 1809565830, 0);
				func_636(218622660, 0);
				func_640(2);
				break;
			case 506073827:
				func_635(390004462, -628873767, 0);
				func_636(390004462, 0);
				func_641(1);
				break;
			case -1876986168:
				func_635(390004462, -405421956, 0);
				func_636(390004462, 0);
				func_641(2);
				break;
			case 2142623221:
				func_635(390004462, -1108972386, 0);
				func_636(390004462, 0);
				func_641(4);
				break;
			case 1508215381:
				func_635(6410548, 1053716392, 0);
				func_636(6410548, 0);
				func_642(1);
				break;
			case -888935280:
				func_635(6410548, 806507056, 0);
				func_636(6410548, 0);
				func_642(2);
				break;
			case -1252474566:
				func_635(6410548, 1571925350, 0);
				func_636(6410548, 0);
				func_642(4);
				break;
			case -1465702449:
				func_635(6410548, 1330352282, 0);
				func_636(6410548, 0);
				func_642(8);
				break;
			case -21093309:
				func_644(242, func_643(-21093309), 0);
				break;
			case 204375141:
				func_644(240, func_643(204375141), 0);
				break;
			case -417963070:
				func_644(241, func_643(-417963070), 0);
				break;
			case -1080874779:
			case -755485480:
			case 230530039:
			case 299161628:
				if (get_game_timer() >= (Global_1935689->f_10197 + 60000))
				{
					func_645(594, 1934060482, 1, 1);
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
					func_645(594, 1110018439, 1, 1);
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
					func_645(594, 1408511260, 1, 1);
					Global_1935689->f_10197 = get_game_timer();
				}
				break;
			case -1976480343:
			case -953313786:
			case 730856618:
				if (get_game_timer() >= (Global_1935689->f_10197 + 60000))
				{
					func_645(594, -1228016946, 1, 1);
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
					func_645(595, -103579, 1, 1);
					Global_1935689->f_10197 = get_game_timer();
				}
				break;
			case -1977068039:
			case -399865011:
				if (get_game_timer() >= (Global_1935689->f_10197 + 60000))
				{
					func_645(595, -1531530025, 1, 1);
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
					func_311(func_646(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				else
				{
					func_311(func_647(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				break;
			case -601932535:
				if (func_598(1))
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
		func_648(&iVar10);
		if (!func_649(iVar10, iVar0, iParam5))
		{
			return false;
		}
		else if (!func_604(0))
		{
			return true;
		}
		if (func_595(iParam0) == -1037537535)
		{
			func_650(iParam0);
		}
		if (func_596(iParam0, -1979000645))
		{
			func_651(iParam0);
		}
	}
	else if (iVar2 != 0)
	{
		if (func_604(0))
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
			func_652(iVar2, 0);
		}
	}
	Var35 = { func_653(iParam0) };
	if (_stat_id_is_valid(&Var35))
	{
		_0x6a0184e904cdf25e(&Var35, iVar0);
	}
	func_654(iParam0);
	if (fParam6 > 0f)
	{
		if (func_596(iParam0, -839724752))
		{
			func_655(iParam0, fParam6);
		}
	}
	else if (!bParam2)
	{
		bVar37 = iParam5 == 1248274121;
		func_656(iParam0, iVar0, 0, bVar37, 0);
	}
	return true;
}

void func_312(int iParam0)
{
	if (func_596(iParam0, 1989861793))
	{
		iVar0 = func_657(iParam0, 1697966752);
		if (iVar0 != 0)
		{
			Var3 = { func_658(-1591664384, -1591664384, 0, 0, 0, 0, -1, iVar0, 0) };
			if (func_659(Var3, &iVar1, &iVar2, 0))
			{
				bVar13 = false;
				iVar14 = 0;
				while (iVar14 < iVar2)
				{
					iVar15 = func_660(iVar14, iVar1);
					if (iVar15 != iParam0 && func_576(iVar15, 0))
					{
						if (func_661(iVar15, 0, 0, 1, 0))
						{
							bVar13 = true;
						}
					}
					iVar14++;
				}
				func_662(iVar1);
				if (bVar13)
				{
					func_663(iParam0);
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
	func_664();
	func_665();
	func_666();
	func_667();
	func_668();
	func_669();
	func_670();
}

void func_314(int iParam0)
{
	func_671(iParam0, 1, 1, -142743235, 1);
	if (func_672(iParam0))
	{
		func_673(iParam0, 1, 1);
	}
	bVar3 = false;
	bVar7 = false;
	iVar8 = func_675(func_674(iParam0), 1);
	if (iVar8 >= 39)
	{
		bVar7 = true;
	}
	func_676(-2124052603);
	iVar1 = 0;
	while (iVar1 < 39)
	{
		vVar4.x = &Global_1946804->f_57[iVar1];
		*Global_1946804->f_1616.f_1[iVar1] = { vVar4 };
		Global_1946804->f_1616.f_1[iVar1]->f_2 = (Global_1946804->f_1497.f_1[iVar1]->f_2 || Global_1946804->f_1378.f_1[iVar1]->f_2);
		iVar1++;
	}
	if (func_677() == -2125499975)
	{
		iVar2 = 2020890174;
	}
	else
	{
		iVar2 = 1105329772;
	}
	func_678(&(Global_1946804->f_1616), iVar2, &uVar9, 1, 0, 0, 0);
	func_678(&(Global_1946804->f_1616), 211609491, &uVar9, 1, 0, 0, 0);
	*Global_1946804->f_1616.f_1[8] = { func_679(8, 0) };
	*Global_1946804->f_1616.f_1[9] = { func_679(9, 0) };
	*Global_1946804->f_1616.f_1[0] = { func_679(0, 0) };
	*Global_1946804->f_1616.f_1[2] = { func_679(2, 0) };
	*Global_1946804->f_1616.f_1[3] = { func_679(3, 0) };
	*Global_1946804->f_1616.f_1[1] = { func_679(1, 0) };
	*Global_1946804->f_1616.f_1[5] = { func_679(5, 0) };
	*Global_1946804->f_1616.f_1[6] = { func_679(6, 0) };
	*Global_1946804->f_1616.f_1[7] = { func_679(7, 0) };
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (bVar7)
		{
			iVar8 = 0;
			while (iVar8 < 39)
			{
				if (iParam0 == func_680(iVar8, iVar0))
				{
					func_681(Global_1946804->f_1616.f_1[iVar8], iVar8, iVar0);
				}
				else
				{
					iVar8++;
				}
			}
		}
		else if (iParam0 == func_680(iVar8, iVar0))
		{
			func_681(Global_1946804->f_1616.f_1[iVar8], iVar8, iVar0);
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
		iVar1 = func_680(iVar5, iVar0);
		if (iVar1 == &Global_1946804->f_57[iVar5] || iVar1 == 0)
		{
			if (func_677() == -2125499975 || func_677() == -449205311)
			{
				vVar2.x = -2018863109;
				vVar2.f_1 = 1530758430;
				func_681(&vVar2, iVar5, iVar0);
			}
			else
			{
				vVar2.x = 1734931872;
				vVar2.f_1 = 1155669136;
				func_681(&vVar2, iVar5, iVar0);
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
		iVar0 = func_575(14);
		(*Global_1898441)[iVar0] = 14;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_MUD1_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_MUD1_COM", 24);
	}
}

char[] func_317(int iParam0, bool bParam1)
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
			else if (func_552(403634348, 1))
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
	func_682(iParam0, &iVar0, &iVar1);
	if (!func_683(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_684(iVar0, iVar1);
}

void func_319(int iParam0, bool bParam1, bool bParam2)
{
	iVar0 = func_675(iParam0, 1);
	func_685(Global_1946804->f_1497.f_1[iVar0], 2, 6);
	func_685(Global_1946804->f_1378.f_1[iVar0], 2, 6);
	if (bParam1)
	{
		Global_1946804->f_1497.f_1[iVar0] = &Global_1946804->f_57[iVar0];
		Global_1946804->f_1497.f_1[iVar0]->f_1 = 0;
		*Global_1946804->f_1378.f_1[iVar0] = { *Global_1946804->f_1497.f_1[iVar0] };
		if (bParam2)
		{
			func_686(17, iParam0, 0, 0, 0);
		}
	}
	if (func_20() == -1)
	{
		iVar1 = 0;
		while (iVar1 < 5)
		{
			func_685(Global_26796.f_26[iVar1]->f_1.f_1[iVar0], 2, 6);
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
			func_685(Global_36638.f_45.f_350.f_26[iVar1]->f_1.f_1[iVar0], 2, 6);
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
		iVar0 = func_575(17);
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
		iVar0 = func_575(18);
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
		Var0 = { func_687(iParam1, 1, 0) };
		iParam3 = func_688(Var0.f_4);
		if (iParam3 == -358215195)
		{
			return 0;
		}
	}
	func_689(iParam3);
	return func_628(iParam0, iParam1, iParam2, iParam3, bParam4, bParam5, 1, 0, 1, 0);
}

bool func_324()
{
	return _unlock_is_unlocked(99890643);
}

void func_325(int iParam0)
{
	if (!func_690(iParam0))
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
	if (!func_691(iParam0))
	{
		return false;
	}
	if ((iParam1 == -1 || iParam1 < 0) || iParam1 > 179)
	{
		iParam1 = func_692(iParam0);
	}
	if (iParam1 == -1)
	{
		return false;
	}
	return func_693(Global_40.f_9910[iParam1], 4);
}

void func_327(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	iVar0 = func_694(*iParam0);
	iVar1 = func_695(*iParam0);
	iVar2 = func_696(*iParam0);
	iVar3 = func_697(*iParam0);
	iVar4 = func_698(*iParam0);
	iVar5 = func_699(*iParam0);
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
	iVar6 = func_700(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_700(iVar1, iVar0);
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
	func_701(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_328(int iParam0, int iParam1, bool bParam2)
{
	if (!func_691(iParam0))
	{
		return;
	}
	if (!func_702(iParam1))
	{
		return;
	}
	if (func_703(iParam1, 1))
	{
		return;
	}
	iVar0 = func_692(iParam0);
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
		func_704(Global_40.f_9910[iVar0], 2);
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
		iVar0 = func_575(19);
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
		iVar0 = func_575(20);
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
		iVar0 = func_575(21);
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
		iVar0 = func_575(22);
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
		iVar0 = func_575(24);
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
		iVar0 = func_575(25);
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
		iVar0 = func_575(27);
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
		iVar0 = func_575(28);
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
	if (!func_576(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_595(iParam0);
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
		if (!func_705(iParam0, 1))
		{
			return false;
		}
	}
	return func_580(iParam0, 0, bParam2) >= iParam1;
}

void func_341(int iParam0)
{
	if (func_82(32768))
	{
		return;
	}
	if (iParam0 < 0)
	{
		func_706(_create_var_string(2, "MISSION_COMPLETE_BANK_FEED", absi(iParam0)), "itemtype_textures", get_hash_key("ITEMTYPE_BANK_DEBT"), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
		Global_1879514->f_14 = 1;
		Global_1879514->f_15 = 0;
	}
	else
	{
		func_706(_create_var_string(2, "MISSION_COMPLETE_LOAN_FEED", iParam0), "itemtype_textures", get_hash_key("ITEMTYPE_BANK_DEBT"), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Negative", 0, 1);
		Global_1879514->f_14 = 0;
		Global_1879514->f_15 = 1;
	}
}

void func_342()
{
	_sc_feed_submit_preset_message(2, 16);
	if (is_orbis_version())
	{
		iVar0 = func_575(29);
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
		iVar0 = func_575(26);
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
		iVar0 = func_575(23);
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
		iVar0 = func_575(15);
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
		iVar0 = func_575(16);
		(*Global_1898441)[iVar0] = 16;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_DUT1_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_DUT1_COM", 24);
	}
}

void func_347()
{
	if (func_707() > 1)
	{
		func_708();
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
	return func_709(iParam0, 4, 1);
}

void func_349(int iParam0)
{
	func_710(iParam0, 4, 1);
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
			func_95(func_613(909007663, -587839005), 1);
			iVar0 = func_265(iParam0);
			func_95(func_94(-634848880), 1);
			switch (func_478(iVar0))
			{
				case 0:
					func_95(func_613(909007663, 1325140787), 1);
					break;
				case 1:
					func_95(func_613(909007663, 2101241783), 1);
					break;
				case 2:
					func_95(func_613(909007663, -1296936294), 1);
					break;
				case 3:
					func_95(func_613(909007663, -798388728), 1);
					break;
				case 4:
					func_95(func_613(909007663, -1787586531), 1);
					break;
				case 5:
					func_95(func_613(909007663, -1002834519), 1);
					break;
				case 6:
					func_95(func_613(909007663, -50600144), 1);
					break;
				case 7:
					func_95(func_613(909007663, -348503123), 1);
					break;
				case 8:
					func_95(func_613(909007663, -528798161), 1);
					break;
				default:
					iVar2 = 0;
					break;
			}
			if (iVar0 == 7)
			{
				func_95(func_613(909007663, -406093146), 1);
			}
			if (iVar2 && _0xe824ce7d13fcb35e(get_hash_key(&((*Global_1835011)[iVar0]->f_8))))
			{
				func_95(func_613(909007663, 532323983), 1);
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
					func_95(func_613(909007663, -587839005), 1);
				}
				else
				{
					func_95(func_613(909007663, -2049243343), 1);
				}
			}
			if (func_294((*Global_1347702)[iVar1]->f_12, 1))
			{
				switch (func_479(iVar1))
				{
					case 0:
						func_95(func_613(909007663, 1325140787), 1);
						break;
					case 1:
						func_95(func_613(909007663, 2101241783), 1);
						break;
					case 2:
						func_95(func_613(909007663, -1296936294), 1);
						break;
					case 3:
						func_95(func_613(909007663, -798388728), 1);
						break;
					case 4:
						func_95(func_613(909007663, -1787586531), 1);
						break;
					case 5:
						func_95(func_613(909007663, -1002834519), 1);
						break;
					case 6:
						func_95(func_613(909007663, -50600144), 1);
						break;
					case 7:
						func_95(func_613(909007663, -348503123), 1);
						break;
					case 8:
						func_95(func_613(909007663, -528798161), 1);
						break;
					default:
						iVar2 = 0;
						break;
				}
				if (iVar2 && _0xe824ce7d13fcb35e(get_hash_key(&((*Global_1347702)[iVar1]->f_3))))
				{
					func_95(func_613(909007663, 532323983), 1);
				}
			}
			else if (func_294((*Global_1347702)[iVar1]->f_12, 4))
			{
				if (func_294((*Global_1347702)[iVar1]->f_12, 4194304))
				{
				}
				else if (!func_294((*Global_1347702)[iVar1]->f_12, 512))
				{
					func_95(func_613(909007663, 551192206), 1);
				}
				else
				{
					func_95(func_613(909007663, -406093146), 1);
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
	else if ((func_190(0, 0, 1) || func_711()) || func_129())
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
		if (!_spactionproxy_process_action(uVar4, func_712(&uVar4, &iVar1, &iVar2, &iVar3)))
		{
		}
	else
	{
		}
	}
	if (iVar1 == 1)
	{
		func_713(_create_var_string(2, "SHOP_CATALOGUE_DELIVERY"), _create_var_string(2, "SHOP_CATALOGUE_PURCHASE_RECEIVED_SINGLE", 1), 908516622, -576888982, -2, 0, 0, 0, 0, 1, 1);
	}
	else if (iVar1 > 1)
	{
		func_713(_create_var_string(2, "SHOP_CATALOGUE_DELIVERY"), _create_var_string(2, "SHOP_CATALOGUE_PURCHASE_RECEIVED_PLURAL", iVar1), 908516622, -576888982, -2, 0, 0, 0, 0, 1, 1);
	}
	if (iVar3 > 0)
	{
		func_714(iVar3, 0, 0);
	}
	if (iVar1 > 0)
	{
		func_360(0, -1);
	}
	if (iVar2 > 0)
	{
		func_715("SHOP_CATALOGUE_PURCHASE_FAILED", 10000, 0, 0, 0, 1);
	}
	func_716(1, 0);
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
		func_717(iParam0, iParam1, fParam3, iParam4);
	}
}

int func_354(int iParam0)
{
	if (!func_183(iParam0))
	{
		return -1;
	}
	return func_718(iParam0);
}

int func_355(int iParam0, int iParam1)
{
	if (!func_719(iParam0))
	{
		return 0;
	}
	if (!func_389())
	{
		return 0;
	}
	if (!func_720(iParam0, &iVar0, &iVar1))
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
	if (iVar2 >= func_721())
	{
		iVar2 = func_721();
	}
	iVar5 = func_722(iVar3, iVar4, iParam2);
	if (Global_1572887->f_12 == -1)
	{
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			iVar6 = iVar0;
			if (func_475(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_475(iVar6) == 0)
			{
				return func_723(iVar3, iVar4, iParam2, iVar0, iParam3);
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
			if (func_475(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_475(iVar6) == 0)
			{
				return func_723(iVar3, iVar4, iParam2, iVar0, iParam3);
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
				return func_723(iVar3, iVar4, iParam2, iVar0, 0);
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
			return func_724(1330954593, 0, -1);
		case 1:
			return func_724(1330954593, 0, -1);
		case 2:
			return func_724(1330954593, 0, -1) * 2;
		case 4:
			return func_724(1330954593, 0, -1);
		case 5:
			return func_724(1330954593, 0, -1);
		case 6:
			return func_724(1330954593, 0, -1) * 2;
		case 12:
			return 75000;
		case 8:
			return func_724(1330954593, 0, -1) * 3;
		case 9:
			return func_724(1330954593, 0, -1) * 3;
		case 10:
			return func_724(1330954593, 0, -1) * 3;
		case 11:
			return func_724(1330954593, 0, -1);
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
			cVar0 = (*Global_1835011)[func_500(iParam0)]->f_8;
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
		func_725(&Global_0, 8);
	}
	if (!func_389() || func_20() != -1)
	{
		return;
	}
	func_725(&Global_0, 1);
}

int func_361()
{
	iVar0 = func_726(Global_1879514->f_1);
	if (Global_1425247->f_53)
	{
		return 0;
	}
	if (func_727(iVar0))
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
	vVar0 = { func_728(vParam0, iParam3, iParam4, iParam5, iParam6, 1, iParam7, bParam8, bParam9, bParam10, -1, 1103626240) };
	if (func_390(vVar0))
	{
		vVar0 = { func_728(vParam0, iParam3, iParam4, 0, 1, 1, iParam7, bParam8, 0, 0, -1, 1103626240) };
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
	return func_729(vParam0, iParam3);
}

void func_366()
{
	func_730();
	func_731();
	func_732();
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
	if (!func_733(iParam16, 2))
	{
		if (_get_number_of_references_of_script_with_name_hash(get_hash_key(&(Param0.f_10))) > 0 || func_734(&(Param0.f_10)))
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
			func_735(iParam16);
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
	if (func_491(Global_1935630->f_3))
	{
		return;
	}
	iVar0 = 1;
	Var1.f_2 = 4;
	Var1 = "HUD_PENALTY_SOUNDSET";
	Var1.f_1 = "HUD_FAIL";
	Var1.f_3 = func_736();
	Var1.f_3.f_3 = iVar0;
	if ((!func_737(Global_1347343->f_2) && !func_368(Global_1347343->f_11, 64)) || func_82(32768))
	{
		Var1.f_7 = func_738();
		Var1.f_7.f_3 = iVar0;
	}
	if (!func_368(Global_1347343->f_11, 1024) && !func_82(32768))
	{
		Var1.f_11 = func_739();
		Var1.f_11.f_3 = iVar0;
	}
	if (func_368(Global_1347343->f_11, 8))
	{
		Var1.f_15 = func_740();
		Var1.f_15.f_3 = iVar0;
	}
	if (Global_1347343->f_1 != 2)
	{
		Global_1935630->f_3 = func_741(&Var1, "REPLAY_T", &(Global_1347343->f_3), 0, 1);
	}
	else
	{
		Global_1935630->f_3 = func_742(&Var1, "REPLAY_T_DEAD", 0, 1);
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
	func_743(uParam0);
	iVar0 = func_744(uParam0, iParam1);
	if (bParam3)
	{
		if (is_string_null_or_empty(sParam2))
		{
			sParam2 = func_745(iParam1);
		}
		iVar0 = func_746(uParam0, sParam2);
		if (iVar0 == -1)
		{
			iVar0 = func_747(uParam0);
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
		iVar0 = func_747(uParam0);
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
	func_748(uParam0, 2);
}

void func_373(char[4] cParam0, int iParam1)
{
	func_749(&(cParam0->f_7375), iParam1);
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
	return func_500(func_750());
}

void func_376(char[4] cParam0)
{
	iVar0 = 0;
	while (iVar0 < func_391())
	{
		func_751(cParam0, iVar0);
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
	func_757(cParam0, iLocal_16, iLocal_17, 108836, 108870, 108914, 109185, 109322, "RRVRD_RSC_1", 6218, -1);
	func_757(cParam0, iLocal_17, iLocal_18, 109558, 109633, 109647, 109661, 109670, "REV1_MCS1", 74, -1);
	func_757(cParam0, iLocal_18, iLocal_19, 109679, 109814, 109823, 109990, 110318, "", 72, -1);
	func_757(cParam0, iLocal_19, iLocal_20, 110429, 110507, 110550, 110684, 110880, "", 72, -1);
	func_757(cParam0, iLocal_20, iLocal_21, 110916, 110946, 110955, 111003, 111215, "", 8, -1);
	func_757(cParam0, iLocal_21, iLocal_22, 111245, 111259, 111268, 111323, 111584, "", 72, -1);
	func_757(cParam0, iLocal_22, iLocal_23, 111683, 111761, 111804, 111876, 111985, "", 72, -1);
	func_757(cParam0, iLocal_23, iLocal_24, 112027, 112117, 112185, 112294, 112578, "REV1_MCS3", 2, -1);
	func_757(cParam0, iLocal_24, 26, 112598, 112680, 112719, 112742, 112803, "REV1_EXT", 74, -1);
}

bool func_380(char[4] cParam0, int iParam1, int iParam2)
{
	if (func_163(iParam1, 0))
	{
		if (!_0xa0bc8faed8cfeb3c(&(iLocal_63[iParam1])))
		{
			return false;
		}
		return true;
	}
	if (func_798())
	{
		return false;
	}
	if (!func_799(iParam1, iParam2, &Var0, &iVar4, &iVar5, &iVar6, &cVar7, &cVar11, &cVar12, &iVar13) && iParam1 != 3)
	{
		return false;
	}
	if (iVar5 != -1)
	{
		func_800(cParam0, iVar5, iLocal_63[iParam1], 0, Var0, Var0.f_1, Var0.f_2, Var0.f_3, 1, iVar13, 0, 0, 0, 0);
	}
	else if (iParam1 == 3)
	{
		if (func_425(cParam0, 1, Var0, Var0.f_1, Var0.f_2, Var0.f_3, 1, 1, 1))
		{
			iLocal_63[iParam1] = func_253(cParam0);
		}
	}
	else
	{
		bVar14 = iVar6 == 41788943;
		iLocal_63[iParam1] = func_801(iVar4, Var0, Var0.f_3, 0, 1, 0, 1, 1, bVar14, 0, 0, 0, 0);
	}
	if (func_163(iParam1, 1))
	{
		func_802();
		func_803(cParam0, iParam1, iVar6, cVar7, cVar11, cVar12);
	}
	return false;
}

void func_381(char[4] cParam0)
{
	if (!is_itemset_valid(Global_43616))
	{
		return;
	}
	iVar14 = get_itemset_size(Global_43616);
	iVar15 = 0;
	while (iVar15 < iVar14)
	{
		iVar16 = get_indexed_item_in_itemset(iVar15, Global_43616);
		iVar17 = _get_entity_from_item(iVar16);
		if (is_entity_a_ped(iVar17))
		{
			iVar18 = get_ped_index_from_entity_index(iVar17);
			iVar19 = func_804(iVar18);
			if (iVar19 != -1)
			{
				iLocal_63[iVar19] = iVar18;
				if (!_0x88ad6cc10d8d35b2(iVar17))
				{
					set_entity_as_mission_entity(iVar17, true, true);
				}
				if (!func_799(iVar19, func_33(cParam0), &uVar0, &uVar4, &uVar5, &iVar6, &cVar7, &cVar11, &cVar12, &uVar13) && iVar19 != 3)
				{
					return;
				}
				func_803(cParam0, iVar19, iVar6, cVar7, cVar11, cVar12);
			}
		}
		else if (is_entity_an_object(iVar17))
		{
			iVar20 = get_object_index_from_entity_index(iVar17);
			iVar21 = func_805(iVar20);
			if (iVar21 != -1)
			{
				iLocal_97[iVar21] = iVar20;
				if (!_0x88ad6cc10d8d35b2(iVar17))
				{
					set_entity_as_mission_entity(iVar17, true, true);
				}
			}
		}
		iVar15++;
	}
}

struct<4> func_382(int iParam0, int iParam1)
{
	func_799(iParam0, iParam1, &Var0, &uVar4, &uVar5, &uVar6, &cVar7, &uVar11, &uVar12, &uVar13);
	return Var0;
}

void func_383(char[4] cParam0, vector3 vParam1)
{
	cParam0->f_5413 = { vParam1 };
}

void func_384(int iParam0, int iParam1)
{
	uVar0 = Global_1905944[iParam0];
	clear_bit(&uVar0, iParam1);
	(*Global_1905944)[iParam0] = uVar0;
}

bool func_385(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_386(var uParam0)
{
	if (!func_806(uParam0, 4))
	{
		if (func_807(uParam0->f_860, 16384))
		{
			animpostfx_play("CamTransition01");
		}
		vVar0 = { func_808(uParam0) };
		if (!func_807(uParam0->f_860, 524288))
		{
			func_809(&(uParam0->f_872));
		}
		func_810(&(uParam0->f_860), 0, 2, vVar0.x, vVar0.y, vVar0.z, 0);
		func_811(uParam0, 0f, 0f, 0f);
		func_812(uParam0);
		func_813(uParam0);
		func_814(uParam0, 0f, 0f, 0f, 0, 0);
		func_815(uParam0);
		func_749(uParam0, 4);
		func_816(uParam0, 0);
		func_817(&(Global_1946804->f_1497), Global_35, 1, 64, 1, 1, 1);
		if (_0x927b810e43e99932(&(uParam0->f_873)))
		{
			_0x0a5a4f1979abb40e(&(uParam0->f_873));
		}
	}
}

Vector3 func_387(int iParam0)
{
	if (func_818(iParam0))
	{
		return func_819(iParam0);
	}
	return (*Global_1835011)[iParam0]->f_18;
}

int func_388(vector3 vParam0, var uParam3)
{
	if (_0x1b065a2bf7953815(0) != 1)
	{
		func_503(0, 1);
	}
	else
	{
		return 0;
	}
	iVar0 = func_820(Global_35, 0, 2, 0);
	if (!is_weapon_valid(iVar0))
	{
		iVar0 = func_821(0, 0);
		if (func_690(iVar0))
		{
			set_current_ped_weapon(Global_35, iVar0, true, 2, false, false);
			func_822(1, 0);
		}
	}
	else
	{
		func_822(1, 0);
	}
	func_202(0);
	func_504(0, vParam0, uParam3);
	return 1;
}

bool func_389()
{
	return true;
	if (Global_1572887->f_12 == 0)
	{
		return true;
	}
	return Global_40.f_1;
}

bool func_390(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

int func_391()
{
	return 26;
}

void func_392(int iParam0)
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

void func_393(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 60)
	{
		func_823((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_394(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 40)
	{
		func_824((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_395(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 20)
	{
		func_825((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_396(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 14)
	{
		func_826((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_397(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 60)
	{
		func_827((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_398(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 10)
	{
		func_828((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_399(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
}

void func_400(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 10)
	{
		func_829((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_401(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 3)
	{
		func_830((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_402(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		func_831((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_403(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		func_832((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_404(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		func_833((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_405(char[4] cParam0, int iParam1, int iParam2)
{
	if (func_120(cParam0, 2097152))
	{
		return;
	}
	iVar0 = func_834(&(cParam0->f_638), iParam1);
	if (iVar0 == -1)
	{
		iVar0 = func_835(&(cParam0->f_638));
	}
	if (iVar0 == -1)
	{
		return;
	}
	cParam0->f_638[iVar0] = iParam1;
	cParam0->f_638[iVar0]->f_2 = (cParam0->f_638[iVar0]->f_2 || iParam2);
}

void func_406(char[4] cParam0, char[4] cParam1, int iParam2)
{
	if (func_120(cParam0, 2097152))
	{
		return;
	}
	iVar0 = func_836(&(cParam0->f_1020), cParam1);
	if (iVar0 == -1)
	{
		iVar0 = func_837(&(cParam0->f_1020));
	}
	if (iVar0 == -1)
	{
		return;
	}
	cParam0->f_1020[iVar0] = cParam1;
	cParam0->f_1020[iVar0]->f_2 = (cParam0->f_1020[iVar0]->f_2 || iParam2);
}

void func_407(char[4] cParam0, char[4] cParam1, int iParam2, int iParam3, int iParam4)
{
	if (func_120(cParam0, 2097152))
	{
		return;
	}
	iVar0 = func_838(&(cParam0->f_819), cParam1);
	if (iVar0 == -1)
	{
		iVar0 = func_839(&(cParam0->f_819));
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

char* func_408()
{
	return "script@story@rev1@ig@ig1_witness_chat@ig1_witness_chat";
}

void func_409(char[4] cParam0, char[4] cParam1, var uParam2, int iParam3, int iParam4, char* sParam5, int iParam6, bool bParam7)
{
	if (!func_840(iParam3, func_33(cParam0)) && !func_840(iParam3, func_35(cParam0)))
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
	iVar0 = func_841(&(cParam0->f_1126), cParam1, *uParam2);
	if (iVar0 == -1)
	{
		iVar0 = func_842(&(cParam0->f_1126));
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
		func_843(&(cParam0->f_1126[iVar0]->f_2), 4);
	}
}

char* func_410(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "Pbl_Idle_Long";
		case 1:
			return "Pbl_Idle_Short";
		case 2:
			return "pbl_Weapon_Drawn_ALT";
		case 3:
			return "pbl_Friendly_Approach";
		case 4:
			return "pbl_Response_Lingers/Returns";
		case 5:
			return "pbl_Weapon_Drawn";
		case 6:
			return "pbl_LM_What_the_Hell";
		case 7:
			return "pbl_RM_Whats_Your_Problem";
		case 8:
			return "pbl_LM_Whats_Going_On_Around_Here";
		case 9:
			return "Pbl_RM_Had_Enough_Of_This";
		case 10:
			return "pbl_Aggressive_Approach";
		case 11:
			return "Pbl_AGG_Lingers/Returns";
		case 12:
			return "pbl_AGG_Weapon_Drawn";
		case 13:
			return "pbl_LM_As_Crazy_As_Your_Friend";
		case 14:
			return "pbl_RM_Whats_Wrong_With_You";
		case 15:
			return "pbl_LM_Goddamn_Lunatic";
		case 16:
			return "pbl_RM_Hold_Your_Liquor";
		default:
			break;
	}
	return "";
}

void func_411(char[4] cParam0, int iParam1, char* sParam2, int iParam3)
{
	if (!func_840(iParam3, func_33(cParam0)) && !func_840(iParam3, func_35(cParam0)))
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
	iVar0 = func_844(&(cParam0->f_1126), iParam1);
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

void func_412(char[4] cParam0, char[4] cParam1, int iParam2)
{
	if (func_120(cParam0, 2097152))
	{
		return;
	}
	iVar0 = func_845(&(cParam0->f_1081), cParam1);
	if (iVar0 == -1)
	{
		iVar0 = func_846(&(cParam0->f_1081));
	}
	if (iVar0 == -1)
	{
		return;
	}
	cParam0->f_1081[iVar0] = cParam1;
	cParam0->f_1081[iVar0]->f_2 = (cParam0->f_1081[iVar0]->f_2 || iParam2);
}

void func_413(char[4] cParam0, char[4] cParam1, int iParam2)
{
	if (func_120(cParam0, 2097152))
	{
		return;
	}
	iVar0 = func_847(&(cParam0->f_5286), cParam1);
	if (iVar0 == -1)
	{
		iVar0 = func_848(&(cParam0->f_5286));
	}
	if (iVar0 == -1)
	{
		return;
	}
	cParam0->f_5286[iVar0] = cParam1;
	cParam0->f_5286[iVar0]->f_2 = (cParam0->f_5286[iVar0]->f_2 || iParam2);
}

void func_414(int iParam0, int iParam1)
{
	func_849(iParam0, iParam1);
}

void func_415(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, int iParam12)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_850((*uParam0)[iVar0]))
		{
			if (func_840((*uParam0)[iVar0]->f_2, iParam12))
			{
				func_851((*uParam0)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (func_852((*uParam1)[iVar0]))
		{
			if (func_840((*uParam1)[iVar0]->f_4, iParam12))
			{
				func_853((*uParam1)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam2)
	{
		if (func_854((*uParam2)[iVar0]))
		{
			if (func_840((*uParam2)[iVar0]->f_2, iParam12))
			{
				func_855((*uParam2)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam3)
	{
		if (func_856((*uParam3)[iVar0]))
		{
			if (func_840((*uParam3)[iVar0]->f_2, iParam12))
			{
				func_857((*uParam3)[iVar0]);
			}
		}
		iVar0++;
	}
	if (func_840(uParam4->f_1, iParam12))
	{
		func_858(uParam4);
	}
	iVar0 = 0;
	while (iVar0 < *uParam5)
	{
		if (func_859((*uParam5)[iVar0]))
		{
			if (func_840((*uParam5)[iVar0]->f_3, iParam12))
			{
				func_860((*uParam5)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam5)
	{
		if (func_859((*uParam5)[iVar0]))
		{
			iVar1 = 0;
			while (iVar1 < 20)
			{
				if (func_861((*uParam5)[iVar0]->f_4[iVar1]))
				{
					if (func_840((*uParam5)[iVar0]->f_4[iVar1]->f_2, iParam12))
					{
						func_862((*uParam5)[iVar0]->f_4[iVar1], (*uParam5)[iVar0]->f_1);
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
		if (func_863((*uParam6)[iVar0]))
		{
			if (func_840((*uParam6)[iVar0]->f_3, iParam12))
			{
				func_864((*uParam6)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam7)
	{
		if (func_865((*uParam7)[iVar0]))
		{
			if (func_840((*uParam7)[iVar0]->f_4, iParam12))
			{
				func_866((*uParam7)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam8)
	{
		if (func_867((*uParam8)[iVar0]))
		{
			if (func_840((*uParam8)[iVar0]->f_2, iParam12))
			{
				func_868((*uParam8)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam9)
	{
		if (func_869((*uParam9)[iVar0]))
		{
			if (func_840((*uParam9)[iVar0]->f_2, iParam12))
			{
				func_870((*uParam9)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam10)
	{
		if (func_871((*uParam10)[iVar0]))
		{
			if (func_840((*uParam10)[iVar0]->f_3, iParam12))
			{
				func_872((*uParam10)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam11)
	{
		if (func_873((*uParam11)[iVar0]))
		{
			if (func_840((*uParam11)[iVar0]->f_2, iParam12))
			{
				func_874((*uParam11)[iVar0]);
			}
		}
		iVar0++;
	}
}

void func_416(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	if (is_entity_dead(iParam1))
	{
		return;
	}
	if (func_875(uParam0, iParam1, sParam2))
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

struct<2> func_417()
{
	Var0 = create_itemset(true);
	return Var0;
}

void func_418(var uParam0, float fParam1)
{
	uParam0->f_794 = fParam1;
}

void func_419(var uParam0, float fParam1)
{
	uParam0->f_795 = fParam1;
}

void func_420(char[4] cParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	func_876(&(cParam0->f_7375), iParam1, sParam2, iParam3, iParam4, bParam5);
	func_372(&(cParam0->f_10792), iParam1, sParam2, bParam6);
}

bool func_421(char[4] cParam0, int iParam1, bool bParam2)
{
	iVar0 = 1;
	if (bParam2 && func_23(&(cParam0->f_8269)))
	{
		if (!func_121(cParam0, iParam1, 268435456))
		{
			MemCopy(&cVar1, {func_877(cParam0->f_607)}, 3);
			if (func_878(&(cParam0->f_8269), &cVar1, 0, func_132(iParam1), 1, 0))
			{
				if (func_24(&(cParam0->f_8269)))
				{
					func_879(&(cParam0->f_8269));
				}
				func_140(cParam0, iParam1, 268435456);
			}
			else
			{
				iVar0 = 0;
			}
		}
	}
	if (!func_880(&(cParam0->f_638), &(cParam0->f_819), &(cParam0->f_1020), &(cParam0->f_1081), &(cParam0->f_1124), &(cParam0->f_1126), &(cParam0->f_5147), &(cParam0->f_5188), &(cParam0->f_5239), &(cParam0->f_5249), &(cParam0->f_5265), &(cParam0->f_5286), iParam1))
	{
		iVar0 = 0;
	}
	return iVar0;
}

bool func_422(var uParam0, int iParam1)
{
	iVar1 = 1;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_859((*uParam0)[iVar0]))
		{
			if (func_840((*uParam0)[iVar0]->f_3, iParam1))
			{
				if ((*uParam0)[iVar0]->f_65 > 0f || func_881((*uParam0)[iVar0]->f_2, 4))
				{
					if (!func_882((*uParam0)[iVar0]))
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

int func_423(char[4] cParam0)
{
	return cParam0->f_596;
}

bool func_424(char[4] cParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, int iParam5)
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
	iVar0 = func_883(func_61(cParam0));
	if (!func_29())
	{
		vVar2 = { func_126(cParam0->f_607) };
	}
	if (func_800(cParam0, iVar0, &uVar1, bParam1, vVar2.x, vVar2.y, vVar2.z, 0, bParam2, iParam3, bParam4, iParam5, 1, 0))
	{
		cParam0->f_5408 = uVar1;
		return true;
	}
	return false;
}

bool func_425(char[4] cParam0, bool bParam1, var uParam2, var uParam3, var uParam4, float fParam5, int iParam6, int iParam7, int iParam8)
{
	if (does_entity_exist(cParam0->f_5411))
	{
		if (!func_120(cParam0, 16777216))
		{
			if (!func_884(cParam0))
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
				iVar12 = func_885(&iVar11, &Var0);
				if (iVar11 != 0)
				{
					func_103(cParam0, 16777216);
					if (iVar11 == 2 && !is_entity_dead(iVar12))
					{
						if (iVar12 == cParam0->f_5411)
						{
							func_103(cParam0, 16777216);
						}
						else if (func_886(iVar12, cParam0->f_5411, 5f, 1))
						{
							if (func_887(iVar12))
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
		if (func_888(&iVar17, func_125(cParam0), vVar14, 0f, 0, 0, 1, 1, 1))
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
		iVar13 = func_885(&iVar29, &Var18);
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
		func_889(cParam0, bParam1);
		if (!func_120(cParam0, 256))
		{
			if (!func_120(cParam0, 32768))
			{
				vVar14.x = uParam2;
				vVar14.f_1 = uParam3;
				vVar14.f_2 = uParam4;
				if ((!func_887(iVar13) || func_890(Global_35, iVar13, 1, 1) > 200f) && !func_390(vVar14))
				{
					if (!func_29())
					{
						freeze_entity_position(iVar13, false);
						func_891(iVar13, vVar14, fParam5, 2, 1073741824);
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

void func_426(char[4] cParam0)
{
	if (!func_120(cParam0, 32) && func_128(cParam0, 3))
	{
		if (func_892(cParam0->f_607, &iVar0, &uVar1))
		{
			set_clock_time(iVar0, 0, 0);
			func_103(cParam0, 32);
		}
	}
	if (!func_120(cParam0, 32))
	{
		if (func_893(&(cParam0->f_609), cParam0->f_607))
		{
			func_103(cParam0, 32);
		}
	}
}

void func_427(char[4] cParam0)
{
	if (!func_120(cParam0, 128))
	{
		if (func_120(cParam0, 16384))
		{
			func_894(cParam0);
			if (func_895(cParam0))
			{
				func_51(&(cParam0->f_10792));
				func_896(cParam0, 2097152);
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
			func_894(cParam0);
			MemCopy(&Var0, {func_155(func_61(cParam0))}, 4);
			if (func_897(cParam0, Var0))
			{
				if (func_423(cParam0) != 4)
				{
					do_screen_fade_out(0);
				}
				func_103(cParam0, 128);
			}
		}
		else
		{
			if (func_423(cParam0) != 4)
			{
				do_screen_fade_out(1);
			}
			func_103(cParam0, 128);
		}
	}
}

void func_428(char[4] cParam0, int iParam1)
{
	cParam0->f_596 = iParam1;
}

bool func_429(char[4] cParam0)
{
	iVar0 = 1;
	if (!func_898(cParam0))
	{
		iVar0 = 0;
	}
	if (!func_424(cParam0, func_128(cParam0, 3), !func_8(cParam0, 2097152), cParam0->f_5410, !func_8(cParam0, 32), 0))
	{
		iVar0 = 0;
	}
	if (!func_425(cParam0, 1, cParam0->f_5413, cParam0->f_5413.f_1, cParam0->f_5413.f_2, cParam0->f_5416, 1, 1, 1))
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
		MemCopy(&cVar1, {func_877(cParam0->f_607)}, 3);
		if (func_899(&(cParam0->f_8269), &cVar1, 0, 1, 1))
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
		if (func_900(&(cParam0->f_13115)) < 30f)
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

bool func_430(char[4] cParam0)
{
	bVar0 = (_has_player_teleport_finished(player_id()) || !is_player_teleport_active());
	if (func_900(&(cParam0->f_603)) >= cParam0->f_13144)
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		if (is_player_teleport_active())
		{
			stop_player_teleport();
		}
		if ((func_82(32768) && func_901()) && func_900(&(cParam0->f_603)) < (cParam0->f_13144 + 10f))
		{
			return false;
		}
		if (func_120(cParam0, 8) && is_valid_interior(get_interior_at_coords(func_126(cParam0->f_607))))
		{
			unpin_interior(get_interior_at_coords(func_126(cParam0->f_607)));
			func_258(cParam0, 8);
		}
		_set_milliseconds_per_game_minute(2000);
		func_902(0, 0);
		func_258(cParam0, 4096);
		return true;
	}
	return false;
}

bool func_431(char[4] cParam0)
{
	if (!func_903(cParam0))
	{
		return false;
	}
	if (!func_904(cParam0))
	{
		return false;
	}
	if (!func_905(cParam0))
	{
		return false;
	}
	if (!func_906())
	{
		return false;
	}
	_0x18262cafebb5fbe1(&(iLocal_108[30]), 8192, 0, 0, -1, -1, 0);
	_0x2fcd528a397e5c88(&(iLocal_108[30]), 1064960);
	func_907(-390.4333f, -387.9549f, 84.56979f, 100f, 0, 0);
	_0x2fcd528a397e5c88(&(iLocal_108[11]), 1064960);
	_0xb56d41a694e42e86(&(iLocal_108[16]), 0, 0, 0, -1, -1, 2);
	_0xe5ef9de716ff737e(&(iLocal_108[16]), 0, 0);
	func_908(&(iLocal_108[24]), 0, 0, 0);
	func_909(cParam0);
	func_910(cParam0);
	if (func_33(cParam0) != iLocal_16)
	{
		func_170(0);
	}
	func_911();
	func_165(0);
	func_912(1);
	if (func_33(cParam0) != iLocal_16)
	{
		func_913(cParam0, 1);
	}
	return true;
}

void func_432(char[4] cParam0, int iParam1)
{
	func_66(iParam1);
	cParam0->f_10783 = iParam1;
}

bool func_433(char[4] cParam0)
{
	func_914(cParam0);
	func_915(cParam0);
	iVar0 = func_33(cParam0);
	iVar1 = func_35(cParam0);
	iVar2 = func_162(cParam0, iVar0);
	if (func_8(cParam0, 2097152))
	{
		if (iVar2 == 7 || iVar2 < 3)
		{
			func_895(cParam0);
		}
	}
	func_916(cParam0);
	func_917(cParam0);
	func_918(cParam0);
	func_919(cParam0);
	func_920(cParam0);
	func_921(cParam0);
	if (iVar2 != 5 && iVar2 != 6)
	{
		func_922(cParam0);
	}
	if ((func_33(cParam0) == 0 && iVar2 < 3) && func_272(cParam0) == 0)
	{
		func_427(cParam0);
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
			if (func_923(cParam0, iVar0, 0))
			{
				if (func_924(cParam0, func_33(cParam0)) != -1 && _0x62de46f061caa468() < func_924(cParam0, func_33(cParam0)))
				{
					_0xf008e0ba1fe1d644((func_924(cParam0, func_33(cParam0)) - _0x62de46f061caa468()));
				}
				if ((func_33(cParam0) == 25 || func_33(cParam0) == 26) && func_82(32768))
				{
					func_373(cParam0, 524288);
				}
				if (func_120(cParam0, 4))
				{
					if (!func_8(cParam0, 4))
					{
						func_925(cParam0, iVar0);
						func_99(cParam0, 4);
					}
					func_926(cParam0);
					func_927(cParam0, iVar0, 1);
				}
				else
				{
					func_927(cParam0, iVar0, 1);
				}
			}
			break;
		case 1:
			if (func_898(cParam0))
			{
				if (func_928(cParam0))
				{
					if (func_8(cParam0, 4))
					{
						func_896(cParam0, 4);
					}
					func_927(cParam0, iVar0, 2);
				}
			}
			else if (func_929(cParam0) >= cParam0->f_13144)
			{
				if (func_8(cParam0, 4))
				{
					func_896(cParam0, 4);
				}
				func_927(cParam0, iVar0, 2);
			}
			break;
		case 2:
			if (func_923(cParam0, iVar0, 2))
			{
				if (!func_930(cParam0))
				{
					func_927(cParam0, iVar0, 4);
					if (func_931(cParam0, iVar0, iVar1))
					{
						func_927(cParam0, iVar0, 5);
					}
				}
				else
				{
					func_932(cParam0);
					func_927(cParam0, iVar0, 3);
					if (func_933(cParam0, iVar0))
					{
						func_927(cParam0, iVar0, 4);
						if (func_931(cParam0, iVar0, iVar1))
						{
							func_927(cParam0, iVar0, 5);
						}
					}
				}
			}
			else if (func_934(cParam0))
			{
				func_933(cParam0, iVar0);
			}
			break;
		case 3:
			if (func_933(cParam0, iVar0))
			{
				func_927(cParam0, iVar0, 4);
				if (func_931(cParam0, iVar0, iVar1))
				{
					func_927(cParam0, iVar0, 5);
				}
			}
			break;
		case 4:
			if (func_931(cParam0, iVar0, iVar1))
			{
				func_927(cParam0, iVar0, 5);
			}
			break;
		case 5:
			if (!func_20() == 0)
			{
				func_935(cParam0);
				func_936(cParam0, iVar0);
				func_937(cParam0);
				func_938(cParam0);
				if (func_121(cParam0, iVar1, 2))
				{
					if (func_939(cParam0, iVar1))
					{
						func_940(cParam0, iVar1);
					}
				}
			}
			if (func_923(cParam0, iVar0, 5))
			{
				if (func_923(cParam0, iVar0, 7))
				{
					if (!func_121(cParam0, func_33(cParam0), 67108864))
					{
						func_941(cParam0, func_33(cParam0));
					}
					func_942(cParam0, iVar1);
					func_915(cParam0);
					return true;
				}
				else
				{
					func_927(cParam0, iVar0, 7);
				}
			}
			else
			{
				if (!func_121(cParam0, func_33(cParam0), 4194304))
				{
					if ((!is_screen_faded_in() && !is_screen_fading_in()) && !func_121(cParam0, func_33(cParam0), 16))
					{
						do_screen_fade_in(0);
						func_943(0);
					}
					func_140(cParam0, func_33(cParam0), 4194304);
				}
				if ((func_944(get_player_index(), 0, 0, 1) && !func_120(cParam0, 8192)) && !func_121(cParam0, func_33(cParam0), 8))
				{
					func_47(1, 0);
					func_945("MISSION_WANTED", 7500, 0, 1, 0, 0, -1, -1, 0);
					if (func_946(cParam0))
					{
						func_927(cParam0, iVar0, 6);
					}
				}
				if (func_8(cParam0, 268435456))
				{
					if (_0x1b065a2bf7953815(1) != 1)
					{
						func_36(cParam0, func_34(iVar0), func_34(iVar1), iVar0, iVar1);
						func_896(cParam0, 268435456);
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
				func_935(cParam0);
				func_936(cParam0, iVar0);
				func_937(cParam0);
				func_938(cParam0);
				if (func_121(cParam0, func_35(cParam0), 2))
				{
					if (func_939(cParam0, func_35(cParam0)))
					{
						func_940(cParam0, func_35(cParam0));
					}
				}
			}
			if ((!func_944(get_player_index(), 0, 0, 1) || func_120(cParam0, 8192)) || func_121(cParam0, func_33(cParam0), 8))
			{
				if (func_923(cParam0, iVar0, 5))
				{
					if (func_947(cParam0))
					{
						func_927(cParam0, iVar0, 7);
					}
				}
				else
				{
					func_947(cParam0);
					func_927(cParam0, iVar0, 5);
				}
			}
			else
			{
				func_923(cParam0, iVar0, 5);
				func_948(cParam0);
			}
			break;
		case 7:
			if (func_923(cParam0, iVar0, 7))
			{
				if (!func_121(cParam0, func_33(cParam0), 67108864))
				{
					func_941(cParam0, func_33(cParam0));
				}
				func_942(cParam0, iVar1);
				func_915(cParam0);
				return true;
			}
			break;
		default:
			func_927(cParam0, iVar0, 7);
			break;
	}
	return false;
}

bool func_434(int iParam0, int iParam1)
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
	if (func_385(iVar0, 1))
	{
		if (is_ped_fatally_injured(iParam0))
		{
			return false;
		}
	}
	if (func_385(iVar0, 2))
	{
		if (_is_ped_hogtied(iParam0))
		{
			return false;
		}
	}
	if (func_385(iVar0, 8))
	{
		if (get_ped_config_flag(iParam0, 11, false))
		{
			return false;
		}
	}
	if (func_385(iVar0, 16))
	{
		if (!is_ped_on_mount(iParam0) && !is_ped_in_any_vehicle(iParam0, false))
		{
			return false;
		}
	}
	if (func_385(iVar0, 32))
	{
		if (is_entity_in_water(iParam0))
		{
			return false;
		}
	}
	if (func_385(iVar0, 64))
	{
		if (_0xb655db7582aec805(iParam0))
		{
			return false;
		}
	}
	if (func_385(iVar0, 128))
	{
		if (is_ped_ragdoll(iParam0))
		{
			return false;
		}
	}
	if (func_385(iVar0, 256))
	{
		if (!_0xa0bc8faed8cfeb3c(iParam0))
		{
			return false;
		}
	}
	return true;
}

int func_435(int iParam0)
{
	return round(pow(2f, to_float(iParam0)));
}

void func_436(int iParam0)
{
	if (!func_949(iParam0))
	{
		return;
	}
	iVar0 = func_950(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	iVar1 = func_550(iVar0);
	if (!does_entity_exist(iVar1))
	{
		return;
	}
	_0x8af46e5159a5b620(iVar1, 996860239);
	_0x20c5459379d75c1c(iVar1, 0);
	_0x45fea6d5539bd474(iVar1, 0);
	_0x15f4732c357b1d6d(iVar1, player_id(), 12);
	_0x15f4732c357b1d6d(iVar1, player_id(), 22);
	func_951(iParam0, 0);
}

bool func_437(int iParam0)
{
	return (Global_1359489->f_16 && iParam0) != 0;
}

void func_438(int iParam0)
{
	Global_1359489->f_16 = (Global_1359489->f_16 - (Global_1359489->f_16 && iParam0));
}

void func_439(int iParam0)
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

void func_440(int iParam0, int iParam1)
{
	if (func_952(iParam0))
	{
		return;
	}
	if (func_953(iParam0) == iParam1)
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

void func_441(var uParam0, int iParam1, bool bParam2)
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

void func_442()
{
	iVar0 = 0;
	while (iVar0 < 32)
	{
		func_954(iVar0);
		iVar0++;
	}
}

void func_443(char[4] cParam0, int iParam1, bool bParam2)
{
	if (!func_163(iParam1, 1))
	{
		return;
	}
	if (!func_799(iParam1, -1, &uVar0, &uVar4, &iVar5, &uVar6, &cVar7, &uVar11, &uVar12, &uVar13))
	{
		return;
	}
	if (iVar5 != -1)
	{
		func_252(cParam0, iVar5, &(iLocal_63[iParam1]), 0, 0, 1, 0);
		iLocal_63[iParam1] = 0;
		return;
	}
	if (bParam2)
	{
		func_955(iLocal_63[iParam1]);
	}
	else
	{
		func_956(iLocal_63[iParam1], 1, 0, 1);
	}
}

void func_444()
{
	iVar0 = 14;
	while (iVar0 <= 16)
	{
		iVar1 = iVar0;
		_0xc67a4910425f11f1(get_player_index(), Local_239[iVar1]->f_1);
		iVar0++;
	}
}

void func_445(char[4] cParam0, bool bParam1, bool bParam2)
{
	iVar0 = 14;
	while (iVar0 <= 16)
	{
		iVar1 = iVar0;
		func_448(Local_239[iVar1]);
		if (!is_entity_dead(&(iLocal_63[iVar1])))
		{
			_0xe98d55c5983f2509(&(iLocal_63[iVar1]));
		}
		if (bParam2)
		{
			clear_ped_tasks(&(iLocal_63[iVar1]), 1, 0);
		}
		if (bParam1)
		{
			func_443(cParam0, iVar1, 1);
		}
		iVar0++;
	}
}

void func_446()
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		iVar1 = iVar0;
		if (func_957(iVar1, 1))
		{
			delete_mission_train(iLocal_91[iVar1]);
		}
		iVar0++;
	}
	func_450(0, 0);
}

void func_447()
{
	iVar0 = 0;
	while (iVar0 < 10)
	{
		func_958(iVar0);
		iVar0++;
	}
}

void func_448(int* iParam0)
{
	if (does_blip_exist(*iParam0))
	{
		remove_blip(iParam0);
	}
}

bool func_449(int iParam0)
{
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 - iVar0 * 32);
	iVar2 = round(pow(2f, to_float(iVar1)));
	return (uLocal_1829[iVar0] && iVar2) == iVar2;
}

void func_450(int iParam0, bool bParam1)
{
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 - iVar0 * 32);
	iVar2 = round(pow(2f, to_float(iVar1)));
	bVar3 = (uLocal_1829[iVar0] && iVar2) == iVar2;
	if (!bVar3 && bParam1)
	{
		uLocal_1829[iVar0] = (uLocal_1829[iVar0] || iVar2);
	}
	else if (bVar3 && !bParam1)
	{
		iVar4 = (-1 - iVar2);
		uLocal_1829[iVar0] = (uLocal_1829[iVar0] && iVar4);
	}
}

int func_451(int iParam0)
{
	if (!func_959(iParam0))
	{
		return 0;
	}
	if (!func_961(func_960(iParam0)))
	{
		return 1;
	}
	if (!_0x800df3fc913355f3(func_454(iParam0)))
	{
		return 0;
	}
	_0x4f81ead1de8fa19b(func_454(iParam0));
	return 1;
}

void func_452(int iParam0, int iParam1)
{
	if (func_20() != -1)
	{
		return;
	}
	if (!func_959(iParam0))
	{
		return;
	}
	Global_24887[iParam0] = (&Global_24887[iParam0] - (Global_24887[iParam0] && iParam1));
}

int func_453(int iParam0)
{
	iVar0 = func_454(iParam0);
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

int func_454(int iParam0)
{
	if (!func_959(iParam0))
	{
		return 0;
	}
	return (*Global_1895087)[iParam0]->f_1;
}

int func_455(int iParam0)
{
	if (!func_959(iParam0))
	{
		return 0;
	}
	if (!func_961(func_960(iParam0)))
	{
		return 1;
	}
	if (!_0x800df3fc913355f3(func_454(iParam0)))
	{
		return 0;
	}
	if (network_is_in_session())
	{
		if (!network_has_control_of_entity(_0x31c70a716cae1fee(func_454(iParam0))))
		{
			return 1;
		}
	}
	iVar0 = _0x31c70a716cae1fee(func_454(iParam0));
	if (does_entity_exist(iVar0))
	{
		if (!_0x88ad6cc10d8d35b2(iVar0))
		{
			set_entity_as_mission_entity(iVar0, true, true);
		}
	}
	_0x7b204f88f6c3d287(func_454(iParam0));
	return 1;
}

void func_456(int iParam0, int iParam1)
{
	if (func_20() != -1)
	{
		return;
	}
	if (!func_959(iParam0))
	{
		return;
	}
	Global_24887[iParam0] = (Global_24887[iParam0] || iParam1);
}

int func_457(int iParam0)
{
	if (iParam0 == -1 || iParam0 >= 33)
	{
		return -1;
	}
	return &(Global_1899528->f_11[iParam0]);
}

int func_458(int iParam0, int iParam1)
{
	iVar0 = func_457(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	iVar1 = func_962(iVar0);
	if (iVar1 == -1)
	{
		return 0;
	}
	if (func_963(iParam0))
	{
		return 1;
	}
	func_964(iParam0);
	if (_does_volume_exist(Global_1392915->f_121[iVar0]->f_7))
	{
		_delete_volume(Global_1392915->f_121[iVar0]->f_7);
	}
	if (_does_volume_exist(Global_1392915->f_121[iVar0]->f_8))
	{
		_delete_volume(Global_1392915->f_121[iVar0]->f_8);
	}
	Global_1392915->f_121[iVar0]->f_1 = 0;
	func_965(iVar0);
	iVar2 = func_966((*Global_1392915)[iVar0]->f_4);
	if (iVar2 != -1)
	{
		if (iParam1 == 1)
		{
			func_967((*Global_1392915)[iVar0]->f_4);
		}
		if (does_blip_exist(Global_1898346[iVar2]))
		{
			remove_blip((*Global_1898346)[iVar2]);
		}
		func_968(iVar2, 0);
		return 1;
	}
	return 0;
}

void func_459(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	iVar0 = Global_1392915[iParam0];
	if (func_969(iParam0))
	{
		return;
	}
	if (func_183((*Global_1392915)[iParam0]->f_4))
	{
		func_13((*Global_1392915)[iParam0]->f_4, 1, 2);
	}
	(*Global_1392915)[iParam0]->f_1 = -1;
	func_970(iVar0, -1);
}

void func_460(var uParam0, int iParam1)
{
	iVar0 = Global_1392915[iParam1];
	if (!func_971(iVar0))
	{
		return;
	}
	if (func_972(&(uParam0->f_34[iVar0])))
	{
		func_973(uParam0->f_34[iVar0], 1);
		uParam0->f_34[iVar0] = -1;
		(*uParam0)[iVar0] = 0;
	}
}

void func_461(int iParam0)
{
	func_974((*Global_1392915)[iParam0]);
	func_975(Global_1392915->f_121[iParam0]);
}

bool func_462(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (!func_266(iParam0))
	{
		return true;
	}
	if (!func_465(iParam0, 0))
	{
		if (iParam1 == 0)
		{
			return true;
		}
		func_976(iParam0, 0);
	}
	if (bParam2)
	{
		if (!func_977((*Global_1347702)[iParam0]->f_13, 1024))
		{
			func_978(&((*Global_1347702)[iParam0]->f_13), 1024);
		}
	}
	if (bParam4 && !func_977((*Global_1347702)[iParam0]->f_13, 8192))
	{
		func_978(&((*Global_1347702)[iParam0]->f_13), 8192);
	}
	if (is_thread_active((*Global_1347702)[iParam0]->f_42, false))
	{
		if (func_977((*Global_1347702)[iParam0]->f_13, 64))
		{
			return true;
		}
		return false;
	}
	if (!func_979(iParam0))
	{
		func_980((*Global_1347702)[iParam0]->f_15);
	}
	else if (bParam3 && !func_981((*Global_1347702)[iParam0]->f_15))
	{
		func_982((*Global_1347702)[iParam0]->f_15);
	}
	if (!func_977((*Global_1347702)[iParam0]->f_13, 256))
	{
		func_978(&((*Global_1347702)[iParam0]->f_13), 256);
	}
	return false;
}

void func_463(int iParam0, int iParam1, bool bParam2)
{
	if (func_468(iParam0))
	{
		return;
	}
	if (iParam1 == 1 || func_465(iParam0, 0))
	{
		if ((bParam2 || func_294((*Global_1347702)[iParam0]->f_12, 65536)) || func_983(iParam0))
		{
			if (bParam2 && !func_977((*Global_1347702)[iParam0]->f_13, 1024))
			{
				func_978(&((*Global_1347702)[iParam0]->f_13), 1024);
			}
			func_984(&((*Global_1347702)[iParam0]->f_12), 1024);
			func_984(&((*Global_1347702)[iParam0]->f_12), 32768);
			func_985(iParam0);
		}
	}
}

void func_464(int iParam0, int iParam1, bool bParam2)
{
	if (!func_266(iParam0))
	{
		return;
	}
	func_986(iParam0, 1, iParam1, 1, 32);
	if (bParam2 && func_977((*Global_1347702)[iParam0]->f_13, 1024))
	{
		func_987(&((*Global_1347702)[iParam0]->f_13), 1024);
	}
	if (func_979(iParam0))
	{
		func_967((*Global_1347702)[iParam0]->f_15);
	}
	if (iParam1 == 1)
	{
		func_988(iParam0, 1);
	}
}

bool func_465(int iParam0, bool bParam1)
{
	if (func_20() != -1)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 <= (Global_40.f_1094 - 1))
	{
		if (&Global_40.f_450[iVar0] == iParam0)
		{
			if (!bParam1 || (*Global_1347702)[iVar0]->f_13 & 16384 == 0)
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

int func_466(bool bParam0)
{
	iVar3 = 0;
	while (iVar3 < Global_1879534->f_7300)
	{
		if (!is_bit_set(&(Global_1879534->f_7301.f_2[iVar3]), 2))
		{
			if (is_bit_set(&(Global_1879534->f_7301.f_2[iVar3]), 1))
			{
				switch (&Global_1879534->f_1911[Global_1879534->f_7301.f_2[iVar3]->f_1])
				{
					case 987244216:
						iVar1 = Global_1879534->f_1911[Global_1879534->f_7301.f_2[iVar3]->f_1]->f_2;
						if (func_294((*Global_1347702)[iVar1]->f_12, 1))
						{
							iVar0++;
						}
						break;
				}
			}
		}
		iVar3++;
	}
	iVar3 = 0;
	while (iVar3 < Global_1879534->f_7300)
	{
		if (!is_bit_set(&(Global_1879534->f_7301.f_2[iVar3]), 2))
		{
			if (is_bit_set(&(Global_1879534->f_7301.f_2[iVar3]), 1))
			{
				switch (&Global_1879534->f_1911[Global_1879534->f_7301.f_2[iVar3]->f_1])
				{
					case -2093459088:
						if (!bParam0)
						{
							iVar0++;
						}
						else
						{
							iVar2 = Global_1879534->f_1911[Global_1879534->f_7301.f_2[iVar3]->f_1]->f_2;
							if (func_182(iVar2) && !func_989(iVar2))
							{
								iVar0++;
							}
						}
						break;
				}
			}
		}
		iVar3++;
	}
	return iVar0;
}

bool func_467(int iParam0)
{
	if (func_187((*Global_1347702)[iParam0]->f_15) == 2 || iParam0 == func_501(Global_1347343->f_2))
	{
		return true;
	}
	if ((*Global_1347702)[iParam0]->f_12 & 32 != 0)
	{
		return true;
	}
	fVar0 = vdist2(func_990(iParam0), Global_36);
	if (fVar0 < ((*Global_1347702)[iParam0]->f_16 * (*Global_1347702)[iParam0]->f_16))
	{
		return true;
	}
	return false;
}

bool func_468(int iParam0)
{
	if (func_20() != -1)
	{
		return false;
	}
	if (!func_266(iParam0))
	{
		return false;
	}
	return func_320((*Global_1347702)[iParam0]->f_15, 1);
}

bool func_469(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	if (Global_1572887->f_12 == -1)
	{
		return func_320((*Global_1835011)[iParam0]->f_1, 1);
	}
	return (_unlock_is_unlocked((*Global_1835011)[iParam0]->f_2) && !_unlock_is_visible((*Global_1835011)[iParam0]->f_2));
}

bool func_470(int iParam0)
{
	if (!func_182(iParam0))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < Global_1879534->f_7300)
	{
		if (!is_bit_set(&(Global_1879534->f_7301.f_2[iVar0]), 2))
		{
			if (is_bit_set(&(Global_1879534->f_7301.f_2[iVar0]), 1))
			{
				switch (&Global_1879534->f_1911[Global_1879534->f_7301.f_2[iVar0]->f_1])
				{
					case -2093459088:
						if (Global_1879534->f_1911[Global_1879534->f_7301.f_2[iVar0]->f_1]->f_2 == iParam0)
						{
							return true;
						}
						break;
				}
			}
		}
		iVar0++;
	}
	return false;
}

bool func_471(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_182(iParam0))
	{
		return true;
	}
	if (func_82(32768))
	{
		return true;
	}
	if (is_thread_active((*Global_1835011)[iParam0]->f_16, false))
	{
		return true;
	}
	iVar0 = func_966(func_12(iParam0));
	if ((*Global_1835011)[iParam0]->f_71)
	{
		return true;
	}
	if (!func_185(func_12(iParam0)))
	{
		func_991(iParam0, 0, 0, -1);
	}
	if (func_992(iVar0))
	{
		if (!(*Global_1835011)[iParam0]->f_71)
		{
			if (bParam1)
			{
				func_968(iVar0, 256);
			}
			if (bParam2)
			{
				func_968(iVar0, 512);
			}
			(*Global_1835011)[iParam0]->f_71 = 1;
			return true;
		}
	}
	return false;
}

void func_472(int iParam0, bool bParam1)
{
	if (!func_182(iParam0))
	{
		return;
	}
	iVar0 = func_966(func_12(iParam0));
	if (func_992(iVar0) && (*Global_1835011)[iParam0]->f_71)
	{
		(*Global_1835011)[iParam0]->f_71 = 0;
	}
	if (!bParam1)
	{
		func_993(iParam0, -1, 0, 1, 0, 0, 0);
		func_13(func_12(iParam0), 1, 2);
	}
}

bool func_473(int iParam0)
{
	return func_994(iParam0, 2);
}

int func_474(int iParam0)
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

int func_475(int iParam0)
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

int func_476(int iParam0)
{
	return iParam0 & 31;
}

bool func_477()
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

int func_478(int iParam0)
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

int func_479(int iParam0)
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

void func_480(int iParam0, var uParam1)
{
	Var0 = iParam0;
	Var0.f_1 = uParam1;
	network_set_rich_presence(4, &Var0, 2, 2);
}

int func_481()
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

int func_482(int iParam0)
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

void func_483(var uParam0, var uParam1, var uParam2)
{
	vVar0.x = uParam0;
	vVar0.f_1 = uParam1;
	vVar0.f_2 = uParam2;
	network_set_rich_presence(3, &vVar0, 3, 3);
}

void func_484(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_12106[iParam0]->f_1 = iParam1;
		return;
	}
	if (iParam1 == 0 || iParam1 == -1)
	{
		func_995(iParam0);
	}
	else
	{
		func_996(iParam0, iParam1);
	}
	func_997();
}

bool func_485(int iParam0)
{
	iVar0 = func_998(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887->f_12 == -1)
	{
		return is_bit_set(&(Global_40.f_283[iVar1]), iVar2);
	}
	return is_bit_set(&(Global_1058888->f_40567[iVar1]), iVar2);
}

bool func_486(int iParam0)
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

void func_487(int iParam0)
{
	iVar2 = func_178(0);
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_600(iVar1) == iParam0)
		{
			_0x6a564540fac12211(iVar2, iVar1);
		}
		iVar0++;
	}
	func_1000(func_999(iParam0), 6);
}

void func_488(int iParam0)
{
	iVar2 = func_178(0);
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_600(iVar1) == iParam0)
		{
			_0x766315a564594401(iVar2, iVar1, 0);
		}
		iVar0++;
	}
	func_1001(func_999(iParam0), 6);
}

int func_489(int iParam0)
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

int func_490(int iParam0)
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

bool func_491(int iParam0)
{
	return iParam0 != 0;
}

bool func_492(int iParam0)
{
	if (iParam0 != -1)
	{
		return true;
	}
	return false;
}

void func_493(int iParam0, var uParam1)
{
	if (!func_492(iParam0))
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

void func_494(char* sParam0, int iParam1)
{
	sParam0->f_8 = (sParam0->f_8 || iParam1);
}

void func_495(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_548() - fParam1);
	func_1005(uParam0, 1);
	func_1006(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_496(var uParam0)
{
	return func_212(*uParam0, 2);
}

int func_497()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return iVar0;
	}
	return get_game_timer();
}

void func_498(bool bParam0)
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

struct<4> func_499(int iParam0, int iParam1)
{
	return func_1009(iParam0, iParam1);
}

int func_500(int iParam0)
{
	if (func_188(iParam0) == 1)
	{
		return func_265(iParam0);
	}
	return -1;
}

int func_501(int iParam0)
{
	if (func_188(iParam0) == 8)
	{
		return func_265(iParam0);
	}
	return -1;
}

char[] func_502(int iParam0)
{
	if (!func_266(iParam0))
	{
		return uVar0;
	}
	uVar0 = (*Global_1347702)[iParam0]->f_3;
	return uVar0;
}

void func_503(int iParam0, bool bParam1)
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

void func_504(int iParam0, vector3 vParam1, var uParam4)
{
	(*Global_2621440)[iParam0]->f_9.f_7 = { vParam1 };
	(*Global_2621440)[iParam0]->f_9.f_13 = uParam4;
	(*Global_2621440)[iParam0]->f_9 = 5;
	(*Global_2621440)[iParam0]->f_9.f_15 = func_365(vParam1, 1);
}

bool func_505(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 13)
	{
		return false;
	}
	return true;
}

bool func_506(int iParam0)
{
	return Global_43884 == iParam0;
}

void func_507(bool bParam0)
{
	Global_1935496->f_18 = !bParam0;
}

bool func_508(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 120);
}

void func_509(int iParam0)
{
	Global_1310750->f_16035 = (Global_1310750->f_16035 - (Global_1310750->f_16035 && iParam0));
}

bool func_510(var uParam0, int iParam1, int iParam2)
{
	return is_bit_set(uParam0[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return is_bit_set(uParam0[iVar0], iVar1);
}

int func_511()
{
	return Global_1109400->f_245;
}

bool func_512(var uParam0, int iParam1)
{
	return func_385(uParam0->f_64, iParam1);
}

bool func_513(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 27)
	{
		return false;
	}
	return true;
}

bool func_514(int iParam0)
{
	return func_709(iParam0, 16, 1);
}

void func_515(char[4] cParam0, int iParam1)
{
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	if (!func_1011(cParam0, iParam1, &iVar0))
	{
		return;
	}
	if (is_entity_an_object(iParam1) && func_1012(cParam0, get_object_index_from_entity_index(iParam1)))
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

void func_516(int iParam0)
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

void func_517(int iParam0)
{
	func_1013(iParam0, 8, 0);
}

void func_518(int iParam0, bool bParam1)
{
	if (!func_1014(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (func_1015(&((*Global_1360165)[iParam0]->f_12), 1))
		{
			func_1013(iParam0, 1, 0);
		}
	}
	func_1013(iParam0, 16, bParam1);
}

void func_519(int iParam0, bool bParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	if (!func_513(iParam0))
	{
		return;
	}
	if (func_514(iParam0))
	{
		if ((*Global_1360165)[iParam0]->f_129 != 0 && (*Global_1360165)[iParam0]->f_129 != get_id_of_this_thread())
		{
			return;
		}
	}
	if (bParam10)
	{
		func_1016(iParam0, 56, 1);
		func_27(&(Global_1359489->f_40), 1);
	}
	func_518(iParam0, 0);
	func_1013(iParam0, 4, 0);
	func_517(iParam0);
	func_1017(iParam0);
	func_1018(iParam0, 37, 1);
	bVar0 = func_434(Global_1360165[iParam0], 0);
	iVar1 = func_1019(iParam0, 0);
	bVar2 = _0x800df3fc913355f3(iVar1);
	if (get_ped_config_flag(Global_1360165[iParam0], 503, true) && Global_1359489->f_16 & 8388608 == 0)
	{
		set_ped_config_flag(Global_1360165[iParam0], 503, false);
	}
	if (func_1020(iParam0, 64, 1))
	{
		func_1018(iParam0, 64, 1);
	}
	if (bParam3)
	{
		func_1018(iParam0, 33, 1);
		func_1018(iParam0, 34, 1);
		func_1021(iParam0, 1056964608, -1, 1061158912);
		func_1022(iParam0, 1, 1, 0);
		if (bParam6)
		{
			func_1016(iParam0, 30, 1);
		}
		if (bParam7)
		{
			func_1016(iParam0, 35, 1);
			if (bParam8)
			{
				func_1016(iParam0, 62, 1);
			}
		}
		if (bVar0)
		{
			func_1023(iParam0, 0);
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
		func_1018(iParam0, 28, 1);
	}
	else
	{
		if (!bVar0)
		{
			set_ped_keep_task(Global_1360165[iParam0], true);
		}
		func_1016(iParam0, 33, 1);
		func_1022(iParam0, 0, 1, 0);
		if (fParam4 > 0f)
		{
			(*Global_1360165)[iParam0]->f_133 = fParam4;
			func_27(&((*Global_1360165)[iParam0]->f_130), 1);
		}
		else
		{
			func_551(&((*Global_1360165)[iParam0]->f_130));
		}
		if (bParam9)
		{
			func_1016(iParam0, 34, 1);
		}
	}
	if (bParam1 || bParam2)
	{
		if (does_entity_exist(Global_1360165[iParam0]))
		{
			func_1024(iParam0, bParam2, bParam2, bParam2, 0);
		}
	}
	else if (bVar0)
	{
		set_ped_can_use_auto_conversation_lookat(Global_1360165[iParam0], false);
	}
	if (func_1020(iParam0, 45, 1))
	{
		func_1018(iParam0, 45, 1);
	}
	func_1025(iParam0, 16, 1);
	func_1018(iParam0, 44, 1);
	(*Global_1360165)[iParam0]->f_129 = 0;
	Global_40.f_4942[iParam0]->f_4 = 0;
	if (bParam5)
	{
		if (func_434(func_1026(iParam0), 0))
		{
			func_1027(0, iParam0, bParam3, 0, bParam2);
		}
	}
}

void func_520(int iParam0)
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
		func_527(iParam0);
	}
	else if (!is_thread_active(iVar0, false))
	{
		func_527(iParam0);
	}
}

bool func_521(int iParam0)
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

void func_522(int iParam0)
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

void func_523(int iParam0)
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

bool func_524(int iParam0)
{
	if (!func_1028(iParam0))
	{
		return false;
	}
	if (!func_324())
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
	if (!func_528(iParam0))
	{
		return;
	}
	iVar0 = func_208(iParam0);
	func_1029(iParam0);
	if (!_0x88ad6cc10d8d35b2(iVar0))
	{
		set_entity_as_mission_entity(iVar0, true, true);
	}
	iVar1 = get_entity_model(iVar0);
	if (_0xaa9f048dcf69b6dc(iVar1))
	{
		if (!func_524(iVar1))
		{
			set_ped_model_is_suppressed(iVar1, false);
		}
	}
	delete_ped(&iVar0);
	func_1030(iParam0, 0);
	func_527(iParam0);
}

bool func_526(int iParam0)
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

void func_527(int iParam0)
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

bool func_528(int iParam0)
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

void func_529(int iParam0)
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
	if (func_1031(iParam0, 64))
	{
		func_522(iParam0);
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
	bVar3 = func_598(42);
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
				func_1032(&((*Global_1900383)[iParam0]->f_27));
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
		func_522(iParam0);
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
		if (func_1033(1) < 1)
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
		func_1034(&((*Global_1900383)[iParam0]->f_26), bVar6);
	}
	if (!does_blip_exist((*Global_1900383)[iParam0]->f_26))
	{
		return;
	}
	bVar8 = false;
	if (func_1031(iParam0, 32))
	{
		bVar8 = true;
	}
	bVar9 = is_ped_in_writhe(iVar0);
	bVar10 = false;
	iVar11 = func_1035(iParam0);
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
	fVar15 = func_1036(vVar12, Global_36);
	bVar16 = false;
	if (fVar15 > func_1037(iParam0))
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
		func_1038((*Global_1900383)[iParam0]->f_26);
		func_1039((*Global_1900383)[iParam0]->f_26);
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
	if (func_887(iVar0) && !bVar9)
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
	iVar21 = func_1033(iParam0);
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

int func_530(int iParam0)
{
	return shift_right(iParam0, 5) & 1023;
}

int func_531(int iParam0)
{
	if ((*Global_1347702)[iParam0]->f_12 & 1 != 0 || (*Global_1347702)[iParam0]->f_12 & 33554432 != 0)
	{
		return 1;
	}
	return 3;
}

int func_532(int iParam0)
{
	uVar0 = (*Global_1347702)[iParam0]->f_3;
	return get_hash_key(&uVar0);
}

void func_533(int iParam0, int iParam1)
{
	Global_40.f_490.f_402[iParam0] = (&Global_40.f_490.f_402[iParam0] - (Global_40.f_490.f_402[iParam0] && iParam1));
}

void func_534(int iParam0, int iParam1)
{
	Global_40.f_490.f_402[iParam0] = (Global_40.f_490.f_402[iParam0] || iParam1);
}

bool func_535(int iParam0)
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
	if (!func_528(iParam0))
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

void func_536(int iParam0)
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
	if (!func_528(iParam0))
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

void func_537(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (is_string_null_or_empty(sParam1))
	{
		sParam1 = "FEED_MONEY_EARN";
	}
	func_706(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 1831944558, 0, 109029619, 0, 0, 0, 1);
}

void func_538(int iParam0, bool bParam1, float fParam2, int iParam3, int iParam4)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if (bParam1)
	{
		iVar0 = round((to_float(iParam0) * fParam2));
		iVar1 = ((iParam0 - iVar0) / iParam3);
		if (func_1040())
		{
			iVar2 = floor((to_float(iVar1) * 0.1f));
		}
		iParam0 = (iParam0 + iVar2);
		iVar1 = (iVar1 + iVar2);
		func_706(_create_var_string(2, "FEED_GANG_TOTAL_EARN", iParam0), "ITEMTYPE_TEXTURES", -1957849484, 0, 109029619, 0, 0, 0, 1);
		iParam0 = (iParam0 - iVar0);
		if (iVar0 > 0)
		{
			func_1041(iVar0);
			func_1042(iVar0, 0, 0);
		}
		func_706(_create_var_string(2, "FEED_GANG_PLAYER_EARN", iVar1), "ITEMTYPE_TEXTURES", 1831944558, 0, 109029619, 0, 0, 0, 1);
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

bool func_539(int iParam0)
{
	if (!func_240(iParam0))
	{
		return false;
	}
	return func_244(iParam0, 67108864);
}

void func_540(int iParam0)
{
	StringCopy(&cVar0, func_1043(iParam0), 64);
	StringConCat(&cVar0, "_OUTLINE", 64);
	sVar8 = func_1044(cVar0);
	_0x563fcb6620523917(get_hash_key(sVar8), -1482012664);
}

void func_541(int iParam0)
{
	StringCopy(&cVar0, func_1043(iParam0), 64);
	StringConCat(&cVar0, "_OUTLINE", 64);
	sVar8 = func_1044(cVar0);
	iVar9 = get_hash_key(sVar8);
	if (_0xe38450dbcbc70e3d(iVar9, -1305340593) || _0xe38450dbcbc70e3d(iVar9, -1482012664))
	{
		_0x6786d7afac3162b3(iVar9);
	}
}

bool func_542(var uParam0, int iParam1, int iParam2)
{
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	bVar2 = is_bit_set(uParam0[iVar0], iVar1);
	clear_bit((*uParam0)[iVar0], iVar1);
	return bVar2;
}

bool func_543(var uParam0, int iParam1, int iParam2)
{
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	bVar2 = is_bit_set(uParam0[iVar0], iVar1);
	set_bit((*uParam0)[iVar0], iVar1);
	return !bVar2;
}

bool func_544(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_545(int iParam0)
{
	if (!func_508(iParam0))
	{
		return true;
	}
	return Global_17504.f_42[iParam0]->f_4 > 0;
}

int func_546(int iParam0)
{
	if (func_508(iParam0))
	{
		return Global_17504.f_42[iParam0]->f_4;
	}
	return 0;
}

int func_547(int iParam0)
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

float func_548()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return (to_float(iVar0) / 1000f);
	}
	return (to_float(get_game_timer()) / 1000f);
}

void func_549(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	iVar0 = (((iParam2 + (60 * iParam3)) + (3600 * iParam4)) + (86400 * iParam5));
	if (func_1045(iParam0) == 1 && bParam7)
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

int func_550(int iParam0)
{
	if (!func_1014(iParam0))
	{
		return 0;
	}
	if (!does_entity_exist(Global_1360165[iParam0]))
	{
		(*Global_1360165)[iParam0] = 0;
	}
	return Global_1360165[iParam0];
}

void func_551(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

bool func_552(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return func_1046(iParam0);
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

int func_553(int iParam0, bool bParam1, bool bParam2)
{
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (&Global_40.f_4283.f_6[iVar0] == iParam0)
		{
			func_566(Global_40.f_4283.f_6[iVar0], bParam1, bParam2);
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_554(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_2;
	}
	return -1;
}

void func_555(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_2 = iParam1;
}

int func_556()
{
	return Global_40.f_11095.f_35;
}

void func_557(int iParam0, int iParam1)
{
	if (iParam1 == 1)
	{
		func_1047(iParam0, 0);
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
		func_558(1);
		Global_40.f_11922[0] = iParam0;
	}
}

void func_558(int iParam0)
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
			func_1047(&(Global_40.f_11922[iVar0]), 0);
			Global_40.f_11922[iVar0] = 0;
			iVar1 = 1;
		}
		iVar0++;
	}
	if (iVar1 == 1)
	{
		func_1048(1);
	}
}

bool func_559(int iParam0)
{
	return Global_40.f_490.f_402[iParam0] & 1 != 0;
}

int func_560()
{
	iVar0 = func_1049((*Global_1347702)[9]->f_15);
	iVar1 = func_1049((*Global_1835011)[69]->f_1);
	if (func_1050(iVar0, iVar1, 1))
	{
		return 0;
	}
	return 1;
}

bool func_561(int iParam0)
{
	if (!func_182(iParam0))
	{
		return false;
	}
	return func_320((*Global_1835011)[iParam0]->f_1, 1);
}

int func_562(int iParam0)
{
	Var0 = Global_1357549->f_576;
	Var0.f_1 = 0;
	Var0.f_3 = iParam0;
	iVar5 = 0;
	if (func_1051(Var0, 70005598, &iVar6, 0))
	{
		iVar5 = func_1052(iVar6);
	}
	return iVar5;
}

int func_563(int iParam0)
{
	Var0 = Global_1357549->f_576;
	Var0.f_1 = 0;
	Var0.f_3 = iParam0;
	iVar5 = 1;
	if (func_1053(Var0, -1875502208, &iVar5, 0))
	{
	}
	return iVar5;
}

void func_564(int iParam0, bool bParam1)
{
	func_1054(iParam0, &iVar0, &iVar1);
	if (bParam1)
	{
		set_bit(Global_1357549->f_1848[iVar0], iVar1);
	}
	else
	{
		clear_bit(Global_1357549->f_1848[iVar0], iVar1);
	}
}

bool func_565(int iParam0)
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

void func_566(var uParam0, bool bParam1, bool bParam2)
{
	if (*uParam0 == 176656832)
	{
		return;
	}
	func_564(*uParam0, 0);
	if (bParam1)
	{
		if (bParam2)
		{
			func_567(2, *uParam0);
		}
		else
		{
			func_568(2, *uParam0);
		}
	}
	func_1055(uParam0);
}

void func_567(int iParam0, int iParam1)
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

void func_568(int iParam0, int iParam1)
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

void func_569(int iParam0, int iParam1, bool bParam2)
{
	Global_1327479->f_4 = get_game_timer();
	func_1056(iParam0, iParam1, bParam2);
}

int func_570(int iParam0)
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

int func_571(int iParam0)
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

void func_572(int iParam0, bool bParam1, int iParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, bool bParam7)
{
	iVar0 = func_1057();
	if (iParam3 == 1142025875 || iParam3 == 1587891565)
	{
		if (bParam6)
		{
			iParam0 = func_1058(iParam0);
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
	if (func_598(6))
	{
		iVar2 = 320;
		iVar3 = -320;
		if (!func_1059())
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
	iVar1 = func_1057();
	if ((iVar1 != iVar0 && (iVar1 != 0 || iParam3 == -1091304842)) || bParam7)
	{
		iVar6 = func_1060(iVar1);
		func_1062(func_1061(), 0, 4000);
		func_1063(Global_40.f_11095.f_35);
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
		func_1064(0);
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
				if (iParam0 > func_571(14))
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
					sParam4 = func_1065(iParam3);
				}
				if (is_string_null_or_empty(sParam4))
				{
					func_706(_create_var_string(2, "PLAYER_HONOR_CHANGE_POS"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_GOOD"), 0, 109029619, "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_706(_create_var_string(2, "PLAYER_HONOR_CHANGE_POS_EVENT"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_GOOD"), 0, 109029619, "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
		else
		{
			func_95(func_94(-1636809477), 1);
			Global_1347477->f_204 = 0;
			if (!bParam1)
			{
				if (iParam0 < func_571(4))
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
					sParam4 = func_1065(iParam3);
				}
				if (is_string_null_or_empty(sParam4))
				{
					func_706(_create_var_string(2, "PLAYER_HONOR_CHANGE_NEG"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_BAD"), 1, 859817522, "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_706(_create_var_string(2, "PLAYER_HONOR_CHANGE_NEG_EVENT"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_BAD"), 1, 859817522, "Honor_Display_Sounds", sVar7, 0, 1);
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

void func_573(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	Global_1347477->f_155[iParam0] = iParam1;
	Global_1347477->f_155[iParam0]->f_2 = iParam2;
	Global_1347477->f_155[iParam0]->f_3 = iParam3;
	Global_1347477->f_155[iParam0]->f_4 = iParam4;
	Global_1347477->f_155[iParam0]->f_5 = bParam5;
	Global_1347477->f_155[iParam0]->f_1 = get_game_timer() + 500;
}

int func_574(int iParam0)
{
	return shift_right(iParam0, 15) & 16383;
}

int func_575(int iParam0)
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

bool func_576(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _item_database_is_key_valid(iParam0, iParam1);
}

bool func_577(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (func_20() == -1)
	{
		if (func_1066(iParam0) && func_1067(iParam0))
		{
			func_1068(iParam0, iParam1, 1, &bParam2, iParam3);
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

bool func_578(int iParam0, int iParam1, int iParam2)
{
	*iParam1 = iParam2;
	func_1069(iParam0, iParam1);
	Var0 = { func_687(iParam0, 0, 1) };
	iVar5 = func_1070(iParam0, &Var0, 0, 0);
	iVar6 = func_1071(iParam0, 0);
	if ((iVar5 > 1 && !func_129()) && (iVar6 + iParam2) >= iVar5)
	{
		if (func_596(iParam0, -2051813666))
		{
			func_318(583, 1);
		}
		else
		{
			func_318(582, 0);
		}
	}
	if (func_1072(iParam0, &Var0, *iParam1, 0, 0))
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

void func_579(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return;
	}
	switch (func_657(iParam0, -949239683))
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

int func_580(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_576(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_595(iParam0);
	if (iVar0 == 307971639 || (bParam1 && iVar0 == -427144552))
	{
		iVar1 = func_1073(iParam0, 1);
		if (iVar1 != 0)
		{
			return get_ped_ammo_by_type(Global_35, iVar1);
		}
	}
	else if (iVar0 == -427144552)
	{
		return func_1074(iParam0, 0);
	}
	iVar2 = _0xe787f05dfc977bde(func_178(bParam2), iParam0, 0);
	return iVar2;
}

bool func_581(int iParam0)
{
	if (func_20() != -1)
	{
		return false;
	}
	return func_582(iParam0) != 0;
}

int func_582(int iParam0)
{
	iVar1 = 0;
	while (iVar1 < func_1075())
	{
		iVar0 = _0x126cbebba46693cf(iVar1, -2076669067, 0);
		if (iParam0 == func_1076(iVar0))
		{
			return iVar0;
		}
		iVar1++;
	}
	return 0;
}

int func_583(int iParam0)
{
	return _0x6052b4de6657684f(iParam0);
}

int func_584(int iParam0)
{
	iVar1 = 0;
	while (iVar1 < func_1075())
	{
		iVar0 = _0x126cbebba46693cf(iVar1, -2076669067, 0);
		if (iParam0 == func_583(iVar0))
		{
			if (func_340(func_1076(iVar0), 1, 0))
			{
				iVar2++;
			}
		}
		iVar1++;
	}
	return iVar2;
}

void func_585(int iParam0)
{
	_0x3ea62e56f386c997(iParam0, 1);
	func_1077(48);
	func_360(0, -1);
}

bool func_586(int iParam0)
{
	if (func_20() != -1)
	{
		return false;
	}
	return func_320((*Global_1347702)[iParam0]->f_15, 1);
}

int func_587(int iParam0)
{
	return _0x62cab7db62ead434(-2076669067, iParam0);
}

int func_588(int iParam0)
{
	return _0x93f2e7b5db85657b(-2076669067, iParam0);
}

bool func_589(int iParam0)
{
	if (func_20() != -1)
	{
		return false;
	}
	return func_320((*Global_1835011)[iParam0]->f_1, 1);
}

bool func_590(int iParam0)
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

int func_591()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		if (func_340(func_1078(iVar1), 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_592(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, bool bParam7)
{
	switch (iParam0)
	{
		case 38:
			sVar0 = "MISSION_RCCIG";
			sVar1 = "SP_MISSIONS_13";
			if (func_389() && (func_590(38) || func_586(38)))
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
			if (func_389() && (func_590(39) || func_586(39)))
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
			iVar9 = func_1079(iParam3, 19);
			iVar14 = -1531394072;
			iVar11 = get_hash_key("BLIP_RC_COLLECTABLE_EXOTICS");
			iVar13 = 911890963;
			break;
		case 41:
			if (func_389() && (func_590(41) || func_586(41)))
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
			if (func_389() && (func_590(49) || func_586(49)))
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
			iVar9 = func_1079(iParam3, 20);
			iVar14 = 678508515;
			iVar11 = 1986498931;
			iVar13 = -1424865411;
			break;
	}
	sVar2 = func_1080(iParam0, iVar14, iParam6, sVar2, sParam4, iVar10, iParam3);
	if (iParam6 == 8)
	{
		iVar11 = get_hash_key("TOAST_MEDAL_COLLECTABLE");
		iVar12 = get_hash_key("hud_toasts");
	}
	else
	{
		iVar12 = get_hash_key("toast_log_blips");
	}
	if (func_1081(iParam0, iVar13, iVar14))
	{
	}
	if (func_1082(iParam0, iVar13, vVar6, sVar4, sVar3))
	{
	}
	if (func_1083(iParam0, iVar13, sVar2, sVar5, sVar0, sVar1, iVar11, iVar12))
	{
	}
	if (func_1084(iParam0, iVar13, iVar14, iParam3, iParam1, iParam6, iVar9, iParam2, iVar10, bParam5))
	{
	}
	if (func_1085(iParam0, iVar13, iVar14, iParam6))
	{
	}
	if (func_1086(iParam0, iVar13, iVar14, iParam6, bParam7))
	{
	}
}

void func_593(int iParam0)
{
	Global_40.f_12004 = (Global_40.f_12004 || iParam0);
}

void func_594(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	switch (iParam0)
	{
		case 38:
			sVar0 = "COL_CC_TITLE";
			sVar3 = "COL_CC_CARD_FOUND";
			iVar7 = -2076669067;
			if (func_389() && (func_590(38) || func_586(38)))
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
			if (func_389() && (func_590(39) || func_586(39)))
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
			if (func_389() && (func_590(49) || func_586(49)))
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
		if (func_389() && (func_590(38) || func_586(38)))
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
			func_1087(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 1)
		{
			sVar3 = "COL_CC_CARD_POSTED_OBJ";
			func_1087(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 0)
		{
			func_713(_create_var_string(2, sVar0), _create_var_string(2, func_1088(func_588(iParam6))), iVar5, iVar4, -2, 0, 0, 0, 0, 1, 1);
			func_1087(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			sVar1 = "COL_CC_INTRO";
			func_1087(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == -440187297)
	{
		if (func_389() && (func_590(39) || func_586(39)))
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
			func_1087(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_1087(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == 2103522376)
	{
		if (func_389() && (func_590(49) || func_586(49)))
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
			func_1087(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_1087(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else
	{
		_uilog_set_pending_details_id(1, iVar6);
		if (iParam5 == 1)
		{
			func_1087(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_1087(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
}

int func_595(int iParam0)
{
	if (!func_576(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

bool func_596(int iParam0, int iParam1)
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

bool func_597(int iParam0, int iParam1)
{
	if (!func_576(iParam0, 0))
	{
		return false;
	}
	return _0x245d07651b1d183b(iParam0, iParam1);
}

bool func_598(int iParam0)
{
	if (!func_1089(iParam0))
	{
		return false;
	}
	return func_1090(iParam0);
}

void func_599(int iParam0)
{
	if (!func_1089(iParam0))
	{
		return;
	}
	func_1091(iParam0);
	func_1092(iParam0);
}

int func_600(int iParam0)
{
	if (!func_576(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_601(int iParam0, bool bParam1)
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
	if (func_576(iVar0, 0))
	{
		if (bParam1)
		{
			if (func_1093(iVar0) || func_122(iVar0))
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

int func_602(int iParam0, bool bParam1)
{
	if (!func_576(iParam0, 0))
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

void func_603(int iParam0)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	if (!func_690(iParam0))
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

bool func_604(bool bParam0)
{
	if (func_20() == -1)
	{
		return true;
	}
	return _inventory_are_local_changes_allowed(func_178(bParam0));
}

bool func_605(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
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
		Var0 = { func_687(iParam0, 0, 1) };
		iVar5 = 1728382685;
		Var6.f_9 = -1591664384;
		iVar28 = 0;
		while (iVar28 < 4)
		{
			iVar5 = func_1094((386 + iVar28), 1);
			if (func_1095(iParam0, &Var0, iVar5, 0))
			{
				if (func_1096(iParam0, &Var6, iVar5))
				{
					Var29 = { func_1097(iParam0, Var0, iVar5, 0) };
					func_1098(iParam0, &Var29, &Var0, 1, -142743235, 1, 0);
				}
				else
				{
					iVar28++;
				}
				if (func_604(0))
				{
					_give_weapon_to_ped_2(Global_35, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
					if (!has_ped_got_weapon(Global_35, iParam0, 0, false))
					{
						return false;
					}
					func_606(_get_ammo_type_for_weapon(iParam0), iParam1, iParam6);
					func_1099(iParam0, iParam1);
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

bool func_606(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return true;
	}
	if (!func_608(iParam0))
	{
		return false;
	}
	if (!func_604(0))
	{
		return false;
	}
	_add_ammo_to_ped_by_type(Global_35, iParam0, iParam1, iParam2);
	return true;
}

bool func_607(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	iVar0 = func_602(iParam0, 0);
	if (is_weapon_valid(iVar0))
	{
		if (func_20() == -1)
		{
			func_603(iVar0);
			if (iParam1 == 1248274121)
			{
				func_1100(iVar0);
			}
		}
		if (!func_1072(iParam0, &uVar1, 1, 0, 0))
		{
			func_1068(iParam0, 1, 0, bParam2, iParam1);
			iVar6 = func_1101(iVar0);
			if (_is_weapon_sniper(iVar0))
			{
				func_605(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == -1415022764 || iVar0 == -160924582)
			{
				func_605(iVar0, 0, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == 2055893578)
			{
				func_605(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (_is_weapon_melee(iVar0))
			{
				if (iVar0 == 494733111 && !func_1059())
				{
					return false;
				}
				if (_0x2c83212a7aa51d3d(iParam0))
				{
				}
				else if (!func_1102(iVar0))
				{
					func_605(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
				}
				else
				{
					func_605(iVar0, _get_weapon_clip_size(iVar0) * 4, bParam3, bParam4, 0, 0, iParam1, 0);
				}
			}
			else if (_is_weapon_one_handed(iVar0))
			{
				iVar7 = func_1103(Global_35, 2, 0, 1);
				if ((((func_690(iVar7) && !Global_43891) && iVar7 != iVar0) && !func_598(24)) && bParam4)
				{
					_0xe9bd19f8121ade3e(Global_35, iVar7);
				}
				bVar8 = true;
				if (func_690(iVar7) && func_598(24))
				{
					if (!func_605(iVar0, iVar6, bParam3, bParam4, 3, bVar8, iParam1, 0))
					{
						return false;
					}
				}
				else if (!func_605(iVar0, iVar6, bParam3, bParam4, 0, bVar8, iParam1, 0))
				{
					return false;
				}
			}
			else if (!func_605(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0))
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

bool func_608(int iParam0)
{
	return _is_ammo_valid(iParam0);
}

bool func_609(int iParam0, int iParam1, int iParam2)
{
	if (!func_608(iParam0))
	{
		return false;
	}
	iVar4 = _get_weapon_type_from_ammo_type(iParam0);
	iVar3 = get_ped_ammo_by_type(Global_35, iParam0);
	if (func_690(iVar4))
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
		func_644(func_1104(iParam0), func_643(iParam0), 1);
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
	if (func_604(0))
	{
		if (func_606(iParam0, iVar0, iParam2))
		{
			*iParam1 = iVar0;
			return true;
		}
	}
	else
	{
		return func_649(iParam0, *iParam1, iParam2);
	}
	return false;
}

void func_610(int iParam0)
{
	if ((iParam0 == -615217896 && !func_331()) || iParam0 != -615217896)
	{
		if (func_1105(Global_35, iParam0, &uVar0))
		{
			func_628(player_ped_id(), iParam0, 0, -358215195, 1, 1, 1, 0, 1, 1);
		}
	}
	switch (iParam0)
	{
		case -62615415:
			Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
			func_634();
			break;
		case -832719552:
			Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
			func_634();
			break;
		case -1941112926:
			Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
			func_634();
			break;
		case -615217896:
			Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
			func_632();
			break;
		case -121629511:
			Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.2f);
			func_630();
			break;
	}
}

void func_611(int iParam0)
{
	switch (iParam0)
	{
		case -224110471:
			Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
			func_630();
			break;
		case 1289585739:
			Global_40.f_11095.f_61 = (Global_40.f_11095.f_61 + 0.1f);
			func_631();
			break;
		case 1441506783:
			Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
			break;
		case 780305678:
			Global_40.f_11095.f_56 = (Global_40.f_11095.f_56 + 0.1f);
			break;
		case -935153695:
			Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
			func_632();
			break;
		case 655868243:
			Global_40.f_11095.f_63 = (Global_40.f_11095.f_63 + 0.1f);
			func_633();
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
			func_634();
			break;
		case -569248339:
			Global_40.f_11095.f_64 = (Global_40.f_11095.f_64 + 0.3f);
			func_1106();
			break;
		case -1196089647:
			Global_40.f_11095.f_68 = (Global_40.f_11095.f_68 + 0.1f);
			break;
		case -982895431:
			Global_40.f_11095.f_69 = (Global_40.f_11095.f_69 + 0.1f);
			func_1107();
			break;
		case -1056342069:
			Global_40.f_11095.f_70 = (Global_40.f_11095.f_70 + 0.2f);
			break;
	}
}

struct<2> func_612(int iParam0)
{
	Var0.f_1 = iParam0;
	return Var0;
}

struct<2> func_613(int iParam0, int iParam1)
{
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

void func_614(int iParam0)
{
	bVar0 = func_596(iParam0, -2017733358);
	if (func_1108() < 3)
	{
		if (bVar0)
		{
			if (func_1110(func_1109(iParam0), iParam0))
			{
				func_644(79, func_643(func_1109(iParam0)), 1);
			}
			else
			{
				func_644(78, func_643(func_1109(iParam0)), 1);
			}
		}
		else
		{
			func_644(80, func_643(func_1111(iParam0)), 1);
		}
	}
}

bool func_615()
{
	if (((((func_1112(839908568, 400) || func_1112(-1134030454, 400)) || func_1112(623353496, 400)) || func_1112(-344413337, 400)) || func_1112(-1664948962, 400)) || func_1112(1795228059, 400))
	{
		return true;
	}
	return false;
}

int func_616(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, int iParam7)
{
	iVar0 = func_724(iParam0, bParam6, iParam7);
	if (!bParam1)
	{
		func_537(iVar0, sParam4, iParam5);
	}
	iVar1 = 752097756;
	if (bParam6)
	{
		iVar1 = -897553835;
	}
	func_538(iVar0, bParam1, fParam2, iParam3, iVar1);
	return iVar0;
}

void func_617(int iParam0)
{
	switch (iParam0)
	{
		case -625427311:
			func_592(51, 0, 0, 1520110311, 0, 0, 4, 0);
			func_594(51, 0, 0, 0, 0, -1, 0);
			func_1113(8192);
			break;
		case 581047644:
			func_592(51, 0, 0, -1992824800, 0, 0, 1, 0);
			func_594(51, 0, 0, 0, 0, -1, 0);
			func_1113(524288);
			break;
		case -644199619:
			func_592(39, 0, 0, 0, 0, 0, 1, 0);
			func_594(39, 0, 0, 0, 0, -1, 0);
			func_1114(16);
			break;
		case 684296857:
			func_592(41, 0, 0, 0, 0, 0, 1, 0);
			func_594(41, 0, 0, 0, 0, -1, 0);
			func_1115(8);
			break;
		case 466137807:
			func_592(49, 0, 0, 0, 0, 0, 1, 0);
			func_594(49, 0, 0, 0, 0, -1, 0);
			func_1116(16);
			break;
		case -1087522507:
			func_592(43, 0, 0, -1791518714, func_1117(1), 0, -1, 0);
			func_1118(1);
			break;
		case -405829000:
			func_592(43, 0, 0, -2087881550, func_1117(2), 0, -1, 0);
			func_1118(2);
			break;
		case 378660860:
			func_592(43, 0, 0, 1908068621, func_1117(4), 0, -1, 0);
			func_1118(4);
			break;
		case 1566111097:
			func_592(43, 0, 0, 1611247019, func_1117(8), 0, -1, 0);
			func_1118(8);
			break;
		case 1276007140:
			func_592(43, 0, 0, 1319635688, func_1117(16), 0, -1, 0);
			func_1118(16);
			break;
	}
}

void func_618(int iParam0)
{
	if (func_1119() == 1)
	{
		if (func_586(39))
		{
			func_318(342, 0);
		}
		else
		{
			func_318(343, 0);
			func_1114(1);
		}
	}
	if (func_1119() >= 30)
	{
		func_318(344, 0);
	}
	func_592(39, 0, 0, 0, 0, 0, -1, 0);
	func_594(39, 0, 0, func_1119(), 30, 1, 0);
}

void func_619(int iParam0)
{
	if (func_1120() == 1)
	{
		if (func_586(49))
		{
			func_318(409, 0);
		}
		else
		{
			func_318(410, 0);
			func_1116(1);
		}
	}
	if (func_1120() >= 10)
	{
		func_318(411, 0);
	}
	func_592(49, 0, 0, 0, 0, 0, -1, 0);
	func_594(49, 0, 0, func_1120(), 10, 1, 0);
}

void func_620(int iParam0)
{
	switch (iParam0)
	{
		case 1369162587:
			_0x3ea62e56f386c997(-949689219, 1);
			func_318(437, 0);
			func_318(440, 0);
			func_1121(-949689219, 444160793, &sVar0, 1, 0, 0);
			func_592(51, 0, 0, -949689219, sVar0, 0, -1, 0);
			func_594(51, 0, 0, sVar0, func_1079(-949689219, 20), 1, 0);
			func_1113(1);
			func_1122(-748969569, 0, 0);
			break;
		case 1610047510:
			_0x3ea62e56f386c997(-1248968496, 1);
			func_1121(-1248968496, -1969404854, &sVar0, 1, 0, 0);
			func_592(51, 0, 0, -1248968496, sVar0, 0, -1, 0);
			func_594(51, 0, 0, sVar0, func_1079(-1248968496, 20), 1, 0);
			func_1113(8);
			break;
		case 1317879106:
			_0x3ea62e56f386c997(1706369307, 1);
			func_1121(1706369307, -832850511, &sVar0, 1, 0, 0);
			func_592(51, 0, 0, 1706369307, sVar0, 0, -1, 0);
			func_594(51, 0, 0, sVar0, func_1079(1706369307, 20), 1, 0);
			func_1113(64);
			break;
		case 1062444751:
			_0x3ea62e56f386c997(1520110311, 1);
			func_1121(1520110311, -100913452, &sVar0, 1, 0, 0);
			func_592(51, 0, 0, 1520110311, sVar0, 0, -1, 0);
			func_594(51, 0, 0, sVar0, func_1079(1520110311, 20), 1, 0);
			func_1113(512);
			break;
		case 754186760:
			_0x3ea62e56f386c997(-1992824800, 1);
			func_318(438, 0);
			func_1121(-1992824800, 905173572, &sVar0, 1, 0, 0);
			func_592(51, 0, 0, -1992824800, sVar0, 0, -1, 0);
			func_594(51, 0, 0, sVar0, func_1079(-1992824800, 20), 1, 0);
			func_1113(32768);
			break;
		default:
			func_318(439, 0);
			break;
	}
}

void func_621()
{
	if (chal_get_num_ranks_completed(-1278339625) < 2)
	{
		chal_add_goal_progress_int(-1278339625, -1316535105, 1);
	}
}

void func_622(int iParam0, int iParam1)
{
	iVar1 = 0;
	if (func_20() == -1)
	{
		if (!func_586(43))
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
		else if (func_596(iParam0, 412399755))
		{
			func_1123(-1791518714);
			if (func_1124() == 0)
			{
				func_360(0, 10);
				iVar1 = func_1125(iParam0, iParam1, 1);
				if (((iParam0 == 281887510 || iParam0 == -164081697) || iParam0 == -1161319399) || iParam0 == 728781265)
				{
					if (func_1126(iParam0) < func_1127(iParam0))
					{
						func_592(43, iParam0, iParam1, -1791518714, iVar1, 0, -1, 0);
						func_594(43, 0, 0, iVar1, 30, 1, 0);
					}
				}
			}
		}
		if (!func_586(44))
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
		else if (func_596(iParam0, 709057512))
		{
			func_1123(-2087881550);
			if (func_1124() == 1)
			{
				func_360(0, 10);
				iVar1 = func_1125(iParam0, iParam1, 2);
				if ((iParam0 == -222563712 || iParam0 == 1794857344) || iParam0 == 1952409553)
				{
					if (func_1126(iParam0) < func_1127(iParam0))
					{
						func_592(43, iParam0, iParam1, -2087881550, iVar1, 0, -1, 0);
						func_594(43, 0, 0, iVar1, 37, 1, 0);
					}
				}
			}
		}
		if (!func_586(45))
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
		else if (func_596(iParam0, -1478961327))
		{
			func_1123(1908068621);
			if (func_1124() == 2)
			{
				func_360(0, 10);
				iVar1 = func_1125(iParam0, iParam1, 4);
				if (iParam0 == 2116770557)
				{
					if (!func_1128(_0x126cbebba46693cf(iVar0, 2114735110, 0)) >= 25)
					{
						func_1129(_0x126cbebba46693cf(iVar0, 2114735110, 0), 1);
						func_1077(48);
					}
					if (func_1126(iParam0) < func_1127(iParam0))
					{
						func_592(43, iParam0, iParam1, 1908068621, iVar1, 0, -1, 0);
						func_594(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
				else if ((iParam0 == -651064726 || iParam0 == -404270094) || iParam0 == 2093126853)
				{
					if (func_1126(iParam0) < func_1127(iParam0))
					{
						func_592(43, iParam0, iParam1, 1908068621, iVar1, 0, -1, 0);
						func_594(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
			}
		}
		if (!func_586(46))
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
		else if (func_596(iParam0, -1238404098))
		{
			func_1123(1611247019);
			if (func_1124() == 3)
			{
				func_360(0, 10);
				iVar1 = func_1125(iParam0, iParam1, 8);
				if (((iParam0 == 2085530337 || iParam0 == -150591160) || iParam0 == -323969289) || iParam0 == 1504361882)
				{
					if (func_1126(iParam0) < func_1127(iParam0))
					{
						func_592(43, iParam0, iParam1, 1611247019, iVar1, 0, -1, 0);
						func_594(43, 0, 0, iVar1, 50, 1, 0);
					}
				}
			}
		}
		if (!func_586(47))
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
		else if (func_596(iParam0, 1160548794))
		{
			func_1123(1319635688);
			if (func_1124() == 4)
			{
				func_360(0, 10);
				iVar1 = func_1125(iParam0, iParam1, 16);
				if (((iParam0 == -1521783510 || iParam0 == 1714875242) || iParam0 == 927763737) || iParam0 == 1019229063)
				{
					if (func_1126(iParam0) < func_1127(iParam0))
					{
						func_592(43, iParam0, iParam1, 1319635688, iVar1, 0, -1, 0);
						func_594(43, 0, 0, iVar1, 25, 1, 0);
					}
				}
			}
		}
	}
}

void func_623(int iParam0)
{
	if (iParam0 == 2116770557)
	{
		if (!func_1128(_0x126cbebba46693cf(iVar0, 2114735110, 0)) >= 25)
		{
			func_1129(_0x126cbebba46693cf(iVar0, 2114735110, 0), 1);
			func_1077(48);
		}
	}
}

void func_624(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar0 = _0x126cbebba46693cf(iVar1, 678508515, -1160144609);
		if (func_340(func_1130(iVar0, 10), 1, 0))
		{
			if (bParam2)
			{
				func_1131(iParam0, iVar0, sVar2, iParam1, bParam2);
			}
			else
			{
				func_1132(iParam0, iVar0, bParam3);
			}
		}
		iVar1++;
	}
}

void func_625(int iParam0, int iParam1, int iParam2)
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
				func_616(0, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, iVar0);
				return;
			}
		}
	}
	switch (iParam0)
	{
		case 489075255:
			func_616(-949580860, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1394529493:
			func_616(-1171997683, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1262623627:
			func_616(-2140931002, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1124867377:
			func_616(-1116228267, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1790920086:
			func_616(2112896861, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -2001202686:
			func_616(-1915150712, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1111063991:
			func_616(994220262, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1576210101:
			func_616(-1388440107, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 675090918:
			func_616(-1531790128, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 355838765:
			func_616(1351791770, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -343824903:
			func_616(-161493966, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1142684684:
			func_616(668131102, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1243851340:
			if (!func_1133())
			{
				func_616(1330954593, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			}
			break;
		case -525490740:
			func_616(817681514, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1736635264:
			func_616(1404311868, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1302860970:
			func_616(-175152067, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -1027115192:
			func_616(-526915387, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -1064332555:
			func_616(101362741, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -1954478446:
			func_616(1458818027, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -518592739:
			func_616(-1957208512, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -2010073778:
			func_616(2066857461, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -700133011:
			func_616(803940201, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -1415414735:
			func_616(-1717765429, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case 2045548742:
			func_616(1379920914, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case 830381058:
			func_616(447209691, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
	}
}

void func_626(int iParam0)
{
	if (func_586(41))
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
			func_1134(-1865241121);
			func_1135(-642026005);
			func_1136(-642026005);
			func_360(0, 10);
			break;
		case -2108314374:
			func_1134(2117142684);
			func_1135(-940584364);
			func_1136(-940584364);
			func_360(0, 10);
			break;
		case -1193798153:
			func_1134(-1409326024);
			func_1135(1972645282);
			func_1136(1972645282);
			func_360(0, 10);
			break;
		case -787702678:
			func_1134(-641744968);
			func_1135(1667205433);
			func_1136(1667205433);
			func_360(0, 10);
			break;
		case -804542901:
			func_1134(-946988203);
			func_1135(1362715885);
			func_1136(1362715885);
			func_360(0, 10);
			break;
		case -1696275132:
			func_1134(-646136018);
			func_1135(1053540370);
			func_1136(1053540370);
			func_360(0, 10);
			break;
		case -161595323:
			func_1134(-955835837);
			func_1135(-1100103852);
			func_1136(-1100103852);
			func_360(0, 10);
			break;
		case -1114363619:
			func_1134(-179276075);
			func_1135(-1409869209);
			func_1136(-1409869209);
			func_360(0, 10);
			break;
		case -368407134:
			func_1134(-492711560);
			func_1135(-1760235357);
			func_1136(-1760235357);
			func_360(0, 10);
			break;
		case 1997759228:
			func_1134(1764383959);
			func_1135(-138366827);
			func_1136(-138366827);
			func_360(0, 10);
			break;
		case 1265573293:
			func_1134(317501533);
			func_1135(-1261163843);
			func_1136(-1261163843);
			func_360(0, 10);
			break;
		case -1030441283:
			func_1134(817753087);
			func_1135(-963523016);
			func_1136(-963523016);
			func_360(0, 10);
			break;
		case -1490884871:
			func_1134(576606016);
			func_1135(560825326);
			func_1136(560825326);
			func_360(0, 10);
			break;
		case -395458616:
			func_1134(814934957);
			func_1135(858269539);
			func_1136(858269539);
			break;
	}
}

void func_627(int iParam0, int iParam1)
{
	func_1137(iParam0, iParam1, &uVar0);
}

int func_628(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	if (iParam3 == -358215195)
	{
		Var0 = { func_687(iParam1, 1, 0) };
		iParam3 = func_688(Var0.f_4);
		if (iParam3 == -358215195)
		{
			return 0;
		}
	}
	if (!func_1138(iParam1, iParam2, func_675(iParam3, 1), bParam4, bParam9))
	{
		return 0;
	}
	func_1139(1, (func_20() == -1 && bParam5), 1);
	switch (iParam3)
	{
		case 1145151482:
		case 1742327865:
			if (bParam8 && iParam1 != &Global_1946804->f_57[func_675(iParam3, 1)])
			{
				func_686(31, 0, 0, 0, 0);
			}
			break;
		case 1108822547:
			if (func_1140(32768) && iParam1 != &Global_1946804->f_57[func_675(iParam3, 1)])
			{
				func_1141();
				func_686(22, iParam3, 256, 0, 0);
			}
			clear_ped_damage_decal_by_zone(iParam0, 2, "ALL");
			clear_ped_blood_damage_by_zone(iParam0, 2);
			break;
	}
	if (!bParam6)
	{
		if (bParam7)
		{
			func_686(22, iParam3, 0, 0, 0);
		}
		return 1;
	}
	iVar5 = func_1142(iParam3);
	if (is_ped_a_player(iParam0))
	{
		func_686(19, 0, iVar5, 0, 0);
		if ((iParam3 == 1742327865 || iParam3 == 1108822547) || iParam3 == 1145151482)
		{
			func_1143(0);
			func_1144(36, 0, 0);
		}
	}
	else
	{
		iVar5 |= 1;
		func_686(19, 0, iVar5, iParam0, 0);
	}
	return 1;
}

bool func_629(int iParam0, bool bParam1)
{
	Var3.f_9 = -1591664384;
	bVar17 = false;
	*iParam0 = 0;
	iVar18 = func_1103(get_player_ped(get_player_index()), 2, 1, 0);
	iVar19 = func_1103(get_player_ped(get_player_index()), 3, 1, 0);
	if (func_1145("ALL WEAPONS", &iVar0, &iVar1, -1591664384, 0))
	{
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (func_1146(&Var3, iVar2, iVar0, iVar1))
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
						func_1147(iVar0);
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

void func_630()
{
	_0x11a7ff918ef6bc66(player_id(), (1f - Global_40.f_11095.f_60));
}

void func_631()
{
	fVar0 = Global_40.f_11095.f_62;
	fVar1 = (Global_40.f_11095.f_62 + Global_40.f_11095.f_61);
	_0x497a6539bb0e8787(player_id(), (1f - fVar0), (1f - fVar1));
}

void func_632()
{
	_0xe0d6c2a146a5c993(player_id(), (1f / (1f + Global_40.f_11095.f_58)));
}

void func_633()
{
	_0xb427911ea6dffef3(player_id(), (1f - Global_40.f_11095.f_63));
}

void func_634()
{
	func_1148();
	func_1149();
	func_1150();
}

void func_635(int iParam0, int iParam1, bool bParam2)
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

void func_636(int iParam0, bool bParam1)
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
	func_1087(_create_var_string(2, sVar1), _create_var_string(2, sVar2), get_hash_key("toast_log_blips"), get_hash_key("BLIP_RC_TREASURE_HUNTER"), 1433015236, _create_var_string(2, sVar3), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
}

void func_637(int iParam0)
{
	Global_40.f_12004.f_7 = (Global_40.f_12004.f_7 || iParam0);
}

void func_638(int iParam0)
{
	Global_40.f_12004.f_8 = (Global_40.f_12004.f_8 || iParam0);
}

void func_639(int iParam0)
{
	Global_40.f_12004.f_9 = (Global_40.f_12004.f_9 || iParam0);
}

void func_640(int iParam0)
{
	Global_40.f_12004.f_10 = (Global_40.f_12004.f_10 || iParam0);
}

void func_641(int iParam0)
{
	Global_40.f_12004.f_11 = (Global_40.f_12004.f_11 || iParam0);
}

void func_642(int iParam0)
{
	Global_40.f_12004.f_12 = (Global_40.f_12004.f_12 || iParam0);
}

int func_643(int iParam0)
{
	if (!func_576(iParam0, 0))
	{
		return 0;
	}
	return iParam0;
}

void func_644(int iParam0, int iParam1, bool bParam2)
{
	func_682(iParam0, &iVar0, &iVar1);
	if (!func_683(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_1151(iParam0, 1024))
	{
		return;
	}
	func_684(iVar0, iVar1);
	Global_1905944->f_22[iParam0]->f_3[0] = iParam1;
	Global_1905944->f_22[iParam0]->f_3[0]->f_1 = 2;
}

void func_645(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	func_682(iParam0, &iVar0, &iVar1);
	if (!func_683(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_1151(iParam0, 1024))
	{
		return;
	}
	func_684(iVar0, iVar1);
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

int func_646()
{
	iVar0 = _0x5461c821d00fe15a(-2076669067, 0);
	if (iVar0 == func_1075())
	{
		return func_647();
	}
	iVar4 = (func_1075() - iVar0);
	iVar5 = get_random_int_in_range(0, iVar4);
	iVar2 = 0;
	while (iVar2 < func_1075())
	{
		iVar1 = _0x126cbebba46693cf(iVar2, -2076669067, 0);
		if (!func_1152(iVar1))
		{
			if (iVar5 == iVar3)
			{
				return func_1076(iVar1);
			}
			iVar3++;
		}
		iVar2++;
	}
	return 0;
}

int func_647()
{
	iVar0 = get_random_int_in_range(0, func_1075());
	return func_1076(_0x126cbebba46693cf(iVar0, -2076669067, 0));
}

void func_648(int iParam0)
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

bool func_649(int iParam0, int iParam1, int iParam2)
{
	if (!func_576(iParam0, 0))
	{
		return false;
	}
	if (iParam1 < 1)
	{
		return false;
	}
	Var0 = { func_687(iParam0, 0, 1) };
	Var5 = { func_1097(iParam0, Var0, Var0.f_4, 0) };
	return func_1153(iParam0, &Var5, &Var0, iParam1, iParam2, 0);
}

void func_650(int iParam0)
{
	if (func_20() != -1)
	{
		return;
	}
	switch (func_600(iParam0))
	{
		case 81053684:
			if (iParam0 == -1623728698 && func_1154(81053684, 0) <= 0)
			{
				func_686(32, iParam0, 0, 0, 0);
			}
			break;
		case -2061583405:
			if (iParam0 == -1535516064 || iParam0 == -763730846)
			{
				func_686(32, iParam0, 0, 0, 0);
			}
			break;
		case -999503751:
			iVar0 = func_1155(iParam0);
			if (func_1156(iVar0))
			{
				func_1157(iVar0, (iVar0 >= 0 && iVar0 <= 5), 1);
			}
			else
			{
				func_686(30, iParam0, 0, 0, 0);
			}
			if (func_677() == -2125499975 || func_677() == -449205311)
			{
				switch (iParam0)
				{
					case 624063935:
					case 1160643979:
					case 1661121390:
						func_686(32, iParam0, 0, 0, 0);
						break;
				}
			}
			else if (func_677() == 1160113249)
			{
				switch (iParam0)
				{
					case -361635024:
						func_686(32, iParam0, 0, 0, 0);
						break;
				}
			}
			break;
		case -525676072:
			if (!func_1158(-525676072, 0))
			{
				if (func_1159(-525676072, &iVar1))
				{
					func_686(33, iVar1, 0, 0, 0);
				}
			}
			func_686(32, iParam0, 0, 0, 0);
			break;
	}
	if ((iParam0 == 899611344 || iParam0 == -1515874150) || iParam0 == -1185145312)
	{
		if (!func_1160(99217379))
		{
			func_628(Global_35, iParam0, 0, 99217379, 1, 1, 1, 0, 1, 1);
		}
		func_599(24);
		if (func_629(&iVar2, 0))
		{
			func_605(iVar2, 0, 0, 1, 3, 0, 752097756, 0);
		}
	}
}

void func_651(int iParam0)
{
	if (func_596(iParam0, 943695443))
	{
		func_1161(0, iParam0);
	}
	else if (func_596(iParam0, -2096528786))
	{
		func_1161(1, iParam0);
	}
	else if (func_596(iParam0, -1094167013))
	{
		func_1161(2, iParam0);
	}
	else if (func_596(iParam0, 1936654645))
	{
		func_1161(3, iParam0);
	}
	else if (func_596(iParam0, 1306489306))
	{
		func_1161(4, iParam0);
	}
	else if (func_596(iParam0, 435762317))
	{
		func_1161(5, iParam0);
	}
	else if (func_596(iParam0, 1259363210))
	{
		func_1161(6, iParam0);
	}
	else if (func_596(iParam0, 881398259))
	{
		func_1161(7, iParam0);
	}
	else if (func_596(iParam0, -541549214))
	{
		func_1161(8, iParam0);
	}
	else if (func_596(iParam0, 130796156))
	{
		func_1161(-1, iParam0);
	}
}

int func_652(int iParam0, int iParam1)
{
	Var4.f_1 = 10;
	func_1162(&Var4, 1356624740);
	return func_1163(iParam0, &Var4, &uVar0, iParam1);
}

struct<2> func_653(int iParam0)
{
	if (!func_576(iParam0, 0))
	{
		return Var0;
	}
	if (func_596(iParam0, -305066475))
	{
		if (func_20() == -1)
		{
			if (func_596(iParam0, -537818634))
			{
				return func_94(189951448);
			}
			else
			{
				return func_94(1176172851);
			}
		}
	}
	else if (func_596(iParam0, -537818634))
	{
		return func_94(-963660207);
	}
	if (func_596(iParam0, 2084895747))
	{
		return func_94(1694039471);
	}
	return Var2;
}

void func_654(int iParam0)
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

void func_655(int iParam0, char* sParam1)
{
	sVar0 = func_1165(func_1164(0));
	func_706(_create_var_string(38, "ITEM_CAUGHT_PUMP", sParam1, sVar0), "inventory_items", func_1166(iParam0), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

void func_656(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (iParam0 == 1662813436)
	{
		return;
	}
	if (!func_576(iParam0, 0))
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
	if (!func_1167())
	{
		func_1168(iParam0, iParam1, bParam2, bParam4);
		return;
	}
	bVar0 = false;
	iVar1 = absi(iParam1);
	StringCopy(&cVar2, func_1169(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
	if (iParam1 > 0)
	{
	}
	else
	{
		if (bParam3 || bParam4)
		{
			StringCopy(&cVar2, func_1169(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
		}
		else if (bParam2 && func_597(iParam0, 2097152))
		{
			StringCopy(&cVar2, "ITEM_READ_PUMP_MULT", 32);
		}
		bVar0 = true;
	}
	iVar6 = func_595(iParam0);
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
	else if (!func_1170(iParam0, &Var7, iVar11, iVar10, 0, -401018458))
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
	sVar15 = func_1171(_create_var_string(10, &cVar2, _create_var_string(0, func_643(iParam0)), iVar1), iVar12);
	if (((((iParam1 == 1 || func_596(iParam0, 1443104131)) || iParam0 == -885810591) || iParam0 == -1424823393) || iParam0 == 1463786584) || iParam0 == 1358243310)
	{
		sVar15 = _create_var_string(0, func_643(iParam0));
	}
	func_706(sVar15, Var7.f_1, get_hash_key(Var7), iVar14, iVar12, "Transaction_Feed_Sounds", sVar13, 0, 1);
}

int func_657(int iParam0, int iParam1)
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

struct<10> func_658(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
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

bool func_659(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, int iParam10, int iParam11, int iParam12)
{
	*iParam10 = _item_database_create_item_collection(&uParam0, iParam11, iParam12);
	if (*iParam10 >= 0)
	{
		return true;
	}
	return false;
}

int func_660(int iParam0, int iParam1)
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

bool func_661(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!func_576(iParam0, 0))
	{
		return false;
	}
	if (iParam1 != 0 && !func_1172(iParam0, iParam1, 1))
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
				if (Var2.f_2 == 1644203656 && func_1172(iParam0, Var2, 1))
				{
					if (func_1173(iParam0, Var2))
					{
						bVar0 = true;
					}
				}
			}
			iVar49++;
		}
	}
	else if (func_1173(iParam0, iParam1))
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

int func_662(int iParam0)
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

void func_663(int iParam0)
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

void func_664()
{
	bVar0 = is_dlc_present(33819255);
	if (!bVar0)
	{
		if (_unlock_is_unlocked(-121456797))
		{
			_0xe824ce7d13fcb300(2116153146, 0);
			func_1174(0);
			_unlock_set_unlocked(-121456797, false);
			func_1175();
		}
		return;
	}
	if (!func_320((*Global_1835011)[4]->f_1, 1))
	{
		return;
	}
	func_1176();
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
	func_1174(1);
}

void func_665()
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

void func_666()
{
	bVar0 = is_dlc_present(-751383868);
	if (!bVar0)
	{
		if (_unlock_is_unlocked(1244328330))
		{
			func_1177(0);
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
	func_1177(1);
}

void func_667()
{
	bVar0 = is_dlc_present(-1499823613);
	if (!bVar0)
	{
		if (_unlock_is_unlocked(398807247))
		{
			func_1178(15000, 0, 0, 0, 1);
			func_1177(0);
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
	func_1177(1);
}

void func_668()
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
			if (!func_1179(1))
			{
				func_640(1);
			}
		}
		if (_0xf83d3dda4d3c8169(1809565830) > 0)
		{
			if ((!func_340(1119149048, 1, 0) && !func_184((*Global_1835011)[23]->f_1)) && !Global_43891)
			{
				func_311(1119149048, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			}
			if (!func_1179(2))
			{
				func_640(2);
			}
		}
		if (_0xf83d3dda4d3c8169(2056119786) > 0 && !func_1179(4))
		{
			func_640(4);
		}
		if (func_1179(0))
		{
			func_1180(0);
		}
	}
	else
	{
		if (_0xf83d3dda4d3c8169(-1491419385) > 0)
		{
			if (func_340(1191437462, 1, 0))
			{
				func_671(1191437462, 1, 1, -142743235, 0);
			}
		}
		if (_0xf83d3dda4d3c8169(1809565830) > 0)
		{
			if (func_340(1119149048, 1, 0))
			{
				func_671(1119149048, 1, 1, -142743235, 0);
			}
		}
		if (func_1179(1))
		{
			func_1180(1);
		}
		if (func_1179(2))
		{
			func_1180(2);
		}
		if (func_1179(4))
		{
			func_1180(4);
		}
		if (!func_1179(0))
		{
			func_640(0);
		}
	}
}

void func_669()
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
	Var1 = { func_1181() };
	if (!_0xb881ca836cc4b6d4(&Var1))
	{
		func_603(127400949);
		if (func_605(127400949, 0, 0, 0, 0, 0, 752097756, 0))
		{
			Var1 = { func_1181() };
		}
	}
	if (_0xb881ca836cc4b6d4(&Var1))
	{
		func_1182(-2055673461, Var1, 1423542233);
		func_1182(-202131179, Var1, -1264898804);
		func_1182(2013836545, Var1, 1592019450);
		func_1182(1497476650, Var1, 1117400455);
		func_1182(1063571467, Var1, 1150213537);
		func_1182(2107224237, Var1, 1598825281);
		func_1182(1747981656, Var1, -712527121);
		func_1182(-1371140647, Var1, 454332195);
		func_1182(-19142973, Var1, 256105670);
		func_1182(-2074737817, Var1, -1328061889);
		func_1182(-1114256243, Var1, -782241404);
		func_1182(-1653277288, Var1, 1669853467);
		func_1182(1869398132, Var1, -1559225678);
		func_1182(459868358, Var1, -266425508);
		if (!_0x3ab6c7b0bb0df4b1(Global_35, -1) && !func_29())
		{
			get_current_ped_weapon(Global_35, &iVar15, false, 2, false);
			get_current_ped_weapon(Global_35, &iVar16, false, 0, false);
			if (func_690(iVar16))
			{
				if (iVar16 != 127400949)
				{
					if (_is_weapon_one_handed(iVar16))
					{
						if (func_598(24))
						{
							set_current_ped_weapon(Global_35, iVar16, true, 3, false, false);
						}
						set_current_ped_weapon(Global_35, 127400949, true, 0, false, false);
					}
					else if (_is_weapon_two_handed(iVar16))
					{
						if ((func_598(24) && func_690(iVar15)) && iVar15 != 127400949)
						{
							set_current_ped_weapon(Global_35, iVar15, true, 3, false, false);
						}
						set_current_ped_weapon(Global_35, 127400949, true, 2, false, false);
					}
				}
			}
			else if (!func_690(iVar15))
			{
				set_current_ped_weapon(Global_35, 127400949, true, 2, false, false);
			}
			else if (iVar15 != 127400949)
			{
				if (func_598(24))
				{
					set_current_ped_weapon(Global_35, iVar15, true, 3, false, false);
				}
				set_current_ped_weapon(Global_35, 127400949, true, 2, false, false);
			}
		}
		_unlock_set_unlocked(-236259196, true);
	}
}

void func_670()
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

int func_671(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	if (!func_576(iParam0, 0))
	{
		return 0;
	}
	bVar0 = iParam3 == 562618531;
	bVar1 = iParam3 == 1992602754;
	bVar2 = iParam3 == -1387038764;
	iVar3 = func_1073(iParam0, 1);
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
			func_656(iParam0, -iParam1, bVar0, bVar1, bVar2);
		}
		return 0;
	}
	if (!func_340(iParam0, 1, bParam4))
	{
		return 0;
	}
	Var5 = { func_653(iParam0) };
	if (_stat_id_is_valid(&Var5))
	{
		if ((func_580(iParam0, 0, 0) - iParam1) >= 0)
		{
			_0xbd861ae8a5181ed7(&Var5, iParam1);
		}
		else if ((func_580(iParam0, 0, 0) - iParam1) < 0)
		{
			func_671(iParam0, func_580(iParam0, 0, 0), bParam2, iParam3, bParam4);
			return 0;
		}
	}
	if (func_595(iParam0) == -427144552)
	{
		if (!func_1183(iParam0, iParam1, 0, iParam3))
		{
			return 0;
		}
	}
	else if (!func_1184(iParam0, iParam1, iParam3, bParam2, bParam4))
	{
		return 0;
	}
	if (iParam0 == -569063887)
	{
		Global_1935496->f_20 = 0;
	}
	if (!func_604(0))
	{
		bParam2 = true;
	}
	if (!bParam2 && iParam0 != 1309979101)
	{
		func_656(iParam0, -iParam1, bVar0, bVar1, bVar2);
	}
	func_1185(iParam0, iParam1);
	return 1;
}

bool func_672(int iParam0)
{
	switch (func_600(iParam0))
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

void func_673(int iParam0, bool bParam1, bool bParam2)
{
	switch (func_600(iParam0))
	{
		case -2061583405:
			bVar0 = func_1186(iParam0, &(Global_1946804->f_2657.f_21));
			break;
		case 81053684:
			bVar0 = func_1186(iParam0, &(Global_1946804->f_2657.f_23));
			break;
		case -999503751:
			bVar0 = func_1186(iParam0, &(Global_1946804->f_2657.f_20));
			break;
		case -525676072:
			bVar0 = func_1186(iParam0, &(Global_1946804->f_2657.f_22));
			break;
		case -1719060085:
			bVar0 = func_1186(iParam0, &(Global_1946804->f_2657.f_24));
			break;
		case -413129408:
			bVar0 = func_1186(iParam0, &(Global_1946804->f_2657.f_25));
			break;
	}
	if (!bVar0)
	{
		return;
	}
	if (bParam2)
	{
		func_1187();
	}
	if (bParam1)
	{
		func_1188(0, 0);
	}
}

int func_674(int iParam0)
{
	Var0 = { func_687(iParam0, 1, 0) };
	return func_688(Var0.f_4);
}

int func_675(int iParam0, int iParam1)
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

void func_676(int iParam0)
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
		iVar0 = func_675(iVar1, 1);
		if (iVar0 < 0 || iVar0 >= 39)
		{
		}
		else
		{
			func_1189(Global_1946804->f_1378.f_1[iVar0], 2, 6);
		}
	}
}

int func_677()
{
	return Global_1946804->f_1;
}

bool func_678(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)
{
	Var4 = func_1190(iParam6);
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
		func_1192(uParam0, func_1191(iVar0), 1);
	}
	while (_0xed4413cee1bf142c(&Var4))
	{
		if (!_0x44b3a36933ac009c(&iVar0, &Var4, 1409451727))
		{
		}
		else
		{
			iVar3 = iVar0;
			iVar1 = func_675(iVar3, 1);
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
							if (func_1193(iVar3) && func_1194(&(uParam0->f_1[iVar1]), iVar3, &iVar0))
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
							func_1195(uParam0, &(uParam0->f_1[&Global_1946804->f_2612[iVar1]]), &(Global_1946804->f_2612[iVar1]), 0, 0);
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

Vector3 func_679(int iParam0, int iParam1)
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

int func_680(int iParam0, int iParam1)
{
	vVar0 = { func_679(iParam0, iParam1) };
	return vVar0.x;
}

void func_681(var uParam0, int iParam1, int iParam2)
{
	*Global_26796.f_26[iParam2]->f_1.f_1[iParam1] = { *uParam0 };
	Global_26796.f_26[iParam2]->f_1.f_1[iParam1]->f_2 = (Global_26796.f_26[iParam2]->f_1.f_1[iParam1]->f_2 - Global_26796.f_26[iParam2]->f_1.f_1[iParam1]->f_2 & 1);
}

void func_682(int iParam0, int iParam1, int iParam2)
{
	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

bool func_683(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return false;
	}
	if (func_1196(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_1197(iParam0))
	{
		return false;
	}
	if (func_1198(iParam0))
	{
		return false;
	}
	if ((Global_1898164->f_163 && !func_1151(iParam0, 1)) || func_82(32768))
	{
		if (!func_1151(iParam0, 262144) || !Global_1905944->f_5696)
		{
			return false;
		}
	}
	if (!func_1199())
	{
		return false;
	}
	return true;
}

void func_684(int iParam0, int iParam1)
{
	uVar0 = Global_1905944[iParam0];
	set_bit(&uVar0, iParam1);
	(*Global_1905944)[iParam0] = uVar0;
}

void func_685(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 = (uParam0->f_2 - (uParam0->f_2 && iParam1));
}

void func_686(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (bParam4)
	{
		func_1200(16384);
	}
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	Var0.f_2 = iParam2;
	Var0.f_3 = iParam3;
	func_1201(Var0);
}

struct<5> func_687(int iParam0, bool bParam1, bool bParam2)
{
	Var0 = { func_1202(bParam1) };
	Var0.f_4 = 1084182731;
	switch (func_595(iParam0))
	{
		case -1037537535:
			if (!_inventory_fits_slot_id(iParam0, 1034665895))
			{
				Var0 = { func_1097(889965687, Var0, 1034665895, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, 889965687);
			}
			else
			{
				Var0.f_4 = 1034665895;
			}
			break;
		case -427144552:
			Var0 = { func_1203(bParam1) };
			if (bParam2 && func_1204(iParam0, 1))
			{
				Var5.f_9 = -1591664384;
				if (!func_1095(iParam0, &Var0, 1728382685, 0))
				{
					Var0.f_4 = 1728382685;
				}
				else if (!func_1095(iParam0, &Var0, -649335959, 0))
				{
					Var0.f_4 = -649335959;
				}
				else if (func_1096(iParam0, &Var5, 1728382685))
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
			Var0 = { func_1205(bParam1) };
			switch (func_600(iParam0))
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
			if (func_1206(iParam0, -1823706425))
			{
				Var0 = { func_1097(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, -1838434463);
			}
			else if (func_1206(iParam0, -1483207246))
			{
				Var0 = { func_1097(889965687, Var0, 1034665895, bParam1) };
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
				if (!func_1207(Var0, &Var27, bParam1, 0))
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

int func_688(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (Global_1946804->f_57[iVar0]->f_8 == iParam0)
		{
			return func_1208(iVar0, 1);
		}
		iVar0++;
	}
	return -358215195;
}

void func_689(int iParam0)
{
	func_1189(Global_1946804->f_1497.f_1[func_675(iParam0, 1)], 2, 6);
	func_1189(Global_1946804->f_1378.f_1[func_675(iParam0, 1)], 2, 6);
}

bool func_690(int iParam0)
{
	return (is_weapon_valid(iParam0) && iParam0 != -1569615261);
}

bool func_691(int iParam0)
{
	return iParam0 != 0;
}

int func_692(int iParam0)
{
	iVar0 = -1;
	if (!func_691(iParam0))
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

bool func_693(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

int func_694(int iParam0)
{
	return (shift_right(iParam0, 26) & 31 * func_1209(is_bit_set(iParam0, 31), -1, 1)) + 1898;
}

int func_695(int iParam0)
{
	return shift_right(iParam0, 22) & 15;
}

int func_696(int iParam0)
{
	return shift_right(iParam0, 17) & 31;
}

int func_697(int iParam0)
{
	return shift_right(iParam0, 12) & 31;
}

int func_698(int iParam0)
{
	return shift_right(iParam0, 6) & 63;
}

int func_699(int iParam0)
{
	return shift_right(iParam0, 0) & 63;
}

int func_700(int iParam0, int iParam1)
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

void func_701(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_1210(iParam0, iParam6);
	func_1211(iParam0, iParam5);
	func_1212(iParam0, iParam4);
	func_1213(iParam0, iParam3);
	func_1214(iParam0, iParam2);
	func_1215(iParam0, iParam1);
}

bool func_702(int iParam0)
{
	if (iParam0 == -15)
	{
		return false;
	}
	iVar0 = func_699(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return false;
	}
	iVar1 = func_698(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return false;
	}
	iVar2 = func_697(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return false;
	}
	iVar3 = func_694(iParam0);
	if ((iVar3 <= 0 || iVar3 > 1930) || iVar3 < 1866)
	{
		return false;
	}
	iVar4 = func_695(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return false;
	}
	iVar5 = func_696(iParam0);
	if (iVar5 < 1 || iVar5 > func_700(iVar4, iVar3))
	{
		return false;
	}
	return true;
}

bool func_703(int iParam0, bool bParam1)
{
	return func_1050(func_278(), iParam0, bParam1);
}

void func_704(var uParam0, int iParam1)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

bool func_705(int iParam0, int iParam1)
{
	if (!func_576(iParam0, 0))
	{
		return false;
	}
	if (Global_1935630->f_12)
	{
		return false;
	}
	iVar0 = func_1073(iParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_1145("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_1146(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_690(Var4.f_4))
			{
			}
			else if (_get_ammo_type_for_weapon(Var4.f_4) == iVar0)
			{
				func_1147(iVar1);
				return true;
			}
			iVar3++;
		}
		func_1147(iVar1);
	}
	return false;
}

var func_706(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
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
	func_1216(sParam0, sParam1, iParam2);
	return uVar20;
}

int func_707()
{
	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar2 = func_1217(iVar1);
		if (!_unlock_is_visible(func_1218(iVar2)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_708()
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		iVar1 = func_1217(iVar0);
		if (!_unlock_is_visible(func_1218(iVar1)))
		{
			_unlock_set_visible(func_1218(iVar1), true);
		}
		iVar0++;
	}
}

bool func_709(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_1014(iParam0))
		{
			return false;
		}
	}
	return (Global_40.f_4942[iParam0] && iParam1) != 0;
}

void func_710(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_513(iParam0))
		{
			return;
		}
	}
	Global_40.f_4942[iParam0] = (Global_40.f_4942[iParam0] || iParam1);
}

bool func_711()
{
	return (func_191(&Global_1935630, 4096) || _get_number_of_references_of_script_with_name_hash(1637780761) > 0);
}

int func_712(var uParam0, int iParam1, int iParam2, int iParam3)
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
	if (!func_576(iVar0, 0))
	{
		return 0;
	}
	if (!func_1219(iVar0))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	iVar3 = 1;
	func_1220(iVar0, iVar1, &iVar3, 0);
	iVar4 = (iVar2 * iVar3);
	if (func_596(iVar0, 58855631))
	{
		iVar4 = iVar2;
	}
	Var5 = { func_687(iVar0, 0, 1) };
	iVar10 = func_1221(iVar0, &Var5, 0, 0);
	if (iVar10 == 0)
	{
		return 0;
	}
	else if (iVar10 < iVar4)
	{
		iVar2 = ceil((to_float(iVar10) / to_float(iVar3)));
		iVar4 = iVar10;
	}
	iVar11 = (func_1222(iVar0, iVar1, 1, 0, 0) * iVar2);
	if (iVar11 <= 0)
	{
		return 0;
	}
	if (!func_1223(iVar11))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	if (!func_311(iVar0, iVar4, 1, 0, 0, 1248274121, 0, 0, 0, 0))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	func_1178(iVar11, 0, 0, 0, 1);
	*iParam3 = (*iParam3 + iVar11);
	*iParam1 = (*iParam1 + iVar2);
	return 1;
}

var func_713(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
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

void func_714(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (is_string_null_or_empty(sParam1))
	{
		sParam1 = "FEED_MONEY_SPEND";
	}
	func_706(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 1831944558, 1, 859817522, 0, 0, 0, 1);
}

var func_715(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

void func_716(bool bParam0, bool bParam1)
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

void func_717(int iParam0, int iParam1, float fParam2, int iParam3)
{
	iVar0 = floor((to_float(iParam1) * fParam2));
	iVar1 = ((iParam1 - iVar0) / iParam3);
	if (func_1040())
	{
		iVar2 = floor((to_float(iVar1) * 0.1f));
		_uilog_add_total_take_entry(1072517412, 908516622, _create_var_string(2, "MISSION_COMPLETE_TAKE_GANG"), _create_var_string(2, "MISSION_COMPLETE_TAKE_AMOUNT", iVar0), -1689362167);
	}
	else
	{
		_uilog_add_total_take_entry(2067252994, 908516622, _create_var_string(2, "MISSION_COMPLETE_TAKE_GANG"), _create_var_string(2, "MISSION_COMPLETE_TAKE_AMOUNT", iVar0), -1689362167);
	}
	iVar3 = iVar1;
	if (func_1040())
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
					func_1224(1, iVar1);
					func_1224(8, iVar1);
					func_1224(7, iVar1);
					break;
				case 12:
					func_1224(6, iVar1);
					break;
				case 53:
					func_1224(3, iVar1);
					func_1224(7, iVar1);
					func_1224(4, iVar1);
					break;
				case 20:
					func_1224(8, iVar1);
					break;
				case 19:
					func_1224(1, iVar1);
					func_1224(2, iVar1);
					break;
				case 24:
					func_1224(3, iVar1);
					func_1224(9, iVar1);
					func_1224(20, iVar1);
					break;
				case 28:
					func_1224(1, iVar1);
					break;
				case 34:
					func_1224(23, iVar1);
					func_1224(2, iVar1);
					func_1224(18, iVar1);
					break;
				case 29:
					func_1224(0, iVar1);
					func_1224(9, iVar1);
					break;
				case 37:
					break;
				case 58:
					break;
				case 57:
					func_1224(0, iVar1);
					func_1224(3, iVar1);
					func_1224(2, iVar1);
					func_1224(11, iVar1);
					func_1224(6, iVar1);
					func_1224(25, iVar1);
					func_1224(24, iVar1);
					break;
			}
			break;
		case 8:
			switch (iVar4)
			{
				case 94:
					func_1224(5, iVar1);
					break;
				case 63:
					func_1224(1, iVar1);
					func_1224(3, iVar1);
					break;
				case 37:
					func_1224(23, iVar1);
					break;
				case 116:
					break;
			}
			break;
		case 11:
			if (iParam0 == func_356(0, 10, 11, 2116153146))
			{
				func_1224(7, iVar1);
				func_1224(4, iVar1);
			}
			else if (iParam0 == func_356(0, 7, 11, -379687487))
			{
				func_1224(8, iVar1);
				func_1224(15, iVar1);
			}
			else if (iParam0 == func_356(0, 8, 11, -1386089015))
			{
				func_1224(3, iVar1);
			}
			else if (iParam0 == func_356(0, 11, 11, -1952009645))
			{
				func_1224(6, iVar1);
				func_1224(3, iVar1);
			}
			else if (iParam0 == func_356(0, 12, 11, 2065895756))
			{
				func_1224(9, iVar1);
			}
			break;
	}
	_uilog_set_total_take_summary(_create_var_string(2, "MISSION_COMPLETE_TAKE_TOTAL", iParam1), _create_var_string(2, "MISSION_COMPLETE_TAKE_TOTAL_GANG", func_1225()));
	if (!func_1226(629))
	{
		func_318(629, 0);
	}
}

int func_718(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_3;
	}
	return 0;
}

bool func_719(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 17)
	{
		return false;
	}
	return true;
}

bool func_720(int iParam0, int iParam1, int iParam2)
{
	if (!func_719(iParam0))
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

int func_721()
{
	if (Global_1572887->f_12 == -1)
	{
		return 771;
	}
	return 20001;
}

int func_722(int iParam0, int iParam1, int iParam2)
{
	return ((iParam2 & 31 || shift_left(iParam0 & 1023, 5)) || shift_left(iParam1 & 16383, 15));
}

int func_723(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (!func_1227(iParam2))
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
	if (iParam3 < 0 || iParam3 > func_721())
	{
		return -1;
	}
	iVar0 = func_722(iParam0, iParam1, iParam2);
	iVar1 = iParam3;
	func_484(iVar1, 0);
	func_555(iVar1, 0);
	func_1228(iVar1, 0);
	func_1229(iVar1, 0);
	func_1230(iVar1, iVar0);
	if (iParam4 != 0)
	{
		func_1231(iVar1, iParam4);
	}
	return iVar1;
}

int func_724(int iParam0, bool bParam1, int iParam2)
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
			if (func_576(iVar25, 0) && func_596(iVar25, -1921346699))
			{
				return ceil((IntToFloat(&Var1.f_12[iVar24]) * fVar0));
			}
		}
		iVar24++;
	}
	return 0;
}

void func_725(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

int func_726(int iParam0)
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

bool func_727(int iParam0)
{
	return _0x4dac398297981b87(iParam0);
}

Vector3 func_728(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, bool bParam13)
{
	bVar2 = 9999999f;
	func_1232(&bVar12, &uVar13);
	bVar14 = false;
	if (bVar12)
	{
		if (func_1233() == 0 && !func_1234(0))
		{
			bVar14 = true;
		}
	}
	if (!func_1235(15, &Var15))
	{
		return 0f, 0f, 0f;
	}
	_0x748c5f51a18cb8f0(0);
	Var20 = { Var15 };
	if (bParam7)
	{
		bVar10 = func_1236();
		if (_does_volume_exist(bVar10))
		{
		}
	}
	if (!func_1237(Global_1310720->f_21))
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
			vVar7 = { func_1238(iVar0, iVar1) };
			bVar11 = func_1239(iVar0, iVar1);
			bVar3 = vdist(vParam0, vVar7);
			if (((((bVar3 < bVar2 && bVar3 > bParam10) && !func_390(vVar7)) && func_1240(iVar0, bParam8, iParam12)) && !func_1241(iVar0)) || bVar11)
			{
				if (func_1242(vVar7, iVar0, iVar1, iParam5, iParam6, bVar14, bVar10, bParam9, bParam13))
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

int func_729(vector3 vParam0, bool bParam3)
{
	iVar0 = func_1243(vParam0);
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

void func_730()
{
	disable_script_brain_set(1);
}

void func_731()
{
}

void func_732()
{
	disable_script_brain_set(2);
}

bool func_733(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_734(char* sParam0)
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

void func_735(int iParam0)
{
	if (func_733(iParam0, 1))
	{
		func_1244(1);
	}
}

int func_736()
{
	return -1904156936;
}

bool func_737(int iParam0)
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

int func_738()
{
	return 166188472;
}

int func_739()
{
	return 2015838421;
}

int func_740()
{
	return 207908017;
}

var func_741(var uParam0, char* sParam1, var uParam2, int iParam3, int iParam4)
{
	vVar0.x = iParam3;
	vVar0.f_1 = sParam1;
	vVar0.f_2 = uParam2;
	uVar3 = _0x9f2cc2439a04e7ba(uParam0, &vVar0, iParam4);
	return uVar3;
}

var func_742(var uParam0, char* sParam1, int iParam2, int iParam3)
{
	Var0 = iParam2;
	Var0.f_1 = sParam1;
	uVar3 = _0x815c4065ae6e6071(uParam0, &Var0, iParam3);
	return uVar3;
}

void func_743(var uParam0)
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

int func_744(var uParam0, int iParam1)
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

char* func_745(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return "";
	}
	if (is_entity_a_ped(iParam0))
	{
		return func_1245(get_ped_index_from_entity_index(iParam0));
	}
	else if (is_entity_an_object(iParam0))
	{
		return func_1246(get_object_index_from_entity_index(iParam0));
	}
	else if (is_entity_a_vehicle(iParam0))
	{
		return func_1247(get_vehicle_index_from_entity_index(iParam0));
	}
	return "";
}

int func_746(var uParam0, char* sParam1)
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

int func_747(var uParam0)
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

void func_748(var uParam0, int iParam1)
{
	uParam0->f_2054 = (uParam0->f_2054 || iParam1);
}

void func_749(var uParam0, int iParam1)
{
	uParam0->f_8 = (uParam0->f_8 || iParam1);
}

int func_750()
{
	return Global_1572864->f_8;
}

void func_751(char[4] cParam0, int iParam1)
{
	func_1248(cParam0, iParam1);
	func_1249(cParam0, iParam1, 26);
}

int func_752(char[4] cParam0)
{
	if (!func_1250(cParam0))
	{
		return 0;
	}
	func_909(cParam0);
	func_170(0);
	return 1;
}

int func_753(char[4] cParam0)
{
	func_1251(cParam0, "1-Start-MultiStart");
	set_audio_flag("SuppressNewTrainWhistles", true);
	set_audio_flag("SuppressNewAndExistingTrainWhistles", true);
	func_1252();
	func_1253();
	return 1;
}

int func_754(char[4] cParam0)
{
	if (!func_449(43))
	{
		func_1254(&(iLocal_63[0]), func_499(1, 1), 2, 1073741824);
		func_450(43, 1);
	}
	if (!func_1255(cParam0, 14))
	{
		return 0;
	}
	if (!func_1255(cParam0, 15))
	{
		return 0;
	}
	if (!func_1256(cParam0))
	{
		return 0;
	}
	if (func_120(cParam0, 4))
	{
		if (!func_1257(cParam0))
		{
			return 0;
		}
		iLocal_1860 = 3;
	}
	func_958(0);
	func_958(4);
	func_958(5);
	func_958(6);
	set_audio_flag("SuppressNewTrainWhistles", false);
	set_audio_flag("SuppressNewAndExistingTrainWhistles", false);
	if (func_1258())
	{
		func_1259(cParam0, "1-Player_Wins");
		func_1259(cParam0, "2-Player_Loses");
		func_749(&(cParam0->f_7375), 33554432);
		func_1260(1);
		func_1261();
		func_134(cParam0, 0);
		func_135(cParam0, 0);
	}
	else
	{
		func_1262(cParam0, iLocal_18, 0, 0, 0);
		func_1263(cParam0);
		func_134(cParam0, 29);
	}
	if (func_1264())
	{
		func_1265(&(iLocal_63[3]), 4, 0, 0, 0, 0);
	}
	return 1;
}

bool func_755(char[4] cParam0)
{
	func_1266(cParam0);
	func_913(cParam0, 0);
	disable_control_action(0, -2131587435, false);
	switch (func_1267(cParam0))
	{
		case 0:
			if (func_1257(cParam0))
			{
				func_1268();
				func_134(cParam0, 1);
			}
			break;
		case 1:
			if (!func_1269(30))
			{
				func_47(0, 0);
				func_1270(cParam0);
				func_1271(cParam0);
				func_134(cParam0, 29);
			}
			break;
		case 29:
			break;
	}
	return func_1267(cParam0) == 29;
}

int func_756(var uParam0)
{
	if (func_1269(30))
	{
		func_1272(2);
		func_173(30, 1);
	}
	if (does_entity_exist(&(iLocal_63[1])))
	{
		if (!_0x88ad6cc10d8d35b2(&(iLocal_63[1])))
		{
			set_entity_as_mission_entity(&(iLocal_63[1]), true, true);
		}
	}
	if (does_entity_exist(&(iLocal_63[2])))
	{
		if (!_0x88ad6cc10d8d35b2(&(iLocal_63[2])))
		{
			set_entity_as_mission_entity(&(iLocal_63[2]), true, true);
		}
	}
	func_1260(0);
	return 1;
}

void func_757(char[4] cParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10)
{
	func_140(cParam0, iParam1, iParam9);
	func_1273(cParam0, iParam1);
	func_1249(cParam0, iParam1, iParam2);
	func_1274(cParam0, &iParam3, iParam1, 0);
	func_1274(cParam0, &iParam4, iParam1, 2);
	func_1274(cParam0, &iParam5, iParam1, 4);
	func_1274(cParam0, &iParam6, iParam1, 5);
	func_1274(cParam0, &iParam7, iParam1, 7);
	func_927(cParam0, iParam1, 0);
	StringCopy(&cVar0, sParam8, 32);
	func_1275(cParam0, iParam1, cVar0);
	func_1276(cParam0, iParam1, iParam10);
}

int func_758(char[4] cParam0)
{
	if (!func_1250(cParam0))
	{
		return 0;
	}
	if (!func_1255(cParam0, 14))
	{
		return 0;
	}
	if (!func_1255(cParam0, 15))
	{
		return 0;
	}
	if (!func_1256(cParam0))
	{
		return 0;
	}
	func_909(cParam0);
	return 1;
}

int func_759(var uParam0)
{
	func_1252();
	return 1;
}

int func_760(var uParam0)
{
	func_171(0);
	return 1;
}

int func_761(var uParam0)
{
	return 1;
}

int func_762(var uParam0)
{
	return 1;
}

int func_763(char[4] cParam0)
{
	if (!func_1250(cParam0))
	{
		return 0;
	}
	if (!func_1255(cParam0, 14))
	{
		return 0;
	}
	if (!func_1255(cParam0, 15))
	{
		return 0;
	}
	if (!func_1255(cParam0, 17))
	{
		return 0;
	}
	if (!func_1256(cParam0))
	{
		return 0;
	}
	if (!func_1277(1))
	{
		return 0;
	}
	if (!func_1277(2))
	{
		return 0;
	}
	if (!func_1277(3))
	{
		return 0;
	}
	func_909(cParam0);
	func_171(0);
	return 1;
}

int func_764(var uParam0)
{
	return 1;
}

int func_765(char[4] cParam0)
{
	if (!func_1255(cParam0, 17))
	{
		return 0;
	}
	if (!func_1255(cParam0, 18))
	{
		return 0;
	}
	func_171(0);
	_0x437c08db4febe2bd(Global_35, "cautious", 1f, -1);
	set_current_ped_weapon(Global_35, -1569615261, false, 0, false, false);
	_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_YOSEMITE"));
	_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_BOB"));
	uLocal_1725 = func_908(&(iLocal_108[0]), 0, 0, 0);
	uLocal_1727 = func_908(&(iLocal_108[2]), 0, 0, 0);
	uLocal_1728 = func_908(&(iLocal_108[4]), 0, 0, 0);
	func_450(32, 1);
	func_135(cParam0, 0);
	return 1;
}

bool func_766(char[4] cParam0)
{
	func_1278(cParam0);
	func_1279(cParam0);
	func_1280(cParam0);
	func_1281(cParam0);
	func_1282(cParam0);
	func_1283(cParam0, 1);
	func_1284();
	func_1285();
	func_1286();
	func_1287();
	set_scenario_ped_density_multiplier_this_frame(0f);
	_0x28cb6391acedd9db(0f);
	if (does_entity_exist(&(iLocal_63[1])))
	{
		if (!_0x88ad6cc10d8d35b2(&(iLocal_63[1])))
		{
			set_entity_as_mission_entity(&(iLocal_63[1]), true, true);
		}
	}
	if (does_entity_exist(&(iLocal_63[2])))
	{
		if (!_0x88ad6cc10d8d35b2(&(iLocal_63[2])))
		{
			set_entity_as_mission_entity(&(iLocal_63[2]), true, true);
		}
	}
	if (func_1288())
	{
		func_175(0);
	}
	else if (func_1289())
	{
		func_175(1);
	}
	switch (func_1267(cParam0))
	{
		case 0:
			if (!func_163(17, 1))
			{
				func_134(cParam0, 29);
			}
			else if (is_ped_on_mount(Global_35))
			{
				func_1290(Global_35, -373.8923f, -448.0133f, 78.952f, &uLocal_1863, 20f, 16f, 12f, 8f, 2f, 0, 0, 1, 1, 1);
			}
			else
			{
				if (func_1291())
				{
					set_ped_max_move_blend_ratio(Global_35, 1f);
				}
				if (func_1292())
				{
					func_134(cParam0, 29);
				}
			}
			break;
		case 29:
			break;
	}
	return func_1267(cParam0) == 29;
}

int func_767(char[4] cParam0)
{
	_0x411189e51b8020ba(Global_35, "cautious");
	_0xa6f67bec53379a32(Global_35, "HandsOnBelt");
	func_175(0);
	func_1293(cParam0);
	func_443(cParam0, 1, 0);
	func_443(cParam0, 2, 0);
	func_448(&iLocal_145);
	func_11(&iLocal_1806, 1, 1);
	func_1294(&(iLocal_63[0]), 0, 1, 0);
	func_1295(0);
	func_450(8, 0);
	func_450(9, 0);
	func_450(10, 0);
	return 1;
}

int func_768(char[4] cParam0)
{
	if (!func_1255(cParam0, 14))
	{
		return 0;
	}
	if (!func_1255(cParam0, 15))
	{
		return 0;
	}
	if (!func_1255(cParam0, 17))
	{
		return 0;
	}
	if (!func_1255(cParam0, 18))
	{
		return 0;
	}
	func_171(0);
	return 1;
}

int func_769(char[4] cParam0)
{
	if (func_434(Global_35, 0))
	{
		set_ped_max_move_blend_ratio(Global_35, 1f);
	}
	func_99(cParam0, 512);
	func_1296(iLocal_20);
	return 1;
}

int func_770(char[4] cParam0)
{
	set_ped_max_move_blend_ratio(Global_35, 1f);
	func_135(cParam0, 0);
	func_134(cParam0, 0);
	func_1297(&uVar0);
	uVar0 = &iLocal_108[25];
	func_1298(&uVar0);
	if (func_1103(Global_35, 0, 1, 0) == -1016714371)
	{
		set_current_ped_weapon(Global_35, -1569615261, false, 0, false, false);
	}
	if (func_1103(Global_35, 0, 1, 0) == 2055893578)
	{
		set_current_ped_weapon(Global_35, -1569615261, false, 0, false, false);
	}
	_0x766315a564594401(func_178(0), 2055893578, 0);
	return 1;
}

bool func_771(char[4] cParam0)
{
	func_1299(cParam0);
	func_1300();
	func_1301();
	func_1283(cParam0, 1);
	func_1286();
	func_1287();
	if (!func_449(13))
	{
		if (func_1302(&(iLocal_63[18]), Global_35))
		{
			func_307(0, 1142025875, 0, 0, 0, 0, 1065353216, 0);
			func_450(13, 1);
		}
	}
	if (iVar1870 <= 3)
	{
		set_ped_max_move_blend_ratio(Global_35, 1f);
	}
	disable_control_action(0, -822242784, false);
	func_1303();
	if (func_1304() && !func_1305())
	{
		func_1306(0);
	}
	switch (func_1267(cParam0))
	{
		case 0:
			if (func_1307())
			{
				func_134(cParam0, 29);
			}
			break;
		case 29:
			break;
	}
	return func_1267(cParam0) == 29;
}

int func_772(var uParam0)
{
	func_448(&iLocal_146);
	_0xdd1232b332cbb9e7(3, 1, 0);
	_0x6a564540fac12211(func_178(0), 2055893578);
	return 1;
}

int func_773(char[4] cParam0)
{
	if (!func_1255(cParam0, 18))
	{
		return 0;
	}
	func_171(0);
	return 1;
}

int func_774(var uParam0)
{
	return 1;
}

int func_775(char[4] cParam0)
{
	func_551(&uLocal_1735);
	func_213(&uLocal_1738);
	task_follow_waypoint_recording(&(iLocal_63[0]), cLocal_58, 19, 0, -1, 0, 0, -1);
	func_135(cParam0, 0);
	return 1;
}

bool func_776(char[4] cParam0)
{
	func_1308(cParam0);
	func_1309();
	func_1310(cParam0);
	func_1287();
	func_1283(cParam0, iVar1795 == 9);
	func_1311();
	if (!func_1305())
	{
		func_1306(0);
	}
	if (!func_449(13))
	{
		if (func_1302(&(iLocal_63[18]), Global_35))
		{
			func_307(0, 1142025875, 0, 0, 0, 0, 1065353216, 0);
			func_450(13, 1);
		}
	}
	switch (func_1267(cParam0))
	{
		case 0:
			if (func_1312())
			{
				func_1313();
				func_134(cParam0, 1);
			}
			break;
		case 1:
			if ((func_1314() && !func_1315()) && !func_1305())
			{
				func_134(cParam0, 29);
			}
			break;
		case 29:
			break;
	}
	return func_1267(cParam0) == 29;
}

int func_777(char[4] cParam0)
{
	func_172();
	_0xdd1232b332cbb9e7(3, 1, 0);
	func_176();
	func_1316(cParam0);
	return 1;
}

int func_778(var uParam0)
{
	func_171(0);
	return 1;
}

int func_779(var uParam0)
{
	return 1;
}

int func_780(char[4] cParam0)
{
	if (func_120(cParam0, 4))
	{
		func_450(14, 1);
	}
	func_135(cParam0, 0);
	func_150(cParam0, 120f);
	func_149(cParam0, 100f);
	return 1;
}

bool func_781(char[4] cParam0)
{
	func_1317(cParam0);
	func_1318(cParam0);
	func_1319();
	func_1320();
	func_1321();
	func_1322(cParam0);
	switch (func_1267(cParam0))
	{
		case 0:
			if (func_1323(cParam0))
			{
				func_134(cParam0, 1);
			}
			break;
		case 1:
			if (iVar1897 == 4)
			{
				func_134(cParam0, 2);
			}
			break;
		case 2:
			if (func_1324())
			{
				func_213(&uLocal_1897);
				func_134(cParam0, 3);
			}
			break;
		case 3:
			if (is_ped_on_mount(Global_35))
			{
				task_dismount_animal(Global_35, 64, 0, 0, 0, 0);
				func_134(cParam0, 4);
			}
			else
			{
				func_134(cParam0, 4);
			}
			break;
		case 4:
			_0x9f9a829c6751f3c7(player_id(), 28, 1);
			if (((!is_ped_on_mount(Global_35) && func_1325()) && func_1326()) && func_1327())
			{
				func_134(cParam0, 29);
			}
			break;
		case 29:
			break;
	}
	return func_1267(cParam0) == 29;
}

int func_782(var uParam0)
{
	if (func_1264() && func_1329(&(iLocal_63[3]), func_1328(3, 5), 1) < 40f)
	{
		func_1330(&(iLocal_63[3]), func_499(3, 5), 1.5f, 20000, 1048576000, 0);
	}
	func_448(&iLocal_145);
	func_11(&iLocal_1806, 1, 1);
	func_1294(&(iLocal_63[0]), 0, 1, 0);
	return 1;
}

int func_783(char[4] cParam0)
{
	if (func_8(cParam0, 32))
	{
		func_896(cParam0, 32);
	}
	func_1331(&(cParam0->f_7375));
	_set_entity_coords_and_heading(&(iLocal_63[0]), -613.8276f, -488.6407f, 77.7919f, 117.8077f, true, false, true);
	func_1332();
	func_171(0);
	return 1;
}

int func_784(var uParam0)
{
	func_1332();
	_0xae6004120c18df97(&(iLocal_63[0]), 0, 0);
	if (is_ped_on_mount(Global_35))
	{
		clear_ped_tasks_immediately(Global_35, true, true);
	}
	return 1;
}

int func_785(char[4] cParam0)
{
	func_1333(cParam0);
	func_134(cParam0, 0);
	func_135(cParam0, 0);
	func_99(cParam0, 33554432);
	if (func_1264())
	{
		task_stand_still(&(iLocal_63[3]), -1);
	}
	_0xd1a70c1e8d1031fe(player_id(), 0);
	func_1334(cParam0);
	return 1;
}

bool func_786(char[4] cParam0)
{
	func_1335(cParam0);
	func_1336();
	func_1337();
	func_1338();
	func_1339();
	func_1340();
	func_1341();
	_0x9f9a829c6751f3c7(player_id(), 28, 1);
	switch (func_1267(cParam0))
	{
		case 0:
			if (iVar1970 == 5)
			{
				func_1271(cParam0);
				func_134(cParam0, 29);
			}
			break;
		case 29:
			break;
	}
	return func_1267(cParam0) == 29;
}

int func_787(var uParam0)
{
	func_446();
	clear_ped_tasks_immediately(&(iLocal_63[0]), false, true);
	func_1342(iLocal_63[0]);
	_0xd1a70c1e8d1031fe(player_id(), 1);
	return 1;
}

int func_788(var uParam0)
{
	if (!func_1343())
	{
		return 0;
	}
	if (func_1264())
	{
		clear_ped_tasks(&(iLocal_63[3]), 1, 0);
		func_1254(&(iLocal_63[3]), func_499(3, 5), 2, 1073741824);
		task_stand_still(&(iLocal_63[3]), -1);
	}
	func_1332();
	func_171(0);
	set_bit(&(Global_1956580->f_1), 5);
	return 1;
}

int func_789(char[4] cParam0)
{
	if (!func_8(cParam0, 8))
	{
		clear_ped_tasks_immediately(&(iLocal_63[0]), false, true);
	}
	func_445(cParam0, 1, 0);
	func_1344();
	func_1332();
	func_1345(cParam0, "REV1_PICKUP", -1082130432, 0, 0, -1, -1, 0);
	return 1;
}

int func_790(char[4] cParam0)
{
	func_446();
	set_entity_collision(Global_35, true, false);
	freeze_entity_position(Global_35, false);
	func_1333(cParam0);
	_0x18ff3110cf47115d(&(iLocal_63[0]), 0, 0);
	func_1346(&(iLocal_63[0]), 0);
	func_954(6);
	func_134(cParam0, 0);
	func_135(cParam0, 0);
	clear_bit(&(Global_1956580->f_1), 5);
	func_1347(&(cParam0->f_7375), &(iLocal_108[31]), 10208, 0, 24, 0);
	return 1;
}

bool func_791(char[4] cParam0)
{
	func_1348(cParam0);
	func_1349();
	func_1350(cParam0);
	func_1351();
	set_ped_reset_flag(Global_35, 224, true);
	if (is_entity_in_volume(Global_35, &(iLocal_108[7]), true, 0) && !func_1352())
	{
		disable_control_action(0, -762150781, false);
	}
	func_450(15, func_1353());
	if (_0x61914209c36efddb(&(iLocal_63[0])) == 5)
	{
		func_1354();
	}
	func_380(cParam0, 26, -1);
	switch (func_1267(cParam0))
	{
		case 0:
			if (func_1353())
			{
				func_134(cParam0, 1);
			}
			break;
		case 1:
			if (!func_1353())
			{
				func_134(cParam0, 0);
			}
			else if (is_entity_in_volume(Global_35, &(iLocal_108[7]), true, 0))
			{
				func_450(4, 1);
				func_134(cParam0, 2);
			}
			break;
		case 2:
			if (func_1355(&(iLocal_63[0]), func_1328(3, 0), 3f, 1, 1))
			{
				if (func_1356())
				{
					func_1357();
					func_1358(cParam0);
					func_1359(cParam0, 29, 1.2f);
				}
			}
			break;
		case 29:
			break;
	}
	return func_1267(cParam0) == 29;
}

int func_792(var uParam0)
{
	_0x18ff3110cf47115d(&(iLocal_63[0]), 2, 0);
	return 1;
}

int func_793(char[4] cParam0)
{
	if (!func_380(cParam0, 26, -1))
	{
		return 0;
	}
	func_151(cParam0, &(iLocal_63[26]), 0, 0, 0, 0, 0);
	set_entity_visible(&(iLocal_63[26]), true);
	set_entity_collision(&(iLocal_63[26]), true, false);
	freeze_entity_position(&(iLocal_63[26]), false);
	func_171(0);
	return 1;
}

int func_794(var uParam0)
{
	func_1360(uParam0, -1, 0);
	func_1347(&(uParam0->f_7375), &(iLocal_108[31]), 10208, 0, 24, 0);
	return 1;
}

int func_795(char[4] cParam0)
{
	func_135(cParam0, 0);
	func_134(cParam0, 0);
	return 1;
}

bool func_796(char[4] cParam0)
{
	func_1361(cParam0);
	switch (func_1267(cParam0))
	{
		case 0:
			func_134(cParam0, 29);
			break;
		case 29:
			break;
	}
	return func_1267(cParam0) == 29;
}

int func_797(var uParam0)
{
	func_1362((*Global_1835011)[uParam0->f_607]->f_1);
	return 1;
}

bool func_798()
{
	return iLocal_150 == get_frame_count();
}

bool func_799(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5, char* sParam6, char[4] cParam7, char[4] cParam8, int iParam9)
{
	*uParam2 = { 0f, 0f, 0f };
	uParam2->f_3 = 0f;
	*iParam3 = func_1363(iParam0);
	*iParam4 = -1;
	*iParam5 = 41788943;
	StringCopy(sParam6, "", 32);
	*cParam7 = 623901053;
	*cParam8 = 0;
	*iParam9 = 0;
	switch (iParam0)
	{
		case 0:
			*iParam4 = 21;
			StringCopy(sParam6, "SWANSON", 32);
			if (iParam1 == iLocal_16)
			{
				*uParam2 = { func_499(0, 1) };
			}
			else if (iParam1 == iLocal_17)
			{
				*uParam2 = { func_499(1, 1) };
			}
			else if (iParam1 == iLocal_18)
			{
				*uParam2 = { func_499(1, 1) };
			}
			else if (iParam1 == iLocal_19)
			{
				*uParam2 = { func_499(1, 1) };
			}
			else if (iParam1 == iLocal_20)
			{
				*uParam2 = { -384.5769f, -439.0295f, 78.6709f };
				uParam2->f_3 = 65.1811f;
			}
			else if (iParam1 == iLocal_21)
			{
				*uParam2 = { func_499(4, 1) };
			}
			else if (iParam1 == iLocal_22)
			{
				*uParam2 = { func_499(4, 1) };
			}
			else if (iParam1 == iLocal_23)
			{
				*uParam2 = { -576.8f, -464.55f, 80.09f };
				uParam2->f_3 = 128.45f;
			}
			else if (iParam1 == iLocal_24)
			{
				*uParam2 = { func_499(3, 0) };
			}
			break;
		case 1:
			*uParam2 = { func_1328(0, 2) };
			uParam2->f_3 = func_1364(0, 2);
			StringCopy(sParam6, "RRVD_PokerGuy", 32);
			break;
		case 2:
			*uParam2 = { func_1328(0, 2) };
			uParam2->f_3 = func_1364(0, 2);
			StringCopy(sParam6, "RRVD_PokerGuy2", 32);
			break;
		case 3:
			if (iParam1 < iLocal_24)
			{
				*uParam2 = { -353.721f, -361.9061f, 86.0706f };
				uParam2->f_3 = 288.2406f;
			}
			else
			{
				*uParam2 = { -571.3845f, -454.2976f, 79.8507f };
				uParam2->f_3 = 325.8443f;
			}
			break;
		case 4:
			*uParam2 = { func_1328(5, 3) };
			uParam2->f_3 = func_1364(5, 3);
			break;
		case 5:
			*uParam2 = { func_1328(5, 4) };
			uParam2->f_3 = func_1364(5, 4);
			break;
		case 6:
			*uParam2 = { func_1328(5, 5) };
			uParam2->f_3 = func_1364(5, 5);
			break;
		case 7:
			*uParam2 = { func_1328(5, 10) };
			uParam2->f_3 = func_1364(5, 10);
			break;
		case 8:
			*uParam2 = { func_1328(5, 11) };
			uParam2->f_3 = func_1364(5, 11);
			break;
		case 9:
			*uParam2 = { func_1328(5, 12) };
			uParam2->f_3 = func_1364(5, 12);
			break;
		case 10:
			*uParam2 = { func_1328(5, 13) };
			uParam2->f_3 = func_1364(5, 13);
			break;
		case 11:
			*uParam2 = { func_1328(5, 14) };
			uParam2->f_3 = func_1364(5, 14);
			break;
		case 12:
			*uParam2 = { func_1328(5, 15) };
			uParam2->f_3 = func_1364(5, 15);
			break;
		case 13:
			*uParam2 = { func_1328(5, 16) };
			uParam2->f_3 = func_1364(5, 16);
			break;
		case 14:
			*uParam2 = { -320.32f, -362.04f, 87.0272f };
			uParam2->f_3 = 100.61f;
			*iParam5 = -85094670;
			StringCopy(sParam6, "REV1_Civ1", 32);
			*cParam7 = 1391706777;
			break;
		case 15:
			*uParam2 = { -321.21f, -362.34f, 87.0272f };
			uParam2->f_3 = 334.1857f;
			*iParam5 = 479580738;
			StringCopy(sParam6, "REV1_Civ1a", 32);
			*cParam7 = 1391706777;
			break;
		case 17:
			*uParam2 = { func_499(0, 7) };
			if (iParam1 >= iLocal_19)
			{
				uParam2->f_3 = 321.2563f;
			}
			*iParam5 = 629126052;
			*cParam7 = -401180987;
			StringCopy(sParam6, "REV1_Civ3", 32);
			break;
		case 18:
			*iParam5 = -2040455288;
			*uParam2 = { -397.39f, -462.18f, 76.78f };
			uParam2->f_3 = -42.41f;
			*cParam7 = -1976316465;
			StringCopy(sParam6, "REV1_WITNESS", 32);
			break;
		case 16:
			*uParam2 = { -346.3435f, -358.7893f, 87.0266f };
			uParam2->f_3 = 165.628f;
			StringCopy(sParam6, "REV1_Civ2", 32);
			*cParam7 = 1391706777;
			break;
		case 19:
			*uParam2 = { -655.7828f, -452.2621f, 49.9509f };
			uParam2->f_3 = 159.1308f;
			*cParam7 = 707888648;
			break;
		case 20:
			*uParam2 = { -657.1974f, -451.2146f, 49.9775f };
			uParam2->f_3 = 152.8134f;
			*cParam7 = 707888648;
			break;
		case 21:
			*uParam2 = { -655.6583f, -455.0639f, 49.8667f };
			uParam2->f_3 = 236.8209f;
			*cParam7 = 707888648;
			break;
		case 22:
			*uParam2 = { -656.0872f, -458.0972f, 49.7729f };
			uParam2->f_3 = 237.0348f;
			*cParam7 = 707888648;
			break;
		case 23:
			*iParam4 = 16;
			StringCopy(sParam6, "MOLLY", 32);
			*uParam2 = { -128.7338f, -30.9646f, 95.0851f };
			uParam2->f_3 = 278.1286f;
			*cParam8 = 1;
			break;
		case 24:
			*uParam2 = { 1f, 1f, 1f };
			*cParam7 = 707888648;
			*cParam8 = 1;
			break;
		case 25:
			*uParam2 = { 1f, 1f, -5f };
			*cParam7 = 707888648;
			*cParam8 = 1;
			break;
		case 26:
			*iParam4 = 19;
			*iParam9 = -268604689;
			StringCopy(sParam6, "SUSAN", 32);
			*uParam2 = { -148.4471f, -39.6255f, 94.492f };
			uParam2->f_3 = 265.2805f;
			*cParam8 = 1;
			break;
	}
	return (*iParam3 != 0 || *iParam4 != -1);
}

bool func_800(char[4] cParam0, int iParam1, var uParam2, bool bParam3, var uParam4, var uParam5, var uParam6, int iParam7, bool bParam8, int iParam9, bool bParam10, int iParam11, bool bParam12, bool bParam13)
{
	if (!func_513(iParam1))
	{
		return false;
	}
	if ((!is_entity_dead(*uParam2) && func_251(iParam1)) && func_1365(iParam1) == *uParam2)
	{
		return true;
	}
	*uParam2 = func_1366(iParam1, 1, 0, uParam4, uParam5, uParam6, iParam7, bParam8, 1, 0, 0, bParam10, 0, iParam9, 0, 0, 0, iParam11, 1, 1, bParam13, 0, 1, 0, 1);
	if (does_entity_exist(*uParam2))
	{
		func_1367(cParam0, *uParam2, iParam1, bParam3, (bParam8 && bParam12), bParam10, bParam13);
		func_1368(iParam1);
		return true;
	}
	return false;
}

int func_801(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
{
	iVar0 = create_ped(iParam0, vParam1, fParam4, bParam5, bParam6, bParam13, bParam14);
	if (!does_entity_exist(iVar0))
	{
		return 0;
	}
	func_1369(iVar0, iParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

void func_802()
{
	iLocal_150 = get_frame_count();
}

void func_803(char[4] cParam0, int iParam1, int iParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, int iParam7, bool bParam8)
{
	if (iParam2 != 41788943)
	{
		_set_ped_body_component(&(iLocal_63[iParam1]), iParam2);
		_update_ped_variation(&(iLocal_63[iParam1]), false, true, true, true, false);
	}
	if (!is_string_null_or_empty(&cParam3))
	{
		func_145(cParam0, &(iLocal_63[iParam1]), &cParam3, 0);
	}
	if (iParam7 != 623901053)
	{
		set_ped_relationship_group_hash(&(iLocal_63[iParam1]), iParam7);
	}
	freeze_entity_position(&(iLocal_63[iParam1]), bParam8);
	if (iParam1 == 0)
	{
		func_1370(21, 0, 0, 1);
		_0x18ff3110cf47115d(&(iLocal_63[iParam1]), 0, 0);
		func_1371(cParam0, &(iLocal_63[iParam1]), 512);
	}
	else if (iParam1 == 26)
	{
		set_entity_visible(&(iLocal_63[iParam1]), false);
		set_entity_collision(&(iLocal_63[iParam1]), false, false);
	}
	else if (iParam1 == 18)
	{
		func_1372(iParam1);
		_0xae6004120c18df97(&(iLocal_63[iParam1]), 0, 0);
		func_1346(&(iLocal_63[iParam1]), 0);
		set_blocking_of_non_temporary_events(&(iLocal_63[iParam1]), true);
		_0x18ff3110cf47115d(&(iLocal_63[iParam1]), 2, 0);
		_0x18ff3110cf47115d(&(iLocal_63[iParam1]), 7, 0);
	}
	else if (iParam1 == 17)
	{
		set_blocking_of_non_temporary_events(&(iLocal_63[iParam1]), true);
		set_entity_max_health(&(iLocal_63[iParam1]), round((IntToFloat(get_entity_max_health(&(iLocal_63[17]), false)) * 1.4f)));
		_set_entity_health(&(iLocal_63[iParam1]), get_entity_max_health(&(iLocal_63[17]), false), 0);
		_0x8ba83cc4288cd56d(&(iLocal_63[iParam1]), 1158994785);
		_0x18ff3110cf47115d(&(iLocal_63[iParam1]), 0, 0);
		func_1372(iParam1);
		_0xae6004120c18df97(&(iLocal_63[iParam1]), 0, 0);
		remove_all_ped_weapons(&(iLocal_63[iParam1]), false, true);
		stop_ped_speaking(&(iLocal_63[iParam1]), true);
		set_ped_combat_attributes(&(iLocal_63[iParam1]), 5, true);
		set_ped_combat_attributes(&(iLocal_63[iParam1]), 46, true);
	}
	else if (iParam1 == 1)
	{
		set_ambient_voice_name(&(iLocal_63[iParam1]), "RRVD_POKERGUY2");
	}
	else if (iParam1 == 2)
	{
		set_ambient_voice_name(&(iLocal_63[iParam1]), "RRVD_POKERGUY");
	}
}

int func_804(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return -1;
	}
	iVar0 = get_entity_model(iParam0);
	iVar1 = 0;
	while (iVar1 < 27)
	{
		iVar2 = iVar1;
		iVar3 = func_1363(iVar2);
		if (iVar3 == iVar0)
		{
			return iVar2;
		}
		iVar1++;
	}
	return -1;
}

int func_805(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return -1;
	}
	iVar0 = get_entity_model(iParam0);
	iVar1 = 0;
	while (iVar1 < 10)
	{
		iVar2 = iVar1;
		iVar3 = func_1373(iVar2);
		if (iVar3 == iVar0)
		{
			if (decor_exist_on(iParam0, func_1374()))
			{
				iVar4 = decor_get_int(iParam0, func_1374());
				iVar2 = func_1375(iVar4);
				decor_remove(iParam0, func_1374());
				if (iVar2 == -1)
				{
				}
			}
			return iVar2;
		}
		iVar1++;
	}
	return -1;
}

bool func_806(var uParam0, int iParam1)
{
	return (uParam0->f_8 && iParam1) != 0;
}

bool func_807(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

Vector3 func_808(var uParam0)
{
	return uParam0->f_862;
}

void func_809(var uParam0)
{
	if (func_1376(&iVar0))
	{
		if (func_576(iVar0, 0))
		{
			if (func_600(iVar0) == -525676072)
			{
				_set_ped_component_disabled(Global_35, 1249071452, 0);
				func_628(Global_35, -2065815962, 0, 1108822547, 0, 1, 0, 0, 0, 0);
			}
			else
			{
				_set_ped_component_disabled(Global_35, 1606587013, 0);
			}
			if (!func_576(*uParam0, 0))
			{
				*uParam0 = iVar0;
			}
		}
	}
}

void func_810(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (Global_1935630->f_12)
	{
		return;
	}
	Global_16 = 1;
	if (!network_is_game_in_progress())
	{
		func_119(0, 0);
		func_1377(-1);
	}
	func_1378(1);
	set_entity_invincible(Global_35, true);
	if (!func_807(*iParam0, 32))
	{
		iParam1 |= 16;
	}
	if (!func_807(*iParam0, 64))
	{
		iParam1 |= 8;
	}
	if (!func_807(*iParam0, 128))
	{
		iParam1 |= 32;
	}
	if (func_807(*iParam0, 131072))
	{
		iParam1 |= 2048;
	}
	if (!func_807(*iParam0, 32768))
	{
		set_player_control(get_player_index(), false, iParam1, true);
	}
	if (!func_807(*iParam0, 1))
	{
		_0xf239400e16c23e08(0, 0);
	}
	if (!func_807(*iParam0, 65536))
	{
		set_everyone_ignore_player(player_id(), true);
	}
	if (!func_807(*iParam0, 4) && !func_807(*iParam0, 2))
	{
		_hide_hud_component(-1679307491);
	}
	else
	{
		_display_hud_component(-1679307491);
	}
	if (!func_807(*iParam0, 2048))
	{
		func_822(0, 0);
	}
	if (func_807(*iParam0, 8))
	{
		clear_ped_tasks_immediately(Global_35, false, true);
	}
	if (func_807(*iParam0, 256))
	{
		_hide_ped_weapons(Global_35, 2, true);
	}
	if (func_807(*iParam0, 8192))
	{
		func_1379();
	}
	if (!func_807(*iParam0, 262144))
	{
		set_ped_reset_flag(Global_35, 264, true);
	}
	if (!func_807(*iParam0, 512))
	{
		if (is_gameplay_hint_active())
		{
			stop_gameplay_hint(false);
		}
	}
	if (!func_807(*iParam0, 1024))
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
		if (!func_807(*iParam0, 16))
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
						if (func_1380() == iVar7)
						{
							bVar8 = true;
						}
					}
					vVar3.x = iParam3;
					vVar3.f_1 = iParam4;
					vVar3.f_2 = iParam5;
					if (func_390(vVar3))
					{
						vVar3 = { get_offset_from_entity_in_world_coords(Global_35, 0f, IntToFloat((-1 + iVar2)), 0f) };
						func_1381(&vVar3, 50, 10, 0);
					}
					_0xed00d72f81cf7278(iVar7, 0, 1);
					set_entity_coords(iVar7, vVar3, false, true, true, true);
					if (bVar8)
					{
						func_1382(2);
						func_1383(-1);
						func_1384(vVar3);
						func_1386(func_1385());
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
	if (!func_807(*iParam0, 4096))
	{
		func_1387(Global_35);
	}
	if (!func_807(*iParam0, 1048576))
	{
		_0xdd1232b332cbb9e7(7, 1, 0);
	}
	if (!func_807(*iParam0, 2097152))
	{
		if (func_1388() || _0x50f124e6ef188b22(Global_35))
		{
			func_1389(1);
		}
	}
	if (Global_1359489->f_16 & 4194304 == 0)
	{
		Global_1359489->f_16 |= 4194304;
	}
	*iParam0 = 0;
}

void func_811(var uParam0, vector3 vParam1)
{
	uParam0->f_862 = { vParam1 };
}

void func_812(var uParam0)
{
	if (func_806(uParam0, 2048) && !func_390(func_1390(uParam0)))
	{
		bVar0 = _does_volume_exist(uParam0->f_4);
		iVar1 = _get_last_mount(Global_35);
		if ((!is_entity_dead(iVar1) && ((bVar0 && is_entity_in_volume(iVar1, uParam0->f_4, true, 0)) || func_806(uParam0, -2147483648))) && get_mount(Global_35) != iVar1)
		{
			iVar2 = 2;
			if (is_ped_in_writhe(iVar1))
			{
				iVar2 |= 32;
			}
			func_891(iVar1, func_1390(uParam0), func_1391(uParam0), iVar2, 1073741824);
		}
		iVar3 = get_players_last_vehicle();
		if ((!is_entity_dead(iVar3) && ((bVar0 && is_entity_in_volume(iVar3, uParam0->f_4, true, 0)) || func_806(uParam0, -2147483648))) && !is_ped_in_vehicle(Global_35, iVar3, true))
		{
			func_891(iVar3, func_1390(uParam0), func_1391(uParam0), 2, 1073741824);
		}
	}
}

void func_813(var uParam0)
{
	if ((func_806(uParam0, 268435456) && !func_390(func_1390(uParam0))) && is_ped_in_any_vehicle(Global_35, false))
	{
		iVar0 = get_vehicle_ped_is_using(Global_35);
		if (!is_entity_dead(iVar0))
		{
			vVar1 = { func_1390(uParam0) };
			func_891(iVar0, vVar1, func_1392(vVar1, Global_36, 1), 2, 1073741824);
			set_vehicle_on_ground_properly(iVar0, 0f);
			set_entity_velocity(iVar0, 0f, 0f, 0f);
			set_vehicle_forward_speed(iVar0, 0f);
		}
	}
}

void func_814(var uParam0, vector3 vParam1, int iParam4, bool bParam5)
{
	uParam0->f_865 = { vParam1 };
	uParam0->f_868 = iParam4;
	if (func_390(vParam1))
	{
		func_1393(uParam0, 2048, 1);
	}
	else
	{
		func_749(uParam0, 2048);
		if (bParam5)
		{
			func_749(uParam0, -2147483648);
		}
	}
}

void func_815(var uParam0)
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
					if (!func_1394(uParam0->f_13[iVar0], 8))
					{
						if (func_690(func_1103(iVar1, 0, 1, 0)))
						{
							if (!func_1395(uParam0, get_current_ped_weapon_entity_index(iVar1, 0)))
							{
								set_current_ped_weapon(iVar1, -1569615261, true, 0, false, false);
							}
						}
						if (func_690(func_1103(iVar1, 1, 1, 0)))
						{
							if (!func_1395(uParam0, get_current_ped_weapon_entity_index(iVar1, 1)))
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

void func_816(var uParam0, bool bParam1)
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

void func_817(var uParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
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
			func_1200(262144);
		}
	}
	else
	{
		bParam6 = false;
		if (iParam3 == -1 || iParam3 == 8)
		{
			func_1396(iParam1, 29, bVar4, 1, 0);
			func_1396(iParam1, 31, bVar4, 1, 0);
			func_1396(iParam1, 30, bVar4, 1, 0);
			func_1396(iParam1, 22, bVar4, 1, 0);
			func_1396(iParam1, 37, bVar4, 1, 0);
		}
	}
	if ((func_1140(32768) && func_1397(1108822547, 8)) && func_1398(10, iParam3))
	{
		func_1399(iParam1, 0, 1);
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
			iVar3 = func_1208(iVar1, 1);
			if (func_1397(iVar3, 8))
			{
			}
			else if (&Global_1946804->f_57[iVar1]->f_2[0] == -1802376732 || &uParam0->f_1[iVar1] == 0)
			{
			}
			else
			{
				iVar2 = &uParam0->f_1[iVar1];
				if (!func_1398(iVar1, iParam3))
				{
				}
				else if ((func_1397(iVar3, 6) || &uParam0->f_1[iVar1] == &Global_1946804->f_57[iVar1]) || uParam0->f_1[iVar1]->f_1 == 289238755)
				{
					if (!func_1397(iVar3, 1) || bParam2)
					{
						Global_1946804->f_857++;
						if (!bParam6)
						{
							func_1396(iParam1, iVar1, bVar4, 1, 0);
						}
						if (uParam0->f_1[iVar1]->f_1 == 289238755)
						{
							Global_1946804->f_2456[iVar1]->f_1 = 289238755;
						}
						func_1400(iVar3, 1, 6);
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
								func_1396(iParam1, iVar1, bVar4, 1, &(uParam0->f_1[iVar1]));
							}
							Global_1946804->f_2456[iVar1] = &uParam0->f_1[iVar1];
							Global_1946804->f_2456[iVar1]->f_1 = uParam0->f_1[iVar1]->f_1;
							if (func_1397(iVar3, 1))
							{
								func_1401(iVar3, 1, 6);
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

bool func_818(int iParam0)
{
	switch (iParam0)
	{
		case 14:
		case 34:
			return !func_1402((*Global_1835011)[iParam0]);
	}
	return false;
}

Vector3 func_819(int iParam0)
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

int func_820(int iParam0, bool bParam1, int iParam2, bool bParam3)
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

int func_821(int iParam0, int iParam1)
{
	return func_1403(&uVar0, iParam0, iParam1);
}

void func_822(bool bParam0, bool bParam1)
{
	iVar2 = 0;
	while (iVar2 < 29)
	{
		iVar4 = iVar2;
		if (get_current_ped_weapon(Global_35, &iVar3, false, iVar4, true))
		{
			if (func_690(iVar3) && _0x705be297eebdb95d(iVar3))
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
		func_1404(1);
	}
}

void func_823(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
}

void func_824(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_1 = 0;
}

void func_825(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
}

void func_826(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
}

void func_827(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

void func_828(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

void func_829(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
}

void func_830(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
}

void func_831(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
}

void func_832(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

void func_833(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
}

int func_834(var uParam0, int iParam1)
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

int func_835(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (!func_850((*uParam0)[iVar0]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_836(var uParam0, char* sParam1)
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

int func_837(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (!func_854((*uParam0)[iVar0]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_838(var uParam0, char* sParam1)
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

int func_839(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 40)
	{
		if (!func_852((*uParam0)[iVar0]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_840(int iParam0, int iParam1)
{
	iVar0 = func_1405(iParam1);
	return (iParam0 && iVar0) != 0;
}

int func_841(var uParam0, char* sParam1, int iParam2)
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

int func_842(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (!func_859((*uParam0)[iVar0]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_843(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_844(var uParam0, int iParam1)
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

int func_845(var uParam0, char* sParam1)
{
	iVar0 = 0;
	while (iVar0 < 14)
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

int func_846(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 14)
	{
		if (!func_856((*uParam0)[iVar0]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_847(var uParam0, char* sParam1)
{
	iVar0 = 0;
	while (iVar0 < 5)
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

int func_848(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (!func_873((*uParam0)[iVar0]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_849(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 || iParam1);
}

bool func_850(var uParam0)
{
	return *uParam0 != 0;
}

void func_851(var uParam0)
{
	if (!func_881(uParam0->f_1, 1))
	{
		request_model(*uParam0, false);
		func_843(&(uParam0->f_1), 1);
	}
}

bool func_852(var uParam0)
{
	return !is_string_null_or_empty(*uParam0);
}

void func_853(var uParam0)
{
	if (!func_881(uParam0->f_3, 1))
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
		func_843(&(uParam0->f_3), 1);
	}
}

bool func_854(var uParam0)
{
	return !is_string_null_or_empty(*uParam0);
}

void func_855(var uParam0)
{
	if (!func_881(uParam0->f_1, 1))
	{
		request_anim_dict(*uParam0);
		func_843(&(uParam0->f_1), 1);
	}
}

bool func_856(var uParam0)
{
	return !is_string_null_or_empty(*uParam0);
}

bool func_857(var uParam0)
{
	if (func_881(uParam0->f_1, 2))
	{
		return true;
	}
	if (!func_881(uParam0->f_1, 1))
	{
		func_1406(uParam0);
	}
	if (_0x85b8f04555ab49b8(*uParam0))
	{
		func_843(&(uParam0->f_1), 2);
		return true;
	}
	return false;
}

bool func_858(var uParam0)
{
	if (func_881(*uParam0, 2))
	{
		return true;
	}
	if (!func_881(*uParam0, 1))
	{
		func_1407(uParam0);
	}
	if (has_ptfx_asset_loaded())
	{
		func_843(uParam0, 2);
		return true;
	}
	return false;
}

bool func_859(var uParam0)
{
	return !is_string_null_or_empty(*uParam0);
}

void func_860(var uParam0)
{
	if (!func_881(uParam0->f_2, 1))
	{
		if (func_1408(uParam0))
		{
			if (_is_anim_scene_metadata_loaded(uParam0->f_1, false))
			{
				sVar0 = func_1409(get_entity_model(Global_35));
				if (_0x6f1f0b17109309da(uParam0->f_1, sVar0))
				{
					set_anim_scene_entity(uParam0->f_1, sVar0, Global_35, 0);
				}
				else if (_0x6f1f0b17109309da(uParam0->f_1, "player_zero") && func_297())
				{
					set_anim_scene_entity(uParam0->f_1, "player_zero", Global_35, 0);
				}
				else if (_0x6f1f0b17109309da(uParam0->f_1, "player_three") && func_1059())
				{
					set_anim_scene_entity(uParam0->f_1, "player_three", Global_35, 0);
				}
				load_anim_scene(uParam0->f_1);
				func_843(&(uParam0->f_2), 1);
			}
		}
	}
}

bool func_861(var uParam0)
{
	return !is_string_null_or_empty(*uParam0);
}

void func_862(var uParam0, int iParam1)
{
	if (!func_881(uParam0->f_1, 1))
	{
		if (!_is_anim_scene_loaded(iParam1, true, false))
		{
			return;
		}
		_0xdf7b5144e25cd3fe(iParam1, *uParam0);
		func_843(&(uParam0->f_1), 1);
	}
}

bool func_863(var uParam0)
{
	return *uParam0 != 0;
}

void func_864(var uParam0)
{
	if (!func_881(uParam0->f_2, 1))
	{
		_request_propset(*uParam0);
		func_843(&(uParam0->f_2), 1);
	}
}

bool func_865(var uParam0)
{
	return *uParam0 != 0;
}

void func_866(var uParam0)
{
	if (!func_881(uParam0->f_3, 1))
	{
		_0x72d4cb5db927009c(*uParam0, uParam0->f_1, uParam0->f_2);
		func_843(&(uParam0->f_3), 1);
	}
}

bool func_867(var uParam0)
{
	return !is_string_null_or_empty(*uParam0);
}

void func_868(var uParam0)
{
	if (!func_881(uParam0->f_1, 1))
	{
		request_script_audio_bank(*uParam0);
		func_843(&(uParam0->f_1), 1);
	}
}

bool func_869(var uParam0)
{
	return func_1410(*uParam0);
}

void func_870(var uParam0)
{
	if (!func_881(uParam0->f_1, 1))
	{
		_request_imap(*uParam0);
		func_843(&(uParam0->f_1), 1);
	}
}

bool func_871(var uParam0)
{
	return !is_string_null_or_empty(*uParam0);
}

void func_872(var uParam0)
{
	if (!func_881(uParam0->f_2, 1))
	{
		_0xe368e8422c860ba7(*uParam0, uParam0->f_1, -2);
		func_843(&(uParam0->f_2), 1);
	}
}

bool func_873(var uParam0)
{
	return !is_string_null_or_empty(*uParam0);
}

void func_874(var uParam0)
{
	if (!func_881(uParam0->f_1, 1))
	{
		_0x2b6529c54d29037a(*uParam0);
		func_843(&(uParam0->f_1), 1);
	}
}

bool func_875(var uParam0, int iParam1, char* sParam2)
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

void func_876(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5)
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
		sParam2 = func_745(iParam1);
	}
	if (is_string_null_or_empty(sParam2))
	{
		if (does_entity_exist(iParam1))
		{
		}
		return;
	}
	iVar0 = func_1411(uParam0, iParam1);
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
		iVar1 = func_1412(uParam0, sParam2);
		if (does_entity_exist(iVar1) && iVar1 != iParam1)
		{
			func_1413(uParam0, iVar1);
		}
	}
	if (iVar0 == -1)
	{
		iVar0 = func_1414(uParam0);
	}
	if (iVar0 != -1)
	{
		uParam0->f_13[iVar0] = iParam1;
		StringCopy(&(uParam0->f_13[iVar0]->f_1), sParam2, 64);
		uParam0->f_13[iVar0]->f_9 = iParam3;
		uParam0->f_13[iVar0]->f_10 = iParam4;
		if (bParam5)
		{
			func_1415(uParam0->f_13[iVar0], 2);
		}
		else
		{
			func_1416(uParam0->f_13[iVar0], 2);
		}
	}
}

struct<4> func_877(int iParam0)
{
	if (!func_182(iParam0))
	{
		return Var0;
	}
	return (*Global_1835011)[iParam0]->f_3;
}

bool func_878(var uParam0, char* sParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (!bParam4 && !uParam0->f_2501)
	{
		if (!func_899(uParam0, sParam1, iParam2, bParam4, bParam5))
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
			if (func_1417(uParam0, 0))
			{
				if (func_1418(uParam0, iParam2, iParam3, &cVar2, &iVar1, &iVar18))
				{
					if (func_1419(uParam0, 1, &iVar0))
					{
					}
					if (func_1420(uParam0, 3, &cVar2))
					{
					}
					if (func_1419(uParam0, 4, &iVar1))
					{
						cVar2.f_8 = iVar1;
					}
					if (func_1419(uParam0, 7, &(cVar2.f_12)))
					{
					}
					if (func_1419(uParam0, 8, &iVar1))
					{
						cVar2.f_10 = iVar1;
					}
					if (func_1419(uParam0, 10, &(cVar2.f_14)))
					{
					}
					if (func_1419(uParam0, 11, &iVar1))
					{
						cVar2.f_15 = iVar1;
					}
					if (iVar18 == 0)
					{
						if (iVar0 < 40 && uParam0->f_2504 < 40)
						{
							if (!func_1421(uParam0, &cVar2, uParam0->f_2504))
							{
								*(*uParam0)[uParam0->f_2504] = { cVar2 };
								func_494((*uParam0)[uParam0->f_2504], 1048576);
								uParam0->f_2504++;
							}
						}
					}
					else if (iVar18 == 3)
					{
						if (iVar0 < 40 && uParam0->f_2505 < 40)
						{
							*uParam0->f_641[uParam0->f_2505] = { cVar2 };
							func_494(uParam0->f_641[uParam0->f_2505], 1048576);
							uParam0->f_2505++;
						}
					}
					else if (iVar18 == 1)
					{
						if (iVar0 < 60 && uParam0->f_2506 < 60)
						{
							*uParam0->f_1282[uParam0->f_2506] = { cVar2 };
							func_494(uParam0->f_1282[uParam0->f_2506], 1048576);
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
						if (!func_1421(&(uParam0->f_2243), &cVar2, uParam0->f_2507))
						{
							*uParam0->f_2243[uParam0->f_2507] = { cVar2 };
							func_494(uParam0->f_2243[uParam0->f_2507], 1048576);
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
			if (func_1417(uParam0, 12))
			{
				if (func_1419(uParam0, 13, &iVar0))
				{
				}
				if (func_1419(uParam0, 14, &iVar1))
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

void func_879(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((func_210((*uParam0)[iVar0], 1048576) && (*uParam0)[iVar0]->f_9 == 8) && !func_210((*uParam0)[iVar0], 1))
		{
			func_1422((*uParam0)[iVar0]);
		}
		iVar0++;
	}
}

bool func_880(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, int iParam12)
{
	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < *uParam0)
	{
		if (func_850((*uParam0)[iVar1]))
		{
			if (func_840((*uParam0)[iVar1]->f_2, iParam12))
			{
				if (!func_1423((*uParam0)[iVar1]))
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
		if (func_852((*uParam1)[iVar1]))
		{
			if (func_840((*uParam1)[iVar1]->f_4, iParam12))
			{
				if (!func_1424((*uParam1)[iVar1]))
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
		if (func_854((*uParam2)[iVar1]))
		{
			if (func_840((*uParam2)[iVar1]->f_2, iParam12))
			{
				if (!func_1425((*uParam2)[iVar1]))
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
		if (func_856((*uParam3)[iVar1]))
		{
			if (func_840((*uParam3)[iVar1]->f_2, iParam12))
			{
				if (!func_857((*uParam3)[iVar1]))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	if (func_840(uParam4->f_1, iParam12))
	{
		if (!func_858(uParam4))
		{
			iVar0 = 0;
		}
	}
	iVar1 = 0;
	while (iVar1 < *uParam5)
	{
		if (func_859((*uParam5)[iVar1]))
		{
			if (func_840((*uParam5)[iVar1]->f_3, iParam12))
			{
				if (func_1408((*uParam5)[iVar1]))
				{
					if (!func_882((*uParam5)[iVar1]))
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
		if (func_859((*uParam5)[iVar1]))
		{
			if (func_840((*uParam5)[iVar1]->f_3, iParam12))
			{
				if (func_1408((*uParam5)[iVar1]))
				{
					if (func_882((*uParam5)[iVar1]))
					{
						iVar2 = 0;
						while (iVar2 < 20)
						{
							if (func_861((*uParam5)[iVar1]->f_4[iVar2]))
							{
								if (!func_1426((*uParam5)[iVar1]->f_4[iVar2], (*uParam5)[iVar1]->f_1))
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
		if (func_863((*uParam6)[iVar1]))
		{
			if (func_840((*uParam6)[iVar1]->f_3, iParam12))
			{
				if (!func_1427((*uParam6)[iVar1]))
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
		if (func_865((*uParam7)[iVar1]))
		{
			if (func_840((*uParam7)[iVar1]->f_4, iParam12))
			{
				if (!func_1428((*uParam7)[iVar1]))
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
		if (func_867((*uParam8)[iVar1]))
		{
			if (func_840((*uParam8)[iVar1]->f_2, iParam12))
			{
				if (!func_1429((*uParam8)[iVar1]))
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
		if (func_869((*uParam9)[iVar1]))
		{
			if (func_840((*uParam9)[iVar1]->f_2, iParam12))
			{
				if (!func_1430((*uParam9)[iVar1]))
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
		if (func_871((*uParam10)[iVar1]))
		{
			if (func_840((*uParam10)[iVar1]->f_3, iParam12))
			{
				if (!func_1431((*uParam10)[iVar1]))
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
		if (func_873((*uParam11)[iVar1]))
		{
			if (func_840((*uParam11)[iVar1]->f_2, iParam12))
			{
				if (!func_1432((*uParam11)[iVar1]))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	return iVar0;
}

bool func_881(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_882(var uParam0)
{
	if (func_881(uParam0->f_2, 2))
	{
		return true;
	}
	if (!func_881(uParam0->f_2, 1))
	{
		func_860(uParam0);
	}
	if (_is_anim_scene_loaded(uParam0->f_1, true, false))
	{
		func_843(&(uParam0->f_2), 2);
		return true;
	}
	return false;
}

int func_883(int iParam0)
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

bool func_884(char[4] cParam0)
{
	if (!func_390(cParam0->f_5417))
	{
		return true;
	}
	switch (cParam0->f_607)
	{
		case 7:
			func_1433(cParam0, -271.1003f, 798.9771f, 118.0088f, 359.8847f);
			break;
		case 15:
			func_1433(cParam0, -101.4083f, -34.0691f, 94.9419f, 43.5697f);
			break;
		case 8:
			func_1433(cParam0, 884.1405f, 1283.638f, 233.1437f, 288.539f);
			break;
		case 25:
			func_1433(cParam0, 1154.01f, -87.7217f, 87.745f, 333.9165f);
			break;
		case 14:
			func_1433(cParam0, -257.4742f, 716.4608f, 114.3661f, 298.3928f);
			break;
		case 9:
			func_1433(cParam0, -113.3479f, -14.8907f, 96.1036f, 66.3363f);
			break;
		case 13:
			func_1433(cParam0, -893.1545f, -1097.781f, 59.3724f, 67.7581f);
			break;
		case 11:
			func_1433(cParam0, -1528.842f, -315.0988f, 143.0872f, 97.0964f);
			break;
		case 26:
			func_1433(cParam0, 705.8042f, -1230.294f, 44.2243f, 60.9884f);
			break;
		case 53:
			func_1433(cParam0, 705.8099f, -1229.4f, 44.2311f, 67.5463f);
			break;
		case 16:
			func_1433(cParam0, 667.7685f, -1211.293f, 45.3101f, 92.5271f);
			break;
		case 17:
			func_1433(cParam0, 1339.753f, -1305.21f, 75.5849f, 337.5673f);
			break;
		case 19:
			func_1433(cParam0, 1857.32f, -1367.512f, 41.2697f, 162.265f);
			break;
		case 24:
			func_1433(cParam0, 691.6649f, -1235.476f, 43.3174f, 227.0576f);
			break;
		case 23:
			func_1433(cParam0, 676.2985f, -1227.818f, 43.598f, 352.091f);
			break;
		case 22:
			func_1433(cParam0, 663.6722f, -1229.636f, 43.3769f, 171.6396f);
			break;
		case 36:
			func_1433(cParam0, 2647.098f, -1270.327f, 51.0841f, 113.0633f);
			break;
		case 28:
			func_1433(cParam0, 2413.412f, -1220.656f, 44.9084f, 0.0301f);
			break;
		case 30:
			func_1433(cParam0, 1853.05f, -1835.788f, 42.0957f, 29.7034f);
			break;
		case 37:
			func_1433(cParam0, 1842.425f, -1833.848f, 43.2426f, 0.0743f);
			break;
		case 45:
			func_1433(cParam0, 2824.987f, -1165.335f, 47.3695f, 190.1776f);
			break;
		case 48:
			func_1433(cParam0, 483.1636f, 2222.628f, 246.0867f, 109.4105f);
			break;
		case 49:
			func_1433(cParam0, 2376.538f, 1339.845f, 105.3362f, 193.8848f);
			break;
		case 50:
			func_1433(cParam0, 2377.94f, 1338.177f, 105.4092f, 196.4492f);
			break;
		case 51:
			func_1433(cParam0, 491.0881f, 2221.171f, 246.1786f, 246.5501f);
			break;
		case 55:
			func_1433(cParam0, 2774.684f, 513.5845f, 66.9882f, 355.826f);
			break;
		case 76:
			func_1433(cParam0, -1616.827f, -1379.19f, 81.8942f, 339.9481f);
			break;
		case 73:
			func_1433(cParam0, -1611.214f, -1344.436f, 81.8767f, 359.9349f);
			break;
		case 75:
			func_1433(cParam0, -1678.714f, -1378.879f, 83.969f, 347.6046f);
			break;
		case 69:
			func_1433(cParam0, -302.3015f, 786.3279f, 116.9486f, 185.0768f);
			break;
		case 70:
			func_1433(cParam0, -1566.102f, -1448.615f, 90.6887f, 291.3719f);
			break;
		case 71:
			func_1433(cParam0, -1625.965f, -1395.404f, 81.6263f, 114.6379f);
			break;
		case 72:
			func_1433(cParam0, -835.0144f, -1343.726f, 42.473f, 0.0002f);
			break;
	}
	return !func_390(cParam0->f_5417);
}

int func_885(int iParam0, var uParam1)
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
		if (func_390(uParam1->f_6))
		{
		}
	}
	bVar0 = func_389();
	if (*uParam1)
	{
		if (bVar0 && !func_320((*Global_1835011)[4]->f_1, 1))
		{
			if (func_1434(5))
			{
				func_525(5);
				func_1435(5);
				func_1383(0);
				func_1382(0);
			}
		}
	}
	if (func_1436(Global_36) == 8)
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
	if (func_528(iVar1))
	{
		bVar3 = true;
		if (func_1437(iVar1))
		{
			bVar4 = true;
		}
		if (func_535(iVar1))
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
				func_536(uParam1->f_10);
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
			if (!func_1434(0) && func_1434(1))
			{
				func_1438(1, 0);
				*iParam0 = 0;
				return 0;
			}
		}
	}
	if (uParam1->f_4)
	{
		if (uParam1->f_10 == 0)
		{
			if (func_1439())
			{
				func_1440();
			}
			func_1383(0);
			func_1382(0);
			func_1384(uParam1->f_6);
		}
	}
	if (!func_528(uParam1->f_10))
	{
		if (*uParam1)
		{
			if ((func_1441(uParam1->f_10) == 0 || func_1442(uParam1->f_10) == 0) || func_1443(uParam1->f_10) == 0)
			{
				func_1444(uParam1->f_10);
			}
			func_1445(uParam1->f_10);
			func_1446(uParam1->f_10, uParam1->f_6, uParam1->f_9);
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
	if (func_528(iVar1))
	{
		bVar3 = true;
		if (func_1437(iVar1))
		{
			bVar4 = true;
		}
		if (func_535(iVar1))
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
			if (!func_390(uParam1->f_6))
			{
				set_entity_coords(iVar2, uParam1->f_6, false, true, true, true);
				set_entity_heading(iVar2, uParam1->f_9);
				_0x9587913b9e772d29(iVar2, 0);
			}
		}
	}
	if (func_1447(uParam1->f_10))
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
			Var8 = { func_1448(uParam1->f_10) };
			Var10 = { func_1449() };
			func_1450(iVar2, &Var8, &Var10, 0);
			_set_ped_as_saddle_horse_for_player(iVar6, iVar2);
			set_ped_config_flag(iVar2, 186, false);
		}
	}
	if (!uParam1->f_1)
	{
		*iParam0 = 2;
		return iVar2;
	}
	if (!func_521(uParam1->f_10))
	{
		set_entity_as_mission_entity(iVar2, true, true);
		func_1451(uParam1->f_10);
		if (uParam1->f_2 && !func_390(uParam1->f_6))
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
	func_520(uParam1->f_10);
	if (func_521(uParam1->f_10))
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

bool func_886(int iParam0, int iParam1, float fParam2, bool bParam3)
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

bool func_887(int iParam0)
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

bool func_888(int iParam0, int iParam1, vector3 vParam2, float fParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10)
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
	if (!func_1452(iParam1))
	{
		return false;
	}
	iVar0 = func_1453(iParam1, vParam2, fParam5, iParam8, 1, bParam6, bParam7);
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

void func_889(char[4] cParam0, bool bParam1)
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

float func_890(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

void func_891(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
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
	if (iParam0 == func_1454(Global_35) && is_player_teleport_active())
	{
	}
	if (func_1455(iParam0))
	{
		if (func_887(get_ped_index_from_entity_index(iParam0)))
		{
			_0x0348469daa17576c(iParam0);
		}
	}
	if (func_385(iParam5, 4) && is_entity_a_ped(iParam0))
	{
		iVar1 = get_ped_index_from_entity_index(iParam0);
		if (is_ped_on_vehicle(iVar1, false))
		{
			iVar0 = get_vehicle_ped_is_in(iVar1, true);
			if (does_entity_exist(iVar0) && !is_entity_dead(iVar0))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_891(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (is_ped_on_mount(iVar1))
		{
			iVar2 = get_mount(iVar1);
			if (does_entity_exist(iVar2) && !is_entity_dead(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_891(iVar2, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
	}
	if (!func_385(iParam5, 32))
	{
		if (bVar4 && is_entity_attached(iParam0))
		{
			clear_ped_tasks_immediately(get_ped_index_from_entity_index(iParam0), false, true);
		}
	}
	if (func_385(iParam5, 2))
	{
		if (is_entity_a_vehicle(iParam0))
		{
			_set_entity_coords_and_heading(iParam0, vParam1, fParam4, true, func_385(iParam5, 32), true);
		}
		else
		{
			_set_entity_coords_and_heading(iParam0, vParam1, fParam4, true, func_385(iParam5, 32), true);
			_0x9587913b9e772d29(iParam0, 0);
		}
	}
	else if (func_385(iParam5, 129))
	{
		if (func_385(iParam5, 128))
		{
			if (get_water_height_no_waves(vParam1, &uVar5))
			{
				vParam1.f_2 = uVar5;
			}
		}
		set_entity_coords_no_offset(iParam0, vParam1, func_385(iParam5, 32), true, true);
		set_entity_heading(iParam0, fParam4);
	}
	else
	{
		_set_entity_coords_and_heading(iParam0, vParam1, fParam4, true, func_385(iParam5, 32), true);
	}
	if (bVar4)
	{
		if (!func_385(iParam5, 16))
		{
			_set_ped_crouch_movement(get_ped_index_from_entity_index(iParam0), bVar3, 0, false);
		}
		if (func_1455(iParam0))
		{
			iVar6 = get_ped_index_from_entity_index(iParam0);
			_0x0348469daa17576c(iVar6);
			if (!func_385(iParam5, 32))
			{
				clear_ped_tasks(iVar6, 1, 0);
				task_stand_still(iVar6, -1);
			}
		}
		set_ped_cloth_package_index(get_ped_index_from_entity_index(iParam0), 1);
		if (get_ped_index_from_entity_index(iParam0) == Global_35 && !func_385(iParam5, 64))
		{
			if (!is_screen_faded_out())
			{
			}
			set_gameplay_cam_relative_heading(0f, 1f);
			set_gameplay_cam_relative_pitch(0f, 1f);
		}
	}
}

bool func_892(int iParam0, int iParam1, int iParam2)
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

bool func_893(var uParam0, int iParam1)
{
	switch (func_1456(uParam0))
	{
		case 0:
			if (!func_1457(iParam1, &(uParam0->f_8), &(uParam0->f_6)))
			{
				return true;
			}
			func_1458(uParam0, 1);
			break;
		case 1:
			func_1459(uParam0);
			render_script_cams(true, false, 3000, true, false, 0);
			iVar0 = 0;
			func_810(&iVar0, 0, 2, 0, 0, 0, 0);
			func_1458(uParam0, 2);
			break;
		case 2:
			if (func_1460(uParam0))
			{
				func_1461(uParam0->f_8, 5000f, 0);
				_0x4759cc730f947c81();
				func_27(&(uParam0->f_3), 1);
				func_1458(uParam0, 3);
			}
			break;
		case 3:
			if (func_900(&(uParam0->f_3)) >= 1f)
			{
				func_1458(uParam0, 4);
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
			func_1462(&iVar1, 0);
			release_script_audio_bank();
			func_1458(uParam0, 0);
			return true;
	}
	return false;
}

void func_894(char[4] cParam0)
{
	if (!func_120(cParam0, 524288))
	{
		MemCopy(&uVar0, {func_110(cParam0->f_607)}, 8);
		func_1463(&uVar0, 15000, 0, 0, 0, 1);
		func_103(cParam0, 524288);
	}
}

bool func_895(char[4] cParam0)
{
	iVar0 = func_35(cParam0);
	if (func_162(cParam0, func_33(cParam0)) <= 3)
	{
		iVar0 = func_33(cParam0);
	}
	Var1 = { func_1464(cParam0, iVar0) };
	if (func_1466(&(cParam0->f_10792), Var1, func_1465(&(cParam0->f_10792)), 0))
	{
		func_140(cParam0, func_33(cParam0), 262144);
		if (func_1467(&(cParam0->f_10792), 524288))
		{
			func_373(cParam0, 67108864);
			func_1468(&(cParam0->f_10792), 524288);
		}
		func_1469(&(cParam0->f_7375), &(cParam0->f_10792));
		return true;
	}
	return false;
}

void func_896(char[4] cParam0, int iParam1)
{
	cParam0->f_5307 = (cParam0->f_5307 - (cParam0->f_5307 && iParam1));
}

bool func_897(char[4] cParam0, struct<4> Param1)
{
	if (is_string_null_or_empty(&Param1))
	{
		return true;
	}
	if (func_8(cParam0, 16777216))
	{
		func_1470(cParam0);
		func_1471(cParam0);
		return true;
	}
	if (func_1472(Param1, &(cParam0->f_7375), cParam0))
	{
		return true;
	}
	if (func_154(cParam0) == 0)
	{
		func_915(cParam0);
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
			func_1473(cParam0);
			func_896(cParam0, 524288);
			func_1474(cParam0);
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

bool func_898(char[4] cParam0)
{
	iVar0 = 1;
	if (!func_1475(func_61(cParam0), func_120(cParam0, 65536)))
	{
		iVar0 = 0;
	}
	Var1 = { func_1476(func_61(cParam0)) };
	if (!is_string_null_or_empty(&Var1))
	{
		if (!func_1477(func_61(cParam0)))
		{
			iVar0 = 0;
		}
	}
	if (!func_421(cParam0, func_33(cParam0), 1))
	{
		iVar0 = 0;
	}
	if (func_120(cParam0, 4) && !_0x5e420ff293ee5472())
	{
		iVar0 = 0;
	}
	MemCopy(&cVar9, {func_877(cParam0->f_607)}, 3);
	if (!func_23(&(cParam0->f_8269)))
	{
		if (!func_899(&(cParam0->f_8269), &cVar9, 0, 1, 1))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

bool func_899(var uParam0, char* sParam1, int iParam2, bool bParam3, bool bParam4)
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
	func_1478(uParam0);
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

float func_900(var uParam0)
{
	if (!func_26(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_496(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_548() - uParam0->f_1);
}

bool func_901()
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

void func_902(float fParam0, float fParam1)
{
	set_gameplay_cam_relative_heading(fParam0, 1f);
	set_gameplay_cam_relative_pitch(fParam1, 1f);
}

bool func_903(char[4] cParam0)
{
	if ((((((func_1277(1) && func_1277(2)) && func_1277(3)) && func_1277(0)) && func_1277(4)) && func_1277(5)) && func_1277(6))
	{
		return true;
	}
	return false;
}

bool func_904(char[4] cParam0)
{
	if (!func_1479(cParam0))
	{
		return false;
	}
	if (!func_1480(cParam0))
	{
		return false;
	}
	if (!func_1481(cParam0))
	{
		return false;
	}
	if (!func_1482(cParam0))
	{
		return false;
	}
	Local_239[14]->f_1 = "station0";
	Local_239[15]->f_1 = "station1";
	return true;
}

bool func_905(char[4] cParam0)
{
	if (!_request_propset_2(-1311425568))
	{
		return false;
	}
	if (!_has_propset_loaded_2(-1311425568))
	{
		return false;
	}
	if (!func_1277(7))
	{
		return false;
	}
	if (!func_1277(8))
	{
		return false;
	}
	if (!func_1277(9))
	{
		return false;
	}
	return true;
}

bool func_906()
{
	bVar1 = true;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		bVar1 = (func_1483(iVar0) && bVar1);
		iVar0++;
	}
	return bVar1;
}

void func_907(vector3 vParam0, float fParam3, bool bParam4, bool bParam5)
{
	iVar0 = 1048576;
	if (bParam4)
	{
		iVar0 |= 131072;
	}
	if (bParam5)
	{
		iVar0 |= 524288;
	}
	clear_area(vParam0, fParam3, iVar0);
}

var func_908(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (!_does_volume_exist(iParam0))
	{
		return uVar0;
	}
	func_1484(iParam0, bParam2);
	_0x18262cafebb5fbe1(iParam0, iParam3, 0, 0, -1, -1, 0);
	_0xb56d41a694e42e86(iParam0, iParam3, 0, 0, -1, -1, 2);
	uVar0 = _0x4c39c95ae5db1329(iParam0, bParam2, 15);
	return uVar0;
}

void func_909(char[4] cParam0)
{
	func_151(cParam0, Global_35, "ARTHUR", 0, 0, 0, 0);
	func_151(cParam0, &(iLocal_63[0]), "RevSwanson", 0, 0, 0, 0);
	func_151(cParam0, &(iLocal_63[1]), "U_M_M_VALPOKERPLAYER_01", 0, 0, 0, 0);
	func_151(cParam0, &(iLocal_63[2]), "U_M_M_VALPOKERPLAYER_02", 0, 0, 0, 0);
	func_420(cParam0, &(iLocal_97[0]), "p_cards01x", 0, 0, 0, 0);
	func_420(cParam0, &(iLocal_97[2]), "p_chair05x", 0, 0, 0, 0);
	func_420(cParam0, &(iLocal_97[1]), "p_chair05x^1", 0, 0, 0, 0);
	func_420(cParam0, &(iLocal_97[3]), "p_chair05x^2", 0, 0, 0, 0);
	func_420(cParam0, &(iLocal_97[4]), 0, 0, 0, 0, 0);
	func_420(cParam0, &(iLocal_97[5]), 0, 0, 0, 0, 0);
	func_420(cParam0, &(iLocal_97[6]), 0, 0, 0, 0, 0);
}

void func_910(char[4] cParam0)
{
	func_1486(cParam0, 239760);
	func_1488(cParam0, 239838);
	func_1490(cParam0, 239943);
}

void func_911()
{
	func_1491(-1983417035, 1, 0f, 1, 0, 0, 0, 0);
	func_1491(-1801221395, 1, 1f, 0, 0, 0f, 1, 0);
}

void func_912(int iParam0)
{
	switch (func_20())
	{
		case -1:
			Global_1357549->f_1495 = (Global_1357549->f_1495 || iParam0);
			break;
	}
}

void func_913(char[4] cParam0, bool bParam1)
{
	iVar0 = func_1385();
	switch (iVar1795)
	{
		case 0:
			func_1213(&iVar0, 17);
			func_1214(&iVar0, 0);
			_pause_clock_this_frame(true);
			_set_weather_type(-173507739, false, true, true, 60f, false);
			_set_weather_type(-173507739, true, true, false, 0f, false);
			if (bParam1)
			{
				set_clock_date(func_696(iVar0), func_695(iVar0), func_694(iVar0));
				set_clock_time(func_697(iVar0), func_698(iVar0), func_699(iVar0));
				func_1492(2);
				iVar1 = func_33(cParam0);
				if (iVar1 <= iLocal_21)
				{
					func_1493(1);
				}
				else if (iVar1 == iLocal_22)
				{
					set_timecycle_modifier("MISSION_reverend1_sunPos");
					func_1493(3);
				}
				else
				{
					_set_milliseconds_per_game_minute(2000);
					func_1493(4);
				}
			}
			else
			{
				func_1493(1);
			}
			break;
		case 1:
			if (get_clock_hours() <= 8)
			{
				if (get_milliseconds_per_game_minute() != 500)
				{
					_set_milliseconds_per_game_minute(500);
				}
			}
			else if (get_clock_hours() <= 11)
			{
				if (get_milliseconds_per_game_minute() != 1000)
				{
					_set_milliseconds_per_game_minute(1000);
				}
			}
			else if (get_milliseconds_per_game_minute() != 2000)
			{
				_set_milliseconds_per_game_minute(2000);
			}
			if (func_33(cParam0) <= iLocal_20)
			{
				if (func_1496(func_1494(), func_1495(0), 1))
				{
					func_1213(&iVar0, 17);
					func_1214(&iVar0, 0);
					_pause_clock_this_frame(true);
				}
			}
			else
			{
				_pause_clock_this_frame(true);
				set_transition_timecycle_modifier("MISSION_reverend1_sunPos", 40f);
				if (get_milliseconds_per_game_minute() != 2000)
				{
					_set_milliseconds_per_game_minute(2000);
				}
				func_213(&uLocal_1729);
				func_1493(2);
			}
			break;
		case 2:
			_pause_clock_this_frame(true);
			func_1497(17, 0, 0, 0);
			if (func_1498(&uLocal_1729) >= 40f)
			{
				func_1493(3);
			}
			break;
		case 3:
			_pause_clock_this_frame(true);
			func_1497(17, 0, 0, 0);
			if (func_33(cParam0) == iLocal_23)
			{
				if (func_934(cParam0))
				{
					_0xbb6c707f20d955d4(20f);
					func_1493(4);
				}
			}
			break;
		case 4:
			break;
	}
}

void func_914(char[4] cParam0)
{
	func_1499(cParam0);
	iVar0 = func_33(cParam0);
	if (iVar0 != iLocal_16)
	{
		func_913(cParam0, 0);
	}
	if (iVar0 == iLocal_23)
	{
		func_1500();
	}
	if (iVar0 == iLocal_16 || iVar0 == iLocal_17)
	{
		func_1501(1);
	}
	if (does_entity_exist(&(iLocal_63[3])) && func_1502(&(iLocal_63[3]), 0))
	{
		func_1503(cParam0, "REV1_HOR_FAIL", "", 1, 0);
	}
	if (iVar1807 == 7)
	{
		func_1503(cParam0, "LAW_FAIL", "", 1, 0);
	}
	if (iVar0 == iLocal_16)
	{
		func_1504(cParam0);
	}
	else if (iVar0 == iLocal_17)
	{
		func_1505(cParam0);
	}
	else if (iVar0 == iLocal_18)
	{
		func_1506(cParam0);
	}
	else if (iVar0 == iLocal_19)
	{
		func_1507(cParam0);
	}
	else if (iVar0 == iLocal_20)
	{
		func_1508(cParam0);
	}
	else if (iVar0 == iLocal_21)
	{
		func_1509(cParam0);
	}
	else if (iVar0 == iLocal_22)
	{
		func_1510(cParam0);
	}
	else if (iVar0 == iLocal_23)
	{
		func_1511(cParam0);
	}
}

void func_915(char[4] cParam0)
{
	if (!func_23(&(cParam0->f_8269)))
	{
		return;
	}
	if (!func_121(cParam0, func_33(cParam0), 268435456))
	{
		return;
	}
	func_1512(cParam0);
}

void func_916(char[4] cParam0)
{
	if (!func_8(cParam0, 8388608))
	{
		if (func_162(cParam0, func_33(cParam0)) == 5 || func_162(cParam0, func_33(cParam0)) == 6)
		{
			if (!func_206())
			{
				if (func_900(&(cParam0->f_13112)) < 5f)
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

void func_917(char[4] cParam0)
{
	if (func_121(cParam0, func_33(cParam0), 8388608))
	{
		if (func_1513(cParam0))
		{
			_uiprompt_enable_prompt_type_this_frame(6);
			func_1514();
		}
		else
		{
			_display_hud_component(-1679307491);
			func_1515(cParam0, func_33(cParam0), 8388608);
		}
	}
}

void func_918(char[4] cParam0)
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
		func_896(cParam0, 1048576);
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
			func_896(cParam0, 134217728);
		}
	}
}

void func_919(char[4] cParam0)
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

void func_920(char[4] cParam0)
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

void func_921(char[4] cParam0)
{
	if (!is_itemset_valid(iLocal_14))
	{
		return;
	}
	iVar0 = get_itemset_size(iLocal_14);
	if (cParam0->f_13179 == -1 || cParam0->f_13179 > (iVar0 - 1))
	{
		cParam0->f_13179 = (iVar0 - 1);
	}
	iVar1 = cParam0->f_13179;
	while (iVar1 >= 0)
	{
		iVar3 = _get_entity_from_item(get_indexed_item_in_itemset(iVar1, iLocal_14));
		if (does_entity_exist(iVar3) && is_entity_dead(iVar3))
		{
			remove_from_itemset(iVar3, iLocal_14);
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
		cParam0->f_13179 = (get_itemset_size(iLocal_14) - 1);
	}
}

int func_922(char[4] cParam0)
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
			func_1516(cParam0->f_5423[iVar0]);
		}
		iVar0++;
	}
	return 0;
}

bool func_923(char[4] cParam0, int iParam1, int iParam2)
{
	iVar0 = func_132(iParam1);
	if (!func_1517(iVar0))
	{
		return false;
	}
	iVar1 = func_1518(iParam2);
	if (!func_1519(iVar1))
	{
		return false;
	}
	if (!func_1520(cParam0, iParam1, iParam2))
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

int func_924(char[4] cParam0, int iParam1)
{
	return cParam0->f_1[func_132(iParam1)]->f_21;
}

int func_925(char[4] cParam0, int iParam1)
{
	return 1;
}

void func_926(char[4] cParam0)
{
	if (!func_20() == 0 || network_is_host_of_this_script())
	{
		func_213(&(cParam0->f_603));
	}
}

void func_927(char[4] cParam0, int iParam1, int iParam2)
{
	cParam0->f_1[func_132(iParam1)]->f_10 = iParam2;
	settimera(0);
}

bool func_928(char[4] cParam0)
{
	if (!is_screen_faded_out())
	{
		return true;
	}
	if (!func_26(&(cParam0->f_13109)))
	{
		func_27(&(cParam0->f_13109), 0);
	}
	else if (func_900(&(cParam0->f_13109)) >= 10f)
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
					iVar3 = func_1521(cParam0->f_5421, iVar1);
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
	while (iVar1 < get_itemset_size(iLocal_14))
	{
		iVar6 = get_indexed_item_in_itemset(iVar1, iLocal_14);
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

float func_929(char[4] cParam0)
{
	return func_900(&(cParam0->f_603));
}

bool func_930(char[4] cParam0)
{
	if ((func_120(cParam0, 4) || func_120(cParam0, 128)) && !func_102())
	{
		return false;
	}
	return true;
}

bool func_931(char[4] cParam0, int iParam1, int iParam2)
{
	if (func_8(cParam0, -2147483648))
	{
		return true;
	}
	if (func_923(cParam0, iParam1, 4))
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
		func_1522(cParam0);
		if (func_1523(cParam0))
		{
			func_1524(cParam0);
		}
		if (func_121(cParam0, func_33(cParam0), 33554432) && func_8(cParam0, 524288))
		{
			_uilog_print_cached_objective();
		}
		func_896(cParam0, 524288);
		func_1525(&(cParam0->f_7375), 4);
		if (func_1513(cParam0))
		{
			func_140(cParam0, func_33(cParam0), 8388608);
			_hide_hud_component(-1679307491);
			_uiprompt_enable_prompt_type_this_frame(6);
			func_1514();
		}
		return true;
	}
	return false;
}

void func_932(char[4] cParam0)
{
	func_1526(cParam0);
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

bool func_933(char[4] cParam0, int iParam1)
{
	if (func_120(cParam0, 16384))
	{
		if (func_895(cParam0))
		{
			func_51(&(cParam0->f_10792));
			func_896(cParam0, 2097152);
			func_258(cParam0, 16384);
			func_103(cParam0, 128);
			return true;
		}
		return false;
	}
	if (!func_8(cParam0, 4))
	{
		func_925(cParam0, iParam1);
		func_99(cParam0, 4);
	}
	Var0 = { func_1464(cParam0, iParam1) };
	if (func_121(cParam0, func_33(cParam0), 2))
	{
		if (func_8(cParam0, 2097152))
		{
			if (func_895(cParam0))
			{
				func_896(cParam0, 2097152);
				func_897(cParam0, Var0);
			}
			return false;
		}
		else
		{
			return func_897(cParam0, Var0);
		}
	}
	else if (func_8(cParam0, 2097152))
	{
		if (func_895(cParam0))
		{
			func_896(cParam0, 2097152);
			func_1471(cParam0);
			return true;
		}
		else
		{
			return false;
		}
	}
	if (func_121(cParam0, func_33(cParam0), 2))
	{
		return func_897(cParam0, Var0);
	}
	return true;
}

bool func_934(char[4] cParam0)
{
	return func_1527(&(cParam0->f_7375));
}

void func_935(char[4] cParam0)
{
	if (((!does_entity_exist(Global_35) || Global_1935630->f_12) || is_ped_fatally_injured(Global_35)) || get_entity_health(Global_35) <= 0)
	{
		if (func_1528(cParam0))
		{
			func_432(cParam0, 2);
			StringCopy(&cVar0, "PLAYER_DEAD", 64);
			if (get_ped_config_flag(Global_35, 11, true))
			{
				StringCopy(&cVar0, "PLAYER_KO", 64);
			}
			func_1529(cParam0, cVar0);
			func_160(cParam0, 2);
		}
	}
}

int func_936(char[4] cParam0, int iParam1)
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
			if (func_1530(cParam0->f_5423[iVar1]->f_7, iParam1))
			{
				func_1531(cParam0, cParam0->f_5423[iVar1], bVar0);
			}
		}
		iVar1++;
	}
	return 0;
}

void func_937(char[4] cParam0)
{
	if ((is_screen_faded_out() && !is_player_playing(player_id())) && is_player_being_arrested(player_id(), false))
	{
		if (func_1532(cParam0))
		{
			func_432(cParam0, 6);
			StringCopy(&cVar0, "PLAYER_ARRESTED", 64);
			func_1529(cParam0, cVar0);
			func_160(cParam0, 2);
		}
	}
}

void func_938(char[4] cParam0)
{
	switch (func_1533(&iVar0))
	{
		case 1:
			func_1534(cParam0, Var1, 1, 0);
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

bool func_939(char[4] cParam0, int iParam1)
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

int func_940(char[4] cParam0, int iParam1)
{
	if (func_8(cParam0, 16777216))
	{
		func_1470(cParam0);
		func_896(cParam0, 65536);
		return 0;
	}
	if (!func_121(cParam0, iParam1, 2))
	{
		return 0;
	}
	Var0 = { func_1464(cParam0, iParam1) };
	if (func_1535(cParam0, &Var0))
	{
		if (!func_8(cParam0, 65536))
		{
			func_99(cParam0, 65536);
		}
		return 1;
	}
	return 0;
}

void func_941(char[4] cParam0, int iParam1)
{
	func_1536(&(cParam0->f_638), &(cParam0->f_819), &(cParam0->f_1020), &(cParam0->f_1081), &(cParam0->f_1124), &(cParam0->f_1126), &(cParam0->f_5147), &(cParam0->f_5188), &(cParam0->f_5239), &(cParam0->f_5249), &(cParam0->f_5265), &(cParam0->f_5286), iParam1, func_218(cParam0, iParam1));
}

void func_942(char[4] cParam0, int iParam1)
{
	if (!func_121(cParam0, func_33(cParam0), 67108864))
	{
		if (does_blip_exist(cParam0->f_5303))
		{
			remove_blip(&(cParam0->f_5303));
		}
		cParam0->f_7374 = 0;
		func_927(cParam0, iParam1, 2);
		func_134(cParam0, 0);
		func_135(cParam0, 0);
		func_99(cParam0, 8);
		func_896(cParam0, -2147483648);
		func_140(cParam0, func_33(cParam0), 67108864);
		func_896(cParam0, 4);
		func_896(cParam0, 8192);
		func_896(cParam0, 536870912);
		func_258(cParam0, 4);
		func_65(0);
		func_64(0);
		func_896(cParam0, 2);
		func_45();
		cParam0->f_5302 = 0;
		func_1537(cParam0);
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
				func_1538(1, 1);
			}
		}
	}
}

void func_943(bool bParam0)
{
	if (!func_190(0, 0, 1) || bParam0)
	{
		iVar0 = func_1057();
		iVar1 = func_1060(iVar0);
		fVar2 = (1f - (absf(to_float(iVar1)) / to_float(8)));
		fVar3 = func_1539(iVar0 < 0, 0f, (to_float(iVar1) / to_float(8)));
		fVar4 = func_1539(iVar0 > 0, 0f, (to_float(iVar1) / to_float(8)));
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

int func_944(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (iParam0 == player_id())
	{
		return func_1540(bParam1, bParam2, bParam3);
	}
	if (Global_1572887->f_12 != -1)
	{
		if (iParam0 == Global_1225639->f_10)
		{
			if (!Global_1225639->f_11)
			{
				return 0;
			}
		}
		else if (!does_entity_exist(get_player_ped(iParam0)))
		{
			return 0;
		}
	}
	else if (!does_entity_exist(get_player_ped(iParam0)))
	{
		return 0;
	}
	if (_0xad401c63158acbaa(iParam0))
	{
		_0xcbfb4951f2e3934c(iParam0, &Var0);
		if ((bParam3 || Var0.f_10 > 0) || get_player_wanted_level(iParam0) > 0)
		{
			return 1;
		}
	}
	else if (bParam2 && !_0x148e7ac8141c9e64(iParam0) == 1370593166)
	{
		return 0;
	}
	iVar17 = 0;
	while (iVar17 < 24)
	{
		if (_0x532c5fddb986ee5c(iParam0, iVar17, &Var18))
		{
			if (Var18.f_10 && (bParam3 || _0xdaefdfdb2aeece37(Var18, Var18.f_7) > 0))
			{
				return 1;
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
				return 1;
			}
		}
	}
	return 0;
}

var func_945(char* sParam0, int iParam1, bool bParam2, bool bParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, int iParam8)
{
	if (bParam2)
	{
		_0xdd1232b332cbb9e7(3, 1, 1);
	}
	if (Global_1572887->f_12 != -1)
	{
		return func_1541(sParam0, iParam1, 0, 0, 1, 1);
	}
	sVar0 = func_1542(iParam8, sParam0, sParam4, sParam5, sParam6, sParam7);
	if (bParam3)
	{
		_uilog_set_cached_objective(sVar0);
	}
	return func_1541(sVar0, iParam1, 0, 0, 1, 1);
}

bool func_946(char[4] cParam0)
{
	return true;
}

bool func_947(char[4] cParam0)
{
	return true;
}

int func_948(char[4] cParam0)
{
	return 1;
}

bool func_949(int iParam0)
{
	return (uVar2009 && iParam0) == iParam0;
}

int func_950(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 13;
		case 2:
			return 7;
		case 4:
			return 0;
		case 8:
			return 5;
		case 16:
			return 14;
		case 32:
			return 2;
		case 64:
			return 1;
		case 128:
			return 20;
		case 256:
			return 10;
		case 512:
			return 9;
		case 1024:
			return 15;
		case 2048:
			return 6;
		case 4096:
			return 17;
		case 8192:
			return 11;
		case 16384:
			return 18;
		case 32768:
			return 22;
		case 65536:
			return 4;
		case 131072:
			return 3;
		case 262144:
			return 8;
		default:
			break;
	}
	return -1;
}

void func_951(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_1543(&uLocal_2012, iParam0);
	}
	else
	{
		func_1544(&uLocal_2012, iParam0);
	}
}

bool func_952(int iParam0)
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

int func_953(int iParam0)
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

void func_954(int iParam0)
{
	if (func_1545(iParam0))
	{
		if (iParam0 == 6)
		{
			_0x5a4e1a41e3a02ad0(&(iLocal_108[iParam0]), 4, 0);
		}
		_delete_volume(&(iLocal_108[iParam0]));
	}
}

void func_955(int* iParam0)
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

void func_956(int* iParam0, bool bParam1, bool bParam2, bool bParam3)
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

bool func_957(int iParam0, bool bParam1)
{
	return (((iParam0 > -1 && iParam0 < 5) && does_entity_exist(&(iLocal_91[iParam0]))) && (!bParam1 || !is_entity_dead(&(iLocal_91[iParam0]))));
}

void func_958(int iParam0)
{
	if (func_1546(iParam0))
	{
		delete_object(iLocal_97[iParam0]);
	}
}

bool func_959(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 954);
}

int func_960(int iParam0)
{
	if (!func_959(iParam0))
	{
		return 0;
	}
	return Global_1895087[iParam0];
}

bool func_961(int iParam0)
{
	return iParam0 != 0;
}

int func_962(int iParam0)
{
	return (*Global_1392915)[iParam0]->f_1;
}

bool func_963(int iParam0)
{
	iVar0 = func_457(iParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	iVar1 = func_962(iVar0);
	if (iVar1 == -1)
	{
		return false;
	}
	return Global_1392915->f_121[iVar0]->f_19;
}

void func_964(int iParam0)
{
	if (func_20() != -1)
	{
		return;
	}
	if (!func_1547(iParam0, &iVar0))
	{
		return;
	}
	if (Global_1392915->f_121[iVar0]->f_15 == 1)
	{
	}
	Global_1392915->f_121[iVar0]->f_15 = 0;
}

int func_965(int iParam0)
{
	if (func_10(Global_1392915->f_121[iParam0]->f_3))
	{
		_display_hud_component(-1744263063);
		func_11(&(Global_1392915->f_121[iParam0]->f_3), 1, 0);
		Global_1392915->f_121[iParam0]->f_3 = 0;
		return 1;
	}
	Global_1392915->f_121[iParam0]->f_3 = 0;
	return 0;
}

int func_966(int iParam0)
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

void func_967(int iParam0)
{
	if (&Global_1898329 <= 0)
	{
		return;
	}
	if (!func_183(iParam0))
	{
		return;
	}
	if (func_185(iParam0))
	{
		func_13(iParam0, 0, 2);
	}
	iVar0 = func_966(iParam0);
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

void func_968(int iParam0, int iParam1)
{
	if (!func_992(iParam0))
	{
		return;
	}
	(*Global_1898346)[iParam0]->f_1 = ((*Global_1898346)[iParam0]->f_1 || iParam1);
}

bool func_969(int iParam0)
{
	return (*Global_1392915)[iParam0]->f_1 == -1;
}

void func_970(int iParam0, int iParam1)
{
	if (iParam0 == -1 || iParam0 >= 33)
	{
		return;
	}
	Global_1899528->f_11[iParam0] = iParam1;
}

bool func_971(int iParam0)
{
	if (iParam0 < 0 || iParam0 > 32)
	{
		return false;
	}
	return true;
}

bool func_972(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < Global_36308)
	{
		return does_blip_exist(&(Global_36308[iParam0]));
	}
	return false;
}

void func_973(var uParam0, bool bParam1)
{
	if (*uParam0 != -1)
	{
		func_1548(*uParam0, -1);
		func_1549(*uParam0, 0);
		func_1550(*uParam0, 0);
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

void func_974(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
	uParam0->f_3 = 0;
	uParam0->f_4 = -1;
	uParam0->f_6 = { 0f, 0f, 0f };
	uParam0->f_9 = 0f;
	uParam0->f_10 = 0;
	uParam0->f_5 = 0f;
	uParam0->f_11 = -1;
}

void func_975(var uParam0)
{
	if (func_10(uParam0->f_3))
	{
		func_11(&(uParam0->f_3), 1, 0);
	}
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_12 = 0;
	uParam0->f_9 = { 0f, 0f, 0f };
	uParam0->f_6 = 0;
	uParam0->f_15 = 0;
	uParam0->f_16 = 0;
}

int func_976(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_294((*Global_1347702)[iParam0]->f_12, 2097152))
		{
			if (func_320((*Global_1835011)[59]->f_1, 1))
			{
				return 0;
			}
		}
		else if (func_294((*Global_1347702)[iParam0]->f_12, 256))
		{
			if (!func_320((*Global_1835011)[59]->f_1, 1))
			{
				return 0;
			}
		}
	}
	return func_1551(iParam0);
}

bool func_977(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_978(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_979(int iParam0)
{
	if (func_20() != -1)
	{
		return false;
	}
	if (!func_266(iParam0))
	{
		return false;
	}
	return func_185((*Global_1347702)[iParam0]->f_15);
}

int func_980(int iParam0)
{
	if (&Global_1898329 == 15)
	{
		return -1;
	}
	if (!func_1552(iParam0))
	{
		return -1;
	}
	if (func_20() != -1)
	{
		iVar2 = func_966(iParam0);
		if (iVar2 >= 0)
		{
			func_1553(iParam0, 1);
			return iVar2;
		}
		else
		{
			iVar1 = &Global_1898329;
			(*Global_1898330)[iVar1] = iParam0;
			*(*Global_1898346)[iVar1] = { Var3 };
			func_1554(iVar1, 1);
			func_1553(iParam0, 1);
			Global_1898329 = &Global_1898329 + 1;
			if (&Global_1898329 > 15)
			{
				Global_1898329 = 15;
			}
			return iVar1;
		}
	}
	else
	{
		iVar2 = func_966(iParam0);
		if (iVar2 >= 0)
		{
			func_1553(iParam0, 1);
			return iVar2;
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < &Global_1898330)
			{
				if (!func_183(Global_1898330[iVar0]))
				{
					(*Global_1898330)[iVar0] = iParam0;
					*(*Global_1898346)[iVar0] = { Var3 };
					func_1554(iVar0, 1);
					func_1553(iParam0, 1);
					Global_1898329 = &Global_1898329 + 1;
					if (&Global_1898329 > 15)
					{
						Global_1898329 = 15;
					}
					return iVar0;
				}
				iVar0++;
			}
		}
	}
	return -1;
}

bool func_981(int iParam0)
{
	return func_289(iParam0) == 2;
}

void func_982(int iParam0)
{
	func_1555(iParam0);
}

bool func_983(int iParam0)
{
	if ((*Global_1347702)[iParam0]->f_44 != -1)
	{
		if ((*Global_1347702)[iParam0]->f_44 != 0)
		{
			if (!func_1556((*Global_1347702)[iParam0]->f_44))
			{
				return false;
			}
		}
	}
	return true;
}

void func_984(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_985(int iParam0)
{
	if ((*Global_1347702)[iParam0]->f_13 & 2 == 0)
	{
		iVar0 = 0;
		iVar1 = 0;
		while (iVar1 <= 4)
		{
			if (func_513(&((*Global_1347702)[iParam0]->f_29[iVar1])))
			{
				func_1558(&iVar0, func_1557(&((*Global_1347702)[iParam0]->f_29[iVar1])));
			}
			iVar1++;
		}
		if (iVar0 == 0)
		{
			func_978(&((*Global_1347702)[iParam0]->f_13), 2);
		}
		else if ((*Global_1347702)[iParam0]->f_12 & 1 != 0)
		{
			if (func_1560(iVar0, (*Global_1347702)[iParam0]->f_15, 1, (*Global_1347702)[iParam0]->f_27, func_1559()))
			{
				func_978(&((*Global_1347702)[iParam0]->f_13), 2);
			}
		}
		else
		{
			func_978(&((*Global_1347702)[iParam0]->f_13), 2);
		}
	}
}

void func_986(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (!func_266(iParam0))
	{
		return;
	}
	if (iParam2 == 1)
	{
		func_1561(iParam0);
	}
	if (func_977((*Global_1347702)[iParam0]->f_13, 256))
	{
		func_987(&((*Global_1347702)[iParam0]->f_13), 256);
	}
	if (func_294((*Global_1347702)[iParam0]->f_12, 1024))
	{
		func_1562(&((*Global_1347702)[iParam0]->f_12), 1024);
	}
	if (iParam1 == 1)
	{
		func_1563(iParam0, 0);
	}
	func_1564(iParam0);
	if (iParam3 == 1)
	{
		if (is_thread_active((*Global_1347702)[iParam0]->f_42, false))
		{
			force_cleanup_for_thread_with_this_id((*Global_1347702)[iParam0]->f_42, iParam4);
		}
		else
		{
			(*Global_1347702)[iParam0]->f_43 = 0;
		}
	}
}

void func_987(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_988(int iParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 <= (Global_40.f_1094 - 1))
	{
		if (&Global_40.f_450[iVar0] == iParam0)
		{
			func_987(&((*Global_1347702)[iParam0]->f_13), 2);
			_0x748c5f51a18cb8f0(0);
			func_986(iParam0, 1, 1, iParam1, 32);
			_0x748c5f51a18cb8f0(1);
			iVar1 = (Global_40.f_1094 - 1);
			if (iVar0 < iVar1)
			{
				if (func_266(&(Global_40.f_450[iVar1])))
				{
					Global_40.f_450[iVar0] = &Global_40.f_450[iVar1];
					Global_40.f_450[iVar1] = -1;
				}
			}
			else
			{
				Global_40.f_450[iVar0] = -1;
			}
			Global_40.f_1094 = (Global_40.f_1094 - 1);
			return;
		}
		iVar0++;
	}
}

bool func_989(int iParam0)
{
	switch (iParam0)
	{
		case 7:
		case 36:
			return true;
	}
	return false;
}

Vector3 func_990(int iParam0)
{
	if (!func_266(iParam0))
	{
		return 0f, 0f, 0f;
	}
	vVar0 = { 0f, 0f, 0f };
	if (func_1565(iParam0, &vVar0))
	{
		(*Global_1347702)[iParam0]->f_24 = { vVar0 };
	}
	return (*Global_1347702)[iParam0]->f_24;
}

int func_991(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (!func_1566(iParam0))
	{
		return 0;
	}
	if ((func_320((*Global_1347702)[59]->f_15, 1) && !func_320((*Global_1347702)[61]->f_15, 1)) && Global_40.f_9052.f_21 & 2 == 0)
	{
		return 0;
	}
	if (func_1567(player_id(), 1, 0))
	{
		if ((!does_blip_exist((*Global_1835011)[iParam0]->f_27) && !func_1568(iParam0)) && !Global_43891)
		{
			func_1570(iParam0, vdist2(func_1569(iParam0), Global_36), -1, 1, 1);
			func_1571((*Global_1835011)[iParam0], 2);
		}
		return 0;
	}
	if (bParam2)
	{
		if (!func_1560(func_1572(iParam0), func_12(iParam0), 0, (*Global_1835011)[iParam0]->f_21, iParam3))
		{
			return 0;
		}
		if (func_466(1) > 1)
		{
			if ((*Global_1835011)[iParam0]->f_73 <= 0)
			{
				(*Global_1835011)[iParam0]->f_73 = get_game_timer();
			}
			if ((get_game_timer() - (*Global_1835011)[iParam0]->f_73) < 60000)
			{
				if (func_1573(iParam0, 0, 1))
				{
					return 0;
				}
				if ((iParam0 == 15 && Global_1357549->f_1494 & 32768 != 0) && func_1355(Global_35, func_126(iParam0), 50f, 1, 1))
				{
					if (!_is_tracked_point_valid((*Global_1835011)[iParam0]->f_72))
					{
						(*Global_1835011)[iParam0]->f_72 = create_tracked_point();
						set_tracked_point_info((*Global_1835011)[iParam0]->f_72, func_126(iParam0), 5f);
					}
					if (is_screen_faded_in() && (is_tracked_point_visible((*Global_1835011)[iParam0]->f_72) || is_sphere_visible(func_126(iParam0), 2.5f)))
					{
						return 0;
					}
				}
			}
		}
	}
	iVar0 = func_980((*Global_1835011)[iParam0]->f_1);
	if (!func_992(iVar0))
	{
		return 0;
	}
	else if ((*Global_1835011)[iParam0]->f_73 != 0)
	{
		(*Global_1835011)[iParam0]->f_73 = 0;
		func_1574(iParam0);
		if (_is_tracked_point_valid((*Global_1835011)[iParam0]->f_72))
		{
			destroy_tracked_point((*Global_1835011)[iParam0]->f_72);
		}
	}
	if (bParam1)
	{
		func_982((*Global_1835011)[iParam0]->f_1);
	}
	else if (!&Global_1879534)
	{
		func_198(4);
	}
	return 1;
}

bool func_992(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 15)
	{
		return false;
	}
	return true;
}

void func_993(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, float fParam5, bool bParam6)
{
	if (!func_992(iParam1))
	{
		iParam1 = func_966(func_12(iParam0));
		if (!func_992(iParam1))
		{
			return;
		}
	}
	if (does_blip_exist((*Global_1835011)[iParam0]->f_27))
	{
		if ((bParam2 || bParam6) && (!func_1575(iParam0, -1) || (*Global_1835011)[iParam0]->f_70))
		{
			_blip_set_modifier((*Global_1835011)[iParam0]->f_27, 724623647);
		}
		else
		{
			if (func_207())
			{
				if (does_blip_exist((*Global_1835011)[iParam0]->f_27))
				{
					if ((*Global_1835011)[iParam0]->f_27 == Global_1905944->f_5698)
					{
						func_1576(1);
					}
				}
			}
			set_this_script_can_remove_blips_created_by_any_script(true);
			remove_blip(&((*Global_1835011)[iParam0]->f_27));
			if (func_1575(iParam0, -1) && func_1577(iParam0))
			{
				func_1570(iParam0, fParam5, iParam1, bParam2, 1);
				func_1571((*Global_1835011)[iParam0], 2);
			}
		}
	}
	else if ((bParam2 && !func_989(iParam0)) && !Global_43891)
	{
		func_1570(iParam0, fParam5, iParam1, bParam2, 1);
	}
	if (func_1578(iParam1, 48))
	{
		set_script_as_no_longer_needed(&((*Global_1835011)[iParam0]->f_12));
	}
	if ((is_thread_active((*Global_1835011)[iParam0]->f_16, false) && !func_1579(iParam0)) && !func_1578(iParam1, 1024))
	{
		force_cleanup_for_thread_with_this_id((*Global_1835011)[iParam0]->f_16, 1);
	}
	if (_is_tracked_point_valid((*Global_1835011)[iParam0]->f_72))
	{
		destroy_tracked_point((*Global_1835011)[iParam0]->f_72);
	}
	if (bParam4)
	{
		func_967((*Global_1835011)[iParam0]->f_1);
	}
	else
	{
		func_1580(iParam1, 3831);
	}
	(*Global_1835011)[iParam0]->f_73 = 0;
}

bool func_994(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return ((*Global_1945938)[iParam0]->f_1 && iParam1) != 0;
}

int func_995(int iParam0)
{
	iVar0 = func_474(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return func_1581(iVar0);
}

int func_996(int iParam0, int iParam1)
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
			func_1582(iVar2);
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

void func_997()
{
	iVar0 = 0;
	while (iVar0 < Global_1058888->f_40501)
	{
		iVar0++;
	}
}

int func_998(int iParam0, int iParam1)
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
			func_1583((iVar0 - 1), iVar0);
			iVar0 = (iVar0 - 1);
		}
	}
	else
	{
		iVar0 = iParam0;
		while (iVar0 < iParam1)
		{
			func_1583(iVar0, iVar0 + 1);
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
	if (!func_492(iParam0))
	{
		return;
	}
	func_1584(iParam1, &iVar0, &iVar1);
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

void func_1005(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_1006(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
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
			func_1585(iVar0);
			return true;
		}
		iVar0++;
	}
	return false;
}

struct<4> func_1009(int iParam0, int iParam1)
{
	Var0 = { func_1586(iParam0, iParam1) };
	Var0.f_3 = func_1587(iParam0, iParam1);
	return Var0;
}

void func_1010(bool bParam0, bool bParam1)
{
	if (func_20() == -1)
	{
		func_1588();
	}
	else
	{
		return;
	}
	func_1589();
	Global_40.f_9.f_14 = func_278();
	Global_40.f_9.f_20 = _get_bounty_for_player(get_player_index());
	Global_40.f_11999 = _0xb00ce33465b5406d(1, "startup");
	if (bParam0 && !bParam1)
	{
		if (func_1590())
		{
			func_364(Global_1310720->f_1);
		}
		else if (func_1559() == func_365(Global_36, 1) && func_1591() != 2)
		{
			func_364(Global_40.f_6);
			Global_40.f_9 = 1;
		}
		else
		{
			func_364(Global_36);
		}
		func_1592(Global_36, &vVar0, &uVar4);
		if (!func_1590())
		{
			if (func_1593(vVar0, Global_36) < func_1593(Global_40.f_9.f_7, Global_36))
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
		func_1592(Global_36, &(Global_40.f_9.f_7), &(Global_40.f_9));
		override_save_house(true, Global_40.f_9.f_7, 0f, true, &vVar0, &uVar3);
	}
	if (!bParam1)
	{
		func_222(Global_1935630, 8192);
	}
	func_1594();
}

bool func_1011(char[4] cParam0, int iParam1, int iParam2)
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

bool func_1012(char[4] cParam0, int iParam1)
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

void func_1013(int iParam0, int iParam1, bool bParam2)
{
	if (!func_1014(iParam0))
	{
		return;
	}
	func_1595(&((*Global_1360165)[iParam0]->f_13), iParam1, bParam2);
}

bool func_1014(int iParam0)
{
	return iParam0 > -1;
}

bool func_1015(var uParam0, int iParam1)
{
	return (*uParam0 && iParam1) != 0;
}

void func_1016(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_1014(iParam0))
		{
			return;
		}
	}
	func_1596(iParam1, &iVar0, &iVar1);
	set_bit((*Global_1360165)[iParam0]->f_58[iVar0], iVar1);
}

void func_1017(int iParam0)
{
	func_1016(iParam0, 36, 1);
}

void func_1018(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_1014(iParam0))
		{
			return;
		}
	}
	func_1596(iParam1, &iVar0, &iVar1);
	clear_bit((*Global_1360165)[iParam0]->f_58[iVar0], iVar1);
}

int func_1019(int iParam0, bool bParam1)
{
	if (!func_513(iParam0))
	{
		return 0;
	}
	if (bParam1)
	{
		if (!_0x800df3fc913355f3((*Global_1360165)[iParam0]->f_1))
		{
			func_1597(iParam0);
		}
	}
	return (*Global_1360165)[iParam0]->f_1;
}

bool func_1020(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_1014(iParam0))
		{
			return false;
		}
	}
	func_1596(iParam1, &iVar0, &iVar1);
	return is_bit_set(&((*Global_1360165)[iParam0]->f_58[iVar0]), iVar1);
}

void func_1021(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (func_513(iParam0))
	{
		iVar1 = func_550(iParam0);
		if (!is_entity_dead(iVar1))
		{
			iVar0 = get_ped_max_health(iVar1);
			set_ped_config_flag(iVar1, 179, true);
			func_1598(iParam0);
		}
	}
	if (func_1020(iParam0, 5, 1))
	{
		set_ped_config_flag(func_550(iParam0), 137, true);
	}
}

void func_1022(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!func_1014(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_1018(iParam0, 50, 1);
		func_1018(iParam0, 48, 1);
		func_1018(iParam0, 49, 1);
		func_1018(iParam0, 51, 1);
		func_1018(iParam0, 52, 1);
		func_1018(iParam0, 54, 1);
		func_1018(iParam0, 55, 1);
	}
	else
	{
		func_1016(iParam0, 50, 1);
		func_1016(iParam0, 48, 1);
		func_1016(iParam0, 49, 1);
		func_1016(iParam0, 51, 1);
		if (bParam3)
		{
			func_1016(iParam0, 54, 1);
		}
		else
		{
			func_1018(iParam0, 54, 1);
		}
		if (!bParam2)
		{
			func_1016(iParam0, 52, 1);
			if (bParam3)
			{
				func_1016(iParam0, 55, 1);
			}
		}
		else
		{
			func_1018(iParam0, 52, 1);
			if (!bParam3)
			{
				func_1018(iParam0, 55, 1);
			}
		}
	}
}

void func_1023(int iParam0, bool bParam1)
{
	if (!func_1014(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		set_ped_config_flag(func_550(iParam0), 204, true);
	}
	else
	{
		set_ped_config_flag(func_550(iParam0), 204, false);
	}
}

void func_1024(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (!func_513(iParam0))
	{
		return;
	}
	if (func_514(iParam0))
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
	if (func_1020(iParam0, 32, 1))
	{
		if (!bParam2)
		{
			return;
		}
	}
	iVar0 = func_1019(iParam0, 0);
	if (!_is_base_a_persistent_character(iVar0))
	{
		return;
	}
	iVar1 = func_550(iParam0);
	if (((does_entity_exist(iVar1) && func_1599(iParam0) < 10000f) && !bParam3) && !is_screen_faded_out())
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
		func_1016(iParam0, 2, 1);
	}
	else
	{
		func_1600(iParam0);
		func_1016(iParam0, 1, 1);
	}
}

void func_1025(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_513(iParam0))
		{
			return;
		}
	}
	Global_40.f_4942[iParam0] = (&Global_40.f_4942[iParam0] - (Global_40.f_4942[iParam0] && iParam1));
}

int func_1026(int iParam0)
{
	if (!func_513(iParam0))
	{
		return 0;
	}
	if (!does_entity_exist((*Global_1360165)[iParam0]->f_70))
	{
		(*Global_1360165)[iParam0]->f_70 = 0;
	}
	return (*Global_1360165)[iParam0]->f_70;
}

void func_1027(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	if (!func_1014(iParam1))
	{
		return;
	}
	iVar0 = func_1026(iParam1);
	if (func_1601(iParam1))
	{
		if (!func_1602(iParam1))
		{
			return;
		}
	}
	func_1018(iParam1, 39, 1);
	func_1603(iParam1, 64, 0);
	(*Global_1360165)[iParam1]->f_70.f_11 = 0;
	func_1603(iParam1, 8, 0);
	if (does_entity_exist(iVar0))
	{
		if (!bParam2)
		{
			func_1603(iParam1, 512, 1);
			set_ped_keep_task(iVar0, true);
		}
		else
		{
			set_blocking_of_non_temporary_events(iVar0, false);
			func_1016(iParam1, 43, 1);
		}
		if (bParam4)
		{
			func_1604(iParam1, 0, 1, 1, 1);
		}
	}
}

bool func_1028(int iParam0)
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

void func_1029(int iParam0)
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
		iVar1 = func_1605(iVar6);
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

void func_1030(int iParam0, int iParam1)
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

bool func_1031(int iParam0, int iParam1)
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

void func_1032(var uParam0)
{
	if (network_is_game_in_progress())
	{
		_set_blip_name_from_player_string(*uParam0, func_1607(func_1606(255), 109029619));
	}
	else if (func_297())
	{
		set_blip_name_from_text_file(*uParam0, "SADDLE_BLIP_ARTHUR");
	}
	else
	{
		func_1059();
		set_blip_name_from_text_file(*uParam0, "SADDLE_BLIP_JOHN");
	}
}

int func_1033(int iParam0)
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

void func_1034(var uParam0, bool bParam1)
{
	if (network_is_game_in_progress())
	{
		_set_blip_name_from_player_string(*uParam0, func_1607(func_1606(255), 109029619));
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
		else if (func_1059())
		{
			sVar0 = "HORSE_BLIP_JOHN";
		}
		if (compare_strings(sVar0, "", false, -1) != 0)
		{
			set_blip_name_from_text_file(*uParam0, sVar0);
		}
	}
}

int func_1035(int iParam0)
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

float func_1036(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist(vParam0, vParam3);
}

float func_1037(int iParam0)
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
	iVar0 = func_1441(iParam0);
	if (!is_model_valid(iVar0))
	{
		return -1f;
	}
	iVar1 = func_1033(iParam0);
	iVar2 = get_default_max_attribute_rank(iVar0, 7);
	fVar3 = _0xeb67d4e056c85a81(iVar1);
	fVar4 = _0x78d8c1d4eb80c588(iVar1);
	if (iVar1 >= iVar2)
	{
		return fVar3;
	}
	iVar5 = func_1033(iParam0) + 1;
	fVar6 = func_1608(iParam0);
	fVar7 = to_float(get_default_attribute_points_needed_for_rank(iVar0, 7, iVar1));
	fVar8 = to_float(get_default_attribute_points_needed_for_rank(iVar0, 7, iVar5));
	fVar9 = (fVar6 - fVar7);
	fVar10 = (fVar8 - fVar7);
	fVar11 = (fVar9 / fVar10);
	fVar12 = func_1609(fVar3, fVar4, fVar11);
	return fVar12;
}

void func_1038(int iParam0)
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

void func_1039(int iParam0)
{
	_set_blip_flash_style(iParam0, 673950256);
	_set_blip_flash_style(iParam0, 561559387);
	_set_blip_flash_style(iParam0, -201249929);
}

bool func_1040()
{
	if (func_331())
	{
		return _get_special_edition_cash_camp_bonus_enabled();
	}
	return false;
}

void func_1041(int iParam0)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if ((Global_40.f_4283.f_325 + iParam0) < 0)
	{
		return;
	}
	func_1610((Global_40.f_4283.f_325 + iParam0));
}

void func_1042(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (is_string_null_or_empty(sParam1))
	{
		sParam1 = "FEED_GANG_MONEY_EARN";
	}
	if (func_1040())
	{
		func_706(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", -329231034, 0, -585750914, 0, 0, 0, 1);
	}
	else
	{
		func_706(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 2124880615, 0, -585750914, 0, 0, 0, 1);
	}
}

char* func_1043(int iParam0)
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

char* func_1044(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7)
{
	return _0xd8402b858f4ddd88(&cParam0, get_length_of_literal_string(&cParam0));
}

int func_1045(int iParam0)
{
	return Global_17504.f_42[iParam0]->f_5;
}

bool func_1046(int iParam0)
{
	func_1054(iParam0, &iVar0, &iVar1);
	return is_bit_set(&(Global_1357549->f_1866[iVar0]), iVar1);
}

void func_1047(int iParam0, int iParam1)
{
	_journal_write_entry(iParam0);
	if (iParam1 == 1)
	{
		func_1048(1);
	}
}

void func_1048(bool bParam0)
{
	if (bParam0)
	{
		func_1543(&(Global_40.f_12019.f_42), 1);
	}
	else
	{
		func_1544(&(Global_40.f_12019.f_42), 1);
	}
}

int func_1049(int iParam0)
{
	if (!func_183(iParam0))
	{
		return -15;
	}
	return func_1611(iParam0);
}

bool func_1050(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_702(iParam1) || !func_702(iParam0))
		{
			return true;
		}
	}
	return iParam0 > iParam1;
}

bool func_1051(vector3 vParam0, int iParam3, var uParam4, int iParam5, int iParam6, bool bParam7)
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

int func_1052(int iParam0)
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

bool func_1053(vector3 vParam0, int iParam3, var uParam4, int iParam5, int iParam6, bool bParam7)
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

int func_1054(int iParam0, int iParam1, int iParam2)
{
	iVar0 = func_1612(iParam0, 1);
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
	return 1;
}

void func_1055(var uParam0)
{
	*uParam0 = 176656832;
	uParam0->f_1 = -15;
	uParam0->f_2 = 1017034651;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
}

void func_1056(int iParam0, int iParam1, bool bParam2)
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

int func_1057()
{
	iVar0 = func_556();
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

int func_1058(int iParam0)
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
	fVar1 = func_1539(absf(fVar1) < 1f, func_1539(fVar1 < 0f, -1f, 1f), fVar1);
	return ceil(fVar1);
}

bool func_1059()
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

int func_1060(int iParam0)
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

int func_1061()
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

void func_1062(int iParam0, bool bParam1, int iParam2)
{
	func_1613((get_game_timer() + iParam2), !bParam1);
	_databinding_write_data_int(Global_1955569->f_1.f_2.f_1, iParam0);
	func_1614(iParam0);
}

void func_1063(int iParam0)
{
	_databinding_write_data_bool(&(Global_1955569->f_5.f_2[0]->f_16[2]), false);
	_databinding_write_data_bool(&(Global_1955569->f_5.f_2[0]->f_32[2]), true);
	_databinding_write_data_string(&(Global_1955569->f_5.f_2[0]->f_20[2]), func_1615(iParam0));
	_databinding_write_data_string(&(Global_1955569->f_5.f_2[0]->f_24[2]), "pausemenu_player");
}

void func_1064(bool bParam0)
{
	bVar3 = false;
	if (func_1616(&iVar4))
	{
		if (iVar4 <= 0)
		{
			return;
		}
		iVar5 = 0;
		while (iVar5 < iVar4)
		{
			if (func_1617(iVar5, &iVar2, &iVar0))
			{
				if (!func_576(iVar2, 0))
				{
				}
				else
				{
					iVar1 = func_1618(iVar2);
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
							if (func_595(iVar2) == -1013984273)
							{
								if (iVar0 == 1014511709)
								{
									bVar3 = func_1057() <= -160;
								}
								else if (iVar0 == -1712679084)
								{
									bVar3 = func_1057() >= 160;
								}
							}
							else
							{
								bVar3 = iVar0 == func_1619();
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

char* func_1065(int iParam0)
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

bool func_1066(int iParam0)
{
	return func_595(iParam0) == -427144552;
}

bool func_1067(int iParam0)
{
	if (func_20() != -1)
	{
		return false;
	}
	if (func_597(iParam0, 1048576))
	{
		return false;
	}
	if (is_weapon_valid(iParam0))
	{
		return func_1072(iParam0, &uVar0, 1, 0, 0);
	}
	return func_340(iParam0, 1, 0);
}

void func_1068(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (func_595(iParam0) != -427144552)
	{
		return;
	}
	iVar0 = func_602(iParam0, 0);
	if (!is_weapon_valid(iVar0))
	{
		return;
	}
	if (bParam2 || !func_122(iVar0))
	{
		if (func_20() == -1)
		{
			func_603(iVar0);
		}
		if (bParam2 || (!has_ped_got_weapon(Global_35, iVar0, 0, false) && func_580(iParam0, 0, 0) == 0))
		{
			if (!*bParam3 && !iParam4 == 1248274121)
			{
				func_656(iParam0, iParam1, 0, 0, 0);
				play_sound_frontend("REWARD_NEW_GUN", "HUD_REWARD_SOUNDSET", true, 0);
				*bParam3 = 1;
			}
		}
	}
}

void func_1069(int iParam0, int iParam1)
{
	if (func_596(iParam0, 58855631))
	{
		func_1220(iParam0, -915411861, &iVar0, 1);
		*iParam1 = (*iParam1 * iVar0);
	}
}

int func_1070(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	if (!func_576(iParam0, 0))
	{
		return 0;
	}
	if (!func_604(0))
	{
		bParam2 = true;
	}
	if (bParam2)
	{
		return _0xe80e50bee276a54a(iParam0, uParam1->f_4);
	}
	return _0xaddd1e7c0ecf7d95(func_178(bParam3), iParam0);
}

int func_1071(int iParam0, bool bParam1)
{
	if (func_608(iParam0))
	{
		return get_ped_ammo_by_type(Global_35, iParam0);
	}
	return _0xe787f05dfc977bde(func_178(bParam1), iParam0, 0);
}

bool func_1072(int iParam0, var uParam1, int iParam2, bool bParam3, bool bParam4)
{
	func_1620(&iParam0);
	if (!func_576(iParam0, 0))
	{
		return false;
	}
	if (!func_604(0))
	{
		bParam3 = true;
	}
	if (func_1066(iParam0) && _0x705be297eebdb95d(iParam0))
	{
		if (_is_weapon_one_handed(iParam0))
		{
			Var0 = { func_1203(0) };
			Var4.f_9 = -1591664384;
			if (!func_1095(iParam0, &Var0, 1728382685, 0))
			{
				return false;
			}
			else if (func_1096(iParam0, &Var4, 1728382685))
			{
				return false;
			}
			if (func_1204(iParam0, 1))
			{
				if (!func_1095(iParam0, &Var0, -649335959, 0))
				{
					return false;
				}
				else if (func_1096(iParam0, &Var4, -649335959))
				{
					return false;
				}
			}
		}
		else if (!func_1621(iParam0, &uVar26, 0))
		{
			return false;
		}
		return true;
	}
	iVar27 = func_1070(iParam0, uParam1, bParam3, bParam4);
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
		iVar28 = func_1622(iParam0, *uParam1, uParam1->f_4, bParam4);
	}
	else
	{
		iVar28 = _0xe787f05dfc977bde(func_178(bParam4), iParam0, 0);
	}
	if ((iVar28 + iParam2) > iVar27)
	{
		return true;
	}
	return false;
}

int func_1073(int iParam0, int iParam1)
{
	if (!func_576(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_595(iParam0);
	if (iVar0 == -427144552 && is_weapon_valid(iParam0))
	{
		return _get_ammo_type_for_weapon(iParam0);
	}
	else if (iVar0 == 307971639 && _is_ammo_valid(iParam0))
	{
		return iParam0;
	}
	if (func_596(iParam0, 1399091007))
	{
		func_1137(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

int func_1074(int iParam0, bool bParam1)
{
	if (!is_weapon_valid(iParam0))
	{
		return 0;
	}
	Var0 = { func_1623(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam1)
	{
		func_1624(&Var0, func_1203(0));
	}
	if (!func_1625(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	func_1147(iVar14);
	return uVar15;
}

int func_1075()
{
	return _0x62cab7db62ead434(-2076669067, 0);
}

int func_1076(int iParam0)
{
	return _0xec3959e9950bf56b(iParam0);
}

void func_1077(int iParam0)
{
	if (func_20() != -1)
	{
		return;
	}
	iVar0 = func_1626(iParam0);
	fVar1 = func_1627(iParam0);
	if ((Global_1347477->f_117 || !func_598(31)) || !func_1628(iVar0))
	{
		return;
	}
	if (fVar1 <= 0f)
	{
		return;
	}
	if (func_1629(iVar0) >= 7)
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
	func_1630(iVar0, (&Global_40.f_11095.f_11[iVar0] + fVar1), 0);
	func_706(_create_var_string(6, func_1631(iParam0), fVar1), "itemtype_textures", func_1632(iVar0), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

int func_1078(int iParam0)
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

int func_1079(int iParam0, int iParam1)
{
	if (!func_1235(17, &Var0))
	{
		return 0;
	}
	Var0.f_2 = iParam1;
	Var0.f_3 = iParam0;
	_datafile_get_int(&uVar5, &Var0);
	return uVar5;
}

char* func_1080(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6)
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
			else if (func_591() >= 12)
			{
				sParam3 = _create_var_string(2, "COL_CC_CARD_POSTED_OBJ", func_1633(), 12);
			}
			else
			{
				sParam3 = _create_var_string(2, "COL_CC_CARD_FOUND_OBJ", func_1634(), 12);
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
			else if (func_1119() >= 30)
			{
				sParam3 = _create_var_string(2, "COL_DB_POSTED_OBJ", func_1635(), 30);
			}
			else
			{
				sParam3 = _create_var_string(2, "COL_DB_FOUND_OBJ", func_1119(), 30);
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
				sParam3 = _create_var_string(2, "COL_LF_CAUGHT_OBJ", func_1636(), 13);
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
			else if (func_1120() >= 10)
			{
				sParam3 = _create_var_string(2, "COL_RC_POSTED_OBJ", func_1637(), 10);
			}
			else
			{
				sParam3 = _create_var_string(2, "COL_RC_FOUND_OBJ", func_1120(), 10);
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
				sParam3 = _create_var_string(2, "COL_TX_CARCASS_COLLECTED_OBJ", sParam4, func_1079(iParam6, 20));
			}
			break;
	}
	return sParam3;
}

bool func_1081(int iParam0, int iParam1, int iParam2)
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

bool func_1082(int iParam0, int iParam1, vector3 vParam2, char* sParam5, char* sParam6)
{
	if (!_uilog_is_entry_registered(3, iParam1))
	{
		_uilog_add_entry_hash(3, iParam1, vParam2, get_hash_key(sParam5), get_hash_key(sParam6), 0);
	}
	return true;
}

bool func_1083(int iParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6, int iParam7)
{
	_uilog_add_or_update_objective(3, iParam1, get_hash_key(sParam2), sParam2, false, false, false);
	_uilog_set_entry_pinned(3, iParam1, true);
	_uilog_set_entry_brief_texture(3, iParam1, get_hash_key(sParam4), get_hash_key(sParam5));
	_uilog_set_entry_icon_texture(3, iParam1, iParam6, iParam7);
	_uilog_update_entry_subheader(3, iParam1, _create_var_string(2, sParam3));
	return true;
}

bool func_1084(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
{
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < iParam6)
	{
		if (iParam2 == -2076669067)
		{
			iVar2 = func_1638(iVar0);
			if (iParam4 == iVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = (func_340(iVar2, 1, 0) || func_1640(func_1639(iVar2)));
			}
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1088(func_1638(iVar0))), func_1088(func_1638(iVar0)), bVar1, true, false);
		}
		if (iParam2 == -440187297)
		{
			if (iVar0 == 0)
			{
				bVar1 = func_1119() >= iParam8;
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1641(iVar0)), func_1641(iVar0), bVar1, true, false);
			}
			else if (iVar0 == 1)
			{
				bVar1 = func_1635() >= iParam8;
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1641(iVar0)), func_1641(iVar0), bVar1, true, false);
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
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1641(iVar0)), func_1641(iVar0), bVar1, true, false);
			}
		}
		if (iParam2 == -1531394072)
		{
			iVar2 = func_1130(iParam3, func_1642(iVar0));
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			else if (bParam9)
			{
				if (iParam4 == iVar2)
				{
					bVar1 = (func_1126(iVar2) - iParam7) >= func_1079(iParam3, func_1643(iVar0));
				}
				else
				{
					bVar1 = func_1126(iVar2) >= func_1079(iParam3, func_1643(iVar0));
				}
			}
			else if (iParam4 == iVar2)
			{
				bVar1 = (func_1126(iVar2) + iParam7) >= func_1079(iParam3, func_1643(iVar0));
			}
			else
			{
				bVar1 = func_1126(iVar2) >= func_1079(iParam3, func_1643(iVar0));
			}
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1644(iVar2)), func_1644(iVar2), bVar1, true, false);
		}
		if (iParam2 == 1995362678)
		{
			if (func_1645(_0x126cbebba46693cf(iVar0, 1995362678, 0)))
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
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1646(_0x126cbebba46693cf(iVar0, iParam2, 0))), func_1646(_0x126cbebba46693cf(iVar0, iParam2, 0)), bVar1, true, false);
		}
		if (iParam2 == 2103522376)
		{
			if (iVar0 == 0)
			{
				bVar1 = func_1120() >= iParam8;
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1647(iVar0)), func_1647(iVar0), bVar1, true, false);
			}
			else if (iVar0 == 1)
			{
				bVar1 = func_1637() >= iParam8;
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1647(iVar0)), func_1647(iVar0), bVar1, true, false);
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
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1647(iVar0)), func_1647(iVar0), bVar1, true, false);
			}
		}
		if (iParam2 == 678508515)
		{
			iVar2 = func_1130(iParam3, func_1642(iVar0));
			if (bParam9)
			{
				if (iParam4 == iVar2)
				{
					bVar1 = (func_1126(iVar2) - iParam7) >= true;
				}
				else
				{
					bVar1 = func_1648(iVar2);
				}
			}
			else if (iParam4 == iVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = func_1648(iVar2);
			}
			if (((((((iParam5 == 7 || iParam5 == 3) || iParam5 == 4) || iParam5 == 5) || iParam5 == 0) || iParam5 == 1) || iParam5 == 2) || iParam5 == 8)
			{
				bVar1 = true;
			}
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1649(iVar2)), func_1649(iVar2), bVar1, true, false);
		}
		iVar0++;
	}
	return true;
}

bool func_1085(int iParam0, int iParam1, int iParam2, int iParam3)
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
		if (func_1636() >= 13)
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

bool func_1086(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (func_183(func_196(0)) && ((func_1650(0) == 1 || func_1650(0) == 8) || func_1650(0) == 6))
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

var func_1087(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, int iParam6, int iParam7, char* sParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13)
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

char* func_1088(int iParam0)
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

bool func_1089(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_1090(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return is_bit_set(&(Global_40.f_7857[iVar1]), iVar2);
}

void func_1091(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	uVar3 = &Global_40.f_7857[iVar1];
	set_bit(&uVar3, iVar2);
	Global_40.f_7857[iVar1] = uVar3;
}

void func_1092(int iParam0)
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
			func_1651(1);
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
			func_1652(1);
			break;
		case 19:
			_uitutorial_set_rpg_icon_visibility(1, 0);
			_uitutorial_set_rpg_icon_visibility(0, 0);
			func_1652(2);
			break;
		case 20:
			_uitutorial_set_rpg_icon_visibility(3, 0);
			_uitutorial_set_rpg_icon_visibility(2, 0);
			func_1652(3);
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
			func_1653(1);
			break;
		case 34:
			func_1654(1);
			break;
		case 35:
			func_1655(1);
			break;
		case 36:
			break;
		case 37:
			func_1656(0);
			break;
		case 38:
			func_1657(0);
			break;
		case 39:
			func_1658(0);
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
			if ((!&Global_1879534 && func_389()) && _is_deadeye_ability_locked(get_player_index(), 2))
			{
				func_713("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_MANUAL_PAINT", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_level(get_player_index(), 2);
			func_318(586, 0);
			break;
		case 3:
			if ((!&Global_1879534 && func_389()) && _is_deadeye_ability_locked(get_player_index(), 3))
			{
				func_713("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_STAY_ACTIVE", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_locked(get_player_index(), 3, false);
			_set_deadeye_ability_level(get_player_index(), 3);
			func_318(587, 0);
			break;
		case 4:
			if ((!&Global_1879534 && func_389()) && _is_deadeye_ability_locked(get_player_index(), 4))
			{
				func_713("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_FATAL", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_locked(get_player_index(), 3, false);
			_set_deadeye_ability_locked(get_player_index(), 4, false);
			_set_deadeye_ability_level(get_player_index(), 4);
			func_318(588, 0);
			break;
		case 5:
			if ((!&Global_1879534 && func_389()) && _is_deadeye_ability_locked(get_player_index(), 5))
			{
				func_713("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_CRITICAL", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
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
				if (!func_1160(99217379) || func_1659(99217379) == 2110595215)
				{
					if (func_1059())
					{
						iVar0 = -1515874150;
					}
					else
					{
						iVar0 = 899611344;
					}
					if (!func_340(iVar0, 1, 0))
					{
						func_649(iVar0, 1, 752097756);
					}
					func_628(Global_35, iVar0, 0, 99217379, 1, 1, 1, 0, 1, 1);
				}
			}
			break;
		case 48:
			if (func_20() == -1)
			{
				if (!func_340(1013902307, 1, 0))
				{
					func_649(1013902307, 1, 752097756);
				}
			}
			break;
		case 50:
			if (func_20() == -1)
			{
				if (!func_340(1013902307, 1, 0))
				{
					func_649(1013902307, 1, 752097756);
				}
				if (!func_340(142640135, 1, 0))
				{
					func_649(142640135, 1, 752097756);
				}
			}
			break;
		case 49:
			if (func_20() == -1)
			{
				if (!func_340(786809402, 1, 0))
				{
					func_649(786809402, 1, 752097756);
				}
			}
			break;
		case 51:
			if (func_20() == -1)
			{
				if (!func_340(786809402, 1, 0))
				{
					func_649(786809402, 1, 752097756);
				}
				if (!func_340(-518019409, 1, 0))
				{
					func_649(-518019409, 1, 752097756);
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
			func_1660();
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

bool func_1093(int iParam0)
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

int func_1094(int iParam0, int iParam1)
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

bool func_1095(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	return func_1622(iParam0, *uParam1, iParam2, bParam3) > 0;
}

bool func_1096(int iParam0, var uParam1, int iParam2)
{
	if (func_1661(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return false;
}

struct<4> func_1097(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	if (!func_576(iParam0, 0))
	{
		return Var0;
	}
	_0x886dfd3e185c8a89(func_178(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

bool func_1098(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(uParam1))
	{
		return false;
	}
	if (func_1662(iParam0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_1207(*uParam1, &Var0, bParam6, 0))
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
	if (!func_604(bParam6))
	{
		iVar14 = -1;
		return iVar14 != -1;
	}
	if (!_0x3e4e811480b3ae79(func_178(bParam6), uParam1, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

void func_1099(int iParam0, int iParam1)
{
	if ((get_ammo_in_clip(Global_35, &iVar0, iParam0) && iVar0 < iParam1) && iVar0 < _get_weapon_clip_size(iParam0))
	{
		iVar1 = func_1663(_get_weapon_clip_size(iParam0), iParam1);
		set_ammo_in_clip(Global_35, iParam0, iVar1);
	}
}

void func_1100(int iParam0)
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

int func_1101(int iParam0)
{
	if (func_1664(iParam0))
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

bool func_1102(int iParam0)
{
	return _is_ammo_valid(_get_ammo_type_for_weapon(iParam0));
}

int func_1103(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	iVar0 = 0;
	if (!is_entity_dead(iParam0))
	{
		get_current_ped_weapon(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

int func_1104(int iParam0)
{
	iVar0 = _get_weapon_type_from_ammo_type(iParam0);
	if (_0x705be297eebdb95d(iVar0))
	{
		if (_is_weapon_two_handed(iVar0))
		{
			if (!func_598(50))
			{
				if (!func_598(48))
				{
					return 133;
				}
				return 135;
			}
		}
		else if (_is_weapon_one_handed(iVar0))
		{
			if (!func_598(51))
			{
				if (!func_598(49))
				{
					return 134;
				}
				return 136;
			}
		}
	}
	return 137;
}

bool func_1105(int iParam0, int iParam1, var uParam2)
{
	if (!func_576(iParam1, 0))
	{
		return false;
	}
	if (func_595(iParam1) != -1037537535)
	{
		return false;
	}
	bVar1 = func_20() != -1;
	iVar2 = _get_metaped_type(iParam0);
	if (func_600(iParam1) == -999503751)
	{
		return true;
	}
	iVar4 = func_674(iParam1);
	if (iVar4 == -358215195)
	{
		*uParam2 = 2084739242;
		return false;
	}
	bVar7 = false;
	iVar8 = iParam1;
	if (func_596(iParam1, 866047851))
	{
		iVar5 = func_675(iVar4, 1);
		if (func_1665(&(Global_1946804->f_1497)) >= 2 && &Global_1946804->f_1497.f_1[iVar5] != iVar8)
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
			iVar3 = func_600(&(Global_1946804->f_1497.f_1[iVar5]));
			if (bVar7 && iVar3 == -525676072)
			{
				*uParam2 = -1938792745;
				return false;
			}
			break;
		case -1944638739:
			iVar5 = 35;
			if (&Global_1946804->f_1497.f_1[iVar5] != &Global_1946804->f_57[iVar5] && func_596(iParam1, -1638171711))
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
			if (func_1666(1868067663, &uVar0))
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
				iVar10 = func_1667(iVar8, iVar4, iVar2, bVar1);
				iVar9 = func_1667(&(Global_1946804->f_1497.f_1[iVar5]), iVar4, iVar2, bVar1);
				if (((iVar11 + iVar10) - iVar9) > 31)
				{
					*uParam2 = -1608241763;
					return false;
				}
				Jump @776; //curOff = 583
				iVar3 = func_600(iParam1);
				iVar5 = 36;
				iVar6 = 35;
				if (iParam1 != &Global_1946804->f_57[iVar6] && func_596(&(Global_1946804->f_1497.f_1[iVar5]), -1638171711))
				{
					*uParam2 = -357399012;
					return false;
				}
				if (iVar3 == 1769055947 || iVar3 == 1545016984)
				{
				}
				else
				{
					if (iParam1 != &Global_1946804->f_57[iVar6] && func_1668(&(Global_1946804->f_1497.f_1[iVar5])))
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

void func_1106()
{
	_0xfe7c9cf376d23342(player_id(), (1f - (Global_40.f_11095.f_64 + Global_1347477->f_175)));
}

void func_1107()
{
	fVar0 = Global_40.f_11095.f_44;
	fVar1 = Global_40.f_11095.f_45;
	set_player_health_recharge_multiplier(player_id(), (1f - (fVar0 - Global_40.f_11095.f_69)));
	_0x08e22898a6af4905(player_id(), (1f - fVar0));
	_0xfeca17cf3343694b(player_id(), (1f - fVar0));
	_0xbbadfb5e5e5766fb(player_id(), (1f - fVar1));
}

int func_1108()
{
	iVar1 = 0;
	while (iVar1 < 26)
	{
		if (func_340(func_1669(iVar1), 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1109(int iParam0)
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

bool func_1110(int iParam0, int iParam1)
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

int func_1111(int iParam0)
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

bool func_1112(int iParam0, int iParam1)
{
	iVar0 = func_1670(iParam0);
	if (iVar0 != -15)
	{
		func_327(&iVar0, 0, iParam1, 0, 0, 0, 0, 0);
		return !func_703(iVar0, 1);
	}
	return false;
}

void func_1113(int iParam0)
{
	Global_40.f_12004.f_6 = (Global_40.f_12004.f_6 || iParam0);
}

void func_1114(int iParam0)
{
	Global_40.f_12004.f_1 = (Global_40.f_12004.f_1 || iParam0);
}

void func_1115(int iParam0)
{
	Global_40.f_12004.f_3 = (Global_40.f_12004.f_3 || iParam0);
}

void func_1116(int iParam0)
{
	Global_40.f_12004.f_5 = (Global_40.f_12004.f_5 || iParam0);
}

int func_1117(int iParam0)
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
	iVar1 = func_1126(iVar9);
	iVar2 = func_1126(iVar10);
	iVar3 = func_1126(iVar11);
	iVar5 = func_1127(iVar9);
	iVar6 = func_1127(iVar10);
	iVar7 = func_1127(iVar11);
	if (iParam0 != 2)
	{
		iVar4 = func_1126(iVar12);
		iVar8 = func_1127(iVar12);
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

void func_1118(int iParam0)
{
	Global_40.f_12004.f_2 = (Global_40.f_12004.f_2 || iParam0);
}

int func_1119()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 30)
	{
		if (func_1671(_0x126cbebba46693cf(iVar1, -440187297, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1120()
{
	return _0x5461c821d00fe15a(2103522376, 0);
}

bool func_1121(int iParam0, int iParam1, char* sParam2, bool bParam3, int iParam4, bool bParam5)
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
			if (func_1648(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1648(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_1648(iVar0))
		{
			*sParam2++;
		}
		if (func_1648(iVar0))
		{
			return true;
		}
	}
	else if (iParam0 == -1248968496)
	{
		if (bParam3)
		{
			if (func_1648(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1648(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_1648(iVar0))
		{
			*sParam2++;
		}
		if (func_1648(iVar1))
		{
			*sParam2++;
		}
		if (func_1648(iVar0) && func_1648(iVar1))
		{
			return true;
		}
	}
	else if (iParam0 == 1706369307)
	{
		if (bParam3)
		{
			if (func_1648(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1648(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_1648(iVar0))
		{
			*sParam2++;
		}
		if (func_1648(iVar1))
		{
			*sParam2++;
		}
		if (func_1648(iVar2))
		{
			*sParam2++;
		}
		if ((func_1648(iVar0) && func_1648(iVar1)) && func_1648(iVar2))
		{
			return true;
		}
	}
	else
	{
		if (bParam3)
		{
			if (func_1648(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1648(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_1648(iVar0))
		{
			*sParam2++;
		}
		if (func_1648(iVar1))
		{
			*sParam2++;
		}
		if (func_1648(iVar2))
		{
			*sParam2++;
		}
		if (func_1648(iVar3))
		{
			*sParam2++;
		}
		if (((func_1648(iVar0) && func_1648(iVar1)) && func_1648(iVar2)) && func_1648(iVar3))
		{
			return true;
		}
	}
	return false;
}

void func_1122(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2)
	{
	}
	switch (iParam0)
	{
		case 1497516462:
			func_1672(1497516462);
			func_1673(2016141805);
			func_1673(1010885152);
			func_1673(-502324015);
			break;
		case 2016141805:
			func_1673(1497516462);
			func_1672(2016141805);
			func_1673(1010885152);
			func_1673(-502324015);
			break;
		case 1010885152:
			func_1673(1497516462);
			func_1673(2016141805);
			func_1672(1010885152);
			func_1673(-502324015);
			break;
		case -502324015:
			func_1673(1497516462);
			func_1673(2016141805);
			func_1673(1010885152);
			func_1672(-502324015);
			break;
		case -1056767524:
		case -538889627:
		case -538880323:
			func_1673(-538889627);
			func_1673(-538880323);
			func_1673(-1056767524);
			func_1672(iParam0);
			break;
		case -2038424081:
		case -1187950766:
		case -939420910:
		case 356365161:
		case 459290420:
		case 753127042:
		case 1884271742:
			func_1674();
			func_1672(iParam0);
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
			func_1675();
			func_1672(iParam0);
			break;
		case 2019386373:
			func_1673(-664252410);
			func_1673(2109952320);
			func_1672(2019386373);
			break;
		case -664252410:
			func_1673(2019386373);
			func_1673(2109952320);
			func_1672(-664252410);
			break;
		case 2109952320:
			func_1673(2019386373);
			func_1673(-664252410);
			func_1672(2109952320);
			break;
		case -1674179981:
			func_1673(-1835851517);
			func_1673(-1838352012);
			func_1672(-1674179981);
			break;
		case -1835851517:
			func_1673(-1674179981);
			func_1673(-1838352012);
			func_1672(-1835851517);
			break;
		case -1838352012:
			func_1673(-1674179981);
			func_1673(-1835851517);
			func_1672(-1838352012);
			break;
		case -1717960576:
			func_1673(210001842);
			func_1672(-1717960576);
			break;
		case 210001842:
			func_1673(-1717960576);
			func_1672(210001842);
			break;
		case -150493654:
			func_1673(-1271608261);
			func_1673(1846061697);
			func_1673(-1145519186);
			func_1672(-150493654);
			break;
		case -1271608261:
			func_1673(-150493654);
			func_1673(1846061697);
			func_1673(-1145519186);
			func_1672(-1271608261);
			break;
		case 1846061697:
			func_1673(-150493654);
			func_1673(-1271608261);
			func_1673(-1145519186);
			func_1672(1846061697);
			break;
		case -1145519186:
			func_1673(-150493654);
			func_1673(-1271608261);
			func_1673(1846061697);
			func_1672(-1145519186);
			break;
		case 1766284049:
			func_1673(280705402);
			func_1673(1926308480);
			func_1672(1766284049);
			break;
		case 280705402:
			func_1673(1766284049);
			func_1673(1926308480);
			func_1672(280705402);
			break;
		case 1926308480:
			func_1673(1766284049);
			func_1673(280705402);
			func_1672(1926308480);
			break;
		case 1609506757:
			if (bParam1)
			{
				func_1673(439465264);
				func_1672(1609506757);
			}
			else
			{
				func_1673(1609506757);
				func_1673(439465264);
			}
			break;
		case 439465264:
			if (func_485(1609506757))
			{
				if (bParam1)
				{
					func_1672(439465264);
				}
				else
				{
					func_1673(439465264);
				}
			}
			break;
		case 1822001510:
			func_1673(-1612662716);
			func_1672(1822001510);
			break;
		case -1612662716:
			func_1673(1822001510);
			func_1672(-1612662716);
			break;
		case 1306158345:
			func_1673(1952610440);
			func_1673(-223469678);
			func_1673(-404698347);
			func_1673(1517904467);
			func_1672(1306158345);
			break;
		case 1952610440:
			func_1673(1306158345);
			func_1673(-223469678);
			func_1673(-404698347);
			func_1673(1517904467);
			func_1672(1952610440);
			break;
		case -223469678:
			func_1673(1306158345);
			func_1673(1952610440);
			func_1673(-404698347);
			func_1673(1517904467);
			func_1672(-223469678);
			break;
		case -404698347:
			func_1673(1306158345);
			func_1673(1952610440);
			func_1673(-223469678);
			func_1673(1517904467);
			func_1672(-404698347);
			break;
		case 1517904467:
			func_1673(1306158345);
			func_1673(1952610440);
			func_1673(-223469678);
			func_1673(-404698347);
			func_1672(1517904467);
			break;
		case 1376646519:
			func_1673(931649776);
			func_1673(-434590080);
			func_1673(1743048395);
			func_1673(449774763);
			func_1672(1376646519);
			break;
		case 931649776:
			func_1673(1376646519);
			func_1673(-434590080);
			func_1673(1743048395);
			func_1673(449774763);
			func_1672(931649776);
			break;
		case -434590080:
			func_1673(1376646519);
			func_1673(931649776);
			func_1673(1743048395);
			func_1673(449774763);
			func_1672(-434590080);
			break;
		case 1743048395:
			func_1673(1376646519);
			func_1673(931649776);
			func_1673(-434590080);
			func_1673(449774763);
			func_1672(1743048395);
			break;
		case 449774763:
			func_1673(1376646519);
			func_1673(931649776);
			func_1673(-434590080);
			func_1673(1743048395);
			func_1672(449774763);
			break;
		case -1414537028:
			func_1673(38162571);
			func_1673(1350391819);
			func_1673(54073871);
			func_1672(-1414537028);
			break;
		case 38162571:
			func_1673(-1414537028);
			func_1673(1350391819);
			func_1673(54073871);
			func_1672(38162571);
			break;
		case 1350391819:
			func_1673(-1414537028);
			func_1673(38162571);
			func_1673(54073871);
			func_1672(1350391819);
			break;
		case 54073871:
			func_1673(-1414537028);
			func_1673(38162571);
			func_1673(1350391819);
			func_1672(54073871);
			break;
		case 198200492:
			func_1672(198200492);
			func_1673(-1124061431);
			func_1673(52706132);
			func_1673(-259123672);
			break;
		case -1124061431:
			func_1673(198200492);
			func_1672(-1124061431);
			func_1673(52706132);
			func_1673(-259123672);
			break;
		case 52706132:
			func_1673(198200492);
			func_1673(-1124061431);
			func_1672(52706132);
			func_1673(-259123672);
			break;
		case -259123672:
			func_1673(198200492);
			func_1673(-1124061431);
			func_1673(52706132);
			func_1672(-259123672);
			break;
		case -919512195:
			func_1672(-919512195);
			func_1673(-1925798111);
			func_1673(420709909);
			func_1673(1703426636);
			break;
		case -1925798111:
			func_1672(-1925798111);
			func_1673(-919512195);
			func_1673(420709909);
			func_1673(1703426636);
			break;
		case 420709909:
			func_1672(420709909);
			func_1673(-919512195);
			func_1673(-1925798111);
			func_1673(1703426636);
			break;
		case 1703426636:
			func_1672(1703426636);
			func_1673(-919512195);
			func_1673(-1925798111);
			func_1673(420709909);
			break;
		case -1223121209:
			func_1672(-1223121209);
			func_1673(630808005);
			break;
		case 630808005:
			func_1672(630808005);
			func_1673(-1223121209);
			break;
		case 1453909576:
			func_1672(1453909576);
			func_1673(1643531967);
			break;
		case 1643531967:
			func_1672(1643531967);
			func_1673(1453909576);
			break;
		case 0:
			func_1672(0);
			func_1673(473295046);
			func_1673(-1738165526);
			break;
		case 473295046:
			func_1672(473295046);
			func_1673(0);
			func_1673(-1738165526);
			break;
		case -1738165526:
			func_1672(-1738165526);
			func_1673(0);
			func_1673(473295046);
			break;
		case 932909855:
			func_1672(932909855);
			func_1673(2051822093);
			break;
		case 2051822093:
			func_1672(2051822093);
			func_1673(932909855);
			break;
		case 405586984:
			func_1672(405586984);
			func_1673(1509509592);
			func_1673(-959357075);
			func_1673(-1311865656);
			break;
		case 1509509592:
			func_1672(1509509592);
			func_1673(405586984);
			func_1673(-959357075);
			func_1673(-1311865656);
			break;
		case -959357075:
			func_1672(-959357075);
			func_1673(1509509592);
			func_1673(405586984);
			func_1673(-1311865656);
			break;
		case -1311865656:
			func_1672(-1311865656);
			func_1673(1509509592);
			func_1673(-959357075);
			func_1673(405586984);
			break;
		case -524145696:
			if (bParam1)
			{
				func_1672(-524145696);
			}
			else
			{
				func_1673(-524145696);
			}
			func_1673(1626481264);
			func_1673(282809459);
			break;
		case 282809459:
			func_1672(282809459);
			func_1673(1626481264);
			func_1673(-524145696);
			break;
		case 1626481264:
			func_1672(1626481264);
			func_1673(-524145696);
			func_1673(282809459);
			break;
		case 885203519:
			if (bParam1)
			{
				func_1672(885203519);
			}
			else
			{
				func_1673(885203519);
			}
			break;
		case -1080627546:
			if (bParam1)
			{
				func_1672(-1080627546);
			}
			else
			{
				func_1673(-1080627546);
			}
			break;
		default:
			if (bParam1)
			{
				if (!func_485(iParam0))
				{
					func_1672(iParam0);
				}
			}
			else if (func_485(iParam0))
			{
				func_1673(iParam0);
			}
			break;
	}
}

void func_1123(int iParam0)
{
	if (!func_1676(iParam0))
	{
		func_1678(func_1677(iParam0));
	}
}

int func_1124()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (func_1676(_0x126cbebba46693cf(iVar1, -1531394072, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1125(int iParam0, int iParam1, int iParam2)
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
	iVar1 = func_1126(iVar9);
	iVar2 = func_1126(iVar10);
	iVar3 = func_1126(iVar11);
	iVar5 = func_1127(iVar9);
	iVar6 = func_1127(iVar10);
	iVar7 = func_1127(iVar11);
	if (iParam2 != 2)
	{
		iVar4 = func_1126(iVar12);
		iVar8 = func_1127(iVar12);
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

int func_1126(int iParam0)
{
	if (func_340(iParam0, 1, 0))
	{
		iVar0 = func_580(iParam0, 0, 0);
	}
	return iVar0;
}

int func_1127(int iParam0)
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

int func_1128(int iParam0)
{
	return _0xf83d3dda4d3c8169(iParam0);
}

void func_1129(int iParam0, int iParam1)
{
	_0x3ea62e56f386c997(iParam0, iParam1);
}

int func_1130(int iParam0, int iParam1)
{
	if (!func_1235(17, &Var0))
	{
		return 0;
	}
	Var0.f_2 = iParam1;
	Var0.f_3 = iParam0;
	_datafile_get_hash(&uVar5, &Var0);
	return uVar5;
}

void func_1131(int iParam0, int iParam1, char* sParam2, int iParam3, bool bParam4)
{
	if ((((iParam0 == func_1130(iParam1, 5) || iParam0 == func_1130(iParam1, 6)) || iParam0 == func_1130(iParam1, 7)) || iParam0 == func_1130(iParam1, 8)) || iParam0 == func_1130(iParam1, 9))
	{
		func_1121(iParam1, iParam0, &sParam2, 0, iParam3, bParam4);
		func_592(51, 0, 0, iParam1, sParam2, 0, -1, 0);
		func_594(51, 0, 0, 0, 0, -1, 0);
	}
}

void func_1132(int iParam0, int iParam1, bool bParam2)
{
	iVar0 = 1;
	if ((((iParam0 == func_1130(iParam1, 5) || iParam0 == func_1130(iParam1, 6)) || iParam0 == func_1130(iParam1, 7)) || iParam0 == func_1130(iParam1, 8)) || iParam0 == func_1130(iParam1, 9))
	{
		if (func_1121(iParam1, iParam0, &iVar0, 0, 0, 0))
		{
			func_592(51, iParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				func_594(51, 0, 0, iVar0, func_1079(iParam1, 20), 1, 0);
			}
		}
		else
		{
			func_592(51, iParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				func_594(51, 0, 0, iVar0, func_1079(iParam1, 20), 1, 0);
			}
		}
	}
}

bool func_1133()
{
	if (func_184((*Global_1347702)[37]->f_15) && Global_1392388->f_7)
	{
		return true;
	}
	return false;
}

void func_1134(int iParam0)
{
	_0x3ea62e56f386c997(iParam0, 1);
}

void func_1135(int iParam0)
{
	if (!func_1679(iParam0))
	{
		_0x3ea62e56f386c997(iParam0, 1);
	}
}

void func_1136(int iParam0)
{
	_0x398fab9c96a81924(iParam0, 1);
}

void func_1137(int iParam0, int iParam1, var uParam2)
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

bool func_1138(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	func_1680();
	if (iParam2 == 39)
	{
		Var0 = { func_687(iParam0, 1, 0) };
		iParam2 = func_675(func_688(Var0.f_4), 1);
	}
	if (iParam2 < 0 || iParam2 >= 39)
	{
		return false;
	}
	if (func_596(iParam0, 866047851) && func_1665(&(Global_1946804->f_1378)) >= 2)
	{
		return false;
	}
	if ((func_1140(32768) && iParam2 == 10) && iParam0 != &Global_1946804->f_57[iParam2])
	{
		func_1681(func_1208(iParam2, 1));
	}
	iVar5 = 0;
	if (bParam4)
	{
		iVar5 = 3;
	}
	func_1682(iParam2);
	func_1683(iParam2, iVar5);
	if (&Global_1946804->f_1378.f_1[iParam2] != &Global_1946804->f_57[iParam2] && Global_1946804->f_57[iParam2]->f_1 > 1)
	{
		func_1189(Global_1946804->f_1378.f_1[iParam2], 4, 6);
		func_1189(Global_1946804->f_1497.f_1[iParam2], 4, 6);
	}
	func_1195(&(Global_1946804->f_1378), iParam0, iParam2, bParam4, 1);
	if (iParam1 == 0)
	{
		iParam1 = Global_1946804->f_1378.f_1[iParam2]->f_1;
	}
	Global_1946804->f_1378.f_1[iParam2] = iParam0;
	Global_1946804->f_1378.f_1[iParam2]->f_1 = func_1684(iParam0, iParam2, iParam1, func_20() != -1);
	if (bParam4)
	{
		func_1685(&(Global_1946804->f_1378), 1, 3);
	}
	else
	{
		func_1685(&(Global_1946804->f_1378), 1, 0);
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
				func_1401(func_1208(&(Global_1946804->f_2589.f_2[iVar6]), 1), 1, 6);
			}
			iVar6++;
		}
	}
	return true;
}

void func_1139(bool bParam0, bool bParam1, bool bParam2)
{
	func_1686(&(Global_1946804->f_2589), bParam0, bParam1, bParam2);
}

bool func_1140(int iParam0)
{
	return (Global_1946804 && iParam0) != 0;
}

void func_1141()
{
	func_1687(&(Global_1946804->f_2776));
	func_1688(32768);
	func_1401(1108822547, 8, 6);
}

int func_1142(int iParam0)
{
	iVar0 = 0;
	iVar1 = func_675(iParam0, 1);
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

void func_1143(int iParam0)
{
	if (func_1689(iParam0, 4096))
	{
		Global_1946804->f_858++;
	}
	if (Global_1946804->f_858 <= 0)
	{
		return;
	}
	Var0.f_1 = iParam0;
	Var0 = 34;
	func_1690(Var0);
}

void func_1144(int iParam0, int iParam1, int iParam2)
{
	Var0.f_1 = iParam2;
	Var0 = iParam0;
	Var0.f_2 = iParam1;
	func_1690(Var0);
}

bool func_1145(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	*iParam1 = _0x80d78bdc9d88ef07(func_178(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_1146(var uParam0, int iParam1, int iParam2, int iParam3)
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

int func_1147(int iParam0)
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

float func_1148()
{
	if (func_1691())
	{
		return 0f;
	}
	if (_0x200373a8df081f22(Global_35, 2) || Global_40.f_11095.f_46 == 0)
	{
		return func_1692(2);
	}
	if (Global_1347477->f_119)
	{
		return func_1692(2);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_46) * 60f);
	fVar0 = (fVar0 / to_float(7));
	fVar1 = func_1693();
	fVar2 = func_1694();
	fVar3 = func_1695();
	fVar4 = func_1696();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_50)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_1697()));
	fVar7 = (func_1692(2) - fVar6);
	iVar8 = round(((fVar0 / 60f) * to_float(7)));
	fVar9 = (100f * (to_float(90) / to_float(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_1698(3, round((to_float(iVar8) * fVar10)), 0);
	func_1699(3, fVar9, fVar9 > 100f);
	return func_1700(fVar7, -100f, 100f);
}

float func_1149()
{
	if (func_1691())
	{
		return 0f;
	}
	if (_0x200373a8df081f22(Global_35, 1) || Global_40.f_11095.f_47 == 0)
	{
		return func_1692(1);
	}
	if (Global_1347477->f_119)
	{
		return func_1692(1);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_47) * 60f);
	fVar0 = (fVar0 / to_float(7));
	fVar1 = func_1693();
	fVar2 = func_1694();
	fVar3 = func_1695();
	fVar4 = func_1696();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_51)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_1697()));
	fVar7 = (func_1692(1) - fVar6);
	iVar8 = round(((fVar0 / 60f) * to_float(7)));
	fVar9 = (100f * (to_float(90) / to_float(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_1698(2, round((to_float(iVar8) * fVar10)), 0);
	func_1699(2, fVar9, fVar9 > 100f);
	return func_1700(fVar7, -100f, 100f);
}

float func_1150()
{
	if (func_1691())
	{
		return 0f;
	}
	if (_0x200373a8df081f22(Global_35, 0) || Global_40.f_11095.f_48 == 0)
	{
		return func_1692(0);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_48) * 60f);
	if (func_1701())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_54 + 1f));
	}
	else if (func_1702())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_53 + 1f));
	}
	else if (Global_1347477->f_119)
	{
		return func_1692(0);
	}
	if (Global_40.f_11095.f_43)
	{
		fVar0 = (10f * 60f);
	}
	fVar0 = (fVar0 / to_float(7));
	fVar1 = func_1693();
	fVar2 = func_1694();
	fVar3 = func_1695();
	fVar4 = func_1696();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_49)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_1697()));
	fVar7 = (func_1692(0) - fVar6);
	iVar8 = round(((fVar0 / 60f) * to_float(7)));
	fVar9 = (100f * (to_float(90) / to_float(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_1698(1, round((to_float(iVar8) * fVar10)), 0);
	func_1699(1, fVar9, fVar9 > 100f);
	if (fVar7 <= -100f && _get_player_health(player_id()) < 1f)
	{
		return func_1692(0);
	}
	return func_1700(fVar7, -100f, 100f);
}

bool func_1151(int iParam0, int iParam1)
{
	return (Global_1905944->f_22[iParam0]->f_2 && iParam1) != 0;
}

bool func_1152(int iParam0)
{
	return _0xf83d3dda4d3c8169(iParam0) > 0;
}

bool func_1153(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5)
{
	if (!func_576(iParam0, 0))
	{
	}
	if (!_0xb881ca836cc4b6d4(uParam2))
	{
		return false;
	}
	if (func_1072(iParam0, uParam2, iParam3, bParam5, 0))
	{
		return false;
	}
	if (!func_604(0))
	{
		return false;
	}
	if (!_0xcb5d11f9508a928d(func_178(0), uParam1, uParam2, iParam0, uParam2->f_4, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

int func_1154(int iParam0, bool bParam1)
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
				return func_1703();
			}
			break;
	}
	return 0;
}

int func_1155(int iParam0)
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

bool func_1156(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 95)
	{
		return false;
	}
	return true;
}

void func_1157(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_1156(iParam0))
	{
		return;
	}
	if (func_1704(iParam0))
	{
		return;
	}
	if (!func_1705(iParam0))
	{
		func_1706(iParam0, 1, 0);
	}
	iVar0 = func_1707(iParam0);
	if (iVar0 != 0 && !(iParam0 >= 0 && iParam0 <= 5))
	{
		if (func_1708(iParam0, 512))
		{
			func_686(30, iVar0, 0, 0, 0);
		}
	}
	if ((!func_207() && !bParam1) && !func_190(0, 0, 1))
	{
		func_715(_create_var_string(10, "OUT_JOURN_DONE", _create_var_string(0, iVar0)), 10000, 0, 0, 0, 1);
	}
	func_1709(iParam0, 6);
	if (bParam2)
	{
		if (!func_190(0, 0, 1))
		{
			func_360(1, 4);
		}
	}
}

bool func_1158(int iParam0, bool bParam1)
{
	return func_1154(iParam0, 0) < func_1710(iParam0, bParam1);
}

bool func_1159(int iParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_600(iVar1) == iParam0)
		{
			*iParam1 = iVar1;
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_1160(int iParam0)
{
	if (iParam0 == -358215195)
	{
		return false;
	}
	return &Global_1946804->f_1497.f_1[func_675(iParam0, 1)] != &Global_1946804->f_57[func_675(iParam0, 1)];
}

void func_1161(int iParam0, int iParam1)
{
	if (func_596(iParam1, 130796156))
	{
		func_1711(iParam1, 0);
	}
	else if (func_596(iParam1, 930141731))
	{
		func_1711(iParam1, 1);
		func_1712(iParam0);
	}
}

void func_1162(var uParam0, int iParam1)
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

int func_1163(int iParam0, var uParam1, var uParam2, int iParam3)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!_cashinventory_is_session_ready())
	{
		return 0;
	}
	func_1713(uParam1);
	if (!_0x77b299e8799b1332(&uVar0, &(uParam1->f_1), uParam2))
	{
		return 0;
	}
	Var1.f_2.f_1 = 10;
	Var1 = iParam3;
	Var1.f_2 = { *uParam1 };
	func_1714(uParam2, iParam0, Var1);
	return 1;
}

int func_1164(int iParam0)
{
	return &(Global_1900073->f_159[iParam0]);
}

char* func_1165(int iParam0)
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

int func_1166(int iParam0)
{
	if (!func_1715(iParam0, &uVar0, 805880880, 0, 0, -401018458))
	{
		return -1102349958;
	}
	return uVar0;
}

bool func_1167()
{
	return !&Global_1911774;
}

void func_1168(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

char* func_1169(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

bool func_1170(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

char* func_1171(char* sParam0, int iParam1)
{
	return _create_var_string(42, "COLOR_STRING", _create_color_string(iParam1), sParam0);
}

bool func_1172(int iParam0, int iParam1, bool bParam2)
{
	if ((bParam2 && func_20() == 0) && !_unlock_is_visible(iParam0))
	{
		return false;
	}
	if (!func_1716(iParam0, iParam1, &uVar0, &iVar11) || iVar11 < 1)
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

bool func_1173(int iParam0, int iParam1)
{
	if (func_20() != -1)
	{
		return false;
	}
	if (func_1716(iParam0, iParam1, &uVar2, &iVar1))
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

void func_1174(bool bParam0)
{
	if (bParam0)
	{
		func_311(2032023096, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_311(-615217896, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		func_311(655868243, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		func_1175();
		_unlock_set_unlocked(645322743, true);
	}
	else
	{
		func_1717(2032023096);
		func_314(-615217896);
		func_671(655868243, 1, 1, -142743235, 1);
		func_1719(146323340, func_1718());
		Var0 = { func_1449() };
		if (func_1720(&Var0) == -1387633835)
		{
			func_1721(&Var0);
			func_1722(Var0);
		}
		iVar7 = -868094182;
		iVar8 = 1074477367;
		iVar9 = 1;
		func_1723(&iVar7, &iVar8, &iVar9);
		iVar6 = 0;
		while (iVar6 < 7)
		{
			if (func_1442(iVar6) == 2010625508)
			{
				func_1724(iVar6, iVar7);
				func_1725(iVar6, iVar8);
				func_1726(iVar6, iVar9);
				func_1727(iVar6, 0);
				if (func_1728(iVar6))
				{
					func_1729(iVar6);
				}
				iVar10 = func_1730(iVar8);
				func_1731(iVar6, iVar10);
			}
			iVar6++;
		}
		_unlock_set_unlocked(645322743, false);
	}
}

int func_1175()
{
	if (!func_1732(-1898635967, func_1718(), 1))
	{
		return 0;
	}
	if (func_331())
	{
		if (!func_1732(146323340, func_1718(), 0))
		{
			return 0;
		}
	}
	return 1;
}

void func_1176()
{
	func_325(34411519);
	func_325(834124286);
	func_325(-570967010);
}

void func_1177(bool bParam0)
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
		func_671(-1080874779, 3, 1, -142743235, 1);
		func_671(-223790555, 3, 1, -142743235, 1);
		func_671(1566032147, 3, 1, -142743235, 1);
		func_671(891311852, 5, 1, -142743235, 1);
		func_671(-1353737667, 5, 1, -142743235, 1);
		func_671(-330313895, 5, 1, -142743235, 1);
		func_671(-2051332199, 5, 1, -142743235, 1);
		func_671(1237770824, 5, 1, -142743235, 1);
		func_671(-1795542128, 3, 1, -142743235, 1);
		func_671(-1757588258, 3, 1, -142743235, 1);
		func_671(-1921080134, 10, 1, -142743235, 1);
		iVar1 = -868094182;
		iVar2 = 1074477367;
		iVar3 = 1;
		func_1723(&iVar1, &iVar2, &iVar3);
		iVar0 = 0;
		while (iVar0 < 7)
		{
			if (func_1442(iVar0) == 153881023)
			{
				func_1724(iVar0, iVar1);
				func_1725(iVar0, iVar2);
				func_1726(iVar0, iVar3);
				func_1727(iVar0, 0);
				if (func_1728(iVar0))
				{
					func_1729(iVar0);
				}
				iVar4 = func_1730(iVar2);
				func_1731(iVar0, iVar4);
			}
			iVar0++;
		}
		func_1175();
		_unlock_set_unlocked(-1426541042, false);
	}
}

void func_1178(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4)
{
	func_1733(iParam0);
	if (bParam3)
	{
		func_714(iParam0, sParam1, iParam2);
	}
}

bool func_1179(int iParam0)
{
	return (Global_40.f_12004.f_10 && iParam0) != 0;
}

void func_1180(int iParam0)
{
	Global_40.f_12004.f_10 = (Global_40.f_12004.f_10 - (Global_40.f_12004.f_10 && iParam0));
}

struct<14> func_1181()
{
	Var3.f_9 = -1591664384;
	Var17.f_9 = -1591664384;
	if (func_1145("ALL WEAPONS", &iVar0, &iVar1, -1591664384, 0))
	{
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (!func_1146(&Var3, iVar2, iVar0, iVar1))
			{
				Jump @136; //curOff = 80
			}
			else if (Var3.f_4 != 127400949)
			{
			}
			else if (func_1096(Var3.f_4, &Var17, Var3.f_9))
			{
			}
			else
			{
				func_1147(iVar0);
				return Var3;
			}
			iVar2++;
		}
		func_1147(iVar0);
	}
	Var39.f_9 = -1591664384;
	return Var39;
}

void func_1182(int iParam0, struct<4> Param1, int iParam5)
{
	Var0 = { Param1 };
	Var0.f_4 = iParam5;
	Var5.f_9 = -1591664384;
	if (func_1734(Param1, iParam5, &Var5, 0))
	{
		func_1098(Var5.f_4, &Var5, &Var0, -1, -142743235, 1, 0);
	}
	func_1153(iParam0, &Var19, &Var0, 1, 752097756, 0);
	func_1735(Var19, 1);
}

bool func_1183(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (!is_weapon_valid(iParam0))
	{
		return false;
	}
	Var0 = { func_1623(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam2)
	{
		func_1624(&Var0, func_1203(0));
	}
	if (!func_1625(&Var0, &iVar14, &iVar15, 0))
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
			if (!func_1146(&Var16, iVar35, iVar14, iVar15))
			{
			}
			else
			{
				Var30.f_4 = Var16.f_9;
				Var30 = { Var16.f_5 };
				if (func_1098(iParam0, &Var16, &Var30, 1, iParam3, 0, 0))
				{
					iVar36++;
				}
			}
			iVar35++;
		}
	}
	func_1147(iVar14);
	if (iVar36 < iParam1)
	{
	}
	return true;
}

bool func_1184(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (!func_576(iParam0, 0))
	{
		return false;
	}
	if (iParam1 < 1)
	{
		return false;
	}
	Var0 = { func_687(iParam0, bParam4, 1) };
	if (Var0.f_4 == 1084182731)
	{
		return func_1736(iParam0, iParam1, iParam2, bParam3, bParam4);
	}
	Var5 = { func_1097(iParam0, Var0, Var0.f_4, bParam4) };
	return func_1098(iParam0, &Var5, &Var0, iParam1, iParam2, bParam3, bParam4);
}

void func_1185(int iParam0, int iParam1)
{
	if (!Global_1901328->f_94)
	{
		if (func_596(iParam0, 606799272))
		{
			func_1737(iParam0, iParam1);
		}
		if (func_596(iParam0, -1112814642) && func_596(iParam0, -1697809989))
		{
			func_624(iParam0, iParam1, 1, 0);
		}
	}
}

int func_1186(int iParam0, var uParam1)
{
	iVar1 = iParam0;
	if (!func_1738(iVar1, &iVar0))
	{
		return 0;
	}
	if (Global_1946804->f_2657.f_19 == 1)
	{
		Global_1946804->f_2657.f_19 = 0;
		*uParam1 = 0;
		if (func_600(iParam0) != -999503751)
		{
			func_1739(&(Global_1946804->f_2657.f_26), 0, Global_1946804->f_2657.f_19);
		}
		Global_1946804->f_2657[0] = 0;
		return 1;
	}
	Global_1946804->f_2657.f_19 = (Global_1946804->f_2657.f_19 - 1);
	*uParam1 = (*uParam1 - 1);
	Global_1946804->f_2657[iVar0] = &Global_1946804->f_2657[Global_1946804->f_2657.f_19];
	Global_1946804->f_2657[Global_1946804->f_2657.f_19] = 0;
	if (func_600(iParam0) != -999503751)
	{
		func_1739(&(Global_1946804->f_2657.f_26), iVar0, Global_1946804->f_2657.f_19);
	}
	func_1740(iParam0, 1);
	return 1;
}

void func_1187()
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

void func_1188(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		func_1741(0);
	}
	if (bParam0)
	{
		func_1200(8);
		func_1200(512);
	}
	else
	{
		func_1200(8);
		func_1200(16);
	}
}

void func_1189(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

int func_1190(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = func_677();
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

int func_1191(int iParam0)
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

void func_1192(var uParam0, int iParam1, bool bParam2)
{
	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (func_1742(uParam0->f_1[iVar0], 2))
		{
			iVar7 = func_1208(iVar0, 1);
			if (func_1398(iVar0, iParam1))
			{
				vVar4 = { func_679(iVar0, -1) };
				if ((vVar4.x != &Global_1946804->f_57[iVar0] && vVar4.x != 0) && (&uParam0->f_1[iVar0] != vVar4.x || uParam0->f_1[iVar0]->f_1 != vVar4.y))
				{
					*uParam0->f_1[iVar0] = { vVar4 };
				}
				if (func_1397(iVar7, 4))
				{
					func_1401(iVar7, 4, 6);
				}
			}
			else
			{
				func_1400(iVar7, 4, 6);
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

bool func_1193(int iParam0)
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
	func_1743(&(Global_1946804->f_964), iVar0, -367421157, 1409451727, 1, iParam0);
	_0x91ded5dd64bb2691(&(Global_1946804->f_964));
	if (!_0x44b3a36933ac009c(&uVar1, &(Global_1946804->f_964), 1409451727))
	{
		return false;
	}
	return true;
}

bool func_1194(int iParam0, int iParam1, int iParam2)
{
	*iParam2 = 1155669136;
	return true;
}

void func_1195(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	iVar1 = 12;
	iVar2 = func_600(&(uParam0->f_1[iParam2]));
	iVar3 = 0;
	if (bParam3)
	{
		iVar3 = 3;
	}
	if (func_1398(iParam2, 65536) && &uParam0->f_1[iVar1] == -452402570)
	{
		uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
		uParam0->f_1[iVar1]->f_1 = 0;
		if (bParam4)
		{
			func_1683(iVar1, iVar3);
		}
	}
	if (func_1160(-1586649372) && func_1398(iParam2, 524288))
	{
		iVar1 = 33;
		uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
		uParam0->f_1[iVar1]->f_1 = 0;
		if (bParam4)
		{
			func_1683(iVar1, iVar3);
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
						func_1683(iVar1, iVar3);
					}
				}
			}
			func_1744(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
			break;
		case 688587926:
			func_1744(uParam0, 0, (1 && bParam4), (1 && bParam4), bParam3);
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
						func_1683(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 525
				func_1744(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				iVar1 = 16;
				if (uParam0->f_1[iVar1]->f_1 == 1155669136)
				{
					uParam0->f_1[iVar1]->f_1 = -1539589426;
					if (bParam4)
					{
						func_1683(iVar1, iVar3);
					}
				}
				if (uParam0->f_1[iVar1]->f_1 == 1530758430)
				{
					uParam0->f_1[iVar1]->f_1 = 1334603721;
					if (bParam4)
					{
						func_1683(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 656
				func_1744(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				Jump @1415; //curOff = 691
				func_1744(uParam0, (1 && bParam4), (1 && bParam4), 0, bParam3);
				iVar1 = 22;
				if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1])
				{
					uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
					uParam0->f_1[iVar1]->f_1 = 0;
					if (bParam4)
					{
						func_1683(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 786
				func_1744(uParam0, (1 && bParam4), 0, 1, bParam3);
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
							func_1683(iVar1, iVar3);
						}
					}
					iVar1 = 38;
					if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1])
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_1683(iVar1, iVar3);
						}
					}
					iVar1 = 35;
					if (-923693316 == func_600(&(uParam0->f_1[iVar1])))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_1683(iVar1, iVar3);
						}
					}
				}
				else
				{
					iVar1 = 35;
					if ((func_1668(iParam1) && &uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1]) && -923693316 == func_600(&(uParam0->f_1[iVar1])))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_1683(iVar1, iVar3);
						}
					}
				}
				Jump @1415; //curOff = 1130
				iVar1 = 36;
				if (&uParam0->f_1[iParam2] != &Global_1946804->f_57[iParam2] && func_596(&(Global_1946804->f_1497.f_1[iVar1]), -1638171711))
				{
					uParam0->f_1[iParam2] = &Global_1946804->f_57[iParam2];
					uParam0->f_1[iParam2]->f_1 = 0;
					if (bParam4)
					{
						func_1683(iVar1, iVar3);
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
						func_1683(iVar1, iVar3);
					}
				}
				if (&uParam0->f_1[iParam2] != &Global_1946804->f_57[iParam2] && (func_1668(&(Global_1946804->f_1497.f_1[iVar1])) || func_596(&(Global_1946804->f_1497.f_1[iVar1]), -1638171711)))
				{
					uParam0->f_1[iParam2] = &Global_1946804->f_57[iParam2];
					uParam0->f_1[iParam2]->f_1 = 0;
					if (bParam4)
					{
						func_1683(iVar1, iVar3);
					}
				}
			}
			switch (func_600(iParam1))
			{
				case 81053684:
					iVar1 = 10;
					if (-525676072 == func_600(&(uParam0->f_1[iVar1])))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_1683(iVar1, iVar3);
						}
					}
					break;
				case -525676072:
					iVar1 = 12;
					if (81053684 == func_600(&(uParam0->f_1[iVar1])) || func_596(&(uParam0->f_1[iVar1]), 866047851))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_1683(iVar1, iVar3);
						}
					}
					break;
			}
			default:
				break;
	}
}

bool func_1196(int iParam0, int iParam1)
{
	if (func_20() != -1)
	{
		return is_bit_set(&(Global_36638.f_1444[iParam0]), iParam1);
	}
	return is_bit_set(&(Global_40.f_7832[iParam0]), iParam1);
}

bool func_1197(int iParam0)
{
	if (func_20() != -1)
	{
		if (func_1151(iParam0, 4))
		{
			return false;
		}
	}
	else if (func_1151(iParam0, 2))
	{
		return false;
	}
	return true;
}

bool func_1198(int iParam0)
{
	iVar1 = get_cloud_time_as_int();
	if (!func_1151(iParam0, 65536) && !func_1151(iParam0, 32768))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_7756)
	{
		if (Global_40.f_7756[iVar0]->f_2 == iParam0)
		{
			iVar3 = 3;
			if (func_1151(iParam0, 131072))
			{
				iVar3 = 2;
			}
			iVar2 = (&Global_40.f_7756[iVar0] - iVar1);
			if (Global_40.f_7756[iVar0]->f_1 >= iVar3)
			{
				return true;
			}
			if (iVar2 < 1800 && func_1151(iParam0, 32768))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_1199()
{
	return Global_1905944->f_5694;
}

void func_1200(int iParam0)
{
	Global_1946804 = (Global_1946804 || iParam0);
}

void func_1201(struct<4> Param0)
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
			if (func_1745(Param0))
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
			func_1746(Param0);
			*Global_1946804->f_668[Global_1946804->f_856] = { Param0 };
			Global_1946804->f_850++;
			Global_1946804->f_856 = (Global_1946804->f_856 + 1 % 25);
			func_1200(8);
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
			if (func_1745(Param0))
			{
				return;
			}
			func_1746(Param0);
			*Global_1946804->f_567[Global_1946804->f_851] = { Param0 };
			Global_1946804->f_851++;
			func_1200(8);
			break;
		case 30:
		case 31:
		case 32:
		case 33:
		case 35:
		case 36:
			func_1144(Param0, Param0.f_1, Param0.f_2);
			break;
	}
}

struct<4> func_1202(bool bParam0)
{
	return func_1097(1328661203, func_1747(), -1591664384, bParam0);
}

struct<4> func_1203(bool bParam0)
{
	iVar0 = func_178(bParam0);
	if (iVar0 == 2)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224215))
		{
			*Global_1224215 = { func_1097(923904168, func_1202(bParam0), -740156546, bParam0) };
		}
		return *Global_1224215;
	}
	else if (iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224223))
		{
			*Global_1224223 = { func_1097(923904168, func_1202(bParam0), -740156546, 0) };
		}
		return *Global_1224223;
	}
	return func_1097(923904168, func_1202(bParam0), -740156546, 0);
}

bool func_1204(int iParam0, bool bParam1)
{
	if (func_600(iParam0) == 1779021115)
	{
		return false;
	}
	if (_is_weapon_one_handed(iParam0))
	{
		if (bParam1)
		{
			return func_598(24);
		}
		else
		{
			return true;
		}
	}
	return false;
}

struct<4> func_1205(bool bParam0)
{
	iVar0 = func_178(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224219))
		{
			*Global_1224219 = { func_1097(271701509, func_1202(bParam0), 12999093, 0) };
		}
		return *Global_1224219;
	}
	return func_1097(271701509, func_1202(bParam0), 12999093, 0);
}

bool func_1206(int iParam0, int iParam1)
{
	if (iParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_600(iParam0);
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

bool func_1207(var uParam0, var uParam1, bool bParam2, int iParam3, var uParam4, bool bParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(&uParam0))
	{
		return false;
	}
	if (!_0x9700e8efc4ab9089(func_178(bParam5), &uParam0, uParam4, !bParam6))
	{
		return false;
	}
	return true;
}

int func_1208(int iParam0, int iParam1)
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

int func_1209(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_1210(int iParam0, int iParam1)
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

void func_1211(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 62914560);
	*iParam0 = (*iParam0 || shift_left(iParam1, 22));
}

void func_1212(int iParam0, int iParam1)
{
	iVar0 = func_695(*iParam0);
	iVar1 = func_694(*iParam0);
	if (iParam1 < 1 || iParam1 > func_700(iVar0, iVar1))
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4063232);
	*iParam0 = (*iParam0 || shift_left(iParam1, 17));
}

void func_1213(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 126976);
	*iParam0 = (*iParam0 || shift_left(iParam1, 12));
}

void func_1214(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4032);
	*iParam0 = (*iParam0 || shift_left(iParam1, 6));
}

void func_1215(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 63);
	*iParam0 = (*iParam0 || shift_left(iParam1, 0));
}

void func_1216(char* sParam0, char* sParam1, int iParam2)
{
	_0x74bcceb233ad95b2(-466562563, get_hash_key(sParam0));
	_0x74bcceb233ad95b2(1885309238, get_hash_key(sParam1));
	_0x74bcceb233ad95b2(-826961056, iParam2);
}

int func_1217(int iParam0)
{
	return floor(pow(2f, to_float(iParam0)));
}

int func_1218(int iParam0)
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

bool func_1219(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	bVar0 = false;
	if (func_20() == -1)
	{
		if (func_1066(iParam0))
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

int func_1220(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (!func_576(iParam0, 0))
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

int func_1221(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	func_1620(&iParam0);
	if (!func_576(iParam0, 0))
	{
		return 0;
	}
	if (!func_604(0))
	{
		bParam2 = true;
	}
	iVar0 = func_1070(iParam0, uParam1, bParam2, bParam3);
	if (iVar0 < 0)
	{
		return 2147483647;
	}
	if (bParam2)
	{
		iVar1 = func_1622(iParam0, *uParam1, uParam1->f_4, bParam3);
	}
	else
	{
		iVar1 = _0xe787f05dfc977bde(func_178(bParam3), iParam0, 0);
	}
	if (iVar0 > iVar1)
	{
		return (iVar0 - iVar1);
	}
	return 0;
}

int func_1222(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (func_596(iParam0, -5284486))
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
		if (func_1748(iParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
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
		iVar64 = func_657(iParam0, 862142561);
		if (iVar64 != 0)
		{
			Var50.f_8 = iVar64;
			iVar61 = _item_database_create_item_collection(&Var50, &iVar60, 1);
			if (iVar61 != -1)
			{
				iVar62 = 0;
				while (iVar62 < iVar60)
				{
					iVar63 = func_660(iVar62, iVar61);
					if (func_576(iVar63, 0) && iVar63 != iParam0)
					{
						if (bParam4)
						{
							iVar49 = (iVar49 + func_1222(iVar63, -915411861, 1, 0, 0));
						}
						else
						{
							Var35 = iVar63;
							iVar33 = _0x640f890c3e5a3ffd(1, &Var35, &iVar34);
							if (iVar33 != -1)
							{
								if (iVar34 == 0)
								{
									iVar49 = (iVar49 + func_1222(iVar63, -915411861, 1, 0, 0));
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
	if (!func_1748(iParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
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

bool func_1223(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return iParam0 <= func_1749(1);
}

void func_1224(int iParam0, char* sParam1)
{
	if (iParam0 != 18 && iParam0 != 7)
	{
		_uilog_add_total_take_entry(get_hash_key(func_1750(iParam0)), 1997120069, _create_var_string(10, "MISSION_COMPLETE_TAKE_COMP", _create_var_string(2, func_317(iParam0, 0))), _create_var_string(2, "MISSION_COMPLETE_TAKE_AMOUNT", sParam1), 601389479);
	}
	else
	{
		_uilog_add_total_take_entry(get_hash_key(func_1750(iParam0)), 1997120069, _create_var_string(10, "MISSION_COMPLETE_TAKE_COMP_NOS", _create_var_string(2, func_317(iParam0, 0))), _create_var_string(2, "MISSION_COMPLETE_TAKE_AMOUNT", sParam1), 601389479);
	}
}

var func_1225()
{
	return Global_40.f_4283.f_325;
}

bool func_1226(int iParam0)
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

bool func_1227(int iParam0)
{
	return (iParam0 > 0 && iParam0 < 13);
}

void func_1228(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_3 = iParam1;
}

void func_1229(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_4 = iParam1;
}

void func_1230(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_12106[iParam0] = iParam1;
		return;
	}
	Global_1058888->f_498[iParam0] = iParam1;
}

void func_1231(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_12106[iParam0]->f_5 = iParam1;
		return;
	}
	Global_1058888->f_498[iParam0]->f_1 = iParam1;
}

int func_1232(bool bParam0, var uParam1)
{
	*bParam0 = 0;
	*uParam1 = 0;
	bVar0 = func_389();
	bVar1 = false;
	if (bVar0 && !func_469(4))
	{
		bVar1 = true;
	}
	if ((bVar0 && func_469(37)) && !func_469(43))
	{
		*bParam0 = 0;
		*uParam1 = 0;
		return 0;
	}
	bVar2 = false;
	if ((bVar0 && func_469(43)) && !func_469(44))
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
		if (func_1443(0) == 1)
		{
			*bParam0 = 1;
		}
		if (func_1443(1) == 1)
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

int func_1233()
{
	return Global_40.f_1095.f_3054;
}

bool func_1234(int iParam0)
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

bool func_1235(int iParam0, var uParam1)
{
	if (!func_1751(iParam0))
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

int func_1236()
{
	if (func_389())
	{
		if (!func_469(3))
		{
			return func_1752(43);
		}
		if (func_469(38) && !func_469(43))
		{
			return func_1753(8);
		}
	}
	return 0;
}

bool func_1237(int iParam0)
{
	if (!func_240(iParam0))
	{
		return false;
	}
	return (((*Global_1888801)[iParam0]->f_20 == 1 || (*Global_1888801)[iParam0]->f_20 == 2) && !func_1754(iParam0));
}

Vector3 func_1238(int iParam0, int iParam1)
{
	func_1235(15, &Var0);
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

int func_1239(int iParam0, int iParam1)
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
	iVar0 = func_1755(Global_1310720->f_21, 2);
	if (iVar0 == -1)
	{
		return 0;
	}
	func_1235(15, &Var1);
	Var1.f_2 = -1999103282;
	Var1.f_3 = iParam0;
	Var1.f_4 = iParam1;
	if (_datafile_get_data_node_index(&(Var1.f_1), &Var1))
	{
		Var1.f_2 = 383290544;
		_datafile_get_hash(&iVar6, &Var1);
		if (func_1756(iVar0) == iVar6)
		{
			return 1;
		}
	}
	return 0;
}

bool func_1240(int iParam0, bool bParam1, int iParam2)
{
	iVar0 = func_1757(iParam0);
	if (func_485(373691918) && Global_1310720->f_12)
	{
		return iVar0 == 4;
	}
	if (iParam2 != -1)
	{
		return iVar0 == iParam2;
	}
	return (bParam1 || iVar0 == -1);
}

bool func_1241(int iParam0)
{
	if (!func_1235(15, &Var0))
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

bool func_1242(vector3 vParam0, int iParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	if (bParam5)
	{
		if (func_1758(iParam3, iParam4))
		{
			return false;
		}
	}
	if (!bParam7 || func_1759(5))
	{
		if (func_1760(iParam3, iParam4))
		{
			return false;
		}
	}
	iVar0 = func_1436(vParam0);
	if (bParam6)
	{
		iVar1 = func_365(vParam0, 1);
		if (func_116(iVar1) || func_1761(iVar0, 1))
		{
			return false;
		}
	}
	if (!func_1762(iParam3, iParam4))
	{
		return false;
	}
	if (!func_1763())
	{
		if (func_1764(iParam3, iParam4))
		{
			return false;
		}
	}
	if (!_does_volume_exist(bParam8))
	{
		if (!func_1765(iVar0))
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
	if (!func_1766(iParam3, iParam4))
	{
		return false;
	}
	if (func_1767(0) == 3)
	{
		if (((vParam0.x > -1480f && vParam0.x < -1475f) && vParam0.y > -359f) && vParam0.y < -354f)
		{
			return false;
		}
	}
	if (!func_1768(65536, 2))
	{
		if (((vParam0.x > 1673f && vParam0.x < 1676f) && vParam0.y > -1888f) && vParam0.y < -1885f)
		{
			return false;
		}
	}
	if (func_389())
	{
		if (_does_volume_exist(bParam8))
		{
			if (!_0xf256a75210c5c0eb(bParam8, vParam0))
			{
				return false;
			}
		}
		if (func_1769(vParam0, bParam10) || func_1770(vParam0, bParam10))
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

int func_1243(vector3 vParam0)
{
	iVar0 = func_1771(vParam0, 0f, 0f, 0, 2);
	return func_1771(vParam0, (*Global_1894052)[iVar0]->f_1, (*Global_1894052)[iVar0]->f_2, Global_1894052[iVar0], 4);
}

void func_1244(int iParam0)
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

char* func_1245(int iParam0)
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
	return func_1409(iVar0);
}

char* func_1246(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return "";
	}
	iVar0 = get_entity_model(iParam0);
	return func_1772(iVar0);
}

char* func_1247(int iParam0)
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

void func_1248(char[4] cParam0, int iParam1)
{
	iVar0 = func_132(iParam1);
	if (!func_1517(iVar0))
	{
		return;
	}
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 <= 7)
	{
		(*cParam0->f_1[iVar0])[iVar1] = 57906;
		clear_bit(&(cParam0->f_1[iVar0]->f_17), iVar1);
		iVar1++;
	}
}

void func_1249(char[4] cParam0, int iParam1, int iParam2)
{
	iVar0 = func_132(iParam1);
	if (func_1517(iVar0))
	{
		cParam0->f_1[iVar0]->f_9 = iParam2;
	}
}

bool func_1250(char[4] cParam0)
{
	if (func_163(1, 1) && func_163(2, 1))
	{
		return true;
	}
	if (!func_163(1, 1))
	{
		if (!func_380(cParam0, 1, func_33(cParam0)))
		{
		}
	}
	if (!func_163(2, 1))
	{
		if (!func_380(cParam0, 2, func_33(cParam0)))
		{
		}
	}
	return (func_163(1, 1) && func_163(2, 1));
}

void func_1251(char[4] cParam0, char[4] cParam1)
{
	func_1773(&(cParam0->f_7375), cParam1);
	func_373(cParam0, 33554432);
}

bool func_1252()
{
	_request_scenario_type(-1426662425, 15, 0, 0);
	return _has_scenario_type_loaded(-1426662425, false);
}

void func_1253()
{
	if ((func_528(0) && func_434(func_208(0), 0)) && !is_ped_in_writhe(func_208(0)))
	{
		iVar0 = func_208(0);
	}
	else if ((func_528(1) && func_434(func_208(1), 0)) && !is_ped_in_writhe(func_208(1)))
	{
		iVar0 = func_208(1);
	}
	if (func_434(iVar0, 0))
	{
		_set_entity_coords_and_heading(iVar0, -353.6652f, -362.2751f, 86.0569f, 300.5535f, false, false, true);
		task_stand_still(iVar0, -1);
	}
}

void func_1254(int iParam0, struct<4> Param1, int iParam5, float fParam6)
{
	func_891(iParam0, Param1, Param1.f_3, iParam5, fParam6);
}

bool func_1255(char[4] cParam0, int iParam1)
{
	if (func_163(iParam1, 1))
	{
		return true;
	}
	if (func_380(cParam0, iParam1, func_33(cParam0)))
	{
		func_1774(iParam1);
		func_1775(&(Local_239[iParam1]->f_2));
		func_1776(&(Local_239[iParam1]->f_2), 1);
		func_1777(&(Local_239[iParam1]->f_2), 2000);
		set_blocking_of_non_temporary_events(&(iLocal_63[iParam1]), true);
		if (iParam1 == 18)
		{
			task_use_nearest_scenario_to_coord_warp(&(iLocal_63[18]), -355.3946f, -361.1851f, 86.2149f, 1f, -1, true, false, true, false);
			_0x463803429297117c(&(iLocal_63[18]), -355.3946f, -361.1851f, 86.2149f, 1, 0);
		}
		return true;
	}
	return false;
}

bool func_1256(char[4] cParam0)
{
	func_1282(cParam0);
	return (iVar1804 > 0 && iVar1804 < 10);
}

bool func_1257(char[4] cParam0)
{
	if (func_1269(30))
	{
		if (func_1778(2, 8388608))
		{
			return true;
		}
	}
	else
	{
		iVar0[0] = 0;
		iVar0[1] = 0;
		iVar0[2] = 0;
		iVar0[3] = &iLocal_63[2];
		iVar0[4] = &iLocal_63[1];
		iVar0[5] = 0;
		func_1779(2, cParam0->f_7375.f_804);
		Var7 = -1;
		Var7.f_1 = -1;
		Var7.f_2 = -1;
		func_1780(30, &Var7, 1);
		Var7.f_8 = -43f;
		if (func_1781(30, 75, Var7.f_5, Var7.f_8, round(Var7.f_4), &iVar0, 1, 3, 0))
		{
		}
	}
	return false;
}

bool func_1258()
{
	return iVar1858 == 3;
}

void func_1259(char[4] cParam0, char[4] cParam1)
{
	func_1782(&(cParam0->f_7375), cParam1, func_162(cParam0, func_33(cParam0)) != 5);
}

void func_1260(bool bParam0)
{
	iVar0 = 1;
	while (iVar0 <= 3)
	{
		iVar1 = iVar0;
		if (func_1546(iVar1))
		{
			freeze_entity_position(&(iLocal_97[iVar1]), bParam0);
		}
		iVar0++;
	}
}

void func_1261()
{
	iVar0 = 1;
	while (iVar0 <= 3)
	{
		iVar1 = iVar0;
		if (!func_1546(iVar1))
		{
		}
		else
		{
			vVar2 = { 0f, 0f, 0f };
			vVar5 = { 0f, 0f, 0f };
			switch (iVar1)
			{
				case 1:
					vVar2 = { -328.51f, -358.79f, 87.05f };
					vVar5 = { 0f, 0f, -180f };
					break;
				case 2:
					vVar2 = { -328.9037f, -357.6594f, 87.0537f };
					vVar5 = { 0f, 0f, 77.46f };
					break;
				case 3:
					vVar2 = { -326.82f, -356.86f, 87.05f };
					vVar5 = { 0f, 0f, -31.37f };
					break;
			}
			set_entity_coords(&(iLocal_97[iVar1]), vVar2, false, false, false, true);
			set_entity_rotation(&(iLocal_97[iVar1]), vVar5, 2, false);
		}
		iVar0++;
	}
}

int func_1262(char[4] cParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (iParam1 <= -1 || iParam1 >= 27)
	{
		return 0;
	}
	if (!bParam2)
	{
		func_99(cParam0, 512);
	}
	func_1249(cParam0, func_33(cParam0), iParam1);
	if (bParam3)
	{
		func_927(cParam0, iParam1, 2);
	}
	if (bParam4)
	{
		func_1263(cParam0);
	}
	return 1;
}

void func_1263(char[4] cParam0)
{
	func_1783(cParam0);
	func_1471(cParam0);
}

bool func_1264()
{
	return (func_163(3, 1) && !is_ped_in_writhe(&(iLocal_63[3])));
}

void func_1265(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	iVar8 = 1;
	if (!is_ped_injured(iParam0))
	{
		if (_0x608bc6a6aacd5036(&Var4, iParam0, iParam1, 0))
		{
			if (does_entity_exist(Var4.f_3))
			{
				iVar3 = func_1784(Var4.f_3);
				if (func_576(iVar3, 0))
				{
					if (iParam5 == 0)
					{
						_0xed00d72f81cf7278(Var4.f_3, 0, 1);
						vVar0.x = iParam2;
						vVar0.f_1 = iParam3;
						vVar0.f_2 = iParam4;
						if (func_390(vVar0))
						{
							vVar0 = { get_offset_from_entity_in_world_coords(iParam0, 0f, -1f, 0f) };
							func_1381(&vVar0, 50, 10, 0);
						}
						set_entity_coords(Var4.f_3, vVar0, false, false, true, true);
					}
					func_1785(&iParam0, iVar3, &iVar8, 1, -142743235);
				}
				else if (is_entity_a_ped(Var4.f_3))
				{
					iVar9 = get_ped_index_from_entity_index(Var4.f_3);
					if (is_ped_human(iVar9))
					{
						_0xed00d72f81cf7278(Var4.f_3, 0, 1);
						vVar0.x = iParam2;
						vVar0.f_1 = iParam3;
						vVar0.f_2 = iParam4;
						if (func_390(vVar0))
						{
							vVar0 = { get_offset_from_entity_in_world_coords(iParam0, 0f, -1f, 0f) };
							func_1381(&vVar0, 50, 10, 0);
						}
						set_entity_coords(Var4.f_3, vVar0, false, _is_ped_hogtied(iVar9), true, true);
					}
				}
			}
		}
	}
}

bool func_1266(char[4] cParam0)
{
	switch (iVar1858)
	{
		case 0:
			if (func_1786(cParam0, 512))
			{
				if (func_1258())
				{
					func_373(cParam0, 524288);
					func_1787(1);
				}
				else
				{
					return true;
				}
			}
			else if (!func_934(cParam0))
			{
				func_1787(3);
			}
			break;
		case 1:
			if (!func_934(cParam0))
			{
				func_1787(2);
			}
			break;
		case 2:
			if (func_1257(cParam0))
			{
				do_screen_fade_in(1000);
				func_1787(3);
			}
			break;
		case 3:
			break;
	}
	return iVar1858 == 1;
}

int func_1267(char[4] cParam0)
{
	return cParam0->f_598;
}

void func_1268()
{
	iVar0 = 1;
	while (iVar0 <= 3)
	{
		iVar1 = iVar0;
		if (func_1546(iVar1))
		{
			if (func_434(Global_35, 0))
			{
				set_entity_no_collision_entity(&(iLocal_97[iVar1]), Global_35, true);
				set_entity_no_collision_entity(Global_35, &(iLocal_97[iVar1]), true);
			}
			if (func_163(1, 1))
			{
				set_entity_no_collision_entity(&(iLocal_97[iVar1]), &(iLocal_63[1]), true);
				set_entity_no_collision_entity(&(iLocal_63[1]), &(iLocal_97[iVar1]), true);
			}
			if (func_163(2, 1))
			{
				set_entity_no_collision_entity(&(iLocal_97[iVar1]), &(iLocal_63[2]), true);
				set_entity_no_collision_entity(&(iLocal_63[2]), &(iLocal_97[iVar1]), true);
			}
		}
		iVar0++;
	}
}

bool func_1269(int iParam0)
{
	iVar0 = func_457(iParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	if (func_184(func_1788(iVar0)))
	{
		return true;
	}
	return false;
}

void func_1270(char[4] cParam0)
{
	if (func_1789(0))
	{
		func_1251(cParam0, "1-Player_Wins");
		func_1790(cParam0, "1-Player_Wins");
	}
	else
	{
		func_1251(cParam0, "2-Player_Loses");
		func_1790(cParam0, "2-Player_Loses");
	}
}

void func_1271(char[4] cParam0)
{
	Var0 = { func_1464(cParam0, func_35(cParam0)) };
	func_1791(cParam0, &Var0);
}

void func_1272(int iParam0)
{
	func_1792(iParam0, 8);
}

void func_1273(char[4] cParam0, int iParam1)
{
	cParam0->f_1[func_132(iParam1)]->f_12 = 1;
}

void func_1274(char[4] cParam0, int iParam1, int iParam2, int iParam3)
{
	iVar0 = func_132(iParam2);
	if (!func_1517(iVar0))
	{
		return;
	}
	iVar1 = func_1518(iParam3);
	if (!func_1519(iVar1))
	{
		return;
	}
	(*cParam0->f_1[iVar0])[iVar1] = *iParam1;
	set_bit(&(cParam0->f_1[iVar0]->f_17), iVar1);
}

void func_1275(char[4] cParam0, int iParam1, char[16] cParam2)
{
	cParam0->f_1[func_132(iParam1)]->f_13 = { cParam2 };
}

void func_1276(char[4] cParam0, int iParam1, int iParam2)
{
	cParam0->f_1[func_132(iParam1)]->f_21 = iParam2;
}

bool func_1277(int iParam0)
{
	if (func_1546(iParam0))
	{
		return true;
	}
	if (!func_1793(iParam0, &Var0, &iVar4))
	{
		return false;
	}
	iLocal_97[iParam0] = create_object(iVar4, Var0, true, true, false, false, true);
	if (func_1546(iParam0))
	{
		set_entity_heading(&(iLocal_97[iParam0]), Var0.f_3);
	}
	return func_1546(iParam0);
}

void func_1278(char[4] cParam0)
{
	if (func_1305())
	{
		func_448(&iLocal_145);
		return;
	}
	switch (func_1794(cParam0))
	{
		case 0:
			func_1345(cParam0, "REV1_FIND_REV", -1082130432, 0, 0, -1, -1, 0);
			func_1795(cParam0, "REV1_FIND_REV", 0, 7500, 0, -1082130432, 0, 0, -1, -1, 0);
			func_715("REV1_LOCKON", 7500, 0, 0, 0, 1);
			iLocal_145 = func_1796(408396114, func_1328(0, 7), 85f, 1);
			func_135(cParam0, 1);
			break;
		case 1:
			if (!func_449(11) && (func_1289() || func_1797()))
			{
				remove_blip(&iLocal_145);
				iLocal_145 = func_1796(408396114, func_1328(0, 7), 15.5f, 1);
				func_450(11, 1);
			}
			if (func_1291())
			{
				func_1293(cParam0);
				func_135(cParam0, 2);
			}
			else if (func_1329(Global_35, func_1328(0, 7), 1) < 33f)
			{
				if (!func_449(27))
				{
					if (func_1798(cParam0, "REV1_FIG_IDLE", 0))
					{
						func_213(&uLocal_1738);
						func_450(27, 1);
					}
				}
				else if (!func_449(28) && func_900(&uLocal_1738) > 9f)
				{
					if (func_1798(cParam0, "REV1_FIG_IDLE2", 0))
					{
						func_213(&uLocal_1738);
						func_450(28, 1);
					}
				}
				else if (!func_449(29) && func_900(&uLocal_1738) > 9f)
				{
					if (func_1798(cParam0, "REV1_FIG_IDLE3", 0))
					{
						func_450(29, 1);
					}
				}
			}
			break;
		case 2:
			if (func_1798(cParam0, "REV1_FIG_FIND", 0))
			{
				func_448(&iLocal_145);
				iLocal_145 = func_1799(408396114, func_1328(0, 7), 1);
				func_135(cParam0, 3);
			}
			break;
		case 3:
			if (!func_1800() && func_1798(cParam0, "REV1_FIG_REL", 0))
			{
				func_135(cParam0, 4);
			}
			break;
		case 4:
			if (!func_1801())
			{
				func_448(&iLocal_145);
				if (!does_blip_exist(iLocal_146))
				{
					iLocal_146 = _blip_add_for_entity(831283580, &(iLocal_63[17]));
				}
				func_135(cParam0, 51);
			}
			break;
		case 51:
			break;
	}
}

void func_1279(char[4] cParam0)
{
	iVar0 = 0;
	while (iVar0 < 2)
	{
		iVar7 = (1 + iVar0);
		if (!func_163(iVar7, 1))
		{
		}
		else
		{
			if (iVar7 == 1)
			{
				iVar3 = 2;
			}
			else if (iVar7 == 2)
			{
				iVar3 = 1;
			}
			switch (func_1802(iVar7))
			{
				case 0:
					if (!func_1252())
					{
						return;
					}
					if (!func_1803(cParam0))
					{
						return;
					}
					if (iVar7 == 1)
					{
						iVar2 = 2;
						sVar5 = "U_M_M_VALPOKERPLAYER_01";
						sVar6 = "p_chair05x";
					}
					else if (iVar7 == 2)
					{
						iVar2 = 1;
						sVar5 = "U_M_M_VALPOKERPLAYER_02";
						sVar6 = "p_chair05x^1";
					}
					if (_does_anim_scene_exist(cParam0->f_7375.f_804))
					{
						remove_anim_scene_entity(cParam0->f_7375.f_804, sVar5, &(iLocal_63[iVar7]));
						remove_anim_scene_entity(cParam0->f_7375.f_804, sVar6, &(iLocal_97[iVar2]));
						remove_anim_scene_entity(cParam0->f_7375.f_804, "p_chair05x^2", &(iLocal_97[3]));
					}
					stop_ped_speaking(&(iLocal_63[iVar7]), true);
					iVar4 = _0xd508fa229f1c4900(&(iLocal_97[iVar2]), 0f, 0f, 0f, -1426662425, 1f);
					if (_does_scenario_point_exist(iVar4))
					{
						_task_use_scenario_point(&(iLocal_63[iVar7]), iVar4, 0, 0, false, true, -1426662425, false, -1f, false);
					}
					func_1774(iVar7);
					func_1775(&(Local_239[iVar7]->f_2));
					func_1804(iVar7, 1);
					break;
				case 1:
					if (iVar7 == 1 && func_1546(2))
					{
						_set_entity_coords_and_heading(&(iLocal_97[2]), -329.57f, -357.32f, 87.05f, 76.32f, true, false, true);
					}
					else if (iVar7 == 2 && func_1546(1))
					{
						_set_entity_coords_and_heading(&(iLocal_97[1]), -329.5f, -358.66f, 87.05f, 115.29f, true, false, true);
					}
					if (func_1546(3))
					{
						_set_entity_coords_and_heading(&(iLocal_97[3]), func_1328(0, 6), func_1364(0, 6), true, false, true);
					}
					func_1804(iVar7, 2);
					break;
				case 2:
					if (is_entity_in_volume(Global_35, &(iLocal_108[20]), true, 0))
					{
						_0x66f9eb44342bb4c5(&(iLocal_63[iVar7]), &(Local_239[iVar7]->f_30));
					}
					if (func_1805(&(iLocal_63[iVar7]), 0, &(Local_239[iVar7]->f_2), &iVar1, 0, 0))
					{
						if (func_1806(iVar1, 1, 1, 1, 0))
						{
							func_1804(iVar7, 7);
						}
						else
						{
							func_1804(iVar7, 5);
						}
					}
					else if (func_1807(iVar3))
					{
						func_213(vLocal_1822[iVar0]);
						func_1804(iVar7, 4);
					}
					else if (iVar7 == 1)
					{
						if ((!func_449(21) || !func_449(22)) || !func_449(23))
						{
							if (is_entity_in_volume(Global_35, &(iLocal_108[20]), true, 0))
							{
								if (!func_26(vLocal_1822[iVar0]))
								{
									func_213(vLocal_1822[iVar0]);
								}
								else if (func_900(vLocal_1822[iVar0]) > 10f)
								{
									if (!func_449(21))
									{
										if (func_1798(cParam0, "REV1_POKR_RET1", 0))
										{
											func_450(21, 1);
										}
									}
									else if (!func_449(22))
									{
										if (func_1798(cParam0, "REV1_POKR_RET2", 0))
										{
											func_450(22, 1);
										}
									}
									else if (func_1798(cParam0, "REV1_POKR_RET3", 0))
									{
										func_450(23, 1);
									}
									func_551(vLocal_1822[iVar0]);
									func_1804(iVar7, 3);
								}
							}
							else
							{
								func_551(vLocal_1822[iVar0]);
							}
						}
					}
					break;
				case 3:
					if (is_entity_in_volume(Global_35, &(iLocal_108[20]), true, 0))
					{
						_0x66f9eb44342bb4c5(&(iLocal_63[iVar7]), &(Local_239[iVar7]->f_30));
					}
					if (func_1805(&(iLocal_63[iVar7]), 0, &(Local_239[iVar7]->f_2), &iVar1, 0, 0))
					{
						if (func_1806(iVar1, 1, 1, 1, 0))
						{
							func_1804(iVar7, 7);
						}
						else
						{
							func_1804(iVar7, 5);
						}
					}
					else if (func_1807(iVar3))
					{
						func_213(vLocal_1822[iVar0]);
						func_1804(iVar7, 4);
					}
					else if (((func_449(23) && !func_1808("REV1_POKR_RET3")) || (func_449(22) && !func_1808("REV1_POKR_RET2"))) || (func_449(21) && !func_1808("REV1_POKR_RET1")))
					{
						func_1804(iVar7, 2);
					}
					break;
				case 4:
					if (is_entity_in_volume(Global_35, &(iLocal_108[20]), true, 0))
					{
						_0x66f9eb44342bb4c5(&(iLocal_63[iVar7]), &(Local_239[iVar7]->f_30));
					}
					if (func_1805(&(iLocal_63[iVar7]), 0, &(Local_239[iVar7]->f_2), &iVar1, 0, 0))
					{
						if (func_1806(iVar1, 1, 1, 1, 0))
						{
							func_1804(iVar7, 7);
						}
						else
						{
							func_1804(iVar7, 5);
						}
					}
					else if (func_900(vLocal_1822[iVar0]) > 1f)
					{
						if (func_1809(iVar3))
						{
							func_1804(iVar7, 7);
						}
						else
						{
							func_1804(iVar7, 5);
						}
					}
					break;
				case 5:
					if (iVar7 == 1)
					{
						func_1798(cParam0, "REV1_POKR_GRIEF", 0);
					}
					else if (is_ambient_speech_disabled(&(iLocal_63[iVar7])))
					{
						stop_ped_speaking(&(iLocal_63[iVar7]), false);
					}
					_0xec6935ebe0847b90(&(iLocal_63[iVar7]), Global_36);
					clear_ped_tasks(&(iLocal_63[iVar7]), 1, 0);
					_task_smart_flee_style_ped(&(iLocal_63[iVar7]), Global_35, 2, 0, -1082130432, -1, 0);
					func_1804(iVar7, 6);
					break;
				case 6:
					if (func_1805(&(iLocal_63[iVar7]), 0, &(Local_239[iVar7]->f_2), &iVar1, 0, 0) && func_1806(iVar1, 1, 1, 1, 0))
					{
						func_1804(iVar7, 7);
					}
					if ((iVar7 == 1 && is_ambient_speech_disabled(&(iLocal_63[iVar7]))) && !func_1808("REV1_POKR_GRIEF"))
					{
						stop_ped_speaking(&(iLocal_63[iVar7]), false);
					}
					break;
				case 7:
					if (iVar7 == 1)
					{
						func_1798(cParam0, "REV1_POKR_GRIEF", 0);
					}
					else if (is_ambient_speech_disabled(&(iLocal_63[iVar7])))
					{
						stop_ped_speaking(&(iLocal_63[iVar7]), false);
					}
					_0xeeed8fafec331a70(&(iLocal_63[iVar7]), Global_36, 1);
					clear_ped_tasks(&(iLocal_63[iVar7]), 1, 0);
					_task_smart_flee_style_ped(&(iLocal_63[iVar7]), Global_35, 3, 0, -1082130432, -1, 0);
					func_1804(iVar7, 8);
					break;
				case 8:
					if ((iVar7 == 1 && is_ambient_speech_disabled(&(iLocal_63[iVar7]))) && !func_1808("REV1_POKR_GRIEF"))
					{
						stop_ped_speaking(&(iLocal_63[iVar7]), false);
					}
					break;
			}
		}
		iVar0++;
	}
}

void func_1280(char[4] cParam0)
{
	if (!func_163(17, 1))
	{
		func_1810(6);
	}
	switch (iVar1859)
	{
		case 0:
			func_1254(&(iLocal_63[0]), func_499(1, 1), 2, 1073741824);
			func_1254(&(iLocal_63[17]), func_499(0, 7), 2, 1073741824);
			_0x9587913b9e772d29(&(iLocal_63[0]), 0);
			_0x9587913b9e772d29(&(iLocal_63[17]), 0);
			set_entity_can_be_damaged_by_relationship_group(&(iLocal_63[0]), false, -401180987);
			func_1332();
			task_react(&(iLocal_63[18]), &(iLocal_63[17]), 0f, 0f, 0f, "default_scared", -1f, -1f, 4);
			func_1810(1);
			break;
		case 1:
			_0x789dabd18e9024db(&(iLocal_63[17]), 15, 1);
			_0x789dabd18e9024db(&(iLocal_63[0]), 3, 1);
			task_put_ped_directly_into_grapple(&(iLocal_63[17]), &(iLocal_63[0]), -381863174, 0, 0, 1, 0);
			func_1810(2);
			break;
		case 2:
			if (_0x0e99e3bf11bb6367(&(iLocal_63[17])))
			{
				func_1810(3);
			}
			else if (!func_1811(&(iLocal_63[17]), -71340211))
			{
				func_1810(1);
			}
			break;
		case 3:
			if (is_bullet_in_area(func_1328(0, 7), 12f, true))
			{
				func_213(&uLocal_1869);
				func_1810(5);
			}
			else if (func_1794(cParam0) == 4 || !_0x0e99e3bf11bb6367(&(iLocal_63[17])))
			{
				_0x8301d87b1b89e219(&(iLocal_63[17]), -1811426888);
				_0x789dabd18e9024db(&(iLocal_63[17]), 32768, 0);
				_0x923583741dc87bce(&(iLocal_63[0]), "default");
				_0x89f5e7adecccb49c(&(iLocal_63[0]), "injured_head");
				func_1810(4);
			}
			break;
		case 4:
			if (!_0x0e99e3bf11bb6367(&(iLocal_63[17])))
			{
				clear_ped_tasks(&(iLocal_63[17]), 1, 0);
				task_turn_ped_to_face_entity(&(iLocal_63[17]), Global_35, 0, -1082130432, -1082130432, -1082130432);
				task_follow_nav_mesh_to_coord(&(iLocal_63[0]), -449.4807f, -416.2991f, 87.9073f, 1f, 20000, 0.25f, 0, 240.1111f);
				_0xeae3b5b019c8d23f(&(iLocal_63[17]), 262143);
				_0x949b2f9ed2917f5d(&(iLocal_63[17]), 8);
				_0x949b2f9ed2917f5d(&(iLocal_63[17]), 21);
				set_entity_can_be_damaged_by_relationship_group(&(iLocal_63[0]), true, -401180987);
				func_1810(6);
			}
			break;
		case 5:
			if (!_0x0e99e3bf11bb6367(&(iLocal_63[17])) || has_entity_been_damaged_by_entity(&(iLocal_63[17]), Global_35, 1, 1))
			{
				func_1810(4);
			}
			else if (func_900(&uLocal_1869) > 1.5f)
			{
				func_1812(&(iLocal_63[0]), 0, 0);
				func_1810(6);
			}
			break;
		case 6:
			break;
	}
}

void func_1281(char[4] cParam0)
{
	if (func_1291())
	{
		func_1294(&(iLocal_63[0]), 0, 1, 0);
		if (func_10(iVar1803))
		{
			func_11(&iLocal_1806, 1, 1);
		}
		func_1295(9);
	}
	switch (iVar1802)
	{
		case 0:
			if (!func_1813())
			{
				func_1295(1);
			}
			break;
		case 1:
			func_1814(&(iLocal_63[0]), func_317(21, 0), 500f, 0, 500f, 324);
			func_1295(2);
			break;
		case 2:
			if (func_1813())
			{
				func_1294(&(iLocal_63[0]), 0, 1, 0);
				if (func_10(iVar1803))
				{
					func_11(&iLocal_1806, 1, 1);
				}
				func_1295(0);
			}
			else if (func_1815(player_id(), &(iLocal_63[0])))
			{
				if (!func_10(iVar1803))
				{
					iLocal_1806 = func_1816("INTERACT_CALLOUT", -163964935, 0, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, 1704213876, 0);
					func_1817(&iLocal_1806, &(iLocal_63[0]));
				}
				if (func_10(iVar1803) && func_1818(iVar1803, 1))
				{
					if (!func_1819() && !func_1800())
					{
						func_1820(iVar1803, 0, 1);
						if (!func_449(8))
						{
							func_450(8, 1);
						}
						else if (!func_449(9))
						{
							func_450(9, 1);
						}
						else
						{
							func_450(10, 1);
						}
						func_1295(3);
					}
				}
			}
			else if (func_10(iVar1803))
			{
				func_11(&iLocal_1806, 1, 1);
			}
			break;
		case 3:
			if (func_449(10))
			{
				if (func_1798(cParam0, "REV1_SHT_RSP0", 0))
				{
					func_213(&uLocal_1772);
					func_1295(4);
				}
			}
			else if (func_449(9))
			{
				if (func_1798(cParam0, "REV1_ATTENTION", 0))
				{
					func_213(&uLocal_1772);
					func_1295(4);
				}
			}
			else if (func_1798(cParam0, "REV1_ATTENTION", 0))
			{
				func_213(&uLocal_1772);
				func_1295(4);
			}
			break;
		case 4:
			if (func_214(&uLocal_1772) > 3000)
			{
				if (!func_449(10))
				{
					func_1820(iVar1803, 1, 1);
					func_1295(2);
				}
				else
				{
					func_11(&iLocal_1806, 1, 1);
					func_1294(&(iLocal_63[0]), 0, 1, 0);
					func_1295(9);
				}
			}
			break;
		case 9:
			break;
	}
}

void func_1282(char[4] cParam0)
{
	iVar0 = iVar1804;
	vVar1 = { -320.5143f, -361.6772f, 87.0078f };
	fVar4 = func_1329(Global_35, vVar1, 1);
	bVar6 = fVar4 <= 5f;
	bVar7 = (_0xcb690f680a3ea971(Global_35, 7) && func_1103(Global_35, 0, 1, 0) != 2055893578);
	bVar8 = (bVar6 && bVar7);
	bVar9 = (!func_163(14, 1) || !func_163(15, 1));
	bVar10 = (!bVar9 && (has_entity_been_damaged_by_entity(&(iLocal_63[14]), Global_35, 1, 1) || has_entity_been_damaged_by_entity(&(iLocal_63[15]), Global_35, 1, 1)));
	bVar11 = (bVar6 && is_ped_shooting(Global_35));
	bVar12 = is_bullet_in_area(vVar1, 7f, true);
	bVar13 = (!bVar9 && ((_0x29fce825613fefca(&(iLocal_63[14]), 1000) || is_ped_performing_melee_action(&(iLocal_63[14]), 32768, 0)) || is_ped_running_ragdoll_task(&(iLocal_63[14]))));
	bVar14 = (!bVar9 && ((_0x29fce825613fefca(&(iLocal_63[15]), 1000) || is_ped_performing_melee_action(&(iLocal_63[15]), 32768, 0)) || is_ped_running_ragdoll_task(&(iLocal_63[15]))));
	bVar15 = (!bVar9 && (_0x3bdfcf25b58b0415(&(iLocal_63[14])) || _0x3bdfcf25b58b0415(&(iLocal_63[15]))));
	bVar16 = (!bVar9 && (_is_ped_lassoed(&(iLocal_63[14])) || _is_ped_lassoed(&(iLocal_63[15]))));
	bVar17 = (bVar13 || bVar14);
	bVar18 = get_number_of_fires_in_range(vVar1, 8f) > 0;
	bVar19 = (!bVar9 && (is_entity_touching_entity(Global_35, &(iLocal_63[14])) || func_890(Global_35, &(iLocal_63[14]), 1, 1) < 0.7f));
	bVar20 = (!bVar9 && (is_entity_touching_entity(Global_35, &(iLocal_63[15])) || func_890(Global_35, &(iLocal_63[15]), 1, 1) < 0.7f));
	bVar21 = (bVar19 || bVar20);
	bVar22 = (((((((bVar10 || bVar9) || bVar11) || bVar12) || bVar18) || bVar16) || bVar15) || bVar17);
	if ((iVar1804 == 2 || iVar1804 == 4) || iVar1804 == 6)
	{
		if (!func_1821(8) && is_entity_in_volume(Global_35, &(iLocal_108[22]), true, 0))
		{
			task_look_at_entity(Global_35, &(iLocal_63[14]), -1, 0, 51, 0);
			func_1822(8, 1);
		}
		else if (func_1821(8) && !is_entity_in_volume(Global_35, &(iLocal_108[22]), true, 0))
		{
			task_clear_look_at(Global_35);
			func_1822(8, 0);
		}
	}
	else if (func_1821(8))
	{
		task_clear_look_at(Global_35);
		func_1822(8, 0);
	}
	if (!func_1821(256) && bVar21)
	{
		func_213(&uLocal_1781);
		func_1822(256, 1);
	}
	else if (func_1821(256) && !bVar21)
	{
		func_1822(256, 0);
	}
	else if (func_1821(256) && func_1498(&uLocal_1781) >= 3f)
	{
		func_1823(7);
	}
	if (!func_1821(512))
	{
		if (iVar1804 >= 1 && iVar1804 <= 5)
		{
			if (func_1329(Global_35, -320.7364f, -362.2213f, 87.00286f, 0) < 7f)
			{
				_0x3946fc742ac305cd(player_id(), &(iLocal_63[14]), "REV1_Station", -320.51f, -362.72f, 87.18f, 0, 0);
				func_1822(512, 1);
			}
		}
	}
	else if ((iVar1804 < 1 || iVar1804 > 5) || func_1329(Global_35, -320.7364f, -362.2213f, 87.00286f, 0) >= 7f)
	{
		_0xc67a4910425f11f1(player_id(), 0);
		func_1822(512, 0);
	}
	if (!func_449(34))
	{
		if (is_entity_in_volume(Global_35, &(iLocal_108[22]), false, 0))
		{
			if (func_1103(Global_35, 0, 1, 0) == -1016714371)
			{
				set_current_ped_weapon(Global_35, -1569615261, false, 0, false, false);
			}
			func_450(34, 1);
		}
	}
	else
	{
		func_1303();
		if (!is_entity_in_volume(Global_35, &(iLocal_108[22]), false, 0))
		{
			func_450(34, 0);
		}
	}
	if (func_1824(Local_204[0]) && func_1288())
	{
		func_1825(&Local_204, 1, 1, 1, 0);
		func_1826(iLocal_63[14]);
		func_1826(iLocal_63[15]);
		set_ped_config_flag(&(iLocal_63[14]), 297, true);
		set_ped_config_flag(&(iLocal_63[15]), 297, true);
		func_450(2, 1);
	}
	switch (iVar1804)
	{
		case 0:
			if (((((_is_anim_scene_loaded(&(iLocal_141[0]), true, false) && _0x23e33cb9f4a3f547(&(iLocal_141[0]), func_410(0))) && _0x23e33cb9f4a3f547(&(iLocal_141[0]), func_410(1))) && _0x23e33cb9f4a3f547(&(iLocal_141[0]), func_410(2))) && _0x23e33cb9f4a3f547(&(iLocal_141[0]), func_410(3))) && _0x23e33cb9f4a3f547(&(iLocal_141[0]), func_410(10)))
			{
				if (func_163(14, 1) && func_163(15, 1))
				{
					set_anim_scene_entity(&(iLocal_141[0]), "Male_Left", &(iLocal_63[14]), 0);
					set_anim_scene_entity(&(iLocal_141[0]), "Male_Right", &(iLocal_63[15]), 0);
					set_anim_scene_entity(&(iLocal_141[0]), "ARTHUR", Global_35, 0);
					_set_anim_scene_playback_list_bool(&(iLocal_141[0]), func_410(0), true);
					start_anim_scene(&(iLocal_141[0]));
					stop_ped_speaking(&(iLocal_63[14]), true);
					stop_ped_speaking(&(iLocal_63[15]), true);
					func_1823(1);
				}
			}
			break;
		case 1:
			func_1827(cParam0);
			if (bVar22)
			{
				func_1823(10);
			}
			else if (bVar17)
			{
				func_1823(8);
			}
			else if (bVar8)
			{
				func_1823(6);
			}
			else if (func_1821(4))
			{
				if (func_1821(2))
				{
					_0xdf7b5144e25cd3fe(&(iLocal_141[0]), func_410(4));
					_0xdf7b5144e25cd3fe(&(iLocal_141[0]), func_410(6));
					_0xdf7b5144e25cd3fe(&(iLocal_141[0]), func_410(7));
					_0xdf7b5144e25cd3fe(&(iLocal_141[0]), func_410(8));
					_0xdf7b5144e25cd3fe(&(iLocal_141[0]), func_410(9));
				}
				else
				{
					_0xdf7b5144e25cd3fe(&(iLocal_141[0]), func_410(11));
					_0xdf7b5144e25cd3fe(&(iLocal_141[0]), func_410(13));
					_0xdf7b5144e25cd3fe(&(iLocal_141[0]), func_410(14));
					_0xdf7b5144e25cd3fe(&(iLocal_141[0]), func_410(15));
					_0xdf7b5144e25cd3fe(&(iLocal_141[0]), func_410(16));
				}
				func_1823(2);
			}
			break;
	}
	switch (iVar1804)
	{
		case 2:
			if (!func_1821(16) && !bVar6)
			{
				abort_anim_scene(&(iLocal_141[0]), false);
				func_213(&uLocal_1778);
				func_1822(16, 1);
			}
			else if (func_1821(16) && bVar6)
			{
				if (_0x34a0671be613d3d0(&(iLocal_141[0])))
				{
					resume_anim_scene_from_last_checkpoint(&(iLocal_141[0]));
				}
				func_1822(16, 0);
			}
			if (!func_1821(32))
			{
				if (func_1821(2) && _get_anim_scene_time(&(iLocal_141[0])) > 12f)
				{
					func_1822(32, 1);
				}
				else if (!func_1821(2) && _get_anim_scene_time(&(iLocal_141[0])) > 18f)
				{
					func_1822(32, 1);
				}
			}
			if (bVar22)
			{
				func_1823(10);
			}
			else if (bVar17)
			{
				func_1823(8);
			}
			else if (bVar8)
			{
				func_1823(6);
			}
			else if (func_1821(16) && func_1498(&uLocal_1778) >= 10f)
			{
				func_1823(3);
			}
			else if (_0x8d81e7824b7753f7(&(iLocal_141[0]), "s_Idle_Short", 1))
			{
				if ((((((func_1821(2) && _0x23e33cb9f4a3f547(&(iLocal_141[0]), func_410(4))) && _0x23e33cb9f4a3f547(&(iLocal_141[0]), func_410(5))) && _0x23e33cb9f4a3f547(&(iLocal_141[0]), func_410(6))) && _0x23e33cb9f4a3f547(&(iLocal_141[0]), func_410(7))) && _0x23e33cb9f4a3f547(&(iLocal_141[0]), func_410(8))) && _0x23e33cb9f4a3f547(&(iLocal_141[0]), func_410(9)))
				{
					func_1823(3);
				}
				else if (((((_0x23e33cb9f4a3f547(&(iLocal_141[0]), func_410(11)) && _0x23e33cb9f4a3f547(&(iLocal_141[0]), func_410(12))) && _0x23e33cb9f4a3f547(&(iLocal_141[0]), func_410(13))) && _0x23e33cb9f4a3f547(&(iLocal_141[0]), func_410(14))) && _0x23e33cb9f4a3f547(&(iLocal_141[0]), func_410(15))) && _0x23e33cb9f4a3f547(&(iLocal_141[0]), func_410(16)))
				{
					func_1823(3);
				}
			}
			break;
		case 3:
			if (!func_1821(1) && !bVar6)
			{
				func_1822(1, 1);
			}
			if (bVar22)
			{
				func_1823(10);
			}
			else if (bVar17)
			{
				func_1823(8);
			}
			else if (bVar8)
			{
				func_1823(6);
			}
			else if (!is_entity_in_volume(Global_35, &(iLocal_108[15]), false, 0))
			{
				func_213(&uLocal_1775);
			}
			else if (func_1498(&uLocal_1775) >= 8f)
			{
				func_1823(4);
			}
			else if (func_1821(1))
			{
				func_1823(4);
			}
			break;
		case 4:
			if (!func_1821(32))
			{
				if (func_1821(2) && _get_anim_scene_time(&(iLocal_141[0])) > 3f)
				{
					func_1822(32, 1);
				}
			}
			if (bVar22)
			{
				func_1823(10);
			}
			else if (bVar17)
			{
				func_1823(8);
			}
			else if (bVar8)
			{
				func_1823(6);
			}
			else if (_0x8d81e7824b7753f7(&(iLocal_141[0]), "s_Idle_Short", 1))
			{
				func_1823(5);
			}
			break;
		case 5:
			if (bVar22)
			{
				func_1823(10);
			}
			else if (bVar17)
			{
				func_1823(8);
			}
			else if (bVar8)
			{
				func_1823(6);
			}
			break;
		case 6:
			if (bVar22 || bVar17)
			{
				func_1823(10);
			}
			else if ((!_does_anim_scene_exist(&(iLocal_141[0])) || !_is_anim_scene_started(&(iLocal_141[0]), false)) || _is_anim_scene_active(&(iLocal_141[0])))
			{
				func_1823(10);
			}
			break;
	}
	switch (iVar1804)
	{
		case 7:
			if ((!_does_anim_scene_exist(&(iLocal_141[0])) || !_is_anim_scene_started(&(iLocal_141[0]), false)) || _is_anim_scene_active(&(iLocal_141[0])))
			{
				func_1823(10);
			}
			break;
		case 8:
			if ((func_1821(64) && !is_ped_performing_melee_action(&(iLocal_63[14]), 32768, 0)) && !is_ped_running_ragdoll_task(&(iLocal_63[14])))
			{
				func_1823(9);
			}
			else if ((func_1821(128) && !is_ped_performing_melee_action(&(iLocal_63[15]), 32768, 0)) && !is_ped_running_ragdoll_task(&(iLocal_63[15])))
			{
				func_1823(9);
			}
			break;
		case 9:
			if ((!_does_anim_scene_exist(&(iLocal_141[0])) || !_is_anim_scene_started(&(iLocal_141[0]), false)) || _is_anim_scene_active(&(iLocal_141[0])))
			{
				func_1823(10);
			}
			break;
		case 10:
			break;
	}
	if (iVar0 != iVar1804)
	{
		switch (iVar1804)
		{
			case 2:
				if (func_1821(2))
				{
					_set_anim_scene_playback_list_bool(&(iLocal_141[0]), func_410(3), true);
				}
				else
				{
					_set_anim_scene_playback_list_bool(&(iLocal_141[0]), func_410(10), true);
				}
				if (func_1821(2))
				{
					_0xcb9401f918cb0f75(Global_35, "HandsOnBelt", 1, -1);
				}
				break;
			case 3:
				func_213(&uLocal_1775);
				if (func_1821(16))
				{
					if (_0x34a0671be613d3d0(&(iLocal_141[0])))
					{
						resume_anim_scene_from_last_checkpoint(&(iLocal_141[0]));
					}
					_set_anim_scene_playback_list_bool(&(iLocal_141[0]), func_410(1), true);
					func_1822(16, 0);
				}
				_0xa6f67bec53379a32(Global_35, "HandsOnBelt");
				break;
			case 4:
				if (func_1821(2))
				{
					_set_anim_scene_playback_list_bool(&(iLocal_141[0]), func_410(4), true);
				}
				else
				{
					_set_anim_scene_playback_list_bool(&(iLocal_141[0]), func_410(11), true);
				}
				break;
			case 6:
				if (!func_1821(4))
				{
					_set_anim_scene_playback_list_bool(&(iLocal_141[0]), func_410(2), true);
				}
				else if (func_1821(2))
				{
					_set_anim_scene_playback_list_bool(&(iLocal_141[0]), func_410(5), true);
				}
				else
				{
					_set_anim_scene_playback_list_bool(&(iLocal_141[0]), func_410(12), true);
				}
				_0xa6f67bec53379a32(Global_35, "HandsOnBelt");
				break;
			case 7:
				if (bVar19)
				{
					if (func_1821(2))
					{
						_set_anim_scene_playback_list_bool(&(iLocal_141[0]), func_410(6), true);
					}
					else
					{
						_set_anim_scene_playback_list_bool(&(iLocal_141[0]), func_410(13), true);
					}
				}
				else if (bVar20)
				{
					if (func_1821(2))
					{
						_set_anim_scene_playback_list_bool(&(iLocal_141[0]), func_410(7), true);
					}
					else
					{
						_set_anim_scene_playback_list_bool(&(iLocal_141[0]), func_410(14), true);
					}
				}
				break;
			case 8:
				if (bVar13)
				{
					func_1822(64, 1);
				}
				if (bVar14)
				{
					func_1822(128, 1);
				}
				abort_anim_scene(&(iLocal_141[0]), false);
				if (func_163(14, 1))
				{
					stop_ped_speaking(&(iLocal_63[14]), false);
				}
				if (func_163(15, 1))
				{
					stop_ped_speaking(&(iLocal_63[15]), false);
				}
				_0xa6f67bec53379a32(Global_35, "HandsOnBelt");
				break;
			case 9:
				set_anim_scene_entity(&(iLocal_141[0]), "Male_Left", &(iLocal_63[14]), 0);
				set_anim_scene_entity(&(iLocal_141[0]), "Male_Right", &(iLocal_63[15]), 0);
				if (_0x34a0671be613d3d0(&(iLocal_141[0])))
				{
					resume_anim_scene_from_last_checkpoint(&(iLocal_141[0]));
				}
				if (func_163(14, 1))
				{
					stop_ped_speaking(&(iLocal_63[14]), false);
				}
				if (func_163(15, 1))
				{
					stop_ped_speaking(&(iLocal_63[15]), false);
				}
				if (func_1821(64))
				{
					if (func_1821(2))
					{
						_set_anim_scene_playback_list_bool(&(iLocal_141[0]), func_410(8), true);
					}
					else
					{
						_set_anim_scene_playback_list_bool(&(iLocal_141[0]), func_410(15), true);
					}
				}
				else if (func_1821(128))
				{
					if (func_1821(2))
					{
						_set_anim_scene_playback_list_bool(&(iLocal_141[0]), func_410(9), true);
					}
					else
					{
						_set_anim_scene_playback_list_bool(&(iLocal_141[0]), func_410(16), true);
					}
				}
				_0xa6f67bec53379a32(Global_35, "HandsOnBelt");
				break;
			case 10:
				if (_does_anim_scene_exist(&(iLocal_141[0])) && _is_anim_scene_started(&(iLocal_141[0]), false))
				{
					_delete_anim_scene(&(iLocal_141[0]));
				}
				if (!bVar22)
				{
					iVar5 = 8;
				}
				else
				{
					iVar5 = 3;
				}
				if (func_163(14, 1))
				{
					_task_smart_flee_style_ped(&(iLocal_63[14]), Global_35, iVar5, 0, -1082130432, -1, 0);
					stop_ped_speaking(&(iLocal_63[14]), false);
				}
				if (func_163(15, 1))
				{
					_task_smart_flee_style_ped(&(iLocal_63[15]), Global_35, iVar5, 0, -1082130432, -1, 0);
					stop_ped_speaking(&(iLocal_63[15]), false);
				}
				_0xa6f67bec53379a32(Global_35, "HandsOnBelt");
				break;
		}
	}
}

void func_1283(char[4] cParam0, bool bParam1)
{
	*Var12[0] = { -357.6254f, -364.1647f, 85.8734f };
	Var12[0]->f_3 = 182.9426f;
	*Var12[1] = { -346.3955f, -468.3741f, 69.8046f };
	Var12[1]->f_3 = 311.8708f;
	*Var12[2] = { -348.3425f, -424.2546f, 79.5777f };
	Var12[2]->f_3 = 206.9321f;
	*Var12[3] = { -427.4989f, -469.1165f, 67.3114f };
	Var12[3]->f_3 = 5.9496f;
	*Var12[4] = { -414.9263f, -534.5461f, 54.384f };
	Var12[4]->f_3 = 69.6854f;
	*Var12[5] = { -413.8107f, -511.5074f, 57.152f };
	Var12[5]->f_3 = 90.3988f;
	*Var12[6] = { -440.7322f, -512.5738f, 56.2281f };
	Var12[6]->f_3 = 92.6355f;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (_is_tracked_point_valid(&(iLocal_1811[iVar0])))
		{
		}
		iVar0++;
	}
	switch (iVar1806)
	{
		case 0:
			if (bParam1)
			{
				iVar41 = func_1828();
				if (iVar41 != 0)
				{
					func_1829(1);
				}
			}
			break;
		case 1:
			iVar0 = 0;
			while (iVar0 < 7)
			{
				iLocal_1811[iVar0] = create_tracked_point();
				if (_is_tracked_point_valid(&(iLocal_1811[iVar0])))
				{
					set_tracked_point_info(&(iLocal_1811[iVar0]), *Var12[iVar0], 4f);
				}
				iVar0++;
			}
			func_1829(2);
			break;
		case 2:
			if (func_380(cParam0, 24, -1) && func_380(cParam0, 25, -1))
			{
				freeze_entity_position(&(iLocal_63[24]), false);
				_set_ped_on_mount(&(iLocal_63[24]), &(iLocal_63[25]), -1, true);
				request_ped_visibility_tracking(&(iLocal_63[24]));
				_0x819add5ef1742f47(&(iLocal_63[24]), 15);
				func_1829(3);
			}
			break;
		case 3:
			iVar0 = 0;
			while (iVar0 < 7)
			{
				fVar4[iVar0] = -1f;
				if (_is_tracked_point_valid(&(iLocal_1811[iVar0])))
				{
					iVar1 = _0xdfe332a5da6fe7c9(&(iLocal_1811[iVar0]));
					if (iVar1 >= 0 && iVar1 < 10)
					{
						fVar4[iVar0] = func_1329(Global_35, *Var12[iVar0], 1);
					}
				}
				iVar0++;
			}
			iVar2 = -1;
			fVar3 = -1f;
			iVar0 = 0;
			while (iVar0 < 7)
			{
				if (&fVar4[iVar0] != -1f)
				{
					if (iVar2 == -1 || &fVar4[iVar0] < fVar3)
					{
						iVar2 = iVar0;
						fVar3 = &fVar4[iVar0];
					}
				}
				iVar0++;
			}
			if (iVar2 != -1)
			{
				_set_entity_coords_and_heading(&(iLocal_63[25]), *Var12[iVar2], Var12[iVar2]->f_3, false, false, true);
				freeze_entity_position(&(iLocal_63[25]), false);
				task_follow_nav_mesh_to_coord(&(iLocal_63[24]), Global_36, 2f, -1, 0.25f, 0, 40000f);
				func_179();
				func_213(&uLocal_1784);
				func_1829(4);
			}
			break;
		case 4:
			if (func_900(&uLocal_1784) > 3f)
			{
				set_player_wanted_level(player_id(), 3, true);
				func_40(1);
				func_1515(cParam0, func_33(cParam0), 64);
				_0x1854217c640b39ec(&(iLocal_63[24]), Global_35, 0f, 0f, 0f, 7f, 0, 0);
				set_ped_combat_attributes(&(iLocal_63[24]), 126, true);
				task_combat_ped(&(iLocal_63[24]), Global_35, 0, 0);
				iLocal_1832 = _blip_add_for_entity(662885764, &(iLocal_63[24]));
				_blip_set_modifier(iVar1828, -1766932418);
				func_213(&uLocal_1784);
				func_1829(5);
			}
			break;
		case 5:
			if (is_tracked_ped_visible(&(iLocal_63[24])) && func_890(&(iLocal_63[24]), Global_35, 1, 1) < 20f)
			{
				func_213(&uLocal_1784);
				func_1829(6);
			}
			else if (!func_434(&(iLocal_63[24]), 0))
			{
				func_213(&uLocal_1784);
				func_1829(6);
			}
			else if (func_900(&uLocal_1784) > 10f)
			{
				func_213(&uLocal_1784);
				func_1829(6);
			}
			break;
		case 6:
			if (func_900(&uLocal_1784) > 3f)
			{
				_0x3088634cf8c819cf(&(iLocal_63[24]));
				func_1829(7);
			}
			break;
		case 7:
			break;
	}
}

void func_1284()
{
	switch (iVar1870)
	{
		case 0:
			request_ped_visibility_tracking(&(iLocal_63[0]));
			func_1830(1);
			break;
		case 1:
			if (func_1291() || !func_163(0, 1))
			{
				func_1830(3);
			}
			else
			{
				fVar0 = func_1329(Global_35, func_1328(1, 1), 1);
				if (fVar0 < 20f || (fVar0 < 30f && is_tracked_ped_visible(&(iLocal_63[0]))))
				{
					func_213(&uLocal_1866);
					func_1830(2);
				}
			}
			break;
		case 2:
			if (func_1291() || !func_163(0, 1))
			{
				func_1830(3);
			}
			else if (func_900(&uLocal_1866) > 40f)
			{
				func_1812(&(iLocal_63[0]), 0, 0);
				func_1830(3);
			}
			break;
		case 3:
			if (_0x5102307ce88798eb(&(iLocal_63[0])))
			{
				_0x3088634cf8c819cf(&(iLocal_63[0]));
			}
			func_1830(4);
			break;
		case 4:
			break;
	}
}

void func_1285()
{
	if (!func_163(0, 1))
	{
		return;
	}
	if (func_890(Global_35, &(iLocal_63[18]), 0, 1) < 8f || _is_ped_lassoed(&(iLocal_63[18])))
	{
		func_1812(&(iLocal_63[0]), 0, 0);
	}
}

void func_1286()
{
	if (!func_434(&(iLocal_63[18]), 0))
	{
		return;
	}
	switch (iVar1832)
	{
		case 0:
			if (!func_1811(&(iLocal_63[18]), 2121492476))
			{
				task_react(&(iLocal_63[18]), Global_35, 0f, 0f, 0f, "default_scared", -1f, -1f, 4);
			}
			func_1831(1);
			break;
		case 1:
			if (func_890(&(iLocal_63[18]), Global_35, 0, 1) < 12f)
			{
				func_1832(18, 0);
			}
			if (func_1833(18, 4f) || func_1305())
			{
				task_react(&(iLocal_63[18]), Global_35, 0f, 0f, 0f, "default_scared", -1f, -1f, 4);
				func_1831(2);
			}
			break;
		case 2:
			break;
	}
}

void func_1287()
{
	if (!func_449(42))
	{
		func_450(42, func_1834());
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		iVar1 = (4 + iVar0);
		if (is_entity_dead(&(iLocal_63[iVar1])))
		{
		}
		else
		{
			switch (&iLocal_1787[iVar0])
			{
				case 0:
					clear_ped_tasks(&(iLocal_63[iVar1]), 1, 0);
					set_blocking_of_non_temporary_events(&(iLocal_63[iVar1]), true);
					_task_start_scenario_in_place(&(iLocal_63[iVar1]), 1923438725, 0, false, 0, -1f, false);
					func_1835(iVar1, 1);
					break;
				case 1:
					if (func_449(42))
					{
						_0xeeed8fafec331a70(&(iLocal_63[iVar1]), Global_36, 1);
						_task_smart_flee_style_ped(&(iLocal_63[iVar1]), Global_35, 3, 0, -1082130432, -1, 0);
						func_1835(iVar1, 3);
					}
					else if (func_1836(iVar1))
					{
						_0xeeed8fafec331a70(&(iLocal_63[iVar1]), Global_36, 1);
						_task_smart_flee_style_ped(&(iLocal_63[iVar1]), Global_35, 0, 0, -1082130432, -1, 0);
						func_1835(iVar1, 2);
					}
					break;
				case 2:
					if (func_449(42))
					{
						_0xeeed8fafec331a70(&(iLocal_63[iVar1]), Global_36, 1);
						_task_smart_flee_style_ped(&(iLocal_63[iVar1]), Global_35, 3, 0, -1082130432, -1, 0);
						func_1835(iVar1, 3);
					}
					else if (func_1836(iVar1) || func_890(Global_35, &(iLocal_63[iVar1]), 1, 1) < 8f)
					{
						func_213(vLocal_1741[iVar0]);
					}
					else if (func_1837(vLocal_1741[iVar0]) > 5000)
					{
						func_1835(iVar1, 0);
					}
					break;
				case 3:
					break;
			}
		}
		iVar0++;
	}
}

bool func_1288()
{
	return ((((iVar1805 == 6 || iVar1805 == 7) || iVar1805 == 8) || iVar1805 == 9) || iVar1805 == 10);
}

bool func_1289()
{
	return func_1821(32);
}

int func_1290(int iParam0, vector3 vParam1, var uParam4, float fParam5, bool bParam6, bool bParam7, bool bParam8, float fParam9, bool bParam10, int iParam11, bool bParam12, bool bParam13, bool bParam14)
{
	func_1838(iParam0, vParam1, 0, fParam5, bParam6, bParam7, bParam8, bParam12, bParam13, bParam14, 0);
	iVar1 = get_mount(iParam0);
	if (is_ped_in_any_vehicle(iParam0, false))
	{
		iVar2 = get_vehicle_ped_is_in(iParam0, false);
	}
	bVar4 = func_1329(iParam0, vParam1, 1);
	if (!func_26(uParam4))
	{
		if (bVar4 <= bParam8)
		{
			if (does_entity_exist(iVar1) || does_entity_exist(iVar2))
			{
				func_27(uParam4, 0);
			}
		}
	}
	else if (bParam10 && bVar4 > bParam8)
	{
		func_551(uParam4);
	}
	if (func_26(uParam4))
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
		if (func_900(uParam4) >= fParam9)
		{
			if (iParam0 == Global_35)
			{
				set_player_may_not_enter_any_vehicle(player_id());
				_0x9f9a829c6751f3c7(player_id(), 28, 1);
			}
			if (!is_entity_dead(iVar1) && !func_1839(iParam0, 501393341))
			{
				if (is_ped_on_mount(iParam0))
				{
					task_dismount_animal(iParam0, 0, 0, 0, 0, 0);
					return 1;
				}
			}
			if (!is_entity_dead(iVar2) && !func_1839(iParam0, -828834893))
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

bool func_1291()
{
	fVar0 = func_1329(Global_35, func_1328(1, 1), 1);
	if (fVar0 < 12f)
	{
		return true;
	}
	if (fVar0 < 17.5f && func_1840(Global_35, func_1328(1, 1), 1056964608))
	{
		return true;
	}
	return false;
}

bool func_1292()
{
	return iVar1860 == 6;
}

void func_1293(char[4] cParam0)
{
	if (_does_anim_scene_exist(&(iLocal_141[0])))
	{
		_delete_anim_scene(&(iLocal_141[0]));
	}
	if (iVar1804 != 10)
	{
		if (func_163(14, 1))
		{
			task_wander_standard(&(iLocal_63[14]), 36.3042f, 0);
		}
		if (func_163(15, 1))
		{
			task_wander_standard(&(iLocal_63[15]), 36.3042f, 0);
		}
		iLocal_1807 = 10;
	}
	func_443(cParam0, 14, 0);
	func_443(cParam0, 15, 0);
}

void func_1294(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	if (does_entity_exist(iParam0) && !is_entity_dead(iParam0))
	{
		if (is_entity_a_ped(iParam0))
		{
			iVar0 = get_ped_index_from_entity_index(iParam0);
			set_ped_config_flag(iVar0, 130, bParam1);
			set_ped_config_flag(iVar0, 315, bParam1);
			set_ped_config_flag(iVar0, 297, bParam3);
			set_ped_config_flag(iVar0, 317, false);
			set_ped_config_flag(iVar0, 359, false);
		}
		else if (is_entity_an_object(iParam0))
		{
			iVar1 = get_object_index_from_entity_index(iParam0);
			_0xa22712e8471aa08e(iVar1, 0, 0);
		}
		if (iParam2 == 1)
		{
			_0xe98d55c5983f2509(iParam0);
		}
	}
}

void func_1295(int iParam0)
{
	if (iVar1802 != iParam0)
	{
		iLocal_1805 = iParam0;
	}
}

void func_1296(int iParam0)
{
	if (iParam0 > -1 && iParam0 < 26)
	{
		Global_1572864->f_10 = func_1841(iParam0);
	}
	else
	{
		Global_1572864->f_10 = -1;
	}
}

void func_1297(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 12f;
	uParam0->f_2 = 1f;
	uParam0->f_3 = 1;
	uParam0->f_4 = { 0f, 0f, 0f };
}

void func_1298(var uParam0)
{
	if (!_does_volume_exist(*uParam0))
	{
		return;
	}
	iVar0 = create_itemset(true);
	iVar1 = func_1842(*uParam0, &iVar0);
	if (iVar1 == -1)
	{
		destroy_itemset(iVar0);
		return;
	}
	iVar2 = 0;
	while (iVar2 < iVar1)
	{
		iVar3 = func_1843(iVar2, iVar0);
		if (!func_434(iVar3, 0))
		{
		}
		else if (does_entity_exist(_0xe4770da1b8ff4fd1(iVar3)))
		{
		}
		else if (!uParam0->f_3 && func_1811(iVar3, 242628503))
		{
		}
		else
		{
			vVar4 = { 0f, 0f, 0f };
			vVar7 = { get_entity_coords(iVar3, true, false) };
			if (!func_390(uParam0->f_4))
			{
				vVar4 = { vVar7 + uParam0->f_4 * Vector(uParam0->f_1, uParam0->f_1, uParam0->f_1) };
			}
			else
			{
				vVar10 = { get_offset_from_entity_in_world_coords(Global_35, 1f, 0f, 0f) - Global_36 };
				vVar13 = { vVar7 - Global_36 };
				vVar10.f_2 = 0f;
				vVar13.f_2 = 0f;
				vVar10 = { vVar10 / FtoV(vmag(vVar10)) };
				vVar13 = { vVar13 / FtoV(vmag(vVar13)) };
				fVar16 = func_1844(vVar10, vVar13);
				fVar16 = (fVar16 / absf(fVar16));
				vVar4 = { vVar7 + Vector(fVar16, fVar16, fVar16) * vVar10 * Vector(uParam0->f_1, uParam0->f_1, uParam0->f_1) };
			}
			bVar17 = _0x268b3aebf032a88d(iVar3);
			clear_sequence_task(&uLocal_1809);
			open_sequence_task(&uLocal_1809);
			task_set_blocking_of_non_temporary_events(0, true);
			task_follow_nav_mesh_to_coord(0, vVar4, uParam0->f_2, -1, 0.25f, 0, 40000f);
			task_set_blocking_of_non_temporary_events(0, bVar17);
			close_sequence_task(iVar1806);
			task_perform_sequence(iVar3, iVar1806);
		}
		iVar2++;
	}
	destroy_itemset(iVar0);
}

void func_1299(char[4] cParam0)
{
	switch (func_1794(cParam0))
	{
		case 0:
			if (func_163(17, 1))
			{
				func_1345(cParam0, "REV1_PROT_REV", -1082130432, 0, 0, -1, -1, 0);
				if (!does_blip_exist(iLocal_146))
				{
					iLocal_146 = _blip_add_for_entity(831283580, &(iLocal_63[17]));
				}
				func_551(&uLocal_1738);
				func_135(cParam0, 1);
			}
			break;
		case 1:
			if (!func_1845() && func_1798(cParam0, "REV1_FIG_CONF", 0))
			{
				func_135(cParam0, 2);
			}
			else if (func_1845())
			{
				func_135(cParam0, 4);
			}
			break;
		case 2:
			if (!func_1800() && !func_1845())
			{
				if (func_1798(cParam0, "REV1_FIG_ART", 0))
				{
					func_1795(cParam0, "REV1_PROT_REV", 0, 7500, 0, -1082130432, 0, 0, -1, -1, 0);
					func_135(cParam0, 3);
				}
			}
			else if (func_1845())
			{
				func_135(cParam0, 4);
			}
			break;
		case 3:
			if (!func_1808("REV1_FIG_ART"))
			{
				func_450(31, 1);
				func_135(cParam0, 4);
			}
			break;
		case 4:
			if (!func_26(&uLocal_1738))
			{
				func_213(&uLocal_1738);
				fLocal_1878 = (6f + get_random_float_in_range(0f, 3f));
			}
			else if (func_900(&uLocal_1738) > fVar1875)
			{
				if (func_434(&(iLocal_63[17]), 0) && func_434(&(iLocal_63[0]), 0))
				{
					bVar0 = true;
					if (func_890(Global_35, &(iLocal_63[0]), 1, 1) < 8f && is_entity_on_screen(&(iLocal_63[0])))
					{
						bVar0 = func_1846();
					}
					if (bVar0 && func_1798(cParam0, "REV1_FIG_TAUNT", 0))
					{
						func_551(&uLocal_1738);
					}
					else if (!bVar0 && func_1798(cParam0, "REV1_FIG_WATCH", 0))
					{
						func_551(&uLocal_1738);
					}
				}
			}
			break;
	}
}

void func_1300()
{
	vVar0 = { -373.8923f, -448.0133f, 78.952f };
	fVar3 = 6f;
	switch (iVar1871)
	{
		case 0:
			if (!func_434(&(iLocal_63[17]), 0))
			{
				func_1847(6);
			}
			else
			{
				set_ped_using_action_mode(&(iLocal_63[17]), true, -1, 0);
				task_look_at_entity(&(iLocal_63[17]), Global_35, -1, 0, 51, 0);
				func_1832(17, 1);
				func_1847(1);
			}
			break;
		case 1:
			func_1832(17, 0);
			if (!func_434(&(iLocal_63[17]), 0))
			{
				func_1847(6);
			}
			else if (is_ped_running_ragdoll_task(&(iLocal_63[17])))
			{
				func_1847(2);
			}
			else if ((func_449(31) || has_entity_been_damaged_by_any_ped(&(iLocal_63[17]))) || _0x29fce825613fefca(&(iLocal_63[17]), 1000))
			{
				func_1847(3);
			}
			break;
		case 2:
			if (!func_434(&(iLocal_63[17]), 0))
			{
				func_1847(6);
			}
			else if (!is_ped_running_ragdoll_task(&(iLocal_63[17])) && !is_ped_getting_up(&(iLocal_63[17])))
			{
				func_1847(3);
			}
			break;
		case 3:
			if (!func_434(&(iLocal_63[17]), 0))
			{
				func_1847(6);
			}
			else
			{
				task_put_ped_directly_into_melee(&(iLocal_63[17]), Global_35, 0, 0, 0, 1, 0);
				set_ped_sphere_defensive_area(&(iLocal_63[17]), vVar0, fVar3, 0, 0, 0);
				_0x57f35552e771be9d(&(iLocal_63[17]), 12);
				set_ped_combat_attributes(&(iLocal_63[17]), 46, true);
				set_ped_combat_attributes(&(iLocal_63[17]), 96, false);
				func_1306(1);
				func_1847(4);
			}
			break;
		case 4:
			if (!func_434(&(iLocal_63[17]), 0))
			{
				func_1847(6);
				return;
			}
			if (func_1329(Global_35, vVar0, 1) > fVar3 && func_890(&(iLocal_63[17]), Global_35, 1, 1) > 3f)
			{
				if (!func_26(&uLocal_1874))
				{
					func_213(&uLocal_1874);
				}
				else if (func_900(&uLocal_1874) > 5f || iVar1832 == 2)
				{
					remove_ped_defensive_area(&(iLocal_63[17]), false);
					_0x7c10221ce718aa72(&(iLocal_63[17]), 12);
					task_combat_ped(&(iLocal_63[17]), &(iLocal_63[0]), 16777216, 0);
					func_1848(&(iLocal_63[0]), 1);
					func_1847(5);
				}
			}
			else
			{
				func_551(&uLocal_1874);
				if (_0xec6b59be445fec51(&(iLocal_63[17])) == 1158994785)
				{
					if (func_1849(&(iLocal_63[17])) <= 0.3f)
					{
						_0x9d8dfe2de9cb4dfc(&(iLocal_63[17]));
					}
				}
			}
			break;
		case 5:
			if (!func_434(&(iLocal_63[17]), 0))
			{
				func_1847(6);
			}
			break;
		case 6:
			break;
	}
}

void func_1301()
{
	switch (iVar1875)
	{
		case 0:
			func_1850(&(iLocal_63[0]), cLocal_58, 0);
			func_1851(1);
			break;
		case 1:
			if (is_waypoint_playback_going_on_for_ped(&(iLocal_63[0]), cLocal_58) && get_ped_waypoint_progress(&(iLocal_63[0])) >= 12)
			{
				clear_ped_tasks(&(iLocal_63[0]), 1, 0);
				task_look_at_entity(&(iLocal_63[0]), Global_35, -1, 0, 51, 0);
				func_1851(2);
			}
			break;
		case 2:
			func_1832(0, 0);
			if (iVar1871 == 5 && func_890(&(iLocal_63[0]), &(iLocal_63[17]), 1, 1) < 6f)
			{
				_0x58f7db5bd8fa2288(&(iLocal_63[0]));
				_0x06d26a96ca1bca75(&(iLocal_63[0]), 10, 1f, 0);
				task_react(&(iLocal_63[0]), &(iLocal_63[17]), 0f, 0f, 0f, "default_scared", -1f, 0f, 4);
				func_1851(3);
			}
			break;
		case 3:
			break;
	}
}

bool func_1302(int iParam0, int iParam1)
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

void func_1303()
{
	if (is_bit_set(&Global_1357510, 4))
	{
	}
	else
	{
		set_bit(Global_1357510, 0);
	}
}

bool func_1304()
{
	return iVar1871 >= 4;
}

bool func_1305()
{
	return iVar1808 >= 1;
}

void func_1306(int iParam0)
{
	if (!func_434(Global_35, 0))
	{
		return;
	}
	if ((get_frame_count() % 10) == 0)
	{
		func_1297(&Var0);
		Var0 = &iLocal_108[29];
		Var0.f_1 = 50f;
		Var0.f_2 = 1.75f;
		Var0.f_3 = iParam0;
		Var0.f_4 = { -0.387985f, 0.921666f, 0f };
		func_1298(&Var0);
	}
	func_1501(0);
	disable_control_action(0, -822242784, false);
}

bool func_1307()
{
	return iVar1871 == 6;
}

void func_1308(char[4] cParam0)
{
	func_1852(cParam0);
	switch (iVar1880)
	{
		case 0:
			if (func_434(&(iLocal_63[18]), 0) && _0x9fa00e2fc134a9d0(&(iLocal_63[18])))
			{
				iVar0 = get_blip_from_entity(&(iLocal_63[18]));
				if (does_blip_exist(iVar0))
				{
					if (func_1853(&uLocal_1735, 2000, 1))
					{
						func_715(_create_var_string(2, "REV1_HELWIT0", iVar0), 7500, 0, 0, 0, 1);
						func_1854(1);
					}
				}
			}
			break;
		case 1:
			if (func_1314())
			{
				func_113(1);
				func_1854(5);
			}
			else if (!func_1855())
			{
				func_715("REV1_HELWIT1", 7500, 0, 0, 0, 1);
				func_1854(2);
			}
			break;
		case 2:
			if (func_1314())
			{
				func_113(1);
				func_1854(5);
			}
			else if (!func_1855())
			{
				if (_0xa24c1d341c6e0d53(1, 0, 0) || func_1856(32))
				{
					func_1854(3);
				}
				else
				{
					func_715("REV1_HELWIT2", 7500, 0, 0, 0, 1);
					func_1854(3);
				}
			}
			break;
		case 3:
			if (func_1314())
			{
				func_113(1);
				func_1854(5);
			}
			else if (iVar1795 >= 6)
			{
				func_715("REV1_HELWIT3", 7500, 0, 0, 0, 1);
				func_1854(4);
			}
			break;
		case 4:
			if (func_1314())
			{
				func_113(1);
				func_1854(5);
			}
			else if (iVar1795 == 7)
			{
				func_715("REV1_HELWIT4", 7500, 0, 0, 0, 1);
				func_1854(5);
			}
			break;
		case 5:
			break;
	}
	if (func_434(&(iLocal_63[18]), 0))
	{
		if (func_1857(cParam0, &(iLocal_63[18]), "REV1_CHAS_RWIT", "REV1_WIT_FAIL", 50f, 75f, 0, 0, 0, 422991367, 0))
		{
			func_450(39, 1);
		}
		else
		{
			func_450(39, 0);
		}
	}
	switch (func_1794(cParam0))
	{
		case 0:
			func_1345(cParam0, "REV1_CHAS_WIT", -1082130432, 0, 0, -1, -1, 0);
			func_135(cParam0, 1);
			break;
		case 1:
			if (func_1314())
			{
				func_135(cParam0, 6);
			}
			else if (iVar1892 >= 4)
			{
				func_1795(cParam0, "REV1_CHAS_WIT", 0, 7500, 0, -1082130432, 0, 0, -1, -1, 0);
				func_135(cParam0, 2);
			}
			break;
		case 2:
			if (func_1314())
			{
				func_135(cParam0, 6);
			}
			else if (iVar1795 >= 4 && func_890(Global_35, &(iLocal_63[18]), 1, 1) < 12f)
			{
				func_450(38, 1);
				func_135(cParam0, 3);
			}
			break;
		case 3:
			if (func_1314())
			{
				func_135(cParam0, 6);
			}
			else
			{
				func_1858(0);
				func_1795(cParam0, "REV1_WIT_INTE", 0, -1, 1, -1082130432, 0, 0, -1, -1, 0);
				func_135(cParam0, 4);
			}
			break;
		case 4:
			if (func_1314())
			{
				func_450(38, 0);
				func_135(cParam0, 6);
			}
			else if (iVar1795 >= 6)
			{
				func_450(38, 0);
				func_1795(cParam0, "REV1_WIT_INTI", 0, 7500, 1, -1082130432, 0, 0, -1, -1, 0);
				func_135(cParam0, 6);
			}
			else if (func_1815(player_id(), &(iLocal_63[18])))
			{
				func_1858(1);
				func_1795(cParam0, "REV1_WIT_STOP", 0, -1, 1, -1082130432, 0, 0, -1, -1, 0);
				func_135(cParam0, 5);
			}
			break;
		case 5:
			if (func_1314())
			{
				func_450(38, 0);
				func_135(cParam0, 6);
			}
			else if (!func_1815(player_id(), &(iLocal_63[18])))
			{
				func_135(cParam0, 3);
			}
			else if (iVar1795 >= 6)
			{
				func_450(38, 0);
				func_1795(cParam0, "REV1_WIT_INTI", 0, 7500, 1, -1082130432, 0, 0, -1, -1, 0);
				func_135(cParam0, 6);
			}
			break;
		case 6:
			_0xdd1232b332cbb9e7(3, 1, 0);
			func_135(cParam0, 51);
			break;
		case 51:
			break;
	}
	func_1859(cParam0);
	if (!func_449(35))
	{
		if (((!func_1800() && iVar1892 >= 4) && func_890(Global_35, &(iLocal_63[0]), 0, 0) < 8f) && func_1798(cParam0, "REV1_WIT_RUN", 0))
		{
			func_450(35, 1);
		}
	}
}

void func_1309()
{
	iVar0 = &iLocal_63[18];
	bVar1 = func_434(iVar0, 0);
	bVar2 = (bVar1 && (_0x3bdfcf25b58b0415(iVar0) || _is_ped_lassoed(iVar0)));
	if ((bVar1 && iVar1796 >= 2) && iVar1796 <= 4)
	{
		if (is_waypoint_playback_going_on_for_ped(iVar0, sLocal_56))
		{
			fVar3 = func_890(Global_35, iVar0, 1, 1);
			if (fVar3 < 2.5f)
			{
				fVar4 = 1f;
			}
			else
			{
				fVar4 = (1f - func_1860(((fVar3 - 2.5f) / 20f), 0f, 1f));
			}
			if (get_ped_waypoint_progress(iVar0) <= 8)
			{
				fVar5 = 3f;
			}
			else
			{
				fVar5 = func_1609(1.5f, 3f, fVar4);
			}
			waypoint_playback_override_speed(iVar0, fVar5, 0, -1082130432, 0);
		}
	}
	if (bVar1 && iVar1796 < 7)
	{
		set_ped_reset_flag(iVar0, 177, true);
	}
	switch (iVar1796)
	{
		case 0:
			if (!bVar1)
			{
				func_1861(9);
			}
			else if (func_449(3))
			{
				set_blocking_of_non_temporary_events(iVar0, true);
				set_ped_relationship_group_hash(iVar0, -401180987);
				set_ped_config_flag(iVar0, 213, true);
				set_ped_config_flag(iVar0, 178, true);
				set_ped_config_flag(iVar0, 146, false);
				set_ped_config_flag(iVar0, 130, false);
				set_ped_config_flag(iVar0, 297, true);
				set_ped_config_flag(iVar0, 315, false);
				_request_ped_emotional_preset(iVar0, "TaskIntimidated_OnFoot");
				_0xf7ea250b9a919e03(-163226389, iVar0);
				Var6 = Global_35;
				Var6.f_1 = 0;
				Var6.f_3 = { get_entity_coords(iVar0, true, false) };
				Var6.f_8 = 1;
				Var6.f_9 = 0;
				Var6.f_10 = 0;
				Var6.f_11 = 1;
				Var6.f_12 = 1;
				Var6.f_13 = 1;
				if (!does_entity_exist(&(iLocal_63[17])))
				{
					Var6.f_2 = 195938434;
				}
				else if (get_ped_cause_of_death(&(iLocal_63[17])) == -1569615261)
				{
					Var6.f_2 = 195938434;
				}
				else
				{
					Var6.f_2 = -493957506;
				}
				_0x018f30d762e62df8(iVar0, &Var6);
				_task_intimidated_2(iVar0, Global_35, 4, 1, 1, 1, 1, 1, 8388672);
				_0xffebe5aa96bc2e4e(iVar0, -1547772340, 1);
				_0xffebe5aa96bc2e4e(iVar0, 1352191066, 1);
				func_213(&uLocal_1732);
				func_1861(1);
			}
			break;
		case 1:
			if (!bVar1)
			{
				func_1861(9);
			}
			else if (bVar2)
			{
				func_1861(5);
			}
			else if (func_1837(&uLocal_1732) > 1000)
			{
				if (get_is_waypoint_recording_loaded(sLocal_56))
				{
					_0xaab050da48b57978(iVar0, "Flee_Human_MajorThreat", Global_35, -1, 4);
					func_1850(iVar0, sLocal_56, 0);
					_0x7d654266025e921b(-632030841);
					func_1861(2);
				}
			}
			break;
		case 2:
			if (!bVar1)
			{
				func_1861(9);
			}
			else if (bVar2)
			{
				func_1861(5);
			}
			else if (get_ped_waypoint_progress(iVar0) >= 40)
			{
				func_1861(3);
			}
			break;
		case 3:
			if (!bVar1)
			{
				func_1861(8);
			}
			else if (bVar2)
			{
				func_1861(5);
			}
			else if (get_ped_waypoint_progress(iVar0) >= 92)
			{
				set_ped_config_flag(iVar0, 460, true);
				_0x0751d461f06e41ce(player_id(), 21, 2, 0);
				func_1861(4);
			}
			break;
		case 4:
			if (!bVar1)
			{
				func_1861(8);
			}
			else if (bVar2 || _0x57779b55b83e2bea(iVar0))
			{
				func_1861(5);
			}
			break;
		case 5:
			if (!bVar1)
			{
				func_1861(8);
			}
			else
			{
				if (!get_ped_config_flag(iVar0, 460, true))
				{
					set_ped_config_flag(iVar0, 460, true);
				}
				if (_0x7409669c5ed50144(-632030841))
				{
					_0x50b72a754ee64a71(-632030841);
				}
				_0x06d26a96ca1bca75(iVar0, 1, 1f, Global_35);
				_0x935cf6e42baf7f4d(iVar0);
				func_1861(6);
			}
			break;
		case 6:
			disable_control_action(0, -163964935, false);
			if (!bVar1)
			{
				func_1861(8);
			}
			else if (_0x32417cb860a3bdc4(iVar0, 40))
			{
				func_1861(7);
			}
			break;
		case 7:
			if (!bVar1)
			{
				func_1861(8);
			}
			else if (_0x32417cb860a3bdc4(iVar0, 38) || _0x32417cb860a3bdc4(iVar0, 8))
			{
				if (func_890(Global_35, iVar0, 0, 0) > 10f)
				{
					func_1861(8);
				}
			}
			break;
		case 8:
			break;
		case 9:
			break;
	}
}

void func_1310(char[4] cParam0)
{
	switch (iVar1876)
	{
		case 0:
			if (((func_380(cParam0, 19, -1) && func_380(cParam0, 20, -1)) && func_380(cParam0, 21, -1)) && func_380(cParam0, 22, -1))
			{
				set_blocking_of_non_temporary_events(&(iLocal_63[19]), true);
				set_blocking_of_non_temporary_events(&(iLocal_63[20]), true);
				clear_ped_tasks(&(iLocal_63[19]), 1, 0);
				clear_ped_tasks(&(iLocal_63[20]), 1, 0);
				_set_ped_on_mount(&(iLocal_63[19]), &(iLocal_63[21]), -1, true);
				_set_ped_on_mount(&(iLocal_63[20]), &(iLocal_63[22]), -1, true);
				task_stand_still(&(iLocal_63[21]), -1);
				task_stand_still(&(iLocal_63[22]), -1);
				if (!_0x5102307ce88798eb(&(iLocal_63[19])))
				{
					request_ped_visibility_tracking(&(iLocal_63[19]));
				}
				if (!_0x5102307ce88798eb(&(iLocal_63[20])))
				{
					request_ped_visibility_tracking(&(iLocal_63[20]));
				}
				func_1862(1);
			}
			break;
		case 1:
			if (!func_449(24))
			{
				if (((func_163(19, 1) && _0x5102307ce88798eb(&(iLocal_63[19]))) && is_tracked_ped_visible(&(iLocal_63[19]))) || ((func_163(20, 1) && _0x5102307ce88798eb(&(iLocal_63[20]))) && is_tracked_ped_visible(&(iLocal_63[20]))))
				{
					func_450(24, 1);
				}
			}
			if (!func_163(19, 1) || !func_163(20, 1))
			{
				func_1862(5);
			}
			else if (is_bullet_in_area(get_entity_coords(&(iLocal_63[19]), false, false), 15f, true) || is_bullet_in_area(get_entity_coords(&(iLocal_63[20]), false, false), 15f, true))
			{
				func_1862(3);
			}
			else if (is_entity_in_volume(Global_35, &(iLocal_108[9]), false, 0) || func_449(24))
			{
				_task_move_in_traffic_4(&(iLocal_63[19]), 1f, -493.3787f, -504.2891f, 56.0329f, 0);
				_task_move_in_traffic_4(&(iLocal_63[20]), 1f, -493.3787f, -504.2891f, 56.0329f, 0);
				func_1862(2);
			}
			break;
		case 2:
			if (!func_449(24))
			{
				if (((func_163(19, 1) && _0x5102307ce88798eb(&(iLocal_63[19]))) && is_tracked_ped_visible(&(iLocal_63[19]))) || ((func_163(20, 1) && _0x5102307ce88798eb(&(iLocal_63[20]))) && is_tracked_ped_visible(&(iLocal_63[20]))))
				{
					func_450(24, 1);
				}
			}
			if (!func_163(19, 1) || !func_163(20, 1))
			{
				func_1862(5);
			}
			else if (is_bullet_in_area(get_entity_coords(&(iLocal_63[19]), false, false), 15f, true) || is_bullet_in_area(get_entity_coords(&(iLocal_63[20]), false, false), 15f, true))
			{
				func_1862(3);
			}
			else if (func_449(24))
			{
				if ((func_890(&(iLocal_63[19]), &(iLocal_63[18]), 0, 0) < 50f || func_890(&(iLocal_63[20]), &(iLocal_63[18]), 0, 0) < 50f) || func_1314())
				{
					func_1862(3);
				}
			}
			else if (func_890(&(iLocal_63[19]), &(iLocal_63[18]), 0, 0) < 25f || func_890(&(iLocal_63[20]), &(iLocal_63[18]), 0, 0) < 25f)
			{
				func_1862(3);
			}
			break;
		case 3:
			if (func_163(19, 1))
			{
				task_arrest_ped(&(iLocal_63[19]), Global_35);
			}
			if (func_163(20, 1))
			{
				task_arrest_ped(&(iLocal_63[20]), Global_35);
			}
			func_213(&uLocal_1880);
			func_1862(4);
			break;
		case 4:
			if (!func_163(19, 1) || !func_163(20, 1))
			{
				func_1862(5);
			}
			else if ((func_890(&(iLocal_63[19]), &(iLocal_63[18]), 0, 0) < 10f || func_890(&(iLocal_63[20]), &(iLocal_63[18]), 0, 0) < 10f) || func_900(&uLocal_1880) > 7f)
			{
				func_1862(5);
			}
			break;
		case 5:
			break;
	}
	if (func_449(24))
	{
		if (_0x5102307ce88798eb(&(iLocal_63[19])))
		{
			_0x3088634cf8c819cf(&(iLocal_63[19]));
		}
		if (_0x5102307ce88798eb(&(iLocal_63[20])))
		{
			_0x3088634cf8c819cf(&(iLocal_63[20]));
		}
	}
}

bool func_1311()
{
	if (!func_434(Global_35, 0))
	{
		return false;
	}
	switch (iVar1882)
	{
		case 0:
			if (is_ped_jumping(Global_35) || is_ped_falling(Global_35))
			{
				return false;
			}
			if (is_entity_in_volume(Global_35, &(iLocal_108[26]), false, 0) && !_0xa24c1d341c6e0d53(1, 0, 0))
			{
				func_213(&uLocal_1885);
				func_1863(1);
			}
			else
			{
				func_1863(2);
			}
			break;
		case 2:
			func_213(&uLocal_1885);
			func_1863(3);
			break;
		case 3:
			if (func_1837(&uLocal_1885) > 1000)
			{
				func_213(&uLocal_1885);
				func_1863(4);
			}
			break;
		case 4:
			_0xe296208c273bd7f0(-1, -1, 0, 17, 1, 0);
			_0xc9caeaeec1256e54(-1679307491);
			disable_control_action(0, -1879280170, false);
			disable_control_action(0, -640622144, false);
			if (_0xa2b1c7ef759a63ce() == 1f)
			{
				if (is_gameplay_hint_active())
				{
					stop_gameplay_hint(false);
				}
				iVar0 = create_camera_with_params(26379945, -371.2928f, -437.4298f, 82.0559f, -9.9338f, 0f, 134.9962f, 38.4355f, false, 2);
				iLocal_1888 = create_camera_with_params(26379945, -372.243f, -438.3799f, 81.8206f, -9.9338f, 0f, 134.9962f, 38.4355f, false, 2);
				set_cam_active_with_interp(iVar1886, iVar0, 5000, 1, 1);
				render_script_cams(true, false, 3000, true, false, 0);
				func_213(&uLocal_1885);
				func_1863(5);
			}
			break;
		case 5:
			_0xe296208c273bd7f0(-1, -1, 0, 17, 1, 0);
			if (is_player_control_on(player_id()))
			{
				set_player_control(player_id(), false, 0, false);
			}
			_0xc9caeaeec1256e54(-1679307491);
			disable_control_action(0, -1879280170, false);
			disable_control_action(0, -640622144, false);
			if (!is_cam_interpolating(iVar1886))
			{
				render_script_cams(false, false, 3000, true, false, 0);
				destroy_cam(iVar1886, false);
				set_player_control(player_id(), true, 0, false);
				func_1863(6);
			}
			break;
		case 1:
			Var1.f_5 = 1065353216;
			Var1.f_6 = 1119092736;
			Var1.f_7 = 1092616192;
			Var1.f_8 = 1085276160;
			func_1864(&(Var1.f_3), 1);
			func_1865(&(Var1.f_3), 1);
			func_1866(&(Var1.f_3), 0);
			func_1867(&(Var1.f_3), 1);
			func_1868(&(iLocal_63[18]), &Var1, 0f, 0f, 0f, 0, 1106247680, 50f, 2000, 2000, 1000, 1075838976, 1, 1, 1084227584);
			disable_control_action(0, -128997553, false);
			disable_control_action(0, -124244224, false);
			disable_control_action(0, 130948705, false);
			if (func_1837(&uLocal_1885) > 6000)
			{
				if (is_gameplay_hint_active())
				{
					stop_gameplay_hint(false);
				}
				func_1863(6);
			}
			break;
		case 6:
			break;
	}
	return iVar1882 == 6;
}

bool func_1312()
{
	if (iVar1882 == 1)
	{
		return func_1837(&uLocal_1885) > 1000;
	}
	else if (iVar1882 == 5)
	{
		return true;
	}
	return false;
}

void func_1313()
{
	func_450(3, 1);
}

bool func_1314()
{
	return iVar1796 >= 8;
}

bool func_1315()
{
	return iVar1877 >= 3;
}

void func_1316(char[4] cParam0)
{
	if (!func_449(24))
	{
		if (_0x5102307ce88798eb(&(iLocal_63[19])))
		{
			_0x3088634cf8c819cf(&(iLocal_63[19]));
		}
		if (_0x5102307ce88798eb(&(iLocal_63[20])))
		{
			_0x3088634cf8c819cf(&(iLocal_63[20]));
		}
		func_443(cParam0, 19, 1);
		func_443(cParam0, 20, 1);
		func_443(cParam0, 21, 1);
		func_443(cParam0, 22, 1);
	}
}

void func_1317(char[4] cParam0)
{
	switch (func_1794(cParam0))
	{
		case 0:
			if ((func_449(18) && func_1798(cParam0, "REV1_WARNING", 0)) || func_449(6))
			{
				func_450(7, 1);
				func_551(&uLocal_1738);
				func_135(cParam0, 1);
			}
			break;
		case 1:
			if (func_1869())
			{
				if (!func_26(&uLocal_1738))
				{
					func_213(&uLocal_1738);
				}
				else if (func_900(&uLocal_1738) > 1.5f)
				{
					func_1795(cParam0, "REV1_REV_RET", 0, 7500, 0, -1082130432, 0, 0, -1, -1, 0);
					if (func_449(14))
					{
						iLocal_145 = func_1799(408396114, -493.1064f, -442.2497f, 79.0944f, 1);
					}
					else
					{
						func_1333(cParam0);
					}
					func_135(cParam0, 2);
				}
			}
			break;
		case 2:
			if (func_449(14))
			{
				if (Global_36.f_2 > 81.8f || func_1329(Global_35, -432.0836f, -425.2382f, 84.305f, 1) < 15f)
				{
					func_1333(cParam0);
					func_450(14, 0);
				}
			}
			if (func_1870())
			{
				iLocal_1805 = 5;
			}
			if (func_1267(cParam0) >= 3)
			{
				func_135(cParam0, 3);
			}
			break;
		case 3:
			if (func_1267(cParam0) >= 4)
			{
				func_448(&iLocal_145);
				func_135(cParam0, 51);
			}
			break;
		case 51:
			break;
	}
	func_1871(cParam0);
}

void func_1318(char[4] cParam0)
{
	if (!func_163(16, 1) && iVar1903 > 0)
	{
		func_1872(15);
		return;
	}
	iVar0 = 0;
	if (iVar1903 > 0)
	{
		iVar0 = func_1873();
	}
	switch (iVar1903)
	{
		case 0:
			if (func_380(cParam0, 16, -1))
			{
				func_1775(&(Local_239[16]->f_2));
				_task_start_scenario_in_place(&(iLocal_63[16]), -22664287, 0, false, 0, -1f, false);
				func_1872(1);
			}
			break;
		case 1:
			if (iVar0 == 1)
			{
				func_1874();
				func_1872(9);
			}
			else if (iVar0 == 2)
			{
				func_1874();
				func_1872(7);
			}
			else if (iVar0 == 3)
			{
				func_1874();
				func_1872(11);
			}
			else if (iVar0 == 4)
			{
				func_1874();
				func_1872(13);
			}
			else
			{
				iVar1 = func_1875();
				if (iVar1 == 0)
				{
					func_1872(2);
				}
				else if (iVar1 == 1)
				{
					func_1872(4);
				}
			}
			break;
		case 2:
			if (func_1798(cParam0, "REV1_STRE_INQ", 0))
			{
				func_1872(3);
			}
			break;
		case 3:
			if (iVar0 == 1)
			{
				func_1872(9);
			}
			else if (iVar0 == 2)
			{
				func_1872(7);
			}
			else if (iVar0 == 3)
			{
				func_1872(11);
			}
			else if (iVar0 == 4)
			{
				func_1872(13);
			}
			else if (!func_1808("REV1_STRE_INQ"))
			{
				func_1872(6);
			}
			break;
		case 4:
			if (func_1798(cParam0, "REV1_STRE_DEM", 0))
			{
				func_1872(5);
			}
			break;
		case 5:
			if (iVar0 == 1)
			{
				func_1872(9);
			}
			else if (iVar0 == 2)
			{
				func_1872(7);
			}
			else if (iVar0 == 3)
			{
				func_1872(11);
			}
			else if (iVar0 == 4)
			{
				func_1872(13);
			}
			else if (!func_1808("REV1_STRE_DEM"))
			{
				func_1872(6);
			}
			break;
		case 6:
			if (iVar0 == 1)
			{
				func_1872(9);
			}
			else if (iVar0 == 2)
			{
				func_1872(7);
			}
			else if (iVar0 == 3)
			{
				func_1872(11);
			}
			else if (iVar0 == 4)
			{
				func_1872(13);
			}
			break;
		case 7:
			if (func_1798(cParam0, "REV1_STRE_AWAY", 0))
			{
				_0xec6935ebe0847b90(&(iLocal_63[16]), Global_36);
				clear_ped_tasks(&(iLocal_63[16]), 1, 0);
				_task_smart_flee_style_ped(&(iLocal_63[16]), Global_35, 2, 0, -1082130432, -1, 0);
				func_1872(8);
			}
			break;
		case 8:
			if (iVar0 == 1)
			{
				func_1872(9);
			}
			break;
		case 9:
			if (func_1798(cParam0, "REV1_STRE_AGGRO", 0))
			{
				_0xeeed8fafec331a70(&(iLocal_63[16]), Global_36, 1);
				clear_ped_tasks(&(iLocal_63[16]), 1, 0);
				_task_smart_flee_style_ped(&(iLocal_63[16]), Global_35, 3, 0, -1082130432, -1, 0);
				func_1872(10);
			}
			break;
		case 10:
			break;
		case 11:
			if (func_1798(cParam0, "REV1_STRE_WEAP", 0))
			{
				task_hands_up(&(iLocal_63[16]), -1, Global_35, -1, false);
				func_213(&uLocal_1964);
				func_1872(12);
			}
			break;
		case 12:
			if (iVar0 == 1)
			{
				func_1872(9);
			}
			else if (func_900(&uLocal_1964) > 8f)
			{
				func_1872(7);
			}
			break;
		case 13:
			if (func_1798(cParam0, "REV1_STRE_HANG", 0))
			{
				func_213(&uLocal_1964);
				func_1872(14);
			}
			break;
		case 14:
			if (iVar0 == 1)
			{
				func_1872(9);
			}
			else if (iVar0 == 2 || func_900(&uLocal_1964) > 15f)
			{
				func_1872(7);
			}
			else if (iVar0 == 3)
			{
				func_1872(11);
			}
			break;
		case 15:
			break;
	}
}

void func_1319()
{
	switch (iVar1898)
	{
		case 0:
			_set_entity_coords_and_heading(&(iLocal_63[0]), -562.29f, -464.8f, 80.45f, 119.57f, true, false, true);
			clear_sequence_task(&uLocal_1809);
			open_sequence_task(&uLocal_1809);
			task_follow_nav_mesh_to_coord(0, -600.8992f, -484.4899f, 78.2016f, 1f, -1, 0.25f, 0, 40000f);
			task_go_straight_to_coord(0, -614.8445f, -489.0833f, 77.9549f, 1f, 20000, 40000f, 1056964608, 1);
			close_sequence_task(iVar1807);
			task_perform_sequence(&(iLocal_63[0]), iVar1807);
			func_1876(1);
			break;
		case 1:
			if (func_1877())
			{
				_set_entity_coords_and_heading(&(iLocal_63[0]), -565.3014f, -463.9455f, 79.3942f, 115.9044f, true, false, true);
				task_go_straight_to_coord(&(iLocal_63[0]), -614.8445f, -489.0833f, 77.9549f, 1f, 20000, 40000f, 1056964608, 1);
				func_1876(2);
			}
			else if (func_1869())
			{
				func_1876(3);
			}
			break;
		case 2:
			if (func_1869())
			{
				func_1876(3);
			}
			break;
		case 3:
			if (Global_36.f_2 > 79f)
			{
				if (func_1878())
				{
					func_1876(4);
				}
			}
			break;
		case 4:
			break;
	}
}

void func_1320()
{
	switch (iVar1968)
	{
		case 0:
			if (is_entity_in_volume(Global_35, &(iLocal_108[27]), false, 0))
			{
				func_1879(1);
			}
			break;
		case 1:
			if (func_1880(iLocal_21))
			{
				func_1881(25f);
				func_1879(2);
			}
			break;
		case 2:
			if (is_entity_touching_entity(&(iLocal_91[0]), &(iLocal_63[0])))
			{
				func_1812(&(iLocal_63[0]), 0, 0);
				func_1879(3);
			}
			break;
		case 3:
			break;
	}
}

void func_1321()
{
	if (!func_434(Global_35, 0))
	{
		return;
	}
	if (is_entity_in_volume(Global_35, &(iLocal_108[28]), false, 0))
	{
		set_ped_reset_flag(Global_35, 204, true);
	}
}

void func_1322(char[4] cParam0)
{
	if (!func_449(13))
	{
		if (func_1302(&(iLocal_63[18]), Global_35))
		{
			func_307(0, 1142025875, 0, 0, 0, 0, 1065353216, 0);
			func_450(13, 1);
		}
	}
	if (!func_449(36))
	{
		if ((func_163(18, 1) && (is_bullet_in_area(get_entity_coords(&(iLocal_63[18]), false, false), 8f, true) || _0x3bdfcf25b58b0415(&(iLocal_63[18])))) && func_1798(cParam0, "REV1_WIT_AGGRO", 0))
		{
			func_450(36, 1);
		}
	}
}

bool func_1323(char[4] cParam0)
{
	if (!func_434(Global_35, 0))
	{
		return false;
	}
	switch (iVar1898)
	{
		case 0:
			if (is_ped_jumping(Global_35) || is_ped_falling(Global_35))
			{
				return false;
			}
			if (func_1882())
			{
				func_1883(1);
			}
			else
			{
				func_213(&uLocal_1902);
				func_1883(6);
			}
			break;
		case 1:
			func_213(&uLocal_1902);
			func_450(6, 1);
			_0x513f8aa5bf2f17cf(-638.449f, -501.0207f, 76.9538f, 60f, 0);
			func_1883(2);
			break;
		case 2:
			if (func_1837(&uLocal_1902) > 1500)
			{
				_0xdd1232b332cbb9e7(1, 1, 0);
				func_213(&uLocal_1902);
				func_1883(3);
			}
			break;
		case 3:
			_0xe296208c273bd7f0(-1, -1, 0, 17, 1, 0);
			_0xc9caeaeec1256e54(-1679307491);
			disable_control_action(0, -1879280170, false);
			disable_control_action(0, -640622144, false);
			if (func_1837(&uLocal_1902) > 1000 && func_1798(cParam0, "REV1_WH_PR", 0))
			{
				func_213(&uLocal_1902);
				func_1883(4);
			}
			break;
		case 4:
			_0xe296208c273bd7f0(-1, -1, 0, 17, 1, 0);
			_0xc9caeaeec1256e54(-1679307491);
			disable_control_action(0, -1879280170, false);
			disable_control_action(0, -640622144, false);
			if (func_1837(&uLocal_1902) > 3700)
			{
				if (is_gameplay_hint_active())
				{
					stop_gameplay_hint(false);
				}
				iVar0 = create_camera_with_params(26379945, -570.9139f, -479.8705f, 84.2773f, -12.8625f, 0f, 91.7876f, 37.7847f, false, 2);
				iLocal_1905 = create_camera_with_params(26379945, -562.7198f, -471.6862f, 82.0656f, -10.1959f, 0f, 92.2589f, 37.7847f, false, 2);
				set_cam_active_with_interp(iVar1902, iVar0, 9000, 1, 1);
				render_script_cams(true, false, 3000, true, false, 0);
				func_1884(cParam0);
				func_1883(5);
			}
			break;
		case 5:
			_0xe296208c273bd7f0(-1, -1, 0, 17, 1, 0);
			if (is_player_control_on(player_id()))
			{
				set_player_control(player_id(), false, 0, false);
			}
			_0xc9caeaeec1256e54(-1679307491);
			disable_control_action(0, -1879280170, false);
			disable_control_action(0, -640622144, false);
			if (!is_cam_interpolating(iVar1902))
			{
				render_script_cams(false, false, 3000, true, false, 0);
				destroy_cam(iVar1902, false);
				set_player_control(player_id(), true, 0, false);
				_0x5a8b01199c3e79c3();
				func_1885();
				func_1883(7);
			}
			break;
		case 6:
			Var1.f_5 = 1065353216;
			Var1.f_6 = 1119092736;
			Var1.f_7 = 1092616192;
			Var1.f_8 = 1085276160;
			func_1864(&(Var1.f_3), 1);
			func_1865(&(Var1.f_3), 1);
			func_1866(&(Var1.f_3), 0);
			func_1867(&(Var1.f_3), 1);
			func_1868(&(iLocal_63[0]), &Var1, 0f, 0f, 0f, 0, 10f, 1000f, -1, 5000, 1000, 1075838976, 1, 1, 1084227584);
			disable_control_action(0, -128997553, false);
			disable_control_action(0, -124244224, false);
			disable_control_action(0, 130948705, false);
			if (!func_449(7) && func_1882())
			{
				func_1883(1);
			}
			else if (func_1837(&uLocal_1902) > 9000)
			{
				if (is_gameplay_hint_active())
				{
					stop_gameplay_hint(false);
				}
				func_1885();
				func_1883(7);
			}
			break;
		case 7:
			break;
	}
	if (iVar1898 == 6)
	{
		if (!func_449(18) && func_1837(&uLocal_1902) > 3500)
		{
			set_ped_can_use_auto_conversation_lookat(Global_35, true);
			func_450(18, 1);
		}
	}
	return iVar1898 == 7;
}

bool func_1324()
{
	return func_1329(Global_35, -567.4676f, -459.6113f, 79.3875f, 1) < 35f;
}

bool func_1325()
{
	return (iVar1803 <= 2 || iVar1803 == 9);
}

bool func_1326()
{
	if (_is_ped_carrying(Global_35))
	{
		disable_control_action(0, 1301263553, false);
		disable_control_action(0, -39308912, false);
		disable_control_action(0, -1879280170, false);
		disable_control_action(0, -640622144, false);
		if (is_ped_stopped(Global_35))
		{
			iVar0 = _get_first_entity_ped_is_carrying(Global_35);
			if (!does_entity_exist(iVar0))
			{
				_0xd1a70c1e8d1031fe(player_id(), 0);
				return true;
			}
			if (!func_1811(Global_35, -208384378))
			{
				task_place_carried_entity_at_coord(Global_35, iVar0, get_offset_from_entity_in_world_coords(Global_35, 0f, 0.5f, 0f), 1f, 0);
			}
		}
	}
	else
	{
		_0xd1a70c1e8d1031fe(player_id(), 0);
		return true;
	}
	return false;
}

bool func_1327()
{
	return iVar1968 == 0;
}

Vector3 func_1328(int iParam0, int iParam1)
{
	return func_1586(iParam0, iParam1);
}

float func_1329(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!does_entity_exist(iParam0))
	{
		return 0f;
	}
	return get_distance_between_coords(get_entity_coords(iParam0, false, false), vParam1, bParam4);
}

void func_1330(int iParam0, struct<4> Param1, float fParam5, int iParam6, float fParam7, int iParam8)
{
	if (!is_entity_dead(iParam0) || iParam0 == 0)
	{
		task_follow_nav_mesh_to_coord(iParam0, Param1, fParam5, iParam6, fParam7, iParam8, Param1.f_3);
	}
}

void func_1331(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 4)
	{
		StringCopy(uParam0->f_822[iVar0], "", 64);
		iVar0++;
	}
}

void func_1332()
{
	if (!bLocal_147)
	{
		if (!is_entity_dead(&(iLocal_63[0])))
		{
			func_1886(&(iLocal_63[0]), 0, 1);
			bLocal_147 = true;
		}
	}
}

void func_1333(char[4] cParam0)
{
	func_448(&iLocal_145);
	if (!does_blip_exist(iLocal_145))
	{
		func_1887(cParam0, &(iLocal_63[0]), 1105014447, 422991367, 1, 1);
		func_1888(cParam0, &(iLocal_63[0]), 128);
	}
}

void func_1334(char[4] cParam0)
{
	func_1889(&(cParam0->f_7375));
}

void func_1335(char[4] cParam0)
{
	switch (func_1794(cParam0))
	{
		case 0:
			func_1345(cParam0, "REV1_REV_RET", -1082130432, 0, 0, -1, -1, 0);
			func_135(cParam0, 1);
			break;
		case 1:
			if (!func_1808("REV1_REVSHOUT5") && func_1798(cParam0, "REV1_STRUGGLE2", 0))
			{
				func_135(cParam0, 2);
			}
			break;
		case 2:
			if (iVar2006 >= 2 && func_1808("REV1_STRUGGLE2"))
			{
				func_1890("REV1_STRUGGLE2", 1, 0);
			}
			else if ((iVar2006 >= 2 && func_1891(&uLocal_1738, 1f)) && func_1798(cParam0, "REV1_FOOT", 0))
			{
				func_1795(cParam0, "REV1_RESCUE_REV", 0, 7500, 1, -1082130432, 0, 0, -1, -1, 0);
				func_551(&uLocal_1738);
				func_135(cParam0, 3);
			}
			break;
		case 3:
			if ((!func_1808("REV1_FOOT") && iVar2006 >= 3) && func_1798(cParam0, "REV1_STRUGGLE1", 0))
			{
				func_135(cParam0, 4);
			}
			break;
		case 4:
			if (iVar2006 >= 4)
			{
				func_135(cParam0, 5);
			}
			else if (!func_1808("REV1_STRUGGLE1") && func_1798(cParam0, "REV1_STRUGGLE3", 0))
			{
				func_135(cParam0, 5);
			}
			break;
		case 5:
			if (iVar2006 >= 4)
			{
				if (func_1808("REV1_STRUGGLE3"))
				{
					func_1890("REV1_STRUGGLE3", 0, 0);
				}
				_0xdd1232b332cbb9e7(3, 1, 0);
				_uilog_clear_cached_objective();
				func_135(cParam0, 51);
			}
			break;
		case 51:
			break;
	}
}

void func_1336()
{
	switch (iVar1971)
	{
		case 0:
			if (iVar2007 >= 2)
			{
				func_1892(1);
			}
			break;
		case 1:
			if (iVar2007 >= 3)
			{
				func_1892(2);
			}
			break;
		case 2:
			if (iVar1972 == 4)
			{
				func_1892(3);
			}
			break;
		case 3:
			if (iVar1970 >= 6)
			{
				func_1892(4);
			}
			break;
		case 4:
			if (iVar2007 == 7)
			{
				func_1892(5);
			}
			break;
		case 5:
			break;
	}
}

void func_1337()
{
	fVar0 = 0f;
	fVar1 = func_1893();
	fVar2 = 0f;
	switch (iVar1970)
	{
		case 0:
			if (func_1880(iLocal_22))
			{
				_0x1bfbafcc6760ff02(&(iLocal_91[0]), 0);
				func_1881(10f);
				func_1894(1);
			}
			break;
		case 1:
			if (is_entity_in_volume(&(iLocal_91[0]), &(iLocal_108[17]), false, 0))
			{
				func_1881(3f);
				func_1894(2);
			}
			break;
		case 2:
			if (iVar1971 >= 1)
			{
				if (func_449(17))
				{
					fVar2 = 6f;
				}
				else
				{
					fVar2 = 9f;
				}
				fVar0 = func_1895(((fVar1 - 173f) / fVar2), 3f);
				func_1881(fVar0);
				func_1894(3);
			}
			break;
		case 3:
			if (iVar1971 >= 2)
			{
				fVar0 = func_1895((fVar1 / 10f), 3f);
				func_1881(fVar0);
				func_1894(4);
			}
			break;
		case 4:
			if (iVar1971 >= 3)
			{
				fVar0 = func_1895((fVar1 / 4f), 6f);
				func_1881(fVar0);
				func_1894(5);
			}
			break;
		case 5:
			if (func_1896())
			{
				func_1894(6);
			}
			break;
		case 6:
			func_1881(func_1609(get_entity_speed(&(iLocal_91[0])), 30f, get_frame_time()));
			if (func_1893() > 80f)
			{
				func_1894(7);
			}
			break;
		case 7:
			break;
	}
	_0xfd461d0aba5559b1(&(iLocal_91[0]), 10f);
	switch (iVar2008)
	{
		case 0:
			if (fVar1 < 330f)
			{
				_0xcfe122ec635cc2b2(&(iLocal_91[0]), "DANGER", 0, 0);
				func_1897(1);
			}
			break;
		case 1:
			if (fVar1 < 230f)
			{
				_0xcfe122ec635cc2b2(&(iLocal_91[0]), "DANGER", 0, 0);
				func_1897(2);
			}
			break;
		case 2:
			if (fVar1 < 30f)
			{
				_0xcfe122ec635cc2b2(&(iLocal_91[0]), "DANGER", 0, 0);
				func_1897(3);
			}
			break;
		case 3:
			if (_0xe368e8422c860ba7("woosh_1", "rev1_sounds", -2) && func_1896())
			{
				_play_sound_from_position("woosh_1", func_1898(), "rev1_sounds", false, 0, true, 0);
				func_1897(4);
			}
			break;
		case 4:
			if (_0xe368e8422c860ba7("woosh_2", "rev1_sounds", -2) && func_1899())
			{
				_play_sound_from_position("woosh_2", func_1900(), "rev1_sounds", false, 0, true, 0);
				func_1897(5);
			}
			break;
		case 5:
			break;
	}
}

void func_1338()
{
	switch (iVar2007)
	{
		case 0:
			if (func_1878())
			{
				func_1901(1);
			}
			break;
		case 1:
			iVar0 = func_1902();
			if (_0x8d81e7824b7753f7(&(iLocal_141[1]), "s_Rev_loop_01", 1))
			{
				if (iVar0 != 0)
				{
					if (iVar0 == 1)
					{
						task_enter_anim_scene(Global_35, &(iLocal_141[1]), "ARTHUR", "Pbl_Player_Approaches_Reverend_WALK", 1.48f, 1, 3, 20000, -1082130432);
						func_450(17, 1);
					}
					else
					{
						task_enter_anim_scene(Global_35, &(iLocal_141[1]), "ARTHUR", "Pbl_Player_Approaches_Reverend_RUN", 5.05f, 1, 3, 20000, -1082130432);
					}
					set_player_control(player_id(), false, 256, false);
					func_1901(2);
				}
			}
			break;
		case 2:
			_disable_first_person_cam_this_frame();
			if (_0x8d81e7824b7753f7(&(iLocal_141[1]), "s_Player_Struggles_To_Free_Rev", 1))
			{
				func_1901(3);
			}
			break;
		case 3:
			_disable_first_person_cam_this_frame();
			if (iVar1971 >= 3)
			{
				if ((_does_anim_scene_exist(&(iLocal_141[1])) && _is_anim_scene_started(&(iLocal_141[1]), false)) && _0x23e33cb9f4a3f547(&(iLocal_141[1]), "Pbl_Player_Frees_Reverends_Foot"))
				{
					if (func_1811(Global_35, 76834332))
					{
						clear_ped_tasks(Global_35, 1, 0);
					}
					if (func_1811(&(iLocal_63[0]), 76834332))
					{
						clear_ped_tasks(&(iLocal_63[0]), 1, 0);
					}
					set_anim_scene_entity(&(iLocal_141[1]), "ARTHUR", Global_35, 0);
					set_anim_scene_entity(&(iLocal_141[1]), "Reverend", &(iLocal_63[0]), 0);
					_set_anim_scene_playback_list_bool(&(iLocal_141[1]), "Pbl_Player_Frees_Reverends_Foot", true);
					if (func_1264())
					{
						clear_ped_tasks(&(iLocal_63[3]), 1, 0);
						func_1254(&(iLocal_63[3]), func_499(3, 5), 2, 1073741824);
						task_stand_still(&(iLocal_63[3]), -1);
						func_1265(&(iLocal_63[3]), 4, 0, 0, 0, 0);
					}
					func_1901(4);
				}
			}
			break;
		case 4:
			_disable_first_person_cam_this_frame();
			if ((!_does_anim_scene_exist(&(iLocal_141[1])) || !_is_anim_scene_started(&(iLocal_141[1]), false)) || has_anim_event_fired(Global_35, -1805904120))
			{
				func_1903(Global_35, 0);
				func_1903(&(iLocal_63[0]), 0);
				func_1901(5);
			}
			break;
		case 5:
			_disable_first_person_cam_this_frame();
			if ((!_does_anim_scene_exist(&(iLocal_141[1])) || !_is_anim_scene_started(&(iLocal_141[1]), false)) || has_anim_event_fired(Global_35, -837979582))
			{
				set_bit(&(Global_1956580->f_1), 5);
				func_1901(6);
			}
			break;
		case 6:
			_disable_first_person_cam_this_frame();
			_0xe296208c273bd7f0(-1, -1, 0, 17, 1, 0);
			if ((!_does_anim_scene_exist(&(iLocal_141[1])) || !_is_anim_scene_started(&(iLocal_141[1]), false)) || has_anim_event_fired(Global_35, -480656617))
			{
				_delete_anim_scene(&(iLocal_141[1]));
				func_1901(7);
			}
			break;
		case 7:
			break;
	}
	fVar1 = func_890(Global_35, &(iLocal_63[0]), 0, 0);
	if (!func_449(37))
	{
		if (fVar1 < 25f)
		{
			_0x94a3c1b804d291ec(Global_35, 0, 0, 1, 0);
			func_450(37, 1);
		}
	}
	if (func_449(37))
	{
		disable_control_action(0, 130948705, false);
		disable_control_action(0, 42190210, false);
		disable_control_action(0, 1623727326, false);
		disable_control_action(0, -922478227, false);
		disable_control_action(0, -1304887797, false);
		disable_control_action(0, -674562833, false);
		disable_control_action(0, -197984200, false);
		disable_control_action(0, -238861894, false);
		disable_control_action(0, -128997553, false);
		disable_control_action(0, -299367216, false);
		disable_control_action(0, 665666611, false);
		disable_control_action(0, -1110080755, false);
		disable_control_action(0, -200625768, false);
		disable_control_action(0, -1829375970, false);
		disable_control_action(0, 1751579194, false);
		disable_control_action(0, 1735899200, false);
		disable_control_action(0, 1433596806, false);
		disable_control_action(0, -209515122, false);
		if (fVar1 > 27f)
		{
			func_450(37, 0);
		}
	}
}

void func_1339()
{
	switch (iVar1972)
	{
		case 0:
			if ((_0x2c04d89a0fb4e244("script_REV1_TrackRescue") && _0x85b8f04555ab49b8("CLIPSET@MINI_GAMES@STORY@REV1@TRACK_RESCUE@ARTHUR")) && _0x85b8f04555ab49b8("CLIPSET@MINI_GAMES@STORY@REV1@TRACK_RESCUE@REVEREND"))
			{
				func_1904(1);
			}
			break;
		case 1:
			if (iVar1971 == 2)
			{
				_get_anim_scene_origin(&(iLocal_141[1]), &vVar0, &vVar3, 2);
				set_ped_can_leg_ik(Global_35, false);
				set_ped_can_leg_ik(&(iLocal_63[0]), false);
				set_ped_leg_ik_mode(Global_35, 0);
				set_ped_leg_ik_mode(&(iLocal_63[0]), 0);
				Local_1975 = 2079930619;
				Local_1975.f_1 = -455129387;
				Local_1975.f_30 = "Pulling";
				task_move_network_advanced_by_name_with_init_params(&(iLocal_63[0]), "script_REV1_TrackRescue", &Local_1975, vVar0, vVar3, 2, 0, 0, 0, 1152, 0);
				Local_1975 = -323219688;
				Local_1975.f_1 = -455129387;
				Local_1975.f_30 = "Pulling";
				task_move_network_advanced_by_name_with_init_params(Global_35, "script_REV1_TrackRescue", &Local_1975, vVar0, vVar3, 2, 0, 0, 0, 1152, 0);
				func_1904(2);
			}
			break;
		case 2:
			if (func_1811(Global_35, 76834332) && func_1811(&(iLocal_63[0]), 76834332))
			{
				if (are_strings_equal(get_task_move_network_state(Global_35), "Pulling") && are_strings_equal(get_task_move_network_state(&(iLocal_63[0])), "Pulling"))
				{
					_set_anim_scene_playback_list_bool(&(iLocal_141[1]), "pbl_Minigame", true);
					func_1904(3);
				}
				set_task_move_network_signal_float(Global_35, "Energy", fVar1798);
				set_task_move_network_signal_float(&(iLocal_63[0]), "Energy", fVar1798);
			}
			break;
		case 3:
			if (func_1811(Global_35, 76834332) && func_1811(&(iLocal_63[0]), 76834332))
			{
				if (are_strings_equal(get_task_move_network_state(Global_35), "Pulling") && are_strings_equal(get_task_move_network_state(&(iLocal_63[0])), "Pulling"))
				{
					if (!func_1905())
					{
						func_450(20, 1);
					}
					if (func_1906())
					{
						set_ped_can_leg_ik(Global_35, true);
						set_ped_can_leg_ik(&(iLocal_63[0]), true);
						func_1904(4);
					}
					set_task_move_network_signal_float(Global_35, "Energy", fVar1798);
					set_task_move_network_signal_float(&(iLocal_63[0]), "Energy", fVar1798);
				}
			}
			break;
		case 4:
			break;
	}
}

void func_1340()
{
	if (!func_449(16) && iVar1970 == 6)
	{
		if (!is_gameplay_cam_shaking())
		{
			shake_gameplay_cam("MEDIUM_EXPLOSION_SHAKE", 0.1f);
		}
		func_450(16, 1);
	}
	else if (func_449(16) && iVar1970 == 7)
	{
		if (is_gameplay_cam_shaking())
		{
			stop_gameplay_cam_shaking(false);
		}
		func_450(16, 0);
	}
	if (func_449(16))
	{
		vVar0 = { get_entity_coords(&(iLocal_63[0]), true, false) };
		vVar3 = { func_1898() };
		fVar6 = vdist(vVar0, vVar3);
		fVar7 = (1f - func_1700((fVar6 / 80f), 0f, 1f));
		iVar8 = round(func_1609(0f, 5f, fVar7));
		set_pad_shake(0, 100, iVar8);
	}
}

void func_1341()
{
	func_1501(1);
	if (!func_1264())
	{
		return;
	}
	if (iVar1971 < 1)
	{
		return;
	}
	func_1907(&(iLocal_63[3]), func_1328(3, 5));
	func_1907(func_208(1), 0f, 0f, 0f);
}

void func_1342(var uParam0)
{
	set_ped_can_be_targetted(*uParam0, false);
	set_ped_can_ragdoll_from_player_impact(*uParam0, false);
	set_ped_relationship_group_hash(*uParam0, -1538724068);
}

bool func_1343()
{
	if (!_does_anim_scene_exist(&(iLocal_141[2])))
	{
		iLocal_141[2] = _create_anim_scene("script@story@rev1@ig@reverend_knocked_out@reverend_knocked_out", 0, 0, false, true);
	}
	if (!_does_anim_scene_exist(&(iLocal_141[2])))
	{
		return false;
	}
	if (!_is_anim_scene_loading(&(iLocal_141[2]), true) && !_is_anim_scene_loaded(&(iLocal_141[2]), true, false))
	{
		load_anim_scene(&(iLocal_141[2]));
	}
	if (!_is_anim_scene_loaded(&(iLocal_141[2]), true, false))
	{
		return false;
	}
	if (!_is_anim_scene_started(&(iLocal_141[2]), false) && !_is_anim_scene_finished(&(iLocal_141[2]), false))
	{
		set_anim_scene_entity(&(iLocal_141[2]), "reverend", &(iLocal_63[0]), 0);
		start_anim_scene(&(iLocal_141[2]));
	}
	if (!_is_anim_scene_started(&(iLocal_141[2]), false) && !_is_anim_scene_finished(&(iLocal_141[2]), false))
	{
		return false;
	}
	return true;
}

void func_1344()
{
	func_1491(iLocal_148, 1, 0f, 0, 1, 0, 0, 0);
	func_1491(iLocal_149, 1, 0f, 0, 1, 0, 0, 0);
}

void func_1345(char[4] cParam0, char* sParam1, float fParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6, int iParam7)
{
	sVar0 = func_1542(iParam7, sParam1, sParam3, sParam4, sParam5, sParam6);
	if (get_hash_key(sParam1) != cParam0->f_5302)
	{
		_uilog_set_cached_objective(sVar0);
		cParam0->f_5302 = get_hash_key(sParam1);
		_uilog_add_or_update_objective(1, func_85(cParam0), get_hash_key(sParam1), sParam1, fParam2 >= 0.9f, false, false);
	}
	func_140(cParam0, func_33(cParam0), 33554432);
}

void func_1346(int iParam0, int iParam1)
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

void func_1347(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	if (!_does_volume_exist(iParam1))
	{
		return;
	}
	func_1908(uParam0);
	uParam0->f_4 = iParam1;
	func_1909(uParam0, iParam2, iParam3, iParam4, iParam5);
}

void func_1348(char[4] cParam0)
{
	if (func_1910(cParam0, 21, 1117126656, 1125515264, 0, 0, 1, 422991367))
	{
		if (!func_449(12))
		{
			func_1357();
			func_450(12, 1);
		}
	}
	else if (func_449(12))
	{
		if (func_1353())
		{
			func_1911(func_449(4));
		}
		func_450(12, 0);
	}
	switch (func_1794(cParam0))
	{
		case 0:
			func_1333(cParam0);
			func_1795(cParam0, "REV1_PICKUP", 0, 7500, 0, -1082130432, 0, 0, -1, -1, 0);
			func_135(cParam0, 1);
			break;
		case 1:
			if (func_1353())
			{
				func_1358(cParam0);
				func_1911(0);
				_0xdd1232b332cbb9e7(3, 1, 0);
				func_1795(cParam0, "REV1_RETURN", 0, 7500, 0, -1082130432, 0, 0, -1, -1, 0);
				func_135(cParam0, 2);
			}
			break;
		case 2:
			if (!func_1353())
			{
				func_1357();
				func_135(cParam0, 0);
			}
			else if (func_449(4))
			{
				if (is_ped_on_mount(Global_35))
				{
					func_1357();
					iLocal_145 = func_1796(408396114, -108.7049f, -32.6123f, 95.7121f, 3f, 1);
					_0xdd1232b332cbb9e7(3, 1, 0);
					func_1795(cParam0, "REV1_HITCH", 0, 7500, 0, -1082130432, 0, 0, -1, -1, 0);
					func_135(cParam0, 3);
				}
				else if (_0x61914209c36efddb(&(iLocal_63[0])) == 5)
				{
					func_1357();
					func_1911(1);
					_0xdd1232b332cbb9e7(3, 1, 0);
					func_1795(cParam0, "REV1_INBED", 0, 7500, 0, -1082130432, 0, 0, -1, -1, 0);
					func_135(cParam0, 5);
				}
			}
			break;
		case 3:
			if (_0x61914209c36efddb(&(iLocal_63[0])) == 5)
			{
				func_1357();
				func_1911(1);
				_0xdd1232b332cbb9e7(3, 1, 0);
				func_1795(cParam0, "REV1_INBED", 0, 7500, 0, -1082130432, 0, 0, -1, -1, 0);
				func_135(cParam0, 5);
			}
			else if (func_1912(7) || func_890(Global_35, &(iLocal_63[0]), 1, 1) > 6f)
			{
				func_1357();
				func_1887(cParam0, &(iLocal_63[0]), 1105014447, 422991367, 1, 1);
				_0xdd1232b332cbb9e7(3, 1, 0);
				func_1795(cParam0, "REV1_SWHO", 0, 7500, 0, -1082130432, 0, 0, -1, -1, 0);
				func_135(cParam0, 4);
			}
			break;
		case 4:
			if (_0x61914209c36efddb(&(iLocal_63[0])) == 5)
			{
				func_1913(cParam0, &(iLocal_63[0]), 1);
				func_1911(1);
				_0xdd1232b332cbb9e7(3, 1, 0);
				func_1795(cParam0, "REV1_INBED", 0, 7500, 0, -1082130432, 0, 0, -1, -1, 0);
				func_135(cParam0, 5);
			}
			break;
		case 5:
			if (_0x61914209c36efddb(&(iLocal_63[0])) != 5 && !func_1355(&(iLocal_63[0]), func_1328(3, 0), 3f, 1, 1))
			{
				func_1357();
				func_1333(cParam0);
				func_1795(cParam0, "REV1_PICKUP", 0, 7500, 0, -1082130432, 0, 0, -1, -1, 0);
				func_135(cParam0, 4);
			}
			break;
	}
	if (!func_449(4))
	{
		func_1914(cParam0);
	}
}

void func_1349()
{
	switch (iVar2021)
	{
		case 0:
			if (func_1915())
			{
				if (is_entity_in_volume(Global_35, &(iLocal_108[8]), true, 0))
				{
					_start_gps_custom_route_from_waypoint_recording_route(sLocal_57, 0, -1, 76603059, true, true);
					set_gps_custom_route_render(true, -1, -1);
					func_1916(1);
				}
				else
				{
					if (does_blip_exist(iLocal_145))
					{
						_blip_set_modifier(iLocal_145, -1878373110);
					}
					func_1916(2);
				}
			}
			break;
		case 1:
			if (func_1915())
			{
				if (!is_entity_in_volume(Global_35, &(iLocal_108[8]), true, 0))
				{
					clear_gps_custom_route();
					set_gps_custom_route_render(false, -1, -1);
					if (does_blip_exist(iLocal_145))
					{
						_blip_set_modifier(iLocal_145, -1878373110);
					}
					func_1916(2);
				}
			}
			else
			{
				clear_gps_custom_route();
				set_gps_custom_route_render(false, -1, -1);
				func_1916(0);
			}
			break;
		case 2:
			if (func_1915())
			{
				if (is_entity_in_volume(Global_35, &(iLocal_108[8]), true, 0))
				{
					if (does_blip_exist(iLocal_145))
					{
						_set_blip_flash_style(iLocal_145, -1878373110);
					}
					_start_gps_custom_route_from_waypoint_recording_route(sLocal_57, 0, -1, 76603059, true, true);
					set_gps_custom_route_render(true, -1, -1);
					func_1916(1);
				}
			}
			else
			{
				if (does_blip_exist(iLocal_145))
				{
					_set_blip_flash_style(iLocal_145, -1878373110);
				}
				func_1916(0);
			}
			break;
	}
}

void func_1350(char[4] cParam0)
{
	switch (iVar2011)
	{
		case 0:
			if (func_380(cParam0, 23, -1))
			{
				set_blocking_of_non_temporary_events(&(iLocal_63[23]), true);
				_task_start_scenario_in_place(&(iLocal_63[23]), -98992470, 0, false, 0, -1f, false);
				func_1917(1);
			}
			break;
		case 1:
			if (func_449(15))
			{
				if ((is_entity_in_volume(Global_35, &(iLocal_108[12]), true, 0) || is_entity_in_volume(Global_35, &(iLocal_108[13]), true, 0)) || is_entity_in_volume(Global_35, &(iLocal_108[14]), true, 0))
				{
					freeze_entity_position(&(iLocal_63[23]), false);
					task_follow_and_converse_with_ped(&(iLocal_63[23]), Global_35, 0, 0, -1082130432, -1082130432, 8, 0, 0, 1069547520, 1073741824);
					task_look_at_entity(&(iLocal_63[23]), Global_35, -1, 0, 51, 0);
					func_213(&uLocal_2015);
					func_1917(2);
				}
			}
			break;
		case 2:
			if (func_1329(Global_35, -144.8398f, -39.75378f, 94.52103f, 1) < 5f || func_1837(&uLocal_2015) > 20000)
			{
				func_1917(3);
			}
			else if (func_890(&(iLocal_63[23]), Global_35, 1, 1) < 3f)
			{
				if (func_1798(cParam0, "REV1_CAMP_MOLLY", 0))
				{
					func_1917(3);
				}
			}
			break;
		case 3:
			if (!_0xd89504d9d7d5057d("REV1_CAMP_MOLLY") && !_0x1ecc76792f661cf5("REV1_CAMP_MOLLY"))
			{
				func_213(&uLocal_2015);
				func_1917(4);
			}
			break;
		case 4:
			if (func_1837(&uLocal_2015) > 1000)
			{
				func_443(cParam0, 23, 1);
				func_1917(5);
			}
			break;
		case 5:
			break;
	}
}

void func_1351()
{
	switch (iVar2009)
	{
		case 0:
			if (func_1483(5))
			{
				iLocal_2011 = 1;
			}
			break;
		case 1:
			break;
	}
}

bool func_1352()
{
	if (!func_434(Global_35, 0))
	{
		return false;
	}
	vVar0 = { -144.0783f, -39.42823f, 94.55847f };
	if (func_1329(Global_35, vVar0, 0) > 1.5f)
	{
		return false;
	}
	vVar3 = { -145.3299f, -39.54888f, 94.58329f };
	vVar6 = { vVar3 - vVar0 };
	vVar9 = { get_offset_from_entity_in_world_coords(Global_35, 0f, 1f, 0f) - Global_36 };
	vVar6 = { vVar6 / FtoV(vmag(vVar6)) };
	vVar9 = { vVar9 / FtoV(vmag(vVar9)) };
	fVar12 = func_1844(vVar9, vVar6);
	if (fVar12 < 0.6f)
	{
		return false;
	}
	return true;
}

bool func_1353()
{
	if ((((_0x61914209c36efddb(&(iLocal_63[0])) == 5 || _0x61914209c36efddb(&(iLocal_63[0])) == 7) || _0x61914209c36efddb(&(iLocal_63[0])) == 8) || _0x61914209c36efddb(&(iLocal_63[0])) == 6) || _0x61914209c36efddb(&(iLocal_63[0])) == 9)
	{
		if (_0x083d497d57b7400f(&(iLocal_63[0])))
		{
			freeze_entity_position(&(iLocal_63[0]), false);
		}
		return true;
	}
	return false;
}

int func_1354()
{
	if (!func_437(8388608))
	{
		func_1918(8388608);
	}
	if (func_1919())
	{
		return 1;
	}
	if (iVar2011 == 0)
	{
		iVar0 = 0;
		while (iVar0 < 19)
		{
			iVar1 = func_435(iVar0);
			iVar2 = func_950(iVar1);
			if (func_709(iVar2, 4, 1))
			{
				uLocal_2013 = (iVar2011 || iVar1);
			}
			iVar0++;
		}
	}
	iVar0 = 0;
	while (iVar0 < 19)
	{
		iVar3 = func_435(iVar0);
		if (func_1920(iVar3))
		{
			func_1921(iVar3);
		}
		iVar0++;
	}
	if (func_1919())
	{
		return 1;
	}
	return 0;
}

bool func_1355(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6)
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
	else if (func_1593(get_entity_coords(iParam0, bParam5, false), vParam1) <= (fParam4 * fParam4))
	{
		return true;
	}
	return false;
}

bool func_1356()
{
	return _0x61914209c36efddb(&(iLocal_63[0])) == 6;
}

void func_1357()
{
	func_448(&iLocal_145);
}

void func_1358(char[4] cParam0)
{
	func_1913(cParam0, &(iLocal_63[0]), 1);
}

void func_1359(char[4] cParam0, int iParam1, float fParam2)
{
	if ((iParam1 != -1 && fParam2 > 0f) && func_1267(cParam0) != 29)
	{
		func_134(cParam0, -1);
		func_213(&(Local_151.f_1));
		Local_151.f_4 = fParam2;
		Local_151 = iParam1;
	}
	else if (!func_26(&(Local_151.f_1)))
	{
	}
}

void func_1360(var uParam0, int iParam1, int iParam2)
{
	if (func_82(32768))
	{
		return;
	}
	func_1922(&((*Global_1835011)[uParam0->f_607]->f_22), iParam1, iParam2);
}

void func_1361(char[4] cParam0)
{
	switch (func_1794(cParam0))
	{
		case 0:
			func_135(cParam0, 51);
			break;
		case 51:
			break;
	}
}

int func_1362(int iParam0)
{
	if (!func_183(iParam0))
	{
		return 1;
	}
	iVar0 = func_188(iParam0);
	iVar1 = -1;
	iVar2 = 0;
	bVar3 = false;
	iVar4 = 1;
	if (iVar0 == 1)
	{
		iVar5 = func_265(iParam0);
		if (iVar5 == 23)
		{
			iVar4 = 1;
			iVar1 = 134;
			bVar3 = false;
			iVar2 = 0;
			if (func_462(iVar1, iVar2, bVar3, 0, 0))
			{
			}
			else
			{
				iVar4 = 0;
			}
			iVar1 = 37;
			bVar3 = false;
			if (func_465(134, 0) && func_466(1) <= 1)
			{
				iVar2 = 1;
			}
			else
			{
				iVar2 = 0;
			}
			if (func_462(iVar1, iVar2, bVar3, 0, 0))
			{
			}
			else
			{
				iVar4 = 0;
			}
			return iVar4;
		}
		else if (iVar5 == 16)
		{
			iVar4 = 1;
			if (func_462(134, 1, 0, 0, 0))
			{
			}
			else
			{
				iVar4 = 0;
			}
			if (func_462(138, 1, 0, 0, 0))
			{
			}
			else
			{
				iVar4 = 0;
			}
			return iVar4;
		}
		else if (iVar5 == 46)
		{
			if (func_468(58))
			{
				iVar4 = 1;
				iVar1 = 140;
				if (func_462(iVar1, 0, 0, 0, 0))
				{
				}
				else
				{
					iVar4 = 0;
				}
				return iVar4;
			}
			else
			{
				return 1;
			}
		}
		else if (iVar5 == 17)
		{
			iVar4 = 1;
			iVar1 = 134;
			if (func_462(iVar1, 0, 0, 0, 0))
			{
			}
			else
			{
				iVar4 = 0;
			}
			iVar1 = 138;
			if (func_462(iVar1, 0, 0, 0, 0))
			{
			}
			else
			{
				iVar4 = 0;
			}
			if (func_468(5) && func_469(12))
			{
				iVar1 = 21;
				if (func_462(iVar1, 1, 0, 0, 0))
				{
				}
				else
				{
					iVar4 = 0;
				}
			}
			return iVar4;
		}
		else if (iVar5 == 15)
		{
			iVar4 = 1;
			iVar1 = 63;
			if (func_462(iVar1, 0, 0, 0, 0))
			{
			}
			else
			{
				iVar4 = 0;
			}
			iVar1 = 59;
			if (func_462(iVar1, 0, 0, 0, 0))
			{
			}
			else
			{
				iVar4 = 0;
			}
			return iVar4;
		}
		else if (iVar5 == 33)
		{
			iVar1 = 99;
		}
		else if (iVar5 == 73)
		{
			iVar1 = 10;
			iVar2 = 1;
		}
		else if (iVar5 == 24)
		{
			iVar1 = 21;
			iVar2 = 0;
		}
		else if (iVar5 == 10)
		{
			iVar4 = 1;
			iVar1 = 63;
			if (func_462(iVar1, 0, 0, 0, 0))
			{
			}
			else
			{
				iVar4 = 0;
			}
			if ((func_320((*Global_1835011)[11]->f_1, 1) && func_320((*Global_1835011)[14]->f_1, 1)) && func_320((*Global_1347702)[61]->f_15, 1))
			{
				iVar1 = 66;
				iVar2 = 1;
				if (func_462(iVar1, iVar2, bVar3, 0, 0))
				{
				}
				else
				{
					iVar4 = 0;
				}
			}
			iVar1 = 59;
			iVar2 = 0;
			if (func_462(iVar1, iVar2, bVar3, 0, 0))
			{
			}
			else
			{
				iVar4 = 0;
			}
			return iVar4;
		}
		else if (iVar5 == 55)
		{
			iVar1 = 64;
		}
	}
	else if (iVar0 == 8)
	{
		iVar6 = func_265(iParam0);
		if (iVar6 == 0)
		{
			iVar4 = 1;
			if (func_470(15))
			{
				if (func_471(15, 0, 0))
				{
				}
				else
				{
					iVar4 = 0;
				}
			}
			iVar1 = 97;
			if (func_462(iVar1, 0, 0, 0, 0))
			{
			}
			else
			{
				iVar4 = 0;
			}
			return iVar4;
		}
		else if (iVar6 == 2)
		{
			iVar1 = 96;
		}
		else if (iVar6 == 61)
		{
			iVar4 = 1;
			if (func_470(15))
			{
				if (func_471(15, 0, 0))
				{
				}
				else
				{
					iVar4 = 0;
				}
			}
			if (func_470(9))
			{
				if (func_471(9, 0, 0))
				{
				}
				else
				{
					iVar4 = 0;
				}
			}
			if (!func_320((*Global_1347702)[63]->f_15, 1))
			{
				iVar1 = 63;
				iVar2 = 0;
			}
			else
			{
				iVar1 = 97;
				iVar2 = 1;
			}
			if (func_462(iVar1, iVar2, 0, 0, 0))
			{
			}
			else
			{
				iVar4 = 0;
			}
			return iVar4;
		}
		else if (iVar6 == 62)
		{
			iVar4 = 1;
			if (func_470(15))
			{
				if (func_471(15, 0, 0))
				{
				}
				else
				{
					iVar4 = 0;
				}
			}
			if (func_470(9))
			{
				if (func_471(9, 0, 0))
				{
				}
				else
				{
					iVar4 = 0;
				}
			}
			iVar1 = 112;
			if (func_462(iVar1, 0, 0, 0, 0))
			{
			}
			else
			{
				iVar4 = 0;
			}
			iVar1 = 63;
			if (func_462(iVar1, 0, 0, 0, 0))
			{
			}
			else
			{
				iVar4 = 0;
			}
			return iVar4;
		}
		else if (iVar6 == 64)
		{
			iVar1 = 65;
			iVar2 = 1;
		}
		else if (iVar6 == 76)
		{
			iVar1 = 134;
			if (func_462(iVar1, 0, 0, 0, 0))
			{
			}
			else
			{
				iVar4 = 0;
			}
			iVar1 = 37;
			if (func_462(iVar1, 0, 0, 0, 0))
			{
			}
			else
			{
				iVar4 = 0;
			}
			return iVar4;
		}
		else if (iVar6 == 82)
		{
			iVar1 = 83;
			iVar2 = 1;
		}
		else if (iVar6 == 96)
		{
			iVar1 = 2;
		}
		else if (iVar6 == 1)
		{
			iVar1 = 96;
			iVar2 = 1;
		}
		else if (iVar6 == 97)
		{
			iVar4 = 1;
			if (func_320((*Global_1835011)[6]->f_1, 1) && func_320((*Global_1835011)[13]->f_1, 1))
			{
				iVar1 = 112;
				iVar2 = 1;
				bVar3 = false;
				if (func_462(iVar1, iVar2, bVar3, 0, 0))
				{
				}
				else
				{
					iVar4 = 0;
				}
			}
			return iVar4;
		}
		else if (iVar6 == 114)
		{
			if (func_320((*Global_1835011)[9]->f_1, 1))
			{
				iVar1 = 0;
				iVar2 = 1;
			}
		}
		else if (iVar6 == 134)
		{
			iVar4 = 1;
			iVar1 = 95;
			if (func_462(iVar1, 0, 0, 0, 0))
			{
			}
			else
			{
				iVar4 = 0;
			}
			iVar1 = 138;
			if (func_462(iVar1, 0, 0, 0, 0))
			{
			}
			else
			{
				iVar4 = 0;
			}
			return iVar4;
		}
	}
	if (iVar1 == -1)
	{
		return 1;
	}
	if (func_462(iVar1, iVar2, bVar3, 0, 0))
	{
		return 1;
	}
	return 0;
}

int func_1363(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return iLocal_35;
		case 2:
			return iLocal_36;
		case 3:
			return 0;
		case 4:
			return iLocal_37;
		case 5:
			return iLocal_37;
		case 6:
			return iLocal_37;
		case 7:
			return iLocal_37;
		case 8:
			return iLocal_37;
		case 9:
			return iLocal_37;
		case 10:
			return iLocal_37;
		case 11:
			return iLocal_37;
		case 12:
			return iLocal_37;
		case 13:
			return iLocal_37;
		case 14:
			return iLocal_50;
		case 15:
			return iLocal_50;
		case 17:
			return iLocal_50;
		case 18:
			return iLocal_50;
		case 16:
			return iLocal_50;
		case 19:
			return iLocal_51;
		case 20:
			return iLocal_51;
		case 21:
			return iLocal_52;
		case 22:
			return iLocal_52;
		case 23:
			return 0;
		case 24:
			return iLocal_51;
		case 25:
			return iLocal_52;
		default:
			break;
	}
	return 0;
}

float func_1364(int iParam0, int iParam1)
{
	return func_1587(iParam0, iParam1);
}

int func_1365(int iParam0)
{
	if (func_513(iParam0))
	{
		return Global_1360165[iParam0];
	}
	return 0;
}

int func_1366(int iParam0, bool bParam1, int iParam2, var uParam3, var uParam4, var uParam5, int iParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, int iParam17, bool bParam18, bool bParam19, bool bParam20, bool bParam21, bool bParam22, bool bParam23, bool bParam24)
{
	if (!func_513(iParam0))
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
			if (func_1020(iParam0, 2, 1))
			{
				func_1018(iParam0, 2, 1);
			}
			if (func_709(iParam0, 16, 1))
			{
				if (*Global_1360165)[iParam0]->f_129 != get_id_of_this_thread()
				{
					if (bParam14)
					{
						func_1016(iParam0, 29, 1);
						return 0;
					}
					if (is_thread_active((*Global_1360165)[iParam0]->f_129, false))
					{
					}
					else
					{
						func_519(iParam0, 0, 0, 1, -1082130432, 1, 1, 0, 0, 0, 0);
					}
					return 0;
				}
				else if (func_434(Global_1360165[iParam0], 0))
				{
					return Global_1360165[iParam0];
				}
			}
			if (func_434(Global_1360165[iParam0], 0))
			{
				if (is_scripted_speech_playing(Global_1360165[iParam0]))
				{
					return 0;
				}
				if (is_ped_ragdoll(Global_1360165[iParam0]))
				{
					if (bParam1)
					{
						func_1923(iParam0, 1, "Stealing, but companion is a ragdoll");
					}
					else
					{
						return 0;
					}
				}
				func_1016(iParam0, 44, 1);
				(*Global_1360165)[iParam0]->f_1156 = get_id_of_this_thread();
				func_1924(iParam0, 2);
				return 0;
			}
			else if (bParam1)
			{
				func_1016(iParam0, 44, 1);
				(*Global_1360165)[iParam0]->f_1156 = get_id_of_this_thread();
				func_1924(iParam0, 1);
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
			if (!func_1020(iParam0, 44, 0))
			{
				func_1016(iParam0, 44, 0);
			}
			if (func_1925(iParam0, vVar0, iParam13, 0, 1, iParam17, bParam20, -1, 1, 0))
			{
				func_1924(iParam0, 2);
			}
			break;
		case 2:
			set_ped_config_flag(Global_1360165[iParam0], 171, true);
			if (!_0x88ad6cc10d8d35b2(Global_1360165[iParam0]))
			{
				set_entity_as_mission_entity(Global_1360165[iParam0], true, true);
			}
			func_1018(iParam0, 18, 1);
			set_entity_visible(Global_1360165[iParam0], true);
			set_ped_relationship_group_hash(Global_1360165[iParam0], 1030835986);
			_0xf74e134f40192884(Global_1360165[iParam0], 0);
			_0x6759bee6762e140b((*Global_1360165)[iParam0]->f_1);
			set_ped_config_flag(Global_1360165[iParam0], 130, false);
			func_1022(iParam0, bParam9, 1, 0);
			if (bParam22)
			{
				func_1370(iParam0, 0, 0, 1);
			}
			func_1018(iParam0, 33, 1);
			func_1018(iParam0, 34, 1);
			func_1018(iParam0, 29, 1);
			if (!func_390(vVar0) && bParam7)
			{
				func_1924(iParam0, 3);
			}
			else if (iParam13 != 0)
			{
				func_1924(iParam0, 4);
			}
			else
			{
				func_1924(iParam0, 5);
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
						func_1923(iParam0, 1, "Teleporting a stolen companion using a scenario.");
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
				func_891(Global_1360165[iParam0], vVar0, iParam6, 2, 1073741824);
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
				func_1924(iParam0, 4);
			}
			else
			{
				func_1924(iParam0, 5);
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
				if (func_1926(iParam0, iParam13))
				{
					if (_0xa0bc8faed8cfeb3c(Global_1360165[iParam0]))
					{
						func_1927(iParam0, iParam13, 0);
						func_1928(iParam0, Global_1360165[iParam0], iParam13, 1);
						if (func_1020(iParam0, 25, 0))
						{
							func_1018(iParam0, 25, 0);
						}
						func_1016(iParam0, 66, 0);
						func_1924(iParam0, 5);
						(*Global_1360165)[iParam0]->f_63 = iParam13;
					}
					else
					{
						return 0;
					}
				}
				else
				{
					func_1924(iParam0, 5);
				}
				func_1016(iParam0, 28, 1);
			}
			else
			{
				func_1924(iParam0, 5);
			}
			break;
		case 5:
			if (_0xa0bc8faed8cfeb3c(Global_1360165[iParam0]))
			{
				func_1924(iParam0, 6);
			}
			break;
		case 6:
			if (func_434(Global_1360165[iParam0], 0))
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
					func_1929(iParam0);
				}
				if (bParam21)
				{
					clear_ped_secondary_task(Global_1360165[iParam0]);
					func_1930(Global_1360165[iParam0], 1);
				}
			}
			func_1924(iParam0, 7);
		case 7:
			func_1022(iParam0, bParam9, bParam15, 0);
			func_1013(iParam0, 4, bParam11);
			func_1017(iParam0);
			if (bParam20)
			{
				if (func_1931(Global_1360165[iParam0]))
				{
				}
			}
			func_1932(iParam0, Global_1360165[iParam0]);
			if (!bParam23 && !get_ped_config_flag(Global_1360165[iParam0], 503, true))
			{
				set_ped_config_flag(Global_1360165[iParam0], 503, true);
			}
			Global_40.f_4942[iParam0]->f_4 = Global_40.f_4942[iParam0]->f_3;
			func_1924(iParam0, 0);
			func_710(iParam0, 16, 1);
			func_1018(iParam0, 44, 1);
			(*Global_1360165)[iParam0]->f_1156 = 0;
			(*Global_1360165)[iParam0]->f_129 = get_id_of_this_thread();
			return Global_1360165[iParam0];
	}
	return 0;
}

void func_1367(char[4] cParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	func_1933(iParam1, bParam3, bParam4, bParam6);
	if (!func_120(cParam0, 512))
	{
		if (func_120(cParam0, 4) && bParam4)
		{
			vVar0 = { get_offset_from_entity_in_world_coords(Global_35, 5f, 0f, 0f) };
			func_1934(iParam1, vVar0);
		}
	}
	else
	{
		Stack.Push(cParam0);
		Call_Loc(cParam0->f_10781);
	}
	func_1935(cParam0, iParam1, iParam2, func_317(iParam2, 0));
	func_1888(cParam0, iParam1, 512);
	if (bParam5)
	{
		func_1888(cParam0, iParam1, 128);
	}
	else
	{
		func_1936(cParam0, iParam1, 128);
	}
	switch (iParam2)
	{
		case 1:
		case default:
	}
}

void func_1368(int iParam0)
{
	if (!func_513(iParam0))
	{
		return;
	}
	iVar0 = func_550(iParam0);
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	_0x406ccf555b04fad3(iVar0, 0, 0f);
}

void func_1369(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	if (!does_entity_exist(iParam0) || is_entity_dead(iParam0))
	{
		return;
	}
	bVar0 = false;
	set_ped_relationship_group_hash(iParam0, _get_default_relationship_group_hash(iParam1));
	if (!bParam7)
	{
		if (func_1937(iParam1))
		{
			func_1938(iParam0, 41788943);
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
			func_1939(iParam0, 0, 1);
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
			func_1940(iParam0, 0);
			bVar0 = true;
		}
		func_1941(iParam0, iParam2);
	}
	if (bVar0)
	{
		_update_ped_variation(iParam0, false, true, true, true, false);
	}
}

void func_1370(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!func_513(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_1942(iParam0, bParam3);
	}
	else
	{
		func_1943(iParam0, bParam3);
	}
	if (bParam2)
	{
		func_1944(iParam0, bParam3);
	}
	else
	{
		func_1945(iParam0, bParam3);
	}
}

void func_1371(char[4] cParam0, int iParam1, int iParam2)
{
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	if (!func_1011(cParam0, iParam1, &iVar0))
	{
		return;
	}
	func_1544(&(cParam0->f_5423[iVar0]->f_6), iParam2);
}

void func_1372(int iParam0)
{
	if (does_entity_exist(&(iLocal_63[iParam0])))
	{
		return;
	}
	_0x52a24d8a1da89658(&(iLocal_63[iParam0]), 2, 0);
	iVar0 = 3;
	while (iVar0 <= 18)
	{
		_0x52a24d8a1da89658(&(iLocal_63[iParam0]), iVar0, 1);
		iVar0++;
	}
}

int func_1373(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return iLocal_38;
		case 1:
			return iLocal_41;
		case 2:
			return iLocal_40;
		case 3:
			return iLocal_39;
		case 4:
			return iLocal_42;
		case 5:
			return iLocal_43;
		case 6:
			return iLocal_44;
		default:
			break;
	}
	return 0;
}

char* func_1374()
{
	return "genericMissionInt";
}

int func_1375(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return 2;
		case 3:
			return 1;
		case 4:
			return 3;
		case 5:
			return 4;
		case 6:
			return 5;
		case 7:
			return 6;
		default:
			break;
	}
	return -1;
}

bool func_1376(int iParam0)
{
	if (-1829635046 == func_1946(81053684))
	{
		if (func_1947(iParam0))
		{
			return true;
		}
	}
	else if (func_1666(-525676072, iParam0))
	{
		if (func_1947(iParam0))
		{
			return true;
		}
	}
	return false;
}

void func_1377(int iParam0)
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

void func_1378(int iParam0)
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

void func_1379()
{
	iVar0 = func_1103(Global_35, 9, 1, 0);
	if (func_690(iVar0))
	{
		return;
	}
	iVar0 = func_1103(Global_35, 7, 1, 0);
	if (func_690(iVar0))
	{
		set_current_ped_weapon(Global_35, iVar0, true, 8, false, false);
	}
	iVar0 = func_1103(Global_35, 0, 1, 0);
	if (func_690(iVar0) && _is_weapon_two_handed(iVar0))
	{
		set_current_ped_weapon(Global_35, iVar0, true, 9, false, false);
		return;
	}
	iVar0 = func_1103(Global_35, 1, 1, 0);
	if (func_690(iVar0) && _is_weapon_two_handed(iVar0))
	{
		set_current_ped_weapon(Global_35, iVar0, true, 9, false, false);
		return;
	}
	iVar0 = func_1103(Global_35, 18, 1, 0);
	if (func_690(iVar0) && _is_weapon_two_handed(iVar0))
	{
		set_current_ped_weapon(Global_35, iVar0, true, 9, false, false);
		return;
	}
	iVar0 = func_1948();
	if (func_690(iVar0))
	{
		if (has_ped_got_weapon(Global_35, iVar0, 0, true))
		{
			func_1949(Global_35, iVar0, 1, 0, 9, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
		}
		else
		{
			set_current_ped_weapon(Global_35, iVar0, true, 9, false, false);
		}
		return;
	}
	iVar0 = func_1950(6291456, 0);
	if (func_690(iVar0))
	{
		if (!has_ped_got_weapon(Global_35, iVar0, 0, true))
		{
			func_1949(Global_35, iVar0, 1, 0, 9, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
		}
		else
		{
			set_current_ped_weapon(Global_35, iVar0, true, 9, false, false);
		}
	}
}

int func_1380()
{
	return Global_1900383->f_393;
}

int func_1381(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (func_1951(*uParam0, 0f, 0f, 0f))
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

void func_1382(int iParam0)
{
	Global_40.f_1095.f_3054.f_1 = iParam0;
}

void func_1383(int iParam0)
{
	Global_40.f_1095.f_3054 = iParam0;
}

void func_1384(vector3 vParam0)
{
	Global_40.f_1095.f_3054.f_77 = { vParam0 };
}

int func_1385()
{
	return &Global_1899515;
}

void func_1386(int iParam0)
{
	Global_40.f_1095.f_3054.f_2 = iParam0;
}

void func_1387(int iParam0)
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

bool func_1388()
{
	return (func_1952() || func_1953());
}

void func_1389(bool bParam0)
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
	func_1954(0f);
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
		func_1955();
	}
	if (is_gameplay_cam_shaking())
	{
		stop_gameplay_cam_shaking(false);
	}
}

Vector3 func_1390(var uParam0)
{
	return uParam0->f_865;
}

float func_1391(var uParam0)
{
	return uParam0->f_868;
}

float func_1392(struct<2> Param0, int iParam2, struct<2> Param3, var uParam5, int iParam6)
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

void func_1393(var uParam0, int iParam1, bool bParam2)
{
	uParam0->f_8 = (uParam0->f_8 - (uParam0->f_8 && iParam1));
	if (((iParam1 == 512 && bParam2) && _does_anim_scene_exist(uParam0->f_804)) && _0xef324e9550a394d5(uParam0->f_804))
	{
		_0x8a8208ae92bf87a5(uParam0->f_804);
	}
}

bool func_1394(var uParam0, int iParam1)
{
	return (uParam0->f_11 && iParam1) != 0;
}

bool func_1395(var uParam0, int iParam1)
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

void func_1396(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	iVar2 = func_1208(iParam1, 1);
	if (!bParam2 && iVar2 == 1367443060)
	{
		bParam3 = false;
	}
	if (iParam4 != 0)
	{
		if (iVar2 == 1108822547)
		{
			iVar1 = func_1956(iParam4);
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

bool func_1397(int iParam0, int iParam1)
{
	return ((Global_1946804->f_57[func_675(iParam0, 1)])->f_10 && iParam1) != 0;
}

bool func_1398(int iParam0, int iParam1)
{
	return (Global_1946804->f_57[iParam0]->f_9 && iParam1) != 0;
}

void func_1399(int iParam0, bool bParam1, bool bParam2)
{
	iVar0 = 10;
	if (func_1397(1108822547, 6))
	{
		if (bParam2)
		{
			func_1396(iParam0, iVar0, func_20() != -1, 0, 0);
			func_1400(1108822547, 1, 6);
		}
		else
		{
			return;
		}
	}
	else
	{
		_0xbc6df00d7a4a6819(iParam0, Global_1946804->f_2776.f_1, &(Global_1946804->f_2776.f_3[0]), &(Global_1946804->f_2776.f_3[1]), &(Global_1946804->f_2776.f_3[2]), Global_1946804->f_2776.f_8, Global_1946804->f_2776.f_9, Global_1946804->f_2776.f_10, Global_1946804->f_2776.f_11);
		func_1401(1108822547, 1, 6);
	}
	Global_1946804->f_857++;
	if (!bParam1)
	{
		return;
	}
	_update_ped_variation(iParam0, false, true, true, true, false);
}

void func_1400(int iParam0, int iParam1, int iParam2)
{
	(Global_1946804->f_57[func_675(iParam0, 1)])->f_10 = ((Global_1946804->f_57[func_675(iParam0, 1)])->f_10 || iParam1);
}

void func_1401(int iParam0, int iParam1, int iParam2)
{
	(Global_1946804->f_57[func_675(iParam0, 1)])->f_10 = ((Global_1946804->f_57[func_675(iParam0, 1)])->f_10 - ((Global_1946804->f_57[func_675(iParam0, 1)])->f_10 && iParam1));
}

bool func_1402(var uParam0)
{
	if (func_1957(&(uParam0->f_29), 62))
	{
		switch (func_1958())
		{
			case 1:
				if (!func_1957(&(uParam0->f_29), 6))
				{
					return false;
				}
				break;
			case 2:
				if (!func_1957(&(uParam0->f_29), 8))
				{
					return false;
				}
				break;
			case 4:
				if (!func_1957(&(uParam0->f_29), 16))
				{
					return false;
				}
				break;
			case 8:
				if (!func_1957(&(uParam0->f_29), 32))
				{
					if (func_1957(&(uParam0->f_29), 2))
					{
						if (func_697(func_278()) < 5)
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

int func_1403(var uParam0, int iParam1, int iParam2)
{
	iVar0 = 0;
	Var4.f_9 = -1591664384;
	bVar18 = func_1959(iParam1, 128);
	Var23.f_9 = -1591664384;
	if (func_1145("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_1146(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_690(Var4.f_4))
			{
			}
			else if (!_0x705be297eebdb95d(Var4.f_4))
			{
			}
			else if (iParam2 != 0 && Var4.f_4 == iParam2)
			{
			}
			else if ((!func_1959(iParam1, 512) && func_1661(Var4.f_4, &uVar19, &Var23, 1728382685)) && !Var23.f_21)
			{
			}
			else if (!bVar18 || _0xf29a186ed428b552(Global_35, Var4.f_4))
			{
				if (((_is_weapon_one_handed(Var4.f_4) && (!_is_weapon_shotgun(Var4.f_4) || func_1959(iParam1, 32))) && (!_is_weapon_pistol(Var4.f_4) || !func_1959(iParam1, 16777216))) && (!_is_weapon_revolver(Var4.f_4) || !func_1959(iParam1, 33554432)))
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
		func_1147(iVar1);
	}
	if (func_690(iVar0))
	{
	}
	else if (!func_1959(iParam1, 512))
	{
		iParam1 |= 512;
		return func_1403(uParam0, iParam1, iParam2);
	}
	else if (func_1959(iParam1, 256))
	{
		iVar0 = -1569615261;
	}
	return iVar0;
}

void func_1404(int iParam0)
{
	_0x51345ae20f22c261(player_id(), to_float(iParam0 * 14), 0, 0, 0);
}

int func_1405(int iParam0)
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

void func_1406(var uParam0)
{
	if (!func_881(uParam0->f_1, 1))
	{
		_0x03ddbf2d73799f9e(*uParam0);
		func_843(&(uParam0->f_1), 1);
	}
}

void func_1407(var uParam0)
{
	if (!func_881(*uParam0, 1))
	{
		request_ptfx_asset();
		func_843(uParam0, 1);
	}
}

bool func_1408(var uParam0)
{
	if (func_881(uParam0->f_2, 1))
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

char* func_1409(int iParam0)
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

bool func_1410(int iParam0)
{
	return iParam0 != 0;
}

int func_1411(var uParam0, int iParam1)
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

int func_1412(var uParam0, char* sParam1)
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

void func_1413(var uParam0, int iParam1)
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

int func_1414(var uParam0)
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

void func_1415(var uParam0, int iParam1)
{
	uParam0->f_11 = (uParam0->f_11 || iParam1);
}

void func_1416(var uParam0, int iParam1)
{
	uParam0->f_11 = (uParam0->f_11 - (uParam0->f_11 && iParam1));
}

bool func_1417(var uParam0, int iParam1)
{
	uParam0->f_2495.f_2 = iParam1;
	return _datafile_get_data_node_index(&(uParam0->f_2495.f_1), &(uParam0->f_2495));
}

bool func_1418(var uParam0, int iParam1, int iParam2, char[4] cParam3, int iParam4, int iParam5)
{
	if (iParam2 == -1)
	{
		if (func_1419(uParam0, 2, iParam4))
		{
			*iParam5 = *iParam4;
		}
		if (func_1419(uParam0, 6, &(cParam3->f_11)))
		{
		}
		if (func_1419(uParam0, 9, &(cParam3->f_13)))
		{
		}
		if (func_1419(uParam0, 5, iParam4))
		{
			cParam3->f_9 = *iParam4;
		}
		return true;
	}
	if (func_1419(uParam0, 2, iParam4))
	{
		*iParam5 = *iParam4;
	}
	if (func_1419(uParam0, 6, &(cParam3->f_11)))
	{
	}
	if (func_1419(uParam0, 5, iParam4))
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
			if (func_1419(uParam0, 9, &(cParam3->f_13)))
			{
			}
			return true;
		}
		return false;
	}
	if (func_1419(uParam0, 9, &(cParam3->f_13)))
	{
	}
	return (iParam2 >= cParam3->f_11 && iParam2 <= cParam3->f_13);
}

bool func_1419(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2495.f_2 = iParam1;
	return _datafile_get_int(iParam2, &(uParam0->f_2495));
}

bool func_1420(var uParam0, int iParam1, char[4] cParam2)
{
	uParam0->f_2495.f_2 = iParam1;
	return _datafile_get_string(cParam2, &(uParam0->f_2495));
}

bool func_1421(var uParam0, char* sParam1, int iParam2)
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

void func_1422(char* sParam0)
{
	if (!is_audio_scene_active(sParam0))
	{
		start_audio_scene(sParam0);
	}
	func_494(sParam0, 1);
}

bool func_1423(var uParam0)
{
	if (func_881(uParam0->f_1, 2))
	{
		return true;
	}
	if (!func_881(uParam0->f_1, 1))
	{
		func_851(uParam0);
	}
	if (has_model_loaded(*uParam0))
	{
		func_843(&(uParam0->f_1), 2);
		return true;
	}
	return false;
}

bool func_1424(var uParam0)
{
	if (func_881(uParam0->f_3, 2))
	{
		return true;
	}
	if (!func_881(uParam0->f_3, 1))
	{
		func_853(uParam0);
	}
	switch (uParam0->f_1)
	{
		case 2:
			if (get_is_waypoint_recording_loaded(*uParam0))
			{
				func_843(&(uParam0->f_3), 2);
				return true;
			}
			break;
		case 1:
			if (has_vehicle_recording_been_loaded(uParam0->f_2, *uParam0))
			{
				func_843(&(uParam0->f_3), 2);
				return true;
			}
			break;
	}
	return false;
}

bool func_1425(var uParam0)
{
	if (func_881(uParam0->f_1, 2))
	{
		return true;
	}
	if (!func_881(uParam0->f_1, 1))
	{
		func_855(uParam0);
	}
	if (has_anim_dict_loaded(*uParam0))
	{
		func_843(&(uParam0->f_1), 2);
		return true;
	}
	return false;
}

bool func_1426(var uParam0, int iParam1)
{
	if (func_881(uParam0->f_1, 2))
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
	if (!func_881(uParam0->f_1, 1))
	{
		func_862(uParam0, iParam1);
	}
	if (_0x23e33cb9f4a3f547(iParam1, *uParam0))
	{
		func_843(&(uParam0->f_1), 2);
		return true;
	}
	return false;
}

bool func_1427(var uParam0)
{
	if (func_881(uParam0->f_2, 2))
	{
		return true;
	}
	if (!func_881(uParam0->f_2, 1))
	{
		func_864(uParam0);
	}
	if (_has_propset_loaded(*uParam0))
	{
		func_843(&(uParam0->f_2), 2);
		return true;
	}
	return false;
}

bool func_1428(var uParam0)
{
	if (func_881(uParam0->f_3, 2))
	{
		return true;
	}
	if (!func_881(uParam0->f_3, 1))
	{
		func_866(uParam0);
	}
	if (_0xff07cf465f48b830(*uParam0))
	{
		func_843(&(uParam0->f_3), 2);
		return true;
	}
	return false;
}

bool func_1429(var uParam0)
{
	if (func_881(uParam0->f_1, 2))
	{
		return true;
	}
	if (!func_881(uParam0->f_1, 1))
	{
		func_868(uParam0);
	}
	if (request_script_audio_bank(*uParam0))
	{
		func_843(&(uParam0->f_1), 2);
		return true;
	}
	return false;
}

bool func_1430(var uParam0)
{
	if (func_881(uParam0->f_1, 2))
	{
		return true;
	}
	if (!func_881(uParam0->f_1, 1))
	{
		func_870(uParam0);
	}
	if (_is_imap_active(*uParam0))
	{
		func_843(&(uParam0->f_1), 2);
		return true;
	}
	return false;
}

bool func_1431(var uParam0)
{
	if (func_881(uParam0->f_2, 2))
	{
		return true;
	}
	if (!func_881(uParam0->f_2, 1))
	{
		func_872(uParam0);
	}
	if (_0xe368e8422c860ba7(*uParam0, uParam0->f_1, -2))
	{
		func_843(&(uParam0->f_2), 2);
		return true;
	}
	return false;
}

bool func_1432(var uParam0)
{
	if (func_881(uParam0->f_1, 2))
	{
		return true;
	}
	if (!func_881(uParam0->f_1, 1))
	{
		func_874(uParam0);
	}
	if (_0x2c04d89a0fb4e244(*uParam0))
	{
		func_843(&(uParam0->f_1), 2);
		return true;
	}
	return false;
}

void func_1433(char[4] cParam0, vector3 vParam1, float fParam4)
{
	cParam0->f_5417 = { vParam1 };
	cParam0->f_5420 = fParam4;
}

bool func_1434(int iParam0)
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
	if (func_1443(iParam0) == 0)
	{
		return false;
	}
	return true;
}

void func_1435(int iParam0)
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
	func_1960(&Var0);
	func_1961(iParam0, Var0);
	func_1962(&(Global_40.f_1095.f_1[iParam0]->f_15));
	func_1963(&(Global_40.f_1095.f_1[iParam0]->f_298));
	func_1964(&(Global_40.f_1095.f_1[iParam0]->f_356));
	func_1965(&(Global_40.f_1095.f_1[iParam0]->f_372));
	iVar2 = 0;
	while (iVar2 < 2)
	{
		func_1966(iVar2, Global_40.f_1095.f_1[iParam0]->f_398[iVar2]);
		iVar2++;
	}
	iVar3 = 0;
	while (iVar3 < 3)
	{
		func_1967(iVar3, Global_40.f_1095.f_1[iParam0]->f_407[iVar3]);
		iVar3++;
	}
	func_1968(&(Global_40.f_1095.f_1[iParam0]->f_420));
	func_1969(&(Global_40.f_1095.f_1[iParam0]->f_422));
	func_1970(&(Global_40.f_1095.f_1[iParam0]->f_425));
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

int func_1436(vector3 vParam0)
{
	return func_1971(_get_map_zone_at_coords(vParam0, 10));
}

bool func_1437(int iParam0)
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
	if (!func_528(iParam0))
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

void func_1438(int iParam0, int iParam1)
{
	iVar0 = get_player_index();
	if (is_player_dead(iVar0))
	{
	}
	func_522(iParam0);
	func_522(iParam0);
	func_1972(iParam0, iParam1);
	func_1973(iParam0, iParam1);
	func_1974(iParam0, iParam1);
	iVar1 = func_208(iParam0);
	if (does_entity_exist(iVar1))
	{
		if (iParam0 == 0 || iParam0 == 1)
		{
			func_1975(iVar1);
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
			func_1975(iVar3);
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

bool func_1439()
{
	iVar0 = func_1380();
	if (does_entity_exist(iVar0))
	{
		return true;
	}
	return false;
}

void func_1440()
{
	iVar0 = func_1380();
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	if (!_0x88ad6cc10d8d35b2(iVar0))
	{
		set_entity_as_mission_entity(iVar0, true, true);
	}
	delete_object(&iVar0);
	func_1976(0);
}

int func_1441(int iParam0)
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

int func_1442(int iParam0)
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

int func_1443(int iParam0)
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

void func_1444(int iParam0)
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
	func_1723(&iVar0, &iVar1, &iVar2);
	func_1724(iParam0, iVar0);
	func_1725(iParam0, iVar1);
	func_1726(iParam0, iVar2);
	func_1977(iParam0, 1);
	func_1978(iParam0, 1);
}

void func_1445(int iParam0)
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
	func_1979(iParam0, 1);
}

void func_1446(int iParam0, vector3 vParam1, var uParam4)
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

bool func_1447(int iParam0)
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
	return func_1031(iParam0, 1);
}

struct<2> func_1448(int iParam0)
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
	if (!func_1980(iParam0, &uVar2))
	{
	}
	if (!func_1981(iParam0, &uVar3))
	{
	}
	Var0 = uVar2;
	Var0.f_1 = uVar3;
	return Var0;
}

struct<6> func_1449()
{
	if (func_1982(-997150586, &uVar6))
	{
		Var0.f_4 = uVar6;
	}
	if (func_1982(-1189569496, &uVar7))
	{
		Var0 = uVar7;
	}
	if (func_1982(325139909, &uVar8))
	{
		Var0.f_2 = uVar8;
	}
	if (func_1982(1310070322, &uVar9))
	{
		Var0.f_5 = uVar9;
	}
	if (func_1982(986998820, &uVar10))
	{
		Var0.f_3 = uVar10;
	}
	if (func_1982(-415648720, &uVar11))
	{
		Var0.f_1 = uVar11;
	}
	return Var0;
}

void func_1450(int iParam0, var uParam1, var uParam2, int iParam3)
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
	func_1983(iParam0);
	func_1984(iParam0, uParam1);
	func_1985(iParam0);
	func_1986(iParam0, uParam2);
	if (iParam3 != 0)
	{
		func_1987(iParam0, iParam3, 0);
	}
	_update_ped_variation(iParam0, false, true, true, true, true);
}

void func_1451(int iParam0)
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

bool func_1452(int iParam0)
{
	if (iParam0 == 0)
	{
		return true;
	}
	request_model(iParam0, false);
	return has_model_loaded(iParam0);
}

int func_1453(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)
{
	iVar0 = create_ped(iParam0, vParam1, fParam4, bParam6, bParam7, false, false);
	if (bParam5)
	{
		_set_random_outfit_variation(iVar0, true);
	}
	return iVar0;
}

int func_1454(var uParam0)
{
	return uParam0;
}

bool func_1455(int iParam0)
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

int func_1456(var uParam0)
{
	return *uParam0;
}

bool func_1457(int iParam0, var uParam1, int iParam2)
{
	return false;
	if (iParam0 <= -1 || iParam0 > 80)
	{
		return false;
	}
	*uParam1 = { func_1988(iParam0) };
	if (func_1951(*uParam1, 0f, 0f, 0f))
	{
		return false;
	}
	if (!func_892(iParam0, iParam2, &iVar0))
	{
		return false;
	}
	if (func_1989(*iParam2, iVar0))
	{
		return false;
	}
	return true;
}

void func_1458(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_1459(var uParam0)
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

bool func_1460(var uParam0)
{
	switch (func_1990(uParam0))
	{
		case 0:
			uParam0->f_24 = func_278();
			iVar4 = func_278();
			func_1213(&iVar4, uParam0->f_6);
			func_1214(&iVar4, 0);
			func_1215(&iVar4, 0);
			if (func_1050(uParam0->f_24, iVar4, 1))
			{
				func_327(&iVar4, 0, 0, 0, 1, 0, 0, 0);
			}
			func_1991(uParam0->f_24, iVar4, &iVar0, &iVar1, &iVar2, &uVar3, &uVar3, &uVar3);
			uParam0->f_7 = ((iVar0 + iVar1 * 60) + iVar2 * 3600);
			func_1992(uParam0, 1);
			break;
		case 1:
			fVar5 = func_1993(uParam0, -1082130432);
			if (fVar5 >= 0.5f)
			{
				func_1992(uParam0, 2);
			}
			break;
		case 2:
			fVar5 = func_1993(uParam0, -1082130432);
			if (fVar5 >= 0.99f || fVar5 == -1f)
			{
				iVar4 = uParam0->f_24;
				func_327(&iVar4, uParam0->f_7, 0, 0, 0, 0, 0, 0);
				set_clock_time(func_697(iVar4), func_698(iVar4), func_699(iVar4));
				func_1994(get_clock_hours());
				func_1995(1, 0, 0);
				return true;
			}
			break;
	}
	return false;
}

void func_1461(vector3 vParam0, float fParam3, bool bParam4)
{
	iVar0 = 16384;
	if (bParam4)
	{
		iVar0 |= 524288;
	}
	clear_area(vParam0, fParam3, iVar0);
}

void func_1462(int iParam0, int iParam1)
{
	if (Global_1935630->f_12)
	{
		return;
	}
	func_1996(2000);
	Global_16 = 0;
	func_1997();
	set_entity_invincible(Global_35, func_1998(*iParam0, 8));
	if (!func_1998(*iParam0, 1))
	{
		set_player_control(get_player_index(), true, 0, false);
	}
	_0xa0cefcea390aab9b(0);
	set_all_random_peds_flee(player_id(), false);
	set_everyone_ignore_player(player_id(), false);
	if (func_1998(*iParam0, 2) || func_1998(*iParam0, 4))
	{
		_hide_hud_component(-1679307491);
	}
	else
	{
		_display_hud_component(-1679307491);
	}
	if (!func_1998(*iParam0, 16))
	{
		func_228(1);
	}
	if (func_1998(*iParam0, 32))
	{
		func_628(Global_35, -383172193, 0, 1742327865, 0, 1, 0, 0, 1, 0);
		func_1999(-1623728698, 0);
	}
	func_817(&(Global_1946804->f_1497), Global_35, 1, 49217, 1, 1, 1);
	if (Global_1359489->f_16 & 4194304 != 0)
	{
		Global_1359489->f_16 = (Global_1359489->f_16 - Global_1359489->f_16 & 4194304);
	}
	*iParam0 = 0;
}

var func_1463(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

struct<4> func_1464(char[4] cParam0, int iParam1)
{
	return cParam0->f_1[func_132(iParam1)]->f_13;
}

int func_1465(var uParam0)
{
	return *uParam0;
}

bool func_1466(var uParam0, struct<4> Param1, int iParam5, bool bParam6)
{
	if (func_1467(uParam0, 32768))
	{
		return true;
	}
	if (func_2000(uParam0) >= 3)
	{
		uParam0->f_2286 = func_944(get_player_index(), 0, 0, 1);
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
		func_2001(uParam0);
	}
	if (func_2000(uParam0) < 10)
	{
		if (func_2000(uParam0) == 3)
		{
			func_2002(uParam0, iParam5, bParam6);
		}
		else if (func_2000(uParam0) > 3)
		{
			if (func_1465(uParam0) == 0)
			{
				if (!func_1467(uParam0, 524288))
				{
					func_2003(uParam0);
				}
				else if (is_screen_faded_out())
				{
					func_2004(uParam0, 4);
					func_2005(uParam0, 10);
					func_2006(uParam0, iParam5);
					return true;
				}
			}
			if (!func_1467(uParam0, 67108864) && !Global_1935630->f_12)
			{
				set_ped_reset_flag(Global_35, 25, true);
			}
			if (!func_2007(uParam0->f_1406[uParam0->f_2074], 16))
			{
				disable_control_action(0, -1404316431, false);
				disable_control_action(0, -1304887797, false);
			}
			_0x8910c24b7e0046ec();
			func_1501(0);
			func_2008();
			disable_control_action(0, -1722177808, false);
			disable_control_action(0, 1644850270, false);
			disable_control_action(0, 2139949496, false);
			if (uParam0->f_2074 >= 0)
			{
				if (!func_2007(uParam0->f_1406[uParam0->f_2078], 32768))
				{
					_uiprompt_enable_prompt_type_this_frame(6);
				}
				if (func_2009(uParam0, uParam0->f_2074))
				{
					if (func_2010(uParam0) < 7 && uParam0->f_2078 >= 0)
					{
						func_2011(uParam0, uParam0->f_1406[uParam0->f_2078]->f_27, uParam0->f_1735[uParam0->f_2078]->f_1, 1065353216);
					}
				}
				else if (uParam0->f_2078 >= 0)
				{
					func_2011(uParam0, uParam0->f_1406[uParam0->f_2078]->f_27, uParam0->f_1735[uParam0->f_2078]->f_1, 1065353216);
				}
				func_2012(uParam0);
			}
		}
	}
	bVar0 = func_2013(uParam0, iParam5, bParam6);
	bVar1 = _0xa24c1d341c6e0d53(1, 0, 0);
	if (bVar0)
	{
		if ((!func_1467(uParam0, 268435456) && bVar1) && !func_1467(uParam0, 262144))
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
				func_748(uParam0, 131072);
				func_748(uParam0, 268435456);
			}
		}
		if (func_2014(uParam0, 64) || (uParam0->f_2074 >= 0 && !func_2007(uParam0->f_1406[uParam0->f_2074], 524288)))
		{
			if (_0xa2b1c7ef759a63ce() > 0f || func_1465(uParam0) == 0)
			{
				_0xc9caeaeec1256e54(-1679307491);
				_0xe296208c273bd7f0(-1, -1, 0, 17, 1, 0);
			}
		}
	}
	if (func_2000(uParam0) == 3 || func_1467(uParam0, 131072))
	{
		func_2015(uParam0);
		if (!func_1467(uParam0, 262144))
		{
			if ((bVar0 && func_1467(uParam0, 65536)) || func_1467(uParam0, 131072))
			{
				func_748(uParam0, 32768);
				func_2004(uParam0, 4);
				func_2005(uParam0, 10);
				uParam0->f_2159 = 1;
				func_2006(uParam0, iParam5);
				return true;
			}
		}
	}
	if (func_2000(uParam0) >= 3)
	{
		func_2016(uParam0, iParam5);
		func_2017(uParam0);
		if (!func_2018(uParam0, 1))
		{
			func_2019(uParam0);
		}
		func_2020(uParam0);
	}
	switch (func_2000(uParam0))
	{
		case 0:
			func_2021(uParam0, Param1, iParam5);
			break;
		case 1:
			func_2022(uParam0);
			break;
		case 2:
			func_2023(uParam0);
			break;
		case 3:
			if (func_2024(uParam0))
			{
				func_2025(2);
				func_2011(uParam0, uParam0->f_1406[uParam0->f_2074]->f_27, uParam0->f_1735[uParam0->f_2074]->f_1, 1065353216);
				func_213(&(uParam0->f_2262));
				func_2004(uParam0, 1);
				func_2026();
				func_2005(uParam0, 5);
			}
			break;
		case 5:
		case 6:
		case 8:
			_0x9f9a829c6751f3c7(get_player_index(), 31, 1);
			if (!func_1467(uParam0, 67108864))
			{
				set_ped_reset_flag(Global_35, 25, true);
			}
			set_ped_reset_flag(Global_35, 264, true);
			set_ped_reset_flag(Global_35, 321, true);
			if (func_2000(uParam0) == 5)
			{
				if (func_2027(uParam0))
				{
					func_2004(uParam0, 2);
					func_2005(uParam0, 6);
				}
			}
			if (func_2000(uParam0) == 6)
			{
				if (func_2028(uParam0))
				{
					func_2004(uParam0, 3);
					func_2005(uParam0, 8);
				}
			}
			if (uParam0->f_2075 >= 0 || func_1498(&(uParam0->f_2262)) >= 15f)
			{
				if (func_2029(uParam0, iParam5))
				{
					if (func_2030(uParam0))
					{
						uParam0->f_2075 = func_2031(uParam0);
						func_213(&(uParam0->f_2262));
						set_player_control(get_player_index(), true, 0, false);
						_display_hud_component(-1679307491);
						clear_ped_tasks(Global_35, 1, 0);
						func_2004(uParam0, 6);
						func_2005(uParam0, 9);
					}
					else
					{
						func_2004(uParam0, 4);
						func_2005(uParam0, 10);
						func_2006(uParam0, iParam5);
						return true;
					}
				}
			}
			break;
		case 9:
			if (func_2029(uParam0, iParam5))
			{
				func_2006(uParam0, iParam5);
				func_2005(uParam0, 10);
				return true;
			}
			break;
		case 10:
			return true;
	}
	return false;
}

bool func_1467(var uParam0, int iParam1)
{
	return (uParam0->f_2054 && iParam1) != 0;
}

void func_1468(var uParam0, int iParam1)
{
	uParam0->f_2054 = (uParam0->f_2054 - (uParam0->f_2054 && iParam1));
}

void func_1469(var uParam0, var uParam1)
{
	if (func_1467(uParam1, 32768))
	{
		Var0 = { func_2032(uParam0) };
		func_2033(uParam0, &Var0);
		if (func_1467(uParam1, 131072))
		{
			func_749(uParam0, 268435456);
			if (func_390(uParam0->f_865))
			{
				uParam0->f_865 = { func_2034(uParam1, uParam1->f_2074) };
			}
			if (func_390(uParam0->f_862))
			{
				uParam0->f_862 = { func_2034(uParam1, uParam1->f_2074) };
				get_ground_z_for_3d_coord(uParam0->f_862, &(uParam0->f_862.f_2), false);
				uParam0->f_862.f_2 = (uParam0->f_862.f_2 + 0.5f);
			}
		}
		if (func_1467(uParam1, 268435456))
		{
			func_2035(&(uParam0->f_860), 16384);
		}
	}
	else if (func_1467(uParam1, 524288))
	{
		func_749(uParam0, 67108864);
		func_1468(uParam1, 524288);
	}
	if (func_2014(uParam1, 128))
	{
		func_749(uParam0, 32);
	}
	if (uParam1->f_2293 != 0)
	{
		uParam0->f_872 = uParam1->f_2293;
		if (uParam1->f_2074 >= 0 && func_2007(uParam1->f_1406[uParam1->f_2074], 256))
		{
			func_2035(&(uParam0->f_860), 524288);
		}
	}
	if (*uParam1 == 0 && _0x927b810e43e99932(&(uParam1->f_2082)))
	{
		_copy_memory(&(uParam0->f_873), &(uParam1->f_2082), 16);
	}
}

void func_1470(char[4] cParam0)
{
	if (func_806(&(cParam0->f_7375), 128) || func_806(&(cParam0->f_7375), 256))
	{
		if (_does_anim_scene_exist(cParam0->f_7375.f_804))
		{
			_delete_anim_scene(cParam0->f_7375.f_804);
		}
		func_1908(&(cParam0->f_7375));
		func_1393(&(cParam0->f_7375), 128, 1);
		func_1393(&(cParam0->f_7375), 256, 1);
		func_1393(&(cParam0->f_7375), 4096, 1);
	}
}

void func_1471(char[4] cParam0)
{
	func_2036(&(cParam0->f_7375));
}

bool func_1472(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, var uParam4, char[4] cParam5)
{
	func_2037(uParam4, &cParam0);
	if (func_806(uParam4, 2) && !func_806(uParam4, 67108864))
	{
		disable_control_action(0, -842734359, false);
	}
	if (func_2038(uParam4) != 1)
	{
		func_2039(uParam4);
	}
	_0xf45e46deecf7df6e(4096, 0, 0, -1, -1);
	set_ped_reset_flag(Global_35, 134, true);
	_uiprompt_enable_prompt_type_this_frame(6);
	_0x9f9a829c6751f3c7(get_player_index(), 31, 1);
	switch (func_2038(uParam4))
	{
		case 1:
			if (_does_anim_scene_exist(uParam4->f_804) && _is_anim_scene_loaded(uParam4->f_804, true, false))
			{
				if (!_is_anim_scene_started(uParam4->f_804, false))
				{
					func_2040(uParam4, &cParam0, cParam5);
				}
				else if (_0xef324e9550a394d5(uParam4->f_804))
				{
					func_2041(uParam4, 4);
					return false;
				}
				else
				{
					if (func_2042(uParam4, 2))
					{
						Stack.Push(uParam4);
						Call_Loc(uParam4->f_797);
					}
					func_2043(cParam5);
				}
				func_2041(uParam4, 3);
			}
			else if (!_does_anim_scene_exist(uParam4->f_804))
			{
				if (!is_screen_fading_out())
				{
					do_screen_fade_out(0);
				}
				if (func_121(cParam5, func_33(cParam5), 262144))
				{
					if (!func_806(uParam4, 2097152))
					{
						func_2044(uParam4);
					}
				}
				else if (!is_string_null_or_empty(&(uParam4->f_806)) && (!func_8(cParam5, 8) || func_806(uParam4, 134217728)))
				{
				}
				else
				{
					func_1889(uParam4);
				}
				func_213(&(uParam4->f_1));
				func_2041(uParam4, 2);
			}
			else
			{
				if (!is_screen_fading_out() && !is_screen_faded_out())
				{
					do_screen_fade_out(0);
				}
				func_2045(uParam4);
				if (!func_26(&(uParam4->f_1)))
				{
					func_27(&(uParam4->f_1), 0);
				}
				else if (func_900(&(uParam4->f_1)) >= 60f)
				{
					if (_does_anim_scene_exist(uParam4->f_804))
					{
						_delete_anim_scene(uParam4->f_804);
					}
					func_2041(uParam4, 4);
				}
			}
			break;
		case 2:
			if (!_does_anim_scene_exist(uParam4->f_804) || !_is_anim_scene_loaded(uParam4->f_804, true, false))
			{
				if (func_2046(uParam4, &cParam0, 1, 1))
				{
					if (!_is_anim_scene_loaded(uParam4->f_804, true, false))
					{
						func_2041(uParam4, 4);
					}
					else if (!func_390(func_2047(uParam4)) && !func_1355(Global_35, func_2047(uParam4), 100f, 1, 1))
					{
						func_1378(1);
						start_player_teleport(get_player_index(), func_2047(uParam4), 0f, true, true, true, false);
					}
				}
				else if (func_900(&(uParam4->f_1)) >= 60f)
				{
					if (_does_anim_scene_exist(uParam4->f_804))
					{
						_delete_anim_scene(uParam4->f_804);
					}
					func_2041(uParam4, 4);
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
						func_2040(uParam4, &cParam0, cParam5);
						func_2041(uParam4, 3);
					}
					else
					{
						shutdown_loading_screen();
					}
				}
			}
			else if (func_900(&(uParam4->f_1)) >= 60f)
			{
				if (_does_anim_scene_exist(uParam4->f_804))
				{
					_delete_anim_scene(uParam4->f_804);
				}
				func_2041(uParam4, 4);
			}
			break;
		case 3:
			func_386(uParam4);
			if (func_2042(uParam4, 2))
			{
				Stack.Push(uParam4);
				Call_Loc(uParam4->f_797);
			}
			func_2043(cParam5);
			if ((_does_anim_scene_exist(uParam4->f_804) && _is_anim_scene_started(uParam4->f_804, false)) && (_0xef324e9550a394d5(uParam4->f_804) || func_806(uParam4, 512)))
			{
				if (!func_806(uParam4, 1024) && func_2048(uParam4, 1))
				{
					set_gameplay_cam_relative_heading(0f, 1f);
					set_gameplay_cam_relative_pitch(0f, 1f);
				}
				if (!func_806(uParam4, 512))
				{
					func_213(&(uParam4->f_1));
					func_749(uParam4, 512);
					func_2041(uParam4, 4);
				}
				else if (func_806(uParam4, 524288))
				{
					if (is_screen_faded_in() || is_screen_fading_in())
					{
					}
					do_screen_fade_out(0);
				}
			}
			else
			{
				func_2039(uParam4);
			}
			if (func_806(uParam4, 524288))
			{
				if (IntToFloat(absi((func_2049(uParam4) - func_2050(uParam4)))) <= 2f)
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
				if (func_2051(uParam4, Global_35, 4))
				{
					_0x1b70811d3bf75db9(1, 1);
				}
				if ((is_screen_faded_out() || is_screen_fading_out()) && func_2050(uParam4) > 5000)
				{
					_0x1b70811d3bf75db9(1, 1);
				}
			}
			if (func_2052(uParam4))
			{
				if (!_does_anim_scene_exist(uParam4->f_804))
				{
				}
				func_2053(uParam4);
				return true;
			}
			else
			{
				if (func_806(uParam4, 67108864))
				{
					if (is_screen_faded_out())
					{
						if (!_is_anim_scene_paused(uParam4->f_804) && !_0xef324e9550a394d5(uParam4->f_804))
						{
							_delete_anim_scene_2(uParam4->f_804);
						}
						func_213(&(uParam4->f_1));
						_0x1b70811d3bf75db9(1, 1);
						func_749(uParam4, 512);
						func_1393(uParam4, 67108864, 1);
						func_2041(uParam4, 4);
					}
					else if (!is_screen_fading_out() && !is_screen_faded_out())
					{
						do_screen_fade_out(1000);
					}
				}
				else if ((((!func_806(uParam4, 16384) && !_0xef324e9550a394d5(uParam4->f_804)) && is_screen_faded_out()) && func_2050(uParam4) <= 5000) && func_2050(uParam4) >= 0)
				{
					do_screen_fade_in(1000);
				}
				if (!func_806(uParam4, 536870912) && has_anim_event_fired(Global_35, -1495039362))
				{
					func_1462(&(uParam4->f_861), 0);
					func_749(uParam4, 536870912);
				}
				if (func_2050(uParam4) >= 5000 && func_2050(uParam4) <= (func_2049(uParam4) - 5000))
				{
					func_2054();
				}
			}
			break;
		case 6:
			if (func_2052(uParam4))
			{
				func_2053(uParam4);
				return true;
			}
			break;
		case 4:
			if (func_806(uParam4, 524288))
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
						func_749(uParam4, 1073741824);
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
					if (func_2055(cParam5))
					{
						if (_does_anim_scene_exist(uParam4->f_804) && _is_anim_scene_paused(uParam4->f_804))
						{
							set_anim_scene_paused(uParam4->f_804, false);
						}
						func_2041(uParam4, 3);
					}
					else if (func_900(&(uParam4->f_1)) >= 30f)
					{
						if (_does_anim_scene_exist(uParam4->f_804) && _is_anim_scene_paused(uParam4->f_804))
						{
							set_anim_scene_paused(uParam4->f_804, false);
						}
						func_2041(uParam4, 3);
					}
				}
				if (iVar0 == 0)
				{
					Stack.Push(!func_2042(uParam4, 4));
					Stack.Push(uParam4);
					Call_Loc(uParam4->f_798);
					if (StackVal || StackVal)
					{
						if (_does_anim_scene_exist(uParam4->f_804) && _is_anim_scene_paused(uParam4->f_804))
						{
							set_anim_scene_paused(uParam4->f_804, false);
						}
						func_2041(uParam4, 3);
					}
					else if (func_900(&(uParam4->f_1)) >= 30f)
					{
						if (_does_anim_scene_exist(uParam4->f_804) && _is_anim_scene_paused(uParam4->f_804))
						{
							set_anim_scene_paused(uParam4->f_804, false);
						}
						func_2041(uParam4, 3);
					}
				}
				if (func_2038(uParam4) == 3)
				{
					if (func_806(uParam4, 524288))
					{
						do_screen_fade_out(0);
					}
				}
			}
			break;
		case 5:
			func_2041(uParam4, 4);
			break;
	}
	return false;
}

void func_1473(char[4] cParam0)
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
			if (decor_exist_on(get_indexed_item_in_itemset(iVar0, Global_43616), func_2056()))
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

void func_1474(char[4] cParam0)
{
	func_2044(&(cParam0->f_7375));
}

bool func_1475(int iParam0, bool bParam1)
{
	iVar0 = 1;
	MemCopy(&uVar1, {func_262(iParam0)}, 8);
	StringCopy(&cVar9, _get_label_text_2(&uVar1), 64);
	if (!is_string_null_or_empty(&cVar9))
	{
		if (!func_2057(iParam0))
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
			if (!func_2058(iParam0))
			{
				iVar0 = 0;
			}
		}
	}
	return iVar0;
}

struct<8> func_1476(int iParam0)
{
	MemCopy(&cVar0, {func_262(iParam0)}, 8);
	StringConCat(&cVar0, "_Sounds", 64);
	return cVar0;
}

bool func_1477(int iParam0)
{
	Var0 = { func_1476(iParam0) };
	if (!is_string_null_or_empty(&Var0))
	{
		if (!_0xd9130842d7226045(&Var0, 0))
		{
			return false;
		}
	}
	return true;
}

void func_1478(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 15)
	{
		_datafile_register_query(uParam0->f_2495, iVar0, func_2059(iVar0));
		iVar0++;
	}
}

bool func_1479(char[4] cParam0)
{
	if (((((((((func_2060(cParam0, 0) && func_2060(cParam0, 1)) && func_2060(cParam0, 2)) && func_2060(cParam0, 3)) && func_2060(cParam0, 4)) && func_2060(cParam0, 5)) && func_2060(cParam0, 6)) && func_2060(cParam0, 7)) && func_2060(cParam0, 8)) && func_2060(cParam0, 9))
	{
		func_1287();
		return true;
	}
	return false;
}

bool func_1480(char[4] cParam0)
{
	if (!func_8(cParam0, 32))
	{
		func_99(cParam0, 32);
	}
	if (!func_380(cParam0, 0, func_33(cParam0)))
	{
		return false;
	}
	if (!does_entity_belong_to_this_script(&(iLocal_63[0]), true))
	{
		set_entity_as_mission_entity(&(iLocal_63[0]), true, false);
	}
	func_1342(iLocal_63[0]);
	set_ped_combat_movement(&(iLocal_63[0]), 1);
	set_blocking_of_non_temporary_events(&(iLocal_63[0]), true);
	_0x89f5e7adecccb49c(&(iLocal_63[0]), "Very_Drunk");
	set_ped_path_may_enter_water(&(iLocal_63[0]), true);
	set_ped_path_prefer_to_avoid_water(&(iLocal_63[0]), false, 1f);
	_0x1ad922ab5038def3(&(iLocal_63[0]));
	func_2061(21, 0, 0);
	set_ped_config_flag(&(iLocal_63[0]), 72, true);
	_0xff745b0346e19e2c(-602889539);
	_0x816a3acd265e2297(-602889539, 1);
	return true;
}

bool func_1481(char[4] cParam0)
{
	if (func_163(3, 1))
	{
		return true;
	}
	if (func_380(cParam0, 3, func_33(cParam0)))
	{
		Var0 = { func_382(3, func_33(cParam0)) };
		clear_ped_tasks(&(iLocal_63[3]), 1, 0);
		_set_entity_coords_and_heading(&(iLocal_63[3]), Var0, Var0.f_3, true, false, true);
		task_stand_still(&(iLocal_63[3]), -1);
		if (_0x083d497d57b7400f(&(iLocal_63[3])))
		{
			freeze_entity_position(&(iLocal_63[3]), false);
		}
		return true;
	}
	return false;
}

bool func_1482(char[4] cParam0)
{
	func_145(cParam0, Global_35, "ARTHUR", 0);
	if (func_120(cParam0, 4))
	{
		func_1254(Global_35, func_216(func_33(cParam0)), 2, 1073741824);
	}
	return true;
}

bool func_1483(int iParam0)
{
	if (func_1545(iParam0))
	{
		return true;
	}
	if (iParam0 <= -1 || iParam0 >= 32)
	{
		return false;
	}
	iVar0 = iLocal_62;
	vVar1 = { 0f, 0f, 0f };
	vVar4 = { 0f, 0f, 0f };
	vVar7 = { 0f, 0f, 0f };
	bVar10 = false;
	switch (iParam0)
	{
		case 0:
			iVar0 = -1612834106;
			vVar1 = { -339.929f, -356.376f, 88.408f };
			vVar4 = { 0f, 0f, 28f };
			vVar7 = { 33.5f, 8f, 5f };
			break;
		case 1:
			iVar0 = -1612834106;
			vVar1 = { -374.558f, -346.268f, 87.062f };
			vVar4 = { 0f, 0f, 0f };
			vVar7 = { 2f, 3f, 3f };
			break;
		case 2:
			iVar0 = -1612834106;
			vVar1 = { -381.14f, -352.612f, 87.311f };
			vVar4 = { 0f, 0f, 27f };
			vVar7 = { 15f, 20f, 3f };
			break;
		case 3:
			iVar0 = 665633627;
			vVar1 = { -381.229f, -352.123f, 88.126f };
			vVar4 = { 0f, 0f, 56f };
			vVar7 = { 6.5f, 9.5f, 3f };
			break;
		case 4:
			iVar0 = -1612834106;
			vVar1 = { -322.31f, -357.775f, 88.408f };
			vVar4 = { 0f, 0f, 28f };
			vVar7 = { 4f, 11f, 5f };
			break;
		case 5:
			iVar0 = 665633627;
			vVar1 = { -128.45f, -33.194f, 96.039f };
			vVar4 = { 0f, 0f, 57f };
			vVar7 = { 19f, 18f, 6f };
			break;
		case 6:
			iVar0 = -1612834106;
			vVar1 = { -451.7511f, -512.6439f, 57.25617f };
			vVar4 = { 0f, 0f, 11.38473f };
			vVar7 = { 187.0151f, 102.7882f, 91.90021f };
			break;
		case 7:
			iVar0 = 665633627;
			vVar1 = { -119.5931f, -33.12778f, 96.039f };
			vVar4 = { 0f, 0f, 57f };
			vVar7 = { 46.76117f, 39.08008f, 6f };
			break;
		case 8:
			iVar0 = -1612834106;
			vVar1 = { -471.2429f, -408.499f, 88.60917f };
			vVar4 = { 0f, 0f, -74.9402f };
			vVar7 = { 77.59241f, 283.8267f, 21.12837f };
			break;
		case 9:
			iVar0 = -1612834106;
			vVar1 = { -529.6843f, -513.7991f, 55.06014f };
			vVar4 = { 0f, 0f, -44.59846f };
			vVar7 = { 127.0093f, 5.852345f, 42.39389f };
			break;
		case 10:
			iVar0 = -1612834106;
			vVar1 = { -505.3135f, -433.9754f, 81.1946f };
			vVar4 = { 0f, 0f, 26.02015f };
			vVar7 = { 193.8262f, 21.08619f, 19.7503f };
			break;
		case 11:
			iVar0 = -1612834106;
			vVar1 = { -545.3329f, -431.8244f, 56.69365f };
			vVar4 = { 0f, -0.984935f, 20.06892f };
			vVar7 = { 367.4153f, 394.7009f, 41.40752f };
			break;
		case 12:
			iVar0 = -1612834106;
			vVar1 = { -126.1637f, -46.11609f, 95.12919f };
			vVar4 = { 0f, 0f, -1.397287f };
			vVar7 = { 18.68625f, 15.57124f, 8.61804f };
			break;
		case 13:
			iVar0 = -1612834106;
			vVar1 = { -122.767f, -31.3733f, 95.14592f };
			vVar4 = { 0f, 0f, 21.45737f };
			vVar7 = { 19.42026f, 16.60847f, 8.358175f };
			break;
		case 14:
			iVar0 = -1612834106;
			vVar1 = { -133.0416f, -15.99957f, 94.22317f };
			vVar4 = { 0f, 0f, 20.2899f };
			vVar7 = { 22.5654f, 19.01775f, 10.25011f };
			break;
		case 15:
			iVar0 = -1612834106;
			vVar1 = { -320.2263f, -361.245f, 87.75749f };
			vVar4 = { 0f, 0f, 25.48097f };
			vVar7 = { 4.737138f, 6.052721f, 6.269291f };
			break;
		case 16:
			iVar0 = -1612834106;
			vVar1 = { -520.348f, -440.2256f, 82.52526f };
			vVar4 = { 0f, 0f, 26.9f };
			vVar7 = { 694.9839f, 8.908519f, 43.43642f };
			break;
		case 17:
			iVar0 = -1612834106;
			vVar1 = { -857.2325f, -613.6528f, 73.72871f };
			vVar4 = { 0f, 0f, -61.94396f };
			vVar7 = { 6.096117f, 7.966026f, 6.99848f };
			break;
		case 18:
			iVar0 = -1612834106;
			vVar1 = { -384.0941f, -437.038f, 76.31982f };
			vVar4 = { 0f, 0f, 42.99909f };
			vVar7 = { 75.46456f, 41.132f, 37.08671f };
			break;
		case 19:
			iVar0 = -1612834106;
			vVar1 = { -548.4916f, -420.783f, 89.04397f };
			vVar4 = { 0f, 0f, -62.04596f };
			vVar7 = { 84.9986f, 50.81785f, 20.03131f };
			break;
		case 20:
			iVar0 = -1612834106;
			vVar1 = { -326.6736f, -358.391f, 88.25056f };
			vVar4 = { 0f, 0f, -63.46869f };
			vVar7 = { 7.073741f, 3.987257f, 2.447897f };
			break;
		case 21:
			iVar0 = -1612834106;
			vVar1 = { -145.2227f, -39.98537f, 94.98504f };
			vVar4 = { 0f, 0f, 0f };
			vVar7 = { 1.918316f, 3.596623f, 3.6415f };
			bVar10 = true;
			break;
		case 22:
			break;
		case 23:
			iVar0 = -1612834106;
			vVar1 = { -513.4158f, -507.3265f, 60.10608f };
			vVar4 = { 0f, 0f, 0f };
			vVar7 = { 103.1835f, 45.52695f, 25.59353f };
			break;
		case 24:
			iVar0 = -1612834106;
			vVar1 = { -336.7205f, -361.2609f, 87.43404f };
			vVar4 = { 0f, 0f, 26.73771f };
			vVar7 = { 5.486631f, 5.864298f, 5.042649f };
			break;
		case 25:
			iVar0 = -432403087;
			vVar1 = { -374.4691f, -446.4846f, 77.16228f };
			vVar4 = { 0f, 0f, 0f };
			vVar7 = { 10f, 10f, 10f };
			break;
		case 26:
			break;
		case 27:
			iVar0 = -1612834106;
			vVar1 = { -1327.4f, -959.9003f, 47.18964f };
			vVar4 = { 0f, 0f, -55.47974f };
			vVar7 = { 4461.069f, 1508.333f, 485.1907f };
			break;
		case 28:
			iVar0 = -1612834106;
			vVar1 = { -612.4736f, -431.4183f, 72.29343f };
			vVar4 = { 0f, 0f, -32.87226f };
			vVar7 = { 9.763235f, 23.24989f, 25.46852f };
			break;
		case 29:
			iVar0 = -432403087;
			vVar1 = { 1f, 1f, 1f };
			vVar4 = { 0f, 0f, 0f };
			vVar7 = { 50f, 50f, 50f };
			break;
		case 30:
			iVar0 = -1612834106;
			vVar1 = { -335.8091f, -358.3235f, 92.31297f };
			vVar4 = { 0f, 0f, -62.51317f };
			vVar7 = { 56.58811f, 76.15298f, 27.29232f };
			break;
		case 31:
			iVar0 = -1612834106;
			vVar1 = { -143.7468f, -39.37308f, 96.13992f };
			vVar4 = { 0f, 0f, 0f };
			vVar7 = { 4.979751f, 7.400268f, 3.488019f };
			break;
	}
	if (iParam0 == 22)
	{
		iLocal_108[iParam0] = _create_volume_aggregate();
		_0x39816f6f94f385ad(&(iLocal_108[iParam0]), -321.1582f, -361.3702f, 87.27187f, 0f, 0f, 27.00129f, 3.517597f, 2.567398f, 3.384304f);
		_0x39816f6f94f385ad(&(iLocal_108[iParam0]), -322.0082f, -359.2438f, 87.21671f, 0f, 0f, -62.65164f, 2.722972f, 3.260541f, 3.495786f);
	}
	else if (iParam0 == 26)
	{
		iLocal_108[iParam0] = _create_volume_aggregate();
		_0x39816f6f94f385ad(&(iLocal_108[iParam0]), -367.2915f, -442.8577f, 77.68181f, 0f, 0f, -9.430953f, 45.08775f, 20.16272f, 20.87634f);
		_0x39816f6f94f385ad(&(iLocal_108[iParam0]), -386.528f, -446.6193f, 80.55575f, 0f, 0f, -92.09356f, 46.12802f, 16.68966f, 15.17965f);
		_0x39816f6f94f385ad(&(iLocal_108[iParam0]), -367.6528f, -453.7901f, 77.36317f, 0f, 0f, 22.83508f, 36.55767f, 21.15457f, 21.5079f);
	}
	else if ((iVar0 == iLocal_62 || func_390(vVar1)) || func_390(vVar7))
	{
		return false;
	}
	else if (!bVar10)
	{
		iLocal_108[iParam0] = _create_volume_by_hash(iVar0, vVar1, vVar4, vVar7);
	}
	else
	{
		iLocal_108[iParam0] = _0x0eb78c2b156635b1(iVar0, vVar1, vVar4, vVar7);
	}
	func_2062(iParam0);
	return func_1545(iParam0);
}

void func_1484(int iParam0, bool bParam1)
{
	iVar0 = 16384;
	if (bParam1)
	{
		iVar0 |= 524288;
	}
	_0x2fcd528a397e5c88(iParam0, iVar0);
}

int func_1485(char[4] cParam0)
{
	iVar0 = func_33(cParam0);
	if (iVar0 == iLocal_16)
	{
	}
	else if (iVar0 == iLocal_17)
	{
	}
	else if (iVar0 == iLocal_23)
	{
	}
	else if (iVar0 == iLocal_24)
	{
	}
	return 1;
}

void func_1486(char[4] cParam0, int iParam1)
{
	cParam0->f_8265 = iParam1;
	func_103(cParam0, 2048);
}

int func_1487(char[4] cParam0)
{
	iVar0 = func_33(cParam0);
	if (iVar0 == iLocal_16)
	{
		return func_2063(cParam0);
	}
	else if (iVar0 == iLocal_17)
	{
		return func_2064(cParam0);
	}
	else if (iVar0 == iLocal_23)
	{
	}
	else if (iVar0 == iLocal_24)
	{
		return func_2065(cParam0);
	}
	return 1;
}

void func_1488(char[4] cParam0, int iParam1)
{
	cParam0->f_8266 = iParam1;
	func_103(cParam0, 1024);
}

int func_1489(char[4] cParam0)
{
	iVar0 = func_33(cParam0);
	if (iVar0 == iLocal_16)
	{
		return func_2066(cParam0);
	}
	else if (iVar0 == iLocal_17)
	{
	}
	else if (iVar0 == iLocal_23)
	{
		return func_2067(cParam0);
	}
	else if (iVar0 == iLocal_24)
	{
	}
	return 1;
}

void func_1490(char[4] cParam0, int iParam1)
{
	cParam0->f_8267 = iParam1;
	func_103(cParam0, 131072);
}

void func_1491(int iParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4, float fParam5, int iParam6, bool bParam7)
{
	func_2068(iParam0, 0, 0);
	if (func_2069(iParam0))
	{
		door_system_set_open_ratio(iParam0, fParam2, iParam6);
		if (fParam5 > 0f)
		{
			door_system_set_automatic_rate(iParam0, fParam5);
		}
		if (bParam3)
		{
			func_2070(iParam0, fParam2, 1, iParam6);
		}
		else if (bParam1)
		{
			if (bParam4)
			{
				func_2071(iParam0, 1);
			}
			else
			{
				func_2072(iParam0, 1);
			}
		}
		else
		{
			func_2073(iParam0, 1);
		}
		if (bParam7)
		{
			_0x276aaf0f1c7f2494(iParam0, 1);
		}
	}
	else if (func_2074())
	{
	}
	else if (network_is_in_session())
	{
	}
}

void func_1492(int iParam0)
{
	if (iVar1853 != iParam0)
	{
		iLocal_1856 = iParam0;
	}
}

void func_1493(int iParam0)
{
	if (iVar1796 != iParam0)
	{
		iLocal_1799 = iParam0;
	}
}

Vector3 func_1494()
{
	vVar0.x = get_clock_hours();
	vVar0.f_1 = get_clock_minutes();
	vVar0.f_2 = get_clock_seconds();
	return vVar0;
}

Vector3 func_1495(int iParam0)
{
	vVar0.x = -1;
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	switch (iParam0)
	{
		case 0:
			vVar0.x = 17;
			vVar0.f_1 = 0;
			vVar0.f_2 = 0;
			break;
	}
	return vVar0;
}

bool func_1496(vector3 vParam0, vector3 vParam3, bool bParam6)
{
	if (!func_2075(vParam0) || !func_2075(vParam3))
	{
		return false;
	}
	iVar0 = func_2076(vParam0);
	iVar1 = func_2076(vParam3);
	if (!bParam6)
	{
		return iVar0 > iVar1;
	}
	return iVar0 >= iVar1;
}

int func_1497(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if ((iParam0 < 0 || iParam1 < 0) || iParam2 < 0)
	{
		return 0;
	}
	if (iParam0 >= 24)
	{
		iParam0 = 0;
	}
	iVar0 = func_278();
	if (func_697(iVar0) > iParam0)
	{
		if (func_696(iVar0) + 1 > func_700(func_695(iVar0), func_694(iVar0)))
		{
			if (func_695(iVar0) == 11)
			{
				func_701(&iVar1, iParam2, iParam1, iParam0, 1, 0, func_694(iVar0) + 1);
			}
			else
			{
				func_701(&iVar1, iParam2, iParam1, iParam0, 1, func_695(iVar0) + 1, func_694(iVar0));
			}
		}
		else
		{
			func_701(&iVar1, iParam2, iParam1, iParam0, func_696(iVar0) + 1, func_695(iVar0), func_694(iVar0));
		}
	}
	else
	{
		func_701(&iVar1, iParam2, iParam1, iParam0, func_696(iVar0), func_695(iVar0), func_694(iVar0));
	}
	if (get_milliseconds_per_game_minute() != 9999999)
	{
		if (func_703(iVar1, 1))
		{
			_pause_clock_this_frame(true);
			_set_milliseconds_per_game_minute(9999999);
			return 1;
		}
		if (!bParam3)
		{
			if (!func_703(iVar1, 1))
			{
				func_1991(iVar0, iVar1, &iVar2, &iVar3, &iVar4, &uVar5, &uVar6, &uVar7);
				if (iVar4 == 0)
				{
					if (iVar3 == 0 && iVar2 <= 5)
					{
						_pause_clock_this_frame(true);
						_set_milliseconds_per_game_minute(9999999);
					}
					else
					{
						iVar8 = floor((2000f / (to_float(iVar3) / to_float(60))));
						_set_milliseconds_per_game_minute(iVar8);
					}
				}
				else if (get_milliseconds_per_game_minute() != 2000)
				{
					fVar9 = (IntToFloat((get_milliseconds_per_game_minute() - 2000)) * 0.1f);
					fVar9 = (IntToFloat(get_milliseconds_per_game_minute()) - fVar9);
					if (absf((fVar9 - 2000f)) < 2000f)
					{
						fVar9 = 2000f;
					}
					_set_milliseconds_per_game_minute(floor(fVar9));
				}
			}
		}
	}
	else if (!func_703(iVar1, 1))
	{
		_set_milliseconds_per_game_minute(2000);
	}
	return 0;
}

float func_1498(var uParam0)
{
	if (!func_26(uParam0))
	{
		return 0f;
	}
	if (func_496(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_548() - uParam0->f_1);
}

void func_1499(char[4] cParam0)
{
	if (func_26(&(Local_151.f_1)))
	{
		if (func_900(&(Local_151.f_1)) > Local_151.f_4)
		{
			func_134(cParam0, Local_151);
			Local_151 = -1;
			func_551(&(Local_151.f_1));
			Local_151.f_4 = 0f;
		}
	}
	if (func_26(&(Local_156.f_1)))
	{
		if (func_900(&(Local_156.f_1)) > Local_156.f_4)
		{
			func_135(cParam0, Local_156);
			Local_156 = -1;
			func_551(&(Local_156.f_1));
			Local_156.f_4 = 0f;
		}
	}
}

void func_1500()
{
	if (!func_163(0, 1))
	{
		func_213(&uLocal_1857);
		return;
	}
	if (get_entity_submerged_level(&(iLocal_63[0])) != 1f)
	{
		func_213(&uLocal_1857);
		return;
	}
	if (func_1498(&uLocal_1857) < 2f)
	{
		return;
	}
	func_1812(&(iLocal_63[0]), 0, 0);
}

void func_1501(bool bParam0)
{
	if (bParam0)
	{
		func_2077(4);
	}
	func_2077(2);
	set_bit(&(Global_1956580->f_1), 0);
}

bool func_1502(int iParam0, bool bParam1)
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

void func_1503(char[4] cParam0, char* sParam1, char* sParam2, bool bParam3, bool bParam4)
{
	if (bParam4)
	{
		func_432(cParam0, 2);
	}
	else
	{
		func_432(cParam0, 1);
	}
	StringCopy(&cVar0, sParam1, 64);
	func_1529(cParam0, cVar0);
	func_160(cParam0, 2);
	if (((!_0x139efb0a71dd9011() && !func_29()) && !func_6(cParam0, 80)) && bParam3)
	{
		func_30(cParam0);
	}
	func_27(&(cParam0->f_13118), 0);
}

void func_1504(char[4] cParam0)
{
}

void func_1505(char[4] cParam0)
{
}

void func_1506(char[4] cParam0)
{
	if (func_1329(Global_35, -372.6674f, -446.9894f, 79.07262f, 0) > 176f)
	{
		func_1503(cParam0, "REV1_FSW_FAIL", "", 1, 0);
	}
}

void func_1507(char[4] cParam0)
{
}

void func_1508(char[4] cParam0)
{
	if (iVar1876 == 5)
	{
		func_1503(cParam0, "LAW_FAIL", "", 1, 0);
	}
}

void func_1509(char[4] cParam0)
{
	if (func_1329(Global_35, -614.4241f, -489.3424f, 77.74394f, 0) > 392f)
	{
		func_1503(cParam0, "REV1_RSW_FAIL", "", 1, 0);
	}
}

void func_1510(char[4] cParam0)
{
	if (is_entity_touching_entity(&(iLocal_63[0]), &(iLocal_91[0])) || is_entity_touching_entity(Global_35, &(iLocal_91[0])))
	{
		if (!bVar1968)
		{
			if (func_434(Global_35, 0))
			{
				clear_ped_tasks(Global_35, 1, 0);
			}
			if (func_434(&(iLocal_63[0]), 0))
			{
				clear_ped_tasks(&(iLocal_63[0]), 1, 0);
			}
			set_ped_ragdoll_on_collision(Global_35, 1, 0);
			set_ped_ragdoll_on_collision(&(iLocal_63[0]), 1, 0);
			set_ped_to_ragdoll(&(iLocal_63[0]), 3000, 5000, 0, false, false, false);
			func_11(&uLocal_1801, 1, 1);
			iVar0 = create_camera(26379945, false);
			set_cam_coord(iVar0, get_final_rendered_cam_coord());
			set_cam_rot(iVar0, get_final_rendered_cam_rot(2), 2);
			set_cam_fov(iVar0, get_final_rendered_cam_fov());
			set_cam_active(iVar0, true);
			render_script_cams(true, false, 3000, true, false, 0);
			_render_first_person_cam(0, 0, 3, 0, 0, 1);
			if (_does_anim_scene_exist(&(iLocal_141[1])))
			{
				_delete_anim_scene(&(iLocal_141[1]));
			}
			func_30(cParam0);
			func_1503(cParam0, "REV1_TRAIN_FAIL", "", 1, 0);
			func_134(cParam0, 30);
			iLocal_1971 = 1;
		}
	}
}

void func_1511(char[4] cParam0)
{
	if (!func_1353() && is_ped_on_mount(Global_35))
	{
		iVar0 = get_mount(Global_35);
		if (func_434(iVar0, 0))
		{
			if ((is_entity_touching_entity(iVar0, &(iLocal_63[0])) && !is_ped_still(iVar0)) && get_entity_speed(iVar0) > 2f)
			{
				func_1812(&(iLocal_63[0]), 0, 0);
			}
		}
	}
}

void func_1512(char[4] cParam0)
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
				if (func_2078(cParam0, cParam0->f_8269[iVar19], iVar16, iVar17, iVar18))
				{
					func_1422(cParam0->f_8269[iVar19]);
				}
				else if (func_2079(cParam0, cParam0->f_8269[iVar19], iVar16, iVar17, iVar18))
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
				if (func_2080(cParam0, cParam0->f_8269.f_641[iVar19], iVar16, iVar17, iVar18, 1))
				{
					func_2081(cParam0->f_8269.f_641[iVar19]);
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
				if (func_2080(cParam0, cParam0->f_8269.f_1282[iVar19], iVar16, iVar17, iVar18, 0))
				{
					if (func_211(cParam0->f_8269.f_1282[iVar19], 1))
					{
						if (func_210(cParam0->f_8269.f_1282[iVar19], 4))
						{
							func_2082(&(cParam0->f_8269));
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
				if (func_2078(cParam0, cParam0->f_8269.f_2243[iVar19], iVar16, iVar17, iVar18))
				{
					func_2083(cParam0, cParam0->f_8269.f_2243[iVar19], 1);
					func_494(cParam0->f_8269.f_2243[iVar19], 1);
				}
				else if (func_2079(cParam0, cParam0->f_8269.f_2243[iVar19], iVar16, iVar17, iVar18))
				{
					func_2083(cParam0, cParam0->f_8269.f_2243[iVar19], 0);
					func_494(cParam0->f_8269.f_2243[iVar19], 2);
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

bool func_1513(char[4] cParam0)
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
		return ((get_is_task_active(Global_35, 3) || func_1839(Global_35, -2017877118)) || _0x3ab6c7b0bb0df4b1(Global_35, -1));
	}
	return false;
}

void func_1514()
{
	_0x8910c24b7e0046ec();
	disable_control_action(0, -1404316431, false);
	func_1501(0);
	func_2084();
}

void func_1515(char[4] cParam0, int iParam1, int iParam2)
{
	func_2085(&(cParam0->f_1[func_132(iParam1)]->f_11), iParam2);
	if (iParam2 == 8388608)
	{
		_display_hud_component(-1679307491);
	}
}

void func_1516(var uParam0)
{
	if (func_512(uParam0, 32768))
	{
		return;
	}
	bVar0 = func_512(uParam0, 1024);
	if (func_512(uParam0, 128) || bVar0)
	{
		if (func_512(uParam0, 4096))
		{
			if (!func_512(uParam0, 2048))
			{
				iVar1 = get_blip_from_entity(*uParam0);
				if (does_blip_exist(iVar1))
				{
					_blip_set_modifier(iVar1, -1186550032);
				}
				func_2086(uParam0, 2048);
				return;
			}
		}
		else if (func_512(uParam0, 2048))
		{
			iVar2 = get_blip_from_entity(*uParam0);
			if (does_blip_exist(iVar2))
			{
				_set_blip_flash_style(iVar2, -1186550032);
			}
			func_2087(uParam0, 2048);
		}
		if (func_512(uParam0, 512))
		{
			if (func_513(uParam0->f_10))
			{
				if (func_886(Global_35, *uParam0, 150f, 1) || bVar0)
				{
					if (!func_2088(uParam0->f_10))
					{
						func_518(uParam0->f_10, 1);
						func_2089(uParam0->f_10, 0);
					}
				}
				else if ((func_2088(uParam0->f_10) && !bVar0) && !func_512(uParam0, 16384))
				{
					func_518(uParam0->f_10, 0);
					func_2089(uParam0->f_10, 1);
				}
			}
		}
		else if (!does_blip_exist(uParam0->f_8))
		{
			if (!does_blip_exist(get_blip_from_entity(*uParam0)))
			{
				if (func_886(Global_35, *uParam0, 150f, 1))
				{
					uParam0->f_8 = _blip_add_for_entity(422991367, *uParam0);
					if (!is_string_null_or_empty(uParam0->f_4))
					{
						set_blip_name_from_text_file(uParam0->f_8, uParam0->f_4);
					}
				}
			}
		}
		else if ((does_blip_exist(get_blip_from_entity(*uParam0)) && uParam0->f_8 != get_blip_from_entity(*uParam0)) || !func_886(Global_35, *uParam0, 150f, 1))
		{
			remove_blip(&(uParam0->f_8));
		}
	}
	else if (func_512(uParam0, 512))
	{
		if (func_513(uParam0->f_10))
		{
			if (func_2088(uParam0->f_10))
			{
				func_518(uParam0->f_10, 0);
				func_2089(uParam0->f_10, 1);
			}
		}
	}
	else if (does_blip_exist(uParam0->f_8))
	{
		remove_blip(&(uParam0->f_8));
	}
}

bool func_1517(int iParam0)
{
	return (iParam0 < func_391() && iParam0 >= 0);
}

int func_1518(int iParam0)
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

bool func_1519(int iParam0)
{
	return (iParam0 < 9 && iParam0 >= 0);
}

bool func_1520(char[4] cParam0, int iParam1, int iParam2)
{
	iVar0 = func_132(iParam1);
	if (!func_1517(iVar0))
	{
		return false;
	}
	iVar1 = func_1518(iParam2);
	if (!func_1519(iVar1))
	{
		return false;
	}
	return is_bit_set(cParam0->f_1[iVar0]->f_17, iVar1);
}

int func_1521(struct<2> Param0, int iParam2)
{
	if (!func_248(Param0))
	{
		return 0;
	}
	iVar0 = get_indexed_item_in_itemset(iParam2, Param0);
	iVar1 = iVar0;
	return iVar1;
}

void func_1522(char[4] cParam0)
{
	func_2090(cParam0);
	if (func_272(cParam0) == 1 && is_screen_faded_out())
	{
		_0x297b72e2af094742(6);
	}
	else if (func_272(cParam0) == 0 && !func_8(cParam0, 8))
	{
		func_894(cParam0);
	}
	func_51(&(cParam0->f_10792));
	func_2091(cParam0);
	func_2092(cParam0, 67108864);
	func_2092(cParam0, 8192);
	func_896(cParam0, 4);
	func_896(cParam0, 512);
	func_896(cParam0, 65536);
	func_896(cParam0, 1024);
	func_896(cParam0, 262144);
	func_896(cParam0, 16777216);
	func_896(cParam0, 64);
	func_258(cParam0, 128);
	func_99(cParam0, -2147483648);
	func_2093(cParam0, 1);
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
	func_551(&(cParam0->f_13106));
	func_213(&(cParam0->f_13112));
	func_2094(cParam0, func_121(cParam0, func_33(cParam0), 1));
	if (!func_121(cParam0, func_33(cParam0), 1024))
	{
		_display_hud_component(-1679307491);
	}
	if (!func_121(cParam0, func_33(cParam0), 32768))
	{
		func_228(1);
	}
	if (func_924(cParam0, func_35(cParam0)) != -1 && _0x62de46f061caa468() < func_924(cParam0, func_35(cParam0)))
	{
		_0xf008e0ba1fe1d644((func_924(cParam0, func_35(cParam0)) - _0x62de46f061caa468()));
	}
	if (_missiondata_timecycle_box_exists())
	{
		_missiondata_timecycle_box_delete();
	}
	Var0 = { func_2095(cParam0) };
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
	func_2096(cParam0);
	if (func_33(cParam0) == 25 && func_82(32768))
	{
		func_2097(cParam0, 16);
	}
	if (func_121(cParam0, func_33(cParam0), 512))
	{
		func_2098(1f, 0f, 0f, 0f);
	}
	else
	{
		func_44();
	}
}

bool func_1523(char[4] cParam0)
{
	if (func_120(cParam0, 4) && !func_29())
	{
		return true;
	}
	return false;
}

void func_1524(char[4] cParam0)
{
	func_2043(cParam0);
}

void func_1525(var uParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < 65)
	{
		func_1416(uParam0->f_13[iVar0], iParam1);
		iVar0++;
	}
}

void func_1526(char[4] cParam0)
{
	func_2099(cParam0);
	if (_get_ped_crouch_movement(Global_35))
	{
		func_99(cParam0, 1024);
	}
}

bool func_1527(var uParam0)
{
	return (_does_anim_scene_exist(uParam0->f_804) && _is_anim_scene_started(uParam0->f_804, false));
}

bool func_1528(char[4] cParam0)
{
	return true;
}

void func_1529(char[4] cParam0, char[32] cParam1)
{
	cParam0->f_10784 = { cParam1 };
}

bool func_1530(var uParam0, int iParam1)
{
	iVar0 = func_2100(iParam1);
	return (uParam0 && iVar0) != 0;
}

int func_1531(char[4] cParam0, var uParam1, bool bParam2)
{
	if (Global_1935630->f_12)
	{
		return 0;
	}
	if (func_2101(cParam0, uParam1))
	{
		return 0;
	}
	if (func_513(uParam1->f_10))
	{
		set_ped_reset_flag(get_ped_index_from_entity_index(*uParam1), 53, true);
	}
	func_1516(uParam1);
	func_2102(uParam1);
	if (!bParam2)
	{
		func_2103(cParam0, uParam1);
	}
	iVar0 = 0;
	while (iVar0 < get_number_of_events(0))
	{
		switch (get_event_at_index(0, iVar0))
		{
			case -140551285:
				func_2104(cParam0, uParam1, iVar0);
				break;
			case 402722103:
			case 2145012826:
				func_2105(cParam0, uParam1, iVar0);
				break;
		}
		iVar0++;
	}
	func_2106(cParam0, uParam1);
	func_2107(uParam1);
	return 0;
}

bool func_1532(char[4] cParam0)
{
	return true;
}

int func_1533(int iParam0)
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
						*iParam0 = func_2108(vVar0.z);
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

void func_1534(char[4] cParam0, char[4] cParam1, bool bParam2, int iParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, bool bParam9, bool bParam10)
{
	func_1503(cParam0, &cParam1, "", bParam9, bParam10);
}

bool func_1535(char[4] cParam0, char[4] cParam1)
{
	if (!func_121(cParam0, func_33(cParam0), 256))
	{
		if (!func_121(cParam0, func_33(cParam0), 65536))
		{
			if (func_2109(cParam1))
			{
				func_140(cParam0, func_33(cParam0), 131072);
			}
			func_140(cParam0, func_33(cParam0), 65536);
		}
		if (func_121(cParam0, func_33(cParam0), 131072))
		{
			if (!func_1467(&(cParam0->f_10792), 1))
			{
				return false;
			}
			else
			{
				func_2110(&(cParam0->f_7375), &(cParam0->f_10792));
				func_140(cParam0, func_33(cParam0), 256);
			}
		}
		else
		{
			func_140(cParam0, func_33(cParam0), 256);
		}
	}
	return func_2046(&(cParam0->f_7375), cParam1, (func_8(cParam0, 33554432) || (is_screen_faded_out() && !func_8(cParam0, 1073741824))), 1);
}

void func_1536(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, int iParam12, int iParam13)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_840((*uParam0)[iVar0]->f_2, iParam12))
		{
			func_2111(&((*uParam0)[iVar0]->f_2), iParam12);
			if (func_2112(&((*uParam0)[iVar0]->f_2), iParam13))
			{
				func_2113((*uParam0)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (func_840((*uParam1)[iVar0]->f_4, iParam12))
		{
			func_2111(&((*uParam1)[iVar0]->f_4), iParam12);
			if (func_2112(&((*uParam1)[iVar0]->f_4), iParam13))
			{
				func_2114((*uParam1)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam2)
	{
		if (func_840((*uParam2)[iVar0]->f_2, iParam12))
		{
			func_2111(&((*uParam2)[iVar0]->f_2), iParam12);
			if (func_2112(&((*uParam2)[iVar0]->f_2), iParam13))
			{
				func_2115((*uParam2)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam3)
	{
		if (func_840((*uParam3)[iVar0]->f_2, iParam12))
		{
			func_2111(&((*uParam3)[iVar0]->f_2), iParam12);
			if (func_2112(&((*uParam3)[iVar0]->f_2), iParam13))
			{
				func_2116((*uParam3)[iVar0]);
			}
		}
		iVar0++;
	}
	if (func_840(uParam4->f_1, iParam12))
	{
		func_2111(&(uParam4->f_1), iParam12);
		if (func_2112(&(uParam4->f_1), iParam13))
		{
			func_2117(uParam4);
		}
	}
	iVar0 = 0;
	while (iVar0 < *uParam5)
	{
		if (func_840((*uParam5)[iVar0]->f_3, iParam12))
		{
			func_2111(&((*uParam5)[iVar0]->f_3), iParam12);
			if (func_2112(&((*uParam5)[iVar0]->f_3), iParam13))
			{
				func_2118((*uParam5)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam6)
	{
		if (func_840((*uParam6)[iVar0]->f_3, iParam12))
		{
			func_2111(&((*uParam6)[iVar0]->f_3), iParam12);
			if (func_2112(&((*uParam6)[iVar0]->f_3), iParam13))
			{
				func_2119((*uParam6)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam7)
	{
		if (func_840((*uParam7)[iVar0]->f_4, iParam12))
		{
			func_2111(&((*uParam7)[iVar0]->f_4), iParam12);
			if (func_2112(&((*uParam7)[iVar0]->f_4), iParam13))
			{
				func_2120((*uParam7)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam8)
	{
		if (func_840((*uParam8)[iVar0]->f_2, iParam12))
		{
			func_2111(&((*uParam8)[iVar0]->f_2), iParam12);
			if (func_2112(&((*uParam8)[iVar0]->f_2), iParam13))
			{
				func_2121((*uParam8)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam9)
	{
		if (func_840((*uParam9)[iVar0]->f_2, iParam12))
		{
			func_2111(&((*uParam9)[iVar0]->f_2), iParam12);
			if (func_2112(&((*uParam9)[iVar0]->f_2), iParam13))
			{
				func_2122((*uParam9)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam10)
	{
		if (func_840((*uParam10)[iVar0]->f_3, iParam12))
		{
			func_2111(&((*uParam10)[iVar0]->f_3), iParam12);
			if (func_2112(&((*uParam10)[iVar0]->f_3), iParam13))
			{
				func_2123((*uParam10)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam11)
	{
		if (func_840((*uParam11)[iVar0]->f_2, iParam12))
		{
			func_2111(&((*uParam11)[iVar0]->f_2), iParam12);
			if (func_2112(&((*uParam11)[iVar0]->f_2), iParam13))
			{
				func_2124((*uParam11)[iVar0]);
			}
		}
		iVar0++;
	}
}

void func_1537(char[4] cParam0)
{
	iVar0 = func_2125(cParam0);
	_0x50b72a754ee64a71(iVar0);
}

void func_1538(bool bParam0, bool bParam1)
{
	if (func_2126(255) == 4)
	{
		return;
	}
	if (func_390(get_entity_coords(get_player_ped(player_id()), false, false)))
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
			func_2127(0, 0, 0, 1);
		}
		func_284(0);
		func_2128(&(Global_1109400->f_389));
		Global_1109400->f_389 = 0f;
		Global_1109400->f_389.f_5 = 1;
		Global_1109400->f_389.f_16 = 0;
		Global_1109400->f_389.f_17.f_6 = { get_entity_coords(get_player_ped(player_id()), false, false) };
		Global_1109400->f_389.f_17.f_3 = { 0f, 0f, 0f };
		Global_1109400->f_389.f_17 = { Global_1899378->f_23.f_1, Global_1899378->f_23.f_1, Global_1899378->f_23.f_1 };
		Global_1109400->f_389.f_17.f_9 = -432403087;
		func_2129(&(Global_1109400->f_428));
		Global_1109400->f_428.f_6 = { Global_1109400->f_389.f_17.f_6 };
		Global_1109400->f_428 = Global_1109400->f_389;
		Global_1109400->f_428.f_5 = 1;
		if (bParam1)
		{
			Global_1109400->f_22.f_16 = 0;
			Global_1109400->f_22.f_17 = 0;
		}
	}
	func_2130(Global_1109400->f_389, 42);
	func_2131(Global_1109400->f_428, 42);
}

bool func_1539(bool bParam0, bool bParam1, float fParam2)
{
	if (bParam0)
	{
		return bParam1;
	}
	return fParam2;
}

int func_1540(bool bParam0, bool bParam1, bool bParam2)
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

var func_1541(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

char* func_1542(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5)
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
	return _create_var_string(2, func_2132(sParam1));
}

void func_1543(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_1544(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_1545(int iParam0)
{
	return ((iParam0 > -1 && iParam0 < 32) && _does_volume_exist(&(iLocal_108[iParam0])));
}

bool func_1546(int iParam0)
{
	return ((iParam0 > -1 && iParam0 < 10) && does_entity_exist(&(iLocal_97[iParam0])));
}

bool func_1547(int iParam0, int iParam1)
{
	*iParam1 = -1;
	if (iParam0 == -1 || iParam0 >= 33)
	{
		return false;
	}
	*iParam1 = &Global_1899528->f_11[iParam0];
	return *iParam1 != -1;
}

void func_1548(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_40.f_7862[iParam0] = iParam1;
		return;
	}
	Global_42606[iParam0] = iParam1;
	return;
}

void func_1549(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_40.f_7862[iParam0]->f_1 = iParam1;
		return;
	}
	Global_42606[iParam0]->f_1 = iParam1;
	return;
}

void func_1550(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_40.f_7862[iParam0]->f_2 = iParam1;
		return;
	}
	Global_42606[iParam0]->f_2 = iParam1;
	return;
}

int func_1551(int iParam0)
{
	if (func_468(iParam0))
	{
		return 0;
	}
	if (func_465(iParam0, 0))
	{
		func_985(iParam0);
		return 1;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < Global_40.f_450)
		{
			if (&Global_40.f_450[iVar0] == -1)
			{
				func_985(iParam0);
				Global_40.f_450[iVar0] = iParam0;
				Global_40.f_1094++;
				Global_1430257 = iVar0;
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

bool func_1552(int iParam0)
{
	return func_289(iParam0) == 0;
}

void func_1553(int iParam0, bool bParam1)
{
	if (!func_183(iParam0))
	{
		return;
	}
	if (!func_1552(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (func_186(iParam0) == 0)
		{
		}
		else if (!_0x01f4d242765c6b24(func_186(iParam0)))
		{
			_0xca41e86545413b5b(func_188(iParam0), func_265(iParam0), func_308(iParam0), func_186(iParam0), Global_36);
		}
	}
	func_195(iParam0, 1);
	bParam1 = bParam1;
}

void func_1554(int iParam0, bool bParam1)
{
	if ((*Global_1898346)[iParam0]->f_2 == 0 || bParam1)
	{
		(*Global_1898346)[iParam0]->f_2 = func_475(Global_1898330[iParam0]);
		func_2133((*Global_1898346)[iParam0]->f_2, &((*Global_1898346)[iParam0]->f_4), &((*Global_1898346)[iParam0]->f_5), &((*Global_1898346)[iParam0]->f_3));
	}
}

void func_1555(int iParam0)
{
	if (!func_183(iParam0))
	{
		return;
	}
	if (!func_185(iParam0))
	{
		return;
	}
	func_195(iParam0, 2);
}

bool func_1556(int iParam0)
{
	if (iParam0 == -1)
	{
		return true;
	}
	if (iParam0 == 0)
	{
		return false;
	}
	iVar0 = func_697(func_278());
	if (func_2134(iParam0, 1))
	{
		if (iVar0 >= 6 && iVar0 < 12)
		{
			return true;
		}
	}
	if (func_2134(iParam0, 2))
	{
		if (iVar0 >= 12 && iVar0 < 18)
		{
			return true;
		}
	}
	if (func_2134(iParam0, 4096))
	{
		if (iVar0 >= 11 && iVar0 < 14)
		{
			return true;
		}
	}
	if (func_2134(iParam0, 4))
	{
		if (iVar0 >= 18 && iVar0 < 24)
		{
			return true;
		}
	}
	if (func_2134(iParam0, 8))
	{
		if (iVar0 >= 0 && iVar0 < 6)
		{
			return true;
		}
	}
	if (func_2134(iParam0, 16))
	{
		if (iVar0 >= 20 || iVar0 < 7)
		{
			return true;
		}
	}
	if (func_2134(iParam0, 1024))
	{
		if (iVar0 >= 5 && iVar0 < 12)
		{
			return true;
		}
	}
	if (func_2134(iParam0, 32))
	{
		if (iVar0 >= 5 && iVar0 < 22)
		{
			return true;
		}
	}
	if (func_2134(iParam0, 64))
	{
		if (iVar0 >= 6 && iVar0 < 20)
		{
			return true;
		}
	}
	if (func_2134(iParam0, 128))
	{
		if (iVar0 >= 21 || iVar0 < 5)
		{
			return true;
		}
	}
	if (func_2134(iParam0, 256))
	{
		if (iVar0 >= 22 && iVar0 < 24)
		{
			return true;
		}
	}
	if (func_2134(iParam0, 512))
	{
		if (iVar0 >= 0 && iVar0 < 5)
		{
			return true;
		}
	}
	if (func_2134(iParam0, 8192))
	{
		if (iVar0 >= 6 && iVar0 < 20)
		{
			return true;
		}
	}
	if (func_2134(iParam0, 2048))
	{
		if (iVar0 >= 1 && iVar0 < 3)
		{
			return true;
		}
	}
	if (func_2134(iParam0, 16384))
	{
		if (iVar0 >= 6 && iVar0 < 24)
		{
			return true;
		}
	}
	if (func_2134(iParam0, 32768))
	{
		if (iVar0 >= 21 || iVar0 < 6)
		{
			return true;
		}
	}
	if (func_2134(iParam0, 65536))
	{
		if (iVar0 >= 18 && iVar0 < 19)
		{
			return true;
		}
	}
	return false;
}

int func_1557(int iParam0)
{
	return shift_left(1, iParam0);
}

void func_1558(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 || iParam1);
}

int func_1559()
{
	return Global_40.f_4283.f_1;
}

bool func_1560(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (func_20() != -1)
	{
		return true;
	}
	if (iParam2 == 0 && func_190(0, 1, 1))
	{
		return false;
	}
	if (&Global_1879534)
	{
		return false;
	}
	if (func_2135(iParam0, iParam1))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (func_2136(iVar0, &iParam0))
		{
			Global_40.f_4942[iVar0]->f_59 = iParam1;
			if (iParam3 == iParam4)
			{
				func_710(iVar0, 512, 1);
			}
			else
			{
				func_1025(iVar0, 512, 1);
			}
		}
		iVar0++;
	}
	return true;
}

void func_1561(int iParam0)
{
	if (_does_volume_exist((*Global_1347702)[iParam0]->f_41))
	{
		func_2137((*Global_1347702)[iParam0]->f_41);
		if (iParam0 == 91 || iParam0 == 129)
		{
			_0xd17672447692478e((*Global_1347702)[iParam0]->f_41, 0);
		}
		_delete_volume((*Global_1347702)[iParam0]->f_41);
	}
}

void func_1562(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_1563(int iParam0, bool bParam1)
{
	if (!func_266(iParam0))
	{
		return;
	}
	if (does_blip_exist((*Global_1347702)[iParam0]->f_37))
	{
		func_2138(&((*Global_1347702)[iParam0]->f_14));
		func_987(&((*Global_1347702)[iParam0]->f_13), 16);
		func_2139(iParam0);
		if ((!func_2140(player_id(), 1, 0, 1) || Global_43891) || bParam1)
		{
			set_this_script_can_remove_blips_created_by_any_script(true);
			_0x2f901291ef177b02((*Global_1347702)[iParam0]->f_40, 0);
			func_987(&((*Global_1347702)[iParam0]->f_13), 4096);
			func_448(&((*Global_1347702)[iParam0]->f_37));
		}
		else
		{
			func_2141(iParam0, 16384);
			func_2142(iParam0, 1, func_990(iParam0));
		}
	}
}

void func_1564(int iParam0)
{
	if (func_2143(iParam0, &iVar1, &iVar0))
	{
		if (func_2144(iVar1, iVar0, 1))
		{
			func_2145(iVar1, iVar0);
		}
	}
}

bool func_1565(int iParam0, var uParam1)
{
	if (iParam0 == 90)
	{
		if (func_354((*Global_1347702)[iParam0]->f_15) != 0)
		{
			(*Global_1347702)[iParam0]->f_18 = 80f;
			*uParam1 = { 1015.113f, 159.7295f, 103.0175f };
			return true;
		}
	}
	else if (iParam0 == 96)
	{
		if ((*Global_1347702)[iParam0]->f_13 & 65536 != 0)
		{
			*uParam1 = { -1646.77f, -1362.89f, 83.4f };
			return true;
		}
		else
		{
			*uParam1 = { -1629.71f, -1338.377f, 82.0174f };
			return true;
		}
	}
	return false;
}

bool func_1566(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	return func_1552((*Global_1835011)[iParam0]->f_1);
}

bool func_1567(int iParam0, bool bParam1, bool bParam2)
{
	if (func_944(iParam0, bParam1, bParam2, 1))
	{
		return true;
	}
	return false;
}

bool func_1568(int iParam0)
{
	return func_989(iParam0);
}

Vector3 func_1569(int iParam0)
{
	switch (iParam0)
	{
		case 8:
			return 880.67f, 1267.78f, 233.66f;
		default:
			break;
	}
	return (*Global_1835011)[iParam0]->f_18;
}

int func_1570(int iParam0, float fParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (func_82(32768))
	{
		return 0;
	}
	iVar0 = func_20();
	if ((bParam4 && func_1957(&((*Global_1835011)[iParam0]->f_29), 512)) && !func_1957(&((*Global_1835011)[iParam0]->f_29), 1024))
	{
		if (func_207())
		{
			return 0;
		}
	}
	if ((*Global_1835011)[iParam0]->f_71)
	{
		return 0;
	}
	if (!func_2146(iParam0))
	{
		return 0;
	}
	if (iVar0 == -1)
	{
		if (iParam0 == 19)
		{
			if ((func_320((*Global_1835011)[20]->f_1, 1) && Global_1879514->f_1 == (*Global_1835011)[20]->f_1) && (get_game_timer() - func_2147()) <= 2000)
			{
				return 0;
			}
		}
		else if (iParam0 == 20)
		{
			if ((func_320((*Global_1835011)[19]->f_1, 1) && Global_1879514->f_1 == (*Global_1835011)[19]->f_1) && (get_game_timer() - func_2147()) <= 2000)
			{
				return 0;
			}
		}
		else if (iParam0 == 14)
		{
			if (!func_320((*Global_1347702)[62]->f_15, 1))
			{
				return 0;
			}
		}
	}
	if (!does_blip_exist((*Global_1835011)[iParam0]->f_27))
	{
		bVar3 = (*Global_1835011)[iParam0]->f_70;
		if (func_1575(iParam0, iVar0) && !bVar3)
		{
			if (bParam3 || func_2148((*Global_1835011)[iParam0], 2))
			{
				if (func_818(iParam0))
				{
					(*Global_1835011)[iParam0]->f_27 = _blip_add_for_coord(1673015813, func_819(iParam0));
					bVar2 = true;
				}
				else
				{
					(*Global_1835011)[iParam0]->f_27 = _blip_add_for_coord(1673015813, func_387(iParam0));
				}
			}
			else if (func_818(iParam0))
			{
				(*Global_1835011)[iParam0]->f_27 = _blip_add_for_area(1673015813, func_819(iParam0), func_2149(iParam0), func_2150(iParam0));
				bVar2 = true;
			}
			else
			{
				(*Global_1835011)[iParam0]->f_27 = _blip_add_for_radius(1673015813, func_2151(iParam0), func_2152(iParam0));
			}
		}
		else if (bVar3)
		{
			if (!func_818(iParam0))
			{
				(*Global_1835011)[iParam0]->f_27 = _blip_add_for_coord(1673015813, func_1569(iParam0));
			}
			else
			{
				(*Global_1835011)[iParam0]->f_27 = _blip_add_for_coord(1673015813, func_819(iParam0));
				bVar2 = true;
			}
		}
		else if (func_1568(iParam0))
		{
			if (iParam0 == 7)
			{
				(*Global_1835011)[iParam0]->f_27 = _blip_add_for_coord(-1337945352, func_387(iParam0));
			}
			else
			{
				(*Global_1835011)[iParam0]->f_27 = _blip_add_for_coord(1673015813, func_387(iParam0));
			}
		}
		else
		{
			(*Global_1835011)[iParam0]->f_27 = _blip_add_for_coord(1673015813, func_387(iParam0));
		}
		(*Global_1835011)[iParam0]->f_28 = 1673015813;
		bVar1 = true;
		if (iParam2 != -1)
		{
			if (bVar2 || func_818(iParam0))
			{
				func_968(iParam2, 4194304);
			}
			else
			{
				func_1580(iParam2, 4194304);
			}
		}
		set_blip_flash_timer((*Global_1835011)[iParam0]->f_27, 63, iParam0);
	}
	if (!does_blip_exist((*Global_1835011)[iParam0]->f_27))
	{
		return 0;
	}
	if (bVar1)
	{
		set_blip_sprite((*Global_1835011)[iParam0]->f_27, (*Global_1835011)[iParam0]->f_26, true);
		if (iVar0 != -1)
		{
			_set_blip_name_from_player_string((*Global_1835011)[iParam0]->f_27, &((*Global_1835011)[iParam0]->f_39));
		}
		if (!func_1957(&((*Global_1835011)[iParam0]->f_29), 1024) && !func_1568(iParam0))
		{
			_blip_set_modifier((*Global_1835011)[iParam0]->f_27, 580546400);
			func_2153(&((*Global_1835011)[iParam0]->f_29), 1024);
		}
	}
	if (iVar0 != -1)
	{
		return 1;
	}
	if (!func_1568(iParam0))
	{
		_blip_set_modifier((*Global_1835011)[iParam0]->f_27, -1986290853);
	}
	if (bParam3 || func_2148((*Global_1835011)[iParam0], 2))
	{
		_blip_set_modifier((*Global_1835011)[iParam0]->f_27, 724623647);
	}
	else
	{
		_set_blip_flash_style((*Global_1835011)[iParam0]->f_27, 724623647);
	}
	iVar4 = func_2154(Global_40.f_4283);
	if (func_240(iVar4) && func_972((*Global_1888801)[iVar4]->f_13))
	{
		bVar5 = true;
		bVar6 = func_2155(iVar4);
	}
	if (func_2156(iParam0, bVar5, iVar4))
	{
		func_2157((*Global_1835011)[iParam0]->f_1, bVar6, bVar5, iVar4);
	}
	if (iParam0 == 7 && !func_1226(579))
	{
		func_2158(579, (*Global_1835011)[iParam0]->f_27, 0);
	}
	if (iParam0 == 2)
	{
		return 1;
	}
	if (((((((func_1957(&((*Global_1835011)[iParam0]->f_29), 4096) && !func_1957(&((*Global_1835011)[iParam0]->f_29), 8192)) && IntToFloat(func_2147()) >= 10f) && !Global_1935630->f_12) && !Global_16) && !func_2159(Global_35, -2016812721)) && !_is_ped_using_scenario_hash(Global_35, -1054012177)) && !_is_ped_using_scenario_hash(Global_35, 1097070152))
	{
		if (!func_1575(iParam0, iVar0) || (fParam1 >= (func_2160(iParam0) * func_2160(iParam0)) && !(*Global_1835011)[iParam0]->f_70))
		{
			MemCopy(&cVar7, {(*Global_1835011)[iParam0]->f_8}, 2);
			StringConCat(&cVar7, "_FIRST", 16);
			func_715(&cVar7, 10000, 0, 0, 0, 1);
			func_2153(&((*Global_1835011)[iParam0]->f_29), 8192);
		}
	}
	return 1;
}

void func_1571(var uParam0, int iParam1)
{
	uParam0->f_63 = (uParam0->f_63 || iParam1);
}

int func_1572(int iParam0)
{
	if (!func_182(iParam0))
	{
		return 0;
	}
	return (*Global_1835011)[iParam0]->f_30;
}

bool func_1573(int iParam0, bool bParam1, bool bParam2)
{
	if (is_screen_faded_out())
	{
		return false;
	}
	iVar0 = func_1572(iParam0);
	iVar1 = 0;
	while (iVar1 < 27)
	{
		if (func_2136(iVar1, &iVar0))
		{
			iVar2 = func_550(func_883(iParam0));
			if (is_entity_dead(iVar2))
			{
			}
			else
			{
				if (bParam1 && func_1020(iVar1, 67, 1))
				{
					return true;
				}
				if (bParam2 && func_1020(iVar1, 47, 1))
				{
					return true;
				}
				if (!_0x5102307ce88798eb(iVar2))
				{
					request_ped_visibility_tracking(iVar2);
				}
				if (is_tracked_ped_visible(iVar2))
				{
					return true;
				}
			}
		}
		iVar1++;
	}
	return false;
}

void func_1574(int iParam0)
{
	iVar0 = func_1572(iParam0);
	iVar1 = 0;
	while (iVar1 < 27)
	{
		if (func_2136(iVar1, &iVar0))
		{
			iVar2 = func_550(func_883(iParam0));
			if (is_entity_dead(iVar2))
			{
			}
			else if (_0x5102307ce88798eb(iVar2))
			{
				_0x3088634cf8c819cf(iVar2);
			}
		}
		iVar1++;
	}
}

bool func_1575(int iParam0, int iParam1)
{
	if (iParam1 != -1)
	{
		return false;
	}
	if (func_818(iParam0))
	{
		switch (iParam0)
		{
			case 14:
			case 34:
				return false;
		}
	}
	switch (iParam0)
	{
		case 5:
		case 8:
		case 10:
		case 12:
		case 13:
		case 14:
		case 18:
		case 21:
		case 27:
		case 28:
		case 29:
		case 34:
		case 40:
		case 41:
		case 44:
		case 46:
		case 48:
		case 51:
		case 54:
		case 55:
		case 63:
			return true;
	}
	return false;
}

void func_1576(int iParam0)
{
	func_113(1);
}

bool func_1577(int iParam0)
{
	return (*Global_1835011)[iParam0]->f_63 & 64512 != 0;
}

bool func_1578(int iParam0, int iParam1)
{
	return (func_992(iParam0) && ((*Global_1898346)[iParam0]->f_1 && iParam1) != 0);
}

bool func_1579(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	return func_184((*Global_1835011)[iParam0]->f_1);
}

void func_1580(int iParam0, int iParam1)
{
	if (!func_992(iParam0))
	{
		return;
	}
	(*Global_1898346)[iParam0]->f_1 = ((*Global_1898346)[iParam0]->f_1 - ((*Global_1898346)[iParam0]->f_1 && iParam1));
}

int func_1581(int iParam0)
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

int func_1582(int iParam0)
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

void func_1583(int iParam0, int iParam1)
{
	Var0 = { *Global_1898164->f_1[iParam0] };
	*Global_1898164->f_1[iParam0] = { *Global_1898164->f_1[iParam1] };
	*Global_1898164->f_1[iParam1] = { Var0 };
}

int func_1584(int iParam0, int iParam1, int iParam2)
{
	iVar0 = func_2161(iParam0, 1);
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
	return 1;
}

void func_1585(int iParam0)
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

Vector3 func_1586(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return -329.7587f, -360.6174f, 88.0648f;
				case 1:
					return -325.3439f, -357.7183f, 88.0647f;
				case 2:
					return -327.5966f, -357.7596f, 88.854f;
				case 3:
					return -353.9135f, -361.7371f, 86.2723f;
				case 4:
					return -328.5955f, -358.8191f, 87.1241f;
				case 5:
					return -328.8708f, -357.4108f, 87.0647f;
				case 6:
					return -326.7283f, -356.9244f, 87.0636f;
				case 7:
					return -372.8347f, -446.4283f, 79.2332f;
				case 8:
					return -352.517f, -364.2367f, 86.4097f;
				case 9:
					return -353.7347f, -363.3938f, 86.934f;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return -326.2787f, -357.7494f, 88.0647f;
				case 1:
					return -373.76f, -447.2654f, 79.1437f;
				case 2:
					return -328.1185f, -356.5518f, 88.0647f;
				case 3:
					return -329.117f, -358.1258f, 88.0647f;
				case 4:
					return -323.1261f, -355.561f, 87.0123f;
				case 5:
					return -319.7855f, -361.2188f, 87.4965f;
				case 6:
					return -321.13f, -362.1401f, 87.0272f;
				case 7:
					return -344.054f, -355.4772f, 87.0286f;
				case 8:
					return -326.1425f, -359.035f, 87.0749f;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return -363.0022f, -350.4443f, 86.6229f;
				case 1:
					return -375.596f, -341.5357f, 86.55f;
				case 2:
					return -374.1313f, -346.2575f, 86.1046f;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return -145.3057f, -40.3963f, 95.5371f;
				case 1:
					return -632.173f, -494.9077f, 77.4471f;
				case 2:
					return -633.5507f, -495.6329f, 77.4529f;
				case 3:
					return -632.2953f, -497.3464f, 77.1755f;
				case 4:
					return -631.9053f, -498.1629f, 77.1756f;
				case 5:
					return -579.0205f, -463.9574f, 79.2787f;
				case 6:
					return -637.5873f, -500.6491f, 76.9958f;
				case 7:
					return -385.1962f, -346.9146f, 86.2465f;
				case 8:
					return -385.8962f, -350.3146f, 86.4465f;
				case 9:
					return -381.2703f, -350.1903f, 86.0308f;
				case 10:
					return -382.3886f, -346.8528f, 86.2555f;
				case 11:
					return -377.2293f, -350.3303f, 86.3563f;
				case 12:
					return -383.6021f, -352.9586f, 85.8917f;
				case 13:
					return -383.3549f, -355.7176f, 85.9134f;
				case 14:
					return -379.1974f, -344.4701f, 86.4251f;
				case 15:
					return -379.2602f, -349.8682f, 86.2279f;
				case 16:
					return -376.4586f, -353.7125f, 85.9755f;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return -568.284f, -460.1127f, 79.4226f;
				case 1:
					return -588.0819f, -475.6169f, 78.6367f;
				case 2:
					return -601.2512f, -482.0385f, 78.1935f;
				case 3:
					return -632.2962f, -497.914f, 77.2134f;
				case 4:
					return -994.3176f, -631.049f, 73.8723f;
				case 5:
					return -776.3482f, -571.0222f, 72.4731f;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					return -325.0136f, -421.6423f, 78.0595f;
				case 1:
					return -409.2943f, -426.0818f, 71.1543f;
				case 2:
					return -416.9436f, -454.675f, 77.6655f;
				case 3:
					return -397.3474f, -458.7846f, 75.8914f;
				case 4:
					return -424.81f, -454.6858f, 77.818f;
				case 5:
					return -410.1712f, -454.3669f, 77.1993f;
				case 6:
					return -420.6324f, -460.3302f, 76.3531f;
				case 7:
					return -410.6018f, -463.929f, 74.7526f;
				case 8:
					return -401.6326f, -457.7552f, 75.3526f;
				case 9:
					return -397.6188f, -451.9666f, 75.9737f;
				case 10:
					return -393.8607f, -461.2527f, 75.8751f;
				case 11:
					return -403.2936f, -459.4503f, 76.1822f;
				case 12:
					return -417.4779f, -448.9644f, 78.9763f;
				case 13:
					return -416.4429f, -457.7646f, 76.7352f;
				case 14:
					return -405.7544f, -461.5807f, 74.8876f;
				case 15:
					return -403.6339f, -456.1991f, 75.8002f;
				case 16:
					return -411.1267f, -460.7616f, 75.5042f;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					return -449.1896f, -323.0737f, 79.0297f;
				case 1:
					return -588.2336f, -475.5165f, 78.6367f;
			}
			break;
		case 7:
			switch (iParam1)
			{
				case 0:
					return -326.7067f, -358.6815f, 87.0717f;
				case 1:
					return -325.9178f, -357.3014f, 87.0651f;
				case 2:
					return -322.8134f, -355.9584f, 86.9966f;
				case 3:
					return -357.1765f, -349.6709f, 86.9783f;
				case 4:
					return -356.4987f, -360.4549f, 86.2573f;
				case 5:
					return -371.1636f, -365.3655f, 85.6809f;
				case 6:
					return -532.5504f, -443.284f, 80.4218f;
				case 7:
					return -604.9207f, -482.2554f, 78.099f;
				case 8:
					return -144.6996f, -40.3315f, 94.5197f;
			}
			break;
	}
	return 0f, 0f, 0f;
}

float func_1587(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 294.0677f;
				case 1:
					return 120.4094f;
				case 2:
					return 130.2149f;
				case 3:
					return 295.6601f;
				case 4:
					return 160.56f;
				case 5:
					return 76.32f;
				case 6:
					return -43.56f;
				case 7:
					return 132.48f;
				case 8:
					return 20.88f;
				case 9:
					return 295.4f;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 94.6041f;
				case 1:
					return -47f;
				case 2:
					return 208.6854f;
				case 3:
					return 279.7821f;
				case 4:
					return 32.4f;
				case 5:
					return 75.7201f;
				case 6:
					return 334.1857f;
				case 7:
					return 27.1153f;
				case 8:
					return 243.8065f;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return 60.4645f;
				case 1:
					return -69.12f;
				case 2:
					return 292.7231f;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return 86.2271f;
				case 1:
					return 28.8f;
				case 2:
					return 28.8f;
				case 3:
					return 205.2f;
				case 4:
					return 28.8f;
				case 5:
					return 348.48f;
				case 6:
					return -62f;
				case 7:
					return 153.36f;
				case 8:
					return 307.44f;
				case 9:
					return 182.9573f;
				case 10:
					return 253.5695f;
				case 11:
					return 315.7113f;
				case 12:
					return 21.4061f;
				case 13:
					return 77.332f;
				case 14:
					return 159.2319f;
				case 15:
					return 344.8323f;
				case 16:
					return 31.0278f;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return 144f;
				case 1:
					return 117.1077f;
				case 2:
					return 117.8424f;
				case 3:
					return 117.235f;
				case 4:
					return 258.8892f;
				case 5:
					return 297.36f;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					return 109.3865f;
				case 1:
					return 162.5568f;
				case 2:
					return 318.0768f;
				case 3:
					return -2.3232f;
				case 4:
					return 46.7801f;
				case 5:
					return 313.0368f;
				case 6:
					return 18.6849f;
				case 7:
					return 18.6849f;
				case 8:
					return 18.5849f;
				case 9:
					return 190.0126f;
				case 10:
					return 190.0126f;
				case 11:
					return 140.0126f;
				case 12:
					return 124.08f;
				case 13:
					return 125.28f;
				case 14:
					return 125.28f;
				case 15:
					return 125.28f;
				case 16:
					return 125.28f;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					return 138.1869f;
				case 1:
					return 117.1077f;
			}
			break;
		case 7:
			switch (iParam1)
			{
				case 0:
					return 32.4f;
				case 1:
					return 110.16f;
				case 2:
					return 25.92f;
				case 3:
					return 108.72f;
				case 4:
					return 202.32f;
				case 5:
					return 117.36f;
				case 6:
					return 115.92f;
				case 7:
					return 296.64f;
				case 8:
					return 270f;
			}
			break;
	}
	return 0f;
}

void func_1588()
{
	if (func_20() != -1)
	{
		return;
	}
	if (!func_389())
	{
		return;
	}
	func_2162(&(Global_40.f_40));
}

void func_1589()
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

bool func_1590()
{
	return !func_390(Global_1310720->f_1);
}

int func_1591()
{
	return Global_40.f_4283.f_4;
}

void func_1592(vector3 vParam0, var uParam3, var uParam4)
{
	fVar0 = 1E+07f;
	fVar1 = 1E+07f;
	if (func_2163())
	{
		fVar0 = func_1036(vParam0, Global_40.f_6);
	}
	if (func_2164(33554432))
	{
		if (!func_2165(Global_40.f_2, 0f, 0f, 0f, 1056964608, 1))
		{
			fVar1 = func_1036(vParam0, Global_40.f_2);
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

float func_1593(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist2(vParam0, vParam3);
}

void func_1594()
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
	fVar0 = (fVar0 + (0.9259259f * to_float(func_2166(909007663, 1325140787))));
	fVar0 = (fVar0 + (0.2525252f * to_float(func_2166(909007663, 2101241783))));
	fVar0 = (fVar0 + (0.2923976f * to_float(func_2166(909007663, -1296936294))));
	fVar0 = (fVar0 + (0.462963f * to_float(func_2166(909007663, -798388728))));
	fVar0 = (fVar0 + (0.9259259f * to_float(func_2166(909007663, -1787586531))));
	fVar0 = (fVar0 + (0.308642f * to_float(func_2166(909007663, -1002834519))));
	fVar0 = (fVar0 + (5.555555f * to_float(func_2166(909007663, -50600144))));
	fVar0 = (fVar0 + (0.6944444f * to_float(func_2166(909007663, -348503123))));
	fVar0 = (fVar0 + (0.3703704f * to_float(func_2166(909007663, -528798161))));
	fVar0 = (fVar0 + (0.5f * func_2167(10f, to_float(func_2166(909007663, 551192206)))));
	fVar0 = (fVar0 + (0.6f * func_2167(5f, to_float(func_2166(909007663, -406093146)))));
	fVar0 = (fVar0 + (0.2f * func_2167(25f, to_float(func_2168(-1029789297)))));
	fVar0 = (fVar0 + (2f * func_2167(1f, to_float(func_2168(-843295694)))));
	fVar0 = (fVar0 + (0.3333333f * func_2167(6f, to_float(func_2168(64058978)))));
	fVar0 = (fVar0 + (3f * func_2167(1f, to_float(func_2168(795577402)))));
	iVar1 = func_2169();
	fVar0 = (fVar0 + (0.1111111f * func_2167(9f, to_float(iVar1))));
	fVar2 = (to_float(_0x5461c821d00fe15a(-2076669067, 1665658745)) / to_float(_0x62cab7db62ead434(-2076669067, 1665658745)));
	fVar2 = func_1895(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, -263938772)) / to_float(_0x62cab7db62ead434(-2076669067, -263938772))));
	fVar2 = func_1895(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, 228647253)) / to_float(_0x62cab7db62ead434(-2076669067, 228647253))));
	fVar2 = func_1895(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, 1695604435)) / to_float(_0x62cab7db62ead434(-2076669067, 1695604435))));
	fVar2 = func_1895(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, -379038926)) / to_float(_0x62cab7db62ead434(-2076669067, -379038926))));
	fVar2 = func_1895(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, 1597499323)) / to_float(_0x62cab7db62ead434(-2076669067, 1597499323))));
	fVar2 = func_1895(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, -278663717)) / to_float(_0x62cab7db62ead434(-2076669067, -278663717))));
	fVar2 = func_1895(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, 586249988)) / to_float(_0x62cab7db62ead434(-2076669067, 586249988))));
	fVar2 = func_1895(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, -419800938)) / to_float(_0x62cab7db62ead434(-2076669067, -419800938))));
	fVar2 = func_1895(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, -1362069171)) / to_float(_0x62cab7db62ead434(-2076669067, -1362069171))));
	fVar2 = func_1895(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, -740350755)) / to_float(_0x62cab7db62ead434(-2076669067, -740350755))));
	fVar2 = func_1895(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, 1511070393)) / to_float(_0x62cab7db62ead434(-2076669067, 1511070393))));
	fVar0 = (fVar0 + func_2167(1f, fVar2));
	fVar0 = (fVar0 + (0.05f * func_2167(to_float(20), to_float(func_2170()))));
	if (func_468(40))
	{
		fVar0 = (fVar0 + (1f * 1f));
	}
	if (func_468(42))
	{
		fVar0 = (fVar0 + (1f * 1f));
	}
	if (func_468(48))
	{
		fVar0 = (fVar0 + (1f * 1f));
	}
	if (func_468(50))
	{
		fVar0 = (fVar0 + (1f * 1f));
	}
	if (func_468(52))
	{
		fVar0 = (fVar0 + (1f * 1f));
	}
	fVar2 = (to_float(_0x5461c821d00fe15a(1765845133, 499813453)) / to_float(_0x62cab7db62ead434(1765845133, 499813453)));
	fVar2 = func_1895(fVar2, (to_float(_0x5461c821d00fe15a(1765845133, 666607663)) / to_float(_0x62cab7db62ead434(1765845133, 666607663))));
	fVar2 = func_1895(fVar2, (to_float(_0x5461c821d00fe15a(1765845133, -220219788)) / to_float(_0x62cab7db62ead434(1765845133, -220219788))));
	fVar2 = func_1895(fVar2, (to_float(_0x5461c821d00fe15a(1765845133, 218622660)) / to_float(_0x62cab7db62ead434(1765845133, 218622660))));
	fVar2 = func_1895(fVar2, (to_float(_0x5461c821d00fe15a(1765845133, 390004462)) / to_float(_0x62cab7db62ead434(1765845133, 390004462))));
	fVar2 = func_1895(fVar2, (to_float(_0x5461c821d00fe15a(1765845133, 6410548)) / to_float(_0x62cab7db62ead434(1765845133, 6410548))));
	fVar0 = (fVar0 + (1f * func_2167(1f, fVar2)));
	fVar0 = (fVar0 + (0.2f * func_2167(5f, to_float(func_2168(1933084904)))));
	fVar0 = (fVar0 + (0.2f * func_2167(5f, to_float(func_2166(-1756227506, -734935893)))));
	fVar0 = (fVar0 + (to_float(func_1663(_0x729d52f61a5a9e22(1979337996), 50)) / to_float(50)));
	fVar0 = (fVar0 + (to_float(func_1663(_0x729d52f61a5a9e22(-2125891426), 10)) / to_float(10)));
	fVar0 = (fVar0 + (to_float(func_1663(_0x729d52f61a5a9e22(1630085303), 10)) / to_float(10)));
	fVar0 = (fVar0 + _0x725d52f21a5e9e22(-1658238931));
	fVar0 = (fVar0 + (to_float(func_1663(_0x729d52f61a5a9e22(1807539419), 20)) / to_float(20)));
	fVar0 = (fVar0 + (to_float(func_1663(_0x729d52f61a5a9e22(717108105), 10)) / to_float(10)));
	fVar0 = (fVar0 + (to_float(func_1663(_0x729d52f61a5a9e22(-2143405780), 48)) / to_float(48)));
	func_2171(&iVar3, &iVar4);
	fVar0 = (fVar0 + (2f * func_2167((to_float(iVar3) / to_float(iVar4)), 1f)));
	fVar0 = (fVar0 + (2f * func_2167(1f, to_float(func_2172(-2116919750)))));
	fVar5 = to_float(func_2173());
	fVar0 = (fVar0 + ((3f * fVar5) / to_float(9)));
	fVar0 = (fVar0 + ((1f / 4f) * func_2167(1f, to_float(func_2166(1511238709, -747096482)))));
	fVar0 = (fVar0 + ((1f / 4f) * func_2167(1f, to_float(func_2166(1511238709, 549911940)))));
	fVar0 = (fVar0 + ((1f / 4f) * func_2167(1f, to_float(func_2166(1511238709, -760820978)))));
	fVar0 = (fVar0 + ((1f / 4f) * func_2167(1f, to_float(func_2166(1511238709, -1672018311)))));
	fVar0 = (fVar0 + (0.2f * func_2167(5f, to_float(func_2168(-1342635612)))));
	fVar0 = (fVar0 + (0.5f * func_2167(1f, to_float(func_2168(-2061916883)))));
	fVar0 = (fVar0 + (0.5f * func_2167(1f, to_float(func_2168(281346304)))));
	fVar0 = (fVar0 + (0.5f * func_2167(1f, to_float(func_2168(-299021541)))));
	fVar0 = (fVar0 + ((0.5f / 6f) * func_2167(1f, to_float(func_2166(-1276738576, 307971639)))));
	fVar0 = (fVar0 + ((0.5f / 6f) * func_2167(1f, to_float(func_2166(-1276738576, -1555359431)))));
	fVar0 = (fVar0 + ((0.5f / 6f) * func_2167(1f, to_float(func_2166(-1276738576, 644069854)))));
	fVar0 = (fVar0 + ((0.5f / 6f) * func_2167(1f, to_float(func_2166(-1276738576, -97115714)))));
	fVar0 = (fVar0 + ((0.5f / 6f) * func_2167(1f, to_float(func_2166(-1276738576, -2143405780)))));
	fVar0 = (fVar0 + ((0.5f / 6f) * func_2167(1f, to_float(func_2166(-1276738576, 1455184052)))));
	fVar0 = (fVar0 + ((1f / 4f) * func_2167(1f, to_float(func_2166(978382515, -2072933068)))));
	fVar0 = (fVar0 + ((1f / 4f) * func_2167(1f, to_float(func_2166(978382515, 574993838)))));
	fVar0 = (fVar0 + ((1f / 4f) * func_2167(1f, to_float(func_2166(978382515, -605765767)))));
	fVar0 = (fVar0 + ((1f / 4f) * func_2167(1f, to_float(func_2166(978382515, 1015970717)))));
	Var6 = { func_94(1215094015) };
	fVar8 = func_2174(Var6);
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
					func_967(Global_1898330[iVar61]);
				}
				else
				{
					func_1554(iVar61, 0);
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

void func_1595(var uParam0, int iParam1, bool bParam2)
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

int func_1596(int iParam0, int iParam1, int iParam2)
{
	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
	return 1;
}

void func_1597(int iParam0)
{
	if (!func_1014(iParam0))
	{
		return;
	}
	if (!_is_base_a_persistent_character((*Global_1360165)[iParam0]->f_1))
	{
		iVar0 = func_2175(iParam0);
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

void func_1598(int iParam0)
{
	if (func_513(iParam0))
	{
		if (does_entity_exist(func_550(iParam0)))
		{
			func_710(iParam0, 67108864, 1);
			func_1018(iParam0, 19, 1);
		}
	}
}

float func_1599(int iParam0)
{
	if (!func_1014(iParam0))
	{
		return 0f;
	}
	return (*Global_1360165)[iParam0]->f_134;
}

void func_1600(int iParam0)
{
	iVar0 = func_550(iParam0);
	iVar1 = func_1019(iParam0, 0);
	func_2176(iParam0, iVar0);
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

bool func_1601(int iParam0)
{
	if (!func_1014(iParam0))
	{
		return false;
	}
	if ((*Global_1360165)[iParam0]->f_70.f_11 == 0 || (*Global_1360165)[iParam0]->f_70.f_11 == (*Global_1360165)[iParam0]->f_128)
	{
		return false;
	}
	return true;
}

bool func_1602(int iParam0)
{
	if (!func_1014(iParam0))
	{
		return false;
	}
	return (*Global_1360165)[iParam0]->f_70.f_11 == get_id_of_this_thread();
}

void func_1603(int iParam0, int iParam1, bool bParam2)
{
	if (!func_1014(iParam0))
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

int func_1604(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (!func_1014(iParam0))
	{
		return 0;
	}
	iVar0 = func_1026(iParam0);
	if (func_434(iVar0, 0))
	{
		if (func_434(_get_rider_of_mount(iVar0, false), 0) && !bParam4)
		{
			return 0;
		}
		if ((bParam1 || !func_1601(iParam0)) || func_1602(iParam0))
		{
			if (bParam2 || !(is_entity_on_screen(iVar0) && func_2177(player_ped_id(), iVar0, 1) < 10000f))
			{
				iVar1 = func_2178(iParam0, 1);
				if (iVar1 != 0)
				{
					if (!_0x88ad6cc10d8d35b2(iVar0))
					{
						set_entity_as_mission_entity(iVar0, true, true);
					}
					func_2179(iParam0);
					_0x7b204f88f6c3d287(func_2180(iParam0, 0));
					_0xfcc6db8dbe709bc8(func_2180(iParam0, 0));
					func_2181(iParam0);
				}
			}
			else
			{
				if (func_709(iParam0, 32768, 1))
				{
					iVar2 = func_2180(iParam0, 0);
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
		if (func_434((*Global_1360165)[iParam0]->f_124, 0))
		{
			if (func_709(iParam0, 32768, 1))
			{
				if (!_0x88ad6cc10d8d35b2((*Global_1360165)[iParam0]->f_124))
				{
					set_entity_as_mission_entity((*Global_1360165)[iParam0]->f_124, true, true);
				}
				func_2179(iParam0);
				_0x7b204f88f6c3d287(func_2180(iParam0, 0));
				_0xfcc6db8dbe709bc8(func_2180(iParam0, 0));
			}
			else
			{
				set_entity_as_mission_entity((*Global_1360165)[iParam0]->f_124, true, true);
				func_2179(iParam0);
				delete_ped(&((*Global_1360165)[iParam0]->f_124));
			}
		}
	}
	(*Global_1360165)[iParam0]->f_70.f_1 = 0;
	func_2182(iParam0, 0);
	return 1;
}

int func_1605(int iParam0)
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

char* func_1606(int iParam0)
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

char* func_1607(char* sParam0, int iParam1)
{
	if (iParam1 == 109029619)
	{
		return _create_var_string(10, "PLAYER_STRING", sParam0);
	}
	return func_1171(_create_var_string(10, "PLAYER_STRING", sParam0), iParam1);
}

float func_1608(int iParam0)
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

float func_1609(float fParam0, float fParam1, float fParam2)
{
	return (((1f - fParam2) * fParam0) + (fParam2 * fParam1));
}

void func_1610(int iParam0)
{
	if (iParam0 < 0)
	{
		iParam0 = 0;
	}
	Global_40.f_4283.f_325 = iParam0;
	Var0 = { func_94(1356759001) };
	stat_id_set_int(&Var0, iParam0, true);
}

int func_1611(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_6;
	}
	return -15;
}

int func_1612(int iParam0, int iParam1)
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

void func_1613(int iParam0, bool bParam1)
{
	Global_1955569->f_1 = iParam0;
	if (bParam1)
	{
		func_2183(bParam1);
	}
}

void func_1614(int iParam0)
{
	_0x74bcceb233ad95b2(-156028329, iParam0);
}

char* func_1615(int iParam0)
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

bool func_1616(int iParam0)
{
	if (!func_1235(23, &vVar0))
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

bool func_1617(int iParam0, int iParam1, int iParam2)
{
	if (!func_1235(23, &Var0))
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

int func_1618(int iParam0)
{
	return iParam0;
}

int func_1619()
{
	iVar0 = func_1057();
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

int func_1620(int iParam0)
{
	if (!func_576(*iParam0, 0))
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

bool func_1621(int iParam0, var uParam1, bool bParam2)
{
	if (!func_576(iParam0, 0))
	{
		return false;
	}
	Var0 = { func_687(iParam0, 0, 1) };
	iVar5 = 1728382685;
	Var6.f_9 = -1591664384;
	bVar28 = false;
	iVar29 = 0;
	while (iVar29 < 4)
	{
		iVar5 = func_1094((386 + iVar29), 1);
		if (func_1095(iParam0, &Var0, iVar5, 0))
		{
			bVar28 = func_1096(iParam0, &Var6, iVar5);
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

int func_1622(int iParam0, struct<4> Param1, int iParam5, bool bParam6)
{
	if (!func_576(iParam0, 0))
	{
		return 0;
	}
	Var0 = { func_1097(iParam0, Param1, iParam5, bParam6) };
	if (!_0xb881ca836cc4b6d4(&Var0))
	{
		return 0;
	}
	uVar4 = _0xc97e0d2302382211(func_178(bParam6), &Var0, 0);
	return uVar4;
}

struct<14> func_1623(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

void func_1624(var uParam0, struct<4> Param1)
{
	if (_0xb881ca836cc4b6d4(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

bool func_1625(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	*iParam1 = _0x640f890c3e5a3ffd(func_178(bParam3), uParam0, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

int func_1626(int iParam0)
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

float func_1627(int iParam0)
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
			return func_2184(iParam0);
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
			return func_2184(iParam0);
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
			return func_2184(iParam0);
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

bool func_1628(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_598(18);
		case 2:
			return func_598(20);
		case 1:
			return func_598(19);
		default:
			break;
	}
	return true;
}

int func_1629(int iParam0)
{
	return func_2185(&(Global_40.f_11095.f_11[iParam0]));
}

void func_1630(int iParam0, float fParam1, bool bParam2)
{
	if (func_20() != -1)
	{
		return;
	}
	if (Global_1347477->f_117 || !func_598(31))
	{
		return;
	}
	iVar0 = func_1629(iParam0);
	fVar1 = &Global_40.f_11095.f_11[iParam0];
	if (iVar0 >= 7)
	{
		return;
	}
	set_attribute_points(Global_35, iParam0, floor(fParam1));
	Global_40.f_11095.f_11[iParam0] = fParam1;
	iVar2 = func_1629(iParam0);
	if (func_2186(iParam0) && func_2187(iParam0))
	{
		if (!bParam2)
		{
			iVar3 = func_2188(fVar1, fParam1);
			if (fParam1 > IntToFloat(func_2189(iParam0)) && (iVar2 > iVar0 || iVar3 != 0))
			{
				if (!is_radar_hidden() && !Global_16)
				{
					if (iVar2 > iVar0)
					{
						func_318(func_2190(iParam0), 0);
					}
					func_2191(iParam0, iVar2, iVar3);
					func_2192(iParam0, 7000);
				}
				Global_1347477->f_8 = 1;
			}
		}
	}
	Global_1347477->f_1 = iParam0;
	Global_1347477 = get_game_timer();
}

char* func_1631(int iParam0)
{
	return "PLAYER_RPG_XP_GAIN";
}

int func_1632(int iParam0)
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

int func_1633()
{
	return func_2193(Global_40.f_12019);
}

int func_1634()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		iVar2 = func_1078(iVar1);
		if (func_340(iVar2, 1, 0) || func_1640(func_1639(iVar2)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1635()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 30)
	{
		if (func_2194(_0x126cbebba46693cf(iVar1, -440187297, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1636()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 14)
	{
		if (func_1645(_0x126cbebba46693cf(iVar1, 1995362678, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1637()
{
	return _0x3a65f4844913a047(2103522376, 0);
}

int func_1638(int iParam0)
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

int func_1639(int iParam0)
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

bool func_1640(int iParam0)
{
	return (Global_40.f_12019 && iParam0) != 0;
}

char* func_1641(int iParam0)
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

int func_1642(int iParam0)
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

int func_1643(int iParam0)
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

char* func_1644(int iParam0)
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

bool func_1645(int iParam0)
{
	return _0x9a03f22ad446eeac(iParam0) > 0;
}

char* func_1646(int iParam0)
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

char* func_1647(int iParam0)
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

bool func_1648(int iParam0)
{
	if (func_2195(iParam0) && func_340(iParam0, 1, 0))
	{
		return true;
	}
	else if (func_2196(iParam0) && func_2197(iParam0))
	{
		return true;
	}
	return false;
}

char* func_1649(int iParam0)
{
	if (!func_576(iParam0, 0))
	{
		return "";
	}
	return _get_label_text_by_hash(func_643(iParam0));
}

int func_1650(int iParam0)
{
	return Global_1898164->f_1[iParam0]->f_2;
}

void func_1651(bool bParam0)
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

void func_1652(int iParam0)
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

void func_1653(bool bParam0)
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

void func_1654(bool bParam0)
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

void func_1655(bool bParam0)
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

void func_1656(bool bParam0)
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

void func_1657(bool bParam0)
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

void func_1658(bool bParam0)
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

int func_1659(int iParam0)
{
	if (iParam0 == -358215195)
	{
		return 0;
	}
	return &(Global_1946804->f_1497.f_1[func_675(iParam0, 1)]);
}

void func_1660()
{
	if (!_unlock_is_unlocked(-1526891582))
	{
		func_2198();
		_unlock_set_unlocked(-1526891582, true);
		func_603(-916314281);
		func_649(-916314281, 1, 752097756);
		set_current_ped_weapon(Global_35, -916314281, true, 2, false, false);
		func_603(494733111);
		func_649(494733111, 1, 752097756);
		set_current_ped_weapon(Global_35, 494733111, true, 4, false, false);
	}
}

bool func_1661(int iParam0, var uParam1, var uParam2, int iParam3)
{
	iVar0 = func_178(0);
	*uParam1 = { func_1097(iParam0, func_1203(0), iParam3, 0) };
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

bool func_1662(int iParam0)
{
	if (_item_database_is_intrinsic_item(iParam0))
	{
		return true;
	}
	return false;
}

int func_1663(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

bool func_1664(int iParam0)
{
	return _is_weapon_bow(iParam0);
}

int func_1665(var uParam0)
{
	iVar0 = 0;
	iVar1 = 22;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_596(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 37;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_596(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 12;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_596(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 29;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_596(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 30;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_596(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 31;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_596(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	return iVar0;
}

bool func_1666(int iParam0, int iParam1)
{
	iVar1 = func_675(func_2199(iParam0), 1);
	if (iVar1 >= 39)
	{
		return false;
	}
	if (&Global_1946804->f_1497.f_1[iVar1] != 0 && &Global_1946804->f_1497.f_1[iVar1] != &Global_1946804->f_57[iVar1])
	{
		iVar0 = &Global_1946804->f_1497.f_1[iVar1];
		if (func_600(iVar0) == iParam0)
		{
			*iParam1 = iVar0;
			return true;
		}
	}
	*iParam1 = 0;
	return false;
}

int func_1667(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam0 == &Global_1946804->f_57[func_675(iParam1, 1)])
	{
		return 0;
	}
	iVar0 = 0;
	if (!func_1140(524288))
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

bool func_1668(int iParam0)
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

int func_1669(int iParam0)
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

int func_1670(int iParam0)
{
	return func_2200(iParam0, -1);
}

bool func_1671(int iParam0)
{
	return _0xf83d3dda4d3c8169(iParam0) > 0;
}

void func_1672(int iParam0)
{
	iVar0 = func_998(iParam0, 1);
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

void func_1673(int iParam0)
{
	iVar0 = func_998(iParam0, 1);
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

void func_1674()
{
	func_1673(-939420910);
	func_1673(-1187950766);
	func_1673(356365161);
	func_1673(753127042);
	func_1673(-2038424081);
	func_1673(1884271742);
	func_1673(459290420);
}

void func_1675()
{
	func_1673(704802028);
	func_1673(588987611);
	func_1673(2008888900);
	func_1673(1649996811);
	func_1673(227918160);
	func_1673(168171957);
	func_1673(1193080109);
	func_1673(-491981251);
	func_1673(-639037538);
	func_1673(-618620429);
}

bool func_1676(int iParam0)
{
	return _0xf83d3dda4d3c8169(iParam0) > 0;
}

int func_1677(int iParam0)
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

void func_1678(int iParam0)
{
	Global_40.f_12019.f_43 = (Global_40.f_12019.f_43 || iParam0);
}

bool func_1679(int iParam0)
{
	return _0xf83d3dda4d3c8169(iParam0) > 0;
}

void func_1680()
{
	Global_1946804->f_1378 = Global_1946804->f_1497;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		*Global_1946804->f_1378.f_1[iVar0] = { *Global_1946804->f_1497.f_1[iVar0] };
		iVar0++;
	}
}

void func_1681(int iParam0)
{
	func_1401(iParam0, 8, 6);
}

void func_1682(int iParam0)
{
	func_2201(&(Global_1946804->f_2589), iParam0);
}

void func_1683(int iParam0, int iParam1)
{
	func_2202(&(Global_1946804->f_2589), iParam0, iParam1);
}

int func_1684(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	iVar0 = func_2203(0);
	if (iParam2 != 0 && func_2204(iParam0, iVar0, iParam2, bParam3) != -1)
	{
		return iParam2;
	}
	if (func_1194(iParam0, func_1208(iParam1, 1), &iParam2))
	{
		return iParam2;
	}
	return 0;
}

void func_1685(var uParam0, bool bParam1, int iParam2)
{
	bVar6 = func_20() != -1;
	iVar7 = func_2203(0);
	if (func_1140(32768))
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
			iVar5 = func_1208(iVar0, 1);
			if (func_1397(iVar5, 8))
			{
			}
			else if (&Global_1946804->f_57[iVar0]->f_2[0] == -1802376732 || &uParam0->f_1[iVar0] == 0)
			{
			}
			else if (func_1397(iVar5, 6) || &uParam0->f_1[iVar0] == &Global_1946804->f_57[iVar0])
			{
			}
			else
			{
				iVar4 = func_1667(&(uParam0->f_1[iVar0]), iVar5, iVar7, bVar6);
				if ((iVar1 + iVar4) > 31)
				{
					iVar3 = iVar2;
				}
				else
				{
					iVar1 = (iVar1 + iVar4);
					iVar2++;
				}
				iVar8 = func_2205(uParam0);
				if (iVar3 > 0)
				{
					if (!func_1140(524288))
					{
						func_1200(524288);
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
							iVar5 = func_1208(iVar0, 1);
							if (func_1397(iVar5, 8))
							{
							}
							else if (&Global_1946804->f_57[iVar0]->f_2[0] == -1802376732 || &uParam0->f_1[iVar0] == 0)
							{
							}
							else if (func_1397(iVar5, 6) || &uParam0->f_1[iVar0] == &Global_1946804->f_57[iVar0])
							{
							}
							else
							{
								iVar4 = func_1667(&(uParam0->f_1[iVar0]), iVar5, iVar7, bVar6);
								if ((iVar1 + iVar4) > 31)
								{
									uParam0->f_1[iVar0] = &Global_1946804->f_57[iVar0];
									uParam0->f_1[iVar0]->f_1 = 0;
									if (bParam1)
									{
										func_1683(iVar0, iParam2);
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
					func_1688(524288);
				}
			}
		}
	}
}

void func_1686(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (*uParam0 <= 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_2206(&(uParam0->f_2[iVar0]), bParam1, bParam2);
		iVar0++;
	}
	if (func_20() == -1)
	{
		if ((Global_40.f_7729 != 0 || !func_2207(2, Global_26796.f_776)) || Global_1946804->f_1497 != func_1707(0))
		{
			if (Global_40.f_7157[Global_40.f_7729] & 512 != 0)
			{
				Global_40.f_7157[Global_40.f_7729] = (&Global_40.f_7157[Global_40.f_7729] - Global_40.f_7157[Global_40.f_7729] & 4096);
				Global_40.f_7729 = 0;
				Global_1905941 = Global_40.f_7729;
				Global_40.f_7157[Global_40.f_7729] |= 4096;
				Global_1946804->f_1497 = func_1707(Global_40.f_7729);
				Global_1946804->f_1378 = func_1707(Global_40.f_7729);
				Global_26796.f_776 = 0;
				func_2208(-1, 0, 6);
			}
		}
	}
	if (bParam3)
	{
		func_1188(0, 1);
	}
}

void func_1687(var uParam0)
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

void func_1688(int iParam0)
{
	Global_1946804 = (&Global_1946804 - (Global_1946804 && iParam0));
}

bool func_1689(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_1690(struct<4> Param0)
{
	if (Global_1946804->f_852 >= 20)
	{
		return;
	}
	if (func_1745(Param0))
	{
		iVar0 = 0;
		while (iVar0 < Global_1946804->f_852)
		{
			iVar1 = ((Global_1946804->f_853 + iVar0) % 20);
			if (((&Global_1946804->f_769[iVar1] == Param0 && Global_1946804->f_769[iVar1]->f_2 == Param0.f_2) && Global_1946804->f_769[iVar1]->f_3 == Param0.f_3) && Global_1946804->f_769[iVar1]->f_1 == Param0.f_1)
			{
				return;
			}
			if (&Global_1946804->f_769[iVar1] == 34 && func_1745(20))
			{
				return;
			}
			iVar0++;
		}
	}
	func_1746(Param0);
	*Global_1946804->f_769[Global_1946804->f_854] = { Param0 };
	Global_1946804->f_852++;
	Global_1946804->f_854 = (Global_1946804->f_854 + 1 % 20);
	func_1200(8);
}

bool func_1691()
{
	if (Global_1572887->f_12 != -1)
	{
		return false;
	}
	return Global_1347477->f_203;
}

float func_1692(int iParam0)
{
	return &(Global_40.f_11095[iParam0]);
}

float func_1693()
{
	fVar0 = func_2209(13);
	iVar1 = func_2210(fVar0);
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

float func_1694()
{
	if (is_ped_on_mount(Global_35))
	{
		return 0.25f;
	}
	return 0f;
}

float func_1695()
{
	if (func_331())
	{
		if (_get_special_edition_core_stats_bonus_enabled())
		{
			return 0.2f;
		}
	}
	return 0f;
}

float func_1696()
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

float func_1697()
{
	return Global_1955565->f_3;
}

void func_1698(int iParam0, char* sParam1, bool bParam2)
{
	sVar0 = func_2211(iParam0, 1, 0, 0);
	sVar0 = _create_var_string(2, sVar0, sParam1);
	_databinding_write_data_string(&(Global_1955569->f_5.f_2[iParam0]->f_12[1]), sVar0);
	_databinding_write_data_bool(&(Global_1955569->f_5.f_2[iParam0]->f_16[1]), bParam2);
}

void func_1699(int iParam0, float fParam1, bool bParam2)
{
	sVar0 = func_2211(iParam0, 2, 0, 0);
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

float func_1700(float fParam0, float fParam1, float fParam2)
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

bool func_1701()
{
	return func_2209(12) <= -99f;
}

bool func_1702()
{
	return func_2209(12) >= 99f;
}

int func_1703()
{
	iVar2 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_600(iVar1) == -999503751)
		{
			if (func_2212() != iVar1)
			{
				iVar2++;
			}
		}
		iVar0++;
	}
	return iVar2;
}

bool func_1704(int iParam0)
{
	if (!func_1156(iParam0))
	{
		return false;
	}
	if (func_1708(iParam0, 4))
	{
		return true;
	}
	return false;
}

bool func_1705(int iParam0)
{
	if (!func_1156(iParam0))
	{
		return false;
	}
	if (func_1708(iParam0, 2))
	{
		return true;
	}
	return false;
}

void func_1706(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_1156(iParam0))
	{
		return;
	}
	if (!func_1705(iParam0))
	{
		func_1709(iParam0, 2);
		if (bParam2)
		{
			if (!func_190(0, 0, 1))
			{
				func_360(1, 4);
			}
		}
		if ((!func_207() && !bParam1) && !func_190(0, 0, 1))
		{
			func_715(_create_var_string(10, "OUT_JOURN_ADD", func_2213(iParam0)), 10000, 0, 0, 0, 1);
		}
	}
}

int func_1707(int iParam0)
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

bool func_1708(int iParam0, int iParam1)
{
	if (!func_1156(iParam0))
	{
		return false;
	}
	return (Global_40.f_7157[iParam0] && iParam1) != 0;
}

void func_1709(int iParam0, int iParam1)
{
	if (!func_1156(iParam0))
	{
		return;
	}
	Global_40.f_7157[iParam0] = (Global_40.f_7157[iParam0] || iParam1);
}

int func_1710(int iParam0, bool bParam1)
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

void func_1711(int iParam0, bool bParam1)
{
	iVar0 = func_2214(iParam0);
	switch (iVar0)
	{
		case 0:
			if (bParam1)
			{
				func_599(50);
			}
			else
			{
				func_599(48);
			}
			break;
		case 1:
			if (bParam1)
			{
				func_599(51);
			}
			else
			{
				func_599(49);
			}
			break;
		case 2:
			if (bParam1)
			{
				if (!func_2215(iVar0))
				{
					Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
					func_630();
				}
			}
			else
			{
				Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
				func_630();
			}
			break;
		case 3:
			func_599(24);
			if (bParam1)
			{
				if (!func_2215(iVar0))
				{
					Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
					func_630();
				}
			}
			break;
	}
}

void func_1712(int iParam0)
{
	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
			if (func_2216(0))
			{
				iVar0++;
			}
			if (func_2216(2))
			{
				iVar0++;
			}
			if (func_2216(4))
			{
				iVar0++;
			}
			if (!func_2217(16))
			{
				if (iVar0 == 1)
				{
					func_2218();
					func_318(456, 1);
					func_2219(16);
				}
			}
			if (!func_2217(32))
			{
				if (iVar0 >= 3)
				{
					func_2218();
					func_318(456, 1);
					func_2219(32);
				}
			}
			break;
		case 1:
		case 3:
		case 7:
			if (func_2216(1))
			{
				iVar0++;
			}
			if (func_2216(3))
			{
				iVar0++;
			}
			if (func_2216(7))
			{
				iVar0++;
			}
			if (!func_2217(1))
			{
				if (iVar0 == 1)
				{
					func_2220();
					func_318(457, 1);
					func_2219(1);
				}
			}
			if (!func_2217(2))
			{
				if (iVar0 >= 3)
				{
					func_2220();
					func_318(457, 1);
					func_2219(2);
				}
			}
			break;
		case 5:
		case 6:
		case 8:
			if (func_2216(5))
			{
				iVar0++;
			}
			if (func_2216(6))
			{
				iVar0++;
			}
			if (func_2216(8))
			{
				iVar0++;
			}
			if (!func_2217(4))
			{
				if (iVar0 == 1)
				{
					func_2221();
					func_318(455, 1);
					func_2219(4);
				}
			}
			if (!func_2217(8))
			{
				if (iVar0 >= 3)
				{
					func_2221();
					func_318(455, 1);
					func_2219(8);
				}
			}
			break;
	}
}

void func_1713(var uParam0)
{
	func_1162(uParam0, 143479330);
	if (Global_1946804->f_1 == 2026485318)
	{
		func_1162(uParam0, 617531372);
	}
	else
	{
		func_1162(uParam0, 291123060);
	}
}

void func_1714(var uParam0, int iParam1, struct<14> Param2)
{
	if (!func_2222(uParam0))
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

bool func_1715(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

bool func_1716(int iParam0, int iParam1, var uParam2, int iParam3)
{
	*iParam3 = 0;
	if (*uParam2 < 10)
	{
		return false;
	}
	if (!func_576(iParam0, 0))
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

void func_1717(int iParam0)
{
	func_671(iParam0, 1, 1, -142743235, 1);
	iVar34 = func_2223(iParam0, &uVar18);
	func_2224(iParam0, &uVar18, &iVar34, 1);
	if (func_677() == -2125499975)
	{
		iVar38 = 2020890174;
	}
	else
	{
		iVar38 = 1105329772;
	}
	func_2225(iParam0, &(Global_26796.f_627.f_121.f_20));
	func_673(iParam0, 1, 1);
	iVar36 = 0;
	while (iVar36 < iVar34)
	{
		func_671(&(uVar18[iVar36]), 1, 1, -142743235, 1);
		switch (func_600(&(uVar18[iVar36])))
		{
			case -2061583405:
				func_2225(&(uVar18[iVar36]), &(Global_26796.f_627.f_121.f_21));
				break;
			case 81053684:
				func_2225(&(uVar18[iVar36]), &(Global_26796.f_627.f_121.f_23));
				break;
			case -525676072:
				func_2225(&(uVar18[iVar36]), &(Global_26796.f_627.f_121.f_22));
				break;
			case -1719060085:
				func_2225(&(uVar18[iVar36]), &(Global_26796.f_627.f_121.f_24));
				break;
			case -413129408:
				func_2225(&(uVar18[iVar36]), &(Global_26796.f_627.f_121.f_25));
				break;
		}
		func_673(&(uVar18[iVar36]), 1, 1);
		iVar0[iVar36] = func_675(func_674(&(uVar18[iVar36])), 1);
		iVar36++;
	}
	func_2226(&(Global_1946804->f_1616));
	func_678(&(Global_1946804->f_1616), iVar38, &uVar39, 1, 0, 0, 0);
	*Global_1946804->f_1616.f_1[8] = { func_679(8, 0) };
	*Global_1946804->f_1616.f_1[9] = { func_679(9, 0) };
	*Global_1946804->f_1616.f_1[0] = { func_679(0, 0) };
	*Global_1946804->f_1616.f_1[2] = { func_679(2, 0) };
	*Global_1946804->f_1616.f_1[3] = { func_679(3, 0) };
	*Global_1946804->f_1616.f_1[1] = { func_679(1, 0) };
	*Global_1946804->f_1616.f_1[5] = { func_679(5, 0) };
	*Global_1946804->f_1616.f_1[6] = { func_679(6, 0) };
	*Global_1946804->f_1616.f_1[7] = { func_679(7, 0) };
	iVar35 = 0;
	while (iVar35 < 5)
	{
		iVar36 = 0;
		while (iVar36 < iVar34)
		{
			if (&uVar18[iVar36] == func_680(&(iVar0[iVar36]), iVar35))
			{
				func_673(func_2227(iVar35), 1, 1);
				func_2228(iVar35);
				if (iVar35 == 0)
				{
					bVar17 = true;
					iVar37 = 0;
					while (iVar37 < 39)
					{
						if (!func_1742(Global_1946804->f_1616.f_1[iVar37], 2))
						{
						}
						else
						{
							func_681(Global_1946804->f_1616.f_1[iVar37], iVar37, 0);
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
	if ((bVar16 || bVar17) || Global_40.f_7729 == func_1155(iParam0))
	{
		if (!func_2229(8))
		{
			if (func_677() == -2125499975)
			{
				if (bVar17)
				{
					func_678(&(Global_1946804->f_1616), 1661121390, &uVar39, 0, 1, 0, -2125499975);
					Global_1946804->f_1616 = 166243423;
					func_2230(&(Global_1946804->f_1616), 0);
					if (Global_40.f_7729 == 0)
					{
						func_2231(2, 0, 6);
					}
				}
				if (bVar16 || Global_40.f_7729 == func_1155(iParam0))
				{
					Global_1905941 = 6;
				}
			}
			else
			{
				if (bVar17)
				{
					func_678(&(Global_1946804->f_1616), -361635024, &uVar39, 0, 1, 0, 1160113249);
					Global_1946804->f_1616 = 166243423;
					func_2230(&(Global_1946804->f_1616), 0);
					if (Global_40.f_7729 == 0)
					{
						func_2231(2, 0, 6);
					}
				}
				if (bVar16 || Global_40.f_7729 == func_1155(iParam0))
				{
					Global_1905941 = 62;
				}
			}
			if (bVar16 || Global_40.f_7729 == func_1155(iParam0))
			{
				if (is_entity_dead(get_player_ped(player_id())))
				{
					func_2232(Global_40.f_7729, 4096);
					func_1709(&Global_1905941, 4096);
					Global_40.f_7729 = &Global_1905941;
				}
				else
				{
					func_2233(get_player_ped(player_id()), &Global_1905941, 1, 0, 0);
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
	func_678(&(Global_1946804->f_1616), 1661121390, &uVar39, 0, 1, 0, -2125499975);
	func_678(&(Global_1946804->f_1616), 2020890174, &uVar39, 1, 0, 0, -2125499975);
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

struct<4> func_1718()
{
	Var0 = { func_1202(0) };
	return func_1097(856287005, Var0, -218846335, 0);
}

int func_1719(int iParam0, struct<4> Param1)
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
			if (func_576(Var3, 0))
			{
				Var12.f_4 = Var3.f_1;
				if (func_1622(Var3, Param1, Var12.f_4, 0) > 0)
				{
				}
				else
				{
					func_2234(&uVar7);
					if (func_1098(Var3, &uVar7, &Var12, -1, -142743235, 0, 0))
					{
					}
				}
			}
		}
		iVar0++;
	}
	return 1;
}

int func_1720(var uParam0)
{
	return uParam0->f_1;
}

void func_1721(var uParam0)
{
	func_2235(uParam0);
	func_2237(uParam0, func_2236(-1346384396));
	func_2238(uParam0, func_2236(-712836614));
	func_2239(uParam0, func_2236(-1629133289));
	func_2240(uParam0, func_2236(1302066700));
	func_2241(uParam0, func_2236(599669344));
	func_2242(uParam0, func_2236(-1555511632));
}

void func_1722(struct<6> Param0)
{
	if (!func_2243(Param0.f_4, 1))
	{
	}
	if (!func_2243(Param0, 1))
	{
	}
	if (!func_2243(Param0.f_2, 1))
	{
	}
	if (!func_2243(Param0.f_5, 1))
	{
	}
	if (!func_2243(Param0.f_3, 1))
	{
	}
	if (!func_2243(Param0.f_1, 1))
	{
	}
}

int func_1723(int iParam0, int iParam1, int iParam2)
{
	*iParam0 = 0;
	*iParam1 = 0;
	*iParam2 = 0;
	if (func_389())
	{
		if (func_297())
		{
			bVar0 = false;
			if (!func_320((*Global_1835011)[15]->f_1, 1) && !func_598(42))
			{
				bVar0 = true;
			}
			if (bVar0)
			{
				*iParam0 = func_2244();
				*iParam1 = func_2245();
				*iParam2 = func_2246();
				return 1;
			}
			else
			{
				*iParam0 = func_2247();
				*iParam1 = func_2248();
				*iParam2 = func_2249();
				return 1;
			}
		}
		else if (func_1059())
		{
			if (!func_320((*Global_1835011)[60]->f_1, 1))
			{
				*iParam0 = func_2250();
				*iParam1 = func_2251();
				*iParam2 = func_2252();
				return 1;
			}
			else
			{
				*iParam0 = func_2253();
				*iParam1 = func_2254();
				*iParam2 = func_2255();
				return 1;
			}
		}
	}
	else if (func_297())
	{
		*iParam0 = func_2256();
		*iParam1 = func_2257();
		*iParam2 = func_2258();
		return 1;
	}
	else if (func_1059())
	{
		*iParam0 = func_2259();
		*iParam1 = func_2260();
		*iParam2 = func_2261();
		return 1;
	}
	return 0;
}

void func_1724(int iParam0, int iParam1)
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
	Global_40.f_1095.f_1[iParam0]->f_8 = iParam1;
}

void func_1725(int iParam0, int iParam1)
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
	Global_40.f_1095.f_1[iParam0]->f_9 = iParam1;
}

void func_1726(int iParam0, int iParam1)
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
	Global_40.f_1095.f_1[iParam0]->f_10 = iParam1;
}

void func_1727(int iParam0, int iParam1)
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
	Global_40.f_1095.f_1[iParam0]->f_434 = iParam1;
}

bool func_1728(int iParam0)
{
	iVar0 = func_2262(iParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	Var1 = { func_1202(0) };
	if (func_2263(&Var1, iVar0, 0) > 0)
	{
		return true;
	}
	return false;
}

int func_1729(int iParam0)
{
	Var0.f_9 = -1591664384;
	if (!func_2264(iParam0, &Var0))
	{
		return 0;
	}
	Var29 = { Var0.f_5 };
	Var29.f_4 = Var0.f_9;
	if (!func_1098(Var0.f_4, &Var0, &Var29, -1, -142743235, 0, 0))
	{
		return 0;
	}
	return 1;
}

int func_1730(int iParam0)
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

int func_1731(int iParam0, int iParam1)
{
	if (!func_576(iParam1, 0))
	{
		return 0;
	}
	if (!func_2265(iParam1))
	{
		return 0;
	}
	if (func_1728(iParam0))
	{
		return 0;
	}
	iVar0 = func_2262(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	Var1 = { func_1202(0) };
	Var1.f_4 = iVar0;
	if (!func_1153(iParam1, &uVar6, &Var1, 1, 752097756, 0))
	{
		return 0;
	}
	return 1;
}

bool func_1732(int iParam0, struct<4> Param1, bool bParam5)
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
			if (func_576(Var3, 0))
			{
				Var12.f_4 = Var3.f_1;
				if (func_1622(Var3, Param1, Var12.f_4, 0) > 0)
				{
				}
				else
				{
					func_2234(&Var7);
					if (func_1153(Var3, &Var7, &Var12, 1, 752097756, 1))
					{
						if (bParam5)
						{
							func_1735(Var7, 1);
						}
					}
				}
			}
		}
		iVar0++;
	}
	return true;
}

void func_1733(int iParam0)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if (func_1749(1) < iParam0)
	{
		iParam0 = func_1749(1);
	}
	_money_decrement_cash_balance(iParam0);
	Var0 = { func_94(1644987397) };
	_0xbd861ae8a5181ed7(&Var0, iParam0);
}

bool func_1734(var uParam0, int iParam1, var uParam2, int iParam3, int iParam4, var uParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(&uParam0))
	{
		return false;
	}
	if (!_0x22e590f108289a9d(func_178(bParam6), &uParam0, iParam4, &Var0))
	{
		return false;
	}
	if (!func_1207(Var0, uParam5, bParam6, 0))
	{
		return false;
	}
	return true;
}

bool func_1735(struct<4> Param0, int iParam4)
{
	if (!func_604(0))
	{
		return func_2266(Param0, iParam4, 1) != -1;
	}
	if (!_0xb881ca836cc4b6d4(&Param0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_1207(Param0, &Var0, 0, 0))
	{
		return false;
	}
	if (Var0.f_10 == iParam4)
	{
		return true;
	}
	if (!_0x734311e2852760d0(func_178(0), &Param0, iParam4))
	{
		return false;
	}
	return true;
}

bool func_1736(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (func_1662(iParam0))
	{
		return false;
	}
	if (iParam1 <= 0)
	{
		return false;
	}
	if (!func_604(bParam4))
	{
		iVar0 = -1;
		return iVar0 != -1;
	}
	if (!_0xb4158c8c9a3b5dce(func_178(bParam4), iParam0, iParam1, iParam2))
	{
		return false;
	}
	return true;
}

void func_1737(int iParam0, int iParam1)
{
	iVar0 = 0;
	if (func_20() == -1)
	{
		if (func_586(43))
		{
			if (func_596(iParam0, 412399755))
			{
				func_1123(-1791518714);
				if (func_1124() == 0)
				{
					func_360(0, 10);
					iVar0 = func_2267(iParam0, iParam1, 1);
					if (((iParam0 == 281887510 || iParam0 == -164081697) || iParam0 == -1161319399) || iParam0 == 728781265)
					{
						if (func_1126(iParam0) < func_1127(iParam0))
						{
							func_592(43, iParam0, iParam1, -1791518714, iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (func_586(44))
		{
			if (func_596(iParam0, 709057512))
			{
				func_1123(-2087881550);
				if (func_1124() == 1)
				{
					func_360(0, 10);
					iVar0 = func_2267(iParam0, iParam1, 2);
					if ((iParam0 == -222563712 || iParam0 == 1794857344) || iParam0 == 1952409553)
					{
						if (func_1126(iParam0) < func_1127(iParam0))
						{
							func_592(43, iParam0, iParam1, -2087881550, iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!func_586(45))
		{
			if (func_596(iParam0, -1478961327))
			{
				func_1123(1908068621);
				if (func_1124() == 2)
				{
					func_360(0, 10);
					iVar0 = func_2267(iParam0, iParam1, 4);
					if (((iParam0 == 2116770557 || iParam0 == -651064726) || iParam0 == -404270094) || iParam0 == 2093126853)
					{
						if (func_1126(iParam0) < func_1127(iParam0))
						{
							func_592(43, iParam0, iParam1, 1908068621, iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!func_586(46))
		{
			if (func_596(iParam0, -1238404098))
			{
				func_1123(1611247019);
				if (func_1124() == 3)
				{
					func_360(0, 10);
					iVar0 = func_2267(iParam0, iParam1, 8);
					if (((iParam0 == 2085530337 || iParam0 == -150591160) || iParam0 == -323969289) || iParam0 == 1504361882)
					{
						if (func_1126(iParam0) < func_1127(iParam0))
						{
							func_592(43, iParam0, iParam1, 1611247019, iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!func_586(47))
		{
			if (func_596(iParam0, 1160548794))
			{
				func_1123(1319635688);
				if (func_1124() == 4)
				{
					func_360(0, 10);
					iVar0 = func_2267(iParam0, iParam1, 16);
					if (((iParam0 == -1521783510 || iParam0 == 1714875242) || iParam0 == 927763737) || iParam0 == 1019229063)
					{
						if (func_1126(iParam0) < func_1127(iParam0))
						{
							func_592(43, iParam0, iParam1, 1319635688, iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
	}
}

bool func_1738(int iParam0, int iParam1)
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

void func_1739(var uParam0, int iParam1, int iParam2)
{
	iVar1 = func_2268(iParam1);
	func_2269(iParam1, iParam2);
	if (iVar1 >= 0 && uParam0->f_26 > 0)
	{
		func_2270(&(uParam0->f_26), iVar1);
		if (func_2271(uParam0->f_26, &iVar0))
		{
			func_2272(iVar0, iVar1);
		}
	}
}

bool func_1740(int iParam0, int iParam1)
{
	Var0 = { func_687(iParam0, 0, 0) };
	Var5 = { func_1097(iParam0, Var0, Var0.f_4, 0) };
	if (func_1622(iParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return false;
	}
	_0x9a113c660aea3832(func_178(0), &Var5, iParam1);
	return true;
}

void func_1741(int iParam0)
{
	Global_1946804->f_978 = iParam0;
}

bool func_1742(var uParam0, int iParam1)
{
	return (uParam0->f_2 && iParam1) != 0;
}

void func_1743(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	*uParam0 = iParam1;
	uParam0->f_1 = iParam2;
	uParam0->f_2 = iParam3;
	uParam0->f_3 = iParam4;
	uParam0->f_4 = iParam5;
	uParam0->f_6 = 0;
	uParam0->f_5 = 0;
}

void func_1744(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
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
			func_1683(iVar1, iVar0);
		}
		if (bParam1)
		{
			func_1683(iVar3, iVar0);
		}
	}
	if (uParam0->f_1[iVar2]->f_1 == -1333118809 || uParam0->f_1[iVar2]->f_1 == -1158926300)
	{
		uParam0->f_1[iVar2]->f_1 = 1155669136;
		if (bParam3)
		{
			func_1683(iVar2, iVar0);
		}
	}
}

bool func_1745(int iParam0)
{
	return &Global_1946804->f_529[iParam0] > 0;
}

void func_1746(int iParam0)
{
	Global_1946804->f_529[iParam0] = &Global_1946804->f_529[iParam0] + 1;
}

struct<4> func_1747()
{
	return Var0;
}

bool func_1748(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4, bool bParam5)
{
	*iParam3 = 0;
	if (*uParam2 < 15)
	{
		return false;
	}
	if (!func_576(iParam0, 0))
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
		func_2273(iParam0, iParam1, uParam2, *iParam3);
	}
	return true;
}

int func_1749(int iParam0)
{
	return _money_get_cash_balance();
}

char* func_1750(int iParam0)
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

bool func_1751(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 25);
}

int func_1752(int iParam0)
{
	if (!func_240(iParam0))
	{
		return 0;
	}
	return (*Global_1888801)[iParam0]->f_3;
}

int func_1753(int iParam0)
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

bool func_1754(int iParam0)
{
	if ((iParam0 == 22 || iParam0 == 37) && !func_1059())
	{
		return true;
	}
	if (iParam0 == 61)
	{
		return true;
	}
	return false;
}

int func_1755(int iParam0, int iParam1)
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

int func_1756(int iParam0)
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
		case 14:
	}
