void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_1955 = 1;
	fLocal_1956 = 220f;
	iLocal_1959 = -1;
	iLocal_1961 = -1679307491;
	vLocal_2030 = { 0f, -2.6f, 0f };
	fLocal_2033 = 0f;
	vLocal_2034 = { 0f, -4.9f, 2.12f };
	vLocal_2037 = { 0f, 0f, 0f };
	fLocal_2041 = -1f;
	fLocal_2042 = -1f;
	vLocal_2044 = { -0.047f, 0.181f, 0f };
	vLocal_2047 = { 180f, 90f, 0f };
	fLocal_2073 = 0.5f;
	iLocal_2079 = -1;
	iLocal_2140 = -1;
	vLocal_2141 = { 0f, 0f, 0.238f };
	vLocal_2144 = { 0f, 0f, 0f };
	vLocal_2147 = { 0f, 0f, 0f };
	vLocal_2156 = { 0.284f, 0.176f, 0.176f };
	vLocal_2159 = { 0f, -156.24f, 0f };
	vLocal_2162 = { -0.004f, -0.536f, 0.054f };
	vLocal_2165 = { -72.72f, 1.44f, 0f };
	vLocal_2168 = { 0.425f, 0.014f, 0.064f };
	vLocal_2171 = { -90.72f, -90f, 0f };
	fLocal_2188 = -1f;
	iLocal_2192 = -1;
	vLocal_2193 = { 0f, 8f, 0f };
	vLocal_2196 = { 0f, 0f, 45f };
	iLocal_2561 = -1;
	if (has_force_cleanup_occurred(4642))
	{
		func_1(&uLocal_2562, 1073741824);
		func_2(&uLocal_2562, 1);
		terminate_this_thread();
	}
	while (!func_3(64))
	{
		wait(0);
	}
	func_4(&uScriptParam_0, &uLocal_2562);
	func_5(&uLocal_2562);
	while (!func_6(&uLocal_2562, -2147483648))
	{
		func_7(&uLocal_2562);
		wait(0);
	}
	while (!func_2(&uLocal_2562, 0))
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
	iLocal_140 = func_125(uParam0);
	iLocal_140 = iLocal_140;
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
	if (does_particle_fx_looped_exist(iVar2066))
	{
		stop_particle_fx_looped(iVar2066, false);
	}
	func_163(0);
	_0x935cf6e42baf7f4d(Global_35);
	clear_weather_type_persist();
	func_164(0);
	func_165(1);
	func_166(1);
	if (!func_167(201))
	{
		func_168(1);
	}
	func_169(6, 1);
	set_ped_config_flag(Global_35, 26, false);
	if (_0x927b810e43e99932(&Local_1992))
	{
		_0x0a5a4f1979abb40e(&Local_1992);
	}
	_set_ped_infinite_ammo_clip(Global_35, false);
	func_170(0);
	if (!is_entity_dead(Global_35))
	{
		_0xbf4dc1784be94dfa(Global_35, false, get_hash_key(func_171(72)));
		task_clear_look_at(Global_35);
		func_172(uParam0, Global_35, 0, 1);
	}
	if (!iVar2137 == -1)
	{
		if (is_stream_playing(iVar2137))
		{
			stop_stream(iVar2137);
		}
	}
	func_173(1, 0);
	if (func_167(21))
	{
		_0x87e6302fc61208cc("BLOCKED_CONTEXTS_SPUR");
		stop_ped_speaking(Global_35, false);
		func_174(21);
	}
	func_175(0);
	set_player_control(player_id(), true, 0, false);
	func_176(1);
	func_177();
	_0xc67a4910425f11f1(player_id(), 0);
	set_player_control(player_id(), true, 0, false);
	_0x424ffcb9f0d2d4b5(Local_141.f_40, 1);
	if (func_167(181))
	{
		func_179(func_178(6, 4), 200f, 5);
		func_174(181);
	}
	func_180(1);
	func_181(-1717960576);
	reset_scenario_groups_enabled();
	iVar0 = 0;
	while (iVar0 < iVar1337)
	{
		if (_does_scenario_point_exist(&(Local_1340[iVar0])))
		{
			_delete_scenario_point(&(Local_1340[iVar0]));
		}
		iVar0++;
	}
	pause_clock(false, 0);
	set_random_trains(true);
	if (func_167(2))
	{
		func_182(0, 0);
	}
	func_71(Global_1935630, 262144);
	func_183();
	set_time_scale(1f);
	clear_gps_custom_route();
	set_gps_custom_route_render(false, 3, 30);
	set_random_trains(true);
	iVar1 = 0;
	while (iVar1 < iVar1426)
	{
		if (does_entity_exist(Local_1429[iVar1]->f_7))
		{
			delete_mission_train(&(Local_1429[iVar1]->f_7));
		}
		iVar1++;
	}
	func_184(uParam0, 0, 94, 0);
	_0x9851de7aec10b4e1(func_178(8, 6), 30f, 1, 0);
	func_186(func_185(6), 0);
	func_186(func_185(8), 0);
	func_186(func_185(9), 0);
	func_187(uParam0, &(Local_218[6]), 1);
	if (!func_22(uParam0) == 0)
	{
		func_188(0, 0, 0, 0, 0);
		func_189(1, 1);
	}
	if (func_22(uParam0) == 0)
	{
		func_190();
	}
	func_174(16);
	func_191(0);
	if (!is_entity_dead(Global_35))
	{
		_0x67e21acc5c0c970c(Global_35, 9, true);
		_0x67e21acc5c0c970c(Global_35, 16, true);
		_0x67e21acc5c0c970c(Global_35, 17, true);
		set_ped_config_flag(Global_35, 263, false);
		freeze_entity_position(Global_35, false);
		if (!is_entity_visible(Global_35))
		{
			set_entity_visible(Global_35, true);
		}
	}
	if (!is_entity_dead(&(Local_218[6])))
	{
		if (!is_entity_visible(&(Local_218[6])))
		{
			set_entity_visible(&(Local_218[6]), true);
		}
	}
	iVar2 = 0;
	while (iVar2 <= 1)
	{
		func_192(iVar2, 0);
		iVar2++;
	}
	_0xdd1232b332cbb9e7(3, 1, 0);
	func_113(1);
	if (_does_propset_exist(iVar1386))
	{
		func_193(iVar1386);
	}
	if (!func_167(3))
	{
		if (does_entity_exist(&(iLocal_979[0])))
		{
			func_194(uParam0, &(iLocal_979[0]));
			if (_does_propset_exist(iVar1386))
			{
				_delete_propset(iVar1386, true, true);
			}
			delete_vehicle(iLocal_979[0]);
		}
		if (func_195(uParam0) == 1)
		{
			if (!is_entity_dead(Global_35))
			{
				_0x9851de7aec10b4e1(get_entity_coords(Global_35, true, false), 100f, 1, 0);
			}
		}
		if (!is_entity_dead(Global_35))
		{
			if (!is_ped_injured(Global_35))
			{
				clear_ped_tasks(Global_35, 1, 0);
			}
			if (_0x0b7cb1300cbfe19c(Global_35, 1))
			{
				stop_anim_playback(Global_35, 0, false);
			}
		}
	}
	func_196(uParam0);
	set_player_control(player_id(), true, 0, false);
	func_197(69);
	func_198();
	func_199(uParam0, func_167(3));
	if (_0x91a5f9cbebb9d936(uVar2023))
	{
		remove_scenario_blocking_area(uVar2023, false);
	}
	if (func_200(func_185(6)))
	{
		func_194(uParam0, &(Local_218[6]));
		func_201(uParam0, func_185(6), &(Local_218[6]), 0, 1, 1, 0);
	}
	Local_218[6] = 0;
	if (func_200(func_185(7)))
	{
		func_194(uParam0, &(Local_218[7]));
		func_201(uParam0, func_185(7), &(Local_218[7]), 0, 1, 1, 0);
		Local_218[7] = 0;
	}
	if (func_202(func_185(7)))
	{
		func_203(&(Local_218[1]), func_185(7), 1, 1, 1);
		Local_218[1] = 0;
	}
	if (func_204(func_185(8)))
	{
		func_201(uParam0, func_185(8), &(Local_218[8]), 0, !func_167(3), !func_167(3), 0);
	}
	if (func_204(func_185(9)))
	{
		func_201(uParam0, func_185(9), &(Local_218[9]), 0, !func_167(3), !func_167(3), 0);
	}
	if (_0xde0ea444735c1368(Local_141.f_48))
	{
		_0x2c87c3e1c7b96ee2(Local_141.f_48);
	}
	func_205();
	func_206(0);
	func_207(0, 0, 1103626240);
	func_208();
	func_209();
	func_210();
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
	iVar0 = func_211(*iParam0);
	if ((*Global_1945938)[iVar0]->f_16 != get_id_of_this_thread() && bParam2)
	{
		*iParam0 = 0;
		return;
	}
	func_212(iVar0);
	*iParam0 = 0;
}

int func_12(int iParam0)
{
	if (!func_213(iParam0))
	{
		return 0;
	}
	return (*Global_1835011)[iParam0]->f_1;
}

void func_13(int iParam0, bool bParam1, int iParam2)
{
	if (!func_214(iParam0))
	{
		if (!bParam1)
		{
		}
		return;
	}
	if (!func_215(iParam0) && !func_216(iParam0))
	{
		if (!bParam1)
		{
		}
		return;
	}
	if (func_217(iParam0) == 0)
	{
	}
	if (iParam2 == 2 && !func_215(iParam0))
	{
		iParam2 = -1;
	}
	if (func_218(iParam0) == 3 || (func_218(iParam0) == 1 && _0x01f4d242765c6b24(func_217(iParam0))))
	{
		func_220(func_219(iParam0), func_217(iParam0), iParam2);
		if ((!func_214(Global_1572864->f_8) && !func_221(0, 1, 0)) && !func_222(&Global_1935630, 32768))
		{
			iVar0 = func_223(iParam0);
			if (iVar0 != -1)
			{
				func_224(0);
			}
			else if (func_219(iParam0) == 8)
			{
				iVar0 = func_225();
				if (iVar0 != -1)
				{
					func_224(0);
				}
			}
		}
	}
	func_226(iParam0, 0);
	if (func_227(0) == iParam0)
	{
		func_40(1);
		func_228(0);
		func_229(1);
	}
	func_230(iParam0, 1);
	func_231(iParam0);
}

void func_14()
{
	Global_1572864->f_8 = -1;
	Global_1572864->f_9 = -1;
	Global_1572864->f_10 = -1;
	func_232(0);
	func_233(0);
	func_64(0);
	func_65(0);
	func_234(0);
	func_235(1f);
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
		func_236();
	}
	_0xa0cefcea390aab9b(0);
}

void func_16(bool bParam0, int iParam1)
{
	if (func_237())
	{
		_0xdd1232b332cbb9e7(3, 1, 0);
	}
	if (bParam0)
	{
		if (func_238())
		{
			func_113(1);
		}
	}
	_0x36559148b78853b3(0, iParam1, 0);
}

void func_17(var uParam0, bool bParam1)
{
	Var0 = func_217(func_12(uParam0->f_607));
	Var0.f_1 = 0;
	Var0.f_2 = func_132(func_33(uParam0));
	Var0.f_4 = (get_entity_health(Global_35) * 100 / get_entity_max_health(Global_35, false));
	Var0.f_5 = Global_40.f_7729;
	Var0.f_6 = func_239(0);
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
		func_240(iVar0, iParam0);
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
		if (func_241((*uParam1)[iVar0], 1048576))
		{
			switch (iParam0)
			{
				case 0:
					if ((*uParam1)[iVar0]->f_9 == 7)
					{
						func_242((*uParam1)[iVar0], 1);
					}
					break;
				case 1:
				case 2:
					if ((*uParam1)[iVar0]->f_9 == 3)
					{
						func_242((*uParam1)[iVar0], 1);
					}
					break;
				case 3:
					if ((*uParam1)[iVar0]->f_9 == 2)
					{
						func_242((*uParam1)[iVar0], 1);
					}
					break;
			}
		}
		iVar0++;
	}
}

bool func_26(var uParam0)
{
	return func_243(*uParam0, 1);
}

void func_27(var uParam0, bool bParam1)
{
	if (bParam1 || !func_26(uParam0))
	{
		func_244(uParam0);
	}
}

bool func_28(var uParam0, bool bParam1)
{
	if (func_8(uParam0, 128) && func_29())
	{
		return true;
	}
	if (func_245(&(uParam0->f_13118)) >= 4000)
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
	func_246(!func_6(uParam0, 32), 1);
	func_1(uParam0, 32);
}

bool func_31(var uParam0)
{
	return true;
}

bool func_32()
{
	return func_214(Global_1572864->f_8);
}

int func_33(var uParam0)
{
	return uParam0->f_597;
}

struct<4> func_34(int iParam0)
{
	func_248(&Var0, func_247(iParam0));
	return Var0;
}

int func_35(var uParam0)
{
	return func_249(uParam0, func_33(uParam0));
}

void func_36(var uParam0, struct<4> Param1, struct<4> Param5, int iParam9, int iParam10)
{
	Var0 = { Param1 };
	Var0.f_3 = Param1.f_3;
	Var4 = { Param5 };
	Var4.f_3 = Param5.f_3;
	func_232(0);
	func_250(func_12(uParam0->f_607), Var0, Var4, func_132(iParam9), func_132(iParam10));
}

void func_37(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_241((*uParam0)[iVar0], 1048576) && (*uParam0)[iVar0]->f_9 == 9)
		{
			func_251((*uParam0)[iVar0]);
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
			func_252(iVar0, 4096);
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
		func_253(Global_1935630, 4194304);
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
	func_254();
	func_255();
	func_256();
	func_257();
}

void func_43()
{
	if (func_258())
	{
		Global_18 = 0;
		Global_43884 = 0;
		if (!func_29())
		{
			func_259(1);
		}
	}
}

void func_44()
{
	Global_1894899->f_186 = 0;
	func_260();
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
	func_261(1, iParam0, iParam1);
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
	return (func_262() || func_54());
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
	func_263(uParam0);
	func_264(uParam0, 0);
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
		func_265(iVar0);
		iVar0++;
	}
	func_266();
	func_267();
}

bool func_54()
{
	return Global_1894899 & 2 != 0;
}

void func_55(bool bParam0, int iParam1)
{
	if (func_268())
	{
		if (func_269(255))
		{
			if (!func_270(36, 255))
			{
				return;
			}
		}
	}
	bVar0 = bParam0;
	if (!bParam0)
	{
		if (func_271(Global_1894899->f_2) && func_272(Global_1894899->f_2))
		{
			func_273(Global_1894899->f_2, 0);
			if (iParam1 != 0)
			{
				Global_1894899->f_7 = iParam1;
				func_274(16);
			}
		}
		else if (func_271(Global_1894899->f_2) && !func_275(Global_1894899->f_2, 2))
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
		func_276(16);
		func_277();
		if (bVar0)
		{
			func_276(1);
		}
	}
}

void func_56(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < uParam0->f_13145)
	{
		if (func_278(uParam0->f_5423[iVar0]))
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
	if (func_279(uParam0->f_5421))
	{
		iVar0 = 0;
		while (iVar0 < func_280(uParam0->f_5421))
		{
			iVar1 = func_281(uParam0->f_5421, iVar0);
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
		if (func_204(iVar1))
		{
			iVar2 = Global_1360165[iVar0];
			func_201(uParam0, iVar1, iVar2, iParam1, bParam2, bParam3, 0);
		}
		iVar0++;
	}
}

void func_58(var uParam0, bool bParam1)
{
	_0x0751d461f06e41ce(get_player_index(), 33, 2, 0);
	iVar0 = func_282(uParam0);
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	if (is_entity_dead(iVar0) || is_ped_injured(iVar0))
	{
	}
	iVar1 = func_283(iVar0);
	iVar2 = get_id_of_this_thread();
	bVar3 = false;
	if (is_thread_active(iVar2, false) && func_284(iVar1) == iVar2)
	{
		bVar3 = true;
	}
	if (bVar3)
	{
		if (bParam1)
		{
			func_285(7);
		}
		else
		{
			func_286(iVar0, 0);
		}
		func_287(uParam0, 16);
		set_ped_config_flag(iVar0, 219, false);
	}
}

void func_59(int iParam0)
{
	iParam0 = func_288(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_289(iParam0, 32);
	func_290();
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
	Var0 = { func_291(iParam0) };
	if (!is_string_null_or_empty(&Var0))
	{
		_text_database_delete(&Var0);
	}
}

void func_63(int iParam0)
{
	Var0 = { func_292(iParam0) };
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
		func_234(1);
	}
}

void func_65(bool bParam0)
{
	Global_1572864->f_13 = bParam0;
	if (bParam0)
	{
		func_234(0);
	}
}

void func_66(int iParam0)
{
}

void func_67(var uParam0)
{
	func_293(&(uParam0->f_13121));
}

void func_68(int iParam0, var uParam1)
{
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (func_241((*uParam1)[iVar0], 1048576) && (*uParam1)[iVar0]->f_9 == 9)
		{
			func_242((*uParam1)[iVar0], 1);
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
	iVar0 = func_219(iParam0);
	iVar1 = -1;
	if (iVar0 == 1)
	{
		iVar2 = func_294(iParam0);
		if (iVar2 == 36)
		{
			iVar1 = 99;
			if (func_295(iVar1))
			{
				if (func_296(iVar1, 4))
				{
					func_297(iVar1, 1);
				}
			}
		}
		else if (iVar2 == 38)
		{
			func_298(1);
		}
	}
	else if (iVar0 == 8)
	{
		iVar3 = func_294(iParam0);
		if (iVar3 == 59)
		{
			func_298(1);
		}
		else if (iVar3 == 61)
		{
			func_298(0);
		}
		else if (iVar3 == 83)
		{
			func_298(0);
		}
	}
}

void func_73()
{
	iVar0 = 0;
	while (iVar0 < &Global_1347702)
	{
		if (func_295(iVar0))
		{
			if (func_296(iVar0, 4))
			{
				if (func_296(iVar0, 16))
				{
					func_299(iVar0, 1);
				}
				if (func_296(iVar0, 8))
				{
					func_300(iVar0, 1);
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
		if (func_301(uParam0) == 0 && iVar0 == 0)
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
		func_302(iVar3, iVar4);
	}
	if (bVar2)
	{
		func_303(uParam0);
	}
}

void func_75(var uParam0)
{
	iVar0 = 0;
	if (func_304(uParam0))
	{
		fVar1 = to_float((_get_bounty_for_player(get_player_index()) - (*Global_2621440)[0]->f_9.f_20));
		if (fVar1 > 0f)
		{
			fVar2 = (1f + (to_float(get_random_int_in_range(50, 200)) / 1000f));
			iVar0 = (iVar0 + round((fVar1 * fVar2)));
		}
	}
	func_305(iVar0, 0, 1065353216, 1, 0, 0, 1, 752097756);
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
	if (!func_271(iParam0))
	{
		return;
	}
	bVar0 = func_275(iParam0, 67108864);
	if (bParam1)
	{
		if (((!bVar0 && func_306(iParam0) == 1) && iParam0 != 120) && iParam0 != 92)
		{
			func_308(iParam0, func_307());
			func_309(iParam0, 67108864);
		}
	}
	else if (bVar0)
	{
		func_310(iParam0, 67108864);
		func_308(iParam0, -15);
	}
	func_311(iParam0);
}

void func_79(bool bParam0)
{
	if (!bParam0)
	{
		func_312(11);
	}
	else
	{
		func_313(11);
	}
}

void func_80(int iParam0)
{
	if (func_314(iParam0, 0))
	{
		func_315(262144, 5, 0, 1);
		func_316(720f, 1, 0);
	}
	switch (iParam0)
	{
		case 18:
			func_317(101, 7, 1f, 0, 1);
			func_317(89, 7, 1f, 0, 1);
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
	if (!func_214(iParam0))
	{
		return;
	}
	if (func_318(iParam0) == 4)
	{
		func_319(iParam0, func_307());
		if (!func_218(iParam0) == 5 && !func_218(iParam0) == 6)
		{
			if (bParam3)
			{
				func_226(iParam0, 6);
			}
			else
			{
				func_226(iParam0, 5);
			}
			func_231(iParam0);
		}
		return;
	}
	if (bParam1)
	{
		func_40(1);
	}
	iVar0 = func_219(iParam0);
	bVar1 = func_20() == false;
	if (iVar0 == 1 || iVar0 == 8)
	{
		func_320(0, 2);
		if (!bVar1 && bParam1)
		{
			func_321();
		}
	}
	else
	{
		func_228(0);
	}
	if (!iVar0 == 1 && !iVar0 == 8)
	{
		func_322(iParam0);
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
				if (bParam1 && func_218(iParam0) != 0)
				{
					if (iVar0 == 1)
					{
						if (func_294(iParam0) == 77)
						{
							stat_id_set_gxt_label(&Var4, &((*Global_1835011)[76]->f_8), true);
						}
						else
						{
							stat_id_set_gxt_label(&Var4, &((*Global_1835011)[func_294(iParam0)]->f_8), true);
						}
					}
					else if ((func_294(iParam0) != 95 && func_294(iParam0) != 82) && !func_323((*Global_1347702)[func_294(iParam0)]->f_12, 512))
					{
						stat_id_set_gxt_label(&Var4, &((*Global_1347702)[func_294(iParam0)]->f_3), true);
					}
				}
			}
			else
			{
				switch (_0x225640e09effdc3f())
				{
					case 0:
						stat_id_set_gxt_label(&Var4, &((*Global_1835011)[func_294(iParam0)]->f_8), true);
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
		func_325(func_294(iParam0), iVar6, func_324());
	}
	else if (iVar0 == 8)
	{
		func_327(func_294(iParam0), iVar6, func_324(), func_326());
	}
	if (!func_218(iParam0) == 5 && !func_218(iParam0) == 6)
	{
		iVar9 = func_328(iParam0, &uVar7, &iVar8);
		if (iVar9 != 176656832)
		{
			func_329(iVar9, uVar7, -469960592, iVar8, 1, 1, 0);
		}
	}
	if (!&Global_1879534 && !Global_1879534->f_1)
	{
		switch (iVar0)
		{
			case 1:
				iVar10 = func_330(func_294(iParam0), &iVar11);
				if (!Global_17504.f_9)
				{
					iVar10 = func_331((iVar10 - 20), 0, iVar10);
					iVar11 = func_331((iVar11 - 10), 0, iVar11);
				}
				func_332(1);
				func_333(iVar10, iVar11, 1);
				Global_17504.f_9 = 0;
				Global_17504.f_10 = 0;
				Global_1899528->f_217 = 1;
				break;
			case 4:
				func_333(45, 0, 1);
				break;
			case 8:
				iVar10 = func_334(func_294(iParam0), &iVar11);
				if (!Global_17504.f_9)
				{
					iVar10 = func_331((iVar10 - 20), 0, iVar10);
					iVar11 = func_331((iVar11 - 10), 0, iVar11);
				}
				func_333(iVar10, iVar11, 1);
				Global_17504.f_9 = 0;
				Global_17504.f_10 = 0;
				if (func_335(func_294(iParam0)))
				{
					func_336(14, 0, 0, 0, 0, 0, 1065353216, 0);
				}
				Global_1899528->f_217 = 1;
				break;
			case 9:
				func_333(120, 0, 1);
				break;
			case 2:
				func_333(120, 0, 1);
				break;
			case 6:
				func_333(func_338(func_337(iParam0)), 0, 1);
				break;
			case 5:
				func_333(120, 0, 1);
				break;
		}
	}
	func_230(iParam0, 1);
	func_319(iParam0, func_307());
	func_231(iParam0);
	if ((!func_218(iParam0) == 0 && bParam1) && func_20() == -1)
	{
		iVar12 = func_223(iParam0);
		if (iVar12 != -1)
		{
			func_224(0);
		}
		else if (iVar0 == 8)
		{
			iVar12 = func_225();
			if (iVar12 != -1)
			{
				func_224(0);
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
				switch (func_294(iParam0))
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
				if (func_295(func_294(iParam0)) && func_323((*Global_1347702)[func_294(iParam0)]->f_12, 4))
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
				if (func_294(iParam0) != 77)
				{
					Global_1879514->f_1 = iParam0;
					Global_1879514->f_11 = bParam3;
					Global_1879514->f_13 = func_129();
				}
				break;
			case 8:
				if (func_294(iParam0) != 58)
				{
					Global_1879514->f_1 = iParam0;
					Global_1879514->f_11 = bParam3;
					Global_1879514->f_13 = func_129();
				}
				break;
		}
	}
	if (!func_218(iParam0) == 5 && !func_218(iParam0) == 6)
	{
		if (bParam3)
		{
			func_226(iParam0, 6);
		}
		else
		{
			func_226(iParam0, 5);
		}
		func_231(iParam0);
		bVar13 = true;
	}
	if (bVar13)
	{
		switch (iVar0)
		{
			case 1:
				switch (func_294(iParam0))
				{
					case 0:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_PROFESSION_ODRISCOLL"));
						_0xd8c7162ab2e2af45(-1753910767);
						break;
					case 1:
						func_339();
						_0xbb697756309d77ee(1);
						break;
					case 4:
						func_340(-1781387050, 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_340(1433048902, 4, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_340(-597058368, 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_340(-529638012, 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_340(500564674, 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_340(-875449072, 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_340(1237770824, 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_340(236757114, 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_340(-601932535, 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_340(-1267972061, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_341(-1267972061);
						func_340(1619534881, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_341(1619534881);
						func_340(-755457379, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_341(-755457379);
						func_340(1015404643, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_341(1015404643);
						func_340(-1724192342, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_341(-1724192342);
						func_340(1310680212, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_341(1310680212);
						func_340(-566881549, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_341(-566881549);
						func_340(-1753730528, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_341(-1753730528);
						func_340(147796381, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_341(147796381);
						func_340(-378547623, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_341(-378547623);
						func_340(829545206, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_341(829545206);
						func_340(891318243, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_341(891318243);
						func_340(-1016714371, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_340(-1838434463, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_340(-1448210800, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_340(-248960099, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_342();
						func_343(967523420);
						func_344();
						func_345();
						break;
					case 5:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_TOMMY"));
						break;
					case 14:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_LEVITICUS"));
						break;
					case 2:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key(func_346(10, 0)));
						break;
					case 8:
						_0x946d46cd6dfb9742(get_player_index(), 0, 621714131);
						break;
					case 15:
						func_340(1030791766, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
						if (!_unlock_is_visible(1231074654))
						{
							_unlock_set_visible(1231074654, true);
							func_347(449, 0);
						}
						break;
					case 10:
						if (!_unlock_is_visible(1880205078))
						{
							_unlock_set_visible(1880205078, true);
							func_347(446, 0);
						}
						break;
					case 16:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("ALLY_LEIGHGRAY"));
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("ALLY_ARCHIBALD"));
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_PROFESSION_GRAY"));
						break;
					case 18:
						func_348(304805134, 1, 1);
						if (!func_349((*Global_1347702)[21]->f_15, 1))
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
						func_350();
						break;
					case 26:
						func_351();
						break;
					case 17:
						func_352(Global_35, 176992230, 0, -358215195, 1, 1);
						if (func_353())
						{
							func_354(1905553950);
						}
						break;
					case 19:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_TAVISH_GRAY"));
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_CLAY"));
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_CLIVE"));
						break;
					case 33:
						if (!func_355(-514575035, -1))
						{
							iVar15 = func_307();
							func_356(&iVar15, 0, 0, 0, 2, 0, 0, 0);
							func_357(-514575035, iVar15, 0);
						}
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_EVELYN_MILLER"));
						if (func_353())
						{
							func_354(1529685685);
						}
						break;
					case 34:
						if (func_353())
						{
							func_354(-2082646505);
						}
						break;
					case 28:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_BRONTE"));
						break;
					case 31:
						func_358();
						break;
					case 37:
						func_359();
						if (func_360())
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
						func_361();
						break;
					case 43:
						func_362();
						break;
					case 44:
						if (!func_349((*Global_1347702)[82]->f_15, 1))
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
						if (!func_349((*Global_1347702)[83]->f_15, 1))
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
						func_363();
						break;
					case 59:
						func_364();
						break;
					case 60:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_TOM_DICKENS"));
						break;
					case 61:
						func_365();
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
						func_366();
						if (!_unlock_is_visible(1673898385))
						{
							_unlock_set_visible(1673898385, true);
							func_347(451, 0);
						}
						if (!func_367(-1992824800))
						{
							if (func_367(1520110311))
							{
								iVar16 = func_307();
								func_356(&iVar16, 0, 0, 6, 0, 0, 0, 0);
								func_357(1937177603, iVar16, 1);
							}
						}
						if (func_368(4))
						{
							if (!func_369(684296857, 1, 0))
							{
								iVar17 = func_307();
								func_356(&iVar17, 0, 0, 6, 0, 0, 0, 0);
								func_357(-1439688706, iVar17, 1);
							}
						}
						func_340(1224687176, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_340(-4440804, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						break;
					case 74:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_ALBERT_CAKE"));
						func_370(89200);
						func_370(2300);
						func_370(2300);
						break;
					case 68:
						func_371();
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
						func_372();
						func_370(-139100);
						break;
					case 69:
						if (func_349((*Global_1347702)[9]->f_15, 1))
						{
							func_370(-6000);
						}
						break;
					case 70:
						func_370(23400);
						func_370(1900);
						func_370(-15000);
						break;
					case 71:
						func_370(-5500);
						break;
				}
				break;
			case 8:
				switch (func_294(iParam0))
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
						func_373();
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
						func_374();
						break;
					case 66:
						func_375();
						func_376();
						break;
					case 67:
						if (!func_377(6))
						{
							func_378(6);
						}
						if (!func_377(3))
						{
							func_378(3);
						}
						if (func_353())
						{
							func_354(1534638301);
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
						if (func_349((*Global_1835011)[69]->f_1, 1))
						{
							func_379(0);
							func_370(40500);
						}
						else
						{
							func_379(0);
							func_370(46500);
						}
						break;
				}
				break;
			case 6:
				switch (func_294(iParam0))
				{
					case 0:
						switch (func_337(iParam0))
						{
							case 5:
								_0x946d46cd6dfb9742(get_player_index(), 0, 1014740297);
								break;
						}
						break;
				}
				break;
		}
		func_380(iParam0);
		func_381();
		switch (iVar0)
		{
			case 1:
				switch (func_294(iParam0))
				{
					case 4:
						func_382(iParam0, 1000, 0, 1065353216, 1, 0, 0, 1);
						break;
					case 61:
					case 62:
					case 63:
						func_382(iParam0, 300, 0, 1065353216, 1, 0, 0, 1);
						break;
					case 25:
						func_382(iParam0, 150000, 1, 0.5f, 4, 0, 0, 1);
						break;
					case 12:
						func_382(iParam0, 120000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 53:
						func_382(iParam0, 90000, 1, 0.5f, 4, 0, 0, 1);
						break;
					case 20:
						func_382(iParam0, 85000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 19:
						func_382(iParam0, 70000, 1, 0.5f, 3, 0, 0, 1);
						break;
					case 24:
						iVar18 = func_383(iParam0);
						func_382(iParam0, iVar18, 1, 0.5f, 4, 0, 0, 1);
						break;
					case 28:
						func_382(iParam0, 45000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 34:
						func_382(iParam0, 600000, 1, 0.5f, 4, 0, 0, 1);
						if (!func_369(-2046502963, 1, 0))
						{
							func_340(-2046502963, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
						}
						break;
					case 29:
						func_382(iParam0, 4600, 1, 0f, 3, 0, 0, 1);
						break;
					case 37:
						break;
					case 58:
						break;
					case 57:
						func_382(iParam0, 2100000, 1, 0.9047619f, 8, 0, 0, 1);
						break;
					case 76:
						func_382(iParam0, 2042100, 0, 1065353216, 1, 0, 0, 1);
						break;
					case 72:
						if (func_383(iParam0) == 0)
						{
							func_382(iParam0, 20000, 0, 1065353216, 1, 0, 0, 1);
						}
						else
						{
							func_382(iParam0, 15000, 0, 1065353216, 1, 0, 0, 1);
						}
						break;
				}
				break;
			case 8:
				if (func_323((*Global_1347702)[func_294(iParam0)]->f_12, 536870912))
				{
					func_384(11, 1);
				}
				switch (func_294(iParam0))
				{
					case 109:
						func_382(iParam0, 1500, 0, 1065353216, 1, 0, 0, 1);
						break;
					case 55:
						func_384(8, 1);
						break;
					case 138:
						set_bit(&(Global_40.f_9052), 1);
						set_bit(&(Global_40.f_9052), 3);
						break;
					case 94:
						func_382(iParam0, 30000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 63:
						func_382(iParam0, 60000, 1, 0.5f, 3, 0, 0, 1);
						break;
					case 37:
						func_382(iParam0, 75000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 116:
						func_382(iParam0, 25000, 1, 0.5f, 1, 0, 0, 1);
						break;
					case 9:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_ANSEL_ATHERTON"));
						break;
				}
				break;
			case 11:
				if (iParam0 == func_385(0, 10, 11, 2116153146))
				{
					func_382(iParam0, func_383(iParam0), 1, 0.5f, 3, 0, 0, 1);
				}
				else if (iParam0 == func_385(0, 7, 11, -379687487))
				{
					func_382(iParam0, func_386(9), 1, 0.5f, 3, 0, 0, 1);
				}
				else if (iParam0 == func_385(0, 8, 11, -1386089015))
				{
					func_382(iParam0, func_386(10), 1, 0.5f, 2, 0, 0, 1);
				}
				else if (iParam0 == func_385(0, 11, 11, -1952009645))
				{
					func_382(iParam0, func_386(8), 1, 0.5f, 3, 0, 0, 1);
				}
				else if (iParam0 == func_385(0, 12, 11, 2065895756))
				{
					func_382(iParam0, func_386(11), 1, 0.5f, 2, 0, 0, 1);
				}
				break;
		}
		if (bParam1)
		{
			if (!func_218(iParam0) == 0)
			{
				if (func_217(iParam0) == 0)
				{
				}
				else if (_0x01f4d242765c6b24(func_217(iParam0)))
				{
					iVar19 = 0;
					if (bParam3)
					{
						iVar19 = 3;
					}
					func_220(func_219(iParam0), func_217(iParam0), iVar19);
					if (bParam4)
					{
						if (iVar0 == 8 && func_294(iParam0) == 58)
						{
							Global_1879514->f_1 = iParam0;
						}
						func_388(func_387(Global_1879514->f_1));
						if (iVar0 == 8 && func_294(iParam0) == 58)
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
						if (func_295(func_294(iParam0)) && func_323((*Global_1347702)[func_294(iParam0)]->f_12, 1))
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
			func_389(bParam2, iVar20);
		}
	}
	func_229(1);
	if ((bVar13 || func_129()) && (func_219(iParam0) == 1 || func_219(iParam0) == 8))
	{
		Global_1879534->f_6 = 1;
		Global_1879534->f_7 = 1;
	}
}

void func_84(int iParam0, bool bParam1)
{
	if (_0x01f4d242765c6b24(func_217(iParam0)))
	{
		iVar0 = 0;
		if (bParam1)
		{
			iVar0 = 3;
		}
		func_220(func_219(iParam0), func_217(iParam0), iVar0);
		if (func_82(32768))
		{
			iVar1 = func_219(iParam0);
			if ((iVar1 == 1 || iVar1 == 8) || (iVar1 == 11 && iParam0 == func_385(0, 10, 11, 2116153146)))
			{
				Global_1898438 = get_game_timer();
				Global_1879514->f_1 = iParam0;
				Global_1879514->f_19 = func_390();
				Global_1879514->f_18 = 1;
			}
		}
	}
	if (func_216(iParam0))
	{
		func_13(iParam0, 0, 2);
	}
	else if (func_215(iParam0))
	{
		if (!func_218(iParam0) == 5 && !func_218(iParam0) == 6)
		{
			if (bParam1)
			{
				func_226(iParam0, 6);
			}
			else
			{
				func_226(iParam0, 5);
			}
			func_231(iParam0);
		}
	}
	switch (func_219(iParam0))
	{
		case 1:
			switch (func_294(iParam0))
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
			switch (func_294(iParam0))
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
	vVar2 = { func_391((*Global_2621440)[0]->f_9.f_7, &uVar0, &uVar1, 0, 1, 1, 0, 0, 0) };
	func_392(vVar2, uVar1, uVar0, 0);
	func_393(vVar2);
	Global_40.f_9.f_15 = func_394(vVar2, 0);
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
	func_395();
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
	func_396(Var10, 0);
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
	if (!func_214(iParam0))
	{
		return;
	}
	if (iParam0 != func_227(0))
	{
		return;
	}
	if (func_217(iParam0) == 0)
	{
	}
	iVar0 = func_219(iParam0);
	if (func_218(iParam0) == 3)
	{
		if (func_217(iParam0) == 0)
		{
		}
		else if (_0x01f4d242765c6b24(func_217(iParam0)))
		{
			if (func_219(iParam0) != 1 && func_219(iParam0) != 8)
			{
				func_220(func_219(iParam0), func_217(iParam0), 1);
			}
		}
	}
	Global_1898438 = (get_game_timer() - 10000);
	func_231(iParam0);
	func_40(1);
	func_228(0);
	func_226(iParam0, 0);
	switch (iVar0)
	{
		case 1:
			func_332(1);
			func_333(15, 0, 1);
			break;
		case 4:
			func_333(10, 0, 1);
			break;
		case 8:
			func_333(10, 0, 1);
			break;
		case 9:
			func_333(10, 0, 1);
			break;
		case 2:
			func_333(10, 0, 1);
			break;
		case 6:
			func_333(10, 0, 1);
			break;
		case 5:
			func_333(10, 0, 1);
			break;
	}
	func_229(1);
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
	if (func_397(Global_1347343->f_11, 536870912))
	{
		return;
	}
	if (bParam3)
	{
		func_398(&(Global_1347343->f_11), 64);
	}
	if (bParam4)
	{
		func_398(&(Global_1347343->f_11), 16384);
	}
	if (func_399() >= 2)
	{
		if (!func_397(Global_1347343->f_11, 16384))
		{
			func_398(&(Global_1347343->f_11), 8);
		}
		func_235(0.88f);
	}
	StringCopy(&(Global_1347343->f_3), sParam2, 64);
	Global_1347343->f_2 = iParam0;
	Global_1347343 = 0;
	Global_1347343->f_1 = iParam1;
	func_253(Global_1935630, 2048);
	func_400(bParam5);
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
			func_401(&(uParam0->f_10792), &(Global_43619[iVar0]), &(Global_43619[iVar0]->f_1), 0);
		}
		iVar0++;
	}
	if (_does_anim_scene_exist(Global_43800))
	{
		uParam0->f_7375.f_804 = Global_43800;
		take_ownership_of_anim_scene(uParam0->f_7375.f_804);
	}
	if (func_222(&Global_1935630, 524288))
	{
		func_71(Global_1935630, 524288);
		func_402(uParam0, 67108864);
	}
}

int func_101(var uParam0)
{
	return func_403(&(uParam0->f_7375));
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
	return func_404() != -1;
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
	func_405(uParam0);
	uParam0->f_634[0] = 63151;
	uParam0->f_634[1] = 63151;
	uParam0->f_637 = 0;
	func_407(uParam0, *uParam1);
	func_408(uParam0);
}

void func_109(var uParam0)
{
	func_409(uParam0, 100f, 100f, 0f);
	iLocal_1959 = func_33(uParam0);
	func_410();
	func_411();
	if (is_itemset_valid(Global_43616))
	{
		iVar0 = 0;
		while (iVar0 < get_itemset_size(Global_43616))
		{
			iVar1 = _get_entity_from_item(get_indexed_item_in_itemset(iVar0, Global_43616));
			if (does_entity_exist(iVar1))
			{
				if (decor_exist_on(iVar1, func_412()))
				{
					if (decor_get_int(iVar1, func_412()) == 451)
					{
						Local_218[1] = get_ped_index_from_entity_index(iVar1);
						set_entity_as_mission_entity(&(Local_218[1]), true, true);
						remove_from_itemset(get_indexed_item_in_itemset(iVar0, Global_43616), Global_43616);
						func_413(44);
						Local_218[1]->f_3 = 8;
						decor_remove(&(Local_218[1]), func_412());
					}
					else
					{
						iVar0++;
					}
					if (func_301(uParam0) == 3)
					{
						_set_entity_coords_and_heading(Global_35, func_178(8, 0), func_414(8, 0), true, false, true);
					}
				}
			}
		}
	}
}

char[] func_110(int iParam0)
{
	if (!func_213(iParam0))
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
			func_415(iVar0, iVar1);
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
	if (!func_271(iParam0))
	{
		return false;
	}
	return func_275(iParam0, 33554432);
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
	return func_416(uParam0->f_1[func_132(iParam1)]->f_11, iParam2);
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
		func_417(&(uParam0->f_7375));
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
	return func_418(iParam0);
}

bool func_127(struct<4> Param0)
{
	if (func_82(32768))
	{
		return true;
	}
	return func_419(Param0, Param0.f_3);
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
	if (!func_420())
	{
		return false;
	}
	if (!func_349((*Global_1835011)[1]->f_1, 1))
	{
		return true;
	}
	if ((func_349((*Global_1835011)[2]->f_1, 1) && func_349((*Global_1347702)[120]->f_15, 1)) && !func_349((*Global_1835011)[4]->f_1, 1))
	{
		return true;
	}
	if (func_349((*Global_1835011)[37]->f_1, 1) && !func_349((*Global_1835011)[39]->f_1, 1))
	{
		return true;
	}
	if (func_349((*Global_1835011)[57]->f_1, 1) && !func_349((*Global_1835011)[60]->f_1, 1))
	{
		return true;
	}
	if (func_349((*Global_1835011)[26]->f_1, 1) && !func_349((*Global_1347702)[67]->f_15, 1))
	{
		return true;
	}
	if ((func_349((*Global_1835011)[62]->f_1, 1) && func_349((*Global_1835011)[63]->f_1, 1)) && !func_349((*Global_1835011)[64]->f_1, 1))
	{
		return true;
	}
	if (func_349((*Global_1835011)[75]->f_1, 1) && !func_349((*Global_1347702)[1]->f_15, 1))
	{
		return true;
	}
	if (func_349((*Global_1835011)[76]->f_1, 1) && !func_349((*Global_1835011)[77]->f_1, 1))
	{
		return true;
	}
	if ((func_349((*Global_1835011)[40]->f_1, 1) && func_349((*Global_1835011)[41]->f_1, 1)) && !func_349((*Global_1835011)[44]->f_1, 1))
	{
		return true;
	}
	if ((func_349((*Global_1835011)[62]->f_1, 1) && func_349((*Global_1835011)[63]->f_1, 1)) && !func_349((*Global_1835011)[64]->f_1, 1))
	{
		return true;
	}
	if ((func_349((*Global_1835011)[65]->f_1, 1) && func_349((*Global_1835011)[66]->f_1, 1)) && !func_349((*Global_1835011)[67]->f_1, 1))
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
	if (func_421(vParam1))
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
	func_244(&(uParam0->f_603));
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
		return func_422();
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
		func_423(uParam0->f_607);
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
	func_424(&(uParam0->f_638));
	func_425(&(uParam0->f_819));
	func_426(&(uParam0->f_1020));
	func_427(&(uParam0->f_1081));
	func_428(&(uParam0->f_1126));
	func_429(&(uParam0->f_5147));
	func_430(&(uParam0->f_1124));
	func_431(&(uParam0->f_5188));
	func_432(&(uParam0->f_5239));
	func_433(&(uParam0->f_5249));
	func_434(&(uParam0->f_5265));
	func_435(&(uParam0->f_5286));
}

void func_138(var uParam0)
{
	if (!is_itemset_valid(iLocal_14))
	{
		iLocal_14 = create_itemset(true);
	}
	func_436(uParam0, 934706428, 512);
	func_436(uParam0, -1694632979, 512);
	func_436(uParam0, -1031399461, 512);
	func_436(uParam0, 1935100224, 512);
	func_436(uParam0, -155999274, 512);
	func_436(uParam0, 731029607, 512);
	func_436(uParam0, 977834008, 512);
	func_436(uParam0, 2030804811, 512);
	func_436(uParam0, 601521823, 512);
	func_436(uParam0, -1345652903, 512);
	func_436(uParam0, 1225208808, 512);
	func_436(uParam0, -355385988, 512);
	func_436(uParam0, -628956517, 512);
	func_436(uParam0, -1758092337, 512);
	func_436(uParam0, 1382164045, 512);
	func_436(uParam0, -1769295812, 512);
	func_436(uParam0, -77509825, 512);
	func_436(uParam0, -1154137714, 512);
	func_436(uParam0, 225514697, 512);
	func_436(uParam0, 95866989, 512);
	func_436(uParam0, 1944593012, 512);
	func_436(uParam0, -566878875, 512);
	func_436(uParam0, 89913743, 512);
	func_436(uParam0, 934706428, 512);
	func_436(uParam0, -1694632979, 512);
	func_436(uParam0, -1031399461, 512);
	func_436(uParam0, 1935100224, 512);
	func_436(uParam0, -155999274, 512);
}

void func_139(var uParam0)
{
	func_437(uParam0, 28);
	iVar0 = 0;
	while (iVar0 <= 48)
	{
		vLocal_1091[iVar0]->f_1 = 1;
		iVar0++;
	}
	vLocal_1091[55]->f_2 = 2;
	vLocal_1091[8]->f_2 = 2;
	vLocal_1091[9]->f_2 = 2;
	vLocal_1091[10]->f_2 = 2;
	vLocal_1091[11]->f_2 = 2;
	vLocal_1091[25]->f_2 = 7;
	vLocal_1091[18]->f_2 = 59;
	vLocal_1091[27]->f_2 = 34;
	vLocal_1091[28]->f_2 = 2;
	vLocal_1091[29]->f_2 = 6;
	vLocal_1091[3]->f_2 = 67108863;
	vLocal_1091[26]->f_2 = 4;
	vLocal_1091[4]->f_2 = 1;
	vLocal_1091[33]->f_2 = 24;
	vLocal_1091[34]->f_2 = 16;
	vLocal_1091[35]->f_2 = 24;
	vLocal_1091[14]->f_2 = 20;
	vLocal_1091[15]->f_2 = 4;
	vLocal_1091[36]->f_2 = 15;
	vLocal_1091[39]->f_2 = 12;
	vLocal_1091[41]->f_2 = 12;
	vLocal_1091[42]->f_2 = 12;
	vLocal_1091[38]->f_2 = 8;
	vLocal_1091[43]->f_2 = 524288;
	vLocal_1091[48]->f_2 = 524288;
	vLocal_1091[5]->f_2 = 524288;
	vLocal_1091[6]->f_2 = 524288;
	iVar0 = 49;
	while (iVar0 <= 61)
	{
		vLocal_1091[iVar0]->f_1 = 2;
		iVar0++;
	}
	vLocal_1091[50]->f_2 = 1;
	vLocal_1091[56]->f_2 = 4;
	vLocal_1091[57]->f_2 = 4;
	vLocal_1091[72]->f_1 = 5;
	iVar0 = 62;
	while (iVar0 <= 63)
	{
		vLocal_1091[iVar0]->f_1 = 3;
		iVar0++;
	}
	vLocal_1091[62]->f_2 = 2;
	vLocal_1091[63]->f_2 = 2;
	iVar0 = 64;
	while (iVar0 <= 71)
	{
		vLocal_1091[iVar0]->f_1 = 4;
		iVar0++;
	}
	vLocal_1091[65]->f_2 = 2;
	vLocal_1091[68]->f_2 = 8;
	vLocal_1091[71]->f_2 = 16;
	iVar0 = 73;
	while (iVar0 <= 74)
	{
		vLocal_1091[iVar0]->f_1 = 6;
		iVar0++;
	}
	vLocal_1091[73]->f_2 = 4;
	vLocal_1091[74]->f_2 = 4;
	vLocal_1091[61]->f_2 = vLocal_1091[73]->f_2;
	iVar0 = 75;
	while (iVar0 <= 75)
	{
		vLocal_1091[iVar0]->f_1 = 7;
		iVar0++;
	}
	StringCopy(&Local_1992, func_438(75, 1), 64);
	StringCopy(&(Local_1992.f_8), func_438(75, 0), 64);
	iVar0 = 76;
	while (iVar0 <= 76)
	{
		vLocal_1091[iVar0]->f_1 = 8;
		iVar0++;
	}
}

void func_140(var uParam0, int iParam1, int iParam2)
{
	func_439(&(uParam0->f_1[func_132(iParam1)]->f_11), iParam2);
}

void func_141(var uParam0)
{
	func_103(uParam0, 2);
	func_103(uParam0, 1);
	func_253(Global_1935630, 262144);
}

void func_142(var uParam0, int iParam1)
{
	func_440(&(uParam0->f_638), &(uParam0->f_819), &(uParam0->f_1020), &(uParam0->f_1081), &(uParam0->f_1124), &(uParam0->f_1126), &(uParam0->f_5147), &(uParam0->f_5188), &(uParam0->f_5239), &(uParam0->f_5249), &(uParam0->f_5265), &(uParam0->f_5286), iParam1);
}

void func_143(int iParam0)
{
	Var0 = { func_291(iParam0) };
	if (!is_string_null_or_empty(&Var0))
	{
		_text_database_request(&Var0);
	}
}

void func_144(int iParam0)
{
	Var0 = { func_292(iParam0) };
	if (!is_string_null_or_empty(&Var0))
	{
		_text_database_request(&Var0);
	}
}

void func_145(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	func_441(&(uParam0->f_5310), iParam1, sParam2, bParam3);
}

void func_146(var uParam0)
{
	if (!func_279(uParam0->f_5421))
	{
		uParam0->f_5421 = { func_442() };
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
	func_443(&(uParam0->f_7375), fParam1);
}

void func_150(var uParam0, float fParam1)
{
	func_444(&(uParam0->f_7375), fParam1);
}

void func_151(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	func_445(uParam0, iParam1, sParam2, iParam3, iParam4, bParam5, 0);
	func_401(&(uParam0->f_10792), iParam1, sParam2, bParam6);
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
	if (!func_213(iParam0))
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
		if (func_446(uParam0, func_35(uParam0), 0))
		{
			func_140(uParam0, func_35(uParam0), 536870912);
		}
	}
	if (func_8(uParam0, 8192))
	{
		if (!func_8(uParam0, 536870912))
		{
			if (func_447(&(uParam0->f_1126), func_33(uParam0)))
			{
				func_99(uParam0, 536870912);
			}
		}
		return;
	}
	bVar0 = false;
	if (func_446(uParam0, func_33(uParam0), 1))
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		func_99(uParam0, 8192);
	}
}

void func_157(var uParam0)
{
	func_174(0);
	if ((iVar1956 == 2 || iVar1956 == 3) || iVar1956 == 4)
	{
		_0xf45e46deecf7df6e(14336, 0, 0, -1, -1);
		_0xab0d553fe20a6e25(0f);
		set_vehicle_density_multiplier_this_frame(0f);
		set_random_vehicle_density_multiplier_this_frame(0f);
		set_parked_vehicle_density_multiplier_this_frame(0f);
		set_scenario_ped_density_multiplier_this_frame(0f);
	}
}

bool func_158(var uParam0)
{
	if (func_448(uParam0) < 1)
	{
		func_449(uParam0, func_128(uParam0, 3), !func_8(uParam0, 2097152), uParam0->f_5410, !func_8(uParam0, 32), 0);
		func_450(uParam0, 1, uParam0->f_5413, uParam0->f_5413.f_1, uParam0->f_5413.f_2, uParam0->f_5416, 1, 1, 1);
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
				func_451(uParam0);
			}
		}
		if (func_120(uParam0, 32))
		{
			func_452(uParam0);
		}
	}
	switch (func_448(uParam0))
	{
		case -1:
		case 0:
			func_453(uParam0, 1);
			break;
		case 1:
			if (func_454(uParam0))
			{
				if (func_120(uParam0, 4096))
				{
					func_453(uParam0, 2);
				}
				else
				{
					func_453(uParam0, 3);
				}
			}
			break;
		case 2:
			if (func_455(uParam0))
			{
				func_453(uParam0, 3);
			}
			break;
		case 3:
			if (func_456(uParam0))
			{
				func_453(uParam0, 4);
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
		func_457(uParam0, 0);
		return true;
	}
	if (func_458(uParam0))
	{
		iVar0 = func_33(uParam0);
		func_107(uParam0, func_35(uParam0));
		if (func_33(uParam0) == 26)
		{
			func_457(uParam0, 0);
			return true;
		}
		else if (func_121(uParam0, iVar0, 128))
		{
			func_458(uParam0);
		}
	}
	return false;
}

int func_162(var uParam0, int iParam1)
{
	return uParam0->f_1[func_132(iParam1)]->f_10;
}

void func_163(bool bParam0)
{
	iVar0 = 1845216;
	iVar1 = 15;
	if (bParam0)
	{
		if (!func_167(200))
		{
			_0xb56d41a694e42e86(Local_141.f_65, iVar0, 0, 0, -1, -1, 0);
			_0x18262cafebb5fbe1(Local_141.f_65, iVar0, 0, 0, -1, -1, 0);
			uLocal_2201 = _0x4c39c95ae5db1329(Local_141.f_65, false, iVar1);
			_0xc1799fafd2fdf52b(Local_141.f_65, 0, 0, 0);
			func_413(200);
		}
	}
	else if (func_167(200))
	{
		_0x74c2b3dc0b294102(Local_141.f_65);
		_0xa1cfb35069d23c23(Local_141.f_65);
		if (_0x91a5f9cbebb9d936(uVar2198))
		{
			remove_scenario_blocking_area(uVar2198, false);
		}
		_0xd17672447692478e(Local_141.f_65, 0);
		func_174(200);
	}
}

void func_164(int iParam0)
{
	_0x0751d461f06e41ce(player_id(), 18, 0, iParam0);
}

void func_165(bool bParam0)
{
	iVar0 = 613;
	while (iVar0 <= 625)
	{
		if (((iVar0 == func_459(14) || iVar0 == func_459(15)) || iVar0 == func_459(16)) || iVar0 == func_459(17))
		{
		}
		else if (bParam0)
		{
			func_197(iVar0);
		}
		else
		{
			func_460(iVar0);
		}
		iVar0++;
	}
	iVar0 = 909;
	while (iVar0 <= 917)
	{
		if (((iVar0 == func_459(14) || iVar0 == func_459(15)) || iVar0 == func_459(16)) || iVar0 == func_459(17))
		{
		}
		else if (bParam0)
		{
			func_197(iVar0);
		}
		else
		{
			func_460(iVar0);
		}
		iVar0++;
	}
}

void func_166(bool bParam0)
{
	func_461(105, bParam0);
}

bool func_167(int iParam0)
{
	iVar0 = iParam0;
	while (iVar0 >= 32)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	return func_463(&(uLocal_210[iVar1]), func_462(iVar0));
}

void func_168(bool bParam0)
{
	iVar0 = 0;
	while (iVar0 <= 952)
	{
		if (bParam0)
		{
			func_197(iVar0);
		}
		else if (((iVar0 == func_459(14) || iVar0 == func_459(15)) || iVar0 == func_459(16)) || iVar0 == func_459(17))
		{
		}
		else
		{
			func_460(iVar0);
		}
		iVar0++;
	}
}

void func_169(int iParam0, bool bParam1)
{
	if (!does_entity_exist(&(Local_218[iParam0])) || is_entity_dead(&(Local_218[iParam0])))
	{
		return;
	}
	_0x67e21acc5c0c970c(&(Local_218[iParam0]), 9, bParam1);
	_0x67e21acc5c0c970c(&(Local_218[iParam0]), 10, bParam1);
	_0x67e21acc5c0c970c(&(Local_218[iParam0]), 16, bParam1);
	_0x67e21acc5c0c970c(&(Local_218[iParam0]), 7, bParam1);
	if (bParam1)
	{
		func_464(iParam0, 4);
	}
	else
	{
		func_465(iParam0, 4);
	}
}

void func_170(bool bParam0)
{
	set_ped_infinite_ammo(Global_35, bParam0, 379542007);
	set_ped_infinite_ammo(Global_35, bParam0, -598316488);
	set_ped_infinite_ammo(Global_35, bParam0, 127400949);
	set_ped_infinite_ammo(Global_35, bParam0, 1210039241);
	set_ped_infinite_ammo(Global_35, bParam0, 2075992054);
	set_ped_infinite_ammo(Global_35, bParam0, -805883486);
	set_ped_infinite_ammo(Global_35, bParam0, 1529685685);
	set_ped_infinite_ammo(Global_35, bParam0, -2082646505);
	set_ped_infinite_ammo(Global_35, bParam0, 34411519);
	set_ped_infinite_ammo(Global_35, bParam0, -2055158210);
	set_ped_infinite_ammo(Global_35, bParam0, 1701864918);
	set_ped_infinite_ammo(Global_35, bParam0, 1534638301);
	set_ped_infinite_ammo(Global_35, bParam0, -183018591);
	set_ped_infinite_ammo(Global_35, bParam0, -1783478894);
	set_ped_infinite_ammo(Global_35, bParam0, -1471716628);
	set_ped_infinite_ammo(Global_35, bParam0, 1905553950);
	set_ped_infinite_ammo(Global_35, bParam0, 1999408598);
	set_ped_infinite_ammo(Global_35, bParam0, 1676963302);
	set_ped_infinite_ammo(Global_35, bParam0, -570967010);
}

char* func_171(int iParam0)
{
	switch (iParam0)
	{
		case 72:
			return "SPL_BOTTLE_CRATE_SOUNDSET";
	}
	return "";
}

void func_172(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!does_entity_exist(iParam1) || is_entity_dead(iParam1))
	{
		return;
	}
	func_466(iParam1, bParam2);
	if (bParam3 && func_467(uParam0, iParam1, &uVar0))
	{
		if (bParam2)
		{
			if (!func_468(uParam0, iParam1, 32))
			{
				func_469(uParam0, iParam1, 32);
			}
		}
		else if (func_468(uParam0, iParam1, 32))
		{
			func_470(uParam0, iParam1, 32);
		}
	}
}

void func_173(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 1:
			if (bParam1)
			{
				if (!is_entity_dead(Global_35))
				{
					_0x1e017404784aa6a3(Global_35, -2125893097);
				}
				if (!is_entity_dead(&(Local_218[6])))
				{
					_0x1e017404784aa6a3(&(Local_218[6]), -2125893097);
				}
				_0x0d7fd6a55fd63aef(24, 3, 1);
				_0x0d7fd6a55fd63aef(19, 3, 1);
				_0x0d7fd6a55fd63aef(10, 3, 0);
				_0x0d7fd6a55fd63aef(12, 3, 0);
				_0x0d7fd6a55fd63aef(13, 3, 0);
				_0x0d7fd6a55fd63aef(11, 3, 0);
			}
			else
			{
				if (!is_entity_dead(Global_35))
				{
					_0x2b4ce170de09f346(Global_35, -2125893097);
				}
				if (!is_entity_dead(&(Local_218[6])))
				{
					_0x2b4ce170de09f346(&(Local_218[6]), -2125893097);
				}
				_0x660a8f876df1d4f8(24);
				_0x660a8f876df1d4f8(19);
				_0x660a8f876df1d4f8(10);
				_0x660a8f876df1d4f8(12);
				_0x660a8f876df1d4f8(13);
				_0x660a8f876df1d4f8(11);
			}
			break;
		case 2:
			if (bParam1)
			{
				_0x0d7fd6a55fd63aef(6, 3, 1);
				_0x0d7fd6a55fd63aef(8, 3, 1);
				func_471(&uLocal_1960, iParam0);
			}
			else
			{
				_0x660a8f876df1d4f8(6);
				_0x660a8f876df1d4f8(8);
			}
			break;
	}
	if (bParam1)
	{
		func_471(&uLocal_1960, iParam0);
	}
	else
	{
		func_472(&uLocal_1960, iParam0);
	}
}

void func_174(int iParam0)
{
	iVar0 = iParam0;
	while (iVar0 >= 32)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	func_473(uLocal_210[iVar1], func_462(iVar0));
}

void func_175(bool bParam0)
{
	if ((bParam0 && func_167(63)) || (!bParam0 && !func_167(63)))
	{
		return;
	}
	if (bParam0)
	{
		_0xb56d41a694e42e86(Local_141.f_59, 73728, 0, 0, -1, -1, 0);
		_0x18262cafebb5fbe1(Local_141.f_59, 73728, 0, 0, -1, -1, 0);
		_0xc1799fafd2fdf52b(Local_141.f_59, 0, 0, 0);
		_0xe5ef9de716ff737e(Local_141.f_59, 0, 1);
		uLocal_2065 = _0x4c39c95ae5db1329(Local_141.f_59, false, 15);
		func_413(63);
	}
	else
	{
		_0x5737199af2dc609f(Local_141.f_59, &vVar0, &vVar3);
		_0x74c2b3dc0b294102(Local_141.f_59);
		_0xa1cfb35069d23c23(Local_141.f_59);
		set_roads_back_to_original(vVar0, vVar3, 0, 1);
		set_ped_paths_back_to_original(vVar0, vVar3, 0);
		remove_scenario_blocking_area(uVar2062, false);
		func_174(63);
	}
}

void func_176(bool bParam0)
{
	Global_1935496->f_18 = !bParam0;
}

void func_177()
{
	iVar0 = 0;
	while (iVar0 < iVar1416)
	{
		func_474(iVar0);
		iVar0++;
	}
}

Vector3 func_178(int iParam0, int iParam1)
{
	return func_475(iParam0, iParam1);
}

void func_179(vector3 vParam0, float fParam3, int iParam4)
{
	vVar3 = { _get_object_offset_from_coords(vParam0, 0f, fParam3, fParam3, fParam3) };
	vVar0 = { _get_object_offset_from_coords(vParam0, 0f, -fParam3, -fParam3, -fParam3) };
	vVar6 = { func_476(vVar0, vVar3, 0f) };
	vVar9 = { func_477(vVar0, vVar3, 0f) };
	if (iParam4 == 5)
	{
		set_roads_back_to_original(vVar6, vVar9, 0, 1);
	}
	else
	{
		_0x6c3f12eceb6d2e2a(vVar6, vVar9, iParam4, 1);
	}
}

bool func_180(bool bParam0)
{
	iVar0 = get_interior_at_coords(func_178(8, 6));
	iVar1 = 0;
	if (is_valid_interior(iVar0) && is_interior_ready(iVar0))
	{
		if (bParam0)
		{
			if (is_interior_entity_set_active(iVar0, "rho_sal_tables02"))
			{
				func_413(18);
				deactivate_interior_entity_set(iVar0, "rho_sal_tables02", true);
			}
			if (!is_interior_entity_set_active(iVar0, "rho_sal_tables02"))
			{
				func_174(18);
			}
			if (!is_interior_entity_set_active(iVar0, "rho_sal_tables_01"))
			{
				activate_interior_entity_set(iVar0, "rho_sal_tables01", 0);
			}
			if (is_interior_entity_set_active(iVar0, "rho_sal_tables01"))
			{
				func_413(17);
			}
			if (func_167(17) && !func_167(18))
			{
				func_181(-1717960576);
				func_478(210001842);
				iVar1 = 1;
			}
		}
		else
		{
			if (is_interior_entity_set_active(iVar0, "rho_sal_tables01"))
			{
				func_413(17);
				deactivate_interior_entity_set(iVar0, "rho_sal_tables01", true);
			}
			if (!is_interior_entity_set_active(iVar0, "rho_sal_tables01"))
			{
				func_174(17);
			}
			if (!is_interior_entity_set_active(iVar0, "rho_sal_tables_02"))
			{
				activate_interior_entity_set(iVar0, "rho_sal_tables02", 0);
			}
			if (is_interior_entity_set_active(iVar0, "rho_sal_tables02"))
			{
				func_413(18);
			}
			if (func_167(18) && !func_167(17))
			{
				func_181(210001842);
				func_478(-1717960576);
				iVar1 = 1;
			}
		}
	}
	else
	{
		iVar1 = 0;
	}
	return iVar1;
}

void func_181(int iParam0)
{
	iVar0 = func_479(iParam0, 1);
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

void func_182(bool bParam0, bool bParam1)
{
	vVar0 = { _0xf70f00013a62f866(Local_141.f_40) };
	vVar9 = { _0x3e2a25b2416dd67e(Local_141.f_40) };
	vVar3.x = (vVar0.x - (vVar9.x / 2f));
	vVar3.f_1 = (vVar0.y - (vVar9.y / 2f));
	vVar3.f_2 = (vVar0.z - (vVar9.z / 2f));
	vVar6.x = (vVar0.x + (vVar9.x / 2f));
	vVar6.f_1 = (vVar0.y + (vVar9.y / 2f));
	vVar6.f_2 = (vVar0.z + (vVar9.z / 2f));
	if (bParam0)
	{
		if (!_0x91a5f9cbebb9d936(uVar2022))
		{
			uLocal_2026 = func_480(Local_141.f_40, 0, 0, 0);
		}
		func_481(Local_141.f_40, 0, 0, 0, 0, 0);
		if (!bParam1)
		{
			func_131(_0xf70f00013a62f866(Local_141.f_40), 50f, 1, 0, 0, 0, 0);
		}
		else
		{
			func_131(func_178(8, 6), 15f, 1, 0, 0, 0, 0);
		}
		set_ped_non_creation_area(vVar3, vVar6);
	}
	else
	{
		if (_0x91a5f9cbebb9d936(uVar2022))
		{
			remove_scenario_blocking_area(uVar2022, false);
		}
		clear_ped_non_creation_area();
	}
	func_192(0, bParam0);
	if (bParam0)
	{
		func_413(2);
	}
	else
	{
		func_174(2);
	}
}

void func_183()
{
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (func_463(uVar1951, func_462(iVar0)))
		{
			func_482(iVar0, 0);
		}
		iVar0++;
	}
}

int func_184(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3)
	{
		if (func_167(0))
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
		else if (Local_218[iVar0]->f_2 == 0)
		{
			if (iVar0 == iParam2)
			{
				Jump @133; //curOff = 72
			}
		else
		{
			}
			else if (iVar0 == 8 && func_167(3))
			{
			}
			else
			{
				func_483(uParam0, iVar0, 0);
				func_413(0);
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

int func_185(int iParam0)
{
	switch (iParam0)
	{
		case 6:
			return 5;
		case 7:
			return 1;
		case 8:
			return 0;
		case 9:
			return 6;
	}
	return -1;
}

void func_186(int iParam0, bool bParam1)
{
	if (!func_484(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (func_485(&((*Global_1360165)[iParam0]->f_12), 16))
		{
			func_486(iParam0, 16, 0);
		}
	}
	func_486(iParam0, 1, bParam1);
}

void func_187(var uParam0, int iParam1, bool bParam2)
{
	if (is_entity_dead(iParam1))
	{
		return;
	}
	bVar0 = (is_entity_a_ped(iParam1) && func_487(get_ped_index_from_entity_index(iParam1)));
	if (bVar0)
	{
		iVar1 = func_488(get_ped_index_from_entity_index(iParam1));
	}
	if (is_entity_a_ped(iParam1))
	{
		iVar2 = get_ped_index_from_entity_index(iParam1);
		if (bVar0)
		{
			func_489(iVar1);
			if (does_blip_exist(get_blip_from_entity(iVar2)))
			{
				_set_blip_flash_style(get_blip_from_entity(iVar2), -546708623);
				_set_blip_flash_style(get_blip_from_entity(iVar2), 231194138);
			}
		}
		else if (func_490(uParam0, iParam1) && does_blip_exist(get_blip_from_entity(iParam1)))
		{
			_set_blip_flash_style(get_blip_from_entity(iParam1), -546708623);
			_set_blip_flash_style(get_blip_from_entity(iParam1), 231194138);
		}
		else
		{
			func_491(iParam1);
		}
	}
	if (func_490(uParam0, iParam1))
	{
		func_470(uParam0, iParam1, 1024);
		if (bParam2)
		{
			func_469(uParam0, iParam1, 128);
		}
		else
		{
			func_470(uParam0, iParam1, 128);
		}
		if (func_467(uParam0, iParam1, &iVar3))
		{
			func_492(uParam0->f_5423[iVar3]);
		}
	}
	if (bVar0)
	{
		set_this_script_can_remove_blips_created_by_any_script(true);
		func_493(iVar1);
	}
}

void func_188(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4)
{
	func_494(834296435, bParam2, iParam4, 0, 0, 0, 1, 0);
	func_494(1124531468, bParam2, iParam4, 0, 0, 0, 1, 0);
	func_494(-1079073283, bParam0, iParam4, 0, 0, 0, 1, 0);
	func_494(-860602360, bParam0, iParam4, 0, 0, 0, 1, 0);
	func_494(1469250492, bParam1, iParam4, 0, 0, 0, 1, 0);
	func_494(678501753, bParam1, iParam4, 0, 0, 0, 1, 0);
	func_494(-1247339802, bParam3, iParam4, 0, 0, 0, 1, 0);
	func_494(-902483455, bParam0, iParam4, 0, 0, 0, 1, 0);
	func_494(-566797819, bParam0, iParam4, 0, 0, 0, 1, 0);
	func_494(1544280705, bParam0, iParam4, 0, 0, 0, 1, 0);
	func_494(-1847993131, bParam0, iParam4, 0, 0, 0, 1, 0);
}

void func_189(bool bParam0, bool bParam1)
{
	func_494(1595076728, bParam0, 0f, 0, 0, 0, 1, 0);
	func_494(1439227364, bParam0, 0f, 0, 0, 0, 1, 0);
	func_494(-1072865219, bParam1, 0f, 0, 0, 0, 1, 0);
	func_494(1620578985, bParam1, 0f, 0, 0, 0, 1, 0);
	func_494(1606293329, bParam1, 0f, 0, 0, 0, 1, 0);
	func_494(1913469935, bParam1, 0f, 0, 0, 0, 1, 0);
	func_494(-1664744776, bParam1, 0f, 0, 0, 0, 1, 0);
	func_494(-1375427275, bParam1, 0f, 0, 0, 0, 1, 0);
	func_494(1970779164, bParam1, 0f, 0, 0, 0, 1, 0);
	func_494(-2018125672, bParam1, 0f, 0, 0, 0, 1, 0);
	func_494(530930529, bParam1, 0f, 0, 0, 0, 1, 0);
	func_494(1299101427, bParam1, 0f, 0, 0, 0, 1, 0);
	func_494(23338719, bParam1, 0f, 0, 0, 0, 1, 0);
	func_494(785447352, bParam1, 0f, 0, 0, 0, 1, 0);
	func_494(-461544174, bParam1, 0f, 0, 0, 0, 1, 0);
	func_494(-764395272, bParam1, 0f, 0, 0, 0, 1, 0);
	func_494(-368185289, bParam1, 0f, 0, 0, 0, 1, 0);
	func_494(-656945717, bParam1, 0f, 0, 0, 0, 1, 0);
	func_494(248030525, bParam1, 0f, 0, 0, 0, 1, 0);
	func_494(606588923, bParam1, 0f, 0, 0, 0, 1, 0);
	func_494(825059846, bParam1, 0f, 0, 0, 0, 1, 0);
	func_494(-964389706, bParam1, 0f, 0, 0, 0, 1, 0);
	func_494(-152106360, bParam1, 0f, 0, 0, 0, 1, 0);
	func_494(473912616, bParam1, 0f, 0, 0, 0, 1, 0);
	func_494(-1099020037, bParam1, 0f, 0, 0, 0, 1, 0);
	func_494(1799856783, bParam1, 0f, 0, 0, 0, 1, 0);
	func_494(1518993684, bParam1, 0f, 0, 0, 0, 1, 0);
	func_494(426802898, bParam1, 0f, 0, 0, 0, 1, 0);
	func_494(-908387367, bParam1, 0f, 0, 0, 0, 1, 0);
	func_494(1909255102, bParam1, 0f, 0, 0, 0, 1, 0);
	func_494(-415917122, bParam1, 0f, 0, 0, 0, 1, 0);
	func_494(409697833, bParam1, 0f, 0, 0, 0, 1, 0);
	func_494(-1649837912, bParam1, 0f, 0, 0, 0, 1, 0);
	func_494(-1874862635, bParam1, 0f, 0, 0, 0, 1, 0);
}

void func_190()
{
	if (func_167(202))
	{
		return;
	}
	func_495(2);
	func_495(8);
	func_496(2, 1, 1, 1, 0);
	func_496(8, 1, 1, 1, 0);
	func_413(202);
}

void func_191(bool bParam0)
{
	if (!is_entity_dead(Global_35))
	{
		_0x5639fbea922788da(Global_35);
	}
	if (!is_entity_dead(&(Local_218[6])))
	{
		_0x5639fbea922788da(&(Local_218[6]));
		set_ped_config_flag(&(Local_218[6]), 65, false);
	}
	if (bParam0)
	{
		if (!is_entity_dead(&(iLocal_979[0])))
		{
			if (!is_entity_dead(Global_35))
			{
				_0xb7079f4c72896756(Global_35, &(iLocal_979[0]), 0, 16, -1);
			}
			if (!is_entity_dead(&(Local_218[6])))
			{
				set_ped_config_flag(&(Local_218[6]), 65, true);
				_0xb7079f4c72896756(&(Local_218[6]), &(iLocal_979[0]), 1, 16, 0);
			}
		}
	}
}

void func_192(int iParam0, bool bParam1)
{
	if ((bParam1 && func_463(uVar1950, func_462(iParam0))) || (!bParam1 && !func_463(uVar1950, func_462(iParam0))))
	{
		return;
	}
	switch (iParam0)
	{
		case 0:
			uVar0 = Local_141.f_51;
			break;
		case 1:
			uVar0 = Local_141.f_55;
			break;
	}
	if (bParam1)
	{
		_0xe5ef9de716ff737e(uVar0, 0, 1);
		_0xc1799fafd2fdf52b(uVar0, 0, 0, 0);
		func_497(&uLocal_1954, func_462(iParam0));
	}
	else
	{
		_0x5737199af2dc609f(uVar0, &vVar1, &vVar4);
		set_ped_paths_back_to_original(vVar1, vVar4, 0);
		_0xd17672447692478e(uVar0, 0);
		func_473(&uLocal_1954, func_462(iParam0));
	}
}

void func_193(int iParam0)
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
				if (is_entity_a_mission_entity(iVar2))
				{
					delete_object(&iVar2);
				}
			}
		}
		iVar4++;
	}
}

void func_194(var uParam0, int iParam1)
{
	func_498(&(uParam0->f_7375), iParam1);
	func_499(&(uParam0->f_10792), iParam1);
}

int func_195(var uParam0)
{
	if (func_8(uParam0, 8) && !func_120(uParam0, 4))
	{
		return 0;
	}
	if (((iVar1956 == 0 && !func_120(uParam0, 4)) && !func_128(uParam0, 1)) && !func_128(uParam0, 2))
	{
		return 0;
	}
	if (func_120(uParam0, 4) && !func_128(uParam0, 2))
	{
		return 1;
	}
	return 2;
}

void func_196(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < iVar976)
	{
		func_500(uParam0, iVar0);
		iVar0++;
	}
}

int func_197(int iParam0)
{
	if (!func_501(iParam0))
	{
		return 0;
	}
	if (!func_503(func_502(iParam0)))
	{
		return 1;
	}
	if (!_0x800df3fc913355f3(func_504(iParam0)))
	{
		return 0;
	}
	_0x4f81ead1de8fa19b(func_504(iParam0));
	return 1;
}

void func_198()
{
	render_script_cams(false, false, 3000, true, false, 0);
	iVar0 = 0;
	while (iVar0 < iVar1948)
	{
		if (does_cam_exist(&(iLocal_1950[iVar0])))
		{
			func_505(iVar0);
		}
		iVar0++;
	}
}

void func_199(var uParam0, bool bParam1)
{
	iVar0 = 0;
	while (iVar0 < iVar1688)
	{
		if (iVar0 == 64 || iVar0 == 65)
		{
			if (bParam1)
			{
			}
			else
			{
				func_506(uParam0, iVar0, 0);
			}
			iVar0++;
		}
	}
}

bool func_200(int iParam0)
{
	return func_507(iParam0, 16, 1);
}

void func_201(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (!func_508(iParam1))
	{
		return;
	}
	if (!func_204(iParam1))
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
		func_509(uParam0, iParam2);
		func_510(iParam2);
	}
	func_489(iParam1);
	func_511(iParam1, 0);
	func_512(iParam1, 0, bParam4, bParam5, -1082130432, 1, 1, 0, 0, 0, 0);
	if (bParam5)
	{
	}
}

bool func_202(int iParam0)
{
	if (!func_484(iParam0))
	{
		return false;
	}
	if ((*Global_1360165)[iParam0]->f_70.f_11 == 0 || (*Global_1360165)[iParam0]->f_70.f_11 == (*Global_1360165)[iParam0]->f_128)
	{
		return false;
	}
	return true;
}

void func_203(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	if (!func_484(iParam1))
	{
		return;
	}
	iVar0 = func_513(iParam1);
	if (func_202(iParam1))
	{
		if (!func_514(iParam1))
		{
			return;
		}
	}
	func_515(iParam1, 39, 1);
	func_516(iParam1, 64, 0);
	(*Global_1360165)[iParam1]->f_70.f_11 = 0;
	func_516(iParam1, 8, 0);
	if (does_entity_exist(iVar0))
	{
		if (!bParam2)
		{
			func_516(iParam1, 512, 1);
			set_ped_keep_task(iVar0, true);
		}
		else
		{
			set_blocking_of_non_temporary_events(iVar0, false);
			func_517(iParam1, 43, 1);
		}
		if (bParam4)
		{
			func_518(iParam1, 0, 1, 1, 1);
		}
	}
}

bool func_204(int iParam0)
{
	if (!func_508(iParam0))
	{
		return false;
	}
	if (!func_200(iParam0))
	{
		return false;
	}
	return (*Global_1360165)[iParam0]->f_129 == get_id_of_this_thread();
}

void func_205()
{
	_delete_volume(Local_141);
	_delete_volume(Local_141.f_1);
	_delete_volume(Local_141.f_2);
	_delete_volume(Local_141.f_3);
	_delete_volume(Local_141.f_4);
	_delete_volume(Local_141.f_5);
	_delete_volume(Local_141.f_6);
	_delete_volume(Local_141.f_7);
	_delete_volume(Local_141.f_8);
	_delete_volume(Local_141.f_9);
	_delete_volume(Local_141.f_10);
	_delete_volume(Local_141.f_11);
	_delete_volume(Local_141.f_12);
	_delete_volume(Local_141.f_13);
	_delete_volume(Local_141.f_14);
	_delete_volume(Local_141.f_15);
	_delete_volume(Local_141.f_16);
	_delete_volume(Local_141.f_17);
	_delete_volume(Local_141.f_18);
	_delete_volume(Local_141.f_19);
	_delete_volume(Local_141.f_20);
	_delete_volume(Local_141.f_21);
	_delete_volume(Local_141.f_22);
	_delete_volume(Local_141.f_23);
	_delete_volume(Local_141.f_24);
	_delete_volume(Local_141.f_25);
	_delete_volume(Local_141.f_26);
	_delete_volume(Local_141.f_27);
	_delete_volume(Local_141.f_28);
	_delete_volume(Local_141.f_29);
	_delete_volume(Local_141.f_30);
	_delete_volume(Local_141.f_31);
	_delete_volume(Local_141.f_32);
	_delete_volume(Local_141.f_33);
	_delete_volume(Local_141.f_34);
	_delete_volume(Local_141.f_35);
	_delete_volume(Local_141.f_36);
	_delete_volume(Local_141.f_37);
	_delete_volume(Local_141.f_38);
	_delete_volume(Local_141.f_39);
	_delete_volume(Local_141.f_40);
	_delete_volume(Local_141.f_41);
	_delete_volume(Local_141.f_42);
	_delete_volume(Local_141.f_43);
	_delete_volume(Local_141.f_44);
	_delete_volume(Local_141.f_45);
	_delete_volume(Local_141.f_46);
	_delete_volume(Local_141.f_47);
	_delete_volume(Local_141.f_48);
	_delete_volume(Local_141.f_49);
	_delete_volume(Local_141.f_50);
	_delete_volume(Local_141.f_51);
	_delete_volume(Local_141.f_52);
	_delete_volume(Local_141.f_53);
	_delete_volume(Local_141.f_54);
	_delete_volume(Local_141.f_55);
	_delete_volume(Local_141.f_56);
	_delete_volume(Local_141.f_57);
	_delete_volume(Local_141.f_58);
	_delete_volume(Local_141.f_59);
	_delete_volume(Local_141.f_60);
	_delete_volume(Local_141.f_61);
	_delete_volume(Local_141.f_62);
	_delete_volume(Local_141.f_63);
	_delete_volume(Local_141.f_64);
	_delete_volume(Local_141.f_65);
	_delete_volume(Local_141.f_66);
	_delete_volume(Local_141.f_67);
	_delete_volume(Local_141.f_68);
}

void func_206(bool bParam0)
{
	if (bParam0)
	{
		if (!does_entity_exist(&(Local_1692[5])))
		{
			Local_1692[5] = create_object(func_519(28), get_entity_coords(Global_35, true, false), true, true, false, false, true);
		}
		if (_is_metaped_using_component(Global_35, 1260888230))
		{
			_set_ped_component_disabled(Global_35, -1725579161, 1);
		}
		_set_ped_body_component(Global_35, -1297626216);
		_update_ped_variation(Global_35, false, true, true, true, false);
		attach_entity_to_entity(&(Local_1692[5]), Global_35, get_ped_bone_index(Global_35, 21030), vLocal_2044, vLocal_2047, false, false, false, false, 2, true, false, false);
	}
	else
	{
		if (does_entity_exist(&(Local_1692[4])))
		{
			func_520(4);
		}
		if (does_entity_exist(&(Local_1692[5])))
		{
			func_520(5);
		}
		_0xa2f8b3b5fedfc100(Global_35, -1297626216);
		_set_ped_component_disabled(Global_35, 1260888230, 1);
		_update_ped_variation(Global_35, false, true, true, true, false);
	}
}

void func_207(int iParam0, bool bParam1, float fParam2)
{
	func_521(iParam0, bParam1, fParam2);
}

void func_208()
{
	iVar0 = 0;
	while (iVar0 < iVar1089)
	{
		func_522(iVar0);
		iVar0++;
	}
}

void func_209()
{
	iVar0 = 0;
	while (iVar0 < iVar1089)
	{
		iVar1 = iVar0;
		switch (&vLocal_1091[iVar1])
		{
			case 0:
				break;
			case 1:
				if (vLocal_1091[iVar1]->f_1 == 1)
				{
					request_model(func_519(iVar1), false);
				}
				else if (vLocal_1091[iVar1]->f_1 == 2)
				{
					request_anim_dict(func_523(iVar1, 1));
				}
				else if (vLocal_1091[iVar1]->f_1 == 3)
				{
					_0x72d4cb5db927009c(func_524(iVar1), 1, 0);
				}
				else if (vLocal_1091[iVar1]->f_1 == 4)
				{
					request_waypoint_recording(func_525(iVar1));
				}
				else if (vLocal_1091[iVar1]->f_1 == 5)
				{
					_0xd9130842d7226045("SPL_BOTTLE_CRATE_SOUNDSET", 0);
				}
				else if (vLocal_1091[iVar1]->f_1 == 6)
				{
					_0x2b6529c54d29037a(func_526(iVar1));
				}
				else if (vLocal_1091[iVar1]->f_1 == 7)
				{
					_0x6a4d224fc7643941(func_438(iVar1, 1));
				}
				else if (vLocal_1091[iVar1]->f_1 == 8)
				{
					_request_scenario_type(func_527(iVar1), 1, 0, 0);
				}
				vLocal_1091[iVar1] = 2;
				break;
			case 2:
				if ((((((((vLocal_1091[iVar1]->f_1 == 1 && has_model_loaded(func_519(iVar1))) || (vLocal_1091[iVar1]->f_1 == 2 && has_anim_dict_loaded(func_523(iVar1, 1)))) || (vLocal_1091[iVar1]->f_1 == 3 && _0xff07cf465f48b830(func_524(iVar1)))) || (vLocal_1091[iVar1]->f_1 == 4 && get_is_waypoint_recording_loaded(func_525(iVar1)))) || (vLocal_1091[iVar1]->f_1 == 5 && _0xd9130842d7226045(func_171(iVar1), 0))) || (vLocal_1091[iVar1]->f_1 == 6 && _0x2c04d89a0fb4e244(func_526(iVar1)))) || (vLocal_1091[iVar1]->f_1 == 7 && _0xdd0b7c5ae58f721d(func_438(iVar1, 1)))) || (vLocal_1091[iVar1]->f_1 == 8 && _has_scenario_type_loaded(func_527(iVar1), false)))
				{
					vLocal_1091[iVar1] = 3;
				}
				break;
			case 4:
				if (vLocal_1091[iVar1]->f_1 == 1)
				{
					set_model_as_no_longer_needed(func_519(iVar1));
				}
				else if (vLocal_1091[iVar1]->f_1 == 2)
				{
					remove_anim_dict(func_523(iVar1, 1));
				}
				else if (vLocal_1091[iVar1]->f_1 == 3)
				{
					_0xc3896d03e2852236(func_524(iVar1));
				}
				else if (vLocal_1091[iVar1]->f_1 == 4)
				{
					remove_waypoint_recording(func_525(iVar1));
				}
				else if (vLocal_1091[iVar1]->f_1 == 5)
				{
					_0x531a78d6bf27014b(func_171(iVar1));
				}
				else if (vLocal_1091[iVar1]->f_1 == 6)
				{
					_0x57a197ad83f66bbf(func_526(iVar1));
				}
				else if (vLocal_1091[iVar1]->f_1 == 7)
				{
					_0x798be43c9393632b(func_438(iVar1, 1));
				}
				else if (vLocal_1091[iVar1]->f_1 == 8)
				{
					_0x4eddd9e9ca5af985(func_527(iVar1));
				}
				vLocal_1091[iVar1] = 0;
				break;
		}
		iVar0++;
	}
}

void func_210()
{
	iVar0 = 0;
	while (iVar0 < iVar2200)
	{
		func_528(iVar0, 1);
		iVar0++;
	}
}

int func_211(int iParam0)
{
	return iParam0;
}

void func_212(int iParam0)
{
	if (!func_529(iParam0))
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

bool func_213(int iParam0)
{
	return (iParam0 > -1 && iParam0 <= 80);
}

bool func_214(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

bool func_215(int iParam0)
{
	iVar0 = func_318(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

bool func_216(int iParam0)
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
		iVar0 = func_218(iParam0);
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

int func_217(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_5;
	}
	return Global_1058888->f_498[iParam0]->f_1;
}

int func_218(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_1;
	}
	iVar0 = func_530(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888->f_40501.f_1[iVar0]->f_1;
}

int func_219(int iParam0)
{
	if (!func_214(iParam0))
	{
		return 0;
	}
	return func_532(func_531(iParam0));
}

void func_220(int iParam0, int iParam1, int iParam2)
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

bool func_221(int iParam0, bool bParam1, bool bParam2)
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
		if (func_533())
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
		iVar0 = func_294(&(Global_1898164->f_1[0]));
		if (func_295(iVar0) && func_323((*Global_1347702)[iVar0]->f_12, 131072))
		{
			return false;
		}
	}
	if (iParam0 == 0 && func_214(&(Global_1898164->f_1[0])))
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

bool func_222(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_223(int iParam0)
{
	switch (func_219(iParam0))
	{
		case 1:
			iVar0 = func_294(iParam0);
			return func_534(iVar0);
		case 8:
			iVar1 = func_294(iParam0);
			if (func_323((*Global_1347702)[iVar1]->f_12, 1))
			{
				return func_535(iVar1);
			}
			break;
	}
	return -1;
}

void func_224(bool bParam0)
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
		func_536(iVar0, Global_1898077->f_12);
	}
	else
	{
		Global_1898077->f_1 = 0;
		Global_1898077->f_7 = iVar0;
		Global_1898077->f_8 = func_537();
		Global_1898077->f_9 = func_538(Global_1894899->f_2);
		func_539(Global_1898077->f_7, Global_1898077->f_8, Global_1898077->f_9);
	}
	Global_1898077->f_2 = 0;
}

int func_225()
{
	if (!func_349((*Global_1835011)[4]->f_1, 1))
	{
		return 0;
	}
	else if (!func_349((*Global_1347702)[66]->f_15, 1))
	{
		return 1;
	}
	else if (!func_349((*Global_1347702)[67]->f_15, 1))
	{
		return 2;
	}
	else if (!func_349((*Global_1835011)[38]->f_1, 1))
	{
		return 3;
	}
	else if (!func_349((*Global_1347702)[68]->f_15, 1))
	{
		return 4;
	}
	else if (!func_349((*Global_1835011)[59]->f_1, 1))
	{
		return 5;
	}
	else if (!func_349((*Global_1835011)[67]->f_1, 1))
	{
		return 7;
	}
	else
	{
		return 8;
	}
	return -1;
}

void func_226(int iParam0, int iParam1)
{
	if (!func_214(iParam0))
	{
		return;
	}
	func_540(iParam0, iParam1);
}

int func_227(int iParam0)
{
	return &(Global_1898164->f_1[iParam0]);
}

int func_228(bool bParam0)
{
	if (!bParam0 && func_541(373691918))
	{
		return 0;
	}
	_0xc61edebf16cd9668(752193127, bParam0, 0);
	return 1;
}

void func_229(int iParam0)
{
	Global_1898164 = (Global_1898164 || iParam0);
}

void func_230(int iParam0, bool bParam1)
{
	if (func_20() != -1)
	{
		return;
	}
	if (func_227(0) != iParam0)
	{
		return;
	}
	if (func_542(iParam0))
	{
		if (bParam1)
		{
			func_543(-525676072);
		}
		else
		{
			func_544(-525676072);
		}
	}
}

int func_231(int iParam0)
{
	return func_546(func_545(iParam0));
}

void func_232(int iParam0)
{
	Global_1572864->f_12 = iParam0;
}

void func_233(int iParam0)
{
	Global_1572864->f_11 = iParam0;
}

void func_234(int iParam0)
{
	Global_1572864->f_15 = iParam0;
}

void func_235(float fParam0)
{
	Global_1572864->f_22 = fParam0;
}

void func_236()
{
	if (func_10(Global_43801))
	{
		func_11(&Global_43801, 0, 0);
	}
}

bool func_237()
{
	return func_547(_0xc17f69e1418cd11f(3));
}

bool func_238()
{
	iVar0 = _0xc17f69e1418cd11f(1);
	return (iVar0 != 0 && _0x59fa676177dbe4c9(iVar0) == 4);
}

int func_239(int iParam0)
{
	iParam0 = func_288(iParam0);
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

int func_240(int iParam0, int iParam1)
{
	if (!func_548(iParam0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if ((*Global_40.f_11206[iParam0])[iVar0]->f_3 == iParam1)
		{
			func_549(iParam0, (*Global_40.f_11206[iParam0])[iVar0]);
		}
		iVar0++;
	}
	return 1;
}

bool func_241(char* sParam0, int iParam1)
{
	return (sParam0->f_8 && iParam1) != 0;
}

bool func_242(char* sParam0, bool bParam1)
{
	if (func_241(sParam0, 1))
	{
		return false;
	}
	if (sParam0->f_9 == 15 || sParam0->f_9 == 16)
	{
		prepare_music_event(sParam0);
		func_550(sParam0, 1);
		return true;
	}
	if (bParam1)
	{
		if (sParam0->f_9 == 17 || sParam0->f_9 == 19)
		{
			set_audio_flag(sParam0, true);
			func_550(sParam0, 1);
			return false;
		}
		if (sParam0->f_9 == 18 || sParam0->f_9 == 20)
		{
			set_audio_flag(sParam0, false);
			func_550(sParam0, 1);
			return false;
		}
	}
	else
	{
		if (sParam0->f_9 == 10 || sParam0->f_9 == 12)
		{
			set_audio_flag(sParam0, true);
			func_550(sParam0, 1);
			return false;
		}
		if (sParam0->f_9 == 11 || sParam0->f_9 == 13)
		{
			set_audio_flag(sParam0, false);
			func_550(sParam0, 1);
			return false;
		}
	}
	if (!is_string_null_or_empty(sParam0))
	{
		trigger_music_event(sParam0);
		func_550(sParam0, 1);
		return true;
	}
	func_550(sParam0, 1);
	return false;
}

bool func_243(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_244(var uParam0)
{
	func_551(uParam0, 0f);
}

int func_245(var uParam0)
{
	if (!func_26(uParam0))
	{
		return round((uParam0->f_1 * 1000f));
	}
	if (func_552(uParam0))
	{
		return round((uParam0->f_2 * 1000f));
	}
	return (func_553() - round((uParam0->f_1 * 1000f)));
}

void func_246(bool bParam0, bool bParam1)
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
		func_554(0);
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

struct<4> func_247(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_555(8, 0);
		case 1:
			return func_555(8, 4);
		case 2:
			return func_555(8, 6);
		case 3:
			return func_555(8, 8);
		case 4:
			return func_555(8, 10);
		case 5:
			return func_555(8, 12);
		case 25:
			return func_555(8, 13);
		case 26:
			return func_555(8, 13);
	}
	return func_555(8, 0);
}

void func_248(var uParam0, struct<4> Param1)
{
	*uParam0 = { Param1 };
	uParam0->f_3 = Param1.f_3;
}

int func_249(var uParam0, int iParam1)
{
	return uParam0->f_1[func_132(iParam1)]->f_9;
}

void func_250(int iParam0, struct<4> Param1, struct<4> Param5, int iParam9, int iParam10)
{
	Global_1572864->f_8 = iParam0;
	Global_1572864->f_9 = iParam9;
	Global_1572864->f_10 = iParam10;
	StringCopy(&cVar0, "INVALID", 8);
	if (func_219(iParam0) == 1)
	{
		cVar0 = func_110(func_556(iParam0));
		_0x8ec7890d446bd9c1(&cVar0, 0, Global_1572864->f_9);
	}
	else if (func_219(iParam0) == 8)
	{
		cVar0 = func_558(func_557(iParam0));
		_0x8ec7890d446bd9c1(&cVar0, 0, Global_1572864->f_9);
	}
	func_559(1, 1);
	func_560(1, Param1, Param1.f_3);
	*Global_1347394 = { Param5 };
	func_64(0);
	func_65(0);
	func_235(1f);
}

void func_251(char* sParam0)
{
	if (is_audio_scene_active(sParam0))
	{
		stop_audio_scene(sParam0);
	}
	func_550(sParam0, 2);
}

void func_252(int iParam0, int iParam1)
{
	if (!func_561(iParam0))
	{
		return;
	}
	Global_40.f_11029[iParam0] = (Global_40.f_11029[iParam0] || iParam1);
}

void func_253(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_254()
{
	Global_1934266->f_78.f_62 = -1;
}

void func_255()
{
	StringCopy(&(Global_1934266->f_78.f_64), "", 24);
}

void func_256()
{
	StringCopy(&(Global_1934266->f_78.f_67), "", 24);
}

void func_257()
{
	Global_1934266->f_78.f_63 = 0;
}

bool func_258()
{
	return func_562(get_id_of_this_thread());
}

void func_259(bool bParam0)
{
	if (bParam0)
	{
		Global_1945938->f_865 = (Global_1945938->f_865 - Global_1945938->f_865 & 2);
	}
	else
	{
		Global_1945938->f_865 |= 2;
	}
	func_176(bParam0);
}

void func_260()
{
	if (!Global_1894899->f_186)
	{
		_0xf5ffb08976911b50(Global_1894899->f_182, Global_1894899->f_183, Global_1894899->f_184, Global_1894899->f_185);
	}
}

void func_261(int iParam0, int iParam1, int iParam2)
{
	_0x36559148b78853b3(iParam0, iParam1, iParam2);
}

bool func_262()
{
	return (Global_1894899 & 1 != 0 && func_77() != -1);
}

void func_263(var uParam0)
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

void func_264(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_265(int iParam0)
{
	if (!func_563(iParam0))
	{
		return;
	}
	(*Global_1310750)[iParam0]->f_46 = 0;
}

void func_266()
{
	func_564(64);
}

void func_267()
{
	Global_1310750->f_16072 = 0;
}

bool func_268()
{
	if (Global_1572887->f_12 == -1)
	{
		return false;
	}
	return Global_1058888->f_4;
}

bool func_269(int iParam0)
{
	return func_270(23, iParam0);
}

bool func_270(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_565(&(Global_1109400->f_4), iVar0, 5);
	}
	if (iParam1 == func_566())
	{
		return func_565(&(Global_1109400->f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (&Global_1225639->f_21[iParam1])
	{
		return func_565(&((*Global_1108178)[iParam1]->f_4), iVar0, 5);
	}
	return false;
}

bool func_271(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

bool func_272(int iParam0)
{
	if (!func_271(iParam0))
	{
		return false;
	}
	return func_275(iParam0, 8);
}

void func_273(int iParam0, int iParam1)
{
	if (!func_271(iParam0))
	{
		return;
	}
	(*Global_1888801)[iParam0]->f_19 = iParam1;
}

void func_274(int iParam0)
{
	Global_1894899 = (Global_1894899 || iParam0);
}

bool func_275(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		return (Global_23118[iParam0] && iParam1) != 0;
	}
	return (Global_1058888->f_40615[iParam0] && iParam1) != 0;
}

void func_276(int iParam0)
{
	Global_1894899 = (&Global_1894899 - (Global_1894899 && iParam0));
}

bool func_277()
{
	bVar0 = false;
	iVar1 = 0;
	while (iVar1 < 150)
	{
		if (func_275(iVar1, 1))
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
			else if (func_275(iVar1, 2))
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
				func_310(iVar1, 11);
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

bool func_278(var uParam0)
{
	if (func_567(uParam0, 1) || func_567(uParam0, 2))
	{
		return true;
	}
	return false;
}

bool func_279(int iParam0, var uParam1)
{
	return is_itemset_valid(iParam0);
}

int func_280(struct<2> Param0)
{
	if (!func_279(Param0))
	{
		return 0;
	}
	return get_itemset_size(Param0);
}

int func_281(struct<2> Param0, int iParam2)
{
	if (!func_279(Param0))
	{
		return 0;
	}
	iVar0 = get_indexed_item_in_itemset(iParam2, Param0);
	iVar1 = iVar0;
	return iVar1;
}

int func_282(var uParam0)
{
	return uParam0->f_5411;
}

int func_283(int iParam0)
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

int func_284(int iParam0)
{
	iParam0 = func_288(iParam0);
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

void func_285(int iParam0)
{
	iParam0 = func_288(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = get_id_of_this_thread();
	func_568(iParam0);
	if (func_569(iParam0))
	{
		if (func_284(iParam0) != iVar0)
		{
			return;
		}
	}
	func_570(iParam0);
	func_571(iParam0);
	iVar1 = func_239(iParam0);
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
			if (!func_572(iVar2))
			{
				set_ped_model_is_suppressed(iVar2, false);
			}
		}
		func_573(iParam0);
	}
}

void func_286(int iParam0, bool bParam1)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (is_entity_dead(iParam0) || is_ped_injured(iParam0))
	{
		return;
	}
	if (!func_574(iParam0))
	{
		return;
	}
	iVar0 = func_283(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (iVar0 >= 7)
	{
		return;
	}
	func_59(iVar0);
	func_568(iVar0);
	iVar1 = get_id_of_this_thread();
	iVar2 = func_284(iVar0);
	if (!bParam1)
	{
		if (iVar1 != iVar2)
		{
			return;
		}
		if (!func_569(iVar0))
		{
			return;
		}
	}
	func_575(iVar0);
	set_ped_keep_task(iParam0, true);
	if (bParam1 && func_20() == -1)
	{
		if (!_0x88ad6cc10d8d35b2(iParam0))
		{
			set_entity_as_mission_entity(iParam0, true, true);
		}
	}
}

void func_287(var uParam0, int iParam1)
{
	uParam0->f_5308 = (uParam0->f_5308 - (uParam0->f_5308 && iParam1));
}

int func_288(int iParam0)
{
	if (iParam0 == 7)
	{
		return Global_40.f_1095;
	}
	return iParam0;
}

void func_289(int iParam0, int iParam1)
{
	iParam0 = func_288(iParam0);
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

void func_290()
{
	if (func_576(0))
	{
		func_577(0);
	}
	if (func_576(1))
	{
		func_577(1);
	}
	if (func_576(5))
	{
		func_577(5);
	}
	if (func_576(6))
	{
		func_570(6);
	}
}

struct<2> func_291(int iParam0)
{
	MemCopy(&Var0, {func_110(iParam0)}, 2);
	return Var0;
}

struct<2> func_292(int iParam0)
{
	Var0 = { func_291(iParam0) };
	StringConCat(&Var0, "AUD", 16);
	return Var0;
}

void func_293(var uParam0)
{
	_0xebff94328ff7a18a(-3.141593f, 3.141593f);
	if (_uiprompt_is_valid(uParam0->f_11))
	{
		_uiprompt_delete(uParam0->f_11);
	}
}

int func_294(int iParam0)
{
	if (!func_214(iParam0))
	{
		return -1;
	}
	return func_578(func_531(iParam0));
}

bool func_295(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_296(int iParam0, int iParam1)
{
	return (Global_40.f_490.f_402[iParam0] && iParam1) != 0;
}

void func_297(int iParam0, bool bParam1)
{
	iVar0 = func_579(iParam0);
	if (_uilog_is_entry_registered(iVar0, func_580(iParam0)))
	{
		_uilog_remove_entry(iVar0, func_580(iParam0));
	}
	if (bParam1)
	{
		if (iVar0 == 1)
		{
			if (_uilog_is_entry_registered(2, func_580(iParam0)))
			{
				_uilog_remove_entry(2, func_580(iParam0));
			}
		}
	}
	func_581(iParam0, 4);
	func_581(iParam0, 8);
	func_581(iParam0, 16);
}

void func_298(bool bParam0)
{
	iVar0 = 0;
	while (iVar0 < &Global_1347702)
	{
		if (func_295(iVar0))
		{
			if (func_296(iVar0, 4))
			{
				func_299(iVar0, bParam0);
			}
		}
		iVar0++;
	}
}

void func_299(int iParam0, bool bParam1)
{
	if (!func_296(iParam0, 4))
	{
		return;
	}
	if (!_uilog_is_entry_registered(func_579(iParam0), func_580(iParam0)))
	{
		return;
	}
	if (bParam1)
	{
		_uilog_mark_entry_availability(func_579(iParam0), func_580(iParam0), 2, "");
		func_582(iParam0, 16);
	}
	else
	{
		if (func_296(iParam0, 8))
		{
			_uilog_mark_entry_availability(func_579(iParam0), func_580(iParam0), 1, "");
		}
		else
		{
			_uilog_mark_entry_availability(func_579(iParam0), func_580(iParam0), 0, "");
		}
		func_581(iParam0, 16);
	}
}

void func_300(int iParam0, bool bParam1)
{
	if ((*Global_1347702)[iParam0]->f_12 & 67108864 != 0)
	{
		return;
	}
	if (!func_296(iParam0, 4))
	{
		return;
	}
	if (!_uilog_is_entry_registered(func_579(iParam0), func_580(iParam0)))
	{
		return;
	}
	if (bParam1)
	{
		if (func_296(iParam0, 16))
		{
		}
		else
		{
			_uilog_mark_entry_availability(func_579(iParam0), func_580(iParam0), 1, "");
		}
		func_582(iParam0, 8);
	}
	else
	{
		if (func_296(iParam0, 16))
		{
		}
		else
		{
			_uilog_mark_entry_availability(func_579(iParam0), func_580(iParam0), 0, "");
		}
		func_581(iParam0, 8);
	}
}

int func_301(var uParam0)
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

void func_302(int iParam0, int iParam1)
{
	if (func_576(0))
	{
		if (func_583(0))
		{
			func_584(0);
		}
	}
	if (func_576(1))
	{
		if (func_583(1))
		{
			func_584(1);
		}
	}
}

void func_303(var uParam0)
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
		if (func_450(uParam0, 0, uParam0->f_5413, uParam0->f_5413.f_1, uParam0->f_5413.f_2, uParam0->f_5416, 1, 1, 1))
		{
		}
	}
}

bool func_304(var uParam0)
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

void func_305(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, int iParam6, int iParam7)
{
	if (!bParam1)
	{
		func_585(iParam0, sParam4, iParam5);
	}
	func_586(iParam0, bParam1, fParam2, iParam3, iParam7);
}

int func_306(int iParam0)
{
	if (!func_271(iParam0))
	{
		return 0;
	}
	return (*Global_1888801)[iParam0]->f_20;
}

int func_307()
{
	return &Global_1899515;
}

void func_308(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_23118[iParam0]->f_2 = iParam1;
		return;
	}
	Global_1058888->f_40615[iParam0]->f_2 = iParam1;
}

void func_309(int iParam0, int iParam1)
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

void func_310(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_23118[iParam0] = (&Global_23118[iParam0] - (Global_23118[iParam0] && iParam1));
		return;
	}
	Global_1058888->f_40615[iParam0] = (&Global_1058888->f_40615[iParam0] - (Global_1058888->f_40615[iParam0] && iParam1));
}

void func_311(int iParam0)
{
	if (!func_271(iParam0))
	{
		return;
	}
	if (func_587(iParam0))
	{
		func_588(iParam0);
	}
	else
	{
		func_589(iParam0);
	}
}

int func_312(int iParam0)
{
	if (func_590(&(Global_1109400->f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

int func_313(int iParam0)
{
	if (func_591(&(Global_1109400->f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

bool func_314(int iParam0, int iParam1)
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

void func_315(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	iVar0 = 0;
	while (iVar0 < 120)
	{
		iVar1 = 0;
		if (func_592(Global_1310750[iVar0], iParam0))
		{
			if (!func_593(iVar0))
			{
				iVar1 = 1;
			}
			else if (iParam0 == 16777216)
			{
				if (func_594(iVar0) < func_595(iParam1))
				{
					iVar1 = 1;
				}
			}
			func_317(iVar0, iParam1, 1f, (iVar1 || iParam2), bParam3);
		}
		iVar0++;
	}
}

void func_316(float fParam0, bool bParam1, bool bParam2)
{
	fVar0 = func_596();
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

void func_317(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
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
	func_597(iParam0, bParam3, round((fVar0 * fParam2)), round((fVar1 * fParam2)), round((fVar2 * fParam2)), round((fVar3 * fParam2)), bParam4, 1);
}

int func_318(int iParam0)
{
	if (!func_214(iParam0))
	{
		return -1;
	}
	return func_218(iParam0);
}

void func_319(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_6 = iParam1;
}

int func_320(bool bParam0, int iParam1)
{
	if (!bParam0 && func_541(373691918))
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
	func_228(bParam0);
	return 1;
}

void func_321()
{
	Var0 = Global_35;
	Var0.f_12 = 8;
	Var0.f_8 = 0;
	iVar17 = 0;
	while (iVar17 < 27)
	{
		if (func_508(iVar17))
		{
			iVar18 = func_598(iVar17);
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
	func_599(&(Global_1359489->f_55));
	if (func_600(1777191912, 1))
	{
		func_601(1777191912, 1, 0);
	}
}

void func_322(int iParam0)
{
	if (!func_214(iParam0))
	{
		return;
	}
	func_603(iParam0, (func_602(iParam0) + shift_left(1, 16)));
}

bool func_323(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_324()
{
	return func_604() > 0;
}

void func_325(int iParam0, int iParam1, bool bParam2)
{
	switch (iParam0)
	{
		case 67:
			func_605(-1032423150, iParam1);
			break;
		case 18:
			func_605(294066959, iParam1);
			func_605(-1925639563, iParam1);
			func_605(-378582304, iParam1);
			func_605(-338306437, iParam1);
			break;
		case 20:
			func_605(437270255, iParam1);
			break;
		case 2:
			func_605(-304000413, iParam1);
			func_605(-533612796, iParam1);
			func_605(48036954, iParam1);
			break;
		case 23:
			func_605(193108691, iParam1);
			func_605(491732588, iParam1);
			func_605(671962088, iParam1);
			func_606(1);
			break;
		case 16:
			func_605(-1836056650, iParam1);
			func_605(-754657922, iParam1);
			func_605(-1752355838, iParam1);
			func_605(-1375324510, iParam1);
			break;
		case 59:
			func_605(-514392105, iParam1);
			func_605(-822060246, iParam1);
			if (func_607(146))
			{
				func_605(1372748575, iParam1);
			}
			func_606(1);
			break;
		case 76:
			func_605(1991352213, iParam1);
			if (func_608() == 0)
			{
				func_605(1852488616, iParam1);
			}
			else
			{
				func_605(-9866350, iParam1);
			}
			break;
		case 44:
			func_605(863852599, iParam1);
			func_605(1228374935, iParam1);
			func_605(1517889050, iParam1);
			func_605(830657578, iParam1);
			func_605(1901354958, iParam1);
			break;
		case 46:
			func_605(-582805654, iParam1);
			func_605(250378940, iParam1);
			func_605(-2143265426, iParam1);
			break;
		case 17:
			func_605(-941494139, iParam1);
			func_605(1641489521, iParam1);
			break;
		case 19:
			func_605(-1829423531, iParam1);
			func_605(-1590504752, iParam1);
			func_605(1357221321, iParam1);
			break;
		case 21:
			func_605(-1037992610, iParam1);
			func_605(-1286414399, iParam1);
			func_606(0);
			break;
		case 15:
			func_605(-1014460309, iParam1);
			func_605(-1030502825, iParam1);
			break;
		case 33:
			func_605(479388090, iParam1);
			func_605(-1396342239, iParam1);
			func_605(-619618632, iParam1);
			break;
		case 34:
			func_605(1193561641, iParam1);
			break;
		case 64:
			func_605(1363960851, iParam1);
			break;
		case 60:
			func_605(-1232453926, iParam1);
			func_605(-882833584, iParam1);
			break;
		case 73:
			func_605(2023205767, iParam1);
			break;
		case 74:
			func_605(-2135286513, iParam1);
			if (func_608() == 0)
			{
				func_605(33799444, iParam1);
			}
			else
			{
				func_605(-161343203, iParam1);
			}
			break;
		case 8:
			func_605(841639693, iParam1);
			func_605(358952323, iParam1);
			break;
		case 36:
			func_605(852538149, iParam1);
			func_605(689020839, iParam1);
			if (&Global_1357515 == 0)
			{
				func_605(-404049058, iParam1);
			}
			else if (&Global_1357515 == 1)
			{
				func_605(1116039310, iParam1);
			}
			break;
		case 27:
			func_605(107633428, iParam1);
			func_605(335902282, iParam1);
			func_605(575673055, iParam1);
			func_605(-425944207, iParam1);
			break;
		case 28:
			func_605(-1941530250, iParam1);
			func_605(1399269304, iParam1);
			func_605(1839684664, iParam1);
			func_605(923168503, iParam1);
			func_605(-1485078322, iParam1);
			break;
		case 29:
			func_605(574995900, iParam1);
			func_605(-1691275407, iParam1);
			func_605(-1725307861, iParam1);
			break;
		case 31:
			func_605(-2108383238, iParam1);
			func_605(-1321828931, iParam1);
			func_605(-1632118592, iParam1);
			func_605(334938948, iParam1);
			break;
		case 4:
			func_605(115823701, iParam1);
			func_605(-1896939736, iParam1);
			func_605(-1830746356, iParam1);
			func_605(-1235169781, iParam1);
			func_606(0);
			break;
		case 6:
			func_605(1801727621, iParam1);
			if (&Global_1357515 == -1)
			{
				func_605(-999872881, iParam1);
			}
			else if (&Global_1357515 == 0)
			{
				func_605(-1227289741, iParam1);
			}
			else if (&Global_1357515 == 1)
			{
				func_605(-384176140, iParam1);
			}
			break;
		case 25:
			func_605(1056132658, iParam1);
			break;
		case 24:
			if (&Global_1357515 == -1)
			{
				func_605(1343889751, iParam1);
			}
			else if (&Global_1357515 == 0)
			{
				func_605(-948326001, iParam1);
			}
			else if (&Global_1357515 == 1)
			{
				func_605(-1374849484, iParam1);
			}
			break;
		case 48:
			func_605(-1632856601, iParam1);
			if (&Global_1357515 == -1)
			{
				func_605(217772674, iParam1);
			}
			else
			{
				func_605(2071798160, iParam1);
			}
			if (func_609(51))
			{
				func_605(-792802286, iParam1);
			}
			break;
		case 49:
			func_605(-1972727021, iParam1);
			if (&Global_1357515 == 0)
			{
				func_605(-1444030885, iParam1);
			}
			else if (&Global_1357515 == 1)
			{
				func_605(-1272255787, iParam1);
			}
			else if (&Global_1357515 == 2)
			{
				func_605(1402120602, iParam1);
			}
			break;
		case 58:
			func_605(-1661934591, iParam1);
			break;
		case 50:
			func_605(-1713759426, iParam1);
			break;
		case 52:
			func_605(-314799932, iParam1);
			func_605(-462260432, iParam1);
			func_605(822929377, iParam1);
			if (bParam2 == 1)
			{
				func_605(345256028, iParam1);
				func_605(-1635084094, iParam1);
			}
			else
			{
				func_605(114267347, iParam1);
			}
			break;
		case 32:
			func_605(615304157, iParam1);
			break;
		case 47:
			func_605(415434835, iParam1);
			break;
		case 69:
			func_605(1373465877, iParam1);
			if (func_349((*Global_1347702)[9]->f_15, 1))
			{
				func_605(-2058273527, iParam1);
			}
			break;
		case 70:
			func_605(451334985, iParam1);
			if (func_608() == 0)
			{
				func_605(-224150200, iParam1);
			}
			else
			{
				func_605(289012628, iParam1);
			}
			break;
		case 71:
			if (func_608() == 0)
			{
				func_605(-41692120, iParam1);
			}
			else
			{
				func_605(1537840678, iParam1);
			}
			break;
		case 37:
			func_605(1520478365, iParam1);
			break;
		case 9:
			if (&Global_1357515 == -1)
			{
				func_605(1842132550, iParam1);
			}
			else
			{
				func_605(-785735240, iParam1);
			}
			func_605(-1605690566, iParam1);
			break;
		case 13:
			func_605(-731367459, iParam1);
			func_605(224176585, iParam1);
			func_605(-14545580, iParam1);
			break;
		case 53:
			func_605(1095274522, iParam1);
			break;
		case 54:
			func_605(-572027988, iParam1);
			break;
		case 56:
			func_605(1339307101, iParam1);
			func_605(2102267732, iParam1);
			break;
		case 57:
			func_605(710102686, iParam1);
			break;
		case 22:
			func_605(-1754368482, iParam1);
			func_605(-2071408557, iParam1);
			break;
		case 12:
			func_605(-181334543, iParam1);
			break;
		case 0:
			func_605(-2134669864, iParam1);
			func_605(-548289709, iParam1);
			func_605(-911271922, iParam1);
			func_605(-604455775, iParam1);
			break;
		case 1:
			func_606(1);
			break;
		case 3:
			if (func_360())
			{
				if (_journal_can_write_entry(-1478534115))
				{
					func_605(-1286192062, iParam1);
				}
			}
			else if (_journal_can_write_entry(-1286192062))
			{
				func_605(-1478534115, iParam1);
			}
			break;
		default:
			break;
	}
}

bool func_326()
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

void func_327(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	switch (iParam0)
	{
		case 0:
			func_605(-145926707, iParam1);
			func_605(-604922090, iParam1);
			func_605(-848690769, iParam1);
			break;
		case 1:
			func_605(-1477631591, iParam1);
			break;
		case 2:
			func_605(76112544, iParam1);
			break;
		case 9:
			func_605(1396404308, iParam1);
			func_605(-1357381228, iParam1);
			if (func_349((*Global_1835011)[69]->f_1, 1))
			{
				func_605(1902679064, iParam1);
			}
			else
			{
				func_605(-2146422425, iParam1);
			}
			break;
		case 22:
			func_605(-1534761730, iParam1);
			break;
		case 26:
			if (bParam3 == 1)
			{
				func_605(-1934184559, iParam1);
				func_605(1281755988, iParam1);
			}
			else
			{
				func_605(-1745220872, iParam1);
				func_605(-1044976796, iParam1);
			}
			break;
		case 29:
			if (bParam3 == 1)
			{
				func_605(-1641504538, iParam1);
				func_605(-988014485, iParam1);
			}
			else if (func_607(26))
			{
				func_605(-343043950, iParam1);
				func_605(-640062214, iParam1);
			}
			else
			{
				func_605(-1272028496, iParam1);
			}
			break;
		case 32:
			if (bParam3 == 1)
			{
				if (&Global_1357515 == -1)
				{
					func_605(-1816782797, iParam1);
				}
				else if (&Global_1357515 == 0)
				{
					func_605(-176175898, iParam1);
				}
				else if (&Global_1357515 == 1)
				{
					func_605(1711460080, iParam1);
				}
				else if (&Global_1357515 == 2)
				{
					func_605(-2108576508, iParam1);
				}
				else if (&Global_1357515 == 3)
				{
					func_605(-1103692224, iParam1);
				}
				else if (&Global_1357515 == 4)
				{
					func_605(1301690984, iParam1);
				}
			}
			else
			{
				func_605(699457343, iParam1);
				if (&Global_1357515 == -1)
				{
					func_605(-908444626, iParam1);
				}
				else if (&Global_1357515 == 0)
				{
					func_605(-1475448104, iParam1);
				}
				else if (&Global_1357515 == 1)
				{
					func_605(1727640249, iParam1);
				}
				else if (&Global_1357515 == 2)
				{
					func_605(-2050867743, iParam1);
				}
				else if (&Global_1357515 == 3)
				{
					func_605(-996445915, iParam1);
				}
				else if (&Global_1357515 == 4)
				{
					func_605(-1868882771, iParam1);
				}
			}
			break;
		case 35:
			if (bParam3 == 1)
			{
				func_605(-754570528, iParam1);
			}
			else
			{
				func_605(1690083163, iParam1);
			}
			break;
		case 36:
			if (bParam3 == 1)
			{
				func_605(-2072125821, iParam1);
			}
			else
			{
				func_605(270040030, iParam1);
			}
			break;
		case 37:
			func_605(-870030001, iParam1);
			break;
		case 53:
			if (bParam3 == 1)
			{
				func_605(-505314737, iParam1);
				func_605(-1853052860, iParam1);
			}
			else
			{
				func_605(-1975624994, iParam1);
				func_605(1648135852, iParam1);
			}
			break;
		case 54:
			if (bParam3 == 1)
			{
				func_605(1690231002, iParam1);
			}
			else
			{
				func_605(517031924, iParam1);
			}
			break;
		case 55:
			if (bParam3 == 1)
			{
				func_605(1225386280, iParam1);
			}
			else if (func_607(54))
			{
				func_605(-283235773, iParam1);
			}
			else
			{
				func_605(701962369, iParam1);
			}
			break;
		case 38:
			if (bParam3 == 1)
			{
				func_605(1355398007, iParam1);
			}
			else
			{
				func_605(-1900349467, iParam1);
			}
			break;
		case 39:
			if (bParam3 == 1)
			{
				func_605(574636806, iParam1);
			}
			else
			{
				func_605(-196256251, iParam1);
			}
			break;
		case 40:
			if (bParam3 == 1)
			{
				func_605(821118338, iParam1);
			}
			else if (func_607(39))
			{
				func_605(846829260, iParam1);
			}
			else
			{
				func_605(-1212247553, iParam1);
			}
			break;
		case 43:
			if (bParam3 == 1)
			{
				if (func_383((*Global_1835011)[33]->f_1) == 1)
				{
					func_605(1422779093, iParam1);
				}
				else
				{
					func_605(-1769536986, iParam1);
				}
			}
			else
			{
				func_605(-600786233, iParam1);
			}
			break;
		case 45:
			if (bParam3 == 1)
			{
				func_605(352134789, iParam1);
			}
			else if (func_607(43))
			{
				func_605(260723113, iParam1);
			}
			else
			{
				func_605(1080243038, iParam1);
			}
			break;
		case 41:
			if (bParam3 == 1)
			{
				func_605(-457958799, iParam1);
			}
			else
			{
				func_605(2076458086, iParam1);
			}
			break;
		case 42:
			if (func_607(41))
			{
				func_605(-546824600, iParam1);
			}
			else
			{
				func_605(-308364587, iParam1);
			}
			break;
		case 49:
			if (bParam3 == 1)
			{
				func_605(1297261593, iParam1);
			}
			else
			{
				func_605(1940089142, iParam1);
			}
			break;
		case 50:
			if (bParam3 == 1)
			{
				func_605(2068484886, iParam1);
			}
			else if (func_607(49))
			{
				func_605(-1489080639, iParam1);
				func_605(-2102244050, iParam1);
			}
			else
			{
				func_605(-1863040467, iParam1);
			}
			break;
		case 51:
			func_605(-2055943209, iParam1);
			break;
		case 58:
			if (func_349((*Global_1347702)[23]->f_15, 1))
			{
				func_605(1650066845, iParam1);
			}
			else
			{
				func_605(151370023, iParam1);
			}
			func_605(1426057961, iParam1);
			func_605(476379584, iParam1);
			break;
		case 59:
			func_605(-1638117866, iParam1);
			break;
		case 62:
			func_605(199541730, iParam1);
			break;
		case 63:
			func_605(1703485804, iParam1);
			func_605(-800449045, iParam1);
			break;
		case 65:
			func_605(-1678210868, iParam1);
			func_605(-1448238026, iParam1);
			func_605(-1200864845, iParam1);
			func_605(1473511536, iParam1);
			break;
		case 66:
			func_605(-1774490051, iParam1);
			func_605(-34645921, iParam1);
			func_605(174027075, iParam1);
			func_605(-1155999, iParam1);
			func_606(1);
			break;
		case 67:
			func_605(701612593, iParam1);
			func_605(-1069631343, iParam1);
			func_605(1673428882, iParam1);
			break;
		case 68:
			func_605(-739133286, iParam1);
			func_605(-2130089358, iParam1);
			func_605(2056190391, iParam1);
			func_605(1941753817, iParam1);
			func_606(0);
			break;
		case 70:
			func_605(-1217555753, iParam1);
			break;
		case 71:
			func_605(697048821, iParam1);
			break;
		case 73:
			func_605(-553148661, iParam1);
			break;
		case 75:
			func_605(1349250531, iParam1);
			break;
		case 77:
			if (bParam3 == 1)
			{
				func_605(1414263863, iParam1);
			}
			else
			{
				func_605(-1772294468, iParam1);
			}
			break;
		case 79:
			if (bParam3 == 1)
			{
				func_605(1835465936, iParam1);
				func_605(523715611, iParam1);
			}
			else if (func_607(78))
			{
				func_605(1420338873, iParam1);
			}
			else
			{
				func_605(-46362051, iParam1);
			}
			break;
		case 80:
			if (bParam3 == 1)
			{
				func_605(10180941, iParam1);
			}
			else if (func_607(79))
			{
				func_605(768420635, iParam1);
			}
			else
			{
				func_605(-1734012650, iParam1);
			}
			break;
		case 85:
			if (bParam3 == 1)
			{
				func_605(-383601523, iParam1);
			}
			else
			{
				func_605(1004812390, iParam1);
			}
			break;
		case 86:
			if (bParam3 == 1)
			{
				func_605(1606472408, iParam1);
			}
			else
			{
				func_605(1405690220, iParam1);
			}
			break;
		case 87:
			if (bParam3 == 1)
			{
				func_605(-203571927, iParam1);
			}
			else
			{
				func_605(640033630, iParam1);
			}
			break;
		case 88:
			if (bParam3 == 1)
			{
				func_605(729886222, iParam1);
			}
			else
			{
				func_605(-158717807, iParam1);
			}
			break;
		case 89:
			if (bParam3 == 1)
			{
				func_605(-714816362, iParam1);
			}
			else
			{
				func_605(1160146336, iParam1);
			}
			break;
		case 92:
			if (bParam3 == 1)
			{
				func_605(-932932179, iParam1);
				func_605(-1458537240, iParam1);
			}
			else
			{
				func_605(-1764383885, iParam1);
				func_605(894349517, iParam1);
			}
			break;
		case 93:
			if (bParam3 == 1)
			{
				func_605(1741466706, iParam1);
			}
			else
			{
				func_605(1405815775, iParam1);
			}
			break;
		case 94:
			func_605(1163067702, iParam1);
			if (&Global_1357515 == -1)
			{
				func_605(1905280979, iParam1);
			}
			else
			{
				func_605(-1966245299, iParam1);
			}
			func_605(721468880, iParam1);
			break;
		case 99:
			func_605(800644248, iParam1);
			break;
		case 101:
			if (bParam3 == 1)
			{
				func_605(1502176860, iParam1);
				if (&Global_1357515 == -1)
				{
					func_605(-1117781095, iParam1);
				}
				else
				{
					func_605(-618709225, iParam1);
				}
			}
			else if (&Global_1357515 == -1)
			{
				func_605(141494548, iParam1);
			}
			else
			{
				func_605(-633957459, iParam1);
			}
			break;
		case 102:
			if (bParam3 == 1)
			{
				func_605(-369525697, iParam1);
			}
			else if (func_607(101))
			{
				func_605(1595015219, iParam1);
			}
			else
			{
				func_605(-321486961, iParam1);
			}
			break;
		case 103:
			func_605(1422724221, iParam1);
			break;
		case 104:
			if (bParam3 == 1)
			{
				func_605(793460477, iParam1);
				func_605(-1610242176, iParam1);
			}
			else if (func_607(103))
			{
				func_605(1830897187, iParam1);
			}
			else
			{
				func_605(1419017828, iParam1);
			}
			break;
		case 105:
			if (bParam3 == 1)
			{
				func_605(1528309077, iParam1);
			}
			else if (func_607(104))
			{
				func_605(1864966105, iParam1);
			}
			else
			{
				func_605(-103336013, iParam1);
			}
			break;
		case 108:
			func_605(1175579551, iParam1);
			break;
		case 109:
			if (bParam3 == 1)
			{
				func_605(-1123227713, iParam1);
				func_605(-889574341, iParam1);
			}
			else
			{
				func_605(2065385917, iParam1);
				func_605(780305039, iParam1);
			}
			break;
		case 110:
			if (bParam3 == 1)
			{
				func_605(-887421691, iParam1);
			}
			else if (func_607(109))
			{
				func_605(-1318117949, iParam1);
			}
			else
			{
				func_605(1632244327, iParam1);
			}
			break;
		case 111:
			if (bParam3 == 1)
			{
				if (&Global_1357515 == 0)
				{
					func_605(284822762, iParam1);
				}
				else
				{
					func_605(-1425017554, iParam1);
				}
			}
			else if (func_607(110))
			{
				if (&Global_1357515 == 0)
				{
					func_605(553087292, iParam1);
				}
				else
				{
					func_605(-1766870331, iParam1);
					func_605(1971788022, iParam1);
				}
			}
			else if (&Global_1357515 == 0)
			{
				func_605(-1980598735, iParam1);
			}
			else
			{
				func_605(-442732098, iParam1);
				func_605(1955756409, iParam1);
			}
			break;
		case 115:
			func_605(394303528, iParam1);
			func_605(-2040171028, iParam1);
			break;
		case 143:
			if (bParam3 == 1)
			{
				func_605(1182403394, iParam1);
			}
			else
			{
				func_605(-2116547899, iParam1);
			}
			break;
		case 144:
			if (bParam3 == 1)
			{
				func_605(924445424, iParam1);
			}
			else
			{
				func_605(1227062271, iParam1);
			}
			break;
		case 117:
			if (bParam3 == 1)
			{
				func_605(430755273, iParam1);
				func_605(-1473879802, iParam1);
			}
			else
			{
				func_605(1121266049, iParam1);
			}
			break;
		case 118:
			if (bParam3 == 1)
			{
				func_605(73885747, iParam1);
			}
			else if (func_607(117))
			{
				func_605(1559707913, iParam1);
			}
			else
			{
				func_605(926897873, iParam1);
			}
			break;
		case 119:
			if (bParam3 == 1)
			{
				func_605(-2103887972, iParam1);
			}
			else if (func_607(118))
			{
				func_605(-435828462, iParam1);
			}
			else
			{
				func_605(-516020583, iParam1);
			}
			break;
		case 121:
			if (bParam3 == 1)
			{
				func_605(2054486196, iParam1);
			}
			else
			{
				func_605(1809320262, iParam1);
			}
			break;
		case 122:
			if (bParam3 == 1)
			{
				func_605(-570086056, iParam1);
			}
			else if (func_607(121))
			{
				func_605(32337856, iParam1);
			}
			else
			{
				func_605(-206811842, iParam1);
			}
			break;
		case 124:
			if (bParam3 == 1)
			{
				func_605(813493663, iParam1);
			}
			else if (func_607(122))
			{
				func_605(-2132763590, iParam1);
			}
			else
			{
				func_605(477901035, iParam1);
			}
			break;
		case 125:
			if (bParam3 == 1)
			{
				func_605(-66240572, iParam1);
				func_605(1563075046, iParam1);
			}
			else
			{
				func_605(-787011772, iParam1);
				func_605(-1523377438, iParam1);
			}
			break;
		case 127:
			func_605(61020800, iParam1);
			break;
		case 129:
			func_605(428985222, iParam1);
			break;
		case 131:
			func_605(-1393851036, iParam1);
			break;
		case 133:
			func_605(1559531342, iParam1);
			break;
		case 134:
			func_605(-718846442, iParam1);
			break;
		case 135:
			if (bParam3 == 1)
			{
				if (&Global_1357515 == -1)
				{
					func_605(-1374407408, iParam1);
				}
				else
				{
					func_605(471210931, iParam1);
				}
			}
			else if ((_journal_can_write_entry(1732474719) && _journal_can_write_entry(801682048)) && _journal_can_write_entry(-1986404392))
			{
				if (&Global_1357515 == -1)
				{
					func_605(-472672138, iParam1);
				}
				else
				{
					func_605(-2132098614, iParam1);
				}
			}
			else if (&Global_1357515 == -1)
			{
				func_605(-1678710489, iParam1);
			}
			else
			{
				func_605(1522210661, iParam1);
			}
			break;
		case 136:
			if (bParam3 == 1)
			{
				func_605(1717582460, iParam1);
			}
			else
			{
				func_605(343644664, iParam1);
			}
			break;
		case 137:
			if (bParam3 == 1)
			{
				func_605(1568112362, iParam1);
				func_605(1388317526, iParam1);
			}
			else if (func_607(136))
			{
				func_605(-1597534828, iParam1);
				func_605(-1207918353, iParam1);
			}
			else
			{
				func_605(-1940891082, iParam1);
				func_605(-598277294, iParam1);
			}
			break;
		case 142:
			if (bParam2 == 1)
			{
				func_605(448334530, iParam1);
				func_605(2145375502, iParam1);
			}
			else
			{
				func_605(-1891994685, iParam1);
			}
			break;
		case 146:
			if (bParam3 == 1)
			{
				if (&Global_1357515 == 1)
				{
					func_605(1159121660, iParam1);
				}
				else if (&Global_1357515 == 0)
				{
					func_605(-1968554187, iParam1);
				}
			}
			else if (&Global_1357515 == 1)
			{
				func_605(841927377, iParam1);
			}
			else if (&Global_1357515 == 0)
			{
				func_605(848633571, iParam1);
			}
			break;
		case 147:
			if (bParam3 == 1)
			{
				func_605(-66616327, iParam1);
			}
			else
			{
				func_605(1978361607, iParam1);
			}
			break;
		case 148:
			if (bParam3 == 1)
			{
				func_605(1862916706, iParam1);
			}
			else if (func_607(147))
			{
				func_605(675105199, iParam1);
			}
			else
			{
				func_605(-1993800776, iParam1);
			}
			break;
		case 149:
			if (bParam3 == 1)
			{
				func_605(174409701, iParam1);
			}
			else if (func_607(148))
			{
				func_605(-1730895475, iParam1);
			}
			else
			{
				func_605(-342396910, iParam1);
			}
			break;
		case 150:
			if (bParam3 == 1)
			{
				func_605(1295237052, iParam1);
			}
			else if (func_607(149))
			{
				func_605(-788577684, iParam1);
			}
			else
			{
				func_605(1527015024, iParam1);
			}
			break;
		default:
			break;
	}
}

int func_328(int iParam0, var uParam1, int iParam2)
{
	*uParam1 = 1137976064;
	*iParam2 = -1;
	iVar0 = func_219(iParam0);
	switch (iVar0)
	{
		case 1:
			iVar1 = func_556(iParam0);
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
					if (func_383((*Global_1835011)[9]->f_1) == 0)
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
			iVar2 = func_294(iParam0);
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
			iVar3 = func_294(iParam0);
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

int func_329(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
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
	iVar2 = func_610(iParam0);
	iVar3 = func_611(iParam0);
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
				iVar1 = func_307();
				func_356(&iVar1, 0, 0, iParam3, 0, 0, 0, 0);
			}
			else
			{
				iVar1 = -15;
			}
			Global_40.f_4283.f_6[iVar0]->f_1 = iVar1;
			Global_40.f_4283.f_6[iVar0]->f_4 = iVar2;
			func_612(iParam0, 1);
			if (func_613(iVar2))
			{
				iVar4 = 0;
				while (iVar4 < 60)
				{
					if (Global_40.f_4283.f_6[iVar4]->f_4 == iVar2 && &Global_40.f_4283.f_6[iVar4] != iParam0)
					{
						func_614(Global_40.f_4283.f_6[iVar4], 1, 0);
					}
					iVar4++;
				}
			}
			if (bParam5)
			{
				if (bParam6)
				{
					func_615(1, iParam0);
				}
				else
				{
					func_616(1, iParam0);
				}
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_330(int iParam0, int iParam1)
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

int func_331(int iParam0, int iParam1, int iParam2)
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

void func_332(bool bParam0)
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

void func_333(int iParam0, int iParam1, bool bParam2)
{
	iVar0 = iParam0 * 1000;
	if ((iVar0 + get_game_timer()) > Global_1327479->f_4)
	{
		func_617(iParam0, iParam1, bParam2);
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

int func_334(int iParam0, int iParam1)
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

bool func_335(int iParam0)
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

void func_336(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, bool bParam5, float fParam6, bool bParam7)
{
	if (func_20() != -1)
	{
		return;
	}
	if ((Global_36616 && func_618(iParam1)) != 0)
	{
		return;
	}
	iVar0 = func_619(iParam0);
	iVar0 = round((IntToFloat(iVar0) * fParam6));
	if ((((((iParam1 != 1142025875 && iParam1 != 1587891565) && iParam1 != -643014279) && iParam1 != -597116214) && iParam1 != 551416228) && iParam1 != -735200598) && iParam1 != -2010847721)
	{
		func_620(iVar0, 0, iParam0, iParam1, sParam3, iParam4, bParam5, bParam7);
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
			func_621(iVar1, iVar0, iParam0, iParam1, iParam4, bParam5);
		}
		else
		{
			func_620(iVar0, 1, iParam0, iParam1, sParam3, iParam4, bParam5, 0);
		}
	}
}

int func_337(int iParam0)
{
	if (!func_214(iParam0))
	{
		return -1;
	}
	return func_622(func_531(iParam0));
}

int func_338(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return 120;
	}
	return 60;
}

void func_339()
{
	_sc_feed_submit_preset_message(2, 1);
	if (is_orbis_version())
	{
		iVar0 = func_623(13);
		(*Global_1898441)[iVar0] = 13;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_WIN2_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_WIN2_COM", 24);
	}
}

bool func_340(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
{
	if (!func_624(iParam0, 0))
	{
		return false;
	}
	if (!func_625(iParam0, iParam1, bParam2, iParam5))
	{
		return false;
	}
	if (!func_626(iParam0, &iVar0, iParam1))
	{
		return false;
	}
	func_627(iParam0, bParam2);
	iVar2 = 0;
	if (func_628(iParam0, 0, 0) == 0)
	{
		if (func_629(iParam0))
		{
			iVar5 = func_630(iParam0);
			iVar6 = func_631(iVar5);
			iVar7 = func_632(iVar6) + 1;
			func_633(iVar5);
			if (func_634(38))
			{
				func_347(483, 0);
			}
			else
			{
				func_347(482, 0);
			}
			if (iVar7 == func_635(iVar6))
			{
				func_340(func_636(iVar6), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				if (func_420() && func_637(4))
				{
					if (func_420() && (func_638(38) || func_634(38)))
					{
						func_640(38, func_636(iVar6), 0, 0, func_639(), 0, -1, 0);
						func_641(2);
					}
					else
					{
						func_640(38, func_636(iVar6), 0, 0, func_639(), 0, -1, 0);
						func_641(1);
					}
				}
			}
			else if (func_420() && func_637(4))
			{
				if (func_420() && (func_638(38) || func_634(38)))
				{
					func_640(38, 0, 0, 0, func_639(), 0, -1, 0);
					func_641(2);
				}
				else
				{
					func_640(38, 0, 0, 0, func_639(), 0, -1, 0);
					func_641(1);
				}
			}
			if (func_420() && func_637(4))
			{
				if (!Global_1914319->f_17376)
				{
					if (func_420() && (func_638(38) || func_634(38)))
					{
						func_642(38, _0x13aaecda43318bfe(-2076669067, iVar6), _0xd52d20b0c76bb26d(-2076669067, iVar6), iVar7, 12, 0, iVar6);
					}
					else
					{
						func_642(38, get_hash_key("toast_log_blips"), get_hash_key("BLIP_RC_COLLECTABLE_CIGCARD"), iVar7, 12, 0, iVar6);
					}
				}
			}
		}
	}
	if (func_643(iParam0) == -1037537535)
	{
		if ((!func_644(iParam0, 866047851) && !func_644(iParam0, -1979000645)) && !func_644(iParam0, 1248798204))
		{
			bVar3 = true;
		}
	}
	if (func_645(iParam0, 8388608) && !func_646(28))
	{
		func_647(28);
	}
	if (!bVar3)
	{
		if (func_644(iParam0, -1588156645))
		{
			bParam2 = true;
			bVar4 = true;
			if (func_648(iParam0) == -1447088266)
			{
				iVar1 = func_650(func_649(iParam0, 1), 0);
				if (is_weapon_valid(iVar1))
				{
					if (func_20() == -1)
					{
						func_651(iVar1);
					}
					if (func_652(0) && func_653(iVar1, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_654(iParam0, iVar0, iParam5);
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
						func_651(iParam0);
					}
					if (func_652(0) && func_653(iParam0, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_654(iVar1, iVar0, iParam5);
						if (!bParam9)
						{
							bParam2 = false;
						}
					}
				}
			}
		}
		else if (func_643(iParam0) == -427144552)
		{
			if (!func_655(iParam0, iParam5, &bParam2, bParam3, bParam4))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_643(iParam0) == 307971639 && func_656(iParam0))
		{
			if (!func_657(iParam0, &iVar0, iParam5))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_644(iParam0, 866047851))
		{
			func_658(iParam0);
		}
		else if (func_644(iParam0, 2000026003))
		{
			func_659(iParam0);
		}
		else if (func_644(iParam0, -103750053))
		{
			func_95(func_660(-1019857971), iVar0);
		}
		else if (iParam0 == 2093098109)
		{
			func_95(func_661(-717883113, 2091222383), iVar0);
		}
		else if (func_644(iParam0, -121341956) && !func_644(iParam0, 606799272))
		{
			if (iParam0 != 191707516 && iParam0 != 1993672959)
			{
				if (func_349((*Global_1835011)[4]->f_1, 1))
				{
					func_347(498, 0);
				}
			}
			if (func_644(iParam0, -2017733358) || func_644(iParam0, -1369131378))
			{
				func_662(iParam0);
			}
		}
		else if (func_644(iParam0, -136654233))
		{
			if (func_644(iParam0, -1021472396))
			{
			}
		}
		else if (func_644(iParam0, -1466706512) && func_644(iParam0, 1147021565))
		{
			func_347(484, 0);
		}
		else if (func_644(iParam0, 1147021565) && func_644(iParam0, -524514947))
		{
		}
		else if (func_644(iParam0, 554195525))
		{
		}
		else if (func_644(iParam0, 589988438))
		{
			if (func_663())
			{
				func_664(1339418451, 0, 1065353216, 1, 0, 0, 0, -1);
				bParam2 = true;
				bVar4 = true;
			}
		}
		else if (func_644(iParam0, 787083290) && func_644(iParam0, 949916894))
		{
			func_665(iParam0);
		}
		else if (func_644(iParam0, -1718133314))
		{
			func_666(iParam0);
		}
		else if (func_644(iParam0, -1738650224))
		{
			func_667(iParam0);
		}
		else if (func_644(iParam0, -1112814642) && func_644(iParam0, 949916894))
		{
			func_668(iParam0);
		}
		else if (iParam0 == -569063887)
		{
			Global_1935496->f_20 = 0;
		}
		else if (func_644(iParam0, 1841149704))
		{
			func_669();
		}
		else if (func_644(iParam0, 606799272))
		{
			func_670(iParam0, iParam1);
			func_671(iParam0);
		}
		else if (func_644(iParam0, -1112814642) && func_644(iParam0, -1697809989))
		{
			func_672(iParam0, 0, 0, 0);
		}
		else if (func_644(iParam0, -2017733358) || func_644(iParam0, -1369131378))
		{
			func_662(iParam0);
		}
		else if (func_644(iParam0, -1921346699))
		{
			if (func_20() != -1)
			{
				return false;
			}
			func_673(iParam0, iParam5, iParam8);
			bParam2 = true;
		}
		else if (func_644(iParam0, 1192444843))
		{
			switch (iParam0)
			{
				case 1815744868:
					if (!func_369(215778062, 1, 0))
					{
						func_340(215778062, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 1334018438:
					if (!func_369(670273567, 1, 0))
					{
						func_340(670273567, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 1055480217:
					if (!func_369(-967317137, 1, 0))
					{
						func_340(-967317137, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case -978159653:
					if (!func_369(526074061, 1, 0))
					{
						func_340(526074061, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 2100131425:
					if (!func_369(-1045488665, 1, 0))
					{
						func_340(-1045488665, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case -2041382104:
					if (!func_369(471514780, 1, 0))
					{
						func_340(471514780, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
			}
		}
		else if (func_644(iParam0, -839724752) && func_645(iParam0, 4))
		{
			if (!func_634(42))
			{
				func_674(iParam0);
			}
		}
		else if (func_644(iParam0, 1399091007))
		{
			func_675(iParam0, &iVar2);
			bParam2 = true;
			bVar4 = true;
		}
		else if (func_644(iParam0, 1248798204))
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
				func_340(iVar8, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_647(24);
				if (&Global_1946804->f_1497.f_1[27] == &Global_1946804->f_57[27])
				{
					func_676(player_ped_id(), -1185145312, 0, 99217379, 1, 1, 1, 0, 1, 0);
				}
				if (func_677(&iVar9, 0))
				{
					func_653(iVar9, 0, 0, bParam4, 3, 0, 752097756, 0);
				}
				break;
			case 1171350303:
				if (func_20() == -1 && &Global_1946804->f_1497.f_1[25] == &Global_1946804->f_57[25])
				{
					func_676(player_ped_id(), 1171350303, 0, 673166414, 1, 1, 1, 0, 1, 0);
				}
				break;
			case -160924582:
				break;
			case 2131771850:
				func_347(415, 0);
				Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
				func_678();
				Global_40.f_11095.f_61 = (Global_40.f_11095.f_61 + 0.1f);
				func_679();
				Global_40.f_11095.f_55 = (Global_40.f_11095.f_55 + 0.1f);
				Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
				Global_40.f_11095.f_56 = (Global_40.f_11095.f_56 + 0.1f);
				Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
				func_680();
				Global_40.f_11095.f_63 = (Global_40.f_11095.f_63 + 0.1f);
				func_681();
				Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
				Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
				Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
				func_682();
				break;
			case -102111672:
				bParam2 = true;
				bVar4 = true;
				break;
			case -1937935584:
				func_683(499813453, 854119837, 0);
				func_684(499813453, 0);
				func_685(1);
				break;
			case 2127812557:
				func_683(499813453, -1292544588, 0);
				func_684(499813453, 0);
				func_685(2);
				break;
			case 808991383:
				func_683(499813453, -1003325394, 0);
				func_684(499813453, 0);
				func_685(4);
				break;
			case 1134518629:
				func_683(666607663, -335460405, 0);
				func_684(666607663, 0);
				func_686(1);
				break;
			case 902940106:
				func_683(666607663, 903797617, 0);
				func_684(666607663, 0);
				func_686(2);
				break;
			case -418174898:
				func_683(666607663, 669728650, 0);
				func_684(666607663, 0);
				func_686(4);
				break;
			case -648114971:
				func_683(-220219788, 1214120047, 0);
				func_684(-220219788, 0);
				func_687(1);
				break;
			case 211153747:
				func_683(-220219788, 655769340, 0);
				func_684(-220219788, 0);
				func_687(2);
				break;
			case -32876996:
				func_683(-220219788, 885316185, 0);
				func_684(-220219788, 0);
				func_687(4);
				break;
			case 1191437462:
				func_683(218622660, -1491419385, 0);
				func_684(218622660, 0);
				func_688(1);
				break;
			case 1119149048:
				func_683(218622660, 1809565830, 0);
				func_684(218622660, 0);
				func_688(2);
				break;
			case 506073827:
				func_683(390004462, -628873767, 0);
				func_684(390004462, 0);
				func_689(1);
				break;
			case -1876986168:
				func_683(390004462, -405421956, 0);
				func_684(390004462, 0);
				func_689(2);
				break;
			case 2142623221:
				func_683(390004462, -1108972386, 0);
				func_684(390004462, 0);
				func_689(4);
				break;
			case 1508215381:
				func_683(6410548, 1053716392, 0);
				func_684(6410548, 0);
				func_690(1);
				break;
			case -888935280:
				func_683(6410548, 806507056, 0);
				func_684(6410548, 0);
				func_690(2);
				break;
			case -1252474566:
				func_683(6410548, 1571925350, 0);
				func_684(6410548, 0);
				func_690(4);
				break;
			case -1465702449:
				func_683(6410548, 1330352282, 0);
				func_684(6410548, 0);
				func_690(8);
				break;
			case -21093309:
				func_692(242, func_691(-21093309), 0);
				break;
			case 204375141:
				func_692(240, func_691(204375141), 0);
				break;
			case -417963070:
				func_692(241, func_691(-417963070), 0);
				break;
			case -1080874779:
			case -755485480:
			case 230530039:
			case 299161628:
				if (get_game_timer() >= (Global_1935689->f_10197 + 60000))
				{
					func_693(594, 1934060482, 1, 1);
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
					func_693(594, 1110018439, 1, 1);
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
					func_693(594, 1408511260, 1, 1);
					Global_1935689->f_10197 = get_game_timer();
				}
				break;
			case -1976480343:
			case -953313786:
			case 730856618:
				if (get_game_timer() >= (Global_1935689->f_10197 + 60000))
				{
					func_693(594, -1228016946, 1, 1);
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
					func_693(595, -103579, 1, 1);
					Global_1935689->f_10197 = get_game_timer();
				}
				break;
			case -1977068039:
			case -399865011:
				if (get_game_timer() >= (Global_1935689->f_10197 + 60000))
				{
					func_693(595, -1531530025, 1, 1);
					Global_1935689->f_10197 = get_game_timer();
				}
				break;
			case 80178851:
				func_347(488, 0);
				break;
			case 1613651027:
				func_347(491, 0);
				break;
			case -885810591:
				func_347(485, 0);
				if ((get_random_int_in_range(0, 65536) % 3) == 0)
				{
					func_340(func_694(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				else
				{
					func_340(func_695(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				break;
			case -601932535:
				if (func_646(1))
				{
					func_347(487, 0);
				}
				break;
			case -898386032:
				func_347(486, 0);
				break;
			case -2035110427:
				if (func_20() == -1)
				{
					iParam0 = -1448210800;
				}
				break;
			case 1510719693:
				func_347(496, 0);
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
		func_696(&iVar10);
		if (!func_697(iVar10, iVar0, iParam5))
		{
			return false;
		}
		else if (!func_652(0))
		{
			return true;
		}
		if (func_643(iParam0) == -1037537535)
		{
			func_698(iParam0);
		}
		if (func_644(iParam0, -1979000645))
		{
			func_699(iParam0);
		}
	}
	else if (iVar2 != 0)
	{
		if (func_652(0))
		{
			Var11.f_1 = 10;
			Var11.f_12 = 10;
			_0x48e4d50f87a96aa5(Global_35, 0, 0, iVar2, &Var11, 0);
			iVar34 = 0;
			while (iVar34 < Var11)
			{
				func_340(&(Var11.f_1[iVar34]), &(Var11.f_12[iVar34]), 0, 0, 0, -897553835, 0, 0, 0, 0);
				iVar34++;
			}
		}
		else
		{
			func_700(iVar2, 0);
		}
	}
	Var35 = { func_701(iParam0) };
	if (_stat_id_is_valid(&Var35))
	{
		_0x6a0184e904cdf25e(&Var35, iVar0);
	}
	func_702(iParam0);
	if (fParam6 > 0f)
	{
		if (func_644(iParam0, -839724752))
		{
			func_703(iParam0, fParam6);
		}
	}
	else if (!bParam2)
	{
		bVar37 = iParam5 == 1248274121;
		func_704(iParam0, iVar0, 0, bVar37, 0);
	}
	return true;
}

void func_341(int iParam0)
{
	if (func_644(iParam0, 1989861793))
	{
		iVar0 = func_705(iParam0, 1697966752);
		if (iVar0 != 0)
		{
			Var3 = { func_706(-1591664384, -1591664384, 0, 0, 0, 0, -1, iVar0, 0) };
			if (func_707(Var3, &iVar1, &iVar2, 0))
			{
				bVar13 = false;
				iVar14 = 0;
				while (iVar14 < iVar2)
				{
					iVar15 = func_708(iVar14, iVar1);
					if (iVar15 != iParam0 && func_624(iVar15, 0))
					{
						if (func_709(iVar15, 0, 0, 1, 0))
						{
							bVar13 = true;
						}
					}
					iVar14++;
				}
				func_710(iVar1);
				if (bVar13)
				{
					func_711(iParam0);
				}
				else
				{
					func_347(306, 0);
				}
			}
		}
	}
}

void func_342()
{
	if (func_20() != -1)
	{
		return;
	}
	func_712();
	func_713();
	func_714();
	func_715();
	func_716();
	func_717();
	func_718();
}

void func_343(int iParam0)
{
	func_719(iParam0, 1, 1, -142743235, 1);
	if (func_720(iParam0))
	{
		func_721(iParam0, 1, 1);
	}
	bVar3 = false;
	bVar7 = false;
	iVar8 = func_723(func_722(iParam0), 1);
	if (iVar8 >= 39)
	{
		bVar7 = true;
	}
	func_724(-2124052603);
	iVar1 = 0;
	while (iVar1 < 39)
	{
		vVar4.x = &Global_1946804->f_57[iVar1];
		*Global_1946804->f_1616.f_1[iVar1] = { vVar4 };
		Global_1946804->f_1616.f_1[iVar1]->f_2 = (Global_1946804->f_1497.f_1[iVar1]->f_2 || Global_1946804->f_1378.f_1[iVar1]->f_2);
		iVar1++;
	}
	if (func_725() == -2125499975)
	{
		iVar2 = 2020890174;
	}
	else
	{
		iVar2 = 1105329772;
	}
	func_726(&(Global_1946804->f_1616), iVar2, &uVar9, 1, 0, 0, 0);
	func_726(&(Global_1946804->f_1616), 211609491, &uVar9, 1, 0, 0, 0);
	*Global_1946804->f_1616.f_1[8] = { func_727(8, 0) };
	*Global_1946804->f_1616.f_1[9] = { func_727(9, 0) };
	*Global_1946804->f_1616.f_1[0] = { func_727(0, 0) };
	*Global_1946804->f_1616.f_1[2] = { func_727(2, 0) };
	*Global_1946804->f_1616.f_1[3] = { func_727(3, 0) };
	*Global_1946804->f_1616.f_1[1] = { func_727(1, 0) };
	*Global_1946804->f_1616.f_1[5] = { func_727(5, 0) };
	*Global_1946804->f_1616.f_1[6] = { func_727(6, 0) };
	*Global_1946804->f_1616.f_1[7] = { func_727(7, 0) };
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (bVar7)
		{
			iVar8 = 0;
			while (iVar8 < 39)
			{
				if (iParam0 == func_728(iVar8, iVar0))
				{
					func_729(Global_1946804->f_1616.f_1[iVar8], iVar8, iVar0);
				}
				else
				{
					iVar8++;
				}
			}
		}
		else if (iParam0 == func_728(iVar8, iVar0))
		{
			func_729(Global_1946804->f_1616.f_1[iVar8], iVar8, iVar0);
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

void func_344()
{
	iVar5 = 16;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		iVar1 = func_728(iVar5, iVar0);
		if (iVar1 == &Global_1946804->f_57[iVar5] || iVar1 == 0)
		{
			if (func_725() == -2125499975 || func_725() == -449205311)
			{
				vVar2.x = -2018863109;
				vVar2.f_1 = 1530758430;
				func_729(&vVar2, iVar5, iVar0);
			}
			else
			{
				vVar2.x = 1734931872;
				vVar2.f_1 = 1155669136;
				func_729(&vVar2, iVar5, iVar0);
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

void func_345()
{
	_sc_feed_submit_preset_message(2, 2);
	if (is_orbis_version())
	{
		iVar0 = func_623(14);
		(*Global_1898441)[iVar0] = 14;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_MUD1_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_MUD1_COM", 24);
	}
}

char* func_346(int iParam0, bool bParam1)
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
			if ((func_349((*Global_1835011)[59]->f_1, 1) || func_349((*Global_1347702)[1]->f_15, 1)) || func_215((*Global_1347702)[1]->f_15))
			{
				return "COMP_RUFUS";
			}
			else if (func_600(403634348, 1))
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

void func_347(int iParam0, bool bParam1)
{
	func_730(iParam0, &iVar0, &iVar1);
	if (!func_731(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_732(iVar0, iVar1);
}

void func_348(int iParam0, bool bParam1, bool bParam2)
{
	iVar0 = func_723(iParam0, 1);
	func_733(Global_1946804->f_1497.f_1[iVar0], 2, 6);
	func_733(Global_1946804->f_1378.f_1[iVar0], 2, 6);
	if (bParam1)
	{
		Global_1946804->f_1497.f_1[iVar0] = &Global_1946804->f_57[iVar0];
		Global_1946804->f_1497.f_1[iVar0]->f_1 = 0;
		*Global_1946804->f_1378.f_1[iVar0] = { *Global_1946804->f_1497.f_1[iVar0] };
		if (bParam2)
		{
			func_734(17, iParam0, 0, 0, 0);
		}
	}
	if (func_20() == -1)
	{
		iVar1 = 0;
		while (iVar1 < 5)
		{
			func_733(Global_26796.f_26[iVar1]->f_1.f_1[iVar0], 2, 6);
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
			func_733(Global_36638.f_45.f_350.f_26[iVar1]->f_1.f_1[iVar0], 2, 6);
			if (bParam1)
			{
				Global_36638.f_45.f_350.f_26[iVar1]->f_1.f_1[iVar0] = &Global_1946804->f_57[iVar0];
				Global_36638.f_45.f_350.f_26[iVar1]->f_1.f_1[iVar0]->f_1 = 0;
			}
			iVar1++;
		}
	}
}

bool func_349(int iParam0, bool bParam1)
{
	switch (func_318(iParam0))
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

void func_350()
{
	_sc_feed_submit_preset_message(2, 5);
	if (is_orbis_version())
	{
		iVar0 = func_623(17);
		(*Global_1898441)[iVar0] = 17;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_BRA2_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_BRA2_COM", 24);
	}
}

void func_351()
{
	_sc_feed_submit_preset_message(2, 6);
	if (is_orbis_version())
	{
		iVar0 = func_623(18);
		(*Global_1898441)[iVar0] = 18;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_BRA3_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_BRA3_COM", 24);
	}
}

int func_352(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (iParam3 == -358215195)
	{
		Var0 = { func_735(iParam1, 1, 0) };
		iParam3 = func_736(Var0.f_4);
		if (iParam3 == -358215195)
		{
			return 0;
		}
	}
	func_737(iParam3);
	return func_676(iParam0, iParam1, iParam2, iParam3, bParam4, bParam5, 1, 0, 1, 0);
}

bool func_353()
{
	return _unlock_is_unlocked(99890643);
}

void func_354(int iParam0)
{
	if (!func_738(iParam0))
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

bool func_355(int iParam0, int iParam1)
{
	if (!func_739(iParam0))
	{
		return false;
	}
	if ((iParam1 == -1 || iParam1 < 0) || iParam1 > 179)
	{
		iParam1 = func_740(iParam0);
	}
	if (iParam1 == -1)
	{
		return false;
	}
	return func_741(Global_40.f_9910[iParam1], 4);
}

void func_356(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	iVar0 = func_742(*iParam0);
	iVar1 = func_743(*iParam0);
	iVar2 = func_744(*iParam0);
	iVar3 = func_745(*iParam0);
	iVar4 = func_746(*iParam0);
	iVar5 = func_747(*iParam0);
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
	iVar6 = func_748(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_748(iVar1, iVar0);
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
	func_749(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_357(int iParam0, int iParam1, bool bParam2)
{
	if (!func_739(iParam0))
	{
		return;
	}
	if (!func_750(iParam1))
	{
		return;
	}
	if (func_751(iParam1, 1))
	{
		return;
	}
	iVar0 = func_740(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (func_355(iParam0, -1))
	{
		return;
	}
	else
	{
		func_752(Global_40.f_9910[iVar0], 2);
	}
	Global_40.f_9910[iVar0]->f_4 = iParam1;
	if (bParam2)
	{
		if (!func_221(0, 0, 1))
		{
			func_389(0, 17);
		}
	}
}

void func_358()
{
	_sc_feed_submit_preset_message(2, 7);
	if (is_orbis_version())
	{
		iVar0 = func_623(19);
		(*Global_1898441)[iVar0] = 19;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_MOB5_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_MOB5_COM", 24);
	}
}

void func_359()
{
	_sc_feed_submit_preset_message(2, 8);
	if (is_orbis_version())
	{
		iVar0 = func_623(20);
		(*Global_1898441)[iVar0] = 20;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_SAI1_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_SAI1_COM", 24);
	}
}

bool func_360()
{
	return _unlock_is_unlocked(-121456797);
}

void func_361()
{
	_sc_feed_submit_preset_message(2, 9);
	if (is_orbis_version())
	{
		iVar0 = func_623(21);
		(*Global_1898441)[iVar0] = 21;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_GUA1_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_GUA1_COM", 24);
	}
}

void func_362()
{
	_sc_feed_submit_preset_message(2, 10);
	if (is_orbis_version())
	{
		iVar0 = func_623(22);
		(*Global_1898441)[iVar0] = 22;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_GUA3_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_GUA3_COM", 24);
	}
}

void func_363()
{
	_sc_feed_submit_preset_message(2, 12);
	if (is_orbis_version())
	{
		iVar0 = func_623(24);
		(*Global_1898441)[iVar0] = 24;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_ODR5_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_ODR5_COM", 24);
	}
}

void func_364()
{
	_sc_feed_submit_preset_message(2, 13);
	if (is_orbis_version())
	{
		iVar0 = func_623(25);
		(*Global_1898441)[iVar0] = 25;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_FIN1_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_FIN1_COM", 24);
	}
}

void func_365()
{
	_sc_feed_submit_preset_message(2, 14);
	if (is_orbis_version())
	{
		iVar0 = func_623(27);
		(*Global_1898441)[iVar0] = 27;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_MAR51_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_MAR51_COM", 24);
	}
}

void func_366()
{
	_sc_feed_submit_preset_message(2, 15);
	if (is_orbis_version())
	{
		iVar0 = func_623(28);
		(*Global_1898441)[iVar0] = 28;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_ABI21_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_ABI_21_COM", 24);
	}
}

bool func_367(int iParam0)
{
	return _0x9a03f22ad446eeac(iParam0) > 0;
}

bool func_368(int iParam0)
{
	return (Global_40.f_12019.f_4 && iParam0) != 0;
}

bool func_369(int iParam0, int iParam1, bool bParam2)
{
	if (!func_624(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_643(iParam0);
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
		if (!func_753(iParam0, 1))
		{
			return false;
		}
	}
	return func_628(iParam0, 0, bParam2) >= iParam1;
}

void func_370(int iParam0)
{
	if (func_82(32768))
	{
		return;
	}
	if (iParam0 < 0)
	{
		func_754(_create_var_string(2, "MISSION_COMPLETE_BANK_FEED", absi(iParam0)), "itemtype_textures", get_hash_key("ITEMTYPE_BANK_DEBT"), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
		Global_1879514->f_14 = 1;
		Global_1879514->f_15 = 0;
	}
	else
	{
		func_754(_create_var_string(2, "MISSION_COMPLETE_LOAN_FEED", iParam0), "itemtype_textures", get_hash_key("ITEMTYPE_BANK_DEBT"), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Negative", 0, 1);
		Global_1879514->f_14 = 0;
		Global_1879514->f_15 = 1;
	}
}

void func_371()
{
	_sc_feed_submit_preset_message(2, 16);
	if (is_orbis_version())
	{
		iVar0 = func_623(29);
		(*Global_1898441)[iVar0] = 29;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_BEE22_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_BEE22_COM", 24);
	}
}

void func_372()
{
	_sc_feed_submit_preset_message(2, 17);
	if (is_orbis_version())
	{
		iVar0 = func_623(26);
		(*Global_1898441)[iVar0] = 26;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_FIN2_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_FIN2_COM", 24);
	}
}

void func_373()
{
	_sc_feed_submit_preset_message(2, 11);
	if (is_orbis_version())
	{
		iVar0 = func_623(23);
		(*Global_1898441)[iVar0] = 23;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_DOC_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_DOC_COM", 24);
	}
}

void func_374()
{
	_sc_feed_submit_preset_message(2, 3);
	if (is_orbis_version())
	{
		iVar0 = func_623(15);
		(*Global_1898441)[iVar0] = 15;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_DOW3_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_DOW3_COM", 24);
	}
}

void func_375()
{
	_sc_feed_submit_preset_message(2, 4);
	if (is_orbis_version())
	{
		iVar0 = func_623(16);
		(*Global_1898441)[iVar0] = 16;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_DUT1_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_DUT1_COM", 24);
	}
}

void func_376()
{
	if (func_755() > 1)
	{
		func_756();
	}
	else
	{
		if (!_unlock_is_visible(-707360575))
		{
			_unlock_set_visible(-707360575, true);
			func_347(444, 1);
		}
		if (!_unlock_is_visible(-1201174711))
		{
			_unlock_set_visible(-1201174711, true);
			func_347(447, 1);
		}
		if (!_unlock_is_visible(151582343))
		{
			_unlock_set_visible(151582343, true);
			func_347(448, 1);
		}
		if (!_unlock_is_visible(-642492359))
		{
			_unlock_set_visible(-642492359, true);
			func_347(450, 1);
		}
		if (!_unlock_is_visible(5171247))
		{
			_unlock_set_visible(5171247, true);
			func_347(452, 1);
		}
	}
}

bool func_377(int iParam0)
{
	return func_507(iParam0, 4, 1);
}

void func_378(int iParam0)
{
	func_757(iParam0, 4, 1);
}

void func_379(int iParam0)
{
	if (iParam0 < 0)
	{
		iParam0 = 0;
	}
	Global_40.f_4283.f_326 = iParam0;
	Var0 = { func_94(-160912108) };
	stat_id_set_int(&Var0, iParam0, true);
}

void func_380(int iParam0)
{
	if (func_82(32768))
	{
		return;
	}
	if (!func_214(iParam0))
	{
		return;
	}
	func_253(Global_1935630, 8192);
	iVar2 = 1;
	switch (func_219(iParam0))
	{
		case 1:
			func_95(func_661(909007663, -587839005), 1);
			iVar0 = func_294(iParam0);
			func_95(func_94(-634848880), 1);
			switch (func_534(iVar0))
			{
				case 0:
					func_95(func_661(909007663, 1325140787), 1);
					break;
				case 1:
					func_95(func_661(909007663, 2101241783), 1);
					break;
				case 2:
					func_95(func_661(909007663, -1296936294), 1);
					break;
				case 3:
					func_95(func_661(909007663, -798388728), 1);
					break;
				case 4:
					func_95(func_661(909007663, -1787586531), 1);
					break;
				case 5:
					func_95(func_661(909007663, -1002834519), 1);
					break;
				case 6:
					func_95(func_661(909007663, -50600144), 1);
					break;
				case 7:
					func_95(func_661(909007663, -348503123), 1);
					break;
				case 8:
					func_95(func_661(909007663, -528798161), 1);
					break;
				default:
					iVar2 = 0;
					break;
			}
			if (iVar0 == 7)
			{
				func_95(func_661(909007663, -406093146), 1);
			}
			if (iVar2 && _0xe824ce7d13fcb35e(get_hash_key(&((*Global_1835011)[iVar0]->f_8))))
			{
				func_95(func_661(909007663, 532323983), 1);
			}
			break;
		case 8:
			iVar1 = func_294(iParam0);
			if (func_323((*Global_1347702)[iVar1]->f_12, 1))
			{
				func_95(func_94(-634848880), 1);
			}
			if (func_323((*Global_1347702)[iVar1]->f_12, 4) || iVar1 == 59)
			{
				if (func_323((*Global_1347702)[iVar1]->f_12, 1))
				{
					func_95(func_661(909007663, -587839005), 1);
				}
				else
				{
					func_95(func_661(909007663, -2049243343), 1);
				}
			}
			if (func_323((*Global_1347702)[iVar1]->f_12, 1))
			{
				switch (func_535(iVar1))
				{
					case 0:
						func_95(func_661(909007663, 1325140787), 1);
						break;
					case 1:
						func_95(func_661(909007663, 2101241783), 1);
						break;
					case 2:
						func_95(func_661(909007663, -1296936294), 1);
						break;
					case 3:
						func_95(func_661(909007663, -798388728), 1);
						break;
					case 4:
						func_95(func_661(909007663, -1787586531), 1);
						break;
					case 5:
						func_95(func_661(909007663, -1002834519), 1);
						break;
					case 6:
						func_95(func_661(909007663, -50600144), 1);
						break;
					case 7:
						func_95(func_661(909007663, -348503123), 1);
						break;
					case 8:
						func_95(func_661(909007663, -528798161), 1);
						break;
					default:
						iVar2 = 0;
						break;
				}
				if (iVar2 && _0xe824ce7d13fcb35e(get_hash_key(&((*Global_1347702)[iVar1]->f_3))))
				{
					func_95(func_661(909007663, 532323983), 1);
				}
			}
			else if (func_323((*Global_1347702)[iVar1]->f_12, 4))
			{
				if (func_323((*Global_1347702)[iVar1]->f_12, 4194304))
				{
				}
				else if (!func_323((*Global_1347702)[iVar1]->f_12, 512))
				{
					func_95(func_661(909007663, 551192206), 1);
				}
				else
				{
					func_95(func_661(909007663, -406093146), 1);
				}
			}
			break;
	}
}

void func_381()
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
	else if (func_222(&Global_1935630, 131072))
	{
		return;
	}
	else if ((func_221(0, 0, 1) || func_758()) || func_129())
	{
		return;
	}
	iVar0 = func_225();
	if (((iVar0 == 0 || iVar0 == 4) || iVar0 == 6) || iVar0 == 7)
	{
		return;
	}
	while (_spactionproxy_get_next_pending_buy_action(&uVar4))
	{
		if (!_spactionproxy_process_action(uVar4, func_759(&uVar4, &iVar1, &iVar2, &iVar3)))
		{
		}
	else
	{
		}
	}
	if (iVar1 == 1)
	{
		func_760(_create_var_string(2, "SHOP_CATALOGUE_DELIVERY"), _create_var_string(2, "SHOP_CATALOGUE_PURCHASE_RECEIVED_SINGLE", 1), 908516622, -576888982, -2, 0, 0, 0, 0, 1, 1);
	}
	else if (iVar1 > 1)
	{
		func_760(_create_var_string(2, "SHOP_CATALOGUE_DELIVERY"), _create_var_string(2, "SHOP_CATALOGUE_PURCHASE_RECEIVED_PLURAL", iVar1), 908516622, -576888982, -2, 0, 0, 0, 0, 1, 1);
	}
	if (iVar3 > 0)
	{
		func_761(iVar3, 0, 0);
	}
	if (iVar1 > 0)
	{
		func_389(0, -1);
	}
	if (iVar2 > 0)
	{
		func_762("SHOP_CATALOGUE_PURCHASE_FAILED", 10000, 0, 0, 0, 1);
	}
	func_763(1, 0);
	Global_1956575->f_4 = 1;
}

void func_382(int iParam0, int iParam1, bool bParam2, float fParam3, int iParam4, char* sParam5, int iParam6, int iParam7)
{
	if (func_82(32768))
	{
		return;
	}
	func_305(iParam1, bParam2, fParam3, iParam4, sParam5, iParam6, iParam7, 752097756);
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
		func_764(iParam0, iParam1, fParam3, iParam4);
	}
}

int func_383(int iParam0)
{
	if (!func_214(iParam0))
	{
		return -1;
	}
	return func_765(iParam0);
}

int func_384(int iParam0, int iParam1)
{
	if (!func_766(iParam0))
	{
		return 0;
	}
	if (!func_420())
	{
		return 0;
	}
	if (!func_767(iParam0, &iVar0, &iVar1))
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

int func_385(int iParam0, int iParam1, int iParam2, int iParam3)
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
	if (iVar2 >= func_768())
	{
		iVar2 = func_768();
	}
	iVar5 = func_769(iVar3, iVar4, iParam2);
	if (Global_1572887->f_12 == -1)
	{
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			iVar6 = iVar0;
			if (func_531(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_531(iVar6) == 0)
			{
				return func_770(iVar3, iVar4, iParam2, iVar0, iParam3);
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
			if (func_531(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_531(iVar6) == 0)
			{
				return func_770(iVar3, iVar4, iParam2, iVar0, iParam3);
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
				return func_770(iVar3, iVar4, iParam2, iVar0, 0);
			}
			iVar0++;
		}
	}
	return -1;
}

int func_386(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_771(1330954593, 0, -1);
		case 1:
			return func_771(1330954593, 0, -1);
		case 2:
			return func_771(1330954593, 0, -1) * 2;
		case 4:
			return func_771(1330954593, 0, -1);
		case 5:
			return func_771(1330954593, 0, -1);
		case 6:
			return func_771(1330954593, 0, -1) * 2;
		case 12:
			return 75000;
		case 8:
			return func_771(1330954593, 0, -1) * 3;
		case 9:
			return func_771(1330954593, 0, -1) * 3;
		case 10:
			return func_771(1330954593, 0, -1) * 3;
		case 11:
			return func_771(1330954593, 0, -1);
		default:
			break;
	}
	return 0;
}

char[] func_387(int iParam0)
{
	if (!func_214(iParam0))
	{
		return cVar0;
	}
	switch (func_219(iParam0))
	{
		case 1:
			cVar0 = (*Global_1835011)[func_556(iParam0)]->f_8;
			break;
		case 8:
			cVar0 = (*Global_1347702)[func_294(iParam0)]->f_3;
			break;
		case 11:
			if (iParam0 == func_385(0, 10, 11, 2116153146))
			{
				StringCopy(&cVar0, "CABR01", 8);
			}
			break;
	}
	return cVar0;
}

void func_388(char[4] cParam0)
{
	if (!Global_1879514->f_11)
	{
		iVar0 = func_390();
		iVar1 = get_hash_key(&cParam0);
		if (_0x57e798b54c45ee1a(iVar1) != 5 && iVar0 == 5)
		{
			if (func_219(Global_1879514->f_1) == 1)
			{
				func_384(5, 1);
			}
			else if (func_219(Global_1879514->f_1) == 8 && (func_323((*Global_1347702)[func_294(Global_1879514->f_1)]->f_12, 1) || func_323((*Global_1347702)[func_294(Global_1879514->f_1)]->f_12, 33554432)))
			{
				func_384(5, 1);
			}
		}
		_0xe824ce7d13fcb300(get_hash_key(&cParam0), iVar0);
	}
	else
	{
		_0xe824ce7d13fcb300(get_hash_key(&cParam0), 3);
	}
}

void func_389(bool bParam0, int iParam1)
{
	if (_0x5fc9357c26daefce())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_772(&Global_0, 8);
	}
	if (!func_420() || func_20() != -1)
	{
		return;
	}
	func_772(&Global_0, 1);
}

int func_390()
{
	iVar0 = func_773(Global_1879514->f_1);
	if (Global_1425247->f_53)
	{
		return 0;
	}
	if (func_774(iVar0))
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

Vector3 func_391(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10)
{
	vVar0 = { func_775(vParam0, iParam3, iParam4, iParam5, iParam6, 1, iParam7, bParam8, bParam9, bParam10, -1, 1103626240) };
	if (func_421(vVar0))
	{
		vVar0 = { func_775(vParam0, iParam3, iParam4, 0, 1, 1, iParam7, bParam8, 0, 0, -1, 1103626240) };
	}
	return vVar0;
}

void func_392(vector3 vParam0, int iParam3, var uParam4, int iParam5)
{
	Global_1310720->f_1 = { vParam0 };
	Global_40.f_9.f_10 = uParam4;
	Global_40.f_9.f_11 = iParam3;
	Global_40.f_9.f_12 = iParam5;
}

void func_393(vector3 vParam0)
{
	Global_40.f_9.f_7 = { vParam0 };
}

int func_394(vector3 vParam0, int iParam3)
{
	iVar0 = func_77();
	if (func_271(iVar0))
	{
		if (_0xf256a75210c5c0eb((*Global_1888801)[iVar0]->f_3, vParam0))
		{
			return iVar0;
		}
	}
	return func_776(vParam0, iParam3);
}

void func_395()
{
	func_777();
	func_778();
	func_779();
	_0x11b0a0b282fa9b10(0);
}

void func_396(struct<16> Param0, int iParam16)
{
	if (is_string_null_or_empty(&(Param0.f_10)))
	{
		return;
	}
	if (Global_1934603->f_161 >= 10)
	{
		return;
	}
	if (!func_780(iParam16, 2))
	{
		if (_get_number_of_references_of_script_with_name_hash(get_hash_key(&(Param0.f_10))) > 0 || func_781(&(Param0.f_10)))
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
			func_782(iParam16);
			return;
		}
		iVar0++;
	}
}

bool func_397(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_398(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_399()
{
	return Global_1572864->f_12;
}

void func_400(bool bParam0)
{
	if (func_547(Global_1935630->f_3))
	{
		return;
	}
	iVar0 = 1;
	Var1.f_2 = 4;
	Var1 = "HUD_PENALTY_SOUNDSET";
	Var1.f_1 = "HUD_FAIL";
	Var1.f_3 = func_783();
	Var1.f_3.f_3 = iVar0;
	if ((!func_784(Global_1347343->f_2) && !func_397(Global_1347343->f_11, 64)) || func_82(32768))
	{
		Var1.f_7 = func_785();
		Var1.f_7.f_3 = iVar0;
	}
	if (!func_397(Global_1347343->f_11, 1024) && !func_82(32768))
	{
		Var1.f_11 = func_786();
		Var1.f_11.f_3 = iVar0;
	}
	if (func_397(Global_1347343->f_11, 8))
	{
		Var1.f_15 = func_787();
		Var1.f_15.f_3 = iVar0;
	}
	if (Global_1347343->f_1 != 2)
	{
		Global_1935630->f_3 = func_788(&Var1, "REPLAY_T", &(Global_1347343->f_3), 0, 1);
	}
	else
	{
		Global_1935630->f_3 = func_789(&Var1, "REPLAY_T_DEAD", 0, 1);
	}
	set_player_invincible(player_id(), true);
	if (!is_ped_in_any_vehicle(Global_35, false) && !is_entity_attached(Global_35))
	{
		freeze_entity_position(Global_35, true);
	}
	func_398(&(Global_1347343->f_11), 1073741824);
	if (bParam0)
	{
		func_398(&(Global_1347343->f_11), 1048576);
	}
	_0x16e9abdd34ddd931();
}

void func_401(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	func_790(uParam0);
	iVar0 = func_791(uParam0, iParam1);
	if (bParam3)
	{
		if (is_string_null_or_empty(sParam2))
		{
			sParam2 = func_792(iParam1);
		}
		iVar0 = func_793(uParam0, sParam2);
		if (iVar0 == -1)
		{
			iVar0 = func_794(uParam0);
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
		iVar0 = func_794(uParam0);
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
	func_795(uParam0, 2);
}

void func_402(var uParam0, int iParam1)
{
	func_796(&(uParam0->f_7375), iParam1);
}

int func_403(var uParam0)
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

int func_404()
{
	return func_556(func_797());
}

void func_405(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < func_422())
	{
		func_798(uParam0, iVar0);
		iVar0++;
	}
}

int func_406(var uParam0)
{
	uParam0->f_607 = uParam0->f_607;
	return 1;
}

void func_407(var uParam0, var uParam1)
{
	uParam0->f_607 = uParam1;
}

void func_408(var uParam0)
{
	func_804(uParam0, 0, 1, 126102, 126250, 126277, 126449, 127400, "BRT1_INT", 10, 15);
	func_804(uParam0, 1, 2, 127583, 128262, 128637, 128900, 133291, "BRT1_MCS_1", 2058, 23);
	func_804(uParam0, 2, 3, 133967, 134730, 135074, 135296, 139967, "brt1_mcs2", 16782410, 42);
	func_804(uParam0, 3, 4, 140141, 140786, 141246, 141438, 144252, "BRT1_MCS3", 4162, 42);
	func_804(uParam0, 4, 5, 144567, 144840, 145210, 145665, 146847, "", 64, 43);
	func_804(uParam0, 5, 25, 147032, 147192, 147482, 147602, 147881, "BRT1_EXT", 82, 4);
	func_804(uParam0, 25, 26, 147895, 148071, 148173, 148202, 148268, "rfud2_rsc_2", 66, 3);
}

void func_409(var uParam0, vector3 vParam1)
{
	uParam0->f_5413 = { vParam1 };
}

void func_410()
{
	func_835();
	Local_1323[0]->f_1 = 0.05f;
	Local_1323[0]->f_6 = 0.25f;
	Local_1323[0]->f_7 = 1f;
	Local_1323[1]->f_1 = 0.05f;
	Local_985[0] = 23;
	Local_985[0]->f_6 = 1;
	Local_985[2] = 19;
	Local_985[2]->f_6 = 3;
	Local_985[3] = 20;
	Local_985[3]->f_6 = 3;
	Local_985[4] = 21;
	Local_985[4]->f_6 = 2;
	Local_985[5] = 18;
	Local_985[5]->f_6 = 2;
	Local_985[6] = 22;
	Local_985[6]->f_6 = 2;
	Local_985[7] = 16;
	Local_985[7]->f_6 = 8;
	Local_985[8] = 13;
	Local_985[8]->f_6 = 59;
	Local_985[9] = 15;
	Local_985[9]->f_6 = 59;
	Local_985[10] = 14;
	Local_985[10]->f_6 = 59;
	Local_985[11] = 16;
	Local_985[11]->f_6 = 59;
	Local_985[12] = 17;
	Local_985[12]->f_6 = 67108863;
	Local_985[13] = 26;
	Local_985[13]->f_6 = 67108863;
	Local_985[1] = 24;
	Local_985[1]->f_6 = 3;
	Local_985[14] = 25;
	Local_985[14]->f_6 = 3;
	func_836();
	func_837();
	func_838();
	func_839();
	func_840();
	Local_1457[0] = 5;
	Local_1457[0]->f_5 = 9999.9f;
	Local_1457[0]->f_6 = 800f;
	Local_1457[0]->f_8 = { _0xf70f00013a62f866(Local_141.f_1) };
	Local_1457[0]->f_11 = 38;
	Local_1457[0]->f_12 = 1;
	Local_1457[1] = 6;
	Local_1457[1]->f_5 = 0f;
	Local_1457[1]->f_6 = 0.1f;
	Local_1457[1]->f_11 = 30;
	Local_1457[1]->f_12 = 1;
	Local_1457[2] = 4;
	Local_1457[2]->f_5 = 0f;
	Local_1457[2]->f_11 = 32;
	Local_1457[2]->f_12 = 1;
	Local_1457[3] = 4;
	Local_1457[3]->f_5 = 0f;
	Local_1457[3]->f_11 = 33;
	Local_1457[3]->f_12 = 1;
	Local_1457[4] = 4;
	Local_1457[4]->f_5 = 0f;
	Local_1457[4]->f_11 = 29;
	Local_1457[4]->f_12 = 3;
	Local_1457[5] = 5;
	Local_1457[5]->f_5 = 0f;
	Local_1457[5]->f_6 = 550f;
	Local_1457[5]->f_8 = { _0xf70f00013a62f866(Local_141.f_56) };
	Local_1457[5]->f_11 = 47;
	Local_1457[5]->f_12 = 2;
	Local_1457[6] = 4;
	Local_1457[6]->f_5 = 0f;
	Local_1457[6]->f_11 = 48;
	Local_1457[6]->f_12 = 2;
	Local_1457[7] = 5;
	Local_1457[7]->f_5 = 0f;
	Local_1457[7]->f_6 = 12f;
	Local_1457[7]->f_8 = { _0xf70f00013a62f866(Local_141.f_56) };
	Local_1457[7]->f_11 = 52;
	Local_1457[7]->f_12 = 2;
	Local_1457[8] = 6;
	Local_1457[8]->f_5 = 500f;
	Local_1457[8]->f_6 = 50f;
	Local_1457[8]->f_11 = 53;
	Local_1457[8]->f_12 = 2;
	Local_1457[9] = 5;
	Local_1457[9]->f_5 = 0f;
	Local_1457[9]->f_6 = 8f;
	Local_1457[9]->f_8 = { _0xf70f00013a62f866(Local_141.f_4) };
	Local_1457[9]->f_11 = 54;
	Local_1457[9]->f_12 = 2;
	Local_1457[10] = 4;
	Local_1457[10]->f_5 = 0.1f;
	Local_1457[10]->f_11 = 80;
	Local_1457[10]->f_12 = 8;
	Local_1457[11] = 6;
	Local_1457[11]->f_5 = 0f;
	Local_1457[11]->f_6 = 12f;
	Local_1457[11]->f_11 = 84;
	Local_1457[11]->f_12 = 8;
	Local_1457[12] = 4;
	Local_1457[12]->f_5 = 10f;
	Local_1457[12]->f_11 = 85;
	Local_1457[12]->f_12 = 8;
	Local_1457[13] = 4;
	Local_1457[13]->f_5 = 0f;
	Local_1457[13]->f_11 = 86;
	Local_1457[13]->f_12 = 8;
	Local_1457[14] = 6;
	Local_1457[14]->f_5 = 30f;
	Local_1457[14]->f_6 = 20f;
	Local_1457[14]->f_11 = 90;
	Local_1457[14]->f_12 = 8;
	Local_1457[15] = 5;
	Local_1457[15]->f_5 = 0f;
	Local_1457[15]->f_6 = 10f;
	Local_1457[15]->f_8 = { _0xf70f00013a62f866(Local_141.f_10) };
	Local_1457[15]->f_11 = 91;
	Local_1457[15]->f_12 = 8;
	Local_1457[16] = 4;
	Local_1457[16]->f_5 = 0f;
	Local_1457[16]->f_11 = 92;
	Local_1457[16]->f_12 = 8;
	Local_1457[17] = 4;
	Local_1457[17]->f_5 = 30f;
	Local_1457[17]->f_11 = 107;
	Local_1457[17]->f_12 = 16;
}

void func_411()
{
	Local_2202[16]->f_3 = 1;
	Local_2202[20]->f_3 = 1;
	Local_2202[39]->f_3 = 1;
	Local_2202[40]->f_3 = 1;
	Local_2202[39]->f_2 = 1;
	Local_2202[46]->f_3 = 1;
	Local_2202[48]->f_3 = 1;
}

char* func_412()
{
	return "genericMissionInt";
}

void func_413(int iParam0)
{
	iVar0 = iParam0;
	while (iVar0 >= 32)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	func_497(uLocal_210[iVar1], func_462(iVar0));
}

float func_414(int iParam0, int iParam1)
{
	return func_841(iParam0, iParam1);
}

void func_415(int iParam0, int iParam1)
{
	uVar0 = Global_1905944[iParam0];
	clear_bit(&uVar0, iParam1);
	(*Global_1905944)[iParam0] = uVar0;
}

bool func_416(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_417(var uParam0)
{
	if (!func_842(uParam0, 4))
	{
		if (func_843(uParam0->f_860, 16384))
		{
			animpostfx_play("CamTransition01");
		}
		vVar0 = { func_844(uParam0) };
		if (!func_843(uParam0->f_860, 524288))
		{
			func_845(&(uParam0->f_872));
		}
		func_846(&(uParam0->f_860), 0, 2, vVar0.x, vVar0.y, vVar0.z, 0);
		func_847(uParam0, 0f, 0f, 0f);
		func_848(uParam0);
		func_849(uParam0);
		func_850(uParam0, 0f, 0f, 0f, 0, 0);
		func_851(uParam0);
		func_796(uParam0, 4);
		func_852(uParam0, 0);
		func_853(&(Global_1946804->f_1497), Global_35, 1, 64, 1, 1, 1);
		if (_0x927b810e43e99932(&(uParam0->f_873)))
		{
			_0x0a5a4f1979abb40e(&(uParam0->f_873));
		}
	}
}

Vector3 func_418(int iParam0)
{
	if (func_854(iParam0))
	{
		return func_855(iParam0);
	}
	return (*Global_1835011)[iParam0]->f_18;
}

int func_419(vector3 vParam0, var uParam3)
{
	if (_0x1b065a2bf7953815(0) != 1)
	{
		func_559(0, 1);
	}
	else
	{
		return 0;
	}
	iVar0 = func_856(Global_35, 0, 2, 0);
	if (!is_weapon_valid(iVar0))
	{
		iVar0 = func_857(0, 0);
		if (func_738(iVar0))
		{
			set_current_ped_weapon(Global_35, iVar0, true, 2, false, false);
			func_858(1, 0);
		}
	}
	else
	{
		func_858(1, 0);
	}
	func_233(0);
	func_560(0, vParam0, uParam3);
	return 1;
}

bool func_420()
{
	return true;
	if (Global_1572887->f_12 == 0)
	{
		return true;
	}
	return Global_40.f_1;
}

bool func_421(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

int func_422()
{
	return 26;
}

void func_423(int iParam0)
{
	if (!func_213(iParam0))
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

void func_424(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 60)
	{
		func_859((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_425(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 40)
	{
		func_860((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_426(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 20)
	{
		func_861((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_427(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 14)
	{
		func_862((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_428(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 60)
	{
		func_863((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_429(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 10)
	{
		func_864((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_430(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
}

void func_431(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 10)
	{
		func_865((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_432(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 3)
	{
		func_866((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_433(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		func_867((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_434(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		func_868((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_435(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		func_869((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_436(var uParam0, int iParam1, int iParam2)
{
	if (func_120(uParam0, 2097152))
	{
		return;
	}
	iVar0 = func_870(&(uParam0->f_638), iParam1);
	if (iVar0 == -1)
	{
		iVar0 = func_871(&(uParam0->f_638));
	}
	if (iVar0 == -1)
	{
		return;
	}
	uParam0->f_638[iVar0] = iParam1;
	uParam0->f_638[iVar0]->f_2 = (uParam0->f_638[iVar0]->f_2 || iParam2);
}

void func_437(var uParam0, int iParam1)
{
	if (func_120(uParam0, 2097152))
	{
		return;
	}
	uParam0->f_1124.f_1 = (uParam0->f_1124.f_1 || iParam1);
}

char* func_438(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 75:
			if (bParam1)
			{
				return "brt1_wagon_orbit_cam";
			}
			else
			{
				return "BRT1_ORBIT_REQUEST";
			}
			break;
	}
	return "BRT1 Unhandled";
}

void func_439(int iParam0, int iParam1)
{
	func_497(iParam0, iParam1);
}

void func_440(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, int iParam12)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_872((*uParam0)[iVar0]))
		{
			if (func_873((*uParam0)[iVar0]->f_2, iParam12))
			{
				func_874((*uParam0)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (func_875((*uParam1)[iVar0]))
		{
			if (func_873((*uParam1)[iVar0]->f_4, iParam12))
			{
				func_876((*uParam1)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam2)
	{
		if (func_877((*uParam2)[iVar0]))
		{
			if (func_873((*uParam2)[iVar0]->f_2, iParam12))
			{
				func_878((*uParam2)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam3)
	{
		if (func_879((*uParam3)[iVar0]))
		{
			if (func_873((*uParam3)[iVar0]->f_2, iParam12))
			{
				func_880((*uParam3)[iVar0]);
			}
		}
		iVar0++;
	}
	if (func_873(uParam4->f_1, iParam12))
	{
		func_881(uParam4);
	}
	iVar0 = 0;
	while (iVar0 < *uParam5)
	{
		if (func_882((*uParam5)[iVar0]))
		{
			if (func_873((*uParam5)[iVar0]->f_3, iParam12))
			{
				func_883((*uParam5)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam5)
	{
		if (func_882((*uParam5)[iVar0]))
		{
			iVar1 = 0;
			while (iVar1 < 20)
			{
				if (func_884((*uParam5)[iVar0]->f_4[iVar1]))
				{
					if (func_873((*uParam5)[iVar0]->f_4[iVar1]->f_2, iParam12))
					{
						func_885((*uParam5)[iVar0]->f_4[iVar1], (*uParam5)[iVar0]->f_1);
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
		if (func_886((*uParam6)[iVar0]))
		{
			if (func_873((*uParam6)[iVar0]->f_3, iParam12))
			{
				func_887((*uParam6)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam7)
	{
		if (func_888((*uParam7)[iVar0]))
		{
			if (func_873((*uParam7)[iVar0]->f_4, iParam12))
			{
				func_889((*uParam7)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam8)
	{
		if (func_890((*uParam8)[iVar0]))
		{
			if (func_873((*uParam8)[iVar0]->f_2, iParam12))
			{
				func_891((*uParam8)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam9)
	{
		if (func_892((*uParam9)[iVar0]))
		{
			if (func_873((*uParam9)[iVar0]->f_2, iParam12))
			{
				func_893((*uParam9)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam10)
	{
		if (func_894((*uParam10)[iVar0]))
		{
			if (func_873((*uParam10)[iVar0]->f_3, iParam12))
			{
				func_895((*uParam10)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam11)
	{
		if (func_896((*uParam11)[iVar0]))
		{
			if (func_873((*uParam11)[iVar0]->f_2, iParam12))
			{
				func_897((*uParam11)[iVar0]);
			}
		}
		iVar0++;
	}
}

void func_441(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	if (is_entity_dead(iParam1))
	{
		return;
	}
	if (func_898(uParam0, iParam1, sParam2))
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

struct<2> func_442()
{
	Var0 = create_itemset(true);
	return Var0;
}

void func_443(var uParam0, float fParam1)
{
	uParam0->f_794 = fParam1;
}

void func_444(var uParam0, float fParam1)
{
	uParam0->f_795 = fParam1;
}

void func_445(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	func_899(&(uParam0->f_7375), iParam1, sParam2, iParam3, iParam4, bParam5);
	func_401(&(uParam0->f_10792), iParam1, sParam2, bParam6);
}

bool func_446(var uParam0, int iParam1, bool bParam2)
{
	iVar0 = 1;
	if (bParam2 && func_23(&(uParam0->f_8269)))
	{
		if (!func_121(uParam0, iParam1, 268435456))
		{
			MemCopy(&cVar1, {func_900(uParam0->f_607)}, 3);
			if (func_901(&(uParam0->f_8269), &cVar1, 0, func_132(iParam1), 1, 0))
			{
				if (func_24(&(uParam0->f_8269)))
				{
					func_902(&(uParam0->f_8269));
				}
				func_140(uParam0, iParam1, 268435456);
			}
			else
			{
				iVar0 = 0;
			}
		}
	}
	if (!func_903(&(uParam0->f_638), &(uParam0->f_819), &(uParam0->f_1020), &(uParam0->f_1081), &(uParam0->f_1124), &(uParam0->f_1126), &(uParam0->f_5147), &(uParam0->f_5188), &(uParam0->f_5239), &(uParam0->f_5249), &(uParam0->f_5265), &(uParam0->f_5286), iParam1))
	{
		iVar0 = 0;
	}
	return iVar0;
}

bool func_447(var uParam0, int iParam1)
{
	iVar1 = 1;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_882((*uParam0)[iVar0]))
		{
			if (func_873((*uParam0)[iVar0]->f_3, iParam1))
			{
				if ((*uParam0)[iVar0]->f_65 > 0f || func_904((*uParam0)[iVar0]->f_2, 4))
				{
					if (!func_905((*uParam0)[iVar0]))
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

int func_448(var uParam0)
{
	return uParam0->f_596;
}

bool func_449(var uParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, int iParam5)
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
	iVar0 = func_906(func_61(uParam0));
	if (!func_29())
	{
		vVar2 = { func_126(uParam0->f_607) };
	}
	if (func_907(uParam0, iVar0, &uVar1, bParam1, vVar2.x, vVar2.y, vVar2.z, 0, bParam2, iParam3, bParam4, iParam5, 1, 0))
	{
		uParam0->f_5408 = uVar1;
		return true;
	}
	return false;
}

bool func_450(var uParam0, bool bParam1, var uParam2, var uParam3, var uParam4, float fParam5, int iParam6, int iParam7, int iParam8)
{
	if (does_entity_exist(uParam0->f_5411))
	{
		if (!func_120(uParam0, 16777216))
		{
			if (!func_908(uParam0))
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
				iVar12 = func_909(&iVar11, &Var0);
				if (iVar11 != 0)
				{
					func_103(uParam0, 16777216);
					if (iVar11 == 2 && !is_entity_dead(iVar12))
					{
						if (iVar12 == uParam0->f_5411)
						{
							func_103(uParam0, 16777216);
						}
						else if (func_910(iVar12, uParam0->f_5411, 5f, 1))
						{
							if (func_911(iVar12))
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
		if (func_912(&iVar17, func_125(uParam0), vVar14, 0f, 0, 0, 1, 1, 1))
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
		iVar13 = func_909(&iVar29, &Var18);
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
		func_913(uParam0, bParam1);
		if (!func_120(uParam0, 256))
		{
			if (!func_120(uParam0, 32768))
			{
				vVar14.x = uParam2;
				vVar14.f_1 = uParam3;
				vVar14.f_2 = uParam4;
				if ((!func_911(iVar13) || func_914(Global_35, iVar13, 1, 1) > 200f) && !func_421(vVar14))
				{
					if (!func_29())
					{
						freeze_entity_position(iVar13, false);
						func_915(iVar13, vVar14, fParam5, 2, 1073741824);
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

void func_451(var uParam0)
{
	if (!func_120(uParam0, 32) && func_128(uParam0, 3))
	{
		if (func_916(uParam0->f_607, &iVar0, &uVar1))
		{
			set_clock_time(iVar0, 0, 0);
			func_103(uParam0, 32);
		}
	}
	if (!func_120(uParam0, 32))
	{
		if (func_917(&(uParam0->f_609), uParam0->f_607))
		{
			func_103(uParam0, 32);
		}
	}
}

void func_452(var uParam0)
{
	if (!func_120(uParam0, 128))
	{
		if (func_120(uParam0, 16384))
		{
			func_918(uParam0);
			if (func_919(uParam0))
			{
				func_51(&(uParam0->f_10792));
				func_920(uParam0, 2097152);
				func_287(uParam0, 16384);
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
			func_918(uParam0);
			MemCopy(&Var0, {func_155(func_61(uParam0))}, 4);
			if (func_921(uParam0, Var0))
			{
				if (func_448(uParam0) != 4)
				{
					do_screen_fade_out(0);
				}
				func_103(uParam0, 128);
			}
		}
		else
		{
			if (func_448(uParam0) != 4)
			{
				do_screen_fade_out(1);
			}
			func_103(uParam0, 128);
		}
	}
}

void func_453(var uParam0, int iParam1)
{
	uParam0->f_596 = iParam1;
}

bool func_454(var uParam0)
{
	iVar0 = 1;
	if (!func_922(uParam0))
	{
		iVar0 = 0;
	}
	if (!func_449(uParam0, func_128(uParam0, 3), !func_8(uParam0, 2097152), uParam0->f_5410, !func_8(uParam0, 32), 0))
	{
		iVar0 = 0;
	}
	if (!func_450(uParam0, 1, uParam0->f_5413, uParam0->f_5413.f_1, uParam0->f_5413.f_2, uParam0->f_5416, 1, 1, 1))
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
		MemCopy(&cVar1, {func_900(uParam0->f_607)}, 3);
		if (func_923(&(uParam0->f_8269), &cVar1, 0, 1, 1))
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
		if (func_924(&(uParam0->f_13115)) < 30f)
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

bool func_455(var uParam0)
{
	bVar0 = (_has_player_teleport_finished(player_id()) || !is_player_teleport_active());
	if (func_924(&(uParam0->f_603)) >= uParam0->f_13144)
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		if (is_player_teleport_active())
		{
			stop_player_teleport();
		}
		if ((func_82(32768) && func_925()) && func_924(&(uParam0->f_603)) < (uParam0->f_13144 + 10f))
		{
			return false;
		}
		if (func_120(uParam0, 8) && is_valid_interior(get_interior_at_coords(func_126(uParam0->f_607))))
		{
			unpin_interior(get_interior_at_coords(func_126(uParam0->f_607)));
			func_287(uParam0, 8);
		}
		_set_milliseconds_per_game_minute(2000);
		func_926(0, 0);
		func_287(uParam0, 4096);
		return true;
	}
	return false;
}

bool func_456(var uParam0)
{
	bVar0 = true;
	iLocal_1959 = func_33(uParam0);
	if (!iVar1956 == 0)
	{
		func_927();
	}
	if (!func_167(12))
	{
		func_928();
		func_413(12);
	}
	if (!func_167(14))
	{
		if (!func_929(iVar1956))
		{
			return false;
		}
	}
	iVar1 = func_195(uParam0);
	if (iVar1956 == 0 || iVar1956 == 1)
	{
		iVar2 = 1793592017;
	}
	else
	{
		iVar2 = -509228265;
	}
	if (!iVar1956 == 2 && !iVar1956 == 25)
	{
		if (!iVar2197 == 7)
		{
			func_930(uParam0, (iVar1956 == 0 && func_195(uParam0) == 0), 1, 1, iVar2);
			bVar0 = false;
		}
	}
	bVar3 = (iVar1 == 0 && iVar1956 == 0);
	func_287(uParam0, 2);
	if (iVar1956 == 0)
	{
		if (!Local_218[7]->f_3 == 8)
		{
			func_932(uParam0, 7, bVar3, 1, 1, func_931(1, 0, 0), 0);
			bVar0 = false;
		}
		if (!Local_218[1]->f_3 == 8 && bVar0)
		{
			if (!func_933(uParam0, 1, 7, 0, 1, 1, func_555(8, 3), 1))
			{
				bVar0 = false;
			}
		}
	}
	if (!iVar1956 == 25 && !Local_218[6]->f_3 == 8)
	{
		func_932(uParam0, 6, bVar3, 1, 1, func_931(6, 0, iVar1956), !iVar1 == 0);
		bVar0 = false;
	}
	if (iVar1956 == 25)
	{
		if (!Local_218[8]->f_3 == 8)
		{
			func_932(uParam0, 8, 0, 1, 1, func_931(8, 0, iVar1956), 1);
			bVar0 = false;
		}
	}
	if (iVar1956 == 25)
	{
		if (!Local_218[9]->f_3 == 8)
		{
			func_932(uParam0, 9, 0, 1, 1, func_931(9, 0, iVar1956), 1);
			bVar0 = false;
		}
	}
	if (!bVar0)
	{
		return false;
	}
	func_166(0);
	func_934(0);
	if (!func_195(uParam0) == 0)
	{
		if ((func_33(uParam0) == 2 || func_33(uParam0) == 3) || func_33(uParam0) == 4)
		{
			func_168(0);
		}
	}
	func_103(uParam0, 2);
	func_935(7, 0);
	func_935(1, 0);
	func_413(16);
	if (!is_entity_dead(&(Local_218[1])))
	{
		set_entity_coords(&(Local_218[1]), 768.4f, -1063.4f, 54.3f, true, false, true, true);
		set_entity_heading(&(Local_218[1]), -45.8f);
	}
	if (!iVar1 == 0)
	{
		switch (iVar1956)
		{
			case 0:
				set_clock_time(8, 0, 0);
				break;
			case 1:
				set_clock_time(10, 0, 0);
				break;
			case 2:
				set_clock_time(13, 0, 0);
				break;
			case 3:
				set_clock_time(21, 0, 0);
				break;
			case 4:
				set_clock_time(21, 0, 0);
				break;
			case 5:
				set_clock_time(21, 0, 0);
				break;
			case 25:
				set_clock_time(21, 0, 0);
				break;
		}
	}
	if (!iVar1956 == 0 && !iVar1956 == 1)
	{
		if (!is_entity_dead(Global_35))
		{
			if (func_936(Global_35, -1725579161, 0))
			{
				func_937(Global_35, 0, 1);
				func_413(92);
			}
			else
			{
				func_174(92);
			}
		}
	}
	pause_clock(true, 0);
	_set_weather_type(1632247697, false, true, true, 30f, false);
	set_random_trains(false);
	func_939(uParam0, 172772);
	func_941(uParam0, 173043);
	_0x424ffcb9f0d2d4b5(Local_141.f_40, 0);
	Local_218[0] = Global_35;
	func_942(0, 1);
	func_943(iVar1956, iVar1 == 0);
	func_944(13);
	func_164(1);
	func_945(-1015925347, 0, 0, 1103626240);
	return true;
}

void func_457(var uParam0, int iParam1)
{
	func_66(iParam1);
	uParam0->f_10783 = iParam1;
}

bool func_458(var uParam0)
{
	func_946(uParam0);
	func_947(uParam0);
	iVar0 = func_33(uParam0);
	iVar1 = func_35(uParam0);
	iVar2 = func_162(uParam0, iVar0);
	if (func_8(uParam0, 2097152))
	{
		if (iVar2 == 7 || iVar2 < 3)
		{
			func_919(uParam0);
		}
	}
	func_948(uParam0);
	func_949(uParam0);
	func_950(uParam0);
	func_951(uParam0);
	func_952(uParam0);
	func_953(uParam0);
	if (iVar2 != 5 && iVar2 != 6)
	{
		func_954(uParam0);
	}
	if ((func_33(uParam0) == 0 && iVar2 < 3) && func_301(uParam0) == 0)
	{
		func_452(uParam0);
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
			if (func_955(uParam0, iVar0, 0))
			{
				if (func_956(uParam0, func_33(uParam0)) != -1 && _0x62de46f061caa468() < func_956(uParam0, func_33(uParam0)))
				{
					_0xf008e0ba1fe1d644((func_956(uParam0, func_33(uParam0)) - _0x62de46f061caa468()));
				}
				if ((func_33(uParam0) == 25 || func_33(uParam0) == 26) && func_82(32768))
				{
					func_402(uParam0, 524288);
				}
				if (func_120(uParam0, 4))
				{
					if (!func_8(uParam0, 4))
					{
						func_957(uParam0, iVar0);
						func_99(uParam0, 4);
					}
					func_958(uParam0);
					func_959(uParam0, iVar0, 1);
				}
				else
				{
					func_959(uParam0, iVar0, 1);
				}
			}
			break;
		case 1:
			if (func_922(uParam0))
			{
				if (func_960(uParam0))
				{
					if (func_8(uParam0, 4))
					{
						func_920(uParam0, 4);
					}
					func_959(uParam0, iVar0, 2);
				}
			}
			else if (func_961(uParam0) >= uParam0->f_13144)
			{
				if (func_8(uParam0, 4))
				{
					func_920(uParam0, 4);
				}
				func_959(uParam0, iVar0, 2);
			}
			break;
		case 2:
			if (func_955(uParam0, iVar0, 2))
			{
				if (!func_962(uParam0))
				{
					func_959(uParam0, iVar0, 4);
					if (func_963(uParam0, iVar0, iVar1))
					{
						func_959(uParam0, iVar0, 5);
					}
				}
				else
				{
					func_964(uParam0);
					func_959(uParam0, iVar0, 3);
					if (func_965(uParam0, iVar0))
					{
						func_959(uParam0, iVar0, 4);
						if (func_963(uParam0, iVar0, iVar1))
						{
							func_959(uParam0, iVar0, 5);
						}
					}
				}
			}
			else if (func_966(uParam0))
			{
				func_965(uParam0, iVar0);
			}
			break;
		case 3:
			if (func_965(uParam0, iVar0))
			{
				func_959(uParam0, iVar0, 4);
				if (func_963(uParam0, iVar0, iVar1))
				{
					func_959(uParam0, iVar0, 5);
				}
			}
			break;
		case 4:
			if (func_963(uParam0, iVar0, iVar1))
			{
				func_959(uParam0, iVar0, 5);
			}
			break;
		case 5:
			if (!func_20() == 0)
			{
				func_967(uParam0);
				func_968(uParam0, iVar0);
				func_969(uParam0);
				func_970(uParam0);
				if (func_121(uParam0, iVar1, 2))
				{
					if (func_971(uParam0, iVar1))
					{
						func_972(uParam0, iVar1);
					}
				}
			}
			if (func_955(uParam0, iVar0, 5))
			{
				if (func_955(uParam0, iVar0, 7))
				{
					if (!func_121(uParam0, func_33(uParam0), 67108864))
					{
						func_973(uParam0, func_33(uParam0));
					}
					func_974(uParam0, iVar1);
					func_947(uParam0);
					return true;
				}
				else
				{
					func_959(uParam0, iVar0, 7);
				}
			}
			else
			{
				if (!func_121(uParam0, func_33(uParam0), 4194304))
				{
					if ((!is_screen_faded_in() && !is_screen_fading_in()) && !func_121(uParam0, func_33(uParam0), 16))
					{
						do_screen_fade_in(0);
						func_975(0);
					}
					func_140(uParam0, func_33(uParam0), 4194304);
				}
				if ((func_976(get_player_index(), 0, 0, 1) && !func_120(uParam0, 8192)) && !func_121(uParam0, func_33(uParam0), 8))
				{
					func_47(1, 0);
					func_977("MISSION_WANTED", 7500, 0, 1, 0, 0, -1, -1, 0);
					if (func_978(uParam0))
					{
						func_959(uParam0, iVar0, 6);
					}
				}
				if (func_8(uParam0, 268435456))
				{
					if (_0x1b065a2bf7953815(1) != 1)
					{
						func_36(uParam0, func_34(iVar0), func_34(iVar1), iVar0, iVar1);
						func_920(uParam0, 268435456);
					}
				}
				if (func_120(uParam0, 1048576))
				{
					if (func_127(func_34(0)))
					{
						func_287(uParam0, 1048576);
					}
				}
			}
			break;
		case 6:
			if (!func_20() == 0)
			{
				func_967(uParam0);
				func_968(uParam0, iVar0);
				func_969(uParam0);
				func_970(uParam0);
				if (func_121(uParam0, func_35(uParam0), 2))
				{
					if (func_971(uParam0, func_35(uParam0)))
					{
						func_972(uParam0, func_35(uParam0));
					}
				}
			}
			if ((!func_976(get_player_index(), 0, 0, 1) || func_120(uParam0, 8192)) || func_121(uParam0, func_33(uParam0), 8))
			{
				if (func_955(uParam0, iVar0, 5))
				{
					if (func_979(uParam0))
					{
						func_959(uParam0, iVar0, 7);
					}
				}
				else
				{
					func_979(uParam0);
					func_959(uParam0, iVar0, 5);
				}
			}
			else
			{
				func_955(uParam0, iVar0, 5);
				func_980(uParam0);
			}
			break;
		case 7:
			if (func_955(uParam0, iVar0, 7))
			{
				if (!func_121(uParam0, func_33(uParam0), 67108864))
				{
					func_973(uParam0, func_33(uParam0));
				}
				func_974(uParam0, iVar1);
				func_947(uParam0);
				return true;
			}
			break;
		default:
			func_959(uParam0, iVar0, 7);
			break;
	}
	return false;
}

int func_459(int iParam0)
{
	switch (iParam0)
	{
		case 14:
			return 909;
		case 15:
			return 910;
		case 16:
			return 911;
		case 17:
			return 912;
	}
	return -1;
}

int func_460(int iParam0)
{
	if (!func_501(iParam0))
	{
		return 0;
	}
	if (!func_503(func_502(iParam0)))
	{
		return 1;
	}
	if (!_0x800df3fc913355f3(func_504(iParam0)))
	{
		return 0;
	}
	if (network_is_in_session())
	{
		if (!network_has_control_of_entity(_0x31c70a716cae1fee(func_504(iParam0))))
		{
			return 1;
		}
	}
	iVar0 = _0x31c70a716cae1fee(func_504(iParam0));
	if (does_entity_exist(iVar0))
	{
		if (!_0x88ad6cc10d8d35b2(iVar0))
		{
			set_entity_as_mission_entity(iVar0, true, true);
		}
	}
	_0x7b204f88f6c3d287(func_504(iParam0));
	return 1;
}

void func_461(int iParam0, bool bParam1)
{
	if (!func_271(iParam0))
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 < 35)
	{
		iVar0 = func_981(iParam0, iVar1);
		if (func_982(iVar0))
		{
			func_983(iVar0, bParam1);
		}
		iVar1++;
	}
}

int func_462(int iParam0)
{
	return floor(pow(2f, to_float(iParam0)));
}

bool func_463(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_464(int iParam0, int iParam1)
{
	func_472(&(Local_218[iParam0]->f_4), iParam1);
}

void func_465(int iParam0, int iParam1)
{
	func_471(&(Local_218[iParam0]->f_4), iParam1);
}

void func_466(int iParam0, bool bParam1)
{
	if (!does_entity_exist(iParam0) || is_entity_dead(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if ((!get_ped_config_flag(iParam0, 138, true) || _0xdc9273d95976ba22(iParam0) != 10f) || !_0x75df9e73f2f005fd(iParam0))
		{
			func_984(iParam0, 1);
			_0xc2266aa617668ad3(iParam0, 10f);
			_0xd05ad61f242c626b(iParam0, 10f);
			set_entity_invincible(iParam0, false);
			set_entity_only_damaged_by_player(iParam0, false);
			set_entity_can_be_damaged(iParam0, true);
		}
	}
	else if (get_ped_config_flag(iParam0, 138, true) || _0xdc9273d95976ba22(iParam0) != 1f)
	{
		func_984(iParam0, 0);
		_0xc2266aa617668ad3(iParam0, 1f);
		_0xd05ad61f242c626b(iParam0, 1f);
	}
}

bool func_467(var uParam0, int iParam1, int iParam2)
{
	if (!does_entity_exist(iParam1))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_13145)
	{
		if (func_278(uParam0->f_5423[iVar0]))
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

bool func_468(var uParam0, int iParam1, int iParam2)
{
	if (!does_entity_exist(iParam1))
	{
		return false;
	}
	if (!func_467(uParam0, iParam1, &iVar0))
	{
		return false;
	}
	return func_567(uParam0->f_5423[iVar0], iParam2);
}

void func_469(var uParam0, int iParam1, int iParam2)
{
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	if (!func_467(uParam0, iParam1, &iVar0))
	{
		return;
	}
	func_985(uParam0->f_5423[iVar0], iParam2);
}

void func_470(var uParam0, int iParam1, int iParam2)
{
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	if (!func_467(uParam0, iParam1, &iVar0))
	{
		return;
	}
	func_986(uParam0->f_5423[iVar0], iParam2);
}

void func_471(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_472(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_473(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
}

void func_474(int iParam0)
{
	if (_0xc276fe69dda22bad(&(iLocal_1418[iParam0])))
	{
		remove_cover_point(&(iLocal_1418[iParam0]));
	}
}

Vector3 func_475(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 1014.88f, -1665.77f, 46.914f;
				case 1:
					return 1015.9f, -1665.4f, 46.8984f;
				case 2:
					return 1007.15f, -1665.25f, 46.9681f;
				case 3:
					return 1003.92f, -1665.33f, 46.9581f;
				case 4:
					return 1017.221f, -1655.827f, 46.9503f;
				case 5:
					return 1020.708f, -1650.652f, 46.7168f;
				case 6:
					return 999.7208f, -1663.161f, 46.7687f;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 1329.431f, -1367.785f, 78.5f;
				case 1:
					return 1327.988f, -1368.843f, 79.8702f;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return 1341.339f, -1372.457f, 80.4836f;
				case 1:
					return 1346.955f, -1371.245f, 80.2336f;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return 1342.183f, -1370.219f, 84.2908f;
				case 1:
					return 1339.788f, -1369.464f, 80.4835f;
				case 2:
					return 1340.762f, -1371.73f, 80.4836f;
				case 3:
					return 1342.91f, -1377.074f, 80.4837f;
				case 4:
					return 1340.476f, -1379.59f, 80.4837f;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return 1355.194f, -1377.46f, 80.5291f;
				case 1:
					return 1355.429f, -1375.54f, 80.5172f;
				case 2:
					return 1354.57f, -1379.015f, 80.5221f;
				case 3:
					return 1354.304f, -1377.352f, 84.4331f;
				case 4:
					return 1354.494f, -1378.063f, 84.3645f;
				case 5:
					return 1355.579f, -1377.1f, 80.6145f;
				case 6:
					return 1355.271f, -1378.059f, 80.6145f;
				case 7:
					return 1339.968f, -1373.533f, 83.5266f;
				case 8:
					return 1354.79f, -1376.477f, 84.3666f;
				case 9:
					return 1342.048f, -1370.945f, 84.2908f;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					return 1366.24f, -1378.412f, 79.0447f;
				case 1:
					return 1365.019f, -1379.337f, 79.2853f;
				case 2:
					return 1370.707f, -1379.337f, 78.5953f;
				case 3:
					return 1372.126f, -1381.951f, 78.6148f;
				case 4:
					return 1352.538f, -1300.981f, 76.6188f;
				case 5:
					return 1293.344f, -1312.028f, 76.7802f;
				case 6:
					return 1333.225f, -1276.536f, 76.5295f;
				case 7:
					return 1280.112f, -1154.164f, 81.9702f;
				case 8:
					return 1278.615f, -1151.004f, 81.9702f;
				case 9:
					return 1256.293f, -1206.235f, 80.0052f;
				case 10:
					return 1254.576f, -1212.573f, 79.282f;
				case 11:
					return 1007.956f, -1204.999f, 62.9518f;
				case 12:
					return 1001.091f, -1209.741f, 62.9215f;
				case 13:
					return 995.5966f, -948.3459f, 62.3947f;
				case 14:
					return 997.6631f, -945.1349f, 62.284f;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					return 777.1765f, -1055.279f, 53.5424f;
				case 1:
					return 1013.147f, -1748.429f, 46.4628f;
				case 2:
					return 1346.866f, -1358.569f, 78.5947f;
				case 3:
					return 1333.51f, -1363.175f, 79.1055f;
				case 4:
					return 1333.51f, -1363.175f, 79.1055f;
			}
			break;
		case 7:
			switch (iParam1)
			{
				case 0:
					return 1009.719f, -1764.269f, 47.5877f;
				case 1:
					return 1010.14f, -1762.77f, 47.5853f;
				case 2:
					return 1009.98f, -1763.36f, 47.538f;
				case 3:
					return 1010.04f, -1764.9f, 47.5845f;
			}
			break;
		case 8:
			switch (iParam1)
			{
				case 0:
					return 777.1592f, -1053.082f, 53.6483f;
				case 1:
					return 774.5879f, -1056.709f, 53.6404f;
				case 2:
					return 771.3f, -1062.3f, 53.3731f;
				case 3:
					return 770.5303f, -1066.384f, 53.6832f;
				case 4:
					return 1011.063f, -1747.493f, 46.6097f;
				case 5:
					return 1014.105f, -1746.466f, 46.6099f;
				case 6:
					return 1340.267f, -1374.655f, 80.4836f;
				case 7:
					return 1344.177f, -1375.136f, 80.4836f;
				case 8:
					return 1340.267f, -1374.655f, 80.4836f;
				case 9:
					return 1348.1f, -1381.5f, 83.9f;
				case 10:
					return 1335.476f, -1364.499f, 79.4705f;
				case 11:
					return 1332.894f, -1361.594f, 78.9735f;
				case 12:
					return 804.3618f, -842.4622f, 56.4491f;
				case 13:
					return 655.7047f, -1253.97f, 43.6991f;
				case 14:
					return 655.3037f, -1252.823f, 43.6483f;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 0:
					return 1320.695f, -1393.866f, 75.1876f;
				case 1:
					return 1087.047f, -1142.464f, 67.4376f;
				case 2:
					return 1235.46f, -1319.332f, 75.4376f;
			}
			break;
		case 10:
			switch (iParam1)
			{
				case 0:
					return 1013.601f, -1740.143f, 46.5825f;
				case 1:
					return 1007.688f, -1738.579f, 46.5783f;
				case 2:
					return 1004.85f, -1741.302f, 46.578f;
				case 3:
					return 1004.472f, -1745.466f, 46.5795f;
			}
			break;
		case 11:
			switch (iParam1)
			{
				case 0:
					return 1386.479f, -1346.268f, 78.5336f;
				case 1:
					return 1343.876f, -1313.964f, 76.4355f;
				case 2:
					return 1276.986f, -1186.802f, 79.4097f;
				case 3:
					return 1177.096f, -1189.737f, 74.9562f;
				case 4:
					return 1168.074f, -1163.95f, 71.9336f;
			}
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_476(vector3 vParam0, vector3 vParam3, float fParam6)
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

Vector3 func_477(vector3 vParam0, vector3 vParam3, float fParam6)
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

void func_478(int iParam0)
{
	iVar0 = func_479(iParam0, 1);
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

int func_479(int iParam0, int iParam1)
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

var func_480(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (!_does_volume_exist(iParam0))
	{
		return uVar0;
	}
	func_987(iParam0, bParam2);
	_0x18262cafebb5fbe1(iParam0, iParam3, 0, 0, -1, -1, 0);
	_0xb56d41a694e42e86(iParam0, iParam3, 0, 0, -1, -1, 2);
	uVar0 = _0x4c39c95ae5db1329(iParam0, bParam2, 15);
	return uVar0;
}

void func_481(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
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

void func_482(int iParam0, bool bParam1)
{
	if ((bParam1 && func_463(uVar1949, func_462(iParam0))) || (!bParam1 && !func_463(uVar1949, func_462(iParam0))))
	{
		return;
	}
	switch (iParam0)
	{
		case 0:
			Var0 = { 1002.075f, -1727.964f, 45.742f };
			Var0.f_3 = 15f;
			if (bParam1)
			{
				create_model_hide(Var0, Var0.f_3, 137945627, true);
				create_model_hide(Var0, Var0.f_3, 78404028, true);
				create_model_hide(Var0, Var0.f_3, 1561132816, true);
				create_model_hide(Var0, Var0.f_3, -1588007813, true);
				create_model_hide(Var0, Var0.f_3, 1786194379, true);
				create_model_hide(Var0, Var0.f_3, 540874704, true);
				create_model_hide(Var0, Var0.f_3, -1821565422, true);
				create_model_hide(Var0, Var0.f_3, -2112344402, true);
				create_model_hide(Var0, Var0.f_3, -1401417647, true);
				create_model_hide(Var0, Var0.f_3, 1678119818, true);
				create_model_hide(Var0, Var0.f_3, -219829341, true);
			}
			else
			{
				remove_model_hide(Var0, Var0.f_3, 137945627, 1);
				remove_model_hide(Var0, Var0.f_3, 78404028, 1);
				remove_model_hide(Var0, Var0.f_3, 1561132816, 1);
				remove_model_hide(Var0, Var0.f_3, -1588007813, 1);
				remove_model_hide(Var0, Var0.f_3, 1786194379, 1);
				remove_model_hide(Var0, Var0.f_3, 540874704, 1);
				remove_model_hide(Var0, Var0.f_3, -1821565422, 1);
				remove_model_hide(Var0, Var0.f_3, -2112344402, 1);
				remove_model_hide(Var0, Var0.f_3, -1401417647, 1);
				remove_model_hide(Var0, Var0.f_3, 1678119818, 1);
				remove_model_hide(Var0, Var0.f_3, -219829341, 1);
			}
			break;
		case 1:
			Var0 = { 1341.2f, -1374.9f, 80.7f };
			Var0.f_3 = 5f;
			if (bParam1)
			{
				create_model_hide(Var0, Var0.f_3, 912364060, true);
				create_model_hide(Var0, Var0.f_3, -1497614593, true);
			}
			else
			{
				remove_model_hide(Var0, Var0.f_3, 912364060, 0);
				remove_model_hide(Var0, Var0.f_3, -1497614593, 0);
			}
			Var0 = { 1344.658f, -1372.893f, 80.2922f };
			Var0.f_3 = 1f;
			if (bParam1)
			{
				create_model_hide(Var0, Var0.f_3, -630636578, true);
			}
			else
			{
				remove_model_hide(Var0, Var0.f_3, -630636578, 0);
			}
			Var0 = { 1341.017f, -1374.235f, 80.524f };
			Var0.f_3 = 0.2f;
			if (bParam1)
			{
				create_model_hide(Var0, Var0.f_3, -1694359093, true);
			}
			else
			{
				remove_model_hide(Var0, Var0.f_3, -1694359093, 0);
			}
			Var0 = { 1341.086f, -1373.942f, 80.5516f };
			Var0.f_3 = 0.2f;
			if (bParam1)
			{
				create_model_hide(Var0, Var0.f_3, 389641546, true);
			}
			else
			{
				remove_model_hide(Var0, Var0.f_3, 389641546, 0);
			}
			Var0 = { 1340.715f, -1372.941f, 80.5242f };
			Var0.f_3 = 0.2f;
			if (bParam1)
			{
				create_model_hide(Var0, Var0.f_3, 1692286535, true);
			}
			else
			{
				remove_model_hide(Var0, Var0.f_3, 1692286535, 0);
			}
			Var0 = { 1344.132f, -1373.228f, 80.3026f };
			Var0.f_3 = 1f;
			if (bParam1)
			{
				create_model_hide(Var0, Var0.f_3, 382293518, true);
				create_model_hide(Var0, Var0.f_3, 389673974, true);
			}
			else
			{
				remove_model_hide(Var0, Var0.f_3, 382293518, 0);
				remove_model_hide(Var0, Var0.f_3, 389673974, 0);
			}
			break;
		case 2:
			if (bParam1)
			{
				create_model_hide(1347.46f, -1374.015f, 79.9633f, 1f, func_519(39), false);
				create_model_hide(1348.984f, -1372.837f, 79.9081f, 1f, func_519(39), false);
				create_model_hide(1339.394f, -1373.282f, 83.7672f, 1f, func_519(39), false);
				create_model_hide(1340.277f, -1372.821f, 83.664f, 1f, func_519(39), false);
				create_model_hide(1340.329f, -1371.903f, 83.7131f, 1f, func_519(39), false);
				create_model_hide(1339.612f, -1370.942f, 83.648f, 1f, func_519(39), false);
				create_model_hide(1338.785f, -1372.071f, 83.7509f, 1f, -1740828633, false);
				create_model_hide(func_988(3, 0), func_989(3, 0), 1831970813, false);
				create_model_hide(func_988(3, 0), func_989(3, 0), 126203870, false);
				create_model_hide(1345.478f, -1374.485f, 84.4418f, 2f, 39313452, false);
				create_model_hide(1344.668f, -1379.077f, 84.4418f, 2f, 39313452, false);
				create_model_hide(1334.479f, -1368.615f, 83.2827f, 2f, 1652652063, false);
				create_model_hide(1334.479f, -1368.615f, 83.2827f, 2f, -359926761, false);
				create_model_hide(1334.479f, -1368.615f, 83.2827f, 2f, -1962703473, false);
				create_model_hide(1332.337f, -1366.877f, 86.1324f, 1f, 1796647359, false);
				create_model_hide(1339.669f, -1375.137f, 83.2852f, 1f, 889891686, false);
				add_cover_blocking_area(1336.254f, -1370.288f, 82.866f, 1338.954f, -1365.643f, 85.5f, true, true, true, true);
			}
			else
			{
				remove_all_cover_blocking_areas();
				remove_model_hide(1347.46f, -1374.015f, 79.9633f, 1f, func_519(39), 1);
				remove_model_hide(1348.984f, -1372.837f, 79.9081f, 1f, func_519(39), 1);
				remove_model_hide(1339.394f, -1373.282f, 83.7672f, 1f, func_519(39), 1);
				remove_model_hide(1340.277f, -1372.821f, 83.664f, 1f, func_519(39), 1);
				remove_model_hide(1340.329f, -1371.903f, 83.7131f, 1f, func_519(39), 1);
				remove_model_hide(1339.612f, -1370.942f, 83.648f, 1f, func_519(39), 1);
				remove_model_hide(1338.785f, -1372.071f, 83.7509f, 1f, -1740828633, 1);
				remove_model_hide(func_988(3, 0), func_989(3, 0), 1831970813, 1);
				remove_model_hide(func_988(3, 0), func_989(3, 0), 126203870, 1);
				remove_model_hide(1338.785f, -1372.071f, 83.7509f, 2f, 39313452, 0);
				remove_model_hide(1344.668f, -1379.077f, 84.4418f, 2f, 39313452, 0);
				remove_model_hide(1334.479f, -1368.615f, 83.2827f, 2f, 1652652063, 0);
				remove_model_hide(1334.479f, -1368.615f, 83.2827f, 2f, -359926761, 0);
				remove_model_hide(1334.479f, -1368.615f, 83.2827f, 2f, -1962703473, 0);
				remove_model_hide(1332.337f, -1366.877f, 86.1324f, 1f, 1796647359, 0);
				remove_model_hide(1339.669f, -1375.137f, 83.2852f, 1f, 889891686, 0);
			}
			break;
		case 3:
			if (bParam1)
			{
				create_model_hide(1346.936f, -1371.213f, 79.4812f, 1f, 1360797073, false);
			}
			else
			{
				remove_model_hide(1346.936f, -1371.213f, 79.4812f, 1f, 1360797073, 0);
			}
			break;
		case 4:
			if (bParam1)
			{
				create_model_hide(1314.896f, -1277.281f, 75.3722f, 1f, 1929866637, true);
				create_model_hide(1315.483f, -1276.752f, 75.6058f, 1f, -1431613478, true);
				create_model_hide(1314.567f, -1277.302f, 75.4217f, 1f, -915948066, true);
			}
			else
			{
				remove_model_hide(1314.896f, -1277.281f, 75.3722f, 1f, 1929866637, 0);
				remove_model_hide(1315.483f, -1276.752f, 75.6058f, 1f, -1431613478, 0);
				remove_model_hide(1314.567f, -1277.302f, 75.4217f, 1f, -915948066, 0);
			}
			break;
		case 5:
			Var0 = { 1052.6f, -1124f, 67.5f };
			Var0.f_3 = 20f;
			if (bParam1)
			{
				create_model_hide(Var0, Var0.f_3, -910021543, true);
				create_model_hide(Var0, Var0.f_3, 988489345, true);
				create_model_hide(Var0, Var0.f_3, 570671881, true);
				create_model_hide(Var0, Var0.f_3, -1782470881, true);
				create_model_hide(Var0, Var0.f_3, 568180522, true);
				create_model_hide(Var0, Var0.f_3, -2061400457, true);
				create_model_hide(Var0, Var0.f_3, -1361811979, true);
			}
			else
			{
				remove_model_hide(Var0, Var0.f_3, -910021543, 1);
				remove_model_hide(Var0, Var0.f_3, 988489345, 1);
				remove_model_hide(Var0, Var0.f_3, 570671881, 1);
				remove_model_hide(Var0, Var0.f_3, -1782470881, 1);
				remove_model_hide(Var0, Var0.f_3, 568180522, 1);
				remove_model_hide(Var0, Var0.f_3, -2061400457, 1);
				remove_model_hide(Var0, Var0.f_3, -1361811979, 1);
			}
			break;
		default:
			break;
	}
	if (bParam1)
	{
		func_497(&uLocal_1953, func_462(iParam0));
	}
	else
	{
		func_473(&uLocal_1953, func_462(iParam0));
	}
}

void func_483(var uParam0, int iParam1, char* sParam2)
{
	if (iParam1 == 0)
	{
		return;
	}
	if (iParam1 == -1)
	{
		return;
	}
	if (!func_459(iParam1) == -1)
	{
		func_197(func_459(iParam1));
		if (iParam1 >= 14 && iParam1 <= 17)
		{
			set_ped_relationship_group_hash(&(Local_218[iParam1]), -1694487418);
		}
	}
	if (does_entity_exist(&(Local_218[iParam1])))
	{
		func_172(uParam0, &(Local_218[iParam1]), 0, 1);
		if (is_entity_a_mission_entity(&(Local_218[iParam1])))
		{
			if (does_entity_belong_to_this_script(&(Local_218[iParam1]), false))
			{
				if (!is_entity_dead(&(Local_218[iParam1])))
				{
					iVar0 = _get_rider_of_mount(&(Local_218[iParam1]), true);
					if (does_entity_exist(iVar0) && !is_entity_dead(iVar0))
					{
						if (iVar0 == Global_35)
						{
							return;
						}
					}
				}
				func_194(uParam0, &(Local_218[iParam1]));
				func_990(&(uParam0->f_7375), &(Local_218[iParam1]), 0);
				if (_does_anim_scene_exist(uParam0->f_7375.f_804))
				{
					if (!is_string_null_or_empty(sParam2))
					{
						if (_0x6f1f0b17109309da(uParam0->f_7375.f_804, sParam2))
						{
							remove_anim_scene_entity(uParam0->f_7375.f_804, sParam2, &(Local_218[iParam1]));
						}
					}
				}
				if (func_185(iParam1) == -1)
				{
					delete_ped(Local_218[iParam1]);
				}
				else
				{
					bVar1 = true;
					if (iParam1 == 8 && func_167(3))
					{
						bVar1 = false;
					}
					if (iParam1 == 6)
					{
						set_ped_config_flag(&(Local_218[6]), 130, false);
					}
					if (bVar1)
					{
						func_201(uParam0, func_185(iParam1), &(Local_218[iParam1]), 0, 1, 1, 0);
					}
					func_187(uParam0, &(Local_218[iParam1]), 1);
					func_511(func_185(iParam1), 0);
					func_186(func_185(iParam1), 0);
				}
				func_942(iParam1, 0);
				Local_218[iParam1]->f_3 = 0;
			}
			else if (iParam1 == 1)
			{
				func_203(&(Local_218[iParam1]), func_185(7), 1, 1, 1);
				func_942(iParam1, 0);
				Local_218[iParam1]->f_3 = 0;
			}
		}
	}
}

bool func_484(int iParam0)
{
	return iParam0 > -1;
}

bool func_485(var uParam0, int iParam1)
{
	return (*uParam0 && iParam1) != 0;
}

void func_486(int iParam0, int iParam1, bool bParam2)
{
	if (!func_484(iParam0))
	{
		return;
	}
	func_991(&((*Global_1360165)[iParam0]->f_13), iParam1, bParam2);
}

bool func_487(int iParam0)
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

int func_488(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return -1;
	}
	if (!func_487(iParam0))
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

void func_489(int iParam0)
{
	func_486(iParam0, 8, 0);
}

bool func_490(var uParam0, int iParam1)
{
	return func_467(uParam0, iParam1, &uVar0);
}

void func_491(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	iVar0 = get_blip_from_entity(iParam0);
	func_992(&iVar0);
}

void func_492(var uParam0)
{
	if (func_567(uParam0, 32768))
	{
		return;
	}
	bVar0 = func_567(uParam0, 1024);
	if (func_567(uParam0, 128) || bVar0)
	{
		if (func_567(uParam0, 4096))
		{
			if (!func_567(uParam0, 2048))
			{
				iVar1 = get_blip_from_entity(*uParam0);
				if (does_blip_exist(iVar1))
				{
					_blip_set_modifier(iVar1, -1186550032);
				}
				func_985(uParam0, 2048);
				return;
			}
		}
		else if (func_567(uParam0, 2048))
		{
			iVar2 = get_blip_from_entity(*uParam0);
			if (does_blip_exist(iVar2))
			{
				_set_blip_flash_style(iVar2, -1186550032);
			}
			func_986(uParam0, 2048);
		}
		if (func_567(uParam0, 512))
		{
			if (func_508(uParam0->f_10))
			{
				if (func_910(Global_35, *uParam0, 150f, 1) || bVar0)
				{
					if (!func_993(uParam0->f_10))
					{
						func_511(uParam0->f_10, 1);
						func_186(uParam0->f_10, 0);
					}
				}
				else if ((func_993(uParam0->f_10) && !bVar0) && !func_567(uParam0, 16384))
				{
					func_511(uParam0->f_10, 0);
					func_186(uParam0->f_10, 1);
				}
			}
		}
		else if (!does_blip_exist(uParam0->f_8))
		{
			if (!does_blip_exist(get_blip_from_entity(*uParam0)))
			{
				if (func_910(Global_35, *uParam0, 150f, 1))
				{
					uParam0->f_8 = _blip_add_for_entity(422991367, *uParam0);
					if (!is_string_null_or_empty(uParam0->f_4))
					{
						set_blip_name_from_text_file(uParam0->f_8, uParam0->f_4);
					}
				}
			}
		}
		else if ((does_blip_exist(get_blip_from_entity(*uParam0)) && uParam0->f_8 != get_blip_from_entity(*uParam0)) || !func_910(Global_35, *uParam0, 150f, 1))
		{
			remove_blip(&(uParam0->f_8));
		}
	}
	else if (func_567(uParam0, 512))
	{
		if (func_508(uParam0->f_10))
		{
			if (func_993(uParam0->f_10))
			{
				func_511(uParam0->f_10, 0);
				func_186(uParam0->f_10, 1);
			}
		}
	}
	else if (does_blip_exist(uParam0->f_8))
	{
		remove_blip(&(uParam0->f_8));
	}
}

void func_493(int iParam0)
{
	if (!func_484(iParam0))
	{
		return;
	}
	if ((*Global_1360165)[iParam0]->f_12 != (*Global_1360165)[iParam0]->f_13 || func_994(iParam0, 36, 1))
	{
		func_515(iParam0, 36, 1);
		(*Global_1360165)[iParam0]->f_12 = (*Global_1360165)[iParam0]->f_13;
		func_995(iParam0, &((*Global_1360165)[iParam0]->f_2));
	}
}

void func_494(int iParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4, float fParam5, int iParam6, bool bParam7)
{
	func_996(iParam0, 0, 0);
	if (func_997(iParam0))
	{
		door_system_set_open_ratio(iParam0, fParam2, iParam6);
		if (fParam5 > 0f)
		{
			door_system_set_automatic_rate(iParam0, fParam5);
		}
		if (bParam3)
		{
			func_998(iParam0, fParam2, 1, iParam6);
		}
		else if (bParam1)
		{
			if (bParam4)
			{
				func_999(iParam0, 1);
			}
			else
			{
				func_1000(iParam0, 1);
			}
		}
		else
		{
			func_1001(iParam0, 1);
		}
		if (bParam7)
		{
			_0x276aaf0f1c7f2494(iParam0, 1);
		}
	}
	else if (func_1002())
	{
	}
	else if (network_is_in_session())
	{
	}
}

void func_495(int iParam0)
{
	func_1003(iParam0, 4, 1);
}

void func_496(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (!func_508(iParam0))
	{
		return;
	}
	if (func_200(iParam0))
	{
		if (!func_204(iParam0))
		{
			return;
		}
		if (!bParam1)
		{
			return;
		}
	}
	if (func_994(iParam0, 32, 1))
	{
		if (!bParam2)
		{
			return;
		}
	}
	iVar0 = func_1004(iParam0, 0);
	if (!_is_base_a_persistent_character(iVar0))
	{
		return;
	}
	iVar1 = func_598(iParam0);
	if (((does_entity_exist(iVar1) && func_1005(iParam0) < 10000f) && !bParam3) && !is_screen_faded_out())
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
		func_517(iParam0, 2, 1);
	}
	else
	{
		func_1006(iParam0);
		func_517(iParam0, 1, 1);
	}
}

void func_497(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 || iParam1);
}

void func_498(var uParam0, int iParam1)
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

void func_499(var uParam0, int iParam1)
{
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	iVar0 = func_791(uParam0, iParam1);
	if (iVar0 == -1)
	{
		return;
	}
	Var1.f_10 = -1569615261;
	*uParam0->f_3[iVar0] = { Var1 };
}

void func_500(var uParam0, int iParam1)
{
	if (does_entity_exist(&(iLocal_979[iParam1])))
	{
		if (is_entity_a_mission_entity(&(iLocal_979[iParam1])))
		{
			delete_vehicle(iLocal_979[iParam1]);
		}
	}
}

bool func_501(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 954);
}

int func_502(int iParam0)
{
	if (!func_501(iParam0))
	{
		return 0;
	}
	return Global_1895087[iParam0];
}

bool func_503(int iParam0)
{
	return iParam0 != 0;
}

int func_504(int iParam0)
{
	if (!func_501(iParam0))
	{
		return 0;
	}
	return (*Global_1895087)[iParam0]->f_1;
}

void func_505(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (does_cam_exist(&(iLocal_1950[iParam0])))
	{
		if (is_cam_active(&(iLocal_1950[iParam0])))
		{
			render_script_cams(false, false, 3000, true, false, 0);
			set_cam_active(&(iLocal_1950[iParam0]), false);
		}
		destroy_cam(&(iLocal_1950[iParam0]), false);
	}
}

void func_506(var uParam0, int iParam1, bool bParam2)
{
	if (does_entity_exist(&(Local_1692[iParam1])))
	{
		if (bParam2)
		{
			func_194(uParam0, &(Local_1692[iParam1]));
			func_990(&(uParam0->f_7375), &(Local_1692[iParam1]), 0);
		}
		if ((does_entity_exist(&(Local_1692[iParam1])) && is_entity_a_mission_entity(&(Local_1692[iParam1]))) && does_entity_belong_to_this_script(&(Local_1692[iParam1]), true))
		{
			if (func_1007(Local_1692[iParam1]->f_1, 1))
			{
				set_object_as_no_longer_needed(Local_1692[iParam1]);
			}
			else
			{
				delete_object(Local_1692[iParam1]);
			}
		}
	}
	func_471(&(Local_1692[iParam1]->f_1), 0);
}

bool func_507(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_484(iParam0))
		{
			return false;
		}
	}
	return (Global_40.f_4942[iParam0] && iParam1) != 0;
}

bool func_508(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 27)
	{
		return false;
	}
	return true;
}

void func_509(var uParam0, int iParam1)
{
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	if (!func_467(uParam0, iParam1, &iVar0))
	{
		return;
	}
	if (is_entity_an_object(iParam1) && func_1008(uParam0, get_object_index_from_entity_index(iParam1)))
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

void func_510(int iParam0)
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

void func_511(int iParam0, bool bParam1)
{
	if (!func_484(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (func_485(&((*Global_1360165)[iParam0]->f_12), 1))
		{
			func_486(iParam0, 1, 0);
		}
	}
	func_486(iParam0, 16, bParam1);
}

void func_512(int iParam0, bool bParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	if (!func_508(iParam0))
	{
		return;
	}
	if (func_200(iParam0))
	{
		if ((*Global_1360165)[iParam0]->f_129 != 0 && (*Global_1360165)[iParam0]->f_129 != get_id_of_this_thread())
		{
			return;
		}
	}
	if (bParam10)
	{
		func_517(iParam0, 56, 1);
		func_27(&(Global_1359489->f_40), 1);
	}
	func_511(iParam0, 0);
	func_486(iParam0, 4, 0);
	func_489(iParam0);
	func_1009(iParam0);
	func_515(iParam0, 37, 1);
	bVar0 = func_1010(Global_1360165[iParam0], 0);
	iVar1 = func_1004(iParam0, 0);
	bVar2 = _0x800df3fc913355f3(iVar1);
	if (get_ped_config_flag(Global_1360165[iParam0], 503, true) && Global_1359489->f_16 & 8388608 == 0)
	{
		set_ped_config_flag(Global_1360165[iParam0], 503, false);
	}
	if (func_994(iParam0, 64, 1))
	{
		func_515(iParam0, 64, 1);
	}
	if (bParam3)
	{
		func_515(iParam0, 33, 1);
		func_515(iParam0, 34, 1);
		func_1011(iParam0, 1056964608, -1, 1061158912);
		func_1012(iParam0, 1, 1, 0);
		if (bParam6)
		{
			func_517(iParam0, 30, 1);
		}
		if (bParam7)
		{
			func_517(iParam0, 35, 1);
			if (bParam8)
			{
				func_517(iParam0, 62, 1);
			}
		}
		if (bVar0)
		{
			func_1013(iParam0, 0);
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
		func_515(iParam0, 28, 1);
	}
	else
	{
		if (!bVar0)
		{
			set_ped_keep_task(Global_1360165[iParam0], true);
		}
		func_517(iParam0, 33, 1);
		func_1012(iParam0, 0, 1, 0);
		if (fParam4 > 0f)
		{
			(*Global_1360165)[iParam0]->f_133 = fParam4;
			func_27(&((*Global_1360165)[iParam0]->f_130), 1);
		}
		else
		{
			func_599(&((*Global_1360165)[iParam0]->f_130));
		}
		if (bParam9)
		{
			func_517(iParam0, 34, 1);
		}
	}
	if (bParam1 || bParam2)
	{
		if (does_entity_exist(Global_1360165[iParam0]))
		{
			func_496(iParam0, bParam2, bParam2, bParam2, 0);
		}
	}
	else if (bVar0)
	{
		set_ped_can_use_auto_conversation_lookat(Global_1360165[iParam0], false);
	}
	if (func_994(iParam0, 45, 1))
	{
		func_515(iParam0, 45, 1);
	}
	func_1003(iParam0, 16, 1);
	func_515(iParam0, 44, 1);
	(*Global_1360165)[iParam0]->f_129 = 0;
	Global_40.f_4942[iParam0]->f_4 = 0;
	if (bParam5)
	{
		if (func_1010(func_513(iParam0), 0))
		{
			func_203(0, iParam0, bParam3, 0, bParam2);
		}
	}
}

int func_513(int iParam0)
{
	if (!func_508(iParam0))
	{
		return 0;
	}
	if (!does_entity_exist((*Global_1360165)[iParam0]->f_70))
	{
		(*Global_1360165)[iParam0]->f_70 = 0;
	}
	return (*Global_1360165)[iParam0]->f_70;
}

bool func_514(int iParam0)
{
	if (!func_484(iParam0))
	{
		return false;
	}
	return (*Global_1360165)[iParam0]->f_70.f_11 == get_id_of_this_thread();
}

void func_515(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_484(iParam0))
		{
			return;
		}
	}
	func_1014(iParam1, &iVar0, &iVar1);
	clear_bit((*Global_1360165)[iParam0]->f_58[iVar0], iVar1);
}

void func_516(int iParam0, int iParam1, bool bParam2)
{
	if (!func_484(iParam0))
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

void func_517(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_484(iParam0))
		{
			return;
		}
	}
	func_1014(iParam1, &iVar0, &iVar1);
	set_bit((*Global_1360165)[iParam0]->f_58[iVar0], iVar1);
}

int func_518(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (!func_484(iParam0))
	{
		return 0;
	}
	iVar0 = func_513(iParam0);
	if (func_1010(iVar0, 0))
	{
		if (func_1010(_get_rider_of_mount(iVar0, false), 0) && !bParam4)
		{
			return 0;
		}
		if ((bParam1 || !func_202(iParam0)) || func_514(iParam0))
		{
			if (bParam2 || !(is_entity_on_screen(iVar0) && func_1015(player_ped_id(), iVar0, 1) < 10000f))
			{
				iVar1 = func_1016(iParam0, 1);
				if (iVar1 != 0)
				{
					if (!_0x88ad6cc10d8d35b2(iVar0))
					{
						set_entity_as_mission_entity(iVar0, true, true);
					}
					func_1017(iParam0);
					_0x7b204f88f6c3d287(func_1018(iParam0, 0));
					_0xfcc6db8dbe709bc8(func_1018(iParam0, 0));
					func_1019(iParam0);
				}
			}
			else
			{
				if (func_507(iParam0, 32768, 1))
				{
					iVar2 = func_1018(iParam0, 0);
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
		if (func_1010((*Global_1360165)[iParam0]->f_124, 0))
		{
			if (func_507(iParam0, 32768, 1))
			{
				if (!_0x88ad6cc10d8d35b2((*Global_1360165)[iParam0]->f_124))
				{
					set_entity_as_mission_entity((*Global_1360165)[iParam0]->f_124, true, true);
				}
				func_1017(iParam0);
				_0x7b204f88f6c3d287(func_1018(iParam0, 0));
				_0xfcc6db8dbe709bc8(func_1018(iParam0, 0));
			}
			else
			{
				set_entity_as_mission_entity((*Global_1360165)[iParam0]->f_124, true, true);
				func_1017(iParam0);
				delete_ped(&((*Global_1360165)[iParam0]->f_124));
			}
		}
	}
	(*Global_1360165)[iParam0]->f_70.f_1 = 0;
	func_1020(iParam0, 0);
	return 1;
}

int func_519(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1038436471;
		case 1:
			return 1230359523;
		case 2:
			return 2024948086;
		case 3:
			return 1225208808;
		case 4:
			return 95866989;
		case 7:
			return 731029607;
		case 8:
			return 1382164045;
		case 9:
			return -1769295812;
		case 10:
			return -1154137714;
		case 11:
			return -77509825;
		case 12:
			return 601521823;
		case 13:
			return 977834008;
		case 16:
			return -187772068;
		case 14:
			return -1345652903;
		case 15:
			return -1796561521;
		case 17:
			return 1582986780;
		case 18:
			return -1758092337;
		case 19:
			return 89913743;
		case 20:
			return 1192745176;
		case 21:
			return 1786827347;
		case 22:
			return 479008570;
		case 23:
			return -1032231746;
		case 24:
			return -1946016570;
		case 25:
			return -988537915;
		case 26:
			return 1843407141;
		case 27:
			return 1734226761;
		case 28:
			return -1061494370;
		case 29:
			return -234159968;
		case 30:
			return 927991752;
		case 31:
			return 1711925122;
		case 32:
			return -1883578190;
		case 33:
			return -355385988;
		case 35:
			return -628956517;
		case 34:
			return -969819655;
		case 36:
			return -1031399461;
		case 37:
			return 39313452;
		case 38:
			return -865470118;
		case 39:
			return 1609095284;
		case 40:
			return 1609095284;
		case 41:
			return -1570296827;
		case 42:
			return 1953815821;
		case 5:
			return 1944593012;
		case 6:
			return -566878875;
		case 43:
			return -940999254;
		case 48:
			return -1473388640;
		case 44:
			return -1967665484;
		case 45:
			return 1935100224;
		case 46:
			return 237310259;
		case 47:
			return -967333571;
	}
	return 0;
}

void func_520(int iParam0)
{
	if (does_entity_exist(&(Local_1692[iParam0])))
	{
		if (is_entity_a_mission_entity(&(Local_1692[iParam0])))
		{
			if (does_entity_belong_to_this_script(&(Local_1692[iParam0]), true))
			{
				if (func_1007(Local_1692[iParam0]->f_1, 1))
				{
					set_object_as_no_longer_needed(Local_1692[iParam0]);
				}
				else
				{
					delete_object(Local_1692[iParam0]);
				}
			}
		}
	}
	func_471(&(Local_1692[iParam0]->f_1), 0);
}

void func_521(int iParam0, bool bParam1, float fParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	iVar0 = func_1021(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	func_1022(iVar0);
	if (iVar0 == Global_1934765->f_338)
	{
		if (Global_1934765->f_337 == 0)
		{
			func_1023();
		}
		else
		{
			func_1024(bParam1, fParam2);
		}
	}
	else
	{
		uVar1 = Global_1934765->f_338;
		Global_1934765->f_338 = func_1025();
	}
}

void func_522(int iParam0)
{
	if (!&vLocal_1091[iParam0] == 3)
	{
		return;
	}
	vLocal_1091[iParam0] = 4;
}

char* func_523(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 50:
			if (bParam1)
			{
				return "AI_GESTURES@ARTHUR@STANDING@SPEAKER@RT_HAND";
			}
			else
			{
				return "neutral_dismiss_l_001";
			}
			break;
		case 51:
			if (bParam1)
			{
				return "script_story@brt1@leadin@mcs_1";
			}
			else
			{
				return "Dismount_hosea";
			}
			break;
		case 52:
			if (bParam1)
			{
				return "script_story@brt1@leadin@mcs_1";
			}
			else
			{
				return "Dismount_player";
			}
			break;
		case 53:
			if (bParam1)
			{
				return "veh_driveby@wagon@fr@longarms";
			}
			else
			{
				return "idle";
			}
			break;
		case 54:
			if (bParam1)
			{
				return "amb@world_human_seat_steps@male@elbows_on_knees@base";
			}
			else
			{
				return "base";
			}
			break;
		case 49:
			if (bParam1)
			{
				return "ai_react@point@witness";
			}
			else
			{
				return "000_loop";
			}
			break;
		case 55:
			if (bParam1)
			{
				return "AMB_REST_DRUNK@PROP_HUMAN_SEAT_CHAIR_TABLE@DRINKING@MALE_B@base";
			}
			else
			{
				return "base";
			}
			break;
		case 56:
			if (bParam1)
			{
				return "mech_loco_m@generic@carry@moonshine@upright@idle";
			}
			else
			{
				return "idle";
			}
			break;
		case 57:
			if (bParam1)
			{
				return "mech_loco_m@generic@carry@moonshine@upright@transition";
			}
			else
			{
				return "pour";
			}
			break;
		case 58:
			if (bParam1)
			{
				return "MECH_LOCO_M@CHARACTER@DUTCH@CARRY@SUPPLIES@IDLE";
			}
			else
			{
				return "idle";
			}
			break;
		case 59:
			if (bParam1)
			{
				return "AI_COMBAT@AIM_SWEEPS@COWBOY@GENERIC@BASE@1H";
			}
			else
			{
				return "aim_med_0";
			}
			break;
		case 60:
			if (bParam1)
			{
				return "AI_COMBAT@REACTIONS@AMBIENT@SURPRISED@BASE@2H";
			}
			else
			{
				return "right_135";
			}
			break;
		case 61:
			if (bParam1)
			{
				return "mini_games@story@brt1@serve_drinks";
			}
			break;
	}
	return "BRT1 Unhandled";
}

int func_524(int iParam0)
{
	switch (iParam0)
	{
		case 62:
			return &(iLocal_1390[11]);
		case 63:
			return &(iLocal_1390[12]);
	}
	return 0;
}

char* func_525(int iParam0)
{
	switch (iParam0)
	{
		case 64:
			return "brt1_s1_gates_to_manor";
		case 65:
			return "brt1_s2_gps_to_saloon";
		case 66:
			return "brt1_s2_asst_line_antigrief";
		case 67:
			return "brt1_s2_asst_line_to_bar";
		case 68:
			return "brt1_s4_asst_line";
		case 69:
			return "brt1_s4_hosea_out_door";
		case 70:
			return "brt1_s5_enemy";
		case 71:
			return "brt1_s5_wagon_chase";
	}
	return "BRT1 Unhandled";
}

char* func_526(int iParam0)
{
	switch (iParam0)
	{
		case 73:
			return "Script_BRT1_ServeDrinks_Refactored_01";
		case 74:
			return "Script_BRT1_ServeDrinks_Glass";
	}
	return "";
}

int func_527(int iParam0)
{
	switch (iParam0)
	{
		case 76:
			return 2042728829;
	}
	return 2042728829;
}

void func_528(int iParam0, bool bParam1)
{
	if (_does_anim_scene_exist(&(Local_2202[iParam0])) && check_ownership_of_anim_scene(&(Local_2202[iParam0])))
	{
		_delete_anim_scene(&(Local_2202[iParam0]));
	}
	if (bParam1)
	{
		Local_2202[iParam0]->f_1 = 0;
	}
	else
	{
		Local_2202[iParam0]->f_1 = 14;
	}
}

bool func_529(int iParam0)
{
	return func_1026(iParam0, 2);
}

int func_530(int iParam0)
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

int func_531(int iParam0)
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

int func_532(int iParam0)
{
	return iParam0 & 31;
}

bool func_533()
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

int func_534(int iParam0)
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

int func_535(int iParam0)
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

void func_536(int iParam0, var uParam1)
{
	Var0 = iParam0;
	Var0.f_1 = uParam1;
	network_set_rich_presence(4, &Var0, 2, 2);
}

int func_537()
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

int func_538(int iParam0)
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

void func_539(var uParam0, var uParam1, var uParam2)
{
	vVar0.x = uParam0;
	vVar0.f_1 = uParam1;
	vVar0.f_2 = uParam2;
	network_set_rich_presence(3, &vVar0, 3, 3);
}

void func_540(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_12106[iParam0]->f_1 = iParam1;
		return;
	}
	if (iParam1 == 0 || iParam1 == -1)
	{
		func_1027(iParam0);
	}
	else
	{
		func_1028(iParam0, iParam1);
	}
	func_1029();
}

bool func_541(int iParam0)
{
	iVar0 = func_479(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887->f_12 == -1)
	{
		return is_bit_set(&(Global_40.f_283[iVar1]), iVar2);
	}
	return is_bit_set(&(Global_1058888->f_40567[iVar1]), iVar2);
}

bool func_542(int iParam0)
{
	if (!func_214(iParam0))
	{
		return false;
	}
	switch (func_219(iParam0))
	{
		case 1:
			switch (func_294(iParam0))
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
			switch (func_294(iParam0))
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

void func_543(int iParam0)
{
	iVar2 = func_1030(0);
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_648(iVar1) == iParam0)
		{
			_0x6a564540fac12211(iVar2, iVar1);
		}
		iVar0++;
	}
	func_1032(func_1031(iParam0), 6);
}

void func_544(int iParam0)
{
	iVar2 = func_1030(0);
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_648(iVar1) == iParam0)
		{
			_0x766315a564594401(iVar2, iVar1, 0);
		}
		iVar0++;
	}
	func_1033(func_1031(iParam0), 6);
}

int func_545(int iParam0)
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

int func_546(int iParam0)
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
	func_1034(iParam0, Global_1898164->f_162);
	return 1;
}

bool func_547(int iParam0)
{
	return iParam0 != 0;
}

bool func_548(int iParam0)
{
	if (iParam0 != -1)
	{
		return true;
	}
	return false;
}

void func_549(int iParam0, var uParam1)
{
	if (!func_548(iParam0))
	{
		return;
	}
	if (*uParam1 == -1600776215)
	{
		return;
	}
	func_1035(iParam0, *uParam1, 0);
	func_1036(uParam1);
	Global_1935183->f_24 = 1;
}

void func_550(char* sParam0, int iParam1)
{
	sParam0->f_8 = (sParam0->f_8 || iParam1);
}

void func_551(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_596() - fParam1);
	func_1037(uParam0, 1);
	func_1038(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_552(var uParam0)
{
	return func_243(*uParam0, 2);
}

int func_553()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return iVar0;
	}
	return get_game_timer();
}

void func_554(bool bParam0)
{
	if (func_1039())
	{
		Global_1357509 = 1;
	}
	if (func_1040(-92416669))
	{
	}
	if (bParam0 && Global_1935630->f_44 == -1016714371)
	{
		set_current_ped_weapon(Global_35, -1569615261, true, 0, false, false);
		Global_1935630->f_44 = -1569615261;
	}
}

struct<4> func_555(int iParam0, int iParam1)
{
	return func_1041(iParam0, iParam1);
}

int func_556(int iParam0)
{
	if (func_219(iParam0) == 1)
	{
		return func_294(iParam0);
	}
	return -1;
}

int func_557(int iParam0)
{
	if (func_219(iParam0) == 8)
	{
		return func_294(iParam0);
	}
	return -1;
}

char[] func_558(int iParam0)
{
	if (!func_295(iParam0))
	{
		return uVar0;
	}
	uVar0 = (*Global_1347702)[iParam0]->f_3;
	return uVar0;
}

void func_559(int iParam0, bool bParam1)
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
		func_1042(1, bParam1);
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
		(*Global_2621440)[iParam0]->f_9.f_14 = func_307();
	}
}

void func_560(int iParam0, vector3 vParam1, var uParam4)
{
	(*Global_2621440)[iParam0]->f_9.f_7 = { vParam1 };
	(*Global_2621440)[iParam0]->f_9.f_13 = uParam4;
	(*Global_2621440)[iParam0]->f_9 = 5;
	(*Global_2621440)[iParam0]->f_9.f_15 = func_394(vParam1, 1);
}

bool func_561(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 13)
	{
		return false;
	}
	return true;
}

bool func_562(int iParam0)
{
	return Global_43884 == iParam0;
}

bool func_563(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 120);
}

void func_564(int iParam0)
{
	Global_1310750->f_16035 = (Global_1310750->f_16035 - (Global_1310750->f_16035 && iParam0));
}

bool func_565(var uParam0, int iParam1, int iParam2)
{
	return is_bit_set(uParam0[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return is_bit_set(uParam0[iVar0], iVar1);
}

int func_566()
{
	return Global_1109400->f_245;
}

bool func_567(var uParam0, int iParam1)
{
	return func_416(uParam0->f_64, iParam1);
}

void func_568(int iParam0)
{
	iParam0 = func_288(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_284(iParam0);
	if (!_does_thread_exist(iVar0))
	{
		func_575(iParam0);
	}
	else if (!is_thread_active(iVar0, false))
	{
		func_575(iParam0);
	}
}

bool func_569(int iParam0)
{
	iParam0 = func_288(iParam0);
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

void func_570(int iParam0)
{
	iParam0 = func_288(iParam0);
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

void func_571(int iParam0)
{
	iParam0 = func_288(iParam0);
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

bool func_572(int iParam0)
{
	if (!func_1043(iParam0))
	{
		return false;
	}
	if (!func_353())
	{
		return true;
	}
	return false;
}

void func_573(int iParam0)
{
	iParam0 = func_288(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_576(iParam0))
	{
		return;
	}
	iVar0 = func_239(iParam0);
	func_1044(iParam0);
	if (!_0x88ad6cc10d8d35b2(iVar0))
	{
		set_entity_as_mission_entity(iVar0, true, true);
	}
	iVar1 = get_entity_model(iVar0);
	if (_0xaa9f048dcf69b6dc(iVar1))
	{
		if (!func_572(iVar1))
		{
			set_ped_model_is_suppressed(iVar1, false);
		}
	}
	delete_ped(&iVar0);
	func_1045(iParam0, 0);
	func_575(iParam0);
}

bool func_574(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (is_entity_dead(iParam0) || is_ped_injured(iParam0))
	{
	}
	iVar0 = func_283(iParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	return true;
}

void func_575(int iParam0)
{
	iParam0 = func_288(iParam0);
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

bool func_576(int iParam0)
{
	iParam0 = func_288(iParam0);
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

void func_577(int iParam0)
{
	if (is_player_dead(player_id()))
	{
		return;
	}
	iVar0 = func_239(iParam0);
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
	if (func_1046(iParam0, 64))
	{
		func_570(iParam0);
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
	bVar3 = func_646(42);
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
				func_1047(&((*Global_1900383)[iParam0]->f_27));
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
		func_570(iParam0);
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
		if (func_1048(1) < 1)
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
		func_1049(&((*Global_1900383)[iParam0]->f_26), bVar6);
	}
	if (!does_blip_exist((*Global_1900383)[iParam0]->f_26))
	{
		return;
	}
	bVar8 = false;
	if (func_1046(iParam0, 32))
	{
		bVar8 = true;
	}
	bVar9 = is_ped_in_writhe(iVar0);
	bVar10 = false;
	iVar11 = func_1050(iParam0);
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
	fVar15 = func_1051(vVar12, Global_36);
	bVar16 = false;
	if (fVar15 > func_1052(iParam0))
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
		func_1053((*Global_1900383)[iParam0]->f_26);
		func_1054((*Global_1900383)[iParam0]->f_26);
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
	if (func_911(iVar0) && !bVar9)
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
	iVar21 = func_1048(iParam0);
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

int func_578(int iParam0)
{
	return shift_right(iParam0, 5) & 1023;
}

int func_579(int iParam0)
{
	if ((*Global_1347702)[iParam0]->f_12 & 1 != 0 || (*Global_1347702)[iParam0]->f_12 & 33554432 != 0)
	{
		return 1;
	}
	return 3;
}

int func_580(int iParam0)
{
	uVar0 = (*Global_1347702)[iParam0]->f_3;
	return get_hash_key(&uVar0);
}

void func_581(int iParam0, int iParam1)
{
	Global_40.f_490.f_402[iParam0] = (&Global_40.f_490.f_402[iParam0] - (Global_40.f_490.f_402[iParam0] && iParam1));
}

void func_582(int iParam0, int iParam1)
{
	Global_40.f_490.f_402[iParam0] = (Global_40.f_490.f_402[iParam0] || iParam1);
}

bool func_583(int iParam0)
{
	iParam0 = func_288(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (!func_576(iParam0))
	{
		return false;
	}
	iVar0 = func_239(iParam0);
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

void func_584(int iParam0)
{
	iParam0 = func_288(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_576(iParam0))
	{
		return;
	}
	iVar0 = func_239(iParam0);
	if (is_entity_dead(iVar0))
	{
		return;
	}
	_set_entity_health(iVar0, 0, 0);
}

void func_585(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (is_string_null_or_empty(sParam1))
	{
		sParam1 = "FEED_MONEY_EARN";
	}
	func_754(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 1831944558, 0, 109029619, 0, 0, 0, 1);
}

void func_586(int iParam0, bool bParam1, float fParam2, int iParam3, int iParam4)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if (bParam1)
	{
		iVar0 = round((to_float(iParam0) * fParam2));
		iVar1 = ((iParam0 - iVar0) / iParam3);
		if (func_1055())
		{
			iVar2 = floor((to_float(iVar1) * 0.1f));
		}
		iParam0 = (iParam0 + iVar2);
		iVar1 = (iVar1 + iVar2);
		func_754(_create_var_string(2, "FEED_GANG_TOTAL_EARN", iParam0), "ITEMTYPE_TEXTURES", -1957849484, 0, 109029619, 0, 0, 0, 1);
		iParam0 = (iParam0 - iVar0);
		if (iVar0 > 0)
		{
			func_1056(iVar0);
			func_1057(iVar0, 0, 0);
		}
		func_754(_create_var_string(2, "FEED_GANG_PLAYER_EARN", iVar1), "ITEMTYPE_TEXTURES", 1831944558, 0, 109029619, 0, 0, 0, 1);
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

bool func_587(int iParam0)
{
	if (!func_271(iParam0))
	{
		return false;
	}
	return func_275(iParam0, 67108864);
}

void func_588(int iParam0)
{
	StringCopy(&cVar0, func_1058(iParam0), 64);
	StringConCat(&cVar0, "_OUTLINE", 64);
	sVar8 = func_1059(cVar0);
	_0x563fcb6620523917(get_hash_key(sVar8), -1482012664);
}

void func_589(int iParam0)
{
	StringCopy(&cVar0, func_1058(iParam0), 64);
	StringConCat(&cVar0, "_OUTLINE", 64);
	sVar8 = func_1059(cVar0);
	iVar9 = get_hash_key(sVar8);
	if (_0xe38450dbcbc70e3d(iVar9, -1305340593) || _0xe38450dbcbc70e3d(iVar9, -1482012664))
	{
		_0x6786d7afac3162b3(iVar9);
	}
}

bool func_590(var uParam0, int iParam1, int iParam2)
{
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	bVar2 = is_bit_set(uParam0[iVar0], iVar1);
	clear_bit((*uParam0)[iVar0], iVar1);
	return bVar2;
}

bool func_591(var uParam0, int iParam1, int iParam2)
{
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	bVar2 = is_bit_set(uParam0[iVar0], iVar1);
	set_bit((*uParam0)[iVar0], iVar1);
	return !bVar2;
}

bool func_592(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_593(int iParam0)
{
	if (!func_563(iParam0))
	{
		return true;
	}
	return Global_17504.f_42[iParam0]->f_4 > 0;
}

int func_594(int iParam0)
{
	if (func_563(iParam0))
	{
		return Global_17504.f_42[iParam0]->f_4;
	}
	return 0;
}

int func_595(int iParam0)
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

float func_596()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return (to_float(iVar0) / 1000f);
	}
	return (to_float(get_game_timer()) / 1000f);
}

void func_597(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	iVar0 = (((iParam2 + (60 * iParam3)) + (3600 * iParam4)) + (86400 * iParam5));
	if (func_1060(iParam0) == 1 && bParam7)
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

int func_598(int iParam0)
{
	if (!func_484(iParam0))
	{
		return 0;
	}
	if (!does_entity_exist(Global_1360165[iParam0]))
	{
		(*Global_1360165)[iParam0] = 0;
	}
	return Global_1360165[iParam0];
}

void func_599(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

bool func_600(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return func_1061(iParam0);
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

int func_601(int iParam0, bool bParam1, bool bParam2)
{
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (&Global_40.f_4283.f_6[iVar0] == iParam0)
		{
			func_614(Global_40.f_4283.f_6[iVar0], bParam1, bParam2);
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_602(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_2;
	}
	return -1;
}

void func_603(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_2 = iParam1;
}

int func_604()
{
	return Global_40.f_11095.f_35;
}

void func_605(int iParam0, int iParam1)
{
	if (iParam1 == 1)
	{
		func_1062(iParam0, 0);
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
		func_606(1);
		Global_40.f_11922[0] = iParam0;
	}
}

void func_606(int iParam0)
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
			func_1062(&(Global_40.f_11922[iVar0]), 0);
			Global_40.f_11922[iVar0] = 0;
			iVar1 = 1;
		}
		iVar0++;
	}
	if (iVar1 == 1)
	{
		func_1063(1);
	}
}

bool func_607(int iParam0)
{
	return Global_40.f_490.f_402[iParam0] & 1 != 0;
}

int func_608()
{
	iVar0 = func_1064((*Global_1347702)[9]->f_15);
	iVar1 = func_1064((*Global_1835011)[69]->f_1);
	if (func_1065(iVar0, iVar1, 1))
	{
		return 0;
	}
	return 1;
}

bool func_609(int iParam0)
{
	if (!func_213(iParam0))
	{
		return false;
	}
	return func_349((*Global_1835011)[iParam0]->f_1, 1);
}

int func_610(int iParam0)
{
	Var0 = Global_1357549->f_576;
	Var0.f_1 = 0;
	Var0.f_3 = iParam0;
	iVar5 = 0;
	if (func_1066(Var0, 70005598, &iVar6, 0))
	{
		iVar5 = func_1067(iVar6);
	}
	return iVar5;
}

int func_611(int iParam0)
{
	Var0 = Global_1357549->f_576;
	Var0.f_1 = 0;
	Var0.f_3 = iParam0;
	iVar5 = 1;
	if (func_1068(Var0, -1875502208, &iVar5, 0))
	{
	}
	return iVar5;
}

void func_612(int iParam0, bool bParam1)
{
	func_1069(iParam0, &iVar0, &iVar1);
	if (bParam1)
	{
		set_bit(Global_1357549->f_1848[iVar0], iVar1);
	}
	else
	{
		clear_bit(Global_1357549->f_1848[iVar0], iVar1);
	}
}

bool func_613(int iParam0)
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

void func_614(var uParam0, bool bParam1, bool bParam2)
{
	if (*uParam0 == 176656832)
	{
		return;
	}
	func_612(*uParam0, 0);
	if (bParam1)
	{
		if (bParam2)
		{
			func_615(2, *uParam0);
		}
		else
		{
			func_616(2, *uParam0);
		}
	}
	func_1070(uParam0);
}

void func_615(int iParam0, int iParam1)
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

void func_616(int iParam0, int iParam1)
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

void func_617(int iParam0, int iParam1, bool bParam2)
{
	Global_1327479->f_4 = get_game_timer();
	func_1071(iParam0, iParam1, bParam2);
}

int func_618(int iParam0)
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

int func_619(int iParam0)
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

void func_620(int iParam0, bool bParam1, int iParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, bool bParam7)
{
	iVar0 = func_1072();
	if (iParam3 == 1142025875 || iParam3 == 1587891565)
	{
		if (bParam6)
		{
			iParam0 = func_1073(iParam0);
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
	if (func_646(6))
	{
		iVar2 = 320;
		iVar3 = -320;
		if (!func_1074())
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
	Global_40.f_11095.f_35 = func_331(Global_40.f_11095.f_35, iVar3, iVar2);
	iVar1 = func_1072();
	if ((iVar1 != iVar0 && (iVar1 != 0 || iParam3 == -1091304842)) || bParam7)
	{
		iVar6 = func_1075(iVar1);
		func_1077(func_1076(), 0, 4000);
		func_1078(Global_40.f_11095.f_35);
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
		func_1079(0);
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
				if (iParam0 > func_619(14))
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
					sParam4 = func_1080(iParam3);
				}
				if (is_string_null_or_empty(sParam4))
				{
					func_754(_create_var_string(2, "PLAYER_HONOR_CHANGE_POS"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_GOOD"), 0, 109029619, "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_754(_create_var_string(2, "PLAYER_HONOR_CHANGE_POS_EVENT"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_GOOD"), 0, 109029619, "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
		else
		{
			func_95(func_94(-1636809477), 1);
			Global_1347477->f_204 = 0;
			if (!bParam1)
			{
				if (iParam0 < func_619(4))
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
					sParam4 = func_1080(iParam3);
				}
				if (is_string_null_or_empty(sParam4))
				{
					func_754(_create_var_string(2, "PLAYER_HONOR_CHANGE_NEG"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_BAD"), 1, 859817522, "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_754(_create_var_string(2, "PLAYER_HONOR_CHANGE_NEG_EVENT"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_BAD"), 1, 859817522, "Honor_Display_Sounds", sVar7, 0, 1);
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
		func_384(10, 1);
	}
}

void func_621(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	Global_1347477->f_155[iParam0] = iParam1;
	Global_1347477->f_155[iParam0]->f_2 = iParam2;
	Global_1347477->f_155[iParam0]->f_3 = iParam3;
	Global_1347477->f_155[iParam0]->f_4 = iParam4;
	Global_1347477->f_155[iParam0]->f_5 = bParam5;
	Global_1347477->f_155[iParam0]->f_1 = get_game_timer() + 500;
}

int func_622(int iParam0)
{
	return shift_right(iParam0, 15) & 16383;
}

int func_623(int iParam0)
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

bool func_624(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _item_database_is_key_valid(iParam0, iParam1);
}

bool func_625(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (func_20() == -1)
	{
		if (func_1081(iParam0) && func_1082(iParam0))
		{
			func_1083(iParam0, iParam1, 1, &bParam2, iParam3);
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

bool func_626(int iParam0, int iParam1, int iParam2)
{
	*iParam1 = iParam2;
	func_1084(iParam0, iParam1);
	Var0 = { func_735(iParam0, 0, 1) };
	iVar5 = func_1085(iParam0, &Var0, 0, 0);
	iVar6 = func_1086(iParam0, 0);
	if ((iVar5 > 1 && !func_129()) && (iVar6 + iParam2) >= iVar5)
	{
		if (func_644(iParam0, -2051813666))
		{
			func_347(583, 1);
		}
		else
		{
			func_347(582, 0);
		}
	}
	if (func_1087(iParam0, &Var0, *iParam1, 0, 0))
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

void func_627(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return;
	}
	switch (func_705(iParam0, -949239683))
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

int func_628(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_624(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_643(iParam0);
	if (iVar0 == 307971639 || (bParam1 && iVar0 == -427144552))
	{
		iVar1 = func_1088(iParam0, 1);
		if (iVar1 != 0)
		{
			return get_ped_ammo_by_type(Global_35, iVar1);
		}
	}
	else if (iVar0 == -427144552)
	{
		return func_1089(iParam0, 0);
	}
	iVar2 = _0xe787f05dfc977bde(func_1030(bParam2), iParam0, 0);
	return iVar2;
}

bool func_629(int iParam0)
{
	if (func_20() != -1)
	{
		return false;
	}
	return func_630(iParam0) != 0;
}

int func_630(int iParam0)
{
	iVar1 = 0;
	while (iVar1 < func_1090())
	{
		iVar0 = _0x126cbebba46693cf(iVar1, -2076669067, 0);
		if (iParam0 == func_1091(iVar0))
		{
			return iVar0;
		}
		iVar1++;
	}
	return 0;
}

int func_631(int iParam0)
{
	return _0x6052b4de6657684f(iParam0);
}

int func_632(int iParam0)
{
	iVar1 = 0;
	while (iVar1 < func_1090())
	{
		iVar0 = _0x126cbebba46693cf(iVar1, -2076669067, 0);
		if (iParam0 == func_631(iVar0))
		{
			if (func_369(func_1091(iVar0), 1, 0))
			{
				iVar2++;
			}
		}
		iVar1++;
	}
	return iVar2;
}

void func_633(int iParam0)
{
	_0x3ea62e56f386c997(iParam0, 1);
	func_1092(48);
	func_389(0, -1);
}

bool func_634(int iParam0)
{
	if (func_20() != -1)
	{
		return false;
	}
	return func_349((*Global_1347702)[iParam0]->f_15, 1);
}

int func_635(int iParam0)
{
	return _0x62cab7db62ead434(-2076669067, iParam0);
}

int func_636(int iParam0)
{
	return _0x93f2e7b5db85657b(-2076669067, iParam0);
}

bool func_637(int iParam0)
{
	if (func_20() != -1)
	{
		return false;
	}
	return func_349((*Global_1835011)[iParam0]->f_1, 1);
}

bool func_638(int iParam0)
{
	if (func_20() != -1)
	{
		return false;
	}
	if (!func_295(iParam0))
	{
		return false;
	}
	return func_215((*Global_1347702)[iParam0]->f_15);
}

int func_639()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		if (func_369(func_1093(iVar1), 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_640(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, bool bParam7)
{
	switch (iParam0)
	{
		case 38:
			sVar0 = "MISSION_RCCIG";
			sVar1 = "SP_MISSIONS_13";
			if (func_420() && (func_638(38) || func_634(38)))
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
			if (func_420() && (func_638(39) || func_634(39)))
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
			iVar9 = func_1094(iParam3, 19);
			iVar14 = -1531394072;
			iVar11 = get_hash_key("BLIP_RC_COLLECTABLE_EXOTICS");
			iVar13 = 911890963;
			break;
		case 41:
			if (func_420() && (func_638(41) || func_634(41)))
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
			if (func_420() && (func_638(49) || func_634(49)))
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
			iVar9 = func_1094(iParam3, 20);
			iVar14 = 678508515;
			iVar11 = 1986498931;
			iVar13 = -1424865411;
			break;
	}
	sVar2 = func_1095(iParam0, iVar14, iParam6, sVar2, sParam4, iVar10, iParam3);
	if (iParam6 == 8)
	{
		iVar11 = get_hash_key("TOAST_MEDAL_COLLECTABLE");
		iVar12 = get_hash_key("hud_toasts");
	}
	else
	{
		iVar12 = get_hash_key("toast_log_blips");
	}
	if (func_1096(iParam0, iVar13, iVar14))
	{
	}
	if (func_1097(iParam0, iVar13, vVar6, sVar4, sVar3))
	{
	}
	if (func_1098(iParam0, iVar13, sVar2, sVar5, sVar0, sVar1, iVar11, iVar12))
	{
	}
	if (func_1099(iParam0, iVar13, iVar14, iParam3, iParam1, iParam6, iVar9, iParam2, iVar10, bParam5))
	{
	}
	if (func_1100(iParam0, iVar13, iVar14, iParam6))
	{
	}
	if (func_1101(iParam0, iVar13, iVar14, iParam6, bParam7))
	{
	}
}

void func_641(int iParam0)
{
	Global_40.f_12004 = (Global_40.f_12004 || iParam0);
}

void func_642(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	switch (iParam0)
	{
		case 38:
			sVar0 = "COL_CC_TITLE";
			sVar3 = "COL_CC_CARD_FOUND";
			iVar7 = -2076669067;
			if (func_420() && (func_638(38) || func_634(38)))
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
			if (func_420() && (func_638(39) || func_634(39)))
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
			if (func_420() && (func_638(49) || func_634(49)))
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
		if (func_420() && (func_638(38) || func_634(38)))
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
			func_1102(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 1)
		{
			sVar3 = "COL_CC_CARD_POSTED_OBJ";
			func_1102(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 0)
		{
			func_760(_create_var_string(2, sVar0), _create_var_string(2, func_1103(func_636(iParam6))), iVar5, iVar4, -2, 0, 0, 0, 0, 1, 1);
			func_1102(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			sVar1 = "COL_CC_INTRO";
			func_1102(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == -440187297)
	{
		if (func_420() && (func_638(39) || func_634(39)))
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
			func_1102(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_1102(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == 2103522376)
	{
		if (func_420() && (func_638(49) || func_634(49)))
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
			func_1102(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_1102(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else
	{
		_uilog_set_pending_details_id(1, iVar6);
		if (iParam5 == 1)
		{
			func_1102(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_1102(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
}

int func_643(int iParam0)
{
	if (!func_624(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

bool func_644(int iParam0, int iParam1)
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

bool func_645(int iParam0, int iParam1)
{
	if (!func_624(iParam0, 0))
	{
		return false;
	}
	return _0x245d07651b1d183b(iParam0, iParam1);
}

bool func_646(int iParam0)
{
	if (!func_1104(iParam0))
	{
		return false;
	}
	return func_1105(iParam0);
}

void func_647(int iParam0)
{
	if (!func_1104(iParam0))
	{
		return;
	}
	func_1106(iParam0);
	func_1107(iParam0);
}

int func_648(int iParam0)
{
	if (!func_624(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_649(int iParam0, bool bParam1)
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
	if (func_624(iVar0, 0))
	{
		if (bParam1)
		{
			if (func_1108(iVar0) || func_122(iVar0))
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

int func_650(int iParam0, bool bParam1)
{
	if (!func_624(iParam0, 0))
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

void func_651(int iParam0)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	if (!func_738(iParam0))
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

bool func_652(bool bParam0)
{
	if (func_20() == -1)
	{
		return true;
	}
	return _inventory_are_local_changes_allowed(func_1030(bParam0));
}

bool func_653(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
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
		Var0 = { func_735(iParam0, 0, 1) };
		iVar5 = 1728382685;
		Var6.f_9 = -1591664384;
		iVar28 = 0;
		while (iVar28 < 4)
		{
			iVar5 = func_1109((386 + iVar28), 1);
			if (func_1110(iParam0, &Var0, iVar5, 0))
			{
				if (func_1111(iParam0, &Var6, iVar5))
				{
					Var29 = { func_1112(iParam0, Var0, iVar5, 0) };
					func_1113(iParam0, &Var29, &Var0, 1, -142743235, 1, 0);
				}
				else
				{
					iVar28++;
				}
				if (func_652(0))
				{
					_give_weapon_to_ped_2(Global_35, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
					if (!has_ped_got_weapon(Global_35, iParam0, 0, false))
					{
						return false;
					}
					func_654(_get_ammo_type_for_weapon(iParam0), iParam1, iParam6);
					func_1114(iParam0, iParam1);
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

bool func_654(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return true;
	}
	if (!func_656(iParam0))
	{
		return false;
	}
	if (!func_652(0))
	{
		return false;
	}
	_add_ammo_to_ped_by_type(Global_35, iParam0, iParam1, iParam2);
	return true;
}

bool func_655(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	iVar0 = func_650(iParam0, 0);
	if (is_weapon_valid(iVar0))
	{
		if (func_20() == -1)
		{
			func_651(iVar0);
			if (iParam1 == 1248274121)
			{
				func_1115(iVar0);
			}
		}
		if (!func_1087(iParam0, &uVar1, 1, 0, 0))
		{
			func_1083(iParam0, 1, 0, bParam2, iParam1);
			iVar6 = func_1116(iVar0);
			if (_is_weapon_sniper(iVar0))
			{
				func_653(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == -1415022764 || iVar0 == -160924582)
			{
				func_653(iVar0, 0, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == 2055893578)
			{
				func_653(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (_is_weapon_melee(iVar0))
			{
				if (iVar0 == 494733111 && !func_1074())
				{
					return false;
				}
				if (_0x2c83212a7aa51d3d(iParam0))
				{
				}
				else if (!func_1117(iVar0))
				{
					func_653(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
				}
				else
				{
					func_653(iVar0, _get_weapon_clip_size(iVar0) * 4, bParam3, bParam4, 0, 0, iParam1, 0);
				}
			}
			else if (_is_weapon_one_handed(iVar0))
			{
				iVar7 = func_1118(Global_35, 2, 0, 1);
				if ((((func_738(iVar7) && !Global_43891) && iVar7 != iVar0) && !func_646(24)) && bParam4)
				{
					_0xe9bd19f8121ade3e(Global_35, iVar7);
				}
				bVar8 = true;
				if (func_738(iVar7) && func_646(24))
				{
					if (!func_653(iVar0, iVar6, bParam3, bParam4, 3, bVar8, iParam1, 0))
					{
						return false;
					}
				}
				else if (!func_653(iVar0, iVar6, bParam3, bParam4, 0, bVar8, iParam1, 0))
				{
					return false;
				}
			}
			else if (!func_653(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0))
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
		func_347(480, 1);
	}
	return true;
}

bool func_656(int iParam0)
{
	return _is_ammo_valid(iParam0);
}

bool func_657(int iParam0, int iParam1, int iParam2)
{
	if (!func_656(iParam0))
	{
		return false;
	}
	iVar4 = _get_weapon_type_from_ammo_type(iParam0);
	iVar3 = get_ped_ammo_by_type(Global_35, iParam0);
	if (func_738(iVar4))
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
	if (func_369(611073244, 1, 0) && iParam2 == -897553835)
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
		func_692(func_1119(iParam0), func_691(iParam0), 1);
		return false;
	}
	if (iVar2 == (iVar3 + iVar0))
	{
		if (func_20() == -1)
		{
			if (func_349((*Global_1835011)[14]->f_1, 1))
			{
				func_347(416, 0);
			}
		}
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_652(0))
	{
		if (func_654(iParam0, iVar0, iParam2))
		{
			*iParam1 = iVar0;
			return true;
		}
	}
	else
	{
		return func_697(iParam0, *iParam1, iParam2);
	}
	return false;
}

void func_658(int iParam0)
{
	if ((iParam0 == -615217896 && !func_360()) || iParam0 != -615217896)
	{
		if (func_1120(Global_35, iParam0, &uVar0))
		{
			func_676(player_ped_id(), iParam0, 0, -358215195, 1, 1, 1, 0, 1, 1);
		}
	}
	switch (iParam0)
	{
		case -62615415:
			Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
			func_682();
			break;
		case -832719552:
			Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
			func_682();
			break;
		case -1941112926:
			Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
			func_682();
			break;
		case -615217896:
			Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
			func_680();
			break;
		case -121629511:
			Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.2f);
			func_678();
			break;
	}
}

void func_659(int iParam0)
{
	switch (iParam0)
	{
		case -224110471:
			Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
			func_678();
			break;
		case 1289585739:
			Global_40.f_11095.f_61 = (Global_40.f_11095.f_61 + 0.1f);
			func_679();
			break;
		case 1441506783:
			Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
			break;
		case 780305678:
			Global_40.f_11095.f_56 = (Global_40.f_11095.f_56 + 0.1f);
			break;
		case -935153695:
			Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
			func_680();
			break;
		case 655868243:
			Global_40.f_11095.f_63 = (Global_40.f_11095.f_63 + 0.1f);
			func_681();
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
			func_682();
			break;
		case -569248339:
			Global_40.f_11095.f_64 = (Global_40.f_11095.f_64 + 0.3f);
			func_1121();
			break;
		case -1196089647:
			Global_40.f_11095.f_68 = (Global_40.f_11095.f_68 + 0.1f);
			break;
		case -982895431:
			Global_40.f_11095.f_69 = (Global_40.f_11095.f_69 + 0.1f);
			func_1122();
			break;
		case -1056342069:
			Global_40.f_11095.f_70 = (Global_40.f_11095.f_70 + 0.2f);
			break;
	}
}

struct<2> func_660(int iParam0)
{
	Var0.f_1 = iParam0;
	return Var0;
}

struct<2> func_661(int iParam0, int iParam1)
{
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

void func_662(int iParam0)
{
	bVar0 = func_644(iParam0, -2017733358);
	if (func_1123() < 3)
	{
		if (bVar0)
		{
			if (func_1125(func_1124(iParam0), iParam0))
			{
				func_692(79, func_691(func_1124(iParam0)), 1);
			}
			else
			{
				func_692(78, func_691(func_1124(iParam0)), 1);
			}
		}
		else
		{
			func_692(80, func_691(func_1126(iParam0)), 1);
		}
	}
}

bool func_663()
{
	if (((((func_1127(839908568, 400) || func_1127(-1134030454, 400)) || func_1127(623353496, 400)) || func_1127(-344413337, 400)) || func_1127(-1664948962, 400)) || func_1127(1795228059, 400))
	{
		return true;
	}
	return false;
}

int func_664(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, int iParam7)
{
	iVar0 = func_771(iParam0, bParam6, iParam7);
	if (!bParam1)
	{
		func_585(iVar0, sParam4, iParam5);
	}
	iVar1 = 752097756;
	if (bParam6)
	{
		iVar1 = -897553835;
	}
	func_586(iVar0, bParam1, fParam2, iParam3, iVar1);
	return iVar0;
}

void func_665(int iParam0)
{
	switch (iParam0)
	{
		case -625427311:
			func_640(51, 0, 0, 1520110311, 0, 0, 4, 0);
			func_642(51, 0, 0, 0, 0, -1, 0);
			func_1128(8192);
			break;
		case 581047644:
			func_640(51, 0, 0, -1992824800, 0, 0, 1, 0);
			func_642(51, 0, 0, 0, 0, -1, 0);
			func_1128(524288);
			break;
		case -644199619:
			func_640(39, 0, 0, 0, 0, 0, 1, 0);
			func_642(39, 0, 0, 0, 0, -1, 0);
			func_1129(16);
			break;
		case 684296857:
			func_640(41, 0, 0, 0, 0, 0, 1, 0);
			func_642(41, 0, 0, 0, 0, -1, 0);
			func_1130(8);
			break;
		case 466137807:
			func_640(49, 0, 0, 0, 0, 0, 1, 0);
			func_642(49, 0, 0, 0, 0, -1, 0);
			func_1131(16);
			break;
		case -1087522507:
			func_640(43, 0, 0, -1791518714, func_1132(1), 0, -1, 0);
			func_1133(1);
			break;
		case -405829000:
			func_640(43, 0, 0, -2087881550, func_1132(2), 0, -1, 0);
			func_1133(2);
			break;
		case 378660860:
			func_640(43, 0, 0, 1908068621, func_1132(4), 0, -1, 0);
			func_1133(4);
			break;
		case 1566111097:
			func_640(43, 0, 0, 1611247019, func_1132(8), 0, -1, 0);
			func_1133(8);
			break;
		case 1276007140:
			func_640(43, 0, 0, 1319635688, func_1132(16), 0, -1, 0);
			func_1133(16);
			break;
	}
}

void func_666(int iParam0)
{
	if (func_1134() == 1)
	{
		if (func_634(39))
		{
			func_347(342, 0);
		}
		else
		{
			func_347(343, 0);
			func_1129(1);
		}
	}
	if (func_1134() >= 30)
	{
		func_347(344, 0);
	}
	func_640(39, 0, 0, 0, 0, 0, -1, 0);
	func_642(39, 0, 0, func_1134(), 30, 1, 0);
}

void func_667(int iParam0)
{
	if (func_1135() == 1)
	{
		if (func_634(49))
		{
			func_347(409, 0);
		}
		else
		{
			func_347(410, 0);
			func_1131(1);
		}
	}
	if (func_1135() >= 10)
	{
		func_347(411, 0);
	}
	func_640(49, 0, 0, 0, 0, 0, -1, 0);
	func_642(49, 0, 0, func_1135(), 10, 1, 0);
}

void func_668(int iParam0)
{
	switch (iParam0)
	{
		case 1369162587:
			_0x3ea62e56f386c997(-949689219, 1);
			func_347(437, 0);
			func_347(440, 0);
			func_1136(-949689219, 444160793, &sVar0, 1, 0, 0);
			func_640(51, 0, 0, -949689219, sVar0, 0, -1, 0);
			func_642(51, 0, 0, sVar0, func_1094(-949689219, 20), 1, 0);
			func_1128(1);
			func_1137(-748969569, 0, 0);
			break;
		case 1610047510:
			_0x3ea62e56f386c997(-1248968496, 1);
			func_1136(-1248968496, -1969404854, &sVar0, 1, 0, 0);
			func_640(51, 0, 0, -1248968496, sVar0, 0, -1, 0);
			func_642(51, 0, 0, sVar0, func_1094(-1248968496, 20), 1, 0);
			func_1128(8);
			break;
		case 1317879106:
			_0x3ea62e56f386c997(1706369307, 1);
			func_1136(1706369307, -832850511, &sVar0, 1, 0, 0);
			func_640(51, 0, 0, 1706369307, sVar0, 0, -1, 0);
			func_642(51, 0, 0, sVar0, func_1094(1706369307, 20), 1, 0);
			func_1128(64);
			break;
		case 1062444751:
			_0x3ea62e56f386c997(1520110311, 1);
			func_1136(1520110311, -100913452, &sVar0, 1, 0, 0);
			func_640(51, 0, 0, 1520110311, sVar0, 0, -1, 0);
			func_642(51, 0, 0, sVar0, func_1094(1520110311, 20), 1, 0);
			func_1128(512);
			break;
		case 754186760:
			_0x3ea62e56f386c997(-1992824800, 1);
			func_347(438, 0);
			func_1136(-1992824800, 905173572, &sVar0, 1, 0, 0);
			func_640(51, 0, 0, -1992824800, sVar0, 0, -1, 0);
			func_642(51, 0, 0, sVar0, func_1094(-1992824800, 20), 1, 0);
			func_1128(32768);
			break;
		default:
			func_347(439, 0);
			break;
	}
}

void func_669()
{
	if (chal_get_num_ranks_completed(-1278339625) < 2)
	{
		chal_add_goal_progress_int(-1278339625, -1316535105, 1);
	}
}

void func_670(int iParam0, int iParam1)
{
	iVar1 = 0;
	if (func_20() == -1)
	{
		if (!func_634(43))
		{
			if (iParam0 == 281887510)
			{
				func_347(348, 0);
			}
			else if (iParam0 == -164081697)
			{
				func_347(350, 0);
			}
			else if (iParam0 == -1161319399)
			{
				func_347(352, 0);
			}
			else if (iParam0 == 728781265)
			{
				func_347(400, 0);
			}
		}
		else if (func_644(iParam0, 412399755))
		{
			func_1138(-1791518714);
			if (func_1139() == 0)
			{
				func_389(0, 10);
				iVar1 = func_1140(iParam0, iParam1, 1);
				if (((iParam0 == 281887510 || iParam0 == -164081697) || iParam0 == -1161319399) || iParam0 == 728781265)
				{
					if (func_1141(iParam0) < func_1142(iParam0))
					{
						func_640(43, iParam0, iParam1, -1791518714, iVar1, 0, -1, 0);
						func_642(43, 0, 0, iVar1, 30, 1, 0);
					}
				}
			}
		}
		if (!func_634(44))
		{
			if (iParam0 == -222563712)
			{
				func_347(354, 0);
			}
			else if (iParam0 == 1794857344)
			{
				func_347(399, 0);
			}
			else if (iParam0 == 1952409553)
			{
				func_347(401, 0);
			}
		}
		else if (func_644(iParam0, 709057512))
		{
			func_1138(-2087881550);
			if (func_1139() == 1)
			{
				func_389(0, 10);
				iVar1 = func_1140(iParam0, iParam1, 2);
				if ((iParam0 == -222563712 || iParam0 == 1794857344) || iParam0 == 1952409553)
				{
					if (func_1141(iParam0) < func_1142(iParam0))
					{
						func_640(43, iParam0, iParam1, -2087881550, iVar1, 0, -1, 0);
						func_642(43, 0, 0, iVar1, 37, 1, 0);
					}
				}
			}
		}
		if (!func_634(45))
		{
			if (iParam0 == 2116770557)
			{
				func_347(359, 0);
			}
			else if (iParam0 == -651064726)
			{
				func_347(394, 0);
			}
			else if (iParam0 == -404270094)
			{
				func_347(395, 0);
			}
			else if (iParam0 == 2093126853)
			{
				func_347(398, 0);
			}
		}
		else if (func_644(iParam0, -1478961327))
		{
			func_1138(1908068621);
			if (func_1139() == 2)
			{
				func_389(0, 10);
				iVar1 = func_1140(iParam0, iParam1, 4);
				if (iParam0 == 2116770557)
				{
					if (!func_1143(_0x126cbebba46693cf(iVar0, 2114735110, 0)) >= 25)
					{
						func_1144(_0x126cbebba46693cf(iVar0, 2114735110, 0), 1);
						func_1092(48);
					}
					if (func_1141(iParam0) < func_1142(iParam0))
					{
						func_640(43, iParam0, iParam1, 1908068621, iVar1, 0, -1, 0);
						func_642(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
				else if ((iParam0 == -651064726 || iParam0 == -404270094) || iParam0 == 2093126853)
				{
					if (func_1141(iParam0) < func_1142(iParam0))
					{
						func_640(43, iParam0, iParam1, 1908068621, iVar1, 0, -1, 0);
						func_642(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
			}
		}
		if (!func_634(46))
		{
			if (iParam0 == 2085530337)
			{
				func_347(356, 0);
			}
			else if (iParam0 == -150591160)
			{
				func_347(402, 0);
			}
			else if (iParam0 == -323969289)
			{
				func_347(404, 0);
			}
			else if (iParam0 == 1504361882)
			{
				func_347(406, 0);
			}
		}
		else if (func_644(iParam0, -1238404098))
		{
			func_1138(1611247019);
			if (func_1139() == 3)
			{
				func_389(0, 10);
				iVar1 = func_1140(iParam0, iParam1, 8);
				if (((iParam0 == 2085530337 || iParam0 == -150591160) || iParam0 == -323969289) || iParam0 == 1504361882)
				{
					if (func_1141(iParam0) < func_1142(iParam0))
					{
						func_640(43, iParam0, iParam1, 1611247019, iVar1, 0, -1, 0);
						func_642(43, 0, 0, iVar1, 50, 1, 0);
					}
				}
			}
		}
		if (!func_634(47))
		{
			if (iParam0 == -1521783510)
			{
				func_347(396, 0);
			}
			else if (iParam0 == 1714875242)
			{
				func_347(397, 0);
			}
			else if (iParam0 == 927763737)
			{
				func_347(405, 0);
			}
			else if (iParam0 == 1019229063)
			{
				func_347(403, 0);
			}
		}
		else if (func_644(iParam0, 1160548794))
		{
			func_1138(1319635688);
			if (func_1139() == 4)
			{
				func_389(0, 10);
				iVar1 = func_1140(iParam0, iParam1, 16);
				if (((iParam0 == -1521783510 || iParam0 == 1714875242) || iParam0 == 927763737) || iParam0 == 1019229063)
				{
					if (func_1141(iParam0) < func_1142(iParam0))
					{
						func_640(43, iParam0, iParam1, 1319635688, iVar1, 0, -1, 0);
						func_642(43, 0, 0, iVar1, 25, 1, 0);
					}
				}
			}
		}
	}
}

void func_671(int iParam0)
{
	if (iParam0 == 2116770557)
	{
		if (!func_1143(_0x126cbebba46693cf(iVar0, 2114735110, 0)) >= 25)
		{
			func_1144(_0x126cbebba46693cf(iVar0, 2114735110, 0), 1);
			func_1092(48);
		}
	}
}

void func_672(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar0 = _0x126cbebba46693cf(iVar1, 678508515, -1160144609);
		if (func_369(func_1145(iVar0, 10), 1, 0))
		{
			if (bParam2)
			{
				func_1146(iParam0, iVar0, sVar2, iParam1, bParam2);
			}
			else
			{
				func_1147(iParam0, iVar0, bParam3);
			}
		}
		iVar1++;
	}
}

void func_673(int iParam0, int iParam1, int iParam2)
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
				func_664(0, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, iVar0);
				return;
			}
		}
	}
	switch (iParam0)
	{
		case 489075255:
			func_664(-949580860, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1394529493:
			func_664(-1171997683, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1262623627:
			func_664(-2140931002, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1124867377:
			func_664(-1116228267, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1790920086:
			func_664(2112896861, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -2001202686:
			func_664(-1915150712, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1111063991:
			func_664(994220262, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1576210101:
			func_664(-1388440107, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 675090918:
			func_664(-1531790128, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 355838765:
			func_664(1351791770, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -343824903:
			func_664(-161493966, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1142684684:
			func_664(668131102, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1243851340:
			if (!func_1148())
			{
				func_664(1330954593, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			}
			break;
		case -525490740:
			func_664(817681514, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1736635264:
			func_664(1404311868, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1302860970:
			func_664(-175152067, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -1027115192:
			func_664(-526915387, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -1064332555:
			func_664(101362741, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -1954478446:
			func_664(1458818027, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -518592739:
			func_664(-1957208512, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -2010073778:
			func_664(2066857461, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -700133011:
			func_664(803940201, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -1415414735:
			func_664(-1717765429, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case 2045548742:
			func_664(1379920914, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case 830381058:
			func_664(447209691, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
	}
}

void func_674(int iParam0)
{
	if (func_634(41))
	{
		func_347(363, 0);
	}
	else
	{
		func_347(362, 0);
	}
	switch (iParam0)
	{
		case 323124696:
			func_1149(-1865241121);
			func_1150(-642026005);
			func_1151(-642026005);
			func_389(0, 10);
			break;
		case -2108314374:
			func_1149(2117142684);
			func_1150(-940584364);
			func_1151(-940584364);
			func_389(0, 10);
			break;
		case -1193798153:
			func_1149(-1409326024);
			func_1150(1972645282);
			func_1151(1972645282);
			func_389(0, 10);
			break;
		case -787702678:
			func_1149(-641744968);
			func_1150(1667205433);
			func_1151(1667205433);
			func_389(0, 10);
			break;
		case -804542901:
			func_1149(-946988203);
			func_1150(1362715885);
			func_1151(1362715885);
			func_389(0, 10);
			break;
		case -1696275132:
			func_1149(-646136018);
			func_1150(1053540370);
			func_1151(1053540370);
			func_389(0, 10);
			break;
		case -161595323:
			func_1149(-955835837);
			func_1150(-1100103852);
			func_1151(-1100103852);
			func_389(0, 10);
			break;
		case -1114363619:
			func_1149(-179276075);
			func_1150(-1409869209);
			func_1151(-1409869209);
			func_389(0, 10);
			break;
		case -368407134:
			func_1149(-492711560);
			func_1150(-1760235357);
			func_1151(-1760235357);
			func_389(0, 10);
			break;
		case 1997759228:
			func_1149(1764383959);
			func_1150(-138366827);
			func_1151(-138366827);
			func_389(0, 10);
			break;
		case 1265573293:
			func_1149(317501533);
			func_1150(-1261163843);
			func_1151(-1261163843);
			func_389(0, 10);
			break;
		case -1030441283:
			func_1149(817753087);
			func_1150(-963523016);
			func_1151(-963523016);
			func_389(0, 10);
			break;
		case -1490884871:
			func_1149(576606016);
			func_1150(560825326);
			func_1151(560825326);
			func_389(0, 10);
			break;
		case -395458616:
			func_1149(814934957);
			func_1150(858269539);
			func_1151(858269539);
			break;
	}
}

void func_675(int iParam0, int iParam1)
{
	func_1152(iParam0, iParam1, &uVar0);
}

int func_676(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	if (iParam3 == -358215195)
	{
		Var0 = { func_735(iParam1, 1, 0) };
		iParam3 = func_736(Var0.f_4);
		if (iParam3 == -358215195)
		{
			return 0;
		}
	}
	if (!func_1153(iParam1, iParam2, func_723(iParam3, 1), bParam4, bParam9))
	{
		return 0;
	}
	func_1154(1, (func_20() == -1 && bParam5), 1);
	switch (iParam3)
	{
		case 1145151482:
		case 1742327865:
			if (bParam8 && iParam1 != &Global_1946804->f_57[func_723(iParam3, 1)])
			{
				func_734(31, 0, 0, 0, 0);
			}
			break;
		case 1108822547:
			if (func_1155(32768) && iParam1 != &Global_1946804->f_57[func_723(iParam3, 1)])
			{
				func_1156();
				func_734(22, iParam3, 256, 0, 0);
			}
			clear_ped_damage_decal_by_zone(iParam0, 2, "ALL");
			clear_ped_blood_damage_by_zone(iParam0, 2);
			break;
	}
	if (!bParam6)
	{
		if (bParam7)
		{
			func_734(22, iParam3, 0, 0, 0);
		}
		return 1;
	}
	iVar5 = func_1157(iParam3);
	if (is_ped_a_player(iParam0))
	{
		func_734(19, 0, iVar5, 0, 0);
		if ((iParam3 == 1742327865 || iParam3 == 1108822547) || iParam3 == 1145151482)
		{
			func_1158(0);
			func_1159(36, 0, 0);
		}
	}
	else
	{
		iVar5 |= 1;
		func_734(19, 0, iVar5, iParam0, 0);
	}
	return 1;
}

bool func_677(int iParam0, bool bParam1)
{
	Var3.f_9 = -1591664384;
	bVar17 = false;
	*iParam0 = 0;
	iVar18 = func_1118(get_player_ped(get_player_index()), 2, 1, 0);
	iVar19 = func_1118(get_player_ped(get_player_index()), 3, 1, 0);
	if (func_1160("ALL WEAPONS", &iVar0, &iVar1, -1591664384, 0))
	{
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (func_1161(&Var3, iVar2, iVar0, iVar1))
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
						func_1162(iVar0);
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

void func_678()
{
	_0x11a7ff918ef6bc66(player_id(), (1f - Global_40.f_11095.f_60));
}

void func_679()
{
	fVar0 = Global_40.f_11095.f_62;
	fVar1 = (Global_40.f_11095.f_62 + Global_40.f_11095.f_61);
	_0x497a6539bb0e8787(player_id(), (1f - fVar0), (1f - fVar1));
}

void func_680()
{
	_0xe0d6c2a146a5c993(player_id(), (1f / (1f + Global_40.f_11095.f_58)));
}

void func_681()
{
	_0xb427911ea6dffef3(player_id(), (1f - Global_40.f_11095.f_63));
}

void func_682()
{
	func_1163();
	func_1164();
	func_1165();
}

void func_683(int iParam0, int iParam1, bool bParam2)
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

void func_684(int iParam0, bool bParam1)
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
	func_1102(_create_var_string(2, sVar1), _create_var_string(2, sVar2), get_hash_key("toast_log_blips"), get_hash_key("BLIP_RC_TREASURE_HUNTER"), 1433015236, _create_var_string(2, sVar3), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
}

void func_685(int iParam0)
{
	Global_40.f_12004.f_7 = (Global_40.f_12004.f_7 || iParam0);
}

void func_686(int iParam0)
{
	Global_40.f_12004.f_8 = (Global_40.f_12004.f_8 || iParam0);
}

void func_687(int iParam0)
{
	Global_40.f_12004.f_9 = (Global_40.f_12004.f_9 || iParam0);
}

void func_688(int iParam0)
{
	Global_40.f_12004.f_10 = (Global_40.f_12004.f_10 || iParam0);
}

void func_689(int iParam0)
{
	Global_40.f_12004.f_11 = (Global_40.f_12004.f_11 || iParam0);
}

void func_690(int iParam0)
{
	Global_40.f_12004.f_12 = (Global_40.f_12004.f_12 || iParam0);
}

int func_691(int iParam0)
{
	if (!func_624(iParam0, 0))
	{
		return 0;
	}
	return iParam0;
}

void func_692(int iParam0, int iParam1, bool bParam2)
{
	func_730(iParam0, &iVar0, &iVar1);
	if (!func_731(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_1166(iParam0, 1024))
	{
		return;
	}
	func_732(iVar0, iVar1);
	Global_1905944->f_22[iParam0]->f_3[0] = iParam1;
	Global_1905944->f_22[iParam0]->f_3[0]->f_1 = 2;
}

void func_693(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	func_730(iParam0, &iVar0, &iVar1);
	if (!func_731(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_1166(iParam0, 1024))
	{
		return;
	}
	func_732(iVar0, iVar1);
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

int func_694()
{
	iVar0 = _0x5461c821d00fe15a(-2076669067, 0);
	if (iVar0 == func_1090())
	{
		return func_695();
	}
	iVar4 = (func_1090() - iVar0);
	iVar5 = get_random_int_in_range(0, iVar4);
	iVar2 = 0;
	while (iVar2 < func_1090())
	{
		iVar1 = _0x126cbebba46693cf(iVar2, -2076669067, 0);
		if (!func_1167(iVar1))
		{
			if (iVar5 == iVar3)
			{
				return func_1091(iVar1);
			}
			iVar3++;
		}
		iVar2++;
	}
	return 0;
}

int func_695()
{
	iVar0 = get_random_int_in_range(0, func_1090());
	return func_1091(_0x126cbebba46693cf(iVar0, -2076669067, 0));
}

void func_696(int iParam0)
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

bool func_697(int iParam0, int iParam1, int iParam2)
{
	if (!func_624(iParam0, 0))
	{
		return false;
	}
	if (iParam1 < 1)
	{
		return false;
	}
	Var0 = { func_735(iParam0, 0, 1) };
	Var5 = { func_1112(iParam0, Var0, Var0.f_4, 0) };
	return func_1168(iParam0, &Var5, &Var0, iParam1, iParam2, 0);
}

void func_698(int iParam0)
{
	if (func_20() != -1)
	{
		return;
	}
	switch (func_648(iParam0))
	{
		case 81053684:
			if (iParam0 == -1623728698 && func_1169(81053684, 0) <= 0)
			{
				func_734(32, iParam0, 0, 0, 0);
			}
			break;
		case -2061583405:
			if (iParam0 == -1535516064 || iParam0 == -763730846)
			{
				func_734(32, iParam0, 0, 0, 0);
			}
			break;
		case -999503751:
			iVar0 = func_1170(iParam0);
			if (func_1171(iVar0))
			{
				func_1172(iVar0, (iVar0 >= 0 && iVar0 <= 5), 1);
			}
			else
			{
				func_734(30, iParam0, 0, 0, 0);
			}
			if (func_725() == -2125499975 || func_725() == -449205311)
			{
				switch (iParam0)
				{
					case 624063935:
					case 1160643979:
					case 1661121390:
						func_734(32, iParam0, 0, 0, 0);
						break;
				}
			}
			else if (func_725() == 1160113249)
			{
				switch (iParam0)
				{
					case -361635024:
						func_734(32, iParam0, 0, 0, 0);
						break;
				}
			}
			break;
		case -525676072:
			if (!func_1173(-525676072, 0))
			{
				if (func_1174(-525676072, &iVar1))
				{
					func_734(33, iVar1, 0, 0, 0);
				}
			}
			func_734(32, iParam0, 0, 0, 0);
			break;
	}
	if ((iParam0 == 899611344 || iParam0 == -1515874150) || iParam0 == -1185145312)
	{
		if (!func_1175(99217379))
		{
			func_676(Global_35, iParam0, 0, 99217379, 1, 1, 1, 0, 1, 1);
		}
		func_647(24);
		if (func_677(&iVar2, 0))
		{
			func_653(iVar2, 0, 0, 1, 3, 0, 752097756, 0);
		}
	}
}

void func_699(int iParam0)
{
	if (func_644(iParam0, 943695443))
	{
		func_1176(0, iParam0);
	}
	else if (func_644(iParam0, -2096528786))
	{
		func_1176(1, iParam0);
	}
	else if (func_644(iParam0, -1094167013))
	{
		func_1176(2, iParam0);
	}
	else if (func_644(iParam0, 1936654645))
	{
		func_1176(3, iParam0);
	}
	else if (func_644(iParam0, 1306489306))
	{
		func_1176(4, iParam0);
	}
	else if (func_644(iParam0, 435762317))
	{
		func_1176(5, iParam0);
	}
	else if (func_644(iParam0, 1259363210))
	{
		func_1176(6, iParam0);
	}
	else if (func_644(iParam0, 881398259))
	{
		func_1176(7, iParam0);
	}
	else if (func_644(iParam0, -541549214))
	{
		func_1176(8, iParam0);
	}
	else if (func_644(iParam0, 130796156))
	{
		func_1176(-1, iParam0);
	}
}

int func_700(int iParam0, int iParam1)
{
	Var4.f_1 = 10;
	func_1177(&Var4, 1356624740);
	return func_1178(iParam0, &Var4, &uVar0, iParam1);
}

struct<2> func_701(int iParam0)
{
	if (!func_624(iParam0, 0))
	{
		return Var0;
	}
	if (func_644(iParam0, -305066475))
	{
		if (func_20() == -1)
		{
			if (func_644(iParam0, -537818634))
			{
				return func_94(189951448);
			}
			else
			{
				return func_94(1176172851);
			}
		}
	}
	else if (func_644(iParam0, -537818634))
	{
		return func_94(-963660207);
	}
	if (func_644(iParam0, 2084895747))
	{
		return func_94(1694039471);
	}
	return Var2;
}

void func_702(int iParam0)
{
	switch (iParam0)
	{
		case 236757114:
			if (func_20() == -1)
			{
				if (func_349((*Global_1835011)[4]->f_1, 1))
				{
					func_347(109, 1);
				}
			}
			break;
	}
}

void func_703(int iParam0, char* sParam1)
{
	sVar0 = func_1180(func_1179(0));
	func_754(_create_var_string(38, "ITEM_CAUGHT_PUMP", sParam1, sVar0), "inventory_items", func_1181(iParam0), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

void func_704(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (iParam0 == 1662813436)
	{
		return;
	}
	if (!func_624(iParam0, 0))
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
	if (!func_1182())
	{
		func_1183(iParam0, iParam1, bParam2, bParam4);
		return;
	}
	bVar0 = false;
	iVar1 = absi(iParam1);
	StringCopy(&cVar2, func_1184(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
	if (iParam1 > 0)
	{
	}
	else
	{
		if (bParam3 || bParam4)
		{
			StringCopy(&cVar2, func_1184(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
		}
		else if (bParam2 && func_645(iParam0, 2097152))
		{
			StringCopy(&cVar2, "ITEM_READ_PUMP_MULT", 32);
		}
		bVar0 = true;
	}
	iVar6 = func_643(iParam0);
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
	else if (!func_1185(iParam0, &Var7, iVar11, iVar10, 0, -401018458))
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
	sVar15 = func_1186(_create_var_string(10, &cVar2, _create_var_string(0, func_691(iParam0)), iVar1), iVar12);
	if (((((iParam1 == 1 || func_644(iParam0, 1443104131)) || iParam0 == -885810591) || iParam0 == -1424823393) || iParam0 == 1463786584) || iParam0 == 1358243310)
	{
		sVar15 = _create_var_string(0, func_691(iParam0));
	}
	func_754(sVar15, Var7.f_1, get_hash_key(Var7), iVar14, iVar12, "Transaction_Feed_Sounds", sVar13, 0, 1);
}

int func_705(int iParam0, int iParam1)
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

struct<10> func_706(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
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

bool func_707(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, int iParam10, int iParam11, int iParam12)
{
	*iParam10 = _item_database_create_item_collection(&uParam0, iParam11, iParam12);
	if (*iParam10 >= 0)
	{
		return true;
	}
	return false;
}

int func_708(int iParam0, int iParam1)
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

bool func_709(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!func_624(iParam0, 0))
	{
		return false;
	}
	if (iParam1 != 0 && !func_1187(iParam0, iParam1, 1))
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
				if (Var2.f_2 == 1644203656 && func_1187(iParam0, Var2, 1))
				{
					if (func_1188(iParam0, Var2))
					{
						bVar0 = true;
					}
				}
			}
			iVar49++;
		}
	}
	else if (func_1188(iParam0, iParam1))
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		if (!bParam2)
		{
			func_347(206, 0);
		}
	}
	if (bParam3)
	{
		if (!func_221(0, 0, 1))
		{
			func_389(1, 5);
		}
	}
	if (bVar0)
	{
		return true;
	}
	return false;
}

int func_710(int iParam0)
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

void func_711(int iParam0)
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
		func_347(iVar0, 0);
	}
}

void func_712()
{
	bVar0 = is_dlc_present(33819255);
	if (!bVar0)
	{
		if (_unlock_is_unlocked(-121456797))
		{
			_0xe824ce7d13fcb300(2116153146, 0);
			func_1189(0);
			_unlock_set_unlocked(-121456797, false);
			func_1190();
		}
		return;
	}
	if (!func_349((*Global_1835011)[4]->f_1, 1))
	{
		return;
	}
	func_1191();
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
	func_1189(1);
}

void func_713()
{
	if (!func_349((*Global_1835011)[4]->f_1, 1))
	{
		return;
	}
	if (_unlock_is_unlocked(304788622))
	{
		return;
	}
	func_340(1351927599, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
	_unlock_set_unlocked(304788622, true);
	if (_unlock_is_unlocked(-1968398307))
	{
		return;
	}
	_unlock_set_unlocked(-1968398307, true);
}

void func_714()
{
	bVar0 = is_dlc_present(-751383868);
	if (!bVar0)
	{
		if (_unlock_is_unlocked(1244328330))
		{
			func_1192(0);
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
	if (!func_349((*Global_1835011)[4]->f_1, 1))
	{
		return;
	}
	_unlock_set_unlocked(1244328330, true);
	func_1192(1);
}

void func_715()
{
	bVar0 = is_dlc_present(-1499823613);
	if (!bVar0)
	{
		if (_unlock_is_unlocked(398807247))
		{
			func_1193(15000, 0, 0, 0, 1);
			func_1192(0);
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
	if (!func_349((*Global_1835011)[4]->f_1, 1))
	{
		return;
	}
	_unlock_set_unlocked(398807247, true);
	func_305(15000, 0, 1065353216, 1, 0, 0, 1, 752097756);
	func_1192(1);
}

void func_716()
{
	bVar0 = is_dlc_present(-679138445);
	if (bVar0)
	{
		if (_0xf83d3dda4d3c8169(-1491419385) > 0)
		{
			if ((!func_369(1191437462, 1, 0) && !func_215((*Global_1835011)[23]->f_1)) && !Global_43891)
			{
				func_340(1191437462, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			}
			if (!func_1194(1))
			{
				func_688(1);
			}
		}
		if (_0xf83d3dda4d3c8169(1809565830) > 0)
		{
			if ((!func_369(1119149048, 1, 0) && !func_215((*Global_1835011)[23]->f_1)) && !Global_43891)
			{
				func_340(1119149048, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			}
			if (!func_1194(2))
			{
				func_688(2);
			}
		}
		if (_0xf83d3dda4d3c8169(2056119786) > 0 && !func_1194(4))
		{
			func_688(4);
		}
		if (func_1194(0))
		{
			func_1195(0);
		}
	}
	else
	{
		if (_0xf83d3dda4d3c8169(-1491419385) > 0)
		{
			if (func_369(1191437462, 1, 0))
			{
				func_719(1191437462, 1, 1, -142743235, 0);
			}
		}
		if (_0xf83d3dda4d3c8169(1809565830) > 0)
		{
			if (func_369(1119149048, 1, 0))
			{
				func_719(1119149048, 1, 1, -142743235, 0);
			}
		}
		if (func_1194(1))
		{
			func_1195(1);
		}
		if (func_1194(2))
		{
			func_1195(2);
		}
		if (func_1194(4))
		{
			func_1195(4);
		}
		if (!func_1194(0))
		{
			func_688(0);
		}
	}
}

void func_717()
{
	bVar0 = _unlock_is_unlocked(240039223);
	if (!bVar0)
	{
		return;
	}
	if (!func_349((*Global_1835011)[4]->f_1, 1))
	{
		return;
	}
	if (_unlock_is_unlocked(-236259196))
	{
		return;
	}
	Var1 = { func_1196() };
	if (!_0xb881ca836cc4b6d4(&Var1))
	{
		func_651(127400949);
		if (func_653(127400949, 0, 0, 0, 0, 0, 752097756, 0))
		{
			Var1 = { func_1196() };
		}
	}
	if (_0xb881ca836cc4b6d4(&Var1))
	{
		func_1197(-2055673461, Var1, 1423542233);
		func_1197(-202131179, Var1, -1264898804);
		func_1197(2013836545, Var1, 1592019450);
		func_1197(1497476650, Var1, 1117400455);
		func_1197(1063571467, Var1, 1150213537);
		func_1197(2107224237, Var1, 1598825281);
		func_1197(1747981656, Var1, -712527121);
		func_1197(-1371140647, Var1, 454332195);
		func_1197(-19142973, Var1, 256105670);
		func_1197(-2074737817, Var1, -1328061889);
		func_1197(-1114256243, Var1, -782241404);
		func_1197(-1653277288, Var1, 1669853467);
		func_1197(1869398132, Var1, -1559225678);
		func_1197(459868358, Var1, -266425508);
		if (!_0x3ab6c7b0bb0df4b1(Global_35, -1) && !func_29())
		{
			get_current_ped_weapon(Global_35, &iVar15, false, 2, false);
			get_current_ped_weapon(Global_35, &iVar16, false, 0, false);
			if (func_738(iVar16))
			{
				if (iVar16 != 127400949)
				{
					if (_is_weapon_one_handed(iVar16))
					{
						if (func_646(24))
						{
							set_current_ped_weapon(Global_35, iVar16, true, 3, false, false);
						}
						set_current_ped_weapon(Global_35, 127400949, true, 0, false, false);
					}
					else if (_is_weapon_two_handed(iVar16))
					{
						if ((func_646(24) && func_738(iVar15)) && iVar15 != 127400949)
						{
							set_current_ped_weapon(Global_35, iVar15, true, 3, false, false);
						}
						set_current_ped_weapon(Global_35, 127400949, true, 2, false, false);
					}
				}
			}
			else if (!func_738(iVar15))
			{
				set_current_ped_weapon(Global_35, 127400949, true, 2, false, false);
			}
			else if (iVar15 != 127400949)
			{
				if (func_646(24))
				{
					set_current_ped_weapon(Global_35, iVar15, true, 3, false, false);
				}
				set_current_ped_weapon(Global_35, 127400949, true, 2, false, false);
			}
		}
		_unlock_set_unlocked(-236259196, true);
	}
}

void func_718()
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

int func_719(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	if (!func_624(iParam0, 0))
	{
		return 0;
	}
	bVar0 = iParam3 == 562618531;
	bVar1 = iParam3 == 1992602754;
	bVar2 = iParam3 == -1387038764;
	iVar3 = func_1088(iParam0, 1);
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
			func_704(iParam0, -iParam1, bVar0, bVar1, bVar2);
		}
		return 0;
	}
	if (!func_369(iParam0, 1, bParam4))
	{
		return 0;
	}
	Var5 = { func_701(iParam0) };
	if (_stat_id_is_valid(&Var5))
	{
		if ((func_628(iParam0, 0, 0) - iParam1) >= 0)
		{
			_0xbd861ae8a5181ed7(&Var5, iParam1);
		}
		else if ((func_628(iParam0, 0, 0) - iParam1) < 0)
		{
			func_719(iParam0, func_628(iParam0, 0, 0), bParam2, iParam3, bParam4);
			return 0;
		}
	}
	if (func_643(iParam0) == -427144552)
	{
		if (!func_1198(iParam0, iParam1, 0, iParam3))
		{
			return 0;
		}
	}
	else if (!func_1199(iParam0, iParam1, iParam3, bParam2, bParam4))
	{
		return 0;
	}
	if (iParam0 == -569063887)
	{
		Global_1935496->f_20 = 0;
	}
	if (!func_652(0))
	{
		bParam2 = true;
	}
	if (!bParam2 && iParam0 != 1309979101)
	{
		func_704(iParam0, -iParam1, bVar0, bVar1, bVar2);
	}
	func_1200(iParam0, iParam1);
	return 1;
}

bool func_720(int iParam0)
{
	switch (func_648(iParam0))
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

void func_721(int iParam0, bool bParam1, bool bParam2)
{
	switch (func_648(iParam0))
	{
		case -2061583405:
			bVar0 = func_1201(iParam0, &(Global_1946804->f_2657.f_21));
			break;
		case 81053684:
			bVar0 = func_1201(iParam0, &(Global_1946804->f_2657.f_23));
			break;
		case -999503751:
			bVar0 = func_1201(iParam0, &(Global_1946804->f_2657.f_20));
			break;
		case -525676072:
			bVar0 = func_1201(iParam0, &(Global_1946804->f_2657.f_22));
			break;
		case -1719060085:
			bVar0 = func_1201(iParam0, &(Global_1946804->f_2657.f_24));
			break;
		case -413129408:
			bVar0 = func_1201(iParam0, &(Global_1946804->f_2657.f_25));
			break;
	}
	if (!bVar0)
	{
		return;
	}
	if (bParam2)
	{
		func_1202();
	}
	if (bParam1)
	{
		func_1203(0, 0);
	}
}

int func_722(int iParam0)
{
	Var0 = { func_735(iParam0, 1, 0) };
	return func_736(Var0.f_4);
}

int func_723(int iParam0, int iParam1)
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

void func_724(int iParam0)
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
		iVar0 = func_723(iVar1, 1);
		if (iVar0 < 0 || iVar0 >= 39)
		{
		}
		else
		{
			func_1204(Global_1946804->f_1378.f_1[iVar0], 2, 6);
		}
	}
}

int func_725()
{
	return Global_1946804->f_1;
}

bool func_726(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)
{
	Var4 = func_1205(iParam6);
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
		func_1207(uParam0, func_1206(iVar0), 1);
	}
	while (_0xed4413cee1bf142c(&Var4))
	{
		if (!_0x44b3a36933ac009c(&iVar0, &Var4, 1409451727))
		{
		}
		else
		{
			iVar3 = iVar0;
			iVar1 = func_723(iVar3, 1);
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
							if (func_1208(iVar3) && func_1209(&(uParam0->f_1[iVar1]), iVar3, &iVar0))
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
							func_1210(uParam0, &(uParam0->f_1[&Global_1946804->f_2612[iVar1]]), &(Global_1946804->f_2612[iVar1]), 0, 0);
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

Vector3 func_727(int iParam0, int iParam1)
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

int func_728(int iParam0, int iParam1)
{
	vVar0 = { func_727(iParam0, iParam1) };
	return vVar0.x;
}

void func_729(var uParam0, int iParam1, int iParam2)
{
	*Global_26796.f_26[iParam2]->f_1.f_1[iParam1] = { *uParam0 };
	Global_26796.f_26[iParam2]->f_1.f_1[iParam1]->f_2 = (Global_26796.f_26[iParam2]->f_1.f_1[iParam1]->f_2 - Global_26796.f_26[iParam2]->f_1.f_1[iParam1]->f_2 & 1);
}

void func_730(int iParam0, int iParam1, int iParam2)
{
	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

bool func_731(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return false;
	}
	if (func_1211(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_1212(iParam0))
	{
		return false;
	}
	if (func_1213(iParam0))
	{
		return false;
	}
	if ((Global_1898164->f_163 && !func_1166(iParam0, 1)) || func_82(32768))
	{
		if (!func_1166(iParam0, 262144) || !Global_1905944->f_5696)
		{
			return false;
		}
	}
	if (!func_1214())
	{
		return false;
	}
	return true;
}

void func_732(int iParam0, int iParam1)
{
	uVar0 = Global_1905944[iParam0];
	set_bit(&uVar0, iParam1);
	(*Global_1905944)[iParam0] = uVar0;
}

void func_733(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 = (uParam0->f_2 - (uParam0->f_2 && iParam1));
}

void func_734(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (bParam4)
	{
		func_1215(16384);
	}
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	Var0.f_2 = iParam2;
	Var0.f_3 = iParam3;
	func_1216(Var0);
}

struct<5> func_735(int iParam0, bool bParam1, bool bParam2)
{
	Var0 = { func_1217(bParam1) };
	Var0.f_4 = 1084182731;
	switch (func_643(iParam0))
	{
		case -1037537535:
			if (!_inventory_fits_slot_id(iParam0, 1034665895))
			{
				Var0 = { func_1112(889965687, Var0, 1034665895, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, 889965687);
			}
			else
			{
				Var0.f_4 = 1034665895;
			}
			break;
		case -427144552:
			Var0 = { func_1218(bParam1) };
			if (bParam2 && func_1219(iParam0, 1))
			{
				Var5.f_9 = -1591664384;
				if (!func_1110(iParam0, &Var0, 1728382685, 0))
				{
					Var0.f_4 = 1728382685;
				}
				else if (!func_1110(iParam0, &Var0, -649335959, 0))
				{
					Var0.f_4 = -649335959;
				}
				else if (func_1111(iParam0, &Var5, 1728382685))
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
			Var0 = { func_1220(bParam1) };
			switch (func_648(iParam0))
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
			if (func_1221(iParam0, -1823706425))
			{
				Var0 = { func_1112(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, -1838434463);
			}
			else if (func_1221(iParam0, -1483207246))
			{
				Var0 = { func_1112(889965687, Var0, 1034665895, bParam1) };
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
				if (!func_1222(Var0, &Var27, bParam1, 0))
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

int func_736(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (Global_1946804->f_57[iVar0]->f_8 == iParam0)
		{
			return func_1223(iVar0, 1);
		}
		iVar0++;
	}
	return -358215195;
}

void func_737(int iParam0)
{
	func_1204(Global_1946804->f_1497.f_1[func_723(iParam0, 1)], 2, 6);
	func_1204(Global_1946804->f_1378.f_1[func_723(iParam0, 1)], 2, 6);
}

bool func_738(int iParam0)
{
	return (is_weapon_valid(iParam0) && iParam0 != -1569615261);
}

bool func_739(int iParam0)
{
	return iParam0 != 0;
}

int func_740(int iParam0)
{
	iVar0 = -1;
	if (!func_739(iParam0))
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

bool func_741(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

int func_742(int iParam0)
{
	return (shift_right(iParam0, 26) & 31 * func_1224(is_bit_set(iParam0, 31), -1, 1)) + 1898;
}

int func_743(int iParam0)
{
	return shift_right(iParam0, 22) & 15;
}

int func_744(int iParam0)
{
	return shift_right(iParam0, 17) & 31;
}

int func_745(int iParam0)
{
	return shift_right(iParam0, 12) & 31;
}

int func_746(int iParam0)
{
	return shift_right(iParam0, 6) & 63;
}

int func_747(int iParam0)
{
	return shift_right(iParam0, 0) & 63;
}

int func_748(int iParam0, int iParam1)
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

void func_749(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_1225(iParam0, iParam6);
	func_1226(iParam0, iParam5);
	func_1227(iParam0, iParam4);
	func_1228(iParam0, iParam3);
	func_1229(iParam0, iParam2);
	func_1230(iParam0, iParam1);
}

bool func_750(int iParam0)
{
	if (iParam0 == -15)
	{
		return false;
	}
	iVar0 = func_747(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return false;
	}
	iVar1 = func_746(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return false;
	}
	iVar2 = func_745(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return false;
	}
	iVar3 = func_742(iParam0);
	if ((iVar3 <= 0 || iVar3 > 1930) || iVar3 < 1866)
	{
		return false;
	}
	iVar4 = func_743(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return false;
	}
	iVar5 = func_744(iParam0);
	if (iVar5 < 1 || iVar5 > func_748(iVar4, iVar3))
	{
		return false;
	}
	return true;
}

bool func_751(int iParam0, bool bParam1)
{
	return func_1065(func_307(), iParam0, bParam1);
}

void func_752(var uParam0, int iParam1)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

bool func_753(int iParam0, int iParam1)
{
	if (!func_624(iParam0, 0))
	{
		return false;
	}
	if (Global_1935630->f_12)
	{
		return false;
	}
	iVar0 = func_1088(iParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_1160("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_1161(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_738(Var4.f_4))
			{
			}
			else if (_get_ammo_type_for_weapon(Var4.f_4) == iVar0)
			{
				func_1162(iVar1);
				return true;
			}
			iVar3++;
		}
		func_1162(iVar1);
	}
	return false;
}

var func_754(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
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
	func_1231(sParam0, sParam1, iParam2);
	return uVar20;
}

int func_755()
{
	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar2 = func_462(iVar1);
		if (!_unlock_is_visible(func_1232(iVar2)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_756()
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		iVar1 = func_462(iVar0);
		if (!_unlock_is_visible(func_1232(iVar1)))
		{
			_unlock_set_visible(func_1232(iVar1), true);
		}
		iVar0++;
	}
}

void func_757(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_508(iParam0))
		{
			return;
		}
	}
	Global_40.f_4942[iParam0] = (Global_40.f_4942[iParam0] || iParam1);
}

bool func_758()
{
	return (func_222(&Global_1935630, 4096) || _get_number_of_references_of_script_with_name_hash(1637780761) > 0);
}

int func_759(var uParam0, int iParam1, int iParam2, int iParam3)
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
	if (!func_624(iVar0, 0))
	{
		return 0;
	}
	if (!func_1233(iVar0))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	iVar3 = 1;
	func_1234(iVar0, iVar1, &iVar3, 0);
	iVar4 = (iVar2 * iVar3);
	if (func_644(iVar0, 58855631))
	{
		iVar4 = iVar2;
	}
	Var5 = { func_735(iVar0, 0, 1) };
	iVar10 = func_1235(iVar0, &Var5, 0, 0);
	if (iVar10 == 0)
	{
		return 0;
	}
	else if (iVar10 < iVar4)
	{
		iVar2 = ceil((to_float(iVar10) / to_float(iVar3)));
		iVar4 = iVar10;
	}
	iVar11 = (func_1236(iVar0, iVar1, 1, 0, 0) * iVar2);
	if (iVar11 <= 0)
	{
		return 0;
	}
	if (!func_1237(iVar11))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	if (!func_340(iVar0, iVar4, 1, 0, 0, 1248274121, 0, 0, 0, 0))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	func_1193(iVar11, 0, 0, 0, 1);
	*iParam3 = (*iParam3 + iVar11);
	*iParam1 = (*iParam1 + iVar2);
	return 1;
}

var func_760(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
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

void func_761(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (is_string_null_or_empty(sParam1))
	{
		sParam1 = "FEED_MONEY_SPEND";
	}
	func_754(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 1831944558, 1, 859817522, 0, 0, 0, 1);
}

var func_762(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

void func_763(bool bParam0, bool bParam1)
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

void func_764(int iParam0, int iParam1, float fParam2, int iParam3)
{
	iVar0 = floor((to_float(iParam1) * fParam2));
	iVar1 = ((iParam1 - iVar0) / iParam3);
	if (func_1055())
	{
		iVar2 = floor((to_float(iVar1) * 0.1f));
		_uilog_add_total_take_entry(1072517412, 908516622, _create_var_string(2, "MISSION_COMPLETE_TAKE_GANG"), _create_var_string(2, "MISSION_COMPLETE_TAKE_AMOUNT", iVar0), -1689362167);
	}
	else
	{
		_uilog_add_total_take_entry(2067252994, 908516622, _create_var_string(2, "MISSION_COMPLETE_TAKE_GANG"), _create_var_string(2, "MISSION_COMPLETE_TAKE_AMOUNT", iVar0), -1689362167);
	}
	iVar3 = iVar1;
	if (func_1055())
	{
		iVar3 = (iVar3 + iVar2);
	}
	_0xe6dc9b21ac7a8729(func_217(iParam0), iVar3, iVar1, iParam3);
	iVar4 = func_294(iParam0);
	if (func_219(iParam0) != 1 || (iVar4 != 37 && iVar4 != 58))
	{
		_uilog_add_total_take_entry(-1391579956, 1997120069, _create_var_string(2, "MISSION_COMPLETE_TAKE_ARTHUR"), _create_var_string(2, "MISSION_COMPLETE_TAKE_AMOUNT", iVar3), 601389479);
	}
	switch (func_219(iParam0))
	{
		case 1:
			switch (iVar4)
			{
				case 25:
					func_1238(1, iVar1);
					func_1238(8, iVar1);
					func_1238(7, iVar1);
					break;
				case 12:
					func_1238(6, iVar1);
					break;
				case 53:
					func_1238(3, iVar1);
					func_1238(7, iVar1);
					func_1238(4, iVar1);
					break;
				case 20:
					func_1238(8, iVar1);
					break;
				case 19:
					func_1238(1, iVar1);
					func_1238(2, iVar1);
					break;
				case 24:
					func_1238(3, iVar1);
					func_1238(9, iVar1);
					func_1238(20, iVar1);
					break;
				case 28:
					func_1238(1, iVar1);
					break;
				case 34:
					func_1238(23, iVar1);
					func_1238(2, iVar1);
					func_1238(18, iVar1);
					break;
				case 29:
					func_1238(0, iVar1);
					func_1238(9, iVar1);
					break;
				case 37:
					break;
				case 58:
					break;
				case 57:
					func_1238(0, iVar1);
					func_1238(3, iVar1);
					func_1238(2, iVar1);
					func_1238(11, iVar1);
					func_1238(6, iVar1);
					func_1238(25, iVar1);
					func_1238(24, iVar1);
					break;
			}
			break;
		case 8:
			switch (iVar4)
			{
				case 94:
					func_1238(5, iVar1);
					break;
				case 63:
					func_1238(1, iVar1);
					func_1238(3, iVar1);
					break;
				case 37:
					func_1238(23, iVar1);
					break;
				case 116:
					break;
			}
			break;
		case 11:
			if (iParam0 == func_385(0, 10, 11, 2116153146))
			{
				func_1238(7, iVar1);
				func_1238(4, iVar1);
			}
			else if (iParam0 == func_385(0, 7, 11, -379687487))
			{
				func_1238(8, iVar1);
				func_1238(15, iVar1);
			}
			else if (iParam0 == func_385(0, 8, 11, -1386089015))
			{
				func_1238(3, iVar1);
			}
			else if (iParam0 == func_385(0, 11, 11, -1952009645))
			{
				func_1238(6, iVar1);
				func_1238(3, iVar1);
			}
			else if (iParam0 == func_385(0, 12, 11, 2065895756))
			{
				func_1238(9, iVar1);
			}
			break;
	}
	_uilog_set_total_take_summary(_create_var_string(2, "MISSION_COMPLETE_TAKE_TOTAL", iParam1), _create_var_string(2, "MISSION_COMPLETE_TAKE_TOTAL_GANG", func_1239()));
	if (!func_1240(629))
	{
		func_347(629, 0);
	}
}

int func_765(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_3;
	}
	return 0;
}

bool func_766(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 17)
	{
		return false;
	}
	return true;
}

bool func_767(int iParam0, int iParam1, int iParam2)
{
	if (!func_766(iParam0))
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

int func_768()
{
	if (Global_1572887->f_12 == -1)
	{
		return 771;
	}
	return 20001;
}

int func_769(int iParam0, int iParam1, int iParam2)
{
	return ((iParam2 & 31 || shift_left(iParam0 & 1023, 5)) || shift_left(iParam1 & 16383, 15));
}

int func_770(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (!func_1241(iParam2))
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
	if (iParam3 < 0 || iParam3 > func_768())
	{
		return -1;
	}
	iVar0 = func_769(iParam0, iParam1, iParam2);
	iVar1 = iParam3;
	func_540(iVar1, 0);
	func_603(iVar1, 0);
	func_1242(iVar1, 0);
	func_1243(iVar1, 0);
	func_1244(iVar1, iVar0);
	if (iParam4 != 0)
	{
		func_1245(iVar1, iParam4);
	}
	return iVar1;
}

int func_771(int iParam0, bool bParam1, int iParam2)
{
	if (iParam2 != -1)
	{
		return iParam2;
	}
	fVar0 = 1f;
	if (bParam1 && func_369(1811977508, 1, 0))
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
			if (func_624(iVar25, 0) && func_644(iVar25, -1921346699))
			{
				return ceil((IntToFloat(&Var1.f_12[iVar24]) * fVar0));
			}
		}
		iVar24++;
	}
	return 0;
}

void func_772(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

int func_773(int iParam0)
{
	if (!func_214(iParam0))
	{
		return 0;
	}
	cVar0 = func_387(iParam0);
	if (is_string_null_or_empty(&cVar0))
	{
		return 0;
	}
	iVar1 = get_hash_key(&cVar0);
	iVar2 = iVar1;
	return iVar2;
}

bool func_774(int iParam0)
{
	return _0x4dac398297981b87(iParam0);
}

Vector3 func_775(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, bool bParam13)
{
	bVar2 = 9999999f;
	func_1246(&bVar12, &uVar13);
	bVar14 = false;
	if (bVar12)
	{
		if (func_1247() == 0 && !func_1248(0))
		{
			bVar14 = true;
		}
	}
	if (!func_1249(15, &Var15))
	{
		return 0f, 0f, 0f;
	}
	_0x748c5f51a18cb8f0(0);
	Var20 = { Var15 };
	if (bParam7)
	{
		bVar10 = func_1250();
		if (_does_volume_exist(bVar10))
		{
		}
	}
	if (!func_1251(Global_1310720->f_21))
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
			vVar7 = { func_1252(iVar0, iVar1) };
			bVar11 = func_1253(iVar0, iVar1);
			bVar3 = vdist(vParam0, vVar7);
			if (((((bVar3 < bVar2 && bVar3 > bParam10) && !func_421(vVar7)) && func_1254(iVar0, bParam8, iParam12)) && !func_1255(iVar0)) || bVar11)
			{
				if (func_1256(vVar7, iVar0, iVar1, iParam5, iParam6, bVar14, bVar10, bParam9, bParam13))
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

int func_776(vector3 vParam0, bool bParam3)
{
	iVar0 = func_1257(vParam0);
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

void func_777()
{
	disable_script_brain_set(1);
}

void func_778()
{
}

void func_779()
{
	disable_script_brain_set(2);
}

bool func_780(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_781(char* sParam0)
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

void func_782(int iParam0)
{
	if (func_780(iParam0, 1))
	{
		func_1258(1);
	}
}

int func_783()
{
	return -1904156936;
}

bool func_784(int iParam0)
{
	if (!func_214(iParam0))
	{
		return false;
	}
	switch (func_219(iParam0))
	{
		case 1:
			iVar0 = func_294(iParam0);
			return (((((((((((((iVar0 == 38 || iVar0 == 39) || iVar0 == 43) || iVar0 == 0) || iVar0 == 1) || iVar0 == 3) || iVar0 == 4) || iVar0 == 60) || iVar0 == 59) || iVar0 == 77) || iVar0 == 64) || iVar0 == 44) || iVar0 == 42) || iVar0 == 67);
		case 8:
			iVar1 = func_294(iParam0);
			return (((iVar1 == 67 || iVar1 == 82) || iVar1 == 83) || iVar1 == 1);
	}
	return false;
}

int func_785()
{
	return 166188472;
}

int func_786()
{
	return 2015838421;
}

int func_787()
{
	return 207908017;
}

var func_788(var uParam0, char* sParam1, var uParam2, int iParam3, int iParam4)
{
	vVar0.x = iParam3;
	vVar0.f_1 = sParam1;
	vVar0.f_2 = uParam2;
	uVar3 = _0x9f2cc2439a04e7ba(uParam0, &vVar0, iParam4);
	return uVar3;
}

var func_789(var uParam0, char* sParam1, int iParam2, int iParam3)
{
	Var0 = iParam2;
	Var0.f_1 = sParam1;
	uVar3 = _0x815c4065ae6e6071(uParam0, &Var0, iParam3);
	return uVar3;
}

void func_790(var uParam0)
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

int func_791(var uParam0, int iParam1)
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

char* func_792(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return "";
	}
	if (is_entity_a_ped(iParam0))
	{
		return func_1259(get_ped_index_from_entity_index(iParam0));
	}
	else if (is_entity_an_object(iParam0))
	{
		return func_1260(get_object_index_from_entity_index(iParam0));
	}
	else if (is_entity_a_vehicle(iParam0))
	{
		return func_1261(get_vehicle_index_from_entity_index(iParam0));
	}
	return "";
}

int func_793(var uParam0, char* sParam1)
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

int func_794(var uParam0)
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

void func_795(var uParam0, int iParam1)
{
	uParam0->f_2054 = (uParam0->f_2054 || iParam1);
}

void func_796(var uParam0, int iParam1)
{
	uParam0->f_8 = (uParam0->f_8 || iParam1);
}

int func_797()
{
	return Global_1572864->f_8;
}

void func_798(var uParam0, int iParam1)
{
	func_1262(uParam0, iParam1);
	func_1263(uParam0, iParam1, 26);
}

int func_799(var uParam0)
{
	iVar0 = func_195(uParam0);
	if (iVar0 == 0)
	{
		return 1;
	}
	if (iVar0 == 2)
	{
		if (!func_1264(uParam0))
		{
			return 0;
		}
	}
	vVar1 = { func_247(func_33(uParam0)) };
	func_131(vVar1, 100f, 1, 0, 0, 0, 0);
	_0x9851de7aec10b4e1(vVar1, 100f, 1, 0);
	func_1265(&(Local_218[7]), func_931(7, 0, 0), 2, 1073741824);
	if (func_195(uParam0) == 1)
	{
		func_926(0, 0);
	}
	if (func_195(uParam0) == 1)
	{
		func_926(0, 0);
	}
	return 1;
}

bool func_800(var uParam0)
{
	func_1266(uParam0, 32);
	return uParam0->f_607 == uParam0->f_607;
}

bool func_801(var uParam0)
{
	pause_clock(false, 0);
	if (!Local_218[1]->f_3 == 8)
	{
		func_933(uParam0, 1, 7, 0, 1, 1, func_555(8, 3), 1);
		return false;
	}
	func_191(1);
	func_522(47);
	func_522(36);
	func_173(1, 1);
	func_173(2, 1);
	func_482(0, 1);
	if (is_ped_in_vehicle(Global_35, &(iLocal_979[0]), false) && _0x4e76cb57222a00e5(Global_35) == -1)
	{
		_0x31160ec47e7c9549(&(iLocal_979[0]), 1);
	}
	set_vehicle_door_latched(&(iLocal_979[0]), 5, true, true, true);
	func_165(0);
	func_927();
	func_175(1);
	func_1267();
	return uParam0->f_607 == uParam0->f_607;
}

int func_802(var uParam0)
{
	fVar0 = get_distance_between_coords(get_entity_coords(&(iLocal_979[0]), true, false), _0xf70f00013a62f866(Local_141.f_67), true);
	vVar1 = { _0x3e2a25b2416dd67e(Local_141.f_67) };
	fVar4 = func_1268(vVar1.x, vVar1.y);
	fVar5 = (fVar0 / fVar4);
	if (fVar5 < 1.3f)
	{
		disable_control_action(0, 1847550875, false);
		disable_control_action(0, -699865971, false);
		disable_control_action(0, 1708280984, false);
	}
	_0x96722257e5381e00(player_id());
	_0x3852237a3d9df145(0);
	if (func_167(34))
	{
		_0xc9caeaeec1256e54(iVar1958);
	}
	Var6 = { func_931(14, 0, 0) };
	_0xcf213a5fc3abfc08(Var6, Var6.f_1, 10f);
	if (is_entity_in_volume(Global_35, Local_141.f_35, true, 0))
	{
		_0xf45e46deecf7df6e(14336, 0, 0, -1, -1);
		_0xab0d553fe20a6e25(0f);
		set_vehicle_density_multiplier_this_frame(0f);
		set_scenario_ped_density_multiplier_this_frame(0f);
	}
	disable_control_action(0, 1891137604, false);
	func_1269(uParam0);
	func_1270(uParam0);
	func_1271();
	func_1272(uParam0);
	func_1273(uParam0);
	if (!Local_218[7]->f_2 == 28)
	{
		func_1274(uParam0);
	}
	if (!func_167(37) && func_1275(15, 0))
	{
		if (!is_entity_dead(&(iLocal_979[0])))
		{
			if (is_entity_in_volume(&(iLocal_979[0]), Local_141, true, 0))
			{
				if (_0xa2cac9def0195e6f(1))
				{
					func_413(37);
				}
				else
				{
					func_1276(42);
					func_413(37);
				}
			}
		}
	}
	switch (func_1277(uParam0))
	{
		case 0:
			func_944(8);
			func_944(9);
			func_944(10);
			func_944(3);
			func_944(14);
			func_134(uParam0, 1);
			break;
		case 1:
			func_1278();
			if (iVar2504 == 6)
			{
				func_134(uParam0, 4);
			}
			break;
		case 4:
			if (iVar1952 == 9 || iVar1952 == 10)
			{
			}
			else
			{
				if (is_ped_in_vehicle(Global_35, &(iLocal_979[0]), false))
				{
					if (func_1280(func_1279(41)))
					{
						func_1281(Global_35, _0xf70f00013a62f866(Local_141.f_20), 0, 280f, 35f, 0.01f, 0.001f, 1, 1, 1, 0);
					}
					if (is_entity_in_volume(Global_35, Local_141.f_20, true, 0))
					{
						func_1282(64);
						set_player_control(player_id(), false, 256, false);
						func_134(uParam0, 5);
					}
				}
				Jump @947; //curOff = 584
				disable_control_action(0, -17122892, false);
				if (func_167(35))
				{
					func_174(34);
					_0x7c06330bfdda182e(&(iLocal_979[0]));
					_0xeba2081e0a5f4d17(&(iLocal_979[0]));
					func_413(39);
					func_145(uParam0, &(Local_218[16]), "BRT1_ManorGuard4", 0);
					func_944(0);
					set_ped_into_vehicle(&(Local_218[16]), &(iLocal_979[0]), 1);
					func_1283();
					func_1284(&(Local_218[16]), 53, 8f, -2f, -1, 0, 0);
					func_1285(uParam0, 16, 0, 2);
					func_942(16, 63);
					if (does_blip_exist(&(iLocal_1825[3])))
					{
						remove_blip(iLocal_1825[3]);
					}
					iLocal_1825[4] = func_1286(408396114, _0xf70f00013a62f866(Local_141.f_1), 1);
					set_blip_name_from_text_file(&(iLocal_1825[4]), func_1279(7));
					func_1287(1);
					simulate_player_input_gait(player_id(), 2f, 1000, 180f, false, false);
					set_player_control(player_id(), true, 0, false);
					func_522(75);
					func_174(10);
					func_134(uParam0, 6);
				}
				Jump @947; //curOff = 840
				if (!func_167(56))
				{
					if (_0xf94692eb9dc15d74(&(Local_2202[5]), 0) && _0xf94692eb9dc15d74(&(Local_2202[4]), 0))
					{
						func_528(0, 0);
						func_528(1, 0);
						func_528(2, 0);
						func_528(3, 0);
						func_528(5, 0);
						func_528(4, 0);
						func_1276(40);
						func_413(56);
					}
				}
				if (func_1288(uParam0))
				{
					return 1;
				}
			}
			return 0;
			default:
				break;
	}
}

int func_803(var uParam0)
{
	func_1289(0);
	func_522(53);
	func_522(52);
	func_522(51);
	func_522(64);
	remove_vehicle_asset(func_519(18));
	_0xc3896d03e2852236(iVar2022);
	return 1;
}

void func_804(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10)
{
	func_140(uParam0, iParam1, iParam9);
	func_1290(uParam0, iParam1);
	func_1263(uParam0, iParam1, iParam2);
	func_1291(uParam0, &iParam3, iParam1, 0);
	func_1291(uParam0, &iParam4, iParam1, 2);
	func_1291(uParam0, &iParam5, iParam1, 4);
	func_1291(uParam0, &iParam6, iParam1, 5);
	func_1291(uParam0, &iParam7, iParam1, 7);
	func_959(uParam0, iParam1, 0);
	StringCopy(&cVar0, sParam8, 32);
	func_1292(uParam0, iParam1, cVar0);
	func_1293(uParam0, iParam1, iParam10);
}

int func_805(var uParam0)
{
	iVar0 = func_195(uParam0);
	bVar1 = true;
	if (!func_167(38))
	{
		func_1282(func_1294(14));
		func_1282(func_1294(18));
		func_1295(uParam0, 14, func_931(14, 0, 0), 0, 1);
		func_1295(uParam0, 15, func_931(15, 0, 0), 0, 1);
		func_1295(uParam0, 16, func_931(16, 0, 0), 0, 0);
		func_1295(uParam0, 17, func_931(17, 0, 0), 0, 1);
		if (((Local_218[14]->f_3 == 8 && Local_218[15]->f_3 == 8) && Local_218[16]->f_3 == 8) && Local_218[17]->f_3 == 8)
		{
			if (!is_entity_dead(&(Local_218[14])))
			{
				set_ped_config_flag(&(Local_218[14]), 280, true);
				set_ped_config_flag(&(Local_218[14]), 53, true);
			}
			if (!is_entity_dead(&(Local_218[15])))
			{
				func_145(uParam0, &(Local_218[15]), "BRT1_ManorGuard2", 0);
				set_ped_config_flag(&(Local_218[15]), 280, true);
				set_ped_config_flag(&(Local_218[15]), 53, true);
			}
			if (!is_entity_dead(&(Local_218[16])))
			{
				func_145(uParam0, &(Local_218[16]), "BRT1_ManorGuard4", 0);
				set_ped_config_flag(&(Local_218[16]), 280, true);
				set_ped_config_flag(&(Local_218[16]), 53, true);
			}
			if (!is_entity_dead(&(Local_218[17])))
			{
				set_ped_config_flag(&(Local_218[17]), 280, true);
				set_ped_config_flag(&(Local_218[17]), 53, true);
			}
			func_413(38);
			func_944(2);
		}
		else
		{
			bVar1 = false;
		}
	}
	if (!func_1296(uParam0, 10, 13, 63))
	{
		return 0;
	}
	if (!&iLocal_2497[1] == 7)
	{
		if (!func_1297(uParam0))
		{
			bVar1 = false;
		}
	}
	if (!bVar1)
	{
		return 0;
	}
	func_1298(11);
	func_1298(12);
	func_1298(13);
	if ((!Local_2202[11]->f_1 == 8 || !Local_2202[12]->f_1 == 8) || !Local_2202[13]->f_1 == 8)
	{
		return 0;
	}
	func_175(1);
	func_191(1);
	func_1265(Global_35, func_247(iVar1956), 2, 1073741824);
	func_944(8);
	func_944(1);
	func_944(14);
	if (iVar0 == 1)
	{
		vVar2 = { func_247(iVar1956) };
		_0x9851de7aec10b4e1(vVar2, 100f, 1, 0);
	}
	if (iVar0 == 1 || iVar0 == 2)
	{
		Var6 = Global_35;
		Var6.f_4 = 0;
		Var6.f_1 = 0;
		_0x350e9211074955af(&(iLocal_979[0]), &Var6);
	}
	func_482(0, 1);
	func_1299(10);
	func_173(1, 1);
	func_165(0);
	func_1267();
	return 1;
}

int func_806(var uParam0)
{
	func_1282(65);
	func_1300(0);
	set_ped_max_move_blend_ratio(Global_35, 1f);
	if (!func_195(uParam0) == 1)
	{
		if (!func_1297(uParam0))
		{
			return 0;
		}
	}
	if (!func_167(88))
	{
		func_1301(14, 17, 69);
		func_413(88);
	}
	if (func_195(uParam0) == 0)
	{
		func_1298(10);
		if (Local_2202[10]->f_1 == 10)
		{
			if ((!_is_anim_scene_active(&(Local_2202[10])) && !_0xf94692eb9dc15d74(&(Local_2202[10]), 0)) && !_is_anim_scene_finished(&(Local_2202[10]), false))
			{
				func_1302(uParam0);
				disable_control_action(0, -17122892, false);
				if (_get_anim_scene_time(&(Local_2202[10])) >= (_get_anim_scene_duration(&(Local_2202[10])) - 2f))
				{
					_0xe296208c273bd7f0(floor((2f * 1000f)), -1, 0, 17, 1, 0);
				}
				return 0;
			}
		}
	}
	_0xe296208c273bd7f0(0, -1, 0, 17, 1, 0);
	if (func_195(uParam0) == 1)
	{
		if (!is_entity_dead(&(iLocal_979[0])))
		{
			if (!is_entity_dead(Global_35))
			{
				set_ped_into_vehicle(Global_35, &(iLocal_979[0]), -1);
			}
			if (!is_entity_dead(&(Local_218[6])))
			{
				set_ped_into_vehicle(&(Local_218[6]), &(iLocal_979[0]), 0);
			}
		}
	}
	func_1301(14, 17, 71);
	func_943(iVar1956, 1);
	if (func_167(53))
	{
		func_174(54);
		func_1303(uParam0);
	}
	func_165(0);
	func_1266(uParam0, 32);
	func_1304(uParam0, 1);
	return 1;
}

int func_807(var uParam0)
{
	if (!func_1305())
	{
		return 0;
	}
	func_99(uParam0, 4194304);
	pause_clock(false, 0);
	_0x7c06330bfdda182e(&(iLocal_979[0]));
	set_vehicle_door_control(&(iLocal_979[0]), 5, 0, 0f);
	set_vehicle_door_latched(&(iLocal_979[0]), 5, true, true, false);
	func_135(uParam0, -1);
	if (!iVar1952 == 1)
	{
		func_1287(1);
	}
	func_1301(14, 17, 16);
	if ((get_clock_hours() > 20 || get_clock_hours() < 6) || (get_clock_hours() == 6 && get_clock_minutes() < 55))
	{
		func_413(67);
	}
	func_528(8, 1);
	_0x19c7567d2f2287d6(Local_141.f_48, 7);
	func_1282(func_1306(12));
	func_1282(36);
	iVar0 = 10;
	while (iVar0 <= 13)
	{
		func_1285(uParam0, iVar0, 1, 2);
		iVar0++;
	}
	func_1307(&(Local_141.f_58), -1612834106);
	func_1307(&(Local_141.f_68), -1612834106);
	func_528(9, 0);
	func_528(10, 0);
	func_1308(1);
	return 1;
}

int func_808(var uParam0)
{
	if (func_77() == 105)
	{
		set_all_random_peds_flee_this_frame(player_id());
		if (is_ped_shooting(Global_35))
		{
			Local_985[6]->f_5 = 2;
		}
	}
	if (does_entity_exist(&(Local_1692[5])))
	{
		if (is_entity_visible(&(Local_1692[5])))
		{
			if (!func_1309())
			{
				set_entity_visible(&(Local_1692[5]), false);
			}
		}
		else if (func_1309())
		{
			set_entity_visible(&(Local_1692[5]), true);
		}
	}
	_0x15abd5004cad2d99(0);
	_0x785177e4d57d7389(player_id(), 1352191066, 0, 0, -1);
	_0x785177e4d57d7389(player_id(), 1171995096, 4, 0, -1);
	func_1310();
	func_1311(uParam0);
	if (func_167(94))
	{
		if (func_1275(30, 6))
		{
			if (func_1312(&(iLocal_979[0]), _0xf70f00013a62f866(Local_141.f_20), 1) >= 350f)
			{
				func_174(94);
			}
		}
	}
	if (func_167(67))
	{
		fVar0 = (get_distance_between_coords(get_entity_coords(Global_35, true, false), _0xf70f00013a62f866(Local_141.f_56), true) / get_distance_between_coords(func_178(8, 4), _0xf70f00013a62f866(Local_141.f_56), true));
		fVar0 = func_1313(((fVar0 * -1f) + 1f), 0f, 1f);
		func_1314(6, 55, fVar0, &uLocal_2050);
	}
	disable_control_action(0, 1891137604, false);
	disable_control_action(0, -124244224, false);
	if (!func_167(87))
	{
		if (is_ped_in_vehicle(Global_35, &(iLocal_979[0]), false) && is_ped_in_vehicle(&(Local_218[6]), &(iLocal_979[0]), false))
		{
			set_player_control(player_id(), true, 0, false);
			func_413(87);
		}
	}
	else
	{
		func_1269(uParam0);
		if (!func_167(69))
		{
			func_1272(uParam0);
		}
	}
	func_1315(uParam0);
	func_1316();
	if (!func_167(71))
	{
		func_1317(uParam0);
	}
	func_1298(11);
	func_1298(12);
	func_1298(13);
	if (!func_167(2))
	{
		if (func_1318(get_entity_coords(Global_35, true, false), _0xf70f00013a62f866(Local_141.f_56), 150f, 1))
		{
			func_192(0, 1);
			func_182(1, 0);
		}
	}
	if (!func_167(74))
	{
		if (func_1318(get_entity_coords(Global_35, true, false), _0xf70f00013a62f866(Local_141.f_56), 60f, 1))
		{
			if (func_1296(uParam0, 25, 26, 13))
			{
				if (((!func_1319(1) && !func_1320(1)) && !Local_2202[14]->f_1 == 10) && iVar1952 == 1)
				{
					func_1276(46);
				}
				func_944(4);
				func_944(6);
				func_934(0);
				func_494(349074475, 1, 0f, 0, 0, 0, 0, 0);
				func_494(1614494720, 1, 0f, 0, 0, 0, 0, 0);
				if (!is_sphere_visible(1293.9f, -1296.1f, 77.2f, 0.5f))
				{
					clear_area(1293.9f, -1296.1f, 77.2f, 1f, 1064960);
				}
				func_1307(&(Local_141.f_53), 665633627);
				func_1321(12, 1);
				set_entity_invincible(&(Local_1692[12]), true);
				freeze_entity_position(&(Local_1692[12]), true);
				set_entity_proofs(&(Local_1692[12]), 8, false);
				func_413(74);
			}
		}
	}
	else
	{
		if (!Local_2202[18]->f_1 == 8)
		{
			func_1298(18);
		}
		if (!Local_2202[17]->f_1 == 8)
		{
			func_1298(17);
		}
		if (!Local_2202[19]->f_1 == 8)
		{
			func_1298(19);
		}
		if (!func_1322(66))
		{
			func_1282(66);
		}
		func_1323(uParam0);
		disable_control_action(0, -473983589, false);
	}
	if (!func_167(69))
	{
		if (!is_entity_dead(&(iLocal_979[0])))
		{
			if ((is_entity_in_volume(&(iLocal_979[0]), Local_141.f_56, true, 0) && iVar1952 == 2) && iVar2040 == 14)
			{
				func_942(6, 31);
				func_27(vLocal_1840[9], 0);
				func_494(-1247339802, 1, 0f, 0, 0, 0, 0, 0);
				func_413(69);
				func_173(1, 0);
				func_173(2, 0);
				func_192(0, 0);
				set_current_ped_weapon(Global_35, -1569615261, true, 0, false, false);
				set_current_ped_weapon(Global_35, -1569615261, true, 1, false, false);
				_hide_ped_weapons(Global_35, 2, true);
				if (func_167(21))
				{
					_0x87e6302fc61208cc("BLOCKED_CONTEXTS_SPUR");
					stop_ped_speaking(Global_35, false);
					func_174(21);
				}
				func_1289(9);
				func_1289(10);
				func_944(5);
				func_174(67);
				func_528(14, 1);
				if (_does_anim_scene_exist(&(Local_2202[14])))
				{
					func_528(14, 1);
				}
				func_413(77);
				func_261(0, 0, 0);
				func_134(uParam0, 2);
			}
		}
	}
	else
	{
		if (!func_167(17))
		{
			func_180(1);
		}
		set_ped_reset_flag(Global_35, 108, true);
		if (!func_167(70))
		{
			if (!is_entity_dead(&(iLocal_979[0])))
			{
				vLocal_2027 = { _get_object_offset_from_coords(get_entity_coords(&(iLocal_979[0]), true, false), get_entity_heading(&(iLocal_979[0])), vLocal_2030) };
				if (get_ground_z_for_3d_coord(vLocal_2027, &(vLocal_2027.f_2), false))
				{
					vLocal_2027.f_2 = (vLocal_2027.z + 0.5f);
				}
			}
			_0x541b8576615c33de(Local_141.f_18, vLocal_2027);
			if (does_blip_exist(&(iLocal_1825[7])))
			{
				set_blip_coords(&(iLocal_1825[7]), vLocal_2027);
			}
		}
		if (func_26(vLocal_1840[9]))
		{
			if (func_924(vLocal_1840[9]) >= 6.5f || !func_1324(Global_35, &(iLocal_979[0]), 0))
			{
				if (!does_blip_exist(&(iLocal_1825[7])))
				{
					iLocal_1825[7] = func_1286(408396114, vLocal_2027, 1);
					set_blip_name_from_text_file(&(iLocal_1825[7]), func_1279(10));
				}
			}
			if (func_924(vLocal_1840[9]) >= 16f || !func_1324(Global_35, &(iLocal_979[0]), 0))
			{
				func_599(vLocal_1840[9]);
				func_1325(uParam0, 7);
			}
		}
		func_1298(15);
		func_1298(16);
		func_1326(uParam0);
	}
	func_1327(uParam0);
	func_1270(uParam0);
	if (func_26(vLocal_1840[8]))
	{
		if (!is_entity_dead(Global_35) && !is_entity_dead(&(iLocal_979[0])))
		{
			if (is_ped_in_vehicle(Global_35, &(iLocal_979[0]), false))
			{
				if (func_924(vLocal_1840[8]) >= 10f)
				{
					func_599(vLocal_1840[8]);
					task_leave_vehicle(Global_35, &(iLocal_979[0]), 0, 0);
				}
			}
		}
	}
	if (!is_entity_dead(&(Local_218[2])))
	{
		set_ped_reset_flag(&(Local_218[2]), 53, true);
		set_ped_reset_flag(&(Local_218[2]), 49, true);
	}
	if (!is_entity_dead(&(Local_218[3])))
	{
		set_ped_reset_flag(&(Local_218[3]), 53, true);
		set_ped_reset_flag(&(Local_218[3]), 49, true);
	}
	if (func_167(81) && !func_167(82))
	{
		func_1328();
	}
	if (!func_167(79))
	{
		if (!func_167(78))
		{
			if (!is_entity_dead(Global_35))
			{
				if (is_entity_in_volume(Global_35, Local_141.f_17, true, 0))
				{
					func_1282(16);
					func_1282(14);
					func_1282(15);
					if (func_167(83))
					{
						func_413(78);
					}
					else
					{
						iVar1 = 14;
						while (iVar1 <= 17)
						{
							if (!Local_218[iVar1]->f_2 == 72 && !Local_218[iVar1]->f_2 == 0)
							{
								func_942(iVar1, 72);
							}
							iVar1++;
						}
					}
				}
			}
		}
		else if ((func_1322(16) && func_1322(14)) && func_1322(15))
		{
			if (func_1296(uParam0, 28, 41, 6157) && func_1296(uParam0, 27, 27, 6157))
			{
				func_413(79);
				func_188(1, 1, 1, 1, 0);
			}
		}
	}
	else if (!func_167(60))
	{
		if (!func_167(86))
		{
			if (!is_entity_dead(Global_35))
			{
				if (is_entity_in_volume(Global_35, Local_141.f_31, true, 0))
				{
					func_413(86);
				}
			}
		}
		else
		{
			func_1329(uParam0);
		}
	}
	if (!func_167(68) && !func_167(83))
	{
		if (iVar2040 == 14)
		{
			if (!is_entity_dead(&(Local_218[15])))
			{
				if (func_914(Global_35, &(Local_218[15]), 1, 1) <= 30f)
				{
					func_1276(50);
					func_413(68);
				}
			}
		}
	}
	if (func_167(69))
	{
		disable_control_action(0, -1404316431, false);
		if (func_167(70))
		{
			set_ped_max_move_blend_ratio(Global_35, 1f);
		}
	}
	if (func_167(38) && !func_167(83))
	{
		func_1302(uParam0);
	}
	if (func_167(73))
	{
		if (is_valid_interior(get_interior_from_entity(Global_35)))
		{
			disable_control_action(0, 782960533, false);
			disable_control_action(0, -719620017, false);
		}
		func_1282(func_1306(22));
		if (func_1322(func_1306(22)))
		{
			if (!does_entity_exist(&(Local_1692[22])))
			{
				func_1321(22, 1);
			}
			if (!does_entity_exist(&(Local_1692[23])))
			{
				func_1321(23, 1);
			}
			if (!does_entity_exist(&(Local_1692[24])))
			{
				func_1321(24, 1);
			}
			if (!does_entity_exist(&(Local_1692[25])))
			{
				func_1321(25, 1);
			}
			func_1298(21);
		}
	}
	if (func_167(70))
	{
		if (!is_entity_dead(Global_35))
		{
			if (func_1312(Global_35, 1330.6f, -1367.9f, 80.5f, 1) < 1f)
			{
				fVar2 = 0.4f;
			}
			else
			{
				fVar2 = 0.6f;
			}
			set_ped_capsule(Global_35, fVar2);
		}
		func_1330();
		if (!is_entity_dead(Global_35))
		{
			func_1298(16);
			if (_does_anim_scene_exist(&(Local_2202[16])) && _is_anim_scene_started(&(Local_2202[16]), false))
			{
				if (Local_2202[16]->f_1 == 10 && _0xb89fcff19dafff28(&(Local_2202[16]), "player_zero"))
				{
					func_528(16, 1);
				}
				else if (!(Local_2202[20]->f_1 == 10 && _0x8d81e7824b7753f7(&(Local_2202[16]), "s_brt1_mcs2_leadin", 1)))
				{
					func_1331();
					fVar3 = vmag2(get_entity_velocity(Global_35, -1));
					if (func_167(89))
					{
						if (fVar3 <= 0.01f)
						{
							if (_0x23e33cb9f4a3f547(&(Local_2202[16]), "pbl_Idle"))
							{
								_set_anim_scene_playback_list_bool(&(Local_2202[16]), "pbl_Idle", true);
								func_174(89);
								func_413(90);
							}
						}
					}
					else if (func_167(90))
					{
						if (fVar3 > 0.01f)
						{
							if (_0x23e33cb9f4a3f547(&(Local_2202[16]), "pbl_action"))
							{
								_set_anim_scene_playback_list_bool(&(Local_2202[16]), "pbl_action", true);
								func_174(90);
								func_413(89);
							}
						}
					}
				}
			}
			else if (Local_2202[16]->f_1 == 8)
			{
				if ((!is_ped_ragdoll(Global_35) && !is_ped_falling(Global_35)) && !_0x3e592d0486dec0f6(Global_35))
				{
					func_1332(16);
				}
			}
		}
	}
	if (func_167(96))
	{
		if (!&iLocal_2497[2] == 7)
		{
			func_1333(uParam0);
		}
		else
		{
			func_150(uParam0, (20f * 4f));
			func_149(uParam0, (15f * 4f));
			func_920(uParam0, 4194304);
			func_174(96);
		}
	}
	switch (func_1277(uParam0))
	{
		case 0:
			func_944(9);
			func_944(9);
			func_944(10);
			func_944(11);
			func_944(3);
			func_1325(uParam0, 5);
			func_1276(49);
			func_1335(func_12(18), func_1334(1108822547));
			func_134(uParam0, 1);
			break;
		case 1:
			if (is_entity_in_volume(Global_35, Local_141.f_59, true, 0))
			{
				if (is_ped_shooting(Global_35))
				{
					Local_985[2]->f_5 = 4;
				}
			}
			if (!func_1336(func_1279(49)) && !func_1336(func_1279(49)))
			{
				if (!func_167(77))
				{
					func_1337();
				}
			}
			if (!func_167(80))
			{
				if (!_does_anim_scene_exist(&(Local_2202[13])) || _0xf94692eb9dc15d74(&(Local_2202[13]), 0))
				{
					func_175(0);
					func_189(1, 1);
					func_413(80);
				}
			}
			if (is_entity_in_volume(&(iLocal_979[0]), Local_141.f_60, true, 0))
			{
				if (is_ped_in_vehicle(Global_35, &(iLocal_979[0]), false))
				{
					func_1281(Global_35, _0xf70f00013a62f866(Local_141.f_56), 0, 1000f, 35f, 5f, 1f, 1, 1, 1, 0);
				}
			}
			break;
		case 2:
			func_1338(5);
			_0xb832f1a686b9b810(Global_35, true, 1);
			_0xdd1232b332cbb9e7(3, 1, 0);
			set_gps_custom_route_render(false, 3, 30);
			clear_gps_custom_route();
			bring_vehicle_to_halt(&(iLocal_979[0]), 2f, -1, false);
			if (!is_entity_dead(&(Local_218[2])))
			{
				task_stand_still(&(Local_218[2]), -1);
			}
			if (!is_entity_dead(&(Local_218[3])))
			{
				task_stand_still(&(Local_218[3]), -1);
			}
			func_27(vLocal_1840[8], 1);
			set_vehicle_is_considered_by_player(&(iLocal_979[0]), false);
			remove_blip(iLocal_1825[5]);
			_0xb832f1a686b9b810(Global_35, true, 1);
			func_169(6, 0);
			func_134(uParam0, 3);
			break;
		case 3:
			if (!Local_218[4]->f_2 == 1 || !Local_218[5]->f_2 == 1)
			{
				func_1296(uParam0, 4, 5, 16385);
			}
			func_1339();
			disable_control_action(0, -209515122, false);
			func_554(1);
			func_1340();
			if (!func_167(72))
			{
				if (!is_ped_in_any_vehicle(Global_35, false))
				{
					func_1341(0);
					func_1342(0);
					func_413(72);
				}
			}
			_0xb832f1a686b9b810(Global_35, true, 1);
			if (is_entity_in_volume(Global_35, Local_141.f_18, true, 0))
			{
				if (!func_10(iVar2174))
				{
					iLocal_2177 = func_1344(func_1279(5), func_1343(0), 5, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, 1704213876, 0);
					func_1345(iVar2174, &(Local_1692[13]), 0, 1, -1);
				}
				_uiprompt_set_active_group_this_frame(_uiprompt_get_group_id_for_target_entity(&(Local_1692[13])), func_1279(6), 1, 0, 0, 0);
				if (func_1346(iVar2174, 1))
				{
					set_current_ped_weapon(Global_35, -1569615261, true, 0, false, false);
					set_current_ped_weapon(Global_35, -1569615261, true, 1, false, false);
					task_swap_weapon(Global_35, 1, 1, 0, 0);
					set_anim_scene_origin(&(Local_2202[15]), get_entity_coords(&(iLocal_979[0]), true, false), get_entity_rotation(&(iLocal_979[0]), 2), 2);
					freeze_entity_position(&(iLocal_979[0]), true);
					remove_blip(iLocal_1825[7]);
					func_1347();
					task_enter_anim_scene(Global_35, &(Local_2202[15]), "player_zero", func_1348(15, 1), 1f, 1, 144, 20000, -1082130432);
					func_1282(72);
					func_11(&iLocal_2177, 1, 1);
					func_134(uParam0, 4);
				}
			}
			else if (func_10(iVar2174))
			{
				func_11(&iLocal_2177, 1, 1);
			}
			break;
		case 4:
			_0xb832f1a686b9b810(Global_35, true, 1);
			if (_is_anim_scene_started(&(Local_2202[15]), false))
			{
				detach_entity(&(Local_1692[13]), true, true);
				detach_entity(&(Local_1692[14]), true, true);
				func_134(uParam0, 5);
			}
			break;
		case 5:
			set_ped_max_move_blend_ratio(Global_35, 1f);
			if (_0x005e6f28dd7ed58d(&(Local_2202[15]), "player_zero"))
			{
				if (Local_2202[16]->f_1 == 8)
				{
					func_1338(7);
					if (!func_167(73))
					{
						func_1349(8, &(Local_218[6]));
						func_1350(uParam0, &(Local_218[6]), -2045797884, 422991367, 1, 1);
						func_1325(uParam0, 8);
					}
					else
					{
						func_1325(uParam0, 9);
						func_1351();
					}
					_0xbf4dc1784be94dfa(Global_35, true, get_hash_key(func_171(72)));
					func_413(70);
					func_413(89);
					func_1352(-668482597, 500, 1, 1, 0, get_entity_heading(Global_35), 0, 1);
					func_1353(Global_35, 1);
					_0xdd1232b332cbb9e7(3, 1, 0);
					Local_2202[16]->f_1 = 9;
					func_1298(16);
					_hide_ped_weapons(Global_35, 2, true);
					set_current_ped_weapon(Global_35, -1569615261, true, 0, false, false);
					set_current_ped_weapon(Global_35, -1569615261, true, 1, false, false);
					func_134(uParam0, 6);
				}
			}
			break;
		case 6:
			set_ped_max_move_blend_ratio(Global_35, 1f);
			if (func_167(73) && func_167(70))
			{
				func_1282(56);
				func_1282(57);
				func_1282(73);
				func_1282(74);
				func_1282(61);
				if (!func_167(91))
				{
					use_waypoint_recording_as_assisted_movement_route(func_525(67), true, 0.75f, 0.5f, 1);
					func_1282(41);
					func_413(91);
				}
				func_1298(20);
				if (is_entity_in_volume(Global_35, Local_141.f_4, true, 0))
				{
					_delete_volume(Local_141.f_58);
					_delete_volume(Local_141.f_68);
					func_168(0);
					set_entity_collision(&(Local_218[38]), true, false);
					_set_anim_scene_playback_list_bool(&(Local_2202[20]), "pl_brt1_mcs2_leadin", true);
					detach_entity(&(Local_1692[3]), true, true);
					func_506(uParam0, 3, 0);
					set_entity_visible(&(Local_218[27]), false);
					set_entity_visible(&(Local_218[41]), true);
					if (!Local_1429[iVar2037]->f_6 == 12 && !Local_1429[iVar2037]->f_6 == 13)
					{
						func_483(uParam0, 21, 0);
						Local_1429[iVar2037]->f_6 = 12;
					}
					func_1338(9);
					func_1289(8);
					func_1289(9);
					func_1289(10);
					func_174(70);
					if (does_blip_exist(&(iLocal_1825[8])))
					{
						remove_blip(iLocal_1825[8]);
					}
					func_134(uParam0, 29);
				}
			}
			break;
		case 29:
			if (!is_entity_visible(&(Local_1692[5])))
			{
				set_entity_visible(&(Local_1692[5]), true);
			}
			func_176(0);
			return 1;
	}
	return 0;
}

int func_809(var uParam0)
{
	switch (iVar2060)
	{
		case 0:
			func_1289(6);
			func_1289(4);
			func_1289(9);
			func_1289(11);
			func_1289(10);
			func_1289(3);
			uLocal_2063 = iVar2060 + 1;
			break;
		case 1:
			func_483(uParam0, 25, 0);
			uLocal_2063 = iVar2060 + 1;
			break;
		case 2:
			func_483(uParam0, 26, 0);
			uLocal_2063 = iVar2060 + 1;
			break;
		case 3:
			func_483(uParam0, 23, 0);
			uLocal_2063 = iVar2060 + 1;
			break;
		case 4:
			func_483(uParam0, 24, 0);
			uLocal_2063 = iVar2060 + 1;
			break;
		case 5:
			func_500(uParam0, 1);
			uLocal_2063 = iVar2060 + 1;
			break;
		case 6:
			func_500(uParam0, 2);
			uLocal_2063 = iVar2060 + 1;
			break;
		case 7:
			func_520(12);
			uLocal_2063 = iVar2060 + 1;
			break;
		case 8:
			func_522(12);
			uLocal_2063 = iVar2060 + 1;
			break;
		case 9:
			func_522(13);
			uLocal_2063 = iVar2060 + 1;
			break;
		case 10:
			func_522(func_1306(12));
			uLocal_2063 = iVar2060 + 1;
			break;
		case 11:
			func_528(17, 1);
			uLocal_2063 = iVar2060 + 1;
			break;
		case 12:
			func_528(19, 1);
			uLocal_2063 = iVar2060 + 1;
			break;
		case 13:
			func_522(65);
			uLocal_2063 = iVar2060 + 1;
			break;
		case 14:
			func_522(67);
			uLocal_2063 = iVar2060 + 1;
			break;
		case 15:
			func_482(0, 0);
			uLocal_2063 = iVar2060 + 1;
			break;
		case 16:
			func_483(uParam0, 4, 0);
			uLocal_2063 = iVar2060 + 1;
			break;
		case 17:
			func_483(uParam0, 5, 0);
			uLocal_2063 = iVar2060 + 1;
			break;
	}
	func_1315(uParam0);
	if (!iVar2060 == 18)
	{
		return 0;
	}
	func_176(0);
	_0xbf4dc1784be94dfa(Global_35, false, get_hash_key(func_171(72)));
	func_522(72);
	Var0 = { func_1354(0) };
	_0x4eddd9e9ca5af985(Var0);
	Var0 = { func_1354(1) };
	_0x4eddd9e9ca5af985(Var0);
	_0xc67a4910425f11f1(player_id(), 0);
	_0x5639fbea922788da(Global_35);
	_0x2c87c3e1c7b96ee2(Local_141.f_48);
	set_player_control(player_id(), true, 0, false);
	_0x36559148b78853b3(0, 0, 0);
	delete_object(Local_1692[14]);
	func_1289(14);
	func_191(0);
	func_494(-360567618, 0, 0f, 0, 1, 0, 0, 0);
	func_494(-1905757044, 0, 0f, 0, 1, 0, 0, 0);
	func_192(0, 0);
	func_1338(func_1355());
	return 1;
}

int func_810(var uParam0)
{
	iVar0 = func_195(uParam0);
	if (iVar0 == 0)
	{
		return 1;
	}
	func_1282(27);
	func_1282(28);
	func_1282(func_1306(26));
	func_1282(73);
	func_1282(61);
	bVar1 = true;
	if ((((!func_1322(27) || !func_1322(28)) || !func_1322(func_1306(26))) || !func_1322(73)) || !func_1322(61))
	{
		bVar1 = false;
	}
	if (!func_167(79))
	{
		if (!func_1296(uParam0, 28, 41, 2077))
		{
			bVar1 = false;
		}
		else
		{
			func_413(79);
		}
	}
	if (!func_1296(uParam0, 27, 27, 29))
	{
		bVar1 = false;
	}
	else if (!Local_1340[14]->f_1 == 5)
	{
		func_1356(27, 14, 0);
	}
	if (!Local_1340[14]->f_1 == 5)
	{
		func_1356(27, 14, 0);
		bVar1 = false;
	}
	if (!func_180(1))
	{
		bVar1 = false;
	}
	if (!bVar1)
	{
		return 0;
	}
	if (!does_entity_exist(&(Local_1692[26])))
	{
		func_1321(26, 1);
	}
	if (!does_entity_exist(&(Local_1692[22])))
	{
		func_1321(22, 1);
	}
	if (!does_entity_exist(&(Local_1692[23])))
	{
		func_1321(23, 1);
	}
	if (!does_entity_exist(&(Local_1692[24])))
	{
		func_1321(24, 1);
	}
	if (!does_entity_exist(&(Local_1692[25])))
	{
		func_1321(25, 1);
	}
	func_1298(21);
	if (!Local_2202[21]->f_1 == 8)
	{
		return 0;
	}
	func_348(304805134, 1, 1);
	_set_ped_component_disabled(Global_35, -675377005, 1);
	func_206(1);
	vVar2 = { func_247(iVar1956) };
	_0x9851de7aec10b4e1(vVar2, 100f, 1, 0);
	if (!is_entity_dead(&(Local_218[6])))
	{
		func_1321(3, 1);
		Var6 = { func_1357(3) };
		attach_entity_to_entity(&(Local_1692[3]), &(Local_218[6]), get_ped_bone_index(&(Local_218[6]), 21030), Var6, Var6.f_3, false, false, false, false, 2, true, false, false);
	}
	if (!does_entity_exist(&(Local_1692[13])))
	{
		func_1321(13, 1);
	}
	if (is_entity_attached(&(Local_1692[13])))
	{
		detach_entity(&(Local_1692[13]), true, true);
	}
	set_entity_coords(&(Local_1692[13]), func_1358(0, 0), true, false, true, true);
	set_entity_rotation(&(Local_1692[13]), func_1359(0, 0), 2, true);
	if (!func_167(2))
	{
		func_182(1, 0);
		func_413(2);
	}
	func_1321(38, 1);
	func_1321(39, 1);
	func_1321(40, 1);
	func_1321(41, 1);
	func_1321(42, 1);
	func_1321(43, 1);
	func_1321(44, 1);
	func_1321(20, 1);
	set_entity_coords(&(Local_1692[20]), func_1358(1, 1), true, false, true, true);
	set_entity_rotation(&(Local_1692[20]), func_1360(1, 1), 2, true);
	func_1342(0);
	func_1362(func_1361(func_33(uParam0)), 30f);
	func_482(1, 1);
	return 1;
}

int func_811(var uParam0)
{
	_0xe296208c273bd7f0(-1, -1, 0, 17, 1, 0);
	func_1363(uParam0, 524288);
	iVar0 = func_195(uParam0);
	func_1282(56);
	func_1282(57);
	func_1282(73);
	func_1282(61);
	func_1282(func_1306(27));
	bVar1 = true;
	if (!iVar0 == 1)
	{
		if (!&iLocal_2497[2] == 7)
		{
			if (!func_1333(uParam0))
			{
				bVar1 = false;
			}
		}
	}
	if (!bVar1)
	{
		return 0;
	}
	if (iVar0 == 0)
	{
		if (!_0x005e6f28dd7ed58d(&(Local_2202[20]), "Arthur"))
		{
			if (!func_167(111))
			{
				if (_get_anim_scene_time(&(Local_2202[20])) >= 5f)
				{
					if (!is_entity_dead(&(Local_218[27])))
					{
						clear_ped_tasks_immediately(&(Local_218[27]), false, true);
					}
					func_413(111);
				}
			}
			if (!func_167(100))
			{
				if (_get_anim_scene_time(&(Local_2202[20])) >= 2f)
				{
					func_413(100);
				}
			}
			return 0;
		}
	}
	if (!func_167(107))
	{
		Local_1340[14]->f_1 = 0;
		func_413(107);
	}
	if (!is_entity_dead(Global_35))
	{
		set_entity_invincible(Global_35, true);
	}
	func_182(1, 1);
	func_174(10);
	func_169(6, 0);
	func_1304(uParam0, 2);
	func_1304(uParam0, 4);
	func_168(0);
	clear_ped_secondary_task(Global_35);
	if (!func_195(uParam0) == 1)
	{
		func_1364(uParam0);
	}
	return 1;
}

int func_812(var uParam0)
{
	func_1365(21);
	set_clock_time(13, 0, 0);
	func_506(uParam0, 38, 0);
	func_506(uParam0, 39, 0);
	func_506(uParam0, 40, 0);
	func_506(uParam0, 41, 0);
	func_506(uParam0, 42, 0);
	func_506(uParam0, 43, 0);
	func_506(uParam0, 44, 0);
	func_522(26);
	func_176(0);
	func_99(uParam0, 4194304);
	func_942(6, 1);
	_0x67e21acc5c0c970c(Global_35, 9, false);
	_0x67e21acc5c0c970c(Global_35, 16, false);
	_0x67e21acc5c0c970c(Global_35, 17, false);
	func_943(iVar1956, 1);
	func_528(20, 1);
	_0x19c7567d2f2287d6(Local_141.f_46, 7);
	func_413(102);
	func_528(16, 1);
	_0xe296208c273bd7f0(0, -1, 0, 17, 1, 0);
	func_1282(58);
	func_1282(36);
	_set_ped_component_disabled(Global_35, -675377005, 1);
	func_206(1);
	return 1;
}

int func_813(var uParam0)
{
	set_ped_can_head_ik(Global_35, false);
	if (!iVar2197 == 7)
	{
		if (func_930(uParam0, 0, 1, 1, -509228265))
		{
			func_1265(&(iLocal_979[0]), func_1366(4), 2, 1073741824);
			if (!is_entity_dead(&(iLocal_979[0])))
			{
				set_vehicle_door_control(&(iLocal_979[0]), 5, 0, 1f);
				set_entity_invincible(&(iLocal_979[0]), true);
			}
			func_1367();
		}
	}
	iVar0 = 28;
	while (iVar0 <= 41)
	{
		set_ped_can_play_gesture_anims(&(Local_218[iVar0]), 0, 1);
		iVar0++;
	}
	func_1368();
	if (does_entity_exist(&(Local_1692[21])))
	{
		if (is_task_move_network_active(&(Local_1692[21])))
		{
			set_task_move_network_signal_float(&(Local_1692[21]), "FillAmount", fVar2063);
		}
	}
	_0xe296208c273bd7f0(0, -1, 0, 17, 1, 0);
	func_1369();
	if (!iVar2073 == -1)
	{
		switch (iVar2073)
		{
			case 0:
				clear_area(1304.7f, -1293.1f, 76f, 30f, 1064960);
				iLocal_2076 = iVar2073 + 1;
				break;
			case 1:
				clear_area(1345f, -1312.2f, 76f, 30f, 1064960);
				iLocal_2076 = iVar2073 + 1;
				break;
			case 2:
				clear_area(1373.8f, -1335.9f, 78f, 30f, 1064960);
				iLocal_2076 = iVar2073 + 1;
				break;
			case 3:
				clear_area(1319.7f, -1343.4f, 78f, 30f, 1064960);
				iLocal_2076 = iVar2073 + 1;
				break;
			case 4:
				clear_area(1381.2f, 1319f, 77.8f, 30f, 1064960);
				iLocal_2076 = -1;
				break;
		}
	}
	if (!func_167(115))
	{
		if (has_anim_event_fired(Global_35, 1151561590))
		{
			func_413(115);
		}
	}
	func_1270(uParam0);
	if (is_task_move_network_active(Global_35))
	{
		set_task_move_network_signal_float(Global_35, "height", fVar2069);
		set_task_move_network_signal_float(Global_35, "rotation", fVar2070);
		set_task_move_network_signal_float(Global_35, "sloppiness", fVar2071);
	}
	if (has_anim_event_fired(Global_35, -898751990))
	{
		set_pad_shake(0, 250, 64);
	}
	if (!func_167(109))
	{
		if (!func_167(108))
		{
			if (Local_1340[14]->f_1 == 6)
			{
				if (!is_entity_dead(&(Local_218[27])))
				{
					if (_0x9c54041bb66bcf9e(&(Local_218[27]), &(Local_1340[14])))
					{
						_0x8e901b65206c2d3e(&(Local_218[27]));
						_0xb93a769b8b726950(&(Local_218[27]), 51469403);
						_0xc4cfce4c656ef480(&(Local_218[27]));
						func_413(108);
					}
				}
			}
		}
		else if (!func_167(109))
		{
			if (iVar2067 >= 10 && Local_1340[14]->f_1 == 6)
			{
				if (!is_entity_dead(&(Local_218[27])) && _0x9c54041bb66bcf9e(&(Local_218[27]), &(Local_1340[14])))
				{
					_0xb93a769b8b726950(&(Local_218[27]), 487746791);
					func_413(109);
				}
			}
		}
	}
	if (func_26(vLocal_1840[13]))
	{
		if (func_924(vLocal_1840[13]) >= 1.2f)
		{
			func_1370(uParam0, 0);
			func_599(vLocal_1840[13]);
		}
	}
	if (func_167(102))
	{
		func_1298(21);
		func_1298(30);
		func_1298(22);
		func_1298(31);
	}
	if (func_167(103))
	{
		func_1298(23);
		func_1298(32);
		func_1298(24);
		func_1298(33);
	}
	if (func_167(104))
	{
		func_1298(25);
		func_1298(26);
		func_1298(34);
		func_1298(27);
		func_1298(35);
	}
	if (func_167(105))
	{
		func_1298(28);
		func_1298(36);
		func_1298(29);
		func_1298(38);
	}
	func_1371();
	if (!func_167(106))
	{
		if (load_stream("Walla_Drunk", "BRT1_Sounds"))
		{
			func_413(106);
			iLocal_2140 = _0x0556c784fa056628("Walla_Drunk", "BRT1_Sounds");
			play_stream_frontend(uVar2137);
			func_413(110);
		}
	}
	if (iVar2067 >= 12 && iVar2067 < 18)
	{
		func_1372();
	}
	switch (iVar2067)
	{
		case 0:
			if (_0x005e6f28dd7ed58d(&(Local_2202[21]), "ARTHUR"))
			{
				set_clock_time(17, 0, 0);
				func_1332(30);
				iLocal_2561 = 30;
				func_1373(1);
			}
			break;
		case 1:
			uLocal_2150 = iVar2147 + 1;
			if (iVar2558 == 30)
			{
				func_1374(0);
			}
			else if (iVar2558 == 31)
			{
				func_1374(2);
			}
			else if (iVar2558 == 32)
			{
				func_1374(4);
			}
			else if (iVar2558 == 33)
			{
				func_1374(6);
			}
			func_1375(1);
			func_1365(iVar2558);
			func_1376(0);
			func_1377();
			func_1378(1);
			iLocal_2071 = 0;
			func_1370(uParam0, 1);
			func_27(vLocal_1840[0], 1);
			func_1373(2);
		case 2:
			if (!func_167(121))
			{
				if (func_26(vLocal_1840[0]))
				{
					if (func_924(vLocal_1840[0]) >= 3f)
					{
						if (!Local_2202[37]->f_1 == 10)
						{
							if (func_1379())
							{
								func_1276(59);
							}
							else
							{
								func_1276(61);
							}
						}
						func_599(vLocal_1840[0]);
					}
				}
			}
			if (func_1380(uParam0))
			{
				if (!func_167(120))
				{
					func_27(vLocal_1840[13], 0);
				}
				else
				{
					func_174(120);
				}
				uLocal_2075 = iVar2072 + 1;
				func_1373(3);
			}
			break;
		case 3:
			remove_particle_fx(iVar2064, false);
			remove_particle_fx(iVar2065, false);
			_0x0f2a2175734926d8(func_1381(1), func_1381(0));
			_0x0f2a2175734926d8(func_1381(3), func_1381(0));
			switch (iVar2072)
			{
				case 1:
					func_1373(4);
					break;
				case 2:
					func_1373(6);
					break;
				case 3:
					func_1373(8);
					break;
				case 4:
					func_1373(10);
					break;
				case 5:
					func_1373(13);
					break;
				case 6:
					func_1373(15);
					break;
				case 7:
					func_1373(17);
					break;
				default:
					break;
			}
			break;
		case 4:
			func_1382(iVar2067);
			if (func_1332(22))
			{
				iLocal_2561 = 22;
				func_1373(5);
			}
			break;
		case 5:
			func_1374(1);
			func_1365(iVar2558);
			if (does_cam_exist(&(iLocal_1950[0])))
			{
				func_505(0);
				func_1378(0);
			}
			if (_is_anim_scene_active(&(Local_2202[22])))
			{
				func_1332(31);
				func_413(103);
				iLocal_2561 = 31;
				func_1373(1);
			}
			break;
		case 6:
			func_1382(iVar2067);
			if (func_1332(23))
			{
				func_174(102);
				iLocal_2561 = 23;
				func_1373(7);
			}
			break;
		case 7:
			if (does_cam_exist(&(iLocal_1950[0])))
			{
				func_505(0);
				func_1378(0);
			}
			func_1365(iVar2558);
			func_1374(3);
			if (!func_167(112))
			{
				if (_0x8d81e7824b7753f7(&(Local_2202[23]), "s_bottle_empty", 1))
				{
					if (Local_2202[37]->f_1 == 10)
					{
						set_anim_scene_paused(&(Local_2202[37]), true);
					}
					func_1276(60);
					func_413(112);
				}
			}
			if (_is_anim_scene_active(&(Local_2202[23])))
			{
				set_anim_scene_paused(&(Local_2202[37]), false);
				func_1332(32);
				iLocal_2561 = 32;
				func_1373(1);
			}
			break;
		case 8:
			func_1382(iVar2067);
			if (func_1332(24))
			{
				iLocal_2561 = 24;
				_set_entity_coords_and_heading(&(Local_218[29]), 1343.5f, -1372.6f, 80.4f, 0f, true, false, true);
				_0x9587913b9e772d29(&(Local_218[29]), 0);
				func_1373(9);
			}
			break;
		case 9:
			if (does_cam_exist(&(iLocal_1950[0])))
			{
				func_505(0);
				func_1378(0);
			}
			func_1365(iVar2558);
			func_1374(5);
			if (_is_anim_scene_active(&(Local_2202[24])))
			{
				func_413(120);
				func_1332(33);
				func_413(104);
				iLocal_2561 = 33;
				func_1373(1);
			}
			break;
		case 10:
			func_1382(iVar2067);
			if (func_1332(25))
			{
				func_174(103);
				iLocal_2561 = 25;
				_set_entity_coords_and_heading(&(Local_218[29]), 1343.3f, -1371.6f, 79.9f, 130f, true, false, true);
				_set_entity_coords_and_heading(&(Local_218[38]), 1358.087f, -1349.009f, 77.6f, 76.5f, true, false, true);
				_0x9587913b9e772d29(&(Local_218[38]), 0);
				task_follow_nav_mesh_to_coord(&(Local_218[38]), get_offset_from_entity_in_world_coords(&(Local_218[38]), 0f, 30f, 0f), 1f, 20000, 0.25f, 0, 40000f);
				force_ped_motion_state(&(Local_218[38]), -668482597, false, 0, false);
				_0x2208438012482a1a(&(Local_218[38]), true, false);
				_0xe7fa07624574b79a(&(Local_218[38]), Global_35, 3, 2, 10f, 1, 0, 0, 0);
				_give_weapon_to_ped_2(&(Local_218[38]), -164645981, -1, true, false, 0, false, 0.5f, 1f, 752097756, true, 0f, false);
				_set_entity_coords_and_heading(&(Local_218[39]), 1356.632f, -1350.222f, 77.6f, 76.5f, true, false, true);
				_0x9587913b9e772d29(&(Local_218[39]), 0);
				task_look_at_coord(&(Local_218[39]), func_178(8, 7), -1, 48, 51, 1);
				task_follow_nav_mesh_to_coord(&(Local_218[39]), get_offset_from_entity_in_world_coords(&(Local_218[39]), 0f, 30f, 0f), 1f, 20000, 0.25f, 0, 40000f);
				force_ped_motion_state(&(Local_218[39]), -668482597, false, 0, false);
				_0x2208438012482a1a(&(Local_218[39]), true, false);
				_set_entity_coords_and_heading(&(Local_218[40]), 1339.803f, -1362.551f, 79.1572f, 289f, true, false, true);
				_0x9587913b9e772d29(&(Local_218[40]), 0);
				func_1284(&(Local_218[40]), 58, 1000f, -1000f, -1, 25, 0);
				func_1321(28, 1);
				func_1321(29, 1);
				func_1321(30, 1);
				attach_entity_to_entity(&(Local_1692[28]), &(Local_218[40]), get_ped_bone_index(&(Local_218[40]), 37873), vLocal_2156, vLocal_2159, false, false, false, false, 2, true, false, false);
				attach_entity_to_entity(&(Local_1692[29]), &(Local_218[40]), get_ped_bone_index(&(Local_218[40]), 37709), vLocal_2162, vLocal_2165, false, false, false, false, 2, true, false, false);
				attach_entity_to_entity(&(Local_1692[30]), &(Local_218[40]), get_ped_bone_index(&(Local_218[40]), 7966), vLocal_2168, vLocal_2171, false, false, false, false, 2, true, false, false);
				task_follow_nav_mesh_to_coord(&(Local_218[40]), 1355.231f, -1350.371f, 78.143f, 1.5f, 20000, 0.25f, 0, 40000f);
				_set_entity_coords_and_heading(&(Local_218[41]), 1336.1f, -1363.5f, 79.2f, -37.7f, true, false, true);
				_0x9587913b9e772d29(&(Local_218[41]), 0);
				func_1284(&(Local_218[41]), 58, 1000f, -1000f, -1, 25, 0);
				func_1321(31, 1);
				func_1321(32, 1);
				func_1321(33, 1);
				attach_entity_to_entity(&(Local_1692[31]), &(Local_218[41]), get_ped_bone_index(&(Local_218[40]), 37873), vLocal_2156, vLocal_2159, false, false, false, false, 2, true, false, false);
				attach_entity_to_entity(&(Local_1692[32]), &(Local_218[41]), get_ped_bone_index(&(Local_218[40]), 37709), vLocal_2162, vLocal_2165, false, false, false, false, 2, true, false, false);
				attach_entity_to_entity(&(Local_1692[33]), &(Local_218[41]), get_ped_bone_index(&(Local_218[40]), 7966), vLocal_2168, vLocal_2171, false, false, false, false, 2, true, false, false);
				task_follow_nav_mesh_to_coord(&(Local_218[41]), 1332.3f, -1341.2f, 77.5f, 1.5f, 20000, 0.25f, 0, 40000f);
				func_599(vLocal_1840[0]);
				func_1373(11);
			}
			break;
		case 11:
			func_180(0);
			if (does_cam_exist(&(iLocal_1950[0])))
			{
				set_clock_time(21, 0, 0);
				func_505(0);
				func_1378(0);
			}
			func_1365(iVar2558);
			func_1374(7);
			if (!is_entity_visible(&(Local_218[38])))
			{
				set_entity_visible(&(Local_218[38]), true);
			}
			if (!is_entity_visible(&(Local_218[39])))
			{
				set_entity_visible(&(Local_218[39]), true);
			}
			if (!is_entity_visible(&(Local_218[40])))
			{
				set_entity_visible(&(Local_218[40]), true);
			}
			if (!is_entity_visible(&(Local_218[41])))
			{
				set_entity_visible(&(Local_218[41]), true);
			}
			if (!func_167(122))
			{
				if (_0x8d81e7824b7753f7(&(Local_2202[25]), "s_wide_shot", 1))
				{
					iLocal_2069 = start_particle_fx_looped_at_coord(func_1381(14), 1340f, -1374f, 82f, 0f, 0f, 0f, 1f, false, false, false, false);
					func_135(uParam0, 1);
					if (!is_entity_dead(&(Local_218[27])))
					{
						clear_ped_tasks_immediately(&(Local_218[27]), false, true);
						set_entity_visible(&(Local_218[27]), false);
					}
					func_528(37, 0);
					func_413(122);
				}
			}
			if (!does_entity_exist(&(Local_1692[27])))
			{
				if (_get_anim_scene_time(&(Local_2202[25])) >= 4f)
				{
					func_1321(27, 1);
					attach_entity_to_entity(&(Local_1692[27]), Global_35, 0, 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, false, false);
					detach_entity(&(Local_1692[27]), true, true);
					set_entity_coords(&(Local_1692[27]), func_1383(27), true, false, true, true);
					set_entity_dynamic(&(Local_1692[27]), true);
					activate_physics(&(Local_1692[27]));
					apply_force_to_entity(&(Local_1692[27]), 1, -7.6f, 0f, 3f, 0f, 0f, 0f, 0, false, false, true, false, true);
					_0xe7fa07624574b79a(&(Local_218[39]), Global_35, 3, 1, 10f, 1, 0, 0, 0);
				}
			}
			else if (!func_167(117))
			{
				if (_get_anim_scene_time(&(Local_2202[25])) >= 4.22f)
				{
					_play_sound_from_position(func_1381(8), 1347.3f, -1369.2f, 85f, func_1381(0), false, 0, true, 0);
					func_413(117);
				}
			}
			else if (!func_167(118))
			{
				if (_get_anim_scene_time(&(Local_2202[25])) >= 5.46f)
				{
					_play_sound_from_position(func_1381(9), 1347.3f, -1369.2f, 85f, func_1381(0), false, 0, true, 0);
					func_413(118);
				}
			}
			if (_is_anim_scene_active(&(Local_2202[25])) || _0xf94692eb9dc15d74(&(Local_2202[25]), 0))
			{
				_set_entity_coords_and_heading(&(Local_218[34]), 1343.1f, -1372f, 80.2f, 126f, true, false, true);
				_0x9587913b9e772d29(&(Local_218[34]), 0);
				force_ped_motion_state(&(Local_218[34]), -1871534317, false, 0, false);
				func_1282(68);
				func_1282(37);
				func_135(uParam0, 2);
				func_1332(26);
				iLocal_2561 = 26;
				func_1373(12);
			}
			break;
		case 12:
			if (!func_167(114))
			{
				remove_weapon_from_ped(&(Local_218[38]), -164645981, true, -142743235);
				task_clear_look_at(&(Local_218[38]));
				task_clear_look_at(&(Local_218[39]));
				func_506(uParam0, 28, 0);
				func_506(uParam0, 29, 0);
				func_506(uParam0, 30, 0);
				func_506(uParam0, 31, 0);
				func_506(uParam0, 32, 0);
				func_506(uParam0, 33, 0);
				clear_ped_secondary_task(&(Local_218[40]));
				clear_ped_secondary_task(&(Local_218[41]));
				func_522(58);
				func_413(114);
			}
			if (does_entity_exist(&(Local_1692[27])))
			{
				func_506(uParam0, 27, 0);
				func_522(func_1306(27));
			}
			func_1365(iVar2558);
			if (!is_entity_dead(&(Local_218[27])))
			{
				if (_0x8d81e7824b7753f7(&(Local_2202[26]), "s_round_03_montage_p1", 1))
				{
					if (is_entity_visible(&(Local_218[27])))
					{
						set_entity_visible(&(Local_218[27]), false);
					}
				}
				else if (_0x8d81e7824b7753f7(&(Local_2202[26]), "s_glass_drop_montage", 1))
				{
					if (!is_entity_visible(&(Local_218[27])))
					{
						set_entity_visible(&(Local_218[27]), true);
					}
				}
			}
			if (_is_anim_scene_active(&(Local_2202[26])))
			{
				func_1332(34);
				iLocal_2561 = 34;
				func_1373(1);
			}
			break;
		case 13:
			func_1382(iVar2067);
			if (func_1332(27))
			{
				iLocal_2561 = 27;
				func_1373(14);
			}
			break;
		case 14:
			if (does_cam_exist(&(iLocal_1950[0])))
			{
				func_505(0);
				func_1378(0);
			}
			func_1365(iVar2558);
			if (_0x8d81e7824b7753f7(&(Local_2202[27]), "s_round_03_montage_p2", 1))
			{
				if (is_entity_visible(&(Local_218[29])))
				{
					set_entity_visible(&(Local_218[29]), false);
				}
			}
			if (_0x005e6f28dd7ed58d(&(Local_2202[27]), "Patron^10") && is_entity_visible(&(Local_218[38])))
			{
				set_entity_visible(&(Local_218[28]), false);
				set_entity_visible(&(Local_218[38]), false);
				set_entity_visible(&(Local_218[39]), false);
				set_entity_visible(&(Local_218[40]), false);
				set_entity_visible(&(Local_218[34]), false);
				set_entity_visible(&(Local_218[35]), false);
				set_entity_visible(&(Local_218[36]), false);
				set_entity_visible(&(Local_218[37]), false);
			}
			if (_is_anim_scene_active(&(Local_2202[27])))
			{
				func_1332(35);
				func_413(105);
				iLocal_2561 = 35;
				func_1373(1);
			}
			break;
		case 15:
			func_1382(iVar2067);
			if (func_1332(28))
			{
				func_174(104);
				iLocal_2561 = 28;
				func_1373(16);
			}
			break;
		case 16:
			if (does_cam_exist(&(iLocal_1950[0])))
			{
				func_505(0);
				func_1378(0);
			}
			func_1365(iVar2558);
			if (_is_anim_scene_active(&(Local_2202[28])))
			{
				func_1332(36);
				iLocal_2561 = 36;
				func_413(121);
				func_1373(1);
			}
			break;
		case 17:
			func_1382(iVar2067);
			if (func_1332(29))
			{
				iLocal_2561 = 29;
				func_1373(18);
			}
			break;
		case 18:
			if (does_cam_exist(&(iLocal_1950[0])))
			{
				set_entity_visible(&(Local_1692[23]), false);
				set_entity_visible(&(Local_1692[24]), false);
				set_entity_visible(&(Local_1692[25]), false);
				func_1378(0);
				func_198();
			}
			func_1365(iVar2558);
			return 1;
	}
	if (!&iLocal_2497[3] == 7)
	{
		if (!func_167(142))
		{
			if (func_1296(uParam0, 42, 57, 5645))
			{
				iLocal_2139 = func_1384(42, 57);
				func_413(142);
			}
		}
		else if (!func_167(136))
		{
			if (func_1385(0))
			{
				func_413(136);
				func_1301(42, 57, 1);
			}
		}
		else
		{
			func_1386(uParam0);
		}
	}
	else if (func_8(uParam0, 4194304))
	{
		func_920(uParam0, 4194304);
	}
	return 0;
}

int func_814(var uParam0)
{
	func_522(61);
	func_522(73);
	func_522(74);
	func_522(56);
	func_522(57);
	func_522(27);
	func_522(28);
	func_1282(38);
	_0x67e21acc5c0c970c(Global_35, 9, true);
	_0x67e21acc5c0c970c(Global_35, 16, true);
	_0x67e21acc5c0c970c(Global_35, 17, true);
	set_current_ped_weapon(&(Local_218[6]), -1569615261, true, 0, false, false);
	if (does_entity_exist(&(Local_1692[14])))
	{
		delete_object(Local_1692[14]);
	}
	func_176(1);
	iVar0 = 28;
	while (iVar0 <= 41)
	{
		set_entity_visible(&(Local_218[iVar0]), true);
		iVar0++;
	}
	_0x2c87c3e1c7b96ee2(Local_141.f_46);
	return 1;
}

int func_815(var uParam0)
{
	bVar0 = true;
	func_1282(68);
	func_1282(37);
	func_1282(59);
	func_1282(60);
	if (((!func_1322(68) || !func_1322(37)) || !func_1322(59)) || !func_1322(60))
	{
		bVar0 = false;
	}
	iVar1 = func_1387(0);
	if (!iVar1 == 0)
	{
		_0x72d4cb5db927009c(iVar1, -1, 0);
		_0x140b3cb1d424a945(Global_35, iVar1);
		if (!_0xff07cf465f48b830(iVar1))
		{
			bVar0 = false;
		}
		if (!_0x8cbe916cfc64ad5c(Global_35))
		{
			bVar0 = false;
		}
	}
	if (!func_167(79))
	{
		if (!func_1296(uParam0, 27, 41, 2077))
		{
			bVar0 = false;
		}
		else
		{
			iLocal_2139 = func_1384(42, 57);
			func_413(79);
		}
	}
	if (func_167(79))
	{
		func_1298(38);
		if (!Local_2202[38]->f_1 == 8)
		{
			bVar0 = false;
		}
	}
	if (!func_1296(uParam0, 42, 57, 5661))
	{
		bVar0 = false;
	}
	else if (!func_167(136))
	{
		if (!func_1385(1))
		{
			bVar0 = false;
		}
		else
		{
			func_413(136);
			func_1301(42, 57, 1);
		}
	}
	if (!func_180(0))
	{
		bVar0 = false;
	}
	func_1321(22, 0);
	func_1321(23, 0);
	func_1321(24, 0);
	func_1321(25, 0);
	func_1321(26, 0);
	func_1321(20, 0);
	set_entity_coords(&(Local_1692[20]), func_1358(1, 2), true, false, true, true);
	set_entity_rotation(&(Local_1692[20]), func_1360(1, 2), 2, true);
	if (!bVar0)
	{
		return 0;
	}
	if (!&iLocal_2497[3] == 7)
	{
		if (!func_1386(uParam0))
		{
			bVar0 = false;
		}
	}
	if (!bVar0)
	{
		return 0;
	}
	if (func_195(uParam0) == 1)
	{
		func_1265(&(Local_218[42]), func_1388(4, 3), 2, 1073741824);
		set_entity_coords(&(Local_218[43]), func_1389(43, 1, 3), true, false, true, true);
		set_entity_heading(&(Local_218[43]), func_1390(func_1389(43, 1, 3), func_178(8, 8)));
		set_entity_coords(&(Local_218[44]), func_1389(44, 1, 3), true, false, true, true);
		set_entity_heading(&(Local_218[44]), func_1390(func_1389(44, 1, 3), func_178(8, 8)));
	}
	if (!func_167(2))
	{
		func_182(1, 0);
		func_413(2);
	}
	vVar2 = { func_247(iVar1956) };
	_0x9851de7aec10b4e1(vVar2, 100f, 1, 0);
	if (!func_167(2))
	{
		func_182(1, 0);
		func_413(2);
	}
	func_168(0);
	func_1342(0);
	func_482(1, 1);
	return 1;
}

int func_816(var uParam0)
{
	func_1369();
	_0xe296208c273bd7f0(0, -1, 0, 17, 1, 0);
	func_1282(59);
	func_1282(60);
	iVar0 = func_195(uParam0);
	if ((iVar0 == 0 && _does_anim_scene_exist(&(Local_2202[29]))) && _is_anim_scene_started(&(Local_2202[29]), false))
	{
		if (!_is_anim_scene_active(&(Local_2202[29])))
		{
			return 0;
		}
	}
	func_1391(uParam0, 1024);
	func_188(1, 0, 0, 1, 0f);
	func_482(2, 1);
	func_1321(49, 1);
	func_1321(50, 1);
	freeze_entity_position(&(Local_1692[49]), true);
	freeze_entity_position(&(Local_1692[50]), true);
	iVar1 = func_1387(0);
	if (iVar1 == 0)
	{
		iVar1 = func_1392(284164096, 1056964608, 1065353216);
		if (!get_max_ammo(Global_35, &iVar2, iVar1))
		{
			iVar2 = 64;
		}
		func_1393(Global_35, iVar1, -1, 0, 0, 1056964608, 1065353216, 0);
	}
	set_current_ped_weapon(Global_35, iVar1, false, 0, false, false);
	if (get_ped_ammo_by_type(Global_35, get_ped_ammo_type_from_weapon(Global_35, iVar1)) < 64)
	{
		iVar3 = (64 - get_ped_ammo_by_type(Global_35, get_ped_ammo_type_from_weapon(Global_35, iVar1)));
		_add_ammo_to_ped(Global_35, iVar1, iVar3, 752097756);
	}
	_0x72d4cb5db927009c(iVar1, -1, 0);
	_0x140b3cb1d424a945(Global_35, iVar1);
	Var4 = { func_1357(26) };
	detach_entity(&(Local_1692[26]), true, true);
	set_entity_coords(&(Local_1692[26]), Var4, true, false, true, true);
	set_entity_rotation(&(Local_1692[26]), Var4.f_3, 2, true);
	func_1394(5);
	func_1394(6);
	func_1394(7);
	func_1394(8);
	func_1394(9);
	func_1394(0);
	func_1394(1);
	func_1394(2);
	func_1394(3);
	func_1394(4);
	func_169(6, 0);
	func_942(6, 1);
	func_1342(0);
	return 1;
}

int func_817(var uParam0)
{
	func_1369();
	_0x1a7a802b2301edc0(Global_35);
	func_176(0);
	fLocal_1956 = 45f;
	func_944(8);
	func_944(9);
	func_944(11);
	func_944(10);
	pause_clock(false, 0);
	func_599(vLocal_1840[0]);
	func_943(iVar1956, 1);
	if (func_1395(76))
	{
		func_1276(79);
	}
	func_27(vLocal_1840[24], 1);
	func_145(uParam0, &(Local_218[42]), "EXC_OPED1", 0);
	if (func_167(110))
	{
		stop_stream(iVar2137);
		func_174(110);
		func_174(106);
	}
	func_1285(uParam0, 42, 1, 0);
	func_1285(uParam0, 43, 1, 0);
	func_1285(uParam0, 44, 1, 0);
	func_1396(Global_35, 0, 1);
	return 1;
}

int func_818(var uParam0)
{
	func_1397();
	if (is_entity_dead(&(Local_218[6])) && !iVar2172 >= 4)
	{
		func_1398(uParam0, "ALLY_DEAD_HOSEA", "", 1, 0);
	}
	if (func_26(vLocal_1840[28]))
	{
		func_1399();
	}
	if (func_167(151))
	{
		if (func_1400(vLocal_1840[14], 30f))
		{
			func_1401();
		}
	}
	func_1369();
	if (!func_167(150))
	{
		if (is_entity_in_volume(Global_35, Local_141.f_9, true, 0))
		{
			func_413(150);
		}
	}
	if (!func_167(126))
	{
		func_1402(uParam0);
	}
	if (func_167(143))
	{
		if (_does_anim_scene_exist(&(Local_2202[39])))
		{
			if ((_0x005e6f28dd7ed58d(&(Local_2202[39]), "p_doorfrench01l") || _0x005e6f28dd7ed58d(&(Local_2202[39]), "p_doorfrench01r")) || _0xf94692eb9dc15d74(&(Local_2202[39]), 0))
			{
				func_494(-1079073283, 0, 1f, 1, 0, 0, 0, 0);
				func_494(-860602360, 0, -1f, 1, 0, 0, 0, 0);
				func_174(143);
			}
		}
	}
	func_1403();
	func_1404(uParam0);
	func_1405();
	func_1269(uParam0);
	func_1406(uParam0);
	func_1407(uParam0);
	func_1270(uParam0);
	func_1408();
	func_1409(uParam0);
	if (!is_entity_dead(Global_35))
	{
		set_ped_reset_flag(Global_35, 131, true);
	}
	if (!is_entity_dead(&(Local_218[2])))
	{
		set_ped_reset_flag(&(Local_218[2]), 53, true);
		set_ped_reset_flag(&(Local_218[2]), 49, true);
	}
	if (!is_entity_dead(&(Local_218[3])))
	{
		set_ped_reset_flag(&(Local_218[3]), 53, true);
		set_ped_reset_flag(&(Local_218[3]), 49, true);
	}
	func_1410(uParam0);
	if (is_valid_interior(get_interior_from_entity(Global_35)))
	{
		set_ped_max_move_blend_ratio(Global_35, 2f);
	}
	else
	{
		if (func_167(150))
		{
			if (!func_167(157))
			{
				func_1411(uParam0);
			}
		}
		disable_control_action(0, -640622144, false);
	}
	func_1298(39);
	switch (func_1277(uParam0))
	{
		case 0:
			func_1396(Global_35, 0, 1);
			func_1282(49);
			func_1282(69);
			func_134(uParam0, 1);
			break;
		case 1:
			func_1412(uParam0);
			if (!func_167(137))
			{
				if (((((Local_218[42]->f_2 == 11 && Local_218[43]->f_2 == 11) && Local_218[44]->f_2 == 11) && Local_218[47]->f_2 == 11) && Local_218[45]->f_2 == 11) || !is_entity_in_volume(Global_35, Local_141.f_25, true, 0))
				{
					func_1325(uParam0, 10);
					func_413(137);
				}
			}
			if (!func_167(123))
			{
				if (is_entity_in_volume(Global_35, Local_141.f_8, true, 0) || is_entity_dead(&(Local_218[52])))
				{
					if (!is_entity_dead(&(Local_218[52])))
					{
						func_1307(&(Local_141.f_50), 665633627);
						func_27(vLocal_1840[25], 1);
						func_1338(10);
						func_1349(11, &(Local_218[6]));
						func_1325(uParam0, 11);
						func_509(uParam0, &(Local_218[6]));
						func_511(func_185(6), 0);
						func_186(func_185(6), 1);
						func_1285(uParam0, 52, 1, 0);
					}
					func_413(123);
					func_134(uParam0, 2);
				}
			}
			break;
		case 2:
			if (func_167(129))
			{
			}
			else
			{
				if (is_entity_dead(&(Local_218[52])))
				{
					set_ped_config_flag(Global_35, 26, true);
					func_1414(uParam0, &(Local_218[6]), 285190, 0, 0, 67108863, 1023, 3, -1);
					bVar0 = true;
					if (!get_ped_index_from_entity_index(get_ped_source_of_death(&(Local_218[52]))) == Global_35)
					{
						bVar0 = false;
					}
					if (bVar0)
					{
						if (!_does_anim_scene_exist(&(Local_2202[39])))
						{
							bVar0 = false;
						}
					}
					if (bVar0)
					{
						if (!_is_anim_scene_started(&(Local_2202[39]), false))
						{
							bVar0 = false;
						}
					}
					if (bVar0)
					{
						switch (iVar2182)
						{
							case 0:
								set_player_control(player_id(), false, 0, false);
								func_1415(1);
								_0x6519238858af5479(0.05f);
								iLocal_2184 = _get_system_time();
								set_time_scale(0.05f);
								iLocal_2185 = 1;
								break;
							case 1:
								set_anim_scene_rate(&(Local_2202[39]), 5f);
								_0x6519238858af5479(0.05f);
								if (_get_system_time() > iVar2181 + 1500)
								{
									bVar1 = true;
								}
								if (!_does_anim_scene_exist(&(Local_2202[39])))
								{
									bVar1 = true;
								}
								if (_does_anim_scene_exist(&(Local_2202[39])) && !_is_anim_scene_started(&(Local_2202[39]), false))
								{
									bVar1 = true;
								}
								if (bVar1)
								{
									func_198();
									set_player_control(player_id(), true, 0, false);
									set_anim_scene_rate(&(Local_2202[39]), 1f);
									set_time_scale(1f);
									iLocal_2185 = 2;
								}
								break;
						}
						if (!iVar2182 == 2)
						{
						}
						else
						{
							func_522(59);
							func_134(uParam0, 3);
							Jump @2810; //curOff = 1241
							if (is_entity_dead(&(Local_218[53])) && is_entity_dead(&(Local_218[54])))
							{
								set_ped_config_flag(Global_35, 26, false);
								func_1282(71);
								func_413(135);
								func_1349(14, &(Local_218[6]));
								func_1325(uParam0, 14);
								func_1350(uParam0, &(Local_218[6]), -2045797884, 422991367, 1, 1);
								func_1289(7);
								set_vehicle_door_control(&(iLocal_979[0]), 5, 0, 1f);
								set_vehicle_door_latched(&(iLocal_979[0]), 5, false, false, false);
								func_134(uParam0, 4);
							}
							else if (func_1416())
							{
								func_1401();
							}
							Jump @2810; //curOff = 1390
							func_1298(41);
							func_1298(42);
							if (!is_valid_interior(get_interior_from_entity(Global_35)) && Local_2202[42]->f_1 == 8)
							{
								if (is_entity_in_volume(Global_35, Local_141.f_9, true, 0))
								{
									func_1325(uParam0, 15);
								}
								else
								{
									func_1325(uParam0, 16);
									if (does_blip_exist(&(iLocal_1825[10])))
									{
										remove_blip(iLocal_1825[10]);
									}
								}
								func_1350(uParam0, &(Local_218[6]), -2045797884, 422991367, 0, 1);
								func_27(vLocal_1840[26], 0);
								func_187(uParam0, &(Local_218[6]), 1);
								iLocal_1825[0] = _blip_add_for_entity(631964804, &(iLocal_979[0]));
								_blip_set_modifier(&(iLocal_1825[0]), -401963276);
								if (does_blip_exist(&(iLocal_1825[0])))
								{
									set_blip_name_from_text_file(&(iLocal_1825[0]), func_1279(9));
								}
								iLocal_1825[10] = _0xa6ef0c54a3443e70(1247852480, Local_141.f_10);
								set_vehicle_is_considered_by_player(&(iLocal_979[0]), true);
								_0xb7079f4c72896756(Global_35, &(iLocal_979[0]), 0, 16, 0);
								_0xb7079f4c72896756(&(Local_218[6]), &(iLocal_979[0]), 1, 16, -1);
								func_134(uParam0, 5);
							}
							Jump @2810; //curOff = 1685
							if ((func_924(vLocal_1840[26]) >= 5f && is_entity_in_volume(Global_35, Local_141.f_9, true, 0)) && iVar1834 == 0)
							{
								if (is_entity_dead(&(Local_218[55])))
								{
									func_1276(93);
								}
								else
								{
									func_1276(87);
								}
								func_244(vLocal_1840[26]);
							}
							func_1298(41);
							func_1298(42);
							if (is_entity_in_volume(Global_35, Local_141.f_10, true, 0))
							{
								bVar2 = true;
								if (!Local_2202[41]->f_1 == 8)
								{
									bVar2 = false;
								}
								if (bVar2)
								{
									func_1417();
									set_gameplay_entity_hint(&(Local_218[6]), 0f, 0f, 0f, true, 2000, 2000, 2000, 0);
									_0xe296208c273bd7f0(-1, -1, 0, 17, 1, 0);
									set_current_ped_weapon(Global_35, -1569615261, false, 0, false, false);
									task_swap_weapon(Global_35, 1, 1, 0, 0);
									task_enter_anim_scene(Global_35, &(Local_2202[41]), "player_zero", "pb_player_loop", 3f, 1, 148, 20000, -1082130432);
									_0xc9caeaeec1256e54(iVar1958);
									func_413(10);
									_0xdd1232b332cbb9e7(3, 1, 0);
									func_1338(15);
									if (does_blip_exist(&(iLocal_1825[10])))
									{
										func_1418(iLocal_1825[10]);
									}
									func_134(uParam0, 6);
								}
							}
							if (is_entity_in_volume(Global_35, Local_141.f_14, true, 0))
							{
								func_1417();
								func_134(uParam0, 7);
							}
							Jump @2810; //curOff = 2011
							_0xc9caeaeec1256e54(iVar1958);
							_0xe296208c273bd7f0(-1, -1, 0, 17, 1, 0);
							func_1298(41);
							func_1298(42);
							if (_0x8d81e7824b7753f7(&(Local_2202[40]), "s_struggle_loop", 1) && _is_anim_scene_started(&(Local_2202[41]), false))
							{
								_0xe296208c273bd7f0(-1, -1, 0, 17, 1, 0);
								func_1332(42);
								if (does_blip_exist(&(iLocal_1825[10])))
								{
									func_1418(iLocal_1825[10]);
								}
								if (does_blip_exist(&(iLocal_1825[0])))
								{
									remove_blip(iLocal_1825[0]);
								}
								func_134(uParam0, 8);
							}
							Jump @2810; //curOff = 2155
							if (does_blip_exist(&(iLocal_1825[10])))
							{
								func_1418(iLocal_1825[10]);
							}
							if (!func_167(155))
							{
								if (is_entity_in_volume(Global_35, Local_141.f_14, true, 0))
								{
									func_413(146);
									task_enter_vehicle(Global_35, &(iLocal_979[0]), 20000, 0, 2f, 1, 0);
									func_413(155);
								}
							}
							if (is_ped_in_vehicle(Global_35, &(iLocal_979[0]), false))
							{
								if (!is_ped_in_vehicle(&(Local_218[6]), &(iLocal_979[0]), false))
								{
									set_ped_into_vehicle(&(Local_218[6]), &(iLocal_979[0]), -1);
								}
								if (!func_167(17))
								{
									func_180(1);
								}
								if (func_167(17))
								{
									if (does_blip_exist(&(iLocal_1825[0])))
									{
										remove_blip(iLocal_1825[0]);
									}
									if (does_blip_exist(&(iLocal_1825[10])))
									{
										func_1418(iLocal_1825[10]);
									}
									func_134(uParam0, 8);
								}
							}
							Jump @2810; //curOff = 2381
							_0xc9caeaeec1256e54(iVar1958);
							if (_does_anim_scene_exist(&(Local_2202[42])) && _is_anim_scene_started(&(Local_2202[42]), false))
							{
								_0xe296208c273bd7f0(-1, -1, 0, 17, 1, 0);
							}
							disable_control_action(0, -640622144, true);
							disable_control_action(0, -17122892, true);
							bVar3 = true;
							if (!func_167(145))
							{
								if (((_does_anim_scene_exist(&(Local_2202[42])) && _is_anim_scene_started(&(Local_2202[42]), false)) && _get_anim_scene_time(&(Local_2202[42])) >= 4.9f) || func_167(146))
								{
									func_942(56, 4);
									func_942(57, 4);
									if (!is_entity_dead(&(Local_218[56])))
									{
										func_145(uParam0, &(Local_218[56]), "EXC_OPED2", 0);
										func_1276(94);
									}
									else if (!is_entity_dead(&(Local_218[57])))
									{
										func_145(uParam0, &(Local_218[57]), "EXC_OPED2", 0);
										func_1276(94);
									}
									func_413(145);
								}
							}
							func_1411(uParam0);
							if (!func_167(157))
							{
								bVar3 = false;
							}
							if (bVar3)
							{
								if ((func_167(146) || _0x005e6f28dd7ed58d(&(Local_2202[42]), "WAGON05X")) || _is_anim_scene_finished(&(Local_2202[42]), false))
								{
									if (!is_ped_in_vehicle(&(Local_218[6]), &(iLocal_979[0]), false))
									{
										set_ped_into_vehicle(&(Local_218[6]), &(iLocal_979[0]), -1);
									}
									if (!is_ped_in_vehicle(Global_35, &(iLocal_979[0]), true))
									{
										set_ped_into_vehicle(Global_35, &(iLocal_979[0]), 0);
									}
									if (!func_167(146))
									{
										set_vehicle_forward_speed(&(iLocal_979[0]), 3f);
										force_entity_ai_and_animation_update(&(iLocal_979[0]), true);
									}
									return 1;
								}
							}
						}
						return 0;
					}
				}
			}
			default:
				break;
	}
}

int func_819(var uParam0)
{
	disable_control_action(0, -640622144, true);
	disable_control_action(0, -17122892, true);
	func_1419(68, 0, 1065353216, 1056964608, 1);
	func_522(68);
	func_506(uParam0, 22, 0);
	func_506(uParam0, 23, 0);
	func_506(uParam0, 24, 0);
	func_506(uParam0, 25, 0);
	func_506(uParam0, 26, 0);
	func_522(func_1306(56));
	func_474(0);
	func_474(1);
	func_474(2);
	func_474(3);
	func_176(1);
	func_506(uParam0, 19, 0);
	func_506(uParam0, 13, 0);
	func_506(uParam0, 14, 0);
	func_506(uParam0, 49, 0);
	func_506(uParam0, 50, 0);
	func_522(39);
	func_522(42);
	func_522(41);
	func_522(36);
	func_522(25);
	iVar0 = 0;
	while (iVar0 < iVar1337)
	{
		if (_does_scenario_point_exist(&(Local_1340[iVar0])))
		{
			_delete_scenario_point(&(Local_1340[iVar0]));
		}
		iVar0++;
	}
	if (does_pickup_exist(iVar2177))
	{
		remove_pickup(iVar2177);
	}
	clear_area(get_entity_coords(&(iLocal_979[0]), true, false), 5f, 2);
	if (does_entity_exist(&(Local_1692[13])))
	{
		delete_object(Local_1692[13]);
	}
	return 1;
}

int func_820(var uParam0)
{
	func_1265(&(iLocal_979[0]), func_1366(iVar1956), 2, 1073741824);
	if (func_195(uParam0) == 1)
	{
		vVar0 = { func_247(iVar1956) };
		_0x9851de7aec10b4e1(vVar0, 100f, 1, 0);
	}
	if (!func_8(uParam0, 8))
	{
		if (!is_entity_dead(&(iLocal_979[0])) && !is_entity_dead(&(Local_218[6])))
		{
			set_ped_into_vehicle(&(Local_218[6]), &(iLocal_979[0]), -1);
			set_ped_into_vehicle(Global_35, &(iLocal_979[0]), -2);
		}
	}
	if (get_best_ped_weapon(Global_35, false, false) == -1569615261)
	{
		func_1393(Global_35, &(iLocal_1390[4]), -1, 0, 0, 1056964608, 1065353216, 0);
		func_1393(Global_35, &(iLocal_1390[5]), -1, 0, 0, 1056964608, 1065353216, 0);
	}
	fLocal_1956 = 25f;
	func_944(8);
	func_944(9);
	func_944(11);
	if (!func_167(2))
	{
		func_182(1, 0);
		func_413(2);
	}
	func_168(0);
	func_1367();
	func_1420();
	return 1;
}

int func_821(var uParam0)
{
	func_1300(2);
	func_1367();
	func_1420();
	set_entity_invincible(&(iLocal_979[0]), true);
	set_entity_proofs(&(iLocal_979[0]), 7, false);
	if (func_195(uParam0) == 0)
	{
		set_vehicle_forward_speed(&(iLocal_979[0]), 3f);
	}
	if (!func_1411(uParam0))
	{
		return 0;
	}
	func_1421(58, 59);
	iVar0 = 86;
	while (iVar0 <= 94)
	{
		if (!is_entity_dead(&(Local_218[iVar0])))
		{
			set_ped_config_flag(&(Local_218[iVar0]), 277, true);
			if (iVar0 == 86)
			{
				func_1321(61, 1);
				_set_lights_intensity_for_entity(&(Local_1692[61]), 2f);
				attach_entity_to_entity(&(Local_1692[61]), &(Local_218[iVar0]), get_ped_bone_index(&(Local_218[iVar0]), 34606), 0.58f, 0f, 0.18f, 0f, -110.16f, 0f, false, false, false, false, 2, true, false, false);
			}
			else if (iVar0 == 94)
			{
				func_1321(63, 1);
				_set_lights_intensity_for_entity(&(Local_1692[63]), 2f);
			}
		}
		iVar0++;
	}
	_0xd4f5efb55769d272(&(iLocal_979[3]), 3);
	_task_start_scenario_in_place(&(Local_218[90]), 1546182539, -1, false, 0, -1f, false);
	set_vehicle_door_control(&(iLocal_979[0]), 5, 0, 1f);
	_0x9587913b9e772d29(&(Local_218[func_1422(58)]), 0);
	_0x9587913b9e772d29(&(Local_218[func_1422(59)]), 0);
	func_210();
	func_170(1);
	func_1282(func_1306(60));
	func_1341(1);
	if (does_particle_fx_looped_exist(iVar2066))
	{
		stop_particle_fx_looped(iVar2066, false);
	}
	return 1;
}

int func_822(var uParam0)
{
	func_163(1);
	if (func_195(uParam0) == 0)
	{
		set_vehicle_forward_speed(&(iLocal_979[0]), 3f);
	}
	if (_0x19c7567d2f2287d6(Local_141.f_45, 7))
	{
	}
	func_1300(2);
	if (!is_entity_dead(Global_35))
	{
		set_ped_config_flag(Global_35, 263, true);
	}
	func_599(vLocal_1840[0]);
	if (!is_entity_dead(&(iLocal_979[0])))
	{
		set_entity_invincible(&(iLocal_979[0]), true);
	}
	if (!is_entity_dead(&(Local_218[2])))
	{
		set_entity_invincible(&(Local_218[2]), true);
	}
	if (!is_entity_dead(&(Local_218[3])))
	{
		set_entity_invincible(&(Local_218[3]), true);
	}
	pause_clock(false, 0);
	_0x7c00cfc48a782dc0(Local_141.f_34, &(iLocal_979[0]), 0f, -14.8f, 0f, 0f, 0f, 45f, 2, 1);
	func_413(181);
	func_943(iVar1956, 1);
	func_413(179);
	_0x19c7567d2f2287d6(Local_141.f_47, 7);
	func_27(vLocal_1840[34], 0);
	if (!func_195(uParam0) == 0)
	{
		func_1362(func_178(6, 4), 200f);
	}
	iVar0 = 28;
	while (iVar0 <= 41)
	{
		func_483(uParam0, iVar0, 0);
		iVar0++;
	}
	func_483(uParam0, 27, 0);
	func_482(4, 1);
	func_482(5, 1);
	set_ped_config_flag(&(Local_218[6]), 130, true);
	fLocal_2188 = get_random_float_in_range(5f, 12f);
	func_27(vLocal_1840[30], 0);
	if ((func_1423(func_12(18)) == 0 || func_1423(func_12(18)) == -2065815962) || func_936(Global_35, -1725579161, 0))
	{
		func_1424(uParam0, "pl1_hat");
		func_1425(&(uParam0->f_7375), "pl1_hat");
	}
	else
	{
		func_1424(uParam0, "pl2_hatless");
		func_1425(&(uParam0->f_7375), "pl2_hatless");
	}
	return 1;
}

int func_823(var uParam0)
{
	func_1426();
	func_1300(2);
	func_1427();
	_0x541b8576615c33de(Local_141.f_47, get_offset_from_entity_in_world_coords(&(iLocal_979[0]), vLocal_2193));
	_0xa07cf1b21b56f041(Local_141.f_47, 0f, 0f, (get_entity_heading(&(iLocal_979[0])) + vLocal_2196.z));
	iLocal_2192 = func_1428();
	func_1429(uParam0);
	func_1269(uParam0);
	func_1430(uParam0);
	func_1270(uParam0);
	func_1431(uParam0);
	switch (func_1277(uParam0))
	{
		case 0:
			if (does_entity_exist(&(Local_1692[56])))
			{
				func_506(uParam0, 56, 0);
			}
			if (does_entity_exist(&(Local_1692[57])))
			{
				func_506(uParam0, 57, 0);
			}
			func_482(2, 0);
			func_482(1, 0);
			if (func_195(uParam0) == 0)
			{
				set_vehicle_forward_speed(&(iLocal_979[0]), 3f);
			}
			if ((!is_entity_dead(&(Local_218[6])) && !is_entity_dead(Global_35)) && !is_entity_dead(&(iLocal_979[0])))
			{
				_0xaab050da48b57978(Global_35, "Default_Panic", 0, -1, 4);
				func_1432();
				_0x7c06330bfdda182e(&(iLocal_979[0]));
				set_current_ped_weapon(Global_35, get_best_ped_weapon(Global_35, false, false), false, 0, false, false);
				task_vehicle_follow_waypoint_recording(&(Local_218[6]), &(iLocal_979[0]), func_525(71), 0, 0, 6664, -1, -1082130432, 0, 1073741824, 0);
				func_145(uParam0, Global_35, "ARTHUR", 0);
				func_145(uParam0, &(Local_218[6]), "HOSEA", 0);
				func_1276(102);
				func_134(uParam0, 1);
			}
			break;
		case 1:
			func_1433(uParam0);
			func_1434();
			if (!func_167(171))
			{
				if (func_1435(uParam0))
				{
					func_522(14);
					func_413(171);
				}
			}
			func_1436(uParam0);
			if (is_ped_shooting(Global_35))
			{
				func_244(vLocal_1840[34]);
			}
			func_1437(uParam0);
			if (!func_167(180))
			{
				if (func_924(vLocal_1840[34]) >= 10f)
				{
					if (func_1438())
					{
						if (func_1439(50f))
						{
							func_1276(113);
							func_244(vLocal_1840[34]);
						}
						else
						{
							func_244(vLocal_1840[34]);
						}
					}
				}
			}
			if (iVar2196 < 2)
			{
				func_1440();
			}
			if (iVar2189 >= 85)
			{
				func_599(vLocal_1840[0]);
				func_482(5, 0);
				func_134(uParam0, 2);
			}
			break;
		case 2:
			if (!func_26(vLocal_1840[0]))
			{
				if (!func_167(166))
				{
					if (!func_167(159))
					{
						iVar1 = 58;
						while (iVar1 <= 83)
						{
							if (Local_218[iVar1]->f_2 == 5)
							{
								if (!is_entity_dead(&(Local_218[iVar1])))
								{
									if (func_914(Global_35, &(Local_218[iVar1]), 1, 1) <= 100f)
									{
										iVar0++;
									}
								}
							}
							iVar1++;
						}
						if (iVar0 == 0)
						{
							func_27(vLocal_1840[0], 0);
							func_135(uParam0, 3);
							func_1441();
							func_413(159);
						}
					}
				}
				if (!func_167(167))
				{
					if (iVar2189 >= 118)
					{
						if (!func_167(180))
						{
							if (func_1442(&iVar2))
							{
								func_1443(iVar2, 3, 4);
							}
							func_413(180);
						}
						func_1441();
						iVar3 = 58;
						while (iVar3 <= 83)
						{
							if (!is_entity_dead(&(Local_218[iVar3])))
							{
								func_942(iVar3, 9);
							}
							iVar3++;
						}
						func_413(167);
						func_27(vLocal_1840[0], 0);
					}
				}
			}
			else if (func_924(vLocal_1840[0]) >= 5f)
			{
				func_135(uParam0, 3);
				func_599(vLocal_1840[0]);
				_0x935cf6e42baf7f4d(Global_35);
				func_1276(111);
				func_413(166);
				func_1282(27);
				func_134(uParam0, 3);
			}
			break;
		case 3:
			if (func_1336(func_1279(111)) || func_1280(func_1279(111)))
			{
			}
			else
			{
				func_27(vLocal_1840[35], 0);
				if (!func_924(vLocal_1840[35]) >= 4f)
				{
				}
				else
				{
					func_1276(108);
					func_134(uParam0, 4);
					Jump @1178; //curOff = 1017
					func_1298(47);
					func_1444(uParam0);
					if (!func_167(186))
					{
						if (iVar2189 >= 124)
						{
							func_1276(112);
							func_413(186);
						}
					}
					if (iVar2189 >= 135)
					{
						if (Local_2202[47]->f_1 == 8)
						{
							func_135(uParam0, 4);
							set_current_ped_weapon(Global_35, -1569615261, true, 0, false, false);
							func_1332(47);
							func_174(179);
							func_184(uParam0, 58, 83, 0);
							func_134(uParam0, 29);
						}
					}
					Jump @1178; //curOff = 1140
					Local_1429[2]->f_6 = 12;
					func_1429(uParam0);
					func_1289(8);
					func_1289(10);
					return 1;
				}
			}
			return 0;
			default:
				break;
	}
}

int func_824(var uParam0)
{
	iVar0 = 58;
	while (iVar0 <= 59)
	{
		func_520(iVar0);
		iVar0++;
	}
	func_483(uParam0, 22, 0);
	func_483(uParam0, 90, 0);
	func_483(uParam0, 91, 0);
	func_483(uParam0, 92, 0);
	func_500(uParam0, 3);
	if (does_entity_exist(&(Local_1692[60])))
	{
		func_520(60);
	}
	func_500(uParam0, 4);
	func_522(33);
	func_522(34);
	func_522(35);
	func_522(0);
	func_522(14);
	func_522(45);
	set_ped_config_flag(Global_35, 263, false);
	set_random_trains(true);
	func_170(0);
	func_168(1);
	func_192(1, 0);
	func_482(4, 0);
	_0x935cf6e42baf7f4d(Global_35);
	return 1;
}

int func_825(var uParam0)
{
	iVar0 = func_195(uParam0);
	if (iVar0 == 2)
	{
		if (_does_anim_scene_exist(uParam0->f_7375.f_804) && _is_anim_scene_loaded(uParam0->f_7375.f_804, true, false))
		{
			func_1445(&(uParam0->f_7375), "PL1_HAT");
		}
		else
		{
			func_1446(&(uParam0->f_7375), "PL1_HAT", 0);
			func_1425(&(uParam0->f_7375), "PL1_HAT");
		}
		if (!func_1447(&(uParam0->f_7375), "BRT1_EXT", 1, 1))
		{
			return 0;
		}
	}
	if (iVar0 == 2)
	{
		if (!&iLocal_2497[4] == 7)
		{
			if (!func_1444(uParam0))
			{
				return 0;
			}
		}
	}
	func_163(1);
	return 1;
}

int func_826(var uParam0)
{
	func_1300(2);
	func_1282(func_1294(8));
	func_1282(func_1294(9));
	if (!Local_218[8]->f_3 == 8)
	{
		func_932(uParam0, 8, 0, 1, 0, func_555(8, 13), 1);
	}
	if (!Local_218[9]->f_3 == 8)
	{
		func_932(uParam0, 9, 0, 1, 0, func_555(8, 14), 1);
	}
	func_1447(&(uParam0->f_7375), "BRT1_EXT", 1, 1);
	if (func_195(uParam0) == 0)
	{
		if (_does_anim_scene_exist(&(Local_2202[47])))
		{
			if (!_is_anim_scene_active(&(Local_2202[47])))
			{
				if ((_get_anim_scene_duration(&(Local_2202[47])) - _get_anim_scene_time(&(Local_2202[47]))) <= 2f)
				{
					_0xe296208c273bd7f0(2000, -1, 0, 17, 1, 0);
				}
				if (is_waypoint_playback_going_on_for_vehicle(&(iLocal_979[0]), func_525(71)))
				{
					vehicle_waypoint_playback_override_speed(&(iLocal_979[0]), 7f);
				}
				return 0;
			}
		}
	}
	_0xe296208c273bd7f0(0, -1, 0, 17, 1, 0);
	func_1289(9);
	func_1289(11);
	func_1289(12);
	func_1289(13);
	func_522(71);
	set_ped_using_action_mode(Global_35, false, -1, 0);
	return 1;
}

int func_827(var uParam0)
{
	func_506(uParam0, 4, 0);
	func_483(uParam0, 6, 0);
	delete_vehicle(iLocal_979[0]);
	do_screen_fade_out(0);
	func_483(uParam0, 84, 0);
	func_483(uParam0, 85, 0);
	func_184(uParam0, 42, 57, 0);
	func_184(uParam0, 58, 83, 0);
	func_184(uParam0, 86, 94, 0);
	set_player_control(player_id(), false, 0, false);
	set_entity_coords(Global_35, func_178(8, 14), true, false, true, true);
	return 1;
}

int func_828(var uParam0)
{
	switch (func_1277(uParam0))
	{
		case 0:
			do_screen_fade_out(0);
			if (!Local_218[8]->f_3 == 8)
			{
				func_932(uParam0, 8, 0, 1, 0, func_555(8, 13), 1);
				return 0;
			}
			if (!Local_218[9]->f_3 == 8)
			{
				func_932(uParam0, 9, 0, 1, 0, func_555(8, 14), 1);
				return 0;
			}
			func_134(uParam0, 1);
			break;
		case 1:
			do_screen_fade_out(0);
			if (func_1448(uParam0))
			{
				if (!Local_2202[48]->f_1 == 8)
				{
					func_1298(48);
				}
				else
				{
					func_168(1);
					func_413(201);
					if (!func_1423(func_12(18)) == 0 && !func_1423(func_12(18)) == -2065815962)
					{
						func_676(Global_35, func_1423(func_12(18)), 0, -358215195, 1, 1, 1, 0, 1, 0);
						func_1335(func_12(18), 0);
					}
					func_134(uParam0, 29);
				}
			}
			break;
		case 29:
			return 1;
	}
	return 0;
}

int func_829(var uParam0)
{
	do_screen_fade_out(0);
	return 1;
}

int func_830(var uParam0)
{
	func_163(1);
	func_1282(func_1294(8));
	func_1282(func_1294(9));
	iVar0 = func_195(uParam0);
	if (iVar0 == 0)
	{
		return 1;
	}
	if (!Local_2202[48]->f_1 == 8)
	{
		func_1298(48);
		return 0;
	}
	if (!&iLocal_2497[5] == 7)
	{
		func_1448(uParam0);
		if (!&iLocal_2497[5] == 7)
		{
			return 0;
		}
		if (func_195(uParam0) == 0)
		{
			func_1424(uParam0, "NormalStart");
			func_1449(uParam0, "NormalStart");
		}
		else if (func_195(uParam0) == 2)
		{
			func_1424(uParam0, "MultiStart");
			func_1449(uParam0, "MultiStart");
		}
	}
	return 1;
}

int func_831(var uParam0)
{
	do_screen_fade_out(0);
	func_287(uParam0, 1);
	bVar0 = true;
	iVar1 = func_195(uParam0);
	if (!iVar1 == 1)
	{
		if (!&iLocal_2497[5] == 7)
		{
			func_1448(uParam0);
			if (!&iLocal_2497[5] == 7)
			{
				bVar0 = false;
			}
		}
	}
	if (!bVar0)
	{
		return 0;
	}
	func_190();
	func_1450(uParam0, &(Local_2202[48]), 0);
	return 1;
}

int func_832(var uParam0)
{
	func_163(0);
	func_27(vLocal_1840[0], 1);
	func_1451();
	return 1;
}

int func_833(var uParam0)
{
	switch (func_1277(uParam0))
	{
		case 0:
			if (func_924(vLocal_1840[0]) >= 2f)
			{
				func_134(uParam0, 29);
			}
			break;
		case 29:
			return 1;
	}
	return 0;
}

int func_834(var uParam0)
{
	func_413(3);
	func_522(func_1294(8));
	func_522(func_1294(9));
	func_1335(func_12(22), 1);
	return 1;
}

void func_835()
{
	Local_141 = _create_volume_box(1011.093f, -1630.141f, 47.42579f, 0f, 0f, 0f, 29f, 10f, 4f);
	Local_141.f_1 = _create_volume_cylinder(1010.659f, -1742.868f, 47.26095f, 0f, 0f, 0f, 4f, 4f, 2f);
	Local_141.f_2 = _create_volume_cylinder(1010.747f, -1743.739f, 47.94599f, 0f, 0f, 0f, 65f, 65f, 2f);
	Local_141.f_3 = _create_volume_box(1334.614f, -1368.861f, 80.21037f, 0f, 0f, -9.249999f, 8.25f, 2.75f, 2.75f);
	Local_141.f_4 = _create_volume_box(1336.836f, -1374.096f, 80.50656f, 0f, 0f, -8.75f, 2.25f, 2.5f, 2f);
	Local_141.f_5 = _create_volume_box(1350.97f, -1376.583f, 80.35908f, 0f, 0f, -9.000002f, 2f, 2f, 2f);
	Local_141.f_6 = _create_volume_box(1346.077f, -1380.703f, 83.11883f, 0f, 0f, 0f, 2f, 3.25f, 2f);
	Local_141.f_7 = _create_volume_box(1341.13f, -1370.423f, 84.3026f, 0f, 0f, 0f, 4f, 2.5f, 2f);
	Local_141.f_8 = _create_volume_box(1350.496f, -1374.922f, 84.3026f, 0f, 0f, 0f, 4.75f, 2f, 2f);
	Local_141.f_9 = _create_volume_box(1332.217f, -1370.738f, 84.2575f, 0f, 0f, -11f, 9.25f, 8f, 2f);
	Local_141.f_10 = _create_volume_box(1332.806f, -1367.687f, 84.37645f, 0f, 0f, -9.499997f, 7.75f, 1f, 2f);
	Local_141.f_11 = _create_volume_box(1369.219f, -1340.014f, 78.27577f, 0f, 0f, 0f, 12f, 12f, 4f);
	Local_141.f_12 = _create_volume_box(1063.735f, -1144.231f, 67.37908f, 0f, 0f, 0f, 8f, 24f, 4f);
	Local_141.f_13 = _create_volume_cylinder(1011.188f, -1756.31f, 46.80532f, 0f, 0f, 0f, 80f, 80f, 10f);
	Local_141.f_14 = _create_volume_cylinder(1334.37f, -1362.256f, 78.61098f, 0f, 0f, 0f, 5f, 5f, 2f);
	Local_141.f_15 = _create_volume_box(1351.563f, -1376.797f, 84.27888f, 0f, 0f, -7.249998f, 1f, 3f, 2f);
	Local_141.f_16 = _create_volume_cylinder(1342.3f, -1370.658f, 84.25959f, 0f, 0f, 0f, 3f, 3f, 1f);
	Local_141.f_17 = _create_volume_cylinder(1345.677f, -1375.626f, 80.95174f, 0f, 0f, 0f, 70f, 70f, 10f);
	Local_141.f_18 = _create_volume_cylinder(775.2953f, -1057.084f, 53.50795f, 0f, 0f, 0f, 1f, 1f, 1f);
	Local_141.f_19 = _create_volume_cylinder(1342.581f, -1374.584f, 80.45657f, 0f, 0f, 0f, 3f, 3f, 1f);
	Local_141.f_20 = _create_volume_cylinder(1011.911f, -1658.913f, 47.94268f, 0f, 0f, 0f, 10f, 12f, 2f);
	Local_141.f_21 = _create_volume_cylinder(1010.702f, -1722.439f, 50.55621f, 0f, 0f, 0f, 120f, 120f, 5f);
	Local_141.f_22 = _create_volume_cylinder(1335.701f, -1365.75f, 80.52887f, 0f, 0f, 0f, 32f, 32f, 5f);
	Local_141.f_23 = _create_volume_box(1358.37f, -1349.493f, 78.27577f, 0f, 0f, 0f, 12f, 12f, 4f);
	Local_141.f_24 = _create_volume_box(1168.466f, -1156.437f, 73.19447f, 0f, 0f, 0f, 8f, 30f, 6f);
	Local_141.f_25 = _create_volume_box(1339.393f, -1374.525f, 80.46268f, 0f, 0f, -9.999994f, 2.5f, 2.5f, 2f);
	Local_141.f_26 = _create_volume_box(1334.555f, -1513.881f, 68.86044f, 0f, 0f, -40.74999f, 2000f, 5f, 63.75f);
	Local_141.f_27 = _create_volume_box(1134.765f, -1157.48f, 71.78003f, 0f, 0f, 0f, 5f, 20f, 5f);
	Local_141.f_28 = _create_volume_box(1088.116f, -1163.307f, 69.06021f, 0f, 0f, 0f, 10f, 20f, 5f);
	Local_141.f_29 = _create_volume_box(1309.628f, -1290.142f, 77.03355f, 0f, 0f, 0f, 30f, 5f, 5f);
	Local_141.f_30 = _create_volume_box(958.0494f, -1006.686f, 61.32523f, 0f, 0f, 32.75f, 5f, 30f, 5f);
	Local_141.f_31 = _create_volume_box(1340.472f, -1374.79f, 82.54517f, 0f, 0f, -9.999994f, 30f, 20f, 10f);
	Local_141.f_32 = _create_volume_box(1336.814f, -1371.504f, 80.50656f, 0f, 0f, -35.25f, 2.25f, 2.5f, 2f);
	Local_141.f_33 = _create_volume_box(1011.923f, -1720.769f, 50.41222f, 0f, 0f, 0f, 100f, 150f, 10f);
	Local_141.f_34 = _create_volume_box(816.2902f, -969.5671f, 55.32801f, -3.061903f, 4.593769f, 46.70786f, 20f, 20f, 10f);
	Local_141.f_35 = _create_volume_cylinder(1010.702f, -1661.875f, 50.55621f, 0f, 0f, 0f, 350f, 350f, 10f);
	Local_141.f_36 = _create_volume_cylinder(1010.702f, -1661.875f, 50.55621f, 0f, 0f, 0f, 100f, 100f, 10f);
	Local_141.f_37 = _create_volume_box(934.5416f, -1158.946f, 57.39164f, 0f, 0f, -92.00001f, 60f, 5f, 10f);
	Local_141.f_38 = _create_volume_box(1348.502f, -1375.442f, 80.4133f, 0f, 0f, 0f, 4.5f, 5.25f, 2f);
	Local_141.f_39 = _create_volume_box(1339.476f, -1373.106f, 84.22903f, 0f, 0f, -9.999994f, 6.5f, 16.25f, 2f);
	Local_141.f_40 = _create_volume_box(1341.743f, -1370.318f, 80.68825f, 0f, 0f, -14.5f, 32.5f, 38f, 8f);
	Local_141.f_41 = _create_volume_box(1357.286f, -1350.439f, 78.88776f, 0f, 0f, 0f, 4f, 8f, 4f);
	Local_141.f_42 = _create_volume_box(1345.835f, -1313.77f, 77.44494f, 0f, 0f, 0f, 4f, 15f, 4f);
	Local_141.f_43 = _create_volume_box(1367.032f, -1321.912f, 78.29046f, 0f, 0f, 0f, 4f, 15f, 4f);
	Local_141.f_44 = _create_volume_box(1013.607f, -1473.987f, 49.099f, 0f, 0f, 0f, 90f, 400f, 16f);
	Local_141.f_45 = _create_volume_box(1302.3f, -1193.89f, 80.3672f, 0f, 0f, 50.50002f, 15f, 60.75f, 5f);
	Local_141.f_46 = _create_volume_box(1348.333f, -1373.312f, 79.72182f, 0f, 0f, -55f, 1.5f, 2.5f, 2f);
	Local_141.f_47 = _create_volume_box(815.8618f, -946.8087f, 53.08833f, 0f, 0f, 45f, 12f, 12f, 4f);
	Local_141.f_48 = _create_volume_box(1355.82f, -1358.359f, 79.02025f, 0f, 0f, -12.25f, 7.25f, 24.75f, 5f);
	Local_141.f_49 = _create_volume_cylinder(1120.638f, -1056.955f, 52.40304f, 0f, 0f, 0f, 1000f, 1000f, 100f);
	Local_141.f_50 = _create_volume_cylinder(1341.888f, -1370.161f, 84.33126f, 0f, 0f, 0f, 3f, 3f, 1f);
	Local_141.f_51 = _create_volume_box(1342.797f, -1356.293f, 77.20355f, 0f, 0f, -10.75f, 50f, 23.75f, 7f);
	Local_141.f_52 = _create_volume_box(1336.35f, -1371.14f, 84.26489f, 0f, 0f, -11.5f, 3f, 3f, 2f);
	Local_141.f_53 = _create_volume_cylinder(1330.068f, -1369.267f, 80.02079f, 0f, 0f, 0f, 4f, 4f, 2f);
	Local_141.f_54 = _create_volume_box(1011.626f, -1729.128f, 46.61f, 0f, 0f, 0f, 59.25f, 123f, 11.25f);
	Local_141.f_55 = _create_volume_box(1271.033f, -1249.566f, 78.99709f, 0f, 0f, -25f, 296f, 160f, 25f);
	Local_141.f_56 = _create_volume_box(1346.898f, -1359.466f, 78.83055f, 0f, 0f, -11.5f, 13f, 8.75f, 4f);
	Local_141.f_57 = _create_volume_box(1346.779f, -1375.948f, 80f, 0f, 0f, -9.75f, 12f, 10.75f, 1f);
	Local_141.f_58 = _create_volume_box(1345.442f, -1375.639f, 80.9309f, 0f, 0f, -9.999994f, 16f, 13f, 3f);
	Local_141.f_59 = _create_volume_box(1010.513f, -1770.196f, 48.77008f, 0f, 0f, 0f, 80f, 80f, 10f);
	Local_141.f_60 = _create_volume_box(1380.015f, -1331.424f, 81.59587f, 0f, 0f, -40.99999f, 193.25f, 112.25f, 10f);
	Local_141.f_61 = _create_volume_box(1339.56f, -1375.022f, 79.89015f, 0f, 0f, -9.999994f, 40f, 25f, 4f);
	Local_141.f_62 = _create_volume_box(1345.724f, -1377.432f, 81.17819f, 0f, 0f, 0f, 2f, 2f, 2f);
	Local_141.f_63 = _create_volume_box(1347.898f, -1372.036f, 84.28947f, 0f, 0f, -9.999994f, 2f, 1f, 2f);
	Local_141.f_64 = _create_volume_box(1335.843f, -1370.82f, 84.31538f, 0f, 0f, -9.75f, 1f, 1.5f, 2f);
	Local_141.f_65 = _create_volume_box(654.3865f, -1252.856f, 44.5542f, 0f, 0f, 0f, 10f, 10f, 4f);
	Local_141.f_66 = _create_volume_box(1353.653f, -1377.055f, 82.8372f, 0f, 0f, -9.999994f, 4.5f, 12f, 8f);
	Local_141.f_67 = _create_volume_box(1011.898f, -1650.011f, 48.55844f, 0f, 0f, 0f, 20.75f, 42f, 5f);
	Local_141.f_68 = _create_volume_box(1312.417f, -1352.31f, 78.2f, 0f, 0f, -17.75f, 5.25f, 9.25f, 2.25f);
}

void func_836()
{
	Local_1429[0]->f_1 = { func_178(9, 0) };
	Local_1429[0]->f_4 = 1;
	Local_1429[0]->f_5 = 0;
	Local_1429[1]->f_1 = { func_178(9, 1) };
	Local_1429[1]->f_4 = 1;
	Local_1429[1]->f_5 = 0;
}

void func_837()
{
}

void func_838()
{
}

void func_839()
{
}

void func_840()
{
	Local_1429[2]->f_1 = { func_178(9, 2) };
	Local_1429[2]->f_4 = 1;
	Local_1429[2]->f_5 = 0;
	Local_1429[2]->f_8 = 10f;
}

float func_841(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 319.7756f;
				case 1:
					return 78.3007f;
				case 2:
					return 353.8539f;
				case 3:
					return 37.1875f;
				case 4:
					return 117.4565f;
				case 5:
					return 167.9971f;
				case 6:
					return 307.8322f;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 80.288f;
				case 1:
					return 347.6767f;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return 185.7061f;
				case 1:
					return 355.7061f;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return 168.5694f;
				case 1:
					return 204.5696f;
				case 2:
					return 22.569f;
				case 3:
					return 140.5692f;
				case 4:
					return 314.5697f;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return 41.07f;
				case 1:
					return 51.56f;
				case 2:
					return 57.04f;
				case 3:
					return 71.9248f;
				case 4:
					return 58.8392f;
				case 5:
					return 58.8392f;
				case 6:
					return 58.8392f;
				case 7:
					return 246f;
				case 8:
					return 90f;
				case 9:
					return 352.5693f;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					return 260.7531f;
				case 1:
					return 259.5189f;
				case 2:
					return 356.5957f;
				case 3:
					return 345.4066f;
				case 4:
					return 158.4005f;
				case 5:
					return 318.472f;
				case 6:
					return 3.9392f;
				case 7:
					return 160.4719f;
				case 8:
					return 160.4723f;
				case 9:
					return 48.1089f;
				case 10:
					return 22.5532f;
				case 11:
					return 316.548f;
				case 12:
					return 313.5955f;
				case 13:
					return 120.1215f;
				case 14:
					return 117.2178f;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					return 314.7599f;
				case 1:
					return 18.632f;
				case 2:
					return 163.657f;
				case 3:
					return 330.7379f;
				case 4:
					return 330.7379f;
			}
			break;
		case 7:
			switch (iParam1)
			{
				case 0:
					return 354.42f;
				case 1:
					return 311.2782f;
				case 2:
					return 329.5839f;
				case 3:
					return 284.4141f;
			}
			break;
		case 8:
			switch (iParam1)
			{
				case 0:
					return 324.7599f;
				case 1:
					return 115.0659f;
				case 2:
					return 357.2f;
				case 3:
					return 90.7243f;
				case 4:
					return 300.7595f;
				case 5:
					return 109.0656f;
				case 6:
					return 269.7083f;
				case 7:
					return 83.7083f;
				case 8:
					return 269.7083f;
				case 9:
					return 347f;
				case 10:
					return 322.7599f;
				case 11:
					return 297.0662f;
				case 12:
					return 341.0661f;
				case 13:
					return 335.0661f;
				case 14:
					return 296.0001f;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 0:
					return 48.7602f;
				case 1:
					return 30.7602f;
				case 2:
					return 46.7602f;
			}
			break;
		case 10:
			switch (iParam1)
			{
				case 0:
					return 162.9294f;
				case 1:
					return 210.7686f;
				case 2:
					return 238.7617f;
				case 3:
					return 230.761f;
			}
			break;
		case 11:
			switch (iParam1)
			{
				case 0:
					return 74.2209f;
				case 1:
					return 255.115f;
				case 2:
					return 16.929f;
				case 3:
					return 20.865f;
				case 4:
					return 14.4004f;
			}
			break;
	}
	return 0f;
}

bool func_842(var uParam0, int iParam1)
{
	return (uParam0->f_8 && iParam1) != 0;
}

bool func_843(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

Vector3 func_844(var uParam0)
{
	return uParam0->f_862;
}

void func_845(var uParam0)
{
	if (func_1452(&iVar0))
	{
		if (func_624(iVar0, 0))
		{
			if (func_648(iVar0) == -525676072)
			{
				_set_ped_component_disabled(Global_35, 1249071452, 0);
				func_676(Global_35, -2065815962, 0, 1108822547, 0, 1, 0, 0, 0, 0);
			}
			else
			{
				_set_ped_component_disabled(Global_35, 1606587013, 0);
			}
			if (!func_624(*uParam0, 0))
			{
				*uParam0 = iVar0;
			}
		}
	}
}

void func_846(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (Global_1935630->f_12)
	{
		return;
	}
	Global_16 = 1;
	if (!network_is_game_in_progress())
	{
		func_119(0, 0);
		func_1453(-1);
	}
	func_1454(1);
	set_entity_invincible(Global_35, true);
	if (!func_843(*iParam0, 32))
	{
		iParam1 |= 16;
	}
	if (!func_843(*iParam0, 64))
	{
		iParam1 |= 8;
	}
	if (!func_843(*iParam0, 128))
	{
		iParam1 |= 32;
	}
	if (func_843(*iParam0, 131072))
	{
		iParam1 |= 2048;
	}
	if (!func_843(*iParam0, 32768))
	{
		set_player_control(get_player_index(), false, iParam1, true);
	}
	if (!func_843(*iParam0, 1))
	{
		_0xf239400e16c23e08(0, 0);
	}
	if (!func_843(*iParam0, 65536))
	{
		set_everyone_ignore_player(player_id(), true);
	}
	if (!func_843(*iParam0, 4) && !func_843(*iParam0, 2))
	{
		_hide_hud_component(-1679307491);
	}
	else
	{
		_display_hud_component(-1679307491);
	}
	if (!func_843(*iParam0, 2048))
	{
		func_858(0, 0);
	}
	if (func_843(*iParam0, 8))
	{
		clear_ped_tasks_immediately(Global_35, false, true);
	}
	if (func_843(*iParam0, 256))
	{
		_hide_ped_weapons(Global_35, 2, true);
	}
	if (func_843(*iParam0, 8192))
	{
		func_1455();
	}
	if (!func_843(*iParam0, 262144))
	{
		set_ped_reset_flag(Global_35, 264, true);
	}
	if (!func_843(*iParam0, 512))
	{
		if (is_gameplay_hint_active())
		{
			stop_gameplay_hint(false);
		}
	}
	if (!func_843(*iParam0, 1024))
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
		if (!func_843(*iParam0, 16))
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
						if (func_1456() == iVar7)
						{
							bVar8 = true;
						}
					}
					vVar3.x = iParam3;
					vVar3.f_1 = iParam4;
					vVar3.f_2 = iParam5;
					if (func_421(vVar3))
					{
						vVar3 = { get_offset_from_entity_in_world_coords(Global_35, 0f, IntToFloat((-1 + iVar2)), 0f) };
						func_1457(&vVar3, 50, 10, 0);
					}
					_0xed00d72f81cf7278(iVar7, 0, 1);
					set_entity_coords(iVar7, vVar3, false, true, true, true);
					if (bVar8)
					{
						func_1458(2);
						func_1459(-1);
						func_1460(vVar3);
						func_1462(func_1461());
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
	if (!func_843(*iParam0, 4096))
	{
		func_1463(Global_35);
	}
	if (!func_843(*iParam0, 1048576))
	{
		_0xdd1232b332cbb9e7(7, 1, 0);
	}
	if (!func_843(*iParam0, 2097152))
	{
		if (func_1464() || _0x50f124e6ef188b22(Global_35))
		{
			func_1465(1);
		}
	}
	if (Global_1359489->f_16 & 4194304 == 0)
	{
		Global_1359489->f_16 |= 4194304;
	}
	*iParam0 = 0;
}

void func_847(var uParam0, vector3 vParam1)
{
	uParam0->f_862 = { vParam1 };
}

void func_848(var uParam0)
{
	if (func_842(uParam0, 2048) && !func_421(func_1466(uParam0)))
	{
		bVar0 = _does_volume_exist(uParam0->f_4);
		iVar1 = _get_last_mount(Global_35);
		if ((!is_entity_dead(iVar1) && ((bVar0 && is_entity_in_volume(iVar1, uParam0->f_4, true, 0)) || func_842(uParam0, -2147483648))) && get_mount(Global_35) != iVar1)
		{
			iVar2 = 2;
			if (is_ped_in_writhe(iVar1))
			{
				iVar2 |= 32;
			}
			func_915(iVar1, func_1466(uParam0), func_1467(uParam0), iVar2, 1073741824);
		}
		iVar3 = get_players_last_vehicle();
		if ((!is_entity_dead(iVar3) && ((bVar0 && is_entity_in_volume(iVar3, uParam0->f_4, true, 0)) || func_842(uParam0, -2147483648))) && !is_ped_in_vehicle(Global_35, iVar3, true))
		{
			func_915(iVar3, func_1466(uParam0), func_1467(uParam0), 2, 1073741824);
		}
	}
}

void func_849(var uParam0)
{
	if ((func_842(uParam0, 268435456) && !func_421(func_1466(uParam0))) && is_ped_in_any_vehicle(Global_35, false))
	{
		iVar0 = get_vehicle_ped_is_using(Global_35);
		if (!is_entity_dead(iVar0))
		{
			vVar1 = { func_1466(uParam0) };
			func_915(iVar0, vVar1, func_1468(vVar1, Global_36, 1), 2, 1073741824);
			set_vehicle_on_ground_properly(iVar0, 0f);
			set_entity_velocity(iVar0, 0f, 0f, 0f);
			set_vehicle_forward_speed(iVar0, 0f);
		}
	}
}

void func_850(var uParam0, vector3 vParam1, int iParam4, bool bParam5)
{
	uParam0->f_865 = { vParam1 };
	uParam0->f_868 = iParam4;
	if (func_421(vParam1))
	{
		func_1469(uParam0, 2048, 1);
	}
	else
	{
		func_796(uParam0, 2048);
		if (bParam5)
		{
			func_796(uParam0, -2147483648);
		}
	}
}

void func_851(var uParam0)
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
					if (!func_1470(uParam0->f_13[iVar0], 8))
					{
						if (func_738(func_1118(iVar1, 0, 1, 0)))
						{
							if (!func_1471(uParam0, get_current_ped_weapon_entity_index(iVar1, 0)))
							{
								set_current_ped_weapon(iVar1, -1569615261, true, 0, false, false);
							}
						}
						if (func_738(func_1118(iVar1, 1, 1, 0)))
						{
							if (!func_1471(uParam0, get_current_ped_weapon_entity_index(iVar1, 1)))
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

void func_852(var uParam0, bool bParam1)
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

void func_853(var uParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
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
			func_1215(262144);
		}
	}
	else
	{
		bParam6 = false;
		if (iParam3 == -1 || iParam3 == 8)
		{
			func_1472(iParam1, 29, bVar4, 1, 0);
			func_1472(iParam1, 31, bVar4, 1, 0);
			func_1472(iParam1, 30, bVar4, 1, 0);
			func_1472(iParam1, 22, bVar4, 1, 0);
			func_1472(iParam1, 37, bVar4, 1, 0);
		}
	}
	if ((func_1155(32768) && func_1473(1108822547, 8)) && func_1474(10, iParam3))
	{
		func_1475(iParam1, 0, 1);
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
			iVar3 = func_1223(iVar1, 1);
			if (func_1473(iVar3, 8))
			{
			}
			else if (&Global_1946804->f_57[iVar1]->f_2[0] == -1802376732 || &uParam0->f_1[iVar1] == 0)
			{
			}
			else
			{
				iVar2 = &uParam0->f_1[iVar1];
				if (!func_1474(iVar1, iParam3))
				{
				}
				else if ((func_1473(iVar3, 6) || &uParam0->f_1[iVar1] == &Global_1946804->f_57[iVar1]) || uParam0->f_1[iVar1]->f_1 == 289238755)
				{
					if (!func_1473(iVar3, 1) || bParam2)
					{
						Global_1946804->f_857++;
						if (!bParam6)
						{
							func_1472(iParam1, iVar1, bVar4, 1, 0);
						}
						if (uParam0->f_1[iVar1]->f_1 == 289238755)
						{
							Global_1946804->f_2456[iVar1]->f_1 = 289238755;
						}
						func_1476(iVar3, 1, 6);
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
								func_1472(iParam1, iVar1, bVar4, 1, &(uParam0->f_1[iVar1]));
							}
							Global_1946804->f_2456[iVar1] = &uParam0->f_1[iVar1];
							Global_1946804->f_2456[iVar1]->f_1 = uParam0->f_1[iVar1]->f_1;
							if (func_1473(iVar3, 1))
							{
								func_1477(iVar3, 1, 6);
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

bool func_854(int iParam0)
{
	switch (iParam0)
	{
		case 14:
		case 34:
			return !func_1478((*Global_1835011)[iParam0]);
	}
	return false;
}

Vector3 func_855(int iParam0)
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

int func_856(int iParam0, bool bParam1, int iParam2, bool bParam3)
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

int func_857(int iParam0, int iParam1)
{
	return func_1479(&uVar0, iParam0, iParam1);
}

void func_858(bool bParam0, bool bParam1)
{
	iVar2 = 0;
	while (iVar2 < 29)
	{
		iVar4 = iVar2;
		if (get_current_ped_weapon(Global_35, &iVar3, false, iVar4, true))
		{
			if (func_738(iVar3) && _0x705be297eebdb95d(iVar3))
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
		func_1480(1);
	}
}

void func_859(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
}

void func_860(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_1 = 0;
}

void func_861(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
}

void func_862(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
}

void func_863(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

void func_864(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

void func_865(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
}

void func_866(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
}

void func_867(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
}

void func_868(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

void func_869(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
}

int func_870(var uParam0, int iParam1)
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

int func_871(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (!func_872((*uParam0)[iVar0]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_872(var uParam0)
{
	return *uParam0 != 0;
}

bool func_873(var uParam0, int iParam1)
{
	iVar0 = func_1481(iParam1);
	return (uParam0 && iVar0) != 0;
}

void func_874(var uParam0)
{
	if (!func_904(uParam0->f_1, 1))
	{
		request_model(*uParam0, false);
		func_1482(&(uParam0->f_1), 1);
	}
}

bool func_875(var uParam0)
{
	return !is_string_null_or_empty(*uParam0);
}

void func_876(var uParam0)
{
	if (!func_904(uParam0->f_3, 1))
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
		func_1482(&(uParam0->f_3), 1);
	}
}

bool func_877(var uParam0)
{
	return !is_string_null_or_empty(*uParam0);
}

void func_878(var uParam0)
{
	if (!func_904(uParam0->f_1, 1))
	{
		request_anim_dict(*uParam0);
		func_1482(&(uParam0->f_1), 1);
	}
}

bool func_879(var uParam0)
{
	return !is_string_null_or_empty(*uParam0);
}

bool func_880(var uParam0)
{
	if (func_904(uParam0->f_1, 2))
	{
		return true;
	}
	if (!func_904(uParam0->f_1, 1))
	{
		func_1483(uParam0);
	}
	if (_0x85b8f04555ab49b8(*uParam0))
	{
		func_1482(&(uParam0->f_1), 2);
		return true;
	}
	return false;
}

bool func_881(var uParam0)
{
	if (func_904(*uParam0, 2))
	{
		return true;
	}
	if (!func_904(*uParam0, 1))
	{
		func_1484(uParam0);
	}
	if (has_ptfx_asset_loaded())
	{
		func_1482(uParam0, 2);
		return true;
	}
	return false;
}

bool func_882(var uParam0)
{
	return !is_string_null_or_empty(*uParam0);
}

void func_883(var uParam0)
{
	if (!func_904(uParam0->f_2, 1))
	{
		if (func_1485(uParam0))
		{
			if (_is_anim_scene_metadata_loaded(uParam0->f_1, false))
			{
				sVar0 = func_1486(get_entity_model(Global_35));
				if (_0x6f1f0b17109309da(uParam0->f_1, sVar0))
				{
					set_anim_scene_entity(uParam0->f_1, sVar0, Global_35, 0);
				}
				else if (_0x6f1f0b17109309da(uParam0->f_1, "player_zero") && func_326())
				{
					set_anim_scene_entity(uParam0->f_1, "player_zero", Global_35, 0);
				}
				else if (_0x6f1f0b17109309da(uParam0->f_1, "player_three") && func_1074())
				{
					set_anim_scene_entity(uParam0->f_1, "player_three", Global_35, 0);
				}
				load_anim_scene(uParam0->f_1);
				func_1482(&(uParam0->f_2), 1);
			}
		}
	}
}

bool func_884(var uParam0)
{
	return !is_string_null_or_empty(*uParam0);
}

void func_885(var uParam0, int iParam1)
{
	if (!func_904(uParam0->f_1, 1))
	{
		if (!_is_anim_scene_loaded(iParam1, true, false))
		{
			return;
		}
		_0xdf7b5144e25cd3fe(iParam1, *uParam0);
		func_1482(&(uParam0->f_1), 1);
	}
}

bool func_886(var uParam0)
{
	return *uParam0 != 0;
}

void func_887(var uParam0)
{
	if (!func_904(uParam0->f_2, 1))
	{
		_request_propset(*uParam0);
		func_1482(&(uParam0->f_2), 1);
	}
}

bool func_888(var uParam0)
{
	return *uParam0 != 0;
}

void func_889(var uParam0)
{
	if (!func_904(uParam0->f_3, 1))
	{
		_0x72d4cb5db927009c(*uParam0, uParam0->f_1, uParam0->f_2);
		func_1482(&(uParam0->f_3), 1);
	}
}

bool func_890(var uParam0)
{
	return !is_string_null_or_empty(*uParam0);
}

void func_891(var uParam0)
{
	if (!func_904(uParam0->f_1, 1))
	{
		request_script_audio_bank(*uParam0);
		func_1482(&(uParam0->f_1), 1);
	}
}

bool func_892(var uParam0)
{
	return func_1487(*uParam0);
}

void func_893(var uParam0)
{
	if (!func_904(uParam0->f_1, 1))
	{
		_request_imap(*uParam0);
		func_1482(&(uParam0->f_1), 1);
	}
}

bool func_894(var uParam0)
{
	return !is_string_null_or_empty(*uParam0);
}

void func_895(var uParam0)
{
	if (!func_904(uParam0->f_2, 1))
	{
		_0xe368e8422c860ba7(*uParam0, uParam0->f_1, -2);
		func_1482(&(uParam0->f_2), 1);
	}
}

bool func_896(var uParam0)
{
	return !is_string_null_or_empty(*uParam0);
}

void func_897(var uParam0)
{
	if (!func_904(uParam0->f_1, 1))
	{
		_0x2b6529c54d29037a(*uParam0);
		func_1482(&(uParam0->f_1), 1);
	}
}

bool func_898(var uParam0, int iParam1, char* sParam2)
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

void func_899(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5)
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
		sParam2 = func_792(iParam1);
	}
	if (is_string_null_or_empty(sParam2))
	{
		if (does_entity_exist(iParam1))
		{
		}
		return;
	}
	iVar0 = func_1488(uParam0, iParam1);
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
		iVar1 = func_1489(uParam0, sParam2);
		if (does_entity_exist(iVar1) && iVar1 != iParam1)
		{
			func_498(uParam0, iVar1);
		}
	}
	if (iVar0 == -1)
	{
		iVar0 = func_1490(uParam0);
	}
	if (iVar0 != -1)
	{
		uParam0->f_13[iVar0] = iParam1;
		StringCopy(&(uParam0->f_13[iVar0]->f_1), sParam2, 64);
		uParam0->f_13[iVar0]->f_9 = iParam3;
		uParam0->f_13[iVar0]->f_10 = iParam4;
		if (bParam5)
		{
			func_1491(uParam0->f_13[iVar0], 2);
		}
		else
		{
			func_1492(uParam0->f_13[iVar0], 2);
		}
	}
}

struct<4> func_900(int iParam0)
{
	if (!func_213(iParam0))
	{
		return Var0;
	}
	return (*Global_1835011)[iParam0]->f_3;
}

bool func_901(var uParam0, char* sParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (!bParam4 && !uParam0->f_2501)
	{
		if (!func_923(uParam0, sParam1, iParam2, bParam4, bParam5))
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
			if (func_1493(uParam0, 0))
			{
				if (func_1494(uParam0, iParam2, iParam3, &cVar2, &iVar1, &iVar18))
				{
					if (func_1495(uParam0, 1, &iVar0))
					{
					}
					if (func_1496(uParam0, 3, &cVar2))
					{
					}
					if (func_1495(uParam0, 4, &iVar1))
					{
						cVar2.f_8 = iVar1;
					}
					if (func_1495(uParam0, 7, &(cVar2.f_12)))
					{
					}
					if (func_1495(uParam0, 8, &iVar1))
					{
						cVar2.f_10 = iVar1;
					}
					if (func_1495(uParam0, 10, &(cVar2.f_14)))
					{
					}
					if (func_1495(uParam0, 11, &iVar1))
					{
						cVar2.f_15 = iVar1;
					}
					if (iVar18 == 0)
					{
						if (iVar0 < 40 && uParam0->f_2504 < 40)
						{
							if (!func_1497(uParam0, &cVar2, uParam0->f_2504))
							{
								*(*uParam0)[uParam0->f_2504] = { cVar2 };
								func_550((*uParam0)[uParam0->f_2504], 1048576);
								uParam0->f_2504++;
							}
						}
					}
					else if (iVar18 == 3)
					{
						if (iVar0 < 40 && uParam0->f_2505 < 40)
						{
							*uParam0->f_641[uParam0->f_2505] = { cVar2 };
							func_550(uParam0->f_641[uParam0->f_2505], 1048576);
							uParam0->f_2505++;
						}
					}
					else if (iVar18 == 1)
					{
						if (iVar0 < 60 && uParam0->f_2506 < 60)
						{
							*uParam0->f_1282[uParam0->f_2506] = { cVar2 };
							func_550(uParam0->f_1282[uParam0->f_2506], 1048576);
							if (!bVar19 && func_241(&cVar2, 4))
							{
								prepare_music_event(uParam0->f_1282[uParam0->f_2506]);
								bVar19 = true;
							}
							uParam0->f_2506++;
						}
					}
					else if (iVar0 < 15 && uParam0->f_2507 < 15)
					{
						if (!func_1497(&(uParam0->f_2243), &cVar2, uParam0->f_2507))
						{
							*uParam0->f_2243[uParam0->f_2507] = { cVar2 };
							func_550(uParam0->f_2243[uParam0->f_2507], 1048576);
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
			if (func_1493(uParam0, 12))
			{
				if (func_1495(uParam0, 13, &iVar0))
				{
				}
				if (func_1495(uParam0, 14, &iVar1))
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

void func_902(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((func_241((*uParam0)[iVar0], 1048576) && (*uParam0)[iVar0]->f_9 == 8) && !func_241((*uParam0)[iVar0], 1))
		{
			func_1498((*uParam0)[iVar0]);
		}
		iVar0++;
	}
}

bool func_903(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, int iParam12)
{
	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < *uParam0)
	{
		if (func_872((*uParam0)[iVar1]))
		{
			if (func_873((*uParam0)[iVar1]->f_2, iParam12))
			{
				if (!func_1499((*uParam0)[iVar1]))
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
		if (func_875((*uParam1)[iVar1]))
		{
			if (func_873((*uParam1)[iVar1]->f_4, iParam12))
			{
				if (!func_1500((*uParam1)[iVar1]))
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
		if (func_877((*uParam2)[iVar1]))
		{
			if (func_873((*uParam2)[iVar1]->f_2, iParam12))
			{
				if (!func_1501((*uParam2)[iVar1]))
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
		if (func_879((*uParam3)[iVar1]))
		{
			if (func_873((*uParam3)[iVar1]->f_2, iParam12))
			{
				if (!func_880((*uParam3)[iVar1]))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	if (func_873(uParam4->f_1, iParam12))
	{
		if (!func_881(uParam4))
		{
			iVar0 = 0;
		}
	}
	iVar1 = 0;
	while (iVar1 < *uParam5)
	{
		if (func_882((*uParam5)[iVar1]))
		{
			if (func_873((*uParam5)[iVar1]->f_3, iParam12))
			{
				if (func_1485((*uParam5)[iVar1]))
				{
					if (!func_905((*uParam5)[iVar1]))
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
		if (func_882((*uParam5)[iVar1]))
		{
			if (func_873((*uParam5)[iVar1]->f_3, iParam12))
			{
				if (func_1485((*uParam5)[iVar1]))
				{
					if (func_905((*uParam5)[iVar1]))
					{
						iVar2 = 0;
						while (iVar2 < 20)
						{
							if (func_884((*uParam5)[iVar1]->f_4[iVar2]))
							{
								if (!func_1502((*uParam5)[iVar1]->f_4[iVar2], (*uParam5)[iVar1]->f_1))
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
		if (func_886((*uParam6)[iVar1]))
		{
			if (func_873((*uParam6)[iVar1]->f_3, iParam12))
			{
				if (!func_1503((*uParam6)[iVar1]))
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
		if (func_888((*uParam7)[iVar1]))
		{
			if (func_873((*uParam7)[iVar1]->f_4, iParam12))
			{
				if (!func_1504((*uParam7)[iVar1]))
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
		if (func_890((*uParam8)[iVar1]))
		{
			if (func_873((*uParam8)[iVar1]->f_2, iParam12))
			{
				if (!func_1505((*uParam8)[iVar1]))
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
		if (func_892((*uParam9)[iVar1]))
		{
			if (func_873((*uParam9)[iVar1]->f_2, iParam12))
			{
				if (!func_1506((*uParam9)[iVar1]))
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
		if (func_894((*uParam10)[iVar1]))
		{
			if (func_873((*uParam10)[iVar1]->f_3, iParam12))
			{
				if (!func_1507((*uParam10)[iVar1]))
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
		if (func_896((*uParam11)[iVar1]))
		{
			if (func_873((*uParam11)[iVar1]->f_2, iParam12))
			{
				if (!func_1508((*uParam11)[iVar1]))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	return iVar0;
}

bool func_904(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_905(var uParam0)
{
	if (func_904(uParam0->f_2, 2))
	{
		return true;
	}
	if (!func_904(uParam0->f_2, 1))
	{
		func_883(uParam0);
	}
	if (_is_anim_scene_loaded(uParam0->f_1, true, false))
	{
		func_1482(&(uParam0->f_2), 2);
		return true;
	}
	return false;
}

int func_906(int iParam0)
{
	if (!func_213(iParam0))
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

bool func_907(var uParam0, int iParam1, var uParam2, bool bParam3, int iParam4, int iParam5, int iParam6, float fParam7, bool bParam8, int iParam9, bool bParam10, int iParam11, bool bParam12, bool bParam13)
{
	if (!func_508(iParam1))
	{
		return false;
	}
	if ((!is_entity_dead(*uParam2) && func_204(iParam1)) && func_1509(iParam1) == *uParam2)
	{
		return true;
	}
	*uParam2 = func_1510(iParam1, 1, 0, iParam4, iParam5, iParam6, fParam7, bParam8, 1, 0, 0, bParam10, 0, iParam9, 0, 0, 0, iParam11, 1, 1, bParam13, 0, 1, 0, 1);
	if (does_entity_exist(*uParam2))
	{
		func_1511(uParam0, *uParam2, iParam1, bParam3, (bParam8 && bParam12), bParam10, bParam13);
		func_1512(iParam1);
		return true;
	}
	return false;
}

bool func_908(var uParam0)
{
	if (!func_421(uParam0->f_5417))
	{
		return true;
	}
	switch (uParam0->f_607)
	{
		case 7:
			func_1513(uParam0, -271.1003f, 798.9771f, 118.0088f, 359.8847f);
			break;
		case 15:
			func_1513(uParam0, -101.4083f, -34.0691f, 94.9419f, 43.5697f);
			break;
		case 8:
			func_1513(uParam0, 884.1405f, 1283.638f, 233.1437f, 288.539f);
			break;
		case 25:
			func_1513(uParam0, 1154.01f, -87.7217f, 87.745f, 333.9165f);
			break;
		case 14:
			func_1513(uParam0, -257.4742f, 716.4608f, 114.3661f, 298.3928f);
			break;
		case 9:
			func_1513(uParam0, -113.3479f, -14.8907f, 96.1036f, 66.3363f);
			break;
		case 13:
			func_1513(uParam0, -893.1545f, -1097.781f, 59.3724f, 67.7581f);
			break;
		case 11:
			func_1513(uParam0, -1528.842f, -315.0988f, 143.0872f, 97.0964f);
			break;
		case 26:
			func_1513(uParam0, 705.8042f, -1230.294f, 44.2243f, 60.9884f);
			break;
		case 53:
			func_1513(uParam0, 705.8099f, -1229.4f, 44.2311f, 67.5463f);
			break;
		case 16:
			func_1513(uParam0, 667.7685f, -1211.293f, 45.3101f, 92.5271f);
			break;
		case 17:
			func_1513(uParam0, 1339.753f, -1305.21f, 75.5849f, 337.5673f);
			break;
		case 19:
			func_1513(uParam0, 1857.32f, -1367.512f, 41.2697f, 162.265f);
			break;
		case 24:
			func_1513(uParam0, 691.6649f, -1235.476f, 43.3174f, 227.0576f);
			break;
		case 23:
			func_1513(uParam0, 676.2985f, -1227.818f, 43.598f, 352.091f);
			break;
		case 22:
			func_1513(uParam0, 663.6722f, -1229.636f, 43.3769f, 171.6396f);
			break;
		case 36:
			func_1513(uParam0, 2647.098f, -1270.327f, 51.0841f, 113.0633f);
			break;
		case 28:
			func_1513(uParam0, 2413.412f, -1220.656f, 44.9084f, 0.0301f);
			break;
		case 30:
			func_1513(uParam0, 1853.05f, -1835.788f, 42.0957f, 29.7034f);
			break;
		case 37:
			func_1513(uParam0, 1842.425f, -1833.848f, 43.2426f, 0.0743f);
			break;
		case 45:
			func_1513(uParam0, 2824.987f, -1165.335f, 47.3695f, 190.1776f);
			break;
		case 48:
			func_1513(uParam0, 483.1636f, 2222.628f, 246.0867f, 109.4105f);
			break;
		case 49:
			func_1513(uParam0, 2376.538f, 1339.845f, 105.3362f, 193.8848f);
			break;
		case 50:
			func_1513(uParam0, 2377.94f, 1338.177f, 105.4092f, 196.4492f);
			break;
		case 51:
			func_1513(uParam0, 491.0881f, 2221.171f, 246.1786f, 246.5501f);
			break;
		case 55:
			func_1513(uParam0, 2774.684f, 513.5845f, 66.9882f, 355.826f);
			break;
		case 76:
			func_1513(uParam0, -1616.827f, -1379.19f, 81.8942f, 339.9481f);
			break;
		case 73:
			func_1513(uParam0, -1611.214f, -1344.436f, 81.8767f, 359.9349f);
			break;
		case 75:
			func_1513(uParam0, -1678.714f, -1378.879f, 83.969f, 347.6046f);
			break;
		case 69:
			func_1513(uParam0, -302.3015f, 786.3279f, 116.9486f, 185.0768f);
			break;
		case 70:
			func_1513(uParam0, -1566.102f, -1448.615f, 90.6887f, 291.3719f);
			break;
		case 71:
			func_1513(uParam0, -1625.965f, -1395.404f, 81.6263f, 114.6379f);
			break;
		case 72:
			func_1513(uParam0, -835.0144f, -1343.726f, 42.473f, 0.0002f);
			break;
	}
	return !func_421(uParam0->f_5417);
}

int func_909(int iParam0, var uParam1)
{
	uParam1->f_10 = func_288(uParam1->f_10);
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
		if (func_421(uParam1->f_6))
		{
		}
	}
	bVar0 = func_420();
	if (*uParam1)
	{
		if (bVar0 && !func_349((*Global_1835011)[4]->f_1, 1))
		{
			if (func_1514(5))
			{
				func_573(5);
				func_1515(5);
				func_1459(0);
				func_1458(0);
			}
		}
	}
	if (func_1516(Global_36) == 8)
	{
		*iParam0 = 1;
		return 0;
	}
	if ((bVar0 && func_349((*Global_1835011)[37]->f_1, 1)) && !func_349((*Global_1835011)[43]->f_1, 1))
	{
		*iParam0 = 1;
		return 0;
	}
	if ((bVar0 && func_349((*Global_1835011)[43]->f_1, 1)) && !func_349((*Global_1835011)[44]->f_1, 1))
	{
		if (uParam1->f_10 == 0)
		{
			*iParam0 = 1;
			return 0;
		}
	}
	iVar1 = uParam1->f_10;
	iVar2 = func_239(iVar1);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	if (func_576(iVar1))
	{
		bVar3 = true;
		if (func_1517(iVar1))
		{
			bVar4 = true;
		}
		if (func_583(iVar1))
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
				func_584(uParam1->f_10);
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
			if (!func_1514(0) && func_1514(1))
			{
				func_1518(1, 0);
				*iParam0 = 0;
				return 0;
			}
		}
	}
	if (uParam1->f_4)
	{
		if (uParam1->f_10 == 0)
		{
			if (func_1519())
			{
				func_1520();
			}
			func_1459(0);
			func_1458(0);
			func_1460(uParam1->f_6);
		}
	}
	if (!func_576(uParam1->f_10))
	{
		if (*uParam1)
		{
			if ((func_1521(uParam1->f_10) == 0 || func_1522(uParam1->f_10) == 0) || func_1523(uParam1->f_10) == 0)
			{
				func_1524(uParam1->f_10);
			}
			func_1525(uParam1->f_10);
			func_1526(uParam1->f_10, uParam1->f_6, uParam1->f_9);
			*iParam0 = 0;
			return 0;
		}
		*iParam0 = 1;
		return 0;
	}
	iVar1 = uParam1->f_10;
	iVar2 = func_239(iVar1);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	if (func_576(iVar1))
	{
		bVar3 = true;
		if (func_1517(iVar1))
		{
			bVar4 = true;
		}
		if (func_583(iVar1))
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
			if (!func_421(uParam1->f_6))
			{
				set_entity_coords(iVar2, uParam1->f_6, false, true, true, true);
				set_entity_heading(iVar2, uParam1->f_9);
				_0x9587913b9e772d29(iVar2, 0);
			}
		}
	}
	if (func_1527(uParam1->f_10))
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
			Var8 = { func_1528(uParam1->f_10) };
			Var10 = { func_1529() };
			func_1530(iVar2, &Var8, &Var10, 0);
			_set_ped_as_saddle_horse_for_player(iVar6, iVar2);
			set_ped_config_flag(iVar2, 186, false);
		}
	}
	if (!uParam1->f_1)
	{
		*iParam0 = 2;
		return iVar2;
	}
	if (!func_569(uParam1->f_10))
	{
		set_entity_as_mission_entity(iVar2, true, true);
		func_1531(uParam1->f_10);
		if (uParam1->f_2 && !func_421(uParam1->f_6))
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
	func_568(uParam1->f_10);
	if (func_569(uParam1->f_10))
	{
		iVar16 = func_284(uParam1->f_10);
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

bool func_910(int iParam0, int iParam1, float fParam2, bool bParam3)
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

bool func_911(int iParam0)
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

bool func_912(int iParam0, int iParam1, vector3 vParam2, float fParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10)
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
	if (!func_1532(iParam1))
	{
		return false;
	}
	iVar0 = func_1533(iParam1, vParam2, fParam5, iParam8, 1, bParam6, bParam7);
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

void func_913(var uParam0, bool bParam1)
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

float func_914(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

void func_915(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
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
	if (iParam0 == func_1534(Global_35) && is_player_teleport_active())
	{
	}
	if (func_1535(iParam0))
	{
		if (func_911(get_ped_index_from_entity_index(iParam0)))
		{
			_0x0348469daa17576c(iParam0);
		}
	}
	if (func_416(iParam5, 4) && is_entity_a_ped(iParam0))
	{
		iVar1 = get_ped_index_from_entity_index(iParam0);
		if (is_ped_on_vehicle(iVar1, false))
		{
			iVar0 = get_vehicle_ped_is_in(iVar1, true);
			if (does_entity_exist(iVar0) && !is_entity_dead(iVar0))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_915(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (is_ped_on_mount(iVar1))
		{
			iVar2 = get_mount(iVar1);
			if (does_entity_exist(iVar2) && !is_entity_dead(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_915(iVar2, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
	}
	if (!func_416(iParam5, 32))
	{
		if (bVar4 && is_entity_attached(iParam0))
		{
			clear_ped_tasks_immediately(get_ped_index_from_entity_index(iParam0), false, true);
		}
	}
	if (func_416(iParam5, 2))
	{
		if (is_entity_a_vehicle(iParam0))
		{
			_set_entity_coords_and_heading(iParam0, vParam1, fParam4, true, func_416(iParam5, 32), true);
		}
		else
		{
			_set_entity_coords_and_heading(iParam0, vParam1, fParam4, true, func_416(iParam5, 32), true);
			_0x9587913b9e772d29(iParam0, 0);
		}
	}
	else if (func_416(iParam5, 129))
	{
		if (func_416(iParam5, 128))
		{
			if (get_water_height_no_waves(vParam1, &uVar5))
			{
				vParam1.f_2 = uVar5;
			}
		}
		set_entity_coords_no_offset(iParam0, vParam1, func_416(iParam5, 32), true, true);
		set_entity_heading(iParam0, fParam4);
	}
	else
	{
		_set_entity_coords_and_heading(iParam0, vParam1, fParam4, true, func_416(iParam5, 32), true);
	}
	if (bVar4)
	{
		if (!func_416(iParam5, 16))
		{
			_set_ped_crouch_movement(get_ped_index_from_entity_index(iParam0), bVar3, 0, false);
		}
		if (func_1535(iParam0))
		{
			iVar6 = get_ped_index_from_entity_index(iParam0);
			_0x0348469daa17576c(iVar6);
			if (!func_416(iParam5, 32))
			{
				clear_ped_tasks(iVar6, 1, 0);
				task_stand_still(iVar6, -1);
			}
		}
		set_ped_cloth_package_index(get_ped_index_from_entity_index(iParam0), 1);
		if (get_ped_index_from_entity_index(iParam0) == Global_35 && !func_416(iParam5, 64))
		{
			if (!is_screen_faded_out())
			{
			}
			set_gameplay_cam_relative_heading(0f, 1f);
			set_gameplay_cam_relative_pitch(0f, 1f);
		}
	}
}

bool func_916(int iParam0, int iParam1, int iParam2)
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

bool func_917(var uParam0, int iParam1)
{
	switch (func_1536(uParam0))
	{
		case 0:
			if (!func_1537(iParam1, &(uParam0->f_8), &(uParam0->f_6)))
			{
				return true;
			}
			func_1538(uParam0, 1);
			break;
		case 1:
			func_1539(uParam0);
			render_script_cams(true, false, 3000, true, false, 0);
			iVar0 = 0;
			func_846(&iVar0, 0, 2, 0, 0, 0, 0);
			func_1538(uParam0, 2);
			break;
		case 2:
			if (func_1540(uParam0))
			{
				func_1541(uParam0->f_8, 5000f, 0);
				_0x4759cc730f947c81();
				func_27(&(uParam0->f_3), 1);
				func_1538(uParam0, 3);
			}
			break;
		case 3:
			if (func_924(&(uParam0->f_3)) >= 1f)
			{
				func_1538(uParam0, 4);
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
			func_1542(&iVar1, 0);
			release_script_audio_bank();
			func_1538(uParam0, 0);
			return true;
	}
	return false;
}

void func_918(var uParam0)
{
	if (!func_120(uParam0, 524288))
	{
		MemCopy(&uVar0, {func_110(uParam0->f_607)}, 8);
		func_1543(&uVar0, 15000, 0, 0, 0, 1);
		func_103(uParam0, 524288);
	}
}

bool func_919(var uParam0)
{
	iVar0 = func_35(uParam0);
	if (func_162(uParam0, func_33(uParam0)) <= 3)
	{
		iVar0 = func_33(uParam0);
	}
	Var1 = { func_1544(uParam0, iVar0) };
	if (func_1546(&(uParam0->f_10792), Var1, func_1545(&(uParam0->f_10792)), 0))
	{
		func_140(uParam0, func_33(uParam0), 262144);
		if (func_1547(&(uParam0->f_10792), 524288))
		{
			func_402(uParam0, 67108864);
			func_1548(&(uParam0->f_10792), 524288);
		}
		func_1549(&(uParam0->f_7375), &(uParam0->f_10792));
		return true;
	}
	return false;
}

void func_920(var uParam0, int iParam1)
{
	uParam0->f_5307 = (uParam0->f_5307 - (uParam0->f_5307 && iParam1));
}

bool func_921(var uParam0, struct<4> Param1)
{
	if (is_string_null_or_empty(&Param1))
	{
		return true;
	}
	if (func_8(uParam0, 16777216))
	{
		func_1550(uParam0);
		func_1551(uParam0);
		return true;
	}
	if (func_1552(Param1, &(uParam0->f_7375), uParam0))
	{
		return true;
	}
	if (func_154(uParam0) == 0)
	{
		func_947(uParam0);
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
			func_1553(uParam0);
			func_920(uParam0, 524288);
			func_1554(uParam0);
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

bool func_922(var uParam0)
{
	iVar0 = 1;
	if (!func_1555(func_61(uParam0), func_120(uParam0, 65536)))
	{
		iVar0 = 0;
	}
	Var1 = { func_1556(func_61(uParam0)) };
	if (!is_string_null_or_empty(&Var1))
	{
		if (!func_1557(func_61(uParam0)))
		{
			iVar0 = 0;
		}
	}
	if (!func_446(uParam0, func_33(uParam0), 1))
	{
		iVar0 = 0;
	}
	if (func_120(uParam0, 4) && !_0x5e420ff293ee5472())
	{
		iVar0 = 0;
	}
	MemCopy(&cVar9, {func_900(uParam0->f_607)}, 3);
	if (!func_23(&(uParam0->f_8269)))
	{
		if (!func_923(&(uParam0->f_8269), &cVar9, 0, 1, 1))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

bool func_923(var uParam0, char* sParam1, int iParam2, bool bParam3, bool bParam4)
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
	func_1558(uParam0);
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

float func_924(var uParam0)
{
	if (!func_26(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_552(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_596() - uParam0->f_1);
}

bool func_925()
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

void func_926(float fParam0, float fParam1)
{
	set_gameplay_cam_relative_heading(fParam0, 1f);
	set_gameplay_cam_relative_pitch(fParam1, 1f);
}

void func_927()
{
	if (func_167(29))
	{
		return;
	}
	func_348(304805134, 1, 1);
	func_413(29);
}

void func_928()
{
	iLocal_1390[0] = -1493265355;
	iLocal_1390[1] = -598316488;
	iLocal_1390[2] = -916314281;
	iLocal_1390[6] = -183018591;
	iLocal_1390[11] = 1845102363;
	iLocal_1390[12] = -183018591;
	iLocal_1390[3] = -183018591;
	iLocal_1390[4] = 379542007;
	iLocal_1390[5] = &iLocal_1390[3];
	iLocal_1390[7] = -1361787316;
	iLocal_1390[8] = 379542007;
	iLocal_1390[9] = -598316488;
	iLocal_1390[13] = -618550132;
	iLocal_1390[10] = func_1559(13631488, 1056964608, 1065353216);
	iLocal_1390[14] = -164645981;
}

bool func_929(int iParam0)
{
	bVar2 = true;
	iVar0 = 0;
	while (iVar0 < iVar1088)
	{
		iVar1 = iVar0;
		if (func_873(vLocal_1091[iVar1]->f_2, iParam0))
		{
			if (&vLocal_1091[iVar1] == 0)
			{
				func_1282(iVar1);
				bVar2 = false;
			}
			else if (&vLocal_1091[iVar1] == 2)
			{
				bVar2 = false;
			}
		}
		iVar0++;
	}
	func_209();
	if (bVar2)
	{
		func_413(14);
	}
	return bVar2;
}

bool func_930(var uParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4)
{
	switch (iVar2193)
	{
		case 0:
			func_1282(18);
			if (!func_1322(18))
			{
			}
			else
			{
				if (bParam1)
				{
					func_1560(1);
				}
				else if (bParam2)
				{
					func_1560(2);
				}
				else
				{
					return false;
				}
				Jump @1448; //curOff = 117
				iVar7 = func_1561(uParam0, func_519(18), 1);
				if (does_entity_exist(iVar7))
				{
					iLocal_979[0] = get_vehicle_index_from_entity_index(iVar7);
					if (is_vehicle_driveable(&(iLocal_979[0]), false, false))
					{
						func_1560(3);
					}
					else if (bParam2)
					{
						delete_vehicle(iLocal_979[0]);
						func_413(22);
						func_1560(2);
					}
					else
					{
						func_1560(8);
					}
				}
				else if (bParam2)
				{
					func_1560(2);
				}
				else
				{
					func_1560(8);
				}
				Jump @1448; //curOff = 236
				Var8 = { func_1366(iVar1952) };
				iLocal_979[0] = create_vehicle(func_519(18), Var8, Var8.f_3, true, true, false, false);
				if (!is_entity_dead(&(iLocal_979[0])))
				{
					func_1560(3);
				}
				else
				{
					func_1560(8);
				}
				Jump @1448; //curOff = 306
				if (!is_entity_dead(&(iLocal_979[0])))
				{
					Local_218[2] = _get_ped_in_draft_seat(&(iLocal_979[0]), 0);
					Local_218[3] = _get_ped_in_draft_seat(&(iLocal_979[0]), 1);
				}
				if (!is_entity_dead(&(Local_218[2])) && !is_entity_dead(&(Local_218[3])))
				{
					func_942(2, 1);
					func_942(3, 1);
					if (bParam3)
					{
						_request_propset(iParam4);
						func_1560(4);
					}
					else
					{
						iLocal_2200 = 7;
					}
				}
				Jump @1448; //curOff = 422
				if (_has_propset_loaded(iParam4))
				{
					if (is_entity_dead(&(iLocal_979[0])))
					{
					}
					else
					{
						if (!_does_propset_exist(iVar1382) && _0x53784cea0159439b(&(iLocal_979[0])))
						{
							uLocal_1389 = _0xce2acd6f602803e5(&(iLocal_979[0]));
							if (_does_propset_exist(iVar1382))
							{
								func_1560(5);
								return false;
							}
						}
						else if (_does_propset_exist(iVar1382))
						{
							func_1560(5);
						}
						else
						{
							_0xd80faf919a2e56ea(&(iLocal_979[0]), iParam4);
							set_vehicle_extra(&(iLocal_979[0]), 5, true);
							uLocal_1389 = _0xce2acd6f602803e5(&(iLocal_979[0]));
						}
						Jump @1448; //curOff = 569
						if (iVar1952 == 0 || iVar1952 == 1)
						{
							if (!_0xf42db680a8b2a4d9(iVar1382))
							{
								return false;
							}
							if (is_entity_dead(&(iLocal_979[0])))
							{
								return false;
							}
							if (func_195(uParam0) == 0 && iVar1952 == 0)
							{
								iVar12 = func_1561(uParam0, func_519(25), 1);
								if (does_entity_exist(iVar12))
								{
									if (decor_get_int(iVar12, func_412()) == 0)
									{
										if (!does_entity_exist(&(Local_1692[13])))
										{
											Local_1692[13] = get_object_index_from_entity_index(iVar12);
										}
									}
									else if (decor_get_int(iVar12, func_412()) == 1)
									{
										if (!does_entity_exist(&(Local_1692[14])))
										{
											Local_1692[14] = get_object_index_from_entity_index(iVar12);
										}
									}
								}
								iVar13 = func_1561(uParam0, func_519(25), 1);
								if (does_entity_exist(iVar13))
								{
									if (decor_get_int(iVar13, func_412()) == 0)
									{
										if (!does_entity_exist(&(Local_1692[13])))
										{
											Local_1692[13] = get_object_index_from_entity_index(iVar13);
										}
									}
									else if (decor_get_int(iVar13, func_412()) == 1)
									{
										if (!does_entity_exist(&(Local_1692[14])))
										{
											Local_1692[14] = get_object_index_from_entity_index(iVar13);
										}
									}
								}
							}
							if (func_167(22))
							{
								if (does_entity_exist(&(Local_1692[13])))
								{
									delete_object(Local_1692[13]);
								}
								if (does_entity_exist(&(Local_1692[14])))
								{
									delete_object(Local_1692[14]);
								}
							}
							if (!does_entity_exist(&(Local_1692[13])))
							{
								func_1321(13, 1);
								Var0 = { func_1357(13) };
								attach_entity_to_entity(&(Local_1692[13]), &(iLocal_979[0]), 17, Var0, Var0.f_3, false, false, false, false, 2, true, false, false);
							}
							if (!does_entity_exist(&(Local_1692[14])))
							{
								func_1321(14, 1);
								Var0 = { func_1357(14) };
								attach_entity_to_entity(&(Local_1692[14]), &(iLocal_979[0]), 17, Var0, Var0.f_3, false, false, false, false, 2, true, false, false);
							}
							iVar14 = 13;
							while (iVar14 <= 14)
							{
								set_entity_invincible(&(Local_1692[iVar14]), true);
								set_entity_proofs(&(Local_1692[iVar14]), 31, false);
								set_entity_dynamic(&(Local_1692[iVar14]), false);
								iVar14++;
							}
						}
						func_1560(6);
						return true;
						Jump @1448; //curOff = 1142
						iVar15 = 2;
						while (iVar15 <= 3)
						{
							if (is_entity_dead(&(Local_218[iVar15])))
							{
							}
							else
							{
								if (!does_entity_belong_to_this_script(&(Local_218[iVar15]), true))
								{
									set_entity_as_mission_entity(&(Local_218[iVar15]), true, true);
								}
								set_blocking_of_non_temporary_events(&(Local_218[iVar15]), true);
								set_ped_can_be_targetted(&(Local_218[iVar15]), false);
								set_ped_config_flag(&(Local_218[iVar15]), 284, true);
								set_ped_config_flag(&(Local_218[iVar15]), 301, true);
								set_animal_tuning_bool_param(&(Local_218[iVar15]), 48, true);
								_0xf74e134f40192884(&(Local_218[iVar15]), 2);
								set_ped_flee_attributes(&(Local_218[iVar15]), 512, true);
								set_ped_flee_attributes(&(Local_218[iVar15]), 16384, true);
								_0x2eb75fb86c41f026(&(Local_218[iVar15]), 3, 0);
								set_ped_config_flag(&(Local_218[iVar15]), 113, true);
								set_ped_config_flag(&(Local_218[iVar15]), 168, false);
							}
							iVar15++;
						}
						_0x8268b098f6fca4e2(&(iLocal_979[0]), 0);
						_play_sound_from_entity("BOTTLE_RATTLE", &(iLocal_979[0]), "BRT1_Sounds", false, 0, 0);
						set_vehicle_is_considered_by_player(&(iLocal_979[0]), true);
						set_vehicle_can_break(&(iLocal_979[0]), false);
						_0x226c6a4e3346d288(&(iLocal_979[0]), 0);
						_0x6090a031c69f384e(&(iLocal_979[0]), 0);
						func_1560(7);
						return true;
						Jump @1448; //curOff = 1431
						return true;
						Jump @1448; //curOff = 1438
						return false;
					}
					return false;
				}
			}
			default:
				break;
	}
}

struct<4> func_931(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 == 0)
	{
		switch (iParam0)
		{
			case 6:
				switch (iParam2)
				{
					case 0:
						return func_555(8, 1);
					case 1:
						return func_555(8, 5);
					case 2:
						return func_555(8, 7);
					case 3:
						return func_555(8, 9);
					case 4:
						return func_555(8, 11);
					case 5:
						return func_555(8, 12);
					case 25:
						return func_555(8, 12);
				}
				break;
			case 7:
				switch (iParam2)
				{
					case 0:
						return func_555(8, 2);
				}
				break;
			case 1:
				return func_555(8, 3);
			case 8:
				switch (iParam2)
				{
					case 5:
					case 25:
						return func_555(8, 13);
				}
				break;
			case 9:
				switch (iParam2)
				{
					case 5:
					case 25:
						return func_555(8, 14);
				}
				break;
			case 14:
				Var0 = { 1015.04f, -1665.654f, 46.414f };
				Var0.f_3 = -6.91f;
				return Var0;
			case 15:
				Var0 = { 1017.54f, -1662.87f, 46.22f };
				Var0.f_3 = 18f;
				return Var0;
			case 16:
				Var0 = { 1005.17f, -1664.51f, 45.36f };
				Var0.f_3 = -15f;
				return Var0;
			case 17:
				Var0 = { 1003.92f, -1665.33f, 46.362f };
				Var0.f_3 = -26.9f;
				return Var0;
			case 18:
				Var0 = { 1019.38f, -1656.52f, 46.48f };
				Var0.f_3 = 135f;
				return Var0;
			case 19:
				return func_555(0, 5);
			case 20:
				return func_555(0, 6);
			case 10:
				return func_555(7, 0);
			case 11:
				return func_555(7, 1);
			case 12:
				return func_555(7, 3);
			case 13:
				return func_555(7, 2);
			case 21:
				if (iParam2 == 1)
				{
					return func_555(9, 0);
				}
				else if (iParam2 == 4)
				{
					return func_555(9, 2);
				}
				break;
			case 23:
				return func_1562(1, 0);
			case 24:
				return func_1562(2, 0);
			case 25:
				return func_555(1, 0);
			case 26:
				return func_555(1, 1);
			case 27:
				return func_555(2, 1);
			case 28:
				return func_1388(7, 0);
			case 29:
				return func_1388(7, 1);
			case 30:
				return func_1388(7, 2);
			case 31:
				return func_1388(7, 3);
			case 32:
				return func_1388(7, 4);
			case 33:
				return func_1388(7, 5);
			case 34:
				return func_1388(7, 6);
			case 35:
				return func_1388(7, 7);
			case 36:
				return func_1388(7, 8);
			case 37:
				return func_1388(7, 9);
			case 38:
				return func_1388(7, 10);
			case 39:
				return func_1388(7, 11);
			case 40:
				return func_1388(7, 12);
			case 41:
				return func_1388(7, 13);
			case 42:
				return func_555(4, 0);
			case 43:
				return func_555(4, 1);
			case 44:
				return func_555(4, 2);
			case 45:
				Var0 = { 1353.108f, -1378.003f, 84.3532f };
				Var0.f_3 = 79f;
				return Var0;
			case 46:
				Var0 = { 1353.385f, -1375.919f, 84.3498f };
				Var0.f_3 = 170f;
				return Var0;
			case 47:
				return func_555(4, 5);
			case 48:
				Var0 = { 1354.929f, -1371.643f, 80.5015f };
				Var0.f_3 = 171f;
				return Var0;
			case 49:
				Var0 = { 1335.881f, -1378.023f, 80.4902f };
				Var0.f_3 = 281f;
				return Var0;
			case 50:
				Var0 = { 1337.194f, -1369.861f, 80.4902f };
				Var0.f_3 = 243.6f;
				return Var0;
			case 51:
				return func_555(4, 8);
			case 52:
				return func_555(4, 9);
			case 53:
				Var0 = { 1333.449f, -1368.783f, 84.2905f };
				Var0.f_3 = 172.46f;
				return Var0;
			case 54:
				Var0 = { 1330.24f, -1369.227f, 84.3212f };
				Var0.f_3 = -7.53f;
				return Var0;
			case 55:
				Var0 = { 1328.332f, -1375.317f, 81.6131f };
				Var0.f_3 = -12.9f;
				return Var0;
			case 56:
				Var0 = { 1328.503f, -1374.128f, 81.2748f };
				Var0.f_3 = 320f;
				return Var0;
			case 57:
				Var0 = { 1328.153f, -1375.974f, 80.076f };
				Var0.f_3 = 8.2f;
				return Var0;
			case 58:
				return func_555(5, 0);
			case 59:
				return func_555(5, 1);
			case 73:
				return func_555(5, 2);
			case 74:
				return func_555(5, 3);
			case 60:
			case 75:
				return func_555(5, 4);
			case 61:
			case 76:
				return func_555(5, 5);
			case 62:
			case 77:
				return func_555(5, 6);
			case 63:
				return func_555(5, 7);
			case 64:
				return func_555(5, 8);
			case 65:
			case 78:
				return func_555(5, 9);
			case 66:
			case 79:
				return func_555(5, 10);
			case 67:
				return func_1562(4, 0);
			case 68:
				return func_1562(4, 0);
			case 69:
			case 80:
				return func_555(5, 11);
			case 70:
			case 81:
				return func_555(5, 12);
			case 71:
			case 82:
				return func_555(5, 13);
			case 72:
			case 83:
				return func_555(5, 14);
			case 86:
				Var0 = { 1338.171f, -1308.447f, 76.4973f };
				Var0.f_3 = 61.06f;
				return Var0;
			case 87:
				Var0 = { 1338.171f, -1309.447f, 76.4973f };
				Var0.f_3 = 61.06f;
				return Var0;
			case 88:
				return func_1388(6, 14);
			case 89:
				return func_1388(6, 15);
			case 90:
				Var0 = { 1279.084f, -1188.128f, 78.823f };
				Var0.f_3 = 77.5312f;
				return Var0;
			case 93:
				Var0 = { 1058.3f, -1133.4f, 68.9f };
				return Var0;
			case 94:
				Var0 = { 1058.3f, -1133.4f, 68.9f };
				return Var0;
		}
	}
	else if (iParam1 == 1)
	{
		switch (iParam0)
		{
			case 14:
				return func_555(10, 0);
			case 15:
				return func_555(10, 1);
			case 17:
				return func_555(10, 3);
			case 42:
				Var0 = { 1345.143f, -1375.007f, 79.6189f };
				Var0.f_3 = 1f;
				return Var0;
			case 43:
				return func_1388(5, 0);
			case 44:
				Var0 = { 1344.883f, -1378.718f, 81.639f };
				Var0.f_3 = 0.75f;
				return Var0;
			case 45:
				Var0 = { 1348.6f, -1378.3f, 84.1f };
				Var0.f_3 = 0.75f;
				return Var0;
			case 46:
				Var0 = { 1349.3f, -1374f, 84.1f };
				Var0.f_3 = 0.75f;
				return Var0;
			case 47:
				return func_1388(5, 4);
			case 48:
				return func_1388(5, 5);
			case 49:
				Var0 = { 1340.156f, -1378.522f, 80.4806f };
				Var0.f_3 = 1f;
				return Var0;
			case 50:
				Var0 = { 1343.258f, -1372.138f, 80.4806f };
				Var0.f_3 = 1f;
				return Var0;
			case 51:
				return func_1388(5, 7);
			case 53:
				vVar4 = { func_1563(8) };
				Var0 = { vVar4 };
				Var0.f_3 = 2f;
				return Var0;
			case 54:
				vVar4 = { func_1563(9) };
				Var0 = { vVar4 };
				Var0.f_3 = 2f;
				return Var0;
			case 55:
				Var0 = { 1328.6f, -1372.8f, 83.3f };
				Var0.f_3 = -12.9f;
				return Var0;
			case 56:
				Var0 = { 1330.056f, -1366.839f, 83.3068f };
				Var0.f_3 = 1f;
				return Var0;
			case 57:
				Var0 = { 1332.268f, -1367.242f, 83.3068f };
				Var0.f_3 = 1f;
				return Var0;
			case 90:
				Var0 = { 1269.76f, -1202.694f, 82.7307f };
				Var0.f_3 = 1f;
				return Var0;
			case 63:
				Var0 = { 1271.8f, -1163.8f, 80.5f };
				Var0.f_3 = 1f;
				return Var0;
			case 64:
				Var0 = { 1268.9f, -1163.8f, 80.6f };
				Var0.f_3 = 1f;
				return Var0;
		}
	}
	if (iParam0 == 4)
	{
		if (iParam1 == 0)
		{
			Var0 = { 1329.531f, -1369.921f, 80.4346f };
			Var0.f_3 = 91.2f;
			return Var0;
		}
		else if (iParam1 == 1)
		{
			Var0 = { 1266f, -1330f, 89.7f };
			Var0.f_3 = 0f;
			return Var0;
		}
	}
	else if (iParam0 == 5)
	{
		if (iParam1 == 0)
		{
			Var0 = { 1329.472f, -1370.089f, 80.4346f };
			Var0.f_3 = 18f;
			return Var0;
		}
		else if (iParam1 == 1)
		{
			Var0 = { 1266.1f, -1329.9f, 89.7f };
			Var0.f_3 = 0f;
			return Var0;
		}
	}
	return func_555(8, 0);
}

int func_932(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, struct<4> Param5, bool bParam9)
{
	iVar0 = func_1564(iParam1);
	if (does_entity_exist(&(Local_218[iParam1])))
	{
		func_942(iParam1, 1);
	}
	switch (Local_218[iParam1]->f_3)
	{
		case 0:
			if (bParam2)
			{
				func_1565(iParam1, 1);
			}
			else if (bParam3)
			{
				func_1565(iParam1, 3);
			}
			else if (bParam4)
			{
				func_1565(iParam1, 5);
			}
			else
			{
				func_1565(iParam1, 9);
			}
			break;
		case 1:
			iVar1 = func_1561(uParam0, func_519(func_1294(iParam1)), 1);
			if (does_entity_exist(iVar1))
			{
				Local_218[iParam1] = get_ped_index_from_entity_index(iVar1);
			}
			if (does_entity_exist(&(Local_218[iParam1])))
			{
				if (!func_185(iParam1) == -1)
				{
					func_1565(iParam1, 2);
				}
				else
				{
					func_1565(iParam1, 6);
				}
			}
			else if (bParam3)
			{
				func_1565(iParam1, 3);
			}
			else if (bParam4)
			{
				func_1565(iParam1, 5);
			}
			else
			{
				func_1565(iParam1, 9);
			}
			break;
		case 2:
			if (func_907(uParam0, func_185(iParam1), Local_218[iParam1], 0, 0, 0, 0, 0, 0, iVar0, 1, 0, 1, 0))
			{
				func_1565(iParam1, 6);
			}
			break;
		case 3:
			if (func_185(iParam1) == -1)
			{
				if (bParam4)
				{
					func_1565(iParam1, 5);
				}
				else
				{
					func_1565(iParam1, 9);
				}
				return 0;
			}
			if (func_907(uParam0, func_185(iParam1), Local_218[iParam1], 0, 0, 0, 0, 0, 0, iVar0, 1, 0, 1, 0))
			{
				if (bParam9)
				{
					if (func_421(Param5))
					{
					}
					else
					{
						func_1265(&(Local_218[iParam1]), Param5, 2, 1073741824);
					}
				}
				func_1565(iParam1, 6);
			}
			else
			{
				return 0;
			}
			if (does_entity_exist(&(Local_218[iParam1])) && Local_218[iParam1]->f_2 == 0)
			{
				func_942(iParam1, 1);
			}
			break;
		case 5:
			if (func_421(Param5))
			{
				Var2 = { get_entity_coords(Global_35, true, false) };
				Var2.f_3 = get_entity_heading(Global_35);
			}
			else
			{
				Var2 = { Param5 };
			}
			Local_218[iParam1] = func_1566(func_519(func_1294(iParam1)), Var2, Var2.f_3, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
			func_1565(iParam1, 6);
			break;
		case 6:
			iVar6 = -1;
			if (iParam1 == 6)
			{
				iVar6 = iVar1950;
			}
			else if (iParam1 == 7)
			{
				iVar6 = iVar1951;
			}
			if (func_167(0))
			{
			}
			else
			{
				if (!iVar6 == -1)
				{
					switch (iVar6)
					{
						case 0:
							func_1567(func_185(iParam1), 128, 0);
							break;
						case 1:
							func_1567(func_185(iParam1), 256, 0);
							break;
						case 2:
							func_1567(func_185(iParam1), 512, 0);
							break;
						case 3:
							func_1567(func_185(iParam1), 1024, 0);
							break;
						case 4:
							func_1567(func_185(iParam1), 2048, 0);
							break;
						case 5:
							func_1567(func_185(iParam1), 4096, 0);
							break;
						case 6:
							func_1567(func_185(iParam1), 16384, 0);
							break;
						case 7:
							func_1567(func_185(iParam1), 32768, 0);
							break;
						case 8:
							func_1567(func_185(iParam1), 65536, 0);
							break;
						case 9:
							func_1567(func_185(iParam1), 131072, 0);
							break;
						case 10:
							func_1567(func_185(iParam1), 262144, 0);
							break;
						case 11:
							func_1567(func_185(iParam1), 1048576, 0);
							break;
						case 12:
							func_1567(func_185(iParam1), 2097152, 0);
							break;
						case 13:
							func_1567(func_185(iParam1), 4194304, 0);
							break;
						case 14:
							func_1567(func_185(iParam1), -2147483648, 0);
							break;
						case 15:
							if (iParam1 == 6)
							{
								remove_all_ped_weapons(&(Local_218[iParam1]), true, true);
								_give_weapon_to_ped_2(&(Local_218[iParam1]), &(iLocal_1390[0]), 64, false, true, 2, false, 0.5f, 1f, 752097756, true, 0f, false);
								_give_weapon_to_ped_2(&(Local_218[iParam1]), &(iLocal_1390[1]), 64, false, true, 3, false, 0.5f, 1f, 752097756, true, 0f, false);
								func_944(12);
							}
							else if (iParam1 == 7)
							{
								remove_all_ped_weapons(&(Local_218[iParam1]), true, true);
								_give_weapon_to_ped_2(&(Local_218[iParam1]), &(iLocal_1390[2]), 64, false, true, 3, false, 0.5f, 1f, 752097756, true, 0f, false);
							}
							break;
					}
					iVar6++;
					if (iParam1 == 6)
					{
						iLocal_1962 = iVar6;
					}
					else if (iParam1 == 7)
					{
						iLocal_1963 = iVar6;
					}
				}
				func_413(0);
				if (((iParam1 == 6 && iVar1950 == 15) || (iParam1 == 7 && iVar1951 == 15)) || !(iParam1 == 6 || iParam1 == 7))
				{
					set_blocking_of_non_temporary_events(&(Local_218[iParam1]), true);
					set_entity_visible(&(Local_218[iParam1]), true);
					set_entity_collision(&(Local_218[iParam1]), true, false);
					freeze_entity_position(&(Local_218[iParam1]), false);
					if (!func_185(iParam1) == -1)
					{
						if (func_1568(func_185(iParam1), 1048576))
						{
							func_1567(func_185(iParam1), 1048576, 0);
						}
						switch (iParam1)
						{
							case 6:
								func_145(uParam0, &(Local_218[iParam1]), "HOSEA", 0);
								break;
							case 7:
								func_145(uParam0, &(Local_218[iParam1]), "JOHN", 0);
								break;
							case 8:
								func_145(uParam0, &(Local_218[iParam1]), "DUTCH", 0);
								break;
							case 9:
								func_145(uParam0, &(Local_218[iParam1]), "MICAH_BELL", 0);
								break;
							default:
								break;
						}
					}
					func_942(iParam1, 1);
					func_1565(iParam1, 8);
				}
				Jump @1492; //curOff = 1475
				return 1;
				Jump @1492; //curOff = 1482
				return 0;
			}
			return 0;
			default:
				break;
	}
}

bool func_933(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, struct<4> Param6, bool bParam10)
{
	if (Local_218[iParam1]->f_3 == 8)
	{
		return true;
	}
	switch (Local_218[iParam1]->f_3)
	{
		case 0:
			if (bParam3)
			{
				Local_218[iParam1]->f_3 = 1;
			}
			else if (bParam4)
			{
				Local_218[iParam1]->f_3 = 3;
			}
			else if (bParam5)
			{
				Local_218[iParam1]->f_3 = 5;
			}
			break;
		case 1:
			Local_218[iParam1]->f_3 = 3;
			break;
		case 3:
			if (func_185(iParam2) == -1)
			{
				Local_218[iParam1]->f_3 = 5;
				return false;
			}
			Local_218[iParam1] = func_1569(&iVar0, func_185(iParam2), 1, 1, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0);
			if (iVar0 == 2)
			{
				Local_218[iParam1] = func_513(func_185(iParam2));
				if (bParam10)
				{
					func_1265(&(Local_218[iParam1]), Param6, 2, 1073741824);
				}
				Local_218[iParam1]->f_3 = 6;
			}
			break;
		case 5:
			func_1282(0);
			if (!func_1322(0))
			{
				return false;
			}
			Local_218[iParam1] = func_1566(func_519(0), Param6, Param6.f_3, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
			Local_218[iParam1]->f_3 = 6;
		case 6:
			if (is_entity_dead(&(Local_218[iParam1])))
			{
			}
			else
			{
				func_942(iParam1, 1);
				set_blocking_of_non_temporary_events(&(Local_218[iParam1]), true);
				set_ped_config_flag(&(Local_218[iParam1]), 113, true);
				set_ped_config_flag(&(Local_218[iParam1]), 168, false);
				set_ped_flee_attributes(&(Local_218[iParam1]), 512, true);
				set_ped_flee_attributes(&(Local_218[iParam1]), 16384, true);
				set_entity_invincible(&(Local_218[iParam1]), true);
				_0x2eb75fb86c41f026(&(Local_218[iParam1]), 3, 0);
				set_animal_tuning_bool_param(&(Local_218[iParam1]), 48, true);
				_0xf74e134f40192884(&(Local_218[iParam1]), 2);
				clear_ped_tasks(&(Local_218[iParam1]), 1, 0);
				clear_ped_tasks_immediately(&(Local_218[iParam1]), false, true);
				task_stand_still(&(Local_218[iParam1]), -1);
				Local_218[iParam1]->f_3 = 8;
				return true;
			}
			return false;
			default:
				break;
	}
}

void func_934(bool bParam0)
{
	if (bParam0)
	{
		func_197(69);
		func_197(70);
		func_197(71);
		func_197(79);
		func_197(111);
		func_197(933);
		func_197(934);
		func_197(945);
		func_197(946);
		func_197(947);
	}
	else
	{
		func_460(69);
		func_460(70);
		func_460(71);
		func_460(79);
		func_460(111);
		func_460(933);
		func_460(934);
		func_460(945);
		func_460(946);
		func_460(947);
	}
}

void func_935(int iParam0, bool bParam1)
{
	iParam0 = func_288(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_59(iParam0);
	func_570(iParam0);
	func_571(iParam0);
	func_568(iParam0);
	if (func_569(iParam0))
	{
		iVar0 = get_id_of_this_thread();
		if (func_284(iParam0) != iVar0)
		{
			return;
		}
	}
	func_1570(iParam0, 4);
	if (bParam1)
	{
		func_1570(iParam0, 16);
	}
}

bool func_936(int iParam0, int iParam1, bool bParam2)
{
	if (!bParam2)
	{
		if (!does_entity_exist(iParam0))
		{
			return false;
		}
	}
	return _is_metaped_using_component(iParam0, iParam1);
}

void func_937(int iParam0, bool bParam1, bool bParam2)
{
	if (is_entity_dead(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (!_is_metaped_using_component(iParam0, -1725579161))
		{
			_set_ped_body_component(iParam0, 622113465);
			bVar0 = true;
		}
	}
	else if (_is_metaped_using_component(iParam0, -1725579161))
	{
		_set_ped_component_disabled(iParam0, -1725579161, 1);
		bVar0 = true;
	}
	if (bParam2)
	{
		if (bVar0)
		{
			_update_ped_variation(iParam0, false, true, true, true, false);
		}
	}
}

int func_938(var uParam0)
{
	switch (func_33(uParam0))
	{
		case 0:
			if (!func_167(4))
			{
				func_1571(uParam0);
				func_413(4);
			}
			func_1572(uParam0);
			break;
		case 1:
			if (!func_167(5))
			{
				func_1571(uParam0);
				func_413(5);
			}
			func_1573(uParam0);
			break;
		case 2:
			if (!func_167(6))
			{
				func_1571(uParam0);
				func_413(6);
			}
			func_1574(uParam0);
			break;
		case 3:
			if (!func_167(7))
			{
				func_1571(uParam0);
				func_413(7);
			}
			func_1575(uParam0);
			break;
		case 5:
			if (!func_167(8))
			{
				func_1571(uParam0);
				func_413(8);
			}
			func_1576(uParam0);
			break;
		case 25:
			if (!func_167(9))
			{
				func_1571(uParam0);
				func_413(9);
			}
			func_1577(uParam0);
			break;
	}
	return 1;
}

void func_939(var uParam0, int iParam1)
{
	uParam0->f_8266 = iParam1;
	func_103(uParam0, 1024);
}

int func_940(var uParam0)
{
	switch (func_33(uParam0))
	{
		case 0:
			if (!is_entity_dead(&(iLocal_979[0])))
			{
				set_ped_into_vehicle(Global_35, &(iLocal_979[0]), -1);
				set_ped_into_vehicle(&(Local_218[6]), &(iLocal_979[0]), 0);
			}
			if (does_entity_exist(&(Local_1692[1])))
			{
				func_506(uParam0, 1, 0);
			}
			if (does_entity_exist(&(Local_1692[2])))
			{
				func_506(uParam0, 2, 0);
			}
			if (does_entity_exist(&(Local_1692[0])))
			{
				func_506(uParam0, 0, 0);
			}
			set_vehicle_door_latched(&(iLocal_979[0]), 5, true, true, true);
			break;
		case 4:
			do_screen_fade_out(0);
			break;
		case 5:
			do_screen_fade_out(0);
			break;
	}
	return 1;
}

void func_941(var uParam0, int iParam1)
{
	uParam0->f_8267 = iParam1;
	func_103(uParam0, 131072);
}

void func_942(int iParam0, int iParam1)
{
	Local_218[iParam0]->f_2 = iParam1;
}

void func_943(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			_set_weather_type(1632247697, true, true, bParam1, 60f, false);
			break;
		case 1:
			_set_weather_type(821931868, true, true, bParam1, 60f, false);
			break;
		case 2:
			_set_weather_type(1632247697, true, true, bParam1, 60f, false);
			break;
		case 3:
			_set_weather_type(1632247697, true, true, bParam1, 60f, false);
			break;
		case 4:
			_set_weather_type(1632247697, true, true, bParam1, 60f, false);
			break;
		case 5:
			_set_weather_type(1632247697, true, true, bParam1, 60f, false);
			break;
		case 25:
			_set_weather_type(821931868, true, true, bParam1, 60f, false);
			break;
		default:
			break;
	}
}

void func_944(int iParam0)
{
	if (Local_985[iParam0]->f_5 == 0)
	{
		Local_985[iParam0]->f_5 = 1;
	}
}

void func_945(int iParam0, int iParam1, bool bParam2, float fParam3)
{
	func_1578(iParam0, iParam1, bParam2, fParam3);
}

void func_946(var uParam0)
{
	if (func_167(0))
	{
		func_174(0);
	}
	if (func_167(16))
	{
		func_1579(0);
	}
	func_209();
	iLocal_1958 = get_frame_count();
	func_174(0);
	iLocal_1959 = func_33(uParam0);
	func_1580(uParam0);
	if (iVar1956 == 0 || iVar1956 == 1)
	{
		_disable_guard_zone("BRAITHWAITE_MANOR");
	}
	if ((((iVar1956 == 1 && func_167(94)) || iVar1956 == 2) || iVar1956 == 3) || iVar1956 == 4)
	{
		_0xf45e46deecf7df6e(10208, 0, 0, -1, -1);
		_0xab0d553fe20a6e25(0f);
		set_vehicle_density_multiplier_this_frame(0f);
		set_random_vehicle_density_multiplier_this_frame(0f);
		set_parked_vehicle_density_multiplier_this_frame(0f);
		set_scenario_ped_density_multiplier_this_frame(0f);
	}
	if ((((iVar1956 == 0 || iVar1956 == 1) || iVar1956 == 2) || iVar1956 == 3) || iVar1956 == 4)
	{
		if (!func_26(vLocal_1840[1]) || func_924(vLocal_1840[1]) >= 30f)
		{
			func_27(vLocal_1840[1], 1);
			func_1581(0.7f);
		}
	}
	if (func_1275(120, 0))
	{
		switch (iVar1956)
		{
			case 0:
				if (get_clock_hours() >= 10)
				{
					pause_clock(true, 0);
				}
				break;
			case 1:
				if (get_clock_hours() >= 13)
				{
					pause_clock(true, 0);
				}
				break;
			case 2:
				if (get_clock_hours() >= 14)
				{
					pause_clock(true, 0);
				}
				break;
			case 3:
				if (get_clock_hours() >= 21)
				{
					pause_clock(true, 0);
				}
				break;
			case 4:
				if (get_clock_hours() >= 21)
				{
					pause_clock(true, 0);
				}
				break;
		}
	}
}

void func_947(var uParam0)
{
	if (!func_23(&(uParam0->f_8269)))
	{
		return;
	}
	if (!func_121(uParam0, func_33(uParam0), 268435456))
	{
		return;
	}
	func_1582(uParam0);
}

void func_948(var uParam0)
{
	if (!func_8(uParam0, 8388608))
	{
		if (func_162(uParam0, func_33(uParam0)) == 5 || func_162(uParam0, func_33(uParam0)) == 6)
		{
			if (!func_237())
			{
				if (func_924(&(uParam0->f_13112)) < 5f)
				{
					_0x9f9a829c6751f3c7(get_player_index(), 31, 0);
				}
			}
			else
			{
				func_244(&(uParam0->f_13112));
			}
		}
	}
	else
	{
		_0x9f9a829c6751f3c7(get_player_index(), 31, 1);
	}
}

void func_949(var uParam0)
{
	if (func_121(uParam0, func_33(uParam0), 8388608))
	{
		if (func_1583(uParam0))
		{
			_uiprompt_enable_prompt_type_this_frame(6);
			func_1584();
		}
		else
		{
			_display_hud_component(-1679307491);
			func_1585(uParam0, func_33(uParam0), 8388608);
		}
	}
}

void func_950(var uParam0)
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
		if (func_262() || func_54())
		{
			func_99(uParam0, 1048576);
		}
	}
	else if (!func_262() && !func_54())
	{
		func_920(uParam0, 1048576);
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
			func_920(uParam0, 134217728);
		}
	}
}

void func_951(var uParam0)
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

void func_952(var uParam0)
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

void func_953(var uParam0)
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

int func_954(var uParam0)
{
	if ((func_20() != -1 || func_33(uParam0) == 25) || func_33(uParam0) == 26)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_13145)
	{
		if (func_278(uParam0->f_5423[iVar0]))
		{
			func_492(uParam0->f_5423[iVar0]);
		}
		iVar0++;
	}
	return 0;
}

bool func_955(var uParam0, int iParam1, int iParam2)
{
	iVar0 = func_132(iParam1);
	if (!func_1586(iVar0))
	{
		return false;
	}
	iVar1 = func_1587(iParam2);
	if (!func_1588(iVar1))
	{
		return false;
	}
	if (!func_1589(uParam0, iParam1, iParam2))
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

int func_956(var uParam0, int iParam1)
{
	return uParam0->f_1[func_132(iParam1)]->f_21;
}

int func_957(var uParam0, int iParam1)
{
	return 1;
}

void func_958(var uParam0)
{
	if (!func_20() == 0 || network_is_host_of_this_script())
	{
		func_244(&(uParam0->f_603));
	}
}

void func_959(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_1[func_132(iParam1)]->f_10 = iParam2;
	settimera(0);
}

bool func_960(var uParam0)
{
	if (!is_screen_faded_out())
	{
		return true;
	}
	if (!func_26(&(uParam0->f_13109)))
	{
		func_27(&(uParam0->f_13109), 0);
	}
	else if (func_924(&(uParam0->f_13109)) >= 10f)
	{
		return true;
	}
	iVar0 = 1;
	if (func_279(uParam0->f_5421))
	{
		iVar1 = 0;
		while (iVar1 < func_280(uParam0->f_5421))
		{
			iVar2 = func_281(uParam0->f_5421, iVar1);
			if (does_entity_exist(iVar2))
			{
				if (is_entity_a_ped(iVar2))
				{
					iVar3 = func_1590(uParam0->f_5421, iVar1);
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

float func_961(var uParam0)
{
	return func_924(&(uParam0->f_603));
}

bool func_962(var uParam0)
{
	if ((func_120(uParam0, 4) || func_120(uParam0, 128)) && !func_102())
	{
		return false;
	}
	return true;
}

bool func_963(var uParam0, int iParam1, int iParam2)
{
	if (func_8(uParam0, -2147483648))
	{
		return true;
	}
	if (func_955(uParam0, iParam1, 4))
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
		func_1591(uParam0);
		if (func_1592(uParam0))
		{
			func_1593(uParam0);
		}
		if (func_121(uParam0, func_33(uParam0), 33554432) && func_8(uParam0, 524288))
		{
			_uilog_print_cached_objective();
		}
		func_920(uParam0, 524288);
		func_1594(&(uParam0->f_7375), 4);
		if (func_1583(uParam0))
		{
			func_140(uParam0, func_33(uParam0), 8388608);
			_hide_hud_component(-1679307491);
			_uiprompt_enable_prompt_type_this_frame(6);
			func_1584();
		}
		return true;
	}
	return false;
}

void func_964(var uParam0)
{
	func_1595(uParam0);
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

bool func_965(var uParam0, int iParam1)
{
	if (func_120(uParam0, 16384))
	{
		if (func_919(uParam0))
		{
			func_51(&(uParam0->f_10792));
			func_920(uParam0, 2097152);
			func_287(uParam0, 16384);
			func_103(uParam0, 128);
			return true;
		}
		return false;
	}
	if (!func_8(uParam0, 4))
	{
		func_957(uParam0, iParam1);
		func_99(uParam0, 4);
	}
	Var0 = { func_1544(uParam0, iParam1) };
	if (func_121(uParam0, func_33(uParam0), 2))
	{
		if (func_8(uParam0, 2097152))
		{
			if (func_919(uParam0))
			{
				func_920(uParam0, 2097152);
				func_921(uParam0, Var0);
			}
			return false;
		}
		else
		{
			return func_921(uParam0, Var0);
		}
	}
	else if (func_8(uParam0, 2097152))
	{
		if (func_919(uParam0))
		{
			func_920(uParam0, 2097152);
			func_1551(uParam0);
			return true;
		}
		else
		{
			return false;
		}
	}
	if (func_121(uParam0, func_33(uParam0), 2))
	{
		return func_921(uParam0, Var0);
	}
	return true;
}

bool func_966(var uParam0)
{
	return func_1596(&(uParam0->f_7375));
}

void func_967(var uParam0)
{
	if (((!does_entity_exist(Global_35) || Global_1935630->f_12) || is_ped_fatally_injured(Global_35)) || get_entity_health(Global_35) <= 0)
	{
		if (func_1597(uParam0))
		{
			func_457(uParam0, 2);
			StringCopy(&cVar0, "PLAYER_DEAD", 64);
			if (get_ped_config_flag(Global_35, 11, true))
			{
				StringCopy(&cVar0, "PLAYER_KO", 64);
			}
			func_1598(uParam0, cVar0);
			func_160(uParam0, 2);
		}
	}
}

int func_968(var uParam0, int iParam1)
{
	if (((func_20() != -1 || func_33(uParam0) == 25) || func_33(uParam0) == 26) || Global_1935630->f_12)
	{
		return 0;
	}
	bVar0 = func_121(uParam0, func_33(uParam0), 1);
	iVar1 = 0;
	while (iVar1 < uParam0->f_13145)
	{
		if (func_278(uParam0->f_5423[iVar1]))
		{
			if (func_1599(uParam0->f_5423[iVar1]->f_7, iParam1))
			{
				func_1600(uParam0, uParam0->f_5423[iVar1], bVar0);
			}
		}
		iVar1++;
	}
	return 0;
}

void func_969(var uParam0)
{
	if ((is_screen_faded_out() && !is_player_playing(player_id())) && is_player_being_arrested(player_id(), false))
	{
		if (func_1601(uParam0))
		{
			func_457(uParam0, 6);
			StringCopy(&cVar0, "PLAYER_ARRESTED", 64);
			func_1598(uParam0, cVar0);
			func_160(uParam0, 2);
		}
	}
}

void func_970(var uParam0)
{
	switch (func_1602(&iVar0))
	{
		case 1:
			func_1603(uParam0, Var1, 1, 0);
			break;
		case 3:
			if (!_databinding_is_data_id_valid(uParam0->f_13178))
			{
				uParam0->f_13178 = _databinding_add_data_bool_from_path("", "bAllowedtoAbandon", 0);
			}
			if (func_214(iVar0) && iVar0 == func_12(uParam0->f_607))
			{
				bVar9 = true;
			}
			_databinding_write_data_bool(uParam0->f_13178, bVar9);
			break;
	}
}

bool func_971(var uParam0, int iParam1)
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

int func_972(var uParam0, int iParam1)
{
	if (func_8(uParam0, 16777216))
	{
		func_1550(uParam0);
		func_920(uParam0, 65536);
		return 0;
	}
	if (!func_121(uParam0, iParam1, 2))
	{
		return 0;
	}
	Var0 = { func_1544(uParam0, iParam1) };
	if (func_1604(uParam0, &Var0))
	{
		if (!func_8(uParam0, 65536))
		{
			func_99(uParam0, 65536);
		}
		return 1;
	}
	return 0;
}

void func_973(var uParam0, int iParam1)
{
	func_1605(&(uParam0->f_638), &(uParam0->f_819), &(uParam0->f_1020), &(uParam0->f_1081), &(uParam0->f_1124), &(uParam0->f_1126), &(uParam0->f_5147), &(uParam0->f_5188), &(uParam0->f_5239), &(uParam0->f_5249), &(uParam0->f_5265), &(uParam0->f_5286), iParam1, func_249(uParam0, iParam1));
}

void func_974(var uParam0, int iParam1)
{
	if (!func_121(uParam0, func_33(uParam0), 67108864))
	{
		if (does_blip_exist(uParam0->f_5303))
		{
			remove_blip(&(uParam0->f_5303));
		}
		uParam0->f_7374 = 0;
		func_959(uParam0, iParam1, 2);
		func_134(uParam0, 0);
		func_135(uParam0, 0);
		func_99(uParam0, 8);
		func_920(uParam0, -2147483648);
		func_140(uParam0, func_33(uParam0), 67108864);
		func_920(uParam0, 4);
		func_920(uParam0, 8192);
		func_920(uParam0, 536870912);
		func_287(uParam0, 4);
		func_65(0);
		func_64(0);
		func_920(uParam0, 2);
		func_45();
		uParam0->f_5302 = 0;
		func_1606(uParam0);
		if ((func_35(uParam0) == 25 || func_35(uParam0) == 26) && func_82(32768))
		{
			func_402(uParam0, 524288);
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
				func_1607(1, 1);
			}
		}
	}
}

void func_975(bool bParam0)
{
	if (!func_221(0, 0, 1) || bParam0)
	{
		iVar0 = func_1072();
		iVar1 = func_1075(iVar0);
		fVar2 = (1f - (absf(to_float(iVar1)) / to_float(8)));
		fVar3 = func_1608(iVar0 < 0, 0f, (to_float(iVar1) / to_float(8)));
		fVar4 = func_1608(iVar0 > 0, 0f, (to_float(iVar1) / to_float(8)));
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

bool func_976(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (iParam0 == player_id())
	{
		return func_1609(bParam1, bParam2, bParam3);
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

var func_977(char* sParam0, int iParam1, bool bParam2, bool bParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, int iParam8)
{
	if (bParam2)
	{
		_0xdd1232b332cbb9e7(3, 1, 1);
	}
	if (Global_1572887->f_12 != -1)
	{
		return func_1610(sParam0, iParam1, 0, 0, 1, 1);
	}
	sVar0 = func_1611(iParam8, sParam0, sParam4, sParam5, sParam6, sParam7);
	if (bParam3)
	{
		_uilog_set_cached_objective(sVar0);
	}
	return func_1610(sVar0, iParam1, 0, 0, 1, 1);
}

bool func_978(var uParam0)
{
	return true;
}

bool func_979(var uParam0)
{
	return true;
}

int func_980(var uParam0)
{
	return 1;
}

int func_981(int iParam0, int iParam1)
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

bool func_982(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 153);
}

void func_983(int iParam0, bool bParam1)
{
	if (!func_982(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_1612(iParam0, 1);
	}
	else
	{
		func_1613(iParam0, 1);
	}
	func_1615(func_1614(iParam0), bParam1);
}

void func_984(int iParam0, bool bParam1)
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

void func_985(var uParam0, int iParam1)
{
	func_439(&(uParam0->f_64), iParam1);
}

void func_986(var uParam0, int iParam1)
{
	func_1616(&(uParam0->f_64), iParam1);
}

void func_987(int iParam0, bool bParam1)
{
	iVar0 = 16384;
	if (bParam1)
	{
		iVar0 |= 524288;
	}
	_0x2fcd528a397e5c88(iParam0, iVar0);
}

Vector3 func_988(int iParam0, int iParam1)
{
	return func_1617(iParam0, iParam1);
}

float func_989(int iParam0, int iParam1)
{
	return func_1618(iParam0, iParam1);
}

void func_990(var uParam0, int iParam1, char* sParam2)
{
	if (!_does_anim_scene_exist(uParam0->f_804))
	{
		return;
	}
	if (!func_1471(uParam0, iParam1))
	{
		return;
	}
	if (is_string_null_or_empty(sParam2))
	{
		sParam2 = func_1619(uParam0, iParam1);
	}
	if (_0x6f1f0b17109309da(uParam0->f_804, sParam2))
	{
		if (((is_entity_a_ped(iParam1) && does_entity_exist(_get_anim_scene_ped(uParam0->f_804, sParam2, false))) || (is_entity_an_object(iParam1) && does_entity_exist(_get_anim_scene_object(uParam0->f_804, sParam2, false)))) || (is_entity_a_vehicle(iParam1) && does_entity_exist(_get_anim_scene_vehicle(uParam0->f_804, sParam2, false))))
		{
			remove_anim_scene_entity(uParam0->f_804, sParam2, iParam1);
		}
	}
}

void func_991(var uParam0, int iParam1, bool bParam2)
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

void func_992(int* iParam0)
{
	if (does_blip_exist(*iParam0))
	{
		remove_blip(iParam0);
	}
}

bool func_993(int iParam0)
{
	if (!func_484(iParam0))
	{
		return false;
	}
	if (does_blip_exist((*Global_1360165)[iParam0]->f_2))
	{
		return true;
	}
	return false;
}

bool func_994(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_484(iParam0))
		{
			return false;
		}
	}
	func_1014(iParam1, &iVar0, &iVar1);
	return is_bit_set(&((*Global_1360165)[iParam0]->f_58[iVar0]), iVar1);
}

void func_995(int iParam0, var uParam1)
{
	if (!func_484(iParam0))
	{
		return;
	}
	if ((*Global_1360165)[iParam0]->f_12 == 0 || func_485(&((*Global_1360165)[iParam0]->f_12), 1))
	{
		if (does_blip_exist(*uParam1))
		{
			func_1620(iParam0);
		}
		return;
	}
	iVar0 = 0;
	iVar1 = 0;
	bVar2 = func_485(&((*Global_1360165)[iParam0]->f_12), 512);
	if (func_485(&((*Global_1360165)[iParam0]->f_12), 128))
	{
		iVar0 = 942020339;
	}
	else if (func_485(&((*Global_1360165)[iParam0]->f_12), 8))
	{
		iVar0 = -546708623;
	}
	if (func_485(&((*Global_1360165)[iParam0]->f_12), 256))
	{
		iVar1 = func_1621(-1739349092);
	}
	if (!does_blip_exist(*uParam1))
	{
		*uParam1 = _blip_add_for_entity(422991367, func_598(iParam0));
	}
	if (does_blip_exist(*uParam1))
	{
		if (iVar0 != 0)
		{
			_blip_set_modifier(*uParam1, iVar0);
			if (iVar0 == -546708623)
			{
				_blip_set_modifier(*uParam1, 231194138);
			}
		}
		else
		{
			_set_blip_flash_style(*uParam1, iVar0);
		}
		if (bVar2 && !func_221(0, 0, 1))
		{
			_0xedd964b7984ac291(*uParam1, -1944754404);
			if (func_485(&((*Global_1360165)[iParam0]->f_12), 1024))
			{
				_blip_set_modifier(*uParam1, -46775694);
			}
			if (func_485(&((*Global_1360165)[iParam0]->f_12), 2048))
			{
				_blip_set_modifier(*uParam1, 724623647);
			}
		}
		if (iVar1 != 0)
		{
			set_blip_sprite(*uParam1, iVar1, true);
		}
		if (!is_string_null_or_empty(&((*Global_1360165)[iParam0]->f_14)) && func_485(&((*Global_1360165)[iParam0]->f_12), 8))
		{
			set_blip_name_from_text_file(*uParam1, &((*Global_1360165)[iParam0]->f_14));
		}
		else
		{
			set_blip_name_from_text_file(*uParam1, func_346(iParam0, 0));
		}
	}
}

int func_996(int iParam0, bool bParam1, bool bParam2)
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

bool func_997(int iParam0)
{
	if (func_1622(iParam0))
	{
		return is_door_registered_with_system(iParam0);
	}
	return false;
}

void func_998(int iParam0, float fParam1, bool bParam2, int iParam3)
{
	if (func_997(iParam0))
	{
		if (door_system_get_door_state(iParam0) != 1 || bParam2)
		{
			door_system_set_door_state(iParam0, 1);
		}
		door_system_set_open_ratio(iParam0, fParam1, iParam3);
	}
}

void func_999(int iParam0, bool bParam1)
{
	if (func_997(iParam0))
	{
		if (door_system_get_door_state(iParam0) != 2 || bParam1)
		{
			door_system_set_door_state(iParam0, 2);
		}
	}
}

void func_1000(int iParam0, bool bParam1)
{
	if (func_997(iParam0))
	{
		if (door_system_get_door_state(iParam0) != 1 || bParam1)
		{
			door_system_set_door_state(iParam0, 1);
		}
	}
}

void func_1001(int iParam0, bool bParam1)
{
	if (func_997(iParam0))
	{
		if (door_system_get_door_state(iParam0) != 0 || bParam1)
		{
			door_system_set_door_state(iParam0, 0);
		}
	}
}

bool func_1002()
{
	return true;
}

void func_1003(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_508(iParam0))
		{
			return;
		}
	}
	Global_40.f_4942[iParam0] = (&Global_40.f_4942[iParam0] - (Global_40.f_4942[iParam0] && iParam1));
}

int func_1004(int iParam0, bool bParam1)
{
	if (!func_508(iParam0))
	{
		return 0;
	}
	if (bParam1)
	{
		if (!_0x800df3fc913355f3((*Global_1360165)[iParam0]->f_1))
		{
			func_1623(iParam0);
		}
	}
	return (*Global_1360165)[iParam0]->f_1;
}

float func_1005(int iParam0)
{
	if (!func_484(iParam0))
	{
		return 0f;
	}
	return (*Global_1360165)[iParam0]->f_134;
}

void func_1006(int iParam0)
{
	iVar0 = func_598(iParam0);
	iVar1 = func_1004(iParam0, 0);
	func_1624(iParam0, iVar0);
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

bool func_1007(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_1008(var uParam0, int iParam1)
{
	if (!does_entity_exist(iParam1))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_13145)
	{
		if (((func_278(uParam0->f_5423[iVar0]) && is_entity_an_object(&(uParam0->f_5423[iVar0]))) && get_object_index_from_entity_index(&(uParam0->f_5423[iVar0])) != iParam1) && get_entity_model(&(uParam0->f_5423[iVar0])) == get_entity_model(iParam1))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

void func_1009(int iParam0)
{
	func_517(iParam0, 36, 1);
}

bool func_1010(int iParam0, int iParam1)
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
	if (func_416(iVar0, 1))
	{
		if (is_ped_fatally_injured(iParam0))
		{
			return false;
		}
	}
	if (func_416(iVar0, 2))
	{
		if (_is_ped_hogtied(iParam0))
		{
			return false;
		}
	}
	if (func_416(iVar0, 8))
	{
		if (get_ped_config_flag(iParam0, 11, false))
		{
			return false;
		}
	}
	if (func_416(iVar0, 16))
	{
		if (!is_ped_on_mount(iParam0) && !is_ped_in_any_vehicle(iParam0, false))
		{
			return false;
		}
	}
	if (func_416(iVar0, 32))
	{
		if (is_entity_in_water(iParam0))
		{
			return false;
		}
	}
	if (func_416(iVar0, 64))
	{
		if (_0xb655db7582aec805(iParam0))
		{
			return false;
		}
	}
	if (func_416(iVar0, 128))
	{
		if (is_ped_ragdoll(iParam0))
		{
			return false;
		}
	}
	if (func_416(iVar0, 256))
	{
		if (!_0xa0bc8faed8cfeb3c(iParam0))
		{
			return false;
		}
	}
	return true;
}

void func_1011(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (func_508(iParam0))
	{
		iVar1 = func_598(iParam0);
		if (!is_entity_dead(iVar1))
		{
			iVar0 = get_ped_max_health(iVar1);
			set_ped_config_flag(iVar1, 179, true);
			func_1625(iParam0);
		}
	}
	if (func_994(iParam0, 5, 1))
	{
		set_ped_config_flag(func_598(iParam0), 137, true);
	}
}

void func_1012(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!func_484(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_515(iParam0, 50, 1);
		func_515(iParam0, 48, 1);
		func_515(iParam0, 49, 1);
		func_515(iParam0, 51, 1);
		func_515(iParam0, 52, 1);
		func_515(iParam0, 54, 1);
		func_515(iParam0, 55, 1);
	}
	else
	{
		func_517(iParam0, 50, 1);
		func_517(iParam0, 48, 1);
		func_517(iParam0, 49, 1);
		func_517(iParam0, 51, 1);
		if (bParam3)
		{
			func_517(iParam0, 54, 1);
		}
		else
		{
			func_515(iParam0, 54, 1);
		}
		if (!bParam2)
		{
			func_517(iParam0, 52, 1);
			if (bParam3)
			{
				func_517(iParam0, 55, 1);
			}
		}
		else
		{
			func_515(iParam0, 52, 1);
			if (!bParam3)
			{
				func_515(iParam0, 55, 1);
			}
		}
	}
}

void func_1013(int iParam0, bool bParam1)
{
	if (!func_484(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		set_ped_config_flag(func_598(iParam0), 204, true);
	}
	else
	{
		set_ped_config_flag(func_598(iParam0), 204, false);
	}
}

int func_1014(int iParam0, int iParam1, int iParam2)
{
	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
	return 1;
}

float func_1015(int iParam0, int iParam1, bool bParam2)
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
	return func_1626(get_entity_coords(iParam0, false, false), get_entity_coords(iParam1, false, false));
}

int func_1016(int iParam0, bool bParam1)
{
	if (!func_484(iParam0))
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
		(*Global_1360165)[iParam0]->f_127 = func_1627(iParam0);
		return (*Global_1360165)[iParam0]->f_127;
	}
	return 0;
}

void func_1017(int iParam0)
{
	iVar0 = func_513(iParam0);
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

int func_1018(int iParam0, bool bParam1)
{
	if (!func_484(iParam0))
	{
		return 0;
	}
	if (!_0x800df3fc913355f3((*Global_1360165)[iParam0]->f_126) && bParam1)
	{
		(*Global_1360165)[iParam0]->f_126 = func_1628(iParam0);
	}
	return (*Global_1360165)[iParam0]->f_126;
}

void func_1019(int iParam0)
{
	if (!func_484(iParam0))
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

void func_1020(int iParam0, int iParam1)
{
	if (!func_484(iParam0))
	{
		return;
	}
	(*Global_1360165)[iParam0]->f_70.f_12 = iParam1;
}

int func_1021(int iParam0)
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

void func_1022(int iParam0)
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

void func_1023()
{
	_0x243cede8f916b994();
	Global_1934765->f_338 = -1;
}

void func_1024(bool bParam0, float fParam1)
{
	if (is_bit_set(Global_1934765->f_301, 1))
	{
		return;
	}
	iVar0 = func_1025();
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
	if (func_1629(&(Global_1934765->f_318[iVar0]), bParam0, fParam1))
	{
		Global_1934765->f_338 = iVar0;
	}
}

int func_1025()
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
		iVar3 = func_1630(Global_1934765->f_318[iVar2]->f_1);
		if (iVar3 > iVar0)
		{
			iVar0 = iVar3;
			iVar1 = iVar2;
		}
		iVar2 = (iVar2 + -1);
	}
	return iVar1;
}

bool func_1026(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return ((*Global_1945938)[iParam0]->f_1 && iParam1) != 0;
}

int func_1027(int iParam0)
{
	iVar0 = func_530(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return func_1631(iVar0);
}

int func_1028(int iParam0, int iParam1)
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
			func_1632(iVar2);
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

void func_1029()
{
	iVar0 = 0;
	while (iVar0 < Global_1058888->f_40501)
	{
		iVar0++;
	}
}

int func_1030(bool bParam0)
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

int func_1031(int iParam0)
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

void func_1032(int iParam0, int iParam1)
{
	Global_1946804->f_2657.f_26.f_6 = (Global_1946804->f_2657.f_26.f_6 - (Global_1946804->f_2657.f_26.f_6 && iParam0));
}

void func_1033(int iParam0, int iParam1)
{
	Global_1946804->f_2657.f_26.f_6 = (Global_1946804->f_2657.f_26.f_6 || iParam0);
}

void func_1034(int iParam0, int iParam1)
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
			func_1633((iVar0 - 1), iVar0);
			iVar0 = (iVar0 - 1);
		}
	}
	else
	{
		iVar0 = iParam0;
		while (iVar0 < iParam1)
		{
			func_1633(iVar0, iVar0 + 1);
			iVar0++;
		}
	}
	if (func_214(&(Global_1898164->f_1[0])))
	{
		func_226(&(Global_1898164->f_1[0]), 3);
	}
}

void func_1035(int iParam0, int iParam1, bool bParam2)
{
	if (!func_548(iParam0))
	{
		return;
	}
	func_1634(iParam1, &iVar0, &iVar1);
	if (bParam2)
	{
		set_bit((*Global_1935183->f_73[iParam0])[iVar0], iVar1);
	}
	else
	{
		clear_bit((*Global_1935183->f_73[iParam0])[iVar0], iVar1);
	}
}

void func_1036(var uParam0)
{
	Var0 = -1600776215;
	Var0.f_1 = 820723243;
	Var0.f_2 = 1;
	*uParam0 = { Var0 };
}

void func_1037(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_1038(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_1039()
{
	if (_get_number_of_references_of_script_with_name_hash(-92416669) > 0)
	{
		return true;
	}
	return false;
}

bool func_1040(int iParam0)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1934603->f_161)
	{
		if (iParam0 == get_hash_key(&((*Global_1934603)[iVar0]->f_10)))
		{
			func_1635(iVar0);
			return true;
		}
		iVar0++;
	}
	return false;
}

struct<4> func_1041(int iParam0, int iParam1)
{
	Var0 = { func_475(iParam0, iParam1) };
	Var0.f_3 = func_841(iParam0, iParam1);
	return Var0;
}

void func_1042(bool bParam0, bool bParam1)
{
	if (func_20() == -1)
	{
		func_1636();
	}
	else
	{
		return;
	}
	func_1637();
	Global_40.f_9.f_14 = func_307();
	Global_40.f_9.f_20 = _get_bounty_for_player(get_player_index());
	Global_40.f_11999 = _0xb00ce33465b5406d(1, "startup");
	if (bParam0 && !bParam1)
	{
		if (func_1638())
		{
			func_393(Global_1310720->f_1);
		}
		else if (func_1639() == func_394(Global_36, 1) && func_1640() != 2)
		{
			func_393(Global_40.f_6);
			Global_40.f_9 = 1;
		}
		else
		{
			func_393(Global_36);
		}
		func_1641(Global_36, &vVar0, &uVar4);
		if (!func_1638())
		{
			if (func_1626(vVar0, Global_36) < func_1626(Global_40.f_9.f_7, Global_36))
			{
				func_393(vVar0);
				Global_40.f_9 = uVar4;
			}
			else
			{
				Global_40.f_9 = 0;
			}
		}
		Global_40.f_9.f_15 = func_394(Global_40.f_9.f_7, 1);
	}
	else if (!bParam0)
	{
		func_1641(Global_36, &(Global_40.f_9.f_7), &(Global_40.f_9));
		override_save_house(true, Global_40.f_9.f_7, 0f, true, &vVar0, &uVar3);
	}
	if (!bParam1)
	{
		func_253(Global_1935630, 8192);
	}
	func_1642();
}

bool func_1043(int iParam0)
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

void func_1044(int iParam0)
{
	iParam0 = func_288(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_239(iParam0);
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	iVar6 = 0;
	while (iVar6 < 3)
	{
		iVar1 = func_1643(iVar6);
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

void func_1045(int iParam0, int iParam1)
{
	iParam0 = func_288(iParam0);
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

bool func_1046(int iParam0, int iParam1)
{
	iParam0 = func_288(iParam0);
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

void func_1047(var uParam0)
{
	if (network_is_game_in_progress())
	{
		_set_blip_name_from_player_string(*uParam0, func_1645(func_1644(255), 109029619));
	}
	else if (func_326())
	{
		set_blip_name_from_text_file(*uParam0, "SADDLE_BLIP_ARTHUR");
	}
	else
	{
		func_1074();
		set_blip_name_from_text_file(*uParam0, "SADDLE_BLIP_JOHN");
	}
}

int func_1048(int iParam0)
{
	iParam0 = func_288(iParam0);
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

void func_1049(var uParam0, bool bParam1)
{
	if (network_is_game_in_progress())
	{
		_set_blip_name_from_player_string(*uParam0, func_1645(func_1644(255), 109029619));
	}
	else
	{
		sVar0 = "";
		if (bParam1)
		{
			sVar0 = "HORSE_BLIP_TEMPORARY";
		}
		else if (func_326())
		{
			sVar0 = "HORSE_BLIP_ARTHUR";
		}
		else if (func_1074())
		{
			sVar0 = "HORSE_BLIP_JOHN";
		}
		if (compare_strings(sVar0, "", false, -1) != 0)
		{
			set_blip_name_from_text_file(*uParam0, sVar0);
		}
	}
}

int func_1050(int iParam0)
{
	iParam0 = func_288(iParam0);
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

float func_1051(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist(vParam0, vParam3);
}

float func_1052(int iParam0)
{
	iParam0 = func_288(iParam0);
	if (iParam0 == -1)
	{
		return -1f;
	}
	if (iParam0 >= 7)
	{
		return -1f;
	}
	iVar0 = func_1521(iParam0);
	if (!is_model_valid(iVar0))
	{
		return -1f;
	}
	iVar1 = func_1048(iParam0);
	iVar2 = get_default_max_attribute_rank(iVar0, 7);
	fVar3 = _0xeb67d4e056c85a81(iVar1);
	fVar4 = _0x78d8c1d4eb80c588(iVar1);
	if (iVar1 >= iVar2)
	{
		return fVar3;
	}
	iVar5 = func_1048(iParam0) + 1;
	fVar6 = func_1646(iParam0);
	fVar7 = to_float(get_default_attribute_points_needed_for_rank(iVar0, 7, iVar1));
	fVar8 = to_float(get_default_attribute_points_needed_for_rank(iVar0, 7, iVar5));
	fVar9 = (fVar6 - fVar7);
	fVar10 = (fVar8 - fVar7);
	fVar11 = (fVar9 / fVar10);
	fVar12 = func_1647(fVar3, fVar4, fVar11);
	return fVar12;
}

void func_1053(int iParam0)
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

void func_1054(int iParam0)
{
	_set_blip_flash_style(iParam0, 673950256);
	_set_blip_flash_style(iParam0, 561559387);
	_set_blip_flash_style(iParam0, -201249929);
}

bool func_1055()
{
	if (func_360())
	{
		return _get_special_edition_cash_camp_bonus_enabled();
	}
	return false;
}

void func_1056(int iParam0)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if ((Global_40.f_4283.f_325 + iParam0) < 0)
	{
		return;
	}
	func_1648((Global_40.f_4283.f_325 + iParam0));
}

void func_1057(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (is_string_null_or_empty(sParam1))
	{
		sParam1 = "FEED_GANG_MONEY_EARN";
	}
	if (func_1055())
	{
		func_754(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", -329231034, 0, -585750914, 0, 0, 0, 1);
	}
	else
	{
		func_754(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 2124880615, 0, -585750914, 0, 0, 0, 1);
	}
}

char* func_1058(int iParam0)
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

char* func_1059(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7)
{
	return _0xd8402b858f4ddd88(&cParam0, get_length_of_literal_string(&cParam0));
}

int func_1060(int iParam0)
{
	return Global_17504.f_42[iParam0]->f_5;
}

bool func_1061(int iParam0)
{
	func_1069(iParam0, &iVar0, &iVar1);
	return is_bit_set(&(Global_1357549->f_1866[iVar0]), iVar1);
}

void func_1062(int iParam0, int iParam1)
{
	_journal_write_entry(iParam0);
	if (iParam1 == 1)
	{
		func_1063(1);
	}
}

void func_1063(bool bParam0)
{
	if (bParam0)
	{
		func_471(&(Global_40.f_12019.f_42), 1);
	}
	else
	{
		func_472(&(Global_40.f_12019.f_42), 1);
	}
}

int func_1064(int iParam0)
{
	if (!func_214(iParam0))
	{
		return -15;
	}
	return func_1649(iParam0);
}

bool func_1065(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_750(iParam1) || !func_750(iParam0))
		{
			return true;
		}
	}
	return iParam0 > iParam1;
}

bool func_1066(vector3 vParam0, int iParam3, var uParam4, int iParam5, int iParam6, bool bParam7)
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

int func_1067(int iParam0)
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

bool func_1068(vector3 vParam0, int iParam3, var uParam4, int iParam5, int iParam6, bool bParam7)
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

int func_1069(int iParam0, int iParam1, int iParam2)
{
	iVar0 = func_1650(iParam0, 1);
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
	return 1;
}

void func_1070(var uParam0)
{
	*uParam0 = 176656832;
	uParam0->f_1 = -15;
	uParam0->f_2 = 1017034651;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
}

void func_1071(int iParam0, int iParam1, bool bParam2)
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

int func_1072()
{
	iVar0 = func_604();
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

int func_1073(int iParam0)
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
	fVar1 = func_1608(absf(fVar1) < 1f, func_1608(fVar1 < 0f, -1f, 1f), fVar1);
	return ceil(fVar1);
}

bool func_1074()
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

int func_1075(int iParam0)
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

int func_1076()
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

void func_1077(int iParam0, bool bParam1, int iParam2)
{
	func_1651((get_game_timer() + iParam2), !bParam1);
	_databinding_write_data_int(Global_1955569->f_1.f_2.f_1, iParam0);
	func_1652(iParam0);
}

void func_1078(int iParam0)
{
	_databinding_write_data_bool(&(Global_1955569->f_5.f_2[0]->f_16[2]), false);
	_databinding_write_data_bool(&(Global_1955569->f_5.f_2[0]->f_32[2]), true);
	_databinding_write_data_string(&(Global_1955569->f_5.f_2[0]->f_20[2]), func_1653(iParam0));
	_databinding_write_data_string(&(Global_1955569->f_5.f_2[0]->f_24[2]), "pausemenu_player");
}

void func_1079(bool bParam0)
{
	bVar3 = false;
	if (func_1654(&iVar4))
	{
		if (iVar4 <= 0)
		{
			return;
		}
		iVar5 = 0;
		while (iVar5 < iVar4)
		{
			if (func_1655(iVar5, &iVar2, &iVar0))
			{
				if (!func_624(iVar2, 0))
				{
				}
				else
				{
					iVar1 = func_1656(iVar2);
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
							if (func_643(iVar2) == -1013984273)
							{
								if (iVar0 == 1014511709)
								{
									bVar3 = func_1072() <= -160;
								}
								else if (iVar0 == -1712679084)
								{
									bVar3 = func_1072() >= 160;
								}
							}
							else
							{
								bVar3 = iVar0 == func_1657();
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

char* func_1080(int iParam0)
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

bool func_1081(int iParam0)
{
	return func_643(iParam0) == -427144552;
}

bool func_1082(int iParam0)
{
	if (func_20() != -1)
	{
		return false;
	}
	if (func_645(iParam0, 1048576))
	{
		return false;
	}
	if (is_weapon_valid(iParam0))
	{
		return func_1087(iParam0, &uVar0, 1, 0, 0);
	}
	return func_369(iParam0, 1, 0);
}

void func_1083(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (func_643(iParam0) != -427144552)
	{
		return;
	}
	iVar0 = func_650(iParam0, 0);
	if (!is_weapon_valid(iVar0))
	{
		return;
	}
	if (bParam2 || !func_122(iVar0))
	{
		if (func_20() == -1)
		{
			func_651(iVar0);
		}
		if (bParam2 || (!has_ped_got_weapon(Global_35, iVar0, 0, false) && func_628(iParam0, 0, 0) == 0))
		{
			if (!*bParam3 && !iParam4 == 1248274121)
			{
				func_704(iParam0, iParam1, 0, 0, 0);
				play_sound_frontend("REWARD_NEW_GUN", "HUD_REWARD_SOUNDSET", true, 0);
				*bParam3 = 1;
			}
		}
	}
}

void func_1084(int iParam0, int iParam1)
{
	if (func_644(iParam0, 58855631))
	{
		func_1234(iParam0, -915411861, &iVar0, 1);
		*iParam1 = (*iParam1 * iVar0);
	}
}

int func_1085(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	if (!func_624(iParam0, 0))
	{
		return 0;
	}
	if (!func_652(0))
	{
		bParam2 = true;
	}
	if (bParam2)
	{
		return _0xe80e50bee276a54a(iParam0, uParam1->f_4);
	}
	return _0xaddd1e7c0ecf7d95(func_1030(bParam3), iParam0);
}

int func_1086(int iParam0, bool bParam1)
{
	if (func_656(iParam0))
	{
		return get_ped_ammo_by_type(Global_35, iParam0);
	}
	return _0xe787f05dfc977bde(func_1030(bParam1), iParam0, 0);
}

bool func_1087(int iParam0, var uParam1, int iParam2, bool bParam3, bool bParam4)
{
	func_1658(&iParam0);
	if (!func_624(iParam0, 0))
	{
		return false;
	}
	if (!func_652(0))
	{
		bParam3 = true;
	}
	if (func_1081(iParam0) && _0x705be297eebdb95d(iParam0))
	{
		if (_is_weapon_one_handed(iParam0))
		{
			Var0 = { func_1218(0) };
			Var4.f_9 = -1591664384;
			if (!func_1110(iParam0, &Var0, 1728382685, 0))
			{
				return false;
			}
			else if (func_1111(iParam0, &Var4, 1728382685))
			{
				return false;
			}
			if (func_1219(iParam0, 1))
			{
				if (!func_1110(iParam0, &Var0, -649335959, 0))
				{
					return false;
				}
				else if (func_1111(iParam0, &Var4, -649335959))
				{
					return false;
				}
			}
		}
		else if (!func_1659(iParam0, &uVar26, 0))
		{
			return false;
		}
		return true;
	}
	iVar27 = func_1085(iParam0, uParam1, bParam3, bParam4);
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
		iVar28 = func_1660(iParam0, *uParam1, uParam1->f_4, bParam4);
	}
	else
	{
		iVar28 = _0xe787f05dfc977bde(func_1030(bParam4), iParam0, 0);
	}
	if ((iVar28 + iParam2) > iVar27)
	{
		return true;
	}
	return false;
}

int func_1088(int iParam0, int iParam1)
{
	if (!func_624(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_643(iParam0);
	if (iVar0 == -427144552 && is_weapon_valid(iParam0))
	{
		return _get_ammo_type_for_weapon(iParam0);
	}
	else if (iVar0 == 307971639 && _is_ammo_valid(iParam0))
	{
		return iParam0;
	}
	if (func_644(iParam0, 1399091007))
	{
		func_1152(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

int func_1089(int iParam0, bool bParam1)
{
	if (!is_weapon_valid(iParam0))
	{
		return 0;
	}
	Var0 = { func_1661(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam1)
	{
		func_1662(&Var0, func_1218(0));
	}
	if (!func_1663(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	func_1162(iVar14);
	return uVar15;
}

int func_1090()
{
	return _0x62cab7db62ead434(-2076669067, 0);
}

int func_1091(int iParam0)
{
	return _0xec3959e9950bf56b(iParam0);
}

void func_1092(int iParam0)
{
	if (func_20() != -1)
	{
		return;
	}
	iVar0 = func_1664(iParam0);
	fVar1 = func_1665(iParam0);
	if ((Global_1347477->f_117 || !func_646(31)) || !func_1666(iVar0))
	{
		return;
	}
	if (fVar1 <= 0f)
	{
		return;
	}
	if (func_1667(iVar0) >= 7)
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
	func_1668(iVar0, (&Global_40.f_11095.f_11[iVar0] + fVar1), 0);
	func_754(_create_var_string(6, func_1669(iParam0), fVar1), "itemtype_textures", func_1670(iVar0), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

int func_1093(int iParam0)
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

int func_1094(int iParam0, int iParam1)
{
	if (!func_1249(17, &Var0))
	{
		return 0;
	}
	Var0.f_2 = iParam1;
	Var0.f_3 = iParam0;
	_datafile_get_int(&uVar5, &Var0);
	return uVar5;
}

char* func_1095(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6)
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
			else if (func_639() >= 12)
			{
				sParam3 = _create_var_string(2, "COL_CC_CARD_POSTED_OBJ", func_1671(), 12);
			}
			else
			{
				sParam3 = _create_var_string(2, "COL_CC_CARD_FOUND_OBJ", func_1672(), 12);
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
			else if (func_1134() >= 30)
			{
				sParam3 = _create_var_string(2, "COL_DB_POSTED_OBJ", func_1673(), 30);
			}
			else
			{
				sParam3 = _create_var_string(2, "COL_DB_FOUND_OBJ", func_1134(), 30);
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
				sParam3 = _create_var_string(2, "COL_LF_CAUGHT_OBJ", func_1674(), 13);
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
			else if (func_1135() >= 10)
			{
				sParam3 = _create_var_string(2, "COL_RC_POSTED_OBJ", func_1675(), 10);
			}
			else
			{
				sParam3 = _create_var_string(2, "COL_RC_FOUND_OBJ", func_1135(), 10);
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
				sParam3 = _create_var_string(2, "COL_TX_CARCASS_COLLECTED_OBJ", sParam4, func_1094(iParam6, 20));
			}
			break;
	}
	return sParam3;
}

bool func_1096(int iParam0, int iParam1, int iParam2)
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

bool func_1097(int iParam0, int iParam1, vector3 vParam2, char* sParam5, char* sParam6)
{
	if (!_uilog_is_entry_registered(3, iParam1))
	{
		_uilog_add_entry_hash(3, iParam1, vParam2, get_hash_key(sParam5), get_hash_key(sParam6), 0);
	}
	return true;
}

bool func_1098(int iParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6, int iParam7)
{
	_uilog_add_or_update_objective(3, iParam1, get_hash_key(sParam2), sParam2, false, false, false);
	_uilog_set_entry_pinned(3, iParam1, true);
	_uilog_set_entry_brief_texture(3, iParam1, get_hash_key(sParam4), get_hash_key(sParam5));
	_uilog_set_entry_icon_texture(3, iParam1, iParam6, iParam7);
	_uilog_update_entry_subheader(3, iParam1, _create_var_string(2, sParam3));
	return true;
}

bool func_1099(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
{
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < iParam6)
	{
		if (iParam2 == -2076669067)
		{
			iVar2 = func_1676(iVar0);
			if (iParam4 == iVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = (func_369(iVar2, 1, 0) || func_1678(func_1677(iVar2)));
			}
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1103(func_1676(iVar0))), func_1103(func_1676(iVar0)), bVar1, true, false);
		}
		if (iParam2 == -440187297)
		{
			if (iVar0 == 0)
			{
				bVar1 = func_1134() >= iParam8;
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1679(iVar0)), func_1679(iVar0), bVar1, true, false);
			}
			else if (iVar0 == 1)
			{
				bVar1 = func_1673() >= iParam8;
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1679(iVar0)), func_1679(iVar0), bVar1, true, false);
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
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1679(iVar0)), func_1679(iVar0), bVar1, true, false);
			}
		}
		if (iParam2 == -1531394072)
		{
			iVar2 = func_1145(iParam3, func_1680(iVar0));
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			else if (bParam9)
			{
				if (iParam4 == iVar2)
				{
					bVar1 = (func_1141(iVar2) - iParam7) >= func_1094(iParam3, func_1681(iVar0));
				}
				else
				{
					bVar1 = func_1141(iVar2) >= func_1094(iParam3, func_1681(iVar0));
				}
			}
			else if (iParam4 == iVar2)
			{
				bVar1 = (func_1141(iVar2) + iParam7) >= func_1094(iParam3, func_1681(iVar0));
			}
			else
			{
				bVar1 = func_1141(iVar2) >= func_1094(iParam3, func_1681(iVar0));
			}
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1682(iVar2)), func_1682(iVar2), bVar1, true, false);
		}
		if (iParam2 == 1995362678)
		{
			if (func_1683(_0x126cbebba46693cf(iVar0, 1995362678, 0)))
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
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1684(_0x126cbebba46693cf(iVar0, iParam2, 0))), func_1684(_0x126cbebba46693cf(iVar0, iParam2, 0)), bVar1, true, false);
		}
		if (iParam2 == 2103522376)
		{
			if (iVar0 == 0)
			{
				bVar1 = func_1135() >= iParam8;
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1685(iVar0)), func_1685(iVar0), bVar1, true, false);
			}
			else if (iVar0 == 1)
			{
				bVar1 = func_1675() >= iParam8;
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1685(iVar0)), func_1685(iVar0), bVar1, true, false);
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
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1685(iVar0)), func_1685(iVar0), bVar1, true, false);
			}
		}
		if (iParam2 == 678508515)
		{
			iVar2 = func_1145(iParam3, func_1680(iVar0));
			if (bParam9)
			{
				if (iParam4 == iVar2)
				{
					bVar1 = (func_1141(iVar2) - iParam7) >= true;
				}
				else
				{
					bVar1 = func_1686(iVar2);
				}
			}
			else if (iParam4 == iVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = func_1686(iVar2);
			}
			if (((((((iParam5 == 7 || iParam5 == 3) || iParam5 == 4) || iParam5 == 5) || iParam5 == 0) || iParam5 == 1) || iParam5 == 2) || iParam5 == 8)
			{
				bVar1 = true;
			}
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1687(iVar2)), func_1687(iVar2), bVar1, true, false);
		}
		iVar0++;
	}
	return true;
}

bool func_1100(int iParam0, int iParam1, int iParam2, int iParam3)
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
		if (func_1674() >= 13)
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

bool func_1101(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (func_214(func_227(0)) && ((func_1688(0) == 1 || func_1688(0) == 8) || func_1688(0) == 6))
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

var func_1102(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, int iParam6, int iParam7, char* sParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13)
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

char* func_1103(int iParam0)
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

bool func_1104(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_1105(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return is_bit_set(&(Global_40.f_7857[iVar1]), iVar2);
}

void func_1106(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	uVar3 = &Global_40.f_7857[iVar1];
	set_bit(&uVar3, iVar2);
	Global_40.f_7857[iVar1] = uVar3;
}

void func_1107(int iParam0)
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
			func_1689(1);
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
			func_1690(1);
			break;
		case 19:
			_uitutorial_set_rpg_icon_visibility(1, 0);
			_uitutorial_set_rpg_icon_visibility(0, 0);
			func_1690(2);
			break;
		case 20:
			_uitutorial_set_rpg_icon_visibility(3, 0);
			_uitutorial_set_rpg_icon_visibility(2, 0);
			func_1690(3);
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
			func_1691(1);
			break;
		case 34:
			func_1692(1);
			break;
		case 35:
			func_1693(1);
			break;
		case 36:
			break;
		case 37:
			func_1694(0);
			break;
		case 38:
			func_1695(0);
			break;
		case 39:
			func_1696(0);
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
			if ((!&Global_1879534 && func_420()) && _is_deadeye_ability_locked(get_player_index(), 2))
			{
				func_760("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_MANUAL_PAINT", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_level(get_player_index(), 2);
			func_347(586, 0);
			break;
		case 3:
			if ((!&Global_1879534 && func_420()) && _is_deadeye_ability_locked(get_player_index(), 3))
			{
				func_760("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_STAY_ACTIVE", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_locked(get_player_index(), 3, false);
			_set_deadeye_ability_level(get_player_index(), 3);
			func_347(587, 0);
			break;
		case 4:
			if ((!&Global_1879534 && func_420()) && _is_deadeye_ability_locked(get_player_index(), 4))
			{
				func_760("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_FATAL", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_locked(get_player_index(), 3, false);
			_set_deadeye_ability_locked(get_player_index(), 4, false);
			_set_deadeye_ability_level(get_player_index(), 4);
			func_347(588, 0);
			break;
		case 5:
			if ((!&Global_1879534 && func_420()) && _is_deadeye_ability_locked(get_player_index(), 5))
			{
				func_760("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_CRITICAL", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_locked(get_player_index(), 3, false);
			_set_deadeye_ability_locked(get_player_index(), 4, false);
			_set_deadeye_ability_locked(get_player_index(), 5, false);
			_set_deadeye_ability_level(get_player_index(), 5);
			func_347(589, 0);
			break;
		case 24:
			_unlock_set_unlocked(-200143754, true);
			_unlock_set_visible(-200143754, true);
			_0x83b8d50eb9446bba(player_ped_id(), 1);
			if (func_20() == -1)
			{
				if (!func_1175(99217379) || func_1334(99217379) == 2110595215)
				{
					if (func_1074())
					{
						iVar0 = -1515874150;
					}
					else
					{
						iVar0 = 899611344;
					}
					if (!func_369(iVar0, 1, 0))
					{
						func_697(iVar0, 1, 752097756);
					}
					func_676(Global_35, iVar0, 0, 99217379, 1, 1, 1, 0, 1, 1);
				}
			}
			break;
		case 48:
			if (func_20() == -1)
			{
				if (!func_369(1013902307, 1, 0))
				{
					func_697(1013902307, 1, 752097756);
				}
			}
			break;
		case 50:
			if (func_20() == -1)
			{
				if (!func_369(1013902307, 1, 0))
				{
					func_697(1013902307, 1, 752097756);
				}
				if (!func_369(142640135, 1, 0))
				{
					func_697(142640135, 1, 752097756);
				}
			}
			break;
		case 49:
			if (func_20() == -1)
			{
				if (!func_369(786809402, 1, 0))
				{
					func_697(786809402, 1, 752097756);
				}
			}
			break;
		case 51:
			if (func_20() == -1)
			{
				if (!func_369(786809402, 1, 0))
				{
					func_697(786809402, 1, 752097756);
				}
				if (!func_369(-518019409, 1, 0))
				{
					func_697(-518019409, 1, 752097756);
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
			func_1697();
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

bool func_1108(int iParam0)
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

int func_1109(int iParam0, int iParam1)
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

bool func_1110(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	return func_1660(iParam0, *uParam1, iParam2, bParam3) > 0;
}

bool func_1111(int iParam0, var uParam1, int iParam2)
{
	if (func_1698(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return false;
}

struct<4> func_1112(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	if (!func_624(iParam0, 0))
	{
		return Var0;
	}
	_0x886dfd3e185c8a89(func_1030(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

bool func_1113(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(uParam1))
	{
		return false;
	}
	if (func_1699(iParam0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_1222(*uParam1, &Var0, bParam6, 0))
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
	if (!func_652(bParam6))
	{
		iVar14 = -1;
		return iVar14 != -1;
	}
	if (!_0x3e4e811480b3ae79(func_1030(bParam6), uParam1, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

void func_1114(int iParam0, int iParam1)
{
	if ((get_ammo_in_clip(Global_35, &iVar0, iParam0) && iVar0 < iParam1) && iVar0 < _get_weapon_clip_size(iParam0))
	{
		iVar1 = func_1700(_get_weapon_clip_size(iParam0), iParam1);
		set_ammo_in_clip(Global_35, iParam0, iVar1);
	}
}

void func_1115(int iParam0)
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
	iVar2 = func_307();
	func_356(&iVar2, 0, 0, 0, 1, 0, 0, 0);
	decor_set_int(Global_35, sVar1, iVar2);
}

int func_1116(int iParam0)
{
	if (func_1701(iParam0))
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

bool func_1117(int iParam0)
{
	return _is_ammo_valid(_get_ammo_type_for_weapon(iParam0));
}

int func_1118(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	iVar0 = 0;
	if (!is_entity_dead(iParam0))
	{
		get_current_ped_weapon(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

int func_1119(int iParam0)
{
	iVar0 = _get_weapon_type_from_ammo_type(iParam0);
	if (_0x705be297eebdb95d(iVar0))
	{
		if (_is_weapon_two_handed(iVar0))
		{
			if (!func_646(50))
			{
				if (!func_646(48))
				{
					return 133;
				}
				return 135;
			}
		}
		else if (_is_weapon_one_handed(iVar0))
		{
			if (!func_646(51))
			{
				if (!func_646(49))
				{
					return 134;
				}
				return 136;
			}
		}
	}
	return 137;
}

bool func_1120(int iParam0, int iParam1, var uParam2)
{
	if (!func_624(iParam1, 0))
	{
		return false;
	}
	if (func_643(iParam1) != -1037537535)
	{
		return false;
	}
	bVar1 = func_20() != -1;
	iVar2 = _get_metaped_type(iParam0);
	if (func_648(iParam1) == -999503751)
	{
		return true;
	}
	iVar4 = func_722(iParam1);
	if (iVar4 == -358215195)
	{
		*uParam2 = 2084739242;
		return false;
	}
	bVar7 = false;
	iVar8 = iParam1;
	if (func_644(iParam1, 866047851))
	{
		iVar5 = func_723(iVar4, 1);
		if (func_1702(&(Global_1946804->f_1497)) >= 2 && &Global_1946804->f_1497.f_1[iVar5] != iVar8)
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
			iVar3 = func_648(&(Global_1946804->f_1497.f_1[iVar5]));
			if (bVar7 && iVar3 == -525676072)
			{
				*uParam2 = -1938792745;
				return false;
			}
			break;
		case -1944638739:
			iVar5 = 35;
			if (&Global_1946804->f_1497.f_1[iVar5] != &Global_1946804->f_57[iVar5] && func_644(iParam1, -1638171711))
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
			if (func_1703(1868067663, &uVar0))
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
				iVar10 = func_1704(iVar8, iVar4, iVar2, bVar1);
				iVar9 = func_1704(&(Global_1946804->f_1497.f_1[iVar5]), iVar4, iVar2, bVar1);
				if (((iVar11 + iVar10) - iVar9) > 31)
				{
					*uParam2 = -1608241763;
					return false;
				}
				Jump @776; //curOff = 583
				iVar3 = func_648(iParam1);
				iVar5 = 36;
				iVar6 = 35;
				if (iParam1 != &Global_1946804->f_57[iVar6] && func_644(&(Global_1946804->f_1497.f_1[iVar5]), -1638171711))
				{
					*uParam2 = -357399012;
					return false;
				}
				if (iVar3 == 1769055947 || iVar3 == 1545016984)
				{
				}
				else
				{
					if (iParam1 != &Global_1946804->f_57[iVar6] && func_1705(&(Global_1946804->f_1497.f_1[iVar5])))
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

void func_1121()
{
	_0xfe7c9cf376d23342(player_id(), (1f - (Global_40.f_11095.f_64 + Global_1347477->f_175)));
}

void func_1122()
{
	fVar0 = Global_40.f_11095.f_44;
	fVar1 = Global_40.f_11095.f_45;
	set_player_health_recharge_multiplier(player_id(), (1f - (fVar0 - Global_40.f_11095.f_69)));
	_0x08e22898a6af4905(player_id(), (1f - fVar0));
	_0xfeca17cf3343694b(player_id(), (1f - fVar0));
	_0xbbadfb5e5e5766fb(player_id(), (1f - fVar1));
}

int func_1123()
{
	iVar1 = 0;
	while (iVar1 < 26)
	{
		if (func_369(func_1706(iVar1), 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1124(int iParam0)
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

bool func_1125(int iParam0, int iParam1)
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
	if (func_369(iVar0, 1, 0) && func_369(iVar1, 1, 0))
	{
		return true;
	}
	return false;
}

int func_1126(int iParam0)
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

bool func_1127(int iParam0, int iParam1)
{
	iVar0 = func_1707(iParam0);
	if (iVar0 != -15)
	{
		func_356(&iVar0, 0, iParam1, 0, 0, 0, 0, 0);
		return !func_751(iVar0, 1);
	}
	return false;
}

void func_1128(int iParam0)
{
	Global_40.f_12004.f_6 = (Global_40.f_12004.f_6 || iParam0);
}

void func_1129(int iParam0)
{
	Global_40.f_12004.f_1 = (Global_40.f_12004.f_1 || iParam0);
}

void func_1130(int iParam0)
{
	Global_40.f_12004.f_3 = (Global_40.f_12004.f_3 || iParam0);
}

void func_1131(int iParam0)
{
	Global_40.f_12004.f_5 = (Global_40.f_12004.f_5 || iParam0);
}

int func_1132(int iParam0)
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
	iVar1 = func_1141(iVar9);
	iVar2 = func_1141(iVar10);
	iVar3 = func_1141(iVar11);
	iVar5 = func_1142(iVar9);
	iVar6 = func_1142(iVar10);
	iVar7 = func_1142(iVar11);
	if (iParam0 != 2)
	{
		iVar4 = func_1141(iVar12);
		iVar8 = func_1142(iVar12);
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

void func_1133(int iParam0)
{
	Global_40.f_12004.f_2 = (Global_40.f_12004.f_2 || iParam0);
}

int func_1134()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 30)
	{
		if (func_1708(_0x126cbebba46693cf(iVar1, -440187297, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1135()
{
	return _0x5461c821d00fe15a(2103522376, 0);
}

bool func_1136(int iParam0, int iParam1, char* sParam2, bool bParam3, int iParam4, bool bParam5)
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
			if (func_1686(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1686(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_1686(iVar0))
		{
			*sParam2++;
		}
		if (func_1686(iVar0))
		{
			return true;
		}
	}
	else if (iParam0 == -1248968496)
	{
		if (bParam3)
		{
			if (func_1686(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1686(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_1686(iVar0))
		{
			*sParam2++;
		}
		if (func_1686(iVar1))
		{
			*sParam2++;
		}
		if (func_1686(iVar0) && func_1686(iVar1))
		{
			return true;
		}
	}
	else if (iParam0 == 1706369307)
	{
		if (bParam3)
		{
			if (func_1686(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1686(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_1686(iVar0))
		{
			*sParam2++;
		}
		if (func_1686(iVar1))
		{
			*sParam2++;
		}
		if (func_1686(iVar2))
		{
			*sParam2++;
		}
		if ((func_1686(iVar0) && func_1686(iVar1)) && func_1686(iVar2))
		{
			return true;
		}
	}
	else
	{
		if (bParam3)
		{
			if (func_1686(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1686(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_1686(iVar0))
		{
			*sParam2++;
		}
		if (func_1686(iVar1))
		{
			*sParam2++;
		}
		if (func_1686(iVar2))
		{
			*sParam2++;
		}
		if (func_1686(iVar3))
		{
			*sParam2++;
		}
		if (((func_1686(iVar0) && func_1686(iVar1)) && func_1686(iVar2)) && func_1686(iVar3))
		{
			return true;
		}
	}
	return false;
}

void func_1137(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2)
	{
	}
	switch (iParam0)
	{
		case 1497516462:
			func_181(1497516462);
			func_478(2016141805);
			func_478(1010885152);
			func_478(-502324015);
			break;
		case 2016141805:
			func_478(1497516462);
			func_181(2016141805);
			func_478(1010885152);
			func_478(-502324015);
			break;
		case 1010885152:
			func_478(1497516462);
			func_478(2016141805);
			func_181(1010885152);
			func_478(-502324015);
			break;
		case -502324015:
			func_478(1497516462);
			func_478(2016141805);
			func_478(1010885152);
			func_181(-502324015);
			break;
		case -1056767524:
		case -538889627:
		case -538880323:
			func_478(-538889627);
			func_478(-538880323);
			func_478(-1056767524);
			func_181(iParam0);
			break;
		case -2038424081:
		case -1187950766:
		case -939420910:
		case 356365161:
		case 459290420:
		case 753127042:
		case 1884271742:
			func_1709();
			func_181(iParam0);
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
			func_1710();
			func_181(iParam0);
			break;
		case 2019386373:
			func_478(-664252410);
			func_478(2109952320);
			func_181(2019386373);
			break;
		case -664252410:
			func_478(2019386373);
			func_478(2109952320);
			func_181(-664252410);
			break;
		case 2109952320:
			func_478(2019386373);
			func_478(-664252410);
			func_181(2109952320);
			break;
		case -1674179981:
			func_478(-1835851517);
			func_478(-1838352012);
			func_181(-1674179981);
			break;
		case -1835851517:
			func_478(-1674179981);
			func_478(-1838352012);
			func_181(-1835851517);
			break;
		case -1838352012:
			func_478(-1674179981);
			func_478(-1835851517);
			func_181(-1838352012);
			break;
		case -1717960576:
			func_478(210001842);
			func_181(-1717960576);
			break;
		case 210001842:
			func_478(-1717960576);
			func_181(210001842);
			break;
		case -150493654:
			func_478(-1271608261);
			func_478(1846061697);
			func_478(-1145519186);
			func_181(-150493654);
			break;
		case -1271608261:
			func_478(-150493654);
			func_478(1846061697);
			func_478(-1145519186);
			func_181(-1271608261);
			break;
		case 1846061697:
			func_478(-150493654);
			func_478(-1271608261);
			func_478(-1145519186);
			func_181(1846061697);
			break;
		case -1145519186:
			func_478(-150493654);
			func_478(-1271608261);
			func_478(1846061697);
			func_181(-1145519186);
			break;
		case 1766284049:
			func_478(280705402);
			func_478(1926308480);
			func_181(1766284049);
			break;
		case 280705402:
			func_478(1766284049);
			func_478(1926308480);
			func_181(280705402);
			break;
		case 1926308480:
			func_478(1766284049);
			func_478(280705402);
			func_181(1926308480);
			break;
		case 1609506757:
			if (bParam1)
			{
				func_478(439465264);
				func_181(1609506757);
			}
			else
			{
				func_478(1609506757);
				func_478(439465264);
			}
			break;
		case 439465264:
			if (func_541(1609506757))
			{
				if (bParam1)
				{
					func_181(439465264);
				}
				else
				{
					func_478(439465264);
				}
			}
			break;
		case 1822001510:
			func_478(-1612662716);
			func_181(1822001510);
			break;
		case -1612662716:
			func_478(1822001510);
			func_181(-1612662716);
			break;
		case 1306158345:
			func_478(1952610440);
			func_478(-223469678);
			func_478(-404698347);
			func_478(1517904467);
			func_181(1306158345);
			break;
		case 1952610440:
			func_478(1306158345);
			func_478(-223469678);
			func_478(-404698347);
			func_478(1517904467);
			func_181(1952610440);
			break;
		case -223469678:
			func_478(1306158345);
			func_478(1952610440);
			func_478(-404698347);
			func_478(1517904467);
			func_181(-223469678);
			break;
		case -404698347:
			func_478(1306158345);
			func_478(1952610440);
			func_478(-223469678);
			func_478(1517904467);
			func_181(-404698347);
			break;
		case 1517904467:
			func_478(1306158345);
			func_478(1952610440);
			func_478(-223469678);
			func_478(-404698347);
			func_181(1517904467);
			break;
		case 1376646519:
			func_478(931649776);
			func_478(-434590080);
			func_478(1743048395);
			func_478(449774763);
			func_181(1376646519);
			break;
		case 931649776:
			func_478(1376646519);
			func_478(-434590080);
			func_478(1743048395);
			func_478(449774763);
			func_181(931649776);
			break;
		case -434590080:
			func_478(1376646519);
			func_478(931649776);
			func_478(1743048395);
			func_478(449774763);
			func_181(-434590080);
			break;
		case 1743048395:
			func_478(1376646519);
			func_478(931649776);
			func_478(-434590080);
			func_478(449774763);
			func_181(1743048395);
			break;
		case 449774763:
			func_478(1376646519);
			func_478(931649776);
			func_478(-434590080);
			func_478(1743048395);
			func_181(449774763);
			break;
		case -1414537028:
			func_478(38162571);
			func_478(1350391819);
			func_478(54073871);
			func_181(-1414537028);
			break;
		case 38162571:
			func_478(-1414537028);
			func_478(1350391819);
			func_478(54073871);
			func_181(38162571);
			break;
		case 1350391819:
			func_478(-1414537028);
			func_478(38162571);
			func_478(54073871);
			func_181(1350391819);
			break;
		case 54073871:
			func_478(-1414537028);
			func_478(38162571);
			func_478(1350391819);
			func_181(54073871);
			break;
		case 198200492:
			func_181(198200492);
			func_478(-1124061431);
			func_478(52706132);
			func_478(-259123672);
			break;
		case -1124061431:
			func_478(198200492);
			func_181(-1124061431);
			func_478(52706132);
			func_478(-259123672);
			break;
		case 52706132:
			func_478(198200492);
			func_478(-1124061431);
			func_181(52706132);
			func_478(-259123672);
			break;
		case -259123672:
			func_478(198200492);
			func_478(-1124061431);
			func_478(52706132);
			func_181(-259123672);
			break;
		case -919512195:
			func_181(-919512195);
			func_478(-1925798111);
			func_478(420709909);
			func_478(1703426636);
			break;
		case -1925798111:
			func_181(-1925798111);
			func_478(-919512195);
			func_478(420709909);
			func_478(1703426636);
			break;
		case 420709909:
			func_181(420709909);
			func_478(-919512195);
			func_478(-1925798111);
			func_478(1703426636);
			break;
		case 1703426636:
			func_181(1703426636);
			func_478(-919512195);
			func_478(-1925798111);
			func_478(420709909);
			break;
		case -1223121209:
			func_181(-1223121209);
			func_478(630808005);
			break;
		case 630808005:
			func_181(630808005);
			func_478(-1223121209);
			break;
		case 1453909576:
			func_181(1453909576);
			func_478(1643531967);
			break;
		case 1643531967:
			func_181(1643531967);
			func_478(1453909576);
			break;
		case 0:
			func_181(0);
			func_478(473295046);
			func_478(-1738165526);
			break;
		case 473295046:
			func_181(473295046);
			func_478(0);
			func_478(-1738165526);
			break;
		case -1738165526:
			func_181(-1738165526);
			func_478(0);
			func_478(473295046);
			break;
		case 932909855:
			func_181(932909855);
			func_478(2051822093);
			break;
		case 2051822093:
			func_181(2051822093);
			func_478(932909855);
			break;
		case 405586984:
			func_181(405586984);
			func_478(1509509592);
			func_478(-959357075);
			func_478(-1311865656);
			break;
		case 1509509592:
			func_181(1509509592);
			func_478(405586984);
			func_478(-959357075);
			func_478(-1311865656);
			break;
		case -959357075:
			func_181(-959357075);
			func_478(1509509592);
			func_478(405586984);
			func_478(-1311865656);
			break;
		case -1311865656:
			func_181(-1311865656);
			func_478(1509509592);
			func_478(-959357075);
			func_478(405586984);
			break;
		case -524145696:
			if (bParam1)
			{
				func_181(-524145696);
			}
			else
			{
				func_478(-524145696);
			}
			func_478(1626481264);
			func_478(282809459);
			break;
		case 282809459:
			func_181(282809459);
			func_478(1626481264);
			func_478(-524145696);
			break;
		case 1626481264:
			func_181(1626481264);
			func_478(-524145696);
			func_478(282809459);
			break;
		case 885203519:
			if (bParam1)
			{
				func_181(885203519);
			}
			else
			{
				func_478(885203519);
			}
			break;
		case -1080627546:
			if (bParam1)
			{
				func_181(-1080627546);
			}
			else
			{
				func_478(-1080627546);
			}
			break;
		default:
			if (bParam1)
			{
				if (!func_541(iParam0))
				{
					func_181(iParam0);
				}
			}
			else if (func_541(iParam0))
			{
				func_478(iParam0);
			}
			break;
	}
}

void func_1138(int iParam0)
{
	if (!func_1711(iParam0))
	{
		func_1713(func_1712(iParam0));
	}
}

int func_1139()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (func_1711(_0x126cbebba46693cf(iVar1, -1531394072, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1140(int iParam0, int iParam1, int iParam2)
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
	iVar1 = func_1141(iVar9);
	iVar2 = func_1141(iVar10);
	iVar3 = func_1141(iVar11);
	iVar5 = func_1142(iVar9);
	iVar6 = func_1142(iVar10);
	iVar7 = func_1142(iVar11);
	if (iParam2 != 2)
	{
		iVar4 = func_1141(iVar12);
		iVar8 = func_1142(iVar12);
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

int func_1141(int iParam0)
{
	if (func_369(iParam0, 1, 0))
	{
		iVar0 = func_628(iParam0, 0, 0);
	}
	return iVar0;
}

int func_1142(int iParam0)
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

int func_1143(int iParam0)
{
	return _0xf83d3dda4d3c8169(iParam0);
}

void func_1144(int iParam0, int iParam1)
{
	_0x3ea62e56f386c997(iParam0, iParam1);
}

int func_1145(int iParam0, int iParam1)
{
	if (!func_1249(17, &Var0))
	{
		return 0;
	}
	Var0.f_2 = iParam1;
	Var0.f_3 = iParam0;
	_datafile_get_hash(&uVar5, &Var0);
	return uVar5;
}

void func_1146(int iParam0, int iParam1, char* sParam2, int iParam3, bool bParam4)
{
	if ((((iParam0 == func_1145(iParam1, 5) || iParam0 == func_1145(iParam1, 6)) || iParam0 == func_1145(iParam1, 7)) || iParam0 == func_1145(iParam1, 8)) || iParam0 == func_1145(iParam1, 9))
	{
		func_1136(iParam1, iParam0, &sParam2, 0, iParam3, bParam4);
		func_640(51, 0, 0, iParam1, sParam2, 0, -1, 0);
		func_642(51, 0, 0, 0, 0, -1, 0);
	}
}

void func_1147(int iParam0, int iParam1, bool bParam2)
{
	iVar0 = 1;
	if ((((iParam0 == func_1145(iParam1, 5) || iParam0 == func_1145(iParam1, 6)) || iParam0 == func_1145(iParam1, 7)) || iParam0 == func_1145(iParam1, 8)) || iParam0 == func_1145(iParam1, 9))
	{
		if (func_1136(iParam1, iParam0, &iVar0, 0, 0, 0))
		{
			func_640(51, iParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				func_642(51, 0, 0, iVar0, func_1094(iParam1, 20), 1, 0);
			}
		}
		else
		{
			func_640(51, iParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				func_642(51, 0, 0, iVar0, func_1094(iParam1, 20), 1, 0);
			}
		}
	}
}

bool func_1148()
{
	if (func_215((*Global_1347702)[37]->f_15) && Global_1392388->f_7)
	{
		return true;
	}
	return false;
}

void func_1149(int iParam0)
{
	_0x3ea62e56f386c997(iParam0, 1);
}

void func_1150(int iParam0)
{
	if (!func_1714(iParam0))
	{
		_0x3ea62e56f386c997(iParam0, 1);
	}
}

void func_1151(int iParam0)
{
	_0x398fab9c96a81924(iParam0, 1);
}

void func_1152(int iParam0, int iParam1, var uParam2)
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

bool func_1153(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	func_1715();
	if (iParam2 == 39)
	{
		Var0 = { func_735(iParam0, 1, 0) };
		iParam2 = func_723(func_736(Var0.f_4), 1);
	}
	if (iParam2 < 0 || iParam2 >= 39)
	{
		return false;
	}
	if (func_644(iParam0, 866047851) && func_1702(&(Global_1946804->f_1378)) >= 2)
	{
		return false;
	}
	if ((func_1155(32768) && iParam2 == 10) && iParam0 != &Global_1946804->f_57[iParam2])
	{
		func_1716(func_1223(iParam2, 1));
	}
	iVar5 = 0;
	if (bParam4)
	{
		iVar5 = 3;
	}
	func_1717(iParam2);
	func_1718(iParam2, iVar5);
	if (&Global_1946804->f_1378.f_1[iParam2] != &Global_1946804->f_57[iParam2] && Global_1946804->f_57[iParam2]->f_1 > 1)
	{
		func_1204(Global_1946804->f_1378.f_1[iParam2], 4, 6);
		func_1204(Global_1946804->f_1497.f_1[iParam2], 4, 6);
	}
	func_1210(&(Global_1946804->f_1378), iParam0, iParam2, bParam4, 1);
	if (iParam1 == 0)
	{
		iParam1 = Global_1946804->f_1378.f_1[iParam2]->f_1;
	}
	Global_1946804->f_1378.f_1[iParam2] = iParam0;
	Global_1946804->f_1378.f_1[iParam2]->f_1 = func_1719(iParam0, iParam2, iParam1, func_20() != -1);
	if (bParam4)
	{
		func_1720(&(Global_1946804->f_1378), 1, 3);
	}
	else
	{
		func_1720(&(Global_1946804->f_1378), 1, 0);
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
				func_1477(func_1223(&(Global_1946804->f_2589.f_2[iVar6]), 1), 1, 6);
			}
			iVar6++;
		}
	}
	return true;
}

void func_1154(bool bParam0, bool bParam1, bool bParam2)
{
	func_1721(&(Global_1946804->f_2589), bParam0, bParam1, bParam2);
}

bool func_1155(int iParam0)
{
	return (Global_1946804 && iParam0) != 0;
}

void func_1156()
{
	func_1722(&(Global_1946804->f_2776));
	func_1723(32768);
	func_1477(1108822547, 8, 6);
}

int func_1157(int iParam0)
{
	iVar0 = 0;
	iVar1 = func_723(iParam0, 1);
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

void func_1158(int iParam0)
{
	if (func_1724(iParam0, 4096))
	{
		Global_1946804->f_858++;
	}
	if (Global_1946804->f_858 <= 0)
	{
		return;
	}
	Var0.f_1 = iParam0;
	Var0 = 34;
	func_1725(Var0);
}

void func_1159(int iParam0, int iParam1, int iParam2)
{
	Var0.f_1 = iParam2;
	Var0 = iParam0;
	Var0.f_2 = iParam1;
	func_1725(Var0);
}

bool func_1160(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	*iParam1 = _0x80d78bdc9d88ef07(func_1030(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_1161(var uParam0, int iParam1, int iParam2, int iParam3)
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

int func_1162(int iParam0)
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

float func_1163()
{
	if (func_1726())
	{
		return 0f;
	}
	if (_0x200373a8df081f22(Global_35, 2) || Global_40.f_11095.f_46 == 0)
	{
		return func_1727(2);
	}
	if (Global_1347477->f_119)
	{
		return func_1727(2);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_46) * 60f);
	fVar0 = (fVar0 / to_float(7));
	fVar1 = func_1728();
	fVar2 = func_1729();
	fVar3 = func_1730();
	fVar4 = func_1731();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_50)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_1732()));
	fVar7 = (func_1727(2) - fVar6);
	iVar8 = round(((fVar0 / 60f) * to_float(7)));
	fVar9 = (100f * (to_float(90) / to_float(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_1733(3, round((to_float(iVar8) * fVar10)), 0);
	func_1734(3, fVar9, fVar9 > 100f);
	return func_1313(fVar7, -100f, 100f);
}

float func_1164()
{
	if (func_1726())
	{
		return 0f;
	}
	if (_0x200373a8df081f22(Global_35, 1) || Global_40.f_11095.f_47 == 0)
	{
		return func_1727(1);
	}
	if (Global_1347477->f_119)
	{
		return func_1727(1);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_47) * 60f);
	fVar0 = (fVar0 / to_float(7));
	fVar1 = func_1728();
	fVar2 = func_1729();
	fVar3 = func_1730();
	fVar4 = func_1731();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_51)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_1732()));
	fVar7 = (func_1727(1) - fVar6);
	iVar8 = round(((fVar0 / 60f) * to_float(7)));
	fVar9 = (100f * (to_float(90) / to_float(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_1733(2, round((to_float(iVar8) * fVar10)), 0);
	func_1734(2, fVar9, fVar9 > 100f);
	return func_1313(fVar7, -100f, 100f);
}

float func_1165()
{
	if (func_1726())
	{
		return 0f;
	}
	if (_0x200373a8df081f22(Global_35, 0) || Global_40.f_11095.f_48 == 0)
	{
		return func_1727(0);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_48) * 60f);
	if (func_1735())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_54 + 1f));
	}
	else if (func_1736())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_53 + 1f));
	}
	else if (Global_1347477->f_119)
	{
		return func_1727(0);
	}
	if (Global_40.f_11095.f_43)
	{
		fVar0 = (10f * 60f);
	}
	fVar0 = (fVar0 / to_float(7));
	fVar1 = func_1728();
	fVar2 = func_1729();
	fVar3 = func_1730();
	fVar4 = func_1731();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_49)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_1732()));
	fVar7 = (func_1727(0) - fVar6);
	iVar8 = round(((fVar0 / 60f) * to_float(7)));
	fVar9 = (100f * (to_float(90) / to_float(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_1733(1, round((to_float(iVar8) * fVar10)), 0);
	func_1734(1, fVar9, fVar9 > 100f);
	if (fVar7 <= -100f && _get_player_health(player_id()) < 1f)
	{
		return func_1727(0);
	}
	return func_1313(fVar7, -100f, 100f);
}

bool func_1166(int iParam0, int iParam1)
{
	return (Global_1905944->f_22[iParam0]->f_2 && iParam1) != 0;
}

bool func_1167(int iParam0)
{
	return _0xf83d3dda4d3c8169(iParam0) > 0;
}

bool func_1168(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5)
{
	if (!func_624(iParam0, 0))
	{
	}
	if (!_0xb881ca836cc4b6d4(uParam2))
	{
		return false;
	}
	if (func_1087(iParam0, uParam2, iParam3, bParam5, 0))
	{
		return false;
	}
	if (!func_652(0))
	{
		return false;
	}
	if (!_0xcb5d11f9508a928d(func_1030(0), uParam1, uParam2, iParam0, uParam2->f_4, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

int func_1169(int iParam0, bool bParam1)
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
				return func_1737();
			}
			break;
	}
	return 0;
}

int func_1170(int iParam0)
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

bool func_1171(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 95)
	{
		return false;
	}
	return true;
}

void func_1172(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_1171(iParam0))
	{
		return;
	}
	if (func_1738(iParam0))
	{
		return;
	}
	if (!func_1739(iParam0))
	{
		func_1740(iParam0, 1, 0);
	}
	iVar0 = func_1741(iParam0);
	if (iVar0 != 0 && !(iParam0 >= 0 && iParam0 <= 5))
	{
		if (func_1742(iParam0, 512))
		{
			func_734(30, iVar0, 0, 0, 0);
		}
	}
	if ((!func_238() && !bParam1) && !func_221(0, 0, 1))
	{
		func_762(_create_var_string(10, "OUT_JOURN_DONE", _create_var_string(0, iVar0)), 10000, 0, 0, 0, 1);
	}
	func_1743(iParam0, 6);
	if (bParam2)
	{
		if (!func_221(0, 0, 1))
		{
			func_389(1, 4);
		}
	}
}

bool func_1173(int iParam0, bool bParam1)
{
	return func_1169(iParam0, 0) < func_1744(iParam0, bParam1);
}

bool func_1174(int iParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_648(iVar1) == iParam0)
		{
			*iParam1 = iVar1;
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_1175(int iParam0)
{
	if (iParam0 == -358215195)
	{
		return false;
	}
	return &Global_1946804->f_1497.f_1[func_723(iParam0, 1)] != &Global_1946804->f_57[func_723(iParam0, 1)];
}

void func_1176(int iParam0, int iParam1)
{
	if (func_644(iParam1, 130796156))
	{
		func_1745(iParam1, 0);
	}
	else if (func_644(iParam1, 930141731))
	{
		func_1745(iParam1, 1);
		func_1746(iParam0);
	}
}

void func_1177(var uParam0, int iParam1)
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

int func_1178(int iParam0, var uParam1, var uParam2, int iParam3)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!_cashinventory_is_session_ready())
	{
		return 0;
	}
	func_1747(uParam1);
	if (!_0x77b299e8799b1332(&uVar0, &(uParam1->f_1), uParam2))
	{
		return 0;
	}
	Var1.f_2.f_1 = 10;
	Var1 = iParam3;
	Var1.f_2 = { *uParam1 };
	func_1748(uParam2, iParam0, Var1);
	return 1;
}

int func_1179(int iParam0)
{
	return &(Global_1900073->f_159[iParam0]);
}

char* func_1180(int iParam0)
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

int func_1181(int iParam0)
{
	if (!func_1749(iParam0, &uVar0, 805880880, 0, 0, -401018458))
	{
		return -1102349958;
	}
	return uVar0;
}

bool func_1182()
{
	return !&Global_1911774;
}

void func_1183(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

char* func_1184(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

bool func_1185(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

char* func_1186(char* sParam0, int iParam1)
{
	return _create_var_string(42, "COLOR_STRING", _create_color_string(iParam1), sParam0);
}

bool func_1187(int iParam0, int iParam1, bool bParam2)
{
	if ((bParam2 && func_20() == 0) && !_unlock_is_visible(iParam0))
	{
		return false;
	}
	if (!func_1750(iParam0, iParam1, &uVar0, &iVar11) || iVar11 < 1)
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

bool func_1188(int iParam0, int iParam1)
{
	if (func_20() != -1)
	{
		return false;
	}
	if (func_1750(iParam0, iParam1, &uVar2, &iVar1))
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

void func_1189(bool bParam0)
{
	if (bParam0)
	{
		func_340(2032023096, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_340(-615217896, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		func_340(655868243, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		func_1190();
		_unlock_set_unlocked(645322743, true);
	}
	else
	{
		func_1751(2032023096);
		func_343(-615217896);
		func_719(655868243, 1, 1, -142743235, 1);
		func_1753(146323340, func_1752());
		Var0 = { func_1529() };
		if (func_1754(&Var0) == -1387633835)
		{
			func_1755(&Var0);
			func_1756(Var0);
		}
		iVar7 = -868094182;
		iVar8 = 1074477367;
		iVar9 = 1;
		func_1757(&iVar7, &iVar8, &iVar9);
		iVar6 = 0;
		while (iVar6 < 7)
		{
			if (func_1522(iVar6) == 2010625508)
			{
				func_1758(iVar6, iVar7);
				func_1759(iVar6, iVar8);
				func_1760(iVar6, iVar9);
				func_1761(iVar6, 0);
				if (func_1762(iVar6))
				{
					func_1763(iVar6);
				}
				iVar10 = func_1764(iVar8);
				func_1765(iVar6, iVar10);
			}
			iVar6++;
		}
		_unlock_set_unlocked(645322743, false);
	}
}

int func_1190()
{
	if (!func_1766(-1898635967, func_1752(), 1))
	{
		return 0;
	}
	if (func_360())
	{
		if (!func_1766(146323340, func_1752(), 0))
		{
			return 0;
		}
	}
	return 1;
}

void func_1191()
{
	func_354(34411519);
	func_354(834124286);
	func_354(-570967010);
}

void func_1192(bool bParam0)
{
	if (bParam0)
	{
		if (_unlock_is_unlocked(-1426541042))
		{
			return;
		}
		func_340(-1080874779, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_340(-223790555, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_340(1566032147, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_340(891311852, 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_340(-1353737667, 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_340(-330313895, 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_340(-2051332199, 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_340(1237770824, 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_340(-1795542128, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_340(-1757588258, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_340(-1921080134, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		_unlock_set_unlocked(-1426541042, true);
	}
	else
	{
		if (!_unlock_is_unlocked(-1426541042))
		{
			return;
		}
		func_719(-1080874779, 3, 1, -142743235, 1);
		func_719(-223790555, 3, 1, -142743235, 1);
		func_719(1566032147, 3, 1, -142743235, 1);
		func_719(891311852, 5, 1, -142743235, 1);
		func_719(-1353737667, 5, 1, -142743235, 1);
		func_719(-330313895, 5, 1, -142743235, 1);
		func_719(-2051332199, 5, 1, -142743235, 1);
		func_719(1237770824, 5, 1, -142743235, 1);
		func_719(-1795542128, 3, 1, -142743235, 1);
		func_719(-1757588258, 3, 1, -142743235, 1);
		func_719(-1921080134, 10, 1, -142743235, 1);
		iVar1 = -868094182;
		iVar2 = 1074477367;
		iVar3 = 1;
		func_1757(&iVar1, &iVar2, &iVar3);
		iVar0 = 0;
		while (iVar0 < 7)
		{
			if (func_1522(iVar0) == 153881023)
			{
				func_1758(iVar0, iVar1);
				func_1759(iVar0, iVar2);
				func_1760(iVar0, iVar3);
				func_1761(iVar0, 0);
				if (func_1762(iVar0))
				{
					func_1763(iVar0);
				}
				iVar4 = func_1764(iVar2);
				func_1765(iVar0, iVar4);
			}
			iVar0++;
		}
		func_1190();
		_unlock_set_unlocked(-1426541042, false);
	}
}

void func_1193(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4)
{
	func_1767(iParam0);
	if (bParam3)
	{
		func_761(iParam0, sParam1, iParam2);
	}
}

bool func_1194(int iParam0)
{
	return (Global_40.f_12004.f_10 && iParam0) != 0;
}

void func_1195(int iParam0)
{
	Global_40.f_12004.f_10 = (Global_40.f_12004.f_10 - (Global_40.f_12004.f_10 && iParam0));
}

struct<14> func_1196()
{
	Var3.f_9 = -1591664384;
	Var17.f_9 = -1591664384;
	if (func_1160("ALL WEAPONS", &iVar0, &iVar1, -1591664384, 0))
	{
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (!func_1161(&Var3, iVar2, iVar0, iVar1))
			{
				Jump @136; //curOff = 80
			}
			else if (Var3.f_4 != 127400949)
			{
			}
			else if (func_1111(Var3.f_4, &Var17, Var3.f_9))
			{
			}
			else
			{
				func_1162(iVar0);
				return Var3;
			}
			iVar2++;
		}
		func_1162(iVar0);
	}
	Var39.f_9 = -1591664384;
	return Var39;
}

void func_1197(int iParam0, struct<4> Param1, int iParam5)
{
	Var0 = { Param1 };
	Var0.f_4 = iParam5;
	Var5.f_9 = -1591664384;
	if (func_1768(Param1, iParam5, &Var5, 0))
	{
		func_1113(Var5.f_4, &Var5, &Var0, -1, -142743235, 1, 0);
	}
	func_1168(iParam0, &Var19, &Var0, 1, 752097756, 0);
	func_1769(Var19, 1);
}

bool func_1198(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (!is_weapon_valid(iParam0))
	{
		return false;
	}
	Var0 = { func_1661(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam2)
	{
		func_1662(&Var0, func_1218(0));
	}
	if (!func_1663(&Var0, &iVar14, &iVar15, 0))
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
			if (!func_1161(&Var16, iVar35, iVar14, iVar15))
			{
			}
			else
			{
				Var30.f_4 = Var16.f_9;
				Var30 = { Var16.f_5 };
				if (func_1113(iParam0, &Var16, &Var30, 1, iParam3, 0, 0))
				{
					iVar36++;
				}
			}
			iVar35++;
		}
	}
	func_1162(iVar14);
	if (iVar36 < iParam1)
	{
	}
	return true;
}

bool func_1199(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (!func_624(iParam0, 0))
	{
		return false;
	}
	if (iParam1 < 1)
	{
		return false;
	}
	Var0 = { func_735(iParam0, bParam4, 1) };
	if (Var0.f_4 == 1084182731)
	{
		return func_1770(iParam0, iParam1, iParam2, bParam3, bParam4);
	}
	Var5 = { func_1112(iParam0, Var0, Var0.f_4, bParam4) };
	return func_1113(iParam0, &Var5, &Var0, iParam1, iParam2, bParam3, bParam4);
}

void func_1200(int iParam0, int iParam1)
{
	if (!Global_1901328->f_94)
	{
		if (func_644(iParam0, 606799272))
		{
			func_1771(iParam0, iParam1);
		}
		if (func_644(iParam0, -1112814642) && func_644(iParam0, -1697809989))
		{
			func_672(iParam0, iParam1, 1, 0);
		}
	}
}

int func_1201(int iParam0, var uParam1)
{
	iVar1 = iParam0;
	if (!func_1772(iVar1, &iVar0))
	{
		return 0;
	}
	if (Global_1946804->f_2657.f_19 == 1)
	{
		Global_1946804->f_2657.f_19 = 0;
		*uParam1 = 0;
		if (func_648(iParam0) != -999503751)
		{
			func_1773(&(Global_1946804->f_2657.f_26), 0, Global_1946804->f_2657.f_19);
		}
		Global_1946804->f_2657[0] = 0;
		return 1;
	}
	Global_1946804->f_2657.f_19 = (Global_1946804->f_2657.f_19 - 1);
	*uParam1 = (*uParam1 - 1);
	Global_1946804->f_2657[iVar0] = &Global_1946804->f_2657[Global_1946804->f_2657.f_19];
	Global_1946804->f_2657[Global_1946804->f_2657.f_19] = 0;
	if (func_648(iParam0) != -999503751)
	{
		func_1773(&(Global_1946804->f_2657.f_26), iVar0, Global_1946804->f_2657.f_19);
	}
	func_1774(iParam0, 1);
	return 1;
}

void func_1202()
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

void func_1203(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		func_1775(0);
	}
	if (bParam0)
	{
		func_1215(8);
		func_1215(512);
	}
	else
	{
		func_1215(8);
		func_1215(16);
	}
}

void func_1204(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

int func_1205(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = func_725();
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

int func_1206(int iParam0)
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

void func_1207(var uParam0, int iParam1, bool bParam2)
{
	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (func_1776(uParam0->f_1[iVar0], 2))
		{
			iVar7 = func_1223(iVar0, 1);
			if (func_1474(iVar0, iParam1))
			{
				vVar4 = { func_727(iVar0, -1) };
				if ((vVar4.x != &Global_1946804->f_57[iVar0] && vVar4.x != 0) && (&uParam0->f_1[iVar0] != vVar4.x || uParam0->f_1[iVar0]->f_1 != vVar4.y))
				{
					*uParam0->f_1[iVar0] = { vVar4 };
				}
				if (func_1473(iVar7, 4))
				{
					func_1477(iVar7, 4, 6);
				}
			}
			else
			{
				func_1476(iVar7, 4, 6);
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

bool func_1208(int iParam0)
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
	func_1777(&(Global_1946804->f_964), iVar0, -367421157, 1409451727, 1, iParam0);
	_0x91ded5dd64bb2691(&(Global_1946804->f_964));
	if (!_0x44b3a36933ac009c(&uVar1, &(Global_1946804->f_964), 1409451727))
	{
		return false;
	}
	return true;
}

bool func_1209(int iParam0, int iParam1, int iParam2)
{
	*iParam2 = 1155669136;
	return true;
}

void func_1210(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	iVar1 = 12;
	iVar2 = func_648(&(uParam0->f_1[iParam2]));
	iVar3 = 0;
	if (bParam3)
	{
		iVar3 = 3;
	}
	if (func_1474(iParam2, 65536) && &uParam0->f_1[iVar1] == -452402570)
	{
		uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
		uParam0->f_1[iVar1]->f_1 = 0;
		if (bParam4)
		{
			func_1718(iVar1, iVar3);
		}
	}
	if (func_1175(-1586649372) && func_1474(iParam2, 524288))
	{
		iVar1 = 33;
		uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
		uParam0->f_1[iVar1]->f_1 = 0;
		if (bParam4)
		{
			func_1718(iVar1, iVar3);
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
						func_1718(iVar1, iVar3);
					}
				}
			}
			func_1778(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
			break;
		case 688587926:
			func_1778(uParam0, 0, (1 && bParam4), (1 && bParam4), bParam3);
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
						func_1718(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 525
				func_1778(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				iVar1 = 16;
				if (uParam0->f_1[iVar1]->f_1 == 1155669136)
				{
					uParam0->f_1[iVar1]->f_1 = -1539589426;
					if (bParam4)
					{
						func_1718(iVar1, iVar3);
					}
				}
				if (uParam0->f_1[iVar1]->f_1 == 1530758430)
				{
					uParam0->f_1[iVar1]->f_1 = 1334603721;
					if (bParam4)
					{
						func_1718(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 656
				func_1778(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				Jump @1415; //curOff = 691
				func_1778(uParam0, (1 && bParam4), (1 && bParam4), 0, bParam3);
				iVar1 = 22;
				if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1])
				{
					uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
					uParam0->f_1[iVar1]->f_1 = 0;
					if (bParam4)
					{
						func_1718(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 786
				func_1778(uParam0, (1 && bParam4), 0, 1, bParam3);
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
							func_1718(iVar1, iVar3);
						}
					}
					iVar1 = 38;
					if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1])
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_1718(iVar1, iVar3);
						}
					}
					iVar1 = 35;
					if (-923693316 == func_648(&(uParam0->f_1[iVar1])))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_1718(iVar1, iVar3);
						}
					}
				}
				else
				{
					iVar1 = 35;
					if ((func_1705(iParam1) && &uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1]) && -923693316 == func_648(&(uParam0->f_1[iVar1])))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_1718(iVar1, iVar3);
						}
					}
				}
				Jump @1415; //curOff = 1130
				iVar1 = 36;
				if (&uParam0->f_1[iParam2] != &Global_1946804->f_57[iParam2] && func_644(&(Global_1946804->f_1497.f_1[iVar1]), -1638171711))
				{
					uParam0->f_1[iParam2] = &Global_1946804->f_57[iParam2];
					uParam0->f_1[iParam2]->f_1 = 0;
					if (bParam4)
					{
						func_1718(iVar1, iVar3);
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
						func_1718(iVar1, iVar3);
					}
				}
				if (&uParam0->f_1[iParam2] != &Global_1946804->f_57[iParam2] && (func_1705(&(Global_1946804->f_1497.f_1[iVar1])) || func_644(&(Global_1946804->f_1497.f_1[iVar1]), -1638171711)))
				{
					uParam0->f_1[iParam2] = &Global_1946804->f_57[iParam2];
					uParam0->f_1[iParam2]->f_1 = 0;
					if (bParam4)
					{
						func_1718(iVar1, iVar3);
					}
				}
			}
			switch (func_648(iParam1))
			{
				case 81053684:
					iVar1 = 10;
					if (-525676072 == func_648(&(uParam0->f_1[iVar1])))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_1718(iVar1, iVar3);
						}
					}
					break;
				case -525676072:
					iVar1 = 12;
					if (81053684 == func_648(&(uParam0->f_1[iVar1])) || func_644(&(uParam0->f_1[iVar1]), 866047851))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_1718(iVar1, iVar3);
						}
					}
					break;
			}
			default:
				break;
	}
}

bool func_1211(int iParam0, int iParam1)
{
	if (func_20() != -1)
	{
		return is_bit_set(&(Global_36638.f_1444[iParam0]), iParam1);
	}
	return is_bit_set(&(Global_40.f_7832[iParam0]), iParam1);
}

bool func_1212(int iParam0)
{
	if (func_20() != -1)
	{
		if (func_1166(iParam0, 4))
		{
			return false;
		}
	}
	else if (func_1166(iParam0, 2))
	{
		return false;
	}
	return true;
}

bool func_1213(int iParam0)
{
	iVar1 = get_cloud_time_as_int();
	if (!func_1166(iParam0, 65536) && !func_1166(iParam0, 32768))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_7756)
	{
		if (Global_40.f_7756[iVar0]->f_2 == iParam0)
		{
			iVar3 = 3;
			if (func_1166(iParam0, 131072))
			{
				iVar3 = 2;
			}
			iVar2 = (&Global_40.f_7756[iVar0] - iVar1);
			if (Global_40.f_7756[iVar0]->f_1 >= iVar3)
			{
				return true;
			}
			if (iVar2 < 1800 && func_1166(iParam0, 32768))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_1214()
{
	return Global_1905944->f_5694;
}

void func_1215(int iParam0)
{
	Global_1946804 = (Global_1946804 || iParam0);
}

void func_1216(struct<4> Param0)
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
			if (func_1779(Param0))
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
			func_1780(Param0);
			*Global_1946804->f_668[Global_1946804->f_856] = { Param0 };
			Global_1946804->f_850++;
			Global_1946804->f_856 = (Global_1946804->f_856 + 1 % 25);
			func_1215(8);
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
			if (func_1779(Param0))
			{
				return;
			}
			func_1780(Param0);
			*Global_1946804->f_567[Global_1946804->f_851] = { Param0 };
			Global_1946804->f_851++;
			func_1215(8);
			break;
		case 30:
		case 31:
		case 32:
		case 33:
		case 35:
		case 36:
			func_1159(Param0, Param0.f_1, Param0.f_2);
			break;
	}
}

struct<4> func_1217(bool bParam0)
{
	return func_1112(1328661203, func_1781(), -1591664384, bParam0);
}

struct<4> func_1218(bool bParam0)
{
	iVar0 = func_1030(bParam0);
	if (iVar0 == 2)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224215))
		{
			*Global_1224215 = { func_1112(923904168, func_1217(bParam0), -740156546, bParam0) };
		}
		return *Global_1224215;
	}
	else if (iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224223))
		{
			*Global_1224223 = { func_1112(923904168, func_1217(bParam0), -740156546, 0) };
		}
		return *Global_1224223;
	}
	return func_1112(923904168, func_1217(bParam0), -740156546, 0);
}

bool func_1219(int iParam0, bool bParam1)
{
	if (func_648(iParam0) == 1779021115)
	{
		return false;
	}
	if (_is_weapon_one_handed(iParam0))
	{
		if (bParam1)
		{
			return func_646(24);
		}
		else
		{
			return true;
		}
	}
	return false;
}

struct<4> func_1220(bool bParam0)
{
	iVar0 = func_1030(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224219))
		{
			*Global_1224219 = { func_1112(271701509, func_1217(bParam0), 12999093, 0) };
		}
		return *Global_1224219;
	}
	return func_1112(271701509, func_1217(bParam0), 12999093, 0);
}

bool func_1221(int iParam0, int iParam1)
{
	if (iParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_648(iParam0);
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

bool func_1222(var uParam0, var uParam1, bool bParam2, int iParam3, var uParam4, bool bParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(&uParam0))
	{
		return false;
	}
	if (!_0x9700e8efc4ab9089(func_1030(bParam5), &uParam0, uParam4, !bParam6))
	{
		return false;
	}
	return true;
}

int func_1223(int iParam0, int iParam1)
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

int func_1224(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_1225(int iParam0, int iParam1)
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

void func_1226(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 62914560);
	*iParam0 = (*iParam0 || shift_left(iParam1, 22));
}

void func_1227(int iParam0, int iParam1)
{
	iVar0 = func_743(*iParam0);
	iVar1 = func_742(*iParam0);
	if (iParam1 < 1 || iParam1 > func_748(iVar0, iVar1))
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4063232);
	*iParam0 = (*iParam0 || shift_left(iParam1, 17));
}

void func_1228(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 126976);
	*iParam0 = (*iParam0 || shift_left(iParam1, 12));
}

void func_1229(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4032);
	*iParam0 = (*iParam0 || shift_left(iParam1, 6));
}

void func_1230(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 63);
	*iParam0 = (*iParam0 || shift_left(iParam1, 0));
}

void func_1231(char* sParam0, char* sParam1, int iParam2)
{
	_0x74bcceb233ad95b2(-466562563, get_hash_key(sParam0));
	_0x74bcceb233ad95b2(1885309238, get_hash_key(sParam1));
	_0x74bcceb233ad95b2(-826961056, iParam2);
}

int func_1232(int iParam0)
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

bool func_1233(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	bVar0 = false;
	if (func_20() == -1)
	{
		if (func_1081(iParam0))
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

int func_1234(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (!func_624(iParam0, 0))
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

int func_1235(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	func_1658(&iParam0);
	if (!func_624(iParam0, 0))
	{
		return 0;
	}
	if (!func_652(0))
	{
		bParam2 = true;
	}
	iVar0 = func_1085(iParam0, uParam1, bParam2, bParam3);
	if (iVar0 < 0)
	{
		return 2147483647;
	}
	if (bParam2)
	{
		iVar1 = func_1660(iParam0, *uParam1, uParam1->f_4, bParam3);
	}
	else
	{
		iVar1 = _0xe787f05dfc977bde(func_1030(bParam3), iParam0, 0);
	}
	if (iVar0 > iVar1)
	{
		return (iVar0 - iVar1);
	}
	return 0;
}

int func_1236(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (func_644(iParam0, -5284486))
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
		if (func_1782(iParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
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
		iVar64 = func_705(iParam0, 862142561);
		if (iVar64 != 0)
		{
			Var50.f_8 = iVar64;
			iVar61 = _item_database_create_item_collection(&Var50, &iVar60, 1);
			if (iVar61 != -1)
			{
				iVar62 = 0;
				while (iVar62 < iVar60)
				{
					iVar63 = func_708(iVar62, iVar61);
					if (func_624(iVar63, 0) && iVar63 != iParam0)
					{
						if (bParam4)
						{
							iVar49 = (iVar49 + func_1236(iVar63, -915411861, 1, 0, 0));
						}
						else
						{
							Var35 = iVar63;
							iVar33 = _0x640f890c3e5a3ffd(1, &Var35, &iVar34);
							if (iVar33 != -1)
							{
								if (iVar34 == 0)
								{
									iVar49 = (iVar49 + func_1236(iVar63, -915411861, 1, 0, 0));
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
	if (!func_1782(iParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
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

bool func_1237(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return iParam0 <= func_1783(1);
}

void func_1238(int iParam0, char* sParam1)
{
	if (iParam0 != 18 && iParam0 != 7)
	{
		_uilog_add_total_take_entry(get_hash_key(func_1784(iParam0)), 1997120069, _create_var_string(10, "MISSION_COMPLETE_TAKE_COMP", _create_var_string(2, func_346(iParam0, 0))), _create_var_string(2, "MISSION_COMPLETE_TAKE_AMOUNT", sParam1), 601389479);
	}
	else
	{
		_uilog_add_total_take_entry(get_hash_key(func_1784(iParam0)), 1997120069, _create_var_string(10, "MISSION_COMPLETE_TAKE_COMP_NOS", _create_var_string(2, func_346(iParam0, 0))), _create_var_string(2, "MISSION_COMPLETE_TAKE_AMOUNT", sParam1), 601389479);
	}
}

var func_1239()
{
	return Global_40.f_4283.f_325;
}

bool func_1240(int iParam0)
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

bool func_1241(int iParam0)
{
	return (iParam0 > 0 && iParam0 < 13);
}

void func_1242(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_3 = iParam1;
}

void func_1243(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_4 = iParam1;
}

void func_1244(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_12106[iParam0] = iParam1;
		return;
	}
	Global_1058888->f_498[iParam0] = iParam1;
}

void func_1245(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_12106[iParam0]->f_5 = iParam1;
		return;
	}
	Global_1058888->f_498[iParam0]->f_1 = iParam1;
}

int func_1246(bool bParam0, var uParam1)
{
	*bParam0 = 0;
	*uParam1 = 0;
	bVar0 = func_420();
	bVar1 = false;
	if (bVar0 && !func_1785(4))
	{
		bVar1 = true;
	}
	if ((bVar0 && func_1785(37)) && !func_1785(43))
	{
		*bParam0 = 0;
		*uParam1 = 0;
		return 0;
	}
	bVar2 = false;
	if ((bVar0 && func_1785(43)) && !func_1785(44))
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
		if (func_1523(0) == 1)
		{
			*bParam0 = 1;
		}
		if (func_1523(1) == 1)
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

int func_1247()
{
	return Global_40.f_1095.f_3054;
}

bool func_1248(int iParam0)
{
	iParam0 = func_288(iParam0);
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

bool func_1249(int iParam0, var uParam1)
{
	if (!func_1786(iParam0))
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

int func_1250()
{
	if (func_420())
	{
		if (!func_1785(3))
		{
			return func_1787(43);
		}
		if (func_1785(38) && !func_1785(43))
		{
			return func_1788(8);
		}
	}
	return 0;
}

bool func_1251(int iParam0)
{
	if (!func_271(iParam0))
	{
		return false;
	}
	return (((*Global_1888801)[iParam0]->f_20 == 1 || (*Global_1888801)[iParam0]->f_20 == 2) && !func_1789(iParam0));
}

Vector3 func_1252(int iParam0, int iParam1)
{
	func_1249(15, &Var0);
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

int func_1253(int iParam0, int iParam1)
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
	iVar0 = func_981(Global_1310720->f_21, 2);
	if (iVar0 == -1)
	{
		return 0;
	}
	func_1249(15, &Var1);
	Var1.f_2 = -1999103282;
	Var1.f_3 = iParam0;
	Var1.f_4 = iParam1;
	if (_datafile_get_data_node_index(&(Var1.f_1), &Var1))
	{
		Var1.f_2 = 383290544;
		_datafile_get_hash(&iVar6, &Var1);
		if (func_1790(iVar0) == iVar6)
		{
			return 1;
		}
	}
	return 0;
}

bool func_1254(int iParam0, bool bParam1, int iParam2)
{
	iVar0 = func_1791(iParam0);
	if (func_541(373691918) && Global_1310720->f_12)
	{
		return iVar0 == 4;
	}
	if (iParam2 != -1)
	{
		return iVar0 == iParam2;
	}
	return (bParam1 || iVar0 == -1);
}

bool func_1255(int iParam0)
{
	if (!func_1249(15, &Var0))
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

bool func_1256(vector3 vParam0, int iParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	if (bParam5)
	{
		if (func_1792(iParam3, iParam4))
		{
			return false;
		}
	}
	if (!bParam7 || func_1793(5))
	{
		if (func_1794(iParam3, iParam4))
		{
			return false;
		}
	}
	iVar0 = func_1516(vParam0);
	if (bParam6)
	{
		iVar1 = func_394(vParam0, 1);
		if (func_116(iVar1) || func_1795(iVar0, 1))
		{
			return false;
		}
	}
	if (!func_1796(iParam3, iParam4))
	{
		return false;
	}
	if (!func_1797())
	{
		if (func_1798(iParam3, iParam4))
		{
			return false;
		}
	}
	if (!_does_volume_exist(bParam8))
	{
		if (!func_1799(iVar0))
		{
			return false;
		}
		if (Global_1310720->f_23 >= 3)
		{
			if (Global_1310720->f_21 != -1)
			{
				if (Global_1310720->f_21 == func_394(vParam0, 0))
				{
					return false;
				}
			}
		}
	}
	if (!func_1800(iParam3, iParam4))
	{
		return false;
	}
	if (func_1801(0) == 3)
	{
		if (((vParam0.x > -1480f && vParam0.x < -1475f) && vParam0.y > -359f) && vParam0.y < -354f)
		{
			return false;
		}
	}
	if (!func_1802(65536, 2))
	{
		if (((vParam0.x > 1673f && vParam0.x < 1676f) && vParam0.y > -1888f) && vParam0.y < -1885f)
		{
			return false;
		}
	}
	if (func_420())
	{
		if (_does_volume_exist(bParam8))
		{
			if (!_0xf256a75210c5c0eb(bParam8, vParam0))
			{
				return false;
			}
		}
		if (func_1803(vParam0, bParam10) || func_1804(vParam0, bParam10))
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

int func_1257(vector3 vParam0)
{
	iVar0 = func_1805(vParam0, 0f, 0f, 0, 2);
	return func_1805(vParam0, (*Global_1894052)[iVar0]->f_1, (*Global_1894052)[iVar0]->f_2, Global_1894052[iVar0], 4);
}

void func_1258(int iParam0)
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

char* func_1259(int iParam0)
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
	return func_1486(iVar0);
}

char* func_1260(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return "";
	}
	iVar0 = get_entity_model(iParam0);
	return func_1806(iVar0);
}

char* func_1261(int iParam0)
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
			Jump @295; //curOff = 262
			return "HANDCART";
			Jump @295; //curOff = 272
			return "ROWBOATSWAMP";
			Jump @295; //curOff = 282
			return "ROWBOATSWAMP02";
			return "";
		}

void func_1262(var uParam0, int iParam1)
{
	iVar0 = func_132(iParam1);
	if (!func_1586(iVar0))
	{
		return;
	}
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 <= 7)
	{
		(*uParam0->f_1[iVar0])[iVar1] = 63151;
		clear_bit(&(uParam0->f_1[iVar0]->f_17), iVar1);
		iVar1++;
	}
}

void func_1263(var uParam0, int iParam1, int iParam2)
{
	iVar0 = func_132(iParam1);
	if (func_1586(iVar0))
	{
		uParam0->f_1[iVar0]->f_9 = iParam2;
	}
}

bool func_1264(var uParam0)
{
	switch (&iLocal_2497[0])
	{
		case 0:
			iLocal_2497[0] = 1;
			break;
		case 1:
			func_1282(36);
			func_1282(47);
			iLocal_2497[0] = 2;
		case 2:
			if (!func_1322(36) || !func_1322(47))
			{
				return false;
			}
			iLocal_2497[0] = 3;
		case 3:
			if (!does_entity_exist(&(Local_1692[0])))
			{
				func_1321(0, 1);
				set_entity_invincible(&(Local_1692[0]), true);
			}
			if (!does_entity_exist(&(Local_1692[1])))
			{
				func_1321(1, 1);
				set_entity_invincible(&(Local_1692[1]), true);
				set_entity_proofs(&(Local_1692[1]), 8, false);
			}
			if (!does_entity_exist(&(Local_1692[2])))
			{
				func_1321(2, 1);
				set_entity_invincible(&(Local_1692[2]), true);
				set_entity_proofs(&(Local_1692[2]), 8, false);
			}
			iLocal_2497[0] = 4;
			break;
		case 4:
			func_1265(&(Local_218[6]), func_555(8, 1), 2, 1073741824);
			func_1265(&(Local_218[7]), func_555(8, 2), 2, 1073741824);
			func_899(&(uParam0->f_7375), &(Local_218[6]), "HoseaMatthews", 0, 0, 0);
			func_899(&(uParam0->f_7375), &(Local_218[7]), "JohnMarston", 0, 0, 0);
			func_899(&(uParam0->f_7375), &(iLocal_979[0]), "WAGON05X", 0, 0, 0);
			func_899(&(uParam0->f_7375), &(Local_1692[0]), "p_cigarette_cs01x", 0, 0, 0);
			func_899(&(uParam0->f_7375), &(Local_1692[1]), "p_jug01x", 0, 0, 0);
			func_899(&(uParam0->f_7375), &(Local_1692[2]), "p_jug01x^1", 0, 0, 0);
			iLocal_2497[0] = 7;
			break;
		case 7:
			return true;
	}
	return false;
}

void func_1265(int iParam0, struct<4> Param1, int iParam5, float fParam6)
{
	func_915(iParam0, Param1, Param1.f_3, iParam5, fParam6);
}

void func_1266(var uParam0, int iParam1)
{
	func_1807(&(uParam0->f_7375.f_861), iParam1);
}

void func_1267()
{
	Local_1692[19] = func_1808(iVar1387, 1, 1);
	set_entity_invincible(&(Local_1692[19]), true);
	set_entity_proofs(&(Local_1692[19]), 9, false);
}

float func_1268(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam0;
	}
	return fParam1;
}

void func_1269(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < iVar1454)
	{
		if (!func_1275(5, iVar0))
		{
		}
		else if (func_873(Local_1457[iVar0]->f_12, iVar1956))
		{
			switch (Local_1457[iVar0]->f_1)
			{
				case 1:
					if (func_1809(uParam0))
					{
						func_599(&(Local_1457[iVar0]->f_2));
						Local_1457[iVar0]->f_1 = 3;
					}
					else
					{
						if (Local_1457[iVar0] & 2 != 0)
						{
							if (!does_entity_exist(Local_1457[iVar0]->f_7))
							{
								return;
							}
						}
						if (Local_1457[iVar0] & 4 != 0)
						{
							if (!func_26(&(Local_1457[iVar0]->f_2)))
							{
								func_27(&(Local_1457[iVar0]->f_2), 0);
							}
							if (func_924(&(Local_1457[iVar0]->f_2)) >= Local_1457[iVar0]->f_5)
							{
								func_599(&(Local_1457[iVar0]->f_2));
								Local_1457[iVar0]->f_1 = 4;
							}
						}
						if (Local_1457[iVar0] & 1 != 0)
						{
							if (func_1312(Global_35, Local_1457[iVar0]->f_8, 1) >= Local_1457[iVar0]->f_6)
							{
								Local_1457[iVar0]->f_1 = 4;
							}
						}
						if (Local_1457[iVar0] & 2 != 0)
						{
							if (func_914(Global_35, Local_1457[iVar0]->f_7, 1, 1) >= Local_1457[iVar0]->f_6)
							{
								Local_1457[iVar0]->f_1 = 4;
							}
						}
						Jump @395; //curOff = 346
						if (iVar1835 == 0)
						{
							func_599(&(Local_1457[iVar0]->f_2));
							func_1810(Local_1457[iVar0]->f_11);
							Local_1457[iVar0]->f_1 = 5;
						}
					}
					iVar0++;
					default:
						break;
			}
		}
	}
}

void func_1270(var uParam0)
{
	if ((iVar1835 == 0 && iVar1834 == 0) && iVar1836 == 0)
	{
		return;
	}
	if (iVar1835 != 0)
	{
		Var0 = { func_1811(iVar1835) };
		if (func_1812(uParam0, Var0, Var0.f_1, 0, 0))
		{
			iLocal_1838 = 0;
		}
	}
	if (iVar1834 != 0)
	{
		Var2 = { func_1811(iVar1834) };
		if (func_1812(uParam0, Var2, Var2.f_1, 0, 0))
		{
			iLocal_1837 = 0;
		}
	}
	if (iVar1836 != 0)
	{
		Var4 = { func_1811(iVar1836) };
		if (func_1812(uParam0, Var4, Var4.f_1, 0, 0))
		{
			iLocal_1839 = 0;
		}
	}
}

void func_1271()
{
	if (iVar2022 >= 5)
	{
		return;
	}
	switch (Local_218[6]->f_2)
	{
		case 1:
			set_ped_flee_attributes(&(Local_218[6]), 512, true);
			set_ped_flee_attributes(&(Local_218[6]), 16384, true);
			set_ped_config_flag(&(Local_218[6]), 113, true);
			set_ped_config_flag(&(Local_218[6]), 168, false);
			func_942(6, 18);
			break;
		case 18:
			func_942(6, 19);
			break;
		case 19:
			if (!is_ped_in_vehicle(&(Local_218[6]), &(iLocal_979[0]), false))
			{
				func_942(6, 16);
			}
			break;
		case 16:
			func_27(vLocal_1840[3], 1);
			task_enter_vehicle(&(Local_218[6]), &(iLocal_979[0]), 20000, 0, 2f, 8651329, 0);
			func_942(6, 17);
			break;
		case 17:
			if (func_924(vLocal_1840[3]) >= 21f)
			{
				func_599(vLocal_1840[3]);
				set_ped_into_vehicle(&(Local_218[6]), &(iLocal_979[0]), 0);
			}
			if (is_ped_in_vehicle(&(Local_218[6]), &(iLocal_979[0]), false))
			{
				func_942(6, 18);
			}
			break;
	}
}

void func_1272(var uParam0)
{
	if (!iVar1952 == 9 && !iVar1952 == 10)
	{
		if (func_1813())
		{
			func_1287(9);
		}
	}
	else if (!func_1813())
	{
		func_1287(11);
	}
	if (is_entity_dead(&(Local_218[6])))
	{
		return;
	}
	if (func_33(uParam0) == 0 && iVar2021 >= 5)
	{
		return;
	}
	switch (iVar1952)
	{
		case 0:
			if (func_1324(Global_35, &(iLocal_979[0]), 0) && func_1324(&(Local_218[6]), &(iLocal_979[0]), 0))
			{
				func_1287(1);
			}
			else if (func_1324(Global_35, &(iLocal_979[0]), 0) && !func_1324(&(Local_218[6]), &(iLocal_979[0]), 0))
			{
				if (func_914(Global_35, &(Local_218[6]), 1, 1) >= 20f)
				{
					func_1287(5);
				}
				else
				{
					func_1287(3);
				}
			}
			else if (!func_1324(Global_35, &(iLocal_979[0]), 0))
			{
				func_1287(7);
			}
			else
			{
				Jump @1826; //curOff = 327
				_0xdd1232b332cbb9e7(3, 1, 0);
				set_ped_can_be_knocked_off_vehicle(&(Local_218[6]), 1);
				func_187(uParam0, &(Local_218[6]), 1);
				task_clear_look_at(&(Local_218[6]));
				task_clear_look_at(Global_35);
				if (does_blip_exist(&(iLocal_1825[0])))
				{
					remove_blip(iLocal_1825[0]);
				}
				if (does_blip_exist(&(iLocal_1825[2])))
				{
					remove_blip(iLocal_1825[2]);
				}
				task_clear_look_at(Global_35);
				if (!is_entity_dead(&(Local_218[6])))
				{
					task_clear_look_at(&(Local_218[6]));
				}
				if (iVar1956 == 0)
				{
					func_173(2, 1);
					if (func_167(39))
					{
						_start_gps_custom_route_from_waypoint_recording_route(func_525(64), 0, -1, 76603059, false, true);
						set_gps_custom_route_render(true, 3, 30);
					}
					else
					{
						iLocal_1825[3] = func_1286(408396114, 1012f, -1652.3f, 46.9f, 1);
						set_blip_name_from_text_file(&(iLocal_1825[3]), func_1279(7));
						_blip_set_modifier(&(iLocal_1825[3]), -1878373110);
					}
					func_1325(uParam0, 0);
				}
				else if (iVar1956 == 1)
				{
					if (does_blip_exist(&(iLocal_1825[4])))
					{
						remove_blip(iLocal_1825[4]);
					}
					iLocal_1825[5] = func_1814(408396114, Local_141.f_56, 1);
					set_blip_name_from_text_file(&(iLocal_1825[5]), func_1279(11));
					func_1815(1);
					func_1325(uParam0, 5);
				}
				task_look_at_entity(&(Local_218[6]), Global_35, 5000, 48, 41, 0);
				task_look_at_entity(Global_35, &(Local_218[6]), 5000, 48, 41, 0);
				func_1287(2);
				Jump @1826; //curOff = 695
				if (!is_ped_in_vehicle(Global_35, &(iLocal_979[0]), false))
				{
					if (iVar1956 == 0)
					{
						if (func_167(39))
						{
							func_1338(0);
							remove_blip(iLocal_1825[4]);
						}
						else
						{
							func_1338(0);
							remove_blip(iLocal_1825[3]);
						}
					}
					else if (iVar1956 == 1)
					{
						func_1815(0);
						func_1338(5);
						remove_blip(iLocal_1825[5]);
					}
					func_1287(7);
				}
				else if (!is_ped_in_vehicle(&(Local_218[6]), &(iLocal_979[0]), false))
				{
					if (iVar1956 == 0)
					{
						if (func_167(39))
						{
							func_1338(0);
							remove_blip(iLocal_1825[4]);
						}
						else
						{
							func_1338(0);
							remove_blip(iLocal_1825[3]);
						}
					}
					else if (iVar1956 == 1)
					{
						func_1815(0);
						func_1338(5);
						remove_blip(iLocal_1825[5]);
					}
					func_1287(3);
				}
				Jump @1826; //curOff = 907
				_0xdd1232b332cbb9e7(3, 1, 0);
				func_1325(uParam0, 2);
				if (!does_blip_exist(&(iLocal_1825[2])))
				{
					iLocal_1825[2] = _blip_add_for_coord(422991367, get_entity_coords(&(Local_218[6]), true, false));
					_blip_set_modifier(&(iLocal_1825[2]), -546708623);
				}
				task_look_at_entity(Global_35, &(Local_218[6]), -1, 48, 41, 0);
				func_1287(4);
				Jump @1826; //curOff = 1002
				set_blip_coords(&(iLocal_1825[2]), get_entity_coords(&(Local_218[6]), true, false));
				if (!is_ped_in_vehicle(Global_35, &(iLocal_979[0]), false))
				{
					func_1338(2);
					func_1287(7);
					return;
				}
				if (is_ped_in_vehicle(&(Local_218[6]), &(iLocal_979[0]), false))
				{
					func_1338(2);
					func_1287(1);
					return;
				}
				if (func_914(Global_35, &(Local_218[6]), 1, 1) >= 20f)
				{
					func_1338(2);
					func_1287(5);
					return;
				}
				Jump @1826; //curOff = 1125
				_0xdd1232b332cbb9e7(3, 1, 0);
				func_1325(uParam0, 3);
				if (!does_blip_exist(&(iLocal_1825[2])))
				{
					iLocal_1825[2] = _blip_add_for_coord(422991367, get_entity_coords(&(Local_218[6]), true, false));
					_blip_set_modifier(&(iLocal_1825[2]), -546708623);
				}
				func_1287(6);
				Jump @1826; //curOff = 1203
				set_blip_coords(&(iLocal_1825[2]), get_entity_coords(&(Local_218[6]), true, false));
				if (func_914(Global_35, &(Local_218[6]), 1, 1) < 20f)
				{
					func_1338(3);
					func_1287(3);
					return;
				}
				Jump @1826; //curOff = 1263
				_0xdd1232b332cbb9e7(3, 1, 0);
				task_look_at_entity(&(Local_218[6]), Global_35, -1, 48, 41, 0);
				if (!does_blip_exist(&(iLocal_1825[0])))
				{
					func_1816();
				}
				func_1349(1, &(iLocal_979[0]));
				func_1325(uParam0, 1);
				func_27(vLocal_1840[4], 1);
				func_1287(8);
				Jump @1826; //curOff = 1343
				if (func_924(vLocal_1840[4]) >= 10f)
				{
					func_1817(&(Local_218[6]), "MOVE_IT_NEAR", -1454469014, Global_35, 1, 0, 0, 1);
					func_244(vLocal_1840[4]);
				}
				if (func_1818(uParam0, &(iLocal_979[0]), func_1279(31), func_1279(15), 75f, 150f, 0, 0, 1, 422991367, 0))
				{
				}
				else
				{
					if (is_ped_in_vehicle(Global_35, &(iLocal_979[0]), false))
					{
						func_599(vLocal_1840[4]);
						_0xdd1232b332cbb9e7(3, 1, 0);
						func_1338(1);
						remove_blip(iLocal_1825[0]);
						if (is_ped_in_vehicle(&(Local_218[6]), &(iLocal_979[0]), false))
						{
							func_1287(1);
						}
						else if (func_914(Global_35, &(Local_218[6]), 1, 1) < 20f)
						{
							func_1287(3);
						}
						else
						{
							func_1287(5);
						}
					}
					Jump @1826; //curOff = 1562
					func_174(54);
					_0xdd1232b332cbb9e7(3, 1, 0);
					func_1325(uParam0, 4);
					if (iVar1956 == 0)
					{
						if (func_167(38))
						{
							func_174(54);
						}
					}
					if (!func_167(95))
					{
						func_1276(27);
					}
					if (does_blip_exist(&(iLocal_1825[3])))
					{
						remove_blip(iLocal_1825[3]);
					}
					if (does_blip_exist(&(iLocal_1825[4])))
					{
						remove_blip(iLocal_1825[4]);
					}
					if (does_blip_exist(&(iLocal_1825[5])))
					{
						remove_blip(iLocal_1825[5]);
					}
					func_1815(0);
					func_1287(10);
					Jump @1826; //curOff = 1703
					if (does_blip_exist(&(iLocal_1825[0])))
					{
						if (func_1324(Global_35, &(iLocal_979[0]), 0))
						{
							remove_blip(iLocal_1825[0]);
						}
					}
					else if (!func_1324(Global_35, &(iLocal_979[0]), 0))
					{
						func_1816();
					}
					Jump @1826; //curOff = 1771
					if (!func_167(95))
					{
						func_47(0, 0);
						func_1276(28);
					}
					if (iVar1956 == 0)
					{
						if (func_167(38))
						{
							func_413(54);
						}
					}
					func_1287(0);
				}
			}
			default:
				break;
	}
}

void func_1273(var uParam0)
{
	if (!func_167(38))
	{
		if (!func_167(43))
		{
			if (func_1275(30, 0))
			{
				if (is_entity_in_volume(&(iLocal_979[0]), Local_141.f_35, true, 0) && get_player_wanted_level(player_id()) == 0)
				{
					func_1282(func_1294(14));
					func_1282(func_1294(18));
					func_1282(func_1294(19));
					func_1282(func_1294(20));
					func_1282(53);
					func_413(43);
				}
			}
			return;
		}
		else
		{
			if (!func_167(42))
			{
				if (!is_entity_dead(&(iLocal_979[0])) && is_entity_in_volume(&(iLocal_979[0]), Local_141.f_36, true, 0))
				{
					Local_218[14]->f_3 = 5;
					Local_218[15]->f_3 = 5;
					Local_218[16]->f_3 = 5;
					Local_218[17]->f_3 = 5;
					func_413(42);
				}
			}
			if (!is_entity_dead(&(iLocal_979[0])))
			{
				func_1295(uParam0, 14, func_931(14, 0, 0), 0, 1);
				func_1295(uParam0, 15, func_931(15, 0, 0), 0, 1);
				func_1295(uParam0, 16, func_931(16, 0, 0), 0, 0);
				func_1295(uParam0, 17, func_931(17, 0, 0), 0, 1);
			}
			if (((Local_218[14]->f_3 == 8 && Local_218[15]->f_3 == 8) && Local_218[16]->f_3 == 8) && Local_218[17]->f_3 == 8)
			{
				func_145(uParam0, &(Local_218[15]), "BRT1_ManorGuard2", 0);
				stop_ped_speaking(&(Local_218[14]), true);
				stop_ped_speaking(&(Local_218[15]), true);
				stop_ped_speaking(&(Local_218[16]), true);
				stop_ped_speaking(&(Local_218[17]), true);
				func_165(0);
				func_413(38);
			}
			else
			{
				return;
			}
		}
	}
	if (func_167(39))
	{
		if (!func_167(41))
		{
			if (func_1312(&(iLocal_979[0]), _0xf70f00013a62f866(Local_141.f_1), 1) >= 140f)
			{
				func_1276(44);
				func_413(41);
			}
		}
		disable_control_action(0, -17122892, false);
	}
	func_1298(0);
	func_1298(1);
	func_1298(2);
	func_1298(3);
	func_1298(4);
	func_1298(5);
	if (((((((is_entity_dead(&(iLocal_979[0])) || is_entity_dead(&(Local_218[14]))) || is_entity_dead(&(Local_218[15]))) || is_entity_dead(&(Local_218[16]))) || is_entity_dead(&(Local_218[17]))) || is_entity_dead(&(Local_218[18]))) || is_entity_dead(&(Local_218[19]))) || is_entity_dead(&(Local_218[20])))
	{
		return;
	}
	if (func_167(49))
	{
		func_1819();
	}
	if (func_167(52))
	{
		_0x8370d34bd2e60b73();
		if (!_0x927b810e43e99932(&Local_1992))
		{
			_0xb8b207c34285e978(&Local_1992);
		}
	}
	if (func_1275(30, 19))
	{
		if (!iVar1952 == 9 && !iVar1952 == 10)
		{
			if (func_167(53))
			{
				if (get_distance_between_coords(get_entity_coords(Global_35, true, false), get_entity_coords(&(Local_218[14]), true, false), true) >= 150f)
				{
					func_174(54);
				}
			}
			else if (!iVar2021 >= 5 && get_distance_between_coords(get_entity_coords(Global_35, true, false), get_entity_coords(&(Local_218[14]), true, false), true) <= 100f)
			{
				func_413(54);
			}
		}
		func_1303(uParam0);
	}
	func_1820();
	bVar6 = true;
	if (!func_167(45))
	{
		switch (Local_218[14]->f_2)
		{
			case 1:
				iVar5 = 14;
				while (iVar5 <= 17)
				{
					if (!is_entity_dead(&(Local_218[iVar5])))
					{
						set_blocking_of_non_temporary_events(&(Local_218[iVar5]), false);
						set_ped_relationship_group_hash(&(Local_218[iVar5]), -1538724068);
					}
					if (!iVar5 == 16)
					{
						if (!is_entity_dead(&(Local_218[func_1422(iVar5)])))
						{
							set_ped_config_flag(&(Local_218[func_1422(iVar5)]), 136, true);
							set_ped_relationship_group_hash(&(Local_218[func_1422(iVar5)]), -1538724068);
						}
					}
					func_1821(&uLocal_1964, &(Local_218[iVar5]));
					func_1821(&uLocal_1964, &(Local_218[iVar5]));
					set_current_ped_weapon(&(Local_218[iVar5]), -1569615261, true, 0, false, false);
					_hide_ped_weapons(&(Local_218[iVar5]), 2, true);
					iVar5++;
				}
				func_944(2);
				func_413(49);
				func_1301(14, 20, 14);
				break;
			case 14:
				iVar4 = 14;
				while (iVar4 <= 17)
				{
					Var0 = { func_931(iVar4, 0, 0) };
					set_current_ped_weapon(&(Local_218[iVar4]), -1569615261, false, 0, false, false);
					task_swap_weapon(&(Local_218[iVar4]), 1, 1, 0, 0);
					func_1822();
					task_follow_nav_mesh_to_coord(0, Var0, 1f, 20000, 0.25f, 0, Var0.f_3);
					if (iVar4 == 14)
					{
						task_achieve_heading(0, Var0.f_3, -1);
					}
					else
					{
						task_turn_ped_to_face_entity(0, Global_35, -1, -1082130432, -1082130432, -1082130432);
					}
					func_1823(&(Local_218[iVar4]), 0);
					iVar4++;
				}
				func_1301(14, 20, 15);
				break;
			case 15:
				if (is_entity_in_volume(&(iLocal_979[0]), Local_141.f_67, true, 0))
				{
					if (func_1280(func_1279(41)))
					{
						func_1824(func_1279(41), 1, 0);
					}
					_task_vehicle_drive_to_point(Global_35, &(iLocal_979[0]), _0xf70f00013a62f866(Local_141.f_20), 3f, 2f, 524419);
					func_413(34);
					_0xcf9da72002fc16bf(&(Local_218[16]), &(iLocal_979[0]), 1);
					if (has_ped_got_weapon(&(Local_218[16]), -1471716628, 0, true))
					{
						iLocal_2025 = -1471716628;
					}
					else if (has_ped_got_weapon(&(Local_218[16]), -1783478894, 0, true))
					{
						iLocal_2025 = -1783478894;
					}
					else if (has_ped_got_weapon(&(Local_218[16]), -183018591, 0, true))
					{
						iLocal_2025 = -183018591;
					}
					else if (has_ped_got_weapon(&(Local_218[16]), 1999408598, 0, true))
					{
						iLocal_2025 = 1999408598;
					}
					else if (has_ped_got_weapon(&(Local_218[16]), 1676963302, 0, true))
					{
						iLocal_2025 = 1676963302;
					}
					if (!iVar2022 == 0)
					{
						_0x72d4cb5db927009c(iVar2022, -1, 0);
					}
					func_1301(14, 20, 74);
				}
				if (!is_ped_in_vehicle(Global_35, &(iLocal_979[0]), false))
				{
					if (func_914(Global_35, &(Local_218[14]), 1, 1) <= 15f)
					{
						func_942(14, 22);
					}
				}
				break;
			case 22:
				iVar4 = 14;
				while (iVar4 <= 17)
				{
					if (iVar4 == 15)
					{
						fVar7 = 1.2f;
					}
					else if (iVar4 == 16)
					{
						fVar7 = 4.2f;
					}
					else if (iVar4 == 17)
					{
						fVar7 = 3.2f;
					}
					set_current_ped_weapon(&(Local_218[iVar4]), get_best_ped_weapon(&(Local_218[iVar4]), false, false), false, 0, false, false);
					func_1822();
					if (iVar4 == 15 || iVar4 == 17)
					{
						task_turn_ped_to_face_entity(0, Global_35, 0, -1082130432, -1082130432, -1082130432);
					}
					task_swap_weapon(0, 1, 0, 0, 0);
					task_turn_ped_to_face_entity(0, Global_35, -1, -1082130432, -1082130432, -1082130432);
					func_1823(&(Local_218[iVar4]), fVar7);
					iVar4++;
				}
				func_173(2, 0);
				func_1276(43);
				func_27(vLocal_1840[0], 1);
				fLocal_2023 = get_random_float_in_range((20f * 0.75f), (20f * 1.5f));
				func_942(14, 23);
				break;
			case 23:
				if (func_924(vLocal_1840[0]) >= fVar2020)
				{
					func_1276(43);
					fLocal_2023 = get_random_float_in_range((20f * 0.75f), (20f * 1.5f));
					func_244(vLocal_1840[0]);
				}
				if (func_914(Global_35, &(Local_218[14]), 1, 1) >= (15f * 1.5f))
				{
					func_942(14, 14);
				}
				break;
			case 74:
				set_current_ped_weapon(&(Local_218[14]), get_best_ped_weapon(&(Local_218[14]), false, false), true, 0, false, false);
				func_1332(0);
				disable_control_action(0, -17122892, false);
				func_1282(75);
				if (does_blip_exist(&(iLocal_1825[3])))
				{
					_set_blip_flash_style(&(iLocal_1825[3]), -401963276);
					remove_blip(iLocal_1825[3]);
				}
				func_1301(14, 20, 75);
				break;
			case 75:
				if (!func_167(36))
				{
					if (_get_anim_scene_time(&(Local_2202[0])) >= 2f)
					{
						func_1825(0, 1.5f, 1, 0);
						func_413(30);
						func_27(&(Local_218[15]->f_5), 0);
						func_27(&(Local_218[16]->f_5), 0);
						func_27(&(Local_218[17]->f_5), 0);
						task_look_at_entity(&(Local_218[14]), Global_35, -1, 48, 31, 0);
						task_look_at_entity(&(Local_218[15]), Global_35, -1, 48, 31, 0);
						task_look_at_entity(&(Local_218[16]), Global_35, -1, 48, 31, 0);
						task_look_at_entity(&(Local_218[17]), Global_35, -1, 48, 31, 0);
						func_413(36);
					}
				}
				else
				{
					if (func_26(&(Local_218[15]->f_5)))
					{
						if (func_924(&(Local_218[15]->f_5)) >= 1.5f)
						{
							set_current_ped_weapon(&(Local_218[15]), get_best_ped_weapon(&(Local_218[15]), false, false), false, 0, false, false);
							task_swap_weapon(&(Local_218[15]), 1, 1, 0, 0);
							func_599(&(Local_218[15]->f_5));
						}
					}
					if (func_26(&(Local_218[16]->f_5)))
					{
						if (func_924(&(Local_218[16]->f_5)) >= 0.1f)
						{
							set_current_ped_weapon(&(Local_218[16]), get_best_ped_weapon(&(Local_218[15]), false, false), false, 0, false, false);
							task_swap_weapon(&(Local_218[16]), 1, 1, 0, 0);
							func_599(&(Local_218[16]->f_5));
						}
					}
					if (func_26(&(Local_218[17]->f_5)))
					{
						if (func_924(&(Local_218[17]->f_5)) >= 3.2f)
						{
							set_current_ped_weapon(&(Local_218[17]), get_best_ped_weapon(&(Local_218[15]), false, false), false, 0, false, false);
							task_swap_weapon(&(Local_218[17]), 1, 1, 0, 0);
							func_599(&(Local_218[17]->f_5));
						}
					}
				}
				if (_0x005e6f28dd7ed58d(&(Local_2202[0]), "Main_Guard"))
				{
					disable_control_action(0, -17122892, false);
					func_1825(1, 1.5f, 0, 0);
					func_413(31);
					func_1301(14, 20, 76);
				}
				break;
			case 76:
				func_1301(14, 20, 77);
				break;
			case 77:
				if (!func_167(46))
				{
					if (is_entity_in_volume(&(iLocal_979[0]), Local_141.f_20, true, 0))
					{
						bring_vehicle_to_halt(&(iLocal_979[0]), 1f, -1, false);
						set_player_control(player_id(), false, 256, false);
						func_413(46);
						attach_anim_scene_to_entity(&(Local_2202[1]), &(iLocal_979[0]), 0);
						func_1332(1);
						func_1301(14, 20, 78);
					}
				}
				break;
			case 78:
				func_1825(1, 1.5f, 1, 0);
				func_413(32);
				func_1301(14, 20, 79);
				break;
			case 79:
				func_1301(14, 20, 80);
				break;
			case 80:
				if (_does_anim_scene_exist(&(Local_2202[1])))
				{
					if (!_0x005e6f28dd7ed58d(&(Local_2202[1]), "hosea"))
					{
						bVar6 = false;
					}
				}
				if (bVar6)
				{
					attach_anim_scene_to_entity(&(Local_2202[2]), &(iLocal_979[0]), 0);
					func_1825(0, 1.5f, 1, 0);
					func_413(33);
					func_1332(2);
					func_1301(14, 20, 81);
				}
				break;
			case 81:
				if (_0x005e6f28dd7ed58d(&(Local_2202[2]), "hosea"))
				{
					attach_anim_scene_to_entity(&(Local_2202[3]), &(iLocal_979[0]), 0);
					func_1332(3);
					func_1301(14, 20, 82);
				}
				break;
			case 82:
				if (!func_167(52))
				{
					if (_get_anim_scene_time(&(Local_2202[3])) >= 3f)
					{
						func_413(52);
					}
				}
				if (_0x005e6f28dd7ed58d(&(Local_2202[3]), "hosea"))
				{
					attach_anim_scene_to_entity(&(Local_2202[4]), &(iLocal_979[0]), 0);
					attach_anim_scene_to_entity(&(Local_2202[5]), &(iLocal_979[0]), 0);
					func_1332(4);
					func_1332(5);
					func_1301(14, 20, 83);
				}
				break;
			case 83:
				if (_does_anim_scene_exist(&(Local_2202[5])) && _is_anim_scene_started(&(Local_2202[5]), false))
				{
					if (!Local_218[17]->f_2 == 63)
					{
						if (_get_anim_scene_time(&(Local_2202[5])) >= 10f)
						{
							set_ped_config_flag(&(Local_218[func_1422(17)]), 136, false);
							func_1822();
							task_mount_animal(0, &(Local_218[func_1422(17)]), 20000, -1, 1.5f, 1, 0, 0);
							task_turn_ped_to_face_entity(0, &(iLocal_979[0]), 0, -1082130432, -1082130432, -1082130432);
							func_1823(&(Local_218[17]), 0);
							func_942(17, 63);
						}
					}
				}
				if (_does_anim_scene_exist(&(Local_2202[4])) && _is_anim_scene_started(&(Local_2202[4]), false))
				{
					if (!_0x005e6f28dd7ed58d(&(Local_2202[4]), "Guard^3") && !_is_anim_scene_finished(&(Local_2202[4]), false))
					{
						if (func_167(52))
						{
							if (_get_anim_scene_time(&(Local_2202[4])) >= 9.4f)
							{
								if (_0x927b810e43e99932(&Local_1992))
								{
									_0x0a5a4f1979abb40e(&Local_1992);
								}
								func_174(52);
							}
						}
						bVar6 = false;
					}
				}
				if (bVar6)
				{
					set_vehicle_door_control(&(iLocal_979[0]), 5, 0, 0f);
					set_vehicle_door_latched(&(iLocal_979[0]), 5, true, true, true);
					if (func_167(52))
					{
						if (_0x927b810e43e99932(&Local_1992))
						{
							_0x0a5a4f1979abb40e(&Local_1992);
						}
						func_174(52);
					}
					func_413(35);
					detach_anim_scene_preserving_location(&(Local_2202[5]));
					func_1301(14, 20, 84);
					func_413(45);
				}
				break;
		}
	}
	if (!func_167(45))
	{
		return;
	}
	iVar5 = 14;
	iVar5 = 14;
	while (iVar5 <= 17)
	{
		if ((Local_218[iVar5]->f_2 == 0 || Local_218[iVar5]->f_2 == 11) || Local_218[iVar5]->f_2 == 28)
		{
		}
		else
		{
			switch (Local_218[iVar5]->f_2)
			{
				case 84:
					bVar6 = false;
					if (_is_anim_scene_active(&(Local_2202[5])))
					{
						bVar6 = true;
					}
					if (!bVar6)
					{
						if ((iVar5 == 14 && _0x005e6f28dd7ed58d(&(Local_2202[5]), "Main_Guard")) || (iVar5 == 15 && _0x005e6f28dd7ed58d(&(Local_2202[5]), "Guard^1")))
						{
							bVar6 = true;
						}
					}
					if (bVar6)
					{
						set_ped_config_flag(&(Local_218[func_1422(iVar5)]), 136, false);
						func_1822();
						task_mount_animal(0, &(Local_218[func_1422(iVar5)]), 20000, -1, 1.5f, 1, 0, 0);
						task_turn_ped_to_face_entity(0, &(iLocal_979[0]), 0, -1082130432, -1082130432, -1082130432);
						func_1823(&(Local_218[iVar5]), 0);
						func_942(iVar5, 63);
					}
					break;
				case 63:
					if (iVar5 == 16)
					{
						func_942(iVar5, 64);
					}
					else if (!is_ped_on_mount(&(Local_218[iVar5])))
					{
					}
					else
					{
						if (!does_group_exist(iVar1954))
						{
							iLocal_1957 = get_player_group(player_id());
							set_group_formation(iVar1954, 5);
							add_custom_formation_location(iVar1954, -2f, -5f, 0f, 0);
							add_custom_formation_location(iVar1954, 2f, -7.5f, 0f, 1);
							add_custom_formation_location(iVar1954, -2f, -10f, 0f, 2);
						}
						set_ped_config_flag(&(Local_218[iVar5]), 279, true);
						set_ped_config_flag(&(Local_218[iVar5]), 280, true);
						set_ped_as_group_member(&(Local_218[iVar5]), iVar1954);
						if (iVar5 == 14)
						{
							_0x0e9e95fdedcc9d35(&(Local_218[iVar5]), 0, 0);
						}
						else if (iVar5 == 15)
						{
							_0x0e9e95fdedcc9d35(&(Local_218[iVar5]), 1, 0);
						}
						else if (iVar5 == 17)
						{
							_0x0e9e95fdedcc9d35(&(Local_218[iVar5]), 2, 0);
						}
						func_942(iVar5, 64);
						Jump @4183; //curOff = 3894
						if (iVar5 == 14)
						{
							if (func_1312(&(iLocal_979[0]), _0xf70f00013a62f866(Local_141.f_1), 1) <= (func_1826(Local_141.f_1) * 4f))
							{
								func_942(14, 69);
								func_942(15, 69);
								func_942(17, 69);
							}
						}
						Jump @4183; //curOff = 3958
						if (is_ped_in_group(&(Local_218[iVar5])))
						{
							remove_ped_from_group(&(Local_218[iVar5]));
						}
						if (iVar5 == 14)
						{
							Var8 = { 1017.2f, -1729.7f, 46.3f };
							Var8.f_3 = 157.6f;
						}
						else if (iVar5 == 15)
						{
							Var8 = { 1000.4f, -1733.1f, 45.9f };
							Var8.f_3 = -140.1f;
						}
						else if (iVar5 == 17)
						{
							Var8 = { 1005.7f, -1729f, 46f };
							Var8.f_3 = -168.9f;
						}
						func_1822();
						task_follow_nav_mesh_to_coord(0, Var8, 1f, 20000, 0.25f, 512, Var8.f_3);
						task_turn_ped_to_face_entity(0, Global_35, -1, -1082130432, -1082130432, -1082130432);
						task_look_at_entity(0, Global_35, -1, 48, 41, 0);
						func_1823(&(Local_218[iVar5]), 0);
						func_942(iVar5, 70);
					}
					iVar5++;
					default:
						break;
			}
		}
	}
}

void func_1274(var uParam0)
{
	if (is_entity_dead(&(Local_218[7])))
	{
		if (!Local_218[7]->f_2 == 0)
		{
			return;
		}
	}
	if (!func_167(28))
	{
		func_1827(uParam0, &(Local_218[func_1422(7)]), &(Local_218[7]));
	}
	switch (Local_218[7]->f_2)
	{
		case 1:
			func_942(7, 20);
			break;
		case 20:
			task_look_at_entity(&(Local_218[7]), Global_35, 5000, 48, 41, 0);
			set_ped_config_flag(&(Local_218[1]), 136, false);
			func_1822();
			func_1284(0, 50, 1.5f, -6f, -1, 0, 0);
			task_mount_animal(0, &(Local_218[func_1422(7)]), 20000, -1, 2f, 1, 0, 0);
			func_1823(&(Local_218[7]), 0);
			func_942(7, 21);
			break;
		case 21:
			if ((func_1828(&(Local_218[7])) && get_sequence_progress(&(Local_218[7])) == 1) || !func_1828(&(Local_218[7])))
			{
				func_187(uParam0, &(Local_218[7]), 0);
				func_186(func_185(7), 1);
				func_522(50);
				func_942(7, 17);
			}
			break;
		case 17:
			if (is_ped_on_mount(&(Local_218[7])))
			{
				func_942(7, 9);
			}
			break;
		case 9:
			func_1822();
			task_follow_nav_mesh_to_coord(0, func_988(0, 2), 1.5f, 120000, 0.25f, 0, 40000f);
			task_dismount_animal(0, 0, 0, 0, 0, 0);
			task_wander_in_area(0, func_988(0, 2), 50f, 1077936128, 1086324736, 1);
			func_1823(&(Local_218[7]), 0);
			func_942(7, 10);
			break;
		case 10:
			if (!is_entity_dead(&(Local_218[7])))
			{
				if (func_1275(33, 0))
				{
					if (func_1828(&(Local_218[7])) && get_sequence_progress(&(Local_218[7])) == 2)
					{
						func_942(7, 27);
					}
				}
			}
			else
			{
				func_942(7, 27);
			}
			break;
		case 27:
			_task_start_scenario_in_place(&(Local_218[func_1422(7)]), 696740378, -1, false, 0, -1f, false);
			func_413(28);
			if (func_202(func_185(7)))
			{
				func_509(uParam0, &(Local_218[func_1422(7)]));
				func_203(&(Local_218[func_1422(7)]), func_185(7), 1, 0, 0);
			}
			else
			{
				set_ped_as_no_longer_needed(Local_218[func_1422(7)]);
			}
			func_201(uParam0, func_185(7), &(Local_218[7]), 0, 0, 1, 0);
			func_942(func_1422(7), 0);
			func_522(4);
			func_186(func_185(7), 0);
			Local_218[7] = 0;
			Local_218[func_1422(7)] = 0;
			func_942(7, 0);
			break;
	}
}

bool func_1275(int iParam0, int iParam1)
{
	return ((iVar1954 + iParam1) % iParam0) == 0;
}

void func_1276(int iParam0)
{
	if (!iVar1834 == 0)
	{
	}
	iLocal_1837 = iParam0;
}

int func_1277(var uParam0)
{
	return uParam0->f_598;
}

void func_1278()
{
	switch (iVar2505)
	{
		case 0:
			func_1829(1);
		case 1:
			if (func_167(44))
			{
				func_1276(35);
			}
			else
			{
				func_1276(34);
			}
			func_1829(2);
			break;
		case 2:
			if ((!func_1319(1) && !func_1320(1)) && iVar1835 == 0)
			{
				func_1276(36);
				func_1829(3);
			}
			break;
		case 3:
			if ((!func_1319(1) && !func_1320(1)) && iVar1835 == 0)
			{
				func_1276(37);
				func_1829(4);
			}
			break;
		case 4:
			if (!func_1319(1) && !func_1320(1))
			{
				func_1276(39);
				func_1829(5);
			}
			break;
		case 5:
			if ((!func_1319(1) && !func_1320(1)) && iVar1835 == 0)
			{
				func_1810(38);
				func_1276(41);
				func_1829(6);
			}
			break;
	}
}

char* func_1279(int iParam0)
{
	Var0 = { func_1811(iParam0) };
	return Var0;
}

bool func_1280(char* sParam0)
{
	if (_0xd89504d9d7d5057d(sParam0) && _0x1ecc76792f661cf5(sParam0))
	{
		return true;
	}
	return false;
}

void func_1281(int iParam0, vector3 vParam1, bool bParam4, float fParam5, float fParam6, float fParam7, float fParam8, int iParam9, int iParam10, bool bParam11, int iParam12)
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
	if (func_1830(vParam1, 0f, 0f, 0f))
	{
		return;
	}
	if (((fParam5 < 0f || fParam6 < 0f) || fParam7 < 0f) || fParam8 < 0f)
	{
		return;
	}
	if (((((!fParam5 > fParam6 || !fParam5 > fParam7) || !fParam5 > fParam8) || !fParam6 > fParam7) || !fParam6 > fParam8) || !fParam7 > fParam8)
	{
		return;
	}
	iVar0 = get_mount(iParam0);
	if (is_ped_in_any_vehicle(iParam0, false))
	{
		iVar1 = get_vehicle_ped_is_in(iParam0, false);
	}
	fVar3 = func_1312(iParam0, vParam1, 1);
	if ((fVar3 <= fParam5 && fVar3 > fParam6) && fVar3 > fParam7)
	{
		if (does_entity_exist(iVar0) && !is_entity_dead(iVar0))
		{
			set_ped_max_move_blend_ratio(iVar0, 1.75f);
		}
		if ((func_1831() && !is_entity_dead(iVar1)) && _is_draft_vehicle(iVar1))
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
	if (fVar3 <= fParam6 && fVar3 > fParam7)
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
	if (fVar3 <= fParam7)
	{
		if (bParam11)
		{
			set_ped_max_move_blend_ratio(iParam0, 1f);
		}
		if (does_entity_exist(iVar0) && !is_entity_dead(iVar0))
		{
			set_ped_max_move_blend_ratio(iVar0, 1f);
			if (iParam9 == 1)
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
					if (iParam9 == 1)
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
		if (fVar3 <= fParam8)
		{
			if (iParam0 == Global_35)
			{
				set_player_may_not_enter_any_vehicle(player_id());
				_0x9f9a829c6751f3c7(player_id(), 28, 1);
			}
			if (!is_entity_dead(iVar0) && !func_1832(iParam0, 501393341))
			{
				task_dismount_animal(iParam0, iParam12, 0, 0, 0, 0);
			}
			if (!is_entity_dead(iVar1) && !func_1832(iParam0, -828834893))
			{
				task_leave_any_vehicle(iParam0, 0, iParam12);
			}
		}
	}
}

void func_1282(int iParam0)
{
	if (!&vLocal_1091[iParam0] == 0)
	{
		return;
	}
	vLocal_1091[iParam0] = 1;
}

void func_1283()
{
	if (has_ped_got_weapon(&(Local_218[16]), -183018591, 0, true))
	{
		iVar0 = -183018591;
	}
	else if (has_ped_got_weapon(&(Local_218[16]), -1783478894, 0, true))
	{
		iVar0 = -1783478894;
	}
	else if (has_ped_got_weapon(&(Local_218[16]), -1471716628, 0, true))
	{
		iVar0 = -1471716628;
	}
	else if (has_ped_got_weapon(&(Local_218[16]), 1999408598, 0, true))
	{
		iVar0 = 1999408598;
	}
	else if (has_ped_got_weapon(&(Local_218[16]), 1676963302, 0, true))
	{
		iVar0 = 1676963302;
	}
	if (iVar0 == 0)
	{
		return;
	}
	set_current_ped_weapon(&(Local_218[16]), iVar0, true, 0, false, false);
}

void func_1284(int iParam0, int iParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6)
{
	task_play_anim(iParam0, func_523(iParam1, 1), func_523(iParam1, 0), fParam2, fParam3, iParam4, iParam5, 0f, false, iParam6, false, 0, false);
}

void func_1285(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	if (is_entity_dead(&(Local_218[iParam1])))
	{
		return;
	}
	if (iParam1 >= 6 && iParam1 <= 9)
	{
		if (bParam2)
		{
			func_1350(uParam0, &(Local_218[iParam1]), -2045797884, 422991367, 1, 1);
		}
		else
		{
			func_187(uParam0, &(Local_218[iParam1]), 1);
		}
		return;
	}
	Local_218[iParam1]->f_1 = get_blip_from_entity(&(Local_218[iParam1]));
	if (does_blip_exist(Local_218[iParam1]->f_1))
	{
		remove_blip(&(Local_218[iParam1]->f_1));
	}
	if (!bParam2)
	{
		return;
	}
	if (iParam1 >= 14 && iParam1 <= 20)
	{
		Local_218[iParam1]->f_1 = _blip_add_for_entity(-1749618580, &(Local_218[iParam1]));
		set_blip_name_from_text_file(Local_218[iParam1]->f_1, func_1279(8));
		return;
	}
	if (iParam1 >= 42 && iParam1 <= 85)
	{
		Local_218[iParam1]->f_1 = _blip_add_for_entity(831283580, &(Local_218[iParam1]));
		if (iParam3 == 1)
		{
			_blip_set_modifier(Local_218[iParam1]->f_1, -1034486097);
		}
		if (iParam1 == 52)
		{
			_blip_set_modifier(Local_218[iParam1]->f_1, -948075745);
		}
		set_blip_name_from_text_file(Local_218[iParam1]->f_1, func_1279(12));
		return;
	}
	if (iParam1 >= 10 && iParam1 <= 13)
	{
		Local_218[iParam1]->f_1 = _blip_add_for_entity(-1749618580, &(Local_218[iParam1]));
		if (iParam1 == 10)
		{
			set_blip_name_from_text_file(Local_218[iParam1]->f_1, "DISCOVERABLE_NAME_CATHERINE_BRAITHWAITE");
		}
		return;
	}
}

int func_1286(int iParam0, vector3 vParam1, bool bParam4)
{
	iVar0 = _blip_add_for_coord(iParam0, vParam1);
	if (bParam4)
	{
		_blip_set_modifier(iVar0, 231194138);
	}
	return iVar0;
}

void func_1287(int iParam0)
{
	iLocal_1955 = iParam0;
}

bool func_1288(var uParam0)
{
	switch (iVar2021)
	{
		case 0:
			func_1833(1);
			break;
		case 1:
			if (func_1296(uParam0, 10, 13, 4143))
			{
				func_1833(2);
			}
			break;
		case 2:
			func_944(1);
			func_1833(3);
			break;
		case 3:
			func_1298(8);
			func_1298(9);
			func_1298(10);
			if ((Local_2202[8]->f_1 == 8 && Local_2202[9]->f_1 == 8) && Local_2202[10]->f_1 == 8)
			{
				func_1833(4);
			}
			break;
		case 4:
			func_1281(Global_35, _0xf70f00013a62f866(Local_141.f_1), 0, 150f, 100f, 0.001f, 0.0001f, 1, 1, 1, 0);
			if ((is_entity_in_volume(&(iLocal_979[0]), Local_141.f_1, true, 0) && iVar1952 == 2) && func_167(39))
			{
				func_1299(10);
				func_942(14, 69);
				func_942(15, 69);
				func_942(17, 69);
				func_1834(10, 1);
				func_1834(13, 1);
				func_1834(11, 1);
				func_1834(12, 1);
				func_413(40);
				disable_control_action(0, -17122892, false);
				func_189(0, 1);
				func_1338(0);
				bring_vehicle_to_halt(&(iLocal_979[0]), 3f, -1, false);
				remove_blip(iLocal_1825[4]);
				clear_gps_custom_route();
				set_gps_custom_route_render(false, 3, 30);
				func_1833(5);
			}
			break;
		case 5:
			set_current_ped_weapon(Global_35, -1569615261, true, 0, false, false);
			set_current_ped_weapon(Global_35, -1569615261, true, 1, false, false);
			_hide_ped_weapons(Global_35, 2, true);
			func_1332(8);
			func_1285(uParam0, 10, 1, 2);
			func_174(54);
			func_1303(uParam0);
			if (_0xa24c1d341c6e0d53(1, 0, 1))
			{
				func_413(55);
			}
			attach_anim_scene_to_entity(&(Local_2202[9]), &(iLocal_979[0]), 0);
			func_1332(9);
			_0xbdda142759307528(Global_35);
			if (!is_entity_dead(&(Local_218[16])))
			{
				func_1822();
				task_leave_any_vehicle(0, 0, 0);
				task_turn_ped_to_face_entity(0, Global_35, -1, -1082130432, -1082130432, -1082130432);
				func_1823(&(Local_218[16]), 3f);
			}
			func_1833(6);
			break;
		case 6:
			func_1300(0);
			if (_0x005e6f28dd7ed58d(&(Local_2202[9]), "ARTHUR"))
			{
				if (!func_167(55))
				{
					_0x8886d83a430537fd(Global_35, 2097152);
					_0x8886d83a430537fd(&(Local_218[6]), 2097152);
				}
				set_ped_max_move_blend_ratio(Global_35, 1f);
				func_1833(7);
			}
			break;
		case 7:
			set_ped_max_move_blend_ratio(Global_35, 1f);
			func_1300(0);
			func_1332(10);
			task_follow_nav_mesh_to_coord(&(Local_218[6]), 1010.1f, -1755.6f, 46.5f, 1f, 20000, 0.25f, 0, 40000f);
			func_1833(8);
			break;
		case 8:
			set_ped_max_move_blend_ratio(Global_35, 1f);
			func_1300(0);
			return true;
	}
	return false;
}

void func_1289(int iParam0)
{
	if (Local_985[iParam0]->f_5 == 1)
	{
		Local_985[iParam0]->f_5 = 0;
	}
}

void func_1290(var uParam0, int iParam1)
{
	uParam0->f_1[func_132(iParam1)]->f_12 = 1;
}

void func_1291(var uParam0, int iParam1, int iParam2, int iParam3)
{
	iVar0 = func_132(iParam2);
	if (!func_1586(iVar0))
	{
		return;
	}
	iVar1 = func_1587(iParam3);
	if (!func_1588(iVar1))
	{
		return;
	}
	(*uParam0->f_1[iVar0])[iVar1] = *iParam1;
	set_bit(&(uParam0->f_1[iVar0]->f_17), iVar1);
}

void func_1292(var uParam0, int iParam1, char[16] cParam2)
{
	uParam0->f_1[func_132(iParam1)]->f_13 = { cParam2 };
}

void func_1293(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_1[func_132(iParam1)]->f_21 = iParam2;
}

int func_1294(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 18:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case 79:
		case 80:
		case 81:
		case 82:
		case 83:
			return 0;
		case 19:
			return 1;
		case 20:
			return 2;
		case 6:
			return 3;
		case 7:
			return 4;
		case 8:
			return 5;
		case 9:
			return 6;
		case 4:
		case 5:
			return 17;
		case 14:
		case 15:
		case 16:
		case 17:
			return 7;
		case 10:
			return 8;
		case 11:
			return 9;
		case 12:
			return 10;
		case 13:
			return 11;
		case 25:
			return 12;
		case 23:
		case 24:
		case 26:
			return 15;
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 86:
		case 87:
		case 88:
		case 89:
		case 90:
			return 14;
		case 27:
		case 41:
			return 16;
		case 21:
		case 22:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
			return 15;
		case 42:
			return 33;
		case 43:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
		case 59:
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
		case 70:
		case 71:
		case 72:
			return 35;
		case 93:
		case 94:
			return 13;
		case 50:
			return 34;
	}
	return -1;
}

int func_1295(var uParam0, int iParam1, struct<4> Param2, bool bParam6, bool bParam7)
{
	if (Local_218[iParam1]->f_3 == 8)
	{
		return 1;
	}
	switch (Local_218[iParam1]->f_3)
	{
		case 0:
			Local_218[iParam1]->f_3 = 3;
		case 3:
			if (bParam6)
			{
				Local_218[iParam1]->f_3 = 5;
			}
			else if (func_167(0))
			{
			}
			else
			{
				iVar1 = func_459(iParam1);
				func_1835(iVar1, 1);
				func_1836(iVar1, 1, Param2, Param2.f_1, Param2.f_2, 0);
				func_413(0);
				iVar0 = func_504(iVar1);
				if (_0x800df3fc913355f3(iVar0))
				{
					Local_218[iParam1] = func_1837(iVar1, 1, 0, 1, 1, 1);
					if (does_entity_exist(&(Local_218[iParam1])) && Local_218[iParam1]->f_2 == 0)
					{
						func_942(iParam1, 1);
					}
					if (func_1838(iVar1, 1))
					{
						if (does_entity_exist(&(Local_218[iParam1])) && !is_entity_dead(&(Local_218[iParam1])))
						{
							Local_218[iParam1]->f_3 = 6;
						}
					}
				}
				Jump @648; //curOff = 269
				if (func_1296(uParam0, iParam1, iParam1, 5))
				{
					func_413(0);
					func_413(42);
					Local_218[iParam1]->f_3 = 6;
				}
				Jump @648; //curOff = 306
				func_942(iParam1, 1);
				if (!is_entity_dead(&(Local_218[iParam1])))
				{
					if (!is_entity_visible(&(Local_218[iParam1])))
					{
						set_entity_visible(&(Local_218[iParam1]), true);
					}
					set_entity_load_collision_flag(&(Local_218[iParam1]), 1);
					clear_ped_tasks(&(Local_218[iParam1]), 1, 0);
					set_ped_relationship_group_hash(&(Local_218[iParam1]), -1538724068);
					func_1839(&(Local_218[iParam1]), 0);
					_set_entity_coords_and_heading(&(Local_218[iParam1]), Param2, Param2.f_3, true, false, true);
					_0x9587913b9e772d29(&(Local_218[iParam1]), 0);
					force_ped_motion_state(&(Local_218[iParam1]), -1871534317, false, 0, false);
					clear_ped_tasks(&(Local_218[iParam1]), 1, 0);
					_0x2208438012482a1a(&(Local_218[iParam1]), false, false);
				}
				if (bParam7)
				{
					Local_218[iParam1]->f_3 = 7;
				}
				else
				{
					Local_218[iParam1]->f_3 = 8;
				}
				Jump @648; //curOff = 507
				func_1282(func_1294(func_1422(iParam1)));
				if (!func_1322(func_1294(func_1422(iParam1))))
				{
				}
				else
				{
					if (func_1296(uParam0, func_1422(iParam1), func_1422(iParam1), 5))
					{
						set_ped_config_flag(&(Local_218[func_1422(iParam1)]), 168, false);
						set_ped_config_flag(&(Local_218[func_1422(iParam1)]), 113, true);
						set_ped_config_flag(&(Local_218[func_1422(iParam1)]), 284, true);
						_0x2eb75fb86c41f026(&(Local_218[func_1422(iParam1)]), 3, 0);
						Local_218[iParam1]->f_3 = 8;
					}
				}
			}
			return 0;
			default:
				break;
	}
}

bool func_1296(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (!iParam3 & 16 != 0 && func_167(0))
	{
		return false;
	}
	iVar0 = func_1384(iParam1, iParam2);
	iVar1 = func_1840(iParam1, iParam2);
	if (iParam3 & 16 != 0)
	{
		iVar2 = func_1384(iParam1, iParam2);
	}
	else
	{
		iVar2 = 1;
	}
	iVar4 = 0;
	while (iVar4 < iVar2)
	{
		iVar0 = func_1384(iParam1, iParam2);
		iVar1 = func_1840(iParam1, iParam2);
		iVar5 = (iParam1 + iVar1);
		iVar6 = iVar5;
		if (iVar1 == iVar0)
		{
			if (iParam3 & 4 != 0)
			{
				iVar7 = iParam1;
				while (iVar7 <= iParam2)
				{
					if (!is_entity_dead(&(Local_218[iVar7])))
					{
						if (!_0xa0bc8faed8cfeb3c(&(Local_218[iVar7])))
						{
							return false;
						}
						else if (func_1841(iVar7, &iVar3) && !func_1842(iVar7, 1))
						{
							_set_ped_body_component(&(Local_218[iVar7]), iVar3);
							_update_ped_variation(&(Local_218[iVar7]), false, true, true, true, false);
							func_465(iVar7, 1);
						}
					}
					iVar7++;
				}
			}
			return true;
		}
		func_1282(func_1294(iVar6));
		if (!func_1322(func_1294(iVar6)))
		{
			return false;
		}
		Var8 = { func_931(iVar6, 0, func_33(uParam0)) };
		Local_218[iVar6] = func_1566(func_519(func_1294(iVar6)), Var8, Var8.f_3, 1, 1, 0, 1, 1, !func_1841(iVar6, &iVar3), iParam3 & 8 == 0, 0, 0, 0);
		func_413(0);
		if (iParam3 & 4096 != 0)
		{
			func_1834(iVar6, 0);
		}
		if (iParam3 & 16384 != 0)
		{
			freeze_entity_position(&(Local_218[iVar6]), true);
		}
		if (iParam3 & 1 != 0)
		{
			set_blocking_of_non_temporary_events(&(Local_218[iVar6]), true);
		}
		if (iParam3 & 2 != 0)
		{
			set_entity_invincible(&(Local_218[iVar6]), true);
		}
		if (iParam3 & 128 != 0)
		{
			func_1839(&(Local_218[iVar6]), 0);
		}
		if (iParam3 & 256 != 0)
		{
			_0x6569f31a01b4c097(&(Local_218[iVar6]), 0, 0);
			_0x6569f31a01b4c097(&(Local_218[iVar6]), 1, 0);
		}
		if (iParam3 & 512 != 0)
		{
			_0x18ff3110cf47115d(&(Local_218[iVar6]), 2, 0);
			_0x18ff3110cf47115d(&(Local_218[iVar6]), 3, 0);
			_0x18ff3110cf47115d(&(Local_218[iVar6]), 7, 0);
		}
		if (iParam3 & 1024 != 0)
		{
			_0x9587913b9e772d29(&(Local_218[iVar6]), 0);
		}
		if (iParam3 & 2048 != 0)
		{
			set_ped_config_flag(&(Local_218[iVar6]), 277, true);
		}
		if (iParam3 & 8192 != 0)
		{
			func_1393(&(Local_218[iVar6]), &(iLocal_1390[4]), -1, 3, 0, 1056964608, 1065353216, 0);
			_give_weapon_to_ped_2(&(Local_218[iVar6]), -164645981, -1, true, false, 1, false, 0.5f, 1f, 752097756, true, 0f, false);
			iVar12 = get_current_ped_weapon_entity_index(&(Local_218[iVar6]), 1);
			if (does_entity_exist(iVar12))
			{
				_set_lights_intensity_for_entity(iVar12, 2f);
			}
		}
		func_942(iVar6, 1);
		iVar4++;
	}
	return false;
}

bool func_1297(var uParam0)
{
	switch (&iLocal_2497[1])
	{
		case 0:
			iLocal_2497[1] = 1;
		case 1:
			iLocal_2497[1] = 2;
		case 2:
			iLocal_2497[1] = 3;
		case 3:
			iLocal_2497[1] = 4;
		case 4:
			func_1843(&(uParam0->f_7375));
			func_899(&(uParam0->f_7375), Global_35, "ARTHUR", 0, 0, 0);
			func_899(&(uParam0->f_7375), &(Local_218[6]), "HoseaMatthews", 0, 0, 0);
			func_899(&(uParam0->f_7375), &(Local_218[10]), "CatherineBraithwaite", 0, 0, 0);
			func_899(&(uParam0->f_7375), &(Local_218[11]), "GarethBraithwaite", 0, 0, 0);
			func_899(&(uParam0->f_7375), &(Local_218[12]), "GeraldBraithwaite", 0, 0, 0);
			func_899(&(uParam0->f_7375), &(Local_218[13]), "BartholomewBraithwaite", 0, 0, 0);
			func_899(&(uParam0->f_7375), &(Local_218[14]), "GenStoryMale", 0, 0, 0);
			func_899(&(uParam0->f_7375), &(Local_218[18]), "Horse_01^2", 0, 0, 0);
			func_899(&(uParam0->f_7375), &(Local_218[15]), "GenStoryMale^3", 0, 0, 0);
			func_899(&(uParam0->f_7375), &(Local_218[19]), "Horse_01^1", 0, 0, 0);
			func_899(&(uParam0->f_7375), &(Local_218[16]), "GenStoryMale^2", 0, 0, 0);
			func_899(&(uParam0->f_7375), &(Local_218[17]), "GenStoryMale^4", 0, 0, 0);
			func_899(&(uParam0->f_7375), &(Local_218[20]), "Horse_01", 0, 0, 0);
			func_899(&(uParam0->f_7375), &(iLocal_979[0]), "WAGON05X", 0, 0, 0);
			func_145(uParam0, &(Local_218[10]), "CATHERINE", 0);
			func_145(uParam0, &(Local_218[11]), "GARETH_BW", 0);
			iLocal_2497[1] = 7;
		case 7:
			return true;
	}
	return false;
}

void func_1298(int iParam0)
{
	switch (Local_2202[iParam0]->f_1)
	{
		case 0:
			if (func_1844(iParam0))
			{
				Local_2202[iParam0]->f_1 = 1;
			}
			else
			{
				Local_2202[iParam0]->f_1 = 4;
			}
			break;
		case 1:
			func_1845(iParam0);
			break;
		case 2:
			func_1845(iParam0);
			break;
		case 3:
			func_1845(iParam0);
			break;
		case 4:
			Local_2202[iParam0] = _create_anim_scene(func_1348(iParam0, 0), 0, func_1348(iParam0, 1), false, true);
			Local_2202[iParam0]->f_1 = 5;
			break;
		case 5:
			if (_is_anim_scene_loaded(&(Local_2202[iParam0]), true, false))
			{
				if (Local_2202[iParam0]->f_3)
				{
					func_1845(iParam0);
				}
				Local_2202[iParam0]->f_1 = 6;
			}
			else if (!_is_anim_scene_loading(&(Local_2202[iParam0]), true))
			{
				if (iParam0 == 14)
				{
					set_anim_scene_entity(&(Local_2202[iParam0]), "player_zero", Global_35, 0);
				}
				load_anim_scene(&(Local_2202[iParam0]));
			}
			break;
		case 6:
			if (_is_anim_scene_loaded(&(Local_2202[iParam0]), true, false))
			{
				if (Local_2202[iParam0]->f_3)
				{
					func_1845(iParam0);
					if (Local_2202[iParam0]->f_4)
					{
						Local_2202[iParam0]->f_1 = 7;
					}
				}
				else
				{
					Local_2202[iParam0]->f_1 = 7;
				}
			}
			break;
		case 7:
			func_1845(iParam0);
			Local_2202[iParam0]->f_1 = 8;
			break;
		case 8:
			break;
		case 9:
			if (!_does_anim_scene_exist(&(Local_2202[iParam0])))
			{
			}
			if (!_is_anim_scene_loaded(&(Local_2202[iParam0]), true, false))
			{
			}
			if (!_is_anim_scene_started(&(Local_2202[iParam0]), false))
			{
				func_1845(iParam0);
				start_anim_scene(&(Local_2202[iParam0]));
				Local_2202[iParam0]->f_1 = 10;
			}
			else
			{
				Local_2202[iParam0]->f_1 = 10;
			}
			break;
		case 10:
			func_1845(iParam0);
			if (_is_anim_scene_active(&(Local_2202[iParam0])))
			{
				Local_2202[iParam0]->f_1 = 11;
				func_1845(iParam0);
			}
			break;
		case 11:
			if (_is_anim_scene_finished(&(Local_2202[iParam0]), false))
			{
				Local_2202[iParam0]->f_1 = 12;
			}
			break;
		case 12:
			if (Local_2202[iParam0]->f_2)
			{
				Local_2202[iParam0]->f_1 = 13;
			}
			break;
		case 13:
			if (_does_anim_scene_exist(&(Local_2202[iParam0])))
			{
				_delete_anim_scene(&(Local_2202[iParam0]));
			}
			Local_2202[iParam0]->f_1 = 14;
			break;
	}
}

void func_1299(int iParam0)
{
	iVar1 = _0x0139637a3bff8b6d(&(Local_218[iParam0]), &iVar0);
	if (!_0x0772f87d7b07719a(player_id(), iVar0, iVar1))
	{
		_0x946d46cd6dfb9742(player_id(), iVar0, iVar1);
	}
}

void func_1300(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			disable_control_action(0, -1404316431, false);
			disable_control_action(0, 1618006066, false);
			disable_control_action(0, -1304887797, false);
			disable_control_action(0, -128997553, false);
			disable_control_action(0, 130948705, false);
			disable_control_action(0, -620139643, false);
			disable_control_action(0, -640622144, false);
			disable_control_action(0, 101002513, false);
			disable_control_action(0, 1287709438, false);
			disable_control_action(0, -2131587435, false);
			disable_control_action(0, -209515122, false);
			disable_control_action(0, -1292666904, false);
			if (!is_ped_in_cover(Global_35, 0, 0))
			{
				disable_control_action(0, -562475458, false);
			}
			break;
		case 1:
			disable_control_action(0, -17122892, false);
			disable_control_action(0, -1110080755, false);
			disable_control_action(0, -200625768, false);
			disable_control_action(0, -1404316431, false);
			disable_control_action(0, 1618006066, false);
			break;
		case 2:
			disable_control_action(0, 1644850270, false);
			disable_control_action(0, 1934388793, false);
			disable_control_action(0, -491432029, false);
			disable_control_action(0, -209515122, false);
			disable_control_action(0, 1287709438, false);
			disable_control_action(0, 1934388793, false);
			disable_control_action(0, 1934388793, false);
			disable_control_action(0, 1934388793, false);
			disable_control_action(0, 1934388793, false);
			disable_control_action(0, -640622144, true);
			disable_control_action(0, -17122892, true);
			disable_control_action(0, 1891137604, false);
			disable_control_action(0, -258447629, false);
			break;
	}
}

void func_1301(int iParam0, int iParam1, int iParam2)
{
	iVar0 = iParam0;
	while (iVar0 <= iParam1)
	{
		func_942(iVar0, iParam2);
		iVar0++;
	}
}

void func_1302(var uParam0)
{
	if (((Local_218[14]->f_2 == 0 && Local_218[15]->f_2 == 0) && Local_218[16]->f_2 == 0) && Local_218[17]->f_2 == 0)
	{
		func_522(func_1294(14));
		func_522(func_1294(18));
		func_522(func_1294(19));
		func_522(func_1294(20));
		func_413(83);
	}
	if (func_167(49))
	{
		func_1819();
	}
	func_1820();
	iVar0 = 14;
	while (iVar0 <= 17)
	{
		if (is_entity_dead(&(Local_218[iVar0])))
		{
			if ((!Local_218[iVar0]->f_2 == 73 && !Local_218[iVar0]->f_2 == 72) && !Local_218[iVar0]->f_2 == 0)
			{
				func_413(50);
				func_942(iVar0, 72);
			}
		else
		{
			}
			else
			{
				switch (Local_218[iVar0]->f_2)
				{
					case 71:
						break;
					case 16:
						func_413(49);
						set_ped_relationship_group_hash(&(Local_218[iVar0]), -1538724068);
						if (iVar0 == 16)
						{
							func_942(iVar0, 67);
							Jump @986; //curOff = 314
						}
						else if (!is_entity_dead(&(Local_218[func_1422(iVar0)])))
						{
							set_ped_relationship_group_hash(&(Local_218[func_1422(iVar0)]), -1538724068);
							set_ped_config_flag(&(Local_218[func_1422(iVar0)]), 136, false);
						}
						if (is_ped_in_group(&(Local_218[iVar0])))
						{
							remove_ped_from_group(&(Local_218[iVar0]));
						}
						clear_ped_tasks(&(Local_218[iVar0]), 1, 0);
						if (!is_entity_dead(&(Local_218[func_1422(iVar0)])) && !func_1846(&(Local_218[iVar0]), &(Local_218[func_1422(iVar0)]), 0))
						{
							task_mount_animal(&(Local_218[iVar0]), &(Local_218[func_1422(iVar0)]), 20000, -1, 2f, 1, 0, 0);
						}
						func_942(iVar0, 17);
						break;
					case 17:
						if (!is_entity_dead(&(Local_218[func_1422(iVar0)])) && func_1846(&(Local_218[iVar0]), &(Local_218[func_1422(iVar0)]), 0))
						{
							set_ped_config_flag(&(Local_218[func_1422(iVar0)]), 136, true);
							func_942(iVar0, 65);
						}
						break;
					case 65:
						func_942(iVar0, 67);
						break;
					case 67:
						Var1 = { func_931(iVar0, 0, 0) };
						func_1822();
						if (iVar0 == 16)
						{
							task_follow_nav_mesh_to_coord(0, Var1, 1.5f, -1, 0.25f, 0, 40000f);
							task_look_at_entity(0, Global_35, -1, 48, 41, 0);
							task_turn_ped_to_face_entity(0, Global_35, -1, -1082130432, -1082130432, -1082130432);
						}
						else
						{
							Var5 = { func_931(func_1422(iVar0), 0, 0) };
							task_turn_ped_to_face_coord(0, Var5, 0);
							task_follow_nav_mesh_to_coord(0, Var5, 1.25f, -1, 0.25f, 0, Var5.f_3);
							task_dismount_animal(0, 0, 0, 0, 0, 0);
							task_follow_nav_mesh_to_coord(0, Var1, 1f, -1, 0.25f, 0, Var1.f_3);
							task_turn_ped_to_face_entity(0, Global_35, -1, -1082130432, -1082130432, -1082130432);
						}
						func_1823(&(Local_218[iVar0]), 0);
						if (!iVar0 == 16)
						{
							if (!is_entity_dead(&(Local_218[func_1422(iVar0)])))
							{
								set_ped_config_flag(&(Local_218[func_1422(iVar0)]), 136, true);
							}
						}
						func_942(iVar0, 68);
						break;
					case 68:
						if (is_entity_dead(&(iLocal_979[0])))
						{
						}
						else
						{
							if (func_167(69))
							{
								func_942(iVar0, 72);
							}
							Jump @986; //curOff = 874
							func_174(49);
							set_ped_relationship_group_hash(&(Local_218[iVar0]), -1694487418);
							func_1289(2);
							if (!iVar0 == 16)
							{
								func_483(uParam0, func_1422(iVar0), 0);
							}
							if (!func_167(42))
							{
								set_ped_as_no_longer_needed(Local_218[iVar0]);
								func_1847(func_459(iVar0), 0, 1, 0, 0);
							}
							else
							{
								func_483(uParam0, iVar0, 0);
							}
							func_942(iVar0, 0);
							func_522(7);
						}
						iVar0++;
						default:
							break;
				}
			}
		}
	}
}

void func_1303(var uParam0)
{
	if (func_167(53))
	{
		if (!func_167(54))
		{
			iVar0 = 14;
			while (iVar0 <= 17)
			{
				func_1285(uParam0, iVar0, 0, 2);
				iVar0++;
			}
			func_174(53);
		}
	}
	else if (func_167(54))
	{
		iVar0 = 14;
		while (iVar0 <= 17)
		{
			if (iVar0 == 16)
			{
				if (is_ped_in_vehicle(&(Local_218[iVar0]), &(iLocal_979[0]), false))
				{
				}
				else
				{
					func_1285(uParam0, iVar0, 1, 2);
				}
				iVar0++;
				func_413(53);
			}
		}
	}
}

void func_1304(var uParam0, int iParam1)
{
	func_1807(&(uParam0->f_7375.f_861), iParam1);
}

bool func_1305()
{
	if ((does_entity_exist(&(Local_1692[3])) && does_entity_exist(&(Local_1692[4]))) && does_entity_exist(&(Local_1692[5])))
	{
		return true;
	}
	func_1282(27);
	func_1282(28);
	func_1282(29);
	if ((func_1322(27) && func_1322(28)) && func_1322(29))
	{
		Local_1692[3] = create_object(func_519(29), func_178(7, 0), true, true, false, false, true);
		Local_1692[4] = create_object(func_519(27), func_178(7, 0), true, true, false, false, true);
		Local_1692[5] = create_object(func_519(28), func_178(7, 0), true, true, false, false, true);
		set_entity_collision(&(Local_1692[3]), false, false);
		set_entity_collision(&(Local_1692[4]), false, false);
		set_entity_collision(&(Local_1692[5]), false, false);
		if (!is_entity_dead(&(Local_218[6])))
		{
			attach_entity_to_entity(&(Local_1692[3]), &(Local_218[6]), 0, 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, false, false);
		}
		if (!is_entity_dead(&(iLocal_979[0])))
		{
			attach_entity_to_entity(&(Local_1692[4]), &(iLocal_979[0]), 0, 0.292622f, 1.4f, 1.21362f, 0f, 0f, 0f, false, false, false, false, 2, true, false, false);
			attach_entity_to_entity(&(Local_1692[5]), &(iLocal_979[0]), 0, 0.0449068f, 1.4f, 1.2138f, 0f, 0f, 0f, false, false, false, false, 2, true, false, false);
		}
		return true;
	}
	return false;
}

int func_1306(int iParam0)
{
	Var0 = { func_1357(iParam0) };
	return Var0.f_6;
}

void func_1307(var uParam0, int iParam1)
{
	vVar0 = { _0xf70f00013a62f866(*uParam0) };
	vVar3 = { _0x18675bc914891122(*uParam0) };
	vVar6 = { _0x3e2a25b2416dd67e(*uParam0) };
	_delete_volume(*uParam0);
	*uParam0 = _0x0eb78c2b156635b1(iParam1, vVar0, vVar3, vVar6);
}

void func_1308(bool bParam0)
{
	_0x67e21acc5c0c970c(&(Local_218[13]), 9, bParam0);
	_0x67e21acc5c0c970c(&(Local_218[11]), 9, bParam0);
	_0x67e21acc5c0c970c(&(Local_218[12]), 9, bParam0);
}

bool func_1309()
{
	if (_0xa24c1d341c6e0d53(1, 0, 1))
	{
		if (func_167(61))
		{
			return false;
		}
		else
		{
			return true;
		}
	}
	else
	{
		return true;
	}
	return true;
}

void func_1310()
{
	if (func_167(74))
	{
		if (!func_167(76))
		{
			iVar1 = get_interior_from_entity(Global_35);
			if (is_valid_interior(iVar1))
			{
				iVar0 = get_interior_at_coords(1344.6f, -1374.1f, 80.6f);
				if (is_valid_interior(iVar0))
				{
					if (iVar1 == iVar0)
					{
						Local_985[6]->f_5 = 4;
					}
				}
			}
		}
	}
}

void func_1311(var uParam0)
{
	iVar0 = 23;
	while (iVar0 <= 24)
	{
		switch (Local_218[iVar0]->f_2)
		{
			case 0:
			case 1:
				if (iVar0 == 24)
				{
				}
				else if (!func_1275(60, 47))
				{
				}
				else
				{
					if (func_1312(Global_35, func_1848(1, 0), 1) < 200f || func_1312(Global_35, func_1848(2, 0), 1) < 200f)
					{
						func_1282(func_1294(23));
						func_1282(func_1294(24));
						func_1282(func_1849(1));
						func_1282(func_1849(2));
						if (((func_1322(func_1294(23)) && func_1322(func_1849(1))) && func_1322(func_1294(24))) && func_1322(func_1849(2)))
						{
							if (func_1296(uParam0, 23, 24, 2051))
							{
								func_942(23, 14);
								func_942(24, 14);
							}
							else
							{
								Jump @602; //curOff = 265
								if (iVar0 == 23)
								{
									if (func_1850(uParam0, 1))
									{
										set_ped_into_vehicle(&(Local_218[iVar0]), &(iLocal_979[1]), -1);
										func_942(iVar0, 15);
									}
								}
								else if (iVar0 == 24)
								{
									if (func_1850(uParam0, 2))
									{
										set_ped_into_vehicle(&(Local_218[iVar0]), &(iLocal_979[2]), -1);
										func_942(iVar0, 15);
									}
								}
								Jump @602; //curOff = 355
								if (func_914(Global_35, &(Local_218[iVar0]), 1, 1) < 35f)
								{
									func_942(23, 20);
									func_942(24, 20);
								}
								else
								{
									Jump @602; //curOff = 399
									func_1822();
									if (iVar0 == 23)
									{
										_task_vehicle_drive_to_destination(0, &(iLocal_979[1]), func_1848(1, 1), 2f, 524419, 3, 5f, 2.5f, 0);
									}
									else if (iVar0 == 24)
									{
										_task_vehicle_drive_to_destination(0, &(iLocal_979[2]), func_1848(2, 1), 2f, 524419, 3, 5f, 2.5f, 0);
									}
									func_1823(&(Local_218[iVar0]), 0);
									func_942(iVar0, 21);
									Jump @602; //curOff = 502
									if (!func_1828(&(Local_218[iVar0])))
									{
										func_1822();
										task_leave_any_vehicle(0, 0, 0);
										_task_use_nearest_scenario_to_coord(0, func_1851(iVar0 == 23, 1293.9f, -1296f, 76.6f, 1382.8f, -1311.9f, 76.9f), 5f, -1, false, false, false, false);
										func_1823(&(Local_218[iVar0]), 0);
										func_942(iVar0, 26);
									}
									iVar0++;
								}
							}
						}
					}
				}
				default:
					break;
		}
	}
}

float func_1312(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!does_entity_exist(iParam0))
	{
		return 0f;
	}
	return get_distance_between_coords(get_entity_coords(iParam0, false, false), vParam1, bParam4);
}

float func_1313(float fParam0, float fParam1, float fParam2)
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

int func_1314(int iParam0, int iParam1, float fParam2, var uParam3)
{
	switch (uParam3->f_3)
	{
		case 0:
			*uParam3 = func_307();
			iVar4 = func_307();
			func_1228(&iVar4, iParam0);
			func_1229(&iVar4, iParam1);
			func_1230(&iVar4, 0);
			if (func_1065(*uParam3, iVar4, 1))
			{
				func_356(&iVar4, 0, 0, 0, 1, 0, 0, 0);
			}
			func_1852(*uParam3, iVar4, &iVar0, &iVar1, &iVar2, &uVar5, &uVar6, &uVar7);
			uParam3->f_11 = ((iVar0 + iVar1 * 60) + iVar2 * 3600);
			uParam3->f_3++;
			break;
		case 1:
			if (fParam2 >= 0.99f || fParam2 == -1f)
			{
				iVar4 = *uParam3;
				func_356(&iVar4, uParam3->f_11, 0, 0, 0, 0, 0, 0);
				set_clock_time(func_745(iVar4), func_746(iVar4), func_747(iVar4));
				return 1;
			}
			iVar3 = round((IntToFloat(uParam3->f_11) * fParam2));
			iVar4 = *uParam3;
			func_356(&iVar4, iVar3, 0, 0, 0, 0, 0, 0);
			iVar8 = func_307();
			if (func_1065(iVar4, iVar8, 1))
			{
				set_clock_time(func_745(iVar4), func_746(iVar4), func_747(iVar4));
			}
			else
			{
				set_clock_time(func_745(iVar8), func_746(iVar8), func_747(iVar8));
			}
			if (func_744(iVar4) != get_clock_day_of_month())
			{
				set_clock_date(func_744(iVar4), func_743(iVar4), func_742(iVar4));
			}
			break;
	}
	return 0;
}

void func_1315(var uParam0)
{
	switch (Local_1429[iVar2037]->f_6)
	{
		case 0:
			Local_1429[iVar2037]->f_6 = 1;
			break;
		case 1:
			iLocal_2040 = 0;
			Local_1429[iVar2037]->f_6 = 2;
			break;
		case 2:
			iVar0 = 19;
			while (iVar0 <= 24)
			{
				func_1282(iVar0);
				iVar0++;
			}
			bVar1 = true;
			iVar0 = 19;
			while (iVar0 <= 24)
			{
				if (!func_1322(iVar0))
				{
					bVar1 = false;
				}
				else
				{
					iVar0++;
				}
			}
			if (bVar1)
			{
				if (func_1853(&(Local_1429[iVar2037])))
				{
					func_1282(func_1294(21));
					Local_1429[iVar2037]->f_6 = 3;
				}
			}
			break;
		case 3:
			if (func_1322(func_1294(21)))
			{
				Local_1429[iVar2037]->f_6 = 4;
			}
			break;
		case 4:
			Local_1429[iVar2037]->f_6 = 5;
			break;
		case 5:
			if (!func_1296(uParam0, 21, 21, 3))
			{
			}
			else
			{
				Local_1429[iVar2037]->f_7 = _create_mission_train(&(Local_1429[iVar2037]), Local_1429[iVar2037]->f_1, Local_1429[iVar2037]->f_4, Local_1429[iVar2037]->f_5, true, false);
				Local_1429[iVar2037]->f_6 = 6;
				Jump @993; //curOff = 362
				if (!_0xbd3c4a2ed509205e(Local_1429[iVar2037]->f_7))
				{
				}
				else
				{
					set_train_speed(Local_1429[iVar2037]->f_7, 0f);
					if (!is_entity_in_volume(Global_35, Local_141.f_26, true, 0))
					{
					}
					else
					{
						set_train_speed(Local_1429[iVar2037]->f_7, 10f);
						iLocal_1825[1] = _blip_add_for_entity(-399496385, Local_1429[iVar2037]->f_7);
						_blip_set_modifier(&(iLocal_1825[1]), -505526371);
						_0x4182c037aa1f0091(Local_1429[iVar2037]->f_7, 1);
						_0x160c1b5ab48ab87c(Local_1429[iVar2037]->f_7, 99999.9f);
						attach_entity_to_entity(&(Local_218[21]), Local_1429[iVar2037]->f_7, 0, vLocal_2034, vLocal_2037, false, false, false, false, 2, true, false, false);
						Local_1429[iVar2037]->f_6 = 7;
						Jump @993; //curOff = 565
						if (func_1854(Local_1429[iVar2037]->f_7, 1206.2f, -1290.7f, 75.6f, 5f, 1, 1))
						{
							func_27(vLocal_1840[6], 1);
							Local_1429[iVar2037]->f_6 = 8;
						}
						else
						{
							set_train_speed(Local_1429[iVar2037]->f_7, 10f);
						}
						if (func_167(69) && does_blip_exist(&(iLocal_1825[1])))
						{
							remove_blip(iLocal_1825[1]);
						}
						Jump @993; //curOff = 682
						fVar2 = (_0xef50e344a8f93784((-(func_924(vLocal_1840[6]) / 10f) + 1f), 0f, 1f, 13) * 10f);
						set_train_speed(Local_1429[iVar2037]->f_7, fVar2);
						if (fVar2 <= 0.1f)
						{
							_0x3660bcab3a6bb734(Local_1429[iVar2037]->f_7);
							Local_1429[iVar2037]->f_6 = 9;
						}
						Jump @993; //curOff = 773
						Jump @993; //curOff = 776
						_0x787e43477746876f(Local_1429[iVar2037]->f_7);
						Local_1429[iVar2037]->f_6 = 11;
						Jump @993; //curOff = 805
						switch (iVar2059)
						{
							case 0:
								delete_mission_train(&(Local_1429[iVar2037]->f_7));
								uLocal_2062 = iVar2059 + 1;
								break;
							case 1:
								func_522(19);
								uLocal_2062 = iVar2059 + 1;
								break;
							case 2:
								func_522(20);
								uLocal_2062 = iVar2059 + 1;
								break;
							case 3:
								func_522(21);
								uLocal_2062 = iVar2059 + 1;
								break;
							case 4:
								func_522(22);
								uLocal_2062 = iVar2059 + 1;
								break;
							case 5:
								func_522(23);
								uLocal_2062 = iVar2059 + 1;
								break;
							case 6:
								func_522(24);
								Local_1429[iVar2037]->f_6 = 13;
								break;
						}
					}
				}
			}
			default:
				break;
	}
}

void func_1316()
{
	if (is_entity_dead(&(Local_218[21])))
	{
		return;
	}
	switch (Local_218[21]->f_2)
	{
		case 1:
			func_942(21, 13);
		case 13:
			if (iVar2038 == 0)
			{
				if (Local_1429[iVar2038]->f_6 == 9)
				{
					if (is_entity_occluded(&(Local_218[21])) && !is_sphere_visible(func_988(1, 5), 1f))
					{
						func_942(21, 14);
					}
				}
			}
			break;
		case 14:
			detach_entity(&(Local_218[21]), true, true);
			set_entity_invincible(&(Local_218[21]), false);
			_set_entity_coords_and_heading(&(Local_218[21]), func_988(1, 5), func_989(1, 5), true, false, true);
			_0x9587913b9e772d29(&(Local_218[21]), 0);
			iVar0 = get_train_carriage(Local_1429[iVar2038]->f_7, (_0x635423d55ca84fc8(&(Local_1429[iVar2038])) - 1));
			func_1822();
			task_follow_nav_mesh_to_coord(0, func_1851(does_entity_exist(iVar0), get_offset_from_entity_in_world_coords(iVar0, 2.45f, -2.925f, 0f), 1295.655f, -1369.382f, 75.4604f), 1f, -1, 0.25f, 0, func_989(1, 6));
			_task_start_scenario_in_place(0, 1546182539, 0, false, 0, -1f, false);
			func_1823(&(Local_218[21]), 0);
			func_942(21, 15);
			break;
		case 15:
			if (func_1275(30, 74))
			{
				if (!is_entity_dead(Local_1429[iVar2038]->f_7))
				{
					if (is_ped_sitting_in_vehicle(Global_35, Local_1429[iVar2038]->f_7))
					{
						if (_0x4e76cb57222a00e5(Global_35) == -1)
						{
							func_336(2, 530833824, 1, 0, &(Local_218[21]), 0, 1065353216, 0);
							func_942(21, 4);
						}
					}
				}
			}
			break;
		case 4:
			task_combat_ped(&(Local_218[21]), Global_35, 0, 0);
			func_942(21, 5);
			break;
	}
}

void func_1317(var uParam0)
{
	iVar0 = 10;
	while (iVar0 <= 13)
	{
		if (is_entity_dead(&(Local_218[iVar0])) || Local_218[iVar0]->f_2 == 28)
		{
		}
		else
		{
			switch (Local_218[iVar0]->f_2)
			{
				case 1:
					set_entity_invincible(&(Local_218[iVar0]), false);
					set_entity_proofs(&(Local_218[iVar0]), 0, false);
					func_942(iVar0, 14);
				case 14:
					if (iVar0 == 10)
					{
						if (!_0x005e6f28dd7ed58d(&(Local_2202[11]), "CatherineBraithwaite"))
						{
						}
						else
						{
							Jump @292; //curOff = 147
							if (iVar0 == 11)
							{
								if (!_0x005e6f28dd7ed58d(&(Local_2202[12]), "GarethBraithwaite"))
								{
									Jump @568; //curOff = 176
								}
								else
								{
									func_1285(uParam0, 10, 0, 2);
									func_1285(uParam0, 11, 0, 2);
									func_1285(uParam0, 12, 0, 2);
									func_1285(uParam0, 13, 0, 2);
									func_413(97);
								}
							}
							else if (iVar0 == 12)
							{
								if (!_0x005e6f28dd7ed58d(&(Local_2202[13]), "GeraldBraithwaite"))
								{
								}
								else
								{
									Jump @292; //curOff = 260
									if (iVar0 == 13)
									{
										if (!_0x005e6f28dd7ed58d(&(Local_2202[13]), "BartholomewBraithwaite"))
										{
										}
										else
										{
											set_entity_collision(&(Local_218[iVar0]), true, false);
											task_follow_nav_mesh_to_coord(&(Local_218[iVar0]), 1010.8f, -1772.1f, 51.7f, 1f, 20000, 0.25f, 0, 40000f);
											func_942(iVar0, 15);
											Jump @568; //curOff = 352
											if (func_1275(30, iVar0 * 6))
											{
												if (func_167(97))
												{
													if ((!func_1855(&(Local_218[iVar0]), 713668775) && is_entity_occluded(&(Local_218[iVar0]))) || !is_entity_in_volume(Global_35, Local_141.f_21, true, 0))
													{
														func_942(iVar0, 27);
													}
												}
											}
											Jump @568; //curOff = 439
											if (func_167(0))
											{
											}
											else
											{
												func_483(uParam0, iVar0, 0);
												func_522(func_1294(iVar0));
												func_413(0);
												if (((Local_218[10]->f_2 == 0 && Local_218[11]->f_2 == 0) && Local_218[12]->f_2 == 0) && Local_218[13]->f_2 == 0)
												{
													func_522(62);
													func_522(63);
													func_1289(1);
													func_413(71);
												}
												func_942(iVar0, 0);
											}
										}
										iVar0++;
									}
								}
							}
						}
					}
					default:
						break;
			}
		}
	}
}

bool func_1318(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
{
	if (bParam7)
	{
		return vdist2(vParam0, vParam3) <= (fParam6 * fParam6);
	}
	return func_1626(vParam0, vParam3) <= (fParam6 * fParam6);
}

bool func_1319(int iParam0)
{
	return _0xfe5c6177064bd390(iParam0);
}

bool func_1320(int iParam0)
{
	return _0xa2cac9def0195e6f(iParam0);
}

void func_1321(int iParam0, bool bParam1)
{
	if (!bParam1 && does_entity_exist(&(Local_1692[iParam0])))
	{
		return;
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (does_entity_exist(&(Local_1692[iParam0])))
	{
		return;
	}
	Var0 = { func_1357(iParam0) };
	iVar7 = func_519(Var0.f_6);
	if (has_model_loaded(iVar7))
	{
		if (func_421(Var0))
		{
			vVar8 = { 100f, 100f, -100f };
		}
		else
		{
			vVar8 = { Var0 };
		}
		Local_1692[iParam0] = create_object(iVar7, vVar8, true, true, false, false, true);
		if (!func_421(Var0.f_3))
		{
			set_entity_rotation(&(Local_1692[iParam0]), Var0.f_3, 2, true);
		}
	}
	if (!does_entity_exist(&(Local_1692[iParam0])))
	{
	}
}

bool func_1322(int iParam0)
{
	return &vLocal_1091[iParam0] == 3;
}

void func_1323(var uParam0)
{
	iVar0 = 25;
	while (iVar0 <= 26)
	{
		if (Local_218[iVar0]->f_2 == 0 || Local_218[iVar0]->f_2 == 11)
		{
		}
		else if (is_entity_dead(&(Local_218[iVar0])))
		{
			func_942(iVar0, 11);
		}
		else
		{
			if (iVar0 == 25)
			{
				iVar9 = 0;
			}
			else if (iVar0 == 26)
			{
				iVar9 = 1;
			}
			switch (Local_218[iVar0]->f_2)
			{
				case 1:
					if (iVar0 == 25)
					{
						func_145(uParam0, &(Local_218[25]), "RHD_Bartender", 0);
						func_413(84);
					}
					func_942(iVar0, 24);
					break;
				case 24:
					if (iVar0 == 25)
					{
						func_942(iVar0, 25);
					}
					else
					{
						Var1 = { func_1354(iVar9) };
						if (_request_scenario_type(Var1, 1, func_519(func_1294(iVar0)), 0))
						{
							func_942(iVar0, 25);
						}
					}
					break;
				case 25:
					if (func_167(69))
					{
						func_942(iVar0, 26);
					}
					if (iVar0 == 25)
					{
						Var10 = { func_931(iVar0, 0, 1) };
						set_entity_coords(&(Local_218[iVar0]), Var10, true, false, true, true);
						set_entity_heading(&(Local_218[iVar0]), Var10.f_3);
						_task_start_scenario_in_place(&(Local_218[iVar0]), -401573203, -1, false, 0, -1f, false);
						func_942(iVar0, 26);
					}
					else if (iVar0 == 26)
					{
						Var1 = { func_1354(iVar9) };
						if (_has_scenario_type_loaded(Var1, false))
						{
							if (Var1.f_5)
							{
								if (_0x6eead6af637da752(Var1.f_1, Var1, 2f, 0))
								{
									if (Var1.f_5)
									{
										iVar14 = _find_closest_active_scenario_point_of_type(Var1.f_1, Var1, 2f, 0, false);
										if (_does_scenario_point_exist(iVar14))
										{
											_task_use_scenario_point(&(Local_218[iVar0]), iVar14, 0, -1, false, true, Var1, false, -1f, false);
											func_942(iVar0, 26);
										}
									}
								}
							}
							else
							{
								_task_start_scenario_in_place(&(Local_218[iVar0]), Var1, -1, false, 0, -1f, false);
								func_942(iVar0, 26);
							}
						}
					}
					break;
				case 26:
					if (iVar0 == 25)
					{
						if (func_1275(30, 0))
						{
							if (func_167(84))
							{
								if (func_914(Global_35, &(Local_218[25]), 1, 1) <= 5f)
								{
									func_1276(51);
									task_look_at_entity(&(Local_218[25]), Global_35, 5000, 48, 41, 0);
									task_look_at_entity(&(Local_218[26]), Global_35, 4000, 48, 41, 0);
									func_174(84);
								}
								if (func_167(69))
								{
									func_174(84);
								}
							}
						}
					}
					if (_does_anim_scene_exist(&(Local_2202[19])) && _is_anim_scene_metadata_loaded(&(Local_2202[19]), false))
					{
						if (iVar0 == 25)
						{
							if (_0x005e6f28dd7ed58d(&(Local_2202[19]), "U_M_M_RHDBartender_01"))
							{
								func_506(uParam0, 6, 0);
								func_506(uParam0, 7, 0);
								func_506(uParam0, 8, 0);
								func_506(uParam0, 9, 0);
								func_506(uParam0, 10, 0);
								func_506(uParam0, 11, 0);
								Var15 = { func_1357(3) };
								attach_entity_to_entity(&(Local_1692[3]), &(Local_218[6]), get_ped_bone_index(&(Local_218[6]), 21030), Var15, Var15.f_3, false, false, false, false, 2, true, false, false);
								func_522(30);
								func_522(31);
								func_522(29);
								func_1822();
								func_1856(0, func_1388(1, 7), 1f, -1, 1048576000, 0);
								func_1823(&(Local_218[25]), 0);
								_0x2208438012482a1a(&(Local_218[iVar0]), true, false);
								force_ped_motion_state(&(Local_218[iVar0]), -668482597, false, 0, false);
								func_942(iVar0, 21);
							}
						}
						else if (iVar0 == 26)
						{
							if (_0x005e6f28dd7ed58d(&(Local_2202[19]), "A_M_M_RHDTownFolk_01"))
							{
								func_1822();
								func_1856(0, func_1388(1, 8), 1f, -1, 1048576000, 0);
								func_1823(&(Local_218[26]), 0);
								_0x2208438012482a1a(&(Local_218[iVar0]), true, false);
								force_ped_motion_state(&(Local_218[iVar0]), -668482597, false, 0, false);
								func_942(iVar0, 21);
							}
						}
					}
					break;
				case 21:
					if (!func_1828(&(Local_218[iVar0])))
					{
						set_entity_invincible(&(Local_218[25]), false);
						set_entity_invincible(&(Local_218[26]), false);
						func_942(iVar0, 14);
					}
					break;
				case 14:
					if (iVar0 == 25)
					{
						_task_use_nearest_scenario_to_coord(&(Local_218[iVar0]), func_988(1, 7), 1f, 0, false, false, false, false);
					}
					else if (iVar0 == 26)
					{
						_task_start_scenario_in_place(&(Local_218[iVar0]), -22664287, 0, false, 0, -1f, false);
					}
					func_942(iVar0, 15);
					break;
				case 15:
					if (iVar0 == 25)
					{
						if (!func_167(98))
						{
							if (func_1275(30, 0))
							{
								if (func_914(Global_35, &(Local_218[25]), 1, 1) <= 10f)
								{
									func_942(25, 22);
									func_942(26, 22);
								}
							}
						}
					}
					break;
				case 22:
					if (iVar0 == 25)
					{
						func_1276(57);
						func_27(vLocal_1840[10], 1);
						func_413(98);
					}
					task_look_at_entity(&(Local_218[iVar0]), Global_35, func_1224(iVar0 == 25, 5000, 4500), 48, 41, 1);
					func_942(iVar0, 23);
					break;
				case 23:
					if (iVar0 == 25)
					{
						if (func_924(vLocal_1840[10]) >= 5f)
						{
							func_599(vLocal_1840[10]);
							func_942(25, 15);
							func_942(26, 15);
						}
					}
					break;
			}
		}
		iVar0++;
	}
}

bool func_1324(int iParam0, int iParam1, bool bParam2)
{
	if (does_entity_exist(iParam0) && !is_entity_dead(iParam0))
	{
		if (does_entity_exist(iParam1) && !is_entity_dead(iParam1))
		{
			if (is_ped_in_vehicle(iParam0, iParam1, bParam2))
			{
				return true;
			}
		}
	}
	return false;
}

void func_1325(var uParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < iVar1453)
	{
		Local_1457[iVar0]->f_1 = 0;
		iVar0++;
	}
	_0xdd1232b332cbb9e7(3, 1, 0);
	func_1857(uParam0, func_1279(Local_1457[iParam1]->f_11), -1082130432, 0, 0, -1, -1, 0);
	func_599(&(Local_1457[iParam1]->f_2));
	Local_1457[iParam1]->f_1 = 1;
}

void func_1326(var uParam0)
{
	if (!func_167(75))
	{
		if (func_1312(Global_35, _0xf70f00013a62f866(Local_141.f_22), 1) >= (func_1826(Local_141.f_22) * 1.1f))
		{
			_0xdd1232b332cbb9e7(3, 1, 0);
			func_1325(uParam0, 6);
			iLocal_1825[6] = _blip_add_for_radius(-1282792512, _0xf70f00013a62f866(Local_141.f_22), func_1826(Local_141.f_22));
			set_blip_name_from_text_file(&(iLocal_1825[6]), func_1279(11));
			if (!func_167(70))
			{
				remove_blip(iLocal_1825[7]);
			}
			else if (func_167(73))
			{
				remove_blip(iLocal_1825[8]);
			}
			else
			{
				func_187(uParam0, &(Local_218[6]), 1);
			}
			func_413(75);
		}
	}
	else if (is_entity_in_volume(Global_35, Local_141.f_22, true, 0))
	{
		_0xdd1232b332cbb9e7(3, 1, 0);
		func_1338(6);
		if (!func_167(70))
		{
			func_1325(uParam0, 7);
			if (!does_blip_exist(&(iLocal_1825[7])))
			{
				iLocal_1825[7] = func_1286(408396114, vLocal_2027, 1);
				set_blip_name_from_text_file(&(iLocal_1825[7]), func_1279(10));
			}
		}
		else if (func_167(73))
		{
			func_1325(uParam0, 9);
			func_1351();
		}
		else
		{
			func_1350(uParam0, &(Local_218[6]), -2045797884, 422991367, 1, 1);
			func_1325(uParam0, 8);
		}
		remove_blip(iLocal_1825[6]);
		func_174(75);
	}
	else if (func_1312(Global_35, _0xf70f00013a62f866(Local_141.f_22), 1) > (4f * func_1826(Local_141.f_22)))
	{
		Local_985[5]->f_5 = 4;
	}
}

void func_1327(var uParam0)
{
	if (is_entity_dead(&(Local_218[6])))
	{
		return;
	}
	if (Local_218[6]->f_2 >= 35)
	{
		if (Local_218[4]->f_2 == 1 && !is_entity_dead(&(Local_218[4])))
		{
			if (func_914(Global_35, &(Local_218[4]), 1, 1) <= 6f)
			{
				freeze_entity_position(&(Local_218[4]), false);
				vVar0 = { func_931(4, 1, 1) };
				func_1822();
				task_fly_to_coord(0, 2f, vVar0, 1, 0);
				func_1823(&(Local_218[4]), 0);
				if (!is_entity_dead(&(Local_218[5])))
				{
					vVar0 = { func_931(5, 1, 1) };
					freeze_entity_position(&(Local_218[5]), false);
					func_1822();
					task_fly_to_coord(0, 2f, vVar0, 1, 0);
					func_1823(&(Local_218[5]), 0);
				}
				Local_218[4]->f_2 = 21;
				Local_218[5]->f_2 = 21;
			}
		}
	}
	switch (Local_218[6]->f_2)
	{
		case 1:
			func_942(6, 18);
			break;
		case 18:
			func_942(6, 19);
			break;
		case 19:
			if (!is_ped_in_vehicle(&(Local_218[6]), &(iLocal_979[0]), false))
			{
				func_942(6, 16);
			}
			break;
		case 16:
			func_27(vLocal_1840[3], 1);
			if (!is_entity_dead(&(iLocal_979[0])) && !is_ped_ragdoll(&(Local_218[6])))
			{
				task_enter_vehicle(&(Local_218[6]), &(iLocal_979[0]), floor(((21f * 1000f) - 1000f)), 0, 2f, 12845633, 0);
				func_942(6, 17);
			}
			break;
		case 17:
			if (func_924(vLocal_1840[3]) >= 21f)
			{
				set_ped_into_vehicle(&(Local_218[6]), &(iLocal_979[0]), 0);
			}
			if (is_ped_in_vehicle(&(Local_218[6]), &(iLocal_979[0]), false))
			{
				func_599(vLocal_1840[3]);
				func_942(6, 18);
			}
			break;
		case 31:
			if ((!Local_2202[18]->f_1 == 8 || !Local_2202[17]->f_1 == 8) || !func_1322(66))
			{
			}
			else
			{
				if (!is_entity_dead(&(iLocal_979[0])))
				{
					attach_anim_scene_to_entity(&(Local_2202[17]), &(iLocal_979[0]), 0);
				}
				func_413(96);
				func_1419(66, 1, 0.25f, 1f, 1);
				func_1332(17);
				func_942(6, 32);
				Jump @1535; //curOff = 616
				if (!bVar2505)
				{
					if (_get_anim_scene_time(&(Local_2202[17])) >= 7.5f)
					{
						func_506(uParam0, 19, 0);
						func_1321(20, 1);
						set_entity_collision(&(Local_1692[20]), false, false);
						set_entity_coords(&(Local_1692[20]), get_offset_from_entity_in_world_coords(&(iLocal_979[0]), func_1383(19)), true, false, true, true);
						freeze_entity_position(&(Local_1692[20]), true);
						set_anim_scene_entity(&(Local_2202[17]), "p_jug01x", &(Local_1692[20]), 0);
						set_anim_scene_entity(&(Local_2202[18]), "p_jug01x", &(Local_1692[20]), 0);
						set_anim_scene_entity(&(Local_2202[19]), "p_jug01x", &(Local_1692[20]), 0);
						iLocal_2508 = 1;
					}
				}
				func_1298(18);
				func_1298(17);
				func_1298(19);
				if (!Local_2202[18]->f_1 == 8 || !Local_2202[19]->f_1 == 8)
				{
				}
				else
				{
					if (_0x005e6f28dd7ed58d(&(Local_2202[17]), "CS_HoseaMatthews") || _0xf94692eb9dc15d74(&(Local_2202[17]), 0))
					{
						freeze_entity_position(&(Local_1692[19]), false);
						set_anim_scene_entity(&(Local_2202[18]), "hosea", &(Local_218[6]), 0);
						set_anim_scene_entity(&(Local_2202[18]), "p_cigar01x", &(Local_1692[3]), 0);
						set_anim_scene_entity(&(Local_2202[19]), "p_jug01x", &(Local_1692[20]), 0);
						func_1332(18);
						task_enter_anim_scene(&(Local_218[6]), &(Local_2202[19]), "CS_HOSEAMATTHEWS", "pl_Dialogue_Main", 1f, 0, 0, 20000, -1082130432);
						func_942(6, 33);
					}
					Jump @1535; //curOff = 1010
					func_1298(19);
					if (_0x337f1cc8ee895601(&(Local_2202[19]), "CS_HOSEAMATTHEWS"))
					{
						func_528(18, 0);
						func_1332(19);
						func_1282(67);
						func_942(6, 35);
					}
					Jump @1535; //curOff = 1064
					func_1298(20);
					if (_does_volume_exist(Local_141.f_53))
					{
						if (_get_anim_scene_time(&(Local_2202[19])) >= 43.66f)
						{
							_delete_volume(Local_141.f_53);
							func_1419(66, 0, 1065353216, 1056964608, 1);
						}
					}
					if (!func_167(76))
					{
						if (has_anim_event_fired(&(Local_218[6]), 1113678768) || _0x005e6f28dd7ed58d(&(Local_2202[19]), "CS_HoseaMatthews"))
						{
							set_entity_invincible(&(Local_218[25]), true);
							set_entity_invincible(&(Local_218[26]), true);
							func_494(-1247339802, 0, 0, 0, 1, 0, 0, 0);
							func_413(73);
							func_413(76);
							func_413(81);
							func_482(1, 1);
							func_494(-360567618, 1, 0f, 0, 0, 0, 0, 0);
							func_494(-1905757044, 1, 0f, 0, 0, 0, 0, 0);
						}
					}
					func_1298(19);
					if (_0x005e6f28dd7ed58d(&(Local_2202[19]), "CS_HoseaMatthews"))
					{
						set_anim_scene_entity(&(Local_2202[20]), "p_jug01x", &(Local_1692[20]), 0);
						set_anim_scene_entity(&(Local_2202[20]), "hosea", &(Local_218[6]), 0);
						func_1332(20);
						func_942(6, 36);
					}
					Jump @1535; //curOff = 1354
					func_187(uParam0, &(Local_218[6]), 1);
					if (!func_167(75) && func_167(70))
					{
						func_1325(uParam0, 9);
						func_1351();
					}
					func_942(6, 37);
					Jump @1535; //curOff = 1409
					func_27(vLocal_1840[7], 0);
					if ((func_924(vLocal_1840[7]) >= 10f && _0x8d81e7824b7753f7(&(Local_2202[20]), "S_BRT1_MCS2_BASE", 1)) && is_entity_in_volume(Global_35, Local_141.f_3, true, 0))
					{
						if (func_167(70))
						{
							func_1276(55);
						}
						else if (!is_entity_in_volume(Global_35, Local_141.f_18, true, 0))
						{
							func_1276(56);
						}
						func_244(vLocal_1840[7]);
					}
				}
			}
			default:
				break;
	}
}

void func_1328()
{
	fVar0 = door_system_get_open_ratio(-1247339802);
	if (fVar0 > fVar2031)
	{
		fLocal_2033 = fVar0;
	}
	if (fVar2031 >= 1f || fVar0 < fVar2031)
	{
		if (!func_167(82))
		{
			func_413(82);
		}
		func_494(-1247339802, 0, 1f, 1, 0, 0, 0, 0);
		func_413(82);
	}
}

int func_1329(var uParam0)
{
	if (func_167(60))
	{
		return 1;
	}
	func_1282(55);
	if (!func_1322(55))
	{
		return 0;
	}
	switch (iVar2061)
	{
		case 0:
			func_1858(28, 1345.266f, -1373.865f, 78.9966f, 27f);
			func_1834(28, 1);
			uLocal_2064 = iVar2061 + 1;
			break;
		case 1:
			func_1858(29, 1349.029f, -1372.871f, 78.9956f, 129f);
			func_1834(29, 1);
			uLocal_2064 = iVar2061 + 1;
			break;
		case 2:
			_set_entity_coords_and_heading(&(Local_218[30]), 1341.763f, -1376.109f, 80.4806f, 74.65f, true, false, true);
			_task_start_scenario_in_place(&(Local_218[30]), -1122379099, 1, false, 0, -1f, false);
			func_1834(30, 1);
			uLocal_2064 = iVar2061 + 1;
			break;
		case 3:
			func_1858(31, 1352.012f, -1373.023f, 78.9956f, -20f);
			func_1834(31, 1);
			uLocal_2064 = iVar2061 + 1;
			break;
		case 4:
			func_1858(32, 1344.041f, -1371.973f, 78.9956f, 214f);
			func_1834(32, 1);
			uLocal_2064 = iVar2061 + 1;
			break;
		case 5:
			func_1858(33, 1345.583f, -1372.291f, 78.9956f, 135f);
			func_1834(33, 1);
			uLocal_2064 = iVar2061 + 1;
			break;
		case 6:
			func_1858(34, 1352.392f, -1371.198f, 78.9436f, 160f);
			func_1834(34, 1);
			uLocal_2064 = iVar2061 + 1;
			break;
		case 7:
			func_1858(35, 1351.508f, -1375.372f, 78.9436f, -15f);
			func_1834(35, 1);
			uLocal_2064 = iVar2061 + 1;
			break;
		case 8:
			func_1858(36, 1347.541f, -1373.882f, 78.9436f, -52f);
			func_1834(36, 1);
			uLocal_2064 = iVar2061 + 1;
			break;
		case 9:
			func_1858(37, 1342.491f, -1370.893f, 78.9436f, -13f);
			func_1834(37, 1);
			uLocal_2064 = iVar2061 + 1;
			break;
		case 10:
			func_1858(38, 1343.687f, -1373.565f, 78.9436f, -56f);
			func_1834(38, 1);
			uLocal_2064 = iVar2061 + 1;
			break;
		case 11:
			_task_start_scenario_in_place(&(Local_218[39]), -1122379099, 1, false, 0, -1f, false);
			func_1834(39, 1);
			uLocal_2064 = iVar2061 + 1;
			break;
		case 12:
			_task_start_scenario_in_place(&(Local_218[40]), -1122379099, 1, false, 0, -1f, false);
			func_1834(40, 1);
			uLocal_2064 = iVar2061 + 1;
			break;
		case 13:
			_task_start_scenario_in_place(&(Local_218[41]), -1122379099, 1, false, 0, -1f, false);
			func_1834(41, 1);
			uLocal_2064 = iVar2061 + 1;
			break;
		case 14:
			if (func_1356(27, 14, 1))
			{
				func_1834(27, 1);
				uLocal_2064 = iVar2061 + 1;
				func_413(60);
				return 1;
			}
			break;
		case 15:
			return 1;
	}
	return 0;
}

void func_1330()
{
	disable_control_action(0, 130948705, false);
	disable_control_action(0, 42190210, false);
	disable_control_action(0, -640622144, false);
	disable_control_action(0, -1242632265, false);
	disable_control_action(0, 578288361, false);
	disable_control_action(0, -128997553, false);
	disable_control_action(0, -1292666904, false);
	disable_control_action(0, -871336537, false);
	disable_control_action(0, -49345492, false);
	disable_control_action(0, -1404316431, false);
	disable_control_action(0, -1304887797, false);
	disable_control_action(0, -2128655846, false);
	disable_control_action(0, -620139643, false);
	disable_control_action(0, -562475458, false);
	disable_control_action(0, -620139643, false);
	disable_control_action(0, 1287709438, false);
	disable_control_action(0, 1934388793, false);
	disable_control_action(0, -209515122, false);
	disable_control_action(0, -432665970, false);
	disable_control_action(0, -349518703, false);
	disable_control_action(0, -1591726981, false);
	disable_control_action(0, -1098542161, false);
	disable_control_action(0, 1101824977, false);
	disable_control_action(0, 966551065, false);
	disable_control_action(0, 668058244, false);
	disable_control_action(0, -473983589, false);
	disable_control_action(0, -1046962283, false);
	disable_control_action(0, -822242784, false);
	disable_control_action(0, -1507998160, false);
	disable_control_action(0, -719620017, false);
	disable_control_action(0, -537390343, false);
	disable_control_action(0, 1829968318, false);
	disable_control_action(0, -367718798, false);
	disable_control_action(0, -950261840, false);
	disable_control_action(0, -1527709589, false);
	disable_control_action(0, 1933115891, false);
	disable_control_action(0, -611489352, false);
	disable_control_action(0, -1453452184, false);
	disable_control_action(0, 25970639, false);
	disable_control_action(0, -1849055209, false);
	disable_control_action(2, -673289442, false);
	disable_control_action(2, 2080465600, false);
	disable_control_action(0, -711536720, false);
	disable_control_action(0, -1678863853, false);
	disable_control_action(0, -1616532217, false);
	disable_control_action(0, 399753205, false);
	disable_control_action(0, -171675621, false);
	disable_control_action(0, 824284304, false);
	disable_control_action(0, 349924446, false);
	disable_control_action(0, -1748559064, false);
	disable_control_action(0, 782960533, false);
}

void func_1331()
{
	if (!_0x23e33cb9f4a3f547(&(Local_2202[16]), "pbl_Idle") && !_0x0df57f86fe71dbe5(&(Local_2202[16]), "pbl_Idle"))
	{
		_0xdf7b5144e25cd3fe(&(Local_2202[16]), "pbl_Idle");
	}
	if (!_0x23e33cb9f4a3f547(&(Local_2202[16]), "pbl_action") && !_0x0df57f86fe71dbe5(&(Local_2202[16]), "pbl_action"))
	{
		_0xdf7b5144e25cd3fe(&(Local_2202[16]), "pbl_action");
	}
}

bool func_1332(int iParam0)
{
	if (!Local_2202[iParam0]->f_1 == 8)
	{
		return false;
	}
	if (!_does_anim_scene_exist(&(Local_2202[iParam0])))
	{
		return false;
	}
	if (!_is_anim_scene_loaded(&(Local_2202[iParam0]), true, false))
	{
		return false;
	}
	if (iParam0 >= 21 && iParam0 <= 29)
	{
		func_1859(iParam0);
	}
	Local_2202[iParam0]->f_1 = 9;
	func_1298(iParam0);
	return true;
}

bool func_1333(var uParam0)
{
	switch (&iLocal_2497[2])
	{
		case 0:
			iLocal_2497[2] = 1;
		case 1:
			Var0 = { func_1357(15) };
			func_1282(Var0.f_6);
			iLocal_2497[2] = 2;
		case 2:
			Var0 = { func_1357(15) };
			if (func_1322(Var0.f_6))
			{
				iLocal_2497[2] = 3;
			}
			break;
		case 3:
			func_1321(15, 1);
			func_1321(16, 1);
			func_1321(17, 1);
			func_1321(18, 1);
			iLocal_2497[2] = 4;
		case 4:
			func_1843(&(uParam0->f_7375));
			func_899(&(uParam0->f_7375), Global_35, "ARTHUR", 0, 0, 0);
			func_899(&(uParam0->f_7375), &(Local_218[6]), "HoseaMatthews", 0, 0, 0);
			func_899(&(uParam0->f_7375), &(Local_1692[20]), "p_jug01x", 0, 0, 0);
			func_899(&(uParam0->f_7375), &(Local_218[28]), "A_M_M_RhdForeman_01", 0, 0, 0);
			func_899(&(uParam0->f_7375), &(Local_218[29]), "A_M_M_RhdForeman_01^1", 0, 0, 0);
			func_899(&(uParam0->f_7375), &(Local_218[30]), "A_M_M_RhdForeman_01^2", 0, 0, 0);
			func_899(&(uParam0->f_7375), &(Local_218[31]), "A_M_M_RhdForeman_01^4", 0, 0, 0);
			func_899(&(uParam0->f_7375), &(Local_218[32]), "A_M_M_RhdUpperClass_01", 0, 0, 0);
			func_899(&(uParam0->f_7375), &(Local_218[33]), "A_M_M_RhdUpperClass_01^3", 0, 0, 0);
			func_899(&(uParam0->f_7375), &(Local_218[34]), "A_M_M_RhdUpperClass_01^4", 0, 0, 0);
			func_899(&(uParam0->f_7375), &(Local_218[35]), "A_M_M_RhdupperClass_01^5", 0, 0, 0);
			func_899(&(uParam0->f_7375), &(Local_218[36]), "A_M_M_RhdUpperClass_01^6", 0, 0, 0);
			func_899(&(uParam0->f_7375), &(Local_218[37]), "A_M_M_RhdUpperClass_01^7", 0, 0, 0);
			func_899(&(uParam0->f_7375), &(Local_218[38]), "A_M_M_RhdUpperClass_01^8", 0, 0, 0);
			func_899(&(uParam0->f_7375), &(Local_218[39]), "A_M_M_RhdUpperClass_01^9", 0, 0, 0);
			func_899(&(uParam0->f_7375), &(Local_218[27]), "U_M_M_RhdDoctor_01", 0, 0, 0);
			func_899(&(uParam0->f_7375), &(Local_1692[15]), "p_beerMugGlass01x", 0, 0, 0);
			func_899(&(uParam0->f_7375), &(Local_1692[16]), "p_beerMugGlass01x^1", 0, 0, 0);
			func_899(&(uParam0->f_7375), &(Local_1692[17]), "p_beerMugGlass01x^2", 0, 0, 0);
			func_899(&(uParam0->f_7375), &(Local_1692[18]), "p_beerMugGlass01x^3", 0, 0, 0);
			func_899(&(uParam0->f_7375), &(Local_1692[13]), "p_bottlecrate01x", 0, 0, 0);
			iLocal_2497[2] = 7;
		case 7:
			return true;
	}
	return false;
}

int func_1334(int iParam0)
{
	if (iParam0 == -358215195)
	{
		return 0;
	}
	return &(Global_1946804->f_1497.f_1[func_723(iParam0, 1)]);
}

void func_1335(int iParam0, int iParam1)
{
	if (!func_214(iParam0))
	{
		return;
	}
	func_1243(iParam0, iParam1);
}

bool func_1336(char* sParam0)
{
	return _0xd89504d9d7d5057d(sParam0);
}

void func_1337()
{
	if (!func_167(93))
	{
		if (has_anim_event_fired(Global_35, 1404318677))
		{
			func_413(93);
		}
	}
	else
	{
		if (has_anim_event_fired(Global_35, -1565821571))
		{
			func_413(61);
			func_174(93);
		}
		_disable_first_person_cam_this_frame();
	}
	if (has_anim_event_fired(&(Local_218[6]), -1376584066))
	{
		iVar0 = -1;
		waypoint_recording_get_closest_waypoint(func_525(65), get_entity_coords(&(iLocal_979[0]), true, false), &iVar0);
		if (iVar0 >= 210 || func_1312(&(iLocal_979[0]), _0xf70f00013a62f866(Local_141.f_56), 1) <= 40f)
		{
			func_528(14, 0);
			iLocal_2043 = 12;
		}
	}
	if (func_1280(func_1279(45)))
	{
		disable_control_action(0, -17122892, false);
		disable_control_action(0, 1891137604, false);
	}
	if (iVar2041 >= 7 && iVar2041 < 14)
	{
		func_1300(1);
	}
	if (iVar2041 < 11 && is_ped_in_vehicle(Global_35, &(iLocal_979[0]), false))
	{
		disable_control_action(0, -1879280170, false);
		if (!is_entity_dead(&(Local_218[2])))
		{
			set_ped_max_move_blend_ratio(&(Local_218[2]), 1.25f);
		}
		if (!is_entity_dead(&(Local_218[3])))
		{
			set_ped_max_move_blend_ratio(&(Local_218[3]), 1.25f);
		}
	}
	if (_does_anim_scene_exist(&(Local_2202[14])) && _is_anim_scene_started(&(Local_2202[14]), false))
	{
		disable_control_action(0, 1287709438, false);
		if (_get_anim_scene_time(&(Local_2202[14])) >= 14f && _get_anim_scene_time(&(Local_2202[14])) < 17f)
		{
			_clamp_gameplay_cam_yaw(-90f, 90f);
		}
	}
	switch (iVar2041)
	{
		case 0:
			iLocal_2043 = 1;
		case 1:
			if ((!is_entity_dead(&(iLocal_979[0])) && iVar1953 == 2) && get_entity_speed(&(iLocal_979[0])) >= 0.5f)
			{
				func_27(vLocal_1840[0], 1);
				iLocal_2043 = 2;
			}
			break;
		case 2:
			if (func_924(vLocal_1840[0]) >= 4f)
			{
				iLocal_2043 = 3;
			}
			break;
		case 3:
			if ((!func_1319(1) && !func_1320(1)) && iVar1835 == 0)
			{
				func_27(vLocal_1840[0], 1);
				func_1276(45);
				iLocal_2043 = 4;
			}
			break;
		case 4:
			if ((!func_1336(func_1279(45)) && !func_1280(func_1279(45))) && func_924(vLocal_1840[0]) >= 10f)
			{
				func_244(vLocal_1840[0]);
				iLocal_2043 = 5;
			}
			break;
		case 5:
			if (!func_924(vLocal_1840[0]) >= 2.5f)
			{
			}
			else if (!is_ped_sitting_in_vehicle(Global_35, &(iLocal_979[0])))
			{
			}
			else if (!get_ped_in_vehicle_seat(&(iLocal_979[0]), -1) == Global_35)
			{
			}
			else if (!is_ped_sitting_in_vehicle(&(Local_218[6]), &(iLocal_979[0])))
			{
			}
			else if (!get_ped_in_vehicle_seat(&(iLocal_979[0]), 0) == &Local_218[6])
			{
			}
			else
			{
				if (func_936(Global_35, -1725579161, 0))
				{
					func_413(92);
					func_1860(2);
				}
				else
				{
					func_1861(2);
				}
				iLocal_2043 = 6;
				Jump @1405; //curOff = 864
				func_1298(14);
				if (Local_2202[14]->f_1 == 8)
				{
					if (!is_entity_dead(&(iLocal_979[0])))
					{
						attach_anim_scene_to_entity(&(Local_2202[14]), &(iLocal_979[0]), 19);
					}
					set_current_ped_weapon(Global_35, -1569615261, true, 0, false, false);
					func_1332(14);
					func_1282(func_1294(4));
					func_1282(func_1294(5));
					func_413(95);
					if (func_167(92))
					{
						fLocal_2041 = 41.3f;
						fLocal_2042 = 42.3f;
					}
					else
					{
						fLocal_2041 = 41.3f;
						fLocal_2042 = 42.3f;
					}
					iLocal_2043 = 8;
				}
				Jump @1405; //curOff = 1016
				func_1298(14);
				if (_get_anim_scene_time(&(Local_2202[14])) >= fVar2039)
				{
					iLocal_2043 = 9;
				}
				Jump @1405; //curOff = 1048
				set_gameplay_hint_fov(40f);
				_set_gameplay_hint_anim_offsetz(0.75f);
				_set_gameplay_hint_anim_offsety(-0.5f);
				if (!is_entity_dead(&(iLocal_979[0])))
				{
					set_gameplay_entity_hint(&(iLocal_979[0]), 0f, 20f, -2.5f, true, (floor((fVar2040 * 1000f)) - floor((fVar2039 * 1000f))), 2000, 2000, 0);
				}
				_0x6378a235374b852f("BLOCKED_CONTEXTS_SPUR", 0);
				stop_ped_speaking(Global_35, true);
				func_413(21);
				iLocal_2043 = 10;
				Jump @1405; //curOff = 1175
				if (_get_anim_scene_time(&(Local_2202[14])) < fVar2040)
				{
					disable_control_action(1, 2139949496, false);
					disable_control_action(1, 1644850270, false);
				}
				else
				{
					iLocal_2043 = 11;
				}
				Jump @1405; //curOff = 1226
				iLocal_2043 = 12;
				Jump @1405; //curOff = 1234
				if (_is_anim_scene_active(&(Local_2202[14])) || !_is_anim_scene_started(&(Local_2202[14]), false))
				{
					func_174(95);
					func_520(4);
					iLocal_2043 = 13;
				}
				Jump @1405; //curOff = 1286
				if (!func_26(vLocal_1840[5]))
				{
					if ((!_does_anim_scene_exist(&(Local_2202[14])) || _is_anim_scene_finished(&(Local_2202[14]), false)) || !_is_anim_scene_started(&(Local_2202[14]), false))
					{
						func_27(vLocal_1840[5], 0);
					}
				}
				else if (func_924(vLocal_1840[5]) >= 5f)
				{
					func_528(14, 1);
					iLocal_2043 = 14;
					func_413(77);
				}
			}
			default:
				break;
	}
}

void func_1338(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (iVar1835 == Local_1457[iParam0]->f_11)
	{
		iLocal_1838 = 0;
	}
	if (Local_1457[iParam0]->f_1 == 1)
	{
		func_599(&(Local_1457[iParam0]->f_2));
		Local_1457[iParam0]->f_1 = 2;
		_0xdd1232b332cbb9e7(3, 1, 0);
	}
}

void func_1339()
{
	Global_1357516 = 0;
}

void func_1340()
{
	if (is_bit_set(&Global_1357510, 4))
	{
	}
	else
	{
		set_bit(Global_1357510, 0);
	}
}

void func_1341(int iParam0)
{
	if (iParam0 == 0)
	{
		func_1862();
	}
	else if (iParam0 == 1)
	{
		iVar0 = 0;
		while (iVar0 < 29)
		{
			if (&Global_1347400->f_46[iVar0] != 0)
			{
				if (has_ped_got_weapon(Global_35, &(Global_1347400->f_46[iVar0]), 0, false))
				{
					if (!has_ped_got_weapon(Global_35, &(Global_1347400->f_46[iVar0]), 0, true))
					{
						func_1393(Global_35, &(Global_1347400->f_46[iVar0]), 0, 0, 0, 1056964608, 1065353216, 0);
					}
				}
				iVar1 = 0;
				get_current_ped_weapon(Global_35, &iVar1, false, iVar0, true);
				if (iVar1 != &Global_1347400->f_46[iVar0])
				{
					set_current_ped_weapon(Global_35, &(Global_1347400->f_46[iVar0]), true, iVar0, false, false);
				}
			}
			iVar0++;
		}
		func_1863(1);
	}
}

void func_1342(bool bParam0)
{
	if (Global_43891)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 30)
	{
		iVar1 = func_1118(Global_35, iVar0, 0, 1);
		if (is_weapon_valid(iVar1))
		{
			if (_is_weapon_two_handed(iVar1) || func_1701(iVar1))
			{
				if (!bParam0 || (iVar0 != 7 && iVar0 != 9))
				{
					_0xe9bd19f8121ade3e(Global_35, iVar1);
				}
			}
		}
		iVar0++;
	}
}

int func_1343(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -349518703;
		case 1:
		case 2:
			return -257797870;
		case 3:
			return -1590402827;
		case 4:
			return -893639584;
		case 5:
			return -603738045;
	}
	return 1367437629;
}

int func_1344(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, bool bParam12)
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
		if (func_1026(iVar0, 2))
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
		func_1864(iVar1, iParam1, sParam0, 0, iParam10, 0, 0f, 0f, 0f, 0f, 0, 0, 4, 1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9, 0, 0, iParam11, bParam12);
		return iVar1;
	}
	return 0;
}

void func_1345(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (bParam3 && !func_10(iParam0))
	{
		return;
	}
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	iVar0 = func_211(iParam0);
	func_1865(iParam0, 18, 0, 1);
	func_1865(iParam0, 17, 0, 1);
	if (iParam4 == -1)
	{
		iParam4 = _uiprompt_get_group_id_for_target_entity(iParam1);
	}
	_uiprompt_set_group((*Global_1945938)[iVar0]->f_3, iParam4, iParam2);
}

bool func_1346(int iParam0, bool bParam1)
{
	if (bParam1 && !func_10(iParam0))
	{
		return false;
	}
	iVar0 = func_211(iParam0);
	if (_uiprompt_has_mash_mode((*Global_1945938)[iVar0]->f_3))
	{
		return _uiprompt_has_mash_mode_completed((*Global_1945938)[iVar0]->f_3);
	}
	return _uiprompt_has_hold_mode_completed((*Global_1945938)[iVar0]->f_3);
}

void func_1347()
{
	while (true)
	{
		iVar1++;
		iVar0 = _get_first_entity_ped_is_carrying(Global_35);
		if (does_entity_exist(iVar0))
		{
			detach_entity(iVar0, true, true);
		}
	else
	{
		}
		else if (iVar1 > 10)
		{
		}
	else
	{
		}
	}
}

char* func_1348(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 8:
			if (iParam1 == 0)
			{
				return "script@story@brt1@leadin@mcs_1@cat_part1";
			}
			else if (iParam1 == 1)
			{
				return "pl_part1_cat";
			}
			break;
		case 9:
			if (iParam1 == 0)
			{
				return "script@story@brt1@leadin@mcs_1@wagon_part1";
			}
			else if (iParam1 == 1)
			{
				return "pl_wagon_dismount";
			}
			break;
		case 10:
			if (iParam1 == 0)
			{
				return "script@story@brt1@leadin@mcs_1@part2";
			}
			else if (iParam1 == 1)
			{
				return "pl_part_2";
			}
			break;
		case 11:
			if (iParam1 == 0)
			{
				return "script@story@BRT1@LEADOUT@MCS_1@LEADOUT_Catherine";
			}
			else if (iParam1 == 1)
			{
				return "";
			}
			break;
		case 12:
			if (iParam1 == 0)
			{
				return "script@story@BRT1@LEADOUT@MCS_1@LEADOUT_gareth";
			}
			else if (iParam1 == 1)
			{
				return "";
			}
			break;
		case 13:
			if (iParam1 == 0)
			{
				return "script@story@BRT1@LEADOUT@MCS_1@LEADOUT_Gerald_Bart";
			}
			else if (iParam1 == 1)
			{
				return "";
			}
			break;
		case 14:
			if (iParam1 == 0)
			{
				return "script@story@BRT1@ig@ig1_diect_to_collect_moonshine@ig1_direct_to_collect_moonshine";
			}
			else if (iParam1 == 1)
			{
				return func_1184(func_1866(2), "pl_BR_WOHat_Var", "pl_BR_WHat_Var");
			}
			break;
		case 15:
			if (iParam1 == 0)
			{
				return "script@story@brt1@ig@ig2_collect_moonshine_box@ig2_collect_moonshine_box";
			}
			else if (iParam1 == 1)
			{
				return "pl_Action";
			}
			break;
		case 16:
			if (iParam1 == 0)
			{
				return "script@story@brt1@ig@ig3_carry_moonshine@ig3_carry_moonshine";
			}
			else if (iParam1 == 1)
			{
				return "pbl_action";
			}
			break;
		case 17:
			if (iParam1 == 0)
			{
				return "script@story@brt1@ig@ig_4_talk_to_saloon_guys@ig_4_talk_to_saloon_guys_wagon";
			}
			else if (iParam1 == 1)
			{
				return "pl_Dialogue_Main";
			}
			break;
		case 18:
			if (iParam1 == 0)
			{
				return "script@story@brt1@ig@ig_4_talk_to_saloon_guys@ig_4_talk_to_saloon_guys_hosea";
			}
			else if (iParam1 == 1)
			{
				return "pbl_walking_loop";
			}
			break;
		case 19:
			if (iParam1 == 0)
			{
				return "script@story@brt1@ig@ig_4_talk_to_saloon_guys@ig_4_talk_to_saloon_guys";
			}
			else if (iParam1 == 1)
			{
				return "pl_Dialogue_Main";
			}
			break;
		case 21:
			if (iParam1 == 0)
			{
				return "script@story@brt1@ig@ig5_drinking_scene@brt1_ig5_rounds_01_02";
			}
			else if (iParam1 == 1)
			{
				return "pbl_Round_01_START_Finish_Ped_01_Start_Ped_02";
			}
			break;
		case 22:
			if (iParam1 == 0)
			{
				return "script@story@brt1@ig@ig5_drinking_scene@brt1_ig5_rounds_01_02";
			}
			else if (iParam1 == 1)
			{
				return "pbl_Round_01_Finish_Ped_02_Start_Ped_03";
			}
			break;
		case 23:
			if (iParam1 == 0)
			{
				return "script@story@brt1@ig@ig5_drinking_scene@brt1_ig5_rounds_01_02";
			}
			else if (iParam1 == 1)
			{
				return "pbl_Round_01_Finish_Ped_03_Round_02_START";
			}
			break;
		case 24:
			if (iParam1 == 0)
			{
				return "script@story@brt1@ig@ig5_drinking_scene@brt1_ig5_rounds_01_02";
			}
			else if (iParam1 == 1)
			{
				return "pbl_Round_02_Finish_Ped_01_Start_Ped_02";
			}
			break;
		case 25:
			if (iParam1 == 0)
			{
				return "script@story@brt1@ig@ig5_drinking_scene@brt1_ig5_rounds_01_02";
			}
			else if (iParam1 == 1)
			{
				return "pbl_Round_02_Glass_Drop_and_Wide_Shot";
			}
			break;
		case 26:
			if (iParam1 == 0)
			{
				return "script@story@brt1@ig@ig5_drinking_scene@BRT1_IG5_Round_03";
			}
			else if (iParam1 == 1)
			{
				return "pbl_Round_03_Start";
			}
			break;
		case 27:
			if (iParam1 == 0)
			{
				return "script@story@brt1@ig@ig5_drinking_scene@BRT1_IG5_Round_03";
			}
			else if (iParam1 == 1)
			{
				return "pbl_round_03_part_02";
			}
			break;
		case 28:
			if (iParam1 == 0)
			{
				return "script@story@brt1@ig@ig5_drinking_scene@BRT1_IG5_Round_03";
			}
			else if (iParam1 == 1)
			{
				return "pbl_round_03_part_03";
			}
			break;
		case 29:
			if (iParam1 == 0)
			{
				return "script@story@brt1@ig@ig5_drinking_scene@BRT1_IG5_Round_03";
			}
			else if (iParam1 == 1)
			{
				return "pbl_Glass_Drop_Final_Hook_to_Cutscene";
			}
			break;
		case 30:
		case 31:
			if (iParam1 == 0)
			{
				return "script@story@brt1@ig@ig5_drinking_scene@brt1_ig5_rounds_01_02";
			}
			else if (iParam1 == 1)
			{
				return "pbl_Round_01_Mini_Game";
			}
			break;
		case 32:
		case 33:
			if (iParam1 == 0)
			{
				return "script@story@brt1@ig@ig5_drinking_scene@brt1_ig5_rounds_01_02";
			}
			else if (iParam1 == 1)
			{
				return "pbl_Round_02_Mini_Game";
			}
			break;
		case 34:
		case 35:
		case 36:
			if (iParam1 == 0)
			{
				return "script@story@brt1@ig@ig5_drinking_scene@brt1_ig5_round_03";
			}
			else if (iParam1 == 1)
			{
				return "pbl_round_03_bar_loop_mini_game";
			}
			break;
		case 20:
			if (iParam1 == 0)
			{
				return "script@story@brt1@leadin@mcs_2@leadin";
			}
			else if (iParam1 == 1)
			{
				return "pl_brt1_mcs2_approach";
			}
			break;
		case 38:
			if (iParam1 == 0)
			{
				return "script@story@brt1@leadout@mcs3@crowd_panic";
			}
			else if (iParam1 == 1)
			{
				return "pl_leadout";
			}
			break;
		case 39:
			if (iParam1 == 0)
			{
				return "script@story@brt1@ig@ig_9_hosea_grabbed_recovers@ig_9_hosea_grabbed_recovers";
			}
			else if (iParam1 == 1)
			{
				return "pbl_loop";
			}
			break;
		case 40:
			if (iParam1 == 0)
			{
				return "script@story@brt1@ig@ig_9_hosea_grabbed_recovers@ig_9_hosea_falls_over_railing";
			}
			else if (iParam1 == 1)
			{
				return "pbl_tackle_fall_over_rail";
			}
			break;
		case 41:
			if (iParam1 == 0)
			{
				return "script@story@brt1@ig@ig11_wagon_jump@ig11_wagon_jump_player_loop";
			}
			else if (iParam1 == 1)
			{
				return "pb_player_loop";
			}
			break;
		case 42:
			if (iParam1 == 0)
			{
				return "script@story@brt1@ig@ig11_wagon_jump@ig11_wagon_jump";
			}
			else if (iParam1 == 1)
			{
				return "pl_main_action";
			}
			break;
		case 43:
			if (iParam1 == 0)
			{
				return "script@story@brt1@ig@ig12_almost_run_over@ig12_almost_run_over_01";
			}
			else if (iParam1 == 1)
			{
				return "Pbl_Almost_Run_Over";
			}
			break;
		case 44:
			if (iParam1 == 0)
			{
				return "script@story@brt1@ig@ig12_almost_run_over@ig12_almost_run_over_02";
			}
			else if (iParam1 == 1)
			{
				return "pbl_walking_guy_react";
			}
			break;
		case 45:
			if (iParam1 == 0)
			{
				return "script@story@brt1@ig@ig12_almost_run_over@ig12_almost_run_over_03";
			}
			else if (iParam1 == 1)
			{
				return "pbl_guy_sitting_reacts_to_wagon";
			}
			break;
		case 46:
			if (iParam1 == 0)
			{
				return "script@story@brt1@ig@ig13_almost_run_over@ig13_almost_run_over";
			}
			else if (iParam1 == 1)
			{
				return "pbl_idle";
			}
			break;
		case 0:
			if (iParam1 == 0)
			{
				return "script@story@brt1@ig@ig14_manor_guards@ig14_manor_main_guard_2";
			}
			else if (iParam1 == 1)
			{
				return "pbl_guard_stop_wagon";
			}
			break;
		case 1:
			if (iParam1 == 0)
			{
				return "script@story@brt1@ig@ig14_manor_guards@ig14_wagon_scene_3";
			}
			else if (iParam1 == 1)
			{
				return "pbl_action_01";
			}
			break;
		case 2:
			if (iParam1 == 0)
			{
				return "script@story@brt1@ig@ig14_manor_guards@ig14_wagon_scene_3";
			}
			else if (iParam1 == 1)
			{
				return "pbl_action_02";
			}
			break;
		case 3:
			if (iParam1 == 0)
			{
				return "script@story@brt1@ig@ig14_manor_guards@ig14_wagon_scene_3";
			}
			else if (iParam1 == 1)
			{
				return "pbl_action_03";
			}
			break;
		case 4:
		case 5:
			if (iParam1 == 0)
			{
				return "script@story@brt1@ig@ig14_manor_guards@ig14_wagon_scene_3";
			}
			else if (iParam1 == 1)
			{
				return "pbl_action_04";
			}
			break;
		case 37:
			switch (iParam1)
			{
				case 0:
					return "script@story@brt1@ig@ig5_drinking_scene@ig5_hosea_walks_around_bar";
				case 1:
					return "pbl_hosea_walks_around_bar";
			}
			break;
		case 47:
			if (iParam1 == 0)
			{
				return "script@story@brt1@leadin@ext@leadin";
			}
			else if (iParam1 == 1)
			{
				return "pl_leadin";
			}
			break;
		case 48:
			if (iParam1 == 0)
			{
				return "script@rcm@fud2@leadout@rsc_2@playlist";
			}
			else if (iParam1 == 1)
			{
				return "pbl_base";
			}
			break;
	}
	return "";
}

void func_1349(int iParam0, int iParam1)
{
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	if (!Local_1457[iParam0] & 2 != 0)
	{
		return;
	}
	Local_1457[iParam0]->f_7 = iParam1;
}

int func_1350(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (is_entity_dead(iParam1))
	{
		return iVar0;
	}
	bVar1 = func_490(uParam0, iParam1);
	bVar2 = (is_entity_a_ped(iParam1) && func_487(get_ped_index_from_entity_index(iParam1)));
	if (bVar2)
	{
		iVar3 = func_488(get_ped_index_from_entity_index(iParam1));
	}
	if (bVar1)
	{
		func_469(uParam0, iParam1, 128);
		if (bParam4)
		{
			func_469(uParam0, iParam1, 1024);
		}
	}
	if (is_entity_a_ped(iParam1) && bParam4)
	{
		iVar0 = get_blip_from_entity(iParam1);
		if (bVar2)
		{
			func_1867(iVar3);
			if (does_blip_exist(iVar0))
			{
				_blip_set_modifier(iVar0, -546708623);
				if (bParam5)
				{
					_blip_set_modifier(iVar0, 231194138);
				}
			}
		}
		else if (func_490(uParam0, iParam1) && does_blip_exist(iVar0))
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
		if (func_467(uParam0, iParam1, &iVar4))
		{
			func_492(uParam0->f_5423[iVar4]);
		}
	}
	if (bVar2)
	{
		set_this_script_can_remove_blips_created_by_any_script(true);
		func_493(iVar3);
	}
	return iVar0;
}

void func_1351()
{
	if (!does_blip_exist(&(iLocal_1825[8])))
	{
		iLocal_1825[8] = func_1286(408396114, func_988(1, 4), 1);
		set_blip_name_from_text_file(&(iLocal_1825[8]), func_1279(11));
	}
}

void func_1352(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7)
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

void func_1353(int iParam0, int iParam1)
{
	if (!is_ped_injured(iParam0))
	{
		set_current_ped_weapon(iParam0, -1569615261, true, 0, false, false);
		set_current_ped_weapon(iParam0, -1569615261, true, 1, false, false);
		if (is_ped_a_player(iParam0) && iParam1 == 1)
		{
			if (is_player_playing(player_id()))
			{
				_0xcffc3eccd7a5cceb(player_id(), -1569615261, 0);
			}
		}
	}
}

struct<8> func_1354(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			Var0 = -401573203;
			Var0.f_1 = { func_1389(25, 0, 1) };
			Var0.f_5 = 1;
			Var0.f_6 = 1;
			Var0.f_7 = 0;
			break;
		case 1:
			Var0 = -22664287;
			Var0.f_1 = { func_1389(26, 0, 1) };
			Var0.f_5 = 0;
			Var0.f_6 = 1;
			Var0.f_7 = 0;
			break;
		case 2:
			Var0 = -2097328111;
			Var0.f_1 = { 1345.3f, -1373.8f, 80f };
			Var0.f_4 = 0f;
			Var0.f_5 = 1;
			Var0.f_6 = 1;
			Var0.f_7 = 0;
			break;
		case 3:
			Var0 = -120888770;
			Var0.f_1 = { 1349f, -1372.9f, 80f };
			Var0.f_5 = 1;
			Var0.f_6 = 1;
			Var0.f_7 = 0;
			break;
		case 4:
			Var0 = 2087366558;
			Var0.f_1 = { 1341.7f, -1376.2f, 79.6f };
			Var0.f_5 = 1;
			Var0.f_6 = 1;
			Var0.f_7 = 0;
			break;
		case 5:
			Var0 = -1539374245;
			Var0.f_1 = { 1351.8f, -1372.8f, 80f };
			Var0.f_5 = 1;
			Var0.f_6 = 1;
			Var0.f_7 = 0;
			break;
		case 6:
			Var0 = 1992878229;
			Var0.f_1 = { 1344f, -1372f, 80.1f };
			Var0.f_5 = 1;
			Var0.f_6 = 1;
			Var0.f_7 = 0;
			break;
		case 7:
			Var0 = -120888770;
			Var0.f_1 = { 1345.5f, -1372.3f, 80f };
			Var0.f_5 = 1;
			Var0.f_6 = 1;
			Var0.f_7 = 0;
			break;
		case 8:
			Var0 = 935336933;
			Var0.f_1 = { 1352.2f, -1371.3f, 80.1f };
			Var0.f_5 = 1;
			Var0.f_6 = 1;
			Var0.f_7 = 0;
			break;
		case 9:
			Var0 = -1539374245;
			Var0.f_1 = { 1351.4f, -1375.2f, 80.2f };
			Var0.f_5 = 1;
			Var0.f_6 = 1;
			Var0.f_7 = 0;
			break;
		case 10:
			Var0 = 1627566189;
			Var0.f_1 = { 1347.6f, -1373.9f, 80.1f };
			Var0.f_5 = 0;
			Var0.f_6 = 1;
			Var0.f_7 = 0;
			break;
		case 14:
			Var0 = 1595886358;
			Var0.f_1 = { func_1389(27, 0, 2) };
			Var0.f_4 = 0f;
			Var0.f_5 = 1;
			Var0.f_6 = 1;
			Var0.f_7 = 0;
			break;
		default:
			break;
	}
	return Var0;
}

int func_1355()
{
	iVar0 = 0;
	while (iVar0 < iVar1455)
	{
		if (!Local_1457[iVar0]->f_1 == 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_1356(int iParam0, int iParam1, bool bParam2)
{
	if (is_entity_dead(&(Local_218[iParam0])))
	{
		return false;
	}
	Var0 = { func_1354(iParam1) };
	switch (Local_1340[iParam1]->f_1)
	{
		case 0:
			Local_1340[iParam1]->f_1 = 1;
		case 1:
			_request_scenario_type(Var0, 1, func_519(func_1294(iParam0)), 0);
			Local_1340[iParam1]->f_1 = 2;
		case 2:
			if (_has_scenario_type_loaded(Var0, false))
			{
				if (Var0.f_5)
				{
					Local_1340[iParam1]->f_1 = 3;
				}
				else
				{
					Local_1340[iParam1]->f_1 = 5;
				}
			}
			break;
		case 3:
			if (_0x6eead6af637da752(Var0.f_1, Var0, 0.5f, 0))
			{
				Local_1340[iParam1] = _find_closest_active_scenario_point_of_type(Var0.f_1, Var0, 0.5f, 0, false);
				if (_does_scenario_point_exist(&(Local_1340[iParam1])))
				{
					Local_1340[iParam1]->f_1 = 5;
				}
			}
			break;
		case 5:
			if (!bParam2)
			{
			}
			else
			{
				if (Var0.f_5)
				{
					_task_use_scenario_point(&(Local_218[iParam0]), &(Local_1340[iParam1]), 0, 0, Var0.f_7, Var0.f_6, Var0, false, -1f, false);
				}
				else
				{
					_task_start_scenario_in_place(&(Local_218[iParam0]), Var0, 0, Var0.f_7, 0, -1f, false);
				}
				Local_1340[iParam1]->f_1 = 6;
				Jump @339; //curOff = 329
				return true;
			}
			return false;
			default:
				break;
	}
}

struct<7> func_1357(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			Var0 = { func_178(8, 1) };
			Var0.f_6 = 47;
			break;
		case 1:
		case 2:
			Var0 = { func_178(8, 1) };
			Var0.f_6 = 36;
			break;
		case 3:
			Var0 = { -0.02f, 0.14f, -0.03f };
			Var0.f_6 = 29;
			break;
		case 4:
			Var0 = { func_178(8, 12) };
			Var0.f_6 = 27;
			break;
		case 5:
			Var0 = { func_178(8, 12) };
			Var0.f_6 = 28;
			break;
		case 6:
		case 7:
			Var0 = { func_178(1, 0) };
			Var0.f_6 = 30;
			break;
		case 8:
		case 9:
		case 10:
		case 11:
			Var0 = { func_178(1, 0) };
			Var0.f_6 = 31;
			break;
		case 12:
			Var0 = { 1329.54f, -1370.114f, 79.985f };
			Var0.f_3 = { 0f, 0f, -33.8f };
			Var0.f_6 = 46;
			break;
		case 13:
			Var0 = { 0.315f, -1.426f, 0.353f };
			Var0.f_3 = { 1f, 0f, -176.854f };
			Var0.f_6 = 25;
			break;
		case 14:
			Var0 = { -0.227f, -1.418f, 0.345f };
			Var0.f_3 = { 1f, 0f, -174.837f };
			Var0.f_6 = 25;
			break;
		case 15:
		case 16:
		case 17:
		case 18:
			Var0 = { 1346.5f, -1373.8f, 78.9f };
			Var0.f_3 = { 0f, 0f, 0f };
			Var0.f_6 = 32;
			break;
		case 19:
		case 20:
			Var0 = { -0.01f, 0.532f, 0.842f };
			Var0.f_3 = { 0f, 0f, -50f };
			Var0.f_6 = 36;
			break;
		case 21:
			Var0 = { 1341.07f, -1374.043f, 81f };
			Var0.f_3 = { 0f, 0f, 180f };
			Var0.f_6 = 41;
			break;
		case 22:
			Var0 = { 1341.07f, -1374.043f, 80.525f };
			Var0.f_3 = { 0f, 0f, 180f };
			Var0.f_6 = 41;
			break;
		case 23:
			Var0 = { 1340.964f, -1374.506f, 80.525f };
			Var0.f_3 = { 0f, 0f, 180f };
			Var0.f_6 = 41;
			break;
		case 24:
			Var0 = { 1340.927f, -1375.014f, 80.525f };
			Var0.f_3 = { 0f, 0f, 180f };
			Var0.f_6 = 41;
			break;
		case 25:
			Var0 = { 1340.821f, -1375.421f, 80.525f };
			Var0.f_3 = { 0f, 0f, 180f };
			Var0.f_6 = 41;
			break;
		case 26:
			Var0 = { 1340.758f, -1375.596f, 80.523f };
			Var0.f_3 = { 0f, 0f, 180f };
			Var0.f_6 = 42;
			break;
		case 27:
			Var0 = { 1348.4f, -1371.5f, 85.1f };
			Var0.f_3 = { 0f, 0f, 0f };
			Var0.f_6 = 40;
			break;
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
			Var0.f_6 = 36;
			break;
		case 34:
		case 35:
		case 36:
		case 37:
			Var0 = { 0f, 0f, 0f };
			iVar7 = get_random_int_in_range(0, 2);
			if (iVar7 == 0)
			{
				Var0.f_6 = 41;
			}
			else if (iVar7 == 1)
			{
				Var0.f_6 = 42;
			}
			break;
		case 38:
			Var0 = { func_988(7, 14) };
			Var0.f_6 = 26;
			break;
		case 39:
			Var0 = { func_988(7, 15) };
			Var0.f_6 = 26;
			break;
		case 40:
			Var0 = { func_988(7, 16) };
			Var0.f_6 = 26;
			break;
		case 41:
			Var0 = { func_988(7, 17) };
			Var0.f_6 = 26;
			break;
		case 42:
			Var0 = { func_988(7, 18) };
			Var0.f_6 = 26;
			break;
		case 43:
			Var0 = { func_988(7, 19) };
			Var0.f_6 = 26;
			break;
		case 44:
			Var0 = { func_988(7, 20) };
			Var0.f_6 = 26;
			break;
		case 45:
			Var0 = { func_988(7, 21) };
			Var0.f_6 = 26;
			break;
		case 46:
			Var0 = { func_988(7, 22) };
			Var0.f_6 = 26;
			break;
		case 47:
			Var0 = { func_988(7, 23) };
			Var0.f_6 = 26;
			break;
		case 48:
			Var0 = { func_988(7, 24) };
			Var0.f_6 = 26;
			break;
		case 49:
			Var0 = { 1345.478f, -1374.485f, 84.4418f };
			Var0.f_6 = 37;
			break;
		case 50:
			Var0 = { 1344.668f, -1379.077f, 84.4418f };
			Var0.f_6 = 37;
			break;
		case 52:
			Var0 = { 1339.834f, -1371.776f, 84.0962f };
			Var0.f_6 = 42;
			break;
		case 53:
			Var0 = { 1339.684f, -1372.266f, 84.0962f };
			Var0.f_6 = 42;
			break;
		case 54:
			Var0 = { 1339.581f, -1372.416f, 84.0962f };
			Var0.f_6 = 42;
			break;
		case 55:
			Var0 = { 1339.334f, -1371.768f, 84.0961f };
			Var0.f_6 = 36;
			break;
		case 56:
			Var0 = { 1336.193f, -1370.761f, 85.1028f };
			Var0.f_3 = { 0f, 0f, -98f };
			Var0.f_6 = 38;
			break;
		case 57:
			Var0 = { 1335.934f, -1372.245f, 85.1028f };
			Var0.f_3 = { 0f, 0f, -100f };
			Var0.f_6 = 38;
			break;
		case 58:
		case 59:
			Var0 = { -0.375f, 0.35f, -0.125f };
			Var0.f_3 = { 0f, 8.28f, 90f };
			Var0.f_6 = 45;
			break;
		case 60:
			Var0 = { 0f, -0.45f, 0.475f };
			Var0.f_3 = { 0f, 0f, 180f };
			Var0.f_6 = 44;
			break;
		case 61:
			Var0 = { 0.46f, -0.06f, 0.33f };
			Var0.f_3 = { 0f, 234f, 0f };
			Var0.f_6 = 45;
			break;
		case 63:
			Var0 = { 1054.193f, -1122.752f, 66.8892f };
			Var0.f_3 = { 0f, 0f, 0f };
			Var0.f_6 = 45;
			break;
		case 62:
			Var0 = { 1278.817f, -1187.021f, 78.3885f };
			Var0.f_3 = { 0f, 0f, 0f };
			Var0.f_6 = 45;
			break;
		case 64:
			Var0 = { func_178(8, 13) };
			Var0.f_6 = 43;
			break;
		case 65:
			Var0 = { func_178(8, 13) };
			Var0.f_6 = 48;
			break;
		default:
			break;
	}
	return Var0;
}

Vector3 func_1358(int iParam0, int iParam1)
{
	return func_1868(iParam0, iParam1);
}

Vector3 func_1359(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 31.7084f;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return -90f, -90f, 164.16f;
				case 1:
					return -0.9147f, -0.8188f, 24.9501f;
				case 2:
					return -0.4542f, -0.1799f, -85.6869f;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, -60f;
				case 1:
					return 0f, 0f, 0f;
			}
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_1360(int iParam0, int iParam1)
{
	return func_1359(iParam0, iParam1);
}

Vector3 func_1361(int iParam0)
{
	vVar0 = { func_247(iParam0) };
	return vVar0;
}

void func_1362(vector3 vParam0, float fParam3)
{
	clear_area(vParam0, fParam3, 3523083);
}

void func_1363(var uParam0, int iParam1)
{
	func_1869(&(uParam0->f_7375.f_860), iParam1);
}

void func_1364(var uParam0)
{
	iVar0 = 38;
	while (iVar0 <= 48)
	{
		func_1321(iVar0, 0);
		iVar0++;
	}
	func_899(&(uParam0->f_7375), &(Local_1692[38]), "p_bottleBeer01x", 0, 0, 0);
	func_899(&(uParam0->f_7375), &(Local_1692[39]), "p_bottleBeer01x^1", 0, 0, 0);
	func_899(&(uParam0->f_7375), &(Local_1692[40]), "p_bottleBeer01x^2", 0, 0, 0);
	func_899(&(uParam0->f_7375), &(Local_1692[41]), "p_bottleBeer01x^3", 0, 0, 0);
	func_899(&(uParam0->f_7375), &(Local_1692[42]), "p_bottleBeer01x^4", 0, 0, 0);
	func_899(&(uParam0->f_7375), &(Local_1692[43]), "p_bottleBeer01x^5", 0, 0, 0);
	func_899(&(uParam0->f_7375), &(Local_1692[44]), "p_bottleBeer01x^6", 0, 0, 0);
	func_899(&(uParam0->f_7375), &(Local_1692[45]), "p_bottleBeer01x^7", 0, 0, 0);
	func_899(&(uParam0->f_7375), &(Local_1692[46]), "p_bottleBeer01x^8", 0, 0, 0);
	func_899(&(uParam0->f_7375), &(Local_1692[47]), "p_bottleBeer01x^9", 0, 0, 0);
	func_899(&(uParam0->f_7375), &(Local_1692[48]), "p_bottleBeer01x^10", 0, 0, 0);
	if (_does_anim_scene_exist(uParam0->f_7375.f_804))
	{
		set_anim_scene_entity(uParam0->f_7375.f_804, "p_bottleBeer01x", &(Local_1692[38]), 0);
		set_anim_scene_entity(uParam0->f_7375.f_804, "p_bottleBeer01x^1", &(Local_1692[39]), 0);
		set_anim_scene_entity(uParam0->f_7375.f_804, "p_bottleBeer01x^2", &(Local_1692[40]), 0);
		set_anim_scene_entity(uParam0->f_7375.f_804, "p_bottleBeer01x^3", &(Local_1692[41]), 0);
		set_anim_scene_entity(uParam0->f_7375.f_804, "p_bottleBeer01x^4", &(Local_1692[42]), 0);
		set_anim_scene_entity(uParam0->f_7375.f_804, "p_bottleBeer01x^5", &(Local_1692[43]), 0);
		set_anim_scene_entity(uParam0->f_7375.f_804, "p_bottleBeer01x^6", &(Local_1692[44]), 0);
		set_anim_scene_entity(uParam0->f_7375.f_804, "p_bottleBeer01x^7", &(Local_1692[45]), 0);
		set_anim_scene_entity(uParam0->f_7375.f_804, "p_bottleBeer01x^8", &(Local_1692[46]), 0);
		set_anim_scene_entity(uParam0->f_7375.f_804, "p_bottleBeer01x^9", &(Local_1692[47]), 0);
		set_anim_scene_entity(uParam0->f_7375.f_804, "p_bottleBeer01x^10", &(Local_1692[48]), 0);
	}
}

void func_1365(int iParam0)
{
	if (&iLocal_2509[iParam0])
	{
		return;
	}
	iVar0 = 28;
	while (iVar0 <= 41)
	{
		if (func_1870(iVar0, iParam0))
		{
			set_entity_visible(&(Local_218[iVar0]), true);
		}
		else
		{
			set_entity_visible(&(Local_218[iVar0]), false);
		}
		iVar0++;
	}
	iLocal_2509[iParam0] = 1;
}

struct<4> func_1366(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_555(6, 0);
		case 1:
			return func_555(6, 1);
		case 2:
			return func_555(6, 2);
		case 3:
			return func_555(6, 3);
		case 4:
			return func_555(6, 4);
		case 5:
			return func_555(8, 12);
	}
	return func_555(6, 0);
}

void func_1367()
{
	iVar0 = 2;
	while (iVar0 <= 3)
	{
		set_entity_proofs(&(Local_218[iVar0]), 14, false);
		set_ped_can_ragdoll(&(Local_218[iVar0]), false);
		set_entity_invincible(&(Local_218[iVar0]), true);
		iVar0++;
	}
}

void func_1368()
{
	disable_control_action(0, 1934388793, false);
	disable_control_action(0, -491432029, false);
	disable_control_action(0, -209515122, false);
	disable_control_action(0, 1287709438, false);
	disable_control_action(0, -1404316431, false);
	disable_control_action(0, -1722177808, false);
	disable_control_action(0, -620139643, false);
	disable_control_action(0, -824104112, false);
	disable_control_action(0, 516589524, false);
	disable_control_action(0, 1390807691, false);
	disable_control_action(0, 1663574939, false);
	disable_control_action(0, -2131587435, false);
}

void func_1369()
{
	disable_control_action(0, -719620017, false);
	disable_control_action(0, -473983589, false);
}

void func_1370(var uParam0, bool bParam1)
{
	fVar0 = 999.9f;
	iVar1 = -1;
	iVar2 = 28;
	while (iVar2 <= 41)
	{
		if (!is_entity_visible(&(Local_218[iVar2])))
		{
		}
		else if (get_distance_between_coords(get_entity_coords(Global_35, true, false), get_entity_coords(&(Local_218[iVar2]), true, false), true) < fVar0)
		{
			fVar0 = get_distance_between_coords(get_entity_coords(Global_35, true, false), get_entity_coords(&(Local_218[iVar2]), true, false), true);
			iVar1 = iVar2;
		}
		iVar2++;
	}
	if (iVar1 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (iVar2073 == 0 || iVar2073 > 66)
		{
			iLocal_2077 = 62;
		}
		func_145(uParam0, &(Local_218[iVar1]), func_1871(iVar2073), 0);
		func_1276(iVar2073);
		iLocal_2077 = iVar2073 + 1;
	}
	else
	{
		if (iVar2074 == 0 || iVar2074 > 71)
		{
			iLocal_2078 = 67;
		}
		func_145(uParam0, &(Local_218[iVar1]), func_1871(iVar2074), 0);
		func_1276(iVar2074);
		iLocal_2078 = iVar2074 + 1;
	}
}

void func_1371()
{
	if (is_entity_dead(&(Local_218[6])))
	{
		func_942(6, 11);
		return;
	}
	func_1298(37);
	switch (Local_218[6]->f_2)
	{
		case 1:
			if (Local_2202[37]->f_1 == 8)
			{
				func_1332(37);
				func_942(6, 38);
			}
			break;
		case 38:
			if ((_does_anim_scene_exist(&(Local_2202[37])) && _0x005e6f28dd7ed58d(&(Local_2202[37]), "hosea")) || !_does_anim_scene_exist(&(Local_2202[37])))
			{
				_give_weapon_to_ped_2(&(Local_218[6]), &(iLocal_1390[7]), -1, true, false, 0, false, 0.5f, 1f, 752097756, true, 0f, false);
				set_ped_combat_attributes(&(Local_218[6]), 30, true);
				func_1822();
				func_1284(0, 56, 1090519040, -1056964608, -1, 67108881, 65536);
				task_follow_nav_mesh_to_coord(0, func_988(2, 5), 0.5f, 20000, 0.25f, 0, func_989(2, 5));
				func_1284(0, 57, 1090519040, -1056964608, -1, 2, 0);
				func_1823(&(Local_218[6]), 0);
				func_942(6, 39);
			}
			break;
		case 39:
			if (func_1872(&(Local_218[6]), 57) && func_1873(&(Local_218[6]), 57))
			{
				func_942(6, 40);
			}
			break;
		case 40:
			func_1822();
			func_1284(0, 56, 1090519040, -1056964608, -1, 67108881, 65536);
			task_follow_nav_mesh_to_coord(0, func_988(2, 6), 0.5f, 20000, 0.25f, 0, func_989(2, 6));
			func_1284(0, 57, 1090519040, -1056964608, -1, 2, 0);
			func_1823(&(Local_218[6]), 0);
			func_942(6, 41);
			break;
		case 41:
			if (func_1872(&(Local_218[6]), 57) && func_1873(&(Local_218[6]), 57))
			{
				func_942(6, 42);
			}
			break;
		case 42:
			func_1822();
			func_1284(0, 56, 1090519040, -1056964608, -1, 67108881, 65536);
			task_follow_nav_mesh_to_coord(0, func_988(2, 7), 0.5f, 20000, 0.25f, 0, func_989(2, 7));
			func_1284(0, 57, 1090519040, -1056964608, -1, 2, 0);
			func_1823(&(Local_218[6]), 0);
			func_942(6, 43);
			break;
		case 43:
			if (func_1872(&(Local_218[6]), 57) && func_1873(&(Local_218[6]), 57))
			{
				func_942(6, 44);
			}
			break;
		case 44:
			func_1822();
			func_1284(0, 56, 1090519040, -1056964608, -1, 67108881, 65536);
			task_follow_nav_mesh_to_coord(0, func_988(2, 8), 0.5f, 20000, 0.25f, 0, func_989(2, 8));
			func_1284(0, 57, 1090519040, -1056964608, -1, 2, 0);
			func_1823(&(Local_218[6]), 0);
			func_942(6, 45);
			break;
		case 45:
			if (func_1872(&(Local_218[6]), 57) && func_1873(&(Local_218[6]), 57))
			{
				func_942(6, 38);
			}
			break;
	}
}

void func_1372()
{
	iVar0 = 0;
	while (iVar0 < iVar2078)
	{
		switch (&Local_2080[iVar0])
		{
			case 0:
				if (iVar0 == 0)
				{
					Local_2080[iVar0]->f_4 = 34;
				}
				else if (iVar0 == 1)
				{
					Local_2080[iVar0]->f_4 = 35;
				}
				else if (iVar0 == 2)
				{
					Local_2080[iVar0]->f_4 = 36;
				}
				else if (iVar0 == 3)
				{
					Local_2080[iVar0]->f_4 = 37;
				}
				Local_2080[iVar0]->f_5 = get_random_float_in_range(5f, 20f);
				func_1874(&(Local_2080[iVar0]->f_1), get_random_float_in_range(0f, Local_2080[iVar0]->f_5), 0);
				Local_2080[iVar0] = 2;
				break;
			case 1:
				func_27(&(Local_2080[iVar0]->f_1), 0);
				Local_2080[iVar0]->f_5 = get_random_float_in_range(5f, 20f);
				Local_2080[iVar0] = 2;
				break;
			case 2:
				if (func_924(&(Local_2080[iVar0]->f_1)) >= Local_2080[iVar0]->f_5)
				{
					func_599(&(Local_2080[iVar0]->f_1));
					Var1 = { func_1875() };
					if (func_421(Var1))
					{
						Local_2080[iVar0] = 1;
					}
					else
					{
						if (does_entity_exist(&(Local_1692[Local_2080[iVar0]->f_4])))
						{
							delete_object(Local_1692[Local_2080[iVar0]->f_4]);
						}
						func_1321(Local_2080[iVar0]->f_4, 1);
						if (func_167(113))
						{
							Var1 = { Var1 + Vector(get_random_float_in_range(-0.1f, 0.1f), get_random_float_in_range(-0.1f, 0.1f), get_random_float_in_range(-0.1f, 0.1f)) };
							Var1.f_3 = { Var1.f_3 + Vector(get_random_float_in_range(-0.1f, 0.1f), get_random_float_in_range(-0.1f, 0.1f), get_random_float_in_range(-0.1f, 0.1f)) };
							Var1.f_6 = (Var1.f_6 + get_random_float_in_range(-1f, 1f));
						}
						set_entity_coords(&(Local_1692[Local_2080[iVar0]->f_4]), Var1, true, false, true, true);
						apply_force_to_entity(&(Local_1692[Local_2080[iVar0]->f_4]), 1, func_1876(Var1, Var1.f_3, Var1.f_6), 0f, 0f, 0f, 0, false, false, true, false, true);
						iLocal_2134[iVar0] = 0;
						fLocal_2129[iVar0] = 0f;
						Local_2080[iVar0] = 1;
					}
				}
				if (!&iLocal_2134[iVar0] && does_entity_exist(&(Local_1692[Local_2080[iVar0]->f_4])))
				{
					fVar8 = vmag2(get_entity_velocity(&(Local_1692[Local_2080[iVar0]->f_4]), -1));
					if ((&fLocal_2129[iVar0] - fVar8) >= 10f)
					{
						fVar9 = get_distance_between_coords(get_entity_coords(Global_35, true, false), get_entity_coords(&(Local_1692[Local_2080[iVar0]->f_4]), true, false), true);
						if (fVar9 > 5f)
						{
							_play_sound_from_position(func_1381(7), get_entity_coords(&(Local_1692[Local_2080[iVar0]->f_4]), true, false), func_1381(0), false, 0, false, 0);
						}
						else
						{
							_play_sound_from_position(func_1381(6), get_entity_coords(&(Local_1692[Local_2080[iVar0]->f_4]), true, false), func_1381(0), false, 0, false, 0);
						}
						start_particle_fx_non_looped_at_coord(func_1381(13), get_entity_coords(&(Local_1692[Local_2080[iVar0]->f_4]), true, false), get_entity_rotation(&(Local_1692[Local_2080[iVar0]->f_4]), 2), get_random_float_in_range(0.5f, 2.5f), false, false, false);
						_0x8462be2341a55b6f(&(Local_1692[Local_2080[iVar0]->f_4]));
					}
					fLocal_2129[iVar0] = fVar8;
				}
				break;
		}
		iVar0++;
	}
}

void func_1373(int iParam0)
{
	iLocal_2070 = iParam0;
}

void func_1374(int iParam0)
{
	if (iParam0 == iVar2076)
	{
		return;
	}
	switch (iParam0)
	{
		case 0:
			iVar0 = 17;
			iVar1 = 0;
			break;
		case 1:
			iVar0 = 18;
			iVar1 = 0;
			break;
		case 2:
			iVar0 = 18;
			iVar1 = 30;
			break;
		case 3:
			iVar0 = 19;
			iVar1 = 0;
			break;
		case 4:
			iVar0 = 19;
			iVar1 = 30;
			break;
		case 5:
			iVar0 = 20;
			iVar1 = 0;
			break;
		case 6:
			iVar0 = 20;
			iVar1 = 0;
			break;
		case 7:
			iVar0 = 21;
			iVar1 = 5;
			break;
		default:
			break;
	}
	set_clock_time(iVar0, iVar1, 0);
	iLocal_2079 = iParam0;
}

void func_1375(bool bParam0)
{
	fLocal_2073 = 0.5f;
	Var0.f_6 = -1082130432;
	Var0.f_9 = -1082130432;
	Var0.f_30 = "BothArmsDown";
	task_move_network_by_name_with_init_params(Global_35, func_526(73), &Var0, 0, 0, 0, 0);
	if (bParam0)
	{
		_0x2208438012482a1a(Global_35, true, false);
	}
	if (is_task_move_network_active(Global_35))
	{
		set_task_move_network_signal_float(Global_35, "rotation", fVar2070);
		set_task_move_network_signal_float(Global_35, "sloppiness", fVar2071);
	}
	Var34.f_6 = -1082130432;
	Var34.f_9 = -1082130432;
	Var34.f_30 = "BothArmsDown";
	func_1321(21, 1);
	task_move_network_by_name_with_init_params(&(Local_1692[21]), func_526(74), &Var34, 0, 0, 0, 0);
	force_entity_ai_and_animation_update(&(Local_1692[21]), true);
	fLocal_2066 = 0f;
}

void func_1376(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	func_1877(iParam0, 1056964608);
	func_1878(iParam0, 1);
	render_script_cams(true, false, 3000, true, false, 0);
}

void func_1377()
{
	switch (iVar2148)
	{
		case 1:
			return;
		case 2:
			vVar0 = { 1339.692f, -1373.833f, 81.5351f };
			vVar3 = { -26.6723f, 0.1976f, -142.5903f };
			break;
		case 3:
			vVar0 = { 1339.712f, -1373.849f, 81.6136f };
			vVar3 = { -29.0237f, 0.2613f, -138.0364f };
			break;
		case 4:
			vVar0 = { 1339.582f, -1373.271f, 81.7542f };
			vVar3 = { -27.8727f, 0.2613f, -144.9039f };
			break;
		case 5:
			vVar0 = { 1339.964f, -1373.122f, 81.5409f };
			vVar3 = { -18.9089f, 0.3027f, -163.1969f };
			break;
		case 6:
			vVar0 = { 1339.175f, -1373.374f, 82.0333f };
			vVar3 = { -28.4815f, 0.0577f, -135.4892f };
			break;
		case 7:
			vVar0 = { 1339.743f, -1373.583f, 81.4078f };
			vVar3 = { -18.533f, 0.0185f, -140.3277f };
			break;
		default:
			return;
	}
	set_cam_coord(&(iLocal_1950[0]), vVar0);
	set_cam_rot(&(iLocal_1950[0]), vVar3, 2);
}

void func_1378(bool bParam0)
{
	if (bParam0)
	{
		Var0 = { func_1357(22) };
		_set_entity_coords_and_heading(&(Local_1692[22]), Var0, Var0.f_3.f_2, true, false, true);
		freeze_entity_position(&(Local_1692[22]), true);
		Var0 = { func_1357(23) };
		_set_entity_coords_and_heading(&(Local_1692[23]), Var0, Var0.f_3.f_2, true, false, true);
		freeze_entity_position(&(Local_1692[23]), true);
		Var0 = { func_1357(24) };
		_set_entity_coords_and_heading(&(Local_1692[24]), Var0, Var0.f_3.f_2, true, false, true);
		freeze_entity_position(&(Local_1692[24]), true);
		Var0 = { func_1357(25) };
		_set_entity_coords_and_heading(&(Local_1692[25]), Var0, Var0.f_3.f_2, true, false, true);
		freeze_entity_position(&(Local_1692[25]), true);
		if (!does_entity_exist(&(Local_1692[21])))
		{
			func_1321(21, 1);
		}
		attach_entity_to_entity(&(Local_1692[21]), Global_35, get_ped_bone_index(Global_35, 37709), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, false, false);
		attach_entity_to_entity(&(Local_1692[26]), Global_35, get_ped_bone_index(Global_35, 7966), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, false, false);
	}
	else
	{
		func_520(21);
	}
}

bool func_1379()
{
	if (is_bit_set(get_random_int_in_range(0, 65536), 0))
	{
		return true;
	}
	return false;
}

bool func_1380(var uParam0)
{
	func_1365(iVar2558);
	_0x2804658eb7d8a50b(5, -1436669635);
	if (!is_task_move_network_active(Global_35))
	{
		return false;
	}
	else
	{
		set_task_move_network_signal_float(Global_35, "LeftArmRaise", fVar2556);
		set_task_move_network_signal_float(Global_35, "RightArmRaise", fVar2557);
		if (!is_task_move_network_ready_for_transition(Global_35))
		{
			return false;
		}
	}
	switch (iVar2068)
	{
		case 0:
			fLocal_2066 = 0f;
			fLocal_2073 = 0.1f;
			func_174(119);
			func_27(vLocal_1840[11], 1);
			iLocal_2071 = 1;
		case 1:
			if (!func_10(iVar2148))
			{
				iLocal_2151 = func_1344(func_1279(1), func_1343(3), 3, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, 1704213876, 0);
				func_1865(iVar2148, 14, 1, 1);
				func_1865(iVar2148, 10, 1, 1);
				func_1865(iVar2148, 11, 1, 1);
			}
			if (!func_10(iVar2149))
			{
				iLocal_2152 = func_1344(func_1279(2), func_1343(1), 3, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, 1704213876, 0);
				func_1865(iVar2149, 14, 1, 1);
				func_1865(iVar2149, 10, 1, 1);
				func_1865(iVar2149, 11, 1, 1);
			}
			if (func_924(vLocal_1840[11]) >= 5f)
			{
				bVar0 = true;
			}
			if (func_1879(iVar2148, 1) || bVar0)
			{
				fLocal_2559 = 1f;
			}
			else
			{
				fLocal_2559 = 0f;
			}
			if (func_1879(iVar2149, 1) || bVar0)
			{
				fLocal_2560 = 1f;
			}
			else
			{
				fLocal_2560 = 0f;
			}
			if (((has_anim_event_fired(Global_35, 620364724) && has_anim_event_fired(Global_35, -1904218375)) && fVar2556 == 1f) && fVar2557 == 1f)
			{
				set_task_move_network_signal_float(Global_35, "LeftArmRaise", fVar2556);
				set_task_move_network_signal_float(Global_35, "RightArmRaise", fVar2557);
				func_11(&iLocal_2152, 1, 1);
				func_11(&iLocal_2151, 1, 1);
				func_1880("Pour");
				func_244(vLocal_1840[11]);
				iLocal_2071 = 2;
			}
			break;
		case 2:
			if (!func_10(iVar2175))
			{
				iLocal_2178 = func_1344(func_1279(3), func_1343(4), 3, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, 1704213876, 0);
				func_1865(iVar2175, 14, 1, 1);
				func_1865(iVar2175, 10, 1, 1);
				func_1865(iVar2175, 11, 1, 1);
			}
			if (!func_10(iVar2149))
			{
				iLocal_2152 = func_1344(func_1279(2), func_1343(2), 3, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, 1704213876, 0);
				func_1865(iVar2149, 14, 1, 1);
				func_1865(iVar2149, 10, 1, 1);
				func_1865(iVar2149, 11, 1, 1);
			}
			fLocal_2072 = func_1881(1, get_control_normal(0, func_1343(2)));
			fLocal_2073 = func_1881(0, get_control_normal(0, func_1343(4)));
			fLocal_2073 = func_1313(fVar2070, 0.25f, 1f);
			fLocal_2066 = (fVar2063 + (get_frame_time() * (1f / 5f)));
			fLocal_2066 = func_1313(fVar2063, 0f, 1f);
			if (fVar2070 > 0.005f)
			{
				if (!does_particle_fx_looped_exist(iVar2064))
				{
					iLocal_2067 = start_particle_fx_looped_on_entity(func_1381(10), &(Local_1692[26]), vLocal_2141, vLocal_2144, 1f, false, false, false);
				}
				else
				{
					set_particle_fx_looped_evolution(iVar2064, "pour", (fVar2070 * 0.05f), false);
					set_particle_fx_looped_evolution(iVar2064, "height", fVar2069, false);
				}
				if (!does_particle_fx_looped_exist(iVar2065))
				{
					iLocal_2068 = start_particle_fx_looped_on_entity(func_1381(11), &(Local_1692[21]), 0f, 0f, func_1647(0.026f, 0.101f, fVar2063), vLocal_2147, 1f, false, false, false);
				}
				else
				{
					set_particle_fx_looped_evolution(iVar2065, "pour", fVar2063, false);
					set_particle_fx_looped_offsets(iVar2065, 0f, 0f, func_1647(0.026f, 0.101f, fVar2063), vLocal_2147);
					set_particle_fx_looped_scale(iVar2065, func_1647(0f, 1f, fVar2063));
				}
				if (!func_167(119))
				{
					_play_sound_from_entity(func_1381(1), &(Local_1692[26]), func_1381(0), false, 0, 0);
					_play_sound_from_entity(func_1381(3), &(Local_1692[21]), func_1381(0), false, 0, 0);
					func_413(119);
				}
				else
				{
					_0x9821b68cd3e05f2b(func_1381(2), fVar2070, func_1381(1), func_1381(0));
					_0x9821b68cd3e05f2b(func_1381(4), fVar2063, func_1381(1), func_1381(0));
					_0x9821b68cd3e05f2b(func_1381(4), fVar2063, func_1381(3), func_1381(0));
					_0x9821b68cd3e05f2b(func_1381(2), fVar2070, func_1381(3), func_1381(0));
				}
			}
			else
			{
				if (does_particle_fx_looped_exist(iVar2064))
				{
					remove_particle_fx(iVar2064, false);
				}
				if (does_particle_fx_looped_exist(iVar2065))
				{
					remove_particle_fx(iVar2065, false);
				}
				if (func_167(119))
				{
					_0x0f2a2175734926d8(func_1381(1), func_1381(0));
					_0x0f2a2175734926d8(func_1381(3), func_1381(0));
					func_174(119);
				}
			}
			if (func_924(vLocal_1840[11]) >= 2f)
			{
				if (!func_10(iVar2176))
				{
					set_pad_shake(0, 128, 128);
					iLocal_2179 = func_1344(func_1279(4), func_1343(5), 0, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, 1704213876, 0);
					func_1865(iVar2176, 14, 1, 1);
					func_1865(iVar2176, 10, 1, 1);
					func_1865(iVar2176, 11, 1, 1);
				}
			}
			if ((func_10(iVar2176) && func_1882(iVar2176, 1)) || func_924(vLocal_1840[11]) >= 5f)
			{
				fLocal_2559 = 0f;
				fLocal_2560 = 0f;
				set_task_move_network_signal_float(Global_35, "LeftArmRaise", fVar2556);
				set_task_move_network_signal_float(Global_35, "RightArmRaise", fVar2557);
				if (func_924(vLocal_1840[11]) >= 5f)
				{
					if (!Local_2202[37]->f_1 == 10)
					{
						func_413(101);
						func_1884(&(uParam0->f_5310), func_1883(58), 0, -1, 0, 0);
					}
				}
				else
				{
					func_174(101);
				}
				func_11(&iLocal_2152, 1, 1);
				func_11(&iLocal_2178, 1, 1);
				func_11(&iLocal_2179, 1, 1);
				func_174(115);
				func_599(vLocal_1840[11]);
				iLocal_2071 = 3;
				return true;
			}
			break;
		case 3:
			return true;
	}
	return false;
}

char* func_1381(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "BRT1_Sounds";
		case 1:
			return "Pour_Whisky";
		case 2:
			return "WhiskyPourLevel";
		case 3:
			return "Glass_Fill";
		case 4:
			return "GlassLiquidLevel";
		case 5:
			return "Serve_Glass_Slam";
		case 6:
			return "Glass_Smash_Close";
		case 7:
			return "Glass_Smash_Distant";
		case 8:
			return "Window_Smash";
		case 9:
			return "Chair_Impact";
		case 10:
			return "scr_brt1_bar_mg_liq_pour";
		case 11:
			return "scr_brt1_bar_mg_liq_pour_splash";
		case 12:
			return "scr_brt1_bar_mg_liq_splash";
		case 13:
			return "scr_brt1_bar_mg_glass_smash";
		case 14:
			return "ent_amb_cig_smoke_linger";
	}
	return "";
}

void func_1382(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			if (!Local_2202[21]->f_1 == 14)
			{
				func_528(21, 1);
			}
			if (!Local_2202[30]->f_1 == 14)
			{
				func_528(30, 1);
			}
			break;
		case 6:
			if (!Local_2202[22]->f_1 == 14)
			{
				func_528(22, 1);
			}
			if (!Local_2202[31]->f_1 == 14)
			{
				func_528(31, 1);
			}
			break;
		case 8:
			if (!Local_2202[23]->f_1 == 14)
			{
				func_528(23, 1);
			}
			if (!Local_2202[32]->f_1 == 14)
			{
				func_528(32, 1);
			}
			break;
		case 10:
			if (!Local_2202[33]->f_1 == 14)
			{
				func_528(33, 1);
			}
			break;
		case 13:
			if (!Local_2202[24]->f_1 == 14)
			{
				func_528(24, 1);
			}
			if (!Local_2202[25]->f_1 == 14)
			{
				func_528(25, 1);
			}
			if (!Local_2202[34]->f_1 == 14)
			{
				func_528(34, 1);
			}
			break;
		case 15:
			if (!Local_2202[27]->f_1 == 14)
			{
				func_528(27, 1);
			}
			if (!Local_2202[35]->f_1 == 14)
			{
				func_528(35, 1);
			}
			break;
		case 17:
			if (!Local_2202[28]->f_1 == 14)
			{
				func_528(28, 1);
			}
			if (!Local_2202[36]->f_1 == 14)
			{
				func_528(36, 1);
			}
			break;
	}
}

Vector3 func_1383(int iParam0)
{
	vVar0 = { func_1357(iParam0) };
	return vVar0;
}

int func_1384(int iParam0, int iParam1)
{
	return (iParam1 - iParam0) + 1;
}

bool func_1385(bool bParam0)
{
	iVar0 = 42;
	while (iVar0 <= 57)
	{
		if (is_entity_dead(&(Local_218[iVar0])))
		{
			return false;
		}
		if (!bParam0)
		{
			if (func_167(0))
			{
				return false;
			}
		}
		switch (Local_218[iVar0]->f_2)
		{
			case 1:
				remove_all_ped_weapons(&(Local_218[iVar0]), true, true);
				func_942(iVar0, 2);
			case 2:
				switch (iVar0)
				{
					case 43:
					case 45:
					case 53:
					case 54:
						func_1393(&(Local_218[iVar0]), &(iLocal_1390[3]), -1, 3, 0, 1056964608, 1065353216, 0);
						func_413(0);
						func_942(iVar0, 14);
						break;
					case 46:
					case 47:
					case 48:
					case 56:
						func_1393(&(Local_218[iVar0]), &(iLocal_1390[8]), -1, 3, 0, 1056964608, 1065353216, 0);
						func_413(0);
						func_942(iVar0, 3);
						break;
					case 49:
					case 50:
						func_1393(&(Local_218[iVar0]), &(iLocal_1390[10]), -1, 3, 0, 1056964608, 1065353216, 0);
						func_413(0);
						func_942(iVar0, 14);
						break;
					default:
						func_1393(&(Local_218[iVar0]), &(iLocal_1390[4]), -1, 3, 0, 1056964608, 1065353216, 0);
						func_413(0);
						func_942(iVar0, 14);
						break;
				}
				break;
			case 3:
				func_1393(&(Local_218[iVar0]), &(iLocal_1390[9]), -1, 3, 1, 1056964608, 1065353216, 0);
				func_413(0);
				func_942(iVar0, 14);
				break;
		}
		iVar0++;
	}
	if (!bParam0 && func_167(0))
	{
		return false;
	}
	if (func_1885(42, 57, 14) == func_1384(42, 57))
	{
		return true;
	}
	return false;
}

bool func_1386(var uParam0)
{
	switch (&iLocal_2497[3])
	{
		case 0:
			iLocal_2497[3] = 1;
		case 1:
			iLocal_2497[3] = 2;
		case 2:
			iLocal_2497[3] = 3;
		case 3:
			func_1843(&(uParam0->f_7375));
			iLocal_2504 = 0;
			iLocal_2497[3] = 4;
		case 4:
			switch (iVar2501)
			{
				case 0:
					func_899(&(uParam0->f_7375), Global_35, "ARTHUR", 0, 0, 0);
					break;
				case 1:
					func_899(&(uParam0->f_7375), &(Local_218[6]), "HoseaMatthews", 0, 0, 0);
					break;
				case 2:
					func_899(&(uParam0->f_7375), &(Local_218[42]), "A_M_M_RhdTownFolk_01", 0, 0, 0);
					break;
				case 3:
					func_899(&(uParam0->f_7375), &(Local_218[43]), "A_M_M_RhdTownFolk_01^1", 0, 0, 0);
					break;
				case 4:
					func_899(&(uParam0->f_7375), &(Local_218[44]), "A_M_M_RhdTownFolk_01^2", 0, 0, 0);
					break;
				case 6:
					func_899(&(uParam0->f_7375), &(Local_218[29]), "A_M_M_RhdTownFolk_01^4", 0, 0, 0);
					break;
				case 7:
					func_899(&(uParam0->f_7375), &(Local_218[30]), "A_M_M_RhdTownFolk_01^5", 0, 0, 0);
					break;
				case 8:
					func_899(&(uParam0->f_7375), &(Local_218[31]), "A_M_M_RhdTownFolk_01^6", 0, 0, 0);
					break;
				case 9:
					func_899(&(uParam0->f_7375), &(Local_218[32]), "A_M_M_RhdTownFolk_01^7", 0, 0, 0);
					break;
				case 10:
					func_899(&(uParam0->f_7375), &(Local_218[33]), "A_M_M_RhdTownFolk_01^8", 0, 0, 0);
					break;
				case 11:
					func_899(&(uParam0->f_7375), &(Local_218[34]), "A_M_M_RhdTownFolk_01^9", 0, 0, 0);
					break;
				case 12:
					func_899(&(uParam0->f_7375), &(Local_218[37]), "A_M_M_RhdTownFolk_01^10", 0, 0, 0);
					break;
				case 13:
					func_899(&(uParam0->f_7375), &(Local_218[36]), "A_M_M_RhdTownFolk_01^11", 0, 0, 0);
					break;
				case 14:
					func_899(&(uParam0->f_7375), &(Local_218[35]), "A_M_M_RhdTownFolk_01^12", 0, 0, 0);
					break;
				case 15:
					func_899(&(uParam0->f_7375), &(Local_218[38]), "A_M_M_RhdTownFolk_01^13", 0, 0, 0);
					break;
				case 16:
					func_899(&(uParam0->f_7375), &(Local_218[39]), "A_M_M_RhdTownFolk_01^14", 0, 0, 0);
					break;
				case 17:
					func_899(&(uParam0->f_7375), &(Local_218[40]), "A_M_M_RhdTownFolk_01^15", 0, 0, 0);
					break;
				case 18:
					func_899(&(uParam0->f_7375), &(Local_218[41]), "U_M_M_RhdFiddlePlayer_01", 0, 0, 0);
					break;
				case 19:
					func_899(&(uParam0->f_7375), &(Local_218[27]), "U_M_M_RhdDoctor_01", 0, 0, 0);
					break;
				case 20:
					func_899(&(uParam0->f_7375), &(Local_1692[25]), "p_beermugglass01x", 0, 0, 0);
					break;
				case 21:
					func_899(&(uParam0->f_7375), &(Local_1692[20]), "p_jug01x", 0, 0, 0);
					break;
				case 22:
					func_899(&(uParam0->f_7375), &(Local_1692[26]), "p_moonshinebtl01x", 0, 0, 0);
					break;
				case 23:
					func_899(&(uParam0->f_7375), &(Local_1692[22]), "p_cs_shotGlass01x^6", 0, 0, 0);
					break;
				case 24:
					func_899(&(uParam0->f_7375), &(Local_1692[23]), "p_cs_shotglass01x^1", 0, 0, 0);
					break;
				case 25:
					func_899(&(uParam0->f_7375), &(Local_1692[24]), "p_cs_shotglass01x^2", 0, 0, 0);
					break;
			}
			if (iVar2501 >= 25)
			{
				iLocal_2504 = 0;
				iLocal_2497[3] = 7;
			}
			else
			{
				iLocal_2504 = iVar2501 + 1;
			}
			break;
		case 7:
			return true;
	}
	return false;
}

int func_1387(int iParam0)
{
	iVar0 = 0;
	if (is_entity_dead(&(Local_218[iParam0])))
	{
		return iVar0;
	}
	iVar0 = _0x9f67929d98e7c6e8(&(Local_218[iParam0]), -1101297303, 0, 1);
	if (iVar0 == 0)
	{
		iVar0 = _0x9f67929d98e7c6e8(&(Local_218[iParam0]), 416676503, 0, 1);
	}
	if (iVar0 == 0)
	{
		if (has_ped_got_weapon(&(Local_218[iParam0]), 392538360, 0, true))
		{
			iVar0 = 392538360;
		}
	}
	return iVar0;
}

struct<4> func_1388(int iParam0, int iParam1)
{
	return func_1886(iParam0, iParam1);
}

Vector3 func_1389(int iParam0, int iParam1, int iParam2)
{
	vVar0 = { func_931(iParam0, iParam1, iParam2) };
	return vVar0;
}

float func_1390(vector3 vParam0, vector3 vParam3)
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

void func_1391(var uParam0, int iParam1)
{
	func_796(&(uParam0->f_7375), iParam1);
}

int func_1392(int iParam0, int iParam1, int iParam2)
{
	if ((func_1887(iParam0, 16777216) && func_1887(iParam0, 33554432)) && func_1887(iParam0, 268435456))
	{
		return 379542007;
	}
	iVar0 = _0xf8204ef17410bf43(416676503, iParam1, iParam2, 0);
	iVar1 = _0xf8204ef17410bf43(-1101297303, iParam1, iParam2, 0);
	iVar2 = 392538360;
	iVar3 = 0;
	if (!func_1887(iParam0, 33554432))
	{
		iVar3 = iVar1;
	}
	if (!func_1887(iParam0, 16777216))
	{
		if (!func_738(iVar3) || _0xf2f585411e748b9c(iVar0, 0) > _0xf2f585411e748b9c(iVar3, 0))
		{
			iVar3 = iVar0;
		}
	}
	if (!func_1887(iParam0, 268435456) && func_122(iVar2))
	{
		if (!func_738(iVar3) || _0xf2f585411e748b9c(iVar2, 0) > _0xf2f585411e748b9c(iVar3, 0))
		{
			iVar3 = iVar2;
		}
	}
	if (!func_738(iVar3))
	{
		return 379542007;
	}
	return iVar3;
}

int func_1393(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	bVar0 = func_1888(iParam3, 1);
	bVar1 = func_1888(iParam3, 2);
	bVar2 = !func_1888(iParam3, 4);
	bVar3 = func_1888(iParam3, 8);
	bVar4 = !func_1888(iParam3, 16);
	bVar5 = func_1888(iParam3, 32);
	bVar6 = func_1888(iParam3, 64);
	return func_1889(iParam0, iParam1, bVar0, bVar1, iParam4, bVar2, bVar3, iParam5, iParam6, iParam2, bVar4, bVar5, bParam7, bVar6);
}

void func_1394(int iParam0)
{
	if (_0xc276fe69dda22bad(&(iLocal_1418[iParam0])))
	{
		return;
	}
	Var0 = { func_1563(iParam0) };
	iLocal_1418[iParam0] = add_cover_point(Var0, Var0.f_3, Var0.f_4, Var0.f_5, Var0.f_6, Var0.f_7);
}

bool func_1395(int iParam0)
{
	if (func_20() != -1)
	{
		return false;
	}
	if (!func_295(iParam0))
	{
		return false;
	}
	return func_349((*Global_1347702)[iParam0]->f_15, 1);
}

void func_1396(int iParam0, int iParam1, bool bParam2)
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

void func_1397()
{
	vVar0 = { get_entity_coords(Global_35, true, false) };
	if (vVar0.z < 83.3f || func_167(156))
	{
		return;
	}
	iVar4 = -1;
	iVar3 = 0;
	while (iVar3 <= 6)
	{
		if (iVar3 == 0)
		{
			iVar4 = 42;
		}
		else if (iVar3 == 1)
		{
			iVar4 = 43;
		}
		else if (iVar3 == 2)
		{
			iVar4 = 44;
		}
		else if (iVar3 == 3)
		{
			iVar4 = 47;
		}
		else if (iVar3 == 4)
		{
			iVar4 = 48;
		}
		else if (iVar3 == 5)
		{
			iVar4 = 49;
		}
		else if (iVar3 == 6)
		{
			iVar4 = 50;
		}
		else
		{
			return;
		}
		if ((func_1842(iVar4, 32) || Local_218[iVar4]->f_2 == 11) || iVar4 == -1)
		{
		}
		else if ((!Local_218[iVar4]->f_2 == 5 && !Local_218[iVar4]->f_2 == 7) && !Local_218[iVar4]->f_2 == 8)
		{
		}
		else
		{
			if (iVar4 == 49 || iVar4 == 50)
			{
				func_599(&(Local_218[iVar4]->f_5));
			}
			func_942(iVar4, 29);
			func_465(iVar4, 32);
			func_413(156);
		}
		else
		{
			iVar3++;
		}
	}
}

void func_1398(var uParam0, char* sParam1, char* sParam2, bool bParam3, bool bParam4)
{
	if (bParam4)
	{
		func_457(uParam0, 2);
	}
	else
	{
		func_457(uParam0, 1);
	}
	StringCopy(&cVar0, sParam1, 64);
	func_1598(uParam0, cVar0);
	func_160(uParam0, 2);
	if (((!_0x139efb0a71dd9011() && !func_29()) && !func_6(uParam0, 80)) && bParam3)
	{
		func_30(uParam0);
	}
	func_27(&(uParam0->f_13118), 0);
}

void func_1399()
{
	Var0.f_8 = -1082130432;
	Var0 = { 1354.4f, -1378.2f, 84.8f };
	Var0.f_14 = 1;
	Var0.f_13 = 1;
	Var0.f_15 = 1;
	Var0.f_18 = 1;
	Var0.f_6 = 379542007;
	switch (iVar2184)
	{
		case 0:
			Var0.f_3 = { 1352f, -1381.4f, 84.5f };
			uLocal_2186 = iVar2184 + 1;
			break;
		case 1:
			if (!func_924(vLocal_1840[28]) >= 0.1f)
			{
				return;
			}
			Var0.f_3 = { 1352f, -1382f, 1381.4f };
			uLocal_2186 = iVar2184 + 1;
			break;
		case 2:
			if (!func_924(vLocal_1840[28]) >= 0.2f)
			{
				return;
			}
			Var0.f_3 = { 1352f, -1381.1f, 84.9f };
			uLocal_2186 = iVar2184 + 1;
			break;
		case 3:
			if (!func_924(vLocal_1840[28]) >= 0.3f)
			{
				return;
			}
			Var0.f_3 = { 1352.2f, -1379.9f, 85.4f };
			uLocal_2186 = iVar2184 + 1;
			break;
		case 4:
			if (!func_924(vLocal_1840[28]) >= 0.4f)
			{
				return;
			}
			Var0.f_3 = { 1352.2f, -1380f, 84.9f };
			uLocal_2186 = iVar2184 + 1;
			break;
		case 5:
			if (!func_924(vLocal_1840[28]) >= 0.5f)
			{
				return;
			}
			Var0.f_3 = { 1352.2f, -1380f, 84.5f };
			uLocal_2186 = iVar2184 + 1;
			break;
		case 6:
			if (!func_924(vLocal_1840[28]) >= 0.8f)
			{
				return;
			}
			Var0.f_3 = { 1351.5f, -1377.4f, 84f };
			uLocal_2186 = iVar2184 + 1;
			break;
		case 7:
			if (!func_924(vLocal_1840[28]) >= 0.9f)
			{
				return;
			}
			Var0.f_3 = { 1351.6f, -1377.2f, 84.5f };
			uLocal_2186 = iVar2184 + 1;
			break;
		case 8:
			if (!func_924(vLocal_1840[28]) >= 1.1f)
			{
				return;
			}
			Var0.f_3 = { 1351.8f, -1376.2f, 85f };
			uLocal_2186 = iVar2184 + 1;
			func_599(vLocal_1840[28]);
			break;
	}
	_fire_single_bullet_ignore_entity_new(&Var0);
}

bool func_1400(var uParam0, float fParam1)
{
	if ((((((!is_player_dead(player_id()) && is_player_playing(player_id())) && !is_player_free_aiming(player_id())) && !is_player_targetting_anything(player_id())) && !is_ped_aiming_from_cover(Global_35)) && !is_ped_shooting(Global_35)) && !is_ped_reloading(Global_35))
	{
		if (!func_26(uParam0))
		{
			func_244(uParam0);
		}
		else if (func_1890(uParam0) >= fParam1)
		{
			return true;
		}
		else if (((fParam1 > 15f && func_1891(Global_35)) && is_ped_human(get_ped_index_from_entity_index(func_1892(Global_35)))) && func_1890(uParam0) < (fParam1 - 15f))
		{
			func_551(uParam0, (fParam1 - 15f));
		}
	}
	else if (func_26(uParam0))
	{
		func_599(uParam0);
	}
	return false;
}

void func_1401()
{
	Var0.f_8 = -1082130432;
	Var0.f_13 = 1;
	Var0.f_15 = 1;
	Var0.f_18 = 1;
	Var0.f_12 = 1;
	Var0 = { 1336.169f, -1370.682f, 84.673f };
	Var0.f_3 = { get_ped_bone_coords(&(Local_218[6]), 21030, 0f, 0f, 0f) };
	Var0.f_6 = &iLocal_1390[5];
	_fire_single_bullet_ignore_entity_new(&Var0);
	_set_entity_health(&(Local_218[6]), 0, 0);
}

void func_1402(var uParam0)
{
	uVar1 = &Local_2202[38];
	iVar0 = 28;
	while (iVar0 <= 41)
	{
		if (is_entity_dead(&(Local_218[iVar0])))
		{
		}
		else
		{
			switch (Local_218[iVar0]->f_2)
			{
				case 1:
					if (((((((((((((iVar0 == 29 && (_0x005e6f28dd7ed58d(uVar1, "A_M_M_RhdTownfolk_01^4") || _0xb89fcff19dafff28(uVar1, "A_M_M_RhdTownfolk_01^4"))) || (iVar0 == 30 && (_0x005e6f28dd7ed58d(uVar1, "A_M_M_RhdTownfolk_01^5") || _0xb89fcff19dafff28(uVar1, "A_M_M_RhdTownfolk_01^5")))) || (iVar0 == 31 && (_0x005e6f28dd7ed58d(uVar1, "A_M_M_RhdTownfolk_01^6") || _0xb89fcff19dafff28(uVar1, "A_M_M_RhdTownfolk_01^6")))) || (iVar0 == 32 && (_0x005e6f28dd7ed58d(uVar1, "A_M_M_RhdTownfolk_01^7") || _0xb89fcff19dafff28(uVar1, "A_M_M_RhdTownfolk_01^7")))) || (iVar0 == 33 && (_0x005e6f28dd7ed58d(uVar1, "A_M_M_RhdTownfolk_01^8") || _0xb89fcff19dafff28(uVar1, "A_M_M_RhdTownfolk_01^8")))) || (iVar0 == 34 && (_0x005e6f28dd7ed58d(uVar1, "A_M_M_RhdTownfolk_01^9") || _0xb89fcff19dafff28(uVar1, "A_M_M_RhdTownfolk_01^9")))) || (iVar0 == 35 && (_0x005e6f28dd7ed58d(uVar1, "A_M_M_RhdTownfolk_01^12") || _0xb89fcff19dafff28(uVar1, "A_M_M_RhdTownfolk_01^12")))) || (iVar0 == 36 && (_0x005e6f28dd7ed58d(uVar1, "A_M_M_RhdTownfolk_01^11") || _0xb89fcff19dafff28(uVar1, "A_M_M_RhdTownfolk_01^11")))) || (iVar0 == 37 && (_0x005e6f28dd7ed58d(uVar1, "A_M_M_RhdTownfolk_01^10") || _0xb89fcff19dafff28(uVar1, "A_M_M_RhdTownfolk_01^10")))) || (iVar0 == 38 && (_0x005e6f28dd7ed58d(uVar1, "A_M_M_RhdTownfolk_01^13") || _0xb89fcff19dafff28(uVar1, "A_M_M_RhdTownfolk_01^13")))) || (iVar0 == 39 && (_0x005e6f28dd7ed58d(uVar1, "A_M_M_RhdTownfolk_01^14") || _0xb89fcff19dafff28(uVar1, "A_M_M_RhdTownfolk_01^14")))) || (iVar0 == 40 && (_0x005e6f28dd7ed58d(uVar1, "A_M_M_RhdTownfolk_01^15") || _0xb89fcff19dafff28(uVar1, "A_M_M_RhdTownfolk_01^15")))) || ((iVar0 == 41 && _0x005e6f28dd7ed58d(uVar1, "U_M_M_RhdFiddlerPlayer_01")) || _0xb89fcff19dafff28(uVar1, "U_M_M_RhdFiddlerPlayer_01")))
					{
						func_27(&(Local_218[iVar0]->f_5), 1);
						if (iVar0 == 41)
						{
							func_1822();
							task_follow_nav_mesh_to_coord(0, 1339.7f, -1379.9f, 79.9f, 2f, 20000, 0.25f, 0, 40000f);
							task_cower(0, -1, Global_35, 0);
							func_1823(&(Local_218[iVar0]), 0);
						}
						else
						{
							task_cower(&(Local_218[iVar0]), -1, Global_35, 0);
						}
						func_942(iVar0, 15);
					}
					break;
				case 15:
					if (!func_1275(90, (30 + iVar0)))
					{
					}
					else if (((iVar0 == 41 || iVar0 == 37) || iVar0 == 36) || iVar0 == 35)
					{
					}
					else
					{
						if (is_sphere_visible(get_entity_coords(&(Local_218[iVar0]), true, false), 1f))
						{
							if (!func_552(&(Local_218[iVar0]->f_5)))
							{
								func_1893(&(Local_218[iVar0]->f_5));
							}
						}
						else if (func_552(&(Local_218[iVar0]->f_5)))
						{
							func_1894(&(Local_218[iVar0]->f_5));
							func_244(&(Local_218[iVar0]->f_5));
						}
						else if (func_924(&(Local_218[iVar0]->f_5)) >= 3f)
						{
							func_599(&(Local_218[iVar0]->f_5));
							func_942(iVar0, 27);
						}
						Jump @931; //curOff = 916
						func_483(uParam0, iVar0, 0);
					}
					iVar0++;
					default:
						break;
			}
		}
	}
}

void func_1403()
{
	if (!iVar1835 == 0)
	{
		return;
	}
	if (!func_167(138))
	{
		if (Local_218[47]->f_2 == 11)
		{
			if (func_167(125))
			{
				if (Local_218[6]->f_2 == 53)
				{
					func_1895(87);
				}
			}
			else
			{
				func_1895(82);
			}
			if (func_26(vLocal_1840[22]))
			{
				func_244(vLocal_1840[22]);
			}
			func_413(138);
		}
	}
	if (!func_167(139))
	{
		if (Local_218[45]->f_2 == 11 && Local_218[46]->f_2 == 11)
		{
			if (func_167(125))
			{
				if (Local_218[6]->f_2 == 53)
				{
					func_1895(87);
				}
			}
			else
			{
				func_1895(82);
			}
			if (func_26(vLocal_1840[22]))
			{
				func_244(vLocal_1840[22]);
			}
			func_413(139);
		}
	}
	if (!func_167(140))
	{
		if (Local_218[48]->f_2 == 11)
		{
			if (func_167(125))
			{
				if (Local_218[6]->f_2 == 53)
				{
					func_1895(87);
				}
			}
			else
			{
				func_1895(82);
			}
			if (func_26(vLocal_1840[22]))
			{
				func_244(vLocal_1840[22]);
			}
			func_413(140);
		}
	}
}

void func_1404(var uParam0)
{
	if (iVar2136 == 0)
	{
		return;
	}
	if (!func_26(vLocal_1840[18]))
	{
		func_27(vLocal_1840[18], 0);
		fLocal_2174 = (fVar2171 * 0.25f);
	}
	if (func_924(vLocal_1840[18]) >= fVar2171)
	{
		if (!iVar1834 == 0)
		{
			return;
		}
		if (func_1319(1) || func_1320(1))
		{
			return;
		}
		iVar1 = 0;
		if (!is_entity_dead(&(Local_218[42])) && !func_1842(42, 2))
		{
			iVar3 = 42;
		}
		else
		{
			iVar2 = 42;
			while (iVar2 <= 54)
			{
				if (is_entity_dead(&(Local_218[iVar2])))
				{
				}
				else if (iVar2 == 42)
				{
				}
				else if (((!Local_218[iVar2]->f_2 == 4 && !Local_218[iVar2]->f_2 == 5) && !Local_218[iVar2]->f_2 == 6) && !Local_218[iVar2]->f_2 == 7)
				{
				}
				else if (func_1842(iVar2, 2))
				{
				}
				else
				{
					iVar4[iVar17] = iVar2;
					iVar17++;
				}
				iVar2++;
			}
			iVar18 = get_random_int_in_range(0, iVar17);
			iVar3 = &iVar4[iVar18];
		}
		if (!iVar3 == 0)
		{
			iVar2 = iVar3;
			func_465(iVar2, 2);
			switch (iVar2)
			{
				case 42:
					iVar1 = 75;
					cVar0 = "EXC_OPED3";
					break;
				case 43:
				case 46:
					iVar1 = 74;
					cVar0 = "EXC_OPED2";
					break;
				case 44:
				case 47:
					iVar1 = 73;
					cVar0 = "EXC_OPED1";
					break;
				case 45:
				case 48:
					iVar1 = 76;
					cVar0 = "EXC_YPED1";
					break;
				case 49:
				case 51:
					iVar1 = 77;
					cVar0 = "EXC_YPED2";
					break;
					break;
				case 50:
				case 53:
					iVar1 = 78;
					cVar0 = "EXC_YPED3";
					break;
				case 54:
					iVar1 = 73;
					cVar0 = "EXC_OPED1";
					break;
				default:
					break;
			}
			func_145(uParam0, &(Local_218[iVar2]), cVar0, 0);
			func_1276(iVar1);
		}
		fLocal_2174 = get_random_float_in_range(10f, 20f);
		func_244(vLocal_1840[18]);
	}
}

void func_1405()
{
	if (!func_26(vLocal_1840[21]))
	{
		func_1874(vLocal_1840[21], 5f, 0);
	}
	if (!iVar1835 == 0)
	{
		return;
	}
	if (func_924(vLocal_1840[21]) >= 5f)
	{
		if (!func_167(147))
		{
			if (func_1896(-902483455, 8))
			{
				bVar0 = true;
				func_413(147);
			}
		}
		if (!func_167(148))
		{
			if (func_1896(-566797819, 8))
			{
				bVar0 = true;
				func_413(148);
			}
		}
		if (!func_167(149))
		{
			if (func_1896(-1247339802, 8))
			{
				bVar0 = true;
				func_413(149);
			}
		}
		if (bVar0)
		{
			func_1276(83);
			func_244(vLocal_1840[21]);
		}
	}
	if (Local_218[6]->f_2 == 53)
	{
		if (!func_26(vLocal_1840[22]))
		{
			func_1874(vLocal_1840[22], 6f, 0);
		}
		if (func_924(vLocal_1840[22]) >= 6f && iVar1835 == 0)
		{
			if (!func_167(125))
			{
				func_1895(82);
			}
			else
			{
				func_1895(87);
			}
			func_244(vLocal_1840[22]);
		}
	}
}

void func_1406(var uParam0)
{
	Var16.f_8 = -1082130432;
	iVar11 = 42;
	while (iVar11 <= 57)
	{
		if (Local_218[iVar11]->f_2 == 11)
		{
		}
		else if (is_entity_dead(&(Local_218[iVar11])))
		{
			if (!func_167(153))
			{
				if (func_1438())
				{
					if (Local_218[6]->f_2 < 50)
					{
						func_1276(89);
						func_413(153);
					}
				}
			}
			if (Local_1457[12]->f_1 == 1)
			{
				func_1338(12);
			}
			if (iVar11 == 50)
			{
				func_522(60);
			}
			if (func_1842(iVar11, 32))
			{
				func_174(156);
			}
			iLocal_2139 = (iVar2136 - 1);
			func_942(iVar11, 11);
		}
		else
		{
			switch (Local_218[iVar11]->f_2)
			{
				case 1:
					func_942(iVar11, 12);
					break;
				case 12:
					if (iVar11 == 52)
					{
						if (func_1322(59))
						{
							set_ped_can_be_targetted(&(Local_218[iVar11]), false);
							func_1834(iVar11, 1);
							set_entity_invincible(&(Local_218[iVar11]), false);
							set_ped_config_flag(&(Local_218[iVar11]), 138, true);
							set_entity_heading(&(Local_218[iVar11]), -98.9f);
							func_1284(&(Local_218[iVar11]), 59, 1090519040, -1056964608, -1, 1, 0);
						}
					}
					else if (iVar11 == 53 || iVar11 == 54)
					{
						_0x789dabd18e9024db(&(Local_218[iVar11]), 28, 0);
						set_ped_config_flag(&(Local_218[iVar11]), 1, true);
						func_1834(iVar11, 1);
						set_entity_invincible(&(Local_218[iVar11]), false);
						if (iVar11 == 53)
						{
							iVar10 = 8;
							vVar0 = { func_1563(iVar10) };
						}
						else if (iVar11 == 54)
						{
							iVar10 = 9;
							vVar0 = { func_1563(iVar10) };
						}
						task_put_ped_directly_into_cover(&(Local_218[iVar11]), vVar0, -1, 0, 0f, 1, 0, &(iLocal_1418[iVar10]), 0, 0, 0);
					}
					else if (iVar11 == 55)
					{
						set_entity_invincible(&(Local_218[iVar11]), true);
						set_ped_relationship_group_hash(&(Local_218[iVar11]), -1538724068);
					}
					else if (iVar11 == 56 || iVar11 == 57)
					{
						func_1834(iVar11, 0);
					}
					func_942(iVar11, 13);
					break;
				case 13:
					if ((iVar11 == 45 || iVar11 == 46) || iVar11 == 47)
					{
						iVar36 = 0;
						if (!Local_218[42]->f_2 == 11)
						{
							iVar36++;
						}
						if (!Local_218[43]->f_2 == 11)
						{
							iVar36++;
						}
						if (!Local_218[44]->f_2 == 11)
						{
							iVar36++;
						}
						if (iVar36 <= 1 || func_167(141))
						{
							func_942(iVar11, 4);
						}
					}
					else if (iVar11 == 48)
					{
						if (!is_entity_in_volume(Global_35, Local_141.f_25, true, 0))
						{
							if (Local_218[47]->f_2 == 11)
							{
								func_942(iVar11, 4);
							}
							else
							{
								func_483(uParam0, iVar11, 0);
							}
						}
					}
					else if (iVar11 == 51)
					{
						if (!func_167(144))
						{
							if (is_entity_in_volume(Global_35, Local_141.f_6, true, 0))
							{
								func_413(144);
							}
						}
						else if (Local_218[45]->f_2 == 11 && Local_218[46]->f_2 == 11)
						{
							if (is_sphere_visible(1352.887f, -1376.802f, 84.3581f, 0.25f))
							{
								func_27(vLocal_1840[28], 0);
								func_942(iVar11, 4);
							}
						}
						else
						{
							func_483(uParam0, iVar11, 0);
						}
					}
					else if (iVar11 == 49)
					{
						if (is_entity_in_volume(Global_35, Local_141.f_62, true, 0))
						{
							func_942(iVar11, 4);
						}
					}
					else if (iVar11 == 50)
					{
						if (Local_218[42]->f_2 == 11 && (Local_218[43]->f_2 == 11 || Local_218[44]->f_2 == 11))
						{
							if (!is_sphere_visible(get_entity_coords(&(Local_218[iVar11]), true, false), 1f))
							{
								func_942(iVar11, 4);
							}
						}
					}
					break;
				case 20:
					func_942(iVar11, 21);
					break;
				case 21:
					if ((iVar11 == 42 || iVar11 == 43) || iVar11 == 44)
					{
						if (((Local_218[42]->f_2 == 11 || Local_218[43]->f_2 == 11) || Local_218[44]->f_2 == 11) || func_1897())
						{
							func_942(iVar11, 4);
						}
					}
					break;
				case 4:
					if (iVar11 == 53)
					{
						if (!_0x005e6f28dd7ed58d(&(Local_2202[39]), "G_M_M_UniExConfeds_01") && !_0xf94692eb9dc15d74(&(Local_2202[39]), 0))
						{
						}
						else
						{
							Jump @1214; //curOff = 1164
							if (iVar11 == 54)
							{
								if (!_0x005e6f28dd7ed58d(&(Local_2202[39]), "G_M_M_UniExConfeds_01^1") && !_0xf94692eb9dc15d74(&(Local_2202[39]), 0))
								{
								}
								else
								{
									func_1899(iVar11, func_1898(iVar11));
									func_1285(uParam0, iVar11, 1, 1);
									if (iVar11 == 53 || iVar11 == 54)
									{
										set_ped_combat_ability(&(Local_218[iVar11]), 2);
									}
									if (func_1900(iVar11))
									{
										set_ped_config_flag(&(Local_218[iVar11]), 138, true);
									}
									set_ped_firing_pattern(&(Local_218[iVar11]), -957453492);
									set_entity_invincible(&(Local_218[iVar11]), false);
									func_1834(iVar11, 1);
									if (((iVar11 == 44 || iVar11 == 46) || iVar11 == 56) || iVar11 == 57)
									{
										set_ped_combat_attributes(&(Local_218[iVar11]), 0, false);
									}
									set_combat_float(&(Local_218[iVar11]), 28, 0f);
									vVar12 = { func_931(iVar11, 1, 3) };
									set_ped_sphere_defensive_area(&(Local_218[iVar11]), vVar12, vVar12.f_3, 1, 0, 0);
									if (iVar11 == 44)
									{
										func_1393(&(Local_218[iVar11]), &(iLocal_1390[5]), -1, 0, 0, 1056964608, 1065353216, 0);
										set_current_ped_weapon(&(Local_218[iVar11]), &(iLocal_1390[5]), false, 0, false, false);
										set_ped_sphere_defensive_area(&(Local_218[iVar11]), vVar12, 0.75f, 0, 0, 0);
										register_target(&(Local_218[iVar11]), Global_35, 1);
										_0x4707e9c23d8ca3fe(&(Local_218[iVar11]), Global_35);
										func_1822();
										task_go_to_coord_while_aiming_at_entity(0, get_ped_defensive_area_position(&(Local_218[iVar11]), false), Global_35, 2f, 1, 1056964608, 1082130432, 1, 0, 0, -687903391, 20000, 0);
										task_swap_weapon(0, 1, 0, 0, 0);
										task_combat_ped(0, Global_35, 16777216, 16);
										func_1823(&(Local_218[iVar11]), 0);
									}
									else if (iVar11 == 53)
									{
										_0xfc3db99c8144cd81(&(Local_218[iVar11]), Local_141.f_64, 0, 0, 0);
										set_ped_combat_attributes(&(Local_218[iVar11]), 0, true);
										set_ped_combat_movement(&(Local_218[iVar11]), 1);
										func_1822();
										task_combat_ped(0, Global_35, 33554432, 16);
										func_1823(&(Local_218[iVar11]), 0);
										_0x2208438012482a1a(&(Local_218[iVar11]), true, false);
										func_942(iVar11, 5);
									}
									else if (iVar11 == 54)
									{
										set_ped_combat_movement(&(Local_218[iVar11]), 1);
										set_ped_combat_attributes(&(Local_218[iVar11]), 0, false);
										vVar12 = { 1334.5f, -1371.6f, 84f };
										vVar12.f_3 = 0.75f;
										set_ped_sphere_defensive_area(&(Local_218[iVar11]), vVar12, vVar12.f_3, 1, 0, 0);
										func_1822();
										task_combat_ped(0, Global_35, 33554432, 16);
										func_1823(&(Local_218[iVar11]), 0);
										_0x2208438012482a1a(&(Local_218[iVar11]), true, false);
										func_942(iVar11, 5);
									}
									else if (iVar11 == 56 || iVar11 == 57)
									{
										if (!is_entity_dead(&(iLocal_979[0])))
										{
											func_1822();
											task_go_to_coord_while_aiming_at_entity(0, vVar12, &(iLocal_979[0]), 3f, 1, 1056964608, 1082130432, 1, 0, 0, -957453492, 20000, 0);
											task_shoot_at_entity(0, &(iLocal_979[0]), -1, -957453492, 0);
											func_1823(&(Local_218[iVar11]), 0);
										}
									}
									else if (iVar11 == 45 || iVar11 == 46)
									{
										set_entity_only_damaged_by_player(&(Local_218[iVar11]), true);
										func_27(vLocal_1840[15], 0);
										_0x4707e9c23d8ca3fe(&(Local_218[iVar11]), &(Local_218[6]));
										register_target(&(Local_218[iVar11]), Global_35, 1);
										func_1822();
										task_go_to_coord_while_aiming_at_entity(0, get_ped_defensive_area_position(&(Local_218[iVar11]), false), Global_35, 2f, 1, 1056964608, 1082130432, 1, 0, 0, -687903391, 20000, 0);
										task_combat_ped(0, Global_35, 16777216, 0);
										func_1823(&(Local_218[iVar11]), 0);
									}
									else if (iVar11 == 49)
									{
										_0x9587913b9e772d29(&(Local_218[iVar11]), 0);
										func_1822();
										task_go_to_coord_while_aiming_at_entity(0, vVar12, Global_35, 3f, 1, 2f, 1082130432, 1, 0, 0, -687903391, 20000, 0);
										task_combat_hated_targets_around_ped(0, 50f, 16777216, 0);
										func_1823(&(Local_218[iVar11]), 0);
										_0x2208438012482a1a(&(Local_218[iVar11]), true, false);
										force_ped_motion_state(&(Local_218[iVar11]), -1115154469, false, 0, false);
									}
									else if (iVar11 == 50)
									{
										Var16 = { 1338.7f, -1370.4f, 80.8f };
										Var16.f_3 = { 1344.5f, -1372.8f, 80.3f };
										Var16.f_13 = 1;
										Var16.f_6 = 1845102363;
										Var16.f_11 = Global_35;
										_fire_single_bullet_ignore_entity_new(&Var16);
										_0x9587913b9e772d29(&(Local_218[iVar11]), 0);
										func_1822();
										task_go_to_coord_while_aiming_at_coord(0, vVar12, vVar12, 3f, 0, 0.25f, 1082130432, 1, 0, 0, -687903391, 0);
										task_aim_at_coord(0, func_1901(get_entity_rotation(&(Local_218[iVar11]), 2)), -1, 0, 0);
										func_1823(&(Local_218[iVar11]), 0);
									}
									else
									{
										if (iVar11 == 45)
										{
											func_1265(&(Local_218[iVar11]), func_1388(4, 0), 2, 1073741824);
										}
										else if (iVar11 == 46)
										{
											func_1265(&(Local_218[iVar11]), func_1388(4, 1), 2, 1073741824);
										}
										else if (iVar11 == 47)
										{
											func_1265(&(Local_218[iVar11]), func_1388(4, 2), 2, 1073741824);
										}
										else if (iVar11 == 51)
										{
											_set_entity_coords_and_heading(&(Local_218[iVar11]), 1354.6f, -1377.3f, 83.8f, 79.9f, true, false, true);
											_0x9587913b9e772d29(&(Local_218[iVar11]), 0);
											set_ped_config_flag(&(Local_218[iVar11]), 252, false);
										}
										func_1822();
										if (iVar11 == 47 || iVar11 == 48)
										{
											if (iVar11 == 48)
											{
												_set_entity_coords_and_heading(&(Local_218[iVar11]), 1355.118f, -1373.33f, 80.5079f, 160f, true, false, true);
											}
											_0x9587913b9e772d29(&(Local_218[iVar11]), 0);
											iVar10 = 6;
											vVar0 = { func_1563(iVar10) };
											set_ped_sphere_defensive_area(&(Local_218[iVar11]), vVar0, 1f, 0, 0, 0);
											set_ped_combat_attributes(&(Local_218[iVar11]), 111, true);
											set_ped_combat_attributes(&(Local_218[iVar11]), 30, true);
											_0x8acc0506743a8a5c(&(Local_218[iVar11]), 1240093907, 1, -1f);
											task_go_to_coord_while_aiming_at_entity_using_combat_style(0, vVar0, Global_35, 3f, 1, 0.5f, 1f, 1, 137281, 1, -957453492, 20000, 0);
											task_put_ped_directly_into_cover(0, vVar0, 500, 1, -2f, 1, 1, &(iLocal_1418[6]), 0, 0, 0);
										}
										else if (iVar11 == 45)
										{
											task_go_to_coord_while_aiming_at_entity_using_combat_style(0, func_1389(45, 1, 3), Global_35, 2f, 1, 2f, 4f, 1, 0, 0, -687903391, 20000, 0);
										}
										else if (iVar11 == 51)
										{
											task_go_to_coord_while_aiming_at_entity(0, get_ped_defensive_area_position(&(Local_218[iVar11]), false), Global_35, 2f, 1, 1f, 1082130432, 1, 0, 0, -687903391, 20000, 0);
										}
										task_combat_ped(0, Global_35, 16777216, 16);
										func_1823(&(Local_218[iVar11]), 0);
										if (iVar11 == 51)
										{
											_0x2208438012482a1a(&(Local_218[iVar11]), true, false);
											force_ped_motion_state(&(Local_218[iVar11]), -530524, false, 0, false);
										}
									}
									if (iVar11 == 48)
									{
										force_ped_motion_state(&(Local_218[iVar11]), -1115154469, false, 0, false);
										_0x2208438012482a1a(&(Local_218[iVar11]), true, false);
									}
									func_27(&(Local_218[iVar11]->f_5), 1);
									func_942(iVar11, 5);
									Jump @4095; //curOff = 2965
									if (iVar11 == 47)
									{
										if ((func_1828(&(Local_218[iVar11])) && get_sequence_progress(&(Local_218[iVar11])) > 0) || !func_1828(&(Local_218[iVar11])))
										{
											_0x78815fc52832b690(&(Local_218[iVar11]), 1);
											func_942(iVar11, 7);
										}
									}
									else if (iVar11 == 50)
									{
										vVar12 = { func_931(iVar11, 1, 3) };
										if (!func_1828(&(Local_218[iVar11])) || get_distance_between_coords(get_entity_coords(&(Local_218[iVar11]), true, false), vVar12, true) <= 1f)
										{
											if (!is_entity_occluded(&(Local_218[iVar11])))
											{
												func_942(iVar11, 6);
											}
										}
									}
									else if (iVar11 == 49)
									{
										if (func_1902())
										{
											func_942(iVar11, 7);
										}
									}
									else if (iVar11 == 48)
									{
										if (func_1903() && ((func_1828(&(Local_218[iVar11])) && get_sequence_progress(&(Local_218[iVar11])) > 0) || !func_1828(&(Local_218[iVar11]))))
										{
											func_942(iVar11, 7);
										}
									}
									else if (iVar11 == 45 || iVar11 == 46)
									{
										if (func_26(vLocal_1840[15]))
										{
											if (func_924(vLocal_1840[15]) >= 20f)
											{
												if (!is_entity_dead(&(Local_218[45])))
												{
													set_entity_only_damaged_by_player(&(Local_218[45]), false);
												}
												if (!is_entity_dead(&(Local_218[46])))
												{
													set_entity_only_damaged_by_player(&(Local_218[46]), false);
												}
												func_599(vLocal_1840[15]);
											}
										}
									}
									if (func_1275(10, iVar11))
									{
										if (((iVar11 == 42 && func_924(&(Local_218[iVar11]->f_5)) >= 8.5f) && is_entity_in_volume(Global_35, Local_141.f_25, true, 0)) || (iVar11 == 43 && func_924(&(Local_218[iVar11]->f_5)) >= 7f))
										{
											func_942(iVar11, 6);
										}
									}
									Jump @4095; //curOff = 3437
									if (iVar11 == 42)
									{
										set_ped_combat_movement(&(Local_218[iVar11]), 0);
										_0x4707e9c23d8ca3fe(&(Local_218[iVar11]), &(Local_218[6]));
										register_target(&(Local_218[iVar11]), Global_35, 1);
										task_look_at_entity(&(Local_218[iVar11]), Global_35, 10000, 48, 41, 0);
										func_1822();
										task_go_to_coord_while_aiming_at_entity(0, 1341.899f, -1374.939f, 79.4806f, Global_35, 2f, 1, (0.25f * 2f), 1082130432, 1, 1, 0, -687903391, 20000, 0);
										task_climb(0, true);
										task_combat_ped(0, Global_35, 16777216, 0);
										func_1823(&(Local_218[iVar11]), 0);
										func_942(iVar11, 7);
									}
									else if (iVar11 == 43)
									{
										set_ped_combat_attributes(&(Local_218[iVar11]), 0, true);
										set_ped_sphere_defensive_area(&(Local_218[iVar11]), 1345.2f, -1371.5f, 80.2f, 0.75f, 1, 0, 0);
										func_942(iVar11, 7);
									}
									else if (iVar11 == 50)
									{
										func_1822();
										func_1284(0, 60, 4f, -4f, -1, 0, 0);
										task_combat_ped(0, Global_35, 117440512, 16);
										func_1823(&(Local_218[iVar11]), 0);
										func_942(iVar11, 7);
									}
									Jump @4095; //curOff = 3725
									if (iVar11 == 50)
									{
										if (func_1828(&(Local_218[iVar11])))
										{
											if (func_1872(&(Local_218[iVar11]), 60))
											{
												if (func_1904(&(Local_218[iVar11]), 60) >= 0.65f)
												{
													if (does_entity_exist(&(Local_1692[20])))
													{
														start_particle_fx_non_looped_at_coord(func_1381(13), get_entity_coords(&(Local_1692[20]), true, false), 0f, 0f, 0f, 4f, false, false, false);
													}
													func_1905(&(Local_218[iVar11]), func_1358(1, 2), 0, 0, 0, 0, 0);
													stop_anim_task(&(Local_218[iVar11]), func_523(60, 1), func_523(60, 0), -1f);
													task_combat_ped(&(Local_218[iVar11]), Global_35, 117440512, 0);
													_0x2208438012482a1a(&(Local_218[iVar11]), true, false);
													func_942(iVar11, 8);
												}
											}
										}
									}
									Jump @4095; //curOff = 3915
									if (iVar11 == 49 || iVar11 == 50)
									{
										func_27(&(Local_218[iVar11]->f_5), 0);
										if (!func_924(&(Local_218[iVar11]->f_5)) >= 10f)
										{
										}
										else
										{
											remove_ped_defensive_area(&(Local_218[iVar11]), false);
											set_ped_combat_movement(&(Local_218[iVar11]), 2);
											func_1822();
											task_follow_waypoint_recording(0, func_525(68), 0, 8, 12, 0, 1, -1);
											task_combat_ped(0, Global_35, 16777216, 0);
											func_1823(&(Local_218[iVar11]), 0);
											func_942(iVar11, 30);
											Jump @4095; //curOff = 4052
											if (is_waypoint_playback_going_on_for_ped(&(Local_218[iVar11]), func_525(68)))
											{
												waypoint_playback_override_speed(&(Local_218[iVar11]), 2f, 0, -1082130432, 0);
											}
										}
										iVar11++;
									}
								}
							}
						}
					}
					default:
						break;
			}
		}
	}
}

void func_1407(var uParam0)
{
	if (is_entity_dead(&(Local_218[6])))
	{
		return;
	}
	switch (Local_218[6]->f_2)
	{
		case 1:
		case 46:
			func_1906();
			break;
		case 47:
			if (func_1907())
			{
				func_942(6, 50);
			}
			else
			{
				if (func_1828(&(Local_218[6])))
				{
					if (get_sequence_progress(&(Local_218[6])) == 1 && is_ped_in_cover(&(Local_218[6]), 0, 0))
					{
						bVar0 = true;
					}
				}
				else
				{
					bVar0 = true;
				}
				if (bVar0 && func_167(127))
				{
					func_27(vLocal_1840[17], 0);
					if (!func_924(vLocal_1840[17]) >= 4f)
					{
					}
					else
					{
						set_ped_sphere_defensive_area(&(Local_218[6]), vVar1, 0.75f, 1, 0, 0);
						_0xfc3db99c8144cd81(&(Local_218[6]), Local_141.f_63, 1, 0, 0);
						set_ped_combat_movement(&(Local_218[6]), 1);
						func_1899(6, 10);
						if (!is_entity_dead(&(Local_218[52])))
						{
							_0x4707e9c23d8ca3fe(&(Local_218[52]), &(Local_218[42]));
							_0xd05ad61f242c626b(&(Local_218[52]), 0f);
						}
						if (!is_entity_dead(&(Local_218[42])))
						{
							_0x4707e9c23d8ca3fe(&(Local_218[52]), &(Local_218[42]));
							_0xd05ad61f242c626b(&(Local_218[42]), 0f);
						}
						if (!is_entity_dead(&(Local_218[43])))
						{
							register_target(&(Local_218[6]), &(Local_218[43]), 1);
						}
						remove_all_ped_weapons(&(Local_218[6]), true, true);
						_give_weapon_to_ped_2(&(Local_218[6]), -1493265355, -1, true, false, 0, false, 0.5f, 1f, 752097756, true, 0f, false);
						task_combat_hated_targets_in_area(&(Local_218[6]), func_988(4, 3), 10f, 0, 0);
						func_942(6, 49);
						Jump @2477; //curOff = 484
						if (func_1907())
						{
							func_942(6, 50);
						}
						Jump @2477; //curOff = 501
						if (is_entity_dead(&(Local_218[52])))
						{
							func_942(6, 54);
						}
						else
						{
							iVar11 = -1;
							if (!is_entity_dead(&(Local_218[46])))
							{
								iVar11 = 46;
							}
							else if (!is_entity_dead(&(Local_218[45])))
							{
								iVar11 = 45;
							}
							else if (!is_entity_dead(&(Local_218[42])))
							{
								iVar11 = 42;
							}
							else if (!is_entity_dead(&(Local_218[43])))
							{
								iVar11 = 43;
							}
							set_can_auto_vault_on_entity(&(Local_218[6]), false);
							vVar12 = { 1342.56f, -1370.26f, 84.29f };
							fVar15 = 2f;
							func_1822();
							if (!iVar11 == -1)
							{
								task_go_to_coord_while_aiming_at_entity(0, vVar12, &(Local_218[iVar11]), 2f, 1, fVar15, 1082130432, 1, 0, 0, -687903391, 20000, 0);
							}
							else
							{
								set_ped_config_flag(&(Local_218[6]), 252, false);
								task_follow_nav_mesh_to_coord(0, vVar12, 2f, 20000, fVar15, 2113, 40000f);
							}
							func_1823(&(Local_218[6]), 0);
							_0x2208438012482a1a(&(Local_218[6]), true, false);
							func_1895(81);
							func_1350(uParam0, &(Local_218[6]), -2045797884, 422991367, 1, 1);
							task_follow_nav_mesh_to_coord(&(Local_218[52]), 1342.562f, -1370.84f, 84.298f, 1f, 20000, 0.25f, 0, 0f);
							if (!is_entity_dead(&(Local_218[46])))
							{
								_0x4707e9c23d8ca3fe(&(Local_218[46]), &(Local_218[6]));
								register_target(&(Local_218[46]), Global_35, 1);
								task_combat_ped(&(Local_218[46]), Global_35, 16777216, 16);
							}
							func_942(6, 51);
						}
						Jump @2477; //curOff = 886
						if (is_entity_dead(&(Local_218[52])))
						{
							func_942(6, 54);
						}
						else if (!func_1828(&(Local_218[6])))
						{
							force_ped_motion_state(&(Local_218[6]), -1871534317, true, 0, false);
							set_entity_velocity(&(Local_218[6]), 0f, 0f, 0f);
							set_can_auto_vault_on_entity(&(Local_218[6]), true);
							if (func_856(&(Local_218[52]), 1, 0, 0) == &iLocal_1390[13])
							{
								_0xcef4c65de502d367(&(Local_218[52]), 1, 0, 0, 0);
							}
							_hide_ped_weapons(&(Local_218[52]), 2, true);
							set_current_ped_weapon(&(Local_218[52]), -1569615261, true, 0, false, false);
							set_current_ped_weapon(&(Local_218[52]), -1569615261, true, 1, false, false);
							set_anim_scene_entity(&(Local_2202[39]), "CS_HoseaMatthews", &(Local_218[6]), 0);
							func_1332(39);
							_0x2208438012482a1a(&(Local_218[6]), true, false);
							_0x2208438012482a1a(&(Local_218[52]), true, false);
							func_413(125);
							func_522(49);
							func_942(6, 53);
							func_27(vLocal_1840[16], 0);
							func_942(6, 53);
						}
						Jump @2477; //curOff = 1142
						if (iVar2172 >= 4)
						{
						}
						else
						{
							if (is_entity_dead(&(Local_218[52])))
							{
								func_27(vLocal_1840[29], 0);
								remove_all_ped_weapons(&(Local_218[6]), true, true);
								_0x140b3cb1d424a945(&(Local_218[6]), -1569615261);
								_delete_volume(Local_141.f_50);
								func_186(func_185(6), 0);
								Local_1457[12]->f_5 = 7f;
								func_1325(uParam0, 12);
								func_942(53, 4);
								func_942(54, 4);
								func_261(1, 0, 0);
								func_413(143);
								func_187(uParam0, &(Local_218[6]), 1);
								_set_anim_scene_playback_list_bool(&(Local_2202[39]), "pl_Main_Action", true);
								remove_all_ped_weapons(&(Local_218[6]), true, true);
								Local_2202[39]->f_1 = 9;
								func_942(6, 55);
							}
							Jump @2477; //curOff = 1324
							vVar1 = { func_1563(7) };
							func_1822();
							task_follow_nav_mesh_to_coord(0, vVar1, 3f, 20000, 2f, 0, 40000f);
							func_1823(&(Local_218[6]), 0);
							func_413(154);
							func_413(143);
							func_942(53, 4);
							func_942(54, 4);
							_set_anim_scene_playback_list_bool(&(Local_2202[39]), "pl_Main_Action", true);
							func_1332(39);
							func_942(6, 55);
							Jump @2477; //curOff = 1427
							func_1298(40);
							if ((func_167(154) && !func_1828(&(Local_218[6]))) || (!func_167(154) && _0x005e6f28dd7ed58d(&(Local_2202[39]), "CS_HoseaMatthews")))
							{
								vVar1 = { func_1563(7) };
								task_put_ped_directly_into_cover(&(Local_218[6]), vVar1, -1, 0, 0f, 1, 1, &(iLocal_1418[7]), 0, 0, 0);
								_0x2208438012482a1a(&(Local_218[6]), true, false);
								func_942(6, 56);
							}
							Jump @2477; //curOff = 1548
							if (_does_anim_scene_exist(&(Local_2202[39])) && _0xf94692eb9dc15d74(&(Local_2202[39]), 0))
							{
								func_528(39, 0);
							}
							func_1298(40);
							if (is_entity_dead(&(Local_218[53])) && is_entity_dead(&(Local_218[54])))
							{
								_0x1a7a802b2301edc0(&(Local_218[6]));
								set_entity_collision(&(Local_218[53]), false, false);
								set_entity_collision(&(Local_218[54]), false, false);
								func_261(1, 0, 0);
								func_174(151);
								set_ped_config_flag(&(Local_218[6]), 252, false);
								set_ped_config_flag(&(Local_218[6]), 375, true);
								task_follow_waypoint_recording(&(Local_218[6]), func_525(69), 0, 4195936, -1, 0, 0, -1);
								_0x2208438012482a1a(&(Local_218[6]), true, false);
								func_1834(55, 1);
								_0x9587913b9e772d29(&(Local_218[55]), 0);
								vVar16 = { func_931(55, 1, 3) };
								task_follow_nav_mesh_to_coord(&(Local_218[55]), vVar16, 2f, 20000, 0.25f, 0, 40000f);
								func_1276(88);
								func_942(6, 57);
							}
							Jump @2477; //curOff = 1802
							func_1298(40);
							if (is_waypoint_playback_going_on_for_ped(&(Local_218[6]), func_525(69)))
							{
								if (get_ped_waypoint_progress(&(Local_218[6])) >= 4)
								{
									if (_does_volume_exist(Local_141.f_52))
									{
										_delete_volume(Local_141.f_52);
									}
									func_1420();
									set_anim_scene_entity(&(Local_2202[40]), "WAGON", &(iLocal_979[0]), 0);
									func_1332(40);
									set_ped_config_flag(&(Local_218[6]), 375, false);
									_give_weapon_to_ped_2(&(Local_218[55]), -164645981, 1, true, false, 0, false, 0.5f, 1f, 752097756, true, 0f, false);
									func_942(6, 58);
								}
							}
							Jump @2477; //curOff = 1953
							if (_get_anim_scene_time(&(Local_2202[40])) < 3f)
							{
								set_ped_max_move_blend_ratio(Global_35, 2f);
							}
							if (_get_anim_scene_time(&(Local_2202[40])) >= 2.46f && has_ped_got_weapon(&(Local_218[55]), -164645981, 0, true))
							{
								_0xcef4c65de502d367(&(Local_218[55]), 0, 0, 0, 0);
							}
							if (_0x8d81e7824b7753f7(&(Local_2202[40]), "s_Struggle_Loop", 1))
							{
								func_942(6, 59);
							}
							Jump @2477; //curOff = 2063
							if (_does_anim_scene_exist(&(Local_2202[42])))
							{
								if (_is_anim_scene_started(&(Local_2202[42]), false))
								{
									func_942(6, 60);
								}
								else if (is_entity_in_volume(Global_35, Local_141.f_61, true, 0))
								{
									set_ped_into_vehicle(&(Local_218[6]), &(iLocal_979[0]), -1);
									if (!is_entity_dead(&(Local_218[55])))
									{
										remove_anim_scene_entity(&(Local_2202[40]), "G_M_M_UNIEXCONFEDS_01", &(Local_218[55]));
										clear_ped_tasks_immediately(&(Local_218[55]), true, true);
										_set_entity_health(&(Local_218[55]), 0, 0);
										set_entity_coords(&(Local_218[55]), 1331.086f, -1365.415f, 79.7332f, true, false, true, true);
										func_528(40, 0);
									}
									set_entity_coords(&(Local_218[55]), 1334f, -1366.2f, 79.2f, false, false, true, true);
									Var20.f_8 = -1082130432;
									Var20 = { 1334.1f, -1366.2f, 80.2f };
									Var20.f_3 = { 1334f, -1366.2f, 79.2f };
									Var20.f_6 = &iLocal_1390[0];
									_fire_single_bullet_ignore_entity_new(&Var20);
									func_528(42, 0);
									func_942(6, 62);
									func_134(uParam0, 7);
								}
							}
							Jump @2477; //curOff = 2351
							if (does_entity_exist(&(Local_218[55])))
							{
								if (_is_anim_scene_started(&(Local_2202[42]), false))
								{
									if (_get_anim_scene_time(&(Local_2202[42])) >= 4.84f)
									{
										delete_ped(Local_218[55]);
									}
								}
							}
							if (_0x005e6f28dd7ed58d(&(Local_2202[42]), "CS_HoseaMatthews") || _0xf94692eb9dc15d74(&(Local_2202[42]), 0))
							{
								func_1908(1364.6f, -1351.4f, 77.7f);
								func_942(6, 62);
							}
						}
					}
				}
			}
			default:
				break;
	}
}

void func_1408()
{
	Var0.f_8 = -1082130432;
	if (func_167(127))
	{
		if (iVar2179 < 4)
		{
			func_27(vLocal_1840[23], 0);
			Var0.f_6 = &iLocal_1390[4];
			Var0.f_13 = 1;
			Var0 = { 1341.8f, -1375.1f, 80.8f };
		}
		else
		{
			Var0.f_13 = 1;
			Var0.f_15 = 1;
			Var0.f_18 = 1;
			Var0.f_12 = 1;
			Var0 = { 1336.3f, -1370.9f, 84.4f };
			Var0.f_6 = &iLocal_1390[5];
		}
		switch (iVar2179)
		{
			case 0:
				if (func_924(vLocal_1840[23]) >= 1f)
				{
					start_particle_fx_non_looped_at_coord(func_1381(13), get_entity_coords(&(Local_1692[26]), true, false), 0f, 0f, 0f, 1f, false, false, false);
					Var0.f_3 = { get_entity_coords(&(Local_1692[22]), true, false) };
					_fire_single_bullet_ignore_entity_new(&Var0);
					Var0.f_3 = { get_entity_coords(&(Local_1692[26]), true, false) };
					_fire_single_bullet_ignore_entity_new(&Var0);
					uLocal_2181 = iVar2179 + 1;
				}
				break;
			case 1:
				if (func_924(vLocal_1840[23]) >= 1.7f)
				{
					start_particle_fx_non_looped_at_coord(func_1381(13), get_entity_coords(&(Local_1692[24]), true, false), 0f, 0f, 0f, 1f, false, false, false);
					Var0.f_3 = { get_entity_coords(&(Local_1692[24]), true, false) };
					_fire_single_bullet_ignore_entity_new(&Var0);
					uLocal_2181 = iVar2179 + 1;
				}
				break;
			case 2:
				if (func_924(vLocal_1840[23]) >= 2.2f)
				{
					if (is_entity_in_volume(Global_35, Local_141.f_25, true, 0))
					{
						Var0.f_3 = { 1340.805f, -1375.842f, 80.6456f };
						_fire_single_bullet_ignore_entity_new(&Var0);
					}
					uLocal_2181 = iVar2179 + 1;
				}
				break;
			case 3:
				if (func_924(vLocal_1840[23]) >= 2.5f)
				{
					if (is_entity_in_volume(Global_35, Local_141.f_25, true, 0))
					{
						Var0.f_3 = { 1344.581f, -1372.803f, 80.4862f };
						_fire_single_bullet_ignore_entity_new(&Var0);
					}
					uLocal_2181 = iVar2179 + 1;
				}
				break;
			case 4:
				if ((_does_anim_scene_exist(&(Local_2202[39])) && _is_anim_scene_started(&(Local_2202[39]), false)) && _0x8d81e7824b7753f7(&(Local_2202[39]), "s_main_action", 1))
				{
					if (_get_anim_scene_time(&(Local_2202[39])) >= 5.07f)
					{
						Var0.f_3 = { get_entity_coords(&(Local_1692[52]), true, false) };
						start_particle_fx_non_looped_on_entity(func_1381(13), &(Local_1692[52]), 0f, 0f, 0f, 0f, 0f, 0f, 2f, false, false, false);
						_fire_single_bullet_ignore_entity_new(&Var0);
						uLocal_2181 = iVar2179 + 1;
					}
				}
				break;
			case 5:
				if (_get_anim_scene_time(&(Local_2202[39])) >= 5.33f)
				{
					Var0.f_3 = { get_entity_coords(&(Local_1692[53]), true, false) };
					_fire_single_bullet_ignore_entity_new(&Var0);
					uLocal_2181 = iVar2179 + 1;
				}
				break;
			case 6:
				if (_get_anim_scene_time(&(Local_2202[39])) >= 5.9f)
				{
					Var0.f_3 = { get_entity_coords(&(Local_1692[54]), true, false) };
					_fire_single_bullet_ignore_entity_new(&Var0);
					uLocal_2181 = iVar2179 + 1;
				}
				break;
			case 7:
				if (_get_anim_scene_time(&(Local_2202[39])) >= 6.1f)
				{
					Var0.f_3 = { get_entity_coords(&(Local_1692[55]), true, false) };
					_fire_single_bullet_ignore_entity_new(&Var0);
					uLocal_2181 = iVar2179 + 1;
				}
				break;
		}
	}
}

void func_1409(var uParam0)
{
	iVar0 = get_interior_from_entity(Global_35);
	iVar1 = get_interior_at_coords(1344.5f, -1374.1f, 81.7f);
	if (func_1275(15, 92))
	{
		if (!func_167(135))
		{
			if (((is_valid_interior(iVar1) && is_interior_ready(iVar1)) && !iVar1 == iVar0) && !is_entity_in_volume(Global_35, Local_141.f_66, true, 0))
			{
				Local_985[7]->f_5 = 4;
			}
		}
	}
	if (!func_167(135))
	{
		if (!func_167(141))
		{
			if (((is_valid_interior(iVar1) && is_interior_ready(iVar1)) && !iVar1 == iVar0) && is_entity_in_volume(Global_35, Local_141.f_66, true, 0))
			{
				iLocal_2176 = func_1355();
				func_1325(uParam0, 13);
				func_187(uParam0, &(Local_218[6]), 1);
				func_944(7);
				iLocal_1825[9] = func_1814(408396114, Local_141.f_57, 1);
				func_413(141);
			}
		}
		else if ((is_valid_interior(iVar1) && is_interior_ready(iVar1)) && iVar1 == iVar0)
		{
			remove_blip(iLocal_1825[9]);
			func_1289(7);
			func_469(uParam0, &(Local_218[6]), 1024);
			func_1350(uParam0, &(Local_218[6]), -2045797884, 422991367, 1, 1);
			if (iVar2173 == 11 || iVar2173 == 10)
			{
				if (is_entity_dead(&(Local_218[52])))
				{
					func_1325(uParam0, 12);
				}
				else
				{
					func_1325(uParam0, iVar2173);
				}
			}
			else
			{
				func_1325(uParam0, iVar2173);
			}
			func_174(141);
		}
	}
	else if (does_blip_exist(&(iLocal_1825[9])))
	{
		remove_blip(iLocal_1825[9]);
	}
}

void func_1410(var uParam0)
{
	if (func_167(123))
	{
		if (func_1275(5, 26))
		{
			if (!is_entity_dead(&(Local_218[52])))
			{
				if (func_1416())
				{
					if (((!iVar2172 == 4 && !iVar2172 == 5) && !iVar2172 == 6) && !iVar2172 == 8)
					{
						iLocal_2175 = 4;
					}
				}
			}
		}
	}
	switch (iVar2172)
	{
		case 0:
			iLocal_2175 = 1;
		case 1:
			if (func_167(123) || func_1909())
			{
				func_27(vLocal_1840[25], 1);
				iLocal_2175 = 2;
			}
			break;
		case 2:
			if (is_entity_occluded(&(Local_218[6])))
			{
				if (!func_552(vLocal_1840[25]))
				{
					func_1893(vLocal_1840[25]);
				}
			}
			else if (func_552(vLocal_1840[25]))
			{
				func_1894(vLocal_1840[25]);
				if ((25f - func_924(vLocal_1840[25])) < 5f)
				{
					func_1874(vLocal_1840[25], (25f - 5f), 1);
				}
			}
			if (func_924(vLocal_1840[25]) >= 25f || is_entity_in_volume(Global_35, Local_141.f_16, true, 0))
			{
				func_413(129);
				set_entity_invincible(&(Local_218[52]), true);
				set_ped_can_be_targetted(&(Local_218[52]), false);
				set_ped_config_flag(&(Local_218[52]), 253, true);
				set_ped_config_flag(&(Local_218[52]), 277, true);
				iLocal_2175 = 4;
			}
			else if (Local_218[52]->f_2 == 11)
			{
				iLocal_2175 = 3;
			}
			break;
		case 4:
			set_gameplay_entity_hint(&(Local_218[6]), 0f, 0f, 0f, true, 2000, 2000, 2000, 0);
			_set_anim_scene_playback_list_bool(&(Local_2202[39]), "pbl_failOverRailing", true);
			set_entity_collision(&(Local_218[6]), false, false);
			func_27(vLocal_1840[25], 1);
			iLocal_2175 = 5;
			break;
		case 5:
			if (_get_anim_scene_time(&(Local_2202[39])) >= 1.2f && get_entity_collision_disabled(&(Local_218[6])))
			{
				remove_anim_scene_entity(&(Local_2202[39]), "CS_HoseaMatthews", &(Local_218[6]));
				set_ped_to_ragdoll_with_fall(&(Local_218[6]), 10000, 15000, 0, 0f, 0f, -1f, 80.4f, 0f, 0f, 0f, 0f, 0f, 0f);
				set_entity_collision(&(Local_218[6]), true, false);
				func_1289(12);
				func_509(uParam0, &(Local_218[6]));
				_set_entity_health(&(Local_218[6]), 0, &(Local_218[52]));
			}
			if ((_0x005e6f28dd7ed58d(&(Local_2202[39]), "G_M_M_UniExConfeds_01^2") || _0xf94692eb9dc15d74(&(Local_2202[39]), 0)) || _is_anim_scene_finished(&(Local_2202[39]), false))
			{
				if (!is_entity_dead(&(Local_218[52])))
				{
					task_combat_ped(&(Local_218[52]), Global_35, 1048576, 16);
				}
				func_27(vLocal_1840[25], 1);
				iLocal_2175 = 6;
			}
			break;
		case 6:
			if (func_924(vLocal_1840[25]) >= 2f)
			{
				func_1398(uParam0, "BRT1_F_HOSDEAD", "", 1, 0);
				iLocal_2175 = 8;
			}
			break;
	}
}

bool func_1411(var uParam0)
{
	func_1282(33);
	func_1282(34);
	func_1282(35);
	func_1282(0);
	func_1282(14);
	func_1282(45);
	func_1282(func_1294(93));
	func_1282(func_1294(94));
	func_1282(70);
	func_1282(func_1306(60));
	if ((((((((!func_1322(33) || !func_1322(34)) || !func_1322(35)) || !func_1322(0)) || !func_1322(14)) || !func_1322(45)) || !func_1322(func_1294(93))) || !func_1322(func_1294(93))) || !func_1322(func_1306(60)))
	{
		return false;
	}
	bVar0 = true;
	if (!func_1296(uParam0, 86, 90, 3077))
	{
		bVar0 = false;
	}
	if (!func_1296(uParam0, 93, 94, 2049))
	{
		bVar0 = false;
	}
	if (!func_1296(uParam0, 58, 83, 4097))
	{
		bVar0 = false;
	}
	if (!func_1850(uParam0, 3))
	{
		bVar0 = false;
	}
	if (does_entity_exist(&(iLocal_979[3])) && !does_entity_exist(&(Local_1692[62])))
	{
		func_1321(62, 1);
	}
	if (!func_1850(uParam0, 4))
	{
		bVar0 = false;
	}
	if (does_entity_exist(&(iLocal_979[4])))
	{
		if (!does_entity_exist(&(Local_1692[60])))
		{
			func_1321(60, 1);
			Var1 = { func_1357(60) };
			attach_entity_to_entity(&(Local_1692[60]), &(iLocal_979[4]), 0, Var1, Var1.f_3, false, false, false, false, 2, true, false, false);
			set_entity_proofs(&(Local_1692[60]), 8, false);
			_0xe157a8a336c7f04a(&(Local_1692[60]), 1);
			set_object_targettable(&(Local_1692[60]), true);
			_0x4b436bac8cbe9b07(&(Local_1692[60]), 2, 0);
		}
		if (!does_entity_exist(&(Local_218[84])))
		{
			Local_218[84] = _get_ped_in_draft_seat(&(iLocal_979[4]), 0);
			if (does_entity_exist(&(Local_218[84])))
			{
				func_1839(&(Local_218[84]), 0);
				func_942(84, 1);
			}
			else
			{
				bVar0 = false;
			}
		}
		if (!does_entity_exist(&(Local_218[85])))
		{
			Local_218[85] = _get_ped_in_draft_seat(&(iLocal_979[4]), 1);
			if (does_entity_exist(&(Local_218[85])))
			{
				func_1839(&(Local_218[85]), 0);
				func_942(85, 1);
			}
			else
			{
				bVar0 = false;
			}
		}
	}
	if (bVar0)
	{
		func_413(157);
		return true;
	}
	return false;
}

void func_1412(var uParam0)
{
	if (iVar2184 == 2147483647)
	{
		return;
	}
	switch (iVar2184)
	{
		case 0:
			func_145(uParam0, &(Local_218[41]), "BRT1_PATRON1", 0);
			break;
		case 1:
			func_1276(72);
			break;
		case 2:
			func_1325(uParam0, 12);
			break;
		case 3:
			func_522(14);
			break;
		case 4:
			func_522(15);
			break;
		case 5:
			func_522(27);
			break;
		case 6:
			func_522(28);
			break;
		case 7:
			func_522(29);
			break;
		case 8:
			func_494(834296435, 0, 0f, 0, 0, 0, 1, 0);
			break;
		case 9:
			func_494(1124531468, 0, 0f, 0, 0, 0, 1, 0);
			break;
		case 10:
			func_494(-1079073283, 0, 0f, 0, 0, 0, 1, 0);
			break;
		case 11:
			func_494(-860602360, 0, 0f, 0, 0, 0, 1, 0);
			break;
		case 12:
			func_1419(68, 1, 1f, 0.5f, 1);
			break;
		case 13:
			Local_1340[15] = create_scenario_point(-1354153129, func_988(10, 0), func_989(10, 0), 1.5f, 0, 0);
			break;
		case 14:
			Local_1340[16] = create_scenario_point(-1354153129, func_988(10, 1), func_989(10, 1), 1.5f, 0, 0);
			break;
		case 15:
			Local_1340[17] = create_scenario_point(-1354153129, func_988(10, 2), func_989(10, 2), 1.5f, 0, 0);
			break;
		case 16:
			Local_1340[18] = create_scenario_point(-1354153129, func_988(10, 3), func_989(10, 3), 1.5f, 0, 0);
			break;
		case 17:
			Local_1340[19] = create_scenario_point(-1354153129, func_988(10, 4), func_989(10, 4), 1.5f, 0, 0);
			break;
		case 18:
			Local_1340[20] = create_scenario_point(-1354153129, func_988(10, 5), func_989(10, 5), 1.5f, 0, 0);
			break;
		case 19:
			Local_1340[21] = create_scenario_point(-1354153129, 1342.5f, -1374.5f, 84.3f, -100f, 2f, 0, 0);
			break;
		case 20:
			Local_1340[22] = create_scenario_point(-70257497, func_988(10, 6), func_989(10, 6), 1.5f, 0, 0);
			break;
		case 21:
			Local_1340[23] = create_scenario_point(-70257497, func_988(10, 7), func_989(10, 7), 1.5f, 0, 0);
			break;
		case 22:
			func_1307(&(Local_141.f_52), -1612834106);
			break;
		case 23:
			iLocal_2180 = create_pickup(-70127024, 1342.1f, -1371.3f, 83.7f, 8 | 16, -1, true, 0, 0, 0f, 0);
			break;
		case 24:
			func_1321(52, 1);
			break;
		case 25:
			func_1321(53, 1);
			break;
		case 26:
			func_1321(54, 1);
			break;
		case 27:
			func_1321(55, 1);
			break;
		case 28:
			func_1321(56, 1);
			break;
		case 29:
			func_1321(57, 1);
			break;
		case 30:
			func_483(uParam0, 28, 0);
			break;
		case 31:
			remove_all_ped_weapons(&(Local_218[52]), true, true);
			break;
		case 32:
			func_1393(&(Local_218[52]), &(iLocal_1390[13]), -1, 1, 0, 1056964608, 1065353216, 0);
			break;
		case 33:
			iLocal_2187 = 2147483647;
			break;
	}
	if (!iVar2184 == 2147483647)
	{
		iLocal_2187 = iVar2184 + 1;
	}
}

bool func_1413(var uParam0)
{
	return *uParam0 == *uParam0;
}

void func_1414(var uParam0, int iParam1, int iParam2, int iParam3, char* sParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	if (!func_490(uParam0, iParam1))
	{
		if (!func_1910(uParam0, iParam1, &iVar0))
		{
			if (!func_1911(uParam0, &iVar0))
			{
				return;
			}
		}
	}
	else
	{
		return;
	}
	func_985(uParam0->f_5423[iVar0], 1);
	uParam0->f_5423[iVar0] = iParam1;
	if (is_entity_a_ped(iParam1) && is_ped_human(get_ped_index_from_entity_index(iParam1)))
	{
		func_985(uParam0->f_5423[iVar0], 128);
	}
	if (does_entity_exist(iParam3))
	{
		if (func_1535(iParam3))
		{
			uParam0->f_5423[iVar0]->f_1 = iParam3;
			func_985(uParam0->f_5423[iVar0], 4);
			func_985(uParam0->f_5423[iVar0], 16);
		}
		else if (is_entity_a_vehicle(iParam3))
		{
			uParam0->f_5423[iVar0]->f_1 = iParam3;
			func_985(uParam0->f_5423[iVar0], 4);
			func_985(uParam0->f_5423[iVar0], 8);
		}
	}
	uParam0->f_5423[iVar0]->f_4 = sParam4;
	uParam0->f_5423[iVar0]->f_7 = iParam5;
	uParam0->f_5423[iVar0]->f_6 = iParam6;
	if (is_entity_a_ped(iParam1))
	{
		if (iParam8 == -1)
		{
			if (get_ped_index_from_entity_index(iParam1) == func_239(7))
			{
				uParam0->f_5423[iVar0]->f_9 = 40;
			}
			else
			{
				uParam0->f_5423[iVar0]->f_9 = func_1912(iParam1);
			}
		}
		else
		{
			uParam0->f_5423[iVar0]->f_9 = iParam8;
		}
		if (iParam8 > -1 && iParam8 < 27)
		{
			uParam0->f_5423[iVar0]->f_10 = iParam8;
		}
		if (func_508(uParam0->f_5423[iVar0]->f_10))
		{
		}
	}
	uParam0->f_13145++;
	if (is_entity_an_object(iParam1))
	{
		if (_0x26054eb81ac0893b(get_object_index_from_entity_index(iParam1)))
		{
			_0x2dd42fad06e6f19e(get_object_index_from_entity_index(iParam1), 1, 1);
		}
	}
	else if (is_entity_a_ped(iParam1))
	{
		iVar1 = 0;
		while (iVar1 < 10)
		{
			uParam0->f_5423[iVar0]->f_23[iVar1]->f_3 = 285190;
			iVar1++;
		}
		func_1913(uParam0, iParam1, 2, 4);
		func_1914(uParam0, iParam1, 2500, 8);
		func_1914(uParam0, iParam1, 2500, 512);
		func_1915(uParam0, iParam1, 5000, 512);
		if (uParam0->f_5423[iVar0]->f_9 == 14)
		{
			func_1916(uParam0, iParam1, -2147483648);
		}
	}
}

void func_1415(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	func_1877(iParam0, 1056964608);
	func_1878(iParam0, 1);
	render_script_cams(true, false, 3000, true, false, 0);
	func_1917(iParam0);
}

bool func_1416()
{
	iVar0 = _0x9f67929d98e7c6e8(Global_35, -1101297303, 0, 1);
	iVar1 = _0x9f67929d98e7c6e8(Global_35, 416676503, 0, 1);
	bVar2 = !iVar0 == false;
	bVar3 = !iVar1 == false;
	bVar4 = has_ped_got_weapon(Global_35, 392538360, 0, true);
	if (bVar2)
	{
		if (get_ped_ammo_by_type(Global_35, 1681219929) > 0)
		{
			return false;
		}
	}
	if (bVar3)
	{
		if (get_ped_ammo_by_type(Global_35, 1950175060) > 0)
		{
			return false;
		}
	}
	if (bVar4)
	{
		if (get_ped_ammo_by_type(Global_35, -1878508229) > 0)
		{
			return false;
		}
	}
	return true;
}

void func_1417()
{
	iVar0 = 42;
	while (iVar0 <= 57)
	{
		if ((iVar0 == 56 || iVar0 == 57) || iVar0 == 55)
		{
		}
		else if (!is_entity_dead(&(Local_218[iVar0])))
		{
			_set_entity_health(&(Local_218[iVar0]), 0, 0);
		}
		iVar0++;
	}
}

int func_1418(var uParam0)
{
	if (does_blip_exist(*uParam0))
	{
		_blip_set_modifier(*uParam0, -1269631044);
		return 0;
	}
	return 1;
}

void func_1419(int iParam0, bool bParam1, float fParam2, float fParam3, int iParam4)
{
	use_waypoint_recording_as_assisted_movement_route(func_525(iParam0), bParam1, fParam2, fParam3, iParam4);
	if (bParam1)
	{
		func_413(23);
	}
	else
	{
		func_174(23);
	}
}

void func_1420()
{
	set_entity_proofs(&(iLocal_979[0]), 7, false);
	set_entity_invincible(&(iLocal_979[0]), true);
	set_entity_proofs(&(iLocal_979[0]), 8, false);
	set_vehicle_wheels_can_break(&(iLocal_979[0]), false);
	_0xd826690b5cf3beff(&(iLocal_979[0]), 0f);
	_0x850ce59dec2028f3(&(iLocal_979[0]), 0);
}

void func_1421(int iParam0, int iParam1)
{
	iVar1 = iParam0;
	while (iVar1 <= iParam1)
	{
		iVar2 = func_1422(iVar1);
		switch (iVar2)
		{
			case 73:
				iVar0 = 58;
				break;
			case 74:
				iVar0 = 59;
				break;
			default:
				break;
		}
		func_1321(iVar0, 1);
		_set_lights_intensity_for_entity(&(Local_1692[iVar0]), 2f);
		Var3 = { func_1357(iVar0) };
		attach_entity_to_entity(&(Local_1692[iVar0]), &(Local_218[iVar2]), get_ped_bone_index(&(Local_218[iVar2]), 0), Var3, Var3.f_3, false, false, false, false, 2, true, false, false);
		iVar1++;
	}
}

int func_1422(int iParam0)
{
	switch (iParam0)
	{
		case 7:
			return 1;
		case 14:
			return 18;
		case 15:
			return 19;
		case 17:
			return 20;
		case 58:
			return 73;
		case 59:
			return 74;
		case 60:
			return 75;
		case 61:
			return 76;
		case 62:
			return 77;
		case 65:
			return 78;
		case 66:
			return 79;
		case 69:
			return 80;
		case 70:
			return 81;
		case 71:
			return 82;
		case 72:
			return 83;
	}
	return -1;
}

int func_1423(int iParam0)
{
	if (!func_214(iParam0))
	{
		return -1;
	}
	return func_1918(iParam0);
}

void func_1424(var uParam0, char[4] cParam1)
{
	func_1446(&(uParam0->f_7375), cParam1, func_162(uParam0, func_33(uParam0)) != 5);
}

void func_1425(var uParam0, char* sParam1)
{
	if (is_string_null_or_empty(sParam1))
	{
		return;
	}
	StringCopy(&(uParam0->f_806), sParam1, 64);
}

void func_1426()
{
	iVar0 = _0x635423d55ca84fc8(&(Local_1429[2]));
	iVar1 = 0;
	while (iVar1 <= (iVar0 - 1))
	{
		iVar2 = get_train_carriage(Local_1429[2]->f_7, iVar1);
		if (does_entity_exist(iVar2))
		{
			if ((is_entity_touching_entity(&(iLocal_979[0]), iVar2) || is_entity_touching_entity(&(iLocal_979[0]), iVar2)) || is_entity_touching_entity(&(iLocal_979[0]), iVar2))
			{
				Local_985[8]->f_5 = 4;
			}
		}
		iVar1++;
	}
}

void func_1427()
{
	if (iVar2188 > 2)
	{
		return;
	}
	if ((does_entity_exist(&(Local_1692[60])) && is_entity_dead(&(Local_1692[60]))) && does_entity_exist(&(iLocal_979[4])))
	{
		if (!func_26(vLocal_1840[31]))
		{
			func_27(vLocal_1840[31], 0);
		}
		else
		{
			iVar0 = -1;
			switch (iVar2188)
			{
				case 0:
					if (func_924(vLocal_1840[31]) >= 0.1f)
					{
						vVar1 = { _get_object_offset_from_coords(get_entity_coords(&(iLocal_979[4]), false, false), get_entity_heading(&(iLocal_979[4])), -2f, -2f, 0f) };
						iVar0 = 25;
						fVar4 = 1f;
						func_244(vLocal_1840[31]);
						uLocal_2190 = iVar2188 + 1;
					}
					break;
				case 1:
					if (func_924(vLocal_1840[31]) >= 0.2f)
					{
						vVar1 = { _get_object_offset_from_coords(get_entity_coords(&(iLocal_979[4]), false, false), get_entity_heading(&(iLocal_979[4])), 0f, 2f, 0f) };
						iVar0 = 25;
						fVar4 = 0.5f;
						func_244(vLocal_1840[31]);
						uLocal_2190 = iVar2188 + 1;
					}
					break;
				case 2:
					if (func_924(vLocal_1840[31]) >= 0.15f)
					{
						vVar1 = { _get_object_offset_from_coords(get_entity_coords(&(iLocal_979[4]), false, false), get_entity_heading(&(iLocal_979[4])), 1f, 0f, 1f) };
						iVar0 = 25;
						fVar4 = 1.5f;
						func_244(vLocal_1840[31]);
						uLocal_2190 = iVar2188 + 1;
					}
					break;
			}
			if (!iVar0 == -1)
			{
				add_explosion(vVar1, iVar0, fVar4, true, false, 1f);
				if (iVar2188 > 2)
				{
					if (does_entity_exist(&(Local_218[67])) && does_entity_exist(&(Local_218[68])))
					{
						if (is_ped_in_any_vehicle(&(Local_218[67]), false))
						{
							_0x8886d83a430537fd(&(Local_218[67]), 2097152);
						}
						if (is_ped_in_any_vehicle(&(Local_218[68]), false))
						{
							_0x8886d83a430537fd(&(Local_218[68]), 2097152);
						}
						apply_force_to_entity(&(Local_218[67]), 1, 5f, 0f, 22f, 0f, 0f, 0f, 0, false, false, true, true, true);
						apply_force_to_entity(&(Local_218[68]), 1, -5f, 0f, 22f, 0f, 0f, 0f, 0, false, false, true, true, true);
						start_entity_fire(&(Local_218[67]), 100f, 0, 0);
						start_entity_fire(&(Local_218[68]), 100f, 0, 0);
					}
				}
			}
		}
	}
}

int func_1428()
{
	if (is_entity_dead(&(iLocal_979[0])) || !is_waypoint_playback_going_on_for_vehicle(&(iLocal_979[0]), func_525(71)))
	{
		return -1;
	}
	if (waypoint_recording_get_closest_waypoint(func_525(71), get_entity_coords(&(iLocal_979[0]), true, false), &uVar0))
	{
		return uVar0;
	}
	return -1;
}

void func_1429(var uParam0)
{
	if (does_entity_exist(Local_1429[2]->f_7) && !is_entity_dead(Local_1429[2]->f_7))
	{
		if (!iVar2189 >= 46)
		{
			set_train_speed(Local_1429[2]->f_7, 0f);
			bVar1 = true;
		}
	}
	switch (Local_1429[2]->f_6)
	{
		case 0:
			Local_1429[2]->f_6 = 1;
			break;
		case 1:
			if (iVar2189 >= 33)
			{
				Local_1429[2]->f_6 = 2;
			}
			break;
		case 2:
			iVar0 = 19;
			while (iVar0 <= 24)
			{
				func_1282(iVar0);
				iVar0++;
			}
			bVar2 = true;
			iVar0 = 19;
			while (iVar0 <= 24)
			{
				if (!func_1322(iVar0))
				{
					bVar2 = false;
				}
				else
				{
					iVar0++;
				}
			}
			if (bVar2)
			{
				if (func_1853(&(Local_1429[2])))
				{
					func_1282(func_1294(21));
					Local_1429[2]->f_6 = 3;
				}
			}
			break;
		case 3:
			if (func_1322(func_1294(21)))
			{
				Local_1429[2]->f_6 = 4;
			}
			break;
		case 4:
			Local_1429[2]->f_6 = 5;
			break;
		case 5:
			if (!func_1296(uParam0, 21, 21, 2051))
			{
			}
			else
			{
				Local_1429[2]->f_7 = _create_mission_train(&(Local_1429[2]), Local_1429[2]->f_1, Local_1429[2]->f_4, Local_1429[2]->f_5, true, true);
				Local_1429[2]->f_6 = 6;
				Jump @1434; //curOff = 383
				if (!_0xbd3c4a2ed509205e(Local_1429[2]->f_7))
				{
				}
				else
				{
					Local_218[22] = _0x2963b5c1637e8a27(Local_1429[2]->f_7);
					if (does_entity_exist(&(Local_218[22])) && !is_entity_dead(&(Local_218[22])))
					{
						func_942(22, 1);
						set_ped_relationship_group_hash(&(Local_218[22]), -1538724068);
						set_entity_invincible(&(Local_218[22]), true);
					}
					_0x4182c037aa1f0091(Local_1429[2]->f_7, 0);
					set_blocking_of_non_temporary_events(&(Local_218[21]), true);
					iVar3 = get_train_carriage(Local_1429[2]->f_7, 3);
					if (does_entity_exist(iVar3))
					{
						attach_entity_to_entity(&(Local_218[21]), iVar3, 0, -0.88f, -9.37f, 1.82f, 0f, 0f, 128.16f, true, false, false, false, 2, true, false, false);
					}
					task_cower(&(Local_218[21]), -1, Global_35, 0);
					set_ped_can_be_targetted(&(Local_218[21]), false);
					Local_1429[2]->f_6 = 7;
					Jump @1434; //curOff = 611
					if (is_entity_dead(Local_1429[2]->f_7))
					{
						return;
					}
					if (bVar1)
					{
						return;
					}
					fLocal_2191 = Local_1429[2]->f_8;
					if (!func_167(175))
					{
						if (!func_167(174))
						{
							if (!func_167(172))
							{
								if (func_914(&(iLocal_979[0]), Local_1429[2]->f_7, 1, 1) <= 40f)
								{
									func_27(vLocal_1840[33], 0);
									func_413(172);
								}
							}
							else if (func_924(vLocal_1840[33]) <= 8f)
							{
								fLocal_2191 = func_1647(Local_1429[2]->f_8, 3f, (func_924(vLocal_1840[33]) / 8f));
							}
							else
							{
								fLocal_2191 = 3f;
								func_413(174);
								func_174(172);
							}
						}
						if (!func_167(173))
						{
							if (!is_entity_dead(&(iLocal_979[0])) && is_entity_in_volume(&(iLocal_979[0]), Local_141.f_28, true, 0))
							{
								func_500(uParam0, 3);
								func_520(62);
								func_483(uParam0, 90, 0);
								func_483(uParam0, 63, 0);
								func_483(uParam0, 64, 0);
								uParam0->f_5302 = 0;
								func_1857(uParam0, func_1279(Local_1457[17]->f_11), -1082130432, 0, 0, -1, -1, 0);
								func_27(vLocal_1840[33], 1);
								func_413(173);
								Local_1429[2]->f_8 = (Local_1429[2]->f_8 * 1.5f);
							}
						}
						else if (func_924(vLocal_1840[33]) <= 3f)
						{
							fLocal_2191 = func_1647(3f, Local_1429[2]->f_8, (func_924(vLocal_1840[33]) / 3f));
						}
						else
						{
							fLocal_2191 = Local_1429[2]->f_8;
							func_174(173);
							func_413(175);
						}
					}
					if (!fVar2188 < 0f)
					{
						set_train_speed(Local_1429[2]->f_7, fVar2188);
					}
					if (!func_167(168))
					{
						if (is_entity_in_volume(&(iLocal_979[0]), Local_141.f_27, true, 0))
						{
							iLocal_1825[1] = _blip_add_for_entity(-399496385, Local_1429[2]->f_7);
							_blip_set_modifier(&(iLocal_1825[1]), -505526371);
							iLocal_1837 = 0;
							func_47(0, 0);
							func_1884(&(uParam0->f_5310), func_1883(105), 0, -1, 0, 0);
							_0xcfe122ec635cc2b2(Local_1429[2]->f_7, "DANGER", 0, 0);
							func_413(168);
						}
					}
					if (func_167(168))
					{
						if (!func_167(169))
						{
							if (!is_entity_dead(&(iLocal_979[0])) && is_entity_in_volume(&(iLocal_979[0]), Local_141.f_28, true, 0))
							{
								remove_blip(iLocal_1825[1]);
								func_1884(&(uParam0->f_5310), func_1883(106), 0, -1, 0, 0);
								_0x6703872ec09bc158(Local_1429[2]->f_7, 0);
								func_413(169);
							}
						}
					}
					else if (func_914(Global_35, Local_1429[2]->f_7, 1, 1) >= 500f && is_entity_occluded(Local_1429[2]->f_7))
					{
						Local_1429[2]->f_6 = 12;
					}
					Jump @1434; //curOff = 1342
					func_483(uParam0, 21, 0);
					func_483(uParam0, 22, 0);
					delete_mission_train(&(Local_1429[2]->f_7));
					func_522(func_1294(21));
					iVar0 = 19;
					while (iVar0 <= 24)
					{
						func_522(iVar0);
						iVar0++;
					}
					func_1919(&(Local_1429[2]));
					Local_1429[2]->f_6 = 13;
				}
			}
			default:
				break;
	}
}

void func_1430(var uParam0)
{
	iVar0 = 58;
	while (iVar0 <= 72)
	{
		if (Local_218[iVar0]->f_2 == 11 || Local_218[iVar0]->f_2 == 0)
		{
		}
		else if (is_entity_dead(&(Local_218[iVar0])))
		{
			if (Local_1457[17]->f_1 == 1)
			{
				func_1338(17);
			}
			if (func_1920(iVar0))
			{
				iVar1 = func_1422(iVar0);
				if (!iVar1 == -1)
				{
					if (!is_entity_dead(&(Local_218[func_1422(iVar0)])))
					{
						task_smart_flee_ped(&(Local_218[func_1422(iVar0)]), Global_35, -1f, -1, 0, 1077936128, 0);
						set_ped_keep_task(&(Local_218[func_1422(iVar0)]), true);
						set_ped_config_flag(&(Local_218[func_1422(iVar0)]), 230, true);
						set_ped_as_no_longer_needed(Local_218[func_1422(iVar0)]);
						func_942(func_1422(iVar0), 0);
					}
				}
			}
			if (func_1921(&(Local_218[iVar0]), Global_35))
			{
				if (func_1438())
				{
					if (iVar2189 < 56 || iVar2189 > 70)
					{
						if (func_1379())
						{
							func_1276(96);
						}
						else
						{
							func_1276(97);
						}
					}
				}
			}
			func_942(iVar0, 11);
		}
		else
		{
			switch (Local_218[iVar0]->f_2)
			{
				case 1:
					if (!_0xa0bc8faed8cfeb3c(&(Local_218[iVar0])))
					{
					}
					else if (func_1922(iVar0))
					{
						if (!_0xa0bc8faed8cfeb3c(&(Local_218[func_1422(iVar0)])))
						{
						}
						else
						{
							if (func_1920(iVar0))
							{
								func_1834(func_1422(iVar0), 1);
								func_1839(&(Local_218[func_1422(iVar0)]), 551416228);
							}
							func_1834(iVar0, 1);
							if (func_1922(iVar0))
							{
								_set_ped_on_mount(&(Local_218[iVar0]), &(Local_218[func_1422(iVar0)]), -1, true);
							}
							else
							{
								vVar2 = { func_931(iVar0, 0, 4) };
								_set_entity_coords_and_heading(&(Local_218[iVar0]), vVar2, vVar2.f_3, true, false, true);
								_0x9587913b9e772d29(&(Local_218[iVar0]), 0);
							}
							if (func_1920(iVar0))
							{
								vVar2 = { func_931(func_1422(iVar0), 0, 4) };
								_set_entity_coords_and_heading(&(Local_218[func_1422(iVar0)]), vVar2, vVar2.f_3, true, false, true);
								_0x9587913b9e772d29(&(Local_218[func_1422(iVar0)]), 0);
							}
							if (iVar0 == 67)
							{
								set_ped_into_vehicle(&(Local_218[iVar0]), &(iLocal_979[4]), -1);
							}
							else if (iVar0 == 68)
							{
								set_ped_into_vehicle(&(Local_218[iVar0]), &(iLocal_979[4]), 0);
							}
							func_942(iVar0, 2);
							Jump @2503; //curOff = 660
							if (func_167(0))
							{
							}
							else
							{
								func_1393(&(Local_218[iVar0]), func_1923(iVar0, 1), -1, 3, 0, 1056964608, 1065353216, 0);
								func_413(0);
								if (!func_1923(iVar0, 0) == 0)
								{
									func_942(iVar0, 3);
								}
								else
								{
									func_942(iVar0, 14);
								}
								Jump @2503; //curOff = 742
								if (func_167(0))
								{
								}
								else
								{
									if (func_1923(iVar0, 0) == &iLocal_1390[14])
									{
										_give_weapon_to_ped_2(&(Local_218[iVar0]), func_1923(iVar0, 0), 100, true, false, 1, false, 0.5f, 1f, 752097756, true, 0f, false);
									}
									else
									{
										func_1393(&(Local_218[iVar0]), func_1923(iVar0, 0), -1, 3, 0, 1056964608, 1065353216, 0);
									}
									func_413(0);
									func_942(iVar0, 14);
									Jump @2503; //curOff = 863
									func_942(iVar0, 15);
									Jump @2503; //curOff = 874
									switch (iVar0)
									{
										case 58:
										case 59:
											if (iVar2189 >= 1)
											{
												if (iVar0 == 58)
												{
													func_145(uParam0, &(Local_218[iVar0]), "EXC_OPED1", 0);
													func_1276(103);
													set_gameplay_entity_hint(&(Local_218[iVar0]), 0f, 0f, 0f, true, 2000, 2000, 2000, 0);
													func_1325(uParam0, 17);
												}
												func_942(iVar0, 4);
											}
											break;
										case 60:
											if (iVar2189 >= 20)
											{
												func_483(uParam0, 56, 0);
												func_483(uParam0, 57, 0);
												func_942(iVar0, 4);
											}
											break;
										case 61:
											if (iVar2189 >= 24)
											{
												if (func_1924() > 4)
												{
													func_942(iVar0, 9);
												}
												else
												{
													func_942(iVar0, 4);
												}
											}
											break;
										case 62:
											if (iVar2189 >= 32)
											{
												if (func_1924() > 4)
												{
													func_942(iVar0, 9);
												}
												else
												{
													func_942(iVar0, 4);
												}
											}
											break;
										case 63:
										case 64:
											if (iVar2189 >= 41)
											{
												func_942(iVar0, 4);
											}
											break;
										case 65:
										case 66:
											if (iVar2189 >= 46)
											{
												if (func_1924() > 4)
												{
													func_942(iVar0, 9);
												}
												else
												{
													func_942(iVar0, 4);
												}
											}
											break;
										case 67:
										case 68:
											if (iVar2189 >= 51)
											{
												func_942(iVar0, 4);
											}
											break;
										case 69:
										case 70:
											if (iVar2189 >= 59)
											{
												func_942(iVar0, 4);
											}
											break;
										case 71:
										case 72:
											if (iVar2189 >= 85)
											{
												func_942(iVar0, 4);
											}
											break;
									}
									Jump @2503; //curOff = 1273
									func_1285(uParam0, iVar0, 1, 1);
									switch (iVar0)
									{
										case 58:
										case 59:
											func_1822();
											task_mount_animal(0, &(Local_218[func_1422(iVar0)]), 20000, -1, 3f, 536870916, 0, 0);
											func_1925();
											func_1823(&(Local_218[iVar0]), 0);
											break;
										case 60:
											func_1822();
											task_go_straight_to_coord(0, 1349.9f, -1307.8f, 76.2f, 2.5f, 20000, 40000f, 2f, 1);
											func_1925();
											func_1823(&(Local_218[iVar0]), 0);
											break;
										case 61:
											func_1822();
											task_go_straight_to_coord(0, 1303.4f, -1301.3f, 76f, 2.5f, 20000, 40000f, 2f, 1);
											func_1925();
											func_1823(&(Local_218[iVar0]), 0);
											break;
										case 62:
											func_1822();
											task_go_straight_to_coord(0, 1329.7f, -1268.7f, 76.6f, 2.5f, 20000, 40000f, 2f, 1);
											func_1925();
											func_1823(&(Local_218[iVar0]), 0);
											break;
										case 63:
										case 64:
											vVar2 = { func_931(iVar0, 1, 4) };
											set_ped_sphere_defensive_area(&(Local_218[iVar0]), vVar2, 5f, 1, 0, 0);
											func_1822();
											task_combat_ped(0, Global_35, 0, 0);
											func_1823(&(Local_218[iVar0]), 0);
											break;
										case 65:
										case 66:
											func_1822();
											task_go_straight_to_coord(0, func_1851(iVar0 == 65, 1251.4f, -1181.2f, 78.8f, 1243.536f, -117.89f, 78.3041f), 2.5f, 20000, 40000f, 2f, 1);
											func_1925();
											func_1823(&(Local_218[iVar0]), 0);
											break;
										case 67:
											_task_vehicle_drive_to_destination(&(Local_218[iVar0]), &(iLocal_979[4]), func_178(11, 4), 10f, 0, 3, 3f, 1f, 0);
											func_27(vLocal_1840[32], 0);
											break;
										case 68:
											func_1822();
											task_combat_ped(0, Global_35, 0, 0);
											func_1823(&(Local_218[iVar0]), 0);
											break;
										case 69:
											func_1822();
											task_follow_waypoint_recording(0, func_525(70), 0, 4194304, -1, 0, 1, -1);
											task_combat_ped(0, Global_35, 33554432, 0);
											func_1823(&(Local_218[iVar0]), 0);
											break;
										case 70:
											func_1822();
											task_follow_waypoint_recording(0, func_525(70), 0, 4194304, 9, 0, 1, -1);
											func_1925();
											func_1823(&(Local_218[iVar0]), 0);
											break;
										case 71:
										case 72:
											func_1822();
											task_go_straight_to_coord(0, 980.8f, -970.7f, 61.4f, 2.5f, 20000, 40000f, 0f, 1);
											func_1925();
											func_1823(&(Local_218[iVar0]), 0);
											break;
										default:
											func_1822();
											func_1925();
											func_1823(&(Local_218[iVar0]), 0);
											break;
									}
									func_942(iVar0, 5);
									Jump @2503; //curOff = 2000
									if (!func_1842(iVar0, 64))
									{
										func_1926(iVar0);
									}
									if (!func_167(176))
									{
										if ((is_ped_shooting(&(Local_218[iVar0])) && is_entity_in_volume(&(Local_218[iVar0]), Local_141.f_34, true, 0)) && func_1438())
										{
											func_1443(iVar0, 1, 2);
											func_1276(104);
											func_413(176);
										}
									}
									switch (iVar0)
									{
										case 58:
										case 59:
											if (!func_167(160))
											{
												if (is_entity_dead(&(Local_218[func_1422(iVar0)])))
												{
													if (func_1438())
													{
														func_1276(101);
														func_413(160);
													}
												}
											}
											break;
										case 67:
											if (func_924(vLocal_1840[32]) >= 4.3f)
											{
												bring_vehicle_to_halt(&(iLocal_979[4]), 3f, -1, false);
												task_combat_ped(&(Local_218[iVar0]), Global_35, 0, 0);
												func_942(iVar0, 7);
											}
											break;
									}
									Jump @2503; //curOff = 2227
									if (does_entity_exist(get_mount(&(Local_218[iVar0]))) && !is_entity_dead(get_mount(&(Local_218[iVar0]))))
									{
										func_1834(iVar0, 1);
										func_1822();
										task_horse_action(0, 2, 0, 0);
										task_smart_flee_ped(0, Global_35, -1f, -1, 0, 2.5f, 0);
										func_1823(get_mount(&(Local_218[iVar0])), 0);
									}
									func_27(&(Local_218[iVar0]->f_5), 1);
									func_942(iVar0, 22);
									Jump @2503; //curOff = 2339
									if ((func_1920(iVar0) && !is_ped_on_mount(&(Local_218[iVar0]))) || func_924(&(Local_218[iVar0]->f_5)) >= 8f)
									{
										task_smart_flee_ped(&(Local_218[iVar0]), Global_35, -1f, -1, 0, 1077936128, 0);
										func_942(iVar0, 10);
									}
									Jump @2503; //curOff = 2421
									if (func_1275(34, 0))
									{
										if (func_914(Global_35, &(Local_218[iVar0]), 1, 1) >= 100f)
										{
											func_942(iVar0, 27);
										}
									}
									Jump @2503; //curOff = 2466
									func_483(uParam0, iVar0, 0);
									if (func_1920(iVar0))
									{
										func_483(uParam0, func_1422(iVar0), 0);
									}
								}
							}
						}
						iVar0++;
					}
					default:
						break;
			}
		}
	}
}

void func_1431(var uParam0)
{
	if ((func_924(vLocal_1840[30]) >= fVar2185 && func_1438()) && iVar2189 <= 100)
	{
		iVar0 = -1;
		iVar0 = 58;
		while (iVar0 <= 72)
		{
			if (((Local_218[iVar0]->f_2 == 5 && !is_entity_dead(&(Local_218[iVar0]))) && get_distance_between_coords(get_entity_coords(&(Local_218[iVar0]), true, false), get_entity_coords(Global_35, true, false), true) <= 40f) && Local_218[iVar0]->f_2 == 5)
			{
			}
			else
			{
			}
		}