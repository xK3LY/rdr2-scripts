void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_210 = -1;
	iLocal_899 = -1679307491;
	fLocal_1073 = 1f;
	iLocal_1080 = 1;
	iLocal_1088 = -1;
	if (has_force_cleanup_occurred(4642))
	{
		func_1(&uLocal_1147, 1073741824);
		func_2(&uLocal_1147, 1);
		terminate_this_thread();
	}
	while (!func_3(64))
	{
		wait(0);
	}
	func_4(&uScriptParam_0, &uLocal_1147);
	func_5(&uLocal_1147);
	while (!func_6(&uLocal_1147, -2147483648))
	{
		func_7(&uLocal_1147);
		wait(0);
	}
	while (!func_2(&uLocal_1147, 0))
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
	iLocal_206 = func_125(uParam0);
	iLocal_206 = iLocal_206;
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
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		release_sound_id(&(iLocal_1081[iVar0]));
		iVar0++;
	}
	if (func_163(&uLocal_902))
	{
		_0x9cf1836c03fb67a2(&uLocal_902, 0);
	}
	if (func_164())
	{
		func_165();
	}
	if (func_166(2))
	{
		func_167();
		func_168(2);
	}
	func_169(0);
	func_170(0);
	_0x6035e8fbca32ac5e();
	pause_clock(false, 0);
	_0x95ee1dee1dcd9070(player_id(), 1);
	if (does_entity_exist(&(vLocal_808[3])))
	{
		delete_ped(vLocal_808[3]);
	}
	if (!is_entity_dead(Global_35))
	{
		freeze_entity_position(Global_35, false);
	}
	if (!is_entity_dead(&(vLocal_808[2])))
	{
		freeze_entity_position(&(vLocal_808[2]), false);
	}
	set_player_control(player_id(), true, 0, false);
	if (!is_entity_dead(Global_35))
	{
		freeze_entity_position(Global_35, false);
		set_entity_collision(Global_35, true, false);
		clear_ped_tasks(Global_35, 1, 0);
		if (_0x0b7cb1300cbfe19c(Global_35, 1))
		{
			stop_anim_playback(Global_35, 0, false);
		}
	}
	func_171();
	set_ped_can_leg_ik(Global_35, true);
	set_ped_can_leg_ik(&(vLocal_808[2]), true);
	set_ped_leg_ik_mode(Global_35, 2);
	set_ped_leg_ik_mode(&(vLocal_808[2]), 1);
	if (func_166(17))
	{
		func_172(&(vLocal_808[2]), &uLocal_904, 0);
		func_168(17);
	}
	func_173(uParam0, 0, 5, 0);
	iVar1 = 0;
	while (iVar1 < iVar292)
	{
		func_174(iVar1);
		iVar1++;
	}
	func_175();
	if (func_166(12))
	{
		func_176(0);
		func_168(12);
	}
	func_177(200f, 0, 0, 1);
	func_178(200f, 0, 0, 1);
	func_179(200f, 0, 0, 1);
	func_180(0);
	func_181();
	switch (func_22(uParam0))
	{
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
			func_182();
			break;
		default:
			func_183();
			break;
	}
	if (func_22(uParam0) == 0)
	{
		func_1(uParam0, 4);
	}
	clear_bit(&(Global_1956580->f_1), 5);
	func_184(0);
	if (func_166(2))
	{
		func_167();
		func_168(2);
	}
	func_186(Global_35, func_185(6), 1, 1, 0);
	func_187(Global_35, -1515874150, 0, 99217379, 1, 1, 1, 0, 1, 1);
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
	iVar0 = func_188(*iParam0);
	if ((*Global_1945938)[iVar0]->f_16 != get_id_of_this_thread() && bParam2)
	{
		*iParam0 = 0;
		return;
	}
	func_189(iVar0);
	*iParam0 = 0;
}

int func_12(int iParam0)
{
	if (!func_190(iParam0))
	{
		return 0;
	}
	return (*Global_1835011)[iParam0]->f_1;
}

void func_13(int iParam0, bool bParam1, int iParam2)
{
	if (!func_191(iParam0))
	{
		if (!bParam1)
		{
		}
		return;
	}
	if (!func_192(iParam0) && !func_193(iParam0))
	{
		if (!bParam1)
		{
		}
		return;
	}
	if (func_194(iParam0) == 0)
	{
	}
	if (iParam2 == 2 && !func_192(iParam0))
	{
		iParam2 = -1;
	}
	if (func_195(iParam0) == 3 || (func_195(iParam0) == 1 && _0x01f4d242765c6b24(func_194(iParam0))))
	{
		func_197(func_196(iParam0), func_194(iParam0), iParam2);
		if ((!func_191(Global_1572864->f_8) && !func_198(0, 1, 0)) && !func_199(&Global_1935630, 32768))
		{
			iVar0 = func_200(iParam0);
			if (iVar0 != -1)
			{
				func_201(0);
			}
			else if (func_196(iParam0) == 8)
			{
				iVar0 = func_202();
				if (iVar0 != -1)
				{
					func_201(0);
				}
			}
		}
	}
	func_203(iParam0, 0);
	if (func_204(0) == iParam0)
	{
		func_40(1);
		func_205(0);
		func_206(1);
	}
	func_207(iParam0, 1);
	func_208(iParam0);
}

void func_14()
{
	Global_1572864->f_8 = -1;
	Global_1572864->f_9 = -1;
	Global_1572864->f_10 = -1;
	func_209(0);
	func_210(0);
	func_64(0);
	func_65(0);
	func_211(0);
	func_212(1f);
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
		func_213();
	}
	_0xa0cefcea390aab9b(0);
}

void func_16(bool bParam0, int iParam1)
{
	if (func_214())
	{
		_0xdd1232b332cbb9e7(3, 1, 0);
	}
	if (bParam0)
	{
		if (func_215())
		{
			func_113(1);
		}
	}
	_0x36559148b78853b3(0, iParam1, 0);
}

void func_17(var uParam0, bool bParam1)
{
	Var0 = func_194(func_12(uParam0->f_607));
	Var0.f_1 = 0;
	Var0.f_2 = func_132(func_33(uParam0));
	Var0.f_4 = (get_entity_health(Global_35) * 100 / get_entity_max_health(Global_35, false));
	Var0.f_5 = Global_40.f_7729;
	Var0.f_6 = func_216(0);
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
		func_217(iVar0, iParam0);
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
		if (func_218((*uParam1)[iVar0], 1048576))
		{
			switch (iParam0)
			{
				case 0:
					if ((*uParam1)[iVar0]->f_9 == 7)
					{
						func_219((*uParam1)[iVar0], 1);
					}
					break;
				case 1:
				case 2:
					if ((*uParam1)[iVar0]->f_9 == 3)
					{
						func_219((*uParam1)[iVar0], 1);
					}
					break;
				case 3:
					if ((*uParam1)[iVar0]->f_9 == 2)
					{
						func_219((*uParam1)[iVar0], 1);
					}
					break;
			}
		}
		iVar0++;
	}
}

bool func_26(var uParam0)
{
	return func_220(*uParam0, 1);
}

void func_27(var uParam0, bool bParam1)
{
	if (bParam1 || !func_26(uParam0))
	{
		func_221(uParam0);
	}
}

bool func_28(var uParam0, bool bParam1)
{
	if (func_8(uParam0, 128) && func_29())
	{
		return true;
	}
	if (func_222(&(uParam0->f_13118)) >= 4000)
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
	func_223(!func_6(uParam0, 32), 1);
	func_1(uParam0, 32);
}

bool func_31(var uParam0)
{
	return true;
}

bool func_32()
{
	return func_191(Global_1572864->f_8);
}

int func_33(var uParam0)
{
	return uParam0->f_597;
}

struct<4> func_34(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			Var0 = { func_224(0, 0) };
			break;
		case 1:
			Var0 = { func_224(0, 2) };
			break;
		case 2:
			Var0 = { func_224(0, 4) };
			break;
		case 3:
			Var0 = { func_224(0, 5) };
			break;
		case 4:
			Var0 = { func_224(0, 6) };
			break;
		case 5:
			Var0 = { func_224(0, 7) };
			break;
		case 6:
			Var0 = { func_224(0, 8) };
			break;
		case 25:
			Var0 = { func_224(0, 8) };
			break;
		case 26:
			Var0 = { func_224(0, 8) };
			break;
		default:
			break;
	}
	return Var0;
}

int func_35(var uParam0)
{
	return func_225(uParam0, func_33(uParam0));
}

void func_36(var uParam0, struct<4> Param1, struct<4> Param5, int iParam9, int iParam10)
{
	Var0 = { Param1 };
	Var0.f_3 = Param1.f_3;
	Var4 = { Param5 };
	Var4.f_3 = Param5.f_3;
	func_209(0);
	func_226(func_12(uParam0->f_607), Var0, Var4, func_132(iParam9), func_132(iParam10));
}

void func_37(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_218((*uParam0)[iVar0], 1048576) && (*uParam0)[iVar0]->f_9 == 9)
		{
			func_227((*uParam0)[iVar0]);
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
			func_228(iVar0, 4096);
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
		func_229(Global_1935630, 4194304);
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
	func_230();
	func_231();
	func_232();
	func_233();
}

void func_43()
{
	if (func_234())
	{
		Global_18 = 0;
		Global_43884 = 0;
		if (!func_29())
		{
			func_235(1);
		}
	}
}

void func_44()
{
	Global_1894899->f_186 = 0;
	func_236();
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
	func_237(1, iParam0, iParam1);
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
	return (func_238() || func_54());
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
	func_239(uParam0);
	func_240(uParam0, 0);
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
		func_241(iVar0);
		iVar0++;
	}
	func_242();
	func_243();
}

bool func_54()
{
	return Global_1894899 & 2 != 0;
}

void func_55(bool bParam0, int iParam1)
{
	if (func_244())
	{
		if (func_245(255))
		{
			if (!func_246(36, 255))
			{
				return;
			}
		}
	}
	bVar0 = bParam0;
	if (!bParam0)
	{
		if (func_247(Global_1894899->f_2) && func_248(Global_1894899->f_2))
		{
			func_249(Global_1894899->f_2, 0);
			if (iParam1 != 0)
			{
				Global_1894899->f_7 = iParam1;
				func_250(16);
			}
		}
		else if (func_247(Global_1894899->f_2) && !func_251(Global_1894899->f_2, 2))
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
		func_252(16);
		func_253();
		if (bVar0)
		{
			func_252(1);
		}
	}
}

void func_56(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < uParam0->f_13145)
	{
		if (func_254(uParam0->f_5423[iVar0]))
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
	if (func_255(uParam0->f_5421))
	{
		iVar0 = 0;
		while (iVar0 < func_256(uParam0->f_5421))
		{
			iVar1 = func_257(uParam0->f_5421, iVar0);
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
		if (func_258(iVar1))
		{
			iVar2 = Global_1360165[iVar0];
			func_259(uParam0, iVar1, iVar2, iParam1, bParam2, bParam3, 0);
		}
		iVar0++;
	}
}

void func_58(var uParam0, bool bParam1)
{
	_0x0751d461f06e41ce(get_player_index(), 33, 2, 0);
	iVar0 = func_260(uParam0);
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	if (is_entity_dead(iVar0) || is_ped_injured(iVar0))
	{
	}
	iVar1 = func_261(iVar0);
	iVar2 = get_id_of_this_thread();
	bVar3 = false;
	if (is_thread_active(iVar2, false) && func_262(iVar1) == iVar2)
	{
		bVar3 = true;
	}
	if (bVar3)
	{
		if (bParam1)
		{
			func_263(7);
		}
		else
		{
			func_264(iVar0, 0);
		}
		func_265(uParam0, 16);
		set_ped_config_flag(iVar0, 219, false);
	}
}

void func_59(int iParam0)
{
	iParam0 = func_266(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_267(iParam0, 32);
	func_268();
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
	Var0 = { func_269(iParam0) };
	if (!is_string_null_or_empty(&Var0))
	{
		_text_database_delete(&Var0);
	}
}

void func_63(int iParam0)
{
	Var0 = { func_270(iParam0) };
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
		func_211(1);
	}
}

void func_65(bool bParam0)
{
	Global_1572864->f_13 = bParam0;
	if (bParam0)
	{
		func_211(0);
	}
}

void func_66(int iParam0)
{
}

void func_67(var uParam0)
{
	func_271(&(uParam0->f_13121));
}

void func_68(int iParam0, var uParam1)
{
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (func_218((*uParam1)[iVar0], 1048576) && (*uParam1)[iVar0]->f_9 == 9)
		{
			func_219((*uParam1)[iVar0], 1);
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
	iVar0 = func_196(iParam0);
	iVar1 = -1;
	if (iVar0 == 1)
	{
		iVar2 = func_272(iParam0);
		if (iVar2 == 36)
		{
			iVar1 = 99;
			if (func_273(iVar1))
			{
				if (func_274(iVar1, 4))
				{
					func_275(iVar1, 1);
				}
			}
		}
		else if (iVar2 == 38)
		{
			func_276(1);
		}
	}
	else if (iVar0 == 8)
	{
		iVar3 = func_272(iParam0);
		if (iVar3 == 59)
		{
			func_276(1);
		}
		else if (iVar3 == 61)
		{
			func_276(0);
		}
		else if (iVar3 == 83)
		{
			func_276(0);
		}
	}
}

void func_73()
{
	iVar0 = 0;
	while (iVar0 < &Global_1347702)
	{
		if (func_273(iVar0))
		{
			if (func_274(iVar0, 4))
			{
				if (func_274(iVar0, 16))
				{
					func_277(iVar0, 1);
				}
				if (func_274(iVar0, 8))
				{
					func_278(iVar0, 1);
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
		if (func_279(uParam0) == 0 && iVar0 == 0)
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
		func_280(iVar3, iVar4);
	}
	if (bVar2)
	{
		func_281(uParam0);
	}
}

void func_75(var uParam0)
{
	iVar0 = 0;
	if (func_282(uParam0))
	{
		fVar1 = to_float((_get_bounty_for_player(get_player_index()) - (*Global_2621440)[0]->f_9.f_20));
		if (fVar1 > 0f)
		{
			fVar2 = (1f + (to_float(get_random_int_in_range(50, 200)) / 1000f));
			iVar0 = (iVar0 + round((fVar1 * fVar2)));
		}
	}
	func_283(iVar0, 0, 1065353216, 1, 0, 0, 1, 752097756);
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
	if (!func_247(iParam0))
	{
		return;
	}
	bVar0 = func_251(iParam0, 67108864);
	if (bParam1)
	{
		if (((!bVar0 && func_284(iParam0) == 1) && iParam0 != 120) && iParam0 != 92)
		{
			func_286(iParam0, func_285());
			func_287(iParam0, 67108864);
		}
	}
	else if (bVar0)
	{
		func_288(iParam0, 67108864);
		func_286(iParam0, -15);
	}
	func_289(iParam0);
}

void func_79(bool bParam0)
{
	if (!bParam0)
	{
		func_290(11);
	}
	else
	{
		func_291(11);
	}
}

void func_80(int iParam0)
{
	if (func_292(iParam0, 0))
	{
		func_293(262144, 5, 0, 1);
		func_294(720f, 1, 0);
	}
	switch (iParam0)
	{
		case 18:
			func_295(101, 7, 1f, 0, 1);
			func_295(89, 7, 1f, 0, 1);
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
	if (!func_191(iParam0))
	{
		return;
	}
	if (func_296(iParam0) == 4)
	{
		func_297(iParam0, func_285());
		if (!func_195(iParam0) == 5 && !func_195(iParam0) == 6)
		{
			if (bParam3)
			{
				func_203(iParam0, 6);
			}
			else
			{
				func_203(iParam0, 5);
			}
			func_208(iParam0);
		}
		return;
	}
	if (bParam1)
	{
		func_40(1);
	}
	iVar0 = func_196(iParam0);
	bVar1 = func_20() == false;
	if (iVar0 == 1 || iVar0 == 8)
	{
		func_298(0, 2);
		if (!bVar1 && bParam1)
		{
			func_299();
		}
	}
	else
	{
		func_205(0);
	}
	if (!iVar0 == 1 && !iVar0 == 8)
	{
		func_300(iParam0);
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
				if (bParam1 && func_195(iParam0) != 0)
				{
					if (iVar0 == 1)
					{
						if (func_272(iParam0) == 77)
						{
							stat_id_set_gxt_label(&Var4, &((*Global_1835011)[76]->f_8), true);
						}
						else
						{
							stat_id_set_gxt_label(&Var4, &((*Global_1835011)[func_272(iParam0)]->f_8), true);
						}
					}
					else if ((func_272(iParam0) != 95 && func_272(iParam0) != 82) && !func_301((*Global_1347702)[func_272(iParam0)]->f_12, 512))
					{
						stat_id_set_gxt_label(&Var4, &((*Global_1347702)[func_272(iParam0)]->f_3), true);
					}
				}
			}
			else
			{
				switch (_0x225640e09effdc3f())
				{
					case 0:
						stat_id_set_gxt_label(&Var4, &((*Global_1835011)[func_272(iParam0)]->f_8), true);
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
		func_303(func_272(iParam0), iVar6, func_302());
	}
	else if (iVar0 == 8)
	{
		func_305(func_272(iParam0), iVar6, func_302(), func_304());
	}
	if (!func_195(iParam0) == 5 && !func_195(iParam0) == 6)
	{
		iVar9 = func_306(iParam0, &uVar7, &iVar8);
		if (iVar9 != 176656832)
		{
			func_307(iVar9, uVar7, -469960592, iVar8, 1, 1, 0);
		}
	}
	if (!&Global_1879534 && !Global_1879534->f_1)
	{
		switch (iVar0)
		{
			case 1:
				iVar10 = func_308(func_272(iParam0), &iVar11);
				if (!Global_17504.f_9)
				{
					iVar10 = func_309((iVar10 - 20), 0, iVar10);
					iVar11 = func_309((iVar11 - 10), 0, iVar11);
				}
				func_310(1);
				func_311(iVar10, iVar11, 1);
				Global_17504.f_9 = 0;
				Global_17504.f_10 = 0;
				Global_1899528->f_217 = 1;
				break;
			case 4:
				func_311(45, 0, 1);
				break;
			case 8:
				iVar10 = func_312(func_272(iParam0), &iVar11);
				if (!Global_17504.f_9)
				{
					iVar10 = func_309((iVar10 - 20), 0, iVar10);
					iVar11 = func_309((iVar11 - 10), 0, iVar11);
				}
				func_311(iVar10, iVar11, 1);
				Global_17504.f_9 = 0;
				Global_17504.f_10 = 0;
				if (func_313(func_272(iParam0)))
				{
					func_314(14, 0, 0, 0, 0, 0, 1065353216, 0);
				}
				Global_1899528->f_217 = 1;
				break;
			case 9:
				func_311(120, 0, 1);
				break;
			case 2:
				func_311(120, 0, 1);
				break;
			case 6:
				func_311(func_316(func_315(iParam0)), 0, 1);
				break;
			case 5:
				func_311(120, 0, 1);
				break;
		}
	}
	func_207(iParam0, 1);
	func_297(iParam0, func_285());
	func_208(iParam0);
	if ((!func_195(iParam0) == 0 && bParam1) && func_20() == -1)
	{
		iVar12 = func_200(iParam0);
		if (iVar12 != -1)
		{
			func_201(0);
		}
		else if (iVar0 == 8)
		{
			iVar12 = func_202();
			if (iVar12 != -1)
			{
				func_201(0);
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
				switch (func_272(iParam0))
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
				if (func_273(func_272(iParam0)) && func_301((*Global_1347702)[func_272(iParam0)]->f_12, 4))
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
				if (func_272(iParam0) != 77)
				{
					Global_1879514->f_1 = iParam0;
					Global_1879514->f_11 = bParam3;
					Global_1879514->f_13 = func_129();
				}
				break;
			case 8:
				if (func_272(iParam0) != 58)
				{
					Global_1879514->f_1 = iParam0;
					Global_1879514->f_11 = bParam3;
					Global_1879514->f_13 = func_129();
				}
				break;
		}
	}
	if (!func_195(iParam0) == 5 && !func_195(iParam0) == 6)
	{
		if (bParam3)
		{
			func_203(iParam0, 6);
		}
		else
		{
			func_203(iParam0, 5);
		}
		func_208(iParam0);
		bVar13 = true;
	}
	if (bVar13)
	{
		switch (iVar0)
		{
			case 1:
				switch (func_272(iParam0))
				{
					case 0:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_PROFESSION_ODRISCOLL"));
						_0xd8c7162ab2e2af45(-1753910767);
						break;
					case 1:
						func_317();
						_0xbb697756309d77ee(1);
						break;
					case 4:
						func_318(-1781387050, 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_318(1433048902, 4, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_318(-597058368, 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_318(-529638012, 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_318(500564674, 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_318(-875449072, 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_318(1237770824, 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_318(236757114, 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_318(-601932535, 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_318(-1267972061, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_319(-1267972061);
						func_318(1619534881, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_319(1619534881);
						func_318(-755457379, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_319(-755457379);
						func_318(1015404643, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_319(1015404643);
						func_318(-1724192342, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_319(-1724192342);
						func_318(1310680212, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_319(1310680212);
						func_318(-566881549, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_319(-566881549);
						func_318(-1753730528, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_319(-1753730528);
						func_318(147796381, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_319(147796381);
						func_318(-378547623, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_319(-378547623);
						func_318(829545206, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_319(829545206);
						func_318(891318243, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_319(891318243);
						func_318(-1016714371, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_318(-1838434463, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_318(-1448210800, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_318(-248960099, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_320();
						func_321(967523420);
						func_322();
						func_323();
						break;
					case 5:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_TOMMY"));
						break;
					case 14:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_LEVITICUS"));
						break;
					case 2:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key(func_324(10, 0)));
						break;
					case 8:
						_0x946d46cd6dfb9742(get_player_index(), 0, 621714131);
						break;
					case 15:
						func_318(1030791766, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
						if (!_unlock_is_visible(1231074654))
						{
							_unlock_set_visible(1231074654, true);
							func_325(449, 0);
						}
						break;
					case 10:
						if (!_unlock_is_visible(1880205078))
						{
							_unlock_set_visible(1880205078, true);
							func_325(446, 0);
						}
						break;
					case 16:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("ALLY_LEIGHGRAY"));
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("ALLY_ARCHIBALD"));
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_PROFESSION_GRAY"));
						break;
					case 18:
						func_326(304805134, 1, 1);
						if (!func_327((*Global_1347702)[21]->f_15, 1))
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
						func_328();
						break;
					case 26:
						func_329();
						break;
					case 17:
						func_330(Global_35, 176992230, 0, -358215195, 1, 1);
						if (func_331())
						{
							func_332(1905553950);
						}
						break;
					case 19:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_TAVISH_GRAY"));
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_CLAY"));
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_CLIVE"));
						break;
					case 33:
						if (!func_333(-514575035, -1))
						{
							iVar15 = func_285();
							func_334(&iVar15, 0, 0, 0, 2, 0, 0, 0);
							func_335(-514575035, iVar15, 0);
						}
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_EVELYN_MILLER"));
						if (func_331())
						{
							func_332(1529685685);
						}
						break;
					case 34:
						if (func_331())
						{
							func_332(-2082646505);
						}
						break;
					case 28:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_BRONTE"));
						break;
					case 31:
						func_336();
						break;
					case 37:
						func_337();
						if (func_338())
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
						func_339();
						break;
					case 43:
						func_340();
						break;
					case 44:
						if (!func_327((*Global_1347702)[82]->f_15, 1))
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
						if (!func_327((*Global_1347702)[83]->f_15, 1))
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
						func_341();
						break;
					case 59:
						func_342();
						break;
					case 60:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_TOM_DICKENS"));
						break;
					case 61:
						func_343();
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
						func_344();
						if (!_unlock_is_visible(1673898385))
						{
							_unlock_set_visible(1673898385, true);
							func_325(451, 0);
						}
						if (!func_345(-1992824800))
						{
							if (func_345(1520110311))
							{
								iVar16 = func_285();
								func_334(&iVar16, 0, 0, 6, 0, 0, 0, 0);
								func_335(1937177603, iVar16, 1);
							}
						}
						if (func_346(4))
						{
							if (!func_347(684296857, 1, 0))
							{
								iVar17 = func_285();
								func_334(&iVar17, 0, 0, 6, 0, 0, 0, 0);
								func_335(-1439688706, iVar17, 1);
							}
						}
						func_318(1224687176, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_318(-4440804, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						break;
					case 74:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_ALBERT_CAKE"));
						func_348(89200);
						func_348(2300);
						func_348(2300);
						break;
					case 68:
						func_349();
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
						func_350();
						func_348(-139100);
						break;
					case 69:
						if (func_327((*Global_1347702)[9]->f_15, 1))
						{
							func_348(-6000);
						}
						break;
					case 70:
						func_348(23400);
						func_348(1900);
						func_348(-15000);
						break;
					case 71:
						func_348(-5500);
						break;
				}
				break;
			case 8:
				switch (func_272(iParam0))
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
						func_351();
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
						func_352();
						break;
					case 66:
						func_353();
						func_354();
						break;
					case 67:
						if (!func_355(6))
						{
							func_356(6);
						}
						if (!func_355(3))
						{
							func_356(3);
						}
						if (func_331())
						{
							func_332(1534638301);
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
						if (func_327((*Global_1835011)[69]->f_1, 1))
						{
							func_357(0);
							func_348(40500);
						}
						else
						{
							func_357(0);
							func_348(46500);
						}
						break;
				}
				break;
			case 6:
				switch (func_272(iParam0))
				{
					case 0:
						switch (func_315(iParam0))
						{
							case 5:
								_0x946d46cd6dfb9742(get_player_index(), 0, 1014740297);
								break;
						}
						break;
				}
				break;
		}
		func_358(iParam0);
		func_359();
		switch (iVar0)
		{
			case 1:
				switch (func_272(iParam0))
				{
					case 4:
						func_360(iParam0, 1000, 0, 1065353216, 1, 0, 0, 1);
						break;
					case 61:
					case 62:
					case 63:
						func_360(iParam0, 300, 0, 1065353216, 1, 0, 0, 1);
						break;
					case 25:
						func_360(iParam0, 150000, 1, 0.5f, 4, 0, 0, 1);
						break;
					case 12:
						func_360(iParam0, 120000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 53:
						func_360(iParam0, 90000, 1, 0.5f, 4, 0, 0, 1);
						break;
					case 20:
						func_360(iParam0, 85000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 19:
						func_360(iParam0, 70000, 1, 0.5f, 3, 0, 0, 1);
						break;
					case 24:
						iVar18 = func_361(iParam0);
						func_360(iParam0, iVar18, 1, 0.5f, 4, 0, 0, 1);
						break;
					case 28:
						func_360(iParam0, 45000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 34:
						func_360(iParam0, 600000, 1, 0.5f, 4, 0, 0, 1);
						if (!func_347(-2046502963, 1, 0))
						{
							func_318(-2046502963, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
						}
						break;
					case 29:
						func_360(iParam0, 4600, 1, 0f, 3, 0, 0, 1);
						break;
					case 37:
						break;
					case 58:
						break;
					case 57:
						func_360(iParam0, 2100000, 1, 0.9047619f, 8, 0, 0, 1);
						break;
					case 76:
						func_360(iParam0, 2042100, 0, 1065353216, 1, 0, 0, 1);
						break;
					case 72:
						if (func_361(iParam0) == 0)
						{
							func_360(iParam0, 20000, 0, 1065353216, 1, 0, 0, 1);
						}
						else
						{
							func_360(iParam0, 15000, 0, 1065353216, 1, 0, 0, 1);
						}
						break;
				}
				break;
			case 8:
				if (func_301((*Global_1347702)[func_272(iParam0)]->f_12, 536870912))
				{
					func_362(11, 1);
				}
				switch (func_272(iParam0))
				{
					case 109:
						func_360(iParam0, 1500, 0, 1065353216, 1, 0, 0, 1);
						break;
					case 55:
						func_362(8, 1);
						break;
					case 138:
						set_bit(&(Global_40.f_9052), 1);
						set_bit(&(Global_40.f_9052), 3);
						break;
					case 94:
						func_360(iParam0, 30000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 63:
						func_360(iParam0, 60000, 1, 0.5f, 3, 0, 0, 1);
						break;
					case 37:
						func_360(iParam0, 75000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 116:
						func_360(iParam0, 25000, 1, 0.5f, 1, 0, 0, 1);
						break;
					case 9:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_ANSEL_ATHERTON"));
						break;
				}
				break;
			case 11:
				if (iParam0 == func_363(0, 10, 11, 2116153146))
				{
					func_360(iParam0, func_361(iParam0), 1, 0.5f, 3, 0, 0, 1);
				}
				else if (iParam0 == func_363(0, 7, 11, -379687487))
				{
					func_360(iParam0, func_364(9), 1, 0.5f, 3, 0, 0, 1);
				}
				else if (iParam0 == func_363(0, 8, 11, -1386089015))
				{
					func_360(iParam0, func_364(10), 1, 0.5f, 2, 0, 0, 1);
				}
				else if (iParam0 == func_363(0, 11, 11, -1952009645))
				{
					func_360(iParam0, func_364(8), 1, 0.5f, 3, 0, 0, 1);
				}
				else if (iParam0 == func_363(0, 12, 11, 2065895756))
				{
					func_360(iParam0, func_364(11), 1, 0.5f, 2, 0, 0, 1);
				}
				break;
		}
		if (bParam1)
		{
			if (!func_195(iParam0) == 0)
			{
				if (func_194(iParam0) == 0)
				{
				}
				else if (_0x01f4d242765c6b24(func_194(iParam0)))
				{
					iVar19 = 0;
					if (bParam3)
					{
						iVar19 = 3;
					}
					func_197(func_196(iParam0), func_194(iParam0), iVar19);
					if (bParam4)
					{
						if (iVar0 == 8 && func_272(iParam0) == 58)
						{
							Global_1879514->f_1 = iParam0;
						}
						func_366(func_365(Global_1879514->f_1));
						if (iVar0 == 8 && func_272(iParam0) == 58)
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
						if (func_273(func_272(iParam0)) && func_301((*Global_1347702)[func_272(iParam0)]->f_12, 1))
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
			func_367(bParam2, iVar20);
		}
	}
	func_206(1);
	if ((bVar13 || func_129()) && (func_196(iParam0) == 1 || func_196(iParam0) == 8))
	{
		Global_1879534->f_6 = 1;
		Global_1879534->f_7 = 1;
	}
}

void func_84(int iParam0, bool bParam1)
{
	if (_0x01f4d242765c6b24(func_194(iParam0)))
	{
		iVar0 = 0;
		if (bParam1)
		{
			iVar0 = 3;
		}
		func_197(func_196(iParam0), func_194(iParam0), iVar0);
		if (func_82(32768))
		{
			iVar1 = func_196(iParam0);
			if ((iVar1 == 1 || iVar1 == 8) || (iVar1 == 11 && iParam0 == func_363(0, 10, 11, 2116153146)))
			{
				Global_1898438 = get_game_timer();
				Global_1879514->f_1 = iParam0;
				Global_1879514->f_19 = func_368();
				Global_1879514->f_18 = 1;
			}
		}
	}
	if (func_193(iParam0))
	{
		func_13(iParam0, 0, 2);
	}
	else if (func_192(iParam0))
	{
		if (!func_195(iParam0) == 5 && !func_195(iParam0) == 6)
		{
			if (bParam1)
			{
				func_203(iParam0, 6);
			}
			else
			{
				func_203(iParam0, 5);
			}
			func_208(iParam0);
		}
	}
	switch (func_196(iParam0))
	{
		case 1:
			switch (func_272(iParam0))
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
			switch (func_272(iParam0))
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
	vVar2 = { func_369((*Global_2621440)[0]->f_9.f_7, &uVar0, &uVar1, 0, 1, 1, 0, 0, 0) };
	func_370(vVar2, uVar1, uVar0, 0);
	func_371(vVar2);
	Global_40.f_9.f_15 = func_372(vVar2, 0);
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
	func_373();
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
	func_374(Var10, 0);
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
	if (!func_191(iParam0))
	{
		return;
	}
	if (iParam0 != func_204(0))
	{
		return;
	}
	if (func_194(iParam0) == 0)
	{
	}
	iVar0 = func_196(iParam0);
	if (func_195(iParam0) == 3)
	{
		if (func_194(iParam0) == 0)
		{
		}
		else if (_0x01f4d242765c6b24(func_194(iParam0)))
		{
			if (func_196(iParam0) != 1 && func_196(iParam0) != 8)
			{
				func_197(func_196(iParam0), func_194(iParam0), 1);
			}
		}
	}
	Global_1898438 = (get_game_timer() - 10000);
	func_208(iParam0);
	func_40(1);
	func_205(0);
	func_203(iParam0, 0);
	switch (iVar0)
	{
		case 1:
			func_310(1);
			func_311(15, 0, 1);
			break;
		case 4:
			func_311(10, 0, 1);
			break;
		case 8:
			func_311(10, 0, 1);
			break;
		case 9:
			func_311(10, 0, 1);
			break;
		case 2:
			func_311(10, 0, 1);
			break;
		case 6:
			func_311(10, 0, 1);
			break;
		case 5:
			func_311(10, 0, 1);
			break;
	}
	func_206(1);
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

struct<8> func_96(var uParam0)
{
	return uParam0->f_10784;
}

void func_97(int iParam0, int iParam1, char* sParam2, bool bParam3, bool bParam4, bool bParam5)
{
	if (func_375(Global_1347343->f_11, 536870912))
	{
		return;
	}
	if (bParam3)
	{
		func_376(&(Global_1347343->f_11), 64);
	}
	if (bParam4)
	{
		func_376(&(Global_1347343->f_11), 16384);
	}
	if (func_377() >= 2)
	{
		if (!func_375(Global_1347343->f_11, 16384))
		{
			func_376(&(Global_1347343->f_11), 8);
		}
		func_212(0.88f);
	}
	StringCopy(&(Global_1347343->f_3), sParam2, 64);
	Global_1347343->f_2 = iParam0;
	Global_1347343 = 0;
	Global_1347343->f_1 = iParam1;
	func_229(Global_1935630, 2048);
	func_378(bParam5);
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
			func_379(&(uParam0->f_10792), &(Global_43619[iVar0]), &(Global_43619[iVar0]->f_1), 0);
		}
		iVar0++;
	}
	if (_does_anim_scene_exist(Global_43800))
	{
		uParam0->f_7375.f_804 = Global_43800;
		take_ownership_of_anim_scene(uParam0->f_7375.f_804);
	}
	if (func_199(&Global_1935630, 524288))
	{
		func_71(Global_1935630, 524288);
		func_380(uParam0, 67108864);
	}
}

int func_101(var uParam0)
{
	return func_381(&(uParam0->f_7375));
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
	return func_382() != -1;
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
	func_383(uParam0);
	uParam0->f_634[0] = 58329;
	uParam0->f_634[1] = 58329;
	uParam0->f_637 = 0;
	func_385(uParam0, *uParam1);
	func_386(uParam0);
}

void func_109(var uParam0)
{
	func_387(uParam0, 100f, 100f, 0f);
	func_388();
	func_389();
	func_170(1);
	func_180(1);
	if (func_390(7))
	{
		func_391(7, 0);
	}
	if (func_390(1))
	{
		func_391(1, 0);
	}
	set_bit(&(Global_1956580->f_1), 5);
	func_184(1);
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		iLocal_1081[iVar0] = get_sound_id();
		iVar0++;
	}
	func_392(109);
}

char[] func_110(int iParam0)
{
	if (!func_190(iParam0))
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
			func_393(iVar0, iVar1);
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
	if (!func_247(iParam0))
	{
		return false;
	}
	return func_251(iParam0, 33554432);
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
	return func_394(uParam0->f_1[func_132(iParam1)]->f_11, iParam2);
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
		func_395(&(uParam0->f_7375));
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
	return func_396(iParam0);
}

bool func_127(struct<4> Param0)
{
	if (func_82(32768))
	{
		return true;
	}
	return func_397(Param0, Param0.f_3);
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
	if (!func_398())
	{
		return false;
	}
	if (!func_327((*Global_1835011)[1]->f_1, 1))
	{
		return true;
	}
	if ((func_327((*Global_1835011)[2]->f_1, 1) && func_327((*Global_1347702)[120]->f_15, 1)) && !func_327((*Global_1835011)[4]->f_1, 1))
	{
		return true;
	}
	if (func_327((*Global_1835011)[37]->f_1, 1) && !func_327((*Global_1835011)[39]->f_1, 1))
	{
		return true;
	}
	if (func_327((*Global_1835011)[57]->f_1, 1) && !func_327((*Global_1835011)[60]->f_1, 1))
	{
		return true;
	}
	if (func_327((*Global_1835011)[26]->f_1, 1) && !func_327((*Global_1347702)[67]->f_15, 1))
	{
		return true;
	}
	if ((func_327((*Global_1835011)[62]->f_1, 1) && func_327((*Global_1835011)[63]->f_1, 1)) && !func_327((*Global_1835011)[64]->f_1, 1))
	{
		return true;
	}
	if (func_327((*Global_1835011)[75]->f_1, 1) && !func_327((*Global_1347702)[1]->f_15, 1))
	{
		return true;
	}
	if (func_327((*Global_1835011)[76]->f_1, 1) && !func_327((*Global_1835011)[77]->f_1, 1))
	{
		return true;
	}
	if ((func_327((*Global_1835011)[40]->f_1, 1) && func_327((*Global_1835011)[41]->f_1, 1)) && !func_327((*Global_1835011)[44]->f_1, 1))
	{
		return true;
	}
	if ((func_327((*Global_1835011)[62]->f_1, 1) && func_327((*Global_1835011)[63]->f_1, 1)) && !func_327((*Global_1835011)[64]->f_1, 1))
	{
		return true;
	}
	if ((func_327((*Global_1835011)[65]->f_1, 1) && func_327((*Global_1835011)[66]->f_1, 1)) && !func_327((*Global_1835011)[67]->f_1, 1))
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
		func_103(uParam0, 8);
	}
	func_103(uParam0, 4096);
	_0x4759cc730f947c81();
	_0x1ff00db43026b12f();
	start_player_teleport(player_id(), vParam1, fParam4, false, true, true, false);
	do_screen_fade_out(0);
	_set_milliseconds_per_game_minute(9999999);
	func_221(&(uParam0->f_603));
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

void func_133(var uParam0)
{
	if (_uilog_is_entry_registered(2, func_85(uParam0)))
	{
		_uilog_remove_entry(2, func_85(uParam0));
	}
	if (!_uilog_is_entry_registered(1, func_85(uParam0)))
	{
		func_401(uParam0->f_607);
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
	func_402(&(uParam0->f_638));
	func_403(&(uParam0->f_819));
	func_404(&(uParam0->f_1020));
	func_405(&(uParam0->f_1081));
	func_406(&(uParam0->f_1126));
	func_407(&(uParam0->f_5147));
	func_408(&(uParam0->f_1124));
	func_409(&(uParam0->f_5188));
	func_410(&(uParam0->f_5239));
	func_411(&(uParam0->f_5249));
	func_412(&(uParam0->f_5265));
	func_413(&(uParam0->f_5286));
}

void func_138(var uParam0)
{
	if (!is_itemset_valid(iLocal_14))
	{
		iLocal_14 = create_itemset(true);
	}
	func_414(uParam0, -2106596341, 512);
	func_414(uParam0, -737796731, 512);
	func_414(uParam0, -411270448, 512);
	func_414(uParam0, 1176943507, 512);
	func_414(uParam0, 959905628, 512);
	func_414(uParam0, -1054898448, 512);
	func_414(uParam0, 1913851978, 512);
	func_414(uParam0, -647670359, 512);
	func_414(uParam0, -505389389, 512);
	func_414(uParam0, 1336128411, 512);
	func_414(uParam0, 155756109, 512);
	func_414(uParam0, -212731652, 512);
	func_414(uParam0, -806211199, 512);
	func_414(uParam0, 1935100224, 512);
	func_414(uParam0, -701419751, 512);
	func_414(uParam0, -238490359, 512);
	func_414(uParam0, 1907611, 512);
	func_414(uParam0, 489321407, 512);
	func_414(uParam0, 49263610, 512);
	func_414(uParam0, 1999074085, 512);
	func_414(uParam0, 133961016, 512);
	func_414(uParam0, 95866989, 512);
	func_414(uParam0, -969464097, 67108863);
	func_414(uParam0, 1407031519, 67108863);
	func_414(uParam0, 1582986780, 512);
	func_414(uParam0, -283162583, 67108863);
	func_414(uParam0, 11966224, 67108863);
	func_414(uParam0, -2106596341, 512);
	func_414(uParam0, -737796731, 512);
	func_414(uParam0, -411270448, 512);
	func_414(uParam0, 1176943507, 512);
	func_414(uParam0, 959905628, 512);
	func_414(uParam0, -1054898448, 512);
	func_414(uParam0, 1913851978, 512);
	func_414(uParam0, -647670359, 512);
	func_414(uParam0, -505389389, 512);
	func_414(uParam0, 1336128411, 512);
	func_414(uParam0, 155756109, 512);
	func_414(uParam0, -212731652, 512);
	func_414(uParam0, -806211199, 512);
	func_414(uParam0, 1935100224, 512);
	func_414(uParam0, -701419751, 512);
	func_414(uParam0, -238490359, 512);
	func_414(uParam0, 1907611, 512);
	func_414(uParam0, 489321407, 512);
	func_414(uParam0, 49263610, 512);
	func_414(uParam0, 1999074085, 512);
	func_414(uParam0, 133961016, 512);
}

void func_139(var uParam0)
{
	vLocal_295[81]->f_2 = 1;
	vLocal_295[82]->f_2 = 67108863;
	vLocal_295[90]->f_2 = 67108863;
	vLocal_295[91]->f_2 = 67108863;
	vLocal_295[92]->f_2 = 67108863;
	vLocal_295[93]->f_2 = 67108863;
	vLocal_295[94]->f_2 = 67108863;
	vLocal_295[95]->f_2 = 67108863;
	vLocal_295[96]->f_2 = 67108863;
	vLocal_295[97]->f_2 = 67108863;
	vLocal_295[98]->f_2 = 67108863;
	vLocal_295[99]->f_2 = 67108863;
	vLocal_295[83]->f_2 = 1;
	vLocal_295[89]->f_2 = 3;
	vLocal_295[0]->f_2 = 67108863;
	vLocal_295[1]->f_2 = 67108863;
	vLocal_295[70]->f_2 = 18;
	vLocal_295[2]->f_2 = 67108863;
	vLocal_295[57]->f_2 = 2;
	vLocal_295[func_415(65)]->f_2 = 67108863;
	vLocal_295[func_415(64)]->f_2 = 67108863;
	vLocal_295[77]->f_2 = 67108863;
	vLocal_295[76]->f_2 = 67108863;
	vLocal_295[79]->f_2 = 67108863;
	vLocal_295[3]->f_2 = 67108863;
	vLocal_295[65]->f_2 = 67108863;
	vLocal_295[64]->f_2 = 67108863;
	vLocal_295[66]->f_2 = 67108863;
	vLocal_295[67]->f_2 = 67108863;
	vLocal_295[70]->f_2 = 67108863;
	vLocal_295[71]->f_2 = 67108863;
	vLocal_295[72]->f_2 = 67108863;
	vLocal_295[74]->f_2 = 67108863;
	vLocal_295[78]->f_2 = 67108863;
	vLocal_295[58]->f_2 = 67108863;
}

void func_140(var uParam0, int iParam1, int iParam2)
{
	func_416(&(uParam0->f_1[func_132(iParam1)]->f_11), iParam2);
}

void func_141(var uParam0)
{
	func_103(uParam0, 1);
	func_103(uParam0, 2);
	func_103(uParam0, 65536);
	func_99(uParam0, 512);
}

void func_142(var uParam0, int iParam1)
{
	func_417(&(uParam0->f_638), &(uParam0->f_819), &(uParam0->f_1020), &(uParam0->f_1081), &(uParam0->f_1124), &(uParam0->f_1126), &(uParam0->f_5147), &(uParam0->f_5188), &(uParam0->f_5239), &(uParam0->f_5249), &(uParam0->f_5265), &(uParam0->f_5286), iParam1);
}

void func_143(int iParam0)
{
	Var0 = { func_269(iParam0) };
	if (!is_string_null_or_empty(&Var0))
	{
		_text_database_request(&Var0);
	}
}

void func_144(int iParam0)
{
	Var0 = { func_270(iParam0) };
	if (!is_string_null_or_empty(&Var0))
	{
		_text_database_request(&Var0);
	}
}

void func_145(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	func_418(&(uParam0->f_5310), iParam1, sParam2, bParam3);
}

void func_146(var uParam0)
{
	if (!func_255(uParam0->f_5421))
	{
		uParam0->f_5421 = { func_419() };
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
	func_420(&(uParam0->f_7375), fParam1);
}

void func_150(var uParam0, float fParam1)
{
	func_421(&(uParam0->f_7375), fParam1);
}

void func_151(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	func_422(uParam0, iParam1, sParam2, iParam3, iParam4, bParam5, 0);
	func_379(&(uParam0->f_10792), iParam1, sParam2, bParam6);
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
	if (!func_190(iParam0))
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
		if (func_423(uParam0, func_35(uParam0), 0))
		{
			func_140(uParam0, func_35(uParam0), 536870912);
		}
	}
	if (func_8(uParam0, 8192))
	{
		if (!func_8(uParam0, 536870912))
		{
			if (func_424(&(uParam0->f_1126), func_33(uParam0)))
			{
				func_99(uParam0, 536870912);
			}
		}
		return;
	}
	bVar0 = false;
	if (func_423(uParam0, func_33(uParam0), 1))
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
	if (func_425(uParam0) < 1)
	{
		func_426(uParam0, func_128(uParam0, 3), !func_8(uParam0, 2097152), uParam0->f_5410, !func_8(uParam0, 32), 0);
		func_427(uParam0, 1, uParam0->f_5413, uParam0->f_5413.f_1, uParam0->f_5413.f_2, uParam0->f_5416, 1, 1, 1);
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
				func_428(uParam0);
			}
		}
		if (func_120(uParam0, 32))
		{
			func_429(uParam0);
		}
	}
	switch (func_425(uParam0))
	{
		case -1:
		case 0:
			func_430(uParam0, 1);
			break;
		case 1:
			if (func_431(uParam0))
			{
				if (func_120(uParam0, 4096))
				{
					func_430(uParam0, 2);
				}
				else
				{
					func_430(uParam0, 3);
				}
			}
			break;
		case 2:
			if (func_432(uParam0))
			{
				func_430(uParam0, 3);
			}
			break;
		case 3:
			if (func_433(uParam0))
			{
				func_430(uParam0, 4);
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
		func_434(uParam0, 0);
		return true;
	}
	if (func_435(uParam0))
	{
		iVar0 = func_33(uParam0);
		func_107(uParam0, func_35(uParam0));
		if (func_33(uParam0) == 26)
		{
			func_434(uParam0, 0);
			return true;
		}
		else if (func_121(uParam0, iVar0, 128))
		{
			func_435(uParam0);
		}
	}
	return false;
}

int func_162(var uParam0, int iParam1)
{
	return uParam0->f_1[func_132(iParam1)]->f_10;
}

bool func_163(var uParam0)
{
	if (*uParam0 == 0)
	{
		return false;
	}
	return *uParam0 != -1;
}

bool func_164()
{
	return _uiprompt_is_valid(iLocal_207);
}

void func_165()
{
	if (!_uiprompt_is_valid(iLocal_207))
	{
		return;
	}
	_uiprompt_delete(iLocal_207);
}

bool func_166(int iParam0)
{
	iVar0 = iParam0;
	while (iVar0 >= 32)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	return func_437(&(uLocal_213[iVar1]), func_436(iVar0));
}

void func_167()
{
	Global_1934765->f_273 = 0;
}

void func_168(int iParam0)
{
	iVar0 = iParam0;
	while (iVar0 >= 32)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	func_438(uLocal_213[iVar1], func_436(iVar0));
}

bool func_169(bool bParam0)
{
	if ((bParam0 && func_166(19)) || (!bParam0 && !func_166(19)))
	{
		if (_0xa0bc8faed8cfeb3c(Global_35))
		{
			return true;
		}
	}
	if (bParam0)
	{
		if (_0xa0bc8faed8cfeb3c(Global_35))
		{
			if (func_166(16))
			{
				func_168(16);
				func_439(19);
				_set_ped_component_disabled(Global_35, 1263923957, 1);
				_set_ped_component_disabled(Global_35, -317538301, 1);
				_update_ped_variation(Global_35, false, true, true, true, false);
				return true;
			}
			else
			{
				func_186(Global_35, 75, 1, 1, 0);
				func_439(16);
				return false;
			}
		}
	}
	else
	{
		func_186(Global_35, 62, 1, 1, 0);
		func_168(19);
	}
	return false;
}

void func_170(bool bParam0)
{
	vVar0 = { -1653.5f, -1379f, 82.9809f };
	vVar3 = { -1852.81f, -1803.451f, 35.8264f };
	vVar6 = { -1440.551f, -1122.304f, 84.8305f };
	if (bParam0)
	{
		set_ped_non_creation_area(vVar3, vVar6);
		set_ped_paths_in_area(vVar3, vVar6, false, 1);
		iLocal_901 = add_scenario_blocking_area(vVar3, vVar6, 0, 14);
		clear_area(vVar0, 200f, 1065787);
		set_roads_in_area(vVar3, vVar6, 0, 1, 0);
		func_439(11);
	}
	else
	{
		set_roads_back_to_original(vVar3, vVar6, 0, 1);
		if (_0x91a5f9cbebb9d936(uVar898))
		{
			remove_scenario_blocking_area(uVar898, false);
		}
		func_168(11);
	}
}

void func_171()
{
	iVar0 = 0;
	while (iVar0 < iVar664)
	{
		if (does_entity_exist(&(iLocal_666[iVar0])))
		{
			func_440(iVar0, 1);
		}
		iVar0++;
	}
}

void func_172(int iParam0, var uParam1, bool bParam2)
{
	if (is_entity_dead(iParam0))
	{
		return;
	}
	if (bParam2)
	{
		remove_all_ped_weapons(iParam0, true, true);
		_0x1b83c0deebcbb214(iParam0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (func_441(uParam1[iVar0]))
		{
			if (func_122(uParam1[iVar0]))
			{
				if (!has_ped_got_weapon(iParam0, uParam1[iVar0], 0, false))
				{
					_give_weapon_to_ped_2(iParam0, uParam1[iVar0], 0, false, false, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
					if (iParam0 == Global_35)
					{
						_0xe9bd19f8121ade3e(Global_35, uParam1[iVar0]);
					}
				}
			}
			else
			{
				(*uParam1)[iVar0] = 0;
			}
		}
		iVar0++;
	}
	func_442(iParam0, &(uParam1->f_118), 1);
}

int func_173(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3)
	{
		if (func_166(0))
		{
			return 0;
		}
	}
	iVar0 = iParam1;
	while (iVar0 <= iParam2)
	{
		if (iVar0 == 0 || iVar0 == -1)
		{
		}
		else if (vLocal_808[iVar0]->f_1 == 0)
		{
			if (iVar0 == iParam2)
			{
				Jump @113; //curOff = 73
			}
		else
		{
			}
			else
			{
				func_443(uParam0, iVar0, 0);
				func_439(0);
				if (bParam3)
				{
				}
				else
				{
					iVar0++;
				}
				if (iVar0 == iParam2)
				{
					return 1;
				}
				return 0;
			}
		}
	}
}

void func_174(int iParam0)
{
	if (!&vLocal_295[iParam0] == 3)
	{
		return;
	}
	vLocal_295[iParam0] = 4;
}

void func_175()
{
	iVar0 = 0;
	while (iVar0 < iVar293)
	{
		iVar1 = iVar0;
		switch (&vLocal_295[iVar1])
		{
			case 0:
				break;
			case 1:
				if (vLocal_295[iVar1]->f_1 == 0)
				{
					request_model(func_444(iVar1), false);
				}
				else if (vLocal_295[iVar1]->f_1 == 1)
				{
					request_anim_dict(func_445(iVar1, 1));
				}
				else if (vLocal_295[iVar1]->f_1 == 2)
				{
					_0x2b6529c54d29037a(func_446(iVar1));
				}
				vLocal_295[iVar1] = 2;
				break;
			case 2:
				if (((vLocal_295[iVar1]->f_1 == 0 && has_model_loaded(func_444(iVar1))) || (vLocal_295[iVar1]->f_1 == 1 && has_anim_dict_loaded(func_445(iVar1, 1)))) || (vLocal_295[iVar1]->f_1 == 2 && _0x2c04d89a0fb4e244(func_446(iVar1))))
				{
					vLocal_295[iVar1] = 3;
				}
				break;
			case 4:
				if (vLocal_295[iVar1]->f_1 == 0)
				{
					set_model_as_no_longer_needed(func_444(iVar1));
				}
				else if (vLocal_295[iVar1]->f_1 == 1)
				{
					remove_anim_dict(func_445(iVar1, 1));
				}
				else if (vLocal_295[iVar1]->f_1 == 2)
				{
					_0x57a197ad83f66bbf(func_446(iVar1));
				}
				vLocal_295[iVar1] = 0;
				break;
		}
		iVar0++;
	}
}

void func_176(bool bParam0)
{
	if ((func_166(12) && bParam0) || (!func_166(12) && !bParam0))
	{
		return;
	}
	if (bParam0)
	{
		_0xe36d4a38d28d9cfb(1);
		func_447();
		func_439(12);
	}
	else
	{
		_0xe36d4a38d28d9cfb(0);
		func_168(12);
	}
}

void func_177(float fParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (func_20() == 0)
	{
		func_448(0, (fParam0 / 2f), bParam1, 1, bParam2);
		return;
	}
	fVar0 = func_449(0);
	if (bParam1)
	{
		func_450(fVar0);
	}
	if (fVar0 >= (100f - 1f))
	{
		func_451();
	}
	if (bParam2)
	{
		fParam0 = func_452(0, fParam0, bParam3);
	}
	fParam0 = (fParam0 + fVar0);
	func_454(0, func_453(fParam0, -100f, 100f), bParam1);
}

void func_178(float fParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (func_20() == 0)
	{
		func_448(2, (fParam0 / 2f), bParam1, 1, bParam2);
		return;
	}
	fVar0 = func_449(2);
	if (bParam1)
	{
		func_450(fVar0);
	}
	if (bParam2)
	{
		fParam0 = func_452(2, fParam0, bParam3);
	}
	fParam0 = (fParam0 + fVar0);
	func_454(2, func_453(fParam0, -100f, 100f), bParam1);
}

void func_179(float fParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (func_20() == 0)
	{
		func_448(1, (fParam0 / 2f), bParam1, 1, bParam2);
		return;
	}
	fVar0 = func_449(1);
	if (bParam1)
	{
		func_450(fVar0);
	}
	if (bParam2)
	{
		fParam0 = func_452(1, fParam0, bParam3);
	}
	fParam0 = (fParam0 + fVar0);
	func_454(1, func_453(fParam0, -100f, 100f), bParam1);
}

void func_180(int iParam0)
{
	Global_1347477->f_118 = iParam0;
	Global_1347477->f_6 = iParam0;
}

void func_181()
{
	if (does_entity_exist(&(iLocal_827[0])))
	{
		if (_does_propset_exist(iVar1087))
		{
			_delete_propset(iVar1087, true, true);
		}
		delete_vehicle(iLocal_827[0]);
	}
}

void func_182()
{
	_remove_imap(780653384);
	_remove_imap(5422464);
	_remove_imap(-722030448);
	_remove_imap(2111816145);
	_remove_imap(1757739778);
	_remove_imap(-382865315);
	_remove_imap(411742897);
	_remove_imap(1444950942);
	_remove_imap(910783469);
	_remove_imap(727408145);
	_remove_imap(429636242);
	_remove_imap(-19364596);
	_remove_imap(2131035495);
	_remove_imap(-316448350);
	_remove_imap(-496874464);
	_remove_imap(-794515291);
	_remove_imap(275588949);
	_remove_imap(-52330434);
	_remove_imap(-2131457946);
	_remove_imap(1467774743);
	_request_imap(-974480336);
	_request_imap(255093300);
}

void func_183()
{
	_request_imap(1467774743);
	_request_imap(411742897);
	_remove_imap(1532774697);
	func_455(-382865315);
	func_455(255093300);
	func_456(1344772301);
	func_457(168171957, 1, 0);
	func_439(43);
}

void func_184(bool bParam0)
{
	if (bParam0)
	{
		if (!_does_volume_exist(iLocal_208))
		{
			iLocal_208 = _create_volume_box(-1630f, -1378f, 91f, 0f, 0f, 0f, 175f, 350f, 80f);
		}
		_0xb56d41a694e42e86(iLocal_208, 10208, 0, 0, -1, -1, 0);
		_0x18262cafebb5fbe1(iLocal_208, 10208, 0, 0, -1, -1, 0);
		if (!_0x91a5f9cbebb9d936(uLocal_209))
		{
			_0x4c39c95ae5db1329(iLocal_208, 0, 13);
		}
		_0xc1799fafd2fdf52b(iLocal_208, 0, 0, 0);
		_0xe5ef9de716ff737e(iLocal_208, 0, 1);
		func_439(18);
	}
	else
	{
		_0x74c2b3dc0b294102(iLocal_208);
		_0xa1cfb35069d23c23(iLocal_208);
		if (_0x91a5f9cbebb9d936(uLocal_209))
		{
			remove_scenario_blocking_area(uVar898, false);
		}
		_0xd17672447692478e(iLocal_208, 0);
		_0x5737199af2dc609f(iLocal_208, &vVar0, &vVar3);
		set_ped_paths_back_to_original(vVar0, vVar3, 0);
		_delete_volume(iLocal_208);
		func_168(18);
	}
}

int func_185(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 75;
		case 1:
			return 79;
		case 2:
			return 87;
		case 3:
			return 71;
		case 4:
			return 75;
		case 5:
			return 77;
		case 6:
			return 62;
	}
	return 75;
}

int func_186(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (is_entity_dead(iParam0))
	{
		return 0;
	}
	if (iParam1 == -1)
	{
		return 0;
	}
	iVar0 = func_458(iParam1);
	if (iParam4 != 0)
	{
		iVar0 = iParam4;
	}
	else if (iParam1 > -1 && iParam1 <= 5)
	{
		iVar0 = func_459(iParam1);
	}
	if ((bParam3 && func_460(iParam1, 4096)) && Global_1946804->f_1497 == iParam4)
	{
		return 1;
	}
	Global_1905941 = iParam1;
	if ((iParam1 > 5 || iParam4 != 0) && !func_461(iVar0, Global_1946804->f_1))
	{
		return 0;
	}
	if (bParam2)
	{
		func_462(Global_40.f_7729, 4096);
		func_463(&Global_1905941, 4096);
		Global_40.f_7729 = &Global_1905941;
	}
	if (decor_exist_on(iParam0, "metaped_outfit_request") || decor_exist_on(iParam0, "metaped_outfit_request_name"))
	{
		func_464(iParam0);
	}
	func_465();
	if (!func_466(iParam1))
	{
		func_468(iVar0, iParam0, func_467(iParam1), 1, 0, 1);
	}
	func_469(iParam0);
	return 1;
}

int func_187(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	if (iParam3 == -358215195)
	{
		Var0 = { func_470(iParam1, 1, 0) };
		iParam3 = func_471(Var0.f_4);
		if (iParam3 == -358215195)
		{
			return 0;
		}
	}
	if (!func_473(iParam1, iParam2, func_472(iParam3, 1), bParam4, bParam9))
	{
		return 0;
	}
	func_474(1, (func_20() == -1 && bParam5), 1);
	switch (iParam3)
	{
		case 1145151482:
		case 1742327865:
			if (bParam8 && iParam1 != &Global_1946804->f_57[func_472(iParam3, 1)])
			{
				func_475(31, 0, 0, 0, 0);
			}
			break;
		case 1108822547:
			if (func_476(32768) && iParam1 != &Global_1946804->f_57[func_472(iParam3, 1)])
			{
				func_477();
				func_475(22, iParam3, 256, 0, 0);
			}
			clear_ped_damage_decal_by_zone(iParam0, 2, "ALL");
			clear_ped_blood_damage_by_zone(iParam0, 2);
			break;
	}
	if (!bParam6)
	{
		if (bParam7)
		{
			func_475(22, iParam3, 0, 0, 0);
		}
		return 1;
	}
	iVar5 = func_478(iParam3);
	if (is_ped_a_player(iParam0))
	{
		func_475(19, 0, iVar5, 0, 0);
		if ((iParam3 == 1742327865 || iParam3 == 1108822547) || iParam3 == 1145151482)
		{
			func_479(0);
			func_480(36, 0, 0);
		}
	}
	else
	{
		iVar5 |= 1;
		func_475(19, 0, iVar5, iParam0, 0);
	}
	return 1;
}

int func_188(int iParam0)
{
	return iParam0;
}

void func_189(int iParam0)
{
	if (!func_481(iParam0))
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

bool func_190(int iParam0)
{
	return (iParam0 > -1 && iParam0 <= 80);
}

bool func_191(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

bool func_192(int iParam0)
{
	iVar0 = func_296(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

bool func_193(int iParam0)
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
		iVar0 = func_195(iParam0);
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

int func_194(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_5;
	}
	return Global_1058888->f_498[iParam0]->f_1;
}

int func_195(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_1;
	}
	iVar0 = func_482(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888->f_40501.f_1[iVar0]->f_1;
}

int func_196(int iParam0)
{
	if (!func_191(iParam0))
	{
		return 0;
	}
	return func_484(func_483(iParam0));
}

void func_197(int iParam0, int iParam1, int iParam2)
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

bool func_198(int iParam0, bool bParam1, bool bParam2)
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
		if (func_485())
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
		iVar0 = func_272(&(Global_1898164->f_1[0]));
		if (func_273(iVar0) && func_301((*Global_1347702)[iVar0]->f_12, 131072))
		{
			return false;
		}
	}
	if (iParam0 == 0 && func_191(&(Global_1898164->f_1[0])))
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

bool func_199(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_200(int iParam0)
{
	switch (func_196(iParam0))
	{
		case 1:
			iVar0 = func_272(iParam0);
			return func_486(iVar0);
		case 8:
			iVar1 = func_272(iParam0);
			if (func_301((*Global_1347702)[iVar1]->f_12, 1))
			{
				return func_487(iVar1);
			}
			break;
	}
	return -1;
}

void func_201(bool bParam0)
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
		func_488(iVar0, Global_1898077->f_12);
	}
	else
	{
		Global_1898077->f_1 = 0;
		Global_1898077->f_7 = iVar0;
		Global_1898077->f_8 = func_489();
		Global_1898077->f_9 = func_490(Global_1894899->f_2);
		func_491(Global_1898077->f_7, Global_1898077->f_8, Global_1898077->f_9);
	}
	Global_1898077->f_2 = 0;
}

int func_202()
{
	if (!func_327((*Global_1835011)[4]->f_1, 1))
	{
		return 0;
	}
	else if (!func_327((*Global_1347702)[66]->f_15, 1))
	{
		return 1;
	}
	else if (!func_327((*Global_1347702)[67]->f_15, 1))
	{
		return 2;
	}
	else if (!func_327((*Global_1835011)[38]->f_1, 1))
	{
		return 3;
	}
	else if (!func_327((*Global_1347702)[68]->f_15, 1))
	{
		return 4;
	}
	else if (!func_327((*Global_1835011)[59]->f_1, 1))
	{
		return 5;
	}
	else if (!func_327((*Global_1835011)[67]->f_1, 1))
	{
		return 7;
	}
	else
	{
		return 8;
	}
	return -1;
}

void func_203(int iParam0, int iParam1)
{
	if (!func_191(iParam0))
	{
		return;
	}
	func_492(iParam0, iParam1);
}

int func_204(int iParam0)
{
	return &(Global_1898164->f_1[iParam0]);
}

int func_205(bool bParam0)
{
	if (!bParam0 && func_493(373691918))
	{
		return 0;
	}
	_0xc61edebf16cd9668(752193127, bParam0, 0);
	return 1;
}

void func_206(int iParam0)
{
	Global_1898164 = (Global_1898164 || iParam0);
}

void func_207(int iParam0, bool bParam1)
{
	if (func_20() != -1)
	{
		return;
	}
	if (func_204(0) != iParam0)
	{
		return;
	}
	if (func_494(iParam0))
	{
		if (bParam1)
		{
			func_495(-525676072);
		}
		else
		{
			func_496(-525676072);
		}
	}
}

int func_208(int iParam0)
{
	return func_498(func_497(iParam0));
}

void func_209(int iParam0)
{
	Global_1572864->f_12 = iParam0;
}

void func_210(int iParam0)
{
	Global_1572864->f_11 = iParam0;
}

void func_211(int iParam0)
{
	Global_1572864->f_15 = iParam0;
}

void func_212(float fParam0)
{
	Global_1572864->f_22 = fParam0;
}

void func_213()
{
	if (func_10(Global_43801))
	{
		func_11(&Global_43801, 0, 0);
	}
}

bool func_214()
{
	return func_499(_0xc17f69e1418cd11f(3));
}

bool func_215()
{
	iVar0 = _0xc17f69e1418cd11f(1);
	return (iVar0 != 0 && _0x59fa676177dbe4c9(iVar0) == 4);
}

int func_216(int iParam0)
{
	iParam0 = func_266(iParam0);
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

int func_217(int iParam0, int iParam1)
{
	if (!func_500(iParam0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if ((*Global_40.f_11206[iParam0])[iVar0]->f_3 == iParam1)
		{
			func_501(iParam0, (*Global_40.f_11206[iParam0])[iVar0]);
		}
		iVar0++;
	}
	return 1;
}

bool func_218(char* sParam0, int iParam1)
{
	return (sParam0->f_8 && iParam1) != 0;
}

bool func_219(char* sParam0, bool bParam1)
{
	if (func_218(sParam0, 1))
	{
		return false;
	}
	if (sParam0->f_9 == 15 || sParam0->f_9 == 16)
	{
		prepare_music_event(sParam0);
		func_502(sParam0, 1);
		return true;
	}
	if (bParam1)
	{
		if (sParam0->f_9 == 17 || sParam0->f_9 == 19)
		{
			set_audio_flag(sParam0, true);
			func_502(sParam0, 1);
			return false;
		}
		if (sParam0->f_9 == 18 || sParam0->f_9 == 20)
		{
			set_audio_flag(sParam0, false);
			func_502(sParam0, 1);
			return false;
		}
	}
	else
	{
		if (sParam0->f_9 == 10 || sParam0->f_9 == 12)
		{
			set_audio_flag(sParam0, true);
			func_502(sParam0, 1);
			return false;
		}
		if (sParam0->f_9 == 11 || sParam0->f_9 == 13)
		{
			set_audio_flag(sParam0, false);
			func_502(sParam0, 1);
			return false;
		}
	}
	if (!is_string_null_or_empty(sParam0))
	{
		trigger_music_event(sParam0);
		func_502(sParam0, 1);
		return true;
	}
	func_502(sParam0, 1);
	return false;
}

bool func_220(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_221(var uParam0)
{
	func_503(uParam0, 0f);
}

int func_222(var uParam0)
{
	if (!func_26(uParam0))
	{
		return round((uParam0->f_1 * 1000f));
	}
	if (func_504(uParam0))
	{
		return round((uParam0->f_2 * 1000f));
	}
	return (func_505() - round((uParam0->f_1 * 1000f)));
}

void func_223(bool bParam0, bool bParam1)
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
		func_506(0);
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

Vector3 func_224(int iParam0, int iParam1)
{
	return func_507(iParam0, iParam1);
}

int func_225(var uParam0, int iParam1)
{
	return uParam0->f_1[func_132(iParam1)]->f_9;
}

void func_226(int iParam0, struct<4> Param1, struct<4> Param5, int iParam9, int iParam10)
{
	Global_1572864->f_8 = iParam0;
	Global_1572864->f_9 = iParam9;
	Global_1572864->f_10 = iParam10;
	StringCopy(&cVar0, "INVALID", 8);
	if (func_196(iParam0) == 1)
	{
		cVar0 = func_110(func_508(iParam0));
		_0x8ec7890d446bd9c1(&cVar0, 0, Global_1572864->f_9);
	}
	else if (func_196(iParam0) == 8)
	{
		cVar0 = func_510(func_509(iParam0));
		_0x8ec7890d446bd9c1(&cVar0, 0, Global_1572864->f_9);
	}
	func_511(1, 1);
	func_512(1, Param1, Param1.f_3);
	*Global_1347394 = { Param5 };
	func_64(0);
	func_65(0);
	func_212(1f);
}

void func_227(char* sParam0)
{
	if (is_audio_scene_active(sParam0))
	{
		stop_audio_scene(sParam0);
	}
	func_502(sParam0, 2);
}

void func_228(int iParam0, int iParam1)
{
	if (!func_513(iParam0))
	{
		return;
	}
	Global_40.f_11029[iParam0] = (Global_40.f_11029[iParam0] || iParam1);
}

void func_229(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_230()
{
	Global_1934266->f_78.f_62 = -1;
}

void func_231()
{
	StringCopy(&(Global_1934266->f_78.f_64), "", 24);
}

void func_232()
{
	StringCopy(&(Global_1934266->f_78.f_67), "", 24);
}

void func_233()
{
	Global_1934266->f_78.f_63 = 0;
}

bool func_234()
{
	return func_514(get_id_of_this_thread());
}

void func_235(bool bParam0)
{
	if (bParam0)
	{
		Global_1945938->f_865 = (Global_1945938->f_865 - Global_1945938->f_865 & 2);
	}
	else
	{
		Global_1945938->f_865 |= 2;
	}
	func_515(bParam0);
}

void func_236()
{
	if (!Global_1894899->f_186)
	{
		_0xf5ffb08976911b50(Global_1894899->f_182, Global_1894899->f_183, Global_1894899->f_184, Global_1894899->f_185);
	}
}

void func_237(int iParam0, int iParam1, int iParam2)
{
	_0x36559148b78853b3(iParam0, iParam1, iParam2);
}

bool func_238()
{
	return (Global_1894899 & 1 != 0 && func_77() != -1);
}

void func_239(var uParam0)
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

void func_240(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_241(int iParam0)
{
	if (!func_516(iParam0))
	{
		return;
	}
	(*Global_1310750)[iParam0]->f_46 = 0;
}

void func_242()
{
	func_517(64);
}

void func_243()
{
	Global_1310750->f_16072 = 0;
}

bool func_244()
{
	if (Global_1572887->f_12 == -1)
	{
		return false;
	}
	return Global_1058888->f_4;
}

bool func_245(int iParam0)
{
	return func_246(23, iParam0);
}

bool func_246(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_518(&(Global_1109400->f_4), iVar0, 5);
	}
	if (iParam1 == func_519())
	{
		return func_518(&(Global_1109400->f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (&Global_1225639->f_21[iParam1])
	{
		return func_518(&((*Global_1108178)[iParam1]->f_4), iVar0, 5);
	}
	return false;
}

bool func_247(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

bool func_248(int iParam0)
{
	if (!func_247(iParam0))
	{
		return false;
	}
	return func_251(iParam0, 8);
}

void func_249(int iParam0, int iParam1)
{
	if (!func_247(iParam0))
	{
		return;
	}
	(*Global_1888801)[iParam0]->f_19 = iParam1;
}

void func_250(int iParam0)
{
	Global_1894899 = (Global_1894899 || iParam0);
}

bool func_251(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		return (Global_23118[iParam0] && iParam1) != 0;
	}
	return (Global_1058888->f_40615[iParam0] && iParam1) != 0;
}

void func_252(int iParam0)
{
	Global_1894899 = (&Global_1894899 - (Global_1894899 && iParam0));
}

bool func_253()
{
	bVar0 = false;
	iVar1 = 0;
	while (iVar1 < 150)
	{
		if (func_251(iVar1, 1))
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
			else if (func_251(iVar1, 2))
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
				func_288(iVar1, 11);
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

bool func_254(var uParam0)
{
	if (func_520(uParam0, 1) || func_520(uParam0, 2))
	{
		return true;
	}
	return false;
}

bool func_255(int iParam0, var uParam1)
{
	return is_itemset_valid(iParam0);
}

int func_256(struct<2> Param0)
{
	if (!func_255(Param0))
	{
		return 0;
	}
	return get_itemset_size(Param0);
}

int func_257(struct<2> Param0, int iParam2)
{
	if (!func_255(Param0))
	{
		return 0;
	}
	iVar0 = get_indexed_item_in_itemset(iParam2, Param0);
	iVar1 = iVar0;
	return iVar1;
}

bool func_258(int iParam0)
{
	if (!func_521(iParam0))
	{
		return false;
	}
	if (!func_522(iParam0))
	{
		return false;
	}
	return (*Global_1360165)[iParam0]->f_129 == get_id_of_this_thread();
}

void func_259(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (!func_521(iParam1))
	{
		return;
	}
	if (!func_258(iParam1))
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
		func_523(uParam0, iParam2);
		func_524(iParam2);
	}
	func_525(iParam1);
	func_526(iParam1, 0);
	func_527(iParam1, 0, bParam4, bParam5, -1082130432, 1, 1, 0, 0, 0, 0);
	if (bParam5)
	{
	}
}

int func_260(var uParam0)
{
	return uParam0->f_5411;
}

int func_261(int iParam0)
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

int func_262(int iParam0)
{
	iParam0 = func_266(iParam0);
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

void func_263(int iParam0)
{
	iParam0 = func_266(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = get_id_of_this_thread();
	func_528(iParam0);
	if (func_529(iParam0))
	{
		if (func_262(iParam0) != iVar0)
		{
			return;
		}
	}
	func_530(iParam0);
	func_531(iParam0);
	iVar1 = func_216(iParam0);
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
			if (!func_532(iVar2))
			{
				set_ped_model_is_suppressed(iVar2, false);
			}
		}
		func_533(iParam0);
	}
}

void func_264(int iParam0, bool bParam1)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (is_entity_dead(iParam0) || is_ped_injured(iParam0))
	{
		return;
	}
	if (!func_534(iParam0))
	{
		return;
	}
	iVar0 = func_261(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (iVar0 >= 7)
	{
		return;
	}
	func_59(iVar0);
	func_528(iVar0);
	iVar1 = get_id_of_this_thread();
	iVar2 = func_262(iVar0);
	if (!bParam1)
	{
		if (iVar1 != iVar2)
		{
			return;
		}
		if (!func_529(iVar0))
		{
			return;
		}
	}
	func_535(iVar0);
	set_ped_keep_task(iParam0, true);
	if (bParam1 && func_20() == -1)
	{
		if (!_0x88ad6cc10d8d35b2(iParam0))
		{
			set_entity_as_mission_entity(iParam0, true, true);
		}
	}
}

void func_265(var uParam0, int iParam1)
{
	uParam0->f_5308 = (uParam0->f_5308 - (uParam0->f_5308 && iParam1));
}

int func_266(int iParam0)
{
	if (iParam0 == 7)
	{
		return Global_40.f_1095;
	}
	return iParam0;
}

void func_267(int iParam0, int iParam1)
{
	iParam0 = func_266(iParam0);
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

void func_268()
{
	if (func_390(0))
	{
		func_536(0);
	}
	if (func_390(1))
	{
		func_536(1);
	}
	if (func_390(5))
	{
		func_536(5);
	}
	if (func_390(6))
	{
		func_530(6);
	}
}

struct<2> func_269(int iParam0)
{
	MemCopy(&Var0, {func_110(iParam0)}, 2);
	return Var0;
}

struct<2> func_270(int iParam0)
{
	Var0 = { func_269(iParam0) };
	StringConCat(&Var0, "AUD", 16);
	return Var0;
}

void func_271(var uParam0)
{
	_0xebff94328ff7a18a(-3.141593f, 3.141593f);
	if (_uiprompt_is_valid(uParam0->f_11))
	{
		_uiprompt_delete(uParam0->f_11);
	}
}

int func_272(int iParam0)
{
	if (!func_191(iParam0))
	{
		return -1;
	}
	return func_537(func_483(iParam0));
}

bool func_273(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_274(int iParam0, int iParam1)
{
	return (Global_40.f_490.f_402[iParam0] && iParam1) != 0;
}

void func_275(int iParam0, bool bParam1)
{
	iVar0 = func_538(iParam0);
	if (_uilog_is_entry_registered(iVar0, func_539(iParam0)))
	{
		_uilog_remove_entry(iVar0, func_539(iParam0));
	}
	if (bParam1)
	{
		if (iVar0 == 1)
		{
			if (_uilog_is_entry_registered(2, func_539(iParam0)))
			{
				_uilog_remove_entry(2, func_539(iParam0));
			}
		}
	}
	func_540(iParam0, 4);
	func_540(iParam0, 8);
	func_540(iParam0, 16);
}

void func_276(bool bParam0)
{
	iVar0 = 0;
	while (iVar0 < &Global_1347702)
	{
		if (func_273(iVar0))
		{
			if (func_274(iVar0, 4))
			{
				func_277(iVar0, bParam0);
			}
		}
		iVar0++;
	}
}

void func_277(int iParam0, bool bParam1)
{
	if (!func_274(iParam0, 4))
	{
		return;
	}
	if (!_uilog_is_entry_registered(func_538(iParam0), func_539(iParam0)))
	{
		return;
	}
	if (bParam1)
	{
		_uilog_mark_entry_availability(func_538(iParam0), func_539(iParam0), 2, "");
		func_541(iParam0, 16);
	}
	else
	{
		if (func_274(iParam0, 8))
		{
			_uilog_mark_entry_availability(func_538(iParam0), func_539(iParam0), 1, "");
		}
		else
		{
			_uilog_mark_entry_availability(func_538(iParam0), func_539(iParam0), 0, "");
		}
		func_540(iParam0, 16);
	}
}

void func_278(int iParam0, bool bParam1)
{
	if ((*Global_1347702)[iParam0]->f_12 & 67108864 != 0)
	{
		return;
	}
	if (!func_274(iParam0, 4))
	{
		return;
	}
	if (!_uilog_is_entry_registered(func_538(iParam0), func_539(iParam0)))
	{
		return;
	}
	if (bParam1)
	{
		if (func_274(iParam0, 16))
		{
		}
		else
		{
			_uilog_mark_entry_availability(func_538(iParam0), func_539(iParam0), 1, "");
		}
		func_541(iParam0, 8);
	}
	else
	{
		if (func_274(iParam0, 16))
		{
		}
		else
		{
			_uilog_mark_entry_availability(func_538(iParam0), func_539(iParam0), 0, "");
		}
		func_540(iParam0, 8);
	}
}

int func_279(var uParam0)
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

void func_280(int iParam0, int iParam1)
{
	if (func_390(0))
	{
		if (func_542(0))
		{
			func_543(0);
		}
	}
	if (func_390(1))
	{
		if (func_542(1))
		{
			func_543(1);
		}
	}
}

void func_281(var uParam0)
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
		if (func_427(uParam0, 0, uParam0->f_5413, uParam0->f_5413.f_1, uParam0->f_5413.f_2, uParam0->f_5416, 1, 1, 1))
		{
		}
	}
}

bool func_282(var uParam0)
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

void func_283(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, int iParam6, int iParam7)
{
	if (!bParam1)
	{
		func_544(iParam0, sParam4, iParam5);
	}
	func_545(iParam0, bParam1, fParam2, iParam3, iParam7);
}

int func_284(int iParam0)
{
	if (!func_247(iParam0))
	{
		return 0;
	}
	return (*Global_1888801)[iParam0]->f_20;
}

int func_285()
{
	return &Global_1899515;
}

void func_286(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_23118[iParam0]->f_2 = iParam1;
		return;
	}
	Global_1058888->f_40615[iParam0]->f_2 = iParam1;
}

void func_287(int iParam0, int iParam1)
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

void func_288(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_23118[iParam0] = (&Global_23118[iParam0] - (Global_23118[iParam0] && iParam1));
		return;
	}
	Global_1058888->f_40615[iParam0] = (&Global_1058888->f_40615[iParam0] - (Global_1058888->f_40615[iParam0] && iParam1));
}

void func_289(int iParam0)
{
	if (!func_247(iParam0))
	{
		return;
	}
	if (func_546(iParam0))
	{
		func_547(iParam0);
	}
	else
	{
		func_548(iParam0);
	}
}

int func_290(int iParam0)
{
	if (func_549(&(Global_1109400->f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

int func_291(int iParam0)
{
	if (func_550(&(Global_1109400->f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

bool func_292(int iParam0, int iParam1)
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

void func_293(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	iVar0 = 0;
	while (iVar0 < 120)
	{
		iVar1 = 0;
		if (func_551(Global_1310750[iVar0], iParam0))
		{
			if (!func_552(iVar0))
			{
				iVar1 = 1;
			}
			else if (iParam0 == 16777216)
			{
				if (func_553(iVar0) < func_554(iParam1))
				{
					iVar1 = 1;
				}
			}
			func_295(iVar0, iParam1, 1f, (iVar1 || iParam2), bParam3);
		}
		iVar0++;
	}
}

void func_294(float fParam0, bool bParam1, bool bParam2)
{
	fVar0 = func_555();
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

void func_295(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
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
	func_556(iParam0, bParam3, round((fVar0 * fParam2)), round((fVar1 * fParam2)), round((fVar2 * fParam2)), round((fVar3 * fParam2)), bParam4, 1);
}

int func_296(int iParam0)
{
	if (!func_191(iParam0))
	{
		return -1;
	}
	return func_195(iParam0);
}

void func_297(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_6 = iParam1;
}

int func_298(bool bParam0, int iParam1)
{
	if (!bParam0 && func_493(373691918))
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
	func_205(bParam0);
	return 1;
}

void func_299()
{
	Var0 = Global_35;
	Var0.f_12 = 8;
	Var0.f_8 = 0;
	iVar17 = 0;
	while (iVar17 < 27)
	{
		if (func_521(iVar17))
		{
			iVar18 = func_557(iVar17);
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
	func_558(&(Global_1359489->f_55));
	if (func_559(1777191912, 1))
	{
		func_560(1777191912, 1, 0);
	}
}

void func_300(int iParam0)
{
	if (!func_191(iParam0))
	{
		return;
	}
	func_562(iParam0, (func_561(iParam0) + shift_left(1, 16)));
}

bool func_301(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_302()
{
	return func_563() > 0;
}

void func_303(int iParam0, int iParam1, bool bParam2)
{
	switch (iParam0)
	{
		case 67:
			func_564(-1032423150, iParam1);
			break;
		case 18:
			func_564(294066959, iParam1);
			func_564(-1925639563, iParam1);
			func_564(-378582304, iParam1);
			func_564(-338306437, iParam1);
			break;
		case 20:
			func_564(437270255, iParam1);
			break;
		case 2:
			func_564(-304000413, iParam1);
			func_564(-533612796, iParam1);
			func_564(48036954, iParam1);
			break;
		case 23:
			func_564(193108691, iParam1);
			func_564(491732588, iParam1);
			func_564(671962088, iParam1);
			func_565(1);
			break;
		case 16:
			func_564(-1836056650, iParam1);
			func_564(-754657922, iParam1);
			func_564(-1752355838, iParam1);
			func_564(-1375324510, iParam1);
			break;
		case 59:
			func_564(-514392105, iParam1);
			func_564(-822060246, iParam1);
			if (func_566(146))
			{
				func_564(1372748575, iParam1);
			}
			func_565(1);
			break;
		case 76:
			func_564(1991352213, iParam1);
			if (func_567() == 0)
			{
				func_564(1852488616, iParam1);
			}
			else
			{
				func_564(-9866350, iParam1);
			}
			break;
		case 44:
			func_564(863852599, iParam1);
			func_564(1228374935, iParam1);
			func_564(1517889050, iParam1);
			func_564(830657578, iParam1);
			func_564(1901354958, iParam1);
			break;
		case 46:
			func_564(-582805654, iParam1);
			func_564(250378940, iParam1);
			func_564(-2143265426, iParam1);
			break;
		case 17:
			func_564(-941494139, iParam1);
			func_564(1641489521, iParam1);
			break;
		case 19:
			func_564(-1829423531, iParam1);
			func_564(-1590504752, iParam1);
			func_564(1357221321, iParam1);
			break;
		case 21:
			func_564(-1037992610, iParam1);
			func_564(-1286414399, iParam1);
			func_565(0);
			break;
		case 15:
			func_564(-1014460309, iParam1);
			func_564(-1030502825, iParam1);
			break;
		case 33:
			func_564(479388090, iParam1);
			func_564(-1396342239, iParam1);
			func_564(-619618632, iParam1);
			break;
		case 34:
			func_564(1193561641, iParam1);
			break;
		case 64:
			func_564(1363960851, iParam1);
			break;
		case 60:
			func_564(-1232453926, iParam1);
			func_564(-882833584, iParam1);
			break;
		case 73:
			func_564(2023205767, iParam1);
			break;
		case 74:
			func_564(-2135286513, iParam1);
			if (func_567() == 0)
			{
				func_564(33799444, iParam1);
			}
			else
			{
				func_564(-161343203, iParam1);
			}
			break;
		case 8:
			func_564(841639693, iParam1);
			func_564(358952323, iParam1);
			break;
		case 36:
			func_564(852538149, iParam1);
			func_564(689020839, iParam1);
			if (&Global_1357515 == 0)
			{
				func_564(-404049058, iParam1);
			}
			else if (&Global_1357515 == 1)
			{
				func_564(1116039310, iParam1);
			}
			break;
		case 27:
			func_564(107633428, iParam1);
			func_564(335902282, iParam1);
			func_564(575673055, iParam1);
			func_564(-425944207, iParam1);
			break;
		case 28:
			func_564(-1941530250, iParam1);
			func_564(1399269304, iParam1);
			func_564(1839684664, iParam1);
			func_564(923168503, iParam1);
			func_564(-1485078322, iParam1);
			break;
		case 29:
			func_564(574995900, iParam1);
			func_564(-1691275407, iParam1);
			func_564(-1725307861, iParam1);
			break;
		case 31:
			func_564(-2108383238, iParam1);
			func_564(-1321828931, iParam1);
			func_564(-1632118592, iParam1);
			func_564(334938948, iParam1);
			break;
		case 4:
			func_564(115823701, iParam1);
			func_564(-1896939736, iParam1);
			func_564(-1830746356, iParam1);
			func_564(-1235169781, iParam1);
			func_565(0);
			break;
		case 6:
			func_564(1801727621, iParam1);
			if (&Global_1357515 == -1)
			{
				func_564(-999872881, iParam1);
			}
			else if (&Global_1357515 == 0)
			{
				func_564(-1227289741, iParam1);
			}
			else if (&Global_1357515 == 1)
			{
				func_564(-384176140, iParam1);
			}
			break;
		case 25:
			func_564(1056132658, iParam1);
			break;
		case 24:
			if (&Global_1357515 == -1)
			{
				func_564(1343889751, iParam1);
			}
			else if (&Global_1357515 == 0)
			{
				func_564(-948326001, iParam1);
			}
			else if (&Global_1357515 == 1)
			{
				func_564(-1374849484, iParam1);
			}
			break;
		case 48:
			func_564(-1632856601, iParam1);
			if (&Global_1357515 == -1)
			{
				func_564(217772674, iParam1);
			}
			else
			{
				func_564(2071798160, iParam1);
			}
			if (func_568(51))
			{
				func_564(-792802286, iParam1);
			}
			break;
		case 49:
			func_564(-1972727021, iParam1);
			if (&Global_1357515 == 0)
			{
				func_564(-1444030885, iParam1);
			}
			else if (&Global_1357515 == 1)
			{
				func_564(-1272255787, iParam1);
			}
			else if (&Global_1357515 == 2)
			{
				func_564(1402120602, iParam1);
			}
			break;
		case 58:
			func_564(-1661934591, iParam1);
			break;
		case 50:
			func_564(-1713759426, iParam1);
			break;
		case 52:
			func_564(-314799932, iParam1);
			func_564(-462260432, iParam1);
			func_564(822929377, iParam1);
			if (bParam2 == 1)
			{
				func_564(345256028, iParam1);
				func_564(-1635084094, iParam1);
			}
			else
			{
				func_564(114267347, iParam1);
			}
			break;
		case 32:
			func_564(615304157, iParam1);
			break;
		case 47:
			func_564(415434835, iParam1);
			break;
		case 69:
			func_564(1373465877, iParam1);
			if (func_327((*Global_1347702)[9]->f_15, 1))
			{
				func_564(-2058273527, iParam1);
			}
			break;
		case 70:
			func_564(451334985, iParam1);
			if (func_567() == 0)
			{
				func_564(-224150200, iParam1);
			}
			else
			{
				func_564(289012628, iParam1);
			}
			break;
		case 71:
			if (func_567() == 0)
			{
				func_564(-41692120, iParam1);
			}
			else
			{
				func_564(1537840678, iParam1);
			}
			break;
		case 37:
			func_564(1520478365, iParam1);
			break;
		case 9:
			if (&Global_1357515 == -1)
			{
				func_564(1842132550, iParam1);
			}
			else
			{
				func_564(-785735240, iParam1);
			}
			func_564(-1605690566, iParam1);
			break;
		case 13:
			func_564(-731367459, iParam1);
			func_564(224176585, iParam1);
			func_564(-14545580, iParam1);
			break;
		case 53:
			func_564(1095274522, iParam1);
			break;
		case 54:
			func_564(-572027988, iParam1);
			break;
		case 56:
			func_564(1339307101, iParam1);
			func_564(2102267732, iParam1);
			break;
		case 57:
			func_564(710102686, iParam1);
			break;
		case 22:
			func_564(-1754368482, iParam1);
			func_564(-2071408557, iParam1);
			break;
		case 12:
			func_564(-181334543, iParam1);
			break;
		case 0:
			func_564(-2134669864, iParam1);
			func_564(-548289709, iParam1);
			func_564(-911271922, iParam1);
			func_564(-604455775, iParam1);
			break;
		case 1:
			func_565(1);
			break;
		case 3:
			if (func_338())
			{
				if (_journal_can_write_entry(-1478534115))
				{
					func_564(-1286192062, iParam1);
				}
			}
			else if (_journal_can_write_entry(-1286192062))
			{
				func_564(-1478534115, iParam1);
			}
			break;
		default:
			break;
	}
}

bool func_304()
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

void func_305(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	switch (iParam0)
	{
		case 0:
			func_564(-145926707, iParam1);
			func_564(-604922090, iParam1);
			func_564(-848690769, iParam1);
			break;
		case 1:
			func_564(-1477631591, iParam1);
			break;
		case 2:
			func_564(76112544, iParam1);
			break;
		case 9:
			func_564(1396404308, iParam1);
			func_564(-1357381228, iParam1);
			if (func_327((*Global_1835011)[69]->f_1, 1))
			{
				func_564(1902679064, iParam1);
			}
			else
			{
				func_564(-2146422425, iParam1);
			}
			break;
		case 22:
			func_564(-1534761730, iParam1);
			break;
		case 26:
			if (bParam3 == 1)
			{
				func_564(-1934184559, iParam1);
				func_564(1281755988, iParam1);
			}
			else
			{
				func_564(-1745220872, iParam1);
				func_564(-1044976796, iParam1);
			}
			break;
		case 29:
			if (bParam3 == 1)
			{
				func_564(-1641504538, iParam1);
				func_564(-988014485, iParam1);
			}
			else if (func_566(26))
			{
				func_564(-343043950, iParam1);
				func_564(-640062214, iParam1);
			}
			else
			{
				func_564(-1272028496, iParam1);
			}
			break;
		case 32:
			if (bParam3 == 1)
			{
				if (&Global_1357515 == -1)
				{
					func_564(-1816782797, iParam1);
				}
				else if (&Global_1357515 == 0)
				{
					func_564(-176175898, iParam1);
				}
				else if (&Global_1357515 == 1)
				{
					func_564(1711460080, iParam1);
				}
				else if (&Global_1357515 == 2)
				{
					func_564(-2108576508, iParam1);
				}
				else if (&Global_1357515 == 3)
				{
					func_564(-1103692224, iParam1);
				}
				else if (&Global_1357515 == 4)
				{
					func_564(1301690984, iParam1);
				}
			}
			else
			{
				func_564(699457343, iParam1);
				if (&Global_1357515 == -1)
				{
					func_564(-908444626, iParam1);
				}
				else if (&Global_1357515 == 0)
				{
					func_564(-1475448104, iParam1);
				}
				else if (&Global_1357515 == 1)
				{
					func_564(1727640249, iParam1);
				}
				else if (&Global_1357515 == 2)
				{
					func_564(-2050867743, iParam1);
				}
				else if (&Global_1357515 == 3)
				{
					func_564(-996445915, iParam1);
				}
				else if (&Global_1357515 == 4)
				{
					func_564(-1868882771, iParam1);
				}
			}
			break;
		case 35:
			if (bParam3 == 1)
			{
				func_564(-754570528, iParam1);
			}
			else
			{
				func_564(1690083163, iParam1);
			}
			break;
		case 36:
			if (bParam3 == 1)
			{
				func_564(-2072125821, iParam1);
			}
			else
			{
				func_564(270040030, iParam1);
			}
			break;
		case 37:
			func_564(-870030001, iParam1);
			break;
		case 53:
			if (bParam3 == 1)
			{
				func_564(-505314737, iParam1);
				func_564(-1853052860, iParam1);
			}
			else
			{
				func_564(-1975624994, iParam1);
				func_564(1648135852, iParam1);
			}
			break;
		case 54:
			if (bParam3 == 1)
			{
				func_564(1690231002, iParam1);
			}
			else
			{
				func_564(517031924, iParam1);
			}
			break;
		case 55:
			if (bParam3 == 1)
			{
				func_564(1225386280, iParam1);
			}
			else if (func_566(54))
			{
				func_564(-283235773, iParam1);
			}
			else
			{
				func_564(701962369, iParam1);
			}
			break;
		case 38:
			if (bParam3 == 1)
			{
				func_564(1355398007, iParam1);
			}
			else
			{
				func_564(-1900349467, iParam1);
			}
			break;
		case 39:
			if (bParam3 == 1)
			{
				func_564(574636806, iParam1);
			}
			else
			{
				func_564(-196256251, iParam1);
			}
			break;
		case 40:
			if (bParam3 == 1)
			{
				func_564(821118338, iParam1);
			}
			else if (func_566(39))
			{
				func_564(846829260, iParam1);
			}
			else
			{
				func_564(-1212247553, iParam1);
			}
			break;
		case 43:
			if (bParam3 == 1)
			{
				if (func_361((*Global_1835011)[33]->f_1) == 1)
				{
					func_564(1422779093, iParam1);
				}
				else
				{
					func_564(-1769536986, iParam1);
				}
			}
			else
			{
				func_564(-600786233, iParam1);
			}
			break;
		case 45:
			if (bParam3 == 1)
			{
				func_564(352134789, iParam1);
			}
			else if (func_566(43))
			{
				func_564(260723113, iParam1);
			}
			else
			{
				func_564(1080243038, iParam1);
			}
			break;
		case 41:
			if (bParam3 == 1)
			{
				func_564(-457958799, iParam1);
			}
			else
			{
				func_564(2076458086, iParam1);
			}
			break;
		case 42:
			if (func_566(41))
			{
				func_564(-546824600, iParam1);
			}
			else
			{
				func_564(-308364587, iParam1);
			}
			break;
		case 49:
			if (bParam3 == 1)
			{
				func_564(1297261593, iParam1);
			}
			else
			{
				func_564(1940089142, iParam1);
			}
			break;
		case 50:
			if (bParam3 == 1)
			{
				func_564(2068484886, iParam1);
			}
			else if (func_566(49))
			{
				func_564(-1489080639, iParam1);
				func_564(-2102244050, iParam1);
			}
			else
			{
				func_564(-1863040467, iParam1);
			}
			break;
		case 51:
			func_564(-2055943209, iParam1);
			break;
		case 58:
			if (func_327((*Global_1347702)[23]->f_15, 1))
			{
				func_564(1650066845, iParam1);
			}
			else
			{
				func_564(151370023, iParam1);
			}
			func_564(1426057961, iParam1);
			func_564(476379584, iParam1);
			break;
		case 59:
			func_564(-1638117866, iParam1);
			break;
		case 62:
			func_564(199541730, iParam1);
			break;
		case 63:
			func_564(1703485804, iParam1);
			func_564(-800449045, iParam1);
			break;
		case 65:
			func_564(-1678210868, iParam1);
			func_564(-1448238026, iParam1);
			func_564(-1200864845, iParam1);
			func_564(1473511536, iParam1);
			break;
		case 66:
			func_564(-1774490051, iParam1);
			func_564(-34645921, iParam1);
			func_564(174027075, iParam1);
			func_564(-1155999, iParam1);
			func_565(1);
			break;
		case 67:
			func_564(701612593, iParam1);
			func_564(-1069631343, iParam1);
			func_564(1673428882, iParam1);
			break;
		case 68:
			func_564(-739133286, iParam1);
			func_564(-2130089358, iParam1);
			func_564(2056190391, iParam1);
			func_564(1941753817, iParam1);
			func_565(0);
			break;
		case 70:
			func_564(-1217555753, iParam1);
			break;
		case 71:
			func_564(697048821, iParam1);
			break;
		case 73:
			func_564(-553148661, iParam1);
			break;
		case 75:
			func_564(1349250531, iParam1);
			break;
		case 77:
			if (bParam3 == 1)
			{
				func_564(1414263863, iParam1);
			}
			else
			{
				func_564(-1772294468, iParam1);
			}
			break;
		case 79:
			if (bParam3 == 1)
			{
				func_564(1835465936, iParam1);
				func_564(523715611, iParam1);
			}
			else if (func_566(78))
			{
				func_564(1420338873, iParam1);
			}
			else
			{
				func_564(-46362051, iParam1);
			}
			break;
		case 80:
			if (bParam3 == 1)
			{
				func_564(10180941, iParam1);
			}
			else if (func_566(79))
			{
				func_564(768420635, iParam1);
			}
			else
			{
				func_564(-1734012650, iParam1);
			}
			break;
		case 85:
			if (bParam3 == 1)
			{
				func_564(-383601523, iParam1);
			}
			else
			{
				func_564(1004812390, iParam1);
			}
			break;
		case 86:
			if (bParam3 == 1)
			{
				func_564(1606472408, iParam1);
			}
			else
			{
				func_564(1405690220, iParam1);
			}
			break;
		case 87:
			if (bParam3 == 1)
			{
				func_564(-203571927, iParam1);
			}
			else
			{
				func_564(640033630, iParam1);
			}
			break;
		case 88:
			if (bParam3 == 1)
			{
				func_564(729886222, iParam1);
			}
			else
			{
				func_564(-158717807, iParam1);
			}
			break;
		case 89:
			if (bParam3 == 1)
			{
				func_564(-714816362, iParam1);
			}
			else
			{
				func_564(1160146336, iParam1);
			}
			break;
		case 92:
			if (bParam3 == 1)
			{
				func_564(-932932179, iParam1);
				func_564(-1458537240, iParam1);
			}
			else
			{
				func_564(-1764383885, iParam1);
				func_564(894349517, iParam1);
			}
			break;
		case 93:
			if (bParam3 == 1)
			{
				func_564(1741466706, iParam1);
			}
			else
			{
				func_564(1405815775, iParam1);
			}
			break;
		case 94:
			func_564(1163067702, iParam1);
			if (&Global_1357515 == -1)
			{
				func_564(1905280979, iParam1);
			}
			else
			{
				func_564(-1966245299, iParam1);
			}
			func_564(721468880, iParam1);
			break;
		case 99:
			func_564(800644248, iParam1);
			break;
		case 101:
			if (bParam3 == 1)
			{
				func_564(1502176860, iParam1);
				if (&Global_1357515 == -1)
				{
					func_564(-1117781095, iParam1);
				}
				else
				{
					func_564(-618709225, iParam1);
				}
			}
			else if (&Global_1357515 == -1)
			{
				func_564(141494548, iParam1);
			}
			else
			{
				func_564(-633957459, iParam1);
			}
			break;
		case 102:
			if (bParam3 == 1)
			{
				func_564(-369525697, iParam1);
			}
			else if (func_566(101))
			{
				func_564(1595015219, iParam1);
			}
			else
			{
				func_564(-321486961, iParam1);
			}
			break;
		case 103:
			func_564(1422724221, iParam1);
			break;
		case 104:
			if (bParam3 == 1)
			{
				func_564(793460477, iParam1);
				func_564(-1610242176, iParam1);
			}
			else if (func_566(103))
			{
				func_564(1830897187, iParam1);
			}
			else
			{
				func_564(1419017828, iParam1);
			}
			break;
		case 105:
			if (bParam3 == 1)
			{
				func_564(1528309077, iParam1);
			}
			else if (func_566(104))
			{
				func_564(1864966105, iParam1);
			}
			else
			{
				func_564(-103336013, iParam1);
			}
			break;
		case 108:
			func_564(1175579551, iParam1);
			break;
		case 109:
			if (bParam3 == 1)
			{
				func_564(-1123227713, iParam1);
				func_564(-889574341, iParam1);
			}
			else
			{
				func_564(2065385917, iParam1);
				func_564(780305039, iParam1);
			}
			break;
		case 110:
			if (bParam3 == 1)
			{
				func_564(-887421691, iParam1);
			}
			else if (func_566(109))
			{
				func_564(-1318117949, iParam1);
			}
			else
			{
				func_564(1632244327, iParam1);
			}
			break;
		case 111:
			if (bParam3 == 1)
			{
				if (&Global_1357515 == 0)
				{
					func_564(284822762, iParam1);
				}
				else
				{
					func_564(-1425017554, iParam1);
				}
			}
			else if (func_566(110))
			{
				if (&Global_1357515 == 0)
				{
					func_564(553087292, iParam1);
				}
				else
				{
					func_564(-1766870331, iParam1);
					func_564(1971788022, iParam1);
				}
			}
			else if (&Global_1357515 == 0)
			{
				func_564(-1980598735, iParam1);
			}
			else
			{
				func_564(-442732098, iParam1);
				func_564(1955756409, iParam1);
			}
			break;
		case 115:
			func_564(394303528, iParam1);
			func_564(-2040171028, iParam1);
			break;
		case 143:
			if (bParam3 == 1)
			{
				func_564(1182403394, iParam1);
			}
			else
			{
				func_564(-2116547899, iParam1);
			}
			break;
		case 144:
			if (bParam3 == 1)
			{
				func_564(924445424, iParam1);
			}
			else
			{
				func_564(1227062271, iParam1);
			}
			break;
		case 117:
			if (bParam3 == 1)
			{
				func_564(430755273, iParam1);
				func_564(-1473879802, iParam1);
			}
			else
			{
				func_564(1121266049, iParam1);
			}
			break;
		case 118:
			if (bParam3 == 1)
			{
				func_564(73885747, iParam1);
			}
			else if (func_566(117))
			{
				func_564(1559707913, iParam1);
			}
			else
			{
				func_564(926897873, iParam1);
			}
			break;
		case 119:
			if (bParam3 == 1)
			{
				func_564(-2103887972, iParam1);
			}
			else if (func_566(118))
			{
				func_564(-435828462, iParam1);
			}
			else
			{
				func_564(-516020583, iParam1);
			}
			break;
		case 121:
			if (bParam3 == 1)
			{
				func_564(2054486196, iParam1);
			}
			else
			{
				func_564(1809320262, iParam1);
			}
			break;
		case 122:
			if (bParam3 == 1)
			{
				func_564(-570086056, iParam1);
			}
			else if (func_566(121))
			{
				func_564(32337856, iParam1);
			}
			else
			{
				func_564(-206811842, iParam1);
			}
			break;
		case 124:
			if (bParam3 == 1)
			{
				func_564(813493663, iParam1);
			}
			else if (func_566(122))
			{
				func_564(-2132763590, iParam1);
			}
			else
			{
				func_564(477901035, iParam1);
			}
			break;
		case 125:
			if (bParam3 == 1)
			{
				func_564(-66240572, iParam1);
				func_564(1563075046, iParam1);
			}
			else
			{
				func_564(-787011772, iParam1);
				func_564(-1523377438, iParam1);
			}
			break;
		case 127:
			func_564(61020800, iParam1);
			break;
		case 129:
			func_564(428985222, iParam1);
			break;
		case 131:
			func_564(-1393851036, iParam1);
			break;
		case 133:
			func_564(1559531342, iParam1);
			break;
		case 134:
			func_564(-718846442, iParam1);
			break;
		case 135:
			if (bParam3 == 1)
			{
				if (&Global_1357515 == -1)
				{
					func_564(-1374407408, iParam1);
				}
				else
				{
					func_564(471210931, iParam1);
				}
			}
			else if ((_journal_can_write_entry(1732474719) && _journal_can_write_entry(801682048)) && _journal_can_write_entry(-1986404392))
			{
				if (&Global_1357515 == -1)
				{
					func_564(-472672138, iParam1);
				}
				else
				{
					func_564(-2132098614, iParam1);
				}
			}
			else if (&Global_1357515 == -1)
			{
				func_564(-1678710489, iParam1);
			}
			else
			{
				func_564(1522210661, iParam1);
			}
			break;
		case 136:
			if (bParam3 == 1)
			{
				func_564(1717582460, iParam1);
			}
			else
			{
				func_564(343644664, iParam1);
			}
			break;
		case 137:
			if (bParam3 == 1)
			{
				func_564(1568112362, iParam1);
				func_564(1388317526, iParam1);
			}
			else if (func_566(136))
			{
				func_564(-1597534828, iParam1);
				func_564(-1207918353, iParam1);
			}
			else
			{
				func_564(-1940891082, iParam1);
				func_564(-598277294, iParam1);
			}
			break;
		case 142:
			if (bParam2 == 1)
			{
				func_564(448334530, iParam1);
				func_564(2145375502, iParam1);
			}
			else
			{
				func_564(-1891994685, iParam1);
			}
			break;
		case 146:
			if (bParam3 == 1)
			{
				if (&Global_1357515 == 1)
				{
					func_564(1159121660, iParam1);
				}
				else if (&Global_1357515 == 0)
				{
					func_564(-1968554187, iParam1);
				}
			}
			else if (&Global_1357515 == 1)
			{
				func_564(841927377, iParam1);
			}
			else if (&Global_1357515 == 0)
			{
				func_564(848633571, iParam1);
			}
			break;
		case 147:
			if (bParam3 == 1)
			{
				func_564(-66616327, iParam1);
			}
			else
			{
				func_564(1978361607, iParam1);
			}
			break;
		case 148:
			if (bParam3 == 1)
			{
				func_564(1862916706, iParam1);
			}
			else if (func_566(147))
			{
				func_564(675105199, iParam1);
			}
			else
			{
				func_564(-1993800776, iParam1);
			}
			break;
		case 149:
			if (bParam3 == 1)
			{
				func_564(174409701, iParam1);
			}
			else if (func_566(148))
			{
				func_564(-1730895475, iParam1);
			}
			else
			{
				func_564(-342396910, iParam1);
			}
			break;
		case 150:
			if (bParam3 == 1)
			{
				func_564(1295237052, iParam1);
			}
			else if (func_566(149))
			{
				func_564(-788577684, iParam1);
			}
			else
			{
				func_564(1527015024, iParam1);
			}
			break;
		default:
			break;
	}
}

int func_306(int iParam0, var uParam1, int iParam2)
{
	*uParam1 = 1137976064;
	*iParam2 = -1;
	iVar0 = func_196(iParam0);
	switch (iVar0)
	{
		case 1:
			iVar1 = func_508(iParam0);
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
					if (func_361((*Global_1835011)[9]->f_1) == 0)
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
			iVar2 = func_272(iParam0);
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
			iVar3 = func_272(iParam0);
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

int func_307(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
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
	iVar2 = func_569(iParam0);
	iVar3 = func_570(iParam0);
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
				iVar1 = func_285();
				func_334(&iVar1, 0, 0, iParam3, 0, 0, 0, 0);
			}
			else
			{
				iVar1 = -15;
			}
			Global_40.f_4283.f_6[iVar0]->f_1 = iVar1;
			Global_40.f_4283.f_6[iVar0]->f_4 = iVar2;
			func_571(iParam0, 1);
			if (func_572(iVar2))
			{
				iVar4 = 0;
				while (iVar4 < 60)
				{
					if (Global_40.f_4283.f_6[iVar4]->f_4 == iVar2 && &Global_40.f_4283.f_6[iVar4] != iParam0)
					{
						func_573(Global_40.f_4283.f_6[iVar4], 1, 0);
					}
					iVar4++;
				}
			}
			if (bParam5)
			{
				if (bParam6)
				{
					func_574(1, iParam0);
				}
				else
				{
					func_575(1, iParam0);
				}
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_308(int iParam0, int iParam1)
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

int func_309(int iParam0, int iParam1, int iParam2)
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

void func_310(bool bParam0)
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

void func_311(int iParam0, int iParam1, bool bParam2)
{
	iVar0 = iParam0 * 1000;
	if ((iVar0 + get_game_timer()) > Global_1327479->f_4)
	{
		func_576(iParam0, iParam1, bParam2);
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

int func_312(int iParam0, int iParam1)
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

bool func_313(int iParam0)
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

void func_314(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, bool bParam5, float fParam6, bool bParam7)
{
	if (func_20() != -1)
	{
		return;
	}
	if ((Global_36616 && func_577(iParam1)) != 0)
	{
		return;
	}
	iVar0 = func_578(iParam0);
	iVar0 = round((IntToFloat(iVar0) * fParam6));
	if ((((((iParam1 != 1142025875 && iParam1 != 1587891565) && iParam1 != -643014279) && iParam1 != -597116214) && iParam1 != 551416228) && iParam1 != -735200598) && iParam1 != -2010847721)
	{
		func_579(iVar0, 0, iParam0, iParam1, sParam3, iParam4, bParam5, bParam7);
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
			func_580(iVar1, iVar0, iParam0, iParam1, iParam4, bParam5);
		}
		else
		{
			func_579(iVar0, 1, iParam0, iParam1, sParam3, iParam4, bParam5, 0);
		}
	}
}

int func_315(int iParam0)
{
	if (!func_191(iParam0))
	{
		return -1;
	}
	return func_581(func_483(iParam0));
}

int func_316(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return 120;
	}
	return 60;
}

void func_317()
{
	_sc_feed_submit_preset_message(2, 1);
	if (is_orbis_version())
	{
		iVar0 = func_582(13);
		(*Global_1898441)[iVar0] = 13;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_WIN2_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_WIN2_COM", 24);
	}
}

bool func_318(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
{
	if (!func_583(iParam0, 0))
	{
		return false;
	}
	if (!func_584(iParam0, iParam1, bParam2, iParam5))
	{
		return false;
	}
	if (!func_585(iParam0, &iVar0, iParam1))
	{
		return false;
	}
	func_586(iParam0, bParam2);
	iVar2 = 0;
	if (func_587(iParam0, 0, 0) == 0)
	{
		if (func_588(iParam0))
		{
			iVar5 = func_589(iParam0);
			iVar6 = func_590(iVar5);
			iVar7 = func_591(iVar6) + 1;
			func_592(iVar5);
			if (func_593(38))
			{
				func_325(483, 0);
			}
			else
			{
				func_325(482, 0);
			}
			if (iVar7 == func_594(iVar6))
			{
				func_318(func_595(iVar6), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				if (func_398() && func_596(4))
				{
					if (func_398() && (func_597(38) || func_593(38)))
					{
						func_599(38, func_595(iVar6), 0, 0, func_598(), 0, -1, 0);
						func_600(2);
					}
					else
					{
						func_599(38, func_595(iVar6), 0, 0, func_598(), 0, -1, 0);
						func_600(1);
					}
				}
			}
			else if (func_398() && func_596(4))
			{
				if (func_398() && (func_597(38) || func_593(38)))
				{
					func_599(38, 0, 0, 0, func_598(), 0, -1, 0);
					func_600(2);
				}
				else
				{
					func_599(38, 0, 0, 0, func_598(), 0, -1, 0);
					func_600(1);
				}
			}
			if (func_398() && func_596(4))
			{
				if (!Global_1914319->f_17376)
				{
					if (func_398() && (func_597(38) || func_593(38)))
					{
						func_601(38, _0x13aaecda43318bfe(-2076669067, iVar6), _0xd52d20b0c76bb26d(-2076669067, iVar6), iVar7, 12, 0, iVar6);
					}
					else
					{
						func_601(38, get_hash_key("toast_log_blips"), get_hash_key("BLIP_RC_COLLECTABLE_CIGCARD"), iVar7, 12, 0, iVar6);
					}
				}
			}
		}
	}
	if (func_602(iParam0) == -1037537535)
	{
		if ((!func_603(iParam0, 866047851) && !func_603(iParam0, -1979000645)) && !func_603(iParam0, 1248798204))
		{
			bVar3 = true;
		}
	}
	if (func_604(iParam0, 8388608) && !func_605(28))
	{
		func_606(28);
	}
	if (!bVar3)
	{
		if (func_603(iParam0, -1588156645))
		{
			bParam2 = true;
			bVar4 = true;
			if (func_607(iParam0) == -1447088266)
			{
				iVar1 = func_609(func_608(iParam0, 1), 0);
				if (is_weapon_valid(iVar1))
				{
					if (func_20() == -1)
					{
						func_610(iVar1);
					}
					if (func_611(0) && func_612(iVar1, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_613(iParam0, iVar0, iParam5);
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
						func_610(iParam0);
					}
					if (func_611(0) && func_612(iParam0, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_613(iVar1, iVar0, iParam5);
						if (!bParam9)
						{
							bParam2 = false;
						}
					}
				}
			}
		}
		else if (func_602(iParam0) == -427144552)
		{
			if (!func_614(iParam0, iParam5, &bParam2, bParam3, bParam4))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_602(iParam0) == 307971639 && func_615(iParam0))
		{
			if (!func_616(iParam0, &iVar0, iParam5))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_603(iParam0, 866047851))
		{
			func_617(iParam0);
		}
		else if (func_603(iParam0, 2000026003))
		{
			func_618(iParam0);
		}
		else if (func_603(iParam0, -103750053))
		{
			func_95(func_619(-1019857971), iVar0);
		}
		else if (iParam0 == 2093098109)
		{
			func_95(func_620(-717883113, 2091222383), iVar0);
		}
		else if (func_603(iParam0, -121341956) && !func_603(iParam0, 606799272))
		{
			if (iParam0 != 191707516 && iParam0 != 1993672959)
			{
				if (func_327((*Global_1835011)[4]->f_1, 1))
				{
					func_325(498, 0);
				}
			}
			if (func_603(iParam0, -2017733358) || func_603(iParam0, -1369131378))
			{
				func_621(iParam0);
			}
		}
		else if (func_603(iParam0, -136654233))
		{
			if (func_603(iParam0, -1021472396))
			{
			}
		}
		else if (func_603(iParam0, -1466706512) && func_603(iParam0, 1147021565))
		{
			func_325(484, 0);
		}
		else if (func_603(iParam0, 1147021565) && func_603(iParam0, -524514947))
		{
		}
		else if (func_603(iParam0, 554195525))
		{
		}
		else if (func_603(iParam0, 589988438))
		{
			if (func_622())
			{
				func_623(1339418451, 0, 1065353216, 1, 0, 0, 0, -1);
				bParam2 = true;
				bVar4 = true;
			}
		}
		else if (func_603(iParam0, 787083290) && func_603(iParam0, 949916894))
		{
			func_624(iParam0);
		}
		else if (func_603(iParam0, -1718133314))
		{
			func_625(iParam0);
		}
		else if (func_603(iParam0, -1738650224))
		{
			func_626(iParam0);
		}
		else if (func_603(iParam0, -1112814642) && func_603(iParam0, 949916894))
		{
			func_627(iParam0);
		}
		else if (iParam0 == -569063887)
		{
			Global_1935496->f_20 = 0;
		}
		else if (func_603(iParam0, 1841149704))
		{
			func_628();
		}
		else if (func_603(iParam0, 606799272))
		{
			func_629(iParam0, iParam1);
			func_630(iParam0);
		}
		else if (func_603(iParam0, -1112814642) && func_603(iParam0, -1697809989))
		{
			func_631(iParam0, 0, 0, 0);
		}
		else if (func_603(iParam0, -2017733358) || func_603(iParam0, -1369131378))
		{
			func_621(iParam0);
		}
		else if (func_603(iParam0, -1921346699))
		{
			if (func_20() != -1)
			{
				return false;
			}
			func_632(iParam0, iParam5, iParam8);
			bParam2 = true;
		}
		else if (func_603(iParam0, 1192444843))
		{
			switch (iParam0)
			{
				case 1815744868:
					if (!func_347(215778062, 1, 0))
					{
						func_318(215778062, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 1334018438:
					if (!func_347(670273567, 1, 0))
					{
						func_318(670273567, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 1055480217:
					if (!func_347(-967317137, 1, 0))
					{
						func_318(-967317137, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case -978159653:
					if (!func_347(526074061, 1, 0))
					{
						func_318(526074061, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 2100131425:
					if (!func_347(-1045488665, 1, 0))
					{
						func_318(-1045488665, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case -2041382104:
					if (!func_347(471514780, 1, 0))
					{
						func_318(471514780, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
			}
		}
		else if (func_603(iParam0, -839724752) && func_604(iParam0, 4))
		{
			if (!func_593(42))
			{
				func_633(iParam0);
			}
		}
		else if (func_603(iParam0, 1399091007))
		{
			func_634(iParam0, &iVar2);
			bParam2 = true;
			bVar4 = true;
		}
		else if (func_603(iParam0, 1248798204))
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
				func_318(iVar8, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_606(24);
				if (&Global_1946804->f_1497.f_1[27] == &Global_1946804->f_57[27])
				{
					func_187(player_ped_id(), -1185145312, 0, 99217379, 1, 1, 1, 0, 1, 0);
				}
				if (func_635(&iVar9, 0))
				{
					func_612(iVar9, 0, 0, bParam4, 3, 0, 752097756, 0);
				}
				break;
			case 1171350303:
				if (func_20() == -1 && &Global_1946804->f_1497.f_1[25] == &Global_1946804->f_57[25])
				{
					func_187(player_ped_id(), 1171350303, 0, 673166414, 1, 1, 1, 0, 1, 0);
				}
				break;
			case -160924582:
				break;
			case 2131771850:
				func_325(415, 0);
				Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
				func_636();
				Global_40.f_11095.f_61 = (Global_40.f_11095.f_61 + 0.1f);
				func_637();
				Global_40.f_11095.f_55 = (Global_40.f_11095.f_55 + 0.1f);
				Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
				Global_40.f_11095.f_56 = (Global_40.f_11095.f_56 + 0.1f);
				Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
				func_638();
				Global_40.f_11095.f_63 = (Global_40.f_11095.f_63 + 0.1f);
				func_639();
				Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
				Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
				Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
				func_640();
				break;
			case -102111672:
				bParam2 = true;
				bVar4 = true;
				break;
			case -1937935584:
				func_641(499813453, 854119837, 0);
				func_642(499813453, 0);
				func_643(1);
				break;
			case 2127812557:
				func_641(499813453, -1292544588, 0);
				func_642(499813453, 0);
				func_643(2);
				break;
			case 808991383:
				func_641(499813453, -1003325394, 0);
				func_642(499813453, 0);
				func_643(4);
				break;
			case 1134518629:
				func_641(666607663, -335460405, 0);
				func_642(666607663, 0);
				func_644(1);
				break;
			case 902940106:
				func_641(666607663, 903797617, 0);
				func_642(666607663, 0);
				func_644(2);
				break;
			case -418174898:
				func_641(666607663, 669728650, 0);
				func_642(666607663, 0);
				func_644(4);
				break;
			case -648114971:
				func_641(-220219788, 1214120047, 0);
				func_642(-220219788, 0);
				func_645(1);
				break;
			case 211153747:
				func_641(-220219788, 655769340, 0);
				func_642(-220219788, 0);
				func_645(2);
				break;
			case -32876996:
				func_641(-220219788, 885316185, 0);
				func_642(-220219788, 0);
				func_645(4);
				break;
			case 1191437462:
				func_641(218622660, -1491419385, 0);
				func_642(218622660, 0);
				func_646(1);
				break;
			case 1119149048:
				func_641(218622660, 1809565830, 0);
				func_642(218622660, 0);
				func_646(2);
				break;
			case 506073827:
				func_641(390004462, -628873767, 0);
				func_642(390004462, 0);
				func_647(1);
				break;
			case -1876986168:
				func_641(390004462, -405421956, 0);
				func_642(390004462, 0);
				func_647(2);
				break;
			case 2142623221:
				func_641(390004462, -1108972386, 0);
				func_642(390004462, 0);
				func_647(4);
				break;
			case 1508215381:
				func_641(6410548, 1053716392, 0);
				func_642(6410548, 0);
				func_648(1);
				break;
			case -888935280:
				func_641(6410548, 806507056, 0);
				func_642(6410548, 0);
				func_648(2);
				break;
			case -1252474566:
				func_641(6410548, 1571925350, 0);
				func_642(6410548, 0);
				func_648(4);
				break;
			case -1465702449:
				func_641(6410548, 1330352282, 0);
				func_642(6410548, 0);
				func_648(8);
				break;
			case -21093309:
				func_650(242, func_649(-21093309), 0);
				break;
			case 204375141:
				func_650(240, func_649(204375141), 0);
				break;
			case -417963070:
				func_650(241, func_649(-417963070), 0);
				break;
			case -1080874779:
			case -755485480:
			case 230530039:
			case 299161628:
				if (get_game_timer() >= (Global_1935689->f_10197 + 60000))
				{
					func_651(594, 1934060482, 1, 1);
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
					func_651(594, 1110018439, 1, 1);
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
					func_651(594, 1408511260, 1, 1);
					Global_1935689->f_10197 = get_game_timer();
				}
				break;
			case -1976480343:
			case -953313786:
			case 730856618:
				if (get_game_timer() >= (Global_1935689->f_10197 + 60000))
				{
					func_651(594, -1228016946, 1, 1);
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
					func_651(595, -103579, 1, 1);
					Global_1935689->f_10197 = get_game_timer();
				}
				break;
			case -1977068039:
			case -399865011:
				if (get_game_timer() >= (Global_1935689->f_10197 + 60000))
				{
					func_651(595, -1531530025, 1, 1);
					Global_1935689->f_10197 = get_game_timer();
				}
				break;
			case 80178851:
				func_325(488, 0);
				break;
			case 1613651027:
				func_325(491, 0);
				break;
			case -885810591:
				func_325(485, 0);
				if ((get_random_int_in_range(0, 65536) % 3) == 0)
				{
					func_318(func_652(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				else
				{
					func_318(func_653(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				break;
			case -601932535:
				if (func_605(1))
				{
					func_325(487, 0);
				}
				break;
			case -898386032:
				func_325(486, 0);
				break;
			case -2035110427:
				if (func_20() == -1)
				{
					iParam0 = -1448210800;
				}
				break;
			case 1510719693:
				func_325(496, 0);
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
		func_654(&iVar10);
		if (!func_655(iVar10, iVar0, iParam5))
		{
			return false;
		}
		else if (!func_611(0))
		{
			return true;
		}
		if (func_602(iParam0) == -1037537535)
		{
			func_656(iParam0);
		}
		if (func_603(iParam0, -1979000645))
		{
			func_657(iParam0);
		}
	}
	else if (iVar2 != 0)
	{
		if (func_611(0))
		{
			Var11.f_1 = 10;
			Var11.f_12 = 10;
			_0x48e4d50f87a96aa5(Global_35, 0, 0, iVar2, &Var11, 0);
			iVar34 = 0;
			while (iVar34 < Var11)
			{
				func_318(&(Var11.f_1[iVar34]), &(Var11.f_12[iVar34]), 0, 0, 0, -897553835, 0, 0, 0, 0);
				iVar34++;
			}
		}
		else
		{
			func_658(iVar2, 0);
		}
	}
	Var35 = { func_659(iParam0) };
	if (_stat_id_is_valid(&Var35))
	{
		_0x6a0184e904cdf25e(&Var35, iVar0);
	}
	func_660(iParam0);
	if (fParam6 > 0f)
	{
		if (func_603(iParam0, -839724752))
		{
			func_661(iParam0, fParam6);
		}
	}
	else if (!bParam2)
	{
		bVar37 = iParam5 == 1248274121;
		func_662(iParam0, iVar0, 0, bVar37, 0);
	}
	return true;
}

void func_319(int iParam0)
{
	if (func_603(iParam0, 1989861793))
	{
		iVar0 = func_663(iParam0, 1697966752);
		if (iVar0 != 0)
		{
			Var3 = { func_664(-1591664384, -1591664384, 0, 0, 0, 0, -1, iVar0, 0) };
			if (func_665(Var3, &iVar1, &iVar2, 0))
			{
				bVar13 = false;
				iVar14 = 0;
				while (iVar14 < iVar2)
				{
					iVar15 = func_666(iVar14, iVar1);
					if (iVar15 != iParam0 && func_583(iVar15, 0))
					{
						if (func_667(iVar15, 0, 0, 1, 0))
						{
							bVar13 = true;
						}
					}
					iVar14++;
				}
				func_668(iVar1);
				if (bVar13)
				{
					func_669(iParam0);
				}
				else
				{
					func_325(306, 0);
				}
			}
		}
	}
}

void func_320()
{
	if (func_20() != -1)
	{
		return;
	}
	func_670();
	func_671();
	func_672();
	func_673();
	func_674();
	func_675();
	func_676();
}

void func_321(int iParam0)
{
	func_677(iParam0, 1, 1, -142743235, 1);
	if (func_678(iParam0))
	{
		func_679(iParam0, 1, 1);
	}
	bVar3 = false;
	bVar7 = false;
	iVar8 = func_472(func_680(iParam0), 1);
	if (iVar8 >= 39)
	{
		bVar7 = true;
	}
	func_681(-2124052603);
	iVar1 = 0;
	while (iVar1 < 39)
	{
		vVar4.x = &Global_1946804->f_57[iVar1];
		*Global_1946804->f_1616.f_1[iVar1] = { vVar4 };
		Global_1946804->f_1616.f_1[iVar1]->f_2 = (Global_1946804->f_1497.f_1[iVar1]->f_2 || Global_1946804->f_1378.f_1[iVar1]->f_2);
		iVar1++;
	}
	if (func_682() == -2125499975)
	{
		iVar2 = 2020890174;
	}
	else
	{
		iVar2 = 1105329772;
	}
	func_683(&(Global_1946804->f_1616), iVar2, &uVar9, 1, 0, 0, 0);
	func_683(&(Global_1946804->f_1616), 211609491, &uVar9, 1, 0, 0, 0);
	*Global_1946804->f_1616.f_1[8] = { func_684(8, 0) };
	*Global_1946804->f_1616.f_1[9] = { func_684(9, 0) };
	*Global_1946804->f_1616.f_1[0] = { func_684(0, 0) };
	*Global_1946804->f_1616.f_1[2] = { func_684(2, 0) };
	*Global_1946804->f_1616.f_1[3] = { func_684(3, 0) };
	*Global_1946804->f_1616.f_1[1] = { func_684(1, 0) };
	*Global_1946804->f_1616.f_1[5] = { func_684(5, 0) };
	*Global_1946804->f_1616.f_1[6] = { func_684(6, 0) };
	*Global_1946804->f_1616.f_1[7] = { func_684(7, 0) };
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (bVar7)
		{
			iVar8 = 0;
			while (iVar8 < 39)
			{
				if (iParam0 == func_685(iVar8, iVar0))
				{
					func_686(Global_1946804->f_1616.f_1[iVar8], iVar8, iVar0);
				}
				else
				{
					iVar8++;
				}
			}
		}
		else if (iParam0 == func_685(iVar8, iVar0))
		{
			func_686(Global_1946804->f_1616.f_1[iVar8], iVar8, iVar0);
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

void func_322()
{
	iVar5 = 16;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		iVar1 = func_685(iVar5, iVar0);
		if (iVar1 == &Global_1946804->f_57[iVar5] || iVar1 == 0)
		{
			if (func_682() == -2125499975 || func_682() == -449205311)
			{
				vVar2.x = -2018863109;
				vVar2.f_1 = 1530758430;
				func_686(&vVar2, iVar5, iVar0);
			}
			else
			{
				vVar2.x = 1734931872;
				vVar2.f_1 = 1155669136;
				func_686(&vVar2, iVar5, iVar0);
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

void func_323()
{
	_sc_feed_submit_preset_message(2, 2);
	if (is_orbis_version())
	{
		iVar0 = func_582(14);
		(*Global_1898441)[iVar0] = 14;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_MUD1_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_MUD1_COM", 24);
	}
}

char* func_324(int iParam0, bool bParam1)
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
			if ((func_327((*Global_1835011)[59]->f_1, 1) || func_327((*Global_1347702)[1]->f_15, 1)) || func_192((*Global_1347702)[1]->f_15))
			{
				return "COMP_RUFUS";
			}
			else if (func_559(403634348, 1))
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

void func_325(int iParam0, bool bParam1)
{
	func_687(iParam0, &iVar0, &iVar1);
	if (!func_688(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_689(iVar0, iVar1);
}

void func_326(int iParam0, bool bParam1, bool bParam2)
{
	iVar0 = func_472(iParam0, 1);
	func_690(Global_1946804->f_1497.f_1[iVar0], 2, 6);
	func_690(Global_1946804->f_1378.f_1[iVar0], 2, 6);
	if (bParam1)
	{
		Global_1946804->f_1497.f_1[iVar0] = &Global_1946804->f_57[iVar0];
		Global_1946804->f_1497.f_1[iVar0]->f_1 = 0;
		*Global_1946804->f_1378.f_1[iVar0] = { *Global_1946804->f_1497.f_1[iVar0] };
		if (bParam2)
		{
			func_475(17, iParam0, 0, 0, 0);
		}
	}
	if (func_20() == -1)
	{
		iVar1 = 0;
		while (iVar1 < 5)
		{
			func_690(Global_26796.f_26[iVar1]->f_1.f_1[iVar0], 2, 6);
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
			func_690(Global_36638.f_45.f_350.f_26[iVar1]->f_1.f_1[iVar0], 2, 6);
			if (bParam1)
			{
				Global_36638.f_45.f_350.f_26[iVar1]->f_1.f_1[iVar0] = &Global_1946804->f_57[iVar0];
				Global_36638.f_45.f_350.f_26[iVar1]->f_1.f_1[iVar0]->f_1 = 0;
			}
			iVar1++;
		}
	}
}

bool func_327(int iParam0, bool bParam1)
{
	switch (func_296(iParam0))
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

void func_328()
{
	_sc_feed_submit_preset_message(2, 5);
	if (is_orbis_version())
	{
		iVar0 = func_582(17);
		(*Global_1898441)[iVar0] = 17;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_BRA2_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_BRA2_COM", 24);
	}
}

void func_329()
{
	_sc_feed_submit_preset_message(2, 6);
	if (is_orbis_version())
	{
		iVar0 = func_582(18);
		(*Global_1898441)[iVar0] = 18;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_BRA3_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_BRA3_COM", 24);
	}
}

int func_330(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (iParam3 == -358215195)
	{
		Var0 = { func_470(iParam1, 1, 0) };
		iParam3 = func_471(Var0.f_4);
		if (iParam3 == -358215195)
		{
			return 0;
		}
	}
	func_691(iParam3);
	return func_187(iParam0, iParam1, iParam2, iParam3, bParam4, bParam5, 1, 0, 1, 0);
}

bool func_331()
{
	return _unlock_is_unlocked(99890643);
}

void func_332(int iParam0)
{
	if (!func_441(iParam0))
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

bool func_333(int iParam0, int iParam1)
{
	if (!func_692(iParam0))
	{
		return false;
	}
	if ((iParam1 == -1 || iParam1 < 0) || iParam1 > 179)
	{
		iParam1 = func_693(iParam0);
	}
	if (iParam1 == -1)
	{
		return false;
	}
	return func_694(Global_40.f_9910[iParam1], 4);
}

void func_334(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	iVar0 = func_695(*iParam0);
	iVar1 = func_696(*iParam0);
	iVar2 = func_697(*iParam0);
	iVar3 = func_698(*iParam0);
	iVar4 = func_699(*iParam0);
	iVar5 = func_700(*iParam0);
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
	iVar6 = func_701(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_701(iVar1, iVar0);
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
	func_702(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_335(int iParam0, int iParam1, bool bParam2)
{
	if (!func_692(iParam0))
	{
		return;
	}
	if (!func_703(iParam1))
	{
		return;
	}
	if (func_704(iParam1, 1))
	{
		return;
	}
	iVar0 = func_693(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (func_333(iParam0, -1))
	{
		return;
	}
	else
	{
		func_705(Global_40.f_9910[iVar0], 2);
	}
	Global_40.f_9910[iVar0]->f_4 = iParam1;
	if (bParam2)
	{
		if (!func_198(0, 0, 1))
		{
			func_367(0, 17);
		}
	}
}

void func_336()
{
	_sc_feed_submit_preset_message(2, 7);
	if (is_orbis_version())
	{
		iVar0 = func_582(19);
		(*Global_1898441)[iVar0] = 19;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_MOB5_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_MOB5_COM", 24);
	}
}

void func_337()
{
	_sc_feed_submit_preset_message(2, 8);
	if (is_orbis_version())
	{
		iVar0 = func_582(20);
		(*Global_1898441)[iVar0] = 20;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_SAI1_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_SAI1_COM", 24);
	}
}

bool func_338()
{
	return _unlock_is_unlocked(-121456797);
}

void func_339()
{
	_sc_feed_submit_preset_message(2, 9);
	if (is_orbis_version())
	{
		iVar0 = func_582(21);
		(*Global_1898441)[iVar0] = 21;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_GUA1_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_GUA1_COM", 24);
	}
}

void func_340()
{
	_sc_feed_submit_preset_message(2, 10);
	if (is_orbis_version())
	{
		iVar0 = func_582(22);
		(*Global_1898441)[iVar0] = 22;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_GUA3_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_GUA3_COM", 24);
	}
}

void func_341()
{
	_sc_feed_submit_preset_message(2, 12);
	if (is_orbis_version())
	{
		iVar0 = func_582(24);
		(*Global_1898441)[iVar0] = 24;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_ODR5_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_ODR5_COM", 24);
	}
}

void func_342()
{
	_sc_feed_submit_preset_message(2, 13);
	if (is_orbis_version())
	{
		iVar0 = func_582(25);
		(*Global_1898441)[iVar0] = 25;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_FIN1_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_FIN1_COM", 24);
	}
}

void func_343()
{
	_sc_feed_submit_preset_message(2, 14);
	if (is_orbis_version())
	{
		iVar0 = func_582(27);
		(*Global_1898441)[iVar0] = 27;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_MAR51_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_MAR51_COM", 24);
	}
}

void func_344()
{
	_sc_feed_submit_preset_message(2, 15);
	if (is_orbis_version())
	{
		iVar0 = func_582(28);
		(*Global_1898441)[iVar0] = 28;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_ABI21_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_ABI_21_COM", 24);
	}
}

bool func_345(int iParam0)
{
	return _0x9a03f22ad446eeac(iParam0) > 0;
}

bool func_346(int iParam0)
{
	return (Global_40.f_12019.f_4 && iParam0) != 0;
}

bool func_347(int iParam0, int iParam1, bool bParam2)
{
	if (!func_583(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_602(iParam0);
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
		if (!func_706(iParam0, 1))
		{
			return false;
		}
	}
	return func_587(iParam0, 0, bParam2) >= iParam1;
}

void func_348(int iParam0)
{
	if (func_82(32768))
	{
		return;
	}
	if (iParam0 < 0)
	{
		func_707(_create_var_string(2, "MISSION_COMPLETE_BANK_FEED", absi(iParam0)), "itemtype_textures", get_hash_key("ITEMTYPE_BANK_DEBT"), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
		Global_1879514->f_14 = 1;
		Global_1879514->f_15 = 0;
	}
	else
	{
		func_707(_create_var_string(2, "MISSION_COMPLETE_LOAN_FEED", iParam0), "itemtype_textures", get_hash_key("ITEMTYPE_BANK_DEBT"), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Negative", 0, 1);
		Global_1879514->f_14 = 0;
		Global_1879514->f_15 = 1;
	}
}

void func_349()
{
	_sc_feed_submit_preset_message(2, 16);
	if (is_orbis_version())
	{
		iVar0 = func_582(29);
		(*Global_1898441)[iVar0] = 29;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_BEE22_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_BEE22_COM", 24);
	}
}

void func_350()
{
	_sc_feed_submit_preset_message(2, 17);
	if (is_orbis_version())
	{
		iVar0 = func_582(26);
		(*Global_1898441)[iVar0] = 26;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_FIN2_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_FIN2_COM", 24);
	}
}

void func_351()
{
	_sc_feed_submit_preset_message(2, 11);
	if (is_orbis_version())
	{
		iVar0 = func_582(23);
		(*Global_1898441)[iVar0] = 23;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_DOC_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_DOC_COM", 24);
	}
}

void func_352()
{
	_sc_feed_submit_preset_message(2, 3);
	if (is_orbis_version())
	{
		iVar0 = func_582(15);
		(*Global_1898441)[iVar0] = 15;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_DOW3_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_DOW3_COM", 24);
	}
}

void func_353()
{
	_sc_feed_submit_preset_message(2, 4);
	if (is_orbis_version())
	{
		iVar0 = func_582(16);
		(*Global_1898441)[iVar0] = 16;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_DUT1_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_DUT1_COM", 24);
	}
}

void func_354()
{
	if (func_708() > 1)
	{
		func_709();
	}
	else
	{
		if (!_unlock_is_visible(-707360575))
		{
			_unlock_set_visible(-707360575, true);
			func_325(444, 1);
		}
		if (!_unlock_is_visible(-1201174711))
		{
			_unlock_set_visible(-1201174711, true);
			func_325(447, 1);
		}
		if (!_unlock_is_visible(151582343))
		{
			_unlock_set_visible(151582343, true);
			func_325(448, 1);
		}
		if (!_unlock_is_visible(-642492359))
		{
			_unlock_set_visible(-642492359, true);
			func_325(450, 1);
		}
		if (!_unlock_is_visible(5171247))
		{
			_unlock_set_visible(5171247, true);
			func_325(452, 1);
		}
	}
}

bool func_355(int iParam0)
{
	return func_710(iParam0, 4, 1);
}

void func_356(int iParam0)
{
	func_711(iParam0, 4, 1);
}

void func_357(int iParam0)
{
	if (iParam0 < 0)
	{
		iParam0 = 0;
	}
	Global_40.f_4283.f_326 = iParam0;
	Var0 = { func_94(-160912108) };
	stat_id_set_int(&Var0, iParam0, true);
}

void func_358(int iParam0)
{
	if (func_82(32768))
	{
		return;
	}
	if (!func_191(iParam0))
	{
		return;
	}
	func_229(Global_1935630, 8192);
	iVar2 = 1;
	switch (func_196(iParam0))
	{
		case 1:
			func_95(func_620(909007663, -587839005), 1);
			iVar0 = func_272(iParam0);
			func_95(func_94(-634848880), 1);
			switch (func_486(iVar0))
			{
				case 0:
					func_95(func_620(909007663, 1325140787), 1);
					break;
				case 1:
					func_95(func_620(909007663, 2101241783), 1);
					break;
				case 2:
					func_95(func_620(909007663, -1296936294), 1);
					break;
				case 3:
					func_95(func_620(909007663, -798388728), 1);
					break;
				case 4:
					func_95(func_620(909007663, -1787586531), 1);
					break;
				case 5:
					func_95(func_620(909007663, -1002834519), 1);
					break;
				case 6:
					func_95(func_620(909007663, -50600144), 1);
					break;
				case 7:
					func_95(func_620(909007663, -348503123), 1);
					break;
				case 8:
					func_95(func_620(909007663, -528798161), 1);
					break;
				default:
					iVar2 = 0;
					break;
			}
			if (iVar0 == 7)
			{
				func_95(func_620(909007663, -406093146), 1);
			}
			if (iVar2 && _0xe824ce7d13fcb35e(get_hash_key(&((*Global_1835011)[iVar0]->f_8))))
			{
				func_95(func_620(909007663, 532323983), 1);
			}
			break;
		case 8:
			iVar1 = func_272(iParam0);
			if (func_301((*Global_1347702)[iVar1]->f_12, 1))
			{
				func_95(func_94(-634848880), 1);
			}
			if (func_301((*Global_1347702)[iVar1]->f_12, 4) || iVar1 == 59)
			{
				if (func_301((*Global_1347702)[iVar1]->f_12, 1))
				{
					func_95(func_620(909007663, -587839005), 1);
				}
				else
				{
					func_95(func_620(909007663, -2049243343), 1);
				}
			}
			if (func_301((*Global_1347702)[iVar1]->f_12, 1))
			{
				switch (func_487(iVar1))
				{
					case 0:
						func_95(func_620(909007663, 1325140787), 1);
						break;
					case 1:
						func_95(func_620(909007663, 2101241783), 1);
						break;
					case 2:
						func_95(func_620(909007663, -1296936294), 1);
						break;
					case 3:
						func_95(func_620(909007663, -798388728), 1);
						break;
					case 4:
						func_95(func_620(909007663, -1787586531), 1);
						break;
					case 5:
						func_95(func_620(909007663, -1002834519), 1);
						break;
					case 6:
						func_95(func_620(909007663, -50600144), 1);
						break;
					case 7:
						func_95(func_620(909007663, -348503123), 1);
						break;
					case 8:
						func_95(func_620(909007663, -528798161), 1);
						break;
					default:
						iVar2 = 0;
						break;
				}
				if (iVar2 && _0xe824ce7d13fcb35e(get_hash_key(&((*Global_1347702)[iVar1]->f_3))))
				{
					func_95(func_620(909007663, 532323983), 1);
				}
			}
			else if (func_301((*Global_1347702)[iVar1]->f_12, 4))
			{
				if (func_301((*Global_1347702)[iVar1]->f_12, 4194304))
				{
				}
				else if (!func_301((*Global_1347702)[iVar1]->f_12, 512))
				{
					func_95(func_620(909007663, 551192206), 1);
				}
				else
				{
					func_95(func_620(909007663, -406093146), 1);
				}
			}
			break;
	}
}

void func_359()
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
	else if (func_199(&Global_1935630, 131072))
	{
		return;
	}
	else if ((func_198(0, 0, 1) || func_712()) || func_129())
	{
		return;
	}
	iVar0 = func_202();
	if (((iVar0 == 0 || iVar0 == 4) || iVar0 == 6) || iVar0 == 7)
	{
		return;
	}
	while (_spactionproxy_get_next_pending_buy_action(&uVar4))
	{
		if (!_spactionproxy_process_action(uVar4, func_713(&uVar4, &iVar1, &iVar2, &iVar3)))
		{
		}
	else
	{
		}
	}
	if (iVar1 == 1)
	{
		func_714(_create_var_string(2, "SHOP_CATALOGUE_DELIVERY"), _create_var_string(2, "SHOP_CATALOGUE_PURCHASE_RECEIVED_SINGLE", 1), 908516622, -576888982, -2, 0, 0, 0, 0, 1, 1);
	}
	else if (iVar1 > 1)
	{
		func_714(_create_var_string(2, "SHOP_CATALOGUE_DELIVERY"), _create_var_string(2, "SHOP_CATALOGUE_PURCHASE_RECEIVED_PLURAL", iVar1), 908516622, -576888982, -2, 0, 0, 0, 0, 1, 1);
	}
	if (iVar3 > 0)
	{
		func_715(iVar3, 0, 0);
	}
	if (iVar1 > 0)
	{
		func_367(0, -1);
	}
	if (iVar2 > 0)
	{
		func_716("SHOP_CATALOGUE_PURCHASE_FAILED", 10000, 0, 0, 0, 1);
	}
	func_717(1, 0);
	Global_1956575->f_4 = 1;
}

void func_360(int iParam0, int iParam1, bool bParam2, float fParam3, int iParam4, char* sParam5, int iParam6, int iParam7)
{
	if (func_82(32768))
	{
		return;
	}
	func_283(iParam1, bParam2, fParam3, iParam4, sParam5, iParam6, iParam7, 752097756);
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
		func_718(iParam0, iParam1, fParam3, iParam4);
	}
}

int func_361(int iParam0)
{
	if (!func_191(iParam0))
	{
		return -1;
	}
	return func_719(iParam0);
}

int func_362(int iParam0, int iParam1)
{
	if (!func_720(iParam0))
	{
		return 0;
	}
	if (!func_398())
	{
		return 0;
	}
	if (!func_721(iParam0, &iVar0, &iVar1))
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

int func_363(int iParam0, int iParam1, int iParam2, int iParam3)
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
	if (iVar2 >= func_722())
	{
		iVar2 = func_722();
	}
	iVar5 = func_723(iVar3, iVar4, iParam2);
	if (Global_1572887->f_12 == -1)
	{
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			iVar6 = iVar0;
			if (func_483(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_483(iVar6) == 0)
			{
				return func_724(iVar3, iVar4, iParam2, iVar0, iParam3);
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
			if (func_483(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_483(iVar6) == 0)
			{
				return func_724(iVar3, iVar4, iParam2, iVar0, iParam3);
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
				return func_724(iVar3, iVar4, iParam2, iVar0, 0);
			}
			iVar0++;
		}
	}
	return -1;
}

int func_364(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_725(1330954593, 0, -1);
		case 1:
			return func_725(1330954593, 0, -1);
		case 2:
			return func_725(1330954593, 0, -1) * 2;
		case 4:
			return func_725(1330954593, 0, -1);
		case 5:
			return func_725(1330954593, 0, -1);
		case 6:
			return func_725(1330954593, 0, -1) * 2;
		case 12:
			return 75000;
		case 8:
			return func_725(1330954593, 0, -1) * 3;
		case 9:
			return func_725(1330954593, 0, -1) * 3;
		case 10:
			return func_725(1330954593, 0, -1) * 3;
		case 11:
			return func_725(1330954593, 0, -1);
		default:
			break;
	}
	return 0;
}

char[] func_365(int iParam0)
{
	if (!func_191(iParam0))
	{
		return cVar0;
	}
	switch (func_196(iParam0))
	{
		case 1:
			cVar0 = (*Global_1835011)[func_508(iParam0)]->f_8;
			break;
		case 8:
			cVar0 = (*Global_1347702)[func_272(iParam0)]->f_3;
			break;
		case 11:
			if (iParam0 == func_363(0, 10, 11, 2116153146))
			{
				StringCopy(&cVar0, "CABR01", 8);
			}
			break;
	}
	return cVar0;
}

void func_366(char[4] cParam0)
{
	if (!Global_1879514->f_11)
	{
		iVar0 = func_368();
		iVar1 = get_hash_key(&cParam0);
		if (_0x57e798b54c45ee1a(iVar1) != 5 && iVar0 == 5)
		{
			if (func_196(Global_1879514->f_1) == 1)
			{
				func_362(5, 1);
			}
			else if (func_196(Global_1879514->f_1) == 8 && (func_301((*Global_1347702)[func_272(Global_1879514->f_1)]->f_12, 1) || func_301((*Global_1347702)[func_272(Global_1879514->f_1)]->f_12, 33554432)))
			{
				func_362(5, 1);
			}
		}
		_0xe824ce7d13fcb300(get_hash_key(&cParam0), iVar0);
	}
	else
	{
		_0xe824ce7d13fcb300(get_hash_key(&cParam0), 3);
	}
}

void func_367(bool bParam0, int iParam1)
{
	if (_0x5fc9357c26daefce())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_726(&Global_0, 8);
	}
	if (!func_398() || func_20() != -1)
	{
		return;
	}
	func_726(&Global_0, 1);
}

int func_368()
{
	iVar0 = func_727(Global_1879514->f_1);
	if (Global_1425247->f_53)
	{
		return 0;
	}
	if (func_728(iVar0))
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

Vector3 func_369(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10)
{
	vVar0 = { func_729(vParam0, iParam3, iParam4, iParam5, iParam6, 1, iParam7, bParam8, bParam9, bParam10, -1, 1103626240) };
	if (func_399(vVar0))
	{
		vVar0 = { func_729(vParam0, iParam3, iParam4, 0, 1, 1, iParam7, bParam8, 0, 0, -1, 1103626240) };
	}
	return vVar0;
}

void func_370(vector3 vParam0, int iParam3, var uParam4, int iParam5)
{
	Global_1310720->f_1 = { vParam0 };
	Global_40.f_9.f_10 = uParam4;
	Global_40.f_9.f_11 = iParam3;
	Global_40.f_9.f_12 = iParam5;
}

void func_371(vector3 vParam0)
{
	Global_40.f_9.f_7 = { vParam0 };
}

int func_372(vector3 vParam0, int iParam3)
{
	iVar0 = func_77();
	if (func_247(iVar0))
	{
		if (_0xf256a75210c5c0eb((*Global_1888801)[iVar0]->f_3, vParam0))
		{
			return iVar0;
		}
	}
	return func_730(vParam0, iParam3);
}

void func_373()
{
	func_731();
	func_732();
	func_733();
	_0x11b0a0b282fa9b10(0);
}

void func_374(struct<16> Param0, int iParam16)
{
	if (is_string_null_or_empty(&(Param0.f_10)))
	{
		return;
	}
	if (Global_1934603->f_161 >= 10)
	{
		return;
	}
	if (!func_734(iParam16, 2))
	{
		if (_get_number_of_references_of_script_with_name_hash(get_hash_key(&(Param0.f_10))) > 0 || func_735(&(Param0.f_10)))
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
			func_736(iParam16);
			return;
		}
		iVar0++;
	}
}

bool func_375(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_376(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_377()
{
	return Global_1572864->f_12;
}

void func_378(bool bParam0)
{
	if (func_499(Global_1935630->f_3))
	{
		return;
	}
	iVar0 = 1;
	Var1.f_2 = 4;
	Var1 = "HUD_PENALTY_SOUNDSET";
	Var1.f_1 = "HUD_FAIL";
	Var1.f_3 = func_737();
	Var1.f_3.f_3 = iVar0;
	if ((!func_738(Global_1347343->f_2) && !func_375(Global_1347343->f_11, 64)) || func_82(32768))
	{
		Var1.f_7 = func_739();
		Var1.f_7.f_3 = iVar0;
	}
	if (!func_375(Global_1347343->f_11, 1024) && !func_82(32768))
	{
		Var1.f_11 = func_740();
		Var1.f_11.f_3 = iVar0;
	}
	if (func_375(Global_1347343->f_11, 8))
	{
		Var1.f_15 = func_741();
		Var1.f_15.f_3 = iVar0;
	}
	if (Global_1347343->f_1 != 2)
	{
		Global_1935630->f_3 = func_742(&Var1, "REPLAY_T", &(Global_1347343->f_3), 0, 1);
	}
	else
	{
		Global_1935630->f_3 = func_743(&Var1, "REPLAY_T_DEAD", 0, 1);
	}
	set_player_invincible(player_id(), true);
	if (!is_ped_in_any_vehicle(Global_35, false) && !is_entity_attached(Global_35))
	{
		freeze_entity_position(Global_35, true);
	}
	func_376(&(Global_1347343->f_11), 1073741824);
	if (bParam0)
	{
		func_376(&(Global_1347343->f_11), 1048576);
	}
	_0x16e9abdd34ddd931();
}

void func_379(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	func_744(uParam0);
	iVar0 = func_745(uParam0, iParam1);
	if (bParam3)
	{
		if (is_string_null_or_empty(sParam2))
		{
			sParam2 = func_746(iParam1);
		}
		iVar0 = func_747(uParam0, sParam2);
		if (iVar0 == -1)
		{
			iVar0 = func_748(uParam0);
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
		iVar0 = func_748(uParam0);
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
	func_749(uParam0, 2);
}

void func_380(var uParam0, int iParam1)
{
	func_750(&(uParam0->f_7375), iParam1);
}

int func_381(var uParam0)
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

int func_382()
{
	return func_508(func_751());
}

void func_383(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < func_400())
	{
		func_752(uParam0, iVar0);
		iVar0++;
	}
}

int func_384(var uParam0)
{
	uParam0->f_607 = uParam0->f_607;
	return 1;
}

void func_385(var uParam0, var uParam1)
{
	uParam0->f_607 = uParam1;
}

void func_386(var uParam0)
{
	func_759(uParam0, 0, 1, 115836, 116048, 116057, 116250, 119421, func_758(0, 0), 16777218, 7);
	func_759(uParam0, 1, 2, 120165, 120245, 120544, 120588, 122590, "", 16777216, 7);
	func_759(uParam0, 2, 3, 122673, 122772, 122900, 122923, 124785, "", 16777216, 7);
	func_759(uParam0, 3, 4, 124805, 124931, 125219, 125239, 126530, "", 16777216, 7);
	func_759(uParam0, 4, 25, 126571, 126757, 126936, 126978, 129563, "", 0, 7);
	func_759(uParam0, 25, 26, 129582, 129682, 129747, 129793, 129814, func_758(1, 0), 18, 7);
	func_140(uParam0, 26, 16);
}

void func_387(var uParam0, vector3 vParam1)
{
	uParam0->f_5413 = { vParam1 };
}

void func_388()
{
	iVar0 = 0;
	while (iVar0 < iVar1079)
	{
		iLocal_1081[iVar0] = -1;
		iVar0++;
	}
	iVar1 = 4;
	while (iVar1 <= 56)
	{
		vLocal_295[iVar1]->f_2 = 67108863;
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 <= 80)
	{
		vLocal_295[iVar1]->f_1 = 0;
		iVar1++;
	}
	iVar1 = 81;
	while (iVar1 <= 99)
	{
		vLocal_295[iVar1]->f_1 = 1;
		iVar1++;
	}
	iVar1 = 100;
	while (iVar1 <= 105)
	{
		vLocal_295[iVar1]->f_1 = 2;
		iVar1++;
	}
	vLocal_216[0]->f_1 = 4;
	vLocal_216[1]->f_1 = 4;
	vLocal_216[2]->f_1 = 4;
	vLocal_216[3]->f_1 = 4;
	vLocal_216[4]->f_1 = 4;
	vLocal_216[5]->f_1 = 4;
	vLocal_216[6]->f_1 = 4;
	vLocal_216[7]->f_1 = 4;
	vLocal_216[8]->f_1 = 4;
	vLocal_216[9]->f_1 = 3;
	vLocal_216[10]->f_1 = 3;
	vLocal_216[11]->f_1 = 3;
	vLocal_216[12]->f_1 = 3;
	vLocal_216[13]->f_1 = 3;
	vLocal_216[14]->f_1 = 3;
	vLocal_216[15]->f_1 = 3;
	vLocal_216[16]->f_1 = 3;
	vLocal_216[17]->f_1 = 3;
	vLocal_216[18]->f_1 = 3;
	vLocal_216[19]->f_1 = 3;
	vLocal_216[20]->f_1 = 3;
	vLocal_216[21]->f_1 = 3;
	vLocal_216[22]->f_1 = 3;
	vLocal_216[23]->f_1 = 3;
	vLocal_216[24]->f_1 = 3;
	vLocal_216[25]->f_1 = 3;
}

void func_389()
{
	func_785(&(vLocal_1100[0]->f_2), 1);
	func_785(&(vLocal_1100[1]->f_2), 1);
}

bool func_390(int iParam0)
{
	iParam0 = func_266(iParam0);
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

void func_391(int iParam0, bool bParam1)
{
	iParam0 = func_266(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_59(iParam0);
	func_530(iParam0);
	func_531(iParam0);
	func_528(iParam0);
	if (func_529(iParam0))
	{
		iVar0 = get_id_of_this_thread();
		if (func_262(iParam0) != iVar0)
		{
			return;
		}
	}
	func_786(iParam0, 4);
	if (bParam1)
	{
		func_786(iParam0, 16);
	}
}

void func_392(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	clear_bit(Global_1934765->f_21[iVar1], iVar2);
}

void func_393(int iParam0, int iParam1)
{
	uVar0 = Global_1905944[iParam0];
	clear_bit(&uVar0, iParam1);
	(*Global_1905944)[iParam0] = uVar0;
}

bool func_394(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_395(var uParam0)
{
	if (!func_787(uParam0, 4))
	{
		if (func_788(uParam0->f_860, 16384))
		{
			animpostfx_play("CamTransition01");
		}
		vVar0 = { func_789(uParam0) };
		if (!func_788(uParam0->f_860, 524288))
		{
			func_790(&(uParam0->f_872));
		}
		func_791(&(uParam0->f_860), 0, 2, vVar0.x, vVar0.y, vVar0.z, 0);
		func_792(uParam0, 0f, 0f, 0f);
		func_793(uParam0);
		func_794(uParam0);
		func_795(uParam0, 0f, 0f, 0f, 0, 0);
		func_796(uParam0);
		func_750(uParam0, 4);
		func_797(uParam0, 0);
		func_798(&(Global_1946804->f_1497), Global_35, 1, 64, 1, 1, 1);
		if (_0x927b810e43e99932(&(uParam0->f_873)))
		{
			_0x0a5a4f1979abb40e(&(uParam0->f_873));
		}
	}
}

Vector3 func_396(int iParam0)
{
	if (func_799(iParam0))
	{
		return func_800(iParam0);
	}
	return (*Global_1835011)[iParam0]->f_18;
}

int func_397(vector3 vParam0, var uParam3)
{
	if (_0x1b065a2bf7953815(0) != 1)
	{
		func_511(0, 1);
	}
	else
	{
		return 0;
	}
	iVar0 = func_801(Global_35, 0, 2, 0);
	if (!is_weapon_valid(iVar0))
	{
		iVar0 = func_802(0, 0);
		if (func_441(iVar0))
		{
			set_current_ped_weapon(Global_35, iVar0, true, 2, false, false);
			func_803(1, 0);
		}
	}
	else
	{
		func_803(1, 0);
	}
	func_210(0);
	func_512(0, vParam0, uParam3);
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
	if (!func_190(iParam0))
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
		func_804((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_403(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 40)
	{
		func_805((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_404(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 20)
	{
		func_806((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_405(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 14)
	{
		func_807((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_406(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 60)
	{
		func_808((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_407(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 10)
	{
		func_809((*uParam0)[iVar0]);
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
		func_810((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_410(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 3)
	{
		func_811((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_411(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		func_812((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_412(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		func_813((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_413(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		func_814((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_414(var uParam0, int iParam1, int iParam2)
{
	if (func_120(uParam0, 2097152))
	{
		return;
	}
	iVar0 = func_815(&(uParam0->f_638), iParam1);
	if (iVar0 == -1)
	{
		iVar0 = func_816(&(uParam0->f_638));
	}
	if (iVar0 == -1)
	{
		return;
	}
	uParam0->f_638[iVar0] = iParam1;
	uParam0->f_638[iVar0]->f_2 = (uParam0->f_638[iVar0]->f_2 || iParam2);
}

int func_415(int iParam0)
{
	Var0 = { func_817(iParam0) };
	return Var0.f_6;
}

void func_416(int iParam0, int iParam1)
{
	func_818(iParam0, iParam1);
}

void func_417(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, int iParam12)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_819((*uParam0)[iVar0]))
		{
			if (func_820((*uParam0)[iVar0]->f_2, iParam12))
			{
				func_821((*uParam0)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (func_822((*uParam1)[iVar0]))
		{
			if (func_820((*uParam1)[iVar0]->f_4, iParam12))
			{
				func_823((*uParam1)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam2)
	{
		if (func_824((*uParam2)[iVar0]))
		{
			if (func_820((*uParam2)[iVar0]->f_2, iParam12))
			{
				func_825((*uParam2)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam3)
	{
		if (func_826((*uParam3)[iVar0]))
		{
			if (func_820((*uParam3)[iVar0]->f_2, iParam12))
			{
				func_827((*uParam3)[iVar0]);
			}
		}
		iVar0++;
	}
	if (func_820(uParam4->f_1, iParam12))
	{
		func_828(uParam4);
	}
	iVar0 = 0;
	while (iVar0 < *uParam5)
	{
		if (func_829((*uParam5)[iVar0]))
		{
			if (func_820((*uParam5)[iVar0]->f_3, iParam12))
			{
				func_830((*uParam5)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam5)
	{
		if (func_829((*uParam5)[iVar0]))
		{
			iVar1 = 0;
			while (iVar1 < 20)
			{
				if (func_831((*uParam5)[iVar0]->f_4[iVar1]))
				{
					if (func_820((*uParam5)[iVar0]->f_4[iVar1]->f_2, iParam12))
					{
						func_832((*uParam5)[iVar0]->f_4[iVar1], (*uParam5)[iVar0]->f_1);
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
		if (func_833((*uParam6)[iVar0]))
		{
			if (func_820((*uParam6)[iVar0]->f_3, iParam12))
			{
				func_834((*uParam6)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam7)
	{
		if (func_835((*uParam7)[iVar0]))
		{
			if (func_820((*uParam7)[iVar0]->f_4, iParam12))
			{
				func_836((*uParam7)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam8)
	{
		if (func_837((*uParam8)[iVar0]))
		{
			if (func_820((*uParam8)[iVar0]->f_2, iParam12))
			{
				func_838((*uParam8)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam9)
	{
		if (func_839((*uParam9)[iVar0]))
		{
			if (func_820((*uParam9)[iVar0]->f_2, iParam12))
			{
				func_840((*uParam9)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam10)
	{
		if (func_841((*uParam10)[iVar0]))
		{
			if (func_820((*uParam10)[iVar0]->f_3, iParam12))
			{
				func_842((*uParam10)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam11)
	{
		if (func_843((*uParam11)[iVar0]))
		{
			if (func_820((*uParam11)[iVar0]->f_2, iParam12))
			{
				func_844((*uParam11)[iVar0]);
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
	if (func_845(uParam0, iParam1, sParam2))
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

void func_422(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	func_846(&(uParam0->f_7375), iParam1, sParam2, iParam3, iParam4, bParam5);
	func_379(&(uParam0->f_10792), iParam1, sParam2, bParam6);
}

bool func_423(var uParam0, int iParam1, bool bParam2)
{
	iVar0 = 1;
	if (bParam2 && func_23(&(uParam0->f_8269)))
	{
		if (!func_121(uParam0, iParam1, 268435456))
		{
			MemCopy(&cVar1, {func_847(uParam0->f_607)}, 3);
			if (func_848(&(uParam0->f_8269), &cVar1, 0, func_132(iParam1), 1, 0))
			{
				if (func_24(&(uParam0->f_8269)))
				{
					func_849(&(uParam0->f_8269));
				}
				func_140(uParam0, iParam1, 268435456);
			}
			else
			{
				iVar0 = 0;
			}
		}
	}
	if (!func_850(&(uParam0->f_638), &(uParam0->f_819), &(uParam0->f_1020), &(uParam0->f_1081), &(uParam0->f_1124), &(uParam0->f_1126), &(uParam0->f_5147), &(uParam0->f_5188), &(uParam0->f_5239), &(uParam0->f_5249), &(uParam0->f_5265), &(uParam0->f_5286), iParam1))
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
		if (func_829((*uParam0)[iVar0]))
		{
			if (func_820((*uParam0)[iVar0]->f_3, iParam1))
			{
				if ((*uParam0)[iVar0]->f_65 > 0f || func_851((*uParam0)[iVar0]->f_2, 4))
				{
					if (!func_852((*uParam0)[iVar0]))
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

int func_425(var uParam0)
{
	return uParam0->f_596;
}

bool func_426(var uParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, int iParam5)
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
	iVar0 = func_853(func_61(uParam0));
	if (!func_29())
	{
		vVar2 = { func_126(uParam0->f_607) };
	}
	if (func_854(uParam0, iVar0, &uVar1, bParam1, vVar2.x, vVar2.y, vVar2.z, 0, bParam2, iParam3, bParam4, iParam5, 1, 0))
	{
		uParam0->f_5408 = uVar1;
		return true;
	}
	return false;
}

bool func_427(var uParam0, bool bParam1, var uParam2, var uParam3, var uParam4, float fParam5, int iParam6, int iParam7, int iParam8)
{
	if (does_entity_exist(uParam0->f_5411))
	{
		if (!func_120(uParam0, 16777216))
		{
			if (!func_855(uParam0))
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
				iVar12 = func_856(&iVar11, &Var0);
				if (iVar11 != 0)
				{
					func_103(uParam0, 16777216);
					if (iVar11 == 2 && !is_entity_dead(iVar12))
					{
						if (iVar12 == uParam0->f_5411)
						{
							func_103(uParam0, 16777216);
						}
						else if (func_857(iVar12, uParam0->f_5411, 5f, 1))
						{
							if (func_858(iVar12))
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
		if (func_859(&iVar17, func_125(uParam0), vVar14, 0f, 0, 0, 1, 1, 1))
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
		iVar13 = func_856(&iVar29, &Var18);
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
		func_860(uParam0, bParam1);
		if (!func_120(uParam0, 256))
		{
			if (!func_120(uParam0, 32768))
			{
				vVar14.x = uParam2;
				vVar14.f_1 = uParam3;
				vVar14.f_2 = uParam4;
				if ((!func_858(iVar13) || func_861(Global_35, iVar13, 1, 1) > 200f) && !func_399(vVar14))
				{
					if (!func_29())
					{
						freeze_entity_position(iVar13, false);
						func_862(iVar13, vVar14, fParam5, 2, 1073741824);
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

void func_428(var uParam0)
{
	if (!func_120(uParam0, 32) && func_128(uParam0, 3))
	{
		if (func_863(uParam0->f_607, &iVar0, &uVar1))
		{
			set_clock_time(iVar0, 0, 0);
			func_103(uParam0, 32);
		}
	}
	if (!func_120(uParam0, 32))
	{
		if (func_864(&(uParam0->f_609), uParam0->f_607))
		{
			func_103(uParam0, 32);
		}
	}
}

void func_429(var uParam0)
{
	if (!func_120(uParam0, 128))
	{
		if (func_120(uParam0, 16384))
		{
			func_865(uParam0);
			if (func_866(uParam0))
			{
				func_51(&(uParam0->f_10792));
				func_867(uParam0, 2097152);
				func_265(uParam0, 16384);
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
			func_865(uParam0);
			MemCopy(&Var0, {func_155(func_61(uParam0))}, 4);
			if (func_868(uParam0, Var0))
			{
				if (func_425(uParam0) != 4)
				{
					do_screen_fade_out(0);
				}
				func_103(uParam0, 128);
			}
		}
		else
		{
			if (func_425(uParam0) != 4)
			{
				do_screen_fade_out(1);
			}
			func_103(uParam0, 128);
		}
	}
}

void func_430(var uParam0, int iParam1)
{
	uParam0->f_596 = iParam1;
}

bool func_431(var uParam0)
{
	iVar0 = 1;
	if (!func_869(uParam0))
	{
		iVar0 = 0;
	}
	if (!func_426(uParam0, func_128(uParam0, 3), !func_8(uParam0, 2097152), uParam0->f_5410, !func_8(uParam0, 32), 0))
	{
		iVar0 = 0;
	}
	if (!func_427(uParam0, 1, uParam0->f_5413, uParam0->f_5413.f_1, uParam0->f_5413.f_2, uParam0->f_5416, 1, 1, 1))
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
		MemCopy(&cVar1, {func_847(uParam0->f_607)}, 3);
		if (func_870(&(uParam0->f_8269), &cVar1, 0, 1, 1))
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
		if (func_871(&(uParam0->f_13115)) < 30f)
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

bool func_432(var uParam0)
{
	bVar0 = (_has_player_teleport_finished(player_id()) || !is_player_teleport_active());
	if (func_871(&(uParam0->f_603)) >= uParam0->f_13144)
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		if (is_player_teleport_active())
		{
			stop_player_teleport();
		}
		if ((func_82(32768) && func_872()) && func_871(&(uParam0->f_603)) < (uParam0->f_13144 + 10f))
		{
			return false;
		}
		if (func_120(uParam0, 8) && is_valid_interior(get_interior_at_coords(func_126(uParam0->f_607))))
		{
			unpin_interior(get_interior_at_coords(func_126(uParam0->f_607)));
			func_265(uParam0, 8);
		}
		_set_milliseconds_per_game_minute(2000);
		func_873(0, 0);
		func_265(uParam0, 4096);
		return true;
	}
	return false;
}

bool func_433(var uParam0)
{
	bVar0 = true;
	if (!func_166(3))
	{
		if (!func_872() || func_871(vLocal_614[2]) >= 10f)
		{
			func_439(3);
			if (!func_166(2))
			{
				func_874();
				func_875();
				func_874();
				func_439(2);
			}
		}
		else
		{
			func_27(vLocal_614[2], 0);
			bVar0 = false;
		}
	}
	if (!func_166(9))
	{
		if (!func_876(func_33(uParam0)))
		{
			bVar0 = false;
		}
	}
	if (!bVar0)
	{
		return false;
	}
	iVar1 = func_877(uParam0);
	if (!iVar1 == 0)
	{
		if (!func_169(1))
		{
			bVar0 = false;
		}
	}
	if (!vLocal_808[1]->f_2 == 6)
	{
		func_879(uParam0, 1, (iVar1 == 0 && func_33(uParam0) == 0), 1, func_878(1, 0, func_33(uParam0)), 1);
		bVar0 = false;
	}
	if (!vLocal_808[2]->f_2 == 6)
	{
		func_879(uParam0, 2, (iVar1 == 0 && func_33(uParam0) == 0), 1, func_878(2, 0, func_33(uParam0)), 1);
		bVar0 = false;
	}
	if (vLocal_808[1]->f_2 == 6)
	{
		if (!vLocal_808[4]->f_1 == 1)
		{
			vLocal_808[4] = func_881(func_880(1), 1, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0);
			if (!does_entity_exist(&(vLocal_808[4])))
			{
				bVar0 = false;
			}
			else
			{
				set_entity_coords(&(vLocal_808[4]), -1457.4f, -1461.6f, 91.8f, true, false, true, true);
				vLocal_808[4]->f_1 = 1;
			}
		}
	}
	if (vLocal_808[2]->f_2 == 6)
	{
		if (!vLocal_808[5]->f_1 == 1)
		{
			vLocal_808[5] = func_881(func_880(2), 1, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0);
			if (!does_entity_exist(&(vLocal_808[5])))
			{
				bVar0 = false;
			}
			else
			{
				set_entity_coords(&(vLocal_808[5]), -1455f, -1465.1f, 91.1f, true, false, true, true);
				vLocal_808[5]->f_1 = 1;
			}
		}
	}
	if (func_33(uParam0) == 0 || func_33(uParam0) == 1)
	{
		if (!func_882())
		{
			bVar0 = false;
		}
	}
	if (!bVar0)
	{
		return false;
	}
	if (!func_166(17))
	{
		func_883(&(vLocal_808[2]), &uLocal_904);
		remove_all_ped_weapons(&(vLocal_808[2]), true, true);
		func_439(17);
	}
	switch (func_33(uParam0))
	{
		case 0:
			iVar3 = 2;
			iVar4 = 4;
			break;
		case 1:
			iVar3 = 4;
			iVar4 = 7;
			break;
		case 2:
			iVar3 = 7;
			iVar4 = 7;
			break;
		case 3:
			iVar3 = 12;
			iVar4 = 14;
			break;
		case 4:
			iVar3 = 13;
			iVar4 = 14;
			break;
	}
	iVar2 = iVar3;
	while (iVar2 <= iVar4)
	{
		if (func_884(vLocal_1100[iVar2]->f_2, 1))
		{
		}
		else
		{
			func_885(uParam0, iVar2);
			if (!vLocal_1100[iVar2]->f_1 == 4)
			{
				bVar0 = false;
			}
		}
		iVar2++;
	}
	if (!bVar0)
	{
		return false;
	}
	_0x95ee1dee1dcd9070(player_id(), 0);
	func_145(uParam0, Global_35, "JOHN", 0);
	pause_clock(true, 0);
	func_887(uParam0, 149948);
	func_889(uParam0, 150119);
	vLocal_808[0] = Global_35;
	set_ped_can_leg_ik(Global_35, false);
	set_ped_can_leg_ik(&(vLocal_808[2]), false);
	set_ped_leg_ik_mode(Global_35, 0);
	set_ped_leg_ik_mode(&(vLocal_808[2]), 0);
	if (func_33(uParam0) == 0)
	{
		func_890(iVar1086, 100);
	}
	func_182();
	uLocal_902 = _0xfa50f79257745e74(-1664.1f, -1344.1f, 83.4f, 5f, 1, 258, 0);
	vVar5 = { func_878(3, 0, 0) };
	vLocal_808[3] = func_892(func_444(func_891(3)), vVar5, 0, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
	vLocal_808[3]->f_1 = 1;
	set_entity_invincible(&(vLocal_808[3]), true);
	set_blocking_of_non_temporary_events(&(vLocal_808[3]), true);
	freeze_entity_position(&(vLocal_808[3]), true);
	return true;
}

void func_434(var uParam0, int iParam1)
{
	func_66(iParam1);
	uParam0->f_10783 = iParam1;
}

bool func_435(var uParam0)
{
	func_893(uParam0);
	func_894(uParam0);
	iVar0 = func_33(uParam0);
	iVar1 = func_35(uParam0);
	iVar2 = func_162(uParam0, iVar0);
	if (func_8(uParam0, 2097152))
	{
		if (iVar2 == 7 || iVar2 < 3)
		{
			func_866(uParam0);
		}
	}
	func_895(uParam0);
	func_896(uParam0);
	func_897(uParam0);
	func_898(uParam0);
	func_899(uParam0);
	func_900(uParam0);
	if (iVar2 != 5 && iVar2 != 6)
	{
		func_901(uParam0);
	}
	if ((func_33(uParam0) == 0 && iVar2 < 3) && func_279(uParam0) == 0)
	{
		func_429(uParam0);
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
			if (func_902(uParam0, iVar0, 0))
			{
				if (func_903(uParam0, func_33(uParam0)) != -1 && _0x62de46f061caa468() < func_903(uParam0, func_33(uParam0)))
				{
					_0xf008e0ba1fe1d644((func_903(uParam0, func_33(uParam0)) - _0x62de46f061caa468()));
				}
				if ((func_33(uParam0) == 25 || func_33(uParam0) == 26) && func_82(32768))
				{
					func_380(uParam0, 524288);
				}
				if (func_120(uParam0, 4))
				{
					if (!func_8(uParam0, 4))
					{
						func_904(uParam0, iVar0);
						func_99(uParam0, 4);
					}
					func_905(uParam0);
					func_906(uParam0, iVar0, 1);
				}
				else
				{
					func_906(uParam0, iVar0, 1);
				}
			}
			break;
		case 1:
			if (func_869(uParam0))
			{
				if (func_907(uParam0))
				{
					if (func_8(uParam0, 4))
					{
						func_867(uParam0, 4);
					}
					func_906(uParam0, iVar0, 2);
				}
			}
			else if (func_908(uParam0) >= uParam0->f_13144)
			{
				if (func_8(uParam0, 4))
				{
					func_867(uParam0, 4);
				}
				func_906(uParam0, iVar0, 2);
			}
			break;
		case 2:
			if (func_902(uParam0, iVar0, 2))
			{
				if (!func_909(uParam0))
				{
					func_906(uParam0, iVar0, 4);
					if (func_910(uParam0, iVar0, iVar1))
					{
						func_906(uParam0, iVar0, 5);
					}
				}
				else
				{
					func_911(uParam0);
					func_906(uParam0, iVar0, 3);
					if (func_912(uParam0, iVar0))
					{
						func_906(uParam0, iVar0, 4);
						if (func_910(uParam0, iVar0, iVar1))
						{
							func_906(uParam0, iVar0, 5);
						}
					}
				}
			}
			else if (func_913(uParam0))
			{
				func_912(uParam0, iVar0);
			}
			break;
		case 3:
			if (func_912(uParam0, iVar0))
			{
				func_906(uParam0, iVar0, 4);
				if (func_910(uParam0, iVar0, iVar1))
				{
					func_906(uParam0, iVar0, 5);
				}
			}
			break;
		case 4:
			if (func_910(uParam0, iVar0, iVar1))
			{
				func_906(uParam0, iVar0, 5);
			}
			break;
		case 5:
			if (!func_20() == 0)
			{
				func_914(uParam0);
				func_915(uParam0, iVar0);
				func_916(uParam0);
				func_917(uParam0);
				if (func_121(uParam0, iVar1, 2))
				{
					if (func_918(uParam0, iVar1))
					{
						func_919(uParam0, iVar1);
					}
				}
			}
			if (func_902(uParam0, iVar0, 5))
			{
				if (func_902(uParam0, iVar0, 7))
				{
					if (!func_121(uParam0, func_33(uParam0), 67108864))
					{
						func_920(uParam0, func_33(uParam0));
					}
					func_921(uParam0, iVar1);
					func_894(uParam0);
					return true;
				}
				else
				{
					func_906(uParam0, iVar0, 7);
				}
			}
			else
			{
				if (!func_121(uParam0, func_33(uParam0), 4194304))
				{
					if ((!is_screen_faded_in() && !is_screen_fading_in()) && !func_121(uParam0, func_33(uParam0), 16))
					{
						do_screen_fade_in(0);
						func_922(0);
					}
					func_140(uParam0, func_33(uParam0), 4194304);
				}
				if ((func_923(get_player_index(), 0, 0, 1) && !func_120(uParam0, 8192)) && !func_121(uParam0, func_33(uParam0), 8))
				{
					func_47(1, 0);
					func_924("MISSION_WANTED", 7500, 0, 1, 0, 0, -1, -1, 0);
					if (func_925(uParam0))
					{
						func_906(uParam0, iVar0, 6);
					}
				}
				if (func_8(uParam0, 268435456))
				{
					if (_0x1b065a2bf7953815(1) != 1)
					{
						func_36(uParam0, func_34(iVar0), func_34(iVar1), iVar0, iVar1);
						func_867(uParam0, 268435456);
					}
				}
				if (func_120(uParam0, 1048576))
				{
					if (func_127(func_34(0)))
					{
						func_265(uParam0, 1048576);
					}
				}
			}
			break;
		case 6:
			if (!func_20() == 0)
			{
				func_914(uParam0);
				func_915(uParam0, iVar0);
				func_916(uParam0);
				func_917(uParam0);
				if (func_121(uParam0, func_35(uParam0), 2))
				{
					if (func_918(uParam0, func_35(uParam0)))
					{
						func_919(uParam0, func_35(uParam0));
					}
				}
			}
			if ((!func_923(get_player_index(), 0, 0, 1) || func_120(uParam0, 8192)) || func_121(uParam0, func_33(uParam0), 8))
			{
				if (func_902(uParam0, iVar0, 5))
				{
					if (func_926(uParam0))
					{
						func_906(uParam0, iVar0, 7);
					}
				}
				else
				{
					func_926(uParam0);
					func_906(uParam0, iVar0, 5);
				}
			}
			else
			{
				func_902(uParam0, iVar0, 5);
				func_927(uParam0);
			}
			break;
		case 7:
			if (func_902(uParam0, iVar0, 7))
			{
				if (!func_121(uParam0, func_33(uParam0), 67108864))
				{
					func_920(uParam0, func_33(uParam0));
				}
				func_921(uParam0, iVar1);
				func_894(uParam0);
				return true;
			}
			break;
		default:
			func_906(uParam0, iVar0, 7);
			break;
	}
	return false;
}

int func_436(int iParam0)
{
	return floor(pow(2f, to_float(iParam0)));
}

bool func_437(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_438(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
}

void func_439(int iParam0)
{
	iVar0 = iParam0;
	while (iVar0 >= 32)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	func_818(uLocal_213[iVar1], func_436(iVar0));
}

void func_440(int iParam0, bool bParam1)
{
	if (!does_entity_exist(&(iLocal_666[iParam0])))
	{
		if (bParam1)
		{
		}
		return;
	}
	delete_object(iLocal_666[iParam0]);
	iLocal_666[iParam0] = 0;
}

bool func_441(int iParam0)
{
	return (is_weapon_valid(iParam0) && iParam0 != -1569615261);
}

void func_442(int iParam0, var uParam1, bool bParam2)
{
	iVar0 = 0;
	while (iVar0 < 45)
	{
		iVar1 = func_928(iVar0);
		if (func_583(iVar1, 0))
		{
			if (uParam1[iVar0] > 0)
			{
				if (bParam2)
				{
					_add_ammo_to_ped_by_type(iParam0, iVar1, uParam1[iVar0], 752097756);
				}
				else
				{
					_add_ammo_to_ped_by_type(iParam0, iVar1, (uParam1[iVar0] - get_ped_ammo_by_type(iParam0, iVar1)), 752097756);
				}
			}
		}
		iVar0++;
	}
}

void func_443(var uParam0, int iParam1, char* sParam2)
{
	if (iParam1 == 0)
	{
		return;
	}
	if (does_entity_exist(&(vLocal_808[iParam1])) && !is_entity_dead(&(vLocal_808[iParam1])))
	{
		if (is_entity_a_mission_entity(&(vLocal_808[iParam1])))
		{
			if (does_entity_belong_to_this_script(&(vLocal_808[iParam1]), true))
			{
				func_929(uParam0, &(vLocal_808[iParam1]));
				func_930(&(uParam0->f_7375), &(vLocal_808[iParam1]), 0);
				if (_does_anim_scene_exist(uParam0->f_7375.f_804))
				{
					if (!is_string_null_or_empty(sParam2))
					{
						if (_0x6f1f0b17109309da(uParam0->f_7375.f_804, sParam2))
						{
							remove_anim_scene_entity(uParam0->f_7375.f_804, sParam2, &(vLocal_808[iParam1]));
						}
					}
				}
				if (func_880(iParam1) == -1)
				{
					delete_ped(vLocal_808[iParam1]);
				}
				else
				{
					set_entity_invincible(&(vLocal_808[iParam1]), false);
					func_259(uParam0, func_880(iParam1), &(vLocal_808[iParam1]), 0, 1, 1, 0);
				}
				vLocal_808[iParam1]->f_1 = 0;
				func_931(iParam1, 0);
			}
		}
	}
	else
	{
		vLocal_808[iParam1]->f_1 = 0;
		func_931(iParam1, 0);
	}
}

int func_444(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -969464097;
		case 1:
			return 1407031519;
		case 2:
			return 1582986780;
		case 3:
			return -283162583;
		case 4:
			return -1491644197;
		case 5:
			return 14451816;
		case 6:
			return 311994336;
		case 7:
			return -531446955;
		case 8:
			return -165810453;
		case 9:
			return 1943693922;
		case 10:
			return 1503933942;
		case 11:
			return 658133283;
		case 12:
			return 1024949469;
		case 13:
			return 982969088;
		case 14:
			return 140543636;
		case 15:
			return -2058944417;
		case 16:
			return -1406240499;
		case 17:
			return -636103453;
		case 18:
			return -1095105300;
		case 19:
			return 111678663;
		case 20:
			return 551045415;
		case 21:
			return 1795906956;
		case 22:
			return 1964798382;
		case 23:
			return 1248468042;
		case 24:
			return -574045783;
		case 25:
			return 888041459;
		case 26:
			return -1028715658;
		case 27:
			return 386511914;
		case 28:
			return 686053343;
		case 29:
			return 1589265290;
		case 30:
			return -1247513451;
		case 31:
			return -30702174;
		case 32:
			return 203628945;
		case 33:
			return 1754061415;
		case 34:
			return 1858528987;
		case 35:
			return -692701512;
		case 36:
			return -454044885;
		case 37:
			return 1313613062;
		case 38:
			return -1801899617;
		case 39:
			return -1426104725;
		case 40:
			return 16910959;
		case 41:
			return 381367777;
		case 42:
			return 1146330525;
		case 43:
			return -578596866;
		case 44:
			return -349902015;
		case 45:
			return -1344047941;
		case 46:
			return 2107215912;
		case 47:
			return 380256843;
		case 48:
			return 840988983;
		case 49:
			return -1944146990;
		case 50:
			return 1175363507;
		case 51:
			return 1950383126;
		case 52:
			return -1746746534;
		case 53:
			return -906254449;
		case 54:
			return 2069367365;
		case 55:
			return -1383731552;
		case 56:
			return 1092425252;
		case 57:
			return 1540392720;
		case 58:
			return -688732076;
		case 59:
			return -422220273;
		case 60:
			return 489321407;
		case 61:
			return 49263610;
		case 62:
			return 1999074085;
		case 63:
			return 133961016;
		case 64:
			return 1408547491;
		case 65:
			return 1286899977;
		case 66:
			return 1336128411;
		case 67:
			return 959584293;
		case 68:
			return 138162884;
		case 69:
			return -1542030359;
		case 70:
			return 1176943507;
		case 71:
			return -737796731;
		case 72:
			return 1349028497;
		case 73:
			return 1907611;
		case 74:
			return 959905628;
		case 75:
			return 1539235365;
		case 76:
			return 155756109;
		case 77:
			return -212731652;
		case 78:
			return -806211199;
		case 79:
			return 1935100224;
		case 80:
			return -1054898448;
	}
	return 0;
}

char* func_445(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 81:
			if (bParam1)
			{
				return "amb_work@world_human_hammer_kneel_stakes@male@male_a@base";
			}
			else
			{
				return "base";
			}
			break;
		case 82:
			if (bParam1)
			{
				return "AMB_REST_SIT@WORLD_HUMAN_SIT_GROUND@FALL_ASLEEP@MALE_A@TIRED@base";
			}
			else
			{
				return "base";
			}
			break;
		case 83:
			if (bParam1)
			{
				return "amb_rest@prop_human_sleep_bed@pillow@male_a@base";
			}
			else
			{
				return "base";
			}
			break;
		case 84:
			if (bParam1)
			{
				return "amb_rest@prop_human_sleep_bed@pillow@male_a@react_look@enter@high";
			}
			else
			{
				return "react_look_backright_enter";
			}
			break;
		case 85:
			if (bParam1)
			{
				return "amb_rest@prop_human_sleep_bed@pillow@male_a@react_look@exit@dismissive";
			}
			else
			{
				return "react_look_backright_exit";
			}
			break;
		case 86:
			if (bParam1)
			{
				return "AMB_REST_DRUNK@PROP_HUMAN_SEAT_BENCH@PORCH@DRINKING@male_b@base";
			}
			else
			{
				return "base";
			}
			break;
		case 87:
			if (bParam1)
			{
				return "amb_rest_lean@world_human_lean@railing@male_a@react_look@exit@dismissive";
			}
			else
			{
				return "react_look_front_exit";
			}
			break;
		case 88:
			if (bParam1)
			{
				return "AMB_REST_LEAN@WORLD_HUMAN_LEAN@RAILING@MALE_A@react_look@enter@high";
			}
			else
			{
				return "react_look_backright_enter";
			}
			break;
		case 89:
			if (bParam1)
			{
				return "amb_work@prop_human_wood_chop@pre_chop@male_a@base";
			}
			else
			{
				return "base";
			}
			break;
		case 90:
			if (bParam1)
			{
				return "mini_games@story@beechers@build_foundations@john";
			}
			else
			{
				return "";
			}
			break;
		case 91:
			if (bParam1)
			{
				return "mini_games@story@beechers@build_foundations@charles";
			}
			else
			{
				return "";
			}
			break;
		case 92:
			if (bParam1)
			{
				return "mini_games@story@beechers@build_floor@john";
			}
			else
			{
				return "";
			}
			break;
		case 93:
			if (bParam1)
			{
				return "MINI_GAMES@STORY@BEECHERS@FRAMING_WALL@JOHN";
			}
			else
			{
				return "";
			}
			break;
		case 94:
			if (bParam1)
			{
				return "MINI_GAMES@STORY@BEECHERS@FRAMING_WALL@CHARLES";
			}
			else
			{
				return "";
			}
			break;
		case 95:
			if (bParam1)
			{
				return "MINI_GAMES@STORY@BEECHERS@FRAMING_WALL@UNCLE";
			}
			else
			{
				return "";
			}
			break;
		case 96:
			if (bParam1)
			{
				return "MINI_GAMES@STORY@BEECHERS@FRAMING_WALL@WALL";
			}
			else
			{
				return "";
			}
			break;
		case 97:
			if (bParam1)
			{
				return "MINI_GAMES@STORY@BEECHERS@BUILD_WALL_PANNELS";
			}
			else
			{
				return "";
			}
			break;
		case 98:
			if (bParam1)
			{
				return "MINI_GAMES@STORY@BEECHERS@BUILD_ROOF@JOHN";
			}
			else
			{
				return "";
			}
			break;
		case 99:
			if (bParam1)
			{
				return "MINI_GAMES@STORY@BEECHERS@BUILD_ROOF@JOHN_PART2";
			}
			else
			{
				return "";
			}
			break;
	}
	return "BE22 Unhandled";
}

char* func_446(int iParam0)
{
	switch (iParam0)
	{
		case 100:
			return "Script_BE22_Foundations";
		case 101:
			return "script_beechers_floor_building";
		case 102:
			return "script_BE22_wall_lifting";
		case 103:
			return "script_be22_wallpannels";
		case 104:
			return "script_be22_buildroof";
		case 105:
			return "script_be22_buildroof_part2";
	}
	return "";
}

int func_447()
{
	if (!func_933(-1898635967, func_932(), 1))
	{
		return 0;
	}
	if (func_338())
	{
		if (!func_933(146323340, func_932(), 0))
		{
			return 0;
		}
	}
	return 1;
}

void func_448(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (bParam4)
	{
		fParam1 = func_452(iParam0, fParam1, 1);
	}
	func_935(iParam0, (func_934(iParam0, 2) + fParam1), bParam2, bParam3, 1, 2);
}

float func_449(int iParam0)
{
	return &(Global_40.f_11095[iParam0]);
}

void func_450(float fParam0)
{
	if (fParam0 >= (100f - 1f))
	{
		play_sound_frontend("Core_Full", "Consumption_Sounds", true, 0);
	}
	else
	{
		play_sound_frontend("Core_Fill_Up", "Consumption_Sounds", true, 0);
	}
}

void func_451()
{
	Global_40.f_11095.f_11[14] = 100f;
	set_attribute_points(Global_35, 14, 100);
	Global_40.f_11095.f_42 = 60;
}

float func_452(int iParam0, float fParam1, bool bParam2)
{
	iVar0 = func_285();
	func_936(&iVar0, 0, 0, 0, 1, 0, 0);
	iVar1 = func_937(iParam0, 2);
	if (func_939(iVar0, func_938(iParam0, 2), 1))
	{
		func_940(iParam0, 0, 2);
		iVar1 = 0;
	}
	if (iVar1 >= 2)
	{
		func_325(88, bParam2);
		return 0f;
	}
	func_941(iParam0, func_285(), 2);
	func_940(iParam0, iVar1 + 1, 2);
	return fParam1;
}

float func_453(float fParam0, float fParam1, float fParam2)
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

void func_454(int iParam0, float fParam1, bool bParam2)
{
	if (func_20() != -1)
	{
		return;
	}
	if (!func_605(15))
	{
		return;
	}
	Global_40.f_11095[iParam0] = fParam1;
	iVar0 = func_942(ceil(&(Global_40.f_11095[iParam0])));
	_set_attribute_core_value(Global_35, func_943(iParam0), iVar0);
	func_945(func_944(iParam0), (100f * (to_float(iVar0) / 100f)), 0);
	if (((fParam1 <= func_946(15) && iParam0 == 1) && is_ped_on_foot(Global_35)) && !is_ped_swimming(Global_35))
	{
		func_325(84, 1);
	}
	if (fParam1 <= -99.999f)
	{
		func_325(func_947(iParam0), 1);
	}
	sVar1 = func_948(iParam0);
	if (!is_string_null_or_empty(sVar1))
	{
		_0x437c08db4febe2bd(Global_35, sVar1, to_float(iVar0), -1);
	}
}

void func_455(int iParam0)
{
	if (_is_imap_active(iParam0))
	{
		_remove_imap(iParam0);
	}
}

void func_456(int iParam0)
{
	if (!_is_imap_active(iParam0))
	{
		_request_imap(iParam0);
	}
}

void func_457(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2)
	{
	}
	switch (iParam0)
	{
		case 1497516462:
			func_949(1497516462);
			func_950(2016141805);
			func_950(1010885152);
			func_950(-502324015);
			break;
		case 2016141805:
			func_950(1497516462);
			func_949(2016141805);
			func_950(1010885152);
			func_950(-502324015);
			break;
		case 1010885152:
			func_950(1497516462);
			func_950(2016141805);
			func_949(1010885152);
			func_950(-502324015);
			break;
		case -502324015:
			func_950(1497516462);
			func_950(2016141805);
			func_950(1010885152);
			func_949(-502324015);
			break;
		case -1056767524:
		case -538889627:
		case -538880323:
			func_950(-538889627);
			func_950(-538880323);
			func_950(-1056767524);
			func_949(iParam0);
			break;
		case -2038424081:
		case -1187950766:
		case -939420910:
		case 356365161:
		case 459290420:
		case 753127042:
		case 1884271742:
			func_951();
			func_949(iParam0);
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
			func_952();
			func_949(iParam0);
			break;
		case 2019386373:
			func_950(-664252410);
			func_950(2109952320);
			func_949(2019386373);
			break;
		case -664252410:
			func_950(2019386373);
			func_950(2109952320);
			func_949(-664252410);
			break;
		case 2109952320:
			func_950(2019386373);
			func_950(-664252410);
			func_949(2109952320);
			break;
		case -1674179981:
			func_950(-1835851517);
			func_950(-1838352012);
			func_949(-1674179981);
			break;
		case -1835851517:
			func_950(-1674179981);
			func_950(-1838352012);
			func_949(-1835851517);
			break;
		case -1838352012:
			func_950(-1674179981);
			func_950(-1835851517);
			func_949(-1838352012);
			break;
		case -1717960576:
			func_950(210001842);
			func_949(-1717960576);
			break;
		case 210001842:
			func_950(-1717960576);
			func_949(210001842);
			break;
		case -150493654:
			func_950(-1271608261);
			func_950(1846061697);
			func_950(-1145519186);
			func_949(-150493654);
			break;
		case -1271608261:
			func_950(-150493654);
			func_950(1846061697);
			func_950(-1145519186);
			func_949(-1271608261);
			break;
		case 1846061697:
			func_950(-150493654);
			func_950(-1271608261);
			func_950(-1145519186);
			func_949(1846061697);
			break;
		case -1145519186:
			func_950(-150493654);
			func_950(-1271608261);
			func_950(1846061697);
			func_949(-1145519186);
			break;
		case 1766284049:
			func_950(280705402);
			func_950(1926308480);
			func_949(1766284049);
			break;
		case 280705402:
			func_950(1766284049);
			func_950(1926308480);
			func_949(280705402);
			break;
		case 1926308480:
			func_950(1766284049);
			func_950(280705402);
			func_949(1926308480);
			break;
		case 1609506757:
			if (bParam1)
			{
				func_950(439465264);
				func_949(1609506757);
			}
			else
			{
				func_950(1609506757);
				func_950(439465264);
			}
			break;
		case 439465264:
			if (func_493(1609506757))
			{
				if (bParam1)
				{
					func_949(439465264);
				}
				else
				{
					func_950(439465264);
				}
			}
			break;
		case 1822001510:
			func_950(-1612662716);
			func_949(1822001510);
			break;
		case -1612662716:
			func_950(1822001510);
			func_949(-1612662716);
			break;
		case 1306158345:
			func_950(1952610440);
			func_950(-223469678);
			func_950(-404698347);
			func_950(1517904467);
			func_949(1306158345);
			break;
		case 1952610440:
			func_950(1306158345);
			func_950(-223469678);
			func_950(-404698347);
			func_950(1517904467);
			func_949(1952610440);
			break;
		case -223469678:
			func_950(1306158345);
			func_950(1952610440);
			func_950(-404698347);
			func_950(1517904467);
			func_949(-223469678);
			break;
		case -404698347:
			func_950(1306158345);
			func_950(1952610440);
			func_950(-223469678);
			func_950(1517904467);
			func_949(-404698347);
			break;
		case 1517904467:
			func_950(1306158345);
			func_950(1952610440);
			func_950(-223469678);
			func_950(-404698347);
			func_949(1517904467);
			break;
		case 1376646519:
			func_950(931649776);
			func_950(-434590080);
			func_950(1743048395);
			func_950(449774763);
			func_949(1376646519);
			break;
		case 931649776:
			func_950(1376646519);
			func_950(-434590080);
			func_950(1743048395);
			func_950(449774763);
			func_949(931649776);
			break;
		case -434590080:
			func_950(1376646519);
			func_950(931649776);
			func_950(1743048395);
			func_950(449774763);
			func_949(-434590080);
			break;
		case 1743048395:
			func_950(1376646519);
			func_950(931649776);
			func_950(-434590080);
			func_950(449774763);
			func_949(1743048395);
			break;
		case 449774763:
			func_950(1376646519);
			func_950(931649776);
			func_950(-434590080);
			func_950(1743048395);
			func_949(449774763);
			break;
		case -1414537028:
			func_950(38162571);
			func_950(1350391819);
			func_950(54073871);
			func_949(-1414537028);
			break;
		case 38162571:
			func_950(-1414537028);
			func_950(1350391819);
			func_950(54073871);
			func_949(38162571);
			break;
		case 1350391819:
			func_950(-1414537028);
			func_950(38162571);
			func_950(54073871);
			func_949(1350391819);
			break;
		case 54073871:
			func_950(-1414537028);
			func_950(38162571);
			func_950(1350391819);
			func_949(54073871);
			break;
		case 198200492:
			func_949(198200492);
			func_950(-1124061431);
			func_950(52706132);
			func_950(-259123672);
			break;
		case -1124061431:
			func_950(198200492);
			func_949(-1124061431);
			func_950(52706132);
			func_950(-259123672);
			break;
		case 52706132:
			func_950(198200492);
			func_950(-1124061431);
			func_949(52706132);
			func_950(-259123672);
			break;
		case -259123672:
			func_950(198200492);
			func_950(-1124061431);
			func_950(52706132);
			func_949(-259123672);
			break;
		case -919512195:
			func_949(-919512195);
			func_950(-1925798111);
			func_950(420709909);
			func_950(1703426636);
			break;
		case -1925798111:
			func_949(-1925798111);
			func_950(-919512195);
			func_950(420709909);
			func_950(1703426636);
			break;
		case 420709909:
			func_949(420709909);
			func_950(-919512195);
			func_950(-1925798111);
			func_950(1703426636);
			break;
		case 1703426636:
			func_949(1703426636);
			func_950(-919512195);
			func_950(-1925798111);
			func_950(420709909);
			break;
		case -1223121209:
			func_949(-1223121209);
			func_950(630808005);
			break;
		case 630808005:
			func_949(630808005);
			func_950(-1223121209);
			break;
		case 1453909576:
			func_949(1453909576);
			func_950(1643531967);
			break;
		case 1643531967:
			func_949(1643531967);
			func_950(1453909576);
			break;
		case 0:
			func_949(0);
			func_950(473295046);
			func_950(-1738165526);
			break;
		case 473295046:
			func_949(473295046);
			func_950(0);
			func_950(-1738165526);
			break;
		case -1738165526:
			func_949(-1738165526);
			func_950(0);
			func_950(473295046);
			break;
		case 932909855:
			func_949(932909855);
			func_950(2051822093);
			break;
		case 2051822093:
			func_949(2051822093);
			func_950(932909855);
			break;
		case 405586984:
			func_949(405586984);
			func_950(1509509592);
			func_950(-959357075);
			func_950(-1311865656);
			break;
		case 1509509592:
			func_949(1509509592);
			func_950(405586984);
			func_950(-959357075);
			func_950(-1311865656);
			break;
		case -959357075:
			func_949(-959357075);
			func_950(1509509592);
			func_950(405586984);
			func_950(-1311865656);
			break;
		case -1311865656:
			func_949(-1311865656);
			func_950(1509509592);
			func_950(-959357075);
			func_950(405586984);
			break;
		case -524145696:
			if (bParam1)
			{
				func_949(-524145696);
			}
			else
			{
				func_950(-524145696);
			}
			func_950(1626481264);
			func_950(282809459);
			break;
		case 282809459:
			func_949(282809459);
			func_950(1626481264);
			func_950(-524145696);
			break;
		case 1626481264:
			func_949(1626481264);
			func_950(-524145696);
			func_950(282809459);
			break;
		case 885203519:
			if (bParam1)
			{
				func_949(885203519);
			}
			else
			{
				func_950(885203519);
			}
			break;
		case -1080627546:
			if (bParam1)
			{
				func_949(-1080627546);
			}
			else
			{
				func_950(-1080627546);
			}
			break;
		default:
			if (bParam1)
			{
				if (!func_493(iParam0))
				{
					func_949(iParam0);
				}
			}
			else if (func_493(iParam0))
			{
				func_950(iParam0);
			}
			break;
	}
}

int func_458(int iParam0)
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

int func_459(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_953();
	}
	if (func_20() == -1)
	{
		return Global_26796.f_26[iParam0]->f_1;
	}
	return Global_36638.f_45.f_350.f_26[iParam0]->f_1;
}

bool func_460(int iParam0, int iParam1)
{
	if (!func_954(iParam0))
	{
		return false;
	}
	return (Global_40.f_7157[iParam0] && iParam1) != 0;
}

bool func_461(int iParam0, int iParam1)
{
	iVar0 = func_955(iParam1);
	func_956(&(Global_1946804->f_964), iVar0, iParam0, -897569541, 1, iParam1);
	_0x91ded5dd64bb2691(&(Global_1946804->f_964));
	return _0xed4413cee1bf142c(&(Global_1946804->f_964));
}

void func_462(int iParam0, int iParam1)
{
	if (!func_954(iParam0))
	{
		return;
	}
	iVar0 = (Global_40.f_7157[iParam0] && iParam1);
	Global_40.f_7157[iParam0] = (&Global_40.f_7157[iParam0] - iVar0);
}

void func_463(int iParam0, int iParam1)
{
	if (!func_954(iParam0))
	{
		return;
	}
	Global_40.f_7157[iParam0] = (Global_40.f_7157[iParam0] || iParam1);
}

void func_464(int iParam0)
{
	decor_remove(iParam0, "metaped_outfit_request");
	decor_remove(iParam0, "metaped_outfit_request_name");
}

void func_465()
{
	if (is_ped_ragdoll(Global_35))
	{
		return;
	}
	if (_0xa24c1d341c6e0d53(1, 1, 1))
	{
		return;
	}
	if (!func_476(1))
	{
		return;
	}
	sVar0 = "outfit_change_unarmed";
	switch (Global_1946804->f_859)
	{
		case 1:
			sVar0 = "outfit_change_longarms";
			break;
		case 0:
			sVar0 = "outfit_change_offhand";
			break;
		case 2:
			sVar0 = "outfit_change_unarmed";
			break;
	}
	task_play_anim(Global_35, func_957(), sVar0, 8f, -8f, -1, 67108880, 0f, false, 0, false, "Satchel_and_ik_hand_helpers_filter", false);
	func_958(1);
	remove_anim_dict(func_957());
}

bool func_466(int iParam0)
{
	return false;
}

bool func_467(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return true;
		case 1:
			return true;
		case 2:
			return true;
		case 3:
			return true;
		case 4:
			return true;
		case 5:
			return true;
		default:
			break;
	}
	return false;
}

void func_468(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	bVar0 = false;
	iVar1 = 0;
	iVar2 = iParam0;
	iVar3 = -1;
	iVar4 = func_959(iParam0);
	if (iVar4 >= 0 && iVar4 <= 5)
	{
		iVar3 = iVar4;
	}
	if (func_20() != -1)
	{
		return;
	}
	func_960();
	if (bParam5)
	{
		if (!func_961(&(Global_1946804->f_1378), &bVar0, iVar2, iVar3, 1, 0))
		{
			return;
		}
	}
	if (func_476(32768) && &Global_1946804->f_1378.f_1[10] != &Global_1946804->f_57[10])
	{
		func_477();
	}
	func_962(iVar3, 1, 1, 1, 1, 1);
	func_475(31, 0, 0, 0, 0);
	func_479(0);
	if (!bParam3)
	{
		return;
	}
	if (bVar0)
	{
		iVar1 = 8;
	}
	if (!bParam4)
	{
		if (is_ped_a_player(iParam1))
		{
			func_475(2, iVar1, 2, 0, 0);
		}
		else
		{
			func_475(2, iVar1, 3, iParam1, 0);
		}
	}
	else
	{
		func_798(&(Global_1946804->f_1497), iParam1, 1, -1, 1, 1, 1);
	}
}

void func_469(int iParam0)
{
	_0xe3144b932dfdff65(iParam0, 0f, -1, 1, 1);
	clear_ped_env_dirt(iParam0);
	clear_ped_damage_decal_by_zone(iParam0, 10, "ALL");
	clear_ped_blood_damage(Global_35);
}

struct<5> func_470(int iParam0, bool bParam1, bool bParam2)
{
	Var0 = { func_963(bParam1) };
	Var0.f_4 = 1084182731;
	switch (func_602(iParam0))
	{
		case -1037537535:
			if (!_inventory_fits_slot_id(iParam0, 1034665895))
			{
				Var0 = { func_964(889965687, Var0, 1034665895, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, 889965687);
			}
			else
			{
				Var0.f_4 = 1034665895;
			}
			break;
		case -427144552:
			Var0 = { func_965(bParam1) };
			if (bParam2 && func_966(iParam0, 1))
			{
				Var5.f_9 = -1591664384;
				if (!func_967(iParam0, &Var0, 1728382685, 0))
				{
					Var0.f_4 = 1728382685;
				}
				else if (!func_967(iParam0, &Var0, -649335959, 0))
				{
					Var0.f_4 = -649335959;
				}
				else if (func_968(iParam0, &Var5, 1728382685))
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
			Var0 = { func_969(bParam1) };
			switch (func_607(iParam0))
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
			if (func_970(iParam0, -1823706425))
			{
				Var0 = { func_964(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, -1838434463);
			}
			else if (func_970(iParam0, -1483207246))
			{
				Var0 = { func_964(889965687, Var0, 1034665895, bParam1) };
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
				if (!func_971(Var0, &Var27, bParam1, 0))
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

int func_471(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (Global_1946804->f_57[iVar0]->f_8 == iParam0)
		{
			return func_972(iVar0, 1);
		}
		iVar0++;
	}
	return -358215195;
}

int func_472(int iParam0, int iParam1)
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

bool func_473(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	func_960();
	if (iParam2 == 39)
	{
		Var0 = { func_470(iParam0, 1, 0) };
		iParam2 = func_472(func_471(Var0.f_4), 1);
	}
	if (iParam2 < 0 || iParam2 >= 39)
	{
		return false;
	}
	if (func_603(iParam0, 866047851) && func_973(&(Global_1946804->f_1378)) >= 2)
	{
		return false;
	}
	if ((func_476(32768) && iParam2 == 10) && iParam0 != &Global_1946804->f_57[iParam2])
	{
		func_974(func_972(iParam2, 1));
	}
	iVar5 = 0;
	if (bParam4)
	{
		iVar5 = 3;
	}
	func_975(iParam2);
	func_976(iParam2, iVar5);
	if (&Global_1946804->f_1378.f_1[iParam2] != &Global_1946804->f_57[iParam2] && Global_1946804->f_57[iParam2]->f_1 > 1)
	{
		func_977(Global_1946804->f_1378.f_1[iParam2], 4, 6);
		func_977(Global_1946804->f_1497.f_1[iParam2], 4, 6);
	}
	func_978(&(Global_1946804->f_1378), iParam0, iParam2, bParam4, 1);
	if (iParam1 == 0)
	{
		iParam1 = Global_1946804->f_1378.f_1[iParam2]->f_1;
	}
	Global_1946804->f_1378.f_1[iParam2] = iParam0;
	Global_1946804->f_1378.f_1[iParam2]->f_1 = func_979(iParam0, iParam2, iParam1, func_20() != -1);
	if (bParam4)
	{
		func_980(&(Global_1946804->f_1378), 1, 3);
	}
	else
	{
		func_980(&(Global_1946804->f_1378), 1, 0);
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
				func_981(func_972(&(Global_1946804->f_2589.f_2[iVar6]), 1), 1, 6);
			}
			iVar6++;
		}
	}
	return true;
}

void func_474(bool bParam0, bool bParam1, bool bParam2)
{
	func_982(&(Global_1946804->f_2589), bParam0, bParam1, bParam2);
}

void func_475(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (bParam4)
	{
		func_983(16384);
	}
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	Var0.f_2 = iParam2;
	Var0.f_3 = iParam3;
	func_984(Var0);
}

bool func_476(int iParam0)
{
	return (Global_1946804 && iParam0) != 0;
}

void func_477()
{
	func_985(&(Global_1946804->f_2776));
	func_958(32768);
	func_981(1108822547, 8, 6);
}

int func_478(int iParam0)
{
	iVar0 = 0;
	iVar1 = func_472(iParam0, 1);
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

void func_479(int iParam0)
{
	if (func_986(iParam0, 4096))
	{
		Global_1946804->f_858++;
	}
	if (Global_1946804->f_858 <= 0)
	{
		return;
	}
	Var0.f_1 = iParam0;
	Var0 = 34;
	func_987(Var0);
}

void func_480(int iParam0, int iParam1, int iParam2)
{
	Var0.f_1 = iParam2;
	Var0 = iParam0;
	Var0.f_2 = iParam1;
	func_987(Var0);
}

bool func_481(int iParam0)
{
	return func_988(iParam0, 2);
}

int func_482(int iParam0)
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

int func_483(int iParam0)
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

int func_484(int iParam0)
{
	return iParam0 & 31;
}

bool func_485()
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

int func_486(int iParam0)
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

int func_487(int iParam0)
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

void func_488(int iParam0, var uParam1)
{
	Var0 = iParam0;
	Var0.f_1 = uParam1;
	network_set_rich_presence(4, &Var0, 2, 2);
}

int func_489()
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

int func_490(int iParam0)
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

void func_491(var uParam0, var uParam1, var uParam2)
{
	vVar0.x = uParam0;
	vVar0.f_1 = uParam1;
	vVar0.f_2 = uParam2;
	network_set_rich_presence(3, &vVar0, 3, 3);
}

void func_492(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_12106[iParam0]->f_1 = iParam1;
		return;
	}
	if (iParam1 == 0 || iParam1 == -1)
	{
		func_989(iParam0);
	}
	else
	{
		func_990(iParam0, iParam1);
	}
	func_991();
}

bool func_493(int iParam0)
{
	iVar0 = func_992(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887->f_12 == -1)
	{
		return is_bit_set(&(Global_40.f_283[iVar1]), iVar2);
	}
	return is_bit_set(&(Global_1058888->f_40567[iVar1]), iVar2);
}

bool func_494(int iParam0)
{
	if (!func_191(iParam0))
	{
		return false;
	}
	switch (func_196(iParam0))
	{
		case 1:
			switch (func_272(iParam0))
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
			switch (func_272(iParam0))
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

void func_495(int iParam0)
{
	iVar2 = func_993(0);
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_607(iVar1) == iParam0)
		{
			_0x6a564540fac12211(iVar2, iVar1);
		}
		iVar0++;
	}
	func_995(func_994(iParam0), 6);
}

void func_496(int iParam0)
{
	iVar2 = func_993(0);
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_607(iVar1) == iParam0)
		{
			_0x766315a564594401(iVar2, iVar1, 0);
		}
		iVar0++;
	}
	func_996(func_994(iParam0), 6);
}

int func_497(int iParam0)
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

int func_498(int iParam0)
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
	func_997(iParam0, Global_1898164->f_162);
	return 1;
}

bool func_499(int iParam0)
{
	return iParam0 != 0;
}

bool func_500(int iParam0)
{
	if (iParam0 != -1)
	{
		return true;
	}
	return false;
}

void func_501(int iParam0, var uParam1)
{
	if (!func_500(iParam0))
	{
		return;
	}
	if (*uParam1 == -1600776215)
	{
		return;
	}
	func_998(iParam0, *uParam1, 0);
	func_999(uParam1);
	Global_1935183->f_24 = 1;
}

void func_502(char* sParam0, int iParam1)
{
	sParam0->f_8 = (sParam0->f_8 || iParam1);
}

void func_503(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_555() - fParam1);
	func_1000(uParam0, 1);
	func_1001(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_504(var uParam0)
{
	return func_220(*uParam0, 2);
}

int func_505()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return iVar0;
	}
	return get_game_timer();
}

void func_506(bool bParam0)
{
	if (func_1002())
	{
		Global_1357509 = 1;
	}
	if (func_1003(-92416669))
	{
	}
	if (bParam0 && Global_1935630->f_44 == -1016714371)
	{
		set_current_ped_weapon(Global_35, -1569615261, true, 0, false, false);
		Global_1935630->f_44 = -1569615261;
	}
}

Vector3 func_507(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return -1641.91f, -1373.292f, 83.9661f;
				case 1:
					return -1637.328f, -1360.772f, 83.9661f;
				case 2:
					return -1640.176f, -1360.852f, 83.8726f;
				case 3:
					return -1636.888f, -1358.84f, 83.9788f;
				case 4:
					return -1642.919f, -1364.564f, 84.4505f;
				case 5:
					return -1643.614f, -1360.7f, 84.442f;
				case 6:
					return -1642.854f, -1369.826f, 84.488f;
				case 7:
					return -1641.091f, -1363.85f, 89.4068f;
				case 8:
					return -1652.679f, -1376.532f, 83.9637f;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return -1641.046f, -1374.456f, 83.9665f;
				case 1:
					return -1641.046f, -1374.456f, 83.9665f;
				case 2:
					return -1635.981f, -1357.801f, 83.9785f;
				case 3:
					return -1640.327f, -1358.931f, 83.9689f;
				case 4:
					return -1637.813f, -1357.442f, 83.9846f;
				case 5:
					return -1642.74f, -1368.806f, 84.2944f;
				case 6:
					return -1645.963f, -1354.795f, 84.5044f;
				case 7:
					return -1642.135f, -1368.411f, 84.4299f;
				case 8:
					return -1641.252f, -1359.895f, 84.4438f;
				case 9:
					return -1650.797f, -1370.951f, 84.4733f;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return -1637.755f, -1372.94f, 83.9666f;
				case 1:
					return -1639.673f, -1364.841f, 83.9666f;
				case 2:
					return -1637.134f, -1362.572f, 83.9416f;
				case 3:
					return -1635.884f, -1361.431f, 83.9929f;
				case 4:
					return -1635.197f, -1358.686f, 83.9282f;
				case 5:
					return -1641.622f, -1367.079f, 83.9889f;
				case 6:
					return -1645.434f, -1359.578f, 84.4505f;
				case 7:
					return -1641.446f, -1370.687f, 84.4616f;
				case 8:
					return -1639.723f, -1361.352f, 90.3524f;
				case 9:
					return -1644.912f, -1373.119f, 84.4654f;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return -1637.684f, -1359.405f, 91.0713f;
				case 1:
					return -1637.805f, -1359.552f, 91.0676f;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return -1651.385f, -1375.165f, 83.9652f;
				case 1:
					return -1645.408f, -1370.056f, 84.4663f;
				case 2:
					return -1640.501f, -1366.825f, 83.9909f;
				case 3:
					return -1651.089f, -1364.344f, 83.9665f;
				case 4:
					return -1629.721f, -1354.971f, 83.639f;
				case 5:
					return -1643.964f, -1356.64f, 83.9608f;
				case 6:
					return -1649.57f, -1368.805f, 84.342f;
				case 7:
					return -1635.615f, -1371.903f, 84.2934f;
				case 8:
					return -1653.914f, -1360.958f, 84.1772f;
				case 9:
					return -1654.152f, -1355.56f, 83.968f;
				case 10:
					return -1647.816f, -1348.9f, 83.9671f;
				case 11:
					return -1634.664f, -1350.755f, 83.6869f;
				case 12:
					return -1643.212f, -1379.315f, 83.975f;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					return -1644.631f, -1366.957f, 83.9783f;
				case 1:
					return -1637.401f, -1364.832f, 83.9897f;
				case 2:
					return -1645.926f, -1365.692f, 83.9659f;
				case 3:
					return -1633.673f, -1354.169f, 83.7721f;
				case 4:
					return -1640.374f, -1352.399f, 83.9651f;
				case 5:
					return -1647.476f, -1362.457f, 83.9591f;
				case 6:
					return -1641.676f, -1364.375f, 83.9845f;
				case 7:
					return -1646.419f, -1360.479f, 83.9569f;
				case 8:
					return -1650.298f, -1361.102f, 84.4707f;
				case 9:
					return -1642.449f, -1350.453f, 83.9483f;
				case 10:
					return -1641.624f, -1349.232f, 83.9548f;
				case 11:
					return -1640.655f, -1376.839f, 84.4095f;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					return -1646.327f, -1366.9f, 83.9662f;
				case 1:
					return -1636.697f, -1366.832f, 84.4799f;
				case 2:
					return -1644.98f, -1366.473f, 83.9723f;
				case 3:
					return -1633.348f, -1356.454f, 83.7524f;
				case 4:
					return -1641.348f, -1350.715f, 84.2953f;
				case 5:
					return -1648.29f, -1360.763f, 83.9545f;
				case 6:
					return -1644.05f, -1365.44f, 83.9752f;
				case 7:
					return -1644.721f, -1361.496f, 83.9645f;
				case 8:
					return -1650.852f, -1359.655f, 84.4716f;
				case 9:
					return -1646.21f, -1351.506f, 83.9736f;
				case 10:
					return -1640.896f, -1351.945f, 83.963f;
				case 11:
					return -1638.335f, -1376.765f, 83.974f;
			}
			break;
		case 7:
			switch (iParam1)
			{
				case 0:
					return -1652.056f, -1367.433f, 83.9651f;
				case 1:
					return -1639.652f, -1363.923f, 83.9879f;
				case 2:
					return -1656.254f, -1363.863f, 83.9644f;
				case 3:
					return -1640.725f, -1353.181f, 83.9653f;
				case 4:
					return -1645.724f, -1352.583f, 84.4674f;
				case 5:
					return -1644.481f, -1360.2f, 83.9643f;
				case 6:
					return -1643.891f, -1363.441f, 83.9701f;
				case 7:
					return -1649.082f, -1358.575f, 84.4711f;
				case 8:
					return -1651.104f, -1356.063f, 84.4691f;
				case 9:
					return -1648.553f, -1346.726f, 83.9656f;
				case 10:
					return -1629.102f, -1347.984f, 82.9741f;
			}
			break;
	}
	return 0f, 0f, 0f;
}

int func_508(int iParam0)
{
	if (func_196(iParam0) == 1)
	{
		return func_272(iParam0);
	}
	return -1;
}

int func_509(int iParam0)
{
	if (func_196(iParam0) == 8)
	{
		return func_272(iParam0);
	}
	return -1;
}

char[] func_510(int iParam0)
{
	if (!func_273(iParam0))
	{
		return uVar0;
	}
	uVar0 = (*Global_1347702)[iParam0]->f_3;
	return uVar0;
}

void func_511(int iParam0, bool bParam1)
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
		func_1004(1, bParam1);
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
		(*Global_2621440)[iParam0]->f_9.f_14 = func_285();
	}
}

void func_512(int iParam0, vector3 vParam1, var uParam4)
{
	(*Global_2621440)[iParam0]->f_9.f_7 = { vParam1 };
	(*Global_2621440)[iParam0]->f_9.f_13 = uParam4;
	(*Global_2621440)[iParam0]->f_9 = 5;
	(*Global_2621440)[iParam0]->f_9.f_15 = func_372(vParam1, 1);
}

bool func_513(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 13)
	{
		return false;
	}
	return true;
}

bool func_514(int iParam0)
{
	return Global_43884 == iParam0;
}

void func_515(bool bParam0)
{
	Global_1935496->f_18 = !bParam0;
}

bool func_516(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 120);
}

void func_517(int iParam0)
{
	Global_1310750->f_16035 = (Global_1310750->f_16035 - (Global_1310750->f_16035 && iParam0));
}

bool func_518(var uParam0, int iParam1, int iParam2)
{
	return is_bit_set(uParam0[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return is_bit_set(uParam0[iVar0], iVar1);
}

int func_519()
{
	return Global_1109400->f_245;
}

bool func_520(var uParam0, int iParam1)
{
	return func_394(uParam0->f_64, iParam1);
}

bool func_521(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 27)
	{
		return false;
	}
	return true;
}

bool func_522(int iParam0)
{
	return func_710(iParam0, 16, 1);
}

void func_523(var uParam0, int iParam1)
{
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	if (!func_1005(uParam0, iParam1, &iVar0))
	{
		return;
	}
	if (is_entity_an_object(iParam1) && func_1006(uParam0, get_object_index_from_entity_index(iParam1)))
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

void func_524(int iParam0)
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

void func_525(int iParam0)
{
	func_1007(iParam0, 8, 0);
}

void func_526(int iParam0, bool bParam1)
{
	if (!func_1008(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (func_1009(&((*Global_1360165)[iParam0]->f_12), 1))
		{
			func_1007(iParam0, 1, 0);
		}
	}
	func_1007(iParam0, 16, bParam1);
}

void func_527(int iParam0, bool bParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	if (!func_521(iParam0))
	{
		return;
	}
	if (func_522(iParam0))
	{
		if ((*Global_1360165)[iParam0]->f_129 != 0 && (*Global_1360165)[iParam0]->f_129 != get_id_of_this_thread())
		{
			return;
		}
	}
	if (bParam10)
	{
		func_1010(iParam0, 56, 1);
		func_27(&(Global_1359489->f_40), 1);
	}
	func_526(iParam0, 0);
	func_1007(iParam0, 4, 0);
	func_525(iParam0);
	func_1011(iParam0);
	func_1012(iParam0, 37, 1);
	bVar0 = func_1013(Global_1360165[iParam0], 0);
	iVar1 = func_1014(iParam0, 0);
	bVar2 = _0x800df3fc913355f3(iVar1);
	if (get_ped_config_flag(Global_1360165[iParam0], 503, true) && Global_1359489->f_16 & 8388608 == 0)
	{
		set_ped_config_flag(Global_1360165[iParam0], 503, false);
	}
	if (func_1015(iParam0, 64, 1))
	{
		func_1012(iParam0, 64, 1);
	}
	if (bParam3)
	{
		func_1012(iParam0, 33, 1);
		func_1012(iParam0, 34, 1);
		func_1016(iParam0, 1056964608, -1, 1061158912);
		func_1017(iParam0, 1, 1, 0);
		if (bParam6)
		{
			func_1010(iParam0, 30, 1);
		}
		if (bParam7)
		{
			func_1010(iParam0, 35, 1);
			if (bParam8)
			{
				func_1010(iParam0, 62, 1);
			}
		}
		if (bVar0)
		{
			func_1018(iParam0, 0);
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
		func_1012(iParam0, 28, 1);
	}
	else
	{
		if (!bVar0)
		{
			set_ped_keep_task(Global_1360165[iParam0], true);
		}
		func_1010(iParam0, 33, 1);
		func_1017(iParam0, 0, 1, 0);
		if (fParam4 > 0f)
		{
			(*Global_1360165)[iParam0]->f_133 = fParam4;
			func_27(&((*Global_1360165)[iParam0]->f_130), 1);
		}
		else
		{
			func_558(&((*Global_1360165)[iParam0]->f_130));
		}
		if (bParam9)
		{
			func_1010(iParam0, 34, 1);
		}
	}
	if (bParam1 || bParam2)
	{
		if (does_entity_exist(Global_1360165[iParam0]))
		{
			func_1019(iParam0, bParam2, bParam2, bParam2, 0);
		}
	}
	else if (bVar0)
	{
		set_ped_can_use_auto_conversation_lookat(Global_1360165[iParam0], false);
	}
	if (func_1015(iParam0, 45, 1))
	{
		func_1012(iParam0, 45, 1);
	}
	func_1020(iParam0, 16, 1);
	func_1012(iParam0, 44, 1);
	(*Global_1360165)[iParam0]->f_129 = 0;
	Global_40.f_4942[iParam0]->f_4 = 0;
	if (bParam5)
	{
		if (func_1013(func_1021(iParam0), 0))
		{
			func_1022(0, iParam0, bParam3, 0, bParam2);
		}
	}
}

void func_528(int iParam0)
{
	iParam0 = func_266(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_262(iParam0);
	if (!_does_thread_exist(iVar0))
	{
		func_535(iParam0);
	}
	else if (!is_thread_active(iVar0, false))
	{
		func_535(iParam0);
	}
}

bool func_529(int iParam0)
{
	iParam0 = func_266(iParam0);
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

void func_530(int iParam0)
{
	iParam0 = func_266(iParam0);
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

void func_531(int iParam0)
{
	iParam0 = func_266(iParam0);
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

bool func_532(int iParam0)
{
	if (!func_1023(iParam0))
	{
		return false;
	}
	if (!func_331())
	{
		return true;
	}
	return false;
}

void func_533(int iParam0)
{
	iParam0 = func_266(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_390(iParam0))
	{
		return;
	}
	iVar0 = func_216(iParam0);
	func_1024(iParam0);
	if (!_0x88ad6cc10d8d35b2(iVar0))
	{
		set_entity_as_mission_entity(iVar0, true, true);
	}
	iVar1 = get_entity_model(iVar0);
	if (_0xaa9f048dcf69b6dc(iVar1))
	{
		if (!func_532(iVar1))
		{
			set_ped_model_is_suppressed(iVar1, false);
		}
	}
	delete_ped(&iVar0);
	func_1025(iParam0, 0);
	func_535(iParam0);
}

bool func_534(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (is_entity_dead(iParam0) || is_ped_injured(iParam0))
	{
	}
	iVar0 = func_261(iParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	return true;
}

void func_535(int iParam0)
{
	iParam0 = func_266(iParam0);
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

void func_536(int iParam0)
{
	if (is_player_dead(player_id()))
	{
		return;
	}
	iVar0 = func_216(iParam0);
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
	if (func_1026(iParam0, 64))
	{
		func_530(iParam0);
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
	bVar3 = func_605(42);
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
				func_1027(&((*Global_1900383)[iParam0]->f_27));
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
		func_530(iParam0);
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
		if (func_1028(1) < 1)
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
		func_1029(&((*Global_1900383)[iParam0]->f_26), bVar6);
	}
	if (!does_blip_exist((*Global_1900383)[iParam0]->f_26))
	{
		return;
	}
	bVar8 = false;
	if (func_1026(iParam0, 32))
	{
		bVar8 = true;
	}
	bVar9 = is_ped_in_writhe(iVar0);
	bVar10 = false;
	iVar11 = func_1030(iParam0);
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
	fVar15 = func_1031(vVar12, Global_36);
	bVar16 = false;
	if (fVar15 > func_1032(iParam0))
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
		func_1033((*Global_1900383)[iParam0]->f_26);
		func_1034((*Global_1900383)[iParam0]->f_26);
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
	if (func_858(iVar0) && !bVar9)
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
	iVar21 = func_1028(iParam0);
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

int func_537(int iParam0)
{
	return shift_right(iParam0, 5) & 1023;
}

int func_538(int iParam0)
{
	if ((*Global_1347702)[iParam0]->f_12 & 1 != 0 || (*Global_1347702)[iParam0]->f_12 & 33554432 != 0)
	{
		return 1;
	}
	return 3;
}

int func_539(int iParam0)
{
	uVar0 = (*Global_1347702)[iParam0]->f_3;
	return get_hash_key(&uVar0);
}

void func_540(int iParam0, int iParam1)
{
	Global_40.f_490.f_402[iParam0] = (&Global_40.f_490.f_402[iParam0] - (Global_40.f_490.f_402[iParam0] && iParam1));
}

void func_541(int iParam0, int iParam1)
{
	Global_40.f_490.f_402[iParam0] = (Global_40.f_490.f_402[iParam0] || iParam1);
}

bool func_542(int iParam0)
{
	iParam0 = func_266(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (!func_390(iParam0))
	{
		return false;
	}
	iVar0 = func_216(iParam0);
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

void func_543(int iParam0)
{
	iParam0 = func_266(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_390(iParam0))
	{
		return;
	}
	iVar0 = func_216(iParam0);
	if (is_entity_dead(iVar0))
	{
		return;
	}
	_set_entity_health(iVar0, 0, 0);
}

void func_544(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (is_string_null_or_empty(sParam1))
	{
		sParam1 = "FEED_MONEY_EARN";
	}
	func_707(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 1831944558, 0, 109029619, 0, 0, 0, 1);
}

void func_545(int iParam0, bool bParam1, float fParam2, int iParam3, int iParam4)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if (bParam1)
	{
		iVar0 = round((to_float(iParam0) * fParam2));
		iVar1 = ((iParam0 - iVar0) / iParam3);
		if (func_1035())
		{
			iVar2 = floor((to_float(iVar1) * 0.1f));
		}
		iParam0 = (iParam0 + iVar2);
		iVar1 = (iVar1 + iVar2);
		func_707(_create_var_string(2, "FEED_GANG_TOTAL_EARN", iParam0), "ITEMTYPE_TEXTURES", -1957849484, 0, 109029619, 0, 0, 0, 1);
		iParam0 = (iParam0 - iVar0);
		if (iVar0 > 0)
		{
			func_1036(iVar0);
			func_1037(iVar0, 0, 0);
		}
		func_707(_create_var_string(2, "FEED_GANG_PLAYER_EARN", iVar1), "ITEMTYPE_TEXTURES", 1831944558, 0, 109029619, 0, 0, 0, 1);
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

bool func_546(int iParam0)
{
	if (!func_247(iParam0))
	{
		return false;
	}
	return func_251(iParam0, 67108864);
}

void func_547(int iParam0)
{
	StringCopy(&cVar0, func_1038(iParam0), 64);
	StringConCat(&cVar0, "_OUTLINE", 64);
	sVar8 = func_1039(cVar0);
	_0x563fcb6620523917(get_hash_key(sVar8), -1482012664);
}

void func_548(int iParam0)
{
	StringCopy(&cVar0, func_1038(iParam0), 64);
	StringConCat(&cVar0, "_OUTLINE", 64);
	sVar8 = func_1039(cVar0);
	iVar9 = get_hash_key(sVar8);
	if (_0xe38450dbcbc70e3d(iVar9, -1305340593) || _0xe38450dbcbc70e3d(iVar9, -1482012664))
	{
		_0x6786d7afac3162b3(iVar9);
	}
}

bool func_549(var uParam0, int iParam1, int iParam2)
{
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	bVar2 = is_bit_set(uParam0[iVar0], iVar1);
	clear_bit((*uParam0)[iVar0], iVar1);
	return bVar2;
}

bool func_550(var uParam0, int iParam1, int iParam2)
{
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	bVar2 = is_bit_set(uParam0[iVar0], iVar1);
	set_bit((*uParam0)[iVar0], iVar1);
	return !bVar2;
}

bool func_551(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_552(int iParam0)
{
	if (!func_516(iParam0))
	{
		return true;
	}
	return Global_17504.f_42[iParam0]->f_4 > 0;
}

int func_553(int iParam0)
{
	if (func_516(iParam0))
	{
		return Global_17504.f_42[iParam0]->f_4;
	}
	return 0;
}

int func_554(int iParam0)
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

float func_555()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return (to_float(iVar0) / 1000f);
	}
	return (to_float(get_game_timer()) / 1000f);
}

void func_556(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	iVar0 = (((iParam2 + (60 * iParam3)) + (3600 * iParam4)) + (86400 * iParam5));
	if (func_1040(iParam0) == 1 && bParam7)
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

int func_557(int iParam0)
{
	if (!func_1008(iParam0))
	{
		return 0;
	}
	if (!does_entity_exist(Global_1360165[iParam0]))
	{
		(*Global_1360165)[iParam0] = 0;
	}
	return Global_1360165[iParam0];
}

void func_558(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

bool func_559(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return func_1041(iParam0);
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

int func_560(int iParam0, bool bParam1, bool bParam2)
{
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (&Global_40.f_4283.f_6[iVar0] == iParam0)
		{
			func_573(Global_40.f_4283.f_6[iVar0], bParam1, bParam2);
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_561(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_2;
	}
	return -1;
}

void func_562(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_2 = iParam1;
}

int func_563()
{
	return Global_40.f_11095.f_35;
}

void func_564(int iParam0, int iParam1)
{
	if (iParam1 == 1)
	{
		func_1042(iParam0, 0);
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
		func_565(1);
		Global_40.f_11922[0] = iParam0;
	}
}

void func_565(int iParam0)
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
			func_1042(&(Global_40.f_11922[iVar0]), 0);
			Global_40.f_11922[iVar0] = 0;
			iVar1 = 1;
		}
		iVar0++;
	}
	if (iVar1 == 1)
	{
		func_1043(1);
	}
}

bool func_566(int iParam0)
{
	return Global_40.f_490.f_402[iParam0] & 1 != 0;
}

int func_567()
{
	iVar0 = func_1044((*Global_1347702)[9]->f_15);
	iVar1 = func_1044((*Global_1835011)[69]->f_1);
	if (func_939(iVar0, iVar1, 1))
	{
		return 0;
	}
	return 1;
}

bool func_568(int iParam0)
{
	if (!func_190(iParam0))
	{
		return false;
	}
	return func_327((*Global_1835011)[iParam0]->f_1, 1);
}

int func_569(int iParam0)
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

int func_570(int iParam0)
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

void func_571(int iParam0, bool bParam1)
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

bool func_572(int iParam0)
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

void func_573(var uParam0, bool bParam1, bool bParam2)
{
	if (*uParam0 == 176656832)
	{
		return;
	}
	func_571(*uParam0, 0);
	if (bParam1)
	{
		if (bParam2)
		{
			func_574(2, *uParam0);
		}
		else
		{
			func_575(2, *uParam0);
		}
	}
	func_1049(uParam0);
}

void func_574(int iParam0, int iParam1)
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

void func_575(int iParam0, int iParam1)
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

void func_576(int iParam0, int iParam1, bool bParam2)
{
	Global_1327479->f_4 = get_game_timer();
	func_1050(iParam0, iParam1, bParam2);
}

int func_577(int iParam0)
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

int func_578(int iParam0)
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

void func_579(int iParam0, bool bParam1, int iParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, bool bParam7)
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
	if (func_605(6))
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
	Global_40.f_11095.f_35 = func_309(Global_40.f_11095.f_35, iVar3, iVar2);
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
				if (iParam0 > func_578(14))
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
					func_707(_create_var_string(2, "PLAYER_HONOR_CHANGE_POS"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_GOOD"), 0, 109029619, "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_707(_create_var_string(2, "PLAYER_HONOR_CHANGE_POS_EVENT"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_GOOD"), 0, 109029619, "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
		else
		{
			func_95(func_94(-1636809477), 1);
			Global_1347477->f_204 = 0;
			if (!bParam1)
			{
				if (iParam0 < func_578(4))
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
					func_707(_create_var_string(2, "PLAYER_HONOR_CHANGE_NEG"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_BAD"), 1, 859817522, "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_707(_create_var_string(2, "PLAYER_HONOR_CHANGE_NEG_EVENT"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_BAD"), 1, 859817522, "Honor_Display_Sounds", sVar7, 0, 1);
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
		func_362(10, 1);
	}
}

void func_580(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	Global_1347477->f_155[iParam0] = iParam1;
	Global_1347477->f_155[iParam0]->f_2 = iParam2;
	Global_1347477->f_155[iParam0]->f_3 = iParam3;
	Global_1347477->f_155[iParam0]->f_4 = iParam4;
	Global_1347477->f_155[iParam0]->f_5 = bParam5;
	Global_1347477->f_155[iParam0]->f_1 = get_game_timer() + 500;
}

int func_581(int iParam0)
{
	return shift_right(iParam0, 15) & 16383;
}

int func_582(int iParam0)
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

bool func_583(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _item_database_is_key_valid(iParam0, iParam1);
}

bool func_584(int iParam0, int iParam1, bool bParam2, int iParam3)
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

bool func_585(int iParam0, int iParam1, int iParam2)
{
	*iParam1 = iParam2;
	func_1063(iParam0, iParam1);
	Var0 = { func_470(iParam0, 0, 1) };
	iVar5 = func_1064(iParam0, &Var0, 0, 0);
	iVar6 = func_1065(iParam0, 0);
	if ((iVar5 > 1 && !func_129()) && (iVar6 + iParam2) >= iVar5)
	{
		if (func_603(iParam0, -2051813666))
		{
			func_325(583, 1);
		}
		else
		{
			func_325(582, 0);
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

void func_586(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return;
	}
	switch (func_663(iParam0, -949239683))
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

int func_587(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_583(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_602(iParam0);
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
	iVar2 = _0xe787f05dfc977bde(func_993(bParam2), iParam0, 0);
	return iVar2;
}

bool func_588(int iParam0)
{
	if (func_20() != -1)
	{
		return false;
	}
	return func_589(iParam0) != 0;
}

int func_589(int iParam0)
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

int func_590(int iParam0)
{
	return _0x6052b4de6657684f(iParam0);
}

int func_591(int iParam0)
{
	iVar1 = 0;
	while (iVar1 < func_1069())
	{
		iVar0 = _0x126cbebba46693cf(iVar1, -2076669067, 0);
		if (iParam0 == func_590(iVar0))
		{
			if (func_347(func_1070(iVar0), 1, 0))
			{
				iVar2++;
			}
		}
		iVar1++;
	}
	return iVar2;
}

void func_592(int iParam0)
{
	_0x3ea62e56f386c997(iParam0, 1);
	func_1071(48);
	func_367(0, -1);
}

bool func_593(int iParam0)
{
	if (func_20() != -1)
	{
		return false;
	}
	return func_327((*Global_1347702)[iParam0]->f_15, 1);
}

int func_594(int iParam0)
{
	return _0x62cab7db62ead434(-2076669067, iParam0);
}

int func_595(int iParam0)
{
	return _0x93f2e7b5db85657b(-2076669067, iParam0);
}

bool func_596(int iParam0)
{
	if (func_20() != -1)
	{
		return false;
	}
	return func_327((*Global_1835011)[iParam0]->f_1, 1);
}

bool func_597(int iParam0)
{
	if (func_20() != -1)
	{
		return false;
	}
	if (!func_273(iParam0))
	{
		return false;
	}
	return func_192((*Global_1347702)[iParam0]->f_15);
}

int func_598()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		if (func_347(func_1072(iVar1), 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_599(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, bool bParam7)
{
	switch (iParam0)
	{
		case 38:
			sVar0 = "MISSION_RCCIG";
			sVar1 = "SP_MISSIONS_13";
			if (func_398() && (func_597(38) || func_593(38)))
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
			if (func_398() && (func_597(39) || func_593(39)))
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
			if (func_398() && (func_597(41) || func_593(41)))
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
			if (func_398() && (func_597(49) || func_593(49)))
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

void func_600(int iParam0)
{
	Global_40.f_12004 = (Global_40.f_12004 || iParam0);
}

void func_601(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	switch (iParam0)
	{
		case 38:
			sVar0 = "COL_CC_TITLE";
			sVar3 = "COL_CC_CARD_FOUND";
			iVar7 = -2076669067;
			if (func_398() && (func_597(38) || func_593(38)))
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
			if (func_398() && (func_597(39) || func_593(39)))
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
			if (func_398() && (func_597(49) || func_593(49)))
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
		if (func_398() && (func_597(38) || func_593(38)))
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
			func_714(_create_var_string(2, sVar0), _create_var_string(2, func_1082(func_595(iParam6))), iVar5, iVar4, -2, 0, 0, 0, 0, 1, 1);
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
		if (func_398() && (func_597(39) || func_593(39)))
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
		if (func_398() && (func_597(49) || func_593(49)))
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

int func_602(int iParam0)
{
	if (!func_583(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

bool func_603(int iParam0, int iParam1)
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

bool func_604(int iParam0, int iParam1)
{
	if (!func_583(iParam0, 0))
	{
		return false;
	}
	return _0x245d07651b1d183b(iParam0, iParam1);
}

bool func_605(int iParam0)
{
	if (!func_1083(iParam0))
	{
		return false;
	}
	return func_1084(iParam0);
}

void func_606(int iParam0)
{
	if (!func_1083(iParam0))
	{
		return;
	}
	func_1085(iParam0);
	func_1086(iParam0);
}

int func_607(int iParam0)
{
	if (!func_583(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_608(int iParam0, bool bParam1)
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
	if (func_583(iVar0, 0))
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

int func_609(int iParam0, bool bParam1)
{
	if (!func_583(iParam0, 0))
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

void func_610(int iParam0)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	if (!func_441(iParam0))
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

bool func_611(bool bParam0)
{
	if (func_20() == -1)
	{
		return true;
	}
	return _inventory_are_local_changes_allowed(func_993(bParam0));
}

bool func_612(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
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
		Var0 = { func_470(iParam0, 0, 1) };
		iVar5 = 1728382685;
		Var6.f_9 = -1591664384;
		iVar28 = 0;
		while (iVar28 < 4)
		{
			iVar5 = func_1088((386 + iVar28), 1);
			if (func_967(iParam0, &Var0, iVar5, 0))
			{
				if (func_968(iParam0, &Var6, iVar5))
				{
					Var29 = { func_964(iParam0, Var0, iVar5, 0) };
					func_1089(iParam0, &Var29, &Var0, 1, -142743235, 1, 0);
				}
				else
				{
					iVar28++;
				}
				if (func_611(0))
				{
					_give_weapon_to_ped_2(Global_35, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
					if (!has_ped_got_weapon(Global_35, iParam0, 0, false))
					{
						return false;
					}
					func_613(_get_ammo_type_for_weapon(iParam0), iParam1, iParam6);
					func_1090(iParam0, iParam1);
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

bool func_613(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return true;
	}
	if (!func_615(iParam0))
	{
		return false;
	}
	if (!func_611(0))
	{
		return false;
	}
	_add_ammo_to_ped_by_type(Global_35, iParam0, iParam1, iParam2);
	return true;
}

bool func_614(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	iVar0 = func_609(iParam0, 0);
	if (is_weapon_valid(iVar0))
	{
		if (func_20() == -1)
		{
			func_610(iVar0);
			if (iParam1 == 1248274121)
			{
				func_1091(iVar0);
			}
		}
		if (!func_1066(iParam0, &uVar1, 1, 0, 0))
		{
			func_1062(iParam0, 1, 0, bParam2, iParam1);
			iVar6 = func_1092(iVar0);
			if (_is_weapon_sniper(iVar0))
			{
				func_612(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == -1415022764 || iVar0 == -160924582)
			{
				func_612(iVar0, 0, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == 2055893578)
			{
				func_612(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
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
				else if (!func_1093(iVar0))
				{
					func_612(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
				}
				else
				{
					func_612(iVar0, _get_weapon_clip_size(iVar0) * 4, bParam3, bParam4, 0, 0, iParam1, 0);
				}
			}
			else if (_is_weapon_one_handed(iVar0))
			{
				iVar7 = func_1094(Global_35, 2, 0, 1);
				if ((((func_441(iVar7) && !Global_43891) && iVar7 != iVar0) && !func_605(24)) && bParam4)
				{
					_0xe9bd19f8121ade3e(Global_35, iVar7);
				}
				bVar8 = true;
				if (func_441(iVar7) && func_605(24))
				{
					if (!func_612(iVar0, iVar6, bParam3, bParam4, 3, bVar8, iParam1, 0))
					{
						return false;
					}
				}
				else if (!func_612(iVar0, iVar6, bParam3, bParam4, 0, bVar8, iParam1, 0))
				{
					return false;
				}
			}
			else if (!func_612(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0))
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
		func_325(480, 1);
	}
	return true;
}

bool func_615(int iParam0)
{
	return _is_ammo_valid(iParam0);
}

bool func_616(int iParam0, int iParam1, int iParam2)
{
	if (!func_615(iParam0))
	{
		return false;
	}
	iVar4 = _get_weapon_type_from_ammo_type(iParam0);
	iVar3 = get_ped_ammo_by_type(Global_35, iParam0);
	if (func_441(iVar4))
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
	if (func_347(611073244, 1, 0) && iParam2 == -897553835)
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
		func_650(func_1095(iParam0), func_649(iParam0), 1);
		return false;
	}
	if (iVar2 == (iVar3 + iVar0))
	{
		if (func_20() == -1)
		{
			if (func_327((*Global_1835011)[14]->f_1, 1))
			{
				func_325(416, 0);
			}
		}
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_611(0))
	{
		if (func_613(iParam0, iVar0, iParam2))
		{
			*iParam1 = iVar0;
			return true;
		}
	}
	else
	{
		return func_655(iParam0, *iParam1, iParam2);
	}
	return false;
}

void func_617(int iParam0)
{
	if ((iParam0 == -615217896 && !func_338()) || iParam0 != -615217896)
	{
		if (func_1096(Global_35, iParam0, &uVar0))
		{
			func_187(player_ped_id(), iParam0, 0, -358215195, 1, 1, 1, 0, 1, 1);
		}
	}
	switch (iParam0)
	{
		case -62615415:
			Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
			func_640();
			break;
		case -832719552:
			Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
			func_640();
			break;
		case -1941112926:
			Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
			func_640();
			break;
		case -615217896:
			Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
			func_638();
			break;
		case -121629511:
			Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.2f);
			func_636();
			break;
	}
}

void func_618(int iParam0)
{
	switch (iParam0)
	{
		case -224110471:
			Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
			func_636();
			break;
		case 1289585739:
			Global_40.f_11095.f_61 = (Global_40.f_11095.f_61 + 0.1f);
			func_637();
			break;
		case 1441506783:
			Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
			break;
		case 780305678:
			Global_40.f_11095.f_56 = (Global_40.f_11095.f_56 + 0.1f);
			break;
		case -935153695:
			Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
			func_638();
			break;
		case 655868243:
			Global_40.f_11095.f_63 = (Global_40.f_11095.f_63 + 0.1f);
			func_639();
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
			func_640();
			break;
		case -569248339:
			Global_40.f_11095.f_64 = (Global_40.f_11095.f_64 + 0.3f);
			func_1097();
			break;
		case -1196089647:
			Global_40.f_11095.f_68 = (Global_40.f_11095.f_68 + 0.1f);
			break;
		case -982895431:
			Global_40.f_11095.f_69 = (Global_40.f_11095.f_69 + 0.1f);
			func_1098();
			break;
		case -1056342069:
			Global_40.f_11095.f_70 = (Global_40.f_11095.f_70 + 0.2f);
			break;
	}
}

struct<2> func_619(int iParam0)
{
	Var0.f_1 = iParam0;
	return Var0;
}

struct<2> func_620(int iParam0, int iParam1)
{
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

void func_621(int iParam0)
{
	bVar0 = func_603(iParam0, -2017733358);
	if (func_1099() < 3)
	{
		if (bVar0)
		{
			if (func_1101(func_1100(iParam0), iParam0))
			{
				func_650(79, func_649(func_1100(iParam0)), 1);
			}
			else
			{
				func_650(78, func_649(func_1100(iParam0)), 1);
			}
		}
		else
		{
			func_650(80, func_649(func_1102(iParam0)), 1);
		}
	}
}

bool func_622()
{
	if (((((func_1103(839908568, 400) || func_1103(-1134030454, 400)) || func_1103(623353496, 400)) || func_1103(-344413337, 400)) || func_1103(-1664948962, 400)) || func_1103(1795228059, 400))
	{
		return true;
	}
	return false;
}

int func_623(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, int iParam7)
{
	iVar0 = func_725(iParam0, bParam6, iParam7);
	if (!bParam1)
	{
		func_544(iVar0, sParam4, iParam5);
	}
	iVar1 = 752097756;
	if (bParam6)
	{
		iVar1 = -897553835;
	}
	func_545(iVar0, bParam1, fParam2, iParam3, iVar1);
	return iVar0;
}

void func_624(int iParam0)
{
	switch (iParam0)
	{
		case -625427311:
			func_599(51, 0, 0, 1520110311, 0, 0, 4, 0);
			func_601(51, 0, 0, 0, 0, -1, 0);
			func_1104(8192);
			break;
		case 581047644:
			func_599(51, 0, 0, -1992824800, 0, 0, 1, 0);
			func_601(51, 0, 0, 0, 0, -1, 0);
			func_1104(524288);
			break;
		case -644199619:
			func_599(39, 0, 0, 0, 0, 0, 1, 0);
			func_601(39, 0, 0, 0, 0, -1, 0);
			func_1105(16);
			break;
		case 684296857:
			func_599(41, 0, 0, 0, 0, 0, 1, 0);
			func_601(41, 0, 0, 0, 0, -1, 0);
			func_1106(8);
			break;
		case 466137807:
			func_599(49, 0, 0, 0, 0, 0, 1, 0);
			func_601(49, 0, 0, 0, 0, -1, 0);
			func_1107(16);
			break;
		case -1087522507:
			func_599(43, 0, 0, -1791518714, func_1108(1), 0, -1, 0);
			func_1109(1);
			break;
		case -405829000:
			func_599(43, 0, 0, -2087881550, func_1108(2), 0, -1, 0);
			func_1109(2);
			break;
		case 378660860:
			func_599(43, 0, 0, 1908068621, func_1108(4), 0, -1, 0);
			func_1109(4);
			break;
		case 1566111097:
			func_599(43, 0, 0, 1611247019, func_1108(8), 0, -1, 0);
			func_1109(8);
			break;
		case 1276007140:
			func_599(43, 0, 0, 1319635688, func_1108(16), 0, -1, 0);
			func_1109(16);
			break;
	}
}

void func_625(int iParam0)
{
	if (func_1110() == 1)
	{
		if (func_593(39))
		{
			func_325(342, 0);
		}
		else
		{
			func_325(343, 0);
			func_1105(1);
		}
	}
	if (func_1110() >= 30)
	{
		func_325(344, 0);
	}
	func_599(39, 0, 0, 0, 0, 0, -1, 0);
	func_601(39, 0, 0, func_1110(), 30, 1, 0);
}

void func_626(int iParam0)
{
	if (func_1111() == 1)
	{
		if (func_593(49))
		{
			func_325(409, 0);
		}
		else
		{
			func_325(410, 0);
			func_1107(1);
		}
	}
	if (func_1111() >= 10)
	{
		func_325(411, 0);
	}
	func_599(49, 0, 0, 0, 0, 0, -1, 0);
	func_601(49, 0, 0, func_1111(), 10, 1, 0);
}

void func_627(int iParam0)
{
	switch (iParam0)
	{
		case 1369162587:
			_0x3ea62e56f386c997(-949689219, 1);
			func_325(437, 0);
			func_325(440, 0);
			func_1112(-949689219, 444160793, &sVar0, 1, 0, 0);
			func_599(51, 0, 0, -949689219, sVar0, 0, -1, 0);
			func_601(51, 0, 0, sVar0, func_1073(-949689219, 20), 1, 0);
			func_1104(1);
			func_457(-748969569, 0, 0);
			break;
		case 1610047510:
			_0x3ea62e56f386c997(-1248968496, 1);
			func_1112(-1248968496, -1969404854, &sVar0, 1, 0, 0);
			func_599(51, 0, 0, -1248968496, sVar0, 0, -1, 0);
			func_601(51, 0, 0, sVar0, func_1073(-1248968496, 20), 1, 0);
			func_1104(8);
			break;
		case 1317879106:
			_0x3ea62e56f386c997(1706369307, 1);
			func_1112(1706369307, -832850511, &sVar0, 1, 0, 0);
			func_599(51, 0, 0, 1706369307, sVar0, 0, -1, 0);
			func_601(51, 0, 0, sVar0, func_1073(1706369307, 20), 1, 0);
			func_1104(64);
			break;
		case 1062444751:
			_0x3ea62e56f386c997(1520110311, 1);
			func_1112(1520110311, -100913452, &sVar0, 1, 0, 0);
			func_599(51, 0, 0, 1520110311, sVar0, 0, -1, 0);
			func_601(51, 0, 0, sVar0, func_1073(1520110311, 20), 1, 0);
			func_1104(512);
			break;
		case 754186760:
			_0x3ea62e56f386c997(-1992824800, 1);
			func_325(438, 0);
			func_1112(-1992824800, 905173572, &sVar0, 1, 0, 0);
			func_599(51, 0, 0, -1992824800, sVar0, 0, -1, 0);
			func_601(51, 0, 0, sVar0, func_1073(-1992824800, 20), 1, 0);
			func_1104(32768);
			break;
		default:
			func_325(439, 0);
			break;
	}
}

void func_628()
{
	if (chal_get_num_ranks_completed(-1278339625) < 2)
	{
		chal_add_goal_progress_int(-1278339625, -1316535105, 1);
	}
}

void func_629(int iParam0, int iParam1)
{
	iVar1 = 0;
	if (func_20() == -1)
	{
		if (!func_593(43))
		{
			if (iParam0 == 281887510)
			{
				func_325(348, 0);
			}
			else if (iParam0 == -164081697)
			{
				func_325(350, 0);
			}
			else if (iParam0 == -1161319399)
			{
				func_325(352, 0);
			}
			else if (iParam0 == 728781265)
			{
				func_325(400, 0);
			}
		}
		else if (func_603(iParam0, 412399755))
		{
			func_1113(-1791518714);
			if (func_1114() == 0)
			{
				func_367(0, 10);
				iVar1 = func_1115(iParam0, iParam1, 1);
				if (((iParam0 == 281887510 || iParam0 == -164081697) || iParam0 == -1161319399) || iParam0 == 728781265)
				{
					if (func_1116(iParam0) < func_1117(iParam0))
					{
						func_599(43, iParam0, iParam1, -1791518714, iVar1, 0, -1, 0);
						func_601(43, 0, 0, iVar1, 30, 1, 0);
					}
				}
			}
		}
		if (!func_593(44))
		{
			if (iParam0 == -222563712)
			{
				func_325(354, 0);
			}
			else if (iParam0 == 1794857344)
			{
				func_325(399, 0);
			}
			else if (iParam0 == 1952409553)
			{
				func_325(401, 0);
			}
		}
		else if (func_603(iParam0, 709057512))
		{
			func_1113(-2087881550);
			if (func_1114() == 1)
			{
				func_367(0, 10);
				iVar1 = func_1115(iParam0, iParam1, 2);
				if ((iParam0 == -222563712 || iParam0 == 1794857344) || iParam0 == 1952409553)
				{
					if (func_1116(iParam0) < func_1117(iParam0))
					{
						func_599(43, iParam0, iParam1, -2087881550, iVar1, 0, -1, 0);
						func_601(43, 0, 0, iVar1, 37, 1, 0);
					}
				}
			}
		}
		if (!func_593(45))
		{
			if (iParam0 == 2116770557)
			{
				func_325(359, 0);
			}
			else if (iParam0 == -651064726)
			{
				func_325(394, 0);
			}
			else if (iParam0 == -404270094)
			{
				func_325(395, 0);
			}
			else if (iParam0 == 2093126853)
			{
				func_325(398, 0);
			}
		}
		else if (func_603(iParam0, -1478961327))
		{
			func_1113(1908068621);
			if (func_1114() == 2)
			{
				func_367(0, 10);
				iVar1 = func_1115(iParam0, iParam1, 4);
				if (iParam0 == 2116770557)
				{
					if (!func_1118(_0x126cbebba46693cf(iVar0, 2114735110, 0)) >= 25)
					{
						func_1119(_0x126cbebba46693cf(iVar0, 2114735110, 0), 1);
						func_1071(48);
					}
					if (func_1116(iParam0) < func_1117(iParam0))
					{
						func_599(43, iParam0, iParam1, 1908068621, iVar1, 0, -1, 0);
						func_601(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
				else if ((iParam0 == -651064726 || iParam0 == -404270094) || iParam0 == 2093126853)
				{
					if (func_1116(iParam0) < func_1117(iParam0))
					{
						func_599(43, iParam0, iParam1, 1908068621, iVar1, 0, -1, 0);
						func_601(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
			}
		}
		if (!func_593(46))
		{
			if (iParam0 == 2085530337)
			{
				func_325(356, 0);
			}
			else if (iParam0 == -150591160)
			{
				func_325(402, 0);
			}
			else if (iParam0 == -323969289)
			{
				func_325(404, 0);
			}
			else if (iParam0 == 1504361882)
			{
				func_325(406, 0);
			}
		}
		else if (func_603(iParam0, -1238404098))
		{
			func_1113(1611247019);
			if (func_1114() == 3)
			{
				func_367(0, 10);
				iVar1 = func_1115(iParam0, iParam1, 8);
				if (((iParam0 == 2085530337 || iParam0 == -150591160) || iParam0 == -323969289) || iParam0 == 1504361882)
				{
					if (func_1116(iParam0) < func_1117(iParam0))
					{
						func_599(43, iParam0, iParam1, 1611247019, iVar1, 0, -1, 0);
						func_601(43, 0, 0, iVar1, 50, 1, 0);
					}
				}
			}
		}
		if (!func_593(47))
		{
			if (iParam0 == -1521783510)
			{
				func_325(396, 0);
			}
			else if (iParam0 == 1714875242)
			{
				func_325(397, 0);
			}
			else if (iParam0 == 927763737)
			{
				func_325(405, 0);
			}
			else if (iParam0 == 1019229063)
			{
				func_325(403, 0);
			}
		}
		else if (func_603(iParam0, 1160548794))
		{
			func_1113(1319635688);
			if (func_1114() == 4)
			{
				func_367(0, 10);
				iVar1 = func_1115(iParam0, iParam1, 16);
				if (((iParam0 == -1521783510 || iParam0 == 1714875242) || iParam0 == 927763737) || iParam0 == 1019229063)
				{
					if (func_1116(iParam0) < func_1117(iParam0))
					{
						func_599(43, iParam0, iParam1, 1319635688, iVar1, 0, -1, 0);
						func_601(43, 0, 0, iVar1, 25, 1, 0);
					}
				}
			}
		}
	}
}

void func_630(int iParam0)
{
	if (iParam0 == 2116770557)
	{
		if (!func_1118(_0x126cbebba46693cf(iVar0, 2114735110, 0)) >= 25)
		{
			func_1119(_0x126cbebba46693cf(iVar0, 2114735110, 0), 1);
			func_1071(48);
		}
	}
}

void func_631(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar0 = _0x126cbebba46693cf(iVar1, 678508515, -1160144609);
		if (func_347(func_1120(iVar0, 10), 1, 0))
		{
			if (bParam2)
			{
				func_1121(iParam0, iVar0, sVar2, iParam1, bParam2);
			}
			else
			{
				func_1122(iParam0, iVar0, bParam3);
			}
		}
		iVar1++;
	}
}

void func_632(int iParam0, int iParam1, int iParam2)
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
				func_623(0, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, iVar0);
				return;
			}
		}
	}
	switch (iParam0)
	{
		case 489075255:
			func_623(-949580860, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1394529493:
			func_623(-1171997683, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1262623627:
			func_623(-2140931002, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1124867377:
			func_623(-1116228267, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1790920086:
			func_623(2112896861, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -2001202686:
			func_623(-1915150712, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1111063991:
			func_623(994220262, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1576210101:
			func_623(-1388440107, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 675090918:
			func_623(-1531790128, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 355838765:
			func_623(1351791770, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -343824903:
			func_623(-161493966, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1142684684:
			func_623(668131102, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1243851340:
			if (!func_1123())
			{
				func_623(1330954593, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			}
			break;
		case -525490740:
			func_623(817681514, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1736635264:
			func_623(1404311868, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1302860970:
			func_623(-175152067, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -1027115192:
			func_623(-526915387, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -1064332555:
			func_623(101362741, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -1954478446:
			func_623(1458818027, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -518592739:
			func_623(-1957208512, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -2010073778:
			func_623(2066857461, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -700133011:
			func_623(803940201, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -1415414735:
			func_623(-1717765429, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case 2045548742:
			func_623(1379920914, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case 830381058:
			func_623(447209691, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
	}
}

void func_633(int iParam0)
{
	if (func_593(41))
	{
		func_325(363, 0);
	}
	else
	{
		func_325(362, 0);
	}
	switch (iParam0)
	{
		case 323124696:
			func_1124(-1865241121);
			func_1125(-642026005);
			func_1126(-642026005);
			func_367(0, 10);
			break;
		case -2108314374:
			func_1124(2117142684);
			func_1125(-940584364);
			func_1126(-940584364);
			func_367(0, 10);
			break;
		case -1193798153:
			func_1124(-1409326024);
			func_1125(1972645282);
			func_1126(1972645282);
			func_367(0, 10);
			break;
		case -787702678:
			func_1124(-641744968);
			func_1125(1667205433);
			func_1126(1667205433);
			func_367(0, 10);
			break;
		case -804542901:
			func_1124(-946988203);
			func_1125(1362715885);
			func_1126(1362715885);
			func_367(0, 10);
			break;
		case -1696275132:
			func_1124(-646136018);
			func_1125(1053540370);
			func_1126(1053540370);
			func_367(0, 10);
			break;
		case -161595323:
			func_1124(-955835837);
			func_1125(-1100103852);
			func_1126(-1100103852);
			func_367(0, 10);
			break;
		case -1114363619:
			func_1124(-179276075);
			func_1125(-1409869209);
			func_1126(-1409869209);
			func_367(0, 10);
			break;
		case -368407134:
			func_1124(-492711560);
			func_1125(-1760235357);
			func_1126(-1760235357);
			func_367(0, 10);
			break;
		case 1997759228:
			func_1124(1764383959);
			func_1125(-138366827);
			func_1126(-138366827);
			func_367(0, 10);
			break;
		case 1265573293:
			func_1124(317501533);
			func_1125(-1261163843);
			func_1126(-1261163843);
			func_367(0, 10);
			break;
		case -1030441283:
			func_1124(817753087);
			func_1125(-963523016);
			func_1126(-963523016);
			func_367(0, 10);
			break;
		case -1490884871:
			func_1124(576606016);
			func_1125(560825326);
			func_1126(560825326);
			func_367(0, 10);
			break;
		case -395458616:
			func_1124(814934957);
			func_1125(858269539);
			func_1126(858269539);
			break;
	}
}

void func_634(int iParam0, int iParam1)
{
	func_1127(iParam0, iParam1, &uVar0);
}

bool func_635(int iParam0, bool bParam1)
{
	Var3.f_9 = -1591664384;
	bVar17 = false;
	*iParam0 = 0;
	iVar18 = func_1094(get_player_ped(get_player_index()), 2, 1, 0);
	iVar19 = func_1094(get_player_ped(get_player_index()), 3, 1, 0);
	if (func_1128("ALL WEAPONS", &iVar0, &iVar1, -1591664384, 0))
	{
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (func_1129(&Var3, iVar2, iVar0, iVar1))
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
						func_1130(iVar0);
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

void func_636()
{
	_0x11a7ff918ef6bc66(player_id(), (1f - Global_40.f_11095.f_60));
}

void func_637()
{
	fVar0 = Global_40.f_11095.f_62;
	fVar1 = (Global_40.f_11095.f_62 + Global_40.f_11095.f_61);
	_0x497a6539bb0e8787(player_id(), (1f - fVar0), (1f - fVar1));
}

void func_638()
{
	_0xe0d6c2a146a5c993(player_id(), (1f / (1f + Global_40.f_11095.f_58)));
}

void func_639()
{
	_0xb427911ea6dffef3(player_id(), (1f - Global_40.f_11095.f_63));
}

void func_640()
{
	func_1131();
	func_1132();
	func_1133();
}

void func_641(int iParam0, int iParam1, bool bParam2)
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

void func_642(int iParam0, bool bParam1)
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

void func_643(int iParam0)
{
	Global_40.f_12004.f_7 = (Global_40.f_12004.f_7 || iParam0);
}

void func_644(int iParam0)
{
	Global_40.f_12004.f_8 = (Global_40.f_12004.f_8 || iParam0);
}

void func_645(int iParam0)
{
	Global_40.f_12004.f_9 = (Global_40.f_12004.f_9 || iParam0);
}

void func_646(int iParam0)
{
	Global_40.f_12004.f_10 = (Global_40.f_12004.f_10 || iParam0);
}

void func_647(int iParam0)
{
	Global_40.f_12004.f_11 = (Global_40.f_12004.f_11 || iParam0);
}

void func_648(int iParam0)
{
	Global_40.f_12004.f_12 = (Global_40.f_12004.f_12 || iParam0);
}

int func_649(int iParam0)
{
	if (!func_583(iParam0, 0))
	{
		return 0;
	}
	return iParam0;
}

void func_650(int iParam0, int iParam1, bool bParam2)
{
	func_687(iParam0, &iVar0, &iVar1);
	if (!func_688(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_1134(iParam0, 1024))
	{
		return;
	}
	func_689(iVar0, iVar1);
	Global_1905944->f_22[iParam0]->f_3[0] = iParam1;
	Global_1905944->f_22[iParam0]->f_3[0]->f_1 = 2;
}

void func_651(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	func_687(iParam0, &iVar0, &iVar1);
	if (!func_688(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_1134(iParam0, 1024))
	{
		return;
	}
	func_689(iVar0, iVar1);
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

int func_652()
{
	iVar0 = _0x5461c821d00fe15a(-2076669067, 0);
	if (iVar0 == func_1069())
	{
		return func_653();
	}
	iVar4 = (func_1069() - iVar0);
	iVar5 = get_random_int_in_range(0, iVar4);
	iVar2 = 0;
	while (iVar2 < func_1069())
	{
		iVar1 = _0x126cbebba46693cf(iVar2, -2076669067, 0);
		if (!func_1135(iVar1))
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

int func_653()
{
	iVar0 = get_random_int_in_range(0, func_1069());
	return func_1070(_0x126cbebba46693cf(iVar0, -2076669067, 0));
}

void func_654(int iParam0)
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

bool func_655(int iParam0, int iParam1, int iParam2)
{
	if (!func_583(iParam0, 0))
	{
		return false;
	}
	if (iParam1 < 1)
	{
		return false;
	}
	Var0 = { func_470(iParam0, 0, 1) };
	Var5 = { func_964(iParam0, Var0, Var0.f_4, 0) };
	return func_1136(iParam0, &Var5, &Var0, iParam1, iParam2, 0);
}

void func_656(int iParam0)
{
	if (func_20() != -1)
	{
		return;
	}
	switch (func_607(iParam0))
	{
		case 81053684:
			if (iParam0 == -1623728698 && func_1137(81053684, 0) <= 0)
			{
				func_475(32, iParam0, 0, 0, 0);
			}
			break;
		case -2061583405:
			if (iParam0 == -1535516064 || iParam0 == -763730846)
			{
				func_475(32, iParam0, 0, 0, 0);
			}
			break;
		case -999503751:
			iVar0 = func_959(iParam0);
			if (func_954(iVar0))
			{
				func_1138(iVar0, (iVar0 >= 0 && iVar0 <= 5), 1);
			}
			else
			{
				func_475(30, iParam0, 0, 0, 0);
			}
			if (func_682() == -2125499975 || func_682() == -449205311)
			{
				switch (iParam0)
				{
					case 624063935:
					case 1160643979:
					case 1661121390:
						func_475(32, iParam0, 0, 0, 0);
						break;
				}
			}
			else if (func_682() == 1160113249)
			{
				switch (iParam0)
				{
					case -361635024:
						func_475(32, iParam0, 0, 0, 0);
						break;
				}
			}
			break;
		case -525676072:
			if (!func_1139(-525676072, 0))
			{
				if (func_1140(-525676072, &iVar1))
				{
					func_475(33, iVar1, 0, 0, 0);
				}
			}
			func_475(32, iParam0, 0, 0, 0);
			break;
	}
	if ((iParam0 == 899611344 || iParam0 == -1515874150) || iParam0 == -1185145312)
	{
		if (!func_1141(99217379))
		{
			func_187(Global_35, iParam0, 0, 99217379, 1, 1, 1, 0, 1, 1);
		}
		func_606(24);
		if (func_635(&iVar2, 0))
		{
			func_612(iVar2, 0, 0, 1, 3, 0, 752097756, 0);
		}
	}
}

void func_657(int iParam0)
{
	if (func_603(iParam0, 943695443))
	{
		func_1142(0, iParam0);
	}
	else if (func_603(iParam0, -2096528786))
	{
		func_1142(1, iParam0);
	}
	else if (func_603(iParam0, -1094167013))
	{
		func_1142(2, iParam0);
	}
	else if (func_603(iParam0, 1936654645))
	{
		func_1142(3, iParam0);
	}
	else if (func_603(iParam0, 1306489306))
	{
		func_1142(4, iParam0);
	}
	else if (func_603(iParam0, 435762317))
	{
		func_1142(5, iParam0);
	}
	else if (func_603(iParam0, 1259363210))
	{
		func_1142(6, iParam0);
	}
	else if (func_603(iParam0, 881398259))
	{
		func_1142(7, iParam0);
	}
	else if (func_603(iParam0, -541549214))
	{
		func_1142(8, iParam0);
	}
	else if (func_603(iParam0, 130796156))
	{
		func_1142(-1, iParam0);
	}
}

int func_658(int iParam0, int iParam1)
{
	Var4.f_1 = 10;
	func_1143(&Var4, 1356624740);
	return func_1144(iParam0, &Var4, &uVar0, iParam1);
}

struct<2> func_659(int iParam0)
{
	if (!func_583(iParam0, 0))
	{
		return Var0;
	}
	if (func_603(iParam0, -305066475))
	{
		if (func_20() == -1)
		{
			if (func_603(iParam0, -537818634))
			{
				return func_94(189951448);
			}
			else
			{
				return func_94(1176172851);
			}
		}
	}
	else if (func_603(iParam0, -537818634))
	{
		return func_94(-963660207);
	}
	if (func_603(iParam0, 2084895747))
	{
		return func_94(1694039471);
	}
	return Var2;
}

void func_660(int iParam0)
{
	switch (iParam0)
	{
		case 236757114:
			if (func_20() == -1)
			{
				if (func_327((*Global_1835011)[4]->f_1, 1))
				{
					func_325(109, 1);
				}
			}
			break;
	}
}

void func_661(int iParam0, char* sParam1)
{
	sVar0 = func_1146(func_1145(0));
	func_707(_create_var_string(38, "ITEM_CAUGHT_PUMP", sParam1, sVar0), "inventory_items", func_1147(iParam0), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

void func_662(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (iParam0 == 1662813436)
	{
		return;
	}
	if (!func_583(iParam0, 0))
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
	if (!func_1148())
	{
		func_1149(iParam0, iParam1, bParam2, bParam4);
		return;
	}
	bVar0 = false;
	iVar1 = absi(iParam1);
	StringCopy(&cVar2, func_1150(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
	if (iParam1 > 0)
	{
	}
	else
	{
		if (bParam3 || bParam4)
		{
			StringCopy(&cVar2, func_1150(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
		}
		else if (bParam2 && func_604(iParam0, 2097152))
		{
			StringCopy(&cVar2, "ITEM_READ_PUMP_MULT", 32);
		}
		bVar0 = true;
	}
	iVar6 = func_602(iParam0);
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
	else if (!func_1151(iParam0, &Var7, iVar11, iVar10, 0, -401018458))
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
	sVar15 = func_1152(_create_var_string(10, &cVar2, _create_var_string(0, func_649(iParam0)), iVar1), iVar12);
	if (((((iParam1 == 1 || func_603(iParam0, 1443104131)) || iParam0 == -885810591) || iParam0 == -1424823393) || iParam0 == 1463786584) || iParam0 == 1358243310)
	{
		sVar15 = _create_var_string(0, func_649(iParam0));
	}
	func_707(sVar15, Var7.f_1, get_hash_key(Var7), iVar14, iVar12, "Transaction_Feed_Sounds", sVar13, 0, 1);
}

int func_663(int iParam0, int iParam1)
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

struct<10> func_664(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
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

bool func_665(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, int iParam10, int iParam11, int iParam12)
{
	*iParam10 = _item_database_create_item_collection(&uParam0, iParam11, iParam12);
	if (*iParam10 >= 0)
	{
		return true;
	}
	return false;
}

int func_666(int iParam0, int iParam1)
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

bool func_667(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!func_583(iParam0, 0))
	{
		return false;
	}
	if (iParam1 != 0 && !func_1153(iParam0, iParam1, 1))
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
				if (Var2.f_2 == 1644203656 && func_1153(iParam0, Var2, 1))
				{
					if (func_1154(iParam0, Var2))
					{
						bVar0 = true;
					}
				}
			}
			iVar49++;
		}
	}
	else if (func_1154(iParam0, iParam1))
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		if (!bParam2)
		{
			func_325(206, 0);
		}
	}
	if (bParam3)
	{
		if (!func_198(0, 0, 1))
		{
			func_367(1, 5);
		}
	}
	if (bVar0)
	{
		return true;
	}
	return false;
}

int func_668(int iParam0)
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

void func_669(int iParam0)
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
		func_325(iVar0, 0);
	}
}

void func_670()
{
	bVar0 = is_dlc_present(33819255);
	if (!bVar0)
	{
		if (_unlock_is_unlocked(-121456797))
		{
			_0xe824ce7d13fcb300(2116153146, 0);
			func_1155(0);
			_unlock_set_unlocked(-121456797, false);
			func_447();
		}
		return;
	}
	if (!func_327((*Global_1835011)[4]->f_1, 1))
	{
		return;
	}
	func_1156();
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
	func_1155(1);
}

void func_671()
{
	if (!func_327((*Global_1835011)[4]->f_1, 1))
	{
		return;
	}
	if (_unlock_is_unlocked(304788622))
	{
		return;
	}
	func_318(1351927599, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
	_unlock_set_unlocked(304788622, true);
	if (_unlock_is_unlocked(-1968398307))
	{
		return;
	}
	_unlock_set_unlocked(-1968398307, true);
}

void func_672()
{
	bVar0 = is_dlc_present(-751383868);
	if (!bVar0)
	{
		if (_unlock_is_unlocked(1244328330))
		{
			func_1157(0);
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
	if (!func_327((*Global_1835011)[4]->f_1, 1))
	{
		return;
	}
	_unlock_set_unlocked(1244328330, true);
	func_1157(1);
}

void func_673()
{
	bVar0 = is_dlc_present(-1499823613);
	if (!bVar0)
	{
		if (_unlock_is_unlocked(398807247))
		{
			func_1158(15000, 0, 0, 0, 1);
			func_1157(0);
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
	if (!func_327((*Global_1835011)[4]->f_1, 1))
	{
		return;
	}
	_unlock_set_unlocked(398807247, true);
	func_283(15000, 0, 1065353216, 1, 0, 0, 1, 752097756);
	func_1157(1);
}

void func_674()
{
	bVar0 = is_dlc_present(-679138445);
	if (bVar0)
	{
		if (_0xf83d3dda4d3c8169(-1491419385) > 0)
		{
			if ((!func_347(1191437462, 1, 0) && !func_192((*Global_1835011)[23]->f_1)) && !Global_43891)
			{
				func_318(1191437462, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			}
			if (!func_1159(1))
			{
				func_646(1);
			}
		}
		if (_0xf83d3dda4d3c8169(1809565830) > 0)
		{
			if ((!func_347(1119149048, 1, 0) && !func_192((*Global_1835011)[23]->f_1)) && !Global_43891)
			{
				func_318(1119149048, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			}
			if (!func_1159(2))
			{
				func_646(2);
			}
		}
		if (_0xf83d3dda4d3c8169(2056119786) > 0 && !func_1159(4))
		{
			func_646(4);
		}
		if (func_1159(0))
		{
			func_1160(0);
		}
	}
	else
	{
		if (_0xf83d3dda4d3c8169(-1491419385) > 0)
		{
			if (func_347(1191437462, 1, 0))
			{
				func_677(1191437462, 1, 1, -142743235, 0);
			}
		}
		if (_0xf83d3dda4d3c8169(1809565830) > 0)
		{
			if (func_347(1119149048, 1, 0))
			{
				func_677(1119149048, 1, 1, -142743235, 0);
			}
		}
		if (func_1159(1))
		{
			func_1160(1);
		}
		if (func_1159(2))
		{
			func_1160(2);
		}
		if (func_1159(4))
		{
			func_1160(4);
		}
		if (!func_1159(0))
		{
			func_646(0);
		}
	}
}

void func_675()
{
	bVar0 = _unlock_is_unlocked(240039223);
	if (!bVar0)
	{
		return;
	}
	if (!func_327((*Global_1835011)[4]->f_1, 1))
	{
		return;
	}
	if (_unlock_is_unlocked(-236259196))
	{
		return;
	}
	Var1 = { func_1161() };
	if (!_0xb881ca836cc4b6d4(&Var1))
	{
		func_610(127400949);
		if (func_612(127400949, 0, 0, 0, 0, 0, 752097756, 0))
		{
			Var1 = { func_1161() };
		}
	}
	if (_0xb881ca836cc4b6d4(&Var1))
	{
		func_1162(-2055673461, Var1, 1423542233);
		func_1162(-202131179, Var1, -1264898804);
		func_1162(2013836545, Var1, 1592019450);
		func_1162(1497476650, Var1, 1117400455);
		func_1162(1063571467, Var1, 1150213537);
		func_1162(2107224237, Var1, 1598825281);
		func_1162(1747981656, Var1, -712527121);
		func_1162(-1371140647, Var1, 454332195);
		func_1162(-19142973, Var1, 256105670);
		func_1162(-2074737817, Var1, -1328061889);
		func_1162(-1114256243, Var1, -782241404);
		func_1162(-1653277288, Var1, 1669853467);
		func_1162(1869398132, Var1, -1559225678);
		func_1162(459868358, Var1, -266425508);
		if (!_0x3ab6c7b0bb0df4b1(Global_35, -1) && !func_29())
		{
			get_current_ped_weapon(Global_35, &iVar15, false, 2, false);
			get_current_ped_weapon(Global_35, &iVar16, false, 0, false);
			if (func_441(iVar16))
			{
				if (iVar16 != 127400949)
				{
					if (_is_weapon_one_handed(iVar16))
					{
						if (func_605(24))
						{
							set_current_ped_weapon(Global_35, iVar16, true, 3, false, false);
						}
						set_current_ped_weapon(Global_35, 127400949, true, 0, false, false);
					}
					else if (_is_weapon_two_handed(iVar16))
					{
						if ((func_605(24) && func_441(iVar15)) && iVar15 != 127400949)
						{
							set_current_ped_weapon(Global_35, iVar15, true, 3, false, false);
						}
						set_current_ped_weapon(Global_35, 127400949, true, 2, false, false);
					}
				}
			}
			else if (!func_441(iVar15))
			{
				set_current_ped_weapon(Global_35, 127400949, true, 2, false, false);
			}
			else if (iVar15 != 127400949)
			{
				if (func_605(24))
				{
					set_current_ped_weapon(Global_35, iVar15, true, 3, false, false);
				}
				set_current_ped_weapon(Global_35, 127400949, true, 2, false, false);
			}
		}
		_unlock_set_unlocked(-236259196, true);
	}
}

void func_676()
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

int func_677(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	if (!func_583(iParam0, 0))
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
			func_662(iParam0, -iParam1, bVar0, bVar1, bVar2);
		}
		return 0;
	}
	if (!func_347(iParam0, 1, bParam4))
	{
		return 0;
	}
	Var5 = { func_659(iParam0) };
	if (_stat_id_is_valid(&Var5))
	{
		if ((func_587(iParam0, 0, 0) - iParam1) >= 0)
		{
			_0xbd861ae8a5181ed7(&Var5, iParam1);
		}
		else if ((func_587(iParam0, 0, 0) - iParam1) < 0)
		{
			func_677(iParam0, func_587(iParam0, 0, 0), bParam2, iParam3, bParam4);
			return 0;
		}
	}
	if (func_602(iParam0) == -427144552)
	{
		if (!func_1163(iParam0, iParam1, 0, iParam3))
		{
			return 0;
		}
	}
	else if (!func_1164(iParam0, iParam1, iParam3, bParam2, bParam4))
	{
		return 0;
	}
	if (iParam0 == -569063887)
	{
		Global_1935496->f_20 = 0;
	}
	if (!func_611(0))
	{
		bParam2 = true;
	}
	if (!bParam2 && iParam0 != 1309979101)
	{
		func_662(iParam0, -iParam1, bVar0, bVar1, bVar2);
	}
	func_1165(iParam0, iParam1);
	return 1;
}

bool func_678(int iParam0)
{
	switch (func_607(iParam0))
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

void func_679(int iParam0, bool bParam1, bool bParam2)
{
	switch (func_607(iParam0))
	{
		case -2061583405:
			bVar0 = func_1166(iParam0, &(Global_1946804->f_2657.f_21));
			break;
		case 81053684:
			bVar0 = func_1166(iParam0, &(Global_1946804->f_2657.f_23));
			break;
		case -999503751:
			bVar0 = func_1166(iParam0, &(Global_1946804->f_2657.f_20));
			break;
		case -525676072:
			bVar0 = func_1166(iParam0, &(Global_1946804->f_2657.f_22));
			break;
		case -1719060085:
			bVar0 = func_1166(iParam0, &(Global_1946804->f_2657.f_24));
			break;
		case -413129408:
			bVar0 = func_1166(iParam0, &(Global_1946804->f_2657.f_25));
			break;
	}
	if (!bVar0)
	{
		return;
	}
	if (bParam2)
	{
		func_1167();
	}
	if (bParam1)
	{
		func_1168(0, 0);
	}
}

int func_680(int iParam0)
{
	Var0 = { func_470(iParam0, 1, 0) };
	return func_471(Var0.f_4);
}

void func_681(int iParam0)
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
		iVar0 = func_472(iVar1, 1);
		if (iVar0 < 0 || iVar0 >= 39)
		{
		}
		else
		{
			func_977(Global_1946804->f_1378.f_1[iVar0], 2, 6);
		}
	}
}

int func_682()
{
	return Global_1946804->f_1;
}

bool func_683(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)
{
	Var4 = func_955(iParam6);
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
		func_1170(uParam0, func_1169(iVar0), 1);
	}
	while (_0xed4413cee1bf142c(&Var4))
	{
		if (!_0x44b3a36933ac009c(&iVar0, &Var4, 1409451727))
		{
		}
		else
		{
			iVar3 = iVar0;
			iVar1 = func_472(iVar3, 1);
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
							if (func_1171(iVar3) && func_1172(&(uParam0->f_1[iVar1]), iVar3, &iVar0))
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
							func_978(uParam0, &(uParam0->f_1[&Global_1946804->f_2612[iVar1]]), &(Global_1946804->f_2612[iVar1]), 0, 0);
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

Vector3 func_684(int iParam0, int iParam1)
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

int func_685(int iParam0, int iParam1)
{
	vVar0 = { func_684(iParam0, iParam1) };
	return vVar0.x;
}

void func_686(var uParam0, int iParam1, int iParam2)
{
	*Global_26796.f_26[iParam2]->f_1.f_1[iParam1] = { *uParam0 };
	Global_26796.f_26[iParam2]->f_1.f_1[iParam1]->f_2 = (Global_26796.f_26[iParam2]->f_1.f_1[iParam1]->f_2 - Global_26796.f_26[iParam2]->f_1.f_1[iParam1]->f_2 & 1);
}

void func_687(int iParam0, int iParam1, int iParam2)
{
	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

bool func_688(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return false;
	}
	if (func_1173(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_1174(iParam0))
	{
		return false;
	}
	if (func_1175(iParam0))
	{
		return false;
	}
	if ((Global_1898164->f_163 && !func_1134(iParam0, 1)) || func_82(32768))
	{
		if (!func_1134(iParam0, 262144) || !Global_1905944->f_5696)
		{
			return false;
		}
	}
	if (!func_1176())
	{
		return false;
	}
	return true;
}

void func_689(int iParam0, int iParam1)
{
	uVar0 = Global_1905944[iParam0];
	set_bit(&uVar0, iParam1);
	(*Global_1905944)[iParam0] = uVar0;
}

void func_690(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 = (uParam0->f_2 - (uParam0->f_2 && iParam1));
}

void func_691(int iParam0)
{
	func_977(Global_1946804->f_1497.f_1[func_472(iParam0, 1)], 2, 6);
	func_977(Global_1946804->f_1378.f_1[func_472(iParam0, 1)], 2, 6);
}

bool func_692(int iParam0)
{
	return iParam0 != 0;
}

int func_693(int iParam0)
{
	iVar0 = -1;
	if (!func_692(iParam0))
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

bool func_694(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

int func_695(int iParam0)
{
	return (shift_right(iParam0, 26) & 31 * func_1177(is_bit_set(iParam0, 31), -1, 1)) + 1898;
}

int func_696(int iParam0)
{
	return shift_right(iParam0, 22) & 15;
}

int func_697(int iParam0)
{
	return shift_right(iParam0, 17) & 31;
}

int func_698(int iParam0)
{
	return shift_right(iParam0, 12) & 31;
}

int func_699(int iParam0)
{
	return shift_right(iParam0, 6) & 63;
}

int func_700(int iParam0)
{
	return shift_right(iParam0, 0) & 63;
}

int func_701(int iParam0, int iParam1)
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

void func_702(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_1178(iParam0, iParam6);
	func_1179(iParam0, iParam5);
	func_1180(iParam0, iParam4);
	func_1181(iParam0, iParam3);
	func_1182(iParam0, iParam2);
	func_1183(iParam0, iParam1);
}

bool func_703(int iParam0)
{
	if (iParam0 == -15)
	{
		return false;
	}
	iVar0 = func_700(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return false;
	}
	iVar1 = func_699(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return false;
	}
	iVar2 = func_698(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return false;
	}
	iVar3 = func_695(iParam0);
	if ((iVar3 <= 0 || iVar3 > 1930) || iVar3 < 1866)
	{
		return false;
	}
	iVar4 = func_696(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return false;
	}
	iVar5 = func_697(iParam0);
	if (iVar5 < 1 || iVar5 > func_701(iVar4, iVar3))
	{
		return false;
	}
	return true;
}

bool func_704(int iParam0, bool bParam1)
{
	return func_939(func_285(), iParam0, bParam1);
}

void func_705(var uParam0, int iParam1)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

bool func_706(int iParam0, int iParam1)
{
	if (!func_583(iParam0, 0))
	{
		return false;
	}
	if (Global_1935630->f_12)
	{
		return false;
	}
	iVar0 = func_1067(iParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_1128("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_1129(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_441(Var4.f_4))
			{
			}
			else if (_get_ammo_type_for_weapon(Var4.f_4) == iVar0)
			{
				func_1130(iVar1);
				return true;
			}
			iVar3++;
		}
		func_1130(iVar1);
	}
	return false;
}

var func_707(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
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
	func_1184(sParam0, sParam1, iParam2);
	return uVar20;
}

int func_708()
{
	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar2 = func_436(iVar1);
		if (!_unlock_is_visible(func_1185(iVar2)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_709()
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		iVar1 = func_436(iVar0);
		if (!_unlock_is_visible(func_1185(iVar1)))
		{
			_unlock_set_visible(func_1185(iVar1), true);
		}
		iVar0++;
	}
}

bool func_710(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_1008(iParam0))
		{
			return false;
		}
	}
	return (Global_40.f_4942[iParam0] && iParam1) != 0;
}

void func_711(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_521(iParam0))
		{
			return;
		}
	}
	Global_40.f_4942[iParam0] = (Global_40.f_4942[iParam0] || iParam1);
}

bool func_712()
{
	return (func_199(&Global_1935630, 4096) || _get_number_of_references_of_script_with_name_hash(1637780761) > 0);
}

int func_713(var uParam0, int iParam1, int iParam2, int iParam3)
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
	if (!func_583(iVar0, 0))
	{
		return 0;
	}
	if (!func_1186(iVar0))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	iVar3 = 1;
	func_1187(iVar0, iVar1, &iVar3, 0);
	iVar4 = (iVar2 * iVar3);
	if (func_603(iVar0, 58855631))
	{
		iVar4 = iVar2;
	}
	Var5 = { func_470(iVar0, 0, 1) };
	iVar10 = func_1188(iVar0, &Var5, 0, 0);
	if (iVar10 == 0)
	{
		return 0;
	}
	else if (iVar10 < iVar4)
	{
		iVar2 = ceil((to_float(iVar10) / to_float(iVar3)));
		iVar4 = iVar10;
	}
	iVar11 = (func_1189(iVar0, iVar1, 1, 0, 0) * iVar2);
	if (iVar11 <= 0)
	{
		return 0;
	}
	if (!func_1190(iVar11))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	if (!func_318(iVar0, iVar4, 1, 0, 0, 1248274121, 0, 0, 0, 0))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	func_1158(iVar11, 0, 0, 0, 1);
	*iParam3 = (*iParam3 + iVar11);
	*iParam1 = (*iParam1 + iVar2);
	return 1;
}

var func_714(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
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

void func_715(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (is_string_null_or_empty(sParam1))
	{
		sParam1 = "FEED_MONEY_SPEND";
	}
	func_707(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 1831944558, 1, 859817522, 0, 0, 0, 1);
}

var func_716(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

void func_717(bool bParam0, bool bParam1)
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

void func_718(int iParam0, int iParam1, float fParam2, int iParam3)
{
	iVar0 = floor((to_float(iParam1) * fParam2));
	iVar1 = ((iParam1 - iVar0) / iParam3);
	if (func_1035())
	{
		iVar2 = floor((to_float(iVar1) * 0.1f));
		_uilog_add_total_take_entry(1072517412, 908516622, _create_var_string(2, "MISSION_COMPLETE_TAKE_GANG"), _create_var_string(2, "MISSION_COMPLETE_TAKE_AMOUNT", iVar0), -1689362167);
	}
	else
	{
		_uilog_add_total_take_entry(2067252994, 908516622, _create_var_string(2, "MISSION_COMPLETE_TAKE_GANG"), _create_var_string(2, "MISSION_COMPLETE_TAKE_AMOUNT", iVar0), -1689362167);
	}
	iVar3 = iVar1;
	if (func_1035())
	{
		iVar3 = (iVar3 + iVar2);
	}
	_0xe6dc9b21ac7a8729(func_194(iParam0), iVar3, iVar1, iParam3);
	iVar4 = func_272(iParam0);
	if (func_196(iParam0) != 1 || (iVar4 != 37 && iVar4 != 58))
	{
		_uilog_add_total_take_entry(-1391579956, 1997120069, _create_var_string(2, "MISSION_COMPLETE_TAKE_ARTHUR"), _create_var_string(2, "MISSION_COMPLETE_TAKE_AMOUNT", iVar3), 601389479);
	}
	switch (func_196(iParam0))
	{
		case 1:
			switch (iVar4)
			{
				case 25:
					func_1191(1, iVar1);
					func_1191(8, iVar1);
					func_1191(7, iVar1);
					break;
				case 12:
					func_1191(6, iVar1);
					break;
				case 53:
					func_1191(3, iVar1);
					func_1191(7, iVar1);
					func_1191(4, iVar1);
					break;
				case 20:
					func_1191(8, iVar1);
					break;
				case 19:
					func_1191(1, iVar1);
					func_1191(2, iVar1);
					break;
				case 24:
					func_1191(3, iVar1);
					func_1191(9, iVar1);
					func_1191(20, iVar1);
					break;
				case 28:
					func_1191(1, iVar1);
					break;
				case 34:
					func_1191(23, iVar1);
					func_1191(2, iVar1);
					func_1191(18, iVar1);
					break;
				case 29:
					func_1191(0, iVar1);
					func_1191(9, iVar1);
					break;
				case 37:
					break;
				case 58:
					break;
				case 57:
					func_1191(0, iVar1);
					func_1191(3, iVar1);
					func_1191(2, iVar1);
					func_1191(11, iVar1);
					func_1191(6, iVar1);
					func_1191(25, iVar1);
					func_1191(24, iVar1);
					break;
			}
			break;
		case 8:
			switch (iVar4)
			{
				case 94:
					func_1191(5, iVar1);
					break;
				case 63:
					func_1191(1, iVar1);
					func_1191(3, iVar1);
					break;
				case 37:
					func_1191(23, iVar1);
					break;
				case 116:
					break;
			}
			break;
		case 11:
			if (iParam0 == func_363(0, 10, 11, 2116153146))
			{
				func_1191(7, iVar1);
				func_1191(4, iVar1);
			}
			else if (iParam0 == func_363(0, 7, 11, -379687487))
			{
				func_1191(8, iVar1);
				func_1191(15, iVar1);
			}
			else if (iParam0 == func_363(0, 8, 11, -1386089015))
			{
				func_1191(3, iVar1);
			}
			else if (iParam0 == func_363(0, 11, 11, -1952009645))
			{
				func_1191(6, iVar1);
				func_1191(3, iVar1);
			}
			else if (iParam0 == func_363(0, 12, 11, 2065895756))
			{
				func_1191(9, iVar1);
			}
			break;
	}
	_uilog_set_total_take_summary(_create_var_string(2, "MISSION_COMPLETE_TAKE_TOTAL", iParam1), _create_var_string(2, "MISSION_COMPLETE_TAKE_TOTAL_GANG", func_1192()));
	if (!func_1193(629))
	{
		func_325(629, 0);
	}
}

int func_719(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_3;
	}
	return 0;
}

bool func_720(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 17)
	{
		return false;
	}
	return true;
}

bool func_721(int iParam0, int iParam1, var uParam2)
{
	if (!func_720(iParam0))
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

int func_722()
{
	if (Global_1572887->f_12 == -1)
	{
		return 771;
	}
	return 20001;
}

int func_723(int iParam0, int iParam1, int iParam2)
{
	return ((iParam2 & 31 || shift_left(iParam0 & 1023, 5)) || shift_left(iParam1 & 16383, 15));
}

int func_724(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (!func_1194(iParam2))
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
	if (iParam3 < 0 || iParam3 > func_722())
	{
		return -1;
	}
	iVar0 = func_723(iParam0, iParam1, iParam2);
	iVar1 = iParam3;
	func_492(iVar1, 0);
	func_562(iVar1, 0);
	func_1195(iVar1, 0);
	func_1196(iVar1, 0);
	func_1197(iVar1, iVar0);
	if (iParam4 != 0)
	{
		func_1198(iVar1, iParam4);
	}
	return iVar1;
}

int func_725(int iParam0, bool bParam1, int iParam2)
{
	if (iParam2 != -1)
	{
		return iParam2;
	}
	fVar0 = 1f;
	if (bParam1 && func_347(1811977508, 1, 0))
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
			if (func_583(iVar25, 0) && func_603(iVar25, -1921346699))
			{
				return ceil((IntToFloat(&Var1.f_12[iVar24]) * fVar0));
			}
		}
		iVar24++;
	}
	return 0;
}

void func_726(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

int func_727(int iParam0)
{
	if (!func_191(iParam0))
	{
		return 0;
	}
	cVar0 = func_365(iParam0);
	if (is_string_null_or_empty(&cVar0))
	{
		return 0;
	}
	iVar1 = get_hash_key(&cVar0);
	iVar2 = iVar1;
	return iVar2;
}

bool func_728(int iParam0)
{
	return _0x4dac398297981b87(iParam0);
}

Vector3 func_729(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, bool bParam13)
{
	fVar2 = 9999999f;
	func_1199(&bVar12, &uVar13);
	bVar14 = false;
	if (bVar12)
	{
		if (func_1200() == 0 && !func_1201(0))
		{
			bVar14 = true;
		}
	}
	if (!func_1202(15, &Var15))
	{
		return 0f, 0f, 0f;
	}
	_0x748c5f51a18cb8f0(0);
	Var20 = { Var15 };
	if (bParam7)
	{
		bVar10 = func_1203();
		if (_does_volume_exist(bVar10))
		{
		}
	}
	if (!func_1204(Global_1310720->f_21))
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
			vVar7 = { func_1205(iVar0, iVar1) };
			bVar11 = func_1206(iVar0, iVar1);
			bVar3 = vdist(vParam0, vVar7);
			if (((((bVar3 < fVar2 && bVar3 > bParam10) && !func_399(vVar7)) && func_1207(iVar0, bParam8, iParam12)) && !func_1208(iVar0)) || bVar11)
			{
				if (func_1209(vVar7, iVar0, iVar1, iParam5, iParam6, bVar14, bVar10, bParam9, bParam13))
				{
					vVar4 = { vVar7 };
					fVar2 = vdist(vParam0, vVar7);
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

int func_730(vector3 vParam0, bool bParam3)
{
	iVar0 = func_1210(vParam0);
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

void func_731()
{
	disable_script_brain_set(1);
}

void func_732()
{
}

void func_733()
{
	disable_script_brain_set(2);
}

bool func_734(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_735(char* sParam0)
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

void func_736(int iParam0)
{
	if (func_734(iParam0, 1))
	{
		func_1211(1);
	}
}

int func_737()
{
	return -1904156936;
}

bool func_738(int iParam0)
{
	if (!func_191(iParam0))
	{
		return false;
	}
	switch (func_196(iParam0))
	{
		case 1:
			iVar0 = func_272(iParam0);
			return (((((((((((((iVar0 == 38 || iVar0 == 39) || iVar0 == 43) || iVar0 == 0) || iVar0 == 1) || iVar0 == 3) || iVar0 == 4) || iVar0 == 60) || iVar0 == 59) || iVar0 == 77) || iVar0 == 64) || iVar0 == 44) || iVar0 == 42) || iVar0 == 67);
		case 8:
			iVar1 = func_272(iParam0);
			return (((iVar1 == 67 || iVar1 == 82) || iVar1 == 83) || iVar1 == 1);
	}
	return false;
}

int func_739()
{
	return 166188472;
}

int func_740()
{
	return 2015838421;
}

int func_741()
{
	return 207908017;
}

var func_742(var uParam0, char* sParam1, var uParam2, int iParam3, int iParam4)
{
	vVar0.x = iParam3;
	vVar0.f_1 = sParam1;
	vVar0.f_2 = uParam2;
	uVar3 = _0x9f2cc2439a04e7ba(uParam0, &vVar0, iParam4);
	return uVar3;
}

var func_743(var uParam0, char* sParam1, int iParam2, int iParam3)
{
	Var0 = iParam2;
	Var0.f_1 = sParam1;
	uVar3 = _0x815c4065ae6e6071(uParam0, &Var0, iParam3);
	return uVar3;
}

void func_744(var uParam0)
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

int func_745(var uParam0, int iParam1)
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

char* func_746(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return "";
	}
	if (is_entity_a_ped(iParam0))
	{
		return func_1212(get_ped_index_from_entity_index(iParam0));
	}
	else if (is_entity_an_object(iParam0))
	{
		return func_1213(get_object_index_from_entity_index(iParam0));
	}
	else if (is_entity_a_vehicle(iParam0))
	{
		return func_1214(get_vehicle_index_from_entity_index(iParam0));
	}
	return "";
}

int func_747(var uParam0, char* sParam1)
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

int func_748(var uParam0)
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

void func_749(var uParam0, int iParam1)
{
	uParam0->f_2054 = (uParam0->f_2054 || iParam1);
}

void func_750(var uParam0, int iParam1)
{
	uParam0->f_8 = (uParam0->f_8 || iParam1);
}

int func_751()
{
	return Global_1572864->f_8;
}

void func_752(var uParam0, int iParam1)
{
	func_1215(uParam0, iParam1);
	func_1216(uParam0, iParam1, 26);
}

int func_753(var uParam0)
{
	bVar0 = true;
	func_1217(100);
	if (!func_1218(100))
	{
		bVar0 = false;
	}
	if (!func_877(uParam0) == 0)
	{
		iVar1 = 53;
		while (iVar1 <= 63)
		{
			func_1217(func_415(iVar1));
			if (!func_1218(func_415(iVar1)))
			{
				bVar0 = false;
			}
			iVar1++;
		}
	}
	if (bVar0 == 0)
	{
		return 0;
	}
	iVar2 = 53;
	while (iVar2 <= 63)
	{
		if (func_877(uParam0) == 0)
		{
			iLocal_666[iVar2] = get_object_index_from_entity_index(func_1219(uParam0, func_444(func_415(iVar2)), 0));
		}
		else
		{
			func_1220(iVar2, 0);
		}
		iVar2++;
	}
	if (func_877(uParam0) == 2)
	{
		func_885(uParam0, 0);
		if (!vLocal_1100[0]->f_1 == 4)
		{
			bVar0 = false;
		}
	}
	if (!bVar0)
	{
		return 0;
	}
	return 1;
}

int func_754(var uParam0)
{
	return 1;
}

int func_755(var uParam0)
{
	if (!func_166(12))
	{
		func_176(1);
		func_439(12);
	}
	func_168(1);
	func_27(vLocal_614[3], 1);
	func_1221(0);
	iVar0 = 53;
	while (iVar0 <= 63)
	{
		func_440(iVar0, 0);
		iVar0++;
	}
	if (does_entity_exist(&(iLocal_666[67])))
	{
		detach_entity(&(iLocal_666[67]), true, true);
		func_440(67, 1);
	}
	func_1220(67, 1);
	set_entity_coords(&(iLocal_666[67]), -1648.3f, -1358f, 82.1f, true, false, true, true);
	func_1222(0);
	func_1223(2);
	func_1217(57);
	iLocal_212 = 0;
	func_27(vLocal_614[12], 0);
	func_1224(Global_35, func_185(1));
	return 1;
}

int func_756(var uParam0)
{
	if (is_task_move_network_active(Global_35))
	{
		func_1225("BeatHit", fVar1073);
	}
	func_1226();
	if (iLocal_211 < 26)
	{
		if (func_1227(iLocal_212))
		{
			func_1221(26);
		}
	}
	else if (iLocal_211 > 27 && iLocal_211 < 35)
	{
		if (func_1227(iLocal_212))
		{
			func_1221(35);
		}
	}
	if (!func_166(19))
	{
		if (func_877(uParam0) == 0)
		{
			func_169(1);
		}
	}
	if (iLocal_211 >= 0 && iLocal_211 <= 9)
	{
		if (is_entity_playing_anim(Global_35, func_1228(81), func_1229(81), 1))
		{
			if (!func_166(20) && _get_entity_anim_current_time(Global_35, func_1228(81), func_1229(81)) >= 0.62f)
			{
				_play_sound_from_entity(func_1230(1), Global_35, func_1230(0), false, 0, 0);
				func_439(20);
			}
			if (!func_166(21) && _get_entity_anim_current_time(Global_35, func_1228(81), func_1229(81)) >= 0.398f)
			{
				_play_sound_from_entity(func_1230(1), Global_35, func_1230(0), false, 0, 0);
				func_439(21);
			}
		}
		if (is_entity_playing_anim(&(vLocal_808[2]), func_1228(81), func_1229(81), 1))
		{
			if (!func_166(22) && _get_entity_anim_current_time(&(vLocal_808[2]), func_1228(81), func_1229(81)) >= 0.62f)
			{
				_play_sound_from_entity(func_1230(1), &(vLocal_808[2]), func_1230(0), false, 0, 0);
				func_439(22);
			}
			if (!func_166(23) && _get_entity_anim_current_time(&(vLocal_808[2]), func_1228(81), func_1229(81)) >= 0.398f)
			{
				_play_sound_from_entity(func_1230(1), &(vLocal_808[2]), func_1230(0), false, 0, 0);
				func_439(23);
			}
		}
	}
	switch (iLocal_211)
	{
		case 0:
			if (func_871(vLocal_614[11]) >= 2.135f)
			{
				func_168(20);
				func_168(21);
				func_168(22);
				func_168(23);
				func_1231(2);
				func_221(vLocal_614[11]);
				func_1221(1);
			}
			break;
		case 1:
			if (func_871(vLocal_614[11]) >= 1.435f)
			{
				func_168(20);
				func_168(21);
				func_168(22);
				func_168(23);
				func_1231(3);
				func_221(vLocal_614[11]);
				func_1221(2);
			}
			break;
		case 2:
			if (func_871(vLocal_614[11]) >= 1.435f)
			{
				func_168(20);
				func_168(21);
				func_168(22);
				func_168(23);
				func_1231(4);
				func_221(vLocal_614[11]);
				func_1221(3);
			}
			break;
		case 3:
			if (func_871(vLocal_614[11]) >= 1.435f)
			{
				func_168(20);
				func_168(21);
				func_168(22);
				func_168(23);
				func_1231(5);
				func_221(vLocal_614[11]);
				func_1221(4);
			}
			break;
		case 4:
			if (func_871(vLocal_614[11]) >= 1.435f)
			{
				func_168(20);
				func_168(21);
				func_168(22);
				func_168(23);
				func_1231(6);
				func_221(vLocal_614[11]);
				func_1221(5);
			}
			break;
		case 5:
			if (func_871(vLocal_614[11]) >= 1.435f)
			{
				func_168(20);
				func_168(21);
				func_168(22);
				func_168(23);
				func_1231(7);
				func_221(vLocal_614[11]);
				func_1221(6);
			}
			break;
		case 6:
			if (func_871(vLocal_614[11]) >= 1.435f)
			{
				func_168(20);
				func_168(21);
				func_168(22);
				func_168(23);
				func_1231(8);
				func_221(vLocal_614[11]);
				func_1221(7);
			}
			break;
		case 7:
			if (func_871(vLocal_614[11]) >= 1.435f)
			{
				func_168(20);
				func_168(21);
				func_168(22);
				func_168(23);
				func_1231(9);
				func_221(vLocal_614[11]);
				func_1221(8);
			}
			break;
		case 8:
			if (func_871(vLocal_614[11]) >= 1.301f)
			{
				func_168(20);
				func_168(21);
				func_168(22);
				func_168(23);
				func_558(vLocal_614[11]);
				func_1232("Intro", 2, 3, 1);
				func_1233();
				func_1220(64, 0);
				func_1220(65, 0);
				func_1223(12);
				attach_entity_to_entity(&(iLocal_666[64]), Global_35, get_ped_bone_index(Global_35, 7966), func_1234(0), func_1234(0), false, false, false, false, 2, true, false, false);
				attach_entity_to_entity(&(iLocal_666[65]), &(vLocal_808[2]), get_ped_bone_index(&(vLocal_808[2]), 7966), func_1234(0), func_1234(0), false, false, false, false, 2, true, false, false);
				_set_entity_coords_and_heading(&(vLocal_808[1]), -1652.747f, -1367.65f, 83.9652f, -34f, true, false, true);
				_0x9587913b9e772d29(&(vLocal_808[1]), 0);
				func_1235(&(vLocal_808[1]), 82, 1000f, -1000f, 1);
				_0x2208438012482a1a(&(vLocal_808[1]), true, false);
				func_1236(iVar895);
				func_1221(9);
			}
			break;
		case 9:
			if (!_0xf94692eb9dc15d74(&(vLocal_1100[2]), 0))
			{
			}
			else
			{
				func_1220(69, 1);
				func_1220(70, 1);
				func_27(vLocal_614[9], 1);
				func_1237(2, 0);
				func_1222(12);
				iLocal_898 = 0;
				fLocal_1073 = 1f;
				func_1238();
				if (does_entity_exist(&(iLocal_827[0])))
				{
					delete_vehicle(iLocal_827[0]);
				}
				if (!iVar1088 == 12)
				{
					func_1223(12);
				}
				func_1221(10);
				Jump @3166; //curOff = 1586
				if (!func_1239())
				{
				}
				else
				{
					func_1240();
					func_1221(11);
					Jump @3166; //curOff = 1610
					func_1241(&bVar0, &bVar1, 2);
					if (bVar0)
					{
						func_1221(12);
					}
					else if (bVar1)
					{
						func_1221(14);
					}
					Jump @3166; //curOff = 1647
					func_1242();
					func_1221(13);
					Jump @3166; //curOff = 1660
					func_1243(&bVar2);
					if (bVar2)
					{
						func_1221(10);
					}
					Jump @3166; //curOff = 1680
					func_1244(4);
					func_1245("carry");
					func_1221(15);
					Jump @3166; //curOff = 1702
					func_1246(&bVar3, 4);
					if (bVar3)
					{
						func_1247(0f, func_1234(24), func_1234(25), 0);
						func_1237(6, 0);
						func_1232("PutDown4", 2, 3, 1);
						func_1221(16);
					}
					Jump @3166; //curOff = 1758
					func_1248(1, 0);
					if (has_anim_event_fired(Global_35, -132528469))
					{
						func_27(vLocal_614[14], 0);
					}
					if (func_26(vLocal_614[14]))
					{
						detach_entity(&(iLocal_666[71]), true, true);
						if (func_871(vLocal_614[14]) >= (0.7142857f * 2f) && func_1249())
						{
							func_1250();
							func_1251(iVar895, 24, 0);
							func_1237(7, 0);
							func_1232("LoopingHammer", 2, 3, 1);
							func_1221(17);
						}
					}
					Jump @3166; //curOff = 1889
					if (func_1252())
					{
						func_1238();
						iLocal_898 = 1;
						func_1232("LoopingHammer", 4, 5, 1);
						func_1237(8, 0);
						func_1250();
						func_1251(iVar895, 24, 0);
						func_1223(13);
						func_1222(13);
						func_1221(20);
					}
					Jump @3166; //curOff = 1957
					if (func_1252())
					{
						_set_entity_coords_and_heading_no_offset(&(vLocal_808[1]), -1652.45f, -1367.612f, 83.0052f, -112.5f, false, true);
						task_play_anim(&(vLocal_808[1]), func_445(83, 1), func_445(83, 0), 1000f, -1000f, -1, 129, 0f, false, 0, false, 0, false);
						_0x2208438012482a1a(&(vLocal_808[1]), true, false);
						iLocal_898 = 2;
						fLocal_1073 = 2f;
						func_1232("Carry", 6, 7, 1);
						func_1237(9, 0);
						func_1236(iVar895);
						func_440(66, 1);
						func_440(73, 1);
						func_1233();
						func_1222(14);
						func_1223(14);
						func_1221(22);
					}
					Jump @3166; //curOff = 2123
					if (func_164())
					{
						func_165();
					}
					func_1246(&bVar3, 9);
					if (bVar3)
					{
						func_1247(0f, func_1234(24), func_1234(25), 0);
						func_1232("HammerWait", 8, 9, 1);
						func_1237(10, 0);
						func_1250();
						func_1251(iVar895, 24, 0);
						func_1221(23);
					}
					Jump @3166; //curOff = 2207
					if (func_1249())
					{
						func_1245("LoopingHammer");
						func_1221(24);
					}
					Jump @3166; //curOff = 2231
					if (func_1252())
					{
						iLocal_898 = 3;
						func_1236(iVar895);
						func_1232("LoopingHammer", 10, 11, 1);
						func_1250();
						func_1251(iVar895, 24, 0);
						func_1237(11, 0);
						func_1251(iVar895, 24, 0);
						func_1222(15);
						func_1221(25);
					}
					Jump @3166; //curOff = 2307
					if (func_1252())
					{
						func_1221(26);
					}
					Jump @3166; //curOff = 2323
					func_1220(81, 1);
					func_1220(65, 0);
					set_entity_visible(&(iLocal_666[81]), false);
					set_entity_visible(&(iLocal_666[65]), false);
					set_anim_scene_entity(&(vLocal_1100[3]), "Joist", &(iLocal_666[81]), 0);
					set_anim_scene_entity(&(vLocal_1100[3]), "HAMMER", &(iLocal_666[65]), 0);
					func_1253(3);
					task_start_scenario_at_position(&(vLocal_808[1]), -401573203, -1647.3f, -1360.1f, 83.45f, 56.9f, -1, false, true, 0, -1f, false);
					func_1221(27);
					Jump @3166; //curOff = 2465
					func_440(71, 0);
					if (func_164())
					{
						func_165();
					}
					func_1223(16);
					func_1254();
					func_440(66, 0);
					if (func_10(iVar1074))
					{
						func_11(&iLocal_1077, 1, 1);
					}
					if (func_10(iVar1076))
					{
						func_11(&iLocal_1079, 1, 1);
					}
					if (!is_entity_visible(&(iLocal_666[81])))
					{
						func_1255();
						set_entity_visible(&(iLocal_666[81]), true);
					}
					if (!is_entity_visible(&(iLocal_666[65])))
					{
						set_entity_visible(&(iLocal_666[65]), true);
					}
					func_1222(16);
					if (_0xf94692eb9dc15d74(&(vLocal_1100[3]), 0))
					{
						iLocal_212 = 1;
						func_27(vLocal_614[9], 1);
						iLocal_898 = 5;
						fLocal_1073 = 3f;
						func_1236(iVar895);
						_set_entity_coords_and_heading(Global_35, -1649.707f, -1345.414f, 83.9472f, 154.47f, true, false, true);
						_0x9587913b9e772d29(Global_35, 0);
						_set_entity_coords_and_heading(&(vLocal_808[2]), -1651.86f, -1349.322f, 83.9472f, -28.72f, true, false, true);
						_0x9587913b9e772d29(&(vLocal_808[2]), 0);
						func_1232("carry", 12, 13, 1);
						func_440(81, 0);
						func_440(65, 0);
						func_1237(12, 0);
						func_1222(17);
						func_1233();
						func_1223(17);
						func_1221(28);
					}
					Jump @3166; //curOff = 2788
					func_27(vLocal_614[15], 0);
					func_1246(&bVar3, 12);
					if (func_871(vLocal_614[15]) >= 4.29f)
					{
						if (func_1249())
						{
							func_11(&iLocal_1079, 1, 1);
							func_1238();
							_set_entity_coords_and_heading(Global_35, -1638.286f, -1351.69f, 83.9732f, 146.18f, true, false, true);
							func_1232("LoopingHammer", 14, 15, 1);
							func_1237(13, 0);
							func_1250();
							func_1251(iVar895, 24, 0);
							func_1221(29);
						}
					}
					Jump @3166; //curOff = 2920
					if (func_1252())
					{
						iLocal_898 = 6;
						func_1236(iVar895);
						func_1232("LoopingHammer", 16, 17, 1);
						func_1237(14, 0);
						func_1222(18);
						func_1250();
						func_1251(iVar895, 24, 0);
						func_1256(18);
						func_1221(30);
					}
					Jump @3166; //curOff = 2992
					if (func_1252())
					{
						iLocal_898 = 7;
						func_1236(iVar895);
						func_1257(16);
						func_1232("LoopingHammer", 18, 19, 1);
						func_1250();
						func_1251(iVar895, 24, 0);
						func_1222(19);
						func_1256(19);
						func_1221(33);
					}
					Jump @3166; //curOff = 3063
					if (func_1252())
					{
						iLocal_898 = 8;
						func_1232("LoopingHammer", 20, 21, 1);
						func_1237(17, 0);
						func_1222(20);
						func_1250();
						func_1251(iVar895, 24, 0);
						func_1223(20);
						func_1221(34);
					}
					Jump @3166; //curOff = 3129
					if (func_1252())
					{
						func_1221(35);
					}
					Jump @3166; //curOff = 3145
					func_1253(4);
					func_1221(36);
					iVar4 = 1;
				}
			}
			return iVar4;
			default:
				break;
	}
}

int func_757(var uParam0)
{
	func_558(vLocal_614[9]);
	func_558(vLocal_614[1]);
	return 1;
}

char* func_758(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 2:
			if (iParam1 == 0)
			{
				return "script@story@be22@ig@ig1_establishing_shot@ig1_establishing_shot";
			}
			else if (iParam1 == 1)
			{
				return "pbl_1_establishing_shot";
			}
			break;
		case 3:
			if (iParam1 == 0)
			{
				return "script@story@be22@ig@ig2_foundations@ig2_2_0_foundations";
			}
			else if (iParam1 == 1)
			{
				return "PL_Action";
			}
			break;
		case 4:
			if (iParam1 == 0)
			{
				return "script@story@be22@ig@ig2_foundations@ig2_2_1_foundations";
			}
			else if (iParam1 == 1)
			{
				return "";
			}
			break;
		case 5:
			if (iParam1 == 0)
			{
				return "script@story@be22@ig@ig2_foundations@ig2_2_2_foundations";
			}
			else if (iParam1 == 1)
			{
				return "pl_action";
			}
			break;
		case 6:
			if (iParam1 == 0)
			{
				return "script@story@be22@ig@ig2_foundations@ig2_2_3_foundations";
			}
			else if (iParam1 == 1)
			{
				return "pl_action";
			}
			break;
		case 7:
			if (iParam1 == 0)
			{
				return "script@story@be22@ig@ig3_finish_floor@ig3_1_1_finish_floor";
			}
			else if (iParam1 == 1)
			{
				return "pl_action";
			}
			break;
		case 8:
			if (iParam1 == 0)
			{
				return "script@story@be22@ig@ig3_finish_floor@ig3_1_2_finish_floor";
			}
			else if (iParam1 == 1)
			{
				return "pl_action";
			}
			break;
		case 9:
			if (iParam1 == 0)
			{
				return "script@story@be22@ig@ig3_finish_floor@ig3_1_3_finish_floor";
			}
			else if (iParam1 == 1)
			{
				return "pl_action";
			}
			break;
		case 10:
			if (iParam1 == 0)
			{
				return "script@story@be22@ig@ig4_wall_frames@ig4_wall_frames";
			}
			else if (iParam1 == 1)
			{
				return "pbl_1_raised_wall_frame";
			}
			break;
		case 11:
			if (iParam1 == 0)
			{
				return "script@story@be22@ig@ig4_wall_frames@ig4_wall_frames";
			}
			else if (iParam1 == 1)
			{
				return "pbl_2_raising_more_wall_frames";
			}
			break;
		case 12:
			if (iParam1 == 0)
			{
				return "script@story@be22@ig@ig5_finish_wall_frames_at_fire@ig5_finish_wall_frames_at_fire";
			}
			else if (iParam1 == 1)
			{
				return "pbl_1_finish_wall_frames_at_fire";
			}
			break;
		case 13:
			if (iParam1 == 0)
			{
				return "script@story@be22@ig@ig6_finish_wall_panels_at_fire@ig6_lumber_pass_balcony";
			}
			else if (iParam1 == 1)
			{
				return "plb_action";
			}
			break;
		case 14:
			if (iParam1 == 0)
			{
				return "script@story@be22@ig@ig6_finish_wall_panels_at_fire@ig6_finish_wall_panels_at_fire";
			}
			else if (iParam1 == 1)
			{
				return "pbl_1_finish_wall_panels_at_fire";
			}
			break;
		case 0:
			if (iParam1 == 0)
			{
				return "rbch2_rsc5";
			}
			else if (iParam1 == 1)
			{
				return "MultiStart";
			}
			break;
		case 1:
			if (iParam1 == 0)
			{
				return "rbch2_rsc11";
			}
			else if (iParam1 == 1)
			{
				return "MultiStart";
			}
			break;
	}
	return "";
}

void func_759(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10)
{
	func_140(uParam0, iParam1, iParam9);
	func_1258(uParam0, iParam1);
	func_1216(uParam0, iParam1, iParam2);
	func_1259(uParam0, &iParam3, iParam1, 0);
	func_1259(uParam0, &iParam4, iParam1, 2);
	func_1259(uParam0, &iParam5, iParam1, 4);
	func_1259(uParam0, &iParam6, iParam1, 5);
	func_1259(uParam0, &iParam7, iParam1, 7);
	func_906(uParam0, iParam1, 0);
	StringCopy(&cVar0, sParam8, 32);
	func_1260(uParam0, iParam1, cVar0);
	func_1261(uParam0, iParam1, iParam10);
}

int func_760(var uParam0)
{
	bVar0 = true;
	func_1224(Global_35, func_185(1));
	if (!func_1262(Global_35))
	{
		bVar0 = false;
	}
	func_1217(101);
	if (!func_1218(101))
	{
		bVar0 = false;
	}
	if (!bVar0)
	{
		return 0;
	}
	func_1253(4);
	func_1221(36);
	return 1;
}

int func_761(var uParam0)
{
	if (func_164())
	{
		func_165();
	}
	if (func_10(iVar1074))
	{
		func_11(&iLocal_1077, 1, 1);
	}
	if (func_10(iVar1076))
	{
		func_11(&iLocal_1079, 1, 1);
	}
	func_440(69, 0);
	func_440(70, 0);
	func_440(72, 0);
	func_440(73, 0);
	func_440(74, 0);
	func_440(64, 0);
	func_440(65, 0);
	func_440(66, 0);
	func_1254();
	func_1222(21);
	func_1256(21);
	func_1217(83);
	func_1217(84);
	func_1217(85);
	func_1217(86);
	func_1217(68);
	func_1217(69);
	func_1217(87);
	func_1217(88);
	func_1217(59);
	func_174(100);
	func_1217(101);
	if (does_entity_exist(&(iLocal_827[0])))
	{
		_set_entity_coords_and_heading(&(iLocal_827[0]), -1653.1f, -1333.2f, 83.9f, -156.5f, true, false, true);
		set_vehicle_on_ground_properly(&(iLocal_827[0]), 0f);
	}
	clear_ped_tasks_immediately(&(vLocal_808[1]), false, true);
	set_entity_coords(&(vLocal_808[1]), -1664.2f, -1344.4f, 84.1f, true, false, true, true);
	func_1255();
	return 1;
}

int func_762(var uParam0)
{
	func_1220(82, 0);
	func_27(vLocal_614[3], 1);
	if (!func_1218(101))
	{
		return 0;
	}
	iLocal_212 = 2;
	return 1;
}

int func_763(var uParam0)
{
	if (func_1227(iLocal_212) && !iLocal_211 == 61)
	{
		func_1221(61);
	}
	if (is_task_move_network_active(Global_35))
	{
		func_1225("BeatHit", fVar1073);
	}
	switch (iLocal_211)
	{
		case 36:
			if (_is_anim_scene_active(&(vLocal_1100[4])))
			{
				func_1253(5);
				func_1221(37);
			}
			break;
		case 37:
			if (_is_anim_scene_active(&(vLocal_1100[5])))
			{
				if (func_1262(Global_35))
				{
					func_1263(Global_35, 1, 0);
				}
				func_1224(Global_35, func_185(2));
				func_1253(6);
				func_1221(38);
			}
			break;
		case 38:
			func_1222(22);
			if (!_0xf94692eb9dc15d74(&(vLocal_1100[6]), 0))
			{
			}
			else
			{
				_set_entity_coords_and_heading(&(vLocal_808[1]), -1656.6f, -1340.4f, 83.2f, -128.2f, true, false, true);
				_0x9587913b9e772d29(&(vLocal_808[1]), 0);
				func_1235(&(vLocal_808[1]), 82, 1000f, -1056964608, 1);
				_set_entity_coords_and_heading(&(vLocal_808[2]), -1639.1f, -1339.806f, 84.095f, 178.3f, true, false, true);
				_0x9587913b9e772d29(&(vLocal_808[2]), 0);
				func_1235(&(vLocal_808[2]), 89, 1000f, -1056964608, 1);
				func_1220(68, 1);
				attach_entity_to_entity(&(iLocal_666[68]), &(vLocal_808[2]), get_ped_bone_index(&(vLocal_808[2]), 7966), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, false, false);
				func_1264();
				func_27(vLocal_614[9], 1);
				iLocal_898 = 9;
				func_1236(iVar895);
				func_1265("PickUp", 84, 1);
				func_1237(18, 0);
				func_1222(23);
				func_1266();
				func_1267();
				func_1268();
				iLocal_898 = 9;
				func_1248(1, 0);
				func_1221(39);
				Jump @1997; //curOff = 594
				func_1255();
				if (has_anim_event_fired(Global_35, 498453488))
				{
					func_1265("Place1", func_1269(iVar895), 1);
					func_27(vLocal_614[16], 0);
					func_1237(19, 0);
					func_1221(41);
				}
				Jump @1997; //curOff = 657
				if ((has_anim_event_fired(Global_35, 1849737431) || func_871(vLocal_614[16]) >= 0.2f) && func_1249())
				{
					func_558(vLocal_614[16]);
					func_1270("LoopingHammer");
					func_1221(42);
				}
				Jump @1997; //curOff = 732
				func_1271();
				if (!does_entity_exist(&(iLocal_666[66])))
				{
					func_1251(iVar895, 32, 0);
				}
				func_1237(20, 0);
				if (func_1272())
				{
					iLocal_898 = 10;
					func_1236(iVar895);
					func_1265("Place1", 85, 1);
					func_1257(21);
					set_entity_coords(&(vLocal_808[2]), -1663.6f, -1333.8f, 83.6f, true, false, true, true);
					func_440(66, 1);
					func_440(68, 1);
					clear_ped_tasks(&(vLocal_808[2]), 1, 0);
					func_1223(22);
					func_1222(24);
					func_1267();
					func_1221(43);
				}
				Jump @1997; //curOff = 884
				if (has_anim_event_fired(Global_35, 294724069))
				{
					func_1270("HammerWait");
					func_1221(44);
				}
				Jump @1997; //curOff = 916
				func_1271();
				if (!does_entity_exist(&(iLocal_666[66])))
				{
					func_1251(iVar895, 32, 0);
				}
				func_1237(22, 0);
				if (!func_1273())
				{
				}
				else
				{
					if (func_1249())
					{
						func_1270("LoopingHammer");
						func_1221(45);
					}
					Jump @1997; //curOff = 987
					if (func_1272())
					{
						func_1221(46);
					}
					Jump @1997; //curOff = 1003
					func_1253(7);
					func_1221(47);
					Jump @1997; //curOff = 1018
					if (func_164())
					{
						func_165();
					}
					set_entity_coords(&(vLocal_808[2]), -1657.5f, -1353.6f, 84f, true, false, true, true);
					func_1222(25);
					func_1223(23);
					func_1274(22);
					func_440(64, 0);
					func_440(66, 0);
					if (!_0xf94692eb9dc15d74(&(vLocal_1100[7]), 0))
					{
					}
					else
					{
						func_1268();
						iLocal_898 = 11;
						func_1236(iVar895);
						_set_entity_coords_and_heading(Global_35, -1638.77f, -1363.56f, 84.0289f, 326.2754f, true, false, true);
						func_1265("PickUp", 86, 1);
						func_1237(23, 0);
						func_1222(26);
						func_1267();
						func_1221(48);
						Jump @1997; //curOff = 1191
						func_1248(1, 0);
						if (has_anim_event_fired(Global_35, 498453488))
						{
							func_1265("Place1", func_1269(iVar895), 1);
							func_1237(24, 0);
							func_1266();
							func_1221(49);
						}
						Jump @1997; //curOff = 1248
						if (has_anim_event_fired(Global_35, 294724069))
						{
							func_1270("HammerWait");
							func_1221(50);
						}
						Jump @1997; //curOff = 1280
						func_1271();
						if (!does_entity_exist(&(iLocal_666[66])))
						{
							func_1251(iVar895, 32, 0);
						}
						func_1237(25, 0);
						if (!func_1273())
						{
						}
						else
						{
							if (func_1249())
							{
								func_1270("LoopingHammer");
								func_1251(iVar895, 32, 0);
								func_1221(51);
							}
							Jump @1997; //curOff = 1361
							if (func_1272())
							{
								iLocal_898 = 12;
								func_1265("Place1", func_1269(iVar895), 1);
								func_1237(26, 0);
								func_1266();
								func_440(66, 1);
								func_1223(24);
								func_1222(27);
								func_1267();
								func_1221(52);
							}
							Jump @1997; //curOff = 1432
							if (has_anim_event_fired(Global_35, 294724069))
							{
								func_1270("HammerWait");
								func_1221(53);
							}
							Jump @1997; //curOff = 1464
							func_1271();
							if (!does_entity_exist(&(iLocal_666[66])))
							{
								func_1251(iVar895, 32, 0);
							}
							func_1237(27, 0);
							if (!func_1273())
							{
							}
							else
							{
								if (func_1249())
								{
									func_1270("LoopingHammer");
									func_1251(iVar895, 32, 0);
									func_1221(54);
								}
								Jump @1997; //curOff = 1545
								if (func_1272())
								{
									iLocal_898 = 13;
									func_1267();
									func_1265("Place1", func_1269(iVar895), 1);
									func_1237(28, 0);
									func_1223(25);
									func_1222(28);
									func_1221(55);
								}
								Jump @1997; //curOff = 1605
								if (has_anim_event_fired(Global_35, 294724069))
								{
									func_1270("HammerWait");
									func_1221(56);
								}
								Jump @1997; //curOff = 1637
								func_1271();
								if (!does_entity_exist(&(iLocal_666[66])))
								{
									func_1251(iVar895, 32, 0);
								}
								func_1237(29, 0);
								if (!func_1273())
								{
								}
								else
								{
									if (func_1249())
									{
										func_1270("LoopingHammer");
										func_1251(iVar895, 32, 0);
										func_1221(57);
									}
									Jump @1997; //curOff = 1718
									if (func_1272())
									{
										iLocal_898 = 14;
										_set_entity_coords_and_heading_no_offset(Global_35, -1629.424f, -1361.905f, 83.9657f, 58.18f, false, true);
										func_1265("Place1", func_1269(iVar895), 1);
										func_1237(30, 0);
										func_1266();
										func_440(66, 1);
										func_1223(26);
										func_1222(29);
										func_1267();
										func_1221(58);
									}
									Jump @1997; //curOff = 1818
									if (has_anim_event_fired(Global_35, 294724069))
									{
										func_1270("HammerWait");
										func_1221(59);
									}
									Jump @1997; //curOff = 1850
									func_1271();
									if (!does_entity_exist(&(iLocal_666[66])))
									{
										func_1251(iVar895, 32, 0);
									}
									func_1237(31, 0);
									func_1266();
									set_entity_visible(&(iLocal_666[89]), false);
									set_entity_visible(&(iLocal_666[66]), true);
									if (!func_1273())
									{
									}
									else
									{
										if (func_1249())
										{
											func_1270("LoopingHammer");
											func_1251(iVar895, 32, 0);
											func_1221(60);
										}
										Jump @1997; //curOff = 1959
										if (func_1272())
										{
											func_1221(61);
										}
										Jump @1997; //curOff = 1975
										func_1253(8);
										func_1221(62);
										iVar0 = 1;
									}
								}
							}
						}
					}
				}
			}
			return iVar0;
			default:
				break;
	}
}

int func_764(var uParam0)
{
	if (func_164())
	{
		func_165();
	}
	func_174(83);
	func_174(84);
	func_174(85);
	func_174(69);
	func_1217(87);
	func_1217(88);
	func_174(89);
	func_558(vLocal_614[9]);
	func_558(vLocal_614[1]);
	return 1;
}

int func_765(var uParam0)
{
	bVar0 = true;
	func_1224(Global_35, func_185(2));
	if (!func_1262(Global_35))
	{
		bVar0 = false;
	}
	func_1217(102);
	if (!func_1218(102))
	{
		bVar0 = false;
	}
	if (!vLocal_1100[8]->f_1 == 4)
	{
		bVar0 = false;
	}
	if (!bVar0)
	{
		return 0;
	}
	func_1253(8);
	func_1221(62);
	return 1;
}

int func_766(var uParam0)
{
	if (func_164())
	{
		func_165();
	}
	func_440(82, 0);
	func_440(64, 0);
	func_440(66, 0);
	func_440(83, 0);
	func_440(84, 0);
	func_440(85, 0);
	func_440(86, 0);
	func_440(87, 0);
	func_440(88, 0);
	func_440(89, 0);
	func_1254();
	func_1222(30);
	func_1223(26);
	func_1217(102);
	func_174(101);
	func_1217(func_415(102));
	return 1;
}

int func_767(var uParam0)
{
	func_27(vLocal_614[3], 1);
	iLocal_212 = 3;
	return 1;
}

int func_768(var uParam0)
{
	if (is_task_move_network_active(Global_35))
	{
		func_1225("BeatHit", fVar1073);
	}
	if (iLocal_211 >= 64 && iLocal_211 < 77)
	{
		if (func_1227(iLocal_212))
		{
			func_1221(77);
		}
	}
	if (does_entity_exist(&(iLocal_666[iVar1087])))
	{
		if (func_1275(iVar1087))
		{
			func_1276(iVar1087, "Progress", fVar1071);
			func_1276(iVar1087, "Effort", fVar1072);
		}
	}
	switch (iLocal_211)
	{
		case 62:
			if (_is_anim_scene_active(&(vLocal_1100[8])))
			{
				func_1253(9);
				func_1221(63);
			}
			break;
		case 63:
			if (!func_166(36))
			{
				_set_entity_coords_and_heading_no_offset(Global_35, -1645.481f, -1369.56f, 84.4746f, -123.59f, false, true);
				_set_entity_coords_and_heading_no_offset(&(vLocal_808[2]), -1641.148f, -1372.24f, 84.4724f, 54.87f, false, true);
				_set_entity_coords_and_heading_no_offset(&(vLocal_808[1]), -1639.977f, -1370.077f, 84.4747f, 138.94f, false, true);
				_set_entity_coords_and_heading(&(vLocal_808[3]), -1638.885f, -1360.29f, 83.7647f, 176f, true, false, true);
				if (!_0x083d497d57b7400f(&(vLocal_808[3])))
				{
					freeze_entity_position(&(vLocal_808[3]), true);
				}
				_0x1d4636c90bbefacb(&(vLocal_808[2]), 1);
				func_1220(90, 0);
				set_entity_visible(&(iLocal_666[90]), false);
				iLocal_1090 = 90;
				if (func_1262(Global_35))
				{
					func_1263(Global_35, 1, 0);
				}
				func_1224(Global_35, func_185(3));
				func_1277("Intro", iVar1087, func_1234(34), func_1234(35), 1);
				func_439(36);
			}
			if (has_anim_event_fired(Global_35, -666960706))
			{
				func_1222(31);
			}
			if (_0xf94692eb9dc15d74(&(vLocal_1100[9]), 0))
			{
				if (func_163(&uLocal_902))
				{
					_0x9cf1836c03fb67a2(&uLocal_902, 0);
				}
				func_27(vLocal_614[9], 0);
				func_1266();
				func_1237(32, 0);
				func_1223(27);
				func_1222(32);
				set_entity_visible(&(iLocal_666[90]), true);
				func_1220(91, 0);
				func_1220(92, 0);
				set_entity_visible(&(iLocal_666[92]), false);
				func_1220(93, 0);
				set_entity_visible(&(iLocal_666[93]), false);
				func_1220(94, 0);
				set_entity_visible(&(iLocal_666[94]), false);
				func_1220(95, 0);
				func_1221(64);
			}
			break;
		case 64:
			if (func_1275(iVar1087))
			{
				func_1278("Lift", iVar1087);
				func_1221(65);
			}
			break;
		case 65:
			if (!func_1275(iVar1087))
			{
			}
			else
			{
				func_1279(32, &bVar0, &bVar1);
				if (bVar0)
				{
					func_1278("Drop", iVar1087);
					func_1221(66);
				}
				else if (bVar1)
				{
					func_1278("Placed", iVar1087);
					func_27(vLocal_614[11], 1);
					func_1221(67);
				}
				Jump @1857; //curOff = 802
				func_1237(33, 0);
				if (has_anim_event_fired(Global_35, 1382853318))
				{
					func_1280(1);
					func_1278("Lift", iVar1087);
					func_27(vLocal_614[11], 1);
					func_1221(65);
				}
				Jump @1857; //curOff = 861
				if (func_871(vLocal_614[11]) >= 1.45f)
				{
					func_1221(68);
				}
				Jump @1857; //curOff = 890
				func_1253(10);
				func_1221(69);
				Jump @1857; //curOff = 906
				func_1274(32);
				if (_0xf94692eb9dc15d74(&(vLocal_1100[10]), 0))
				{
					iLocal_1090 = 91;
					func_1237(34, 0);
					func_1280(0);
					func_1277("Lift", iVar1087, func_1234(36), func_1234(37), 1);
					func_1222(33);
					set_entity_coords(&(iLocal_666[90]), func_1234(22), true, false, true, true);
					set_entity_rotation(&(iLocal_666[90]), func_1234(23), 2, true);
					_set_entity_coords_and_heading(&(vLocal_808[3]), -1643.689f, -1368.751f, 86.7447f, -57f, true, false, true);
					if (!_0x083d497d57b7400f(&(vLocal_808[3])))
					{
						freeze_entity_position(&(vLocal_808[3]), true);
					}
					func_1221(70);
				}
				Jump @1857; //curOff = 1081
				if (!func_1275(iVar1087))
				{
				}
				else
				{
					func_1279(34, &bVar0, &bVar1);
					if (bVar0)
					{
						func_1278("Drop", iVar1087);
						func_1221(71);
					}
					else if (bVar1)
					{
						func_1278("Placed", iVar1087);
						func_27(vLocal_614[11], 1);
						func_1221(72);
					}
					Jump @1857; //curOff = 1167
					func_1237(35, 0);
					if (has_anim_event_fired(Global_35, 1382853318))
					{
						func_1280(1);
						func_1278("Lift", iVar1087);
						func_27(vLocal_614[11], 1);
						func_1221(70);
					}
					Jump @1857; //curOff = 1226
					if (func_871(vLocal_614[11]) >= 2.23f)
					{
						if (func_1249())
						{
							func_1253(11);
							func_1221(73);
						}
					}
					Jump @1857; //curOff = 1269
					if (!func_166(31))
					{
						func_1222(34);
						func_439(31);
					}
					else if (!func_166(32))
					{
						if (has_anim_event_fired(Global_35, -916365565))
						{
							func_1222(35);
							func_439(32);
						}
					}
					else if (!func_166(33))
					{
						if (has_anim_event_fired(Global_35, -1187922268))
						{
							func_1222(36);
							func_439(33);
						}
					}
					else if (!func_166(34))
					{
						if (has_anim_event_fired(Global_35, -1568960200))
						{
							func_1222(37);
							func_439(34);
						}
					}
					else if (!func_166(35))
					{
						if (has_anim_event_fired(Global_35, 1566934797))
						{
							func_1222(38);
							func_439(35);
						}
					}
					func_1274(34);
					if (_0xf94692eb9dc15d74(&(vLocal_1100[11]), 0))
					{
						iLocal_1090 = 95;
						func_1266();
						func_1237(36, 0);
						func_1222(39);
						func_440(90, 0);
						func_440(91, 0);
						func_440(92, 0);
						func_440(93, 0);
						func_440(94, 0);
						func_1223(28);
						func_1280(0);
						_set_entity_coords_and_heading(Global_35, -1647.168f, -1356.57f, 84.4706f, 146.41f, true, false, true);
						_set_entity_coords_and_heading(&(vLocal_808[3]), -1644.198f, -1356.028f, 86.0017f, -220f, true, false, true);
						if (!_0x083d497d57b7400f(&(vLocal_808[3])))
						{
							freeze_entity_position(&(vLocal_808[3]), true);
						}
						func_1277("Lift", iVar1087, func_1234(38), func_1234(39), 1);
						func_1221(74);
					}
					Jump @1857; //curOff = 1661
					if (!func_1275(iVar1087))
					{
					}
					else
					{
						func_1279(36, &bVar0, &bVar1);
						if (bVar0)
						{
							func_1278("Drop", iVar1087);
							func_1221(75);
						}
						else if (bVar1)
						{
							func_1278("Placed", iVar1087);
							func_27(vLocal_614[11], 1);
							func_1221(76);
						}
						Jump @1857; //curOff = 1747
						func_1237(37, 0);
						if (has_anim_event_fired(Global_35, 1382853318))
						{
							func_1280(0);
							func_1278("Lift", iVar1087);
							func_27(vLocal_614[11], 1);
							func_1221(74);
						}
						Jump @1857; //curOff = 1806
						if (func_871(vLocal_614[11]) >= 1.84f)
						{
							func_1221(77);
						}
						Jump @1857; //curOff = 1835
						func_1253(12);
						func_1221(78);
						iVar2 = 1;
					}
				}
			}
			return iVar2;
			default:
				break;
	}
}

int func_769(var uParam0)
{
	func_558(vLocal_614[9]);
	return 1;
}

int func_770(var uParam0)
{
	bVar0 = true;
	func_1224(Global_35, func_185(3));
	if (!func_1262(Global_35))
	{
		bVar0 = false;
	}
	func_1217(103);
	func_1217(func_415(102));
	if (!func_1218(103) || !func_1218(func_415(102)))
	{
		bVar0 = false;
	}
	if (!vLocal_1100[12]->f_1 == 4)
	{
		bVar0 = false;
	}
	if (!bVar0)
	{
		return 0;
	}
	func_1253(12);
	func_1221(78);
	return 1;
}

int func_771(var uParam0)
{
	if (_does_anim_scene_exist(&(vLocal_1100[11])))
	{
		func_1281(11);
	}
	if (func_10(iVar1074))
	{
		func_11(&iLocal_1077, 1, 1);
	}
	if (func_10(iVar1075))
	{
		func_11(&iLocal_1078, 1, 1);
	}
	func_1254();
	func_1222(40);
	func_1256(29);
	func_1217(103);
	func_174(102);
	func_1217(67);
	func_440(90, 0);
	func_440(91, 0);
	func_440(92, 0);
	func_440(93, 0);
	func_440(94, 0);
	func_440(95, 0);
	func_440(65, 0);
	func_440(67, 0);
	func_1220(102, 1);
	set_entity_visible(&(iLocal_666[102]), false);
	clear_ped_tasks_immediately(Global_35, false, true);
	set_entity_coords(Global_35, -1658f, -1376f, 83.9986f, true, false, true, true);
	clear_ped_tasks_immediately(&(vLocal_808[1]), false, true);
	set_entity_coords(&(vLocal_808[1]), -1657f, -1378f, 83.9943f, true, false, true, true);
	if (func_1262(Global_35))
	{
		func_1263(Global_35, 1, 0);
	}
	func_1224(Global_35, func_185(4));
	return 1;
}

int func_772(var uParam0)
{
	func_27(vLocal_614[3], 1);
	return 1;
}

int func_773(var uParam0)
{
	if (is_task_move_network_active(Global_35))
	{
		func_1225("BeatHit", fVar1073);
	}
	if (!iLocal_211 == 89)
	{
		if (func_1227(4))
		{
			func_1221(89);
		}
	}
	switch (iLocal_211)
	{
		case 78:
			if (_0xf94692eb9dc15d74(&(vLocal_1100[12]), 0))
			{
				freeze_entity_position(Global_35, true);
				func_1217(75);
				func_27(vLocal_614[9], 0);
				iLocal_212 = 4;
				iLocal_898 = 15;
				func_1237(38, 0);
				func_1222(41);
				func_1282();
				func_1283("Place1", func_1234(40), func_1234(41), 1);
				set_entity_coords(&(vLocal_808[2]), -1675.2f, -1334.6f, 83.3f, true, false, true, true);
				set_entity_coords(&(vLocal_808[1]), -1676.1f, -1335.6f, 83.9f, true, false, true, true);
				func_1221(79);
			}
			break;
		case 79:
			func_1248(1, 0);
			if (func_166(41))
			{
				if (func_1249())
				{
					func_1283("LoopingHammer1", func_1234(40), func_1234(41), 1);
					func_1237(39, 0);
					func_1284();
					func_1285();
					func_1251(iVar895, 50, 60);
					func_168(41);
					func_1221(80);
				}
			}
			else if (has_anim_event_fired(Global_35, -201440390))
			{
				func_439(41);
			}
			break;
		case 80:
			if (func_1286())
			{
				iLocal_898 = 16;
				func_1283("Place2", func_1234(42), func_1234(43), 1);
				func_1237(40, 0);
				func_1220(72, 1);
				set_entity_coords(&(iLocal_666[72]), -1647.855f, -1366.163f, 82.9648f, true, false, true, true);
				set_entity_quaternion(&(iLocal_666[72]), 0.683f, -0.183f, -0.183f, 0.683f);
				func_440(66, 1);
				func_1223(30);
				func_1222(42);
				func_1282();
				func_440(64, 0);
				func_27(vLocal_614[11], 1);
				func_168(41);
				func_1221(81);
			}
			break;
		case 81:
			if (func_166(41))
			{
				if (func_1249())
				{
					func_1283("LoopingHammer2", func_1234(42), func_1234(43), 1);
					func_1237(41, 0);
					func_1284();
					func_1251(iVar895, 52, 60);
					func_1285();
					func_168(41);
					func_1221(82);
				}
			}
			else if (has_anim_event_fired(Global_35, -201440390))
			{
				func_439(41);
			}
			break;
		case 82:
			if (func_1286())
			{
				iLocal_898 = 17;
				func_1283("Place3", func_1234(44), func_1234(45), 1);
				func_1237(42, 0);
				func_440(66, 1);
				func_440(72, 1);
				func_1223(31);
				func_1222(43);
				func_1282();
				func_440(64, 0);
				func_27(vLocal_614[11], 1);
				func_1221(83);
			}
			break;
		case 83:
			if (func_166(41))
			{
				if (func_1249())
				{
					func_1283("LoopingHammer3", func_1234(44), func_1234(45), 1);
					func_1237(43, 0);
					func_1284();
					func_1251(iVar895, 54, 60);
					func_1285();
					func_168(41);
					func_1221(84);
				}
			}
			else if (has_anim_event_fired(Global_35, -201440390))
			{
				func_439(41);
			}
			break;
		case 84:
			if (func_1286())
			{
				iLocal_898 = 18;
				func_1283("Place4", func_1234(46), func_1234(47), 1);
				func_1237(44, 0);
				func_440(66, 1);
				func_1223(32);
				func_1222(44);
				func_1282();
				func_440(64, 0);
				func_27(vLocal_614[11], 1);
				func_1221(85);
			}
			break;
		case 85:
			if (func_166(41))
			{
				if (func_1249())
				{
					func_1283("LoopingHammer4", func_1234(46), func_1234(47), 1);
					func_1237(45, 0);
					func_1284();
					func_1251(iVar895, 56, 60);
					func_1285();
					func_168(41);
					func_1221(86);
				}
			}
			else if (has_anim_event_fired(Global_35, -201440390))
			{
				func_439(41);
			}
			break;
		case 86:
			if (func_1286())
			{
				iLocal_898 = 19;
				func_1283("Place5", func_1234(48), func_1234(49), 1);
				func_1237(46, 0);
				func_440(66, 1);
				func_1223(33);
				func_1222(45);
				func_1282();
				func_440(64, 0);
				func_27(vLocal_614[11], 1);
				func_1221(87);
			}
			break;
		case 87:
			if (func_166(41))
			{
				if (func_1249())
				{
					func_1283("LoopingHammer5", func_1234(48), func_1234(49), 1);
					func_1237(47, 0);
					func_1284();
					func_1251(iVar895, 58, 60);
					func_1285();
					func_168(41);
					func_1221(88);
				}
			}
			else if (has_anim_event_fired(Global_35, -201440390))
			{
				func_439(41);
			}
			break;
		case 88:
			if (func_1286())
			{
				func_27(vLocal_614[11], 1);
				func_1221(89);
			}
			break;
		case 89:
			func_1253(13);
			func_1221(90);
			iVar0 = 1;
			break;
	}
	return iVar0;
}

int func_774(var uParam0)
{
	func_1254();
	func_1287(96, 101);
	func_558(vLocal_614[9]);
	func_558(vLocal_614[1]);
	return 1;
}

int func_775(var uParam0)
{
	bVar0 = true;
	func_1224(Global_35, func_185(4));
	if (!func_1262(Global_35))
	{
		bVar0 = false;
	}
	func_1217(104);
	func_1217(105);
	func_1217(func_415(102));
	if ((!func_1218(104) || !func_1218(105)) || !func_1218(func_415(102)))
	{
		bVar0 = false;
	}
	func_885(uParam0, 13);
	func_885(uParam0, 14);
	if (!vLocal_1100[13]->f_1 == 4 || !vLocal_1100[14]->f_1 == 4)
	{
		bVar0 = false;
	}
	if (!bVar0)
	{
		return 0;
	}
	func_1220(102, 1);
	func_1253(13);
	func_1221(90);
	return 1;
}

int func_776(var uParam0)
{
	func_1217(70);
	func_1217(69);
	func_1217(60);
	if (func_164())
	{
		func_165();
	}
	func_1254();
	func_1222(46);
	func_1256(34);
	func_1217(104);
	func_1217(105);
	func_174(103);
	set_entity_visible(&(iLocal_666[102]), true);
	iVar0 = 96;
	while (iVar0 <= 101)
	{
		func_440(iVar0, 0);
		iVar0++;
	}
	func_440(64, 0);
	func_440(66, 0);
	if (func_1262(Global_35))
	{
		func_1263(Global_35, 1, 0);
	}
	func_1224(Global_35, func_185(5));
	func_455(255093300);
	func_456(1344772301);
	return 1;
}

int func_777(var uParam0)
{
	func_1288(uParam0, func_758(1, 1));
	func_27(vLocal_614[3], 1);
	func_99(uParam0, 4194304);
	return 1;
}

int func_778(var uParam0)
{
	if (!func_166(44))
	{
		if (!vLocal_1100[1]->f_1 == 4)
		{
			func_885(uParam0, 1);
		}
		else
		{
			func_420(&(uParam0->f_7375), 200f);
			func_421(&(uParam0->f_7375), (func_1289(&(uParam0->f_7375)) * 1.5f));
			if (func_8(uParam0, 4194304))
			{
				func_867(uParam0, 4194304);
			}
			func_439(44);
		}
	}
	else
	{
		func_1290(&(uParam0->f_7375), func_758(1, 0), 1, 0);
	}
	if (is_task_move_network_active(Global_35))
	{
		func_1225("BeatHit", fVar1073);
	}
	fVar0 = 212f;
	if (is_pc_version())
	{
		fVar0 = 216f;
	}
	if (iLocal_211 < 110 && func_871(vLocal_614[13]) >= fVar0)
	{
		if (iLocal_212 == 5)
		{
			iLocal_212 = 5;
			func_27(vLocal_614[9], 1);
			func_1221(110);
			iLocal_212 = 6;
		}
	}
	switch (iLocal_211)
	{
		case 90:
			if (_is_anim_scene_active(&(vLocal_1100[13])) || _0xf94692eb9dc15d74(&(vLocal_1100[13]), 0))
			{
				iVar2 = 119;
				while (iVar2 <= 139)
				{
					func_1220(iVar2, 1);
					iVar2++;
				}
				set_entity_lod_dist(&(iLocal_666[136]), 100);
				set_entity_lod_dist(&(iLocal_666[137]), 100);
				func_1253(14);
				func_1221(91);
			}
			break;
		case 91:
			func_1222(47);
			func_440(102, 0);
			func_174(75);
			if (_0xf94692eb9dc15d74(&(vLocal_1100[14]), 0))
			{
				iLocal_212 = 5;
				func_27(vLocal_614[9], 1);
				func_1264();
				iLocal_898 = 20;
				func_1236(iVar895);
				_set_entity_coords_and_heading(Global_35, -1647.44f, -1366.56f, 87.4596f, 358.9989f, true, false, true);
				func_1291("Intro", func_1234(61), func_1234(62), 1, 1);
				func_1292(1);
				func_1220(64, 0);
				attach_entity_to_entity(&(iLocal_666[64]), Global_35, get_ped_bone_index(Global_35, 7966), func_1234(0), func_1234(0), false, false, false, false, 2, true, false, false);
				func_1222(48);
				func_1237(48, 0);
				func_1220(105, 0);
				func_1220(106, 0);
				func_1220(107, 0);
				func_1220(108, 0);
				func_1220(109, 0);
				func_1220(110, 0);
				func_1220(111, 0);
				func_1220(112, 0);
				func_1220(113, 0);
				func_1220(114, 0);
				func_1220(115, 0);
				func_1220(116, 0);
				func_1220(117, 0);
				func_1220(118, 0);
				set_entity_coords(&(iLocal_666[105]), -1647.72f, -1365.97f, 86.5108f, true, false, true, true);
				set_entity_rotation(&(iLocal_666[105]), 17.0891f, -0.0653107f, -30.1096f, 2, true);
				func_1221(92);
			}
			break;
		case 92:
			if (get_task_move_network_event(Global_35, "IntroFinished"))
			{
				freeze_entity_position(Global_35, true);
				func_1291("Place1", func_1234(61), func_1234(62), 1, 1);
				func_1237(49, 0);
				func_27(vLocal_614[11], 1);
				func_168(42);
				func_168(45);
				func_1221(93);
			}
			break;
		case 93:
			if (!func_166(42))
			{
				if (has_anim_event_fired(Global_35, 732337703))
				{
					func_439(42);
				}
			}
			if (!func_166(45))
			{
				if (has_anim_event_fired(Global_35, -201440390))
				{
					func_439(45);
				}
			}
			if (func_166(42) && func_1249())
			{
				func_168(42);
				func_168(45);
				func_1291("LoopingHammer", func_1234(61), func_1234(62), 1, 1);
				func_1237(50, 0);
				func_1251(iVar895, 85, 0);
				func_1221(94);
			}
			break;
		case 94:
			if (func_1293())
			{
				iLocal_898 = 21;
				func_1236(iVar895);
				_set_entity_coords_and_heading(Global_35, -1640.736f, -1370.098f, 87.6316f, -37.37f, true, false, true);
				func_1291("Place1", func_1234(63), func_1234(64), 1, 1);
				func_1237(51, 0);
				func_440(66, 1);
				func_1222(49);
				func_1223(35);
				func_27(vLocal_614[11], 1);
				func_1221(95);
			}
			break;
		case 95:
			if (!func_166(42))
			{
				if (has_anim_event_fired(Global_35, 732337703))
				{
					func_439(42);
				}
			}
			if (!func_166(45))
			{
				if (has_anim_event_fired(Global_35, -201440390))
				{
					func_439(45);
				}
			}
			if (func_166(42) && func_1249())
			{
				func_168(42);
				func_168(45);
				func_1291("LoopingHammer", func_1234(63), func_1234(64), 1, 1);
				func_1237(52, 0);
				func_1251(iVar895, 85, 0);
				func_1221(96);
			}
			break;
		case 96:
			if (func_1293())
			{
				iLocal_898 = 22;
				_set_entity_coords_and_heading(Global_35, -1636.018f, -1364.51f, 90.0086f, -37.37f, true, false, true);
				func_1291("Place1", func_1234(65), func_1234(66), 1, 1);
				func_1237(53, 0);
				func_440(66, 1);
				func_1222(50);
				func_1223(36);
				func_27(vLocal_614[11], 1);
				func_1221(97);
			}
			break;
		case 97:
			if (!func_166(42))
			{
				if (has_anim_event_fired(Global_35, 732337703))
				{
					func_439(42);
				}
			}
			if (!func_166(45))
			{
				if (has_anim_event_fired(Global_35, -201440390))
				{
					func_439(45);
				}
			}
			if (func_166(42) && func_1249())
			{
				func_168(42);
				func_168(45);
				func_1291("LoopingHammer", func_1234(65), func_1234(66), 1, 1);
				func_1237(54, 0);
				func_1251(iVar895, 85, 0);
				task_start_scenario_at_position(&(vLocal_808[1]), -401573203, -1637f, -1352.6f, 83.5f, -23.3f, -1, false, true, 0, -1f, false);
				func_1221(98);
			}
			break;
		case 98:
			if (func_1293())
			{
				iLocal_898 = 23;
				_set_entity_coords_and_heading(Global_35, -1633.455f, -1354.717f, 87.5526f, 142.63f, true, false, true);
				func_1291("Place1", func_1234(67), func_1234(68), 1, 1);
				func_1237(55, 0);
				func_440(66, 1);
				func_1222(51);
				func_1223(37);
				func_27(vLocal_614[11], 1);
				func_1221(99);
			}
			break;
		case 99:
			if (!func_166(42))
			{
				if (has_anim_event_fired(Global_35, 732337703))
				{
					func_439(42);
				}
			}
			if (!func_166(45))
			{
				if (has_anim_event_fired(Global_35, -201440390))
				{
					func_439(45);
				}
			}
			if (func_166(42) && func_1249())
			{
				func_168(42);
				func_168(45);
				func_1291("LoopingHammer", func_1234(67), func_1234(68), 1, 1);
				func_1237(56, 0);
				func_1251(iVar895, 85, 0);
				func_1221(100);
			}
			break;
		case 100:
			if (func_1293())
			{
				_set_entity_coords_and_heading(Global_35, -1635.906f, -1362.638f, 90.0985f, 179f, true, false, true);
				_0x2208438012482a1a(Global_35, true, false);
				func_1291("PutDownTile_M", func_1234(73), func_1234(74), 0, 1);
				func_1237(61, 0);
				func_440(64, 0);
				func_440(66, 0);
				func_440(103, 0);
				func_1292(0);
				func_1222(54);
				func_1223(40);
				func_165();
				func_1248(0, 1);
				func_1221(105);
			}
			break;
		case 105:
			if (func_1294())
			{
				_set_entity_coords_and_heading(Global_35, -1638.771f, -1362.509f, 90.0985f, -1f, true, false, true);
				func_1291("PutDownTile_M", func_1234(75), func_1234(76), 0, 1);
				func_1237(62, 0);
				func_1223(41);
				func_1222(55);
				func_1221(106);
			}
			break;
		case 106:
			if (func_1294())
			{
				_set_entity_coords_and_heading(Global_35, -1640.466f, -1360.022f, 90.0985f, 179f, true, false, true);
				func_1291("PutDownTile_M", func_1234(77), func_1234(78), 0, 1);
				func_1237(63, 0);
				func_1223(42);
				func_1222(56);
				func_1221(107);
			}
			break;
		case 107:
			if (func_1294())
			{
				_set_entity_coords_and_heading(Global_35, -1642.049f, -1360.625f, 90.0985f, -1f, true, false, true);
				func_1291("PutDownTile_M", func_1234(79), func_1234(80), 0, 1);
				func_1237(64, 0);
				func_1223(43);
				func_1222(57);
				func_1221(108);
			}
			break;
		case 108:
			if (func_1294())
			{
				_set_entity_coords_and_heading(Global_35, -1643.83f, -1358.086f, 90.0985f, 179f, true, false, true);
				func_1291("PutDownTile_M", func_1234(81), func_1234(82), 0, 1);
				func_1295(65);
				func_1223(44);
				func_1222(58);
				func_1221(109);
			}
			break;
		case 109:
			if (func_1294())
			{
				func_1221(110);
			}
			break;
		case 110:
			_set_entity_coords_and_heading(Global_35, -1646.3f, -1358.17f, 90.0985f, 358.999f, true, false, true);
			func_1292(0);
			func_1291("PutDownTile_M", func_1234(83), func_1234(84), 0, 1);
			func_1295(66);
			func_1256(-1);
			iVar2 = 0;
			while (iVar2 <= 140)
			{
				if (iVar2 == 104)
				{
				}
				else
				{
					if (iVar2 >= 119 && iVar2 <= 139)
					{
						set_entity_coords(&(iLocal_666[iVar2]), _get_object_offset_from_coords(get_entity_coords(&(iLocal_666[iVar2]), true, false), 0f, 0f, 8f, 0f), true, false, true, true);
						if (iVar2 == 132)
						{
							set_entity_coords(&(iLocal_666[iVar2]), get_offset_from_entity_in_world_coords(&(iLocal_666[iVar2]), 0f, 0f, 0.1f), true, false, true, true);
						}
						_0xcaaf2bccfef37f77(&(iLocal_666[iVar2]), 32);
						set_object_as_no_longer_needed(iLocal_666[iVar2]);
					}
					if (does_entity_exist(&(iLocal_666[iVar2])))
					{
						func_440(iVar2, 1);
					}
				}
				iVar2++;
			}
			func_183();
			func_1222(59);
			func_1221(111);
			break;
		case 111:
			if (func_1294())
			{
				iVar1 = 1;
			}
			break;
	}
	return iVar1;
}

int func_779(var uParam0)
{
	func_558(vLocal_614[1]);
	return 1;
}

int func_780(var uParam0)
{
	bVar0 = true;
	func_1224(Global_35, func_185(5));
	if (!func_1262(Global_35))
	{
		bVar0 = false;
	}
	func_885(uParam0, 1);
	if (!vLocal_1100[1]->f_1 == 4)
	{
		bVar0 = false;
	}
	if (!bVar0)
	{
		return 0;
	}
	if (func_166(2))
	{
		func_167();
		func_168(2);
	}
	func_183();
	func_1222(59);
	return 1;
}

int func_781(var uParam0)
{
	if (func_164())
	{
		func_165();
	}
	func_1217(80);
	func_1296(uParam0, -1, 0);
	freeze_entity_position(Global_35, false);
	if (fVar1069 < 0.7f)
	{
		func_1297(uParam0, -455978495);
	}
	return 1;
}

int func_782(var uParam0)
{
	do_screen_fade_out(0);
	func_1298(1606546482, 0, 0, 0, 1, 0, 0, 0);
	func_443(uParam0, 1, 0);
	func_443(uParam0, 2, 0);
	return 1;
}

int func_783(var uParam0)
{
	do_screen_fade_out(0);
	func_265(uParam0, 1);
	return 1;
}

int func_784(var uParam0)
{
	do_screen_fade_out(0);
	func_439(10);
	iVar0 = 0;
	func_1299(&iVar0, 0);
	return 1;
}

void func_785(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_786(int iParam0, int iParam1)
{
	iParam0 = func_266(iParam0);
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

bool func_787(var uParam0, int iParam1)
{
	return (uParam0->f_8 && iParam1) != 0;
}

bool func_788(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

Vector3 func_789(var uParam0)
{
	return uParam0->f_862;
}

void func_790(var uParam0)
{
	if (func_1300(&iVar0))
	{
		if (func_583(iVar0, 0))
		{
			if (func_607(iVar0) == -525676072)
			{
				_set_ped_component_disabled(Global_35, 1249071452, 0);
				func_187(Global_35, -2065815962, 0, 1108822547, 0, 1, 0, 0, 0, 0);
			}
			else
			{
				_set_ped_component_disabled(Global_35, 1606587013, 0);
			}
			if (!func_583(*uParam0, 0))
			{
				*uParam0 = iVar0;
			}
		}
	}
}

void func_791(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (Global_1935630->f_12)
	{
		return;
	}
	Global_16 = 1;
	if (!network_is_game_in_progress())
	{
		func_119(0, 0);
		func_1301(-1);
	}
	func_1302(1);
	set_entity_invincible(Global_35, true);
	if (!func_788(*iParam0, 32))
	{
		iParam1 |= 16;
	}
	if (!func_788(*iParam0, 64))
	{
		iParam1 |= 8;
	}
	if (!func_788(*iParam0, 128))
	{
		iParam1 |= 32;
	}
	if (func_788(*iParam0, 131072))
	{
		iParam1 |= 2048;
	}
	if (!func_788(*iParam0, 32768))
	{
		set_player_control(get_player_index(), false, iParam1, true);
	}
	if (!func_788(*iParam0, 1))
	{
		_0xf239400e16c23e08(0, 0);
	}
	if (!func_788(*iParam0, 65536))
	{
		set_everyone_ignore_player(player_id(), true);
	}
	if (!func_788(*iParam0, 4) && !func_788(*iParam0, 2))
	{
		_hide_hud_component(-1679307491);
	}
	else
	{
		_display_hud_component(-1679307491);
	}
	if (!func_788(*iParam0, 2048))
	{
		func_803(0, 0);
	}
	if (func_788(*iParam0, 8))
	{
		clear_ped_tasks_immediately(Global_35, false, true);
	}
	if (func_788(*iParam0, 256))
	{
		_hide_ped_weapons(Global_35, 2, true);
	}
	if (func_788(*iParam0, 8192))
	{
		func_1303();
	}
	if (!func_788(*iParam0, 262144))
	{
		set_ped_reset_flag(Global_35, 264, true);
	}
	if (!func_788(*iParam0, 512))
	{
		if (is_gameplay_hint_active())
		{
			stop_gameplay_hint(false);
		}
	}
	if (!func_788(*iParam0, 1024))
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
		if (!func_788(*iParam0, 16))
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
						if (func_1304() == iVar7)
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
						func_1305(&vVar3, 50, 10, 0);
					}
					_0xed00d72f81cf7278(iVar7, 0, 1);
					set_entity_coords(iVar7, vVar3, false, true, true, true);
					if (bVar8)
					{
						func_1306(2);
						func_1307(-1);
						func_1308(vVar3);
						func_1310(func_1309());
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
	if (!func_788(*iParam0, 4096))
	{
		func_1311(Global_35);
	}
	if (!func_788(*iParam0, 1048576))
	{
		_0xdd1232b332cbb9e7(7, 1, 0);
	}
	if (!func_788(*iParam0, 2097152))
	{
		if (func_1312() || _0x50f124e6ef188b22(Global_35))
		{
			func_1313(1);
		}
	}
	if (Global_1359489->f_16 & 4194304 == 0)
	{
		Global_1359489->f_16 |= 4194304;
	}
	*iParam0 = 0;
}

void func_792(var uParam0, vector3 vParam1)
{
	uParam0->f_862 = { vParam1 };
}

void func_793(var uParam0)
{
	if (func_787(uParam0, 2048) && !func_399(func_1314(uParam0)))
	{
		bVar0 = _does_volume_exist(uParam0->f_4);
		iVar1 = _get_last_mount(Global_35);
		if ((!is_entity_dead(iVar1) && ((bVar0 && is_entity_in_volume(iVar1, uParam0->f_4, true, 0)) || func_787(uParam0, -2147483648))) && get_mount(Global_35) != iVar1)
		{
			iVar2 = 2;
			if (is_ped_in_writhe(iVar1))
			{
				iVar2 |= 32;
			}
			func_862(iVar1, func_1314(uParam0), func_1315(uParam0), iVar2, 1073741824);
		}
		iVar3 = get_players_last_vehicle();
		if ((!is_entity_dead(iVar3) && ((bVar0 && is_entity_in_volume(iVar3, uParam0->f_4, true, 0)) || func_787(uParam0, -2147483648))) && !is_ped_in_vehicle(Global_35, iVar3, true))
		{
			func_862(iVar3, func_1314(uParam0), func_1315(uParam0), 2, 1073741824);
		}
	}
}

void func_794(var uParam0)
{
	if ((func_787(uParam0, 268435456) && !func_399(func_1314(uParam0))) && is_ped_in_any_vehicle(Global_35, false))
	{
		iVar0 = get_vehicle_ped_is_using(Global_35);
		if (!is_entity_dead(iVar0))
		{
			vVar1 = { func_1314(uParam0) };
			func_862(iVar0, vVar1, func_1316(vVar1, Global_36, 1), 2, 1073741824);
			set_vehicle_on_ground_properly(iVar0, 0f);
			set_entity_velocity(iVar0, 0f, 0f, 0f);
			set_vehicle_forward_speed(iVar0, 0f);
		}
	}
}

void func_795(var uParam0, vector3 vParam1, int iParam4, bool bParam5)
{
	uParam0->f_865 = { vParam1 };
	uParam0->f_868 = iParam4;
	if (func_399(vParam1))
	{
		func_1317(uParam0, 2048, 1);
	}
	else
	{
		func_750(uParam0, 2048);
		if (bParam5)
		{
			func_750(uParam0, -2147483648);
		}
	}
}

void func_796(var uParam0)
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
					if (!func_1318(uParam0->f_13[iVar0], 8))
					{
						if (func_441(func_1094(iVar1, 0, 1, 0)))
						{
							if (!func_1319(uParam0, get_current_ped_weapon_entity_index(iVar1, 0)))
							{
								set_current_ped_weapon(iVar1, -1569615261, true, 0, false, false);
							}
						}
						if (func_441(func_1094(iVar1, 1, 1, 0)))
						{
							if (!func_1319(uParam0, get_current_ped_weapon_entity_index(iVar1, 1)))
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

void func_797(var uParam0, bool bParam1)
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

void func_798(var uParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
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
			func_983(262144);
		}
	}
	else
	{
		bParam6 = false;
		if (iParam3 == -1 || iParam3 == 8)
		{
			func_1320(iParam1, 29, bVar4, 1, 0);
			func_1320(iParam1, 31, bVar4, 1, 0);
			func_1320(iParam1, 30, bVar4, 1, 0);
			func_1320(iParam1, 22, bVar4, 1, 0);
			func_1320(iParam1, 37, bVar4, 1, 0);
		}
	}
	if ((func_476(32768) && func_1321(1108822547, 8)) && func_1322(10, iParam3))
	{
		func_1323(iParam1, 0, 1);
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
			iVar3 = func_972(iVar1, 1);
			if (func_1321(iVar3, 8))
			{
			}
			else if (&Global_1946804->f_57[iVar1]->f_2[0] == -1802376732 || &uParam0->f_1[iVar1] == 0)
			{
			}
			else
			{
				iVar2 = &uParam0->f_1[iVar1];
				if (!func_1322(iVar1, iParam3))
				{
				}
				else if ((func_1321(iVar3, 6) || &uParam0->f_1[iVar1] == &Global_1946804->f_57[iVar1]) || uParam0->f_1[iVar1]->f_1 == 289238755)
				{
					if (!func_1321(iVar3, 1) || bParam2)
					{
						Global_1946804->f_857++;
						if (!bParam6)
						{
							func_1320(iParam1, iVar1, bVar4, 1, 0);
						}
						if (uParam0->f_1[iVar1]->f_1 == 289238755)
						{
							Global_1946804->f_2456[iVar1]->f_1 = 289238755;
						}
						func_1324(iVar3, 1, 6);
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
								func_1320(iParam1, iVar1, bVar4, 1, &(uParam0->f_1[iVar1]));
							}
							Global_1946804->f_2456[iVar1] = &uParam0->f_1[iVar1];
							Global_1946804->f_2456[iVar1]->f_1 = uParam0->f_1[iVar1]->f_1;
							if (func_1321(iVar3, 1))
							{
								func_981(iVar3, 1, 6);
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

bool func_799(int iParam0)
{
	switch (iParam0)
	{
		case 14:
		case 34:
			return !func_1325((*Global_1835011)[iParam0]);
	}
	return false;
}

Vector3 func_800(int iParam0)
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

int func_801(int iParam0, bool bParam1, int iParam2, bool bParam3)
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

int func_802(int iParam0, int iParam1)
{
	return func_1326(&uVar0, iParam0, iParam1);
}

void func_803(bool bParam0, bool bParam1)
{
	iVar2 = 0;
	while (iVar2 < 29)
	{
		iVar4 = iVar2;
		if (get_current_ped_weapon(Global_35, &iVar3, false, iVar4, true))
		{
			if (func_441(iVar3) && _0x705be297eebdb95d(iVar3))
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
		func_1327(1);
	}
}

void func_804(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
}

void func_805(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_1 = 0;
}

void func_806(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
}

void func_807(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
}

void func_808(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

void func_809(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

void func_810(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
}

void func_811(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
}

void func_812(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
}

void func_813(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

void func_814(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
}

int func_815(var uParam0, int iParam1)
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

int func_816(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (!func_819((*uParam0)[iVar0]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

struct<7> func_817(int iParam0)
{
	if (iParam0 >= 0 && iParam0 <= 52)
	{
		Var0 = { -1645.576f, -1365.88f, 83.218f };
		Var0.f_3 = { 0f, 0f, 0f };
	}
	switch (iParam0)
	{
		case 0:
			Var0.f_6 = 4;
			break;
		case 1:
			Var0.f_6 = 5;
			break;
		case 2:
			Var0.f_6 = 6;
			break;
		case 3:
			Var0.f_6 = 7;
			break;
		case 4:
			Var0.f_6 = 8;
			break;
		case 5:
			Var0.f_6 = 9;
			break;
		case 6:
			Var0.f_6 = 10;
			break;
		case 7:
			Var0.f_6 = 11;
			break;
		case 8:
			Var0.f_6 = 12;
			break;
		case 9:
			Var0.f_6 = 13;
			break;
		case 10:
			Var0.f_6 = 14;
			break;
		case 11:
			Var0.f_6 = 15;
			break;
		case 12:
			Var0.f_6 = 16;
			break;
		case 13:
			Var0.f_6 = 17;
			break;
		case 14:
			Var0.f_6 = 18;
			break;
		case 15:
			Var0.f_6 = 19;
			break;
		case 16:
			Var0.f_6 = 20;
			break;
		case 17:
			Var0.f_6 = 21;
			break;
		case 18:
			Var0.f_6 = 22;
			break;
		case 19:
			Var0.f_6 = 23;
			break;
		case 20:
			Var0.f_6 = 24;
			break;
		case 21:
			Var0.f_6 = 25;
			break;
		case 22:
			Var0.f_6 = 26;
			break;
		case 23:
			Var0.f_6 = 27;
			break;
		case 24:
			Var0.f_6 = 28;
			break;
		case 25:
			Var0.f_6 = 29;
			break;
		case 26:
			Var0.f_6 = 30;
			break;
		case 27:
			Var0.f_6 = 31;
			break;
		case 28:
			Var0.f_6 = 32;
			break;
		case 29:
			Var0.f_6 = 33;
			break;
		case 30:
			Var0.f_6 = 34;
			break;
		case 31:
			Var0.f_6 = 35;
			break;
		case 32:
			Var0.f_6 = 36;
			break;
		case 33:
			Var0.f_6 = 37;
			break;
		case 34:
			Var0.f_6 = 38;
			break;
		case 35:
			Var0.f_6 = 39;
			break;
		case 36:
			Var0.f_6 = 40;
			break;
		case 37:
			Var0.f_6 = 41;
			break;
		case 38:
			Var0.f_6 = 42;
			break;
		case 39:
			Var0.f_6 = 43;
			break;
		case 40:
			Var0.f_6 = 44;
			break;
		case 41:
			Var0.f_6 = 45;
			break;
		case 42:
			Var0.f_6 = 46;
			break;
		case 43:
			Var0.f_6 = 47;
			break;
		case 44:
			Var0.f_6 = 48;
			break;
		case 45:
			Var0.f_6 = 49;
			break;
		case 46:
			Var0.f_6 = 50;
			break;
		case 47:
			Var0.f_6 = 51;
			break;
		case 48:
			Var0.f_6 = 52;
			break;
		case 49:
			Var0.f_6 = 53;
			break;
		case 50:
			Var0.f_6 = 54;
			break;
		case 51:
			Var0.f_6 = 55;
			break;
		case 52:
			Var0.f_6 = 56;
			break;
		case 53:
			Var0 = { func_1328(4, 1) };
			Var0.f_3 = { func_1329(4, 1) };
			Var0.f_6 = 58;
			break;
		case 55:
			Var0 = { func_1328(4, 3) };
			Var0.f_3 = { func_1329(4, 3) };
			Var0.f_6 = 64;
			break;
		case 54:
			Var0 = { func_1328(4, 2) };
			Var0.f_3 = { func_1329(4, 2) };
			Var0.f_6 = 64;
			break;
		case 56:
			Var0 = { -1628.579f, -1392.661f, 81.7941f };
			Var0.f_3 = { 0f, 0f, 61.84f };
			Var0.f_6 = 60;
			break;
		case 57:
			Var0 = { func_1328(4, 5) };
			Var0.f_3 = { func_1329(4, 5) };
			Var0.f_6 = 61;
			break;
		case 58:
			Var0 = { func_1328(4, 6) };
			Var0.f_3 = { func_1329(4, 6) };
			Var0.f_6 = 61;
			break;
		case 59:
			Var0 = { func_1328(4, 7) };
			Var0.f_3 = { func_1329(4, 7) };
			Var0.f_6 = 61;
			break;
		case 60:
			Var0 = { func_1328(4, 8) };
			Var0.f_3 = { func_1329(4, 8) };
			Var0.f_6 = 61;
			break;
		case 61:
			Var0 = { func_1328(4, 9) };
			Var0.f_3 = { func_1329(4, 9) };
			Var0.f_6 = 62;
			break;
		case 62:
			Var0 = { func_1328(4, 10) };
			Var0.f_3 = { func_1329(4, 10) };
			Var0.f_6 = 62;
			break;
		case 63:
			Var0 = { func_1328(4, 11) };
			Var0.f_3 = { func_1329(4, 11) };
			Var0.f_6 = 63;
			break;
		case 82:
			Var0 = { -1638.952f, -1341.605f, 83.0331f };
			Var0.f_3 = { 0f, 0f, 0f };
			Var0.f_6 = 57;
			break;
		case 83:
			Var0 = { 1f, 1f, 1f };
			Var0.f_3 = { 0f, 0f, 0f };
			Var0.f_6 = 70;
			break;
		case 64:
			Var0 = { 1f, 1f, 1f };
			Var0.f_3 = { 0f, 0f, 0f };
			Var0.f_6 = 64;
			break;
		case 65:
			Var0 = { 1f, 1f, 1f };
			Var0.f_3 = { 0f, 0f, 0f };
			Var0.f_6 = 73;
			break;
		case 66:
			Var0 = { 1f, 1f, 1f };
			Var0.f_3 = { 0f, 0f, 0f };
			Var0.f_6 = 65;
			break;
		case 67:
			Var0 = { -1647.18f, -1360.51f, 83.46f };
			Var0.f_3 = { -91.3f, 0f, -83f };
			Var0.f_6 = 58;
			break;
		case 68:
			Var0 = { 1f, 1f, 1f };
			Var0.f_3 = { 0f, 0f, 0f };
			Var0.f_6 = 59;
			break;
		case 81:
			Var0 = { -1651.71f, -1359.86f, 82.9619f };
			Var0.f_3 = { -0.358757f, 1.02722f, 151.917f };
			Var0.f_6 = 67;
			break;
		case 69:
			Var0 = { -1637.723f, -1367.393f, 83.2329f };
			Var0.f_3 = { 0f, 90f, 60f };
			Var0.f_6 = 67;
			break;
		case 70:
			Var0 = { -1639.158f, -1366.562f, 83.2309f };
			Var0.f_3 = { 0f, 90f, 60f };
			Var0.f_6 = 67;
			break;
		case 71:
			Var0 = { -1651.71f, -1359.86f, 82.9826f };
			Var0.f_3 = { -0.224359f, 0.00528092f, 151.956f };
			Var0.f_6 = 67;
			break;
		case 72:
			Var0 = { -1640.472f, -1370.447f, 83.2819f };
			Var0.f_3 = { 0f, 0f, -31f };
			Var0.f_6 = 67;
			break;
		case 73:
			Var0 = { -1642.332f, -1369.373f, 83.2819f };
			Var0.f_3 = { 0f, 0f, -31f };
			Var0.f_6 = 67;
			break;
		case 74:
			Var0 = { -1643.471f, -1368.706f, 83.2769f };
			Var0.f_3 = { 0f, 0f, -31f };
			Var0.f_6 = 67;
			break;
		case 75:
			Var0 = { -1643.892f, -1368.465f, 83.2729f };
			Var0.f_3 = { 0f, 0f, -31f };
			Var0.f_6 = 67;
			break;
		case 76:
			Var0 = { -1651.71f, -1359.86f, 82.9619f };
			Var0.f_3 = { 0f, 0f, -31f };
			Var0.f_6 = 67;
			break;
		case 77:
			Var0 = { -1640.678f, -1355.724f, 83.2879f };
			Var0.f_3 = { 0f, 0f, -31f };
			Var0.f_6 = 67;
			break;
		case 78:
			Var0 = { -1641.214f, -1355.402f, 83.2879f };
			Var0.f_3 = { 0f, 0f, -31f };
			Var0.f_6 = 67;
			break;
		case 79:
			Var0 = { -1642.124f, -1354.855f, 83.2879f };
			Var0.f_3 = { 0f, 0f, -31f };
			Var0.f_6 = 67;
			break;
		case 80:
			Var0 = { -1642.862f, -1354.412f, 83.2879f };
			Var0.f_3 = { 0f, 0f, -31f };
			Var0.f_6 = 67;
			break;
		case 84:
			Var0 = { func_1328(1, 1) };
			Var0.f_3 = { func_1329(1, 1) };
			Var0.f_6 = 70;
			break;
		case 85:
			Var0 = { -1646.532f, -1361.352f, 83.402f };
			Var0.f_3 = { 0f, 0f, 60f };
			Var0.f_6 = 70;
			break;
		case 86:
			Var0 = { -1640.198f, -1362.627f, 83.402f };
			Var0.f_3 = { 0f, 0f, 240f };
			Var0.f_6 = 70;
			break;
		case 87:
			Var0 = { -1636.925f, -1371.211f, 83.411f };
			Var0.f_3 = { 0f, 0f, 240.5f };
			Var0.f_6 = 70;
			break;
		case 88:
			Var0 = { -1637.564f, -1372.336f, 83.413f };
			Var0.f_3 = { 0f, 0f, 240.5f };
			Var0.f_6 = 70;
			break;
		case 89:
			Var0 = { -1631.006f, -1360.966f, 83.41f };
			Var0.f_3 = { 0f, 0f, 240.5f };
			Var0.f_6 = 70;
			break;
		case 90:
			Var0 = { func_1328(0, 1) };
			Var0.f_3 = { func_1329(0, 1) };
			Var0.f_6 = 71;
			break;
		case 91:
			Var0 = { func_1328(0, 2) };
			Var0.f_3 = { func_1329(0, 2) };
			Var0.f_6 = 71;
			break;
		case 92:
			Var0 = { func_1328(0, 3) };
			Var0.f_3 = { func_1329(0, 3) };
			Var0.f_6 = 71;
			break;
		case 93:
			Var0 = { func_1328(0, 4) };
			Var0.f_3 = { func_1329(0, 4) };
			Var0.f_6 = 71;
			break;
		case 94:
			Var0 = { func_1328(0, 5) };
			Var0.f_3 = { func_1329(0, 5) };
			Var0.f_6 = 71;
			break;
		case 95:
			Var0 = { func_1328(0, 6) };
			Var0.f_3 = { func_1329(0, 6) };
			Var0.f_6 = 71;
			break;
		case 96:
			Var0 = { 0f, 0f, 0f };
			Var0.f_3 = { 0f, 0f, 0f };
			Var0.f_6 = 74;
			break;
		case 97:
			Var0 = { -1642.534f, -1369.378f, 84.499f };
			Var0.f_3 = { 180f, 180f, 60f };
			Var0.f_6 = 74;
			break;
		case 98:
			Var0 = { -1648.295f, -1366.056f, 85.015f };
			Var0.f_3 = { 180f, 180f, 60f };
			Var0.f_6 = 74;
			break;
		case 99:
			Var0 = { -1636.745f, -1365.743f, 84.204f };
			Var0.f_3 = { 180f, 180f, -30f };
			Var0.f_6 = 74;
			break;
		case 100:
			Var0 = { -1645.563f, -1357.265f, 84.047f };
			Var0.f_3 = { 0f, 0f, -30f };
			Var0.f_6 = 74;
			break;
		case 101:
			Var0 = { -1638.458f, -1357.363f, 83.659f };
			Var0.f_3 = { 180f, 180f, -30.2f };
			Var0.f_6 = 74;
			break;
		case 102:
			Var0.f_6 = 75;
			break;
		case 103:
			Var0.f_6 = 77;
			break;
		case 104:
			Var0.f_6 = 76;
			break;
		case 105:
			Var0 = { -1649f, -1363.91f, 86.9f };
			Var0.f_3 = { 20f, 0f, -31f };
			Var0.f_6 = 78;
			return Var0;
		case 106:
			Var0 = { -1647.63f, -1363.41f, 87.405f };
			Var0.f_3 = { 14f, 0f, -31f };
			Var0.f_6 = 78;
			return Var0;
		case 107:
			Var0 = { -1648.69f, -1362.79f, 78.512f };
			Var0.f_3 = { -63f, 58f, -31f };
			Var0.f_6 = 78;
			return Var0;
		case 108:
			Var0 = { -1647.96f, -1364.86f, 86.932f };
			Var0.f_3 = { 18f, -9f, 0f };
			Var0.f_6 = 78;
			return Var0;
		case 109:
			Var0 = { 1648.51f, -1362.89f, 87.471f };
			Var0.f_3 = { 11f, 95f, 31f };
			Var0.f_6 = 76;
			return Var0;
		case 110:
			Var0 = { -1646.34f, -1357.95f, 89.29f };
			Var0.f_3 = { 7f, -90f, -106f };
			Var0.f_6 = 76;
			return Var0;
		case 111:
			Var0 = { -1644.9f, -1658.82f, 89.296f };
			Var0.f_3 = { 18f, 0f, -43f };
			Var0.f_6 = 76;
			return Var0;
		case 112:
			Var0 = { -1646.55f, -1358.55f, 89.08f };
			Var0.f_3 = { 1f, 18f, -112f };
			Var0.f_6 = 76;
			return Var0;
		case 113:
			Var0 = { -1646.36f, -1358.27f, 89.194f };
			Var0.f_3 = { -15f, -252f, -181f };
			Var0.f_6 = 76;
			return Var0;
		case 114:
			Var0 = { -1646.54f, -1357.74f, 89.4041f };
			Var0.f_3 = { 0.123788f, 17.0711f, -120.116f };
			Var0.f_6 = 76;
			return Var0;
		case 115:
			Var0 = { -1646.51f, -1357.747f, 89.3791f };
			Var0.f_3 = { 0.123788f, 17.0711f, -120.116f };
			Var0.f_6 = 76;
			return Var0;
		case 116:
			Var0 = { -1646.548f, -1357.717f, 89.3521f };
			Var0.f_3 = { 0.123788f, 17.0711f, -120.116f };
			Var0.f_6 = 76;
			return Var0;
		case 117:
			Var0 = { -1646.506f, -1357.731f, 89.3251f };
			Var0.f_3 = { 0.123788f, 17.0711f, -120.116f };
			Var0.f_6 = 76;
			return Var0;
		case 118:
			Var0 = { -1646.486f, -1357.74f, 89.3011f };
			Var0.f_3 = { 0.123788f, 17.0711f, -120.116f };
			Var0.f_6 = 76;
			return Var0;
		case 119:
			Var0 = { -1645.28f, -1348.16f, 82.96f };
			Var0.f_3 = { 0f, 0f, 21.77f };
			Var0.f_6 = 70;
			return Var0;
		case 120:
			Var0 = { -1646.03f, -1349.76f, 83.01f };
			Var0.f_3 = { 0f, 0f, -67.04f };
			Var0.f_6 = 70;
			return Var0;
		case 121:
			Var0 = { -1648.34f, -1350.79f, 83.03f };
			Var0.f_3 = { 0f, 0f, -65.89f };
			Var0.f_6 = 70;
			return Var0;
		case 122:
			Var0 = { -1650.04f, -1350.13f, 82.96f };
			Var0.f_3 = { 0f, 0f, 21.77f };
			Var0.f_6 = 70;
			return Var0;
		case 123:
			Var0 = { -1649.28f, -1348.45f, 83.08f };
			Var0.f_3 = { 0f, 0f, -69.9f };
			Var0.f_6 = 70;
			return Var0;
		case 124:
			Var0 = { -1646.97f, -1347.57f, 83.03f };
			Var0.f_3 = { 0f, 0f, -68.75f };
			Var0.f_6 = 70;
			return Var0;
		case 125:
			Var0 = { -1649.57f, -1347.77f, 82.96f };
			Var0.f_3 = { 0f, 0f, -67.61f };
			Var0.f_6 = 70;
			return Var0;
		case 126:
			Var0 = { -1650.77f, -1345.35f, 82.96f };
			Var0.f_3 = { 0f, 0f, -59.01f };
			Var0.f_6 = 70;
			return Var0;
		case 127:
			Var0 = { -1648.9f, -1345.96f, 82.97f };
			Var0.f_3 = { 0f, 0f, 20.63f };
			Var0.f_6 = 70;
			return Var0;
		case 128:
			Var0 = { -1648.4f, -1344.3f, 82.97f };
			Var0.f_3 = { 0f, 0f, -69.33f };
			Var0.f_6 = 70;
			return Var0;
		case 129:
			Var0 = { -1652.79f, -1343.11f, 82.96f };
			Var0.f_3 = { 0f, 0f, 13.75f };
			Var0.f_6 = 70;
			return Var0;
		case 130:
			Var0 = { -1651.06f, -1344.27f, 82.96f };
			Var0.f_3 = { 0f, 0f, -80.21f };
			Var0.f_6 = 70;
			return Var0;
		case 131:
			Var0 = { -1650.09f, -1342.78f, 82.99f };
			Var0.f_3 = { 0f, 0f, 20.63f };
			Var0.f_6 = 70;
			return Var0;
		case 132:
			Var0 = { -1649.74f, -1341.07f, 82.92f };
			Var0.f_3 = { 0f, 0f, -64.17f };
			Var0.f_6 = 70;
			return Var0;
		case 133:
			Var0 = { -1648.04f, -1342.02f, 83.01f };
			Var0.f_3 = { 0f, 0f, 15.47f };
			Var0.f_6 = 70;
			return Var0;
		case 134:
			Var0 = { -1651.94f, -1340.7f, 82.96f };
			Var0.f_3 = { 0f, 0f, -72.77f };
			Var0.f_6 = 70;
			return Var0;
		case 135:
			Var0 = { -1649.46f, -1339.84f, 83.03f };
			Var0.f_3 = { 0f, 0f, -63.03f };
			Var0.f_6 = 70;
			return Var0;
		case 136:
			Var0 = { -1639.93f, -1348.5f, 82.98f };
			Var0.f_3 = { 0f, 0f, 22.92f };
			Var0.f_6 = 69;
			return Var0;
		case 137:
			Var0 = { -1641.178f, -1336.126f, 83.1096f };
			Var0.f_3 = { 0f, 0f, 55.58f };
			Var0.f_6 = 69;
			return Var0;
		case 138:
			Var0 = { -1642.544f, 1337.234f, 83.0548f };
			Var0.f_3 = { 0f, 0f, -46.41f };
			Var0.f_6 = 60;
			return Var0;
		case 139:
			Var0 = { -1645.309f, -1337.397f, 83.0329f };
			Var0.f_3 = { 0f, 0f, 0f };
			Var0.f_6 = 60;
			return Var0;
		case 140:
			Var0 = { 0f, 0f, 0f };
			Var0.f_3 = { 0f, 0f, 0f };
			Var0.f_6 = 80;
			return Var0;
		default:
			break;
	}
	return Var0;
}

void func_818(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 || iParam1);
}

bool func_819(var uParam0)
{
	return *uParam0 != 0;
}

bool func_820(var uParam0, int iParam1)
{
	iVar0 = func_1330(iParam1);
	return (uParam0 && iVar0) != 0;
}

void func_821(var uParam0)
{
	if (!func_851(uParam0->f_1, 1))
	{
		request_model(*uParam0, false);
		func_1331(&(uParam0->f_1), 1);
	}
}

bool func_822(var uParam0)
{
	return !is_string_null_or_empty(*uParam0);
}

void func_823(var uParam0)
{
	if (!func_851(uParam0->f_3, 1))
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
		func_1331(&(uParam0->f_3), 1);
	}
}

bool func_824(var uParam0)
{
	return !is_string_null_or_empty(*uParam0);
}

void func_825(var uParam0)
{
	if (!func_851(uParam0->f_1, 1))
	{
		request_anim_dict(*uParam0);
		func_1331(&(uParam0->f_1), 1);
	}
}

bool func_826(var uParam0)
{
	return !is_string_null_or_empty(*uParam0);
}

bool func_827(var uParam0)
{
	if (func_851(uParam0->f_1, 2))
	{
		return true;
	}
	if (!func_851(uParam0->f_1, 1))
	{
		func_1332(uParam0);
	}
	if (_0x85b8f04555ab49b8(*uParam0))
	{
		func_1331(&(uParam0->f_1), 2);
		return true;
	}
	return false;
}

bool func_828(var uParam0)
{
	if (func_851(*uParam0, 2))
	{
		return true;
	}
	if (!func_851(*uParam0, 1))
	{
		func_1333(uParam0);
	}
	if (has_ptfx_asset_loaded())
	{
		func_1331(uParam0, 2);
		return true;
	}
	return false;
}

bool func_829(var uParam0)
{
	return !is_string_null_or_empty(*uParam0);
}

void func_830(var uParam0)
{
	if (!func_851(uParam0->f_2, 1))
	{
		if (func_1334(uParam0))
		{
			if (_is_anim_scene_metadata_loaded(uParam0->f_1, false))
			{
				sVar0 = func_1335(get_entity_model(Global_35));
				if (_0x6f1f0b17109309da(uParam0->f_1, sVar0))
				{
					set_anim_scene_entity(uParam0->f_1, sVar0, Global_35, 0);
				}
				else if (_0x6f1f0b17109309da(uParam0->f_1, "player_zero") && func_304())
				{
					set_anim_scene_entity(uParam0->f_1, "player_zero", Global_35, 0);
				}
				else if (_0x6f1f0b17109309da(uParam0->f_1, "player_three") && func_1053())
				{
					set_anim_scene_entity(uParam0->f_1, "player_three", Global_35, 0);
				}
				load_anim_scene(uParam0->f_1);
				func_1331(&(uParam0->f_2), 1);
			}
		}
	}
}

bool func_831(var uParam0)
{
	return !is_string_null_or_empty(*uParam0);
}

void func_832(var uParam0, int iParam1)
{
	if (!func_851(uParam0->f_1, 1))
	{
		if (!_is_anim_scene_loaded(iParam1, true, false))
		{
			return;
		}
		_0xdf7b5144e25cd3fe(iParam1, *uParam0);
		func_1331(&(uParam0->f_1), 1);
	}
}

bool func_833(var uParam0)
{
	return *uParam0 != 0;
}

void func_834(var uParam0)
{
	if (!func_851(uParam0->f_2, 1))
	{
		_request_propset(*uParam0);
		func_1331(&(uParam0->f_2), 1);
	}
}

bool func_835(var uParam0)
{
	return *uParam0 != 0;
}

void func_836(var uParam0)
{
	if (!func_851(uParam0->f_3, 1))
	{
		_0x72d4cb5db927009c(*uParam0, uParam0->f_1, uParam0->f_2);
		func_1331(&(uParam0->f_3), 1);
	}
}

bool func_837(var uParam0)
{
	return !is_string_null_or_empty(*uParam0);
}

void func_838(var uParam0)
{
	if (!func_851(uParam0->f_1, 1))
	{
		request_script_audio_bank(*uParam0);
		func_1331(&(uParam0->f_1), 1);
	}
}

bool func_839(var uParam0)
{
	return func_1336(*uParam0);
}

void func_840(var uParam0)
{
	if (!func_851(uParam0->f_1, 1))
	{
		_request_imap(*uParam0);
		func_1331(&(uParam0->f_1), 1);
	}
}

bool func_841(var uParam0)
{
	return !is_string_null_or_empty(*uParam0);
}

void func_842(var uParam0)
{
	if (!func_851(uParam0->f_2, 1))
	{
		_0xe368e8422c860ba7(*uParam0, uParam0->f_1, -2);
		func_1331(&(uParam0->f_2), 1);
	}
}

bool func_843(var uParam0)
{
	return !is_string_null_or_empty(*uParam0);
}

void func_844(var uParam0)
{
	if (!func_851(uParam0->f_1, 1))
	{
		_0x2b6529c54d29037a(*uParam0);
		func_1331(&(uParam0->f_1), 1);
	}
}

bool func_845(var uParam0, int iParam1, char* sParam2)
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

void func_846(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5)
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
		sParam2 = func_746(iParam1);
	}
	if (is_string_null_or_empty(sParam2))
	{
		if (does_entity_exist(iParam1))
		{
		}
		return;
	}
	iVar0 = func_1337(uParam0, iParam1);
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
		iVar1 = func_1338(uParam0, sParam2);
		if (does_entity_exist(iVar1) && iVar1 != iParam1)
		{
			func_1339(uParam0, iVar1);
		}
	}
	if (iVar0 == -1)
	{
		iVar0 = func_1340(uParam0);
	}
	if (iVar0 != -1)
	{
		uParam0->f_13[iVar0] = iParam1;
		StringCopy(&(uParam0->f_13[iVar0]->f_1), sParam2, 64);
		uParam0->f_13[iVar0]->f_9 = iParam3;
		uParam0->f_13[iVar0]->f_10 = iParam4;
		if (bParam5)
		{
			func_1341(uParam0->f_13[iVar0], 2);
		}
		else
		{
			func_1342(uParam0->f_13[iVar0], 2);
		}
	}
}

struct<4> func_847(int iParam0)
{
	if (!func_190(iParam0))
	{
		return Var0;
	}
	return (*Global_1835011)[iParam0]->f_3;
}

bool func_848(var uParam0, char* sParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (!bParam4 && !uParam0->f_2501)
	{
		if (!func_870(uParam0, sParam1, iParam2, bParam4, bParam5))
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
			if (func_1343(uParam0, 0))
			{
				if (func_1344(uParam0, iParam2, iParam3, &cVar2, &iVar1, &iVar18))
				{
					if (func_1345(uParam0, 1, &iVar0))
					{
					}
					if (func_1346(uParam0, 3, &cVar2))
					{
					}
					if (func_1345(uParam0, 4, &iVar1))
					{
						cVar2.f_8 = iVar1;
					}
					if (func_1345(uParam0, 7, &(cVar2.f_12)))
					{
					}
					if (func_1345(uParam0, 8, &iVar1))
					{
						cVar2.f_10 = iVar1;
					}
					if (func_1345(uParam0, 10, &(cVar2.f_14)))
					{
					}
					if (func_1345(uParam0, 11, &iVar1))
					{
						cVar2.f_15 = iVar1;
					}
					if (iVar18 == 0)
					{
						if (iVar0 < 40 && uParam0->f_2504 < 40)
						{
							if (!func_1347(uParam0, &cVar2, uParam0->f_2504))
							{
								*(*uParam0)[uParam0->f_2504] = { cVar2 };
								func_502((*uParam0)[uParam0->f_2504], 1048576);
								uParam0->f_2504++;
							}
						}
					}
					else if (iVar18 == 3)
					{
						if (iVar0 < 40 && uParam0->f_2505 < 40)
						{
							*uParam0->f_641[uParam0->f_2505] = { cVar2 };
							func_502(uParam0->f_641[uParam0->f_2505], 1048576);
							uParam0->f_2505++;
						}
					}
					else if (iVar18 == 1)
					{
						if (iVar0 < 60 && uParam0->f_2506 < 60)
						{
							*uParam0->f_1282[uParam0->f_2506] = { cVar2 };
							func_502(uParam0->f_1282[uParam0->f_2506], 1048576);
							if (!bVar19 && func_218(&cVar2, 4))
							{
								prepare_music_event(uParam0->f_1282[uParam0->f_2506]);
								bVar19 = true;
							}
							uParam0->f_2506++;
						}
					}
					else if (iVar0 < 15 && uParam0->f_2507 < 15)
					{
						if (!func_1347(&(uParam0->f_2243), &cVar2, uParam0->f_2507))
						{
							*uParam0->f_2243[uParam0->f_2507] = { cVar2 };
							func_502(uParam0->f_2243[uParam0->f_2507], 1048576);
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
			if (func_1343(uParam0, 12))
			{
				if (func_1345(uParam0, 13, &iVar0))
				{
				}
				if (func_1345(uParam0, 14, &iVar1))
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

void func_849(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((func_218((*uParam0)[iVar0], 1048576) && (*uParam0)[iVar0]->f_9 == 8) && !func_218((*uParam0)[iVar0], 1))
		{
			func_1348((*uParam0)[iVar0]);
		}
		iVar0++;
	}
}

bool func_850(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, int iParam12)
{
	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < *uParam0)
	{
		if (func_819((*uParam0)[iVar1]))
		{
			if (func_820((*uParam0)[iVar1]->f_2, iParam12))
			{
				if (!func_1349((*uParam0)[iVar1]))
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
		if (func_822((*uParam1)[iVar1]))
		{
			if (func_820((*uParam1)[iVar1]->f_4, iParam12))
			{
				if (!func_1350((*uParam1)[iVar1]))
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
		if (func_824((*uParam2)[iVar1]))
		{
			if (func_820((*uParam2)[iVar1]->f_2, iParam12))
			{
				if (!func_1351((*uParam2)[iVar1]))
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
		if (func_826((*uParam3)[iVar1]))
		{
			if (func_820((*uParam3)[iVar1]->f_2, iParam12))
			{
				if (!func_827((*uParam3)[iVar1]))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	if (func_820(uParam4->f_1, iParam12))
	{
		if (!func_828(uParam4))
		{
			iVar0 = 0;
		}
	}
	iVar1 = 0;
	while (iVar1 < *uParam5)
	{
		if (func_829((*uParam5)[iVar1]))
		{
			if (func_820((*uParam5)[iVar1]->f_3, iParam12))
			{
				if (func_1334((*uParam5)[iVar1]))
				{
					if (!func_852((*uParam5)[iVar1]))
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
		if (func_829((*uParam5)[iVar1]))
		{
			if (func_820((*uParam5)[iVar1]->f_3, iParam12))
			{
				if (func_1334((*uParam5)[iVar1]))
				{
					if (func_852((*uParam5)[iVar1]))
					{
						iVar2 = 0;
						while (iVar2 < 20)
						{
							if (func_831((*uParam5)[iVar1]->f_4[iVar2]))
							{
								if (!func_1352((*uParam5)[iVar1]->f_4[iVar2], (*uParam5)[iVar1]->f_1))
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
		if (func_833((*uParam6)[iVar1]))
		{
			if (func_820((*uParam6)[iVar1]->f_3, iParam12))
			{
				if (!func_1353((*uParam6)[iVar1]))
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
		if (func_835((*uParam7)[iVar1]))
		{
			if (func_820((*uParam7)[iVar1]->f_4, iParam12))
			{
				if (!func_1354((*uParam7)[iVar1]))
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
		if (func_837((*uParam8)[iVar1]))
		{
			if (func_820((*uParam8)[iVar1]->f_2, iParam12))
			{
				if (!func_1355((*uParam8)[iVar1]))
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
		if (func_839((*uParam9)[iVar1]))
		{
			if (func_820((*uParam9)[iVar1]->f_2, iParam12))
			{
				if (!func_1356((*uParam9)[iVar1]))
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
		if (func_841((*uParam10)[iVar1]))
		{
			if (func_820((*uParam10)[iVar1]->f_3, iParam12))
			{
				if (!func_1357((*uParam10)[iVar1]))
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
		if (func_843((*uParam11)[iVar1]))
		{
			if (func_820((*uParam11)[iVar1]->f_2, iParam12))
			{
				if (!func_1358((*uParam11)[iVar1]))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	return iVar0;
}

bool func_851(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_852(var uParam0)
{
	if (func_851(uParam0->f_2, 2))
	{
		return true;
	}
	if (!func_851(uParam0->f_2, 1))
	{
		func_830(uParam0);
	}
	if (_is_anim_scene_loaded(uParam0->f_1, true, false))
	{
		func_1331(&(uParam0->f_2), 2);
		return true;
	}
	return false;
}

int func_853(int iParam0)
{
	if (!func_190(iParam0))
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

bool func_854(var uParam0, int iParam1, var uParam2, bool bParam3, int iParam4, int iParam5, int iParam6, float fParam7, bool bParam8, int iParam9, bool bParam10, int iParam11, bool bParam12, bool bParam13)
{
	if (!func_521(iParam1))
	{
		return false;
	}
	if ((!is_entity_dead(*uParam2) && func_258(iParam1)) && func_1359(iParam1) == *uParam2)
	{
		return true;
	}
	*uParam2 = func_1360(iParam1, 1, 0, iParam4, iParam5, iParam6, fParam7, bParam8, 1, 0, 0, bParam10, 0, iParam9, 0, 0, 0, iParam11, 1, 1, bParam13, 0, 1, 0, 1);
	if (does_entity_exist(*uParam2))
	{
		func_1361(uParam0, *uParam2, iParam1, bParam3, (bParam8 && bParam12), bParam10, bParam13);
		func_1362(iParam1);
		return true;
	}
	return false;
}

bool func_855(var uParam0)
{
	if (!func_399(uParam0->f_5417))
	{
		return true;
	}
	switch (uParam0->f_607)
	{
		case 7:
			func_1363(uParam0, -271.1003f, 798.9771f, 118.0088f, 359.8847f);
			break;
		case 15:
			func_1363(uParam0, -101.4083f, -34.0691f, 94.9419f, 43.5697f);
			break;
		case 8:
			func_1363(uParam0, 884.1405f, 1283.638f, 233.1437f, 288.539f);
			break;
		case 25:
			func_1363(uParam0, 1154.01f, -87.7217f, 87.745f, 333.9165f);
			break;
		case 14:
			func_1363(uParam0, -257.4742f, 716.4608f, 114.3661f, 298.3928f);
			break;
		case 9:
			func_1363(uParam0, -113.3479f, -14.8907f, 96.1036f, 66.3363f);
			break;
		case 13:
			func_1363(uParam0, -893.1545f, -1097.781f, 59.3724f, 67.7581f);
			break;
		case 11:
			func_1363(uParam0, -1528.842f, -315.0988f, 143.0872f, 97.0964f);
			break;
		case 26:
			func_1363(uParam0, 705.8042f, -1230.294f, 44.2243f, 60.9884f);
			break;
		case 53:
			func_1363(uParam0, 705.8099f, -1229.4f, 44.2311f, 67.5463f);
			break;
		case 16:
			func_1363(uParam0, 667.7685f, -1211.293f, 45.3101f, 92.5271f);
			break;
		case 17:
			func_1363(uParam0, 1339.753f, -1305.21f, 75.5849f, 337.5673f);
			break;
		case 19:
			func_1363(uParam0, 1857.32f, -1367.512f, 41.2697f, 162.265f);
			break;
		case 24:
			func_1363(uParam0, 691.6649f, -1235.476f, 43.3174f, 227.0576f);
			break;
		case 23:
			func_1363(uParam0, 676.2985f, -1227.818f, 43.598f, 352.091f);
			break;
		case 22:
			func_1363(uParam0, 663.6722f, -1229.636f, 43.3769f, 171.6396f);
			break;
		case 36:
			func_1363(uParam0, 2647.098f, -1270.327f, 51.0841f, 113.0633f);
			break;
		case 28:
			func_1363(uParam0, 2413.412f, -1220.656f, 44.9084f, 0.0301f);
			break;
		case 30:
			func_1363(uParam0, 1853.05f, -1835.788f, 42.0957f, 29.7034f);
			break;
		case 37:
			func_1363(uParam0, 1842.425f, -1833.848f, 43.2426f, 0.0743f);
			break;
		case 45:
			func_1363(uParam0, 2824.987f, -1165.335f, 47.3695f, 190.1776f);
			break;
		case 48:
			func_1363(uParam0, 483.1636f, 2222.628f, 246.0867f, 109.4105f);
			break;
		case 49:
			func_1363(uParam0, 2376.538f, 1339.845f, 105.3362f, 193.8848f);
			break;
		case 50:
			func_1363(uParam0, 2377.94f, 1338.177f, 105.4092f, 196.4492f);
			break;
		case 51:
			func_1363(uParam0, 491.0881f, 2221.171f, 246.1786f, 246.5501f);
			break;
		case 55:
			func_1363(uParam0, 2774.684f, 513.5845f, 66.9882f, 355.826f);
			break;
		case 76:
			func_1363(uParam0, -1616.827f, -1379.19f, 81.8942f, 339.9481f);
			break;
		case 73:
			func_1363(uParam0, -1611.214f, -1344.436f, 81.8767f, 359.9349f);
			break;
		case 75:
			func_1363(uParam0, -1678.714f, -1378.879f, 83.969f, 347.6046f);
			break;
		case 69:
			func_1363(uParam0, -302.3015f, 786.3279f, 116.9486f, 185.0768f);
			break;
		case 70:
			func_1363(uParam0, -1566.102f, -1448.615f, 90.6887f, 291.3719f);
			break;
		case 71:
			func_1363(uParam0, -1625.965f, -1395.404f, 81.6263f, 114.6379f);
			break;
		case 72:
			func_1363(uParam0, -835.0144f, -1343.726f, 42.473f, 0.0002f);
			break;
	}
	return !func_399(uParam0->f_5417);
}

int func_856(int iParam0, var uParam1)
{
	uParam1->f_10 = func_266(uParam1->f_10);
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
		if (bVar0 && !func_327((*Global_1835011)[4]->f_1, 1))
		{
			if (func_1364(5))
			{
				func_533(5);
				func_1365(5);
				func_1307(0);
				func_1306(0);
			}
		}
	}
	if (func_1366(Global_36) == 8)
	{
		*iParam0 = 1;
		return 0;
	}
	if ((bVar0 && func_327((*Global_1835011)[37]->f_1, 1)) && !func_327((*Global_1835011)[43]->f_1, 1))
	{
		*iParam0 = 1;
		return 0;
	}
	if ((bVar0 && func_327((*Global_1835011)[43]->f_1, 1)) && !func_327((*Global_1835011)[44]->f_1, 1))
	{
		if (uParam1->f_10 == 0)
		{
			*iParam0 = 1;
			return 0;
		}
	}
	iVar1 = uParam1->f_10;
	iVar2 = func_216(iVar1);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	if (func_390(iVar1))
	{
		bVar3 = true;
		if (func_1367(iVar1))
		{
			bVar4 = true;
		}
		if (func_542(iVar1))
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
				func_543(uParam1->f_10);
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
			if (!func_1364(0) && func_1364(1))
			{
				func_1368(1, 0);
				*iParam0 = 0;
				return 0;
			}
		}
	}
	if (uParam1->f_4)
	{
		if (uParam1->f_10 == 0)
		{
			if (func_1369())
			{
				func_1370();
			}
			func_1307(0);
			func_1306(0);
			func_1308(uParam1->f_6);
		}
	}
	if (!func_390(uParam1->f_10))
	{
		if (*uParam1)
		{
			if ((func_1371(uParam1->f_10) == 0 || func_1372(uParam1->f_10) == 0) || func_1373(uParam1->f_10) == 0)
			{
				func_1374(uParam1->f_10);
			}
			func_1375(uParam1->f_10);
			func_1376(uParam1->f_10, uParam1->f_6, uParam1->f_9);
			*iParam0 = 0;
			return 0;
		}
		*iParam0 = 1;
		return 0;
	}
	iVar1 = uParam1->f_10;
	iVar2 = func_216(iVar1);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	if (func_390(iVar1))
	{
		bVar3 = true;
		if (func_1367(iVar1))
		{
			bVar4 = true;
		}
		if (func_542(iVar1))
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
	if (func_1377(uParam1->f_10))
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
			Var8 = { func_1378(uParam1->f_10) };
			Var10 = { func_1379() };
			func_1380(iVar2, &Var8, &Var10, 0);
			_set_ped_as_saddle_horse_for_player(iVar6, iVar2);
			set_ped_config_flag(iVar2, 186, false);
		}
	}
	if (!uParam1->f_1)
	{
		*iParam0 = 2;
		return iVar2;
	}
	if (!func_529(uParam1->f_10))
	{
		set_entity_as_mission_entity(iVar2, true, true);
		func_1381(uParam1->f_10);
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
	func_528(uParam1->f_10);
	if (func_529(uParam1->f_10))
	{
		iVar16 = func_262(uParam1->f_10);
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

bool func_857(int iParam0, int iParam1, float fParam2, bool bParam3)
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

bool func_858(int iParam0)
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

bool func_859(int iParam0, int iParam1, vector3 vParam2, float fParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10)
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
	if (!func_1382(iParam1))
	{
		return false;
	}
	iVar0 = func_1383(iParam1, vParam2, fParam5, iParam8, 1, bParam6, bParam7);
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

void func_860(var uParam0, bool bParam1)
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

float func_861(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

void func_862(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
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
	if (iParam0 == func_1384(Global_35) && is_player_teleport_active())
	{
	}
	if (func_1385(iParam0))
	{
		if (func_858(get_ped_index_from_entity_index(iParam0)))
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
				func_862(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (is_ped_on_mount(iVar1))
		{
			iVar2 = get_mount(iVar1);
			if (does_entity_exist(iVar2) && !is_entity_dead(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_862(iVar2, vParam1, fParam4, iParam5, iParam6);
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
		if (func_1385(iParam0))
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

bool func_863(int iParam0, int iParam1, int iParam2)
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

bool func_864(var uParam0, int iParam1)
{
	switch (func_1386(uParam0))
	{
		case 0:
			if (!func_1387(iParam1, &(uParam0->f_8), &(uParam0->f_6)))
			{
				return true;
			}
			func_1388(uParam0, 1);
			break;
		case 1:
			func_1389(uParam0);
			render_script_cams(true, false, 3000, true, false, 0);
			iVar0 = 0;
			func_791(&iVar0, 0, 2, 0, 0, 0, 0);
			func_1388(uParam0, 2);
			break;
		case 2:
			if (func_1390(uParam0))
			{
				func_1391(uParam0->f_8, 5000f, 0);
				_0x4759cc730f947c81();
				func_27(&(uParam0->f_3), 1);
				func_1388(uParam0, 3);
			}
			break;
		case 3:
			if (func_871(&(uParam0->f_3)) >= 1f)
			{
				func_1388(uParam0, 4);
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
			func_1299(&iVar1, 0);
			release_script_audio_bank();
			func_1388(uParam0, 0);
			return true;
	}
	return false;
}

void func_865(var uParam0)
{
	if (!func_120(uParam0, 524288))
	{
		MemCopy(&uVar0, {func_110(uParam0->f_607)}, 8);
		func_1392(&uVar0, 15000, 0, 0, 0, 1);
		func_103(uParam0, 524288);
	}
}

bool func_866(var uParam0)
{
	iVar0 = func_35(uParam0);
	if (func_162(uParam0, func_33(uParam0)) <= 3)
	{
		iVar0 = func_33(uParam0);
	}
	Var1 = { func_1393(uParam0, iVar0) };
	if (func_1395(&(uParam0->f_10792), Var1, func_1394(&(uParam0->f_10792)), 0))
	{
		func_140(uParam0, func_33(uParam0), 262144);
		if (func_1396(&(uParam0->f_10792), 524288))
		{
			func_380(uParam0, 67108864);
			func_1397(&(uParam0->f_10792), 524288);
		}
		func_1398(&(uParam0->f_7375), &(uParam0->f_10792));
		return true;
	}
	return false;
}

void func_867(var uParam0, int iParam1)
{
	uParam0->f_5307 = (uParam0->f_5307 - (uParam0->f_5307 && iParam1));
}

bool func_868(var uParam0, struct<4> Param1)
{
	if (is_string_null_or_empty(&Param1))
	{
		return true;
	}
	if (func_8(uParam0, 16777216))
	{
		func_1399(uParam0);
		func_1400(uParam0);
		return true;
	}
	if (func_1401(Param1, &(uParam0->f_7375), uParam0))
	{
		return true;
	}
	if (func_154(uParam0) == 0)
	{
		func_894(uParam0);
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
			func_1402(uParam0);
			func_867(uParam0, 524288);
			func_1403(uParam0);
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

bool func_869(var uParam0)
{
	iVar0 = 1;
	if (!func_1404(func_61(uParam0), func_120(uParam0, 65536)))
	{
		iVar0 = 0;
	}
	Var1 = { func_1405(func_61(uParam0)) };
	if (!is_string_null_or_empty(&Var1))
	{
		if (!func_1406(func_61(uParam0)))
		{
			iVar0 = 0;
		}
	}
	if (!func_423(uParam0, func_33(uParam0), 1))
	{
		iVar0 = 0;
	}
	if (func_120(uParam0, 4) && !_0x5e420ff293ee5472())
	{
		iVar0 = 0;
	}
	MemCopy(&cVar9, {func_847(uParam0->f_607)}, 3);
	if (!func_23(&(uParam0->f_8269)))
	{
		if (!func_870(&(uParam0->f_8269), &cVar9, 0, 1, 1))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

bool func_870(var uParam0, char* sParam1, int iParam2, bool bParam3, bool bParam4)
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
	func_1407(uParam0);
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

float func_871(var uParam0)
{
	if (!func_26(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_504(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_555() - uParam0->f_1);
}

bool func_872()
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

void func_873(float fParam0, float fParam1)
{
	set_gameplay_cam_relative_heading(fParam0, 1f);
	set_gameplay_cam_relative_pitch(fParam1, 1f);
}

void func_874()
{
	func_455(-722030448);
	func_455(2111816145);
	func_455(1467774743);
	func_456(-974480336);
	func_456(1532774697);
}

void func_875()
{
	Global_1934765->f_273 = 1;
}

bool func_876(int iParam0)
{
	bVar2 = true;
	iVar0 = 0;
	while (iVar0 < iVar292)
	{
		iVar1 = iVar0;
		if (func_820(vLocal_295[iVar1]->f_2, iParam0))
		{
			if (&vLocal_295[iVar1] == 0)
			{
				func_1217(iVar1);
				bVar2 = false;
			}
			else if (&vLocal_295[iVar1] == 2)
			{
				bVar2 = false;
			}
		}
		iVar0++;
	}
	func_175();
	if (bVar2)
	{
		func_439(9);
	}
	return bVar2;
}

int func_877(var uParam0)
{
	if (func_8(uParam0, 8) && !func_120(uParam0, 4))
	{
		return 0;
	}
	if (((func_33(uParam0) == 0 && !func_120(uParam0, 4)) && !func_128(uParam0, 1)) && !func_128(uParam0, 2))
	{
		return 0;
	}
	if (func_120(uParam0, 4))
	{
		return 1;
	}
	return 2;
}

struct<4> func_878(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case 1:
			switch (iParam2)
			{
				case 0:
					return func_1408(1, 0);
				case 1:
					return func_1408(1, 2);
				case 2:
					return func_1408(1, 5);
				case 3:
					return func_1408(1, 6);
				case 4:
					return func_1408(1, 7);
				case 5:
					return func_1408(1, 8);
				case 6:
					return func_1408(1, 9);
				case 25:
					return func_1408(1, 9);
			}
			break;
		case 2:
			switch (iParam2)
			{
				case 0:
					return func_1408(2, 0);
				case 1:
					return func_1408(2, 2);
				case 2:
					return func_1408(2, 5);
				case 3:
					return func_1408(2, 6);
				case 4:
					return func_1408(2, 7);
				case 5:
					return func_1408(2, 8);
				case 6:
					return func_1408(2, 9);
				case 25:
					return func_1408(2, 9);
			}
			break;
		case 3:
			if (iParam1 == 0)
			{
				Var0 = { -1650f, -1364.5f, 81.8f };
				Var0.f_3 = -164f;
				return Var0;
			}
			break;
	}
	return Var0;
}

int func_879(var uParam0, int iParam1, bool bParam2, bool bParam3, struct<4> Param4, bool bParam8)
{
	switch (vLocal_808[iParam1]->f_2)
	{
		case 0:
			if (bParam2)
			{
				func_931(iParam1, 1);
			}
			else if (bParam3)
			{
				func_931(iParam1, 3);
			}
			else
			{
				func_931(iParam1, 7);
			}
			break;
		case 1:
			iVar0 = func_1219(uParam0, func_444(func_891(iParam1)), 1);
			if (does_entity_exist(iVar0))
			{
				vLocal_808[iParam1] = get_ped_index_from_entity_index(iVar0);
			}
			if (does_entity_exist(&(vLocal_808[iParam1])))
			{
				if (!func_880(iParam1) == -1)
				{
					func_931(iParam1, 2);
				}
				else
				{
					func_931(iParam1, 5);
				}
			}
			else if (bParam3)
			{
				func_931(iParam1, 3);
			}
			else
			{
				func_931(iParam1, 7);
			}
			break;
		case 2:
			if (func_854(uParam0, func_880(iParam1), vLocal_808[iParam1], 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0))
			{
				func_931(iParam1, 5);
			}
			break;
		case 3:
			if (func_880(iParam1) == -1)
			{
				func_931(iParam1, 7);
				return 0;
			}
			if (func_854(uParam0, func_880(iParam1), vLocal_808[iParam1], 0, 0, 0, 0, 0, 0, -1341683964, 1, 0, 1, 0))
			{
				if (bParam8)
				{
					if (func_399(Param4))
					{
					}
					else
					{
						func_1409(&(vLocal_808[iParam1]), Param4, 2, 1073741824);
					}
				}
				func_931(iParam1, 5);
			}
			else
			{
				return 0;
			}
			break;
		case 5:
			if (!is_entity_dead(&(vLocal_808[iParam1])))
			{
				set_blocking_of_non_temporary_events(&(vLocal_808[iParam1]), true);
				if (!func_880(iParam1) == -1)
				{
					set_entity_invincible(&(vLocal_808[iParam1]), true);
					if (func_1410(func_880(iParam1), 1048576))
					{
						func_1411(func_880(iParam1), 1048576, 0);
					}
					switch (iParam1)
					{
						case 1:
							func_145(uParam0, &(vLocal_808[iParam1]), "Uncle", 0);
							break;
						case 2:
							func_145(uParam0, &(vLocal_808[iParam1]), "charles_smith", 0);
							break;
						default:
							break;
					}
				}
				set_current_ped_weapon(&(vLocal_808[iParam1]), -1569615261, true, 0, false, false);
				set_current_ped_weapon(&(vLocal_808[iParam1]), -1569615261, true, 1, false, false);
				_hide_ped_weapons(&(vLocal_808[iParam1]), 2, false);
				vLocal_808[iParam1]->f_1 = 1;
				func_931(iParam1, 6);
			}
			break;
		case 6:
			return 1;
		case 7:
			return 0;
	}
	return 0;
}

int func_880(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 4;
		case 2:
			return 7;
	}
	return -1;
}

int func_881(int iParam0, bool bParam1, bool bParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10, int iParam11, float fParam12, bool bParam13, bool bParam14, bool bParam15, int iParam16)
{
	if (!func_1008(iParam0))
	{
		return 0;
	}
	iVar1 = func_1412(&uVar0, iParam0, bParam1, bParam2, iParam3, iParam4, iParam5, bParam7, bParam8, iParam9, iParam10, iParam11, fParam12, bParam13, bParam14, bParam15, bParam6, iParam16);
	if (!does_entity_exist(iVar1))
	{
		return 0;
	}
	if (bParam6)
	{
		if (!is_entity_dead(iVar1) && _0xa0bc8faed8cfeb3c(iVar1))
		{
			return iVar1;
		}
	}
	else
	{
		return iVar1;
	}
	return 0;
}

bool func_882()
{
	switch (iVar1090)
	{
		case 0:
			iLocal_1092 = 1;
		case 1:
			_request_propset_2(-336173860);
			func_1217(3);
			iLocal_1092 = 2;
			break;
		case 2:
			if (_has_propset_loaded_2(-336173860) && func_1218(3))
			{
				iLocal_1092 = 3;
			}
			break;
		case 3:
			iLocal_827[0] = create_vehicle(func_444(3), -1652.324f, -1376.71f, 84.0222f, -109.84f, true, true, false, false);
			iLocal_1092 = 4;
			break;
		case 4:
			if (func_1413(iLocal_827[0]))
			{
				iLocal_1092 = 5;
			}
			break;
		case 5:
			iLocal_1089 = _create_propset_4(-336173860, func_1234(0), &(iLocal_827[0]), 0f, true, 11, false);
			iLocal_1092 = 6;
			break;
		case 6:
			set_vehicle_extra(&(iLocal_827[0]), 1, true);
			set_vehicle_extra(&(iLocal_827[0]), 2, true);
			set_vehicle_extra(&(iLocal_827[0]), 3, true);
			set_entity_invincible(&(iLocal_827[0]), true);
			_0x226c6a4e3346d288(&(iLocal_827[0]), 0);
			_0x6090a031c69f384e(&(iLocal_827[0]), 0);
			iLocal_1092 = 7;
			return true;
		case 7:
			return true;
	}
	return false;
}

void func_883(int iParam0, var uParam1)
{
	if (is_entity_dead(iParam0))
	{
		return;
	}
	Var2 = 117;
	Var2.f_118 = 45;
	_copy_memory(uParam1, &Var2, 164);
	iVar0 = 0;
	while (iVar0 < 117)
	{
		iVar166 = func_1414(iVar0, 1);
		if (iVar166 != 0)
		{
			iVar1 = _0xdbc4b552b2ae9a83(iParam0, iVar166);
			if (is_weapon_valid(iVar1))
			{
				(*uParam1)[iVar0] = iVar1;
			}
			else
			{
				(*uParam1)[iVar0] = 0;
			}
		}
		iVar0++;
	}
	func_1415(iParam0, &(uParam1->f_118));
}

bool func_884(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_885(var uParam0, int iParam1)
{
	switch (vLocal_1100[iParam1]->f_1)
	{
		case 0:
			if (func_884(vLocal_1100[iParam1]->f_2, 1))
			{
				func_1416(uParam0, iParam1);
				func_1417(iParam1, 4);
			}
			else
			{
				func_1417(iParam1, 1);
			}
			break;
		case 1:
			vLocal_1100[iParam1] = _create_anim_scene(func_758(iParam1, 0), 0, func_758(iParam1, 1), false, true);
			load_anim_scene(&(vLocal_1100[iParam1]));
			func_1417(iParam1, 2);
			break;
		case 2:
			if (_is_anim_scene_loaded(&(vLocal_1100[iParam1]), true, false))
			{
				func_1417(iParam1, 4);
			}
			else if (!_is_anim_scene_loading(&(vLocal_1100[iParam1]), true))
			{
				load_anim_scene(&(vLocal_1100[iParam1]));
			}
			break;
		case 7:
			if (_does_anim_scene_exist(&(vLocal_1100[iParam1])) && check_ownership_of_anim_scene(&(vLocal_1100[iParam1])))
			{
				_delete_anim_scene(&(vLocal_1100[iParam1]));
			}
			func_1417(iParam1, 8);
			break;
	}
}

int func_886(var uParam0)
{
	if (!func_166(1))
	{
		func_1418(uParam0);
		func_439(1);
	}
	switch (func_33(uParam0))
	{
		case 0:
			func_1419(uParam0);
			break;
		case 1:
		case 2:
		case 3:
		case 4:
			break;
		case 25:
			func_1420(uParam0);
			if (iVar1143 >= 0 && iVar1143 <= 52)
			{
				func_440(iVar1143, 0);
				func_174(func_415(iVar1143));
				uLocal_1146 = iVar1143 + 1;
			}
			break;
		default:
			break;
	}
	return 1;
}

void func_887(var uParam0, int iParam1)
{
	uParam0->f_8266 = iParam1;
	func_103(uParam0, 1024);
}

int func_888(var uParam0)
{
	switch (func_33(uParam0))
	{
		case 0:
			break;
		case 25:
			do_screen_fade_out(0);
			break;
	}
	return 1;
}

void func_889(var uParam0, int iParam1)
{
	uParam0->f_8267 = iParam1;
	func_103(uParam0, 131072);
}

void func_890(int iParam0, int iParam1)
{
	if (!_does_propset_exist(iParam0))
	{
		return;
	}
	iVar0 = create_itemset(true);
	iVar3 = _get_entities_from_propset(iParam0, iVar0, 0, false, false);
	iVar4 = 0;
	while (iVar4 <= (iVar3 - 1))
	{
		iVar1 = get_indexed_item_in_itemset(iVar4, iVar0);
		if (_does_item_have_valid_base(iVar1))
		{
			iVar2 = _0x18013392501ce5dc(iVar1);
			if (does_entity_exist(iVar2))
			{
				set_entity_lod_dist(iVar2, iParam1);
			}
		}
		iVar4++;
	}
}

int func_891(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 0;
		case 2:
			return 1;
		case 3:
			return 2;
	}
	return -1;
}

int func_892(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
{
	iVar0 = create_ped(iParam0, vParam1, fParam4, bParam5, bParam6, bParam13, bParam14);
	if (!does_entity_exist(iVar0))
	{
		return 0;
	}
	func_1421(iVar0, iParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

void func_893(var uParam0)
{
	if (!func_166(43))
	{
		func_874();
	}
	func_1422(uParam0);
	_0xc9caeaeec1256e54(iVar896);
	_0xe296208c273bd7f0(0, 0, 0, 17, 1, 0);
	switch (func_33(uParam0))
	{
		case 0:
			func_885(uParam0, 2);
			func_885(uParam0, 4);
			func_885(uParam0, 5);
			func_885(uParam0, 6);
			break;
		case 1:
			func_885(uParam0, 4);
			func_885(uParam0, 5);
			func_885(uParam0, 6);
			func_885(uParam0, 7);
			func_885(uParam0, 8);
			func_885(uParam0, 9);
			break;
		case 2:
			func_885(uParam0, 7);
			func_885(uParam0, 8);
			func_885(uParam0, 9);
			func_885(uParam0, 10);
			func_885(uParam0, 11);
			func_885(uParam0, 12);
			break;
		case 3:
			func_885(uParam0, 12);
			func_885(uParam0, 13);
			func_885(uParam0, 14);
			break;
		case 4:
			func_885(uParam0, 13);
			func_885(uParam0, 14);
			break;
	}
	disable_control_action(0, 1644850270, false);
	disable_control_action(0, 255439828, false);
	disable_control_action(0, -1046962283, false);
	disable_control_action(0, 1618006066, false);
	_disable_first_person_cam_this_frame();
	if (func_166(11))
	{
		_0xf45e46deecf7df6e(14336, 0, 0, -1, -1);
		_0xab0d553fe20a6e25(0f);
		set_vehicle_density_multiplier_this_frame(0f);
		set_random_vehicle_density_multiplier_this_frame(0f);
		set_parked_vehicle_density_multiplier_this_frame(0f);
		set_scenario_ped_density_multiplier_this_frame(0f);
	}
	func_1423(0);
	func_175();
	func_1424();
}

void func_894(var uParam0)
{
	if (!func_23(&(uParam0->f_8269)))
	{
		return;
	}
	if (!func_121(uParam0, func_33(uParam0), 268435456))
	{
		return;
	}
	func_1425(uParam0);
}

void func_895(var uParam0)
{
	if (!func_8(uParam0, 8388608))
	{
		if (func_162(uParam0, func_33(uParam0)) == 5 || func_162(uParam0, func_33(uParam0)) == 6)
		{
			if (!func_214())
			{
				if (func_871(&(uParam0->f_13112)) < 5f)
				{
					_0x9f9a829c6751f3c7(get_player_index(), 31, 0);
				}
			}
			else
			{
				func_221(&(uParam0->f_13112));
			}
		}
	}
	else
	{
		_0x9f9a829c6751f3c7(get_player_index(), 31, 1);
	}
}

void func_896(var uParam0)
{
	if (func_121(uParam0, func_33(uParam0), 8388608))
	{
		if (func_1426(uParam0))
		{
			_uiprompt_enable_prompt_type_this_frame(6);
			func_1427();
		}
		else
		{
			_display_hud_component(-1679307491);
			func_1428(uParam0, func_33(uParam0), 8388608);
		}
	}
}

void func_897(var uParam0)
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
		if (func_238() || func_54())
		{
			func_99(uParam0, 1048576);
		}
	}
	else if (!func_238() && !func_54())
	{
		func_867(uParam0, 1048576);
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
			func_867(uParam0, 134217728);
		}
	}
}

void func_898(var uParam0)
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

void func_899(var uParam0)
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

void func_900(var uParam0)
{
	if (!is_itemset_valid(iLocal_14))
	{
		return;
	}
	iVar0 = get_itemset_size(iLocal_14);
	if (uParam0->f_13179 == -1 || uParam0->f_13179 > (iVar0 - 1))
	{
		uParam0->f_13179 = (iVar0 - 1);
	}
	iVar1 = uParam0->f_13179;
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
	uParam0->f_13179 = (iVar1 - 1);
	if (iVar1 <= 0)
	{
		uParam0->f_13179 = (get_itemset_size(iLocal_14) - 1);
	}
}

int func_901(var uParam0)
{
	if ((func_20() != -1 || func_33(uParam0) == 25) || func_33(uParam0) == 26)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_13145)
	{
		if (func_254(uParam0->f_5423[iVar0]))
		{
			func_1429(uParam0->f_5423[iVar0]);
		}
		iVar0++;
	}
	return 0;
}

bool func_902(var uParam0, int iParam1, int iParam2)
{
	iVar0 = func_132(iParam1);
	if (!func_1430(iVar0))
	{
		return false;
	}
	iVar1 = func_1431(iParam2);
	if (!func_1432(iVar1))
	{
		return false;
	}
	if (!func_1433(uParam0, iParam1, iParam2))
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

int func_903(var uParam0, int iParam1)
{
	return uParam0->f_1[func_132(iParam1)]->f_21;
}

int func_904(var uParam0, int iParam1)
{
	return 1;
}

void func_905(var uParam0)
{
	if (!func_20() == 0 || network_is_host_of_this_script())
	{
		func_221(&(uParam0->f_603));
	}
}

void func_906(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_1[func_132(iParam1)]->f_10 = iParam2;
	settimera(0);
}

bool func_907(var uParam0)
{
	if (!is_screen_faded_out())
	{
		return true;
	}
	if (!func_26(&(uParam0->f_13109)))
	{
		func_27(&(uParam0->f_13109), 0);
	}
	else if (func_871(&(uParam0->f_13109)) >= 10f)
	{
		return true;
	}
	iVar0 = 1;
	if (func_255(uParam0->f_5421))
	{
		iVar1 = 0;
		while (iVar1 < func_256(uParam0->f_5421))
		{
			iVar2 = func_257(uParam0->f_5421, iVar1);
			if (does_entity_exist(iVar2))
			{
				if (is_entity_a_ped(iVar2))
				{
					iVar3 = func_1434(uParam0->f_5421, iVar1);
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

float func_908(var uParam0)
{
	return func_871(&(uParam0->f_603));
}

bool func_909(var uParam0)
{
	if ((func_120(uParam0, 4) || func_120(uParam0, 128)) && !func_102())
	{
		return false;
	}
	return true;
}

bool func_910(var uParam0, int iParam1, int iParam2)
{
	if (func_8(uParam0, -2147483648))
	{
		return true;
	}
	if (func_902(uParam0, iParam1, 4))
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
		func_1435(uParam0);
		if (func_1436(uParam0))
		{
			func_1437(uParam0);
		}
		if (func_121(uParam0, func_33(uParam0), 33554432) && func_8(uParam0, 524288))
		{
			_uilog_print_cached_objective();
		}
		func_867(uParam0, 524288);
		func_1438(&(uParam0->f_7375), 4);
		if (func_1426(uParam0))
		{
			func_140(uParam0, func_33(uParam0), 8388608);
			_hide_hud_component(-1679307491);
			_uiprompt_enable_prompt_type_this_frame(6);
			func_1427();
		}
		return true;
	}
	return false;
}

void func_911(var uParam0)
{
	func_1439(uParam0);
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

bool func_912(var uParam0, int iParam1)
{
	if (func_120(uParam0, 16384))
	{
		if (func_866(uParam0))
		{
			func_51(&(uParam0->f_10792));
			func_867(uParam0, 2097152);
			func_265(uParam0, 16384);
			func_103(uParam0, 128);
			return true;
		}
		return false;
	}
	if (!func_8(uParam0, 4))
	{
		func_904(uParam0, iParam1);
		func_99(uParam0, 4);
	}
	Var0 = { func_1393(uParam0, iParam1) };
	if (func_121(uParam0, func_33(uParam0), 2))
	{
		if (func_8(uParam0, 2097152))
		{
			if (func_866(uParam0))
			{
				func_867(uParam0, 2097152);
				func_868(uParam0, Var0);
			}
			return false;
		}
		else
		{
			return func_868(uParam0, Var0);
		}
	}
	else if (func_8(uParam0, 2097152))
	{
		if (func_866(uParam0))
		{
			func_867(uParam0, 2097152);
			func_1400(uParam0);
			return true;
		}
		else
		{
			return false;
		}
	}
	if (func_121(uParam0, func_33(uParam0), 2))
	{
		return func_868(uParam0, Var0);
	}
	return true;
}

bool func_913(var uParam0)
{
	return func_1440(&(uParam0->f_7375));
}

void func_914(var uParam0)
{
	if (((!does_entity_exist(Global_35) || Global_1935630->f_12) || is_ped_fatally_injured(Global_35)) || get_entity_health(Global_35) <= 0)
	{
		if (func_1441(uParam0))
		{
			func_434(uParam0, 2);
			StringCopy(&cVar0, "PLAYER_DEAD", 64);
			if (get_ped_config_flag(Global_35, 11, true))
			{
				StringCopy(&cVar0, "PLAYER_KO", 64);
			}
			func_1442(uParam0, cVar0);
			func_160(uParam0, 2);
		}
	}
}

int func_915(var uParam0, int iParam1)
{
	if (((func_20() != -1 || func_33(uParam0) == 25) || func_33(uParam0) == 26) || Global_1935630->f_12)
	{
		return 0;
	}
	bVar0 = func_121(uParam0, func_33(uParam0), 1);
	iVar1 = 0;
	while (iVar1 < uParam0->f_13145)
	{
		if (func_254(uParam0->f_5423[iVar1]))
		{
			if (func_1443(uParam0->f_5423[iVar1]->f_7, iParam1))
			{
				func_1444(uParam0, uParam0->f_5423[iVar1], bVar0);
			}
		}
		iVar1++;
	}
	return 0;
}

void func_916(var uParam0)
{
	if ((is_screen_faded_out() && !is_player_playing(player_id())) && is_player_being_arrested(player_id(), false))
	{
		if (func_1445(uParam0))
		{
			func_434(uParam0, 6);
			StringCopy(&cVar0, "PLAYER_ARRESTED", 64);
			func_1442(uParam0, cVar0);
			func_160(uParam0, 2);
		}
	}
}

void func_917(var uParam0)
{
	switch (func_1446(&iVar0))
	{
		case 1:
			func_1447(uParam0, Var1, 1, 0);
			break;
		case 3:
			if (!_databinding_is_data_id_valid(uParam0->f_13178))
			{
				uParam0->f_13178 = _databinding_add_data_bool_from_path("", "bAllowedtoAbandon", 0);
			}
			if (func_191(iVar0) && iVar0 == func_12(uParam0->f_607))
			{
				bVar9 = true;
			}
			_databinding_write_data_bool(uParam0->f_13178, bVar9);
			break;
	}
}

bool func_918(var uParam0, int iParam1)
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

int func_919(var uParam0, int iParam1)
{
	if (func_8(uParam0, 16777216))
	{
		func_1399(uParam0);
		func_867(uParam0, 65536);
		return 0;
	}
	if (!func_121(uParam0, iParam1, 2))
	{
		return 0;
	}
	Var0 = { func_1393(uParam0, iParam1) };
	if (func_1448(uParam0, &Var0))
	{
		if (!func_8(uParam0, 65536))
		{
			func_99(uParam0, 65536);
		}
		return 1;
	}
	return 0;
}

void func_920(var uParam0, int iParam1)
{
	func_1449(&(uParam0->f_638), &(uParam0->f_819), &(uParam0->f_1020), &(uParam0->f_1081), &(uParam0->f_1124), &(uParam0->f_1126), &(uParam0->f_5147), &(uParam0->f_5188), &(uParam0->f_5239), &(uParam0->f_5249), &(uParam0->f_5265), &(uParam0->f_5286), iParam1, func_225(uParam0, iParam1));
}

void func_921(var uParam0, int iParam1)
{
	if (!func_121(uParam0, func_33(uParam0), 67108864))
	{
		if (does_blip_exist(uParam0->f_5303))
		{
			remove_blip(&(uParam0->f_5303));
		}
		uParam0->f_7374 = 0;
		func_906(uParam0, iParam1, 2);
		func_134(uParam0, 0);
		func_135(uParam0, 0);
		func_99(uParam0, 8);
		func_867(uParam0, -2147483648);
		func_140(uParam0, func_33(uParam0), 67108864);
		func_867(uParam0, 4);
		func_867(uParam0, 8192);
		func_867(uParam0, 536870912);
		func_265(uParam0, 4);
		func_65(0);
		func_64(0);
		func_867(uParam0, 2);
		func_45();
		uParam0->f_5302 = 0;
		func_1450(uParam0);
		if ((func_35(uParam0) == 25 || func_35(uParam0) == 26) && func_82(32768))
		{
			func_380(uParam0, 524288);
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
				func_1451(1, 1);
			}
		}
	}
}

void func_922(bool bParam0)
{
	if (!func_198(0, 0, 1) || bParam0)
	{
		iVar0 = func_1051();
		iVar1 = func_1054(iVar0);
		fVar2 = (1f - (absf(to_float(iVar1)) / to_float(8)));
		fVar3 = func_1452(iVar0 < 0, 0f, (to_float(iVar1) / to_float(8)));
		fVar4 = func_1452(iVar0 > 0, 0f, (to_float(iVar1) / to_float(8)));
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

int func_923(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (iParam0 == player_id())
	{
		return func_1453(bParam1, bParam2, bParam3);
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

var func_924(char* sParam0, int iParam1, bool bParam2, bool bParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, int iParam8)
{
	if (bParam2)
	{
		_0xdd1232b332cbb9e7(3, 1, 1);
	}
	if (Global_1572887->f_12 != -1)
	{
		return func_1454(sParam0, iParam1, 0, 0, 1, 1);
	}
	sVar0 = func_1455(iParam8, sParam0, sParam4, sParam5, sParam6, sParam7);
	if (bParam3)
	{
		_uilog_set_cached_objective(sVar0);
	}
	return func_1454(sVar0, iParam1, 0, 0, 1, 1);
}

bool func_925(var uParam0)
{
	return true;
}

bool func_926(var uParam0)
{
	return true;
}

int func_927(var uParam0)
{
	return 1;
}

int func_928(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 954660191;
		case 1:
			return -1040876935;
		case 2:
			return 296901449;
		case 3:
			return 126245522;
		case 4:
			return -1368511730;
		case 43:
			return -1841822177;
		case 5:
			return 480079517;
		case 6:
			return 840671577;
		case 7:
			return 424030678;
		case 8:
			return 446901936;
		case 9:
			return -355466967;
		case 10:
			return 1446246869;
		case 11:
			return -2006166057;
		case 12:
			return 1950175060;
		case 13:
			return 836939099;
		case 14:
			return 1185302722;
		case 15:
			return -1411815376;
		case 16:
			return 236338048;
		case 17:
			return -1330115686;
		case 18:
			return -578347576;
		case 19:
			return -1668585578;
		case 20:
			return 231465488;
		case 21:
			return 1148521608;
		case 22:
			return 1681219929;
		case 23:
			return 1232099469;
		case 24:
			return 78180283;
		case 25:
			return -2084181920;
		case 26:
			return 1243983880;
		case 27:
			return 218444191;
		case 28:
			return 1654725195;
		case 29:
			return 1838310467;
		case 30:
			return 1858824185;
		case 31:
			return 200254898;
		case 32:
			return -1878508229;
		case 33:
			return -1077205471;
		case 34:
			return 314966081;
		case 35:
			return 588559146;
		case 36:
			return -1639263599;
		case 37:
			return 1222378998;
		case 38:
			return 2074469742;
		case 39:
			return 1235846615;
		case 40:
			return -228768324;
		case 41:
			return -1411922943;
		case 42:
			return -834103244;
		case 44:
			return 2113196069;
		default:
			break;
	}
	return 0;
}

void func_929(var uParam0, int iParam1)
{
	func_1339(&(uParam0->f_7375), iParam1);
	func_1456(&(uParam0->f_10792), iParam1);
}

void func_930(var uParam0, int iParam1, char* sParam2)
{
	if (!_does_anim_scene_exist(uParam0->f_804))
	{
		return;
	}
	if (!func_1319(uParam0, iParam1))
	{
		return;
	}
	if (is_string_null_or_empty(sParam2))
	{
		sParam2 = func_1457(uParam0, iParam1);
	}
	if (_0x6f1f0b17109309da(uParam0->f_804, sParam2))
	{
		if (((is_entity_a_ped(iParam1) && does_entity_exist(_get_anim_scene_ped(uParam0->f_804, sParam2, false))) || (is_entity_an_object(iParam1) && does_entity_exist(_get_anim_scene_object(uParam0->f_804, sParam2, false)))) || (is_entity_a_vehicle(iParam1) && does_entity_exist(_get_anim_scene_vehicle(uParam0->f_804, sParam2, false))))
		{
			remove_anim_scene_entity(uParam0->f_804, sParam2, iParam1);
		}
	}
}

void func_931(int iParam0, int iParam1)
{
	vLocal_808[iParam0]->f_2 = iParam1;
}

struct<4> func_932()
{
	Var0 = { func_963(0) };
	return func_964(856287005, Var0, -218846335, 0);
}

bool func_933(int iParam0, struct<4> Param1, bool bParam5)
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
			if (func_583(Var3, 0))
			{
				Var12.f_4 = Var3.f_1;
				if (func_1458(Var3, Param1, Var12.f_4, 0) > 0)
				{
				}
				else
				{
					func_1459(&Var7);
					if (func_1136(Var3, &Var7, &Var12, 1, 752097756, 1))
					{
						if (bParam5)
						{
							func_1460(Var7, 1);
						}
					}
				}
			}
		}
		iVar0++;
	}
	return true;
}

float func_934(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_1461();
	}
	switch (iParam1)
	{
		case 0:
			return &(Global_1955569->f_753.f_5[iParam0]);
		case 1:
			return &(Global_1955569->f_866.f_2.f_5[iParam0]);
		default:
			break;
	}
	return -1f;
}

int func_935(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)
{
	if (iParam5 == 2)
	{
		iParam5 = func_1461();
	}
	iVar0 = player_ped_id();
	if (bParam2)
	{
		if (fParam1 >= 100f)
		{
			play_sound_frontend("Core_Full", "Consumption_Sounds", true, 0);
		}
		else
		{
			play_sound_frontend("Core_Fill_Up", "Consumption_Sounds", true, 0);
		}
	}
	if (bParam3)
	{
		func_1462(iParam0, 7000, iParam5);
	}
	if (fParam1 > 100f)
	{
		fParam1 = 100f;
	}
	else if (fParam1 < 0f)
	{
		fParam1 = 0f;
	}
	func_1463(iVar0, iParam0, fParam1);
	func_1464(iParam0, fParam1, bParam4, iParam5);
	if (!is_entity_dead(iVar0))
	{
		_set_attribute_core_value(iVar0, func_943(iParam0), ceil(fParam1));
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_936(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	iVar0 = func_695(*iParam0);
	iVar1 = func_696(*iParam0);
	iVar2 = func_697(*iParam0);
	iVar3 = func_698(*iParam0);
	iVar4 = func_699(*iParam0);
	iVar5 = func_700(*iParam0);
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
	iVar5 = (iVar5 - iParam1);
	while (iVar5 < 0)
	{
		iParam2++;
		iVar5 += 60;
	}
	iVar4 = (iVar4 - iParam2);
	while (iVar4 < 0)
	{
		iParam3++;
		iVar4 += 60;
	}
	iVar3 = (iVar3 - iParam3);
	while (iVar3 < 0)
	{
		iParam4++;
		iVar3 += 24;
	}
	iVar2 = (iVar2 - iParam4);
	while (iVar2 <= 0)
	{
		iParam5++;
		iVar6 = (iVar1 - 1);
		if (iVar6 < 0)
		{
			iParam6++;
			iVar1 += 12;
		}
		iVar7 = func_701(iVar6, iVar0);
		iVar2 = (iVar2 + iVar7);
	}
	iVar1 = (iVar1 - iParam5);
	while (iVar1 < 0)
	{
		iParam6++;
		iVar1 += 12;
	}
	iVar0 = (iVar0 - iParam6);
	func_702(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

int func_937(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_1461();
	}
	switch (iParam1)
	{
		case 0:
			return Global_1955569->f_753.f_5[iParam0]->f_2;
		case 1:
			return Global_1955569->f_866.f_2.f_5[iParam0]->f_2;
		default:
			break;
	}
	return -1;
}

int func_938(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_1461();
	}
	switch (iParam1)
	{
		case 0:
			return Global_1955569->f_753.f_5[iParam0]->f_1;
		case 1:
			return Global_1955569->f_866.f_2.f_5[iParam0]->f_1;
		default:
			break;
	}
	return -15;
}

bool func_939(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_703(iParam1) || !func_703(iParam0))
		{
			return true;
		}
	}
	return iParam0 > iParam1;
}

void func_940(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_1461();
	}
	switch (iParam2)
	{
		case 0:
			Global_1955569->f_753.f_5[iParam0]->f_2 = iParam1;
			break;
		case 1:
			Global_1955569->f_866.f_2.f_5[iParam0]->f_2 = iParam1;
			break;
		default:
			break;
	}
}

void func_941(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_1461();
	}
	switch (iParam2)
	{
		case 0:
			Global_1955569->f_753.f_5[iParam0]->f_1 = iParam1;
			break;
		case 1:
			Global_1955569->f_866.f_2.f_5[iParam0]->f_1 = iParam1;
			break;
		default:
			break;
	}
}

int func_942(int iParam0)
{
	fVar0 = (to_float(iParam0 + 100) / 200f);
	return ceil((100f * fVar0));
}

int func_943(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1;
		case 0:
			return 0;
		case 2:
			return 2;
		default:
			break;
	}
	return 0;
}

int func_944(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 2;
		case 2:
			return 3;
		default:
			break;
	}
	return 0;
}

void func_945(int iParam0, float fParam1, bool bParam2)
{
	sVar0 = func_1465(iParam0, 0, 0, 0);
	sVar0 = _create_var_string(2, sVar0, round(fParam1));
	_databinding_write_data_string(&(Global_1955569->f_5.f_2[iParam0]->f_12[0]), sVar0);
	_databinding_write_data_bool(&(Global_1955569->f_5.f_2[iParam0]->f_16[0]), bParam2);
}

float func_946(int iParam0)
{
	fVar0 = (to_float(iParam0) / 100f);
	return ((fVar0 * 200f) - 100f);
}

int func_947(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 87;
		case 1:
			return 85;
		case 2:
			return 86;
		default:
			break;
	}
	return -1;
}

char* func_948(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "HealthCoreValue";
		case 1:
			return "StaminaCoreValue";
		case 2:
			return "DeadEyeCoreValue";
		default:
			break;
	}
	return "";
}

void func_949(int iParam0)
{
	iVar0 = func_992(iParam0, 1);
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

void func_950(int iParam0)
{
	iVar0 = func_992(iParam0, 1);
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

void func_951()
{
	func_950(-939420910);
	func_950(-1187950766);
	func_950(356365161);
	func_950(753127042);
	func_950(-2038424081);
	func_950(1884271742);
	func_950(459290420);
}

void func_952()
{
	func_950(704802028);
	func_950(588987611);
	func_950(2008888900);
	func_950(1649996811);
	func_950(227918160);
	func_950(168171957);
	func_950(1193080109);
	func_950(-491981251);
	func_950(-639037538);
	func_950(-618620429);
}

int func_953()
{
	if (func_20() == -1)
	{
		return Global_26796.f_776;
	}
	return Global_36638.f_45.f_350.f_1011;
}

bool func_954(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 95)
	{
		return false;
	}
	return true;
}

int func_955(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = func_682();
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

void func_956(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	*uParam0 = iParam1;
	uParam0->f_1 = iParam2;
	uParam0->f_2 = iParam3;
	uParam0->f_3 = iParam4;
	uParam0->f_4 = iParam5;
	uParam0->f_6 = 0;
	uParam0->f_5 = 0;
}

char* func_957()
{
	return "MECH_INVENTORY@CLOTHING@OUTFIT_CHANGE";
}

void func_958(int iParam0)
{
	Global_1946804 = (&Global_1946804 - (Global_1946804 && iParam0));
}

int func_959(int iParam0)
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

void func_960()
{
	Global_1946804->f_1378 = Global_1946804->f_1497;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		*Global_1946804->f_1378.f_1[iVar0] = { *Global_1946804->f_1497.f_1[iVar0] };
		iVar0++;
	}
}

bool func_961(var uParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, int iParam5)
{
	if (!func_1466(uParam0, iParam3, iParam2) && !func_683(uParam0, iParam2, bParam1, 0, bParam4, 0, 0))
	{
		return false;
	}
	iVar0 = 10;
	if (func_476(32768))
	{
		if (!*bParam1 || (*bParam1 && &uParam0->f_1[iVar0] != &Global_1946804->f_57[iVar0]))
		{
			func_974(1108822547);
		}
		else
		{
			func_1467(1108822547);
		}
	}
	func_980(uParam0, 0, 0);
	func_1468(iParam5);
	return true;
}

void func_962(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	bVar1 = true;
	if (bParam2)
	{
		if ((iParam0 == -1 || iParam0 == func_953()) || bParam5)
		{
			func_1469();
		}
	}
	if (func_20() == -1)
	{
		iVar0 = Global_40.f_7729;
		if (decor_exist_on(Global_35, "playerChangeOutfits") && decor_get_bool(Global_35, "playerChangeOutfits"))
		{
			iVar0 = &Global_1905941;
		}
		if ((bParam4 && iVar0 > 5) && func_1470(Global_1946804->f_1497))
		{
			if (Global_40.f_7157[Global_40.f_7729] & 512 != 0)
			{
				Global_40.f_7157[Global_40.f_7729] = (&Global_40.f_7157[Global_40.f_7729] - Global_40.f_7157[Global_40.f_7729] & 4096);
				Global_40.f_7729 = 0;
				Global_1905941 = Global_40.f_7729;
				iVar0 = Global_40.f_7729;
				Global_40.f_7157[Global_40.f_7729] |= 4096;
				Global_1946804->f_1497 = func_458(Global_40.f_7729);
				Global_1946804->f_1378 = func_458(Global_40.f_7729);
				bParam3 = true;
			}
		}
		bVar1 = func_467(iVar0);
	}
	if (bParam3 && bVar1)
	{
		func_1471(iParam0, 0, 6);
	}
	if (bParam1)
	{
		func_1168(0, 1);
	}
	func_1468(0);
}

struct<4> func_963(bool bParam0)
{
	return func_964(1328661203, func_1472(), -1591664384, bParam0);
}

struct<4> func_964(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	if (!func_583(iParam0, 0))
	{
		return Var0;
	}
	_0x886dfd3e185c8a89(func_993(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

struct<4> func_965(bool bParam0)
{
	iVar0 = func_993(bParam0);
	if (iVar0 == 2)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224215))
		{
			*Global_1224215 = { func_964(923904168, func_963(bParam0), -740156546, bParam0) };
		}
		return *Global_1224215;
	}
	else if (iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224223))
		{
			*Global_1224223 = { func_964(923904168, func_963(bParam0), -740156546, 0) };
		}
		return *Global_1224223;
	}
	return func_964(923904168, func_963(bParam0), -740156546, 0);
}

bool func_966(int iParam0, bool bParam1)
{
	if (func_607(iParam0) == 1779021115)
	{
		return false;
	}
	if (_is_weapon_one_handed(iParam0))
	{
		if (bParam1)
		{
			return func_605(24);
		}
		else
		{
			return true;
		}
	}
	return false;
}

bool func_967(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	return func_1458(iParam0, *uParam1, iParam2, bParam3) > 0;
}

bool func_968(int iParam0, var uParam1, int iParam2)
{
	if (func_1473(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return false;
}

struct<4> func_969(bool bParam0)
{
	iVar0 = func_993(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224219))
		{
			*Global_1224219 = { func_964(271701509, func_963(bParam0), 12999093, 0) };
		}
		return *Global_1224219;
	}
	return func_964(271701509, func_963(bParam0), 12999093, 0);
}

bool func_970(int iParam0, int iParam1)
{
	if (iParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_607(iParam0);
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

bool func_971(var uParam0, var uParam1, bool bParam2, int iParam3, var uParam4, bool bParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(&uParam0))
	{
		return false;
	}
	if (!_0x9700e8efc4ab9089(func_993(bParam5), &uParam0, uParam4, !bParam6))
	{
		return false;
	}
	return true;
}

int func_972(int iParam0, int iParam1)
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

int func_973(var uParam0)
{
	iVar0 = 0;
	iVar1 = 22;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_603(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 37;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_603(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 12;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_603(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 29;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_603(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 30;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_603(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 31;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_603(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	return iVar0;
}

void func_974(int iParam0)
{
	func_981(iParam0, 8, 6);
}

void func_975(int iParam0)
{
	func_1474(&(Global_1946804->f_2589), iParam0);
}

void func_976(int iParam0, int iParam1)
{
	func_1475(&(Global_1946804->f_2589), iParam0, iParam1);
}

void func_977(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

void func_978(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	iVar1 = 12;
	iVar2 = func_607(&(uParam0->f_1[iParam2]));
	iVar3 = 0;
	if (bParam3)
	{
		iVar3 = 3;
	}
	if (func_1322(iParam2, 65536) && &uParam0->f_1[iVar1] == -452402570)
	{
		uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
		uParam0->f_1[iVar1]->f_1 = 0;
		if (bParam4)
		{
			func_976(iVar1, iVar3);
		}
	}
	if (func_1141(-1586649372) && func_1322(iParam2, 524288))
	{
		iVar1 = 33;
		uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
		uParam0->f_1[iVar1]->f_1 = 0;
		if (bParam4)
		{
			func_976(iVar1, iVar3);
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
						func_976(iVar1, iVar3);
					}
				}
			}
			func_1476(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
			break;
		case 688587926:
			func_1476(uParam0, 0, (1 && bParam4), (1 && bParam4), bParam3);
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
						func_976(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 525
				func_1476(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				iVar1 = 16;
				if (uParam0->f_1[iVar1]->f_1 == 1155669136)
				{
					uParam0->f_1[iVar1]->f_1 = -1539589426;
					if (bParam4)
					{
						func_976(iVar1, iVar3);
					}
				}
				if (uParam0->f_1[iVar1]->f_1 == 1530758430)
				{
					uParam0->f_1[iVar1]->f_1 = 1334603721;
					if (bParam4)
					{
						func_976(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 656
				func_1476(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				Jump @1415; //curOff = 691
				func_1476(uParam0, (1 && bParam4), (1 && bParam4), 0, bParam3);
				iVar1 = 22;
				if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1])
				{
					uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
					uParam0->f_1[iVar1]->f_1 = 0;
					if (bParam4)
					{
						func_976(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 786
				func_1476(uParam0, (1 && bParam4), 0, 1, bParam3);
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
							func_976(iVar1, iVar3);
						}
					}
					iVar1 = 38;
					if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1])
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_976(iVar1, iVar3);
						}
					}
					iVar1 = 35;
					if (-923693316 == func_607(&(uParam0->f_1[iVar1])))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_976(iVar1, iVar3);
						}
					}
				}
				else
				{
					iVar1 = 35;
					if ((func_1477(iParam1) && &uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1]) && -923693316 == func_607(&(uParam0->f_1[iVar1])))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_976(iVar1, iVar3);
						}
					}
				}
				Jump @1415; //curOff = 1130
				iVar1 = 36;
				if (&uParam0->f_1[iParam2] != &Global_1946804->f_57[iParam2] && func_603(&(Global_1946804->f_1497.f_1[iVar1]), -1638171711))
				{
					uParam0->f_1[iParam2] = &Global_1946804->f_57[iParam2];
					uParam0->f_1[iParam2]->f_1 = 0;
					if (bParam4)
					{
						func_976(iVar1, iVar3);
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
						func_976(iVar1, iVar3);
					}
				}
				if (&uParam0->f_1[iParam2] != &Global_1946804->f_57[iParam2] && (func_1477(&(Global_1946804->f_1497.f_1[iVar1])) || func_603(&(Global_1946804->f_1497.f_1[iVar1]), -1638171711)))
				{
					uParam0->f_1[iParam2] = &Global_1946804->f_57[iParam2];
					uParam0->f_1[iParam2]->f_1 = 0;
					if (bParam4)
					{
						func_976(iVar1, iVar3);
					}
				}
			}
			switch (func_607(iParam1))
			{
				case 81053684:
					iVar1 = 10;
					if (-525676072 == func_607(&(uParam0->f_1[iVar1])))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_976(iVar1, iVar3);
						}
					}
					break;
				case -525676072:
					iVar1 = 12;
					if (81053684 == func_607(&(uParam0->f_1[iVar1])) || func_603(&(uParam0->f_1[iVar1]), 866047851))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_976(iVar1, iVar3);
						}
					}
					break;
			}
			default:
				break;
	}
}

int func_979(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	iVar0 = func_1478(0);
	if (iParam2 != 0 && func_1479(iParam0, iVar0, iParam2, bParam3) != -1)
	{
		return iParam2;
	}
	if (func_1172(iParam0, func_972(iParam1, 1), &iParam2))
	{
		return iParam2;
	}
	return 0;
}

void func_980(var uParam0, bool bParam1, int iParam2)
{
	bVar6 = func_20() != -1;
	iVar7 = func_1478(0);
	if (func_476(32768))
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
			iVar5 = func_972(iVar0, 1);
			if (func_1321(iVar5, 8))
			{
			}
			else if (&Global_1946804->f_57[iVar0]->f_2[0] == -1802376732 || &uParam0->f_1[iVar0] == 0)
			{
			}
			else if (func_1321(iVar5, 6) || &uParam0->f_1[iVar0] == &Global_1946804->f_57[iVar0])
			{
			}
			else
			{
				iVar4 = func_1480(&(uParam0->f_1[iVar0]), iVar5, iVar7, bVar6);
				if ((iVar1 + iVar4) > 31)
				{
					iVar3 = iVar2;
				}
				else
				{
					iVar1 = (iVar1 + iVar4);
					iVar2++;
				}
				iVar8 = func_1481(uParam0);
				if (iVar3 > 0)
				{
					if (!func_476(524288))
					{
						func_983(524288);
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
							iVar5 = func_972(iVar0, 1);
							if (func_1321(iVar5, 8))
							{
							}
							else if (&Global_1946804->f_57[iVar0]->f_2[0] == -1802376732 || &uParam0->f_1[iVar0] == 0)
							{
							}
							else if (func_1321(iVar5, 6) || &uParam0->f_1[iVar0] == &Global_1946804->f_57[iVar0])
							{
							}
							else
							{
								iVar4 = func_1480(&(uParam0->f_1[iVar0]), iVar5, iVar7, bVar6);
								if ((iVar1 + iVar4) > 31)
								{
									uParam0->f_1[iVar0] = &Global_1946804->f_57[iVar0];
									uParam0->f_1[iVar0]->f_1 = 0;
									if (bParam1)
									{
										func_976(iVar0, iParam2);
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
					func_958(524288);
				}
			}
		}
	}
}

void func_981(int iParam0, int iParam1, int iParam2)
{
	(Global_1946804->f_57[func_472(iParam0, 1)])->f_10 = ((Global_1946804->f_57[func_472(iParam0, 1)])->f_10 - ((Global_1946804->f_57[func_472(iParam0, 1)])->f_10 && iParam1));
}

void func_982(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (*uParam0 <= 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_1482(&(uParam0->f_2[iVar0]), bParam1, bParam2);
		iVar0++;
	}
	if (func_20() == -1)
	{
		if ((Global_40.f_7729 != 0 || !func_1483(2, Global_26796.f_776)) || Global_1946804->f_1497 != func_458(0))
		{
			if (Global_40.f_7157[Global_40.f_7729] & 512 != 0)
			{
				Global_40.f_7157[Global_40.f_7729] = (&Global_40.f_7157[Global_40.f_7729] - Global_40.f_7157[Global_40.f_7729] & 4096);
				Global_40.f_7729 = 0;
				Global_1905941 = Global_40.f_7729;
				Global_40.f_7157[Global_40.f_7729] |= 4096;
				Global_1946804->f_1497 = func_458(Global_40.f_7729);
				Global_1946804->f_1378 = func_458(Global_40.f_7729);
				Global_26796.f_776 = 0;
				func_1471(-1, 0, 6);
			}
		}
	}
	if (bParam3)
	{
		func_1168(0, 1);
	}
}

void func_983(int iParam0)
{
	Global_1946804 = (Global_1946804 || iParam0);
}

void func_984(struct<4> Param0)
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
			if (func_1484(Param0))
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
			func_1485(Param0);
			*Global_1946804->f_668[Global_1946804->f_856] = { Param0 };
			Global_1946804->f_850++;
			Global_1946804->f_856 = (Global_1946804->f_856 + 1 % 25);
			func_983(8);
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
			if (func_1484(Param0))
			{
				return;
			}
			func_1485(Param0);
			*Global_1946804->f_567[Global_1946804->f_851] = { Param0 };
			Global_1946804->f_851++;
			func_983(8);
			break;
		case 30:
		case 31:
		case 32:
		case 33:
		case 35:
		case 36:
			func_480(Param0, Param0.f_1, Param0.f_2);
			break;
	}
}

void func_985(var uParam0)
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

bool func_986(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_987(struct<4> Param0)
{
	if (Global_1946804->f_852 >= 20)
	{
		return;
	}
	if (func_1484(Param0))
	{
		iVar0 = 0;
		while (iVar0 < Global_1946804->f_852)
		{
			iVar1 = ((Global_1946804->f_853 + iVar0) % 20);
			if (((&Global_1946804->f_769[iVar1] == Param0 && Global_1946804->f_769[iVar1]->f_2 == Param0.f_2) && Global_1946804->f_769[iVar1]->f_3 == Param0.f_3) && Global_1946804->f_769[iVar1]->f_1 == Param0.f_1)
			{
				return;
			}
			if (&Global_1946804->f_769[iVar1] == 34 && func_1484(20))
			{
				return;
			}
			iVar0++;
		}
	}
	func_1485(Param0);
	*Global_1946804->f_769[Global_1946804->f_854] = { Param0 };
	Global_1946804->f_852++;
	Global_1946804->f_854 = (Global_1946804->f_854 + 1 % 20);
	func_983(8);
}

bool func_988(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return ((*Global_1945938)[iParam0]->f_1 && iParam1) != 0;
}

int func_989(int iParam0)
{
	iVar0 = func_482(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return func_1486(iVar0);
}

int func_990(int iParam0, int iParam1)
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
			func_1487(iVar2);
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

void func_991()
{
	iVar0 = 0;
	while (iVar0 < Global_1058888->f_40501)
	{
		iVar0++;
	}
}

int func_992(int iParam0, int iParam1)
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

int func_993(bool bParam0)
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

int func_994(int iParam0)
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

void func_995(int iParam0, int iParam1)
{
	Global_1946804->f_2657.f_26.f_6 = (Global_1946804->f_2657.f_26.f_6 - (Global_1946804->f_2657.f_26.f_6 && iParam0));
}

void func_996(int iParam0, int iParam1)
{
	Global_1946804->f_2657.f_26.f_6 = (Global_1946804->f_2657.f_26.f_6 || iParam0);
}

void func_997(int iParam0, int iParam1)
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
			func_1488((iVar0 - 1), iVar0);
			iVar0 = (iVar0 - 1);
		}
	}
	else
	{
		iVar0 = iParam0;
		while (iVar0 < iParam1)
		{
			func_1488(iVar0, iVar0 + 1);
			iVar0++;
		}
	}
	if (func_191(&(Global_1898164->f_1[0])))
	{
		func_203(&(Global_1898164->f_1[0]), 3);
	}
}

void func_998(int iParam0, int iParam1, bool bParam2)
{
	if (!func_500(iParam0))
	{
		return;
	}
	func_1489(iParam1, &iVar0, &iVar1);
	if (bParam2)
	{
		set_bit((*Global_1935183->f_73[iParam0])[iVar0], iVar1);
	}
	else
	{
		clear_bit((*Global_1935183->f_73[iParam0])[iVar0], iVar1);
	}
}

void func_999(var uParam0)
{
	Var0 = -1600776215;
	Var0.f_1 = 820723243;
	Var0.f_2 = 1;
	*uParam0 = { Var0 };
}

void func_1000(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_1001(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_1002()
{
	if (_get_number_of_references_of_script_with_name_hash(-92416669) > 0)
	{
		return true;
	}
	return false;
}

bool func_1003(int iParam0)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1934603->f_161)
	{
		if (iParam0 == get_hash_key(&((*Global_1934603)[iVar0]->f_10)))
		{
			func_1490(iVar0);
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_1004(bool bParam0, bool bParam1)
{
	if (func_20() == -1)
	{
		func_1491();
	}
	else
	{
		return;
	}
	func_1492();
	Global_40.f_9.f_14 = func_285();
	Global_40.f_9.f_20 = _get_bounty_for_player(get_player_index());
	Global_40.f_11999 = _0xb00ce33465b5406d(1, "startup");
	if (bParam0 && !bParam1)
	{
		if (func_1493())
		{
			func_371(Global_1310720->f_1);
		}
		else if (func_1494() == func_372(Global_36, 1) && func_1495() != 2)
		{
			func_371(Global_40.f_6);
			Global_40.f_9 = 1;
		}
		else
		{
			func_371(Global_36);
		}
		func_1496(Global_36, &vVar0, &uVar4);
		if (!func_1493())
		{
			if (func_1497(vVar0, Global_36) < func_1497(Global_40.f_9.f_7, Global_36))
			{
				func_371(vVar0);
				Global_40.f_9 = uVar4;
			}
			else
			{
				Global_40.f_9 = 0;
			}
		}
		Global_40.f_9.f_15 = func_372(Global_40.f_9.f_7, 1);
	}
	else if (!bParam0)
	{
		func_1496(Global_36, &(Global_40.f_9.f_7), &(Global_40.f_9));
		override_save_house(true, Global_40.f_9.f_7, 0f, true, &vVar0, &uVar3);
	}
	if (!bParam1)
	{
		func_229(Global_1935630, 8192);
	}
	func_1498();
}

bool func_1005(var uParam0, int iParam1, int iParam2)
{
	if (!does_entity_exist(iParam1))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_13145)
	{
		if (func_254(uParam0->f_5423[iVar0]))
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

bool func_1006(var uParam0, int iParam1)
{
	if (!does_entity_exist(iParam1))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_13145)
	{
		if (((func_254(uParam0->f_5423[iVar0]) && is_entity_an_object(&(uParam0->f_5423[iVar0]))) && get_object_index_from_entity_index(&(uParam0->f_5423[iVar0])) != iParam1) && get_entity_model(&(uParam0->f_5423[iVar0])) == get_entity_model(iParam1))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

void func_1007(int iParam0, int iParam1, bool bParam2)
{
	if (!func_1008(iParam0))
	{
		return;
	}
	func_1499(&((*Global_1360165)[iParam0]->f_13), iParam1, bParam2);
}

bool func_1008(int iParam0)
{
	return iParam0 > -1;
}

bool func_1009(var uParam0, int iParam1)
{
	return (*uParam0 && iParam1) != 0;
}

void func_1010(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_1008(iParam0))
		{
			return;
		}
	}
	func_1500(iParam1, &iVar0, &iVar1);
	set_bit((*Global_1360165)[iParam0]->f_58[iVar0], iVar1);
}

void func_1011(int iParam0)
{
	func_1010(iParam0, 36, 1);
}

void func_1012(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_1008(iParam0))
		{
			return;
		}
	}
	func_1500(iParam1, &iVar0, &iVar1);
	clear_bit((*Global_1360165)[iParam0]->f_58[iVar0], iVar1);
}

bool func_1013(int iParam0, int iParam1)
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

int func_1014(int iParam0, bool bParam1)
{
	if (!func_521(iParam0))
	{
		return 0;
	}
	if (bParam1)
	{
		if (!_0x800df3fc913355f3((*Global_1360165)[iParam0]->f_1))
		{
			func_1501(iParam0);
		}
	}
	return (*Global_1360165)[iParam0]->f_1;
}

bool func_1015(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_1008(iParam0))
		{
			return false;
		}
	}
	func_1500(iParam1, &iVar0, &iVar1);
	return is_bit_set(&((*Global_1360165)[iParam0]->f_58[iVar0]), iVar1);
}

void func_1016(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (func_521(iParam0))
	{
		iVar1 = func_557(iParam0);
		if (!is_entity_dead(iVar1))
		{
			iVar0 = get_ped_max_health(iVar1);
			set_ped_config_flag(iVar1, 179, true);
			func_1502(iParam0);
		}
	}
	if (func_1015(iParam0, 5, 1))
	{
		set_ped_config_flag(func_557(iParam0), 137, true);
	}
}

void func_1017(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!func_1008(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_1012(iParam0, 50, 1);
		func_1012(iParam0, 48, 1);
		func_1012(iParam0, 49, 1);
		func_1012(iParam0, 51, 1);
		func_1012(iParam0, 52, 1);
		func_1012(iParam0, 54, 1);
		func_1012(iParam0, 55, 1);
	}
	else
	{
		func_1010(iParam0, 50, 1);
		func_1010(iParam0, 48, 1);
		func_1010(iParam0, 49, 1);
		func_1010(iParam0, 51, 1);
		if (bParam3)
		{
			func_1010(iParam0, 54, 1);
		}
		else
		{
			func_1012(iParam0, 54, 1);
		}
		if (!bParam2)
		{
			func_1010(iParam0, 52, 1);
			if (bParam3)
			{
				func_1010(iParam0, 55, 1);
			}
		}
		else
		{
			func_1012(iParam0, 52, 1);
			if (!bParam3)
			{
				func_1012(iParam0, 55, 1);
			}
		}
	}
}

void func_1018(int iParam0, bool bParam1)
{
	if (!func_1008(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		set_ped_config_flag(func_557(iParam0), 204, true);
	}
	else
	{
		set_ped_config_flag(func_557(iParam0), 204, false);
	}
}

void func_1019(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (!func_521(iParam0))
	{
		return;
	}
	if (func_522(iParam0))
	{
		if (!func_258(iParam0))
		{
			return;
		}
		if (!bParam1)
		{
			return;
		}
	}
	if (func_1015(iParam0, 32, 1))
	{
		if (!bParam2)
		{
			return;
		}
	}
	iVar0 = func_1014(iParam0, 0);
	if (!_is_base_a_persistent_character(iVar0))
	{
		return;
	}
	iVar1 = func_557(iParam0);
	if (((does_entity_exist(iVar1) && func_1503(iParam0) < 10000f) && !bParam3) && !is_screen_faded_out())
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
		func_1010(iParam0, 2, 1);
	}
	else
	{
		func_1504(iParam0);
		func_1010(iParam0, 1, 1);
	}
}

void func_1020(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_521(iParam0))
		{
			return;
		}
	}
	Global_40.f_4942[iParam0] = (&Global_40.f_4942[iParam0] - (Global_40.f_4942[iParam0] && iParam1));
}

int func_1021(int iParam0)
{
	if (!func_521(iParam0))
	{
		return 0;
	}
	if (!does_entity_exist((*Global_1360165)[iParam0]->f_70))
	{
		(*Global_1360165)[iParam0]->f_70 = 0;
	}
	return (*Global_1360165)[iParam0]->f_70;
}

void func_1022(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	if (!func_1008(iParam1))
	{
		return;
	}
	iVar0 = func_1021(iParam1);
	if (func_1505(iParam1))
	{
		if (!func_1506(iParam1))
		{
			return;
		}
	}
	func_1012(iParam1, 39, 1);
	func_1507(iParam1, 64, 0);
	(*Global_1360165)[iParam1]->f_70.f_11 = 0;
	func_1507(iParam1, 8, 0);
	if (does_entity_exist(iVar0))
	{
		if (!bParam2)
		{
			func_1507(iParam1, 512, 1);
			set_ped_keep_task(iVar0, true);
		}
		else
		{
			set_blocking_of_non_temporary_events(iVar0, false);
			func_1010(iParam1, 43, 1);
		}
		if (bParam4)
		{
			func_1508(iParam1, 0, 1, 1, 1);
		}
	}
}

bool func_1023(int iParam0)
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

void func_1024(int iParam0)
{
	iParam0 = func_266(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_216(iParam0);
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	iVar6 = 0;
	while (iVar6 < 3)
	{
		iVar1 = func_1509(iVar6);
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

void func_1025(int iParam0, int iParam1)
{
	iParam0 = func_266(iParam0);
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

bool func_1026(int iParam0, int iParam1)
{
	iParam0 = func_266(iParam0);
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

void func_1027(var uParam0)
{
	if (network_is_game_in_progress())
	{
		_set_blip_name_from_player_string(*uParam0, func_1511(func_1510(255), 109029619));
	}
	else if (func_304())
	{
		set_blip_name_from_text_file(*uParam0, "SADDLE_BLIP_ARTHUR");
	}
	else
	{
		func_1053();
		set_blip_name_from_text_file(*uParam0, "SADDLE_BLIP_JOHN");
	}
}

int func_1028(int iParam0)
{
	iParam0 = func_266(iParam0);
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

void func_1029(var uParam0, bool bParam1)
{
	if (network_is_game_in_progress())
	{
		_set_blip_name_from_player_string(*uParam0, func_1511(func_1510(255), 109029619));
	}
	else
	{
		sVar0 = "";
		if (bParam1)
		{
			sVar0 = "HORSE_BLIP_TEMPORARY";
		}
		else if (func_304())
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

int func_1030(int iParam0)
{
	iParam0 = func_266(iParam0);
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

float func_1031(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist(vParam0, vParam3);
}

float func_1032(int iParam0)
{
	iParam0 = func_266(iParam0);
	if (iParam0 == -1)
	{
		return -1f;
	}
	if (iParam0 >= 7)
	{
		return -1f;
	}
	iVar0 = func_1371(iParam0);
	if (!is_model_valid(iVar0))
	{
		return -1f;
	}
	iVar1 = func_1028(iParam0);
	iVar2 = get_default_max_attribute_rank(iVar0, 7);
	fVar3 = _0xeb67d4e056c85a81(iVar1);
	fVar4 = _0x78d8c1d4eb80c588(iVar1);
	if (iVar1 >= iVar2)
	{
		return fVar3;
	}
	iVar5 = func_1028(iParam0) + 1;
	fVar6 = func_1512(iParam0);
	fVar7 = to_float(get_default_attribute_points_needed_for_rank(iVar0, 7, iVar1));
	fVar8 = to_float(get_default_attribute_points_needed_for_rank(iVar0, 7, iVar5));
	fVar9 = (fVar6 - fVar7);
	fVar10 = (fVar8 - fVar7);
	fVar11 = (fVar9 / fVar10);
	fVar12 = func_1513(fVar3, fVar4, fVar11);
	return fVar12;
}

void func_1033(int iParam0)
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

void func_1034(int iParam0)
{
	_set_blip_flash_style(iParam0, 673950256);
	_set_blip_flash_style(iParam0, 561559387);
	_set_blip_flash_style(iParam0, -201249929);
}

bool func_1035()
{
	if (func_338())
	{
		return _get_special_edition_cash_camp_bonus_enabled();
	}
	return false;
}

void func_1036(int iParam0)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if ((Global_40.f_4283.f_325 + iParam0) < 0)
	{
		return;
	}
	func_1514((Global_40.f_4283.f_325 + iParam0));
}

void func_1037(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (is_string_null_or_empty(sParam1))
	{
		sParam1 = "FEED_GANG_MONEY_EARN";
	}
	if (func_1035())
	{
		func_707(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", -329231034, 0, -585750914, 0, 0, 0, 1);
	}
	else
	{
		func_707(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 2124880615, 0, -585750914, 0, 0, 0, 1);
	}
}

char* func_1038(int iParam0)
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

char* func_1039(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7)
{
	return _0xd8402b858f4ddd88(&cParam0, get_length_of_literal_string(&cParam0));
}

int func_1040(int iParam0)
{
	return Global_17504.f_42[iParam0]->f_5;
}

bool func_1041(int iParam0)
{
	func_1048(iParam0, &iVar0, &iVar1);
	return is_bit_set(&(Global_1357549->f_1866[iVar0]), iVar1);
}

void func_1042(int iParam0, int iParam1)
{
	_journal_write_entry(iParam0);
	if (iParam1 == 1)
	{
		func_1043(1);
	}
}

void func_1043(bool bParam0)
{
	if (bParam0)
	{
		func_785(&(Global_40.f_12019.f_42), 1);
	}
	else
	{
		func_1515(&(Global_40.f_12019.f_42), 1);
	}
}

int func_1044(int iParam0)
{
	if (!func_191(iParam0))
	{
		return -15;
	}
	return func_1516(iParam0);
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
	iVar0 = func_1517(iParam0, 1);
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
	iVar0 = func_563();
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
	fVar1 = func_1452(absf(fVar1) < 1f, func_1452(fVar1 < 0f, -1f, 1f), fVar1);
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
	func_1518((get_game_timer() + iParam2), !bParam1);
	_databinding_write_data_int(Global_1955569->f_1.f_2.f_1, iParam0);
	func_1519(iParam0);
}

void func_1057(int iParam0)
{
	_databinding_write_data_bool(&(Global_1955569->f_5.f_2[0]->f_16[2]), false);
	_databinding_write_data_bool(&(Global_1955569->f_5.f_2[0]->f_32[2]), true);
	_databinding_write_data_string(&(Global_1955569->f_5.f_2[0]->f_20[2]), func_1520(iParam0));
	_databinding_write_data_string(&(Global_1955569->f_5.f_2[0]->f_24[2]), "pausemenu_player");
}

void func_1058(bool bParam0)
{
	bVar3 = false;
	if (func_1521(&iVar4))
	{
		if (iVar4 <= 0)
		{
			return;
		}
		iVar5 = 0;
		while (iVar5 < iVar4)
		{
			if (func_1522(iVar5, &iVar2, &iVar0))
			{
				if (!func_583(iVar2, 0))
				{
				}
				else
				{
					iVar1 = func_1523(iVar2);
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
							if (func_602(iVar2) == -1013984273)
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
								bVar3 = iVar0 == func_1524();
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
	return func_602(iParam0) == -427144552;
}

bool func_1061(int iParam0)
{
	if (func_20() != -1)
	{
		return false;
	}
	if (func_604(iParam0, 1048576))
	{
		return false;
	}
	if (is_weapon_valid(iParam0))
	{
		return func_1066(iParam0, &uVar0, 1, 0, 0);
	}
	return func_347(iParam0, 1, 0);
}

void func_1062(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (func_602(iParam0) != -427144552)
	{
		return;
	}
	iVar0 = func_609(iParam0, 0);
	if (!is_weapon_valid(iVar0))
	{
		return;
	}
	if (bParam2 || !func_122(iVar0))
	{
		if (func_20() == -1)
		{
			func_610(iVar0);
		}
		if (bParam2 || (!has_ped_got_weapon(Global_35, iVar0, 0, false) && func_587(iParam0, 0, 0) == 0))
		{
			if (!*bParam3 && !iParam4 == 1248274121)
			{
				func_662(iParam0, iParam1, 0, 0, 0);
				play_sound_frontend("REWARD_NEW_GUN", "HUD_REWARD_SOUNDSET", true, 0);
				*bParam3 = 1;
			}
		}
	}
}

void func_1063(int iParam0, int iParam1)
{
	if (func_603(iParam0, 58855631))
	{
		func_1187(iParam0, -915411861, &iVar0, 1);
		*iParam1 = (*iParam1 * iVar0);
	}
}

int func_1064(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	if (!func_583(iParam0, 0))
	{
		return 0;
	}
	if (!func_611(0))
	{
		bParam2 = true;
	}
	if (bParam2)
	{
		return _0xe80e50bee276a54a(iParam0, uParam1->f_4);
	}
	return _0xaddd1e7c0ecf7d95(func_993(bParam3), iParam0);
}

int func_1065(int iParam0, bool bParam1)
{
	if (func_615(iParam0))
	{
		return get_ped_ammo_by_type(Global_35, iParam0);
	}
	return _0xe787f05dfc977bde(func_993(bParam1), iParam0, 0);
}

bool func_1066(int iParam0, var uParam1, int iParam2, bool bParam3, bool bParam4)
{
	func_1525(&iParam0);
	if (!func_583(iParam0, 0))
	{
		return false;
	}
	if (!func_611(0))
	{
		bParam3 = true;
	}
	if (func_1060(iParam0) && _0x705be297eebdb95d(iParam0))
	{
		if (_is_weapon_one_handed(iParam0))
		{
			Var0 = { func_965(0) };
			Var4.f_9 = -1591664384;
			if (!func_967(iParam0, &Var0, 1728382685, 0))
			{
				return false;
			}
			else if (func_968(iParam0, &Var4, 1728382685))
			{
				return false;
			}
			if (func_966(iParam0, 1))
			{
				if (!func_967(iParam0, &Var0, -649335959, 0))
				{
					return false;
				}
				else if (func_968(iParam0, &Var4, -649335959))
				{
					return false;
				}
			}
		}
		else if (!func_1526(iParam0, &uVar26, 0))
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
		iVar28 = func_1458(iParam0, *uParam1, uParam1->f_4, bParam4);
	}
	else
	{
		iVar28 = _0xe787f05dfc977bde(func_993(bParam4), iParam0, 0);
	}
	if ((iVar28 + iParam2) > iVar27)
	{
		return true;
	}
	return false;
}

int func_1067(int iParam0, int iParam1)
{
	if (!func_583(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_602(iParam0);
	if (iVar0 == -427144552 && is_weapon_valid(iParam0))
	{
		return _get_ammo_type_for_weapon(iParam0);
	}
	else if (iVar0 == 307971639 && _is_ammo_valid(iParam0))
	{
		return iParam0;
	}
	if (func_603(iParam0, 1399091007))
	{
		func_1127(iParam0, &uVar1, &uVar2);
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
	Var0 = { func_1527(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam1)
	{
		func_1528(&Var0, func_965(0));
	}
	if (!func_1529(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	func_1130(iVar14);
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
	iVar0 = func_1530(iParam0);
	fVar1 = func_1531(iParam0);
	if ((Global_1347477->f_117 || !func_605(31)) || !func_1532(iVar0))
	{
		return;
	}
	if (fVar1 <= 0f)
	{
		return;
	}
	if (func_1533(iVar0) >= 7)
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
	func_1534(iVar0, (&Global_40.f_11095.f_11[iVar0] + fVar1), 0);
	func_707(_create_var_string(6, func_1535(iParam0), fVar1), "itemtype_textures", func_1536(iVar0), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
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
	if (!func_1202(17, &Var0))
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
			else if (func_598() >= 12)
			{
				sParam3 = _create_var_string(2, "COL_CC_CARD_POSTED_OBJ", func_1537(), 12);
			}
			else
			{
				sParam3 = _create_var_string(2, "COL_CC_CARD_FOUND_OBJ", func_1538(), 12);
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
			else if (func_1110() >= 30)
			{
				sParam3 = _create_var_string(2, "COL_DB_POSTED_OBJ", func_1539(), 30);
			}
			else
			{
				sParam3 = _create_var_string(2, "COL_DB_FOUND_OBJ", func_1110(), 30);
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
				sParam3 = _create_var_string(2, "COL_LF_CAUGHT_OBJ", func_1540(), 13);
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
			else if (func_1111() >= 10)
			{
				sParam3 = _create_var_string(2, "COL_RC_POSTED_OBJ", func_1541(), 10);
			}
			else
			{
				sParam3 = _create_var_string(2, "COL_RC_FOUND_OBJ", func_1111(), 10);
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
			iVar2 = func_1542(iVar0);
			if (iParam4 == iVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = (func_347(iVar2, 1, 0) || func_1544(func_1543(iVar2)));
			}
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1082(func_1542(iVar0))), func_1082(func_1542(iVar0)), bVar1, true, false);
		}
		if (iParam2 == -440187297)
		{
			if (iVar0 == 0)
			{
				bVar1 = func_1110() >= iParam8;
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1545(iVar0)), func_1545(iVar0), bVar1, true, false);
			}
			else if (iVar0 == 1)
			{
				bVar1 = func_1539() >= iParam8;
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1545(iVar0)), func_1545(iVar0), bVar1, true, false);
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
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1545(iVar0)), func_1545(iVar0), bVar1, true, false);
			}
		}
		if (iParam2 == -1531394072)
		{
			iVar2 = func_1120(iParam3, func_1546(iVar0));
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			else if (bParam9)
			{
				if (iParam4 == iVar2)
				{
					bVar1 = (func_1116(iVar2) - iParam7) >= func_1073(iParam3, func_1547(iVar0));
				}
				else
				{
					bVar1 = func_1116(iVar2) >= func_1073(iParam3, func_1547(iVar0));
				}
			}
			else if (iParam4 == iVar2)
			{
				bVar1 = (func_1116(iVar2) + iParam7) >= func_1073(iParam3, func_1547(iVar0));
			}
			else
			{
				bVar1 = func_1116(iVar2) >= func_1073(iParam3, func_1547(iVar0));
			}
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1548(iVar2)), func_1548(iVar2), bVar1, true, false);
		}
		if (iParam2 == 1995362678)
		{
			if (func_1549(_0x126cbebba46693cf(iVar0, 1995362678, 0)))
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
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1550(_0x126cbebba46693cf(iVar0, iParam2, 0))), func_1550(_0x126cbebba46693cf(iVar0, iParam2, 0)), bVar1, true, false);
		}
		if (iParam2 == 2103522376)
		{
			if (iVar0 == 0)
			{
				bVar1 = func_1111() >= iParam8;
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1551(iVar0)), func_1551(iVar0), bVar1, true, false);
			}
			else if (iVar0 == 1)
			{
				bVar1 = func_1541() >= iParam8;
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1551(iVar0)), func_1551(iVar0), bVar1, true, false);
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
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1551(iVar0)), func_1551(iVar0), bVar1, true, false);
			}
		}
		if (iParam2 == 678508515)
		{
			iVar2 = func_1120(iParam3, func_1546(iVar0));
			if (bParam9)
			{
				if (iParam4 == iVar2)
				{
					bVar1 = (func_1116(iVar2) - iParam7) >= true;
				}
				else
				{
					bVar1 = func_1552(iVar2);
				}
			}
			else if (iParam4 == iVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = func_1552(iVar2);
			}
			if (((((((iParam5 == 7 || iParam5 == 3) || iParam5 == 4) || iParam5 == 5) || iParam5 == 0) || iParam5 == 1) || iParam5 == 2) || iParam5 == 8)
			{
				bVar1 = true;
			}
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1553(iVar2)), func_1553(iVar2), bVar1, true, false);
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
		if (func_1540() >= 13)
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
	if (func_191(func_204(0)) && ((func_1554(0) == 1 || func_1554(0) == 8) || func_1554(0) == 6))
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
			func_1555(1);
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
			func_1556(1);
			break;
		case 19:
			_uitutorial_set_rpg_icon_visibility(1, 0);
			_uitutorial_set_rpg_icon_visibility(0, 0);
			func_1556(2);
			break;
		case 20:
			_uitutorial_set_rpg_icon_visibility(3, 0);
			_uitutorial_set_rpg_icon_visibility(2, 0);
			func_1556(3);
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
			func_1557(1);
			break;
		case 34:
			func_1558(1);
			break;
		case 35:
			func_1559(1);
			break;
		case 36:
			break;
		case 37:
			func_1560(0);
			break;
		case 38:
			func_1561(0);
			break;
		case 39:
			func_1562(0);
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
				func_714("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_MANUAL_PAINT", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_level(get_player_index(), 2);
			func_325(586, 0);
			break;
		case 3:
			if ((!&Global_1879534 && func_398()) && _is_deadeye_ability_locked(get_player_index(), 3))
			{
				func_714("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_STAY_ACTIVE", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_locked(get_player_index(), 3, false);
			_set_deadeye_ability_level(get_player_index(), 3);
			func_325(587, 0);
			break;
		case 4:
			if ((!&Global_1879534 && func_398()) && _is_deadeye_ability_locked(get_player_index(), 4))
			{
				func_714("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_FATAL", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_locked(get_player_index(), 3, false);
			_set_deadeye_ability_locked(get_player_index(), 4, false);
			_set_deadeye_ability_level(get_player_index(), 4);
			func_325(588, 0);
			break;
		case 5:
			if ((!&Global_1879534 && func_398()) && _is_deadeye_ability_locked(get_player_index(), 5))
			{
				func_714("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_CRITICAL", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_locked(get_player_index(), 3, false);
			_set_deadeye_ability_locked(get_player_index(), 4, false);
			_set_deadeye_ability_locked(get_player_index(), 5, false);
			_set_deadeye_ability_level(get_player_index(), 5);
			func_325(589, 0);
			break;
		case 24:
			_unlock_set_unlocked(-200143754, true);
			_unlock_set_visible(-200143754, true);
			_0x83b8d50eb9446bba(player_ped_id(), 1);
			if (func_20() == -1)
			{
				if (!func_1141(99217379) || func_1563(99217379) == 2110595215)
				{
					if (func_1053())
					{
						iVar0 = -1515874150;
					}
					else
					{
						iVar0 = 899611344;
					}
					if (!func_347(iVar0, 1, 0))
					{
						func_655(iVar0, 1, 752097756);
					}
					func_187(Global_35, iVar0, 0, 99217379, 1, 1, 1, 0, 1, 1);
				}
			}
			break;
		case 48:
			if (func_20() == -1)
			{
				if (!func_347(1013902307, 1, 0))
				{
					func_655(1013902307, 1, 752097756);
				}
			}
			break;
		case 50:
			if (func_20() == -1)
			{
				if (!func_347(1013902307, 1, 0))
				{
					func_655(1013902307, 1, 752097756);
				}
				if (!func_347(142640135, 1, 0))
				{
					func_655(142640135, 1, 752097756);
				}
			}
			break;
		case 49:
			if (func_20() == -1)
			{
				if (!func_347(786809402, 1, 0))
				{
					func_655(786809402, 1, 752097756);
				}
			}
			break;
		case 51:
			if (func_20() == -1)
			{
				if (!func_347(786809402, 1, 0))
				{
					func_655(786809402, 1, 752097756);
				}
				if (!func_347(-518019409, 1, 0))
				{
					func_655(-518019409, 1, 752097756);
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
			func_1564();
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

bool func_1089(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(uParam1))
	{
		return false;
	}
	if (func_1565(iParam0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_971(*uParam1, &Var0, bParam6, 0))
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
	if (!func_611(bParam6))
	{
		iVar14 = -1;
		return iVar14 != -1;
	}
	if (!_0x3e4e811480b3ae79(func_993(bParam6), uParam1, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

void func_1090(int iParam0, int iParam1)
{
	if ((get_ammo_in_clip(Global_35, &iVar0, iParam0) && iVar0 < iParam1) && iVar0 < _get_weapon_clip_size(iParam0))
	{
		iVar1 = func_1566(_get_weapon_clip_size(iParam0), iParam1);
		set_ammo_in_clip(Global_35, iParam0, iVar1);
	}
}

void func_1091(int iParam0)
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
	iVar2 = func_285();
	func_334(&iVar2, 0, 0, 0, 1, 0, 0, 0);
	decor_set_int(Global_35, sVar1, iVar2);
}

int func_1092(int iParam0)
{
	if (func_1567(iParam0))
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

bool func_1093(int iParam0)
{
	return _is_ammo_valid(_get_ammo_type_for_weapon(iParam0));
}

int func_1094(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	iVar0 = 0;
	if (!is_entity_dead(iParam0))
	{
		get_current_ped_weapon(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

int func_1095(int iParam0)
{
	iVar0 = _get_weapon_type_from_ammo_type(iParam0);
	if (_0x705be297eebdb95d(iVar0))
	{
		if (_is_weapon_two_handed(iVar0))
		{
			if (!func_605(50))
			{
				if (!func_605(48))
				{
					return 133;
				}
				return 135;
			}
		}
		else if (_is_weapon_one_handed(iVar0))
		{
			if (!func_605(51))
			{
				if (!func_605(49))
				{
					return 134;
				}
				return 136;
			}
		}
	}
	return 137;
}

bool func_1096(int iParam0, int iParam1, var uParam2)
{
	if (!func_583(iParam1, 0))
	{
		return false;
	}
	if (func_602(iParam1) != -1037537535)
	{
		return false;
	}
	bVar1 = func_20() != -1;
	iVar2 = _get_metaped_type(iParam0);
	if (func_607(iParam1) == -999503751)
	{
		return true;
	}
	iVar4 = func_680(iParam1);
	if (iVar4 == -358215195)
	{
		*uParam2 = 2084739242;
		return false;
	}
	bVar7 = false;
	iVar8 = iParam1;
	if (func_603(iParam1, 866047851))
	{
		iVar5 = func_472(iVar4, 1);
		if (func_973(&(Global_1946804->f_1497)) >= 2 && &Global_1946804->f_1497.f_1[iVar5] != iVar8)
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
			iVar3 = func_607(&(Global_1946804->f_1497.f_1[iVar5]));
			if (bVar7 && iVar3 == -525676072)
			{
				*uParam2 = -1938792745;
				return false;
			}
			break;
		case -1944638739:
			iVar5 = 35;
			if (&Global_1946804->f_1497.f_1[iVar5] != &Global_1946804->f_57[iVar5] && func_603(iParam1, -1638171711))
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
			if (func_1568(1868067663, &uVar0))
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
				iVar10 = func_1480(iVar8, iVar4, iVar2, bVar1);
				iVar9 = func_1480(&(Global_1946804->f_1497.f_1[iVar5]), iVar4, iVar2, bVar1);
				if (((iVar11 + iVar10) - iVar9) > 31)
				{
					*uParam2 = -1608241763;
					return false;
				}
				Jump @776; //curOff = 583
				iVar3 = func_607(iParam1);
				iVar5 = 36;
				iVar6 = 35;
				if (iParam1 != &Global_1946804->f_57[iVar6] && func_603(&(Global_1946804->f_1497.f_1[iVar5]), -1638171711))
				{
					*uParam2 = -357399012;
					return false;
				}
				if (iVar3 == 1769055947 || iVar3 == 1545016984)
				{
				}
				else
				{
					if (iParam1 != &Global_1946804->f_57[iVar6] && func_1477(&(Global_1946804->f_1497.f_1[iVar5])))
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

void func_1097()
{
	_0xfe7c9cf376d23342(player_id(), (1f - (Global_40.f_11095.f_64 + Global_1347477->f_175)));
}

void func_1098()
{
	fVar0 = Global_40.f_11095.f_44;
	fVar1 = Global_40.f_11095.f_45;
	set_player_health_recharge_multiplier(player_id(), (1f - (fVar0 - Global_40.f_11095.f_69)));
	_0x08e22898a6af4905(player_id(), (1f - fVar0));
	_0xfeca17cf3343694b(player_id(), (1f - fVar0));
	_0xbbadfb5e5e5766fb(player_id(), (1f - fVar1));
}

int func_1099()
{
	iVar1 = 0;
	while (iVar1 < 26)
	{
		if (func_347(func_1569(iVar1), 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1100(int iParam0)
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

bool func_1101(int iParam0, int iParam1)
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
	if (func_347(iVar0, 1, 0) && func_347(iVar1, 1, 0))
	{
		return true;
	}
	return false;
}

int func_1102(int iParam0)
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

bool func_1103(int iParam0, int iParam1)
{
	iVar0 = func_1570(iParam0);
	if (iVar0 != -15)
	{
		func_334(&iVar0, 0, iParam1, 0, 0, 0, 0, 0);
		return !func_704(iVar0, 1);
	}
	return false;
}

void func_1104(int iParam0)
{
	Global_40.f_12004.f_6 = (Global_40.f_12004.f_6 || iParam0);
}

void func_1105(int iParam0)
{
	Global_40.f_12004.f_1 = (Global_40.f_12004.f_1 || iParam0);
}

void func_1106(int iParam0)
{
	Global_40.f_12004.f_3 = (Global_40.f_12004.f_3 || iParam0);
}

void func_1107(int iParam0)
{
	Global_40.f_12004.f_5 = (Global_40.f_12004.f_5 || iParam0);
}

int func_1108(int iParam0)
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
	iVar1 = func_1116(iVar9);
	iVar2 = func_1116(iVar10);
	iVar3 = func_1116(iVar11);
	iVar5 = func_1117(iVar9);
	iVar6 = func_1117(iVar10);
	iVar7 = func_1117(iVar11);
	if (iParam0 != 2)
	{
		iVar4 = func_1116(iVar12);
		iVar8 = func_1117(iVar12);
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

void func_1109(int iParam0)
{
	Global_40.f_12004.f_2 = (Global_40.f_12004.f_2 || iParam0);
}

int func_1110()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 30)
	{
		if (func_1571(_0x126cbebba46693cf(iVar1, -440187297, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1111()
{
	return _0x5461c821d00fe15a(2103522376, 0);
}

bool func_1112(int iParam0, int iParam1, char* sParam2, bool bParam3, int iParam4, bool bParam5)
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
			if (func_1552(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1552(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_1552(iVar0))
		{
			*sParam2++;
		}
		if (func_1552(iVar0))
		{
			return true;
		}
	}
	else if (iParam0 == -1248968496)
	{
		if (bParam3)
		{
			if (func_1552(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1552(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_1552(iVar0))
		{
			*sParam2++;
		}
		if (func_1552(iVar1))
		{
			*sParam2++;
		}
		if (func_1552(iVar0) && func_1552(iVar1))
		{
			return true;
		}
	}
	else if (iParam0 == 1706369307)
	{
		if (bParam3)
		{
			if (func_1552(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1552(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_1552(iVar0))
		{
			*sParam2++;
		}
		if (func_1552(iVar1))
		{
			*sParam2++;
		}
		if (func_1552(iVar2))
		{
			*sParam2++;
		}
		if ((func_1552(iVar0) && func_1552(iVar1)) && func_1552(iVar2))
		{
			return true;
		}
	}
	else
	{
		if (bParam3)
		{
			if (func_1552(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1552(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_1552(iVar0))
		{
			*sParam2++;
		}
		if (func_1552(iVar1))
		{
			*sParam2++;
		}
		if (func_1552(iVar2))
		{
			*sParam2++;
		}
		if (func_1552(iVar3))
		{
			*sParam2++;
		}
		if (((func_1552(iVar0) && func_1552(iVar1)) && func_1552(iVar2)) && func_1552(iVar3))
		{
			return true;
		}
	}
	return false;
}

void func_1113(int iParam0)
{
	if (!func_1572(iParam0))
	{
		func_1574(func_1573(iParam0));
	}
}

int func_1114()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (func_1572(_0x126cbebba46693cf(iVar1, -1531394072, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1115(int iParam0, int iParam1, int iParam2)
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
	iVar1 = func_1116(iVar9);
	iVar2 = func_1116(iVar10);
	iVar3 = func_1116(iVar11);
	iVar5 = func_1117(iVar9);
	iVar6 = func_1117(iVar10);
	iVar7 = func_1117(iVar11);
	if (iParam2 != 2)
	{
		iVar4 = func_1116(iVar12);
		iVar8 = func_1117(iVar12);
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

int func_1116(int iParam0)
{
	if (func_347(iParam0, 1, 0))
	{
		iVar0 = func_587(iParam0, 0, 0);
	}
	return iVar0;
}

int func_1117(int iParam0)
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

int func_1118(int iParam0)
{
	return _0xf83d3dda4d3c8169(iParam0);
}

void func_1119(int iParam0, int iParam1)
{
	_0x3ea62e56f386c997(iParam0, iParam1);
}

int func_1120(int iParam0, int iParam1)
{
	if (!func_1202(17, &Var0))
	{
		return 0;
	}
	Var0.f_2 = iParam1;
	Var0.f_3 = iParam0;
	_datafile_get_hash(&uVar5, &Var0);
	return uVar5;
}

void func_1121(int iParam0, int iParam1, char* sParam2, int iParam3, bool bParam4)
{
	if ((((iParam0 == func_1120(iParam1, 5) || iParam0 == func_1120(iParam1, 6)) || iParam0 == func_1120(iParam1, 7)) || iParam0 == func_1120(iParam1, 8)) || iParam0 == func_1120(iParam1, 9))
	{
		func_1112(iParam1, iParam0, &sParam2, 0, iParam3, bParam4);
		func_599(51, 0, 0, iParam1, sParam2, 0, -1, 0);
		func_601(51, 0, 0, 0, 0, -1, 0);
	}
}

void func_1122(int iParam0, int iParam1, bool bParam2)
{
	iVar0 = 1;
	if ((((iParam0 == func_1120(iParam1, 5) || iParam0 == func_1120(iParam1, 6)) || iParam0 == func_1120(iParam1, 7)) || iParam0 == func_1120(iParam1, 8)) || iParam0 == func_1120(iParam1, 9))
	{
		if (func_1112(iParam1, iParam0, &iVar0, 0, 0, 0))
		{
			func_599(51, iParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				func_601(51, 0, 0, iVar0, func_1073(iParam1, 20), 1, 0);
			}
		}
		else
		{
			func_599(51, iParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				func_601(51, 0, 0, iVar0, func_1073(iParam1, 20), 1, 0);
			}
		}
	}
}

bool func_1123()
{
	if (func_192((*Global_1347702)[37]->f_15) && Global_1392388->f_7)
	{
		return true;
	}
	return false;
}

void func_1124(int iParam0)
{
	_0x3ea62e56f386c997(iParam0, 1);
}

void func_1125(int iParam0)
{
	if (!func_1575(iParam0))
	{
		_0x3ea62e56f386c997(iParam0, 1);
	}
}

void func_1126(int iParam0)
{
	_0x398fab9c96a81924(iParam0, 1);
}

void func_1127(int iParam0, int iParam1, var uParam2)
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

bool func_1128(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	*iParam1 = _0x80d78bdc9d88ef07(func_993(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_1129(var uParam0, int iParam1, int iParam2, int iParam3)
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

int func_1130(int iParam0)
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

float func_1131()
{
	if (func_1576())
	{
		return 0f;
	}
	if (_0x200373a8df081f22(Global_35, 2) || Global_40.f_11095.f_46 == 0)
	{
		return func_449(2);
	}
	if (Global_1347477->f_119)
	{
		return func_449(2);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_46) * 60f);
	fVar0 = (fVar0 / to_float(7));
	fVar1 = func_1577();
	fVar2 = func_1578();
	fVar3 = func_1579();
	fVar4 = func_1580();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_50)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_1581()));
	fVar7 = (func_449(2) - fVar6);
	iVar8 = round(((fVar0 / 60f) * to_float(7)));
	fVar9 = (100f * (to_float(90) / to_float(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_1582(3, round((to_float(iVar8) * fVar10)), 0);
	func_1583(3, fVar9, fVar9 > 100f);
	return func_453(fVar7, -100f, 100f);
}

float func_1132()
{
	if (func_1576())
	{
		return 0f;
	}
	if (_0x200373a8df081f22(Global_35, 1) || Global_40.f_11095.f_47 == 0)
	{
		return func_449(1);
	}
	if (Global_1347477->f_119)
	{
		return func_449(1);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_47) * 60f);
	fVar0 = (fVar0 / to_float(7));
	fVar1 = func_1577();
	fVar2 = func_1578();
	fVar3 = func_1579();
	fVar4 = func_1580();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_51)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_1581()));
	fVar7 = (func_449(1) - fVar6);
	iVar8 = round(((fVar0 / 60f) * to_float(7)));
	fVar9 = (100f * (to_float(90) / to_float(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_1582(2, round((to_float(iVar8) * fVar10)), 0);
	func_1583(2, fVar9, fVar9 > 100f);
	return func_453(fVar7, -100f, 100f);
}

float func_1133()
{
	if (func_1576())
	{
		return 0f;
	}
	if (_0x200373a8df081f22(Global_35, 0) || Global_40.f_11095.f_48 == 0)
	{
		return func_449(0);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_48) * 60f);
	if (func_1584())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_54 + 1f));
	}
	else if (func_1585())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_53 + 1f));
	}
	else if (Global_1347477->f_119)
	{
		return func_449(0);
	}
	if (Global_40.f_11095.f_43)
	{
		fVar0 = (10f * 60f);
	}
	fVar0 = (fVar0 / to_float(7));
	fVar1 = func_1577();
	fVar2 = func_1578();
	fVar3 = func_1579();
	fVar4 = func_1580();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_49)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_1581()));
	fVar7 = (func_449(0) - fVar6);
	iVar8 = round(((fVar0 / 60f) * to_float(7)));
	fVar9 = (100f * (to_float(90) / to_float(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_1582(1, round((to_float(iVar8) * fVar10)), 0);
	func_1583(1, fVar9, fVar9 > 100f);
	if (fVar7 <= -100f && _get_player_health(player_id()) < 1f)
	{
		return func_449(0);
	}
	return func_453(fVar7, -100f, 100f);
}

bool func_1134(int iParam0, int iParam1)
{
	return (Global_1905944->f_22[iParam0]->f_2 && iParam1) != 0;
}

bool func_1135(int iParam0)
{
	return _0xf83d3dda4d3c8169(iParam0) > 0;
}

bool func_1136(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5)
{
	if (!func_583(iParam0, 0))
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
	if (!func_611(0))
	{
		return false;
	}
	if (!_0xcb5d11f9508a928d(func_993(0), uParam1, uParam2, iParam0, uParam2->f_4, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

int func_1137(int iParam0, bool bParam1)
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
				return func_1586();
			}
			break;
	}
	return 0;
}

void func_1138(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_954(iParam0))
	{
		return;
	}
	if (func_1587(iParam0))
	{
		return;
	}
	if (!func_1588(iParam0))
	{
		func_1589(iParam0, 1, 0);
	}
	iVar0 = func_458(iParam0);
	if (iVar0 != 0 && !(iParam0 >= 0 && iParam0 <= 5))
	{
		if (func_460(iParam0, 512))
		{
			func_475(30, iVar0, 0, 0, 0);
		}
	}
	if ((!func_215() && !bParam1) && !func_198(0, 0, 1))
	{
		func_716(_create_var_string(10, "OUT_JOURN_DONE", _create_var_string(0, iVar0)), 10000, 0, 0, 0, 1);
	}
	func_463(iParam0, 6);
	if (bParam2)
	{
		if (!func_198(0, 0, 1))
		{
			func_367(1, 4);
		}
	}
}

bool func_1139(int iParam0, bool bParam1)
{
	return func_1137(iParam0, 0) < func_1590(iParam0, bParam1);
}

bool func_1140(int iParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_607(iVar1) == iParam0)
		{
			*iParam1 = iVar1;
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_1141(int iParam0)
{
	if (iParam0 == -358215195)
	{
		return false;
	}
	return &Global_1946804->f_1497.f_1[func_472(iParam0, 1)] != &Global_1946804->f_57[func_472(iParam0, 1)];
}

void func_1142(int iParam0, int iParam1)
{
	if (func_603(iParam1, 130796156))
	{
		func_1591(iParam1, 0);
	}
	else if (func_603(iParam1, 930141731))
	{
		func_1591(iParam1, 1);
		func_1592(iParam0);
	}
}

void func_1143(var uParam0, int iParam1)
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

int func_1144(int iParam0, var uParam1, var uParam2, int iParam3)
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

int func_1145(int iParam0)
{
	return &(Global_1900073->f_159[iParam0]);
}

char* func_1146(int iParam0)
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

int func_1147(int iParam0)
{
	if (!func_1595(iParam0, &uVar0, 805880880, 0, 0, -401018458))
	{
		return -1102349958;
	}
	return uVar0;
}

bool func_1148()
{
	return !&Global_1911774;
}

void func_1149(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

char* func_1150(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

bool func_1151(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

char* func_1152(char* sParam0, int iParam1)
{
	return _create_var_string(42, "COLOR_STRING", _create_color_string(iParam1), sParam0);
}

bool func_1153(int iParam0, int iParam1, bool bParam2)
{
	if ((bParam2 && func_20() == 0) && !_unlock_is_visible(iParam0))
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

bool func_1154(int iParam0, int iParam1)
{
	if (func_20() != -1)
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

void func_1155(bool bParam0)
{
	if (bParam0)
	{
		func_318(2032023096, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_318(-615217896, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		func_318(655868243, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		func_447();
		_unlock_set_unlocked(645322743, true);
	}
	else
	{
		func_1597(2032023096);
		func_321(-615217896);
		func_677(655868243, 1, 1, -142743235, 1);
		func_1598(146323340, func_932());
		Var0 = { func_1379() };
		if (func_1599(&Var0) == -1387633835)
		{
			func_1600(&Var0);
			func_1601(Var0);
		}
		iVar7 = -868094182;
		iVar8 = 1074477367;
		iVar9 = 1;
		func_1602(&iVar7, &iVar8, &iVar9);
		iVar6 = 0;
		while (iVar6 < 7)
		{
			if (func_1372(iVar6) == 2010625508)
			{
				func_1603(iVar6, iVar7);
				func_1604(iVar6, iVar8);
				func_1605(iVar6, iVar9);
				func_1606(iVar6, 0);
				if (func_1607(iVar6))
				{
					func_1608(iVar6);
				}
				iVar10 = func_1609(iVar8);
				func_1610(iVar6, iVar10);
			}
			iVar6++;
		}
		_unlock_set_unlocked(645322743, false);
	}
}

void func_1156()
{
	func_332(34411519);
	func_332(834124286);
	func_332(-570967010);
}

void func_1157(bool bParam0)
{
	if (bParam0)
	{
		if (_unlock_is_unlocked(-1426541042))
		{
			return;
		}
		func_318(-1080874779, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_318(-223790555, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_318(1566032147, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_318(891311852, 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_318(-1353737667, 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_318(-330313895, 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_318(-2051332199, 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_318(1237770824, 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_318(-1795542128, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_318(-1757588258, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_318(-1921080134, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		_unlock_set_unlocked(-1426541042, true);
	}
	else
	{
		if (!_unlock_is_unlocked(-1426541042))
		{
			return;
		}
		func_677(-1080874779, 3, 1, -142743235, 1);
		func_677(-223790555, 3, 1, -142743235, 1);
		func_677(1566032147, 3, 1, -142743235, 1);
		func_677(891311852, 5, 1, -142743235, 1);
		func_677(-1353737667, 5, 1, -142743235, 1);
		func_677(-330313895, 5, 1, -142743235, 1);
		func_677(-2051332199, 5, 1, -142743235, 1);
		func_677(1237770824, 5, 1, -142743235, 1);
		func_677(-1795542128, 3, 1, -142743235, 1);
		func_677(-1757588258, 3, 1, -142743235, 1);
		func_677(-1921080134, 10, 1, -142743235, 1);
		iVar1 = -868094182;
		iVar2 = 1074477367;
		iVar3 = 1;
		func_1602(&iVar1, &iVar2, &iVar3);
		iVar0 = 0;
		while (iVar0 < 7)
		{
			if (func_1372(iVar0) == 153881023)
			{
				func_1603(iVar0, iVar1);
				func_1604(iVar0, iVar2);
				func_1605(iVar0, iVar3);
				func_1606(iVar0, 0);
				if (func_1607(iVar0))
				{
					func_1608(iVar0);
				}
				iVar4 = func_1609(iVar2);
				func_1610(iVar0, iVar4);
			}
			iVar0++;
		}
		func_447();
		_unlock_set_unlocked(-1426541042, false);
	}
}

void func_1158(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4)
{
	func_1611(iParam0);
	if (bParam3)
	{
		func_715(iParam0, sParam1, iParam2);
	}
}

bool func_1159(int iParam0)
{
	return (Global_40.f_12004.f_10 && iParam0) != 0;
}

void func_1160(int iParam0)
{
	Global_40.f_12004.f_10 = (Global_40.f_12004.f_10 - (Global_40.f_12004.f_10 && iParam0));
}

struct<14> func_1161()
{
	Var3.f_9 = -1591664384;
	Var17.f_9 = -1591664384;
	if (func_1128("ALL WEAPONS", &iVar0, &iVar1, -1591664384, 0))
	{
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (!func_1129(&Var3, iVar2, iVar0, iVar1))
			{
				Jump @136; //curOff = 80
			}
			else if (Var3.f_4 != 127400949)
			{
			}
			else if (func_968(Var3.f_4, &Var17, Var3.f_9))
			{
			}
			else
			{
				func_1130(iVar0);
				return Var3;
			}
			iVar2++;
		}
		func_1130(iVar0);
	}
	Var39.f_9 = -1591664384;
	return Var39;
}

void func_1162(int iParam0, struct<4> Param1, int iParam5)
{
	Var0 = { Param1 };
	Var0.f_4 = iParam5;
	Var5.f_9 = -1591664384;
	if (func_1612(Param1, iParam5, &Var5, 0))
	{
		func_1089(Var5.f_4, &Var5, &Var0, -1, -142743235, 1, 0);
	}
	func_1136(iParam0, &Var19, &Var0, 1, 752097756, 0);
	func_1460(Var19, 1);
}

bool func_1163(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (!is_weapon_valid(iParam0))
	{
		return false;
	}
	Var0 = { func_1527(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam2)
	{
		func_1528(&Var0, func_965(0));
	}
	if (!func_1529(&Var0, &iVar14, &iVar15, 0))
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
			if (!func_1129(&Var16, iVar35, iVar14, iVar15))
			{
			}
			else
			{
				Var30.f_4 = Var16.f_9;
				Var30 = { Var16.f_5 };
				if (func_1089(iParam0, &Var16, &Var30, 1, iParam3, 0, 0))
				{
					iVar36++;
				}
			}
			iVar35++;
		}
	}
	func_1130(iVar14);
	if (iVar36 < iParam1)
	{
	}
	return true;
}

bool func_1164(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (!func_583(iParam0, 0))
	{
		return false;
	}
	if (iParam1 < 1)
	{
		return false;
	}
	Var0 = { func_470(iParam0, bParam4, 1) };
	if (Var0.f_4 == 1084182731)
	{
		return func_1613(iParam0, iParam1, iParam2, bParam3, bParam4);
	}
	Var5 = { func_964(iParam0, Var0, Var0.f_4, bParam4) };
	return func_1089(iParam0, &Var5, &Var0, iParam1, iParam2, bParam3, bParam4);
}

void func_1165(int iParam0, int iParam1)
{
	if (!Global_1901328->f_94)
	{
		if (func_603(iParam0, 606799272))
		{
			func_1614(iParam0, iParam1);
		}
		if (func_603(iParam0, -1112814642) && func_603(iParam0, -1697809989))
		{
			func_631(iParam0, iParam1, 1, 0);
		}
	}
}

int func_1166(int iParam0, var uParam1)
{
	iVar1 = iParam0;
	if (!func_1615(iVar1, &iVar0))
	{
		return 0;
	}
	if (Global_1946804->f_2657.f_19 == 1)
	{
		Global_1946804->f_2657.f_19 = 0;
		*uParam1 = 0;
		if (func_607(iParam0) != -999503751)
		{
			func_1616(&(Global_1946804->f_2657.f_26), 0, Global_1946804->f_2657.f_19);
		}
		Global_1946804->f_2657[0] = 0;
		return 1;
	}
	Global_1946804->f_2657.f_19 = (Global_1946804->f_2657.f_19 - 1);
	*uParam1 = (*uParam1 - 1);
	Global_1946804->f_2657[iVar0] = &Global_1946804->f_2657[Global_1946804->f_2657.f_19];
	Global_1946804->f_2657[Global_1946804->f_2657.f_19] = 0;
	if (func_607(iParam0) != -999503751)
	{
		func_1616(&(Global_1946804->f_2657.f_26), iVar0, Global_1946804->f_2657.f_19);
	}
	func_1617(iParam0, 1);
	return 1;
}

void func_1167()
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

void func_1168(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		func_1468(0);
	}
	if (bParam0)
	{
		func_983(8);
		func_983(512);
	}
	else
	{
		func_983(8);
		func_983(16);
	}
}

int func_1169(int iParam0)
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

void func_1170(var uParam0, int iParam1, bool bParam2)
{
	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (func_1618(uParam0->f_1[iVar0], 2))
		{
			iVar7 = func_972(iVar0, 1);
			if (func_1322(iVar0, iParam1))
			{
				vVar4 = { func_684(iVar0, -1) };
				if ((vVar4.x != &Global_1946804->f_57[iVar0] && vVar4.x != 0) && (&uParam0->f_1[iVar0] != vVar4.x || uParam0->f_1[iVar0]->f_1 != vVar4.y))
				{
					*uParam0->f_1[iVar0] = { vVar4 };
				}
				if (func_1321(iVar7, 4))
				{
					func_981(iVar7, 4, 6);
				}
			}
			else
			{
				func_1324(iVar7, 4, 6);
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

bool func_1171(int iParam0)
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
	func_956(&(Global_1946804->f_964), iVar0, -367421157, 1409451727, 1, iParam0);
	_0x91ded5dd64bb2691(&(Global_1946804->f_964));
	if (!_0x44b3a36933ac009c(&uVar1, &(Global_1946804->f_964), 1409451727))
	{
		return false;
	}
	return true;
}

bool func_1172(int iParam0, int iParam1, int iParam2)
{
	*iParam2 = 1155669136;
	return true;
}

bool func_1173(int iParam0, int iParam1)
{
	if (func_20() != -1)
	{
		return is_bit_set(&(Global_36638.f_1444[iParam0]), iParam1);
	}
	return is_bit_set(&(Global_40.f_7832[iParam0]), iParam1);
}

bool func_1174(int iParam0)
{
	if (func_20() != -1)
	{
		if (func_1134(iParam0, 4))
		{
			return false;
		}
	}
	else if (func_1134(iParam0, 2))
	{
		return false;
	}
	return true;
}

bool func_1175(int iParam0)
{
	iVar1 = get_cloud_time_as_int();
	if (!func_1134(iParam0, 65536) && !func_1134(iParam0, 32768))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_7756)
	{
		if (Global_40.f_7756[iVar0]->f_2 == iParam0)
		{
			iVar3 = 3;
			if (func_1134(iParam0, 131072))
			{
				iVar3 = 2;
			}
			iVar2 = (&Global_40.f_7756[iVar0] - iVar1);
			if (Global_40.f_7756[iVar0]->f_1 >= iVar3)
			{
				return true;
			}
			if (iVar2 < 1800 && func_1134(iParam0, 32768))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_1176()
{
	return Global_1905944->f_5694;
}

int func_1177(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_1178(int iParam0, int iParam1)
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

void func_1179(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 62914560);
	*iParam0 = (*iParam0 || shift_left(iParam1, 22));
}

void func_1180(int iParam0, int iParam1)
{
	iVar0 = func_696(*iParam0);
	iVar1 = func_695(*iParam0);
	if (iParam1 < 1 || iParam1 > func_701(iVar0, iVar1))
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4063232);
	*iParam0 = (*iParam0 || shift_left(iParam1, 17));
}

void func_1181(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 126976);
	*iParam0 = (*iParam0 || shift_left(iParam1, 12));
}

void func_1182(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4032);
	*iParam0 = (*iParam0 || shift_left(iParam1, 6));
}

void func_1183(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 63);
	*iParam0 = (*iParam0 || shift_left(iParam1, 0));
}

void func_1184(char* sParam0, char* sParam1, int iParam2)
{
	_0x74bcceb233ad95b2(-466562563, get_hash_key(sParam0));
	_0x74bcceb233ad95b2(1885309238, get_hash_key(sParam1));
	_0x74bcceb233ad95b2(-826961056, iParam2);
}

int func_1185(int iParam0)
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

bool func_1186(int iParam0)
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

int func_1187(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (!func_583(iParam0, 0))
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

int func_1188(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	func_1525(&iParam0);
	if (!func_583(iParam0, 0))
	{
		return 0;
	}
	if (!func_611(0))
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
		iVar1 = func_1458(iParam0, *uParam1, uParam1->f_4, bParam3);
	}
	else
	{
		iVar1 = _0xe787f05dfc977bde(func_993(bParam3), iParam0, 0);
	}
	if (iVar0 > iVar1)
	{
		return (iVar0 - iVar1);
	}
	return 0;
}

int func_1189(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (func_603(iParam0, -5284486))
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
		if (func_1619(iParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
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
		iVar64 = func_663(iParam0, 862142561);
		if (iVar64 != 0)
		{
			Var50.f_8 = iVar64;
			iVar61 = _item_database_create_item_collection(&Var50, &iVar60, 1);
			if (iVar61 != -1)
			{
				iVar62 = 0;
				while (iVar62 < iVar60)
				{
					iVar63 = func_666(iVar62, iVar61);
					if (func_583(iVar63, 0) && iVar63 != iParam0)
					{
						if (bParam4)
						{
							iVar49 = (iVar49 + func_1189(iVar63, -915411861, 1, 0, 0));
						}
						else
						{
							Var35 = iVar63;
							iVar33 = _0x640f890c3e5a3ffd(1, &Var35, &iVar34);
							if (iVar33 != -1)
							{
								if (iVar34 == 0)
								{
									iVar49 = (iVar49 + func_1189(iVar63, -915411861, 1, 0, 0));
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
	if (!func_1619(iParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
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

bool func_1190(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return iParam0 <= func_1620(1);
}

void func_1191(int iParam0, char* sParam1)
{
	if (iParam0 != 18 && iParam0 != 7)
	{
		_uilog_add_total_take_entry(get_hash_key(func_1621(iParam0)), 1997120069, _create_var_string(10, "MISSION_COMPLETE_TAKE_COMP", _create_var_string(2, func_324(iParam0, 0))), _create_var_string(2, "MISSION_COMPLETE_TAKE_AMOUNT", sParam1), 601389479);
	}
	else
	{
		_uilog_add_total_take_entry(get_hash_key(func_1621(iParam0)), 1997120069, _create_var_string(10, "MISSION_COMPLETE_TAKE_COMP_NOS", _create_var_string(2, func_324(iParam0, 0))), _create_var_string(2, "MISSION_COMPLETE_TAKE_AMOUNT", sParam1), 601389479);
	}
}

var func_1192()
{
	return Global_40.f_4283.f_325;
}

bool func_1193(int iParam0)
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

bool func_1194(int iParam0)
{
	return (iParam0 > 0 && iParam0 < 13);
}

void func_1195(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_3 = iParam1;
}

void func_1196(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_4 = iParam1;
}

void func_1197(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_12106[iParam0] = iParam1;
		return;
	}
	Global_1058888->f_498[iParam0] = iParam1;
}

void func_1198(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_12106[iParam0]->f_5 = iParam1;
		return;
	}
	Global_1058888->f_498[iParam0]->f_1 = iParam1;
}

int func_1199(bool bParam0, var uParam1)
{
	*bParam0 = 0;
	*uParam1 = 0;
	bVar0 = func_398();
	bVar1 = false;
	if (bVar0 && !func_1622(4))
	{
		bVar1 = true;
	}
	if ((bVar0 && func_1622(37)) && !func_1622(43))
	{
		*bParam0 = 0;
		*uParam1 = 0;
		return 0;
	}
	bVar2 = false;
	if ((bVar0 && func_1622(43)) && !func_1622(44))
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
		if (func_1373(0) == 1)
		{
			*bParam0 = 1;
		}
		if (func_1373(1) == 1)
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

int func_1200()
{
	return Global_40.f_1095.f_3054;
}

bool func_1201(int iParam0)
{
	iParam0 = func_266(iParam0);
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

bool func_1202(int iParam0, var uParam1)
{
	if (!func_1623(iParam0))
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

int func_1203()
{
	if (func_398())
	{
		if (!func_1622(3))
		{
			return func_1624(43);
		}
		if (func_1622(38) && !func_1622(43))
		{
			return func_1625(8);
		}
	}
	return 0;
}

bool func_1204(int iParam0)
{
	if (!func_247(iParam0))
	{
		return false;
	}
	return (((*Global_1888801)[iParam0]->f_20 == 1 || (*Global_1888801)[iParam0]->f_20 == 2) && !func_1626(iParam0));
}

Vector3 func_1205(int iParam0, int iParam1)
{
	func_1202(15, &Var0);
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

int func_1206(int iParam0, int iParam1)
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
	iVar0 = func_1627(Global_1310720->f_21, 2);
	if (iVar0 == -1)
	{
		return 0;
	}
	func_1202(15, &Var1);
	Var1.f_2 = -1999103282;
	Var1.f_3 = iParam0;
	Var1.f_4 = iParam1;
	if (_datafile_get_data_node_index(&(Var1.f_1), &Var1))
	{
		Var1.f_2 = 383290544;
		_datafile_get_hash(&iVar6, &Var1);
		if (func_1628(iVar0) == iVar6)
		{
			return 1;
		}
	}
	return 0;
}

bool func_1207(int iParam0, bool bParam1, int iParam2)
{
	iVar0 = func_1629(iParam0);
	if (func_493(373691918) && Global_1310720->f_12)
	{
		return iVar0 == 4;
	}
	if (iParam2 != -1)
	{
		return iVar0 == iParam2;
	}
	return (bParam1 || iVar0 == -1);
}

bool func_1208(int iParam0)
{
	if (!func_1202(15, &Var0))
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

bool func_1209(vector3 vParam0, int iParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, int iParam10)
{
	if (bParam5)
	{
		if (func_1630(iParam3, iParam4))
		{
			return false;
		}
	}
	if (!bParam7 || func_1631(5))
	{
		if (func_1632(iParam3, iParam4))
		{
			return false;
		}
	}
	iVar0 = func_1366(vParam0);
	if (bParam6)
	{
		iVar1 = func_372(vParam0, 1);
		if (func_116(iVar1) || func_1633(iVar0, 1))
		{
			return false;
		}
	}
	if (!func_1634(iParam3, iParam4))
	{
		return false;
	}
	if (!func_1635())
	{
		if (func_1636(iParam3, iParam4))
		{
			return false;
		}
	}
	if (!_does_volume_exist(bParam8))
	{
		if (!func_1637(iVar0))
		{
			return false;
		}
		if (Global_1310720->f_23 >= 3)
		{
			if (Global_1310720->f_21 != -1)
			{
				if (Global_1310720->f_21 == func_372(vParam0, 0))
				{
					return false;
				}
			}
		}
	}
	if (!func_1638(iParam3, iParam4))
	{
		return false;
	}
	if (func_1639(0) == 3)
	{
		if (((vParam0.x > -1480f && vParam0.x < -1475f) && vParam0.y > -359f) && vParam0.y < -354f)
		{
			return false;
		}
	}
	if (!func_1640(65536, 2))
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
		if (func_1641(vParam0, iParam10) || func_1642(vParam0, iParam10))
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

int func_1210(vector3 vParam0)
{
	iVar0 = func_1643(vParam0, 0f, 0f, 0, 2);
	return func_1643(vParam0, (*Global_1894052)[iVar0]->f_1, (*Global_1894052)[iVar0]->f_2, Global_1894052[iVar0], 4);
}

void func_1211(int iParam0)
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

char* func_1212(int iParam0)
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
	return func_1335(iVar0);
}

char* func_1213(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return "";
	}
	iVar0 = get_entity_model(iParam0);
	return func_1644(iVar0);
}

char* func_1214(int iParam0)
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

void func_1215(var uParam0, int iParam1)
{
	iVar0 = func_132(iParam1);
	if (!func_1430(iVar0))
	{
		return;
	}
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 <= 7)
	{
		(*uParam0->f_1[iVar0])[iVar1] = 58329;
		clear_bit(&(uParam0->f_1[iVar0]->f_17), iVar1);
		iVar1++;
	}
}

void func_1216(var uParam0, int iParam1, int iParam2)
{
	iVar0 = func_132(iParam1);
	if (func_1430(iVar0))
	{
		uParam0->f_1[iVar0]->f_9 = iParam2;
	}
}

void func_1217(int iParam0)
{
	if (!&vLocal_295[iParam0] == 0)
	{
		return;
	}
	vLocal_295[iParam0] = 1;
}

bool func_1218(int iParam0)
{
	return &vLocal_295[iParam0] == 3;
}

int func_1219(var uParam0, int iParam1, bool bParam2)
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
			if (!decor_exist_on(get_indexed_item_in_itemset(iVar0, Global_43616), func_1645()) && get_entity_model(iVar1) == iParam1)
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

void func_1220(int iParam0, bool bParam1)
{
	if (!bParam1 && does_entity_exist(&(iLocal_666[iParam0])))
	{
		return;
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (does_entity_exist(&(iLocal_666[iParam0])))
	{
		return;
	}
	Var0 = { func_817(iParam0) };
	iVar7 = func_444(Var0.f_6);
	if (func_399(Var0))
	{
		Var0 = { 1f, 1f, 1f };
	}
	if (has_model_loaded(iVar7))
	{
		iLocal_666[iParam0] = create_object(iVar7, Var0, true, true, false, false, true);
		set_entity_coords(&(iLocal_666[iParam0]), Var0, true, false, true, true);
		set_entity_rotation(&(iLocal_666[iParam0]), Var0.f_3, 2, true);
		if (iParam0 >= 0 && iParam0 <= 52)
		{
			freeze_entity_position(&(iLocal_666[iParam0]), true);
			set_entity_collision(&(iLocal_666[iParam0]), false, false);
		}
	}
}

void func_1221(int iParam0)
{
	iLocal_211 = iParam0;
}

void func_1222(int iParam0)
{
	if (iLocal_210 == iParam0)
	{
		return;
	}
	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = 1632247697;
			iVar1 = 8;
			iVar2 = 0;
			break;
		case 1:
			iVar0 = 1632247697;
			iVar1 = 8;
			iVar2 = 30;
			break;
		case 2:
			iVar0 = 1632247697;
			iVar1 = 9;
			iVar2 = 0;
			break;
		case 3:
			iVar0 = 1632247697;
			iVar1 = 9;
			iVar2 = 30;
			break;
		case 4:
			iVar0 = 1632247697;
			iVar1 = 10;
			iVar2 = 0;
			break;
		case 5:
			iVar0 = 1632247697;
			iVar1 = 10;
			iVar2 = 30;
			break;
		case 6:
			iVar0 = 1632247697;
			iVar1 = 11;
			iVar2 = 0;
			break;
		case 7:
			iVar0 = 1632247697;
			iVar1 = 11;
			iVar2 = 30;
			break;
		case 8:
			iVar0 = 1632247697;
			iVar1 = 12;
			iVar2 = 0;
			break;
		case 9:
			iVar0 = 1632247697;
			iVar1 = 12;
			iVar2 = 0;
			break;
		case 10:
			iVar0 = 821931868;
			iVar1 = 13;
			iVar2 = 0;
			break;
		case 11:
			iVar0 = 821931868;
			iVar1 = 13;
			iVar2 = 30;
			break;
		case 12:
			iVar0 = 821931868;
			iVar1 = 14;
			iVar2 = 0;
			break;
		case 13:
			iVar0 = 821931868;
			iVar1 = 14;
			iVar2 = 0;
			break;
		case 14:
			iVar0 = 821931868;
			iVar1 = 15;
			iVar2 = 30;
			break;
		case 15:
			iVar0 = 821931868;
			iVar1 = 18;
			iVar2 = 0;
			break;
		case 16:
			iVar0 = 821931868;
			iVar1 = 18;
			iVar2 = 30;
			break;
		case 17:
			iVar0 = 821931868;
			iVar1 = 19;
			iVar2 = 30;
			break;
		case 18:
			iVar0 = -173507739;
			iVar1 = 19;
			iVar2 = 40;
			break;
		case 19:
			iVar0 = -173507739;
			iVar1 = 19;
			iVar2 = 50;
			break;
		case 20:
			iVar0 = 821931868;
			iVar1 = 22;
			iVar2 = 0;
			break;
		case 21:
			iVar0 = 821931868;
			iVar1 = 22;
			iVar2 = 0;
			break;
		case 22:
			iVar0 = 821931868;
			iVar1 = 6;
			iVar2 = 0;
			break;
		case 23:
			iVar0 = 1632247697;
			iVar1 = 7;
			iVar2 = 0;
			break;
		case 24:
			iVar0 = -416908843;
			iVar1 = 8;
			iVar2 = 0;
			break;
		case 25:
			iVar0 = -416908843;
			iVar1 = 10;
			iVar2 = 0;
			break;
		case 26:
			iVar0 = 1420204096;
			iVar1 = 14;
			iVar2 = 0;
			break;
		case 27:
			iVar0 = 821931868;
			iVar1 = 18;
			iVar2 = 0;
			break;
		case 28:
			iVar0 = 821931868;
			iVar1 = 19;
			iVar2 = 0;
			break;
		case 29:
			iVar0 = 821931868;
			iVar1 = 20;
			iVar2 = 0;
			break;
		case 30:
			iVar0 = 1632247697;
			iVar1 = 22;
			iVar2 = 0;
			break;
		case 31:
			iVar0 = 1632247697;
			iVar1 = 6;
			iVar2 = 0;
			break;
		case 32:
			iVar0 = 821931868;
			iVar1 = 10;
			iVar2 = 0;
			break;
		case 33:
			iVar0 = 821931868;
			iVar1 = 11;
			iVar2 = 0;
			break;
		case 34:
			iVar0 = 821931868;
			iVar1 = 20;
			iVar2 = 0;
			break;
		case 35:
			iVar0 = 1632247697;
			iVar1 = 14;
			iVar2 = 0;
			break;
		case 36:
			iVar0 = 1632247697;
			iVar1 = 16;
			iVar2 = 0;
			break;
		case 37:
			iVar0 = 1632247697;
			iVar1 = 18;
			iVar2 = 0;
			break;
		case 38:
			iVar0 = 1632247697;
			iVar1 = 19;
			iVar2 = 0;
			break;
		case 39:
			iVar0 = 821931868;
			iVar1 = 20;
			iVar2 = 15;
			break;
		case 40:
			iVar0 = 821931868;
			iVar1 = 22;
			iVar2 = 0;
			break;
		case 41:
			iVar0 = 1632247697;
			iVar1 = 7;
			iVar2 = 0;
			break;
		case 42:
			iVar0 = 1632247697;
			iVar1 = 9;
			iVar2 = 0;
			break;
		case 43:
			iVar0 = 1632247697;
			iVar1 = 11;
			iVar2 = 0;
			break;
		case 44:
			iVar0 = 1632247697;
			iVar1 = 19;
			iVar2 = 0;
			break;
		case 45:
			iVar0 = 1632247697;
			iVar1 = 21;
			iVar2 = 0;
			break;
		case 46:
			iVar0 = 1632247697;
			iVar1 = 22;
			iVar2 = 0;
			break;
		case 47:
			iVar0 = 1632247697;
			iVar1 = 23;
			iVar2 = 0;
			break;
		case 48:
			iVar0 = 1632247697;
			iVar1 = 7;
			iVar2 = 0;
			break;
		case 49:
			iVar0 = 1632247697;
			iVar1 = 8;
			iVar2 = 0;
			break;
		case 50:
			iVar0 = 1632247697;
			iVar1 = 14;
			iVar2 = 0;
			break;
		case 51:
			iVar0 = 1632247697;
			iVar1 = 16;
			iVar2 = 0;
			break;
		case 52:
			iVar0 = 1632247697;
			iVar1 = 17;
			iVar2 = 30;
			break;
		case 53:
			iVar0 = 1632247697;
			iVar1 = 18;
			iVar2 = 0;
			break;
		case 54:
			iVar0 = 1632247697;
			iVar1 = 18;
			iVar2 = 30;
			break;
		case 55:
			iVar0 = 1632247697;
			iVar1 = 19;
			iVar2 = 0;
			break;
		case 56:
			iVar0 = 1632247697;
			iVar1 = 19;
			iVar2 = 30;
			break;
		case 57:
			iVar0 = 1632247697;
			iVar1 = 20;
			iVar2 = 0;
			break;
		case 58:
			iVar0 = 1632247697;
			iVar1 = 21;
			iVar2 = 0;
			break;
		case 59:
			iVar0 = 1632247697;
			iVar1 = 22;
			iVar2 = 0;
			break;
		default:
			iVar0 = 1632247697;
			iVar1 = 13;
			break;
	}
	_set_weather_type(iVar0, true, true, false, 0f, false);
	set_clock_time(iVar1, iVar2, 0);
	pause_clock(true, 0);
	if (iVar0 == 1420204096 || iVar0 == -416908843)
	{
		if (iVar1085 == -1)
		{
			iLocal_1088 = get_sound_id();
			_0xdcf5ba95bbf0faba(iVar1085, func_1230(6), -1644.1f, -1366.2f, 84.1f, func_1230(0), 0, 0, 1);
		}
	}
	else if (!iVar1085 == -1)
	{
		_0x3210bcb36af7621b(iVar1085);
		release_sound_id(iVar1085);
	}
}

void func_1223(int iParam0)
{
	if (!iVar1088 == iParam0)
	{
		func_1256(iParam0);
	}
}

bool func_1224(int iParam0, int iParam1)
{
	return func_1646(iParam0, iParam1, &(Global_1946804->f_1949), 1, 0, 0);
}

void func_1225(char* sParam0, float fParam1)
{
	set_task_move_network_signal_float(Global_35, sParam0, fParam1);
}

void func_1226()
{
	if (is_task_move_network_active(Global_35))
	{
		set_task_move_network_signal_bool(Global_35, "IsPlayer", true);
		set_task_move_network_signal_float(Global_35, "progress", fVar1066);
		set_task_move_network_signal_float(Global_35, "effort", fVar1066);
		set_task_move_network_signal_float(Global_35, "stage", fVar1071);
		set_task_move_network_signal_float(Global_35, "BeatHit", fVar1074);
	}
	if (is_task_move_network_active(&(vLocal_808[2])))
	{
		set_task_move_network_signal_bool(&(vLocal_808[2]), "IsPlayer", false);
		set_task_move_network_signal_float(&(vLocal_808[2]), "progress", fVar1066);
		set_task_move_network_signal_float(&(vLocal_808[2]), "effort", fVar1066);
		set_task_move_network_signal_float(&(vLocal_808[2]), "stage", fVar1071);
		set_task_move_network_signal_float(&(vLocal_808[2]), "BeatHit", fVar1074);
	}
}

bool func_1227(int iParam0)
{
	if (!bVar1077)
	{
		return false;
	}
	if (func_26(vLocal_614[9]))
	{
		fVar0 = func_1647(iParam0);
		if (func_871(vLocal_614[9]) >= fVar0)
		{
			func_558(vLocal_614[9]);
			return true;
		}
	}
	return false;
}

char* func_1228(int iParam0)
{
	return func_445(iParam0, 1);
}

char* func_1229(int iParam0)
{
	return func_445(iParam0, 0);
}

char[] func_1230(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "BE22_SOUNDS";
		case 1:
			return "DISTANT_HAMMER_HIT";
		case 2:
			return "LIFT_BEAM";
		case 3:
			return "LIFT_BEAM";
		case 4:
			return "EXERT_LOW";
		case 5:
			return "EXERT_LOW";
		case 6:
			return "rain_loop";
	}
	return "";
}

void func_1231(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			iVar0 = 1;
			iVar1 = 3;
			Var2 = { -1621.691f, -1381.34f, 82.7728f };
			Var2.f_3 = 166.83f;
			Var6 = { -1635.11f, -1372.002f, 84.0837f };
			Var6.f_3 = 152f;
			Var10 = { -1636.445f, -1373.215f, 83.9832f };
			Var10.f_3 = -150f;
			Var14 = { -1638.201f, -1377.54f, 83.9684f };
			Var14.f_3 = 29.12f;
			break;
		case 3:
			iVar0 = 2;
			iVar1 = 4;
			Var2 = { -1646.183f, -1340.802f, 83.9575f };
			Var2.f_3 = -87.91f;
			Var6 = { -1645.926f, -1365.692f, 83.9659f };
			Var6.f_3 = 142f;
			Var10 = { -1644.98f, -1366.473f, 83.9723f };
			Var10.f_3 = 94f;
			Var14 = { -1652.438f, -1367.877f, 83.9652f };
			Var14.f_3 = -38.24f;
			break;
		case 4:
			iVar0 = 3;
			iVar1 = 5;
			Var2 = { -1659.277f, -1361.436f, 83.9598f };
			Var2.f_3 = -128.79f;
			Var6 = { -1633.673f, -1354.169f, 83.7721f };
			Var6.f_3 = 154f;
			Var10 = { -1633.348f, -1356.454f, 83.7524f };
			Var10.f_3 = 332f;
			Var14 = { -1642.284f, -1353.602f, 83.963f };
			Var14.f_3 = -70.44f;
			break;
		case 5:
			iVar0 = 4;
			iVar1 = 6;
			Var2 = { -1650.331f, -1379.367f, 83.9612f };
			Var2.f_3 = 115.53f;
			Var6 = { -1640.374f, -1352.399f, 83.9651f };
			Var6.f_3 = 330f;
			Var10 = { -1646.21f, -1351.506f, 83.9736f };
			Var10.f_3 = 236f;
			Var14 = { -1647.814f, -1347.738f, 83.9653f };
			Var14.f_3 = -84.85f;
			break;
		case 6:
			iVar0 = 5;
			iVar1 = 7;
			Var2 = { 1640.554f, -1396.468f, 82.8357f };
			Var2.f_3 = -81.6f;
			Var6 = { -1640.374f, -1352.399f, 83.9651f };
			Var6.f_3 = 330f;
			Var10 = { -1648.29f, -1360.763f, 83.9545f };
			Var10.f_3 = 248f;
			Var14 = { -1644.481f, -1360.2f, 83.9643f };
			Var14.f_3 = 112f;
			break;
		case 7:
			iVar0 = 6;
			iVar1 = 8;
			Var2 = { -1620.238f, -1378.787f, 82.8079f };
			Var2.f_3 = 157.59f;
			Var6 = { -1641.676f, -1364.375f, 83.9845f };
			Var6.f_3 = 70.64f;
			Var10 = { -1644.05f, -1365.44f, 83.9752f };
			Var10.f_3 = 242f;
			Var14 = { -1640.432f, -1363.297f, 83.9871f };
			Var14.f_3 = 48.77f;
			break;
		case 8:
			iVar0 = 7;
			iVar1 = 9;
			Var2 = { -1654.92f, -1349.163f, 83.9526f };
			Var2.f_3 = 119.53f;
			Var6 = { -1646.162f, -1356.536f, 83.9482f };
			Var6.f_3 = -144.39f;
			Var10 = { -1644.207f, -1356.361f, 84f };
			Var10.f_3 = 65.22f;
			Var14 = { -1647.962f, -1358.816f, 83.717f };
			Var14.f_3 = -6.05f;
			break;
		case 9:
			iVar0 = 8;
			iVar1 = 10;
			Var2 = { -1659.525f, -1361.418f, 83.959f };
			Var2.f_3 = -154.76f;
			Var6 = { -1652.963f, -1357.634f, 83.9673f };
			Var6.f_3 = 50.83f;
			Var10 = { -1656.173f, -1362.183f, 83.9622f };
			Var10.f_3 = -72.16f;
			Var14 = { -1659.911f, -1360.257f, 85.4431f };
			Var14.f_3 = -141.15f;
			break;
		default:
			return;
	}
	freeze_entity_position(&(iLocal_827[0]), true);
	set_entity_dynamic(&(iLocal_827[0]), false);
	_set_entity_coords_and_heading(&(iLocal_827[0]), Var2, Var2.f_3, true, false, true);
	set_vehicle_on_ground_properly(&(iLocal_827[0]), 0f);
	_set_entity_coords_and_heading(Global_35, Var6, Var6.f_3, true, false, true);
	_0x9587913b9e772d29(Global_35, 0);
	_set_entity_coords_and_heading(&(vLocal_808[2]), Var10, Var10.f_3, true, false, true);
	_0x9587913b9e772d29(&(vLocal_808[2]), 0);
	_set_entity_coords_and_heading(&(vLocal_808[1]), Var14, Var14.f_3, true, false, true);
	_0x9587913b9e772d29(&(vLocal_808[1]), 0);
	task_play_anim(Global_35, func_445(81, 1), func_445(81, 0), 1000f, -1000f, -1, 1, 0f, false, 0, false, 0, false);
	task_play_anim(&(vLocal_808[2]), func_445(81, 1), func_445(81, 0), 1000f, -1000f, -1, 1, 0.5f, false, 0, false, 0, false);
	if (iParam0 == 8 || iParam0 == 9)
	{
		_set_entity_coords_and_heading_no_offset(&(vLocal_808[1]), Var14, Var14.f_3, false, true);
		task_play_anim(&(vLocal_808[1]), func_445(83, 1), func_445(83, 0), 1000f, -1000f, -1, 129, 0f, false, 0, false, 0, false);
	}
	else
	{
		task_play_anim(&(vLocal_808[1]), func_445(82, 1), func_445(82, 0), 1000f, -1000f, -1, 1, 0f, false, 0, false, 0, false);
	}
	_0x2208438012482a1a(Global_35, true, false);
	_0x2208438012482a1a(&(vLocal_808[2]), true, false);
	_0x2208438012482a1a(&(vLocal_808[1]), true, false);
	func_1223(iVar1);
	func_1222(iVar0);
}

void func_1232(char* sParam0, int iParam1, int iParam2, bool bParam3)
{
	Var0.f_6 = -1082130432;
	Var0.f_9 = -1082130432;
	Var0.f_30 = sParam0;
	Var0.f_1 = -455129387;
	Var0 = 411497472;
	task_move_network_advanced_by_name_with_init_params(Global_35, func_446(100), &Var0, func_1234(iParam1), func_1234(iParam2), 2, 0, 0, 0, 131200, 0);
	Var0.f_1 = -455129387;
	Var0 = -557541908;
	clear_ped_tasks_immediately(&(vLocal_808[2]), false, true);
	task_move_network_advanced_by_name_with_init_params(&(vLocal_808[2]), func_446(100), &Var0, func_1234(iParam1), func_1234(iParam2), 2, 0, 0, 0, 131200, 0);
	if (bParam3)
	{
		_0x2208438012482a1a(Global_35, true, false);
		_0x2208438012482a1a(&(vLocal_808[2]), true, false);
		_0x898586729db5221d(Global_35);
		_0x898586729db5221d(&(vLocal_808[2]));
	}
}

void func_1233()
{
	if (!does_entity_exist(&(iLocal_666[71])))
	{
		func_1220(71, 1);
	}
	attach_entity_to_entity(&(iLocal_666[71]), Global_35, get_ped_bone_index(Global_35, 37709), func_1234(0), func_1234(0), false, false, false, false, 2, true, false, false);
}

Vector3 func_1234(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0f, 0f, 0f;
		case 1:
			return 0.07f, 0f, 0.37f;
		case 24:
			return 0f, 4.08f, 0.145f;
		case 25:
			return 0f, 4.08f, 0.087f;
		case 2:
			return -1650.215f, -1364.989f, 82.96521f;
		case 3:
			return 0f, 0f, 0f;
		case 4:
			return -1652.069f, -1363.98f, 82.9652f;
		case 5:
			return 0f, 0f, 0f;
		case 6:
			return -1650.215f, -1364.989f, 82.96521f;
		case 7:
			return 0f, 0f, 0f;
		case 8:
			return -1653.21f, -1363.292f, 82.96f;
		case 9:
			return 0f, 0f, 0f;
		case 10:
			return -1653.62f, -1363.045f, 82.962f;
		case 11:
			return 0f, 0f, 0f;
		case 12:
			return -1648.3f, -1350.6f, 82.925f;
		case 13:
			return 0f, 0f, 0f;
		case 14:
			return -1650.423f, -1350.352f, 82.967f;
		case 15:
			return 0f, 0f, 0f;
		case 16:
			return -1650.943f, -1349.992f, 82.978f;
		case 17:
			return 0f, 0f, 0f;
		case 18:
			return -1651.859f, -1349.463f, 82.977f;
		case 19:
			return 0f, 0f, 0f;
		case 20:
			return -1652.601f, -1349.001f, 82.98f;
		case 21:
			return 0f, 0f, 0f;
		case 31:
			return 0f, 1.175f, 0.06f;
		case 32:
			return 0f, 1.175f, 0.075f;
		case 33:
			return 0f, 1.175f, 0.017f;
		case 34:
			return -1644.453f, -1368.258f, 83.454f;
		case 35:
			return 0f, 0f, 240f;
		case 22:
			return -1641.728f, -1369.922f, 85.1119f;
		case 23:
			return 0f, 0f, 330f;
		case 36:
			return -1639.639f, -1371.038f, 83.45f;
		case 37:
			return 0f, 0f, 330f;
		case 38:
			return -1645.866f, -1357.598f, 83.45f;
		case 39:
			return 0f, 0f, 150f;
		case 40:
			return -1642.534f, -1369.377f, 83.469f;
		case 41:
			return 0f, 0f, -30f;
		case 42:
			return -1648.291f, -1366.054f, 83.48f;
		case 43:
			return 0f, 0f, -30f;
		case 44:
			return -1636.702f, -1365.67f, 83.445f;
		case 45:
			return 0f, 0f, 240f;
		case 46:
			return -1645.553f, -1357.274f, 83.437f;
		case 47:
			return 0f, 0f, 60f;
		case 48:
			return -1638.458f, -1357.362f, 83.43f;
		case 49:
			return 0f, 0f, -120f;
		case 60:
			return 0f, 90f, 0f;
		case 50:
		case 56:
			return 0.03f, 0.4f, 0f;
		case 52:
			return 0.03f, 0.43f, 0f;
		case 53:
			return 0f, 0.43f, 0f;
		case 54:
			return 0.03f, 0.33f, 0f;
		case 55:
			return 0f, 0.33f, 0f;
		case 58:
			return 0.03f, 0.38f, -0.01f;
		case 59:
			return 0f, 0.38f, -0.01f;
		case 51:
		case 57:
			return 0f, 0.4f, 0f;
		case 61:
			return -1660.078f, -1366.013f, 84.807f;
		case 62:
			return 0f, 0f, -31f;
		case 63:
			return -1653.372f, -1369.549f, 84.979f;
		case 64:
			return 0f, 0f, -31f;
		case 65:
			return -1648.654f, -1363.96f, 87.356f;
		case 66:
			return 0f, 0f, -31f;
		case 67:
			return -1620.819f, -1355.267f, 84.9f;
		case 68:
			return 0f, 0f, 149f;
		case 69:
			return -1622.094f, -1362.078f, 86.887f;
		case 70:
			return 0f, 0f, 149f;
		case 71:
			return -1632.269f, -1357.267f, 87.183f;
		case 72:
			return 0f, 0f, 149f;
		case 73:
			return -1630.573f, -1356.082f, 86.567f;
		case 74:
			return 0f, 0f, 149f;
		case 75:
			return -1644.103f, -1369.065f, 86.567f;
		case 76:
			return 0f, 0f, -31f;
		case 77:
			return -1635.133f, -1353.466f, 86.567f;
		case 78:
			return 0f, 0f, 149f;
		case 79:
			return -1647.382f, -1367.181f, 86.567f;
		case 80:
			return 0f, 0f, -31f;
		case 81:
			return -1638.497f, -1351.53f, 86.567f;
		case 82:
			return 0f, 0f, 149f;
		case 83:
			return -1651.631f, -1364.727f, 86.567f;
		case 84:
			return 0f, 0f, -31f;
		case 26:
			return -1641.8f, -1372.3f, 83.7f;
		case 27:
			return -1640.172f, -1365.817f, 83.2801f;
		case 28:
			return 0f, 0f, 149f;
		case 29:
			return -1641.801f, -1364.84f, 83.2859f;
		case 30:
			return 0f, 0f, 149f;
		case 85:
			return 0.1f, 0f, 0.03f;
		case 86:
			return 0.1f, 0f, -0.006f;
	}
	return 0f, 0f, 0f;
}

void func_1235(int iParam0, int iParam1, float fParam2, float fParam3, int iParam4)
{
	task_play_anim(iParam0, func_445(iParam1, 1), func_445(iParam1, 0), fParam2, fParam3, -1, iParam4, 0f, false, 0, false, 0, false);
}

void func_1236(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			vVar0 = { -1652.285f, -1368.529f, 84.251f };
			fVar3 = 0f;
			break;
		case 2:
			vVar0 = { -1651.237f, -1361.553f, 83.392f };
			fVar3 = -32f;
			break;
		case 3:
			vVar0 = { -1638.504f, -1368.822f, 83.4557f };
			fVar3 = 50.94f;
			break;
		case 5:
			vVar0 = { -1648.688f, -1357.373f, 83.4056f };
			fVar3 = 240f;
			break;
		case 6:
			vVar0 = { -1631.684f, -1352.036f, 83.0294f };
			fVar3 = 118f;
			break;
		case 7:
			vVar0 = { -1636.408f, -1353.43f, 83.4217f };
			fVar3 = 73f;
			break;
		case 9:
			vVar0 = { -1642.598f, -1351.088f, 83.4286f };
			fVar3 = 286f;
			break;
		case 10:
			vVar0 = { -1644.248f, -1350.122f, 83.4262f };
			fVar3 = 266f;
			break;
		case 11:
			vVar0 = { -1641.351f, -1362.419f, 83.2918f };
			fVar3 = 265f;
			break;
		case 20:
			vVar0 = { -1644.901f, -1365.722f, 88.2346f };
			fVar3 = 96f;
			break;
		case 21:
			vVar0 = { -1641.755f, -1367.725f, 88.3812f };
			fVar3 = 219f;
			break;
		case 23:
			vVar0 = { -1641.993f, -1355.04f, 88.5378f };
			fVar3 = 295f;
			break;
		default:
			break;
	}
	_set_entity_coords_and_heading(&(vLocal_808[3]), vVar0, fVar3, true, false, true);
	if (!_0x083d497d57b7400f(&(vLocal_808[3])))
	{
		freeze_entity_position(&(vLocal_808[3]), true);
	}
}

void func_1237(int iParam0, bool bParam1)
{
	if (does_cam_exist(&(iLocal_829[iParam0])))
	{
		return;
	}
	func_1254();
	func_1648(iParam0);
	func_1649(iParam0, 1);
	render_script_cams(true, false, 3000, true, false, 0);
	if (bParam1)
	{
		func_1650(iParam0, 1);
	}
}

void func_1238()
{
	fLocal_1068 = 0f;
	fLocal_1069 = 0f;
}

bool func_1239()
{
	if (((!is_task_move_network_active(Global_35) || !is_task_move_network_ready_for_transition(Global_35)) || !is_task_move_network_active(&(vLocal_808[2]))) || !is_task_move_network_ready_for_transition(&(vLocal_808[2])))
	{
		return false;
	}
	return true;
}

void func_1240()
{
	func_168(24);
	func_168(26);
	func_168(25);
	func_168(27);
	func_1238();
	func_1651("progress", fVar1066);
	func_1651("effort", fVar1066);
	request_task_move_network_state_transition(Global_35, "lift");
	request_task_move_network_state_transition(&(vLocal_808[2]), "lift");
}

void func_1241(bool bParam0, bool bParam1, int iParam2)
{
	if (!func_10(iVar1072))
	{
		iLocal_1077 = func_1654(func_1652(2), func_1653(2), 3, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, 1704213876, 0);
		func_1655(iVar1072);
	}
	if (!does_cam_exist(&(iLocal_829[iParam2])))
	{
		func_1257(iParam2);
	}
	fLocal_1069 = get_control_normal(0, func_1653(2));
	func_1656();
	func_1657(iParam2, fVar1063);
	if (fVar1063 > 0.2f)
	{
		func_1658(get_frame_time(), func_1513(0.2f, 0.8f, fVar1063));
	}
	if (!func_166(24))
	{
		if (fVar1063 >= 0.167f)
		{
			_play_sound_from_entity(func_1230(2), Global_35, func_1230(0), false, 0, 0);
			func_439(24);
		}
	}
	if (!func_166(25))
	{
		if (fVar1063 >= 0.2f)
		{
			func_1659(Global_35, func_1230(4), -1454469014, 0, 1, 0, 0, 1);
			func_439(25);
		}
	}
	if (!func_166(26))
	{
		if (fVar1063 >= 0.133f)
		{
			_play_sound_from_entity(func_1230(3), &(vLocal_808[2]), func_1230(0), false, 0, 0);
			func_439(26);
		}
	}
	if (!func_166(27))
	{
		if (fVar1063 >= 0.4f)
		{
			func_1659(&(vLocal_808[2]), func_1230(5), -1454469014, 0, 1, 0, 0, 1);
			func_439(27);
		}
	}
	if (fVar1063 >= 0.5f)
	{
		if (!func_1660(iVar1072, 1))
		{
			func_11(&iLocal_1077, 1, 1);
			*bParam0 = 1;
			func_1658(0.5f, 0.2f);
		}
		else if (fVar1063 >= 0.88f)
		{
			func_1658(0.5f, 1f);
			func_11(&iLocal_1077, 1, 1);
			*bParam1 = 1;
		}
	}
}

void func_1242()
{
	func_1254();
	func_1661(1);
	shake_cam(&(iLocal_829[1]), "KILL_SHOT_SHAKE", 1f);
	func_1651("progress", fVar1066);
	func_1245("drop");
}

void func_1243(bool bParam0)
{
	if (has_anim_event_fired(Global_35, 1382853318))
	{
		*bParam0 = 1;
	}
}

void func_1244(int iParam0)
{
	if (!does_cam_exist(&(iLocal_829[iParam0])))
	{
		func_1254();
		func_1257(iParam0);
	}
}

void func_1245(char* sParam0)
{
	func_1662(0, sParam0);
	func_1662(2, sParam0);
}

void func_1246(bool bParam0, int iParam1)
{
	if (!func_10(iVar1075))
	{
		iLocal_1079 = func_1654(func_1652(3), func_1653(1), 3, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, 1704213876, 0);
		func_1655(iVar1075);
	}
	if (func_1660(iVar1075, 1))
	{
		func_1651("carryspeed", get_control_normal(0, func_1653(1)));
	}
	else
	{
		func_1651("carryspeed", 0f);
	}
	vVar3 = { -1651.622f, -1359.803f, 83.9874f };
	if (iVar894 == 0)
	{
		vVar6 = { -1638.176f, -1366.581f, 83.9874f };
	}
	else if (iVar894 == 2)
	{
		vVar6 = { -1640.02f, -1365.614f, 83.9874f };
	}
	else if (iVar894 == 5)
	{
		vVar3 = { -1649.71f, -1345.41f, 83.9472f };
		vVar6 = { -1644.8f, -1347.9f, 83.9f };
	}
	fVar1 = get_distance_between_coords(vVar3, vVar6, true);
	fVar2 = get_distance_between_coords(vVar3, get_entity_coords(Global_35, true, false), true);
	fVar0 = func_453((fVar2 / fVar1), 0f, 1f);
	func_1657(iParam1, fVar0);
	if (has_anim_event_fired(Global_35, -981108606))
	{
		func_11(&iLocal_1079, 1, 1);
		*bParam0 = 1;
	}
}

void func_1247(float fParam0, vector3 vParam1, vector3 vParam4, int iParam7)
{
	if (!does_entity_exist(&(iLocal_666[66])))
	{
		func_1220(66, 1);
	}
	vVar0 = { 0f, 0f, iParam7 };
	attach_entity_to_entity(&(iLocal_666[66]), &(iLocal_666[func_1269(iVar888)]), 0, func_1663(vParam1, vParam4, fParam0), vVar0, false, false, false, false, 2, true, false, false);
}

void func_1248(bool bParam0, bool bParam1)
{
	if (_uiprompt_is_valid(iLocal_207))
	{
		return;
	}
	iLocal_207 = _uiprompt_register_begin();
	_0xf4a5c4509bf923b1(iLocal_207, 0);
	if (bParam1)
	{
		_uiprompt_set_text(iLocal_207, func_1652(5));
	}
	else
	{
		_uiprompt_set_text(iLocal_207, func_1652(4));
	}
	_uiprompt_set_control_action(iLocal_207, func_1653(3));
	_uiprompt_set_beat_mode(iLocal_207, bParam0);
	_uiprompt_register_end(iLocal_207);
	func_168(7);
	if (bParam0)
	{
		func_439(8);
	}
	else
	{
		func_168(8);
	}
}

bool func_1249()
{
	return func_166(4);
}

void func_1250()
{
	if (does_entity_exist(&(iLocal_666[71])))
	{
		func_440(71, 1);
	}
	if (!does_entity_exist(&(iLocal_666[func_1269(iVar896)])))
	{
		func_1220(func_1269(iVar896), 1);
	}
}

void func_1251(int iParam0, int iParam1, int iParam2)
{
	iVar0 = func_1269(iParam0);
	func_1220(66, 0);
	attach_entity_to_entity(&(iLocal_666[66]), &(iLocal_666[iVar0]), 0, func_1234(iParam1), func_1234(iParam2), false, false, false, false, 2, true, false, false);
}

bool func_1252()
{
	func_1664();
	if (func_164())
	{
		func_1665(0);
	}
	if (!func_1239())
	{
		return false;
	}
	if (func_1249())
	{
		func_1666(iVar896);
		func_1667(iVar896, 24, 25, 0);
	}
	if (func_1668(iVar896))
	{
		func_27(vLocal_614[1], 0);
		if (func_871(vLocal_614[1]) >= 0.04f)
		{
			func_558(vLocal_614[1]);
			func_1665(1);
			return true;
		}
	}
	return false;
}

int func_1253(int iParam0)
{
	if (!vLocal_1100[iParam0]->f_1 == 4)
	{
		return 0;
	}
	func_1669(iParam0);
	start_anim_scene(&(vLocal_1100[iParam0]));
	func_1417(iParam0, 5);
	return 1;
}

void func_1254()
{
	render_script_cams(false, false, 3000, true, false, 0);
	iVar0 = 0;
	while (iVar0 < iVar827)
	{
		if (does_cam_exist(&(iLocal_829[iVar0])))
		{
			if (is_cam_active(&(iLocal_829[iVar0])))
			{
				set_cam_active(&(iLocal_829[iVar0]), false);
			}
			func_1670(iVar0);
		}
		iVar0++;
	}
}

void func_1255()
{
	_0x898586729db5221d(Global_35);
	_0x898586729db5221d(&(vLocal_808[2]));
	_0x898586729db5221d(&(vLocal_808[1]));
}

void func_1256(int iParam0)
{
	if (iParam0 == iVar1088)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= 52)
	{
		if (func_1671(iParam0, iVar0))
		{
			if (does_entity_exist(&(iLocal_666[iVar0])))
			{
				if (!is_entity_visible(&(iLocal_666[iVar0])))
				{
					set_entity_visible(&(iLocal_666[iVar0]), true);
				}
			}
			else
			{
				func_1220(iVar0, 1);
			}
		}
		else if (does_entity_exist(&(iLocal_666[iVar0])))
		{
			if (is_entity_visible(&(iLocal_666[iVar0])))
			{
				set_entity_visible(&(iLocal_666[iVar0]), false);
			}
		}
		iVar0++;
	}
	iLocal_1091 = iParam0;
}

void func_1257(int iParam0)
{
	func_1254();
	func_1648(iParam0);
	func_1649(iParam0, 1);
	render_script_cams(true, false, 3000, true, false, 0);
}

void func_1258(var uParam0, int iParam1)
{
	uParam0->f_1[func_132(iParam1)]->f_12 = 1;
}

void func_1259(var uParam0, int iParam1, int iParam2, int iParam3)
{
	iVar0 = func_132(iParam2);
	if (!func_1430(iVar0))
	{
		return;
	}
	iVar1 = func_1431(iParam3);
	if (!func_1432(iVar1))
	{
		return;
	}
	(*uParam0->f_1[iVar0])[iVar1] = *iParam1;
	set_bit(&(uParam0->f_1[iVar0]->f_17), iVar1);
}

void func_1260(var uParam0, int iParam1, char[16] cParam2)
{
	uParam0->f_1[func_132(iParam1)]->f_13 = { cParam2 };
}

void func_1261(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_1[func_132(iParam1)]->f_21 = iParam2;
}

bool func_1262(int iParam0)
{
	return func_1672(iParam0, &(Global_1946804->f_1949));
}

int func_1263(int iParam0, bool bParam1, bool bParam2)
{
	return func_1673(iParam0, &(Global_1946804->f_1949), bParam1, 0, 1, bParam2);
}

void func_1264()
{
	func_1674(1, 7);
	func_1675(1);
}

void func_1265(char* sParam0, int iParam1, bool bParam2)
{
	Var0.f_6 = -1082130432;
	Var0.f_9 = -1082130432;
	Var0.f_30 = sParam0;
	Var34 = { func_817(iParam1) };
	vVar41 = { _get_object_offset_from_coords(Var34, Var34.f_3.f_2, func_1234(31)) };
	vVar44 = { 0f, 0f, (Var34.f_3.f_2 + 180f) };
	task_move_network_advanced_by_name_with_init_params(Global_35, func_446(101), &Var0, vVar41, vVar44, 2, 0, 0, 0, 131200, 0);
	if (bParam2)
	{
		_0x2208438012482a1a(Global_35, true, false);
	}
	_0x898586729db5221d(Global_35);
}

void func_1266()
{
	if (!does_entity_exist(&(iLocal_666[67])))
	{
		func_1220(67, 1);
		set_entity_collision(&(iLocal_666[67]), false, false);
		freeze_entity_position(&(iLocal_666[67]), true);
	}
	switch (iLocal_211)
	{
		case 38:
			vVar0 = { -1647.189f, -1360.519f, 83.46f };
			vVar3 = { -91.3f, 0f, -83f };
			break;
		case 48:
			vVar0 = { -1641.42f, -1362.49f, 83.451f };
			vVar3 = { 270f, 6.1f, 31f };
			break;
		case 51:
			vVar0 = { -1636.078f, -1372.159f, 83.474f };
			vVar3 = { 270f, 0f, -280.9f };
			break;
		case 59:
			vVar0 = { -1630.133f, -1361.768f, 83.459f };
			vVar3 = { 270f, 0f, -263.7f };
			break;
		case 57:
			vVar0 = { -1630.863f, -1362.068f, 83.472f };
			vVar3 = { 270f, 0f, -79.7f };
			break;
		case 63:
			vVar0 = { -1645.629f, -1368.755f, 83.46f };
			vVar3 = { 270f, 0f, -88.1f };
			break;
		case 73:
			vVar0 = { -1644.423f, -1355.903f, 84.525f };
			vVar3 = { 0f, -1.7f, -30.7f };
			break;
		default:
			break;
	}
	set_entity_coords(&(iLocal_666[67]), vVar0, true, false, true, true);
	set_entity_rotation(&(iLocal_666[67]), vVar3, 2, true);
}

void func_1267()
{
	if (!does_entity_exist(&(iLocal_666[83])))
	{
		func_1220(83, 1);
		attach_entity_to_entity(&(iLocal_666[83]), Global_35, get_ped_bone_index(Global_35, 38989), func_1234(0), func_1234(0), false, false, false, false, 2, true, false, false);
	}
}

void func_1268()
{
	func_1220(64, 0);
	if (!is_entity_attached(&(iLocal_666[64])))
	{
		attach_entity_to_entity(&(iLocal_666[64]), Global_35, get_ped_bone_index(Global_35, 7966), func_1234(0), func_1234(0), false, false, false, false, 2, true, false, false);
	}
}

int func_1269(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 72;
		case 1:
			return 73;
		case 2:
			return 74;
		case 3:
			return 75;
		case 4:
			return 76;
		case 5:
			return 77;
		case 6:
			return 78;
		case 7:
			return 79;
		case 8:
			return 80;
		case 9:
			return 84;
		case 10:
			return 85;
		case 11:
			return 86;
		case 12:
			return 87;
		case 13:
			return 88;
		case 14:
			return 89;
		case 15:
			return 97;
		case 16:
			return 98;
		case 17:
			return 99;
		case 18:
			return 100;
		case 19:
			return 101;
		case 20:
			return 103;
		case 21:
			return 103;
		case 22:
			return 103;
		case 23:
			return 103;
		case 24:
			return 103;
		case 25:
			return 103;
	}
	return 84;
}

void func_1270(char* sParam0)
{
	func_1662(0, sParam0);
}

void func_1271()
{
	if (does_entity_exist(&(iLocal_666[83])))
	{
		func_440(83, 1);
	}
	if (!does_entity_exist(&(iLocal_666[func_1269(iVar896)])))
	{
		func_1220(func_1269(iVar896), 1);
	}
}

bool func_1272()
{
	func_1664();
	func_1665(0);
	if (func_1249())
	{
		func_1666(iVar896);
		func_1667(iVar896, 32, 33, 0);
	}
	if (func_1668(iVar896))
	{
		func_27(vLocal_614[1], 0);
		if (func_871(vLocal_614[1]) >= 0.04f)
		{
			func_558(vLocal_614[1]);
			func_1665(1);
			return true;
		}
	}
	return false;
}

bool func_1273()
{
	if (!is_task_move_network_active(Global_35) || !is_task_move_network_ready_for_transition(Global_35))
	{
		return false;
	}
	return true;
}

void func_1274(int iParam0)
{
	if (does_cam_exist(&(iLocal_829[iParam0])))
	{
		func_1670(iParam0);
	}
}

bool func_1275(int iParam0)
{
	if (((((((!is_task_move_network_active(Global_35) || !is_task_move_network_ready_for_transition(Global_35)) || !is_task_move_network_active(&(vLocal_808[2]))) || !is_task_move_network_ready_for_transition(&(vLocal_808[2]))) || !is_task_move_network_active(&(vLocal_808[1]))) || !is_task_move_network_ready_for_transition(&(vLocal_808[1]))) || !is_task_move_network_active(&(iLocal_666[iParam0]))) || !is_task_move_network_ready_for_transition(&(iLocal_666[iParam0])))
	{
		return false;
	}
	return true;
}

void func_1276(int iParam0, char* sParam1, float fParam2)
{
	set_task_move_network_signal_float(Global_35, sParam1, fParam2);
	set_task_move_network_signal_float(&(vLocal_808[2]), sParam1, fParam2);
	set_task_move_network_signal_float(&(vLocal_808[1]), sParam1, fParam2);
	if (!is_task_move_network_active(&(iLocal_666[iParam0])))
	{
	}
	set_task_move_network_signal_float(&(iLocal_666[iParam0]), sParam1, fParam2);
}

void func_1277(char* sParam0, int iParam1, vector3 vParam2, vector3 vParam5, bool bParam8)
{
	Var0.f_6 = -1082130432;
	Var0.f_9 = -1082130432;
	Var0.f_30 = sParam0;
	Var0 = -1859093757;
	task_move_network_advanced_by_name_with_init_params(Global_35, func_446(102), &Var0, vParam2, vParam5, 2, 0, 0, 0, 131200, 0);
	Var0 = -1937507962;
	task_move_network_advanced_by_name_with_init_params(&(vLocal_808[2]), func_446(102), &Var0, vParam2, vParam5, 2, 0, 0, 0, 131200, 0);
	Var0 = -1614763838;
	task_move_network_advanced_by_name_with_init_params(&(vLocal_808[1]), func_446(102), &Var0, vParam2, vParam5, 2, 0, 0, 0, 131200, 0);
	Var0 = 734512747;
	task_move_network_advanced_by_name_with_init_params(&(iLocal_666[iParam1]), func_446(102), &Var0, vParam2, vParam5, 2, 0, 0, 0, 131200, 0);
	if (bParam8)
	{
		_0x2208438012482a1a(Global_35, true, false);
		_0x2208438012482a1a(&(vLocal_808[2]), true, false);
		_0x2208438012482a1a(&(vLocal_808[1]), true, false);
		_0x898586729db5221d(Global_35);
		_0x898586729db5221d(&(vLocal_808[2]));
		_0x898586729db5221d(&(vLocal_808[1]));
		force_entity_ai_and_animation_update(&(iLocal_666[iParam1]), true);
	}
}

void func_1278(char* sParam0, int iParam1)
{
	func_1662(0, sParam0);
	func_1662(2, sParam0);
	func_1662(1, sParam0);
	request_task_move_network_state_transition(&(iLocal_666[iParam1]), sParam0);
}

void func_1279(int iParam0, bool bParam1, bool bParam2)
{
	if (!does_cam_exist(&(iLocal_829[iParam0])))
	{
		func_1257(iParam0);
	}
	else
	{
		func_1657(iParam0, fVar1063);
	}
	if (!func_10(iVar1072))
	{
		iLocal_1077 = func_1654(func_1652(1), func_1653(2), 3, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, 1704213876, 0);
		func_1655(iVar1072);
		func_1676(iVar1072, func_1653(0));
	}
	if (func_1660(iVar1072, 1))
	{
		if (!func_10(iVar1073))
		{
			iLocal_1078 = func_1654(func_1652(2), func_1653(0), 13, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, 1704213876, 0);
			func_1655(iVar1073);
			func_1676(iVar1073, func_1653(2));
		}
	}
	else
	{
		disable_control_action(0, func_1653(0), false);
		if (func_10(iVar1073))
		{
			func_11(&iLocal_1078, 1, 1);
		}
	}
	if (fVar1063 > 0f)
	{
		func_1658(get_frame_time(), func_1513(0.2f, 0.8f, fVar1063));
	}
	if (!func_166(37))
	{
		if (fVar1063 >= 0f)
		{
			func_1659(Global_35, func_1230(4), -1454469014, 0, 1, 0, 0, 1);
			func_439(37);
		}
	}
	if (!func_166(39))
	{
		if (fVar1063 >= 0.15f)
		{
			func_1659(&(vLocal_808[2]), func_1230(5), -1454469014, 0, 1, 0, 0, 1);
			func_439(39);
		}
	}
	if (!func_166(38))
	{
		if (fVar1063 >= 0.9f)
		{
			func_1659(Global_35, func_1230(4), -1454469014, 0, 1, 0, 0, 1);
			func_439(38);
		}
	}
	if (!func_166(40))
	{
		if (fVar1063 >= 0.75f)
		{
			func_1659(&(vLocal_808[2]), func_1230(5), -1454469014, 0, 1, 0, 0, 1);
			func_439(40);
		}
	}
	func_1677();
	if (!func_166(30))
	{
		if (has_anim_event_fired(&(vLocal_808[2]), 912748328))
		{
			func_1220(65, 0);
			if (!is_entity_attached(&(iLocal_666[65])))
			{
				attach_entity_to_entity(&(iLocal_666[65]), &(vLocal_808[2]), get_ped_bone_index(&(vLocal_808[2]), 7966), func_1234(0), func_1234(0), false, false, false, false, 2, true, false, false);
			}
		}
	}
	if (func_26(vLocal_614[7]))
	{
		if (func_871(vLocal_614[7]) >= 1f)
		{
			if (func_10(iVar1073))
			{
				func_11(&iLocal_1078, 1, 1);
			}
			if (func_10(iVar1072))
			{
				func_11(&iLocal_1077, 1, 1);
			}
			*bParam1 = 1;
			func_1658(0.5f, 0.2f);
			func_558(vLocal_614[7]);
		}
	}
	fLocal_1074 = fVar1063;
	fLocal_1075 = get_control_normal(0, func_1653(2));
	if (fVar1063 == 1f)
	{
		func_168(37);
		func_168(38);
		func_168(39);
		func_168(40);
		func_1658(0.5f, 1f);
		func_11(&iLocal_1077, 1, 1);
		func_11(&iLocal_1078, 1, 1);
		func_558(vLocal_614[7]);
		*bParam2 = 1;
	}
}

void func_1280(bool bParam0)
{
	func_168(37);
	func_168(38);
	func_168(39);
	func_168(40);
	fLocal_1075 = 0f;
	fLocal_1074 = 0f;
	fLocal_1068 = 0f;
	fLocal_1069 = 0f;
	if (bParam0)
	{
		func_1276(iVar1087, "Progress", fVar1071);
		func_1276(iVar1087, "Effort", fVar1072);
	}
}

void func_1281(int iParam0)
{
	if (_does_anim_scene_exist(&(vLocal_1100[iParam0])) && check_ownership_of_anim_scene(&(vLocal_1100[iParam0])))
	{
		_delete_anim_scene(&(vLocal_1100[iParam0]));
		vLocal_1100[iParam0]->f_1 = 8;
	}
}

void func_1282()
{
	if (!does_entity_exist(&(iLocal_666[96])))
	{
		func_1220(96, 1);
		attach_entity_to_entity(&(iLocal_666[96]), Global_35, get_ped_bone_index(Global_35, 37709), func_1234(0), func_1234(0), false, false, false, false, 2, true, false, false);
	}
}

void func_1283(char* sParam0, vector3 vParam1, vector3 vParam4, bool bParam7)
{
	Var0.f_6 = -1082130432;
	Var0.f_9 = -1082130432;
	Var0.f_30 = sParam0;
	task_move_network_advanced_by_name_with_init_params(Global_35, func_446(103), &Var0, vParam1, vParam4, 2, 0, 0, 0, 131200, 0);
	if (bParam7)
	{
		_0x898586729db5221d(Global_35);
		_0x2208438012482a1a(Global_35, true, false);
	}
}

void func_1284()
{
	if (does_entity_exist(&(iLocal_666[96])))
	{
		func_440(96, 1);
	}
	if (!does_entity_exist(&(iLocal_666[func_1269(iVar896)])))
	{
		func_1220(func_1269(iVar896), 1);
	}
}

void func_1285()
{
	if (!does_entity_exist(&(iLocal_666[64])))
	{
		func_1220(64, 1);
		attach_entity_to_entity(&(iLocal_666[64]), Global_35, get_ped_bone_index(Global_35, 7966), func_1234(0), func_1234(0), false, false, false, false, 2, true, false, false);
	}
}

bool func_1286()
{
	func_1664();
	func_1665(0);
	if (func_1249())
	{
		func_1666(iVar896);
		switch (iVar896)
		{
			case 15:
				iVar0 = 50;
				iVar1 = 51;
				break;
			case 16:
				iVar0 = 52;
				iVar1 = 53;
				break;
			case 17:
				iVar0 = 54;
				iVar1 = 55;
				break;
			case 18:
				iVar0 = 56;
				iVar1 = 57;
				break;
			case 19:
				iVar0 = 58;
				iVar1 = 59;
				break;
		}
		func_1667(iVar896, iVar0, iVar1, 60);
	}
	if (func_1668(iVar896))
	{
		func_27(vLocal_614[1], 0);
		if (func_871(vLocal_614[1]) >= 0.04f)
		{
			func_558(vLocal_614[1]);
			func_1665(1);
			return true;
		}
	}
	return false;
}

void func_1287(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	while (iVar0 <= iParam1)
	{
		if (does_entity_exist(&(iLocal_666[iVar0])))
		{
			func_440(iVar0, 1);
		}
		iVar0++;
	}
}

void func_1288(var uParam0, char[4] cParam1)
{
	func_1678(&(uParam0->f_7375), cParam1);
	func_380(uParam0, 33554432);
}

float func_1289(var uParam0)
{
	return uParam0->f_794;
}

bool func_1290(var uParam0, char* sParam1, bool bParam2, bool bParam3)
{
	if (bParam3)
	{
		uParam0->f_871++;
		if (uParam0->f_871 < 10)
		{
			return (func_787(uParam0, 256) && !func_787(uParam0, 4194304));
		}
		uParam0->f_871 = 0;
	}
	if (is_string_null_or_empty(sParam1))
	{
		return false;
	}
	func_1679(uParam0, sParam1);
	if (!func_787(uParam0, 64))
	{
		if (!func_399(func_1680(uParam0)))
		{
			func_750(uParam0, 64);
		}
		else
		{
			vVar0 = { func_1681(uParam0) };
			if (!func_399(vVar0))
			{
				func_1682(uParam0, vVar0);
			}
		}
		return false;
	}
	fVar3 = func_1683(Global_35, func_1680(uParam0), 1);
	if (func_787(uParam0, 128) || func_787(uParam0, 256))
	{
		if ((fVar3 >= func_1684(uParam0) && !bParam2) || !_does_anim_scene_exist(uParam0->f_804))
		{
			if (uParam0->f_889)
			{
				func_1685();
				uParam0->f_889 = 0;
			}
			func_1686(uParam0);
			if (_does_anim_scene_exist(uParam0->f_804))
			{
				_delete_anim_scene(uParam0->f_804);
			}
			func_1687(uParam0);
			func_1317(uParam0, 128, 1);
			func_1317(uParam0, 256, 1);
			func_1317(uParam0, 4096, 1);
			func_1317(uParam0, 32768, 1);
			func_1317(uParam0, 16777216, 1);
		}
	}
	else if (fVar3 <= func_1289(uParam0) || bParam2)
	{
		if (!func_787(uParam0, 128))
		{
			if (!_does_anim_scene_exist(uParam0->f_804))
			{
				if (func_1289(uParam0) >= func_1684(uParam0))
				{
				}
				Var4 = { func_1688(uParam0) };
				if (is_string_null_or_empty(&Var4))
				{
					func_1689(uParam0);
				}
				Var4 = { func_1688(uParam0) };
				iVar12 = 256;
				if (!func_787(uParam0, 1))
				{
					iVar12 |= 2048;
				}
				uParam0->f_804 = _create_anim_scene(&(uParam0->f_800), iVar12, &Var4, false, true);
				func_1690(uParam0, 0, 0, 0, 0);
				func_750(uParam0, 128);
			}
		}
	}
	if (func_787(uParam0, 128))
	{
		if (func_787(uParam0, 256) && !func_787(uParam0, 4194304))
		{
			return true;
		}
		func_1691(uParam0);
		if (!uParam0->f_889)
		{
			if (func_1692())
			{
				func_479(4096);
				uParam0->f_889 = 1;
			}
		}
		if (_is_anim_scene_loaded(uParam0->f_804, true, false))
		{
			bVar13 = true;
			Var15 = { func_1693(uParam0) };
			iVar14 = 0;
			while (iVar14 < 4)
			{
				if (!is_string_null_or_empty(uParam0->f_822[iVar14]))
				{
					if (!are_strings_equal(uParam0->f_822[iVar14], &Var15))
					{
						if (!uParam0->f_822[iVar14]->f_8)
						{
							uParam0->f_822[iVar14]->f_8 = 1;
							_0xdf7b5144e25cd3fe(uParam0->f_804, uParam0->f_822[iVar14]);
							bVar13 = false;
						}
						else if (!_0x23e33cb9f4a3f547(uParam0->f_804, uParam0->f_822[iVar14]))
						{
							bVar13 = false;
						}
					}
				}
				iVar14++;
			}
			if (!func_787(uParam0, 8388608))
			{
				if (_0xa9016536015de29d(uParam0->f_804, &Var15))
				{
					if (!func_787(uParam0, 16777216))
					{
						if ((!_0x0df57f86fe71dbe5(uParam0->f_804, &Var15) && !_0x23e33cb9f4a3f547(uParam0->f_804, &Var15)) && !_0x1f0e401031e20146(uParam0->f_804, &Var15))
						{
							_0xdf7b5144e25cd3fe(uParam0->f_804, &Var15);
						}
						func_750(uParam0, 16777216);
					}
					if (!_0x23e33cb9f4a3f547(uParam0->f_804, &Var15))
					{
						bVar13 = false;
					}
				}
			}
			if (!bVar13)
			{
				return false;
			}
			func_750(uParam0, 256);
			func_1317(uParam0, 4194304, 1);
			return true;
		}
	}
	return false;
}

void func_1291(char* sParam0, vector3 vParam1, vector3 vParam4, bool bParam7, bool bParam8)
{
	Var0.f_6 = -1082130432;
	Var0.f_9 = -1082130432;
	Var0.f_30 = sParam0;
	task_move_network_advanced_by_name_with_init_params(Global_35, func_1150(bParam7, func_446(104), func_446(105)), &Var0, vParam1, vParam4, 2, 0, 0, 0, 131200, 0);
	if (bParam8)
	{
		_0x898586729db5221d(Global_35);
		_0x2208438012482a1a(Global_35, true, false);
	}
}

void func_1292(bool bParam0)
{
	iVar0 = func_1694(bParam0, 103, 104);
	if (!does_entity_exist(&(iLocal_666[iVar0])))
	{
		func_1220(iVar0, 1);
	}
	if (!is_entity_attached(&(iLocal_666[iVar0])))
	{
		attach_entity_to_entity(&(iLocal_666[iVar0]), Global_35, get_ped_bone_index(Global_35, 37709), func_1234(0), func_1234(0), false, false, false, false, 2, true, false, false);
	}
}

bool func_1293()
{
	func_1664();
	if (!func_164())
	{
		func_1248(0, 0);
	}
	if (func_164())
	{
		func_1665(0);
	}
	if (func_1249())
	{
		func_1666(iVar896);
		func_1667(iVar896, 85, 86, 0);
	}
	if (func_1668(iVar896))
	{
		func_27(vLocal_614[1], 0);
		if (func_871(vLocal_614[1]) >= 0.04f)
		{
			func_558(vLocal_614[1]);
			func_1665(1);
			return true;
		}
	}
	return false;
}

bool func_1294()
{
	if (!func_166(42))
	{
		if (has_anim_event_fired(Global_35, 732337703))
		{
			func_439(42);
		}
	}
	if (!func_166(45))
	{
		if (has_anim_event_fired(Global_35, -201440390))
		{
			func_439(45);
		}
	}
	if (func_166(42) || func_166(45))
	{
		if (func_1249())
		{
			func_168(42);
			func_168(45);
			return true;
		}
	}
	return false;
}

void func_1295(int iParam0)
{
	if (does_cam_exist(&(iLocal_829[iParam0])))
	{
		return;
	}
	func_1661(iParam0);
}

void func_1296(var uParam0, int iParam1, int iParam2)
{
	if (func_82(32768))
	{
		return;
	}
	func_1695(&((*Global_1835011)[uParam0->f_607]->f_22), iParam1, iParam2);
}

void func_1297(var uParam0, int iParam1)
{
	iVar0 = func_727(func_12(uParam0->f_607));
	if (func_728(iVar0))
	{
		func_1696(iVar0, iParam1);
	}
}

void func_1298(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, float fParam5, int iParam6, bool bParam7)
{
	func_1697(iParam0, 0, 0);
	if (func_1698(iParam0))
	{
		door_system_set_open_ratio(iParam0, iParam2, iParam6);
		if (fParam5 > 0f)
		{
			door_system_set_automatic_rate(iParam0, fParam5);
		}
		if (bParam3)
		{
			func_1699(iParam0, iParam2, 1, iParam6);
		}
		else if (bParam1)
		{
			if (bParam4)
			{
				func_1700(iParam0, 1);
			}
			else
			{
				func_1701(iParam0, 1);
			}
		}
		else
		{
			func_1702(iParam0, 1);
		}
		if (bParam7)
		{
			_0x276aaf0f1c7f2494(iParam0, 1);
		}
	}
	else if (func_1703())
	{
	}
	else if (network_is_in_session())
	{
	}
}

void func_1299(int iParam0, int iParam1)
{
	if (Global_1935630->f_12)
	{
		return;
	}
	func_1704(2000);
	Global_16 = 0;
	func_1705();
	set_entity_invincible(Global_35, func_1706(*iParam0, 8));
	if (!func_1706(*iParam0, 1))
	{
		set_player_control(get_player_index(), true, 0, false);
	}
	_0xa0cefcea390aab9b(0);
	set_all_random_peds_flee(player_id(), false);
	set_everyone_ignore_player(player_id(), false);
	if (func_1706(*iParam0, 2) || func_1706(*iParam0, 4))
	{
		_hide_hud_component(-1679307491);
	}
	else
	{
		_display_hud_component(-1679307491);
	}
	if (!func_1706(*iParam0, 16))
	{
		func_235(1);
	}
	if (func_1706(*iParam0, 32))
	{
		func_187(Global_35, -383172193, 0, 1742327865, 0, 1, 0, 0, 1, 0);
		func_1707(-1623728698, 0);
	}
	func_798(&(Global_1946804->f_1497), Global_35, 1, 49217, 1, 1, 1);
	if (Global_1359489->f_16 & 4194304 != 0)
	{
		Global_1359489->f_16 = (Global_1359489->f_16 - Global_1359489->f_16 & 4194304);
	}
	*iParam0 = 0;
}

bool func_1300(int iParam0)
{
	if (-1829635046 == func_1708(81053684))
	{
		if (func_1709(iParam0))
		{
			return true;
		}
	}
	else if (func_1568(-525676072, iParam0))
	{
		if (func_1709(iParam0))
		{
			return true;
		}
	}
	return false;
}

void func_1301(int iParam0)
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

void func_1302(int iParam0)
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

void func_1303()
{
	iVar0 = func_1094(Global_35, 9, 1, 0);
	if (func_441(iVar0))
	{
		return;
	}
	iVar0 = func_1094(Global_35, 7, 1, 0);
	if (func_441(iVar0))
	{
		set_current_ped_weapon(Global_35, iVar0, true, 8, false, false);
	}
	iVar0 = func_1094(Global_35, 0, 1, 0);
	if (func_441(iVar0) && _is_weapon_two_handed(iVar0))
	{
		set_current_ped_weapon(Global_35, iVar0, true, 9, false, false);
		return;
	}
	iVar0 = func_1094(Global_35, 1, 1, 0);
	if (func_441(iVar0) && _is_weapon_two_handed(iVar0))
	{
		set_current_ped_weapon(Global_35, iVar0, true, 9, false, false);
		return;
	}
	iVar0 = func_1094(Global_35, 18, 1, 0);
	if (func_441(iVar0) && _is_weapon_two_handed(iVar0))
	{
		set_current_ped_weapon(Global_35, iVar0, true, 9, false, false);
		return;
	}
	iVar0 = func_1710();
	if (func_441(iVar0))
	{
		if (has_ped_got_weapon(Global_35, iVar0, 0, true))
		{
			func_1711(Global_35, iVar0, 1, 0, 9, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
		}
		else
		{
			set_current_ped_weapon(Global_35, iVar0, true, 9, false, false);
		}
		return;
	}
	iVar0 = func_1712(6291456, 0);
	if (func_441(iVar0))
	{
		if (!has_ped_got_weapon(Global_35, iVar0, 0, true))
		{
			func_1711(Global_35, iVar0, 1, 0, 9, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
		}
		else
		{
			set_current_ped_weapon(Global_35, iVar0, true, 9, false, false);
		}
	}
}

int func_1304()
{
	return Global_1900383->f_393;
}

int func_1305(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (func_1713(*uParam0, 0f, 0f, 0f))
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

void func_1306(int iParam0)
{
	Global_40.f_1095.f_3054.f_1 = iParam0;
}

void func_1307(int iParam0)
{
	Global_40.f_1095.f_3054 = iParam0;
}

void func_1308(vector3 vParam0)
{
	Global_40.f_1095.f_3054.f_77 = { vParam0 };
}

var func_1309()
{
	return &Global_1899515;
}

void func_1310(var uParam0)
{
	Global_40.f_1095.f_3054.f_2 = uParam0;
}

void func_1311(int iParam0)
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

bool func_1312()
{
	return (func_1714() || func_1715());
}

void func_1313(bool bParam0)
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
	func_1716(0f);
	Global_1935436->f_11 = 1;
	if (func_304())
	{
		set_ambient_voice_name(Global_35, "ARTHUR");
	}
	else
	{
		set_ambient_voice_name(Global_35, "JOHN_PLAYER");
	}
	if (animpostfx_is_running("PlayerDrunk01"))
	{
		func_1717();
	}
	if (is_gameplay_cam_shaking())
	{
		stop_gameplay_cam_shaking(false);
	}
}

Vector3 func_1314(var uParam0)
{
	return uParam0->f_865;
}

float func_1315(var uParam0)
{
	return uParam0->f_868;
}

float func_1316(struct<2> Param0, int iParam2, struct<2> Param3, var uParam5, int iParam6)
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

void func_1317(var uParam0, int iParam1, bool bParam2)
{
	uParam0->f_8 = (uParam0->f_8 - (uParam0->f_8 && iParam1));
	if (((iParam1 == 512 && bParam2) && _does_anim_scene_exist(uParam0->f_804)) && _0xef324e9550a394d5(uParam0->f_804))
	{
		_0x8a8208ae92bf87a5(uParam0->f_804);
	}
}

bool func_1318(var uParam0, int iParam1)
{
	return (uParam0->f_11 && iParam1) != 0;
}

bool func_1319(var uParam0, int iParam1)
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

void func_1320(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	iVar2 = func_972(iParam1, 1);
	if (!bParam2 && iVar2 == 1367443060)
	{
		bParam3 = false;
	}
	if (iParam4 != 0)
	{
		if (iVar2 == 1108822547)
		{
			iVar1 = func_1718(iParam4);
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

bool func_1321(int iParam0, int iParam1)
{
	return ((Global_1946804->f_57[func_472(iParam0, 1)])->f_10 && iParam1) != 0;
}

bool func_1322(int iParam0, int iParam1)
{
	return (Global_1946804->f_57[iParam0]->f_9 && iParam1) != 0;
}

void func_1323(int iParam0, bool bParam1, bool bParam2)
{
	iVar0 = 10;
	if (func_1321(1108822547, 6))
	{
		if (bParam2)
		{
			func_1320(iParam0, iVar0, func_20() != -1, 0, 0);
			func_1324(1108822547, 1, 6);
		}
		else
		{
			return;
		}
	}
	else
	{
		_0xbc6df00d7a4a6819(iParam0, Global_1946804->f_2776.f_1, &(Global_1946804->f_2776.f_3[0]), &(Global_1946804->f_2776.f_3[1]), &(Global_1946804->f_2776.f_3[2]), Global_1946804->f_2776.f_8, Global_1946804->f_2776.f_9, Global_1946804->f_2776.f_10, Global_1946804->f_2776.f_11);
		func_981(1108822547, 1, 6);
	}
	Global_1946804->f_857++;
	if (!bParam1)
	{
		return;
	}
	_update_ped_variation(iParam0, false, true, true, true, false);
}

void func_1324(int iParam0, int iParam1, int iParam2)
{
	(Global_1946804->f_57[func_472(iParam0, 1)])->f_10 = ((Global_1946804->f_57[func_472(iParam0, 1)])->f_10 || iParam1);
}

bool func_1325(var uParam0)
{
	if (func_1719(&(uParam0->f_29), 62))
	{
		switch (func_1720())
		{
			case 1:
				if (!func_1719(&(uParam0->f_29), 6))
				{
					return false;
				}
				break;
			case 2:
				if (!func_1719(&(uParam0->f_29), 8))
				{
					return false;
				}
				break;
			case 4:
				if (!func_1719(&(uParam0->f_29), 16))
				{
					return false;
				}
				break;
			case 8:
				if (!func_1719(&(uParam0->f_29), 32))
				{
					if (func_1719(&(uParam0->f_29), 2))
					{
						if (func_698(func_285()) < 5)
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

int func_1326(var uParam0, int iParam1, int iParam2)
{
	iVar0 = 0;
	Var4.f_9 = -1591664384;
	bVar18 = func_1721(iParam1, 128);
	Var23.f_9 = -1591664384;
	if (func_1128("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_1129(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_441(Var4.f_4))
			{
			}
			else if (!_0x705be297eebdb95d(Var4.f_4))
			{
			}
			else if (iParam2 != 0 && Var4.f_4 == iParam2)
			{
			}
			else if ((!func_1721(iParam1, 512) && func_1473(Var4.f_4, &uVar19, &Var23, 1728382685)) && !Var23.f_21)
			{
			}
			else if (!bVar18 || _0xf29a186ed428b552(Global_35, Var4.f_4))
			{
				if (((_is_weapon_one_handed(Var4.f_4) && (!_is_weapon_shotgun(Var4.f_4) || func_1721(iParam1, 32))) && (!_is_weapon_pistol(Var4.f_4) || !func_1721(iParam1, 16777216))) && (!_is_weapon_revolver(Var4.f_4) || !func_1721(iParam1, 33554432)))
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
		func_1130(iVar1);
	}
	if (func_441(iVar0))
	{
	}
	else if (!func_1721(iParam1, 512))
	{
		iParam1 |= 512;
		return func_1326(uParam0, iParam1, iParam2);
	}
	else if (func_1721(iParam1, 256))
	{
		iVar0 = -1569615261;
	}
	return iVar0;
}

void func_1327(int iParam0)
{
	_0x51345ae20f22c261(player_id(), to_float(iParam0 * 14), 0, 0, 0);
}

Vector3 func_1328(int iParam0, int iParam1)
{
	return func_1722(iParam0, iParam1);
}

Vector3 func_1329(int iParam0, int iParam1)
{
	return func_1723(iParam0, iParam1);
}

int func_1330(int iParam0)
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

void func_1331(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_1332(var uParam0)
{
	if (!func_851(uParam0->f_1, 1))
	{
		_0x03ddbf2d73799f9e(*uParam0);
		func_1331(&(uParam0->f_1), 1);
	}
}

void func_1333(var uParam0)
{
	if (!func_851(*uParam0, 1))
	{
		request_ptfx_asset();
		func_1331(uParam0, 1);
	}
}

bool func_1334(var uParam0)
{
	if (func_851(uParam0->f_2, 1))
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

char* func_1335(int iParam0)
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

bool func_1336(int iParam0)
{
	return iParam0 != 0;
}

int func_1337(var uParam0, int iParam1)
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

int func_1338(var uParam0, char* sParam1)
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

void func_1339(var uParam0, int iParam1)
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

int func_1340(var uParam0)
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

void func_1341(var uParam0, int iParam1)
{
	uParam0->f_11 = (uParam0->f_11 || iParam1);
}

void func_1342(var uParam0, int iParam1)
{
	uParam0->f_11 = (uParam0->f_11 - (uParam0->f_11 && iParam1));
}

bool func_1343(var uParam0, int iParam1)
{
	uParam0->f_2495.f_2 = iParam1;
	return _datafile_get_data_node_index(&(uParam0->f_2495.f_1), &(uParam0->f_2495));
}

bool func_1344(var uParam0, int iParam1, int iParam2, char[4] cParam3, int iParam4, int iParam5)
{
	if (iParam2 == -1)
	{
		if (func_1345(uParam0, 2, iParam4))
		{
			*iParam5 = *iParam4;
		}
		if (func_1345(uParam0, 6, &(cParam3->f_11)))
		{
		}
		if (func_1345(uParam0, 9, &(cParam3->f_13)))
		{
		}
		if (func_1345(uParam0, 5, iParam4))
		{
			cParam3->f_9 = *iParam4;
		}
		return true;
	}
	if (func_1345(uParam0, 2, iParam4))
	{
		*iParam5 = *iParam4;
	}
	if (func_1345(uParam0, 6, &(cParam3->f_11)))
	{
	}
	if (func_1345(uParam0, 5, iParam4))
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
			if (func_1345(uParam0, 9, &(cParam3->f_13)))
			{
			}
			return true;
		}
		return false;
	}
	if (func_1345(uParam0, 9, &(cParam3->f_13)))
	{
	}
	return (iParam2 >= cParam3->f_11 && iParam2 <= cParam3->f_13);
}

bool func_1345(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2495.f_2 = iParam1;
	return _datafile_get_int(iParam2, &(uParam0->f_2495));
}

bool func_1346(var uParam0, int iParam1, char[4] cParam2)
{
	uParam0->f_2495.f_2 = iParam1;
	return _datafile_get_string(cParam2, &(uParam0->f_2495));
}

bool func_1347(var uParam0, char* sParam1, int iParam2)
{
	if (iParam2 == 0)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < iParam2)
	{
		if (((func_218((*uParam0)[iVar0], 1048576) && are_strings_equal((*uParam0)[iVar0], sParam1)) && (*uParam0)[iVar0]->f_9 == sParam1->f_9) && (*uParam0)[iVar0]->f_10 == sParam1->f_10)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_1348(char* sParam0)
{
	if (!is_audio_scene_active(sParam0))
	{
		start_audio_scene(sParam0);
	}
	func_502(sParam0, 1);
}

bool func_1349(var uParam0)
{
	if (func_851(uParam0->f_1, 2))
	{
		return true;
	}
	if (!func_851(uParam0->f_1, 1))
	{
		func_821(uParam0);
	}
	if (has_model_loaded(*uParam0))
	{
		func_1331(&(uParam0->f_1), 2);
		return true;
	}
	return false;
}

bool func_1350(var uParam0)
{
	if (func_851(uParam0->f_3, 2))
	{
		return true;
	}
	if (!func_851(uParam0->f_3, 1))
	{
		func_823(uParam0);
	}
	switch (uParam0->f_1)
	{
		case 2:
			if (get_is_waypoint_recording_loaded(*uParam0))
			{
				func_1331(&(uParam0->f_3), 2);
				return true;
			}
			break;
		case 1:
			if (has_vehicle_recording_been_loaded(uParam0->f_2, *uParam0))
			{
				func_1331(&(uParam0->f_3), 2);
				return true;
			}
			break;
	}
	return false;
}

bool func_1351(var uParam0)
{
	if (func_851(uParam0->f_1, 2))
	{
		return true;
	}
	if (!func_851(uParam0->f_1, 1))
	{
		func_825(uParam0);
	}
	if (has_anim_dict_loaded(*uParam0))
	{
		func_1331(&(uParam0->f_1), 2);
		return true;
	}
	return false;
}

bool func_1352(var uParam0, int iParam1)
{
	if (func_851(uParam0->f_1, 2))
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
	if (!func_851(uParam0->f_1, 1))
	{
		func_832(uParam0, iParam1);
	}
	if (_0x23e33cb9f4a3f547(iParam1, *uParam0))
	{
		func_1331(&(uParam0->f_1), 2);
		return true;
	}
	return false;
}

bool func_1353(var uParam0)
{
	if (func_851(uParam0->f_2, 2))
	{
		return true;
	}
	if (!func_851(uParam0->f_2, 1))
	{
		func_834(uParam0);
	}
	if (_has_propset_loaded(*uParam0))
	{
		func_1331(&(uParam0->f_2), 2);
		return true;
	}
	return false;
}

bool func_1354(var uParam0)
{
	if (func_851(uParam0->f_3, 2))
	{
		return true;
	}
	if (!func_851(uParam0->f_3, 1))
	{
		func_836(uParam0);
	}
	if (_0xff07cf465f48b830(*uParam0))
	{
		func_1331(&(uParam0->f_3), 2);
		return true;
	}
	return false;
}

bool func_1355(var uParam0)
{
	if (func_851(uParam0->f_1, 2))
	{
		return true;
	}
	if (!func_851(uParam0->f_1, 1))
	{
		func_838(uParam0);
	}
	if (request_script_audio_bank(*uParam0))
	{
		func_1331(&(uParam0->f_1), 2);
		return true;
	}
	return false;
}

bool func_1356(var uParam0)
{
	if (func_851(uParam0->f_1, 2))
	{
		return true;
	}
	if (!func_851(uParam0->f_1, 1))
	{
		func_840(uParam0);
	}
	if (_is_imap_active(*uParam0))
	{
		func_1331(&(uParam0->f_1), 2);
		return true;
	}
	return false;
}

bool func_1357(var uParam0)
{
	if (func_851(uParam0->f_2, 2))
	{
		return true;
	}
	if (!func_851(uParam0->f_2, 1))
	{
		func_842(uParam0);
	}
	if (_0xe368e8422c860ba7(*uParam0, uParam0->f_1, -2))
	{
		func_1331(&(uParam0->f_2), 2);
		return true;
	}
	return false;
}

bool func_1358(var uParam0)
{
	if (func_851(uParam0->f_1, 2))
	{
		return true;
	}
	if (!func_851(uParam0->f_1, 1))
	{
		func_844(uParam0);
	}
	if (_0x2c04d89a0fb4e244(*uParam0))
	{
		func_1331(&(uParam0->f_1), 2);
		return true;
	}
	return false;
}

int func_1359(int iParam0)
{
	if (func_521(iParam0))
	{
		return Global_1360165[iParam0];
	}
	return 0;
}

int func_1360(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, float fParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, int iParam17, bool bParam18, bool bParam19, bool bParam20, bool bParam21, bool bParam22, bool bParam23, bool bParam24)
{
	if (!func_521(iParam0))
	{
		return 0;
	}
	vVar0.x = iParam3;
	vVar0.f_1 = iParam4;
	vVar0.f_2 = iParam5;
	if (((Global_1572864->f_13 || Global_1572864->f_14) || Global_1572864->f_8 != 0) || Global_1391438->f_5 & 8 != 0)
	{
		bVar3 = true;
	}
	switch ((*Global_1360165)[iParam0]->f_11)
	{
		case 0:
			if (func_1015(iParam0, 2, 1))
			{
				func_1012(iParam0, 2, 1);
			}
			if (func_710(iParam0, 16, 1))
			{
				if (*Global_1360165)[iParam0]->f_129 != get_id_of_this_thread()
				{
					if (bParam14)
					{
						func_1010(iParam0, 29, 1);
						return 0;
					}
					if (is_thread_active((*Global_1360165)[iParam0]->f_129, false))
					{
					}
					else
					{
						func_527(iParam0, 0, 0, 1, -1082130432, 1, 1, 0, 0, 0, 0);
					}
					return 0;
				}
				else if (func_1013(Global_1360165[iParam0], 0))
				{
					return Global_1360165[iParam0];
				}
			}
			if (func_1013(Global_1360165[iParam0], 0))
			{
				if (is_scripted_speech_playing(Global_1360165[iParam0]))
				{
					return 0;
				}
				if (is_ped_ragdoll(Global_1360165[iParam0]))
				{
					if (bParam1)
					{
						func_1724(iParam0, 1, "Stealing, but companion is a ragdoll");
					}
					else
					{
						return 0;
					}
				}
				func_1010(iParam0, 44, 1);
				(*Global_1360165)[iParam0]->f_1156 = get_id_of_this_thread();
				func_1725(iParam0, 2);
				return 0;
			}
			else if (bParam1)
			{
				func_1010(iParam0, 44, 1);
				(*Global_1360165)[iParam0]->f_1156 = get_id_of_this_thread();
				func_1725(iParam0, 1);
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
			if (!func_1015(iParam0, 44, 0))
			{
				func_1010(iParam0, 44, 0);
			}
			if (func_1726(iParam0, vVar0, iParam13, 0, 1, iParam17, bParam20, -1, 1, 0))
			{
				func_1725(iParam0, 2);
			}
			break;
		case 2:
			set_ped_config_flag(Global_1360165[iParam0], 171, true);
			if (!_0x88ad6cc10d8d35b2(Global_1360165[iParam0]))
			{
				set_entity_as_mission_entity(Global_1360165[iParam0], true, true);
			}
			func_1012(iParam0, 18, 1);
			set_entity_visible(Global_1360165[iParam0], true);
			set_ped_relationship_group_hash(Global_1360165[iParam0], 1030835986);
			_0xf74e134f40192884(Global_1360165[iParam0], 0);
			_0x6759bee6762e140b((*Global_1360165)[iParam0]->f_1);
			set_ped_config_flag(Global_1360165[iParam0], 130, false);
			func_1017(iParam0, bParam9, 1, 0);
			if (bParam22)
			{
				func_1727(iParam0, 0, 0, 1);
			}
			func_1012(iParam0, 33, 1);
			func_1012(iParam0, 34, 1);
			func_1012(iParam0, 29, 1);
			if (!func_399(vVar0) && bParam7)
			{
				func_1725(iParam0, 3);
			}
			else if (iParam13 != 0)
			{
				func_1725(iParam0, 4);
			}
			else
			{
				func_1725(iParam0, 5);
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
						func_1724(iParam0, 1, "Teleporting a stolen companion using a scenario.");
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
				func_862(Global_1360165[iParam0], vVar0, fParam6, 2, 1073741824);
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
				func_1725(iParam0, 4);
			}
			else
			{
				func_1725(iParam0, 5);
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
				if (func_1728(iParam0, iParam13))
				{
					if (_0xa0bc8faed8cfeb3c(Global_1360165[iParam0]))
					{
						func_1729(iParam0, iParam13, 0);
						func_1730(iParam0, Global_1360165[iParam0], iParam13, 1);
						if (func_1015(iParam0, 25, 0))
						{
							func_1012(iParam0, 25, 0);
						}
						func_1010(iParam0, 66, 0);
						func_1725(iParam0, 5);
						(*Global_1360165)[iParam0]->f_63 = iParam13;
					}
					else
					{
						return 0;
					}
				}
				else
				{
					func_1725(iParam0, 5);
				}
				func_1010(iParam0, 28, 1);
			}
			else
			{
				func_1725(iParam0, 5);
			}
			break;
		case 5:
			if (_0xa0bc8faed8cfeb3c(Global_1360165[iParam0]))
			{
				func_1725(iParam0, 6);
			}
			break;
		case 6:
			if (func_1013(Global_1360165[iParam0], 0))
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
					func_1731(iParam0);
				}
				if (bParam21)
				{
					clear_ped_secondary_task(Global_1360165[iParam0]);
					func_1732(Global_1360165[iParam0], 1);
				}
			}
			func_1725(iParam0, 7);
		case 7:
			func_1017(iParam0, bParam9, bParam15, 0);
			func_1007(iParam0, 4, bParam11);
			func_1011(iParam0);
			if (bParam20)
			{
				if (func_1733(Global_1360165[iParam0]))
				{
				}
			}
			func_1734(iParam0, Global_1360165[iParam0]);
			if (!bParam23 && !get_ped_config_flag(Global_1360165[iParam0], 503, true))
			{
				set_ped_config_flag(Global_1360165[iParam0], 503, true);
			}
			Global_40.f_4942[iParam0]->f_4 = Global_40.f_4942[iParam0]->f_3;
			func_1725(iParam0, 0);
			func_711(iParam0, 16, 1);
			func_1012(iParam0, 44, 1);
			(*Global_1360165)[iParam0]->f_1156 = 0;
			(*Global_1360165)[iParam0]->f_129 = get_id_of_this_thread();
			return Global_1360165[iParam0];
	}
	return 0;
}

void func_1361(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	func_1735(iParam1, bParam3, bParam4, bParam6);
	if (!func_120(uParam0, 512))
	{
		if (func_120(uParam0, 4) && bParam4)
		{
			vVar0 = { get_offset_from_entity_in_world_coords(Global_35, 5f, 0f, 0f) };
			func_1736(iParam1, vVar0);
		}
	}
	else
	{
		Stack.Push(uParam0);
		Call_Loc(uParam0->f_10781);
	}
	func_1737(uParam0, iParam1, iParam2, func_324(iParam2, 0));
	func_1738(uParam0, iParam1, 512);
	if (bParam5)
	{
		func_1738(uParam0, iParam1, 128);
	}
	else
	{
		func_1739(uParam0, iParam1, 128);
	}
	switch (iParam2)
	{
		case 1:
		case default:
	}
}

void func_1362(int iParam0)
{
	if (!func_521(iParam0))
	{
		return;
	}
	iVar0 = func_557(iParam0);
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	_0x406ccf555b04fad3(iVar0, 0, 0f);
}

void func_1363(var uParam0, vector3 vParam1, float fParam4)
{
	uParam0->f_5417 = { vParam1 };
	uParam0->f_5420 = fParam4;
}

bool func_1364(int iParam0)
{
	iParam0 = func_266(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (func_1373(iParam0) == 0)
	{
		return false;
	}
	return true;
}

void func_1365(int iParam0)
{
	iParam0 = func_266(iParam0);
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
	func_1740(&Var0);
	func_1741(iParam0, Var0);
	func_1742(&(Global_40.f_1095.f_1[iParam0]->f_15));
	func_1743(&(Global_40.f_1095.f_1[iParam0]->f_298));
	func_1744(&(Global_40.f_1095.f_1[iParam0]->f_356));
	func_1745(&(Global_40.f_1095.f_1[iParam0]->f_372));
	iVar2 = 0;
	while (iVar2 < 2)
	{
		func_1746(iVar2, Global_40.f_1095.f_1[iParam0]->f_398[iVar2]);
		iVar2++;
	}
	iVar3 = 0;
	while (iVar3 < 3)
	{
		func_1747(iVar3, Global_40.f_1095.f_1[iParam0]->f_407[iVar3]);
		iVar3++;
	}
	func_1748(&(Global_40.f_1095.f_1[iParam0]->f_420));
	func_1749(&(Global_40.f_1095.f_1[iParam0]->f_422));
	func_1750(&(Global_40.f_1095.f_1[iParam0]->f_425));
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

int func_1366(vector3 vParam0)
{
	return func_1751(_get_map_zone_at_coords(vParam0, 10));
}

bool func_1367(int iParam0)
{
	iParam0 = func_266(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (!func_390(iParam0))
	{
		return false;
	}
	iVar0 = func_216(iParam0);
	if (is_entity_dead(iVar0) || is_ped_injured(iVar0))
	{
		return true;
	}
	return false;
}

void func_1368(int iParam0, int iParam1)
{
	iVar0 = get_player_index();
	if (is_player_dead(iVar0))
	{
	}
	func_530(iParam0);
	func_530(iParam0);
	func_1752(iParam0, iParam1);
	func_1753(iParam0, iParam1);
	func_1754(iParam0, iParam1);
	iVar1 = func_216(iParam0);
	if (does_entity_exist(iVar1))
	{
		if (iParam0 == 0 || iParam0 == 1)
		{
			func_1755(iVar1);
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
	iVar3 = func_216(iParam1);
	if (does_entity_exist(iVar3))
	{
		if (iParam1 == 0 || iParam1 == 1)
		{
			func_1755(iVar3);
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
	func_268();
}

bool func_1369()
{
	iVar0 = func_1304();
	if (does_entity_exist(iVar0))
	{
		return true;
	}
	return false;
}

void func_1370()
{
	iVar0 = func_1304();
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	if (!_0x88ad6cc10d8d35b2(iVar0))
	{
		set_entity_as_mission_entity(iVar0, true, true);
	}
	delete_object(&iVar0);
	func_1756(0);
}

int func_1371(int iParam0)
{
	iParam0 = func_266(iParam0);
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

int func_1372(int iParam0)
{
	iParam0 = func_266(iParam0);
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

int func_1373(int iParam0)
{
	iParam0 = func_266(iParam0);
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

void func_1374(int iParam0)
{
	iParam0 = func_266(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_1602(&iVar0, &iVar1, &iVar2);
	func_1603(iParam0, iVar0);
	func_1604(iParam0, iVar1);
	func_1605(iParam0, iVar2);
	func_1757(iParam0, 1);
	func_1758(iParam0, 1);
}

void func_1375(int iParam0)
{
	iParam0 = func_266(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_786(iParam0, 1);
}

void func_1376(int iParam0, vector3 vParam1, var uParam4)
{
	iParam0 = func_266(iParam0);
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

bool func_1377(int iParam0)
{
	iParam0 = func_266(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	return func_1026(iParam0, 1);
}

struct<2> func_1378(int iParam0)
{
	iParam0 = func_266(iParam0);
	if (iParam0 == -1)
	{
		return Var0;
	}
	if (iParam0 >= 7)
	{
		return Var0;
	}
	if (!func_1759(iParam0, &uVar2))
	{
	}
	if (!func_1760(iParam0, &uVar3))
	{
	}
	Var0 = uVar2;
	Var0.f_1 = uVar3;
	return Var0;
}

struct<6> func_1379()
{
	if (func_1761(-997150586, &uVar6))
	{
		Var0.f_4 = uVar6;
	}
	if (func_1761(-1189569496, &uVar7))
	{
		Var0 = uVar7;
	}
	if (func_1761(325139909, &uVar8))
	{
		Var0.f_2 = uVar8;
	}
	if (func_1761(1310070322, &uVar9))
	{
		Var0.f_5 = uVar9;
	}
	if (func_1761(986998820, &uVar10))
	{
		Var0.f_3 = uVar10;
	}
	if (func_1761(-415648720, &uVar11))
	{
		Var0.f_1 = uVar11;
	}
	return Var0;
}

void func_1380(int iParam0, var uParam1, var uParam2, int iParam3)
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
	func_1762(iParam0);
	func_1763(iParam0, uParam1);
	func_1764(iParam0);
	func_1765(iParam0, uParam2);
	if (iParam3 != 0)
	{
		func_1766(iParam0, iParam3, 0);
	}
	_update_ped_variation(iParam0, false, true, true, true, true);
}

void func_1381(int iParam0)
{
	iParam0 = func_266(iParam0);
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

bool func_1382(int iParam0)
{
	if (iParam0 == 0)
	{
		return true;
	}
	request_model(iParam0, false);
	return has_model_loaded(iParam0);
}

int func_1383(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)
{
	iVar0 = create_ped(iParam0, vParam1, fParam4, bParam6, bParam7, false, false);
	if (bParam5)
	{
		_set_random_outfit_variation(iVar0, true);
	}
	return iVar0;
}

int func_1384(var uParam0)
{
	return uParam0;
}

bool func_1385(int iParam0)
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

int func_1386(var uParam0)
{
	return *uParam0;
}

bool func_1387(int iParam0, var uParam1, int iParam2)
{
	return false;
	if (iParam0 <= -1 || iParam0 > 80)
	{
		return false;
	}
	*uParam1 = { func_1767(iParam0) };
	if (func_1713(*uParam1, 0f, 0f, 0f))
	{
		return false;
	}
	if (!func_863(iParam0, iParam2, &iVar0))
	{
		return false;
	}
	if (func_1768(*iParam2, iVar0))
	{
		return false;
	}
	return true;
}

void func_1388(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_1389(var uParam0)
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

bool func_1390(var uParam0)
{
	switch (func_1769(uParam0))
	{
		case 0:
			uParam0->f_24 = func_285();
			iVar4 = func_285();
			func_1181(&iVar4, uParam0->f_6);
			func_1182(&iVar4, 0);
			func_1183(&iVar4, 0);
			if (func_939(uParam0->f_24, iVar4, 1))
			{
				func_334(&iVar4, 0, 0, 0, 1, 0, 0, 0);
			}
			func_1770(uParam0->f_24, iVar4, &iVar0, &iVar1, &iVar2, &uVar3, &uVar3, &uVar3);
			uParam0->f_7 = ((iVar0 + iVar1 * 60) + iVar2 * 3600);
			func_1771(uParam0, 1);
			break;
		case 1:
			fVar5 = func_1772(uParam0, -1082130432);
			if (fVar5 >= 0.5f)
			{
				func_1771(uParam0, 2);
			}
			break;
		case 2:
			fVar5 = func_1772(uParam0, -1082130432);
			if (fVar5 >= 0.99f || fVar5 == -1f)
			{
				iVar4 = uParam0->f_24;
				func_334(&iVar4, uParam0->f_7, 0, 0, 0, 0, 0, 0);
				set_clock_time(func_698(iVar4), func_699(iVar4), func_700(iVar4));
				func_1773(get_clock_hours());
				func_1774(1, 0, 0);
				return true;
			}
			break;
	}
	return false;
}

void func_1391(vector3 vParam0, float fParam3, bool bParam4)
{
	iVar0 = 16384;
	if (bParam4)
	{
		iVar0 |= 524288;
	}
	clear_area(vParam0, fParam3, iVar0);
}

var func_1392(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

struct<4> func_1393(var uParam0, int iParam1)
{
	return uParam0->f_1[func_132(iParam1)]->f_13;
}

int func_1394(var uParam0)
{
	return *uParam0;
}

bool func_1395(var uParam0, struct<4> Param1, int iParam5, bool bParam6)
{
	if (func_1396(uParam0, 32768))
	{
		return true;
	}
	if (func_1775(uParam0) >= 3)
	{
		uParam0->f_2286 = func_923(get_player_index(), 0, 0, 1);
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
		func_1776(uParam0);
	}
	if (func_1775(uParam0) < 10)
	{
		if (func_1775(uParam0) == 3)
		{
			func_1777(uParam0, iParam5, bParam6);
		}
		else if (func_1775(uParam0) > 3)
		{
			if (func_1394(uParam0) == 0)
			{
				if (!func_1396(uParam0, 524288))
				{
					func_1778(uParam0);
				}
				else if (is_screen_faded_out())
				{
					func_1779(uParam0, 4);
					func_1780(uParam0, 10);
					func_1781(uParam0, iParam5);
					return true;
				}
			}
			if (!func_1396(uParam0, 67108864) && !Global_1935630->f_12)
			{
				set_ped_reset_flag(Global_35, 25, true);
			}
			if (!func_1782(uParam0->f_1406[uParam0->f_2074], 16))
			{
				disable_control_action(0, -1404316431, false);
				disable_control_action(0, -1304887797, false);
			}
			_0x8910c24b7e0046ec();
			func_1423(0);
			func_1783();
			disable_control_action(0, -1722177808, false);
			disable_control_action(0, 1644850270, false);
			disable_control_action(0, 2139949496, false);
			if (uParam0->f_2074 >= 0)
			{
				if (!func_1782(uParam0->f_1406[uParam0->f_2078], 32768))
				{
					_uiprompt_enable_prompt_type_this_frame(6);
				}
				if (func_1784(uParam0, uParam0->f_2074))
				{
					if (func_1785(uParam0) < 7 && uParam0->f_2078 >= 0)
					{
						func_1786(uParam0, uParam0->f_1406[uParam0->f_2078]->f_27, uParam0->f_1735[uParam0->f_2078]->f_1, 1065353216);
					}
				}
				else if (uParam0->f_2078 >= 0)
				{
					func_1786(uParam0, uParam0->f_1406[uParam0->f_2078]->f_27, uParam0->f_1735[uParam0->f_2078]->f_1, 1065353216);
				}
				func_1787(uParam0);
			}
		}
	}
	bVar0 = func_1788(uParam0, iParam5, bParam6);
	bVar1 = _0xa24c1d341c6e0d53(1, 0, 0);
	if (bVar0)
	{
		if ((!func_1396(uParam0, 268435456) && bVar1) && !func_1396(uParam0, 262144))
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
				func_749(uParam0, 131072);
				func_749(uParam0, 268435456);
			}
		}
		if (func_1789(uParam0, 64) || (uParam0->f_2074 >= 0 && !func_1782(uParam0->f_1406[uParam0->f_2074], 524288)))
		{
			if (_0xa2b1c7ef759a63ce() > 0f || func_1394(uParam0) == 0)
			{
				_0xc9caeaeec1256e54(-1679307491);
				_0xe296208c273bd7f0(-1, -1, 0, 17, 1, 0);
			}
		}
	}
	if (func_1775(uParam0) == 3 || func_1396(uParam0, 131072))
	{
		func_1790(uParam0);
		if (!func_1396(uParam0, 262144))
		{
			if ((bVar0 && func_1396(uParam0, 65536)) || func_1396(uParam0, 131072))
			{
				func_749(uParam0, 32768);
				func_1779(uParam0, 4);
				func_1780(uParam0, 10);
				uParam0->f_2159 = 1;
				func_1781(uParam0, iParam5);
				return true;
			}
		}
	}
	if (func_1775(uParam0) >= 3)
	{
		func_1791(uParam0, iParam5);
		func_1792(uParam0);
		if (!func_1793(uParam0, 1))
		{
			func_1794(uParam0);
		}
		func_1795(uParam0);
	}
	switch (func_1775(uParam0))
	{
		case 0:
			func_1796(uParam0, Param1, iParam5);
			break;
		case 1:
			func_1797(uParam0);
			break;
		case 2:
			func_1798(uParam0);
			break;
		case 3:
			if (func_1799(uParam0))
			{
				func_1800(2);
				func_1786(uParam0, uParam0->f_1406[uParam0->f_2074]->f_27, uParam0->f_1735[uParam0->f_2074]->f_1, 1065353216);
				func_221(&(uParam0->f_2262));
				func_1779(uParam0, 1);
				func_1801();
				func_1780(uParam0, 5);
			}
			break;
		case 5:
		case 6:
		case 8:
			_0x9f9a829c6751f3c7(get_player_index(), 31, 1);
			if (!func_1396(uParam0, 67108864))
			{
				set_ped_reset_flag(Global_35, 25, true);
			}
			set_ped_reset_flag(Global_35, 264, true);
			set_ped_reset_flag(Global_35, 321, true);
			if (func_1775(uParam0) == 5)
			{
				if (func_1802(uParam0))
				{
					func_1779(uParam0, 2);
					func_1780(uParam0, 6);
				}
			}
			if (func_1775(uParam0) == 6)
			{
				if (func_1803(uParam0))
				{
					func_1779(uParam0, 3);
					func_1780(uParam0, 8);
				}
			}
			if (uParam0->f_2075 >= 0 || func_1804(&(uParam0->f_2262)) >= 15f)
			{
				if (func_1805(uParam0, iParam5))
				{
					if (func_1806(uParam0))
					{
						uParam0->f_2075 = func_1807(uParam0);
						func_221(&(uParam0->f_2262));
						set_player_control(get_player_index(), true, 0, false);
						_display_hud_component(-1679307491);
						clear_ped_tasks(Global_35, 1, 0);
						func_1779(uParam0, 6);
						func_1780(uParam0, 9);
					}
					else
					{
						func_1779(uParam0, 4);
						func_1780(uParam0, 10);
						func_1781(uParam0, iParam5);
						return true;
					}
				}
			}
			break;
		case 9:
			if (func_1805(uParam0, iParam5))
			{
				func_1781(uParam0, iParam5);
				func_1780(uParam0, 10);
				return true;
			}
			break;
		case 10:
			return true;
	}
	return false;
}

bool func_1396(var uParam0, int iParam1)
{
	return (uParam0->f_2054 && iParam1) != 0;
}

void func_1397(var uParam0, int iParam1)
{
	uParam0->f_2054 = (uParam0->f_2054 - (uParam0->f_2054 && iParam1));
}

void func_1398(var uParam0, var uParam1)
{
	if (func_1396(uParam1, 32768))
	{
		Var0 = { func_1693(uParam0) };
		func_1808(uParam0, &Var0);
		if (func_1396(uParam1, 131072))
		{
			func_750(uParam0, 268435456);
			if (func_399(uParam0->f_865))
			{
				uParam0->f_865 = { func_1809(uParam1, uParam1->f_2074) };
			}
			if (func_399(uParam0->f_862))
			{
				uParam0->f_862 = { func_1809(uParam1, uParam1->f_2074) };
				get_ground_z_for_3d_coord(uParam0->f_862, &(uParam0->f_862.f_2), false);
				uParam0->f_862.f_2 = (uParam0->f_862.f_2 + 0.5f);
			}
		}
		if (func_1396(uParam1, 268435456))
		{
			func_1810(&(uParam0->f_860), 16384);
		}
	}
	else if (func_1396(uParam1, 524288))
	{
		func_750(uParam0, 67108864);
		func_1397(uParam1, 524288);
	}
	if (func_1789(uParam1, 128))
	{
		func_750(uParam0, 32);
	}
	if (uParam1->f_2293 != 0)
	{
		uParam0->f_872 = uParam1->f_2293;
		if (uParam1->f_2074 >= 0 && func_1782(uParam1->f_1406[uParam1->f_2074], 256))
		{
			func_1810(&(uParam0->f_860), 524288);
		}
	}
	if (*uParam1 == 0 && _0x927b810e43e99932(&(uParam1->f_2082)))
	{
		_copy_memory(&(uParam0->f_873), &(uParam1->f_2082), 16);
	}
}

void func_1399(var uParam0)
{
	if (func_787(&(uParam0->f_7375), 128) || func_787(&(uParam0->f_7375), 256))
	{
		if (_does_anim_scene_exist(uParam0->f_7375.f_804))
		{
			_delete_anim_scene(uParam0->f_7375.f_804);
		}
		func_1687(&(uParam0->f_7375));
		func_1317(&(uParam0->f_7375), 128, 1);
		func_1317(&(uParam0->f_7375), 256, 1);
		func_1317(&(uParam0->f_7375), 4096, 1);
	}
}

void func_1400(var uParam0)
{
	func_1811(&(uParam0->f_7375));
}

bool func_1401(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	func_1679(uParam4, &uParam0);
	if (func_787(uParam4, 2) && !func_787(uParam4, 67108864))
	{
		disable_control_action(0, -842734359, false);
	}
	if (func_1812(uParam4) != 1)
	{
		func_1813(uParam4);
	}
	_0xf45e46deecf7df6e(4096, 0, 0, -1, -1);
	set_ped_reset_flag(Global_35, 134, true);
	_uiprompt_enable_prompt_type_this_frame(6);
	_0x9f9a829c6751f3c7(get_player_index(), 31, 1);
	switch (func_1812(uParam4))
	{
		case 1:
			if (_does_anim_scene_exist(uParam4->f_804) && _is_anim_scene_loaded(uParam4->f_804, true, false))
			{
				if (!_is_anim_scene_started(uParam4->f_804, false))
				{
					func_1814(uParam4, &uParam0, uParam5);
				}
				else if (_0xef324e9550a394d5(uParam4->f_804))
				{
					func_1815(uParam4, 4);
					return false;
				}
				else
				{
					if (func_1816(uParam4, 2))
					{
						Stack.Push(uParam4);
						Call_Loc(uParam4->f_797);
					}
					func_1817(uParam5);
				}
				func_1815(uParam4, 3);
			}
			else if (!_does_anim_scene_exist(uParam4->f_804))
			{
				if (!is_screen_fading_out())
				{
					do_screen_fade_out(0);
				}
				if (func_121(uParam5, func_33(uParam5), 262144))
				{
					if (!func_787(uParam4, 2097152))
					{
						func_1689(uParam4);
					}
				}
				else if (!is_string_null_or_empty(&(uParam4->f_806)) && (!func_8(uParam5, 8) || func_787(uParam4, 134217728)))
				{
				}
				else
				{
					func_1818(uParam4);
				}
				func_221(&(uParam4->f_1));
				func_1815(uParam4, 2);
			}
			else
			{
				if (!is_screen_fading_out() && !is_screen_faded_out())
				{
					do_screen_fade_out(0);
				}
				func_1691(uParam4);
				if (!func_26(&(uParam4->f_1)))
				{
					func_27(&(uParam4->f_1), 0);
				}
				else if (func_871(&(uParam4->f_1)) >= 60f)
				{
					if (_does_anim_scene_exist(uParam4->f_804))
					{
						_delete_anim_scene(uParam4->f_804);
					}
					func_1815(uParam4, 4);
				}
			}
			break;
		case 2:
			if (!_does_anim_scene_exist(uParam4->f_804) || !_is_anim_scene_loaded(uParam4->f_804, true, false))
			{
				if (func_1290(uParam4, &uParam0, 1, 1))
				{
					if (!_is_anim_scene_loaded(uParam4->f_804, true, false))
					{
						func_1815(uParam4, 4);
					}
					else if (!func_399(func_1680(uParam4)) && !func_1819(Global_35, func_1680(uParam4), 100f, 1, 1))
					{
						func_1302(1);
						start_player_teleport(get_player_index(), func_1680(uParam4), 0f, true, true, true, false);
					}
				}
				else if (func_871(&(uParam4->f_1)) >= 60f)
				{
					if (_does_anim_scene_exist(uParam4->f_804))
					{
						_delete_anim_scene(uParam4->f_804);
					}
					func_1815(uParam4, 4);
				}
			}
			else if (!is_player_teleport_active() || _has_player_teleport_finished(get_player_index()))
			{
				if (func_279(uParam5) != 0 || (func_154(uParam5) == 1 && func_162(uParam5, func_33(uParam5)) >= 3))
				{
					if (!get_is_loading_screen_active())
					{
						_0xa565fac215cbc77d();
						func_16(1, 0);
						func_1814(uParam4, &uParam0, uParam5);
						func_1815(uParam4, 3);
					}
					else
					{
						shutdown_loading_screen();
					}
				}
			}
			else if (func_871(&(uParam4->f_1)) >= 60f)
			{
				if (_does_anim_scene_exist(uParam4->f_804))
				{
					_delete_anim_scene(uParam4->f_804);
				}
				func_1815(uParam4, 4);
			}
			break;
		case 3:
			func_395(uParam4);
			if (func_1816(uParam4, 2))
			{
				Stack.Push(uParam4);
				Call_Loc(uParam4->f_797);
			}
			func_1817(uParam5);
			if ((_does_anim_scene_exist(uParam4->f_804) && _is_anim_scene_started(uParam4->f_804, false)) && (_0xef324e9550a394d5(uParam4->f_804) || func_787(uParam4, 512)))
			{
				if (!func_787(uParam4, 1024) && func_1820(uParam4, 1))
				{
					set_gameplay_cam_relative_heading(0f, 1f);
					set_gameplay_cam_relative_pitch(0f, 1f);
				}
				if (!func_787(uParam4, 512))
				{
					func_221(&(uParam4->f_1));
					func_750(uParam4, 512);
					func_1815(uParam4, 4);
				}
				else if (func_787(uParam4, 524288))
				{
					if (is_screen_faded_in() || is_screen_fading_in())
					{
					}
					do_screen_fade_out(0);
				}
			}
			else
			{
				func_1813(uParam4);
			}
			if (func_787(uParam4, 524288))
			{
				if (IntToFloat(absi((func_1821(uParam4) - func_1822(uParam4)))) <= 2f)
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
				if (func_1823(uParam4, Global_35, 4))
				{
					_0x1b70811d3bf75db9(1, 1);
				}
				if ((is_screen_faded_out() || is_screen_fading_out()) && func_1822(uParam4) > 5000)
				{
					_0x1b70811d3bf75db9(1, 1);
				}
			}
			if (func_1824(uParam4))
			{
				if (!_does_anim_scene_exist(uParam4->f_804))
				{
				}
				func_1825(uParam4);
				return true;
			}
			else
			{
				if (func_787(uParam4, 67108864))
				{
					if (is_screen_faded_out())
					{
						if (!_is_anim_scene_paused(uParam4->f_804) && !_0xef324e9550a394d5(uParam4->f_804))
						{
							_delete_anim_scene_2(uParam4->f_804);
						}
						func_221(&(uParam4->f_1));
						_0x1b70811d3bf75db9(1, 1);
						func_750(uParam4, 512);
						func_1317(uParam4, 67108864, 1);
						func_1815(uParam4, 4);
					}
					else if (!is_screen_fading_out() && !is_screen_faded_out())
					{
						do_screen_fade_out(1000);
					}
				}
				else if ((((!func_787(uParam4, 16384) && !_0xef324e9550a394d5(uParam4->f_804)) && is_screen_faded_out()) && func_1822(uParam4) <= 5000) && func_1822(uParam4) >= 0)
				{
					do_screen_fade_in(1000);
				}
				if (!func_787(uParam4, 536870912) && has_anim_event_fired(Global_35, -1495039362))
				{
					func_1299(&(uParam4->f_861), 0);
					func_750(uParam4, 536870912);
				}
				if (func_1822(uParam4) >= 5000 && func_1822(uParam4) <= (func_1821(uParam4) - 5000))
				{
					func_1826();
				}
			}
			break;
		case 6:
			if (func_1824(uParam4))
			{
				func_1825(uParam4);
				return true;
			}
			break;
		case 4:
			if (func_787(uParam4, 524288))
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
						func_750(uParam4, 1073741824);
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
					if (func_1827(uParam5))
					{
						if (_does_anim_scene_exist(uParam4->f_804) && _is_anim_scene_paused(uParam4->f_804))
						{
							set_anim_scene_paused(uParam4->f_804, false);
						}
						func_1815(uParam4, 3);
					}
					else if (func_871(&(uParam4->f_1)) >= 30f)
					{
						if (_does_anim_scene_exist(uParam4->f_804) && _is_anim_scene_paused(uParam4->f_804))
						{
							set_anim_scene_paused(uParam4->f_804, false);
						}
						func_1815(uParam4, 3);
					}
				}
				if (iVar0 == 0)
				{
					Stack.Push(!func_1816(uParam4, 4));
					Stack.Push(uParam4);
					Call_Loc(uParam4->f_798);
					if (StackVal || StackVal)
					{
						if (_does_anim_scene_exist(uParam4->f_804) && _is_anim_scene_paused(uParam4->f_804))
						{
							set_anim_scene_paused(uParam4->f_804, false);
						}
						func_1815(uParam4, 3);
					}
					else if (func_871(&(uParam4->f_1)) >= 30f)
					{
						if (_does_anim_scene_exist(uParam4->f_804) && _is_anim_scene_paused(uParam4->f_804))
						{
							set_anim_scene_paused(uParam4->f_804, false);
						}
						func_1815(uParam4, 3);
					}
				}
				if (func_1812(uParam4) == 3)
				{
					if (func_787(uParam4, 524288))
					{
						do_screen_fade_out(0);
					}
				}
			}
			break;
		case 5:
			func_1815(uParam4, 4);
			break;
	}
	return false;
}

void func_1402(var uParam0)
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
			if (decor_exist_on(get_indexed_item_in_itemset(iVar0, Global_43616), func_1645()))
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

void func_1403(var uParam0)
{
	func_1689(&(uParam0->f_7375));
}

bool func_1404(int iParam0, bool bParam1)
{
	iVar0 = 1;
	MemCopy(&uVar1, {func_269(iParam0)}, 8);
	StringCopy(&cVar9, _get_label_text_2(&uVar1), 64);
	if (!is_string_null_or_empty(&cVar9))
	{
		if (!func_1828(iParam0))
		{
			iVar0 = 0;
		}
	}
	if (!bParam1)
	{
		MemCopy(&uVar1, {func_270(iParam0)}, 8);
		StringCopy(&cVar9, _get_label_text_2(&uVar1), 64);
		if (!is_string_null_or_empty(&cVar9))
		{
			if (!func_1829(iParam0))
			{
				iVar0 = 0;
			}
		}
	}
	return iVar0;
}

struct<8> func_1405(int iParam0)
{
	MemCopy(&cVar0, {func_269(iParam0)}, 8);
	StringConCat(&cVar0, "_Sounds", 64);
	return cVar0;
}

bool func_1406(int iParam0)
{
	Var0 = { func_1405(iParam0) };
	if (!is_string_null_or_empty(&Var0))
	{
		if (!_0xd9130842d7226045(&Var0, 0))
		{
			return false;
		}
	}
	return true;
}

void func_1407(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 15)
	{
		_datafile_register_query(uParam0->f_2495, iVar0, func_1830(iVar0));
		iVar0++;
	}
}

struct<4> func_1408(int iParam0, int iParam1)
{
	return func_1831(iParam0, iParam1);
}

void func_1409(int iParam0, struct<4> Param1, int iParam5, float fParam6)
{
	func_862(iParam0, Param1, Param1.f_3, iParam5, fParam6);
}

bool func_1410(int iParam0, int iParam1)
{
	return (Global_40.f_4942[iParam0]->f_5 && iParam1) > 0;
}

void func_1411(int iParam0, int iParam1, bool bParam2)
{
	if (!bParam2)
	{
		switch (iParam1)
		{
			case 1:
			case 4096:
			case 16384:
			case 32768:
			case 65536:
			case 131072:
			case 262144:
			case 524288:
			case 1048576:
			case 2097152:
			case 134217728:
			case 1073741824:
				func_1832(iParam0);
				func_1833(iParam0, 0);
				break;
		}
		func_1834(iParam0, iParam1);
		if (func_1835(iParam1, &iVar0))
		{
			if (does_entity_exist(Global_1360165[iParam0]))
			{
				if (func_1836(Global_1360165[iParam0], iVar0))
				{
					_0xa2f8b3b5fedfc100(Global_1360165[iParam0], iVar0);
				}
				_set_ped_body_component(Global_1360165[iParam0], _0x30569f348d126a5a(Global_1360165[iParam0]));
				_update_ped_variation(Global_1360165[iParam0], false, true, true, true, false);
			}
		}
	}
	else
	{
		switch (iParam1)
		{
			case 1:
			case 4096:
			case 16384:
			case 32768:
			case 65536:
			case 131072:
			case 262144:
			case 524288:
			case 1048576:
			case 2097152:
			case 134217728:
			case 1073741824:
				func_1832(iParam0);
				func_1833(iParam0, 1);
				break;
		}
		func_1837(iParam0, iParam1);
		func_1838(iParam0, Global_1360165[iParam0], 1);
	}
}

int func_1412(var uParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, int iParam5, int iParam6, bool bParam7, bool bParam8, int iParam9, int iParam10, int iParam11, float fParam12, bool bParam13, bool bParam14, bool bParam15, bool bParam16, int iParam17)
{
	if (!func_1008(iParam1))
	{
		return 0;
	}
	iVar0 = func_1021(iParam1);
	if ((!does_entity_exist(iVar0) || !func_1013(iVar0, 0)) || (bParam3 && !func_1506(iParam1)))
	{
		if (bParam2)
		{
			if (func_1839(iParam1, 1) != 0)
			{
				iVar0 = func_1840(iParam1, bParam3, bParam8, iParam9, iParam10, iParam11, fParam12, bParam7, bParam15, bParam16, iParam17);
			}
			else
			{
				*uParam0 = 1;
				return 0;
			}
		}
		else
		{
			*uParam0 = 1;
			return 0;
		}
	}
	if (does_entity_exist(iVar0) && func_1013(iVar0, 0))
	{
		*uParam0 = 2;
		(*Global_1360165)[iParam1]->f_70.f_2 = 0;
		func_1841(iParam1, iVar0);
		func_1842(iParam1, bParam13, bParam14, 1);
		return iVar0;
	}
	else
	{
		*uParam0 = 0;
		return 0;
	}
	return 0;
}

bool func_1413(var uParam0)
{
	if (does_entity_exist(*uParam0) && !is_entity_dead(*uParam0))
	{
		if (_is_draft_vehicle(*uParam0))
		{
			if (_0xa19447d83294e29f(*uParam0, &iVar0, &iVar1))
			{
				if (iVar0 == iVar1)
				{
					return true;
				}
			}
		}
	}
	return false;
}

int func_1414(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 2069893421;
		case 1:
			return 1747661667;
		case 2:
			return -875426853;
		case 3:
			return 757105507;
		case 4:
			return -1879729569;
		case 5:
			return 787316203;
		case 6:
			return 2129028479;
		case 7:
			return 1261138928;
		case 8:
			return -1894256235;
		case 9:
			return 1706052688;
		case 10:
			return 1285391378;
		case 11:
			return 693005399;
		case 12:
			return 790678034;
		case 13:
			return 2031132011;
		case 14:
			return -1019271530;
		case 15:
			return 1183803081;
		case 16:
			return 1338756401;
		case 17:
			return 744226541;
		case 18:
			return 530671939;
		case 19:
			return -367868014;
		case 20:
			return -1549775456;
		case 21:
			return -1604265010;
		case 22:
			return -1827447245;
		case 23:
			return -759061492;
		case 24:
			return 1105471824;
		case 25:
			return -2048056274;
		case 26:
			return 1741725206;
		case 27:
			return 1901448492;
		case 28:
			return 911414965;
		case 29:
			return 1062881804;
		case 30:
			return -944178516;
		case 31:
			return 1400887301;
		case 32:
			return 1865339861;
		case 33:
			return 1440632655;
		case 34:
			return -1157194180;
		case 35:
			return -1151085798;
		case 36:
			return -1915486054;
		case 37:
			return -377574959;
		case 38:
			return -102827824;
		case 39:
			return 41932468;
		case 40:
			return 1437199060;
		case 41:
			return 1985273028;
		case 42:
			return -1988984077;
		case 43:
			return 1261539922;
		case 44:
			return -1190908814;
		case 45:
			return 805845691;
		case 46:
			return 214785091;
		case 47:
			return -1169075737;
		case 48:
			return -2073547330;
		case 49:
			return 1472024063;
		case 50:
			return -585098035;
		case 51:
			return -2141145462;
		case 52:
			return -832908671;
		case 53:
			return 1961205920;
		case 54:
			return -2038873145;
		case 55:
			return -1327698122;
		case 56:
			return 992695664;
		case 57:
			return -937655290;
		case 58:
			return -1914604474;
		case 59:
			return 205166155;
		case 60:
			return 1780028424;
		case 61:
			return -835345303;
		case 62:
			return 558731558;
		case 63:
			return 1921351553;
		case 64:
			return -378561682;
		case 65:
			return 1306457250;
		case 66:
			return 1131758526;
		case 67:
			return 358997942;
		case 68:
			return -1976230089;
		case 69:
			return -907971236;
		case 70:
			return 253727941;
		case 71:
			return -1271310569;
		case 72:
			return -1461871483;
		case 73:
			return -1239377811;
		case 74:
			return 1639899405;
		case 75:
			return -1816811601;
		case 76:
			return -2139497371;
		case 77:
			return 978801228;
		case 78:
			return -1309844859;
		case 79:
			return -102545856;
		case 80:
			return -1882615108;
		case 81:
			return 104820669;
		case 82:
			return 72801698;
		case 83:
			return -1533288167;
		case 84:
			return 2041846130;
		case 85:
			return -350556716;
		case 86:
			return -353010695;
		case 87:
			return -692335380;
		case 88:
			return 1504223919;
		case 89:
			return -520556863;
		case 90:
			return 713508039;
		case 91:
			return -82191741;
		case 92:
			return -1221836150;
		case 93:
			return 229544920;
		case 94:
			return 1423490462;
		case 95:
			return 266787856;
		case 96:
			return -863017340;
		case 97:
			return 175025255;
		case 98:
			return -2066076661;
		case 99:
			return 745945503;
		case 100:
			return -596510485;
		case 101:
			return 1995043222;
		case 102:
			return 709801630;
		case 103:
			return 1190538002;
		case 104:
			return -1812870325;
		case 105:
			return 1753192824;
		case 106:
			return -936508922;
		case 107:
			return -1672929718;
		case 108:
			return 1562378696;
		case 109:
			return 7562841;
		case 110:
			return 1250977037;
		case 111:
			return 1139025222;
		case 112:
			return 1128086492;
		case 113:
			return -1948083328;
		case 114:
			return 1993361168;
		case 115:
			return 1314299724;
		case 116:
			return 0;
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

void func_1415(int iParam0, var uParam1)
{
	iVar0 = 0;
	while (iVar0 < 45)
	{
		iVar1 = func_928(iVar0);
		if (func_583(iVar1, 0))
		{
			(*uParam1)[iVar0] = get_ped_ammo_by_type(iParam0, iVar1);
		}
		iVar0++;
	}
}

void func_1416(var uParam0, int iParam1)
{
	if (!func_884(vLocal_1100[iParam1]->f_2, 1))
	{
		return;
	}
	switch (iParam1)
	{
		case 0:
			func_1843(&(uParam0->f_7375));
			func_846(&(uParam0->f_7375), Global_35, "JOHN", 0, 0, 0);
			func_846(&(uParam0->f_7375), &(vLocal_808[1]), "uncle", 0, 0, 0);
			func_846(&(uParam0->f_7375), &(vLocal_808[2]), "CharlesSmith", 0, 0, 0);
			func_846(&(uParam0->f_7375), &(iLocal_666[53]), "p_cs_wantedalive01x", 0, 0, 0);
			func_846(&(uParam0->f_7375), &(iLocal_666[54]), "p_hammer01x", 0, 0, 0);
			func_846(&(uParam0->f_7375), &(iLocal_666[55]), "p_hammer01x^1", 0, 0, 0);
			func_846(&(uParam0->f_7375), &(iLocal_666[56]), "p_lumber02x", 0, 0, 0);
			func_846(&(uParam0->f_7375), &(iLocal_666[57]), "p_lumber08x", 0, 0, 0);
			func_846(&(uParam0->f_7375), &(iLocal_666[58]), "p_lumber08x^1", 0, 0, 0);
			func_846(&(uParam0->f_7375), &(iLocal_666[59]), "p_lumber08x^2", 0, 0, 0);
			func_846(&(uParam0->f_7375), &(iLocal_666[60]), "p_lumber08x^3", 0, 0, 0);
			func_846(&(uParam0->f_7375), &(iLocal_666[61]), "p_sawhorse03x^1", 0, 0, 0);
			func_846(&(uParam0->f_7375), &(iLocal_666[62]), "p_sawhorse03x", 0, 0, 0);
			func_846(&(uParam0->f_7375), &(iLocal_666[63]), "p_toolbox01x", 0, 0, 0);
			break;
		case 1:
			func_1843(&(uParam0->f_7375));
			func_846(&(uParam0->f_7375), Global_35, "JOHN", 0, 0, 0);
			func_846(&(uParam0->f_7375), &(vLocal_808[1]), "uncle", 0, 0, 0);
			func_846(&(uParam0->f_7375), &(vLocal_808[2]), "CharlesSmith", 0, 0, 0);
			break;
	}
}

void func_1417(int iParam0, int iParam1)
{
	vLocal_1100[iParam0]->f_1 = iParam1;
}

void func_1418(var uParam0)
{
	switch (func_33(uParam0))
	{
		case 0:
			break;
		case 25:
			func_440(104, 0);
			func_174(104);
			func_174(105);
			break;
	}
}

void func_1419(var uParam0)
{
	if (func_1844(uParam0, Global_35, "JOHN", 0, 1, 1))
	{
		func_1253(2);
		_set_entity_coords_and_heading(Global_35, -1635.922f, -1375.213f, 83.9836f, 53.02f, true, false, true);
		_0x9587913b9e772d29(Global_35, 0);
		_set_entity_coords_and_heading(&(vLocal_808[2]), -1636.445f, -1373.215f, 83.9832f, -150f, true, false, true);
		_0x9587913b9e772d29(&(vLocal_808[2]), 0);
		_set_entity_coords_and_heading(&(vLocal_808[1]), -1638.201f, -1377.54f, 83.9684f, 29.12f, true, false, true);
		_0x9587913b9e772d29(&(vLocal_808[1]), 0);
		task_play_anim(Global_35, func_445(81, 1), func_445(81, 0), 1000f, -1000f, -1, 1, 0f, false, 0, false, 0, false);
		task_play_anim(&(vLocal_808[2]), func_445(81, 1), func_445(81, 0), 1000f, -1000f, -1, 1, 0.5f, false, 0, false, 0, false);
		task_play_anim(&(vLocal_808[1]), func_445(82, 1), func_445(82, 0), 1000f, -1000f, -1, 1, 0f, false, 0, false, 0, false);
		func_27(vLocal_614[11], 0);
	}
}

void func_1420(var uParam0)
{
	if (!func_166(48))
	{
		if ((_does_anim_scene_exist(uParam0->f_7375.f_804) && _is_anim_scene_started(uParam0->f_7375.f_804, false)) && _get_anim_scene_time(uParam0->f_7375.f_804) >= 19.761f)
		{
			if (func_1262(Global_35))
			{
				func_1263(Global_35, 1, 0);
			}
			func_439(48);
		}
	}
	if (func_1844(uParam0, &(vLocal_808[2]), "CharlesSmith", 0, 1, 1))
	{
		func_443(uParam0, 2, "CharlesSmith");
	}
	if (func_1844(uParam0, &(vLocal_808[1]), "uncle", 0, 1, 1))
	{
		func_443(uParam0, 2, "CharlesSmith");
	}
	if (_does_anim_scene_exist(uParam0->f_7375.f_804) && _is_anim_scene_started(uParam0->f_7375.f_804, false))
	{
		if (_get_anim_scene_time(uParam0->f_7375.f_804) >= (_get_anim_scene_duration(uParam0->f_7375.f_804) - (to_float(1000) / 1000f)))
		{
			if (!is_screen_faded_out() && !is_screen_fading_out())
			{
				func_1845(uParam0, 16384);
				do_screen_fade_out(1000);
			}
		}
	}
}

void func_1421(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	if (!does_entity_exist(iParam0) || is_entity_dead(iParam0))
	{
		return;
	}
	bVar0 = false;
	set_ped_relationship_group_hash(iParam0, _get_default_relationship_group_hash(iParam1));
	if (!bParam7)
	{
		if (func_1846(iParam1))
		{
			func_1847(iParam0, 41788943);
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
			func_1848(iParam0, 0, 1);
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
			func_1849(iParam0, 0);
			bVar0 = true;
		}
		func_1850(iParam0, iParam2);
	}
	if (bVar0)
	{
		_update_ped_variation(iParam0, false, true, true, true, false);
	}
}

void func_1422(var uParam0)
{
	if (func_26(vLocal_614[3]))
	{
		if (!func_166(6))
		{
			if (func_871(vLocal_614[3]) >= 2f)
			{
				func_439(6);
				func_558(vLocal_614[3]);
			}
		}
	}
	func_168(4);
	func_168(5);
	if (func_166(6))
	{
		fLocal_1096 = 84f;
	}
	else
	{
		_0x7678fe0455ed1145(&uVar0, &fLocal_1096, &iVar1);
	}
	fVar2 = (60f / fVar1093);
	func_27(vLocal_614[5], 0);
	if (func_166(6))
	{
		if (func_871(vLocal_614[5]) >= (60f / 84f))
		{
			bVar3 = true;
		}
	}
	else if (!iVar1 == iVar1092)
	{
		bVar3 = true;
	}
	if (bVar3)
	{
		if ((!func_26(vLocal_614[13]) && func_33(uParam0) >= 0) && func_162(uParam0, 0) == 5)
		{
			func_27(vLocal_614[13], 0);
		}
		if (func_26(vLocal_614[5]))
		{
			func_1851(vLocal_614[5], (func_871(vLocal_614[5]) - fVar2), 1);
		}
		if (func_26(vLocal_614[3]))
		{
			func_558(vLocal_614[3]);
		}
		func_439(4);
		func_1852();
		func_27(vLocal_614[4], 1);
		func_1851(vLocal_614[4], (func_871(vLocal_614[4]) - fVar2), 0);
		iLocal_1095 = iVar1;
	}
	if (func_26(vLocal_614[4]))
	{
		fLocal_1093 = func_871(vLocal_614[4]);
	}
	fLocal_1094 = ((60f / fVar1093) - fVar1090);
	if (fVar1090 < 0.2f || fVar1091 < 0.3f)
	{
		func_439(5);
	}
}

void func_1423(bool bParam0)
{
	if (bParam0)
	{
		func_1853(4);
	}
	func_1853(2);
	set_bit(&(Global_1956580->f_1), 0);
}

void func_1424()
{
	func_1854();
	disable_control_action(0, -640622144, false);
	disable_control_action(0, -620139643, false);
	disable_control_action(0, 130948705, false);
	disable_control_action(0, -128997553, false);
	disable_control_action(0, -1292666904, false);
	disable_control_action(0, -1242632265, false);
	disable_control_action(0, 578288361, false);
	disable_control_action(0, -1404316431, false);
	disable_control_action(0, -432665970, false);
	disable_control_action(0, -813019446, false);
	disable_control_action(0, -2131587435, false);
	disable_control_action(0, 1287709438, false);
	disable_control_action(0, 1934388793, false);
	disable_control_action(0, -209515122, false);
	disable_control_action(0, 2139949496, false);
	disable_control_action(0, -824104112, false);
	disable_control_action(0, 1663574939, false);
	disable_control_action(0, 516589524, false);
	disable_control_action(0, 1390807691, false);
}

void func_1425(var uParam0)
{
	iVar16 = func_33(uParam0);
	iVar17 = func_132(iVar16);
	iVar18 = func_162(uParam0, iVar16);
	if (uParam0->f_8269.f_2504 > 0)
	{
		iVar19 = 0;
		while (iVar19 < uParam0->f_8269.f_2504)
		{
			if (func_218(uParam0->f_8269[iVar19], 1048576))
			{
				if (func_1855(uParam0, uParam0->f_8269[iVar19], iVar16, iVar17, iVar18))
				{
					func_1348(uParam0->f_8269[iVar19]);
				}
				else if (func_1856(uParam0, uParam0->f_8269[iVar19], iVar16, iVar17, iVar18))
				{
					func_227(uParam0->f_8269[iVar19]);
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
			if (func_218(uParam0->f_8269.f_641[iVar19], 1048576))
			{
				if (func_1857(uParam0, uParam0->f_8269.f_641[iVar19], iVar16, iVar17, iVar18, 1))
				{
					func_1858(uParam0->f_8269.f_641[iVar19]);
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
			if (func_218(uParam0->f_8269.f_1282[iVar19], 1048576))
			{
				if (func_1857(uParam0, uParam0->f_8269.f_1282[iVar19], iVar16, iVar17, iVar18, 0))
				{
					if (func_219(uParam0->f_8269.f_1282[iVar19], 1))
					{
						if (func_218(uParam0->f_8269.f_1282[iVar19], 4))
						{
							func_1859(&(uParam0->f_8269));
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
			if (func_218(uParam0->f_8269.f_2243[iVar19], 1048576))
			{
				if (func_1855(uParam0, uParam0->f_8269.f_2243[iVar19], iVar16, iVar17, iVar18))
				{
					func_1860(uParam0, uParam0->f_8269.f_2243[iVar19], 1);
					func_502(uParam0->f_8269.f_2243[iVar19], 1);
				}
				else if (func_1856(uParam0, uParam0->f_8269.f_2243[iVar19], iVar16, iVar17, iVar18))
				{
					func_1860(uParam0, uParam0->f_8269.f_2243[iVar19], 0);
					func_502(uParam0->f_8269.f_2243[iVar19], 2);
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

bool func_1426(var uParam0)
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
		return ((get_is_task_active(Global_35, 3) || func_1861(Global_35, -2017877118)) || _0x3ab6c7b0bb0df4b1(Global_35, -1));
	}
	return false;
}

void func_1427()
{
	_0x8910c24b7e0046ec();
	disable_control_action(0, -1404316431, false);
	func_1423(0);
	func_1862();
}

void func_1428(var uParam0, int iParam1, int iParam2)
{
	func_1863(&(uParam0->f_1[func_132(iParam1)]->f_11), iParam2);
	if (iParam2 == 8388608)
	{
		_display_hud_component(-1679307491);
	}
}

void func_1429(var uParam0)
{
	if (func_520(uParam0, 32768))
	{
		return;
	}
	bVar0 = func_520(uParam0, 1024);
	if (func_520(uParam0, 128) || bVar0)
	{
		if (func_520(uParam0, 4096))
		{
			if (!func_520(uParam0, 2048))
			{
				iVar1 = get_blip_from_entity(*uParam0);
				if (does_blip_exist(iVar1))
				{
					_blip_set_modifier(iVar1, -1186550032);
				}
				func_1864(uParam0, 2048);
				return;
			}
		}
		else if (func_520(uParam0, 2048))
		{
			iVar2 = get_blip_from_entity(*uParam0);
			if (does_blip_exist(iVar2))
			{
				_set_blip_flash_style(iVar2, -1186550032);
			}
			func_1865(uParam0, 2048);
		}
		if (func_520(uParam0, 512))
		{
			if (func_521(uParam0->f_10))
			{
				if (func_857(Global_35, *uParam0, 150f, 1) || bVar0)
				{
					if (!func_1866(uParam0->f_10))
					{
						func_526(uParam0->f_10, 1);
						func_1867(uParam0->f_10, 0);
					}
				}
				else if ((func_1866(uParam0->f_10) && !bVar0) && !func_520(uParam0, 16384))
				{
					func_526(uParam0->f_10, 0);
					func_1867(uParam0->f_10, 1);
				}
			}
		}
		else if (!does_blip_exist(uParam0->f_8))
		{
			if (!does_blip_exist(get_blip_from_entity(*uParam0)))
			{
				if (func_857(Global_35, *uParam0, 150f, 1))
				{
					uParam0->f_8 = _blip_add_for_entity(422991367, *uParam0);
					if (!is_string_null_or_empty(uParam0->f_4))
					{
						set_blip_name_from_text_file(uParam0->f_8, uParam0->f_4);
					}
				}
			}
		}
		else if ((does_blip_exist(get_blip_from_entity(*uParam0)) && uParam0->f_8 != get_blip_from_entity(*uParam0)) || !func_857(Global_35, *uParam0, 150f, 1))
		{
			remove_blip(&(uParam0->f_8));
		}
	}
	else if (func_520(uParam0, 512))
	{
		if (func_521(uParam0->f_10))
		{
			if (func_1866(uParam0->f_10))
			{
				func_526(uParam0->f_10, 0);
				func_1867(uParam0->f_10, 1);
			}
		}
	}
	else if (does_blip_exist(uParam0->f_8))
	{
		remove_blip(&(uParam0->f_8));
	}
}

bool func_1430(int iParam0)
{
	return (iParam0 < func_400() && iParam0 >= 0);
}

int func_1431(int iParam0)
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

bool func_1432(int iParam0)
{
	return (iParam0 < 9 && iParam0 >= 0);
}

bool func_1433(var uParam0, int iParam1, int iParam2)
{
	iVar0 = func_132(iParam1);
	if (!func_1430(iVar0))
	{
		return false;
	}
	iVar1 = func_1431(iParam2);
	if (!func_1432(iVar1))
	{
		return false;
	}
	return is_bit_set(uParam0->f_1[iVar0]->f_17, iVar1);
}

int func_1434(struct<2> Param0, int iParam2)
{
	if (!func_255(Param0))
	{
		return 0;
	}
	iVar0 = get_indexed_item_in_itemset(iParam2, Param0);
	iVar1 = iVar0;
	return iVar1;
}

void func_1435(var uParam0)
{
	func_1868(uParam0);
	if (func_279(uParam0) == 1 && is_screen_faded_out())
	{
		_0x297b72e2af094742(6);
	}
	else if (func_279(uParam0) == 0 && !func_8(uParam0, 8))
	{
		func_865(uParam0);
	}
	func_51(&(uParam0->f_10792));
	func_1869(uParam0);
	func_1870(uParam0, 67108864);
	func_1870(uParam0, 8192);
	func_867(uParam0, 4);
	func_867(uParam0, 512);
	func_867(uParam0, 65536);
	func_867(uParam0, 1024);
	func_867(uParam0, 262144);
	func_867(uParam0, 16777216);
	func_867(uParam0, 64);
	func_265(uParam0, 128);
	func_99(uParam0, -2147483648);
	func_1871(uParam0, 1);
	if (func_120(uParam0, 4194304))
	{
		func_140(uParam0, func_33(uParam0), 1073741824);
	}
	func_265(uParam0, 4194304);
	func_265(uParam0, 8388608);
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
	func_558(&(uParam0->f_13106));
	func_221(&(uParam0->f_13112));
	func_1872(uParam0, func_121(uParam0, func_33(uParam0), 1));
	if (!func_121(uParam0, func_33(uParam0), 1024))
	{
		_display_hud_component(-1679307491);
	}
	if (!func_121(uParam0, func_33(uParam0), 32768))
	{
		func_235(1);
	}
	if (func_903(uParam0, func_35(uParam0)) != -1 && _0x62de46f061caa468() < func_903(uParam0, func_35(uParam0)))
	{
		_0xf008e0ba1fe1d644((func_903(uParam0, func_35(uParam0)) - _0x62de46f061caa468()));
	}
	if (_missiondata_timecycle_box_exists())
	{
		_missiondata_timecycle_box_delete();
	}
	Var0 = { func_1873(uParam0) };
	_missiondata_timecycle_box_set_modifier(&Var0);
	Global_43805 = -1;
	if (func_121(uParam0, func_33(uParam0), 1))
	{
		func_229(Global_1935630, 2097152);
	}
	else
	{
		func_71(Global_1935630, 2097152);
	}
	func_1874(uParam0);
	if (func_33(uParam0) == 25 && func_82(32768))
	{
		func_1875(uParam0, 16);
	}
	if (func_121(uParam0, func_33(uParam0), 512))
	{
		func_1876(1f, 0f, 0f, 0f);
	}
	else
	{
		func_44();
	}
}

bool func_1436(var uParam0)
{
	if (func_120(uParam0, 4) && !func_29())
	{
		return true;
	}
	return false;
}

void func_1437(var uParam0)
{
	func_1817(uParam0);
}

void func_1438(var uParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < 65)
	{
		func_1342(uParam0->f_13[iVar0], iParam1);
		iVar0++;
	}
}

void func_1439(var uParam0)
{
	func_1877(uParam0);
	if (_get_ped_crouch_movement(Global_35))
	{
		func_99(uParam0, 1024);
	}
}

bool func_1440(var uParam0)
{
	return (_does_anim_scene_exist(uParam0->f_804) && _is_anim_scene_started(uParam0->f_804, false));
}

bool func_1441(var uParam0)
{
	return true;
}

void func_1442(var uParam0, char[32] cParam1)
{
	uParam0->f_10784 = { cParam1 };
}

bool func_1443(var uParam0, int iParam1)
{
	iVar0 = func_1878(iParam1);
	return (uParam0 && iVar0) != 0;
}

int func_1444(var uParam0, var uParam1, bool bParam2)
{
	if (Global_1935630->f_12)
	{
		return 0;
	}
	if (func_1879(uParam0, uParam1))
	{
		return 0;
	}
	if (func_521(uParam1->f_10))
	{
		set_ped_reset_flag(get_ped_index_from_entity_index(*uParam1), 53, true);
	}
	func_1429(uParam1);
	func_1880(uParam1);
	if (!bParam2)
	{
		func_1881(uParam0, uParam1);
	}
	iVar0 = 0;
	while (iVar0 < get_number_of_events(0))
	{
		switch (get_event_at_index(0, iVar0))
		{
			case -140551285:
				func_1882(uParam0, uParam1, iVar0);
				break;
			case 402722103:
			case 2145012826:
				func_1883(uParam0, uParam1, iVar0);
				break;
		}
		iVar0++;
	}
	func_1884(uParam0, uParam1);
	func_1885(uParam1);
	return 0;
}

bool func_1445(var uParam0)
{
	return true;
}

int func_1446(int iParam0)
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
						*iParam0 = func_1886(vVar0.z);
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

void func_1447(var uParam0, var uParam1, bool bParam2, int iParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, bool bParam9, bool bParam10)
{
	func_1887(uParam0, &uParam1, "", bParam9, bParam10);
}

bool func_1448(var uParam0, char[4] cParam1)
{
	if (!func_121(uParam0, func_33(uParam0), 256))
	{
		if (!func_121(uParam0, func_33(uParam0), 65536))
		{
			if (func_1888(cParam1))
			{
				func_140(uParam0, func_33(uParam0), 131072);
			}
			func_140(uParam0, func_33(uParam0), 65536);
		}
		if (func_121(uParam0, func_33(uParam0), 131072))
		{
			if (!func_1396(&(uParam0->f_10792), 1))
			{
				return false;
			}
			else
			{
				func_1889(&(uParam0->f_7375), &(uParam0->f_10792));
				func_140(uParam0, func_33(uParam0), 256);
			}
		}
		else
		{
			func_140(uParam0, func_33(uParam0), 256);
		}
	}
	return func_1290(&(uParam0->f_7375), cParam1, (func_8(uParam0, 33554432) || (is_screen_faded_out() && !func_8(uParam0, 1073741824))), 1);
}

void func_1449(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, int iParam12, int iParam13)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_820((*uParam0)[iVar0]->f_2, iParam12))
		{
			func_1890(&((*uParam0)[iVar0]->f_2), iParam12);
			if (func_1891(&((*uParam0)[iVar0]->f_2), iParam13))
			{
				func_1892((*uParam0)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (func_820((*uParam1)[iVar0]->f_4, iParam12))
		{
			func_1890(&((*uParam1)[iVar0]->f_4), iParam12);
			if (func_1891(&((*uParam1)[iVar0]->f_4), iParam13))
			{
				func_1893((*uParam1)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam2)
	{
		if (func_820((*uParam2)[iVar0]->f_2, iParam12))
		{
			func_1890(&((*uParam2)[iVar0]->f_2), iParam12);
			if (func_1891(&((*uParam2)[iVar0]->f_2), iParam13))
			{
				func_1894((*uParam2)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam3)
	{
		if (func_820((*uParam3)[iVar0]->f_2, iParam12))
		{
			func_1890(&((*uParam3)[iVar0]->f_2), iParam12);
			if (func_1891(&((*uParam3)[iVar0]->f_2), iParam13))
			{
				func_1895((*uParam3)[iVar0]);
			}
		}
		iVar0++;
	}
	if (func_820(uParam4->f_1, iParam12))
	{
		func_1890(&(uParam4->f_1), iParam12);
		if (func_1891(&(uParam4->f_1), iParam13))
		{
			func_1896(uParam4);
		}
	}
	iVar0 = 0;
	while (iVar0 < *uParam5)
	{
		if (func_820((*uParam5)[iVar0]->f_3, iParam12))
		{
			func_1890(&((*uParam5)[iVar0]->f_3), iParam12);
			if (func_1891(&((*uParam5)[iVar0]->f_3), iParam13))
			{
				func_1897((*uParam5)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam6)
	{
		if (func_820((*uParam6)[iVar0]->f_3, iParam12))
		{
			func_1890(&((*uParam6)[iVar0]->f_3), iParam12);
			if (func_1891(&((*uParam6)[iVar0]->f_3), iParam13))
			{
				func_1898((*uParam6)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam7)
	{
		if (func_820((*uParam7)[iVar0]->f_4, iParam12))
		{
			func_1890(&((*uParam7)[iVar0]->f_4), iParam12);
			if (func_1891(&((*uParam7)[iVar0]->f_4), iParam13))
			{
				func_1899((*uParam7)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam8)
	{
		if (func_820((*uParam8)[iVar0]->f_2, iParam12))
		{
			func_1890(&((*uParam8)[iVar0]->f_2), iParam12);
			if (func_1891(&((*uParam8)[iVar0]->f_2), iParam13))
			{
				func_1900((*uParam8)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam9)
	{
		if (func_820((*uParam9)[iVar0]->f_2, iParam12))
		{
			func_1890(&((*uParam9)[iVar0]->f_2), iParam12);
			if (func_1891(&((*uParam9)[iVar0]->f_2), iParam13))
			{
				func_1901((*uParam9)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam10)
	{
		if (func_820((*uParam10)[iVar0]->f_3, iParam12))
		{
			func_1890(&((*uParam10)[iVar0]->f_3), iParam12);
			if (func_1891(&((*uParam10)[iVar0]->f_3), iParam13))
			{
				func_1902((*uParam10)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam11)
	{
		if (func_820((*uParam11)[iVar0]->f_2, iParam12))
		{
			func_1890(&((*uParam11)[iVar0]->f_2), iParam12);
			if (func_1891(&((*uParam11)[iVar0]->f_2), iParam13))
			{
				func_1903((*uParam11)[iVar0]);
			}
		}
		iVar0++;
	}
}

void func_1450(var uParam0)
{
	iVar0 = func_1904(uParam0);
	_0x50b72a754ee64a71(iVar0);
}

void func_1451(bool bParam0, bool bParam1)
{
	if (func_1905(255) == 4)
	{
		return;
	}
	if (func_399(get_entity_coords(get_player_ped(player_id()), false, false)))
	{
		return;
	}
	if (!bParam0)
	{
		func_290(0);
	}
	else
	{
		if (bParam1)
		{
			func_1906(0, 0, 0, 1);
		}
		func_291(0);
		func_1907(&(Global_1109400->f_389));
		Global_1109400->f_389 = 0f;
		Global_1109400->f_389.f_5 = 1;
		Global_1109400->f_389.f_16 = 0;
		Global_1109400->f_389.f_17.f_6 = { get_entity_coords(get_player_ped(player_id()), false, false) };
		Global_1109400->f_389.f_17.f_3 = { 0f, 0f, 0f };
		Global_1109400->f_389.f_17 = { Global_1899378->f_23.f_1, Global_1899378->f_23.f_1, Global_1899378->f_23.f_1 };
		Global_1109400->f_389.f_17.f_9 = -432403087;
		func_1908(&(Global_1109400->f_428));
		Global_1109400->f_428.f_6 = { Global_1109400->f_389.f_17.f_6 };
		Global_1109400->f_428 = Global_1109400->f_389;
		Global_1109400->f_428.f_5 = 1;
		if (bParam1)
		{
			Global_1109400->f_22.f_16 = 0;
			Global_1109400->f_22.f_17 = 0;
		}
	}
	func_1909(Global_1109400->f_389, 42);
	func_1910(Global_1109400->f_428, 42);
}

float func_1452(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_1453(bool bParam0, bool bParam1, bool bParam2)
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

var func_1454(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

char* func_1455(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5)
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
	return _create_var_string(2, func_1911(sParam1));
}

void func_1456(var uParam0, int iParam1)
{
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	iVar0 = func_745(uParam0, iParam1);
	if (iVar0 == -1)
	{
		return;
	}
	Var1.f_10 = -1569615261;
	*uParam0->f_3[iVar0] = { Var1 };
}

char* func_1457(var uParam0, int iParam1)
{
	if (!does_entity_exist(iParam1))
	{
		return "";
	}
	iVar0 = 0;
	while (iVar0 < 65)
	{
		if (does_entity_exist(&(uParam0->f_13[iVar0])) && &uParam0->f_13[iVar0] == iParam1)
		{
			return func_1912(uParam0->f_13[iVar0]->f_1);
		}
		iVar0++;
	}
	return "";
}

int func_1458(int iParam0, struct<4> Param1, int iParam5, bool bParam6)
{
	if (!func_583(iParam0, 0))
	{
		return 0;
	}
	Var0 = { func_964(iParam0, Param1, iParam5, bParam6) };
	if (!_0xb881ca836cc4b6d4(&Var0))
	{
		return 0;
	}
	uVar4 = _0xc97e0d2302382211(func_993(bParam6), &Var0, 0);
	return uVar4;
}

void func_1459(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

bool func_1460(struct<4> Param0, int iParam4)
{
	if (!func_611(0))
	{
		return func_1913(Param0, iParam4, 1) != -1;
	}
	if (!_0xb881ca836cc4b6d4(&Param0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_971(Param0, &Var0, 0, 0))
	{
		return false;
	}
	if (Var0.f_10 == iParam4)
	{
		return true;
	}
	if (!_0x734311e2852760d0(func_993(0), &Param0, iParam4))
	{
		return false;
	}
	return true;
}

int func_1461()
{
	if (func_1914())
	{
		return 1;
	}
	return 0;
}

void func_1462(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_1461();
	}
	switch (iParam2)
	{
		case 0:
			Global_1955569->f_753.f_15[iParam0] = iParam1;
			break;
		case 1:
			Global_1955569->f_866.f_2.f_15[iParam0] = iParam1;
			break;
		default:
			break;
	}
}

void func_1463(int iParam0, int iParam1, float fParam2)
{
	sVar0 = func_948(iParam1);
	if (!is_string_null_or_empty(sVar0))
	{
		_0x437c08db4febe2bd(iParam0, func_1915(iParam1), fParam2, -1);
	}
}

void func_1464(int iParam0, float fParam1, bool bParam2, int iParam3)
{
	if (iParam3 == 2)
	{
		iParam3 = func_1461();
	}
	iVar0 = get_game_timer();
	func_1916(iParam0, fParam1, iParam3);
	if (bParam2)
	{
		func_1917(iParam0, iVar0, iParam3);
	}
}

char* func_1465(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 1:
					if (bParam2)
					{
						return "PMPLAYER_CONDITION_TEMPERATURE_FAIR";
					}
					else
					{
						return func_1150(bParam3, "PMPLAYER_CONDITION_TEMPERATURE_COLD", "PMPLAYER_CONDITION_TEMPERATURE_HOT");
					}
					break;
				case 2:
					return func_1150(bParam2, "PMPLAYER_CONDITION_HONOR_GOOD", "PMPLAYER_CONDITION_HONOR_BAD");
			}
			break;
		case 1:
		case 2:
		case 3:
			switch (iParam1)
			{
				case 0:
					return "PMPLAYER_CORE_PC_VALUE";
				case 1:
					return "PMPLAYER_TIME_VALUE_MINUTES";
				case 2:
					return "PMPLAYER_CORE_PC_VALUE";
				default:
					break;
			}
			break;
	}
	return "";
}

bool func_1466(var uParam0, int iParam1, int iParam2)
{
	if (iParam1 == -1)
	{
		return false;
	}
	if (iParam2 != 0 && func_459(iParam1) != iParam2)
	{
		return false;
	}
	if (func_1483(2, iParam1))
	{
		func_1918(uParam0, iParam1);
		return true;
	}
	return false;
}

void func_1467(int iParam0)
{
	func_1324(iParam0, 8, 6);
}

void func_1468(int iParam0)
{
	Global_1946804->f_978 = iParam0;
}

void func_1469()
{
	Global_1946804->f_1497 = Global_1946804->f_1378;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		*Global_1946804->f_1497.f_1[iVar0] = { *Global_1946804->f_1378.f_1[iVar0] };
		iVar0++;
	}
}

bool func_1470(int iParam0)
{
	iVar0 = func_955(0);
	iVar1 = 0;
	func_956(&(Global_1946804->f_964), iVar0, iParam0, 0, 0, 0);
	_0x91ded5dd64bb2691(&(Global_1946804->f_964));
	if (!_0xed4413cee1bf142c(&(Global_1946804->f_964)))
	{
		return false;
	}
	if (!_0xa63cd20f19b961ab(&iVar1, &(Global_1946804->f_964), -1516819610))
	{
		return false;
	}
	return iVar1;
}

void func_1471(int iParam0, bool bParam1, int iParam2)
{
	func_1919(&(Global_1946804->f_1378), iParam0);
	func_1920(2, iParam0, 6);
	if (bParam1)
	{
		func_1168(0, 1);
	}
}

struct<4> func_1472()
{
	return Var0;
}

bool func_1473(int iParam0, var uParam1, var uParam2, int iParam3)
{
	iVar0 = func_993(0);
	*uParam1 = { func_964(iParam0, func_965(0), iParam3, 0) };
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

void func_1474(var uParam0, int iParam1)
{
	Var2 = 39;
	Var4 = 10;
	Var4.f_1 = 39;
	Var4.f_1.f_2 = 39;
	Var4.f_1.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2.f_2.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 39;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (iVar0 < *uParam0)
		{
			if ((func_1921(uParam0->f_2[iVar0], 2) || &uParam0->f_2[iVar0] == iParam1) || &uParam0->f_2[iVar0] == 39)
			{
				*uParam0->f_2[iVar0] = { Var2 };
			}
			else
			{
				if (func_1921(uParam0->f_2[iVar0], 1))
				{
					func_1922(uParam0->f_2[iVar0], 2, 6);
				}
				*Var4[iVar1] = { *uParam0->f_2[iVar0] };
				iVar1++;
				*uParam0->f_2[iVar0] = { Var2 };
			}
			iVar0++;
			iVar0 = 0;
			while (iVar0 < iVar1)
			{
				*uParam0->f_2[iVar0] = { *Var4[iVar0] };
				iVar0++;
			}
			*uParam0 = iVar1;
		}
	}
}

void func_1475(var uParam0, int iParam1, int iParam2)
{
	if (*uParam0 + 1 >= 10)
	{
		return;
	}
	if (!func_1923(uParam0, 1))
	{
		func_1924(uParam0, 1);
	}
	uParam0->f_2[*uParam0]->f_1 = iParam2;
	uParam0->f_2[*uParam0] = iParam1;
	*uParam0++;
}

void func_1476(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
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
			func_976(iVar1, iVar0);
		}
		if (bParam1)
		{
			func_976(iVar3, iVar0);
		}
	}
	if (uParam0->f_1[iVar2]->f_1 == -1333118809 || uParam0->f_1[iVar2]->f_1 == -1158926300)
	{
		uParam0->f_1[iVar2]->f_1 = 1155669136;
		if (bParam3)
		{
			func_976(iVar2, iVar0);
		}
	}
}

bool func_1477(int iParam0)
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

int func_1478(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = func_682();
	}
	iVar0 = 0;
	if (iParam0 == 24043185)
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_1479(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam2 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < _0xffcc2db2d9953401(iParam0, iParam1, bParam3))
	{
		if (_0x6243635af2f1b826(iParam0, iVar0, iParam1, bParam3) == iParam2)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_1480(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam0 == &Global_1946804->f_57[func_472(iParam1, 1)])
	{
		return 0;
	}
	iVar0 = 0;
	if (!func_476(524288))
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

int func_1481(var uParam0)
{
	iVar0 = 25;
	iVar1 = 0;
	if (&uParam0->f_1[iVar0] != &Global_1946804->f_57[iVar0])
	{
		iVar1++;
	}
	iVar0 = 26;
	if (&uParam0->f_1[iVar0] != &Global_1946804->f_57[iVar0])
	{
		iVar1++;
	}
	return iVar1;
}

void func_1482(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		*Global_1946804->f_1497.f_1[iParam0] = { *Global_1946804->f_1378.f_1[iParam0] };
	}
	if (!bParam2)
	{
		return;
	}
	if (func_20() == -1)
	{
		func_686(Global_1946804->f_1497.f_1[iParam0], iParam0, Global_26796.f_776);
	}
	else
	{
		func_1925(Global_1946804->f_1497.f_1[iParam0], iParam0, Global_36638.f_45.f_350.f_1011);
	}
}

bool func_1483(int iParam0, int iParam1)
{
	if (func_20() == -1)
	{
		if (iParam1 == -1)
		{
			iParam1 = Global_26796.f_776;
		}
		if (iParam1 > -1 && iParam1 < 5)
		{
			return (Global_26796.f_26[iParam1] && iParam0) != 0;
		}
		return false;
	}
	if (iParam1 == -1)
	{
		iParam1 = Global_36638.f_45.f_350.f_1011;
	}
	if (iParam1 > -1 && iParam1 < 5)
	{
		return (Global_36638.f_45.f_350.f_26[iParam1] && iParam0) != 0;
	}
	return false;
}

bool func_1484(int iParam0)
{
	return &Global_1946804->f_529[iParam0] > 0;
}

void func_1485(int iParam0)
{
	Global_1946804->f_529[iParam0] = &Global_1946804->f_529[iParam0] + 1;
}

int func_1486(int iParam0)
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

int func_1487(int iParam0)
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

void func_1488(int iParam0, int iParam1)
{
	Var0 = { *Global_1898164->f_1[iParam0] };
	*Global_1898164->f_1[iParam0] = { *Global_1898164->f_1[iParam1] };
	*Global_1898164->f_1[iParam1] = { Var0 };
}

int func_1489(int iParam0, int iParam1, int iParam2)
{
	iVar0 = func_1926(iParam0, 1);
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
	return 1;
}

void func_1490(int iParam0)
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

void func_1491()
{
	if (func_20() != -1)
	{
		return;
	}
	if (!func_398())
	{
		return;
	}
	func_1927(&(Global_40.f_40));
}

void func_1492()
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

bool func_1493()
{
	return !func_399(Global_1310720->f_1);
}

int func_1494()
{
	return Global_40.f_4283.f_1;
}

int func_1495()
{
	return Global_40.f_4283.f_4;
}

void func_1496(vector3 vParam0, var uParam3, var uParam4)
{
	fVar0 = 1E+07f;
	fVar1 = 1E+07f;
	if (func_1928())
	{
		fVar0 = func_1031(vParam0, Global_40.f_6);
	}
	if (func_1929(33554432))
	{
		if (!func_1930(Global_40.f_2, 0f, 0f, 0f, 1056964608, 1))
		{
			fVar1 = func_1031(vParam0, Global_40.f_2);
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

float func_1497(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist2(vParam0, vParam3);
}

void func_1498()
{
	if (!func_199(&Global_1935630, 8192))
	{
		return;
	}
	if (func_82(32768))
	{
		return;
	}
	func_71(Global_1935630, 8192);
	fVar0 = 0f;
	fVar0 = (fVar0 + (0.9259259f * to_float(func_1931(909007663, 1325140787))));
	fVar0 = (fVar0 + (0.2525252f * to_float(func_1931(909007663, 2101241783))));
	fVar0 = (fVar0 + (0.2923976f * to_float(func_1931(909007663, -1296936294))));
	fVar0 = (fVar0 + (0.462963f * to_float(func_1931(909007663, -798388728))));
	fVar0 = (fVar0 + (0.9259259f * to_float(func_1931(909007663, -1787586531))));
	fVar0 = (fVar0 + (0.308642f * to_float(func_1931(909007663, -1002834519))));
	fVar0 = (fVar0 + (5.555555f * to_float(func_1931(909007663, -50600144))));
	fVar0 = (fVar0 + (0.6944444f * to_float(func_1931(909007663, -348503123))));
	fVar0 = (fVar0 + (0.3703704f * to_float(func_1931(909007663, -528798161))));
	fVar0 = (fVar0 + (0.5f * func_1932(10f, to_float(func_1931(909007663, 551192206)))));
	fVar0 = (fVar0 + (0.6f * func_1932(5f, to_float(func_1931(909007663, -406093146)))));
	fVar0 = (fVar0 + (0.2f * func_1932(25f, to_float(func_1933(-1029789297)))));
	fVar0 = (fVar0 + (2f * func_1932(1f, to_float(func_1933(-843295694)))));
	fVar0 = (fVar0 + (0.3333333f * func_1932(6f, to_float(func_1933(64058978)))));
	fVar0 = (fVar0 + (3f * func_1932(1f, to_float(func_1933(795577402)))));
	iVar1 = func_1934();
	fVar0 = (fVar0 + (0.1111111f * func_1932(9f, to_float(iVar1))));
	fVar2 = (to_float(_0x5461c821d00fe15a(-2076669067, 1665658745)) / to_float(_0x62cab7db62ead434(-2076669067, 1665658745)));
	fVar2 = func_1935(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, -263938772)) / to_float(_0x62cab7db62ead434(-2076669067, -263938772))));
	fVar2 = func_1935(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, 228647253)) / to_float(_0x62cab7db62ead434(-2076669067, 228647253))));
	fVar2 = func_1935(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, 1695604435)) / to_float(_0x62cab7db62ead434(-2076669067, 1695604435))));
	fVar2 = func_1935(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, -379038926)) / to_float(_0x62cab7db62ead434(-2076669067, -379038926))));
	fVar2 = func_1935(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, 1597499323)) / to_float(_0x62cab7db62ead434(-2076669067, 1597499323))));
	fVar2 = func_1935(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, -278663717)) / to_float(_0x62cab7db62ead434(-2076669067, -278663717))));
	fVar2 = func_1935(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, 586249988)) / to_float(_0x62cab7db62ead434(-2076669067, 586249988))));
	fVar2 = func_1935(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, -419800938)) / to_float(_0x62cab7db62ead434(-2076669067, -419800938))));
	fVar2 = func_1935(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, -1362069171)) / to_float(_0x62cab7db62ead434(-2076669067, -1362069171))));
	fVar2 = func_1935(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, -740350755)) / to_float(_0x62cab7db62ead434(-2076669067, -740350755))));
	fVar2 = func_1935(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, 1511070393)) / to_float(_0x62cab7db62ead434(-2076669067, 1511070393))));
	fVar0 = (fVar0 + func_1932(1f, fVar2));
	fVar0 = (fVar0 + (0.05f * func_1932(to_float(20), to_float(func_1936()))));
	if (func_1937(40))
	{
		fVar0 = (fVar0 + (1f * 1f));
	}
	if (func_1937(42))
	{
		fVar0 = (fVar0 + (1f * 1f));
	}
	if (func_1937(48))
	{
		fVar0 = (fVar0 + (1f * 1f));
	}
	if (func_1937(50))
	{
		fVar0 = (fVar0 + (1f * 1f));
	}
	if (func_1937(52))
	{
		fVar0 = (fVar0 + (1f * 1f));
	}
	fVar2 = (to_float(_0x5461c821d00fe15a(1765845133, 499813453)) / to_float(_0x62cab7db62ead434(1765845133, 499813453)));
	fVar2 = func_1935(fVar2, (to_float(_0x5461c821d00fe15a(1765845133, 666607663)) / to_float(_0x62cab7db62ead434(1765845133, 666607663))));
	fVar2 = func_1935(fVar2, (to_float(_0x5461c821d00fe15a(1765845133, -220219788)) / to_float(_0x62cab7db62ead434(1765845133, -220219788))));
	fVar2 = func_1935(fVar2, (to_float(_0x5461c821d00fe15a(1765845133, 218622660)) / to_float(_0x62cab7db62ead434(1765845133, 218622660))));
	fVar2 = func_1935(fVar2, (to_float(_0x5461c821d00fe15a(1765845133, 390004462)) / to_float(_0x62cab7db62ead434(1765845133, 390004462))));
	fVar2 = func_1935(fVar2, (to_float(_0x5461c821d00fe15a(1765845133, 6410548)) / to_float(_0x62cab7db62ead434(1765845133, 6410548))));
	fVar0 = (fVar0 + (1f * func_1932(1f, fVar2)));
	fVar0 = (fVar0 + (0.2f * func_1932(5f, to_float(func_1933(1933084904)))));
	fVar0 = (fVar0 + (0.2f * func_1932(5f, to_float(func_1931(-1756227506, -734935893)))));
	fVar0 = (fVar0 + (to_float(func_1566(_0x729d52f61a5a9e22(1979337996), 50)) / to_float(50)));
	fVar0 = (fVar0 + (to_float(func_1566(_0x729d52f61a5a9e22(-2125891426), 10)) / to_float(10)));
	fVar0 = (fVar0 + (to_float(func_1566(_0x729d52f61a5a9e22(1630085303), 10)) / to_float(10)));
	fVar0 = (fVar0 + _0x725d52f21a5e9e22(-1658238931));
	fVar0 = (fVar0 + (to_float(func_1566(_0x729d52f61a5a9e22(1807539419), 20)) / to_float(20)));
	fVar0 = (fVar0 + (to_float(func_1566(_0x729d52f61a5a9e22(717108105), 10)) / to_float(10)));
	fVar0 = (fVar0 + (to_float(func_1566(_0x729d52f61a5a9e22(-2143405780), 48)) / to_float(48)));
	func_1938(&iVar3, &iVar4);
	fVar0 = (fVar0 + (2f * func_1932((to_float(iVar3) / to_float(iVar4)), 1f)));
	fVar0 = (fVar0 + (2f * func_1932(1f, to_float(func_1939(-2116919750)))));
	fVar5 = to_float(func_1940());
	fVar0 = (fVar0 + ((3f * fVar5) / to_float(9)));
	fVar0 = (fVar0 + ((1f / 4f) * func_1932(1f, to_float(func_1931(1511238709, -747096482)))));
	fVar0 = (fVar0 + ((1f / 4f) * func_1932(1f, to_float(func_1931(1511238709, 549911940)))));
	fVar0 = (fVar0 + ((1f / 4f) * func_1932(1f, to_float(func_1931(1511238709, -760820978)))));
	fVar0 = (fVar0 + ((1f / 4f) * func_1932(1f, to_float(func_1931(1511238709, -1672018311)))));
	fVar0 = (fVar0 + (0.2f * func_1932(5f, to_float(func_1933(-1342635612)))));
	fVar0 = (fVar0 + (0.5f * func_1932(1f, to_float(func_1933(-2061916883)))));
	fVar0 = (fVar0 + (0.5f * func_1932(1f, to_float(func_1933(281346304)))));
	fVar0 = (fVar0 + (0.5f * func_1932(1f, to_float(func_1933(-299021541)))));
	fVar0 = (fVar0 + ((0.5f / 6f) * func_1932(1f, to_float(func_1931(-1276738576, 307971639)))));
	fVar0 = (fVar0 + ((0.5f / 6f) * func_1932(1f, to_float(func_1931(-1276738576, -1555359431)))));
	fVar0 = (fVar0 + ((0.5f / 6f) * func_1932(1f, to_float(func_1931(-1276738576, 644069854)))));
	fVar0 = (fVar0 + ((0.5f / 6f) * func_1932(1f, to_float(func_1931(-1276738576, -97115714)))));
	fVar0 = (fVar0 + ((0.5f / 6f) * func_1932(1f, to_float(func_1931(-1276738576, -2143405780)))));
	fVar0 = (fVar0 + ((0.5f / 6f) * func_1932(1f, to_float(func_1931(-1276738576, 1455184052)))));
	fVar0 = (fVar0 + ((1f / 4f) * func_1932(1f, to_float(func_1931(978382515, -2072933068)))));
	fVar0 = (fVar0 + ((1f / 4f) * func_1932(1f, to_float(func_1931(978382515, 574993838)))));
	fVar0 = (fVar0 + ((1f / 4f) * func_1932(1f, to_float(func_1931(978382515, -605765767)))));
	fVar0 = (fVar0 + ((1f / 4f) * func_1932(1f, to_float(func_1931(978382515, 1015970717)))));
	Var6 = { func_94(1215094015) };
	fVar8 = func_1941(Var6);
	_0xe141f6b40b1e3683(&Var6, fVar0);
	if (fVar0 > fVar8)
	{
	}
	if (func_191(&Global_1898437))
	{
		iVar60 = 0;
		iVar61 = 0;
		while (iVar61 < &Global_1898329)
		{
			if (!func_191(Global_1898330[iVar61]))
			{
			}
			else
			{
				iVar62 = func_195(Global_1898330[iVar61]);
				if (iVar62 == 3 || iVar62 == 4)
				{
				}
				else if (iVar62 != 1 && iVar62 != 2)
				{
					func_1942(Global_1898330[iVar61]);
				}
				else
				{
					func_1943(iVar61, 0);
					if (func_196(Global_1898330[iVar61]) == 1)
					{
						iVar9[iVar60] = func_194(Global_1898330[iVar61]);
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
									iVar9[iVar60] = func_194((*Global_1347702)[&Global_40.f_450[iVar63]]->f_15);
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
										_0x51ec204a6e5b5a1a(func_194(&Global_1898437), &iVar9);
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

void func_1499(var uParam0, int iParam1, bool bParam2)
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

int func_1500(int iParam0, int iParam1, int iParam2)
{
	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
	return 1;
}

void func_1501(int iParam0)
{
	if (!func_1008(iParam0))
	{
		return;
	}
	if (!_is_base_a_persistent_character((*Global_1360165)[iParam0]->f_1))
	{
		iVar0 = func_1944(iParam0);
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

void func_1502(int iParam0)
{
	if (func_521(iParam0))
	{
		if (does_entity_exist(func_557(iParam0)))
		{
			func_711(iParam0, 67108864, 1);
			func_1012(iParam0, 19, 1);
		}
	}
}

float func_1503(int iParam0)
{
	if (!func_1008(iParam0))
	{
		return 0f;
	}
	return (*Global_1360165)[iParam0]->f_134;
}

void func_1504(int iParam0)
{
	iVar0 = func_557(iParam0);
	iVar1 = func_1014(iParam0, 0);
	func_1945(iParam0, iVar0);
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

bool func_1505(int iParam0)
{
	if (!func_1008(iParam0))
	{
		return false;
	}
	if ((*Global_1360165)[iParam0]->f_70.f_11 == 0 || (*Global_1360165)[iParam0]->f_70.f_11 == (*Global_1360165)[iParam0]->f_128)
	{
		return false;
	}
	return true;
}

bool func_1506(int iParam0)
{
	if (!func_1008(iParam0))
	{
		return false;
	}
	return (*Global_1360165)[iParam0]->f_70.f_11 == get_id_of_this_thread();
}

void func_1507(int iParam0, int iParam1, bool bParam2)
{
	if (!func_1008(iParam0))
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

int func_1508(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (!func_1008(iParam0))
	{
		return 0;
	}
	iVar0 = func_1021(iParam0);
	if (func_1013(iVar0, 0))
	{
		if (func_1013(_get_rider_of_mount(iVar0, false), 0) && !bParam4)
		{
			return 0;
		}
		if ((bParam1 || !func_1505(iParam0)) || func_1506(iParam0))
		{
			if (bParam2 || !(is_entity_on_screen(iVar0) && func_1946(player_ped_id(), iVar0, 1) < 10000f))
			{
				iVar1 = func_1839(iParam0, 1);
				if (iVar1 != 0)
				{
					if (!_0x88ad6cc10d8d35b2(iVar0))
					{
						set_entity_as_mission_entity(iVar0, true, true);
					}
					func_1947(iParam0);
					_0x7b204f88f6c3d287(func_1948(iParam0, 0));
					_0xfcc6db8dbe709bc8(func_1948(iParam0, 0));
					func_1949(iParam0);
				}
			}
			else
			{
				if (func_710(iParam0, 32768, 1))
				{
					iVar2 = func_1948(iParam0, 0);
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
		if (func_1013((*Global_1360165)[iParam0]->f_124, 0))
		{
			if (func_710(iParam0, 32768, 1))
			{
				if (!_0x88ad6cc10d8d35b2((*Global_1360165)[iParam0]->f_124))
				{
					set_entity_as_mission_entity((*Global_1360165)[iParam0]->f_124, true, true);
				}
				func_1947(iParam0);
				_0x7b204f88f6c3d287(func_1948(iParam0, 0));
				_0xfcc6db8dbe709bc8(func_1948(iParam0, 0));
			}
			else
			{
				set_entity_as_mission_entity((*Global_1360165)[iParam0]->f_124, true, true);
				func_1947(iParam0);
				delete_ped(&((*Global_1360165)[iParam0]->f_124));
			}
		}
	}
	(*Global_1360165)[iParam0]->f_70.f_1 = 0;
	func_1950(iParam0, 0);
	return 1;
}

int func_1509(int iParam0)
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

char* func_1510(int iParam0)
{
	if (iParam0 == 255)
	{
		if (func_246(37, iParam0))
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
	if (func_246(37, iParam0))
	{
		return _0xd8402b858f4ddd88(&((*Global_1108178)[iParam0]->f_12), get_length_of_literal_string(&((*Global_1108178)[iParam0]->f_12)));
	}
	return get_player_name(&(Global_1225639->f_120[iParam0]));
}

char* func_1511(char* sParam0, int iParam1)
{
	if (iParam1 == 109029619)
	{
		return _create_var_string(10, "PLAYER_STRING", sParam0);
	}
	return func_1152(_create_var_string(10, "PLAYER_STRING", sParam0), iParam1);
}

float func_1512(int iParam0)
{
	iParam0 = func_266(iParam0);
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

float func_1513(float fParam0, float fParam1, float fParam2)
{
	return (((1f - fParam2) * fParam0) + (fParam2 * fParam1));
}

void func_1514(int iParam0)
{
	if (iParam0 < 0)
	{
		iParam0 = 0;
	}
	Global_40.f_4283.f_325 = iParam0;
	Var0 = { func_94(1356759001) };
	stat_id_set_int(&Var0, iParam0, true);
}

void func_1515(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_1516(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_6;
	}
	return -15;
}

int func_1517(int iParam0, int iParam1)
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

void func_1518(int iParam0, bool bParam1)
{
	Global_1955569->f_1 = iParam0;
	if (bParam1)
	{
		func_1951(bParam1);
	}
}

void func_1519(int iParam0)
{
	_0x74bcceb233ad95b2(-156028329, iParam0);
}

char* func_1520(int iParam0)
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

bool func_1521(int iParam0)
{
	if (!func_1202(23, &vVar0))
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

bool func_1522(int iParam0, int iParam1, int iParam2)
{
	if (!func_1202(23, &Var0))
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

int func_1523(int iParam0)
{
	return iParam0;
}

int func_1524()
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

int func_1525(int iParam0)
{
	if (!func_583(*iParam0, 0))
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

bool func_1526(int iParam0, var uParam1, bool bParam2)
{
	if (!func_583(iParam0, 0))
	{
		return false;
	}
	Var0 = { func_470(iParam0, 0, 1) };
	iVar5 = 1728382685;
	Var6.f_9 = -1591664384;
	bVar28 = false;
	iVar29 = 0;
	while (iVar29 < 4)
	{
		iVar5 = func_1088((386 + iVar29), 1);
		if (func_967(iParam0, &Var0, iVar5, 0))
		{
			bVar28 = func_968(iParam0, &Var6, iVar5);
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

struct<14> func_1527(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

void func_1528(var uParam0, struct<4> Param1)
{
	if (_0xb881ca836cc4b6d4(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

bool func_1529(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	*iParam1 = _0x640f890c3e5a3ffd(func_993(bParam3), uParam0, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

int func_1530(int iParam0)
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

float func_1531(int iParam0)
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
			return func_1952(iParam0);
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
			return func_1952(iParam0);
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
			return func_1952(iParam0);
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

bool func_1532(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_605(18);
		case 2:
			return func_605(20);
		case 1:
			return func_605(19);
		default:
			break;
	}
	return true;
}

int func_1533(int iParam0)
{
	return func_1953(&(Global_40.f_11095.f_11[iParam0]));
}

void func_1534(int iParam0, float fParam1, bool bParam2)
{
	if (func_20() != -1)
	{
		return;
	}
	if (Global_1347477->f_117 || !func_605(31))
	{
		return;
	}
	iVar0 = func_1533(iParam0);
	fVar1 = &Global_40.f_11095.f_11[iParam0];
	if (iVar0 >= 7)
	{
		return;
	}
	set_attribute_points(Global_35, iParam0, floor(fParam1));
	Global_40.f_11095.f_11[iParam0] = fParam1;
	iVar2 = func_1533(iParam0);
	if (func_1954(iParam0) && func_1955(iParam0))
	{
		if (!bParam2)
		{
			iVar3 = func_1956(fVar1, fParam1);
			if (fParam1 > IntToFloat(func_1957(iParam0)) && (iVar2 > iVar0 || iVar3 != 0))
			{
				if (!is_radar_hidden() && !Global_16)
				{
					if (iVar2 > iVar0)
					{
						func_325(func_1958(iParam0), 0);
					}
					func_1959(iParam0, iVar2, iVar3);
					func_1960(iParam0, 7000);
				}
				Global_1347477->f_8 = 1;
			}
		}
	}
	Global_1347477->f_1 = iParam0;
	Global_1347477 = get_game_timer();
}

char* func_1535(int iParam0)
{
	return "PLAYER_RPG_XP_GAIN";
}

int func_1536(int iParam0)
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

int func_1537()
{
	return func_1961(Global_40.f_12019);
}

int func_1538()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		iVar2 = func_1072(iVar1);
		if (func_347(iVar2, 1, 0) || func_1544(func_1543(iVar2)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1539()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 30)
	{
		if (func_1962(_0x126cbebba46693cf(iVar1, -440187297, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1540()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 14)
	{
		if (func_1549(_0x126cbebba46693cf(iVar1, 1995362678, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1541()
{
	return _0x3a65f4844913a047(2103522376, 0);
}

int func_1542(int iParam0)
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

int func_1543(int iParam0)
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

bool func_1544(int iParam0)
{
	return (Global_40.f_12019 && iParam0) != 0;
}

char* func_1545(int iParam0)
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

int func_1546(int iParam0)
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

int func_1547(int iParam0)
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

char* func_1548(int iParam0)
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

bool func_1549(int iParam0)
{
	return _0x9a03f22ad446eeac(iParam0) > 0;
}

char* func_1550(int iParam0)
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

char* func_1551(int iParam0)
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

bool func_1552(int iParam0)
{
	if (func_1963(iParam0) && func_347(iParam0, 1, 0))
	{
		return true;
	}
	else if (func_1964(iParam0) && func_1965(iParam0))
	{
		return true;
	}
	return false;
}

char* func_1553(int iParam0)
{
	if (!func_583(iParam0, 0))
	{
		return "";
	}
	return _get_label_text_by_hash(func_649(iParam0));
}

int func_1554(int iParam0)
{
	return Global_1898164->f_1[iParam0]->f_2;
}

void func_1555(bool bParam0)
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

void func_1556(int iParam0)
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

void func_1557(bool bParam0)
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

void func_1558(bool bParam0)
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

void func_1559(bool bParam0)
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

void func_1560(bool bParam0)
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

void func_1561(bool bParam0)
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

void func_1562(bool bParam0)
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

int func_1563(int iParam0)
{
	if (iParam0 == -358215195)
	{
		return 0;
	}
	return &(Global_1946804->f_1497.f_1[func_472(iParam0, 1)]);
}

void func_1564()
{
	if (!_unlock_is_unlocked(-1526891582))
	{
		func_1966();
		_unlock_set_unlocked(-1526891582, true);
		func_610(-916314281);
		func_655(-916314281, 1, 752097756);
		set_current_ped_weapon(Global_35, -916314281, true, 2, false, false);
		func_610(494733111);
		func_655(494733111, 1, 752097756);
		set_current_ped_weapon(Global_35, 494733111, true, 4, false, false);
	}
}

bool func_1565(int iParam0)
{
	if (_item_database_is_intrinsic_item(iParam0))
	{
		return true;
	}
	return false;
}

int func_1566(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

bool func_1567(int iParam0)
{
	return _is_weapon_bow(iParam0);
}

bool func_1568(int iParam0, int iParam1)
{
	iVar1 = func_472(func_1967(iParam0), 1);
	if (iVar1 >= 39)
	{
		return false;
	}
	if (&Global_1946804->f_1497.f_1[iVar1] != 0 && &Global_1946804->f_1497.f_1[iVar1] != &Global_1946804->f_57[iVar1])
	{
		iVar0 = &Global_1946804->f_1497.f_1[iVar1];
		if (func_607(iVar0) == iParam0)
		{
			*iParam1 = iVar0;
			return true;
		}
	}
	*iParam1 = 0;
	return false;
}

int func_1569(int iParam0)
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

int func_1570(int iParam0)
{
	return func_1968(iParam0, -1);
}

bool func_1571(int iParam0)
{
	return _0xf83d3dda4d3c8169(iParam0) > 0;
}

bool func_1572(int iParam0)
{
	return _0xf83d3dda4d3c8169(iParam0) > 0;
}

int func_1573(int iParam0)
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

void func_1574(int iParam0)
{
	Global_40.f_12019.f_43 = (Global_40.f_12019.f_43 || iParam0);
}

bool func_1575(int iParam0)
{
	return _0xf83d3dda4d3c8169(iParam0) > 0;
}

bool func_1576()
{
	if (Global_1572887->f_12 != -1)
	{
		return false;
	}
	return Global_1347477->f_203;
}

float func_1577()
{
	fVar0 = func_1969(13);
	iVar1 = func_1970(fVar0);
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

float func_1578()
{
	if (is_ped_on_mount(Global_35))
	{
		return 0.25f;
	}
	return 0f;
}

float func_1579()
{
	if (func_338())
	{
		if (_get_special_edition_core_stats_bonus_enabled())
		{
			return 0.2f;
		}
	}
	return 0f;
}

float func_1580()
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

float func_1581()
{
	return Global_1955565->f_3;
}

void func_1582(int iParam0, char* sParam1, bool bParam2)
{
	sVar0 = func_1465(iParam0, 1, 0, 0);
	sVar0 = _create_var_string(2, sVar0, sParam1);
	_databinding_write_data_string(&(Global_1955569->f_5.f_2[iParam0]->f_12[1]), sVar0);
	_databinding_write_data_bool(&(Global_1955569->f_5.f_2[iParam0]->f_16[1]), bParam2);
}

void func_1583(int iParam0, float fParam1, bool bParam2)
{
	sVar0 = func_1465(iParam0, 2, 0, 0);
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

bool func_1584()
{
	return func_1969(12) <= -99f;
}

bool func_1585()
{
	return func_1969(12) >= 99f;
}

int func_1586()
{
	iVar2 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_607(iVar1) == -999503751)
		{
			if (func_1971() != iVar1)
			{
				iVar2++;
			}
		}
		iVar0++;
	}
	return iVar2;
}

bool func_1587(int iParam0)
{
	if (!func_954(iParam0))
	{
		return false;
	}
	if (func_460(iParam0, 4))
	{
		return true;
	}
	return false;
}

bool func_1588(int iParam0)
{
	if (!func_954(iParam0))
	{
		return false;
	}
	if (func_460(iParam0, 2))
	{
		return true;
	}
	return false;
}

void func_1589(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_954(iParam0))
	{
		return;
	}
	if (!func_1588(iParam0))
	{
		func_463(iParam0, 2);
		if (bParam2)
		{
			if (!func_198(0, 0, 1))
			{
				func_367(1, 4);
			}
		}
		if ((!func_215() && !bParam1) && !func_198(0, 0, 1))
		{
			func_716(_create_var_string(10, "OUT_JOURN_ADD", func_1972(iParam0)), 10000, 0, 0, 0, 1);
		}
	}
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
	iVar0 = func_1973(iParam0);
	switch (iVar0)
	{
		case 0:
			if (bParam1)
			{
				func_606(50);
			}
			else
			{
				func_606(48);
			}
			break;
		case 1:
			if (bParam1)
			{
				func_606(51);
			}
			else
			{
				func_606(49);
			}
			break;
		case 2:
			if (bParam1)
			{
				if (!func_1974(iVar0))
				{
					Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
					func_636();
				}
			}
			else
			{
				Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
				func_636();
			}
			break;
		case 3:
			func_606(24);
			if (bParam1)
			{
				if (!func_1974(iVar0))
				{
					Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
					func_636();
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
			if (func_1975(0))
			{
				iVar0++;
			}
			if (func_1975(2))
			{
				iVar0++;
			}
			if (func_1975(4))
			{
				iVar0++;
			}
			if (!func_1976(16))
			{
				if (iVar0 == 1)
				{
					func_1977();
					func_325(456, 1);
					func_1978(16);
				}
			}
			if (!func_1976(32))
			{
				if (iVar0 >= 3)
				{
					func_1977();
					func_325(456, 1);
					func_1978(32);
				}
			}
			break;
		case 1:
		case 3:
		case 7:
			if (func_1975(1))
			{
				iVar0++;
			}
			if (func_1975(3))
			{
				iVar0++;
			}
			if (func_1975(7))
			{
				iVar0++;
			}
			if (!func_1976(1))
			{
				if (iVar0 == 1)
				{
					func_1979();
					func_325(457, 1);
					func_1978(1);
				}
			}
			if (!func_1976(2))
			{
				if (iVar0 >= 3)
				{
					func_1979();
					func_325(457, 1);
					func_1978(2);
				}
			}
			break;
		case 5:
		case 6:
		case 8:
			if (func_1975(5))
			{
				iVar0++;
			}
			if (func_1975(6))
			{
				iVar0++;
			}
			if (func_1975(8))
			{
				iVar0++;
			}
			if (!func_1976(4))
			{
				if (iVar0 == 1)
				{
					func_1980();
					func_325(455, 1);
					func_1978(4);
				}
			}
			if (!func_1976(8))
			{
				if (iVar0 >= 3)
				{
					func_1980();
					func_325(455, 1);
					func_1978(8);
				}
			}
			break;
	}
}

void func_1593(var uParam0)
{
	func_1143(uParam0, 143479330);
	if (Global_1946804->f_1 == 2026485318)
	{
		func_1143(uParam0, 617531372);
	}
	else
	{
		func_1143(uParam0, 291123060);
	}
}

void func_1594(var uParam0, int iParam1, struct<14> Param2)
{
	if (!func_1981(uParam0))
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
	if (!func_583(iParam0, 0))
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
	func_677(iParam0, 1, 1, -142743235, 1);
	iVar34 = func_1982(iParam0, &uVar18);
	func_1983(iParam0, &uVar18, &iVar34, 1);
	if (func_682() == -2125499975)
	{
		iVar38 = 2020890174;
	}
	else
	{
		iVar38 = 1105329772;
	}
	func_1984(iParam0, &(Global_26796.f_627.f_121.f_20));
	func_679(iParam0, 1, 1);
	iVar36 = 0;
	while (iVar36 < iVar34)
	{
		func_677(&(uVar18[iVar36]), 1, 1, -142743235, 1);
		switch (func_607(&(uVar18[iVar36])))
		{
			case -2061583405:
				func_1984(&(uVar18[iVar36]), &(Global_26796.f_627.f_121.f_21));
				break;
			case 81053684:
				func_1984(&(uVar18[iVar36]), &(Global_26796.f_627.f_121.f_23));
				break;
			case -525676072:
				func_1984(&(uVar18[iVar36]), &(Global_26796.f_627.f_121.f_22));
				break;
			case -1719060085:
				func_1984(&(uVar18[iVar36]), &(Global_26796.f_627.f_121.f_24));
				break;
			case -413129408:
				func_1984(&(uVar18[iVar36]), &(Global_26796.f_627.f_121.f_25));
				break;
		}
		func_679(&(uVar18[iVar36]), 1, 1);
		iVar0[iVar36] = func_472(func_680(&(uVar18[iVar36])), 1);
		iVar36++;
	}
	func_1985(&(Global_1946804->f_1616));
	func_683(&(Global_1946804->f_1616), iVar38, &uVar39, 1, 0, 0, 0);
	*Global_1946804->f_1616.f_1[8] = { func_684(8, 0) };
	*Global_1946804->f_1616.f_1[9] = { func_684(9, 0) };
	*Global_1946804->f_1616.f_1[0] = { func_684(0, 0) };
	*Global_1946804->f_1616.f_1[2] = { func_684(2, 0) };
	*Global_1946804->f_1616.f_1[3] = { func_684(3, 0) };
	*Global_1946804->f_1616.f_1[1] = { func_684(1, 0) };
	*Global_1946804->f_1616.f_1[5] = { func_684(5, 0) };
	*Global_1946804->f_1616.f_1[6] = { func_684(6, 0) };
	*Global_1946804->f_1616.f_1[7] = { func_684(7, 0) };
	iVar35 = 0;
	while (iVar35 < 5)
	{
		iVar36 = 0;
		while (iVar36 < iVar34)
		{
			if (&uVar18[iVar36] == func_685(&(iVar0[iVar36]), iVar35))
			{
				func_679(func_459(iVar35), 1, 1);
				func_1986(iVar35);
				if (iVar35 == 0)
				{
					bVar17 = true;
					iVar37 = 0;
					while (iVar37 < 39)
					{
						if (!func_1618(Global_1946804->f_1616.f_1[iVar37], 2))
						{
						}
						else
						{
							func_686(Global_1946804->f_1616.f_1[iVar37], iVar37, 0);
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
	if ((bVar16 || bVar17) || Global_40.f_7729 == func_959(iParam0))
	{
		if (!func_1987(8))
		{
			if (func_682() == -2125499975)
			{
				if (bVar17)
				{
					func_683(&(Global_1946804->f_1616), 1661121390, &uVar39, 0, 1, 0, -2125499975);
					Global_1946804->f_1616 = 166243423;
					func_1919(&(Global_1946804->f_1616), 0);
					if (Global_40.f_7729 == 0)
					{
						func_1920(2, 0, 6);
					}
				}
				if (bVar16 || Global_40.f_7729 == func_959(iParam0))
				{
					Global_1905941 = 6;
				}
			}
			else
			{
				if (bVar17)
				{
					func_683(&(Global_1946804->f_1616), -361635024, &uVar39, 0, 1, 0, 1160113249);
					Global_1946804->f_1616 = 166243423;
					func_1919(&(Global_1946804->f_1616), 0);
					if (Global_40.f_7729 == 0)
					{
						func_1920(2, 0, 6);
					}
				}
				if (bVar16 || Global_40.f_7729 == func_959(iParam0))
				{
					Global_1905941 = 62;
				}
			}
			if (bVar16 || Global_40.f_7729 == func_959(iParam0))
			{
				if (is_entity_dead(get_player_ped(player_id())))
				{
					func_462(Global_40.f_7729, 4096);
					func_463(&Global_1905941, 4096);
					Global_40.f_7729 = &Global_1905941;
				}
				else
				{
					func_186(get_player_ped(player_id()), &Global_1905941, 1, 0, 0);
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
	func_683(&(Global_1946804->f_1616), 1661121390, &uVar39, 0, 1, 0, -2125499975);
	func_683(&(Global_1946804->f_1616), 2020890174, &uVar39, 1, 0, 0, -2125499975);
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

int func_1598(int iParam0, struct<4> Param1)
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
			if (func_583(Var3, 0))
			{
				Var12.f_4 = Var3.f_1;
				if (func_1458(Var3, Param1, Var12.f_4, 0) > 0)
				{
				}
				else
				{
					func_1459(&uVar7);
					if (func_1089(Var3, &uVar7, &Var12, -1, -142743235, 0, 0))
					{
					}
				}
			}
		}
		iVar0++;
	}
	return 1;
}

int func_1599(var uParam0)
{
	return uParam0->f_1;
}

void func_1600(var uParam0)
{
	func_1988(uParam0);
	func_1990(uParam0, func_1989(-1346384396));
	func_1991(uParam0, func_1989(-712836614));
	func_1992(uParam0, func_1989(-1629133289));
	func_1993(uParam0, func_1989(1302066700));
	func_1994(uParam0, func_1989(599669344));
	func_1995(uParam0, func_1989(-1555511632));
}

void func_1601(struct<6> Param0)
{
	if (!func_1996(Param0.f_4, 1))
	{
	}
	if (!func_1996(Param0, 1))
	{
	}
	if (!func_1996(Param0.f_2, 1))
	{
	}
	if (!func_1996(Param0.f_5, 1))
	{
	}
	if (!func_1996(Param0.f_3, 1))
	{
	}
	if (!func_1996(Param0.f_1, 1))
	{
	}
}

int func_1602(int iParam0, int iParam1, int iParam2)
{
	*iParam0 = 0;
	*iParam1 = 0;
	*iParam2 = 0;
	if (func_398())
	{
		if (func_304())
		{
			bVar0 = false;
			if (!func_327((*Global_1835011)[15]->f_1, 1) && !func_605(42))
			{
				bVar0 = true;
			}
			if (bVar0)
			{
				*iParam0 = func_1997();
				*iParam1 = func_1998();
				*iParam2 = func_1999();
				return 1;
			}
			else
			{
				*iParam0 = func_2000();
				*iParam1 = func_2001();
				*iParam2 = func_2002();
				return 1;
			}
		}
		else if (func_1053())
		{
			if (!func_327((*Global_1835011)[60]->f_1, 1))
			{
				*iParam0 = func_2003();
				*iParam1 = func_2004();
				*iParam2 = func_2005();
				return 1;
			}
			else
			{
				*iParam0 = func_2006();
				*iParam1 = func_2007();
				*iParam2 = func_2008();
				return 1;
			}
		}
	}
	else if (func_304())
	{
		*iParam0 = func_2009();
		*iParam1 = func_2010();
		*iParam2 = func_2011();
		return 1;
	}
	else if (func_1053())
	{
		*iParam0 = func_2012();
		*iParam1 = func_2013();
		*iParam2 = func_2014();
		return 1;
	}
	return 0;
}

void func_1603(int iParam0, int iParam1)
{
	iParam0 = func_266(iParam0);
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

void func_1604(int iParam0, int iParam1)
{
	iParam0 = func_266(iParam0);
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

void func_1605(int iParam0, int iParam1)
{
	iParam0 = func_266(iParam0);
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

void func_1606(int iParam0, int iParam1)
{
	iParam0 = func_266(iParam0);
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

bool func_1607(int iParam0)
{
	iVar0 = func_2015(iParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	Var1 = { func_963(0) };
	if (func_2016(&Var1, iVar0, 0) > 0)
	{
		return true;
	}
	return false;
}

int func_1608(int iParam0)
{
	Var0.f_9 = -1591664384;
	if (!func_2017(iParam0, &Var0))
	{
		return 0;
	}
	Var29 = { Var0.f_5 };
	Var29.f_4 = Var0.f_9;
	if (!func_1089(Var0.f_4, &Var0, &Var29, -1, -142743235, 0, 0))
	{
		return 0;
	}
	return 1;
}

int func_1609(int iParam0)
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

int func_1610(int iParam0, int iParam1)
{
	if (!func_583(iParam1, 0))
	{
		return 0;
	}
	if (!func_2018(iParam1))
	{
		return 0;
	}
	if (func_1607(iParam0))
	{
		return 0;
	}
	iVar0 = func_2015(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	Var1 = { func_963(0) };
	Var1.f_4 = iVar0;
	if (!func_1136(iParam1, &uVar6, &Var1, 1, 752097756, 0))
	{
		return 0;
	}
	return 1;
}

void func_1611(int iParam0)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if (func_1620(1) < iParam0)
	{
		iParam0 = func_1620(1);
	}
	_money_decrement_cash_balance(iParam0);
	Var0 = { func_94(1644987397) };
	_0xbd861ae8a5181ed7(&Var0, iParam0);
}

bool func_1612(var uParam0, int iParam1, var uParam2, int iParam3, int iParam4, var uParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(&uParam0))
	{
		return false;
	}
	if (!_0x22e590f108289a9d(func_993(bParam6), &uParam0, iParam4, &Var0))
	{
		return false;
	}
	if (!func_971(Var0, uParam5, bParam6, 0))
	{
		return false;
	}
	return true;
}

bool func_1613(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (func_1565(iParam0))
	{
		return false;
	}
	if (iParam1 <= 0)
	{
		return false;
	}
	if (!func_611(bParam4))
	{
		iVar0 = -1;
		return iVar0 != -1;
	}
	if (!_0xb4158c8c9a3b5dce(func_993(bParam4), iParam0, iParam1, iParam2))
	{
		return false;
	}
	return true;
}

void func_1614(int iParam0, int iParam1)
{
	iVar0 = 0;
	if (func_20() == -1)
	{
		if (func_593(43))
		{
			if (func_603(iParam0, 412399755))
			{
				func_1113(-1791518714);
				if (func_1114() == 0)
				{
					func_367(0, 10);
					iVar0 = func_2019(iParam0, iParam1, 1);
					if (((iParam0 == 281887510 || iParam0 == -164081697) || iParam0 == -1161319399) || iParam0 == 728781265)
					{
						if (func_1116(iParam0) < func_1117(iParam0))
						{
							func_599(43, iParam0, iParam1, -1791518714, iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (func_593(44))
		{
			if (func_603(iParam0, 709057512))
			{
				func_1113(-2087881550);
				if (func_1114() == 1)
				{
					func_367(0, 10);
					iVar0 = func_2019(iParam0, iParam1, 2);
					if ((iParam0 == -222563712 || iParam0 == 1794857344) || iParam0 == 1952409553)
					{
						if (func_1116(iParam0) < func_1117(iParam0))
						{
							func_599(43, iParam0, iParam1, -2087881550, iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!func_593(45))
		{
			if (func_603(iParam0, -1478961327))
			{
				func_1113(1908068621);
				if (func_1114() == 2)
				{
					func_367(0, 10);
					iVar0 = func_2019(iParam0, iParam1, 4);
					if (((iParam0 == 2116770557 || iParam0 == -651064726) || iParam0 == -404270094) || iParam0 == 2093126853)
					{
						if (func_1116(iParam0) < func_1117(iParam0))
						{
							func_599(43, iParam0, iParam1, 1908068621, iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!func_593(46))
		{
			if (func_603(iParam0, -1238404098))
			{
				func_1113(1611247019);
				if (func_1114() == 3)
				{
					func_367(0, 10);
					iVar0 = func_2019(iParam0, iParam1, 8);
					if (((iParam0 == 2085530337 || iParam0 == -150591160) || iParam0 == -323969289) || iParam0 == 1504361882)
					{
						if (func_1116(iParam0) < func_1117(iParam0))
						{
							func_599(43, iParam0, iParam1, 1611247019, iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!func_593(47))
		{
			if (func_603(iParam0, 1160548794))
			{
				func_1113(1319635688);
				if (func_1114() == 4)
				{
					func_367(0, 10);
					iVar0 = func_2019(iParam0, iParam1, 16);
					if (((iParam0 == -1521783510 || iParam0 == 1714875242) || iParam0 == 927763737) || iParam0 == 1019229063)
					{
						if (func_1116(iParam0) < func_1117(iParam0))
						{
							func_599(43, iParam0, iParam1, 1319635688, iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
	}
}

bool func_1615(int iParam0, int iParam1)
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

void func_1616(var uParam0, int iParam1, int iParam2)
{
	iVar1 = func_2020(iParam1);
	func_2021(iParam1, iParam2);
	if (iVar1 >= 0 && uParam0->f_26 > 0)
	{
		func_2022(&(uParam0->f_26), iVar1);
		if (func_2023(uParam0->f_26, &iVar0))
		{
			func_2024(iVar0, iVar1);
		}
	}
}

bool func_1617(int iParam0, int iParam1)
{
	Var0 = { func_470(iParam0, 0, 0) };
	Var5 = { func_964(iParam0, Var0, Var0.f_4, 0) };
	if (func_1458(iParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return false;
	}
	_0x9a113c660aea3832(func_993(0), &Var5, iParam1);
	return true;
}

bool func_1618(var uParam0, int iParam1)
{
	return (uParam0->f_2 && iParam1) != 0;
}

bool func_1619(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4, bool bParam5)
{
	*iParam3 = 0;
	if (*uParam2 < 15)
	{
		return false;
	}
	if (!func_583(iParam0, 0))
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
		func_2025(iParam0, iParam1, uParam2, *iParam3);
	}
	return true;
}

int func_1620(int iParam0)
{
	return _money_get_cash_balance();
}

char* func_1621(int iParam0)
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

bool func_1622(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	if (Global_1572887->f_12 == -1)
	{
		return func_327((*Global_1835011)[iParam0]->f_1, 1);
	}
	return (_unlock_is_unlocked((*Global_1835011)[iParam0]->f_2) && !_unlock_is_visible((*Global_1835011)[iParam0]->f_2));
}

bool func_1623(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 25);
}

int func_1624(int iParam0)
{
	if (!func_247(iParam0))
	{
		return 0;
	}
	return (*Global_1888801)[iParam0]->f_3;
}

int func_1625(int iParam0)
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

bool func_1626(int iParam0)
{
	if ((iParam0 == 22 || iParam0 == 37) && !func_1053())
	{
		return true;
	}
	if (iParam0 == 61)
	{
		return true;
	}
	return false;
}

int func_1627(int iParam0, int iParam1)
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

int func_1628(int iParam0)
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

int func_1629(int iParam0)
{
	if (!func_1202(15, &Var0))
	{
		return -1;
	}
	Var0.f_3 = iParam0;
	Var0.f_2 = -125049320;
	if (_datafile_get_hash(&iVar5, &Var0))
	{
		iVar6 = func_2026(iVar5);
		return iVar6;
	}
	return -1;
}

bool func_1630(int iParam0, int iParam1)
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

bool func_1631(int iParam0)
{
	iParam0 = func_266(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (func_2027(iParam0) == 0)
	{
		return false;
	}
	return true;
}

bool func_1632(int iParam0, int iParam1)
{
	func_1202(15, &Var0);
	Var0.f_2 = -566397848;
	Var0.f_3 = iParam0;
	_datafile_get_data_node_index(&(Var0.f_1), &Var0);
	Var0.f_3 = iParam1;
	Var0.f_2 = 1368867264;
	_datafile_get_hash(&uVar6, &Var0);
	func_1202(15, &Var7);
	Var7.f_2 = -1222062814;
	Var7.f_3 = uVar6;
	if (_datafile_get_data_node_index(&(Var7.f_1), &Var7))
	{
		Var7.f_2 = -1148228754;
		_datafile_get_bool(&uVar5, &Var7);
	}
	return uVar5;
}

bool func_1633(int iParam0, bool bParam1)
{
	if (!func_2028(iParam0))
	{
		return false;
	}
	if (bParam1)
	{
		if (func_2029(iParam0, 8))
		{
			return false;
		}
	}
	if (func_2029(iParam0, 1))
	{
		return true;
	}
	return false;
}

bool func_1634(int iParam0, int iParam1)
{
	func_1202(15, &Var0);
	Var0.f_2 = -566397848;
	Var0.f_3 = iParam0;
	_datafile_get_data_node_index(&(Var0.f_1), &Var0);
	Var0.f_3 = iParam1;
	Var0.f_2 = 1368867264;
	_datafile_get_hash(&uVar5, &Var0);
	func_1202(15, &Var8);
	Var8.f_2 = -1222062814;
	Var8.f_3 = uVar5;
	if (_datafile_get_data_node_index(&(Var8.f_1), &Var8))
	{
		Var8.f_2 = 939842437;
		if (_datafile_get_hash(&iVar6, &Var8))
		{
			iVar7 = iVar6;
			return func_347(iVar7, 1, 0);
		}
	}
	return true;
}

bool func_1635()
{
	if (func_398())
	{
		if (!func_1622(4))
		{
			return true;
		}
	}
	return (_is_metaped_using_component(Global_35, -1725579161) || func_1568(-2061583405, &uVar0));
}

bool func_1636(int iParam0, int iParam1)
{
	func_1202(15, &Var0);
	Var0.f_2 = -566397848;
	Var0.f_3 = iParam0;
	_datafile_get_data_node_index(&(Var0.f_1), &Var0);
	Var0.f_3 = iParam1;
	Var0.f_2 = 1368867264;
	_datafile_get_hash(&uVar5, &Var0);
	func_1202(15, &Var7);
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

bool func_1637(int iParam0)
{
	if (!func_2028(Global_1310720->f_22))
	{
		return true;
	}
	if (func_1633(Global_1310720->f_22, 1))
	{
		return true;
	}
	if ((0 == iParam0 && 2 == Global_1310720->f_22) || (2 == iParam0 && 0 == Global_1310720->f_22))
	{
		return true;
	}
	return Global_1310720->f_22 == iParam0;
}

bool func_1638(int iParam0, int iParam1)
{
	func_1202(15, &Var0);
	Var0.f_2 = -1999103282;
	Var0.f_3 = iParam0;
	Var0.f_4 = iParam1;
	if (_datafile_get_data_node_index(&(Var0.f_1), &Var0))
	{
		Var0.f_2 = 1563492982;
		if (_datafile_get_hash(&iVar5, &Var0))
		{
			iVar6 = func_2030(iVar5);
			if (func_1622(iVar6))
			{
				return false;
			}
		}
		Var0.f_2 = 1975530226;
		if (_datafile_get_hash(&iVar5, &Var0))
		{
			iVar6 = func_2030(iVar5);
			if (!func_1622(iVar6))
			{
				return false;
			}
		}
		Var0.f_2 = 108838230;
		if (_datafile_get_hash(&iVar5, &Var0))
		{
			iVar7 = func_2031(iVar5);
			if (func_1937(iVar7))
			{
				return false;
			}
		}
		Var0.f_2 = 181294442;
		if (_datafile_get_hash(&iVar5, &Var0))
		{
			iVar7 = func_2031(iVar5);
			if (!func_1937(iVar7))
			{
				return false;
			}
		}
		return true;
	}
	return false;
}

int func_1639(int iParam0)
{
	if (!func_2032(iParam0))
	{
		return -1;
	}
	return &(Global_40.f_9096[iParam0]);
}

bool func_1640(int iParam0, int iParam1)
{
	return (Global_40.f_9571[iParam1] && iParam0) != 0;
}

int func_1641(vector3 vParam0, float fParam3)
{
	iVar0 = 0;
	while (iVar0 < &Global_1898329)
	{
		if (!func_191(Global_1898330[iVar0]))
		{
		}
		else
		{
			switch ((*Global_1898346)[iVar0]->f_3)
			{
				case 1:
					iVar1 = (*Global_1898346)[iVar0]->f_4;
					if (vdist(func_126(iVar1), vParam0) < func_1452(func_2033(iVar1) == 0f, fParam3, func_2033(iVar1)))
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

int func_1642(vector3 vParam0, float fParam3)
{
	iVar0 = 0;
	while (iVar0 < 201)
	{
		if (func_2034(iVar0, 0))
		{
			if (vdist(func_2035(iVar0), vParam0) < fParam3)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_1643(struct<2> Param0, float fParam2, float fParam3, float fParam4, int iParam5, int iParam6)
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

char* func_1644(int iParam0)
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

char* func_1645()
{
	return "cutDeleteMe";
}

bool func_1646(int iParam0, int iParam1, var uParam2, bool bParam3, int iParam4, bool bParam5)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	iVar0 = -1;
	if (iParam1 > -1 && iParam1 <= 5)
	{
		iVar0 = iParam1;
	}
	if (iParam4 != 0)
	{
		iVar1 = iParam4;
	}
	else
	{
		iVar1 = func_458(iParam1);
	}
	if (iVar0 == -1 && !func_461(iVar1, func_682()))
	{
		return true;
	}
	if (uParam2->f_1 != 0 && func_2036(uParam2, 1))
	{
		if (uParam2->f_1 == iVar1)
		{
			if (bParam3)
			{
				return func_2037(iParam0, uParam2);
			}
			else
			{
				return true;
			}
		}
		else if (uParam2->f_1 != iVar1)
		{
			func_2038(uParam2);
		}
	}
	if (!func_2036(uParam2, 1))
	{
		func_1985(&(uParam2->f_1));
		if (!bParam5)
		{
			if (!func_961(&(uParam2->f_1), &uVar2, iVar1, iVar0, 1, 0))
			{
				return true;
			}
		}
		uParam2->f_1 = iVar1;
		func_2039(uParam2, 1);
	}
	if (!bParam3)
	{
		return true;
	}
	return func_2037(iParam0, uParam2);
}

float func_1647(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			fVar0 = 40.55f;
			break;
		case 1:
			fVar0 = 14.35f;
			break;
		case 2:
			fVar0 = 28.2f;
			break;
		case 3:
			fVar0 = 34.04f;
			break;
		case 4:
			fVar0 = 17.4f;
			break;
		case 5:
			fVar0 = 30.83f;
			break;
		case 6:
			fVar0 = 1.43f;
			break;
		default:
			break;
	}
	return fVar0;
}

void func_1648(int iParam0)
{
	if (does_cam_exist(&(iLocal_829[iParam0])))
	{
		return;
	}
	Var0 = { func_2040(iParam0) };
	iLocal_829[iParam0] = create_camera_with_params(26379945, Var0, Var0.f_3, Var0.f_6, false, 2);
	func_1255();
	shake_cam(&(iLocal_829[iParam0]), "HAND_SHAKE", 0.025f);
}

void func_1649(int iParam0, bool bParam1)
{
	iVar0 = 0;
	while (iVar0 < iVar825)
	{
		if (iVar0 == iParam0)
		{
			if (does_cam_exist(&(iLocal_829[iVar0])))
			{
				set_cam_active(&(iLocal_829[iVar0]), bParam1);
			}
		}
		else if (does_cam_exist(&(iLocal_829[iVar0])))
		{
			set_cam_active(&(iLocal_829[iVar0]), false);
		}
		iVar0++;
	}
}

void func_1650(int iParam0, int iParam1)
{
	if (!does_cam_exist(&(iLocal_829[iParam0])))
	{
		return;
	}
	Var0 = { func_2040(iParam0) };
	set_cam_params(&(iLocal_829[iParam0]), Var0.f_7, Var0.f_10, Var0.f_13, floor((Var0.f_14 * 1000f)), 1, 1, 2, iParam1, 0);
}

void func_1651(char* sParam0, float fParam1)
{
	set_task_move_network_signal_float(Global_35, sParam0, fParam1);
	set_task_move_network_signal_float(&(vLocal_808[2]), sParam0, fParam1);
}

char* func_1652(int iParam0)
{
	Var0 = { func_2041(iParam0) };
	return Var0;
}

int func_1653(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1300031296;
		case 1:
			return 1885667965;
		case 2:
			return -1882188328;
		case 3:
			return -1300031296;
	}
	return 1367437629;
}

int func_1654(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, bool bParam12)
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
		if (func_988(iVar0, 2))
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
		func_2042(iVar1, iParam1, sParam0, 0, iParam10, 0, 0f, 0f, 0f, 0f, 0, 0, 4, 1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9, 0, 0, iParam11, bParam12);
		return iVar1;
	}
	return 0;
}

void func_1655(int iParam0)
{
	func_2043(iParam0, 10, 1, 1);
	func_2043(iParam0, 14, 1, 1);
	func_2043(iParam0, 11, 1, 1);
}

void func_1656()
{
	if (fVar1067 > 0.85f)
	{
		fLocal_1069 = 1f;
	}
	if (fVar1067 > fVar1066)
	{
		fLocal_1068 = (fVar1066 + (get_frame_time() * 0.02f));
	}
	else if (fVar1067 < fVar1066)
	{
		fLocal_1068 = (fVar1066 - (get_frame_time() * 0.02f));
	}
	fLocal_1068 = func_453(fVar1066, 0f, 1.1f);
	fVar0 = absf((fVar1066 - fVar1067));
	bVar2 = fVar1067 > fVar1066;
	fVar1 = (fVar0 * func_1452(bVar2, (0.5f * get_frame_time()), (0.3f * get_frame_time())));
	fLocal_1068 = (fVar1066 + func_1452(bVar2, fVar1, -fVar1));
	fLocal_1068 = func_453(fVar1066, 0f, 1f);
}

void func_1657(int iParam0, float fParam1)
{
	if (fParam1 < 0f || fParam1 > 1f)
	{
		return;
	}
	if (!does_cam_exist(&(iLocal_829[iParam0])))
	{
		return;
	}
	Var0 = { func_2040(iParam0) };
	set_cam_params(&(iLocal_829[iParam0]), func_1663(Var0, Var0.f_7, fParam1), func_1663(Var0.f_3, Var0.f_10, fParam1), func_1513(Var0.f_6, Var0.f_13, fParam1), 0, 1, 1, 2, 0, 0);
}

void func_1658(float fParam0, float fParam1)
{
	iVar0 = floor((fParam0 * 1000f));
	iVar1 = floor((255f * func_453(fParam1, 0f, 1f)));
	set_pad_shake(0, iVar0, iVar1);
}

bool func_1659(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
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
	return func_2044(iParam0, &Var0);
}

bool func_1660(int iParam0, bool bParam1)
{
	if (bParam1 && !func_10(iParam0))
	{
		return false;
	}
	iVar0 = func_188(iParam0);
	if (!_uiprompt_has_hold_mode((*Global_1945938)[iVar0]->f_3))
	{
		return is_control_pressed(2, (*Global_1945938)[iVar0]->f_4);
	}
	return _uiprompt_is_hold_mode_running((*Global_1945938)[iVar0]->f_3);
}

void func_1661(int iParam0)
{
	func_1254();
	func_1648(iParam0);
	func_1649(iParam0, 1);
	render_script_cams(true, false, 3000, true, false, 0);
	func_1650(iParam0, 1);
}

void func_1662(int iParam0, char* sParam1)
{
	request_task_move_network_state_transition(&(vLocal_808[iParam0]), sParam1);
}

Vector3 func_1663(vector3 vParam0, vector3 vParam3, float fParam6)
{
	return FtoV((1f - fParam6)) * vParam0 + Vector(fParam6, fParam6, fParam6) * vParam3;
}

void func_1664()
{
	if (!func_164())
	{
		func_1248(0, 0);
		iLocal_1097 = 0;
	}
	bVar0 = func_2045();
	if (bVar0)
	{
		if (!bVar1096)
		{
			if (func_166(7))
			{
				iLocal_1099 = 0;
				uLocal_1070 = iVar1068 + 1;
				iLocal_1098 = 1;
			}
		}
		if (bVar1096)
		{
			if (!bVar1097)
			{
				if (func_164() && func_2046())
				{
					uLocal_1071 = iVar1069 + 1;
					iLocal_1099 = 1;
				}
			}
		}
	}
	else
	{
		iLocal_1098 = 0;
		iLocal_1099 = 0;
	}
	fLocal_1072 = (to_float(iVar1069) / to_float(iVar1068));
	bVar1 = func_2046();
	if (!func_166(7))
	{
		if (!bVar0)
		{
			func_439(7);
		}
	}
	switch (iVar1095)
	{
		case 0:
			fLocal_1076 = 0f;
			if (bVar1)
			{
				fLocal_1076 = 1f;
				iLocal_1097 = 1;
			}
			break;
		case 1:
			if (!bVar0)
			{
				fLocal_1076 = 1f;
				iLocal_1097 = 2;
			}
			break;
		case 2:
			fLocal_1076 = 1f;
			if (bVar0)
			{
				iLocal_1097 = 3;
			}
			break;
		case 3:
			if (!bVar0)
			{
				fLocal_1076 = 0f;
				iLocal_1097 = 0;
			}
			else if (bVar1)
			{
				fLocal_1076 = 1f;
				iLocal_1097 = 1;
			}
			break;
	}
}

void func_1665(bool bParam0)
{
	if (!_uiprompt_is_valid(iLocal_207))
	{
		return;
	}
	if ((bParam0 && func_166(8)) || (!bParam0 && !func_166(8)))
	{
		return;
	}
	if (bParam0)
	{
		func_439(8);
	}
	else
	{
		func_168(8);
	}
	_uiprompt_set_beat_mode_grayed_out(iLocal_207, bParam0);
	if (!bParam0)
	{
		func_168(7);
	}
}

void func_1666(int iParam0)
{
	if (!func_1668(iParam0))
	{
		vLocal_216[iParam0] = &vLocal_216[iParam0] + 1;
	}
}

void func_1667(int iParam0, int iParam1, int iParam2, int iParam3)
{
	fVar0 = (1f / IntToFloat(vLocal_216[iParam0]->f_1));
	fVar1 = (fVar0 * 0.5f);
	if (!vLocal_216[iParam0]->f_2 == 0f)
	{
		fVar2 = vLocal_216[iParam0]->f_2;
	}
	if (fVar2 > 0.32f && fVar2 < 0.34f)
	{
		fVar2 = 0.34f;
	}
	if (fVar2 > 0.66f && fVar2 < 0.68f)
	{
		fVar2 = 0.67f;
	}
	func_2047(0, fVar2, fVar1070 == 1f, 1);
	vLocal_216[iParam0]->f_2 = func_453((vLocal_216[iParam0]->f_2 + func_1452(fVar1070 == 1f, fVar0, fVar1)), 0f, 1f);
	if (vLocal_216[iParam0]->f_2 > 0.9f)
	{
		vLocal_216[iParam0]->f_2 = 1f;
	}
	iVar3 = func_1269(iParam0);
	attach_entity_to_entity(&(iLocal_666[66]), &(iLocal_666[iVar3]), 0, func_1663(func_1234(iParam1), func_1234(iParam2), vLocal_216[iParam0]->f_2), func_1234(iParam3), false, false, false, false, 2, true, false, false);
}

bool func_1668(int iParam0)
{
	return &vLocal_216[iParam0] >= vLocal_216[iParam0]->f_1;
}

void func_1669(int iParam0)
{
	if (func_884(vLocal_1100[iParam0]->f_2, 1))
	{
		return;
	}
	switch (iParam0)
	{
		case 4:
			set_anim_scene_entity(&(vLocal_1100[iParam0]), "John", Global_35, 0);
			set_anim_scene_entity(&(vLocal_1100[iParam0]), "HAMMER", &(iLocal_666[64]), 0);
			set_anim_scene_entity(&(vLocal_1100[iParam0]), "CharlesSmith", &(vLocal_808[2]), 0);
			break;
		case 5:
			set_anim_scene_entity(&(vLocal_1100[iParam0]), "John", Global_35, 0);
			set_anim_scene_entity(&(vLocal_1100[iParam0]), "Uncle", &(vLocal_808[1]), 0);
			set_anim_scene_entity(&(vLocal_1100[iParam0]), "CharlesSmith", &(vLocal_808[2]), 0);
			break;
		case 6:
			break;
		case 2:
			break;
		case 3:
			set_anim_scene_entity(&(vLocal_1100[iParam0]), "CharlesSmith", &(vLocal_808[2]), 0);
			set_anim_scene_entity(&(vLocal_1100[iParam0]), "HAMMER", &(iLocal_666[65]), 0);
			set_anim_scene_entity(&(vLocal_1100[iParam0]), "JOHN", Global_35, 0);
			set_anim_scene_entity(&(vLocal_1100[iParam0]), "Joist", &(iLocal_666[81]), 0);
			break;
		case 7:
			set_anim_scene_entity(&(vLocal_1100[iParam0]), "John", Global_35, 0);
			set_anim_scene_entity(&(vLocal_1100[iParam0]), "Uncle", &(vLocal_808[1]), 0);
			break;
		case 8:
			set_anim_scene_entity(&(vLocal_1100[iParam0]), "JOHN", Global_35, 0);
			set_anim_scene_entity(&(vLocal_1100[iParam0]), "CharlesSmith", &(vLocal_808[2]), 0);
			set_anim_scene_entity(&(vLocal_1100[iParam0]), "uncle", &(vLocal_808[1]), 0);
			break;
		case 9:
			break;
		case 10:
		case 11:
			set_anim_scene_entity(&(vLocal_1100[iParam0]), "John", Global_35, 0);
			set_anim_scene_entity(&(vLocal_1100[iParam0]), "CharlesSmith", &(vLocal_808[2]), 0);
			set_anim_scene_entity(&(vLocal_1100[iParam0]), "uncle", &(vLocal_808[1]), 0);
			set_anim_scene_entity(&(vLocal_1100[iParam0]), "p_hammer01x", &(iLocal_666[65]), 0);
			set_anim_scene_entity(&(vLocal_1100[iParam0]), "Wall", &(iLocal_666[90]), 0);
			set_anim_scene_entity(&(vLocal_1100[iParam0]), "WALL02", &(iLocal_666[91]), 0);
			set_anim_scene_entity(&(vLocal_1100[iParam0]), "WALL03", &(iLocal_666[92]), 0);
			set_anim_scene_entity(&(vLocal_1100[iParam0]), "WALL04", &(iLocal_666[93]), 0);
			set_anim_scene_entity(&(vLocal_1100[iParam0]), "WALL03", &(iLocal_666[94]), 0);
			break;
		case 13:
			set_anim_scene_entity(&(vLocal_1100[iParam0]), "LUMBER", &(iLocal_666[102]), 0);
			set_anim_scene_entity(&(vLocal_1100[iParam0]), "Male01", &(vLocal_808[2]), 0);
			set_anim_scene_entity(&(vLocal_1100[iParam0]), "male", Global_35, 0);
			break;
		case 12:
		case 14:
			set_anim_scene_entity(&(vLocal_1100[iParam0]), "John", Global_35, 0);
			set_anim_scene_entity(&(vLocal_1100[iParam0]), "CharlesSmith", &(vLocal_808[2]), 0);
			set_anim_scene_entity(&(vLocal_1100[iParam0]), "Uncle", &(vLocal_808[1]), 0);
			break;
	}
}

void func_1670(int iParam0)
{
	if (does_cam_exist(&(iLocal_829[iParam0])))
	{
		if (is_cam_active(&(iLocal_829[iParam0])))
		{
			render_script_cams(false, false, 3000, true, false, 0);
			set_cam_active(&(iLocal_829[iParam0]), false);
		}
		destroy_cam(&(iLocal_829[iParam0]), false);
	}
}

bool func_1671(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1:
			break;
		case 0:
			break;
		case 1:
			if (iParam1 == 12)
			{
				return true;
			}
			break;
		case 2:
			if (iParam1 == 0 || iParam1 == 12)
			{
				return true;
			}
			break;
		case 3:
			if (iParam1 == 1 || iParam1 == 12)
			{
				return true;
			}
			break;
		case 4:
			if (iParam1 == 2 || iParam1 == 12)
			{
				return true;
			}
			break;
		case 5:
			if (iParam1 == 3 || iParam1 == 12)
			{
				return true;
			}
			break;
		case 6:
			if (iParam1 == 4 || iParam1 == 12)
			{
				return true;
			}
			break;
		case 7:
			if (iParam1 == 5 || iParam1 == 12)
			{
				return true;
			}
			break;
		case 8:
			if (iParam1 == 6 || iParam1 == 12)
			{
				return true;
			}
			break;
		case 9:
			if (iParam1 == 7 || iParam1 == 12)
			{
				return true;
			}
			break;
		case 10:
			if (iParam1 == 10 || iParam1 == 12)
			{
				return true;
			}
			break;
		case 11:
			if (iParam1 == 11 || iParam1 == 12)
			{
				return true;
			}
			break;
		case 12:
			if (iParam1 == 12 || iParam1 == 13)
			{
				return true;
			}
			break;
		case 13:
			if ((iParam1 >= 12 && iParam1 <= 14) || iParam1 == 13)
			{
				return true;
			}
			break;
		case 14:
			if ((iParam1 >= 12 && iParam1 <= 14) || iParam1 == 13)
			{
				return true;
			}
			break;
		case 15:
			if ((iParam1 >= 12 && iParam1 <= 16) || iParam1 == 13)
			{
				return true;
			}
			break;
		case 16:
			if ((iParam1 >= 12 && iParam1 <= 17) || iParam1 == 13)
			{
				return true;
			}
			break;
		case 17:
			if ((iParam1 >= 14 && iParam1 <= 18) || iParam1 == 13)
			{
				return true;
			}
			break;
		case 18:
		case 19:
		case 20:
			if ((iParam1 >= 12 && iParam1 <= 18) || iParam1 == 13)
			{
				return true;
			}
			break;
		case 21:
			if ((iParam1 >= 14 && iParam1 <= 19) || iParam1 == 13)
			{
				return true;
			}
			break;
		case 22:
			if ((iParam1 >= 14 && iParam1 <= 21) || iParam1 == 13)
			{
				return true;
			}
			break;
		case 23:
			if ((iParam1 >= 14 && iParam1 <= 22) || iParam1 == 13)
			{
				return true;
			}
			break;
		case 24:
			if ((iParam1 >= 14 && iParam1 <= 23) || iParam1 == 13)
			{
				return true;
			}
			break;
		case 25:
			if ((iParam1 >= 14 && iParam1 <= 24) || iParam1 == 13)
			{
				return true;
			}
			break;
		case 26:
			if ((iParam1 >= 14 && iParam1 <= 25) || iParam1 == 13)
			{
				return true;
			}
			break;
		case 27:
			if (((iParam1 >= 20 && iParam1 <= 26) || iParam1 == 13) || iParam1 == 19)
			{
				return true;
			}
			break;
		case 28:
			if (((iParam1 >= 20 && iParam1 <= 31) || iParam1 == 13) || iParam1 == 19)
			{
				return true;
			}
			break;
		case 29:
			if (iParam1 == 32)
			{
				return true;
			}
			break;
		case 30:
			if (iParam1 == 32 || iParam1 == 33)
			{
				return true;
			}
			break;
		case 31:
			if (iParam1 >= 32 && iParam1 <= 34)
			{
				return true;
			}
			break;
		case 32:
			if (iParam1 >= 32 && iParam1 <= 35)
			{
				return true;
			}
			break;
		case 33:
			if (iParam1 >= 32 && iParam1 <= 36)
			{
				return true;
			}
			break;
		case 34:
			if ((iParam1 >= 37 && iParam1 <= 38) || iParam1 == 32)
			{
				return true;
			}
			break;
		case 35:
			if ((iParam1 >= 37 && iParam1 <= 39) || iParam1 == 32)
			{
				return true;
			}
			break;
		case 36:
			if ((iParam1 >= 37 && iParam1 <= 40) || iParam1 == 32)
			{
				return true;
			}
			break;
		case 37:
			if ((iParam1 >= 37 && iParam1 <= 41) || iParam1 == 32)
			{
				return true;
			}
			break;
		case 38:
			if ((iParam1 >= 37 && iParam1 <= 42) || iParam1 == 32)
			{
				return true;
			}
			break;
		case 39:
			if ((iParam1 >= 37 && iParam1 <= 43) || iParam1 == 32)
			{
				return true;
			}
			break;
		case 40:
			if ((iParam1 >= 37 && iParam1 <= 44) || iParam1 == 32)
			{
				return true;
			}
			break;
		case 41:
			if ((iParam1 >= 37 && iParam1 <= 45) || iParam1 == 32)
			{
				return true;
			}
			break;
		case 42:
			if ((iParam1 >= 37 && iParam1 <= 46) || iParam1 == 32)
			{
				return true;
			}
			break;
		case 43:
			if ((iParam1 >= 37 && iParam1 <= 47) || iParam1 == 32)
			{
				return true;
			}
			break;
		case 44:
			if ((iParam1 >= 37 && iParam1 <= 49) || iParam1 == 32)
			{
				return true;
			}
			break;
		case 45:
			if ((iParam1 >= 37 && iParam1 <= 52) || iParam1 == 32)
			{
				return true;
			}
			break;
		default:
			break;
	}
	return false;
}

bool func_1672(int iParam0, var uParam1)
{
	if (!does_entity_exist(iParam0))
	{
		return true;
	}
	if (uParam1->f_1 == 0)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < uParam1->f_134)
	{
		if (!_0xb0b2c6d170b0e8e5(&(uParam1->f_135[iVar0])))
		{
			return false;
		}
		iVar0++;
	}
	return _0xa0bc8faed8cfeb3c(iParam0);
}

int func_1673(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	bVar0 = false;
	bVar1 = true;
	if (uParam1->f_1 == 0)
	{
		return 0;
	}
	if (!func_1672(iParam0, uParam1))
	{
		bVar1 = false;
	}
	iVar3 = uParam1->f_1;
	iVar2 = func_959(iVar3);
	if (iVar2 == -1)
	{
		iVar2 = 0;
	}
	if (iVar2 >= 0 && iVar2 <= 5)
	{
		bVar0 = true;
	}
	Global_1905941 = iVar2;
	func_462(Global_40.f_7729, 4096);
	func_463(&Global_1905941, 4096);
	Global_40.f_7729 = &Global_1905941;
	func_2048(&(uParam1->f_1));
	iVar4 = -1;
	if (!bVar0)
	{
		iVar4 = func_2049(uParam1->f_1);
	}
	func_1170(&(Global_1946804->f_1497), iVar4, 0);
	func_468(iVar3, iParam0, bVar0, 1, bVar1, 0);
	func_469(iParam0);
	if (bParam2)
	{
		func_2038(uParam1);
	}
	if (bParam3)
	{
		func_465();
	}
	if (bParam4)
	{
		if (bParam5)
		{
			func_479(0);
		}
		else
		{
			func_479(2048);
		}
	}
	return 1;
}

void func_1674(int iParam0, int iParam1)
{
	iVar1 = 0;
	while (iVar1 < iParam0)
	{
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (func_2050(iVar0) >= iParam1)
			{
			}
			else
			{
				func_2051(iVar0, iParam1 > 7);
			}
			iVar0++;
		}
		iVar1++;
	}
	func_475(10, 0, 0, 0, 0);
}

void func_1675(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < iParam0)
	{
		func_2052();
		iVar0++;
	}
	func_475(9, 0, 0, 0, 0);
}

void func_1676(int iParam0, int iParam1)
{
	if (!func_10(iParam0))
	{
		return;
	}
	iVar0 = func_188(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_allowed_action((*Global_1945938)[iVar0]->f_3, iParam1);
}

void func_1677()
{
	if (func_10(iVar1076))
	{
		if (func_2053(iVar1076, 1))
		{
			bVar2 = true;
		}
	}
	if (bVar2)
	{
		func_27(vLocal_614[7], 1);
		fLocal_1069 = func_453((fVar1067 + 0.25f), 0f, (fVar1066 + 0.2f));
	}
	fVar0 = absf((fVar1066 - fVar1067));
	bVar1 = fVar1067 > fVar1066;
	fVar0 = (fVar0 * (func_1452(bVar1, 1f, 2f) * get_frame_time()));
	fLocal_1068 = (fVar1066 + func_1452(bVar1, fVar0, -fVar0));
	if (!bVar2)
	{
		fLocal_1069 = (fVar1067 - (0.3f * get_frame_time()));
	}
	fLocal_1068 = func_453(fVar1066, 0f, 1f);
	fLocal_1069 = func_453(fVar1067, 0f, 1.5f);
}

void func_1678(var uParam0, char* sParam1)
{
	if (is_string_null_or_empty(sParam1))
	{
		return;
	}
	StringCopy(&(uParam0->f_806), sParam1, 64);
}

void func_1679(var uParam0, char* sParam1)
{
	if (func_787(uParam0, 8192))
	{
		return;
	}
	if (_does_string_exist_in_string(sParam1, "cutscene@"))
	{
		iVar0 = _0x94e8ca3dee952789(sParam1, "@");
		if (_0x94e8ca3dee952789(sParam1, "@") > 2)
		{
			MemCopy(&(uParam0->f_800), {func_2054("cutscene@", _0x5b4a8121a47d844d((iVar0 - 1)), 1, 63)}, 4);
		}
		_0x3c3c7b1b5ec08764();
	}
	else
	{
		MemCopy(&(uParam0->f_800), {func_2054("cutscene@", sParam1, 1, 63)}, 4);
	}
	func_750(uParam0, 8192);
}

Vector3 func_1680(var uParam0)
{
	return uParam0->f_5;
}

Vector3 func_1681(var uParam0)
{
	MemCopy(&uVar0, {func_2055(uParam0)}, 8);
	if (!_does_anim_scene_exist(uParam0->f_805))
	{
		uParam0->f_805 = _create_anim_scene(&(uParam0->f_800), 0, 0, false, true);
	}
	else if (_is_anim_scene_metadata_loaded(uParam0->f_805, false))
	{
		if (_get_anim_scene_entity_matrix(uParam0->f_805, func_1212(Global_35), &vVar14, false, 0, 2))
		{
			vVar8 = { vVar14 };
		}
		else
		{
			_get_anim_scene_origin(uParam0->f_805, &vVar8, &uVar11, 2);
		}
		_delete_anim_scene(uParam0->f_805);
		return vVar8;
	}
	return 0f, 0f, 0f;
}

void func_1682(var uParam0, vector3 vParam1)
{
	if (func_399(vParam1))
	{
		return;
	}
	uParam0->f_5 = { vParam1 };
}

float func_1683(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!does_entity_exist(iParam0))
	{
		return 0f;
	}
	return get_distance_between_coords(get_entity_coords(iParam0, false, false), vParam1, bParam4);
}

float func_1684(var uParam0)
{
	return uParam0->f_795;
}

void func_1685()
{
	Global_1946804->f_858 = (Global_1946804->f_858 - 1);
	if (Global_1946804->f_858 <= 0)
	{
		Var0 = 35;
		func_987(Var0);
	}
}

void func_1686(var uParam0)
{
	if (!_does_anim_scene_exist(uParam0->f_804))
	{
		return;
	}
	if (!_is_anim_scene_loaded(uParam0->f_804, true, false))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!is_string_null_or_empty(uParam0->f_822[iVar0]) && (_0x23e33cb9f4a3f547(uParam0->f_804, uParam0->f_822[iVar0]) || _0x0df57f86fe71dbe5(uParam0->f_804, uParam0->f_822[iVar0])))
		{
			_0xae6ada8fe7e84acc(uParam0->f_804, uParam0->f_822[iVar0]);
		}
		uParam0->f_822[iVar0]->f_8 = 0;
		iVar0++;
	}
}

void func_1687(var uParam0)
{
	if (_does_volume_exist(uParam0->f_4))
	{
		if (func_787(uParam0, 16))
		{
			_0xa1cfb35069d23c23(uParam0->f_4);
			_0x74c2b3dc0b294102(uParam0->f_4);
			func_2056(uParam0);
			_0xd17672447692478e(uParam0->f_4, 0);
		}
	}
	if (func_787(uParam0, 8))
	{
		_delete_volume(uParam0->f_4);
		func_1317(uParam0, 8, 1);
	}
	uParam0->f_4 = 0;
	func_1317(uParam0, 16, 1);
}

struct<8> func_1688(var uParam0)
{
	return uParam0->f_806;
}

void func_1689(var uParam0)
{
	Var0 = { func_2057() };
	func_1678(uParam0, &Var0);
}

void func_1690(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (func_787(uParam0, 16))
	{
		return;
	}
	if (!_does_volume_exist(uParam0->f_4) && !func_1713(uParam0->f_5, 0f, 0f, 0f))
	{
		uParam0->f_4 = _create_volume_box_with_custom_name(uParam0->f_5, 0f, 0f, 0f, 5f, 5f, 5f, func_2058());
		func_750(uParam0, 8);
	}
	if (_does_volume_exist(uParam0->f_4))
	{
		_0xb56d41a694e42e86(uParam0->f_4, iParam1, iParam4, 0, -1, -1, iParam3);
		_0x18262cafebb5fbe1(uParam0->f_4, iParam1, 0, 0, -1, -1, 0);
		func_2059(uParam0, uParam0->f_4, 0, 1);
		_0xc1799fafd2fdf52b(uParam0->f_4, 0, 0, iParam2);
		func_750(uParam0, 16);
	}
}

void func_1691(var uParam0)
{
	{
		func_2060(uParam0);
		{
		}
	}
}

{
