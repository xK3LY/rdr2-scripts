void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_16 = 424175505;
	iLocal_17 = 2096716952;
	iLocal_18 = -1101883765;
	iLocal_19 = -1038436471;
	iLocal_20 = 662578349;
	iLocal_21 = -1866132622;
	iLocal_22 = 98537260;
	iLocal_23 = 1110710183;
	iLocal_24 = -1613317544;
	iLocal_25 = 987342453;
	iLocal_26 = 421820477;
	iLocal_27 = 930348307;
	iLocal_28 = 1206116866;
	iLocal_29 = 1946434792;
	iLocal_30 = 319326044;
	iLocal_31 = -1543503143;
	iLocal_32 = -895862876;
	iLocal_33 = 2038507899;
	iLocal_34 = 604616887;
	iLocal_35 = -308302453;
	iLocal_36 = -1608851079;
	iLocal_37 = -1971689092;
	iLocal_38 = 506543199;
	iLocal_39 = -1321878957;
	iLocal_40 = 602959793;
	iLocal_41 = -1124798335;
	iLocal_42 = -693389207;
	iLocal_43 = 686051865;
	iLocal_44 = 1446935015;
	iLocal_46 = 1;
	iLocal_47 = 2;
	iLocal_48 = 3;
	iLocal_49 = 4;
	iLocal_50 = 5;
	iLocal_51 = 6;
	iLocal_52 = 7;
	iLocal_53 = 8;
	iLocal_54 = 9;
	iLocal_55 = 10;
	iLocal_56 = 25;
	sLocal_233 = "SAD3_escape";
	sLocal_234 = "SAD3_deer";
	sLocal_235 = "SAD3_sadierock2";
	vLocal_1511 = { -871.9307f, -1315.479f, 42.01345f };
	vLocal_1514 = { 1345.198f, -1306.681f, 75.5891f };
	vLocal_1517 = { 1346.474f, -1307.467f, 75.7176f };
	vLocal_1520 = { -803.2571f, -1304.708f, 43.4369f };
	vLocal_1523 = { 1345.7f, -1309.632f, 75.5715f };
	vLocal_1526 = { 720.4483f, -465.4479f, 78.384f };
	vLocal_1529 = { 724.0611f, -469.3934f, 84.91f };
	vLocal_1532 = { 589.7024f, -626.6352f, 41.3619f };
	vLocal_1535 = { -629.8112f, -43.57942f, 83.42968f };
	vLocal_1538 = { 1355.707f, -1311.12f, 76.8407f };
	vLocal_1544 = { -524.1154f, -443.0937f, 80.7662f };
	vLocal_1547 = { -804.3852f, -1307.947f, 42.5442f };
	iLocal_1692 = -1;
	iLocal_1831 = 14;
	if (has_force_cleanup_occurred(4642))
	{
		func_1(&uLocal_1936, 1073741824);
		func_2(&uLocal_1936, 1);
		terminate_this_thread();
	}
	while (!func_3(64))
	{
		wait(0);
	}
	func_4(&uScriptParam_0, &uLocal_1936);
	func_5(&uLocal_1936);
	while (!func_6(&uLocal_1936, -2147483648))
	{
		func_7(&uLocal_1936);
		wait(0);
	}
	while (!func_2(&uLocal_1936, 0))
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
	func_163();
	func_164(127);
	func_164(127);
	func_164(71);
	func_164(918);
	func_164(919);
	func_164(885);
	func_164(780);
	func_164(111);
	func_164(112);
	func_164(113);
	func_164(114);
	func_164(71);
	func_164(939);
	func_165(127, 32);
	func_165(127, 32);
	func_165(71, 32);
	func_165(918, 32);
	func_165(919, 32);
	func_165(885, 32);
	func_165(780, 32);
	func_165(111, 32);
	func_165(112, 32);
	func_165(113, 32);
	func_165(114, 32);
	func_165(71, 32);
	func_165(939, 32);
	func_166(0);
	set_random_trains(true);
	func_167(0, 0, 1103626240);
	func_168(135028740);
	if (iVar1689 != -1)
	{
		_0x87247bc60b60bed8(iVar1689);
	}
	pause_clock(false, 0);
	func_169(26, 1);
	func_170(1, 0, 0);
	func_171(23, 2, 0, 0);
	func_172(cParam0, 0);
	clear_ped_tasks(Global_35, 1, 0);
	set_player_control(player_id(), true, 0, false);
	_0x74c2b3dc0b294102(&(iLocal_1784[0]));
	if (_does_volume_exist(&(iLocal_1784[2])))
	{
		_0xd17672447692478e(&(iLocal_1784[2]), 0);
	}
	if (_does_volume_exist(&(iLocal_1784[3])))
	{
		_0xd17672447692478e(&(iLocal_1784[3]), 0);
	}
	if (_does_volume_exist(&(iLocal_1784[4])))
	{
		_0xd17672447692478e(&(iLocal_1784[4]), 0);
	}
	if (_does_volume_exist(&(iLocal_1784[24])))
	{
		func_173(&uLocal_1825, &(iLocal_1784[24]), 0);
		_0x2c87c3e1c7b96ee2(&(iLocal_1784[24]));
		_0xd17672447692478e(&(iLocal_1784[24]), 0);
	}
	if (_does_volume_exist(&(iLocal_1784[25])))
	{
		_0xd17672447692478e(&(iLocal_1784[25]), 0);
	}
	if (_does_volume_exist(&(iLocal_1784[14])))
	{
		_0xd17672447692478e(&(iLocal_1784[14]), 0);
	}
	if (_does_volume_exist(iVar1813))
	{
		_delete_volume(iVar1813);
	}
	func_173(&uLocal_1820, &(iLocal_1784[10]), 0);
	func_173(&uLocal_1821, &(iLocal_1784[5]), 0);
	func_173(&uLocal_1824, &(iLocal_1784[12]), 0);
	iVar0 = 0;
	while (iVar0 < 31)
	{
		func_174(&(iLocal_1784[iVar0]));
		iVar0++;
	}
	if (_does_volume_exist(iVar1814))
	{
		_delete_volume(iVar1814);
	}
	iVar0 = 0;
	while (iVar0 < 26)
	{
		if (does_entity_exist(&(iLocal_1406[iVar0])))
		{
			set_object_as_no_longer_needed(iLocal_1406[iVar0]);
		}
		iVar0++;
	}
	func_175(&iLocal_245, 0);
	iVar0 = 0;
	while (iVar0 < 51)
	{
		_0x3088634cf8c819cf(&(Local_264[iVar0]));
		func_175(Local_264[iVar0], 0);
		iVar0++;
	}
	if (does_entity_exist(iVar1437))
	{
		delete_vehicle(&iLocal_1440);
	}
	_0x3088634cf8c819cf(&(Local_1285[0]));
	iVar0 = 0;
	while (iVar0 < 5)
	{
		func_175(Local_1285[iVar0], 0);
		iVar0++;
	}
	if (does_entity_exist(iVar1383))
	{
		func_175(&Local_1386, 0);
	}
	if (does_entity_exist(iLocal_252))
	{
		set_blocking_of_non_temporary_events(iLocal_252, false);
		clear_ped_tasks(iLocal_252, 1, 0);
		func_175(&iLocal_252, 1);
	}
	if (does_entity_exist(&(iLocal_1406[10])))
	{
		delete_object(iLocal_1406[10]);
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (does_entity_exist(&(vLocal_1433[iVar0])))
		{
			delete_object(vLocal_1433[iVar0]);
		}
		iVar0++;
	}
	func_176(&iLocal_1453);
	func_177(&iLocal_1505);
	func_177(&iLocal_1506);
	func_178(7, 32);
	func_179(11, 0);
	func_48(64);
	func_180(&iLocal_253, 0);
	func_175(&iLocal_247, 0);
	func_175(&iLocal_248, 0);
	func_181(&uLocal_1823, -622.4772f, -4.7099f, 85.7126f, -634.9652f, -86.7631f, 79.891f, 0, 0);
	func_181(&uLocal_1823, -610.0361f, -41.7956f, 84.0431f, -621.2036f, -14.5686f, 85.4349f, 0, 0);
	func_181(&uLocal_1823, -601.8835f, -56.2411f, 83.0209f, -608.7967f, -55.2669f, 83.3512f, 0, 0);
	func_181(&iLocal_1822, -599.7758f, -3.908978f, 88.6787f, -640.1675f, -78.47929f, 80.32367f, 0, 0);
	func_173(&uLocal_1826, &(iLocal_1784[14]), 0);
	func_173(&uLocal_1827, &(iLocal_1784[15]), 0);
	func_182(-3516232);
	func_182(295238741);
	func_182(1189146288);
	func_182(906448125);
	func_182(410623597);
	func_182(1333038182);
	func_182(-2134577774);
	func_182(1377144884);
	func_182(1705195343);
	func_182(939056123);
	_0x22031584496cfb70(1189146288, 0);
	_0x22031584496cfb70(906448125, 0);
	if (_0x91a5f9cbebb9d936(uVar1815))
	{
		func_173(&uLocal_1818, &(iLocal_1784[8]), 0);
	}
	if (get_ped_config_flag(Global_35, 334, true))
	{
		set_ped_config_flag(Global_35, 334, false);
	}
	if (does_entity_exist(&(uLocal_239[1])))
	{
		set_ped_config_flag(&(uLocal_239[1]), 167, false);
		func_183(&(uLocal_239[1]));
	}
	if (does_entity_exist(&(uLocal_239[0])))
	{
		set_ped_config_flag(&(uLocal_239[0]), 167, true);
		func_183(&(uLocal_239[0]));
	}
	if (does_entity_exist(&(uLocal_239[1])))
	{
		set_ped_config_flag(&(uLocal_239[1]), 454, false);
	}
	if (does_entity_exist(iLocal_250))
	{
		set_ped_config_flag(iLocal_250, 174, false);
	}
	func_57(cParam0, 0, 0, 1);
	func_184(cParam0, 11, &(uLocal_239[1]), 0, 1, 1, 0);
	func_184(cParam0, 4, &(uLocal_239[0]), 0, 1, 1, 0);
	if (func_185(70, 1))
	{
		if (func_186(iLocal_246, 0))
		{
			_set_ped_crouch_movement(iLocal_246, false, 0, false);
		}
		func_187(70, 0, 1, 0, 0);
	}
	_0x19b2c7a6c34fad54(player_id(), 1f);
	freeze_entity_position(Global_35, false);
	iVar0 = 0;
	while (iVar0 < iVar1707)
	{
		_0x9cf1836c03fb67a2(uLocal_1710[iVar0], 0);
		iVar0++;
	}
	clear_weather_type_persist();
	func_188(&iLocal_1775, 0);
	func_188(&iLocal_1776, 0);
	func_189();
	remove_model_hide(656.93f, -1244.209f, 42.748f, 0.5f, -765092724, 0);
	remove_model_hide(656.968f, -1243.799f, 42.77f, 0.5f, 1755911592, 0);
	remove_model_hide(655.923f, -1243.747f, 43.53f, 0.5f, -160914303, 0);
	remove_model_hide(656.056f, -1243.623f, 42.729f, 0.5f, 570671881, 0);
	remove_model_hide(656.819f, -1244.376f, 43.12f, 0.5f, -1700686082, 0);
	remove_model_hide(656.111f, -1244.057f, 42.729f, 0.5f, -274058460, 0);
	if (func_10(iVar1831))
	{
		func_11(&uLocal_1834, 1, 1);
	}
	func_190(-2073072369, 0, 0);
	if (iVar1890 != 0)
	{
		_0xd2b9c78537ed5759(iVar1890);
	}
	iVar0 = 0;
	while (iVar0 < 51)
	{
		if (_is_tracked_point_valid(Local_264[iVar0]->f_19))
		{
			destroy_tracked_point(Local_264[iVar0]->f_19);
		}
		iVar0++;
	}
	if (_is_tracked_point_valid(iVar1690))
	{
		destroy_tracked_point(iVar1690);
	}
	if (_is_tracked_point_valid(iVar1691))
	{
		destroy_tracked_point(iVar1691);
	}
	if (_is_tracked_point_valid(iVar1692))
	{
		destroy_tracked_point(iVar1692);
	}
	_0x43037abfe214a851();
	if (is_srl_loaded())
	{
		end_srl();
	}
	_0x2412216fcc7b4e3e("script@Story@SAD3@ReturnToBeechers");
	_0x2412216fcc7b4e3e("script@Story@SAD3@ride_to_sheriff");
	func_191();
	iVar1 = func_22(cParam0);
	if (iVar1 == 0)
	{
		set_entity_coords(func_192(4), -1593.042f, -1416.316f, 80.7253f, true, false, true, true);
	}
	func_193(4);
	func_193(7);
	if (_0xb8f52a3f84a7cc59(-2146271366))
	{
		_0x6afda2264925bd11(-2146271366);
	}
	if (iVar1 != 0)
	{
		if (get_state_of_rayfire_map_object(iVar1827) != 11)
		{
			set_state_of_rayfire_map_object(iVar1827, 11);
		}
	}
	set_player_control(get_player_index(), true, 0, false);
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
	iVar0 = func_194(*iParam0);
	if ((*Global_1945938)[iVar0]->f_16 != get_id_of_this_thread() && bParam2)
	{
		*iParam0 = 0;
		return;
	}
	func_195(iVar0);
	*iParam0 = 0;
}

int func_12(int iParam0)
{
	if (!func_196(iParam0))
	{
		return 0;
	}
	return (*Global_1835011)[iParam0]->f_1;
}

void func_13(int iParam0, bool bParam1, int iParam2)
{
	if (!func_197(iParam0))
	{
		if (!bParam1)
		{
		}
		return;
	}
	if (!func_198(iParam0) && !func_199(iParam0))
	{
		if (!bParam1)
		{
		}
		return;
	}
	if (func_200(iParam0) == 0)
	{
	}
	if (iParam2 == 2 && !func_198(iParam0))
	{
		iParam2 = -1;
	}
	if (func_201(iParam0) == 3 || (func_201(iParam0) == 1 && _0x01f4d242765c6b24(func_200(iParam0))))
	{
		func_203(func_202(iParam0), func_200(iParam0), iParam2);
		if ((!func_197(Global_1572864->f_8) && !func_204(0, 1, 0)) && !func_205(&Global_1935630, 32768))
		{
			iVar0 = func_206(iParam0);
			if (iVar0 != -1)
			{
				func_207(0);
			}
			else if (func_202(iParam0) == 8)
			{
				iVar0 = func_208();
				if (iVar0 != -1)
				{
					func_207(0);
				}
			}
		}
	}
	func_209(iParam0, 0);
	if (func_210(0) == iParam0)
	{
		func_40(1);
		func_211(0);
		func_212(1);
	}
	func_213(iParam0, 1);
	func_214(iParam0);
}

void func_14()
{
	Global_1572864->f_8 = -1;
	Global_1572864->f_9 = -1;
	Global_1572864->f_10 = -1;
	func_215(0);
	func_216(0);
	func_64(0);
	func_65(0);
	func_217(0);
	func_218(1f);
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
		func_219();
	}
	_0xa0cefcea390aab9b(0);
}

void func_16(bool bParam0, int iParam1)
{
	if (func_220())
	{
		_0xdd1232b332cbb9e7(3, 1, 0);
	}
	if (bParam0)
	{
		if (func_221())
		{
			func_113(1);
		}
	}
	_0x36559148b78853b3(0, iParam1, 0);
}

void func_17(char[4] cParam0, bool bParam1)
{
	Var0 = func_200(func_12(cParam0->f_607));
	Var0.f_1 = 0;
	Var0.f_2 = func_132(func_33(cParam0));
	Var0.f_4 = (get_entity_health(Global_35) * 100 / get_entity_max_health(Global_35, false));
	Var0.f_5 = Global_40.f_7729;
	Var0.f_6 = func_222(0);
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
		func_223(iVar0, iParam0);
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
		if (func_224((*uParam1)[iVar0], 1048576))
		{
			switch (iParam0)
			{
				case 0:
					if ((*uParam1)[iVar0]->f_9 == 7)
					{
						func_225((*uParam1)[iVar0], 1);
					}
					break;
				case 1:
				case 2:
					if ((*uParam1)[iVar0]->f_9 == 3)
					{
						func_225((*uParam1)[iVar0], 1);
					}
					break;
				case 3:
					if ((*uParam1)[iVar0]->f_9 == 2)
					{
						func_225((*uParam1)[iVar0], 1);
					}
					break;
			}
		}
		iVar0++;
	}
}

bool func_26(int iParam0)
{
	return func_226(*iParam0, 1);
}

void func_27(int iParam0, bool bParam1)
{
	if (bParam1 || !func_26(iParam0))
	{
		func_227(iParam0);
	}
}

bool func_28(char[4] cParam0, bool bParam1)
{
	if (func_8(cParam0, 128) && func_29())
	{
		return true;
	}
	if (func_228(&(cParam0->f_13118)) >= 4000)
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
	func_229(!func_6(cParam0, 32), 1);
	func_1(cParam0, 32);
}

bool func_31(char[4] cParam0)
{
	return true;
}

bool func_32()
{
	return func_197(Global_1572864->f_8);
}

int func_33(char[4] cParam0)
{
	return cParam0->f_597;
}

struct<4> func_34(int iParam0)
{
	if (iParam0 == iLocal_45)
	{
		func_230(&Var0, -1552.75f, -1454.92f, 93.6979f, 17.05f);
	}
	else if (iParam0 == iLocal_46)
	{
		func_230(&Var0, -867.7163f, -1321.621f, 42.2046f, 238.2626f);
	}
	else if (iParam0 == iLocal_47)
	{
		func_230(&Var0, -618.5576f, -44.6529f, 83.929f, 154.1612f);
	}
	else if (iParam0 == iLocal_48)
	{
		func_230(&Var0, -618.5576f, -44.6529f, 83.929f, 154.1612f);
	}
	else if (iParam0 == iLocal_49)
	{
		func_230(&Var0, 1360.369f, -1303.543f, 76.7818f, 154.1612f);
	}
	else if (iParam0 == iLocal_50)
	{
		func_230(&Var0, 1359.114f, -1305.631f, 77.7346f, 162.91f);
	}
	else if (iParam0 == iLocal_51)
	{
		func_230(&Var0, 727.4158f, -472.0645f, 84.897f, 156.352f);
	}
	else if (iParam0 == iLocal_52)
	{
		func_230(&Var0, 791.3795f, -446.9703f, 85.4943f, 125.7547f);
	}
	else if (iParam0 == iLocal_53)
	{
		func_230(&Var0, 727.4158f, -472.0645f, 84.897f, 156.352f);
	}
	else if (iParam0 == iLocal_54)
	{
		func_230(&Var0, 588.3528f, -626.2174f, 41.0264f, 302.4936f);
	}
	else if (iParam0 == iLocal_55)
	{
		func_230(&Var0, 704.5292f, -476.9916f, 81.0578f, 30.898f);
	}
	else if (iParam0 == iLocal_56)
	{
		func_230(&Var0, 1359.938f, -1303.63f, 76.7818f, 331.9748f);
	}
	return Var0;
}

int func_35(char[4] cParam0)
{
	return func_231(cParam0, func_33(cParam0));
}

void func_36(char[4] cParam0, struct<4> Param1, struct<4> Param5, int iParam9, int iParam10)
{
	Var0 = { Param1 };
	Var0.f_3 = Param1.f_3;
	Var4 = { Param5 };
	Var4.f_3 = Param5.f_3;
	func_215(0);
	func_232(func_12(cParam0->f_607), Var0, Var4, func_132(iParam9), func_132(iParam10));
}

void func_37(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_224((*uParam0)[iVar0], 1048576) && (*uParam0)[iVar0]->f_9 == 9)
		{
			func_233((*uParam0)[iVar0]);
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
			func_234(iVar0, 4096);
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
		func_235(Global_1935630, 4194304);
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
	func_236();
	func_237();
	func_238();
	func_239();
}

void func_43()
{
	if (func_240())
	{
		Global_18 = 0;
		Global_43884 = 0;
		if (!func_29())
		{
			func_241(1);
		}
	}
}

void func_44()
{
	Global_1894899->f_186 = 0;
	func_242();
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
	func_243(1, iParam0, iParam1);
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
	return (func_244() || func_54());
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
	func_245(uParam0);
	func_246(uParam0, 0);
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
		func_247(iVar0);
		iVar0++;
	}
	func_248();
	func_249();
}

bool func_54()
{
	return Global_1894899 & 2 != 0;
}

void func_55(bool bParam0, int iParam1)
{
	if (func_250())
	{
		if (func_251(255))
		{
			if (!func_252(36, 255))
			{
				return;
			}
		}
	}
	bVar0 = bParam0;
	if (!bParam0)
	{
		if (func_253(Global_1894899->f_2) && func_254(Global_1894899->f_2))
		{
			func_255(Global_1894899->f_2, 0);
			if (iParam1 != 0)
			{
				Global_1894899->f_7 = iParam1;
				func_256(16);
			}
		}
		else if (func_253(Global_1894899->f_2) && !func_257(Global_1894899->f_2, 2))
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
		func_258(16);
		func_259();
		if (bVar0)
		{
			func_258(1);
		}
	}
}

void func_56(char[4] cParam0)
{
	iVar0 = 0;
	while (iVar0 < cParam0->f_13145)
	{
		if (func_260(cParam0->f_5423[iVar0]))
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
	if (func_261(cParam0->f_5421))
	{
		iVar0 = 0;
		while (iVar0 < func_262(cParam0->f_5421))
		{
			iVar1 = func_263(cParam0->f_5421, iVar0);
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
		if (func_264(iVar1))
		{
			iVar2 = Global_1360165[iVar0];
			func_184(cParam0, iVar1, iVar2, iParam1, bParam2, bParam3, 0);
		}
		iVar0++;
	}
}

void func_58(char[4] cParam0, bool bParam1)
{
	_0x0751d461f06e41ce(get_player_index(), 33, 2, 0);
	iVar0 = func_265(cParam0);
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	if (is_entity_dead(iVar0) || is_ped_injured(iVar0))
	{
	}
	iVar1 = func_266(iVar0);
	iVar2 = get_id_of_this_thread();
	bVar3 = false;
	if (is_thread_active(iVar2, false) && func_267(iVar1) == iVar2)
	{
		bVar3 = true;
	}
	if (bVar3)
	{
		if (bParam1)
		{
			func_268(7);
		}
		else
		{
			func_269(iVar0, 0);
		}
		func_270(cParam0, 16);
		set_ped_config_flag(iVar0, 219, false);
	}
}

void func_59(int iParam0)
{
	iParam0 = func_271(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_178(iParam0, 32);
	func_272();
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
	Var0 = { func_273(iParam0) };
	if (!is_string_null_or_empty(&Var0))
	{
		_text_database_delete(&Var0);
	}
}

void func_63(int iParam0)
{
	Var0 = { func_274(iParam0) };
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
		func_217(1);
	}
}

void func_65(bool bParam0)
{
	Global_1572864->f_13 = bParam0;
	if (bParam0)
	{
		func_217(0);
	}
}

void func_66(int iParam0)
{
}

void func_67(char[4] cParam0)
{
	func_275(&(cParam0->f_13121));
}

void func_68(int iParam0, var uParam1)
{
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (func_224((*uParam1)[iVar0], 1048576) && (*uParam1)[iVar0]->f_9 == 9)
		{
			func_225((*uParam1)[iVar0], 1);
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
	iVar0 = func_202(iParam0);
	iVar1 = -1;
	if (iVar0 == 1)
	{
		iVar2 = func_276(iParam0);
		if (iVar2 == 36)
		{
			iVar1 = 99;
			if (func_277(iVar1))
			{
				if (func_278(iVar1, 4))
				{
					func_279(iVar1, 1);
				}
			}
		}
		else if (iVar2 == 38)
		{
			func_280(1);
		}
	}
	else if (iVar0 == 8)
	{
		iVar3 = func_276(iParam0);
		if (iVar3 == 59)
		{
			func_280(1);
		}
		else if (iVar3 == 61)
		{
			func_280(0);
		}
		else if (iVar3 == 83)
		{
			func_280(0);
		}
	}
}

void func_73()
{
	iVar0 = 0;
	while (iVar0 < &Global_1347702)
	{
		if (func_277(iVar0))
		{
			if (func_278(iVar0, 4))
			{
				if (func_278(iVar0, 16))
				{
					func_281(iVar0, 1);
				}
				if (func_278(iVar0, 8))
				{
					func_282(iVar0, 1);
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
		if (func_283(cParam0) == 0 && iVar0 == 0)
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
		func_284(iVar3, iVar4);
	}
	if (bVar2)
	{
		func_285(cParam0);
	}
}

void func_75(char[4] cParam0)
{
	iVar0 = 0;
	if (func_286(cParam0))
	{
		fVar1 = to_float((_get_bounty_for_player(get_player_index()) - (*Global_2621440)[0]->f_9.f_20));
		if (fVar1 > 0f)
		{
			fVar2 = (1f + (to_float(get_random_int_in_range(50, 200)) / 1000f));
			iVar0 = (iVar0 + round((fVar1 * fVar2)));
		}
	}
	func_287(iVar0, 0, 1065353216, 1, 0, 0, 1, 752097756);
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
	if (!func_253(iParam0))
	{
		return;
	}
	bVar0 = func_257(iParam0, 67108864);
	if (bParam1)
	{
		if (((!bVar0 && func_288(iParam0) == 1) && iParam0 != 120) && iParam0 != 92)
		{
			func_290(iParam0, func_289());
			func_291(iParam0, 67108864);
		}
	}
	else if (bVar0)
	{
		func_292(iParam0, 67108864);
		func_290(iParam0, -15);
	}
	func_293(iParam0);
}

void func_79(bool bParam0)
{
	if (!bParam0)
	{
		func_294(11);
	}
	else
	{
		func_295(11);
	}
}

void func_80(int iParam0)
{
	if (func_296(iParam0, 0))
	{
		func_297(262144, 5, 0, 1);
		func_298(720f, 1, 0);
	}
	switch (iParam0)
	{
		case 18:
			func_299(101, 7, 1f, 0, 1);
			func_299(89, 7, 1f, 0, 1);
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
	if (!func_197(iParam0))
	{
		return;
	}
	if (func_300(iParam0) == 4)
	{
		func_301(iParam0, func_289());
		if (!func_201(iParam0) == 5 && !func_201(iParam0) == 6)
		{
			if (bParam3)
			{
				func_209(iParam0, 6);
			}
			else
			{
				func_209(iParam0, 5);
			}
			func_214(iParam0);
		}
		return;
	}
	if (bParam1)
	{
		func_40(1);
	}
	iVar0 = func_202(iParam0);
	bVar1 = func_20() == false;
	if (iVar0 == 1 || iVar0 == 8)
	{
		func_302(0, 2);
		if (!bVar1 && bParam1)
		{
			func_303();
		}
	}
	else
	{
		func_211(0);
	}
	if (!iVar0 == 1 && !iVar0 == 8)
	{
		func_304(iParam0);
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
				if (bParam1 && func_201(iParam0) != 0)
				{
					if (iVar0 == 1)
					{
						if (func_276(iParam0) == 77)
						{
							stat_id_set_gxt_label(&Var4, &((*Global_1835011)[76]->f_8), true);
						}
						else
						{
							stat_id_set_gxt_label(&Var4, &((*Global_1835011)[func_276(iParam0)]->f_8), true);
						}
					}
					else if ((func_276(iParam0) != 95 && func_276(iParam0) != 82) && !func_305((*Global_1347702)[func_276(iParam0)]->f_12, 512))
					{
						stat_id_set_gxt_label(&Var4, &((*Global_1347702)[func_276(iParam0)]->f_3), true);
					}
				}
			}
			else
			{
				switch (_0x225640e09effdc3f())
				{
					case 0:
						stat_id_set_gxt_label(&Var4, &((*Global_1835011)[func_276(iParam0)]->f_8), true);
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
		func_307(func_276(iParam0), iVar6, func_306());
	}
	else if (iVar0 == 8)
	{
		func_309(func_276(iParam0), iVar6, func_306(), func_308());
	}
	if (!func_201(iParam0) == 5 && !func_201(iParam0) == 6)
	{
		iVar9 = func_310(iParam0, &uVar7, &iVar8);
		if (iVar9 != 176656832)
		{
			func_311(iVar9, uVar7, -469960592, iVar8, 1, 1, 0);
		}
	}
	if (!&Global_1879534 && !Global_1879534->f_1)
	{
		switch (iVar0)
		{
			case 1:
				iVar10 = func_312(func_276(iParam0), &iVar11);
				if (!Global_17504.f_9)
				{
					iVar10 = func_313((iVar10 - 20), 0, iVar10);
					iVar11 = func_313((iVar11 - 10), 0, iVar11);
				}
				func_314(1);
				func_315(iVar10, iVar11, 1);
				Global_17504.f_9 = 0;
				Global_17504.f_10 = 0;
				Global_1899528->f_217 = 1;
				break;
			case 4:
				func_315(45, 0, 1);
				break;
			case 8:
				iVar10 = func_316(func_276(iParam0), &iVar11);
				if (!Global_17504.f_9)
				{
					iVar10 = func_313((iVar10 - 20), 0, iVar10);
					iVar11 = func_313((iVar11 - 10), 0, iVar11);
				}
				func_315(iVar10, iVar11, 1);
				Global_17504.f_9 = 0;
				Global_17504.f_10 = 0;
				if (func_317(func_276(iParam0)))
				{
					func_318(14, 0, 0, 0, 0, 0, 1065353216, 0);
				}
				Global_1899528->f_217 = 1;
				break;
			case 9:
				func_315(120, 0, 1);
				break;
			case 2:
				func_315(120, 0, 1);
				break;
			case 6:
				func_315(func_320(func_319(iParam0)), 0, 1);
				break;
			case 5:
				func_315(120, 0, 1);
				break;
		}
	}
	func_213(iParam0, 1);
	func_301(iParam0, func_289());
	func_214(iParam0);
	if ((!func_201(iParam0) == 0 && bParam1) && func_20() == -1)
	{
		iVar12 = func_206(iParam0);
		if (iVar12 != -1)
		{
			func_207(0);
		}
		else if (iVar0 == 8)
		{
			iVar12 = func_208();
			if (iVar12 != -1)
			{
				func_207(0);
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
				switch (func_276(iParam0))
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
				if (func_277(func_276(iParam0)) && func_305((*Global_1347702)[func_276(iParam0)]->f_12, 4))
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
				if (func_276(iParam0) != 77)
				{
					Global_1879514->f_1 = iParam0;
					Global_1879514->f_11 = bParam3;
					Global_1879514->f_13 = func_129();
				}
				break;
			case 8:
				if (func_276(iParam0) != 58)
				{
					Global_1879514->f_1 = iParam0;
					Global_1879514->f_11 = bParam3;
					Global_1879514->f_13 = func_129();
				}
				break;
		}
	}
	if (!func_201(iParam0) == 5 && !func_201(iParam0) == 6)
	{
		if (bParam3)
		{
			func_209(iParam0, 6);
		}
		else
		{
			func_209(iParam0, 5);
		}
		func_214(iParam0);
		bVar13 = true;
	}
	if (bVar13)
	{
		switch (iVar0)
		{
			case 1:
				switch (func_276(iParam0))
				{
					case 0:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_PROFESSION_ODRISCOLL"));
						_0xd8c7162ab2e2af45(-1753910767);
						break;
					case 1:
						func_321();
						_0xbb697756309d77ee(1);
						break;
					case 4:
						func_322(-1781387050, 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_322(1433048902, 4, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_322(-597058368, 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_322(-529638012, 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_322(500564674, 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_322(-875449072, 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_322(1237770824, 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_322(236757114, 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_322(-601932535, 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_322(-1267972061, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_323(-1267972061);
						func_322(1619534881, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_323(1619534881);
						func_322(-755457379, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_323(-755457379);
						func_322(1015404643, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_323(1015404643);
						func_322(-1724192342, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_323(-1724192342);
						func_322(1310680212, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_323(1310680212);
						func_322(-566881549, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_323(-566881549);
						func_322(-1753730528, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_323(-1753730528);
						func_322(147796381, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_323(147796381);
						func_322(-378547623, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_323(-378547623);
						func_322(829545206, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_323(829545206);
						func_322(891318243, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_323(891318243);
						func_322(-1016714371, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_322(-1838434463, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_322(-1448210800, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_322(-248960099, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_324();
						func_325(967523420);
						func_326();
						func_327();
						break;
					case 5:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_TOMMY"));
						break;
					case 14:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_LEVITICUS"));
						break;
					case 2:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key(func_328(10, 0)));
						break;
					case 8:
						_0x946d46cd6dfb9742(get_player_index(), 0, 621714131);
						break;
					case 15:
						func_322(1030791766, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
						if (!_unlock_is_visible(1231074654))
						{
							_unlock_set_visible(1231074654, true);
							func_329(449, 0);
						}
						break;
					case 10:
						if (!_unlock_is_visible(1880205078))
						{
							_unlock_set_visible(1880205078, true);
							func_329(446, 0);
						}
						break;
					case 16:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("ALLY_LEIGHGRAY"));
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("ALLY_ARCHIBALD"));
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_PROFESSION_GRAY"));
						break;
					case 18:
						func_330(304805134, 1, 1);
						if (!func_331((*Global_1347702)[21]->f_15, 1))
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
						func_332();
						break;
					case 26:
						func_333();
						break;
					case 17:
						func_334(Global_35, 176992230, 0, -358215195, 1, 1);
						if (func_335())
						{
							func_336(1905553950);
						}
						break;
					case 19:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_TAVISH_GRAY"));
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_CLAY"));
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_CLIVE"));
						break;
					case 33:
						if (!func_337(-514575035, -1))
						{
							iVar15 = func_289();
							func_338(&iVar15, 0, 0, 0, 2, 0, 0, 0);
							func_339(-514575035, iVar15, 0);
						}
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_EVELYN_MILLER"));
						if (func_335())
						{
							func_336(1529685685);
						}
						break;
					case 34:
						if (func_335())
						{
							func_336(-2082646505);
						}
						break;
					case 28:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_BRONTE"));
						break;
					case 31:
						func_340();
						break;
					case 37:
						func_341();
						if (func_342())
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
						func_343();
						break;
					case 43:
						func_344();
						break;
					case 44:
						if (!func_331((*Global_1347702)[82]->f_15, 1))
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
						if (!func_331((*Global_1347702)[83]->f_15, 1))
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
						func_345();
						break;
					case 59:
						func_346();
						break;
					case 60:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_TOM_DICKENS"));
						break;
					case 61:
						func_347();
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
						func_348();
						if (!_unlock_is_visible(1673898385))
						{
							_unlock_set_visible(1673898385, true);
							func_329(451, 0);
						}
						if (!func_349(-1992824800))
						{
							if (func_349(1520110311))
							{
								iVar16 = func_289();
								func_338(&iVar16, 0, 0, 6, 0, 0, 0, 0);
								func_339(1937177603, iVar16, 1);
							}
						}
						if (func_350(4))
						{
							if (!func_351(684296857, 1, 0))
							{
								iVar17 = func_289();
								func_338(&iVar17, 0, 0, 6, 0, 0, 0, 0);
								func_339(-1439688706, iVar17, 1);
							}
						}
						func_322(1224687176, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_322(-4440804, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						break;
					case 74:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_ALBERT_CAKE"));
						func_352(89200);
						func_352(2300);
						func_352(2300);
						break;
					case 68:
						func_353();
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
						func_354();
						func_352(-139100);
						break;
					case 69:
						if (func_331((*Global_1347702)[9]->f_15, 1))
						{
							func_352(-6000);
						}
						break;
					case 70:
						func_352(23400);
						func_352(1900);
						func_352(-15000);
						break;
					case 71:
						func_352(-5500);
						break;
				}
				break;
			case 8:
				switch (func_276(iParam0))
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
						func_355();
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
						func_356();
						break;
					case 66:
						func_357();
						func_358();
						break;
					case 67:
						if (!func_359(6))
						{
							func_193(6);
						}
						if (!func_359(3))
						{
							func_193(3);
						}
						if (func_335())
						{
							func_336(1534638301);
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
						if (func_331((*Global_1835011)[69]->f_1, 1))
						{
							func_360(0);
							func_352(40500);
						}
						else
						{
							func_360(0);
							func_352(46500);
						}
						break;
				}
				break;
			case 6:
				switch (func_276(iParam0))
				{
					case 0:
						switch (func_319(iParam0))
						{
							case 5:
								_0x946d46cd6dfb9742(get_player_index(), 0, 1014740297);
								break;
						}
						break;
				}
				break;
		}
		func_361(iParam0);
		func_362();
		switch (iVar0)
		{
			case 1:
				switch (func_276(iParam0))
				{
					case 4:
						func_363(iParam0, 1000, 0, 1065353216, 1, 0, 0, 1);
						break;
					case 61:
					case 62:
					case 63:
						func_363(iParam0, 300, 0, 1065353216, 1, 0, 0, 1);
						break;
					case 25:
						func_363(iParam0, 150000, 1, 0.5f, 4, 0, 0, 1);
						break;
					case 12:
						func_363(iParam0, 120000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 53:
						func_363(iParam0, 90000, 1, 0.5f, 4, 0, 0, 1);
						break;
					case 20:
						func_363(iParam0, 85000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 19:
						func_363(iParam0, 70000, 1, 0.5f, 3, 0, 0, 1);
						break;
					case 24:
						iVar18 = func_364(iParam0);
						func_363(iParam0, iVar18, 1, 0.5f, 4, 0, 0, 1);
						break;
					case 28:
						func_363(iParam0, 45000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 34:
						func_363(iParam0, 600000, 1, 0.5f, 4, 0, 0, 1);
						if (!func_351(-2046502963, 1, 0))
						{
							func_322(-2046502963, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
						}
						break;
					case 29:
						func_363(iParam0, 4600, 1, 0f, 3, 0, 0, 1);
						break;
					case 37:
						break;
					case 58:
						break;
					case 57:
						func_363(iParam0, 2100000, 1, 0.9047619f, 8, 0, 0, 1);
						break;
					case 76:
						func_363(iParam0, 2042100, 0, 1065353216, 1, 0, 0, 1);
						break;
					case 72:
						if (func_364(iParam0) == 0)
						{
							func_363(iParam0, 20000, 0, 1065353216, 1, 0, 0, 1);
						}
						else
						{
							func_363(iParam0, 15000, 0, 1065353216, 1, 0, 0, 1);
						}
						break;
				}
				break;
			case 8:
				if (func_305((*Global_1347702)[func_276(iParam0)]->f_12, 536870912))
				{
					func_365(11, 1);
				}
				switch (func_276(iParam0))
				{
					case 109:
						func_363(iParam0, 1500, 0, 1065353216, 1, 0, 0, 1);
						break;
					case 55:
						func_365(8, 1);
						break;
					case 138:
						set_bit(&(Global_40.f_9052), 1);
						set_bit(&(Global_40.f_9052), 3);
						break;
					case 94:
						func_363(iParam0, 30000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 63:
						func_363(iParam0, 60000, 1, 0.5f, 3, 0, 0, 1);
						break;
					case 37:
						func_363(iParam0, 75000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 116:
						func_363(iParam0, 25000, 1, 0.5f, 1, 0, 0, 1);
						break;
					case 9:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_ANSEL_ATHERTON"));
						break;
				}
				break;
			case 11:
				if (iParam0 == func_366(0, 10, 11, 2116153146))
				{
					func_363(iParam0, func_364(iParam0), 1, 0.5f, 3, 0, 0, 1);
				}
				else if (iParam0 == func_366(0, 7, 11, -379687487))
				{
					func_363(iParam0, func_367(9), 1, 0.5f, 3, 0, 0, 1);
				}
				else if (iParam0 == func_366(0, 8, 11, -1386089015))
				{
					func_363(iParam0, func_367(10), 1, 0.5f, 2, 0, 0, 1);
				}
				else if (iParam0 == func_366(0, 11, 11, -1952009645))
				{
					func_363(iParam0, func_367(8), 1, 0.5f, 3, 0, 0, 1);
				}
				else if (iParam0 == func_366(0, 12, 11, 2065895756))
				{
					func_363(iParam0, func_367(11), 1, 0.5f, 2, 0, 0, 1);
				}
				break;
		}
		if (bParam1)
		{
			if (!func_201(iParam0) == 0)
			{
				if (func_200(iParam0) == 0)
				{
				}
				else if (_0x01f4d242765c6b24(func_200(iParam0)))
				{
					iVar19 = 0;
					if (bParam3)
					{
						iVar19 = 3;
					}
					func_203(func_202(iParam0), func_200(iParam0), iVar19);
					if (bParam4)
					{
						if (iVar0 == 8 && func_276(iParam0) == 58)
						{
							Global_1879514->f_1 = iParam0;
						}
						func_369(func_368(Global_1879514->f_1));
						if (iVar0 == 8 && func_276(iParam0) == 58)
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
						if (func_277(func_276(iParam0)) && func_305((*Global_1347702)[func_276(iParam0)]->f_12, 1))
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
			func_370(bParam2, iVar20);
		}
	}
	func_212(1);
	if ((bVar13 || func_129()) && (func_202(iParam0) == 1 || func_202(iParam0) == 8))
	{
		Global_1879534->f_6 = 1;
		Global_1879534->f_7 = 1;
	}
}

void func_84(int iParam0, bool bParam1)
{
	if (_0x01f4d242765c6b24(func_200(iParam0)))
	{
		iVar0 = 0;
		if (bParam1)
		{
			iVar0 = 3;
		}
		func_203(func_202(iParam0), func_200(iParam0), iVar0);
		if (func_82(32768))
		{
			iVar1 = func_202(iParam0);
			if ((iVar1 == 1 || iVar1 == 8) || (iVar1 == 11 && iParam0 == func_366(0, 10, 11, 2116153146)))
			{
				Global_1898438 = get_game_timer();
				Global_1879514->f_1 = iParam0;
				Global_1879514->f_19 = func_371();
				Global_1879514->f_18 = 1;
			}
		}
	}
	if (func_199(iParam0))
	{
		func_13(iParam0, 0, 2);
	}
	else if (func_198(iParam0))
	{
		if (!func_201(iParam0) == 5 && !func_201(iParam0) == 6)
		{
			if (bParam1)
			{
				func_209(iParam0, 6);
			}
			else
			{
				func_209(iParam0, 5);
			}
			func_214(iParam0);
		}
	}
	switch (func_202(iParam0))
	{
		case 1:
			switch (func_276(iParam0))
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
			switch (func_276(iParam0))
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
	vVar2 = { func_372((*Global_2621440)[0]->f_9.f_7, &uVar0, &uVar1, 0, 1, 1, 0, 0, 0) };
	func_373(vVar2, uVar1, uVar0, 0);
	func_374(vVar2);
	Global_40.f_9.f_15 = func_375(vVar2, 0);
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
	func_376();
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
	func_377(Var10, 0);
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
	if (!func_197(iParam0))
	{
		return;
	}
	if (iParam0 != func_210(0))
	{
		return;
	}
	if (func_200(iParam0) == 0)
	{
	}
	iVar0 = func_202(iParam0);
	if (func_201(iParam0) == 3)
	{
		if (func_200(iParam0) == 0)
		{
		}
		else if (_0x01f4d242765c6b24(func_200(iParam0)))
		{
			if (func_202(iParam0) != 1 && func_202(iParam0) != 8)
			{
				func_203(func_202(iParam0), func_200(iParam0), 1);
			}
		}
	}
	Global_1898438 = (get_game_timer() - 10000);
	func_214(iParam0);
	func_40(1);
	func_211(0);
	func_209(iParam0, 0);
	switch (iVar0)
	{
		case 1:
			func_314(1);
			func_315(15, 0, 1);
			break;
		case 4:
			func_315(10, 0, 1);
			break;
		case 8:
			func_315(10, 0, 1);
			break;
		case 9:
			func_315(10, 0, 1);
			break;
		case 2:
			func_315(10, 0, 1);
			break;
		case 6:
			func_315(10, 0, 1);
			break;
		case 5:
			func_315(10, 0, 1);
			break;
	}
	func_212(1);
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
	if (func_378(Global_1347343->f_11, 536870912))
	{
		return;
	}
	if (bParam3)
	{
		func_379(&(Global_1347343->f_11), 64);
	}
	if (bParam4)
	{
		func_379(&(Global_1347343->f_11), 16384);
	}
	if (func_380() >= 2)
	{
		if (!func_378(Global_1347343->f_11, 16384))
		{
			func_379(&(Global_1347343->f_11), 8);
		}
		func_218(0.88f);
	}
	StringCopy(&(Global_1347343->f_3), sParam2, 64);
	Global_1347343->f_2 = iParam0;
	Global_1347343 = 0;
	Global_1347343->f_1 = iParam1;
	func_235(Global_1935630, 2048);
	func_381(bParam5);
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
			func_382(&(cParam0->f_10792), &(Global_43619[iVar0]), &(Global_43619[iVar0]->f_1), 0);
		}
		iVar0++;
	}
	if (_does_anim_scene_exist(Global_43800))
	{
		cParam0->f_7375.f_804 = Global_43800;
		take_ownership_of_anim_scene(cParam0->f_7375.f_804);
	}
	if (func_205(&Global_1935630, 524288))
	{
		func_71(Global_1935630, 524288);
		func_383(cParam0, 67108864);
	}
}

int func_101(char[4] cParam0)
{
	return func_384(&(cParam0->f_7375));
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
	return func_385() != -1;
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
	func_386(cParam0);
	cParam0->f_634[0] = 62290;
	cParam0->f_634[1] = 62290;
	cParam0->f_637 = 0;
	func_388(cParam0, *uParam1);
	func_389(cParam0);
}

void func_109(char[4] cParam0)
{
	if (get_clock_hours() >= 18 && get_clock_hours() < 20)
	{
		set_clock_time(18, 0, 0);
		pause_clock(true, 0);
	}
	else if ((get_clock_hours() >= 20 || get_clock_hours() < 4) || (get_clock_hours() == 4 && get_clock_minutes() < 15))
	{
		set_clock_time(4, 15, 0);
	}
	func_390(cParam0, 26);
	if (func_106() == 7 && func_102())
	{
		func_391(func_132(8));
	}
	if (func_283(cParam0) == 0)
	{
		iLocal_1452 = get_last_driven_vehicle();
		if (does_entity_exist(iVar1449))
		{
			set_entity_coords(iVar1449, -1539.311f, -1449.468f, 93.6496f, true, false, true, true);
			set_entity_heading(iVar1449, 336.0905f);
		}
	}
	func_392(cParam0, 1361.77f, -1380.289f, 78.3508f);
}

char[] func_110(int iParam0)
{
	if (!func_196(iParam0))
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
	if (!func_253(iParam0))
	{
		return false;
	}
	return func_257(iParam0, 33554432);
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

bool func_120(char[4] cParam0, int iParam1)
{
	return (cParam0->f_5308 && iParam1) != 0;
}

bool func_121(char[4] cParam0, int iParam1, int iParam2)
{
	return func_394(cParam0->f_1[func_132(iParam1)]->f_11, iParam2);
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
		func_395(&(cParam0->f_7375));
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
	if (!func_398())
	{
		return false;
	}
	if (!func_331((*Global_1835011)[1]->f_1, 1))
	{
		return true;
	}
	if ((func_331((*Global_1835011)[2]->f_1, 1) && func_331((*Global_1347702)[120]->f_15, 1)) && !func_331((*Global_1835011)[4]->f_1, 1))
	{
		return true;
	}
	if (func_331((*Global_1835011)[37]->f_1, 1) && !func_331((*Global_1835011)[39]->f_1, 1))
	{
		return true;
	}
	if (func_331((*Global_1835011)[57]->f_1, 1) && !func_331((*Global_1835011)[60]->f_1, 1))
	{
		return true;
	}
	if (func_331((*Global_1835011)[26]->f_1, 1) && !func_331((*Global_1347702)[67]->f_15, 1))
	{
		return true;
	}
	if ((func_331((*Global_1835011)[62]->f_1, 1) && func_331((*Global_1835011)[63]->f_1, 1)) && !func_331((*Global_1835011)[64]->f_1, 1))
	{
		return true;
	}
	if (func_331((*Global_1835011)[75]->f_1, 1) && !func_331((*Global_1347702)[1]->f_15, 1))
	{
		return true;
	}
	if (func_331((*Global_1835011)[76]->f_1, 1) && !func_331((*Global_1835011)[77]->f_1, 1))
	{
		return true;
	}
	if ((func_331((*Global_1835011)[40]->f_1, 1) && func_331((*Global_1835011)[41]->f_1, 1)) && !func_331((*Global_1835011)[44]->f_1, 1))
	{
		return true;
	}
	if ((func_331((*Global_1835011)[62]->f_1, 1) && func_331((*Global_1835011)[63]->f_1, 1)) && !func_331((*Global_1835011)[64]->f_1, 1))
	{
		return true;
	}
	if ((func_331((*Global_1835011)[65]->f_1, 1) && func_331((*Global_1835011)[66]->f_1, 1)) && !func_331((*Global_1835011)[67]->f_1, 1))
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
		func_103(cParam0, 8);
	}
	func_103(cParam0, 4096);
	_0x4759cc730f947c81();
	_0x1ff00db43026b12f();
	start_player_teleport(player_id(), vParam1, fParam4, false, true, true, false);
	do_screen_fade_out(0);
	_set_milliseconds_per_game_minute(9999999);
	func_227(&(cParam0->f_603));
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

void func_133(char[4] cParam0)
{
	if (_uilog_is_entry_registered(2, func_85(cParam0)))
	{
		_uilog_remove_entry(2, func_85(cParam0));
	}
	if (!_uilog_is_entry_registered(1, func_85(cParam0)))
	{
		func_401(cParam0->f_607);
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

void func_138(char[4] cParam0)
{
	if (!is_itemset_valid(iLocal_14))
	{
		iLocal_14 = create_itemset(true);
	}
}

int func_139(char[4] cParam0)
{
	func_414(cParam0, iLocal_16, 526332);
	func_414(cParam0, iLocal_17, 526332);
	func_414(cParam0, iLocal_19, 526324);
	func_414(cParam0, iLocal_25, 20);
	func_414(cParam0, iLocal_26, 4);
	func_414(cParam0, iLocal_20, 496);
	func_414(cParam0, iLocal_21, 256);
	func_414(cParam0, iLocal_29, 480);
	func_414(cParam0, iLocal_30, 480);
	func_414(cParam0, iLocal_27, 6);
	func_414(cParam0, iLocal_28, 6);
	func_414(cParam0, iLocal_22, 352);
	func_414(cParam0, iLocal_23, 256);
	func_414(cParam0, iLocal_24, 1792);
	func_414(cParam0, iLocal_18, 14);
	func_414(cParam0, iLocal_43, 3);
	func_414(cParam0, iLocal_44, 3);
	func_414(cParam0, -859420242, 525312);
	func_414(cParam0, -1904849241, 525312);
	func_414(cParam0, 2074847506, 525312);
	func_414(cParam0, iLocal_31, 12);
	func_414(cParam0, iLocal_32, 12);
	func_414(cParam0, iLocal_33, 12);
	func_414(cParam0, iLocal_34, 12);
	func_414(cParam0, iLocal_35, 3);
	func_414(cParam0, -1866470762, 525336);
	func_414(cParam0, iLocal_36, 24);
	func_414(cParam0, iLocal_37, 24);
	func_414(cParam0, iLocal_38, 24);
	func_414(cParam0, iLocal_39, 24);
	func_414(cParam0, iLocal_42, 48);
	func_414(cParam0, iLocal_41, 48);
	func_414(cParam0, iLocal_40, 525312);
	func_415(cParam0, 1402226560, 192, -1, 0);
	func_416(cParam0, sLocal_233, 928, 2, -1);
	func_416(cParam0, sLocal_234, 256, 2, -1);
	func_416(cParam0, sLocal_235, 512, 2, -1);
	func_416(cParam0, "sad3_boat_flee", 256, 2, -1);
	func_416(cParam0, "sad3_painttorhodes", 8, 2, -1);
	func_416(cParam0, "sad3_rhodestodew", 32, 2, -1);
	func_416(cParam0, "sad3_flee_ambush1", 16, 2, -1);
	func_416(cParam0, "sad3_flee_ambush2", 16, 2, -1);
	func_416(cParam0, "sad3_cme_timelapse", 524288, 2, -1);
	func_416(cParam0, "sad3_cme_timelapse_2", 524288, 2, -1);
	func_418(cParam0, "script@story@sad3@ig@ig1_sadie_house@ig1_sadie_house", Local_72[2], 12, 0, func_417(6), 0, 1);
	func_418(cParam0, "script@story@sad3@ig@ig2_gang_leader_jumps_john@ig2_gang_leader_jumps_john", Local_72[1], 4, 0, func_417(1), 0, 1);
	func_418(cParam0, "script@story@sad3@ig@ig3_attack_camp@ig3_attack_camp", Local_72[0], 192, 0, func_417(0), 0, 1);
	func_418(cParam0, "script@story@sad3@leadin@int@leadin_ilo", Local_72[3], 1, 2, func_417(11), 300f, 1);
	func_418(cParam0, "script@story@sad3@leadin@mcs2@sheriff_idles", Local_72[5], 8, 0, func_417(14), 0f, 0);
	func_418(cParam0, "script@story@sad3@leadin@mcs2@sadie_enter", Local_72[6], 8, 0, func_417(15), 0f, 0);
	func_418(cParam0, "script@story@sad3@leadin@mcs5@leadin", Local_72[4], 256, 0, func_417(16), 0, 1);
	func_418(cParam0, "script@story@sad3@leadin@ext@sadie_calls", Local_72[7], 1024, 2, func_417(17), 0, 0);
	func_418(cParam0, "script@timelapse@sad3_cme_timelapse", Local_72[8], 8, 0, 0, 0, 1);
	func_418(cParam0, "script@timelapse@sad3_ext_timelapse", Local_72[9], 524288, 0, 0, 0, 1);
	func_419(cParam0, &(Local_72[2]), func_417(5), 4);
	func_419(cParam0, &(Local_72[2]), func_417(9), 12);
	func_419(cParam0, &(Local_72[2]), func_417(10), 12);
	func_419(cParam0, &(Local_72[2]), func_417(7), 12);
	func_419(cParam0, &(Local_72[3]), func_417(12), 1);
	func_419(cParam0, &(Local_72[3]), func_417(13), 1);
	return 1;
}

void func_140(char[4] cParam0, int iParam1, int iParam2)
{
	func_420(&(cParam0->f_1[func_132(iParam1)]->f_11), iParam2);
}

void func_141(char[4] cParam0)
{
	func_103(cParam0, 2);
}

void func_142(char[4] cParam0, int iParam1)
{
	func_421(&(cParam0->f_638), &(cParam0->f_819), &(cParam0->f_1020), &(cParam0->f_1081), &(cParam0->f_1124), &(cParam0->f_1126), &(cParam0->f_5147), &(cParam0->f_5188), &(cParam0->f_5239), &(cParam0->f_5249), &(cParam0->f_5265), &(cParam0->f_5286), iParam1);
}

void func_143(int iParam0)
{
	Var0 = { func_273(iParam0) };
	if (!is_string_null_or_empty(&Var0))
	{
		_text_database_request(&Var0);
	}
}

void func_144(int iParam0)
{
	Var0 = { func_274(iParam0) };
	if (!is_string_null_or_empty(&Var0))
	{
		_text_database_request(&Var0);
	}
}

void func_145(char[4] cParam0, int iParam1, char* sParam2, bool bParam3)
{
	func_422(&(cParam0->f_5310), iParam1, sParam2, bParam3);
}

void func_146(char[4] cParam0)
{
	if (!func_261(cParam0->f_5421))
	{
		cParam0->f_5421 = { func_423() };
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
	func_424(&(cParam0->f_7375), fParam1);
}

void func_150(char[4] cParam0, float fParam1)
{
	func_425(&(cParam0->f_7375), fParam1);
}

void func_151(char[4] cParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	func_426(cParam0, iParam1, sParam2, iParam3, iParam4, bParam5, 0);
	func_382(&(cParam0->f_10792), iParam1, sParam2, bParam6);
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
	if (!func_196(iParam0))
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
		if (func_427(cParam0, func_35(cParam0), 0))
		{
			func_140(cParam0, func_35(cParam0), 536870912);
		}
	}
	if (func_8(cParam0, 8192))
	{
		if (!func_8(cParam0, 536870912))
		{
			if (func_428(&(cParam0->f_1126), func_33(cParam0)))
			{
				func_99(cParam0, 536870912);
			}
		}
		return;
	}
	bVar0 = false;
	if (func_427(cParam0, func_33(cParam0), 1))
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
	if (func_429(cParam0) < 1)
	{
		func_430(cParam0, func_128(cParam0, 3), !func_8(cParam0, 2097152), cParam0->f_5410, !func_8(cParam0, 32), 0);
		func_431(cParam0, 1, cParam0->f_5413, cParam0->f_5413.f_1, cParam0->f_5413.f_2, cParam0->f_5416, 1, 1, 1);
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
				func_432(cParam0);
			}
		}
		if (func_120(cParam0, 32))
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
				if (func_120(cParam0, 4096))
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
		func_438(cParam0, 0);
		return true;
	}
	if (func_439(cParam0))
	{
		iVar0 = func_33(cParam0);
		func_107(cParam0, func_35(cParam0));
		if (func_33(cParam0) == 26)
		{
			func_438(cParam0, 0);
			return true;
		}
		else if (func_121(cParam0, iVar0, 128))
		{
			func_439(cParam0);
		}
	}
	return false;
}

int func_162(char[4] cParam0, int iParam1)
{
	return cParam0->f_1[func_132(iParam1)]->f_10;
}

void func_163()
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (&Global_1934765->f_275[iVar0] == get_id_of_this_thread())
		{
			Global_1934765->f_286 = (Global_1934765->f_286 + Global_1934765->f_275[iVar0]->f_1);
			Global_1934765->f_275[iVar0] = 0;
			Global_1934765->f_275[iVar0]->f_1 = 0;
			func_440();
			return;
		}
		iVar0++;
	}
}

int func_164(int iParam0)
{
	if (!func_441(iParam0))
	{
		return 0;
	}
	if (!func_443(func_442(iParam0)))
	{
		return 1;
	}
	if (!_0x800df3fc913355f3(func_444(iParam0)))
	{
		return 0;
	}
	_0x4f81ead1de8fa19b(func_444(iParam0));
	return 1;
}

void func_165(int iParam0, int iParam1)
{
	if (func_20() != -1)
	{
		return;
	}
	if (!func_441(iParam0))
	{
		return;
	}
	Global_24887[iParam0] = (&Global_24887[iParam0] - (Global_24887[iParam0] && iParam1));
}

void func_166(int iParam0)
{
	Global_1396116->f_139 = iParam0;
}

void func_167(int iParam0, bool bParam1, float fParam2)
{
	func_445(iParam0, bParam1, fParam2);
}

void func_168(int iParam0)
{
	if (_is_imap_active(iParam0))
	{
		_remove_imap(iParam0);
	}
}

void func_169(int iParam0, bool bParam1)
{
	if (!func_446(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_447(iParam0, 1);
	}
	else
	{
		func_448(iParam0, 1);
	}
	func_450(func_449(iParam0), bParam1);
}

void func_170(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_451(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (bParam2)
		{
			func_452(iParam0, 4);
		}
		else
		{
			func_453(iParam0, 33554432);
		}
	}
	else if (bParam2)
	{
		func_454(iParam0, 4);
	}
	else
	{
		func_455(iParam0, 33554432);
	}
	_0x9b4e793b1cb6550a();
	func_456(iParam0);
}

void func_171(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!bParam3)
	{
		if (func_457(iParam0))
		{
			return;
		}
	}
	if (bParam2)
	{
		if (!func_458(iParam0, 4))
		{
			func_459(iParam0, 4);
		}
	}
	else
	{
		func_460(iParam0, 4);
	}
	func_461(iParam0);
}

void func_172(char[4] cParam0, bool bParam1)
{
	if (func_33(cParam0) == 0)
	{
		if (bParam1)
		{
			_0x1e017404784aa6a3(&(uLocal_239[0]), 2002291515);
			_0x0d7fd6a55fd63aef(7, 3, 0);
			_0x0d7fd6a55fd63aef(25, 3, 1);
			_0x0d7fd6a55fd63aef(21, 3, 1);
			_0x0d7fd6a55fd63aef(19, 3, 1);
			_0x0d7fd6a55fd63aef(23, 3, 1);
			_0x0d7fd6a55fd63aef(22, 3, 1);
		}
	}
	if (func_33(cParam0) == 1)
	{
		if (bParam1)
		{
			_0x1e017404784aa6a3(&(uLocal_239[1]), 2002291515);
			_0x0d7fd6a55fd63aef(7, 3, 0);
			_0x0d7fd6a55fd63aef(25, 3, 1);
			_0x0d7fd6a55fd63aef(21, 3, 1);
			_0x0d7fd6a55fd63aef(19, 3, 1);
			_0x0d7fd6a55fd63aef(23, 3, 1);
			_0x0d7fd6a55fd63aef(22, 3, 1);
		}
	}
	if (!bParam1)
	{
		if (func_186(&(uLocal_239[1]), 0))
		{
			_0x2b4ce170de09f346(&(uLocal_239[1]), 2002291515);
		}
		if (func_186(&(uLocal_239[0]), 0))
		{
			_0x2b4ce170de09f346(&(uLocal_239[0]), 2002291515);
		}
		_0x660a8f876df1d4f8(29);
		_0x660a8f876df1d4f8(7);
		_0x660a8f876df1d4f8(25);
		_0x660a8f876df1d4f8(23);
		_0x660a8f876df1d4f8(21);
		_0x660a8f876df1d4f8(19);
		_0x660a8f876df1d4f8(22);
		_0x660a8f876df1d4f8(1);
	}
}

void func_173(var uParam0, int iParam1, bool bParam2)
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

void func_174(int iParam0)
{
	if (_does_volume_exist(iParam0))
	{
		_delete_volume(iParam0);
	}
}

void func_175(int* iParam0, bool bParam1)
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

void func_176(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		func_177((*iParam0)[iVar0]);
		iVar0++;
	}
}

void func_177(int* iParam0)
{
	if (does_blip_exist(*iParam0))
	{
		remove_blip(iParam0);
	}
}

void func_178(int iParam0, int iParam1)
{
	iParam0 = func_271(iParam0);
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

void func_179(int iParam0, bool bParam1)
{
	iVar0 = func_462(iParam0);
	if (bParam1)
	{
		func_463(iParam0, 2048, 1);
		if (does_entity_exist(iVar0))
		{
			set_ped_config_flag(iVar0, 1, false);
			set_ped_config_flag(iVar0, 54, false);
			set_ped_config_flag(iVar0, 121, false);
			set_ped_config_flag(iVar0, 302, false);
		}
	}
	else
	{
		func_463(iParam0, 2048, 0);
		if (does_entity_exist(iVar0))
		{
			set_ped_config_flag(iVar0, 1, true);
			set_ped_config_flag(iVar0, 54, true);
			set_ped_config_flag(iVar0, 121, true);
			set_ped_config_flag(iVar0, 302, true);
		}
	}
}

void func_180(int iParam0, bool bParam1)
{
	iVar0 = 0;
	while (iVar0 <= (*iParam0 - 1))
	{
		func_175((*iParam0)[iVar0], bParam1);
		iVar0++;
	}
}

void func_181(int iParam0, vector3 vParam1, vector3 vParam4, int iParam7, bool bParam8)
{
	clear_ped_non_creation_area();
	vVar0 = { func_464(vParam1, vParam4, iParam7) };
	vVar3 = { func_465(vParam1, vParam4, iParam7) };
	set_ped_paths_back_to_original(vVar0, vVar3, 0);
	if (_0x91a5f9cbebb9d936(*iParam0))
	{
		remove_scenario_blocking_area(*iParam0, bParam8);
	}
}

void func_182(int iParam0)
{
	if (func_466(iParam0) && func_467())
	{
		remove_door_from_system(iParam0);
	}
}

void func_183(int iParam0)
{
	if ((does_entity_exist(iParam0) && !is_entity_dead(iParam0)) && is_ped_in_group(iParam0))
	{
		remove_ped_from_group(iParam0);
	}
}

void func_184(char[4] cParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (!func_468(iParam1))
	{
		return;
	}
	if (!func_264(iParam1))
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
		func_469(cParam0, iParam2);
		func_470(iParam2);
	}
	func_471(iParam1);
	func_472(iParam1, 0);
	func_473(iParam1, 0, bParam4, bParam5, -1082130432, 1, 1, 0, 0, 0, 0);
	if (bParam5)
	{
	}
}

bool func_185(int iParam0, bool bParam1)
{
	if (func_20() != -1)
	{
		return false;
	}
	if (!func_441(iParam0))
	{
		return false;
	}
	if (!func_474(iParam0) && bParam1)
	{
		return false;
	}
	return func_475(iParam0, 1);
}

bool func_186(int iParam0, int iParam1)
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

void func_187(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (!func_441(iParam0))
	{
		return;
	}
	if (!func_475(iParam0, 1))
	{
		return;
	}
	if (!func_475(iParam0, 2))
	{
		return;
	}
	if ((!bParam4 && !func_474(iParam0)) && func_476(iParam0))
	{
		return;
	}
	func_165(iParam0, 1);
	func_477(iParam0);
	if (func_443(func_442(iParam0)))
	{
		iVar0 = func_444(iParam0);
		if (!_0x800df3fc913355f3(iVar0))
		{
			return;
		}
		_0xbb68908cd11aebdc(iVar0);
		_0xb65e7f733956cf25(iVar0);
		if (bParam2 && !_0xeb98b38ca60742d7(iVar0))
		{
			_0x631cd2d77fdc0316(iVar0);
		}
		iVar1 = _0x31c70a716cae1fee(iVar0);
		if (!is_ped_injured(iVar1))
		{
			set_ped_config_flag(iVar1, 171, false);
		}
		if (bParam1)
		{
			_0x7b204f88f6c3d287(iVar0);
		}
		func_165(iParam0, 16);
	}
	if (func_475(iParam0, 128) && !bParam3)
	{
		func_478(iParam0, 0);
	}
}

void func_188(int* iParam0, bool bParam1)
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
		func_479(iParam0);
		delete_vehicle(iParam0);
	}
}

void func_189()
{
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (&iLocal_1777[iVar0] != 0)
		{
			remove_cover_point(&(iLocal_1777[iVar0]));
		}
		iVar0++;
	}
}

void func_190(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2)
	{
	}
	switch (iParam0)
	{
		case 1497516462:
			func_480(1497516462);
			func_481(2016141805);
			func_481(1010885152);
			func_481(-502324015);
			break;
		case 2016141805:
			func_481(1497516462);
			func_480(2016141805);
			func_481(1010885152);
			func_481(-502324015);
			break;
		case 1010885152:
			func_481(1497516462);
			func_481(2016141805);
			func_480(1010885152);
			func_481(-502324015);
			break;
		case -502324015:
			func_481(1497516462);
			func_481(2016141805);
			func_481(1010885152);
			func_480(-502324015);
			break;
		case -1056767524:
		case -538889627:
		case -538880323:
			func_481(-538889627);
			func_481(-538880323);
			func_481(-1056767524);
			func_480(iParam0);
			break;
		case -2038424081:
		case -1187950766:
		case -939420910:
		case 356365161:
		case 459290420:
		case 753127042:
		case 1884271742:
			func_482();
			func_480(iParam0);
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
			func_483();
			func_480(iParam0);
			break;
		case 2019386373:
			func_481(-664252410);
			func_481(2109952320);
			func_480(2019386373);
			break;
		case -664252410:
			func_481(2019386373);
			func_481(2109952320);
			func_480(-664252410);
			break;
		case 2109952320:
			func_481(2019386373);
			func_481(-664252410);
			func_480(2109952320);
			break;
		case -1674179981:
			func_481(-1835851517);
			func_481(-1838352012);
			func_480(-1674179981);
			break;
		case -1835851517:
			func_481(-1674179981);
			func_481(-1838352012);
			func_480(-1835851517);
			break;
		case -1838352012:
			func_481(-1674179981);
			func_481(-1835851517);
			func_480(-1838352012);
			break;
		case -1717960576:
			func_481(210001842);
			func_480(-1717960576);
			break;
		case 210001842:
			func_481(-1717960576);
			func_480(210001842);
			break;
		case -150493654:
			func_481(-1271608261);
			func_481(1846061697);
			func_481(-1145519186);
			func_480(-150493654);
			break;
		case -1271608261:
			func_481(-150493654);
			func_481(1846061697);
			func_481(-1145519186);
			func_480(-1271608261);
			break;
		case 1846061697:
			func_481(-150493654);
			func_481(-1271608261);
			func_481(-1145519186);
			func_480(1846061697);
			break;
		case -1145519186:
			func_481(-150493654);
			func_481(-1271608261);
			func_481(1846061697);
			func_480(-1145519186);
			break;
		case 1766284049:
			func_481(280705402);
			func_481(1926308480);
			func_480(1766284049);
			break;
		case 280705402:
			func_481(1766284049);
			func_481(1926308480);
			func_480(280705402);
			break;
		case 1926308480:
			func_481(1766284049);
			func_481(280705402);
			func_480(1926308480);
			break;
		case 1609506757:
			if (bParam1)
			{
				func_481(439465264);
				func_480(1609506757);
			}
			else
			{
				func_481(1609506757);
				func_481(439465264);
			}
			break;
		case 439465264:
			if (func_484(1609506757))
			{
				if (bParam1)
				{
					func_480(439465264);
				}
				else
				{
					func_481(439465264);
				}
			}
			break;
		case 1822001510:
			func_481(-1612662716);
			func_480(1822001510);
			break;
		case -1612662716:
			func_481(1822001510);
			func_480(-1612662716);
			break;
		case 1306158345:
			func_481(1952610440);
			func_481(-223469678);
			func_481(-404698347);
			func_481(1517904467);
			func_480(1306158345);
			break;
		case 1952610440:
			func_481(1306158345);
			func_481(-223469678);
			func_481(-404698347);
			func_481(1517904467);
			func_480(1952610440);
			break;
		case -223469678:
			func_481(1306158345);
			func_481(1952610440);
			func_481(-404698347);
			func_481(1517904467);
			func_480(-223469678);
			break;
		case -404698347:
			func_481(1306158345);
			func_481(1952610440);
			func_481(-223469678);
			func_481(1517904467);
			func_480(-404698347);
			break;
		case 1517904467:
			func_481(1306158345);
			func_481(1952610440);
			func_481(-223469678);
			func_481(-404698347);
			func_480(1517904467);
			break;
		case 1376646519:
			func_481(931649776);
			func_481(-434590080);
			func_481(1743048395);
			func_481(449774763);
			func_480(1376646519);
			break;
		case 931649776:
			func_481(1376646519);
			func_481(-434590080);
			func_481(1743048395);
			func_481(449774763);
			func_480(931649776);
			break;
		case -434590080:
			func_481(1376646519);
			func_481(931649776);
			func_481(1743048395);
			func_481(449774763);
			func_480(-434590080);
			break;
		case 1743048395:
			func_481(1376646519);
			func_481(931649776);
			func_481(-434590080);
			func_481(449774763);
			func_480(1743048395);
			break;
		case 449774763:
			func_481(1376646519);
			func_481(931649776);
			func_481(-434590080);
			func_481(1743048395);
			func_480(449774763);
			break;
		case -1414537028:
			func_481(38162571);
			func_481(1350391819);
			func_481(54073871);
			func_480(-1414537028);
			break;
		case 38162571:
			func_481(-1414537028);
			func_481(1350391819);
			func_481(54073871);
			func_480(38162571);
			break;
		case 1350391819:
			func_481(-1414537028);
			func_481(38162571);
			func_481(54073871);
			func_480(1350391819);
			break;
		case 54073871:
			func_481(-1414537028);
			func_481(38162571);
			func_481(1350391819);
			func_480(54073871);
			break;
		case 198200492:
			func_480(198200492);
			func_481(-1124061431);
			func_481(52706132);
			func_481(-259123672);
			break;
		case -1124061431:
			func_481(198200492);
			func_480(-1124061431);
			func_481(52706132);
			func_481(-259123672);
			break;
		case 52706132:
			func_481(198200492);
			func_481(-1124061431);
			func_480(52706132);
			func_481(-259123672);
			break;
		case -259123672:
			func_481(198200492);
			func_481(-1124061431);
			func_481(52706132);
			func_480(-259123672);
			break;
		case -919512195:
			func_480(-919512195);
			func_481(-1925798111);
			func_481(420709909);
			func_481(1703426636);
			break;
		case -1925798111:
			func_480(-1925798111);
			func_481(-919512195);
			func_481(420709909);
			func_481(1703426636);
			break;
		case 420709909:
			func_480(420709909);
			func_481(-919512195);
			func_481(-1925798111);
			func_481(1703426636);
			break;
		case 1703426636:
			func_480(1703426636);
			func_481(-919512195);
			func_481(-1925798111);
			func_481(420709909);
			break;
		case -1223121209:
			func_480(-1223121209);
			func_481(630808005);
			break;
		case 630808005:
			func_480(630808005);
			func_481(-1223121209);
			break;
		case 1453909576:
			func_480(1453909576);
			func_481(1643531967);
			break;
		case 1643531967:
			func_480(1643531967);
			func_481(1453909576);
			break;
		case 0:
			func_480(0);
			func_481(473295046);
			func_481(-1738165526);
			break;
		case 473295046:
			func_480(473295046);
			func_481(0);
			func_481(-1738165526);
			break;
		case -1738165526:
			func_480(-1738165526);
			func_481(0);
			func_481(473295046);
			break;
		case 932909855:
			func_480(932909855);
			func_481(2051822093);
			break;
		case 2051822093:
			func_480(2051822093);
			func_481(932909855);
			break;
		case 405586984:
			func_480(405586984);
			func_481(1509509592);
			func_481(-959357075);
			func_481(-1311865656);
			break;
		case 1509509592:
			func_480(1509509592);
			func_481(405586984);
			func_481(-959357075);
			func_481(-1311865656);
			break;
		case -959357075:
			func_480(-959357075);
			func_481(1509509592);
			func_481(405586984);
			func_481(-1311865656);
			break;
		case -1311865656:
			func_480(-1311865656);
			func_481(1509509592);
			func_481(-959357075);
			func_481(405586984);
			break;
		case -524145696:
			if (bParam1)
			{
				func_480(-524145696);
			}
			else
			{
				func_481(-524145696);
			}
			func_481(1626481264);
			func_481(282809459);
			break;
		case 282809459:
			func_480(282809459);
			func_481(1626481264);
			func_481(-524145696);
			break;
		case 1626481264:
			func_480(1626481264);
			func_481(-524145696);
			func_481(282809459);
			break;
		case 885203519:
			if (bParam1)
			{
				func_480(885203519);
			}
			else
			{
				func_481(885203519);
			}
			break;
		case -1080627546:
			if (bParam1)
			{
				func_480(-1080627546);
			}
			else
			{
				func_481(-1080627546);
			}
			break;
		default:
			if (bParam1)
			{
				if (!func_484(iParam0))
				{
					func_480(iParam0);
				}
			}
			else if (func_484(iParam0))
			{
				func_481(iParam0);
			}
			break;
	}
}

void func_191()
{
	if (is_named_rendertarget_registered("cata_mp_stamp_ct"))
	{
		release_named_rendertarget("cata_mp_stamp_ct");
	}
	if (is_named_rendertarget_registered("catalogue01x_ct"))
	{
		release_named_rendertarget("catalogue01x_ct");
	}
}

int func_192(int iParam0)
{
	if (!func_485(iParam0))
	{
		return 0;
	}
	if (!does_entity_exist(Global_1360165[iParam0]))
	{
		(*Global_1360165)[iParam0] = 0;
	}
	return Global_1360165[iParam0];
}

void func_193(int iParam0)
{
	func_486(iParam0, 4, 1);
}

int func_194(int iParam0)
{
	return iParam0;
}

void func_195(int iParam0)
{
	if (!func_487(iParam0))
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

bool func_196(int iParam0)
{
	return (iParam0 > -1 && iParam0 <= 80);
}

bool func_197(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

bool func_198(int iParam0)
{
	iVar0 = func_300(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

bool func_199(int iParam0)
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
		iVar0 = func_201(iParam0);
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

int func_200(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_5;
	}
	return Global_1058888->f_498[iParam0]->f_1;
}

int func_201(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_1;
	}
	iVar0 = func_488(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888->f_40501.f_1[iVar0]->f_1;
}

int func_202(int iParam0)
{
	if (!func_197(iParam0))
	{
		return 0;
	}
	return func_490(func_489(iParam0));
}

void func_203(int iParam0, int iParam1, int iParam2)
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

bool func_204(int iParam0, bool bParam1, bool bParam2)
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
		if (func_491())
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
		iVar0 = func_276(&(Global_1898164->f_1[0]));
		if (func_277(iVar0) && func_305((*Global_1347702)[iVar0]->f_12, 131072))
		{
			return false;
		}
	}
	if (iParam0 == 0 && func_197(&(Global_1898164->f_1[0])))
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

bool func_205(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_206(int iParam0)
{
	switch (func_202(iParam0))
	{
		case 1:
			iVar0 = func_276(iParam0);
			return func_492(iVar0);
		case 8:
			iVar1 = func_276(iParam0);
			if (func_305((*Global_1347702)[iVar1]->f_12, 1))
			{
				return func_493(iVar1);
			}
			break;
	}
	return -1;
}

void func_207(bool bParam0)
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
		func_494(iVar0, Global_1898077->f_12);
	}
	else
	{
		Global_1898077->f_1 = 0;
		Global_1898077->f_7 = iVar0;
		Global_1898077->f_8 = func_495();
		Global_1898077->f_9 = func_496(Global_1894899->f_2);
		func_497(Global_1898077->f_7, Global_1898077->f_8, Global_1898077->f_9);
	}
	Global_1898077->f_2 = 0;
}

int func_208()
{
	if (!func_331((*Global_1835011)[4]->f_1, 1))
	{
		return 0;
	}
	else if (!func_331((*Global_1347702)[66]->f_15, 1))
	{
		return 1;
	}
	else if (!func_331((*Global_1347702)[67]->f_15, 1))
	{
		return 2;
	}
	else if (!func_331((*Global_1835011)[38]->f_1, 1))
	{
		return 3;
	}
	else if (!func_331((*Global_1347702)[68]->f_15, 1))
	{
		return 4;
	}
	else if (!func_331((*Global_1835011)[59]->f_1, 1))
	{
		return 5;
	}
	else if (!func_331((*Global_1835011)[67]->f_1, 1))
	{
		return 7;
	}
	else
	{
		return 8;
	}
	return -1;
}

void func_209(int iParam0, int iParam1)
{
	if (!func_197(iParam0))
	{
		return;
	}
	func_498(iParam0, iParam1);
}

int func_210(int iParam0)
{
	return &(Global_1898164->f_1[iParam0]);
}

int func_211(bool bParam0)
{
	if (!bParam0 && func_484(373691918))
	{
		return 0;
	}
	_0xc61edebf16cd9668(752193127, bParam0, 0);
	return 1;
}

void func_212(int iParam0)
{
	Global_1898164 = (Global_1898164 || iParam0);
}

void func_213(int iParam0, bool bParam1)
{
	if (func_20() != -1)
	{
		return;
	}
	if (func_210(0) != iParam0)
	{
		return;
	}
	if (func_499(iParam0))
	{
		if (bParam1)
		{
			func_500(-525676072);
		}
		else
		{
			func_501(-525676072);
		}
	}
}

int func_214(int iParam0)
{
	return func_503(func_502(iParam0));
}

void func_215(int iParam0)
{
	Global_1572864->f_12 = iParam0;
}

void func_216(int iParam0)
{
	Global_1572864->f_11 = iParam0;
}

void func_217(int iParam0)
{
	Global_1572864->f_15 = iParam0;
}

void func_218(float fParam0)
{
	Global_1572864->f_22 = fParam0;
}

void func_219()
{
	if (func_10(Global_43801))
	{
		func_11(&Global_43801, 0, 0);
	}
}

bool func_220()
{
	return func_504(_0xc17f69e1418cd11f(3));
}

bool func_221()
{
	iVar0 = _0xc17f69e1418cd11f(1);
	return (iVar0 != 0 && _0x59fa676177dbe4c9(iVar0) == 4);
}

int func_222(int iParam0)
{
	iParam0 = func_271(iParam0);
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

int func_223(int iParam0, int iParam1)
{
	if (!func_505(iParam0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if ((*Global_40.f_11206[iParam0])[iVar0]->f_3 == iParam1)
		{
			func_506(iParam0, (*Global_40.f_11206[iParam0])[iVar0]);
		}
		iVar0++;
	}
	return 1;
}

bool func_224(char* sParam0, int iParam1)
{
	return (sParam0->f_8 && iParam1) != 0;
}

bool func_225(char* sParam0, bool bParam1)
{
	if (func_224(sParam0, 1))
	{
		return false;
	}
	if (sParam0->f_9 == 15 || sParam0->f_9 == 16)
	{
		prepare_music_event(sParam0);
		func_507(sParam0, 1);
		return true;
	}
	if (bParam1)
	{
		if (sParam0->f_9 == 17 || sParam0->f_9 == 19)
		{
			set_audio_flag(sParam0, true);
			func_507(sParam0, 1);
			return false;
		}
		if (sParam0->f_9 == 18 || sParam0->f_9 == 20)
		{
			set_audio_flag(sParam0, false);
			func_507(sParam0, 1);
			return false;
		}
	}
	else
	{
		if (sParam0->f_9 == 10 || sParam0->f_9 == 12)
		{
			set_audio_flag(sParam0, true);
			func_507(sParam0, 1);
			return false;
		}
		if (sParam0->f_9 == 11 || sParam0->f_9 == 13)
		{
			set_audio_flag(sParam0, false);
			func_507(sParam0, 1);
			return false;
		}
	}
	if (!is_string_null_or_empty(sParam0))
	{
		trigger_music_event(sParam0);
		func_507(sParam0, 1);
		return true;
	}
	func_507(sParam0, 1);
	return false;
}

bool func_226(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_227(int iParam0)
{
	func_508(iParam0, 0f);
}

int func_228(int iParam0)
{
	if (!func_26(iParam0))
	{
		return round((iParam0->f_1 * 1000f));
	}
	if (func_509(iParam0))
	{
		return round((iParam0->f_2 * 1000f));
	}
	return (func_510() - round((iParam0->f_1 * 1000f)));
}

void func_229(bool bParam0, bool bParam1)
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
		func_511(0);
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

void func_230(var uParam0, vector3 vParam1, float fParam4)
{
	Var0 = { vParam1 };
	Var0.f_3 = fParam4;
	func_512(uParam0, Var0);
}

int func_231(char[4] cParam0, int iParam1)
{
	return cParam0->f_1[func_132(iParam1)]->f_9;
}

void func_232(int iParam0, struct<4> Param1, struct<4> Param5, int iParam9, int iParam10)
{
	Global_1572864->f_8 = iParam0;
	Global_1572864->f_9 = iParam9;
	Global_1572864->f_10 = iParam10;
	StringCopy(&cVar0, "INVALID", 8);
	if (func_202(iParam0) == 1)
	{
		cVar0 = func_110(func_513(iParam0));
		_0x8ec7890d446bd9c1(&cVar0, 0, Global_1572864->f_9);
	}
	else if (func_202(iParam0) == 8)
	{
		cVar0 = func_515(func_514(iParam0));
		_0x8ec7890d446bd9c1(&cVar0, 0, Global_1572864->f_9);
	}
	func_516(1, 1);
	func_517(1, Param1, Param1.f_3);
	*Global_1347394 = { Param5 };
	func_64(0);
	func_65(0);
	func_218(1f);
}

void func_233(char* sParam0)
{
	if (is_audio_scene_active(sParam0))
	{
		stop_audio_scene(sParam0);
	}
	func_507(sParam0, 2);
}

void func_234(int iParam0, int iParam1)
{
	if (!func_518(iParam0))
	{
		return;
	}
	Global_40.f_11029[iParam0] = (Global_40.f_11029[iParam0] || iParam1);
}

void func_235(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_236()
{
	Global_1934266->f_78.f_62 = -1;
}

void func_237()
{
	StringCopy(&(Global_1934266->f_78.f_64), "", 24);
}

void func_238()
{
	StringCopy(&(Global_1934266->f_78.f_67), "", 24);
}

void func_239()
{
	Global_1934266->f_78.f_63 = 0;
}

bool func_240()
{
	return func_519(get_id_of_this_thread());
}

void func_241(bool bParam0)
{
	if (bParam0)
	{
		Global_1945938->f_865 = (Global_1945938->f_865 - Global_1945938->f_865 & 2);
	}
	else
	{
		Global_1945938->f_865 |= 2;
	}
	func_520(bParam0);
}

void func_242()
{
	if (!Global_1894899->f_186)
	{
		_0xf5ffb08976911b50(Global_1894899->f_182, Global_1894899->f_183, Global_1894899->f_184, Global_1894899->f_185);
	}
}

void func_243(int iParam0, int iParam1, int iParam2)
{
	_0x36559148b78853b3(iParam0, iParam1, iParam2);
}

bool func_244()
{
	return (Global_1894899 & 1 != 0 && func_77() != -1);
}

void func_245(var uParam0)
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

void func_246(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_247(int iParam0)
{
	if (!func_521(iParam0))
	{
		return;
	}
	(*Global_1310750)[iParam0]->f_46 = 0;
}

void func_248()
{
	func_522(64);
}

void func_249()
{
	Global_1310750->f_16072 = 0;
}

bool func_250()
{
	if (Global_1572887->f_12 == -1)
	{
		return false;
	}
	return Global_1058888->f_4;
}

bool func_251(int iParam0)
{
	return func_252(23, iParam0);
}

bool func_252(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_523(&(Global_1109400->f_4), iVar0, 5);
	}
	if (iParam1 == func_524())
	{
		return func_523(&(Global_1109400->f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (&Global_1225639->f_21[iParam1])
	{
		return func_523(&((*Global_1108178)[iParam1]->f_4), iVar0, 5);
	}
	return false;
}

bool func_253(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

bool func_254(int iParam0)
{
	if (!func_253(iParam0))
	{
		return false;
	}
	return func_257(iParam0, 8);
}

void func_255(int iParam0, int iParam1)
{
	if (!func_253(iParam0))
	{
		return;
	}
	(*Global_1888801)[iParam0]->f_19 = iParam1;
}

void func_256(int iParam0)
{
	Global_1894899 = (Global_1894899 || iParam0);
}

bool func_257(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		return (Global_23118[iParam0] && iParam1) != 0;
	}
	return (Global_1058888->f_40615[iParam0] && iParam1) != 0;
}

void func_258(int iParam0)
{
	Global_1894899 = (&Global_1894899 - (Global_1894899 && iParam0));
}

bool func_259()
{
	bVar0 = false;
	iVar1 = 0;
	while (iVar1 < 150)
	{
		if (func_257(iVar1, 1))
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
			else if (func_257(iVar1, 2))
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
				func_292(iVar1, 11);
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

bool func_260(var uParam0)
{
	if (func_525(uParam0, 1) || func_525(uParam0, 2))
	{
		return true;
	}
	return false;
}

bool func_261(int iParam0, var uParam1)
{
	return is_itemset_valid(iParam0);
}

int func_262(struct<2> Param0)
{
	if (!func_261(Param0))
	{
		return 0;
	}
	return get_itemset_size(Param0);
}

int func_263(struct<2> Param0, int iParam2)
{
	if (!func_261(Param0))
	{
		return 0;
	}
	iVar0 = get_indexed_item_in_itemset(iParam2, Param0);
	iVar1 = iVar0;
	return iVar1;
}

bool func_264(int iParam0)
{
	if (!func_468(iParam0))
	{
		return false;
	}
	if (!func_526(iParam0))
	{
		return false;
	}
	return (*Global_1360165)[iParam0]->f_129 == get_id_of_this_thread();
}

int func_265(char[4] cParam0)
{
	return cParam0->f_5411;
}

int func_266(int iParam0)
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

int func_267(int iParam0)
{
	iParam0 = func_271(iParam0);
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

void func_268(int iParam0)
{
	iParam0 = func_271(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = get_id_of_this_thread();
	func_527(iParam0);
	if (func_528(iParam0))
	{
		if (func_267(iParam0) != iVar0)
		{
			return;
		}
	}
	func_529(iParam0);
	func_530(iParam0);
	iVar1 = func_222(iParam0);
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
			if (!func_531(iVar2))
			{
				set_ped_model_is_suppressed(iVar2, false);
			}
		}
		func_532(iParam0);
	}
}

void func_269(int iParam0, bool bParam1)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (is_entity_dead(iParam0) || is_ped_injured(iParam0))
	{
		return;
	}
	if (!func_533(iParam0))
	{
		return;
	}
	iVar0 = func_266(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (iVar0 >= 7)
	{
		return;
	}
	func_59(iVar0);
	func_527(iVar0);
	iVar1 = get_id_of_this_thread();
	iVar2 = func_267(iVar0);
	if (!bParam1)
	{
		if (iVar1 != iVar2)
		{
			return;
		}
		if (!func_528(iVar0))
		{
			return;
		}
	}
	func_534(iVar0);
	set_ped_keep_task(iParam0, true);
	if (bParam1 && func_20() == -1)
	{
		if (!_0x88ad6cc10d8d35b2(iParam0))
		{
			set_entity_as_mission_entity(iParam0, true, true);
		}
	}
}

void func_270(char[4] cParam0, int iParam1)
{
	cParam0->f_5308 = (cParam0->f_5308 - (cParam0->f_5308 && iParam1));
}

int func_271(int iParam0)
{
	if (iParam0 == 7)
	{
		return Global_40.f_1095;
	}
	return iParam0;
}

void func_272()
{
	if (func_535(0))
	{
		func_536(0);
	}
	if (func_535(1))
	{
		func_536(1);
	}
	if (func_535(5))
	{
		func_536(5);
	}
	if (func_535(6))
	{
		func_529(6);
	}
}

struct<2> func_273(int iParam0)
{
	MemCopy(&Var0, {func_110(iParam0)}, 2);
	return Var0;
}

struct<2> func_274(int iParam0)
{
	Var0 = { func_273(iParam0) };
	StringConCat(&Var0, "AUD", 16);
	return Var0;
}

void func_275(var uParam0)
{
	_0xebff94328ff7a18a(-3.141593f, 3.141593f);
	if (_uiprompt_is_valid(uParam0->f_11))
	{
		_uiprompt_delete(uParam0->f_11);
	}
}

int func_276(int iParam0)
{
	if (!func_197(iParam0))
	{
		return -1;
	}
	return func_537(func_489(iParam0));
}

bool func_277(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_278(int iParam0, int iParam1)
{
	return (Global_40.f_490.f_402[iParam0] && iParam1) != 0;
}

void func_279(int iParam0, bool bParam1)
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

void func_280(bool bParam0)
{
	iVar0 = 0;
	while (iVar0 < &Global_1347702)
	{
		if (func_277(iVar0))
		{
			if (func_278(iVar0, 4))
			{
				func_281(iVar0, bParam0);
			}
		}
		iVar0++;
	}
}

void func_281(int iParam0, bool bParam1)
{
	if (!func_278(iParam0, 4))
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
		if (func_278(iParam0, 8))
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

void func_282(int iParam0, bool bParam1)
{
	if ((*Global_1347702)[iParam0]->f_12 & 67108864 != 0)
	{
		return;
	}
	if (!func_278(iParam0, 4))
	{
		return;
	}
	if (!_uilog_is_entry_registered(func_538(iParam0), func_539(iParam0)))
	{
		return;
	}
	if (bParam1)
	{
		if (func_278(iParam0, 16))
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
		if (func_278(iParam0, 16))
		{
		}
		else
		{
			_uilog_mark_entry_availability(func_538(iParam0), func_539(iParam0), 0, "");
		}
		func_540(iParam0, 8);
	}
}

int func_283(char[4] cParam0)
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

void func_284(int iParam0, int iParam1)
{
	if (func_535(0))
	{
		if (func_542(0))
		{
			func_543(0);
		}
	}
	if (func_535(1))
	{
		if (func_542(1))
		{
			func_543(1);
		}
	}
}

void func_285(char[4] cParam0)
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
		if (func_431(cParam0, 0, cParam0->f_5413, cParam0->f_5413.f_1, cParam0->f_5413.f_2, cParam0->f_5416, 1, 1, 1))
		{
		}
	}
}

bool func_286(char[4] cParam0)
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

void func_287(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, int iParam6, int iParam7)
{
	if (!bParam1)
	{
		func_544(iParam0, sParam4, iParam5);
	}
	func_545(iParam0, bParam1, fParam2, iParam3, iParam7);
}

int func_288(int iParam0)
{
	if (!func_253(iParam0))
	{
		return 0;
	}
	return (*Global_1888801)[iParam0]->f_20;
}

int func_289()
{
	return &Global_1899515;
}

void func_290(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_23118[iParam0]->f_2 = iParam1;
		return;
	}
	Global_1058888->f_40615[iParam0]->f_2 = iParam1;
}

void func_291(int iParam0, int iParam1)
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

void func_292(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_23118[iParam0] = (&Global_23118[iParam0] - (Global_23118[iParam0] && iParam1));
		return;
	}
	Global_1058888->f_40615[iParam0] = (&Global_1058888->f_40615[iParam0] - (Global_1058888->f_40615[iParam0] && iParam1));
}

void func_293(int iParam0)
{
	if (!func_253(iParam0))
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

int func_294(int iParam0)
{
	if (func_549(&(Global_1109400->f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

int func_295(int iParam0)
{
	if (func_550(&(Global_1109400->f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

bool func_296(int iParam0, int iParam1)
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

void func_297(int iParam0, int iParam1, int iParam2, bool bParam3)
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
			func_299(iVar0, iParam1, 1f, (iVar1 || iParam2), bParam3);
		}
		iVar0++;
	}
}

void func_298(float fParam0, bool bParam1, bool bParam2)
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

void func_299(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
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

int func_300(int iParam0)
{
	if (!func_197(iParam0))
	{
		return -1;
	}
	return func_201(iParam0);
}

void func_301(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_6 = iParam1;
}

int func_302(bool bParam0, int iParam1)
{
	if (!bParam0 && func_484(373691918))
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
	func_211(bParam0);
	return 1;
}

void func_303()
{
	Var0 = Global_35;
	Var0.f_12 = 8;
	Var0.f_8 = 0;
	iVar17 = 0;
	while (iVar17 < 27)
	{
		if (func_468(iVar17))
		{
			iVar18 = func_192(iVar17);
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
	func_557(&(Global_1359489->f_55));
	if (func_558(1777191912, 1))
	{
		func_559(1777191912, 1, 0);
	}
}

void func_304(int iParam0)
{
	if (!func_197(iParam0))
	{
		return;
	}
	func_561(iParam0, (func_560(iParam0) + shift_left(1, 16)));
}

bool func_305(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_306()
{
	return func_562() > 0;
}

void func_307(int iParam0, int iParam1, bool bParam2)
{
	switch (iParam0)
	{
		case 67:
			func_563(-1032423150, iParam1);
			break;
		case 18:
			func_563(294066959, iParam1);
			func_563(-1925639563, iParam1);
			func_563(-378582304, iParam1);
			func_563(-338306437, iParam1);
			break;
		case 20:
			func_563(437270255, iParam1);
			break;
		case 2:
			func_563(-304000413, iParam1);
			func_563(-533612796, iParam1);
			func_563(48036954, iParam1);
			break;
		case 23:
			func_563(193108691, iParam1);
			func_563(491732588, iParam1);
			func_563(671962088, iParam1);
			func_564(1);
			break;
		case 16:
			func_563(-1836056650, iParam1);
			func_563(-754657922, iParam1);
			func_563(-1752355838, iParam1);
			func_563(-1375324510, iParam1);
			break;
		case 59:
			func_563(-514392105, iParam1);
			func_563(-822060246, iParam1);
			if (func_565(146))
			{
				func_563(1372748575, iParam1);
			}
			func_564(1);
			break;
		case 76:
			func_563(1991352213, iParam1);
			if (func_566() == 0)
			{
				func_563(1852488616, iParam1);
			}
			else
			{
				func_563(-9866350, iParam1);
			}
			break;
		case 44:
			func_563(863852599, iParam1);
			func_563(1228374935, iParam1);
			func_563(1517889050, iParam1);
			func_563(830657578, iParam1);
			func_563(1901354958, iParam1);
			break;
		case 46:
			func_563(-582805654, iParam1);
			func_563(250378940, iParam1);
			func_563(-2143265426, iParam1);
			break;
		case 17:
			func_563(-941494139, iParam1);
			func_563(1641489521, iParam1);
			break;
		case 19:
			func_563(-1829423531, iParam1);
			func_563(-1590504752, iParam1);
			func_563(1357221321, iParam1);
			break;
		case 21:
			func_563(-1037992610, iParam1);
			func_563(-1286414399, iParam1);
			func_564(0);
			break;
		case 15:
			func_563(-1014460309, iParam1);
			func_563(-1030502825, iParam1);
			break;
		case 33:
			func_563(479388090, iParam1);
			func_563(-1396342239, iParam1);
			func_563(-619618632, iParam1);
			break;
		case 34:
			func_563(1193561641, iParam1);
			break;
		case 64:
			func_563(1363960851, iParam1);
			break;
		case 60:
			func_563(-1232453926, iParam1);
			func_563(-882833584, iParam1);
			break;
		case 73:
			func_563(2023205767, iParam1);
			break;
		case 74:
			func_563(-2135286513, iParam1);
			if (func_566() == 0)
			{
				func_563(33799444, iParam1);
			}
			else
			{
				func_563(-161343203, iParam1);
			}
			break;
		case 8:
			func_563(841639693, iParam1);
			func_563(358952323, iParam1);
			break;
		case 36:
			func_563(852538149, iParam1);
			func_563(689020839, iParam1);
			if (&Global_1357515 == 0)
			{
				func_563(-404049058, iParam1);
			}
			else if (&Global_1357515 == 1)
			{
				func_563(1116039310, iParam1);
			}
			break;
		case 27:
			func_563(107633428, iParam1);
			func_563(335902282, iParam1);
			func_563(575673055, iParam1);
			func_563(-425944207, iParam1);
			break;
		case 28:
			func_563(-1941530250, iParam1);
			func_563(1399269304, iParam1);
			func_563(1839684664, iParam1);
			func_563(923168503, iParam1);
			func_563(-1485078322, iParam1);
			break;
		case 29:
			func_563(574995900, iParam1);
			func_563(-1691275407, iParam1);
			func_563(-1725307861, iParam1);
			break;
		case 31:
			func_563(-2108383238, iParam1);
			func_563(-1321828931, iParam1);
			func_563(-1632118592, iParam1);
			func_563(334938948, iParam1);
			break;
		case 4:
			func_563(115823701, iParam1);
			func_563(-1896939736, iParam1);
			func_563(-1830746356, iParam1);
			func_563(-1235169781, iParam1);
			func_564(0);
			break;
		case 6:
			func_563(1801727621, iParam1);
			if (&Global_1357515 == -1)
			{
				func_563(-999872881, iParam1);
			}
			else if (&Global_1357515 == 0)
			{
				func_563(-1227289741, iParam1);
			}
			else if (&Global_1357515 == 1)
			{
				func_563(-384176140, iParam1);
			}
			break;
		case 25:
			func_563(1056132658, iParam1);
			break;
		case 24:
			if (&Global_1357515 == -1)
			{
				func_563(1343889751, iParam1);
			}
			else if (&Global_1357515 == 0)
			{
				func_563(-948326001, iParam1);
			}
			else if (&Global_1357515 == 1)
			{
				func_563(-1374849484, iParam1);
			}
			break;
		case 48:
			func_563(-1632856601, iParam1);
			if (&Global_1357515 == -1)
			{
				func_563(217772674, iParam1);
			}
			else
			{
				func_563(2071798160, iParam1);
			}
			if (func_567(51))
			{
				func_563(-792802286, iParam1);
			}
			break;
		case 49:
			func_563(-1972727021, iParam1);
			if (&Global_1357515 == 0)
			{
				func_563(-1444030885, iParam1);
			}
			else if (&Global_1357515 == 1)
			{
				func_563(-1272255787, iParam1);
			}
			else if (&Global_1357515 == 2)
			{
				func_563(1402120602, iParam1);
			}
			break;
		case 58:
			func_563(-1661934591, iParam1);
			break;
		case 50:
			func_563(-1713759426, iParam1);
			break;
		case 52:
			func_563(-314799932, iParam1);
			func_563(-462260432, iParam1);
			func_563(822929377, iParam1);
			if (bParam2 == 1)
			{
				func_563(345256028, iParam1);
				func_563(-1635084094, iParam1);
			}
			else
			{
				func_563(114267347, iParam1);
			}
			break;
		case 32:
			func_563(615304157, iParam1);
			break;
		case 47:
			func_563(415434835, iParam1);
			break;
		case 69:
			func_563(1373465877, iParam1);
			if (func_331((*Global_1347702)[9]->f_15, 1))
			{
				func_563(-2058273527, iParam1);
			}
			break;
		case 70:
			func_563(451334985, iParam1);
			if (func_566() == 0)
			{
				func_563(-224150200, iParam1);
			}
			else
			{
				func_563(289012628, iParam1);
			}
			break;
		case 71:
			if (func_566() == 0)
			{
				func_563(-41692120, iParam1);
			}
			else
			{
				func_563(1537840678, iParam1);
			}
			break;
		case 37:
			func_563(1520478365, iParam1);
			break;
		case 9:
			if (&Global_1357515 == -1)
			{
				func_563(1842132550, iParam1);
			}
			else
			{
				func_563(-785735240, iParam1);
			}
			func_563(-1605690566, iParam1);
			break;
		case 13:
			func_563(-731367459, iParam1);
			func_563(224176585, iParam1);
			func_563(-14545580, iParam1);
			break;
		case 53:
			func_563(1095274522, iParam1);
			break;
		case 54:
			func_563(-572027988, iParam1);
			break;
		case 56:
			func_563(1339307101, iParam1);
			func_563(2102267732, iParam1);
			break;
		case 57:
			func_563(710102686, iParam1);
			break;
		case 22:
			func_563(-1754368482, iParam1);
			func_563(-2071408557, iParam1);
			break;
		case 12:
			func_563(-181334543, iParam1);
			break;
		case 0:
			func_563(-2134669864, iParam1);
			func_563(-548289709, iParam1);
			func_563(-911271922, iParam1);
			func_563(-604455775, iParam1);
			break;
		case 1:
			func_564(1);
			break;
		case 3:
			if (func_342())
			{
				if (_journal_can_write_entry(-1478534115))
				{
					func_563(-1286192062, iParam1);
				}
			}
			else if (_journal_can_write_entry(-1286192062))
			{
				func_563(-1478534115, iParam1);
			}
			break;
		default:
			break;
	}
}

bool func_308()
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

void func_309(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	switch (iParam0)
	{
		case 0:
			func_563(-145926707, iParam1);
			func_563(-604922090, iParam1);
			func_563(-848690769, iParam1);
			break;
		case 1:
			func_563(-1477631591, iParam1);
			break;
		case 2:
			func_563(76112544, iParam1);
			break;
		case 9:
			func_563(1396404308, iParam1);
			func_563(-1357381228, iParam1);
			if (func_331((*Global_1835011)[69]->f_1, 1))
			{
				func_563(1902679064, iParam1);
			}
			else
			{
				func_563(-2146422425, iParam1);
			}
			break;
		case 22:
			func_563(-1534761730, iParam1);
			break;
		case 26:
			if (bParam3 == 1)
			{
				func_563(-1934184559, iParam1);
				func_563(1281755988, iParam1);
			}
			else
			{
				func_563(-1745220872, iParam1);
				func_563(-1044976796, iParam1);
			}
			break;
		case 29:
			if (bParam3 == 1)
			{
				func_563(-1641504538, iParam1);
				func_563(-988014485, iParam1);
			}
			else if (func_565(26))
			{
				func_563(-343043950, iParam1);
				func_563(-640062214, iParam1);
			}
			else
			{
				func_563(-1272028496, iParam1);
			}
			break;
		case 32:
			if (bParam3 == 1)
			{
				if (&Global_1357515 == -1)
				{
					func_563(-1816782797, iParam1);
				}
				else if (&Global_1357515 == 0)
				{
					func_563(-176175898, iParam1);
				}
				else if (&Global_1357515 == 1)
				{
					func_563(1711460080, iParam1);
				}
				else if (&Global_1357515 == 2)
				{
					func_563(-2108576508, iParam1);
				}
				else if (&Global_1357515 == 3)
				{
					func_563(-1103692224, iParam1);
				}
				else if (&Global_1357515 == 4)
				{
					func_563(1301690984, iParam1);
				}
			}
			else
			{
				func_563(699457343, iParam1);
				if (&Global_1357515 == -1)
				{
					func_563(-908444626, iParam1);
				}
				else if (&Global_1357515 == 0)
				{
					func_563(-1475448104, iParam1);
				}
				else if (&Global_1357515 == 1)
				{
					func_563(1727640249, iParam1);
				}
				else if (&Global_1357515 == 2)
				{
					func_563(-2050867743, iParam1);
				}
				else if (&Global_1357515 == 3)
				{
					func_563(-996445915, iParam1);
				}
				else if (&Global_1357515 == 4)
				{
					func_563(-1868882771, iParam1);
				}
			}
			break;
		case 35:
			if (bParam3 == 1)
			{
				func_563(-754570528, iParam1);
			}
			else
			{
				func_563(1690083163, iParam1);
			}
			break;
		case 36:
			if (bParam3 == 1)
			{
				func_563(-2072125821, iParam1);
			}
			else
			{
				func_563(270040030, iParam1);
			}
			break;
		case 37:
			func_563(-870030001, iParam1);
			break;
		case 53:
			if (bParam3 == 1)
			{
				func_563(-505314737, iParam1);
				func_563(-1853052860, iParam1);
			}
			else
			{
				func_563(-1975624994, iParam1);
				func_563(1648135852, iParam1);
			}
			break;
		case 54:
			if (bParam3 == 1)
			{
				func_563(1690231002, iParam1);
			}
			else
			{
				func_563(517031924, iParam1);
			}
			break;
		case 55:
			if (bParam3 == 1)
			{
				func_563(1225386280, iParam1);
			}
			else if (func_565(54))
			{
				func_563(-283235773, iParam1);
			}
			else
			{
				func_563(701962369, iParam1);
			}
			break;
		case 38:
			if (bParam3 == 1)
			{
				func_563(1355398007, iParam1);
			}
			else
			{
				func_563(-1900349467, iParam1);
			}
			break;
		case 39:
			if (bParam3 == 1)
			{
				func_563(574636806, iParam1);
			}
			else
			{
				func_563(-196256251, iParam1);
			}
			break;
		case 40:
			if (bParam3 == 1)
			{
				func_563(821118338, iParam1);
			}
			else if (func_565(39))
			{
				func_563(846829260, iParam1);
			}
			else
			{
				func_563(-1212247553, iParam1);
			}
			break;
		case 43:
			if (bParam3 == 1)
			{
				if (func_364((*Global_1835011)[33]->f_1) == 1)
				{
					func_563(1422779093, iParam1);
				}
				else
				{
					func_563(-1769536986, iParam1);
				}
			}
			else
			{
				func_563(-600786233, iParam1);
			}
			break;
		case 45:
			if (bParam3 == 1)
			{
				func_563(352134789, iParam1);
			}
			else if (func_565(43))
			{
				func_563(260723113, iParam1);
			}
			else
			{
				func_563(1080243038, iParam1);
			}
			break;
		case 41:
			if (bParam3 == 1)
			{
				func_563(-457958799, iParam1);
			}
			else
			{
				func_563(2076458086, iParam1);
			}
			break;
		case 42:
			if (func_565(41))
			{
				func_563(-546824600, iParam1);
			}
			else
			{
				func_563(-308364587, iParam1);
			}
			break;
		case 49:
			if (bParam3 == 1)
			{
				func_563(1297261593, iParam1);
			}
			else
			{
				func_563(1940089142, iParam1);
			}
			break;
		case 50:
			if (bParam3 == 1)
			{
				func_563(2068484886, iParam1);
			}
			else if (func_565(49))
			{
				func_563(-1489080639, iParam1);
				func_563(-2102244050, iParam1);
			}
			else
			{
				func_563(-1863040467, iParam1);
			}
			break;
		case 51:
			func_563(-2055943209, iParam1);
			break;
		case 58:
			if (func_331((*Global_1347702)[23]->f_15, 1))
			{
				func_563(1650066845, iParam1);
			}
			else
			{
				func_563(151370023, iParam1);
			}
			func_563(1426057961, iParam1);
			func_563(476379584, iParam1);
			break;
		case 59:
			func_563(-1638117866, iParam1);
			break;
		case 62:
			func_563(199541730, iParam1);
			break;
		case 63:
			func_563(1703485804, iParam1);
			func_563(-800449045, iParam1);
			break;
		case 65:
			func_563(-1678210868, iParam1);
			func_563(-1448238026, iParam1);
			func_563(-1200864845, iParam1);
			func_563(1473511536, iParam1);
			break;
		case 66:
			func_563(-1774490051, iParam1);
			func_563(-34645921, iParam1);
			func_563(174027075, iParam1);
			func_563(-1155999, iParam1);
			func_564(1);
			break;
		case 67:
			func_563(701612593, iParam1);
			func_563(-1069631343, iParam1);
			func_563(1673428882, iParam1);
			break;
		case 68:
			func_563(-739133286, iParam1);
			func_563(-2130089358, iParam1);
			func_563(2056190391, iParam1);
			func_563(1941753817, iParam1);
			func_564(0);
			break;
		case 70:
			func_563(-1217555753, iParam1);
			break;
		case 71:
			func_563(697048821, iParam1);
			break;
		case 73:
			func_563(-553148661, iParam1);
			break;
		case 75:
			func_563(1349250531, iParam1);
			break;
		case 77:
			if (bParam3 == 1)
			{
				func_563(1414263863, iParam1);
			}
			else
			{
				func_563(-1772294468, iParam1);
			}
			break;
		case 79:
			if (bParam3 == 1)
			{
				func_563(1835465936, iParam1);
				func_563(523715611, iParam1);
			}
			else if (func_565(78))
			{
				func_563(1420338873, iParam1);
			}
			else
			{
				func_563(-46362051, iParam1);
			}
			break;
		case 80:
			if (bParam3 == 1)
			{
				func_563(10180941, iParam1);
			}
			else if (func_565(79))
			{
				func_563(768420635, iParam1);
			}
			else
			{
				func_563(-1734012650, iParam1);
			}
			break;
		case 85:
			if (bParam3 == 1)
			{
				func_563(-383601523, iParam1);
			}
			else
			{
				func_563(1004812390, iParam1);
			}
			break;
		case 86:
			if (bParam3 == 1)
			{
				func_563(1606472408, iParam1);
			}
			else
			{
				func_563(1405690220, iParam1);
			}
			break;
		case 87:
			if (bParam3 == 1)
			{
				func_563(-203571927, iParam1);
			}
			else
			{
				func_563(640033630, iParam1);
			}
			break;
		case 88:
			if (bParam3 == 1)
			{
				func_563(729886222, iParam1);
			}
			else
			{
				func_563(-158717807, iParam1);
			}
			break;
		case 89:
			if (bParam3 == 1)
			{
				func_563(-714816362, iParam1);
			}
			else
			{
				func_563(1160146336, iParam1);
			}
			break;
		case 92:
			if (bParam3 == 1)
			{
				func_563(-932932179, iParam1);
				func_563(-1458537240, iParam1);
			}
			else
			{
				func_563(-1764383885, iParam1);
				func_563(894349517, iParam1);
			}
			break;
		case 93:
			if (bParam3 == 1)
			{
				func_563(1741466706, iParam1);
			}
			else
			{
				func_563(1405815775, iParam1);
			}
			break;
		case 94:
			func_563(1163067702, iParam1);
			if (&Global_1357515 == -1)
			{
				func_563(1905280979, iParam1);
			}
			else
			{
				func_563(-1966245299, iParam1);
			}
			func_563(721468880, iParam1);
			break;
		case 99:
			func_563(800644248, iParam1);
			break;
		case 101:
			if (bParam3 == 1)
			{
				func_563(1502176860, iParam1);
				if (&Global_1357515 == -1)
				{
					func_563(-1117781095, iParam1);
				}
				else
				{
					func_563(-618709225, iParam1);
				}
			}
			else if (&Global_1357515 == -1)
			{
				func_563(141494548, iParam1);
			}
			else
			{
				func_563(-633957459, iParam1);
			}
			break;
		case 102:
			if (bParam3 == 1)
			{
				func_563(-369525697, iParam1);
			}
			else if (func_565(101))
			{
				func_563(1595015219, iParam1);
			}
			else
			{
				func_563(-321486961, iParam1);
			}
			break;
		case 103:
			func_563(1422724221, iParam1);
			break;
		case 104:
			if (bParam3 == 1)
			{
				func_563(793460477, iParam1);
				func_563(-1610242176, iParam1);
			}
			else if (func_565(103))
			{
				func_563(1830897187, iParam1);
			}
			else
			{
				func_563(1419017828, iParam1);
			}
			break;
		case 105:
			if (bParam3 == 1)
			{
				func_563(1528309077, iParam1);
			}
			else if (func_565(104))
			{
				func_563(1864966105, iParam1);
			}
			else
			{
				func_563(-103336013, iParam1);
			}
			break;
		case 108:
			func_563(1175579551, iParam1);
			break;
		case 109:
			if (bParam3 == 1)
			{
				func_563(-1123227713, iParam1);
				func_563(-889574341, iParam1);
			}
			else
			{
				func_563(2065385917, iParam1);
				func_563(780305039, iParam1);
			}
			break;
		case 110:
			if (bParam3 == 1)
			{
				func_563(-887421691, iParam1);
			}
			else if (func_565(109))
			{
				func_563(-1318117949, iParam1);
			}
			else
			{
				func_563(1632244327, iParam1);
			}
			break;
		case 111:
			if (bParam3 == 1)
			{
				if (&Global_1357515 == 0)
				{
					func_563(284822762, iParam1);
				}
				else
				{
					func_563(-1425017554, iParam1);
				}
			}
			else if (func_565(110))
			{
				if (&Global_1357515 == 0)
				{
					func_563(553087292, iParam1);
				}
				else
				{
					func_563(-1766870331, iParam1);
					func_563(1971788022, iParam1);
				}
			}
			else if (&Global_1357515 == 0)
			{
				func_563(-1980598735, iParam1);
			}
			else
			{
				func_563(-442732098, iParam1);
				func_563(1955756409, iParam1);
			}
			break;
		case 115:
			func_563(394303528, iParam1);
			func_563(-2040171028, iParam1);
			break;
		case 143:
			if (bParam3 == 1)
			{
				func_563(1182403394, iParam1);
			}
			else
			{
				func_563(-2116547899, iParam1);
			}
			break;
		case 144:
			if (bParam3 == 1)
			{
				func_563(924445424, iParam1);
			}
			else
			{
				func_563(1227062271, iParam1);
			}
			break;
		case 117:
			if (bParam3 == 1)
			{
				func_563(430755273, iParam1);
				func_563(-1473879802, iParam1);
			}
			else
			{
				func_563(1121266049, iParam1);
			}
			break;
		case 118:
			if (bParam3 == 1)
			{
				func_563(73885747, iParam1);
			}
			else if (func_565(117))
			{
				func_563(1559707913, iParam1);
			}
			else
			{
				func_563(926897873, iParam1);
			}
			break;
		case 119:
			if (bParam3 == 1)
			{
				func_563(-2103887972, iParam1);
			}
			else if (func_565(118))
			{
				func_563(-435828462, iParam1);
			}
			else
			{
				func_563(-516020583, iParam1);
			}
			break;
		case 121:
			if (bParam3 == 1)
			{
				func_563(2054486196, iParam1);
			}
			else
			{
				func_563(1809320262, iParam1);
			}
			break;
		case 122:
			if (bParam3 == 1)
			{
				func_563(-570086056, iParam1);
			}
			else if (func_565(121))
			{
				func_563(32337856, iParam1);
			}
			else
			{
				func_563(-206811842, iParam1);
			}
			break;
		case 124:
			if (bParam3 == 1)
			{
				func_563(813493663, iParam1);
			}
			else if (func_565(122))
			{
				func_563(-2132763590, iParam1);
			}
			else
			{
				func_563(477901035, iParam1);
			}
			break;
		case 125:
			if (bParam3 == 1)
			{
				func_563(-66240572, iParam1);
				func_563(1563075046, iParam1);
			}
			else
			{
				func_563(-787011772, iParam1);
				func_563(-1523377438, iParam1);
			}
			break;
		case 127:
			func_563(61020800, iParam1);
			break;
		case 129:
			func_563(428985222, iParam1);
			break;
		case 131:
			func_563(-1393851036, iParam1);
			break;
		case 133:
			func_563(1559531342, iParam1);
			break;
		case 134:
			func_563(-718846442, iParam1);
			break;
		case 135:
			if (bParam3 == 1)
			{
				if (&Global_1357515 == -1)
				{
					func_563(-1374407408, iParam1);
				}
				else
				{
					func_563(471210931, iParam1);
				}
			}
			else if ((_journal_can_write_entry(1732474719) && _journal_can_write_entry(801682048)) && _journal_can_write_entry(-1986404392))
			{
				if (&Global_1357515 == -1)
				{
					func_563(-472672138, iParam1);
				}
				else
				{
					func_563(-2132098614, iParam1);
				}
			}
			else if (&Global_1357515 == -1)
			{
				func_563(-1678710489, iParam1);
			}
			else
			{
				func_563(1522210661, iParam1);
			}
			break;
		case 136:
			if (bParam3 == 1)
			{
				func_563(1717582460, iParam1);
			}
			else
			{
				func_563(343644664, iParam1);
			}
			break;
		case 137:
			if (bParam3 == 1)
			{
				func_563(1568112362, iParam1);
				func_563(1388317526, iParam1);
			}
			else if (func_565(136))
			{
				func_563(-1597534828, iParam1);
				func_563(-1207918353, iParam1);
			}
			else
			{
				func_563(-1940891082, iParam1);
				func_563(-598277294, iParam1);
			}
			break;
		case 142:
			if (bParam2 == 1)
			{
				func_563(448334530, iParam1);
				func_563(2145375502, iParam1);
			}
			else
			{
				func_563(-1891994685, iParam1);
			}
			break;
		case 146:
			if (bParam3 == 1)
			{
				if (&Global_1357515 == 1)
				{
					func_563(1159121660, iParam1);
				}
				else if (&Global_1357515 == 0)
				{
					func_563(-1968554187, iParam1);
				}
			}
			else if (&Global_1357515 == 1)
			{
				func_563(841927377, iParam1);
			}
			else if (&Global_1357515 == 0)
			{
				func_563(848633571, iParam1);
			}
			break;
		case 147:
			if (bParam3 == 1)
			{
				func_563(-66616327, iParam1);
			}
			else
			{
				func_563(1978361607, iParam1);
			}
			break;
		case 148:
			if (bParam3 == 1)
			{
				func_563(1862916706, iParam1);
			}
			else if (func_565(147))
			{
				func_563(675105199, iParam1);
			}
			else
			{
				func_563(-1993800776, iParam1);
			}
			break;
		case 149:
			if (bParam3 == 1)
			{
				func_563(174409701, iParam1);
			}
			else if (func_565(148))
			{
				func_563(-1730895475, iParam1);
			}
			else
			{
				func_563(-342396910, iParam1);
			}
			break;
		case 150:
			if (bParam3 == 1)
			{
				func_563(1295237052, iParam1);
			}
			else if (func_565(149))
			{
				func_563(-788577684, iParam1);
			}
			else
			{
				func_563(1527015024, iParam1);
			}
			break;
		default:
			break;
	}
}

int func_310(int iParam0, var uParam1, int iParam2)
{
	*uParam1 = 1137976064;
	*iParam2 = -1;
	iVar0 = func_202(iParam0);
	switch (iVar0)
	{
		case 1:
			iVar1 = func_513(iParam0);
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
					if (func_364((*Global_1835011)[9]->f_1) == 0)
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
			iVar2 = func_276(iParam0);
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
			iVar3 = func_276(iParam0);
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

int func_311(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
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
	iVar2 = func_568(iParam0);
	iVar3 = func_569(iParam0);
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
				iVar1 = func_289();
				func_338(&iVar1, 0, 0, iParam3, 0, 0, 0, 0);
			}
			else
			{
				iVar1 = -15;
			}
			Global_40.f_4283.f_6[iVar0]->f_1 = iVar1;
			Global_40.f_4283.f_6[iVar0]->f_4 = iVar2;
			func_570(iParam0, 1);
			if (func_571(iVar2))
			{
				iVar4 = 0;
				while (iVar4 < 60)
				{
					if (Global_40.f_4283.f_6[iVar4]->f_4 == iVar2 && &Global_40.f_4283.f_6[iVar4] != iParam0)
					{
						func_572(Global_40.f_4283.f_6[iVar4], 1, 0);
					}
					iVar4++;
				}
			}
			if (bParam5)
			{
				if (bParam6)
				{
					func_573(1, iParam0);
				}
				else
				{
					func_574(1, iParam0);
				}
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_312(int iParam0, int iParam1)
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

int func_313(int iParam0, int iParam1, int iParam2)
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

void func_314(bool bParam0)
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

void func_315(int iParam0, int iParam1, bool bParam2)
{
	iVar0 = iParam0 * 1000;
	if ((iVar0 + get_game_timer()) > Global_1327479->f_4)
	{
		func_575(iParam0, iParam1, bParam2);
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

int func_316(int iParam0, int iParam1)
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

bool func_317(int iParam0)
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

void func_318(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, bool bParam5, float fParam6, bool bParam7)
{
	if (func_20() != -1)
	{
		return;
	}
	if ((Global_36616 && func_576(iParam1)) != 0)
	{
		return;
	}
	iVar0 = func_577(iParam0);
	iVar0 = round((IntToFloat(iVar0) * fParam6));
	if ((((((iParam1 != 1142025875 && iParam1 != 1587891565) && iParam1 != -643014279) && iParam1 != -597116214) && iParam1 != 551416228) && iParam1 != -735200598) && iParam1 != -2010847721)
	{
		func_578(iVar0, 0, iParam0, iParam1, sParam3, iParam4, bParam5, bParam7);
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
			func_579(iVar1, iVar0, iParam0, iParam1, iParam4, bParam5);
		}
		else
		{
			func_578(iVar0, 1, iParam0, iParam1, sParam3, iParam4, bParam5, 0);
		}
	}
}

int func_319(int iParam0)
{
	if (!func_197(iParam0))
	{
		return -1;
	}
	return func_580(func_489(iParam0));
}

int func_320(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return 120;
	}
	return 60;
}

void func_321()
{
	_sc_feed_submit_preset_message(2, 1);
	if (is_orbis_version())
	{
		iVar0 = func_581(13);
		(*Global_1898441)[iVar0] = 13;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_WIN2_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_WIN2_COM", 24);
	}
}

bool func_322(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
{
	if (!func_582(iParam0, 0))
	{
		return false;
	}
	if (!func_583(iParam0, iParam1, bParam2, iParam5))
	{
		return false;
	}
	if (!func_584(iParam0, &iVar0, iParam1))
	{
		return false;
	}
	func_585(iParam0, bParam2);
	iVar2 = 0;
	if (func_586(iParam0, 0, 0) == 0)
	{
		if (func_587(iParam0))
		{
			iVar5 = func_588(iParam0);
			iVar6 = func_589(iVar5);
			iVar7 = func_590(iVar6) + 1;
			func_591(iVar5);
			if (func_592(38))
			{
				func_329(483, 0);
			}
			else
			{
				func_329(482, 0);
			}
			if (iVar7 == func_593(iVar6))
			{
				func_322(func_594(iVar6), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				if (func_398() && func_595(4))
				{
					if (func_398() && (func_596(38) || func_592(38)))
					{
						func_598(38, func_594(iVar6), 0, 0, func_597(), 0, -1, 0);
						func_599(2);
					}
					else
					{
						func_598(38, func_594(iVar6), 0, 0, func_597(), 0, -1, 0);
						func_599(1);
					}
				}
			}
			else if (func_398() && func_595(4))
			{
				if (func_398() && (func_596(38) || func_592(38)))
				{
					func_598(38, 0, 0, 0, func_597(), 0, -1, 0);
					func_599(2);
				}
				else
				{
					func_598(38, 0, 0, 0, func_597(), 0, -1, 0);
					func_599(1);
				}
			}
			if (func_398() && func_595(4))
			{
				if (!Global_1914319->f_17376)
				{
					if (func_398() && (func_596(38) || func_592(38)))
					{
						func_600(38, _0x13aaecda43318bfe(-2076669067, iVar6), _0xd52d20b0c76bb26d(-2076669067, iVar6), iVar7, 12, 0, iVar6);
					}
					else
					{
						func_600(38, get_hash_key("toast_log_blips"), get_hash_key("BLIP_RC_COLLECTABLE_CIGCARD"), iVar7, 12, 0, iVar6);
					}
				}
			}
		}
	}
	if (func_601(iParam0) == -1037537535)
	{
		if ((!func_602(iParam0, 866047851) && !func_602(iParam0, -1979000645)) && !func_602(iParam0, 1248798204))
		{
			bVar3 = true;
		}
	}
	if (func_603(iParam0, 8388608) && !func_604(28))
	{
		func_605(28);
	}
	if (!bVar3)
	{
		if (func_602(iParam0, -1588156645))
		{
			bParam2 = true;
			bVar4 = true;
			if (func_606(iParam0) == -1447088266)
			{
				iVar1 = func_608(func_607(iParam0, 1), 0);
				if (is_weapon_valid(iVar1))
				{
					if (func_20() == -1)
					{
						func_609(iVar1);
					}
					if (func_610(0) && func_611(iVar1, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_612(iParam0, iVar0, iParam5);
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
						func_609(iParam0);
					}
					if (func_610(0) && func_611(iParam0, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_612(iVar1, iVar0, iParam5);
						if (!bParam9)
						{
							bParam2 = false;
						}
					}
				}
			}
		}
		else if (func_601(iParam0) == -427144552)
		{
			if (!func_613(iParam0, iParam5, &bParam2, bParam3, bParam4))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_601(iParam0) == 307971639 && func_614(iParam0))
		{
			if (!func_615(iParam0, &iVar0, iParam5))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_602(iParam0, 866047851))
		{
			func_616(iParam0);
		}
		else if (func_602(iParam0, 2000026003))
		{
			func_617(iParam0);
		}
		else if (func_602(iParam0, -103750053))
		{
			func_95(func_618(-1019857971), iVar0);
		}
		else if (iParam0 == 2093098109)
		{
			func_95(func_619(-717883113, 2091222383), iVar0);
		}
		else if (func_602(iParam0, -121341956) && !func_602(iParam0, 606799272))
		{
			if (iParam0 != 191707516 && iParam0 != 1993672959)
			{
				if (func_331((*Global_1835011)[4]->f_1, 1))
				{
					func_329(498, 0);
				}
			}
			if (func_602(iParam0, -2017733358) || func_602(iParam0, -1369131378))
			{
				func_620(iParam0);
			}
		}
		else if (func_602(iParam0, -136654233))
		{
			if (func_602(iParam0, -1021472396))
			{
			}
		}
		else if (func_602(iParam0, -1466706512) && func_602(iParam0, 1147021565))
		{
			func_329(484, 0);
		}
		else if (func_602(iParam0, 1147021565) && func_602(iParam0, -524514947))
		{
		}
		else if (func_602(iParam0, 554195525))
		{
		}
		else if (func_602(iParam0, 589988438))
		{
			if (func_621())
			{
				func_622(1339418451, 0, 1065353216, 1, 0, 0, 0, -1);
				bParam2 = true;
				bVar4 = true;
			}
		}
		else if (func_602(iParam0, 787083290) && func_602(iParam0, 949916894))
		{
			func_623(iParam0);
		}
		else if (func_602(iParam0, -1718133314))
		{
			func_624(iParam0);
		}
		else if (func_602(iParam0, -1738650224))
		{
			func_625(iParam0);
		}
		else if (func_602(iParam0, -1112814642) && func_602(iParam0, 949916894))
		{
			func_626(iParam0);
		}
		else if (iParam0 == -569063887)
		{
			Global_1935496->f_20 = 0;
		}
		else if (func_602(iParam0, 1841149704))
		{
			func_627();
		}
		else if (func_602(iParam0, 606799272))
		{
			func_628(iParam0, iParam1);
			func_629(iParam0);
		}
		else if (func_602(iParam0, -1112814642) && func_602(iParam0, -1697809989))
		{
			func_630(iParam0, 0, 0, 0);
		}
		else if (func_602(iParam0, -2017733358) || func_602(iParam0, -1369131378))
		{
			func_620(iParam0);
		}
		else if (func_602(iParam0, -1921346699))
		{
			if (func_20() != -1)
			{
				return false;
			}
			func_631(iParam0, iParam5, iParam8);
			bParam2 = true;
		}
		else if (func_602(iParam0, 1192444843))
		{
			switch (iParam0)
			{
				case 1815744868:
					if (!func_351(215778062, 1, 0))
					{
						func_322(215778062, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 1334018438:
					if (!func_351(670273567, 1, 0))
					{
						func_322(670273567, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 1055480217:
					if (!func_351(-967317137, 1, 0))
					{
						func_322(-967317137, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case -978159653:
					if (!func_351(526074061, 1, 0))
					{
						func_322(526074061, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 2100131425:
					if (!func_351(-1045488665, 1, 0))
					{
						func_322(-1045488665, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case -2041382104:
					if (!func_351(471514780, 1, 0))
					{
						func_322(471514780, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
			}
		}
		else if (func_602(iParam0, -839724752) && func_603(iParam0, 4))
		{
			if (!func_592(42))
			{
				func_632(iParam0);
			}
		}
		else if (func_602(iParam0, 1399091007))
		{
			func_633(iParam0, &iVar2);
			bParam2 = true;
			bVar4 = true;
		}
		else if (func_602(iParam0, 1248798204))
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
				func_322(iVar8, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_605(24);
				if (&Global_1946804->f_1497.f_1[27] == &Global_1946804->f_57[27])
				{
					func_634(player_ped_id(), -1185145312, 0, 99217379, 1, 1, 1, 0, 1, 0);
				}
				if (func_635(&iVar9, 0))
				{
					func_611(iVar9, 0, 0, bParam4, 3, 0, 752097756, 0);
				}
				break;
			case 1171350303:
				if (func_20() == -1 && &Global_1946804->f_1497.f_1[25] == &Global_1946804->f_57[25])
				{
					func_634(player_ped_id(), 1171350303, 0, 673166414, 1, 1, 1, 0, 1, 0);
				}
				break;
			case -160924582:
				break;
			case 2131771850:
				func_329(415, 0);
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
				func_329(488, 0);
				break;
			case 1613651027:
				func_329(491, 0);
				break;
			case -885810591:
				func_329(485, 0);
				if ((get_random_int_in_range(0, 65536) % 3) == 0)
				{
					func_322(func_652(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				else
				{
					func_322(func_653(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				break;
			case -601932535:
				if (func_604(1))
				{
					func_329(487, 0);
				}
				break;
			case -898386032:
				func_329(486, 0);
				break;
			case -2035110427:
				if (func_20() == -1)
				{
					iParam0 = -1448210800;
				}
				break;
			case 1510719693:
				func_329(496, 0);
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
		else if (!func_610(0))
		{
			return true;
		}
		if (func_601(iParam0) == -1037537535)
		{
			func_656(iParam0);
		}
		if (func_602(iParam0, -1979000645))
		{
			func_657(iParam0);
		}
	}
	else if (iVar2 != 0)
	{
		if (func_610(0))
		{
			Var11.f_1 = 10;
			Var11.f_12 = 10;
			_0x48e4d50f87a96aa5(Global_35, 0, 0, iVar2, &Var11, 0);
			iVar34 = 0;
			while (iVar34 < Var11)
			{
				func_322(&(Var11.f_1[iVar34]), &(Var11.f_12[iVar34]), 0, 0, 0, -897553835, 0, 0, 0, 0);
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
		if (func_602(iParam0, -839724752))
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

void func_323(int iParam0)
{
	if (func_602(iParam0, 1989861793))
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
					if (iVar15 != iParam0 && func_582(iVar15, 0))
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
					func_329(306, 0);
				}
			}
		}
	}
}

void func_324()
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

void func_325(int iParam0)
{
	func_677(iParam0, 1, 1, -142743235, 1);
	if (func_678(iParam0))
	{
		func_679(iParam0, 1, 1);
	}
	bVar3 = false;
	bVar7 = false;
	iVar8 = func_681(func_680(iParam0), 1);
	if (iVar8 >= 39)
	{
		bVar7 = true;
	}
	func_682(-2124052603);
	iVar1 = 0;
	while (iVar1 < 39)
	{
		vVar4.x = &Global_1946804->f_57[iVar1];
		*Global_1946804->f_1616.f_1[iVar1] = { vVar4 };
		Global_1946804->f_1616.f_1[iVar1]->f_2 = (Global_1946804->f_1497.f_1[iVar1]->f_2 || Global_1946804->f_1378.f_1[iVar1]->f_2);
		iVar1++;
	}
	if (func_683() == -2125499975)
	{
		iVar2 = 2020890174;
	}
	else
	{
		iVar2 = 1105329772;
	}
	func_684(&(Global_1946804->f_1616), iVar2, &uVar9, 1, 0, 0, 0);
	func_684(&(Global_1946804->f_1616), 211609491, &uVar9, 1, 0, 0, 0);
	*Global_1946804->f_1616.f_1[8] = { func_685(8, 0) };
	*Global_1946804->f_1616.f_1[9] = { func_685(9, 0) };
	*Global_1946804->f_1616.f_1[0] = { func_685(0, 0) };
	*Global_1946804->f_1616.f_1[2] = { func_685(2, 0) };
	*Global_1946804->f_1616.f_1[3] = { func_685(3, 0) };
	*Global_1946804->f_1616.f_1[1] = { func_685(1, 0) };
	*Global_1946804->f_1616.f_1[5] = { func_685(5, 0) };
	*Global_1946804->f_1616.f_1[6] = { func_685(6, 0) };
	*Global_1946804->f_1616.f_1[7] = { func_685(7, 0) };
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (bVar7)
		{
			iVar8 = 0;
			while (iVar8 < 39)
			{
				if (iParam0 == func_686(iVar8, iVar0))
				{
					func_687(Global_1946804->f_1616.f_1[iVar8], iVar8, iVar0);
				}
				else
				{
					iVar8++;
				}
			}
		}
		else if (iParam0 == func_686(iVar8, iVar0))
		{
			func_687(Global_1946804->f_1616.f_1[iVar8], iVar8, iVar0);
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

void func_326()
{
	iVar5 = 16;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		iVar1 = func_686(iVar5, iVar0);
		if (iVar1 == &Global_1946804->f_57[iVar5] || iVar1 == 0)
		{
			if (func_683() == -2125499975 || func_683() == -449205311)
			{
				vVar2.x = -2018863109;
				vVar2.f_1 = 1530758430;
				func_687(&vVar2, iVar5, iVar0);
			}
			else
			{
				vVar2.x = 1734931872;
				vVar2.f_1 = 1155669136;
				func_687(&vVar2, iVar5, iVar0);
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

void func_327()
{
	_sc_feed_submit_preset_message(2, 2);
	if (is_orbis_version())
	{
		iVar0 = func_581(14);
		(*Global_1898441)[iVar0] = 14;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_MUD1_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_MUD1_COM", 24);
	}
}

char* func_328(int iParam0, bool bParam1)
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
			if ((func_331((*Global_1835011)[59]->f_1, 1) || func_331((*Global_1347702)[1]->f_15, 1)) || func_198((*Global_1347702)[1]->f_15))
			{
				return "COMP_RUFUS";
			}
			else if (func_558(403634348, 1))
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

void func_329(int iParam0, bool bParam1)
{
	func_688(iParam0, &iVar0, &iVar1);
	if (!func_689(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_690(iVar0, iVar1);
}

void func_330(int iParam0, bool bParam1, bool bParam2)
{
	iVar0 = func_681(iParam0, 1);
	func_691(Global_1946804->f_1497.f_1[iVar0], 2, 6);
	func_691(Global_1946804->f_1378.f_1[iVar0], 2, 6);
	if (bParam1)
	{
		Global_1946804->f_1497.f_1[iVar0] = &Global_1946804->f_57[iVar0];
		Global_1946804->f_1497.f_1[iVar0]->f_1 = 0;
		*Global_1946804->f_1378.f_1[iVar0] = { *Global_1946804->f_1497.f_1[iVar0] };
		if (bParam2)
		{
			func_692(17, iParam0, 0, 0, 0);
		}
	}
	if (func_20() == -1)
	{
		iVar1 = 0;
		while (iVar1 < 5)
		{
			func_691(Global_26796.f_26[iVar1]->f_1.f_1[iVar0], 2, 6);
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
			func_691(Global_36638.f_45.f_350.f_26[iVar1]->f_1.f_1[iVar0], 2, 6);
			if (bParam1)
			{
				Global_36638.f_45.f_350.f_26[iVar1]->f_1.f_1[iVar0] = &Global_1946804->f_57[iVar0];
				Global_36638.f_45.f_350.f_26[iVar1]->f_1.f_1[iVar0]->f_1 = 0;
			}
			iVar1++;
		}
	}
}

bool func_331(int iParam0, bool bParam1)
{
	switch (func_300(iParam0))
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

void func_332()
{
	_sc_feed_submit_preset_message(2, 5);
	if (is_orbis_version())
	{
		iVar0 = func_581(17);
		(*Global_1898441)[iVar0] = 17;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_BRA2_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_BRA2_COM", 24);
	}
}

void func_333()
{
	_sc_feed_submit_preset_message(2, 6);
	if (is_orbis_version())
	{
		iVar0 = func_581(18);
		(*Global_1898441)[iVar0] = 18;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_BRA3_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_BRA3_COM", 24);
	}
}

int func_334(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (iParam3 == -358215195)
	{
		Var0 = { func_693(iParam1, 1, 0) };
		iParam3 = func_694(Var0.f_4);
		if (iParam3 == -358215195)
		{
			return 0;
		}
	}
	func_695(iParam3);
	return func_634(iParam0, iParam1, iParam2, iParam3, bParam4, bParam5, 1, 0, 1, 0);
}

bool func_335()
{
	return _unlock_is_unlocked(99890643);
}

void func_336(int iParam0)
{
	if (!func_696(iParam0))
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

bool func_337(int iParam0, int iParam1)
{
	if (!func_697(iParam0))
	{
		return false;
	}
	if ((iParam1 == -1 || iParam1 < 0) || iParam1 > 179)
	{
		iParam1 = func_698(iParam0);
	}
	if (iParam1 == -1)
	{
		return false;
	}
	return func_699(Global_40.f_9910[iParam1], 4);
}

void func_338(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	iVar0 = func_700(*iParam0);
	iVar1 = func_701(*iParam0);
	iVar2 = func_702(*iParam0);
	iVar3 = func_703(*iParam0);
	iVar4 = func_704(*iParam0);
	iVar5 = func_705(*iParam0);
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
	iVar6 = func_706(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_706(iVar1, iVar0);
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
	func_707(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_339(int iParam0, int iParam1, bool bParam2)
{
	if (!func_697(iParam0))
	{
		return;
	}
	if (!func_708(iParam1))
	{
		return;
	}
	if (func_709(iParam1, 1))
	{
		return;
	}
	iVar0 = func_698(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (func_337(iParam0, -1))
	{
		return;
	}
	else
	{
		func_710(Global_40.f_9910[iVar0], 2);
	}
	Global_40.f_9910[iVar0]->f_4 = iParam1;
	if (bParam2)
	{
		if (!func_204(0, 0, 1))
		{
			func_370(0, 17);
		}
	}
}

void func_340()
{
	_sc_feed_submit_preset_message(2, 7);
	if (is_orbis_version())
	{
		iVar0 = func_581(19);
		(*Global_1898441)[iVar0] = 19;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_MOB5_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_MOB5_COM", 24);
	}
}

void func_341()
{
	_sc_feed_submit_preset_message(2, 8);
	if (is_orbis_version())
	{
		iVar0 = func_581(20);
		(*Global_1898441)[iVar0] = 20;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_SAI1_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_SAI1_COM", 24);
	}
}

bool func_342()
{
	return _unlock_is_unlocked(-121456797);
}

void func_343()
{
	_sc_feed_submit_preset_message(2, 9);
	if (is_orbis_version())
	{
		iVar0 = func_581(21);
		(*Global_1898441)[iVar0] = 21;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_GUA1_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_GUA1_COM", 24);
	}
}

void func_344()
{
	_sc_feed_submit_preset_message(2, 10);
	if (is_orbis_version())
	{
		iVar0 = func_581(22);
		(*Global_1898441)[iVar0] = 22;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_GUA3_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_GUA3_COM", 24);
	}
}

void func_345()
{
	_sc_feed_submit_preset_message(2, 12);
	if (is_orbis_version())
	{
		iVar0 = func_581(24);
		(*Global_1898441)[iVar0] = 24;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_ODR5_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_ODR5_COM", 24);
	}
}

void func_346()
{
	_sc_feed_submit_preset_message(2, 13);
	if (is_orbis_version())
	{
		iVar0 = func_581(25);
		(*Global_1898441)[iVar0] = 25;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_FIN1_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_FIN1_COM", 24);
	}
}

void func_347()
{
	_sc_feed_submit_preset_message(2, 14);
	if (is_orbis_version())
	{
		iVar0 = func_581(27);
		(*Global_1898441)[iVar0] = 27;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_MAR51_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_MAR51_COM", 24);
	}
}

void func_348()
{
	_sc_feed_submit_preset_message(2, 15);
	if (is_orbis_version())
	{
		iVar0 = func_581(28);
		(*Global_1898441)[iVar0] = 28;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_ABI21_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_ABI_21_COM", 24);
	}
}

bool func_349(int iParam0)
{
	return _0x9a03f22ad446eeac(iParam0) > 0;
}

bool func_350(int iParam0)
{
	return (Global_40.f_12019.f_4 && iParam0) != 0;
}

bool func_351(int iParam0, int iParam1, bool bParam2)
{
	if (!func_582(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_601(iParam0);
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
		if (!func_711(iParam0, 1))
		{
			return false;
		}
	}
	return func_586(iParam0, 0, bParam2) >= iParam1;
}

void func_352(int iParam0)
{
	if (func_82(32768))
	{
		return;
	}
	if (iParam0 < 0)
	{
		func_712(_create_var_string(2, "MISSION_COMPLETE_BANK_FEED", absi(iParam0)), "itemtype_textures", get_hash_key("ITEMTYPE_BANK_DEBT"), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
		Global_1879514->f_14 = 1;
		Global_1879514->f_15 = 0;
	}
	else
	{
		func_712(_create_var_string(2, "MISSION_COMPLETE_LOAN_FEED", iParam0), "itemtype_textures", get_hash_key("ITEMTYPE_BANK_DEBT"), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Negative", 0, 1);
		Global_1879514->f_14 = 0;
		Global_1879514->f_15 = 1;
	}
}

void func_353()
{
	_sc_feed_submit_preset_message(2, 16);
	if (is_orbis_version())
	{
		iVar0 = func_581(29);
		(*Global_1898441)[iVar0] = 29;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_BEE22_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_BEE22_COM", 24);
	}
}

void func_354()
{
	_sc_feed_submit_preset_message(2, 17);
	if (is_orbis_version())
	{
		iVar0 = func_581(26);
		(*Global_1898441)[iVar0] = 26;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_FIN2_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_FIN2_COM", 24);
	}
}

void func_355()
{
	_sc_feed_submit_preset_message(2, 11);
	if (is_orbis_version())
	{
		iVar0 = func_581(23);
		(*Global_1898441)[iVar0] = 23;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_DOC_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_DOC_COM", 24);
	}
}

void func_356()
{
	_sc_feed_submit_preset_message(2, 3);
	if (is_orbis_version())
	{
		iVar0 = func_581(15);
		(*Global_1898441)[iVar0] = 15;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_DOW3_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_DOW3_COM", 24);
	}
}

void func_357()
{
	_sc_feed_submit_preset_message(2, 4);
	if (is_orbis_version())
	{
		iVar0 = func_581(16);
		(*Global_1898441)[iVar0] = 16;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_DUT1_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_DUT1_COM", 24);
	}
}

void func_358()
{
	if (func_713() > 1)
	{
		func_714();
	}
	else
	{
		if (!_unlock_is_visible(-707360575))
		{
			_unlock_set_visible(-707360575, true);
			func_329(444, 1);
		}
		if (!_unlock_is_visible(-1201174711))
		{
			_unlock_set_visible(-1201174711, true);
			func_329(447, 1);
		}
		if (!_unlock_is_visible(151582343))
		{
			_unlock_set_visible(151582343, true);
			func_329(448, 1);
		}
		if (!_unlock_is_visible(-642492359))
		{
			_unlock_set_visible(-642492359, true);
			func_329(450, 1);
		}
		if (!_unlock_is_visible(5171247))
		{
			_unlock_set_visible(5171247, true);
			func_329(452, 1);
		}
	}
}

bool func_359(int iParam0)
{
	return func_715(iParam0, 4, 1);
}

void func_360(int iParam0)
{
	if (iParam0 < 0)
	{
		iParam0 = 0;
	}
	Global_40.f_4283.f_326 = iParam0;
	Var0 = { func_94(-160912108) };
	stat_id_set_int(&Var0, iParam0, true);
}

void func_361(int iParam0)
{
	if (func_82(32768))
	{
		return;
	}
	if (!func_197(iParam0))
	{
		return;
	}
	func_235(Global_1935630, 8192);
	iVar2 = 1;
	switch (func_202(iParam0))
	{
		case 1:
			func_95(func_619(909007663, -587839005), 1);
			iVar0 = func_276(iParam0);
			func_95(func_94(-634848880), 1);
			switch (func_492(iVar0))
			{
				case 0:
					func_95(func_619(909007663, 1325140787), 1);
					break;
				case 1:
					func_95(func_619(909007663, 2101241783), 1);
					break;
				case 2:
					func_95(func_619(909007663, -1296936294), 1);
					break;
				case 3:
					func_95(func_619(909007663, -798388728), 1);
					break;
				case 4:
					func_95(func_619(909007663, -1787586531), 1);
					break;
				case 5:
					func_95(func_619(909007663, -1002834519), 1);
					break;
				case 6:
					func_95(func_619(909007663, -50600144), 1);
					break;
				case 7:
					func_95(func_619(909007663, -348503123), 1);
					break;
				case 8:
					func_95(func_619(909007663, -528798161), 1);
					break;
				default:
					iVar2 = 0;
					break;
			}
			if (iVar0 == 7)
			{
				func_95(func_619(909007663, -406093146), 1);
			}
			if (iVar2 && _0xe824ce7d13fcb35e(get_hash_key(&((*Global_1835011)[iVar0]->f_8))))
			{
				func_95(func_619(909007663, 532323983), 1);
			}
			break;
		case 8:
			iVar1 = func_276(iParam0);
			if (func_305((*Global_1347702)[iVar1]->f_12, 1))
			{
				func_95(func_94(-634848880), 1);
			}
			if (func_305((*Global_1347702)[iVar1]->f_12, 4) || iVar1 == 59)
			{
				if (func_305((*Global_1347702)[iVar1]->f_12, 1))
				{
					func_95(func_619(909007663, -587839005), 1);
				}
				else
				{
					func_95(func_619(909007663, -2049243343), 1);
				}
			}
			if (func_305((*Global_1347702)[iVar1]->f_12, 1))
			{
				switch (func_493(iVar1))
				{
					case 0:
						func_95(func_619(909007663, 1325140787), 1);
						break;
					case 1:
						func_95(func_619(909007663, 2101241783), 1);
						break;
					case 2:
						func_95(func_619(909007663, -1296936294), 1);
						break;
					case 3:
						func_95(func_619(909007663, -798388728), 1);
						break;
					case 4:
						func_95(func_619(909007663, -1787586531), 1);
						break;
					case 5:
						func_95(func_619(909007663, -1002834519), 1);
						break;
					case 6:
						func_95(func_619(909007663, -50600144), 1);
						break;
					case 7:
						func_95(func_619(909007663, -348503123), 1);
						break;
					case 8:
						func_95(func_619(909007663, -528798161), 1);
						break;
					default:
						iVar2 = 0;
						break;
				}
				if (iVar2 && _0xe824ce7d13fcb35e(get_hash_key(&((*Global_1347702)[iVar1]->f_3))))
				{
					func_95(func_619(909007663, 532323983), 1);
				}
			}
			else if (func_305((*Global_1347702)[iVar1]->f_12, 4))
			{
				if (func_305((*Global_1347702)[iVar1]->f_12, 4194304))
				{
				}
				else if (!func_305((*Global_1347702)[iVar1]->f_12, 512))
				{
					func_95(func_619(909007663, 551192206), 1);
				}
				else
				{
					func_95(func_619(909007663, -406093146), 1);
				}
			}
			break;
	}
}

void func_362()
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
	else if (func_205(&Global_1935630, 131072))
	{
		return;
	}
	else if ((func_204(0, 0, 1) || func_716()) || func_129())
	{
		return;
	}
	iVar0 = func_208();
	if (((iVar0 == 0 || iVar0 == 4) || iVar0 == 6) || iVar0 == 7)
	{
		return;
	}
	while (_spactionproxy_get_next_pending_buy_action(&uVar4))
	{
		if (!_spactionproxy_process_action(uVar4, func_717(&uVar4, &iVar1, &iVar2, &iVar3)))
		{
		}
	else
	{
		}
	}
	if (iVar1 == 1)
	{
		func_718(_create_var_string(2, "SHOP_CATALOGUE_DELIVERY"), _create_var_string(2, "SHOP_CATALOGUE_PURCHASE_RECEIVED_SINGLE", 1), 908516622, -576888982, -2, 0, 0, 0, 0, 1, 1);
	}
	else if (iVar1 > 1)
	{
		func_718(_create_var_string(2, "SHOP_CATALOGUE_DELIVERY"), _create_var_string(2, "SHOP_CATALOGUE_PURCHASE_RECEIVED_PLURAL", iVar1), 908516622, -576888982, -2, 0, 0, 0, 0, 1, 1);
	}
	if (iVar3 > 0)
	{
		func_719(iVar3, 0, 0);
	}
	if (iVar1 > 0)
	{
		func_370(0, -1);
	}
	if (iVar2 > 0)
	{
		func_720("SHOP_CATALOGUE_PURCHASE_FAILED", 10000, 0, 0, 0, 1);
	}
	func_721(1, 0);
	Global_1956575->f_4 = 1;
}

void func_363(int iParam0, int iParam1, bool bParam2, float fParam3, int iParam4, char* sParam5, int iParam6, int iParam7)
{
	if (func_82(32768))
	{
		return;
	}
	func_287(iParam1, bParam2, fParam3, iParam4, sParam5, iParam6, iParam7, 752097756);
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
		func_722(iParam0, iParam1, fParam3, iParam4);
	}
}

int func_364(int iParam0)
{
	if (!func_197(iParam0))
	{
		return -1;
	}
	return func_723(iParam0);
}

int func_365(int iParam0, int iParam1)
{
	if (!func_724(iParam0))
	{
		return 0;
	}
	if (!func_398())
	{
		return 0;
	}
	if (!func_725(iParam0, &iVar0, &iVar1))
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

int func_366(int iParam0, int iParam1, int iParam2, int iParam3)
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
	if (iVar2 >= func_726())
	{
		iVar2 = func_726();
	}
	iVar5 = func_727(iVar3, iVar4, iParam2);
	if (Global_1572887->f_12 == -1)
	{
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			iVar6 = iVar0;
			if (func_489(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_489(iVar6) == 0)
			{
				return func_728(iVar3, iVar4, iParam2, iVar0, iParam3);
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
			if (func_489(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_489(iVar6) == 0)
			{
				return func_728(iVar3, iVar4, iParam2, iVar0, iParam3);
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
				return func_728(iVar3, iVar4, iParam2, iVar0, 0);
			}
			iVar0++;
		}
	}
	return -1;
}

int func_367(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_729(1330954593, 0, -1);
		case 1:
			return func_729(1330954593, 0, -1);
		case 2:
			return func_729(1330954593, 0, -1) * 2;
		case 4:
			return func_729(1330954593, 0, -1);
		case 5:
			return func_729(1330954593, 0, -1);
		case 6:
			return func_729(1330954593, 0, -1) * 2;
		case 12:
			return 75000;
		case 8:
			return func_729(1330954593, 0, -1) * 3;
		case 9:
			return func_729(1330954593, 0, -1) * 3;
		case 10:
			return func_729(1330954593, 0, -1) * 3;
		case 11:
			return func_729(1330954593, 0, -1);
		default:
			break;
	}
	return 0;
}

char[] func_368(int iParam0)
{
	if (!func_197(iParam0))
	{
		return cVar0;
	}
	switch (func_202(iParam0))
	{
		case 1:
			cVar0 = (*Global_1835011)[func_513(iParam0)]->f_8;
			break;
		case 8:
			cVar0 = (*Global_1347702)[func_276(iParam0)]->f_3;
			break;
		case 11:
			if (iParam0 == func_366(0, 10, 11, 2116153146))
			{
				StringCopy(&cVar0, "CABR01", 8);
			}
			break;
	}
	return cVar0;
}

void func_369(char[4] cParam0)
{
	if (!Global_1879514->f_11)
	{
		iVar0 = func_371();
		iVar1 = get_hash_key(&cParam0);
		if (_0x57e798b54c45ee1a(iVar1) != 5 && iVar0 == 5)
		{
			if (func_202(Global_1879514->f_1) == 1)
			{
				func_365(5, 1);
			}
			else if (func_202(Global_1879514->f_1) == 8 && (func_305((*Global_1347702)[func_276(Global_1879514->f_1)]->f_12, 1) || func_305((*Global_1347702)[func_276(Global_1879514->f_1)]->f_12, 33554432)))
			{
				func_365(5, 1);
			}
		}
		_0xe824ce7d13fcb300(get_hash_key(&cParam0), iVar0);
	}
	else
	{
		_0xe824ce7d13fcb300(get_hash_key(&cParam0), 3);
	}
}

void func_370(bool bParam0, int iParam1)
{
	if (_0x5fc9357c26daefce())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_730(&Global_0, 8);
	}
	if (!func_398() || func_20() != -1)
	{
		return;
	}
	func_730(&Global_0, 1);
}

int func_371()
{
	iVar0 = func_731(Global_1879514->f_1);
	if (Global_1425247->f_53)
	{
		return 0;
	}
	if (func_732(iVar0))
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

Vector3 func_372(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10)
{
	vVar0 = { func_733(vParam0, iParam3, iParam4, iParam5, iParam6, 1, iParam7, bParam8, bParam9, bParam10, -1, 1103626240) };
	if (func_399(vVar0))
	{
		vVar0 = { func_733(vParam0, iParam3, iParam4, 0, 1, 1, iParam7, bParam8, 0, 0, -1, 1103626240) };
	}
	return vVar0;
}

void func_373(vector3 vParam0, int iParam3, var uParam4, int iParam5)
{
	Global_1310720->f_1 = { vParam0 };
	Global_40.f_9.f_10 = uParam4;
	Global_40.f_9.f_11 = iParam3;
	Global_40.f_9.f_12 = iParam5;
}

void func_374(vector3 vParam0)
{
	Global_40.f_9.f_7 = { vParam0 };
}

int func_375(vector3 vParam0, int iParam3)
{
	iVar0 = func_77();
	if (func_253(iVar0))
	{
		if (_0xf256a75210c5c0eb((*Global_1888801)[iVar0]->f_3, vParam0))
		{
			return iVar0;
		}
	}
	return func_734(vParam0, iParam3);
}

void func_376()
{
	func_735();
	func_736();
	func_737();
	_0x11b0a0b282fa9b10(0);
}

void func_377(struct<16> Param0, int iParam16)
{
	if (is_string_null_or_empty(&(Param0.f_10)))
	{
		return;
	}
	if (Global_1934603->f_161 >= 10)
	{
		return;
	}
	if (!func_738(iParam16, 2))
	{
		if (_get_number_of_references_of_script_with_name_hash(get_hash_key(&(Param0.f_10))) > 0 || func_739(&(Param0.f_10)))
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
			func_740(iParam16);
			return;
		}
		iVar0++;
	}
}

bool func_378(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_379(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_380()
{
	return Global_1572864->f_12;
}

void func_381(bool bParam0)
{
	if (func_504(Global_1935630->f_3))
	{
		return;
	}
	iVar0 = 1;
	Var1.f_2 = 4;
	Var1 = "HUD_PENALTY_SOUNDSET";
	Var1.f_1 = "HUD_FAIL";
	Var1.f_3 = func_741();
	Var1.f_3.f_3 = iVar0;
	if ((!func_742(Global_1347343->f_2) && !func_378(Global_1347343->f_11, 64)) || func_82(32768))
	{
		Var1.f_7 = func_743();
		Var1.f_7.f_3 = iVar0;
	}
	if (!func_378(Global_1347343->f_11, 1024) && !func_82(32768))
	{
		Var1.f_11 = func_744();
		Var1.f_11.f_3 = iVar0;
	}
	if (func_378(Global_1347343->f_11, 8))
	{
		Var1.f_15 = func_745();
		Var1.f_15.f_3 = iVar0;
	}
	if (Global_1347343->f_1 != 2)
	{
		Global_1935630->f_3 = func_746(&Var1, "REPLAY_T", &(Global_1347343->f_3), 0, 1);
	}
	else
	{
		Global_1935630->f_3 = func_747(&Var1, "REPLAY_T_DEAD", 0, 1);
	}
	set_player_invincible(player_id(), true);
	if (!is_ped_in_any_vehicle(Global_35, false) && !is_entity_attached(Global_35))
	{
		freeze_entity_position(Global_35, true);
	}
	func_379(&(Global_1347343->f_11), 1073741824);
	if (bParam0)
	{
		func_379(&(Global_1347343->f_11), 1048576);
	}
	_0x16e9abdd34ddd931();
}

void func_382(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	func_748(uParam0);
	iVar0 = func_749(uParam0, iParam1);
	if (bParam3)
	{
		if (is_string_null_or_empty(sParam2))
		{
			sParam2 = func_750(iParam1);
		}
		iVar0 = func_751(uParam0, sParam2);
		if (iVar0 == -1)
		{
			iVar0 = func_752(uParam0);
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
		iVar0 = func_752(uParam0);
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
	func_753(uParam0, 2);
}

void func_383(char[4] cParam0, int iParam1)
{
	func_754(&(cParam0->f_7375), iParam1);
}

int func_384(var uParam0)
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

int func_385()
{
	return func_513(func_755());
}

void func_386(char[4] cParam0)
{
	iVar0 = 0;
	while (iVar0 < func_400())
	{
		func_756(cParam0, iVar0);
		iVar0++;
	}
}

int func_387(var uParam0)
{
	uParam0->f_607 = uParam0->f_607;
	return 1;
}

void func_388(char[4] cParam0, var uParam1)
{
	cParam0->f_607 = uParam1;
}

void func_389(char[4] cParam0)
{
	func_762(cParam0, iLocal_45, iLocal_46, 113084, 113272, 113336, 113400, 115013, "RBCH3_RSC1", 1048586, -1);
	func_762(cParam0, iLocal_46, iLocal_47, 115251, 115402, 116018, 116290, 117778, "SAD3_INT", 10, -1);
	func_762(cParam0, iLocal_47, iLocal_48, 117924, 118176, 118282, 118615, 119893, "", 8, -1);
	func_762(cParam0, iLocal_48, iLocal_49, 120174, 120375, 120594, 121057, 123259, "SAD3_MCS1", 524554, -1);
	func_762(cParam0, iLocal_49, iLocal_50, 123554, 124016, 124269, 124583, 125898, "SAD3_MCS2", 74, -1);
	func_762(cParam0, iLocal_50, iLocal_51, 126260, 126593, 126843, 127095, 127956, "sad3_mcs3", 4106, -1);
	func_762(cParam0, iLocal_51, iLocal_52, 128144, 128475, 128539, 128938, 129397, "SAD3_MCS4", 74, -1);
	func_762(cParam0, iLocal_52, iLocal_53, 129436, 129847, 130013, 130379, 131028, "", 72, -1);
	func_762(cParam0, iLocal_53, iLocal_54, 131182, 131539, 131646, 132469, 135398, "", 72, -1);
	func_762(cParam0, iLocal_54, iLocal_55, 135743, 136011, 136205, 136533, 137164, "SAD3_MCS5", 4170, -1);
	func_762(cParam0, iLocal_55, iLocal_56, 137304, 137475, 137633, 137931, 139991, "", 8, -1);
	func_762(cParam0, iLocal_56, 26, 140091, 140245, 140510, 140539, 140633, "SAD3_EXT", 1034, -1);
}

void func_390(var uParam0, int iParam1)
{
	uParam0->f_13105 = iParam1;
}

void func_391(int iParam0)
{
	if (func_105())
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
	else if (func_818())
	{
		Global_1572864->f_9 = iParam0;
	}
	else if (func_819())
	{
		Global_1572864->f_9 = iParam0;
	}
	else if (func_820())
	{
		Global_1572864->f_9 = iParam0;
	}
	else if (func_821())
	{
		Global_1572864->f_9 = iParam0;
	}
}

void func_392(char[4] cParam0, vector3 vParam1)
{
	cParam0->f_5413 = { vParam1 };
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
	if (!func_822(uParam0, 4))
	{
		if (func_823(uParam0->f_860, 16384))
		{
			animpostfx_play("CamTransition01");
		}
		vVar0 = { func_824(uParam0) };
		if (!func_823(uParam0->f_860, 524288))
		{
			func_825(&(uParam0->f_872));
		}
		func_826(&(uParam0->f_860), 0, 2, vVar0.x, vVar0.y, vVar0.z, 0);
		func_827(uParam0, 0f, 0f, 0f);
		func_828(uParam0);
		func_829(uParam0);
		func_830(uParam0, 0f, 0f, 0f, 0, 0);
		func_831(uParam0);
		func_754(uParam0, 4);
		func_832(uParam0, 0);
		func_833(&(Global_1946804->f_1497), Global_35, 1, 64, 1, 1, 1);
		if (_0x927b810e43e99932(&(uParam0->f_873)))
		{
			_0x0a5a4f1979abb40e(&(uParam0->f_873));
		}
	}
}

Vector3 func_396(int iParam0)
{
	if (func_834(iParam0))
	{
		return func_835(iParam0);
	}
	return (*Global_1835011)[iParam0]->f_18;
}

int func_397(vector3 vParam0, var uParam3)
{
	if (_0x1b065a2bf7953815(0) != 1)
	{
		func_516(0, 1);
	}
	else
	{
		return 0;
	}
	iVar0 = func_836(Global_35, 0, 2, 0);
	if (!is_weapon_valid(iVar0))
	{
		iVar0 = func_837(0, 0);
		if (func_696(iVar0))
		{
			set_current_ped_weapon(Global_35, iVar0, true, 2, false, false);
			func_838(1, 0);
		}
	}
	else
	{
		func_838(1, 0);
	}
	func_216(0);
	func_517(0, vParam0, uParam3);
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
	if (!func_196(iParam0))
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
		func_839((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_403(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 40)
	{
		func_840((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_404(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 20)
	{
		func_841((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_405(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 14)
	{
		func_842((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_406(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 60)
	{
		func_843((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_407(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 10)
	{
		func_844((*uParam0)[iVar0]);
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
		func_845((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_410(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 3)
	{
		func_846((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_411(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		func_847((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_412(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		func_848((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_413(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		func_849((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_414(char[4] cParam0, int iParam1, int iParam2)
{
	if (func_120(cParam0, 2097152))
	{
		return;
	}
	iVar0 = func_850(&(cParam0->f_638), iParam1);
	if (iVar0 == -1)
	{
		iVar0 = func_851(&(cParam0->f_638));
	}
	if (iVar0 == -1)
	{
		return;
	}
	cParam0->f_638[iVar0] = iParam1;
	cParam0->f_638[iVar0]->f_2 = (cParam0->f_638[iVar0]->f_2 || iParam2);
}

void func_415(char[4] cParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (func_120(cParam0, 2097152))
	{
		return;
	}
	iVar0 = func_852(&(cParam0->f_5188), iParam1);
	if (iVar0 == -1)
	{
		iVar0 = func_853(&(cParam0->f_5188));
	}
	if (iVar0 == -1)
	{
		return;
	}
	cParam0->f_5188[iVar0] = iParam1;
	cParam0->f_5188[iVar0]->f_1 = iParam3;
	cParam0->f_5188[iVar0]->f_2 = iParam4;
	cParam0->f_5188[iVar0]->f_4 = (cParam0->f_5188[iVar0]->f_4 || iParam2);
}

void func_416(char[4] cParam0, char[4] cParam1, int iParam2, int iParam3, int iParam4)
{
	if (func_120(cParam0, 2097152))
	{
		return;
	}
	iVar0 = func_854(&(cParam0->f_819), cParam1);
	if (iVar0 == -1)
	{
		iVar0 = func_855(&(cParam0->f_819));
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

char* func_417(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			sVar0 = "pbl_Action";
			break;
		case 1:
			sVar0 = "pbl_Action";
			break;
		case 2:
			sVar0 = "pbl_Grapple_Loop";
			break;
		case 3:
			sVar0 = "pbl_Player_Dies";
			break;
		case 4:
			sVar0 = "pbl_Exit_Grapple_Enter_Intimidate";
			break;
		case 5:
			sVar0 = "pbl_Action";
			break;
		case 6:
			sVar0 = "pbl_IDLE_LOOP_TIED_UP_RANCHER";
			break;
		case 7:
			sVar0 = "pbl_IDLE_LOOP_A_CHAIR_RANCHER";
			break;
		case 8:
			sVar0 = "pbl_IDLE_LOOP_B_CHAIR_RANCHER";
			break;
		case 9:
			sVar0 = "pbl_EXIT_REACT_CHAIR_RANCHER";
			break;
		case 10:
			sVar0 = "pbl_EXIT_CHAIR_RANCHER";
			break;
		case 11:
			sVar0 = "pl_base_greet_base_standing";
			break;
		case 12:
			sVar0 = "pl_leadin";
			break;
		case 13:
			sVar0 = "pl_reset_back_to_sitting";
			break;
		case 16:
			sVar0 = "pl_leadin";
			break;
		case 14:
			sVar0 = "pl_Sheriff_Idles";
			break;
		case 15:
			sVar0 = "pl_sadie_enter";
			break;
		case 17:
			sVar0 = "pl_LEADIN";
			break;
		default:
			break;
	}
	return sVar0;
}

void func_418(char[4] cParam0, char[4] cParam1, var uParam2, int iParam3, int iParam4, char* sParam5, int iParam6, bool bParam7)
{
	if (!func_856(iParam3, func_33(cParam0)) && !func_856(iParam3, func_35(cParam0)))
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
	iVar0 = func_857(&(cParam0->f_1126), cParam1, *uParam2);
	if (iVar0 == -1)
	{
		iVar0 = func_858(&(cParam0->f_1126));
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
		func_859(&(cParam0->f_1126[iVar0]->f_2), 4);
	}
}

void func_419(char[4] cParam0, int iParam1, char* sParam2, int iParam3)
{
	if (!func_856(iParam3, func_33(cParam0)) && !func_856(iParam3, func_35(cParam0)))
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
	iVar0 = func_860(&(cParam0->f_1126), iParam1);
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

void func_420(int iParam0, int iParam1)
{
	func_861(iParam0, iParam1);
}

void func_421(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, int iParam12)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_862((*uParam0)[iVar0]))
		{
			if (func_856((*uParam0)[iVar0]->f_2, iParam12))
			{
				func_863((*uParam0)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (func_864((*uParam1)[iVar0]))
		{
			if (func_856((*uParam1)[iVar0]->f_4, iParam12))
			{
				func_865((*uParam1)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam2)
	{
		if (func_866((*uParam2)[iVar0]))
		{
			if (func_856((*uParam2)[iVar0]->f_2, iParam12))
			{
				func_867((*uParam2)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam3)
	{
		if (func_868((*uParam3)[iVar0]))
		{
			if (func_856((*uParam3)[iVar0]->f_2, iParam12))
			{
				func_869((*uParam3)[iVar0]);
			}
		}
		iVar0++;
	}
	if (func_856(uParam4->f_1, iParam12))
	{
		func_870(uParam4);
	}
	iVar0 = 0;
	while (iVar0 < *uParam5)
	{
		if (func_871((*uParam5)[iVar0]))
		{
			if (func_856((*uParam5)[iVar0]->f_3, iParam12))
			{
				func_872((*uParam5)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam5)
	{
		if (func_871((*uParam5)[iVar0]))
		{
			iVar1 = 0;
			while (iVar1 < 20)
			{
				if (func_873((*uParam5)[iVar0]->f_4[iVar1]))
				{
					if (func_856((*uParam5)[iVar0]->f_4[iVar1]->f_2, iParam12))
					{
						func_874((*uParam5)[iVar0]->f_4[iVar1], (*uParam5)[iVar0]->f_1);
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
		if (func_875((*uParam6)[iVar0]))
		{
			if (func_856((*uParam6)[iVar0]->f_3, iParam12))
			{
				func_876((*uParam6)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam7)
	{
		if (func_877((*uParam7)[iVar0]))
		{
			if (func_856((*uParam7)[iVar0]->f_4, iParam12))
			{
				func_878((*uParam7)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam8)
	{
		if (func_879((*uParam8)[iVar0]))
		{
			if (func_856((*uParam8)[iVar0]->f_2, iParam12))
			{
				func_880((*uParam8)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam9)
	{
		if (func_881((*uParam9)[iVar0]))
		{
			if (func_856((*uParam9)[iVar0]->f_2, iParam12))
			{
				func_882((*uParam9)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam10)
	{
		if (func_883((*uParam10)[iVar0]))
		{
			if (func_856((*uParam10)[iVar0]->f_3, iParam12))
			{
				func_884((*uParam10)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam11)
	{
		if (func_885((*uParam11)[iVar0]))
		{
			if (func_856((*uParam11)[iVar0]->f_2, iParam12))
			{
				func_886((*uParam11)[iVar0]);
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
	if (func_887(uParam0, iParam1, sParam2))
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
	func_888(&(cParam0->f_7375), iParam1, sParam2, iParam3, iParam4, bParam5);
	func_382(&(cParam0->f_10792), iParam1, sParam2, bParam6);
}

bool func_427(char[4] cParam0, int iParam1, bool bParam2)
{
	iVar0 = 1;
	if (bParam2 && func_23(&(cParam0->f_8269)))
	{
		if (!func_121(cParam0, iParam1, 268435456))
		{
			MemCopy(&cVar1, {func_889(cParam0->f_607)}, 3);
			if (func_890(&(cParam0->f_8269), &cVar1, 0, func_132(iParam1), 1, 0))
			{
				if (func_24(&(cParam0->f_8269)))
				{
					func_891(&(cParam0->f_8269));
				}
				func_140(cParam0, iParam1, 268435456);
			}
			else
			{
				iVar0 = 0;
			}
		}
	}
	if (!func_892(&(cParam0->f_638), &(cParam0->f_819), &(cParam0->f_1020), &(cParam0->f_1081), &(cParam0->f_1124), &(cParam0->f_1126), &(cParam0->f_5147), &(cParam0->f_5188), &(cParam0->f_5239), &(cParam0->f_5249), &(cParam0->f_5265), &(cParam0->f_5286), iParam1))
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
		if (func_871((*uParam0)[iVar0]))
		{
			if (func_856((*uParam0)[iVar0]->f_3, iParam1))
			{
				if ((*uParam0)[iVar0]->f_65 > 0f || func_893((*uParam0)[iVar0]->f_2, 4))
				{
					if (!func_894((*uParam0)[iVar0]))
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
	iVar0 = func_895(func_61(cParam0));
	if (!func_29())
	{
		vVar2 = { func_126(cParam0->f_607) };
	}
	if (func_896(cParam0, iVar0, &uVar1, bParam1, vVar2.x, vVar2.y, vVar2.z, 0, bParam2, iParam3, bParam4, iParam5, 1, 0))
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
		if (!func_120(cParam0, 16777216))
		{
			if (!func_897(cParam0))
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
				iVar12 = func_898(&iVar11, &Var0);
				if (iVar11 != 0)
				{
					func_103(cParam0, 16777216);
					if (iVar11 == 2 && !is_entity_dead(iVar12))
					{
						if (iVar12 == cParam0->f_5411)
						{
							func_103(cParam0, 16777216);
						}
						else if (func_899(iVar12, cParam0->f_5411, 5f, 1))
						{
							if (func_900(iVar12))
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
		if (func_901(&iVar17, func_125(cParam0), vVar14, 0f, 0, 0, 1, 1, 1))
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
		iVar13 = func_898(&iVar29, &Var18);
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
		func_902(cParam0, bParam1);
		if (!func_120(cParam0, 256))
		{
			if (!func_120(cParam0, 32768))
			{
				vVar14.x = uParam2;
				vVar14.f_1 = uParam3;
				vVar14.f_2 = uParam4;
				if ((!func_900(iVar13) || func_903(Global_35, iVar13, 1, 1) > 200f) && !func_399(vVar14))
				{
					if (!func_29())
					{
						freeze_entity_position(iVar13, false);
						func_904(iVar13, vVar14, fParam5, 2, 1073741824);
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
	if (!func_120(cParam0, 32) && func_128(cParam0, 3))
	{
		if (func_905(cParam0->f_607, &iVar0, &uVar1))
		{
			set_clock_time(iVar0, 0, 0);
			func_103(cParam0, 32);
		}
	}
	if (!func_120(cParam0, 32))
	{
		if (func_906(&(cParam0->f_609), cParam0->f_607))
		{
			func_103(cParam0, 32);
		}
	}
}

void func_433(char[4] cParam0)
{
	if (!func_120(cParam0, 128))
	{
		if (func_120(cParam0, 16384))
		{
			func_907(cParam0);
			if (func_908(cParam0))
			{
				func_51(&(cParam0->f_10792));
				func_909(cParam0, 2097152);
				func_270(cParam0, 16384);
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
			func_907(cParam0);
			MemCopy(&Var0, {func_155(func_61(cParam0))}, 4);
			if (func_910(cParam0, Var0))
			{
				if (func_429(cParam0) != 4)
				{
					do_screen_fade_out(0);
				}
				func_103(cParam0, 128);
			}
		}
		else
		{
			if (func_429(cParam0) != 4)
			{
				do_screen_fade_out(1);
			}
			func_103(cParam0, 128);
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
	if (!func_911(cParam0))
	{
		iVar0 = 0;
	}
	if (!func_430(cParam0, func_128(cParam0, 3), !func_8(cParam0, 2097152), cParam0->f_5410, !func_8(cParam0, 32), 0))
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
	if (func_120(cParam0, 4) && !_0x0ee3f0d7feccc54f())
	{
		iVar0 = 0;
	}
	if (!func_23(&(cParam0->f_8269)))
	{
		MemCopy(&cVar1, {func_889(cParam0->f_607)}, 3);
		if (func_912(&(cParam0->f_8269), &cVar1, 0, 1, 1))
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
		if (func_913(&(cParam0->f_13115)) < 30f)
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
	if (func_913(&(cParam0->f_603)) >= cParam0->f_13144)
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		if (is_player_teleport_active())
		{
			stop_player_teleport();
		}
		if ((func_82(32768) && func_914()) && func_913(&(cParam0->f_603)) < (cParam0->f_13144 + 10f))
		{
			return false;
		}
		if (func_120(cParam0, 8) && is_valid_interior(get_interior_at_coords(func_126(cParam0->f_607))))
		{
			unpin_interior(get_interior_at_coords(func_126(cParam0->f_607)));
			func_270(cParam0, 8);
		}
		_set_milliseconds_per_game_minute(2000);
		func_915(0, 0);
		func_270(cParam0, 4096);
		return true;
	}
	return false;
}

bool func_437(char[4] cParam0)
{
	func_140(cParam0, 6, 4096);
	func_140(cParam0, 25, 16);
	if (func_33(cParam0) >= iLocal_46)
	{
		if (!func_916(cParam0))
		{
			return false;
		}
		func_917(cParam0, 1);
	}
	if (func_33(cParam0) <= iLocal_46)
	{
		if (!func_896(cParam0, 4, uLocal_239[0], 0, 0, 0, 0, 0, 0, -1341683964, 1, 0, 1, 0))
		{
			return false;
		}
		func_917(cParam0, 0);
	}
	if (!func_918(cParam0))
	{
		return false;
	}
	if (!func_919(cParam0, 1))
	{
		return false;
	}
	func_920();
	func_921(cParam0, iLocal_249, 1, 1);
	func_921(cParam0, iLocal_250, 0, 1);
	func_921(cParam0, iLocal_251, 0, 0);
	func_179(11, 1);
	func_922();
	func_923(135028740);
	if (func_33(cParam0) >= iLocal_51 && func_33(cParam0) <= iLocal_53)
	{
		set_clock_time(2, 0, 0);
		_set_weather_type(1632247697, true, true, false, 0f, false);
	}
	if (func_33(cParam0) == iLocal_54 || func_33(cParam0) == iLocal_55)
	{
		set_clock_time(4, 0, 0);
	}
	if (func_33(cParam0) == iLocal_56)
	{
		set_clock_time(5, 30, 0);
	}
	if (func_33(cParam0) >= iLocal_48)
	{
		if (!_0x0772f87d7b07719a(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_RAMON")))
		{
			_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_RAMON"));
		}
	}
	func_924();
	_0xb56d41a694e42e86(&(iLocal_1784[0]), 480, 0, 0, -1, -1, 0);
	func_925(&(iLocal_1784[10]), 0, 0, 0);
	func_926(127);
	func_926(127);
	func_926(885);
	func_926(780);
	func_926(111);
	func_926(112);
	func_926(113);
	func_926(114);
	func_926(71);
	func_926(939);
	func_927(127, 32);
	func_927(127, 32);
	func_927(885, 32);
	func_927(780, 32);
	func_927(111, 32);
	func_927(112, 32);
	func_927(113, 32);
	func_927(114, 32);
	func_927(71, 32);
	func_927(939, 32);
	func_166(1);
	func_170(1, 1, 0);
	func_171(23, 2, 1, 0);
	func_928(1614494720, 1, 0f, 0, 0, 0, 0, 0);
	delete_all_trains();
	set_random_trains(false);
	func_145(cParam0, Global_35, "JOHN", 0);
	func_930(cParam0, 158161);
	func_932(cParam0, 158257);
	func_934(cParam0, 163451);
	if ((func_120(cParam0, 4) || func_120(cParam0, 4194304)) || func_128(cParam0, 2))
	{
		func_935(-857562377, 0, 1, 1103626240);
	}
	else
	{
		func_935(-857562377, 0, 0, 1103626240);
	}
	func_936(uLocal_1710[0], 577.9644f, -625.7607f, 41.5869f, 2f, 1, -1, 0);
	func_936(uLocal_1710[1], 581.988f, -611.5352f, 44.1366f, 2f, 1, -1, 0);
	func_936(uLocal_1710[2], 632.4086f, -593.5988f, 58.72982f, 3f, 1, 4, 0);
	func_936(uLocal_1710[3], 592.5389f, -626.82f, 41.77233f, 2f, 1, 4, 0);
	func_936(uLocal_1710[4], 605.4677f, -606.3735f, 48.2347f, 2f, 1, 4, 0);
	if (func_33(cParam0) >= iLocal_52 && func_33(cParam0) <= iLocal_55)
	{
		func_937(Global_35, 1402226560, 50, 0, 0, 1056964608, 1065353216, 0);
	}
	if (func_33(cParam0) >= iLocal_51 && func_33(cParam0) <= iLocal_55)
	{
		func_938();
	}
	if (func_33(cParam0) >= iLocal_50 && func_33(cParam0) <= iLocal_54)
	{
		_0xc1799fafd2fdf52b(&(iLocal_1784[1]), 0, 0, 0);
		_0xc1799fafd2fdf52b(&(iLocal_1784[2]), 0, 0, 0);
		_0xc1799fafd2fdf52b(&(iLocal_1784[3]), 0, 0, 0);
	}
	func_939(&uLocal_1902);
	func_940(&uLocal_1902, 40);
	func_941(&uLocal_1902, 1);
	func_190(-2073072369, 1, 0);
	return true;
}

void func_438(char[4] cParam0, int iParam1)
{
	func_66(iParam1);
	cParam0->f_10783 = iParam1;
}

bool func_439(char[4] cParam0)
{
	func_942(cParam0);
	func_943(cParam0);
	iVar0 = func_33(cParam0);
	iVar1 = func_35(cParam0);
	iVar2 = func_162(cParam0, iVar0);
	if (func_8(cParam0, 2097152))
	{
		if (iVar2 == 7 || iVar2 < 3)
		{
			func_908(cParam0);
		}
	}
	func_944(cParam0);
	func_945(cParam0);
	func_946(cParam0);
	func_947(cParam0);
	func_948(cParam0);
	func_949(cParam0);
	if (iVar2 != 5 && iVar2 != 6)
	{
		func_950(cParam0);
	}
	if ((func_33(cParam0) == 0 && iVar2 < 3) && func_283(cParam0) == 0)
	{
		func_433(cParam0);
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
			if (func_951(cParam0, iVar0, 0))
			{
				if (func_952(cParam0, func_33(cParam0)) != -1 && _0x62de46f061caa468() < func_952(cParam0, func_33(cParam0)))
				{
					_0xf008e0ba1fe1d644((func_952(cParam0, func_33(cParam0)) - _0x62de46f061caa468()));
				}
				if ((func_33(cParam0) == 25 || func_33(cParam0) == 26) && func_82(32768))
				{
					func_383(cParam0, 524288);
				}
				if (func_120(cParam0, 4))
				{
					if (!func_8(cParam0, 4))
					{
						func_953(cParam0, iVar0);
						func_99(cParam0, 4);
					}
					func_954(cParam0);
					func_955(cParam0, iVar0, 1);
				}
				else
				{
					func_955(cParam0, iVar0, 1);
				}
			}
			break;
		case 1:
			if (func_911(cParam0))
			{
				if (func_956(cParam0))
				{
					if (func_8(cParam0, 4))
					{
						func_909(cParam0, 4);
					}
					func_955(cParam0, iVar0, 2);
				}
			}
			else if (func_957(cParam0) >= cParam0->f_13144)
			{
				if (func_8(cParam0, 4))
				{
					func_909(cParam0, 4);
				}
				func_955(cParam0, iVar0, 2);
			}
			break;
		case 2:
			if (func_951(cParam0, iVar0, 2))
			{
				if (!func_958(cParam0))
				{
					func_955(cParam0, iVar0, 4);
					if (func_959(cParam0, iVar0, iVar1))
					{
						func_955(cParam0, iVar0, 5);
					}
				}
				else
				{
					func_960(cParam0);
					func_955(cParam0, iVar0, 3);
					if (func_961(cParam0, iVar0))
					{
						func_955(cParam0, iVar0, 4);
						if (func_959(cParam0, iVar0, iVar1))
						{
							func_955(cParam0, iVar0, 5);
						}
					}
				}
			}
			else if (func_962(cParam0))
			{
				func_961(cParam0, iVar0);
			}
			break;
		case 3:
			if (func_961(cParam0, iVar0))
			{
				func_955(cParam0, iVar0, 4);
				if (func_959(cParam0, iVar0, iVar1))
				{
					func_955(cParam0, iVar0, 5);
				}
			}
			break;
		case 4:
			if (func_959(cParam0, iVar0, iVar1))
			{
				func_955(cParam0, iVar0, 5);
			}
			break;
		case 5:
			if (!func_20() == 0)
			{
				func_963(cParam0);
				func_964(cParam0, iVar0);
				func_965(cParam0);
				func_966(cParam0);
				if (func_121(cParam0, iVar1, 2))
				{
					if (func_967(cParam0, iVar1))
					{
						func_968(cParam0, iVar1);
					}
				}
			}
			if (func_951(cParam0, iVar0, 5))
			{
				if (func_951(cParam0, iVar0, 7))
				{
					if (!func_121(cParam0, func_33(cParam0), 67108864))
					{
						func_969(cParam0, func_33(cParam0));
					}
					func_970(cParam0, iVar1);
					func_943(cParam0);
					return true;
				}
				else
				{
					func_955(cParam0, iVar0, 7);
				}
			}
			else
			{
				if (!func_121(cParam0, func_33(cParam0), 4194304))
				{
					if ((!is_screen_faded_in() && !is_screen_fading_in()) && !func_121(cParam0, func_33(cParam0), 16))
					{
						do_screen_fade_in(0);
						func_971(0);
					}
					func_140(cParam0, func_33(cParam0), 4194304);
				}
				if ((func_972(get_player_index(), 0, 0, 1) && !func_120(cParam0, 8192)) && !func_121(cParam0, func_33(cParam0), 8))
				{
					func_47(1, 0);
					func_973("MISSION_WANTED", 7500, 0, 1, 0, 0, -1, -1, 0);
					if (func_974(cParam0))
					{
						func_955(cParam0, iVar0, 6);
					}
				}
				if (func_8(cParam0, 268435456))
				{
					if (_0x1b065a2bf7953815(1) != 1)
					{
						func_36(cParam0, func_34(iVar0), func_34(iVar1), iVar0, iVar1);
						func_909(cParam0, 268435456);
					}
				}
				if (func_120(cParam0, 1048576))
				{
					if (func_127(func_34(0)))
					{
						func_270(cParam0, 1048576);
					}
				}
			}
			break;
		case 6:
			if (!func_20() == 0)
			{
				func_963(cParam0);
				func_964(cParam0, iVar0);
				func_965(cParam0);
				func_966(cParam0);
				if (func_121(cParam0, func_35(cParam0), 2))
				{
					if (func_967(cParam0, func_35(cParam0)))
					{
						func_968(cParam0, func_35(cParam0));
					}
				}
			}
			if ((!func_972(get_player_index(), 0, 0, 1) || func_120(cParam0, 8192)) || func_121(cParam0, func_33(cParam0), 8))
			{
				if (func_951(cParam0, iVar0, 5))
				{
					if (func_975(cParam0))
					{
						func_955(cParam0, iVar0, 7);
					}
				}
				else
				{
					func_975(cParam0);
					func_955(cParam0, iVar0, 5);
				}
			}
			else
			{
				func_951(cParam0, iVar0, 5);
				func_976(cParam0);
			}
			break;
		case 7:
			if (func_951(cParam0, iVar0, 7))
			{
				if (!func_121(cParam0, func_33(cParam0), 67108864))
				{
					func_969(cParam0, func_33(cParam0));
				}
				func_970(cParam0, iVar1);
				func_943(cParam0);
				return true;
			}
			break;
		default:
			func_955(cParam0, iVar0, 7);
			break;
	}
	return false;
}

void func_440()
{
	if (Global_1934765->f_286 > 300)
	{
		Global_1934765->f_286 = 300;
	}
	_0x2f9ac754fe179d58(func_977());
}

bool func_441(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 954);
}

int func_442(int iParam0)
{
	if (!func_441(iParam0))
	{
		return 0;
	}
	return Global_1895087[iParam0];
}

bool func_443(int iParam0)
{
	return iParam0 != 0;
}

int func_444(int iParam0)
{
	if (!func_441(iParam0))
	{
		return 0;
	}
	return (*Global_1895087)[iParam0]->f_1;
}

void func_445(int iParam0, bool bParam1, float fParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	iVar0 = func_978(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	func_979(iVar0);
	if (iVar0 == Global_1934765->f_338)
	{
		if (Global_1934765->f_337 == 0)
		{
			func_980();
		}
		else
		{
			func_981(bParam1, fParam2);
		}
	}
	else
	{
		uVar1 = Global_1934765->f_338;
		Global_1934765->f_338 = func_982();
	}
}

bool func_446(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 153);
}

void func_447(int iParam0, int iParam1)
{
	if (!func_446(iParam0))
	{
		return;
	}
	Global_1914319->f_15614[iParam0] = (&Global_1914319->f_15614[iParam0] - (Global_1914319->f_15614[iParam0] && iParam1));
}

void func_448(int iParam0, int iParam1)
{
	if (!func_446(iParam0))
	{
		return;
	}
	Global_1914319->f_15614[iParam0] = (Global_1914319->f_15614[iParam0] || iParam1);
}

int func_449(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 < 153))
	{
		return -1;
	}
	switch (iParam0)
	{
		case 126:
			return 32;
		case 22:
			return 17;
		case 4:
		case 5:
		case 34:
		case 55:
		case 67:
			return 18;
		case 56:
		case 57:
		case 58:
		case 59:
			return 19;
		case 102:
		case 106:
		case 109:
		case 112:
		case 114:
		case 120:
			return 29;
		case 39:
		case 73:
		case 128:
		case 132:
		case 137:
		case 141:
		case 145:
			return 0;
		case 7:
		case 19:
		case 28:
		case 42:
		case 61:
		case 74:
		case 87:
		case 90:
		case 95:
		case 129:
		case 133:
		case 138:
		case 142:
		case 146:
			return 3;
		case 0:
		case 8:
		case 29:
		case 43:
		case 75:
		case 91:
		case 130:
		case 134:
		case 139:
		case 143:
		case 147:
			return 6;
		case 17:
		case 47:
			return 7;
		case 18:
		case 27:
		case 41:
		case 82:
		case 98:
		case 125:
			return 4;
		case 10:
		case 26:
		case 38:
		case 60:
		case 72:
		case 92:
			return 10;
		case 1:
		case 16:
		case 32:
		case 51:
		case 64:
		case 80:
			return 22;
		case 2:
		case 14:
		case 20:
		case 23:
		case 30:
		case 45:
		case 65:
		case 77:
		case 86:
		case 89:
		case 96:
		case 99:
			return 2;
		case 3:
		case 15:
		case 21:
		case 24:
		case 31:
		case 46:
		case 78:
		case 85:
		case 88:
		case 100:
			return 1;
		case 9:
		case 37:
		case 69:
			return 8;
		case 13:
		case 35:
		case 44:
		case 63:
		case 76:
		case 84:
		case 94:
			return 9;
		case 103:
		case 107:
		case 110:
		case 116:
			return 30;
		case 104:
		case 105:
		case 108:
		case 111:
		case 113:
		case 115:
		case 117:
		case 118:
		case 119:
		case 121:
		case 122:
		case 123:
		case 124:
			return 31;
		case 136:
			return 5;
		case 6:
		case 25:
		case 36:
		case 68:
			return 15;
		case 11:
		case 33:
		case 52:
		case 53:
		case 66:
		case 70:
		case 71:
		case 81:
		case 83:
		case 93:
		case 97:
			return 33;
		case 48:
			return 12;
		case 49:
			return 13;
		case 50:
			return 14;
		case 62:
		case 79:
			return 20;
		case 101:
			return 11;
		case 149:
			return 23;
		case 150:
			return 24;
		case 151:
			return 25;
		case 12:
		case 54:
			return 21;
		case 127:
			return 34;
		case 131:
		case 135:
		case 140:
		case 144:
		case 148:
			return 27;
		case 152:
			return 24;
		default:
			break;
	}
	return -1;
}

void func_450(int iParam0, bool bParam1)
{
	if (!func_451(iParam0))
	{
		return;
	}
	if ((bParam1 && func_983(iParam0, 512)) || (!bParam1 && !func_983(iParam0, 512)))
	{
		return;
	}
	if (bParam1)
	{
		func_453(iParam0, 512);
	}
	else
	{
		func_455(iParam0, 512);
	}
	if (func_984(iParam0))
	{
		_0x9b4e793b1cb6550a();
	}
}

bool func_451(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 35);
}

void func_452(int iParam0, int iParam1)
{
	func_985(&(Global_1914319->f_3[iParam0]->f_6), iParam1);
}

void func_453(int iParam0, int iParam1)
{
	if (!func_451(iParam0))
	{
		return;
	}
	Global_1914319->f_3[iParam0]->f_7 = (Global_1914319->f_3[iParam0]->f_7 || iParam1);
}

void func_454(int iParam0, int iParam1)
{
	func_986(&(Global_1914319->f_3[iParam0]->f_6), iParam1);
}

void func_455(int iParam0, int iParam1)
{
	if (!func_451(iParam0))
	{
		return;
	}
	Global_1914319->f_3[iParam0]->f_7 = (Global_1914319->f_3[iParam0]->f_7 - (Global_1914319->f_3[iParam0]->f_7 && iParam1));
}

void func_456(int iParam0)
{
	Global_1914319->f_15923 = iParam0;
}

bool func_457(int iParam0)
{
	if (!func_446(iParam0))
	{
		return false;
	}
	if (iParam0 == 41 || iParam0 == 82)
	{
		return false;
	}
	iVar0 = func_449(iParam0);
	if ((((((((((iVar0 == 10 || iVar0 == 4) || iVar0 == 17) || iVar0 == 31) || iVar0 == 18) || iVar0 == 19) || iVar0 == 22) || iVar0 == 12) || iVar0 == 13) || iVar0 == 14) || iVar0 == 32)
	{
		return true;
	}
	return false;
}

bool func_458(int iParam0, int iParam1)
{
	if (!func_446(iParam0))
	{
		return false;
	}
	return (Global_20710.f_2246[iParam0] && iParam1) != 0;
}

void func_459(int iParam0, int iParam1)
{
	if (!func_446(iParam0))
	{
	}
	else
	{
		Global_20710.f_2246[iParam0] = (Global_20710.f_2246[iParam0] || iParam1);
	}
}

void func_460(int iParam0, int iParam1)
{
	if (!func_446(iParam0))
	{
	}
	else
	{
		Global_20710.f_2246[iParam0] = (&Global_20710.f_2246[iParam0] - (Global_20710.f_2246[iParam0] && iParam1));
	}
}

void func_461(int iParam0)
{
	if (iParam0 != -1)
	{
		Global_1914319->f_15922 = iParam0;
	}
}

int func_462(int iParam0)
{
	if (!func_468(iParam0))
	{
		return 0;
	}
	if (!does_entity_exist((*Global_1360165)[iParam0]->f_70))
	{
		(*Global_1360165)[iParam0]->f_70 = 0;
	}
	return (*Global_1360165)[iParam0]->f_70;
}

void func_463(int iParam0, int iParam1, bool bParam2)
{
	if (!func_485(iParam0))
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

Vector3 func_464(vector3 vParam0, vector3 vParam3, float fParam6)
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

Vector3 func_465(vector3 vParam0, vector3 vParam3, float fParam6)
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

bool func_466(int iParam0)
{
	if (func_987(iParam0))
	{
		return is_door_registered_with_system(iParam0);
	}
	return false;
}

bool func_467()
{
	return true;
}

bool func_468(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 27)
	{
		return false;
	}
	return true;
}

void func_469(char[4] cParam0, int iParam1)
{
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	if (!func_988(cParam0, iParam1, &iVar0))
	{
		return;
	}
	if (is_entity_an_object(iParam1) && func_989(cParam0, get_object_index_from_entity_index(iParam1)))
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

void func_470(int iParam0)
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

void func_471(int iParam0)
{
	func_990(iParam0, 8, 0);
}

void func_472(int iParam0, bool bParam1)
{
	if (!func_485(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (func_991(&((*Global_1360165)[iParam0]->f_12), 1))
		{
			func_990(iParam0, 1, 0);
		}
	}
	func_990(iParam0, 16, bParam1);
}

void func_473(int iParam0, bool bParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	if (!func_468(iParam0))
	{
		return;
	}
	if (func_526(iParam0))
	{
		if ((*Global_1360165)[iParam0]->f_129 != 0 && (*Global_1360165)[iParam0]->f_129 != get_id_of_this_thread())
		{
			return;
		}
	}
	if (bParam10)
	{
		func_992(iParam0, 56, 1);
		func_27(&(Global_1359489->f_40), 1);
	}
	func_472(iParam0, 0);
	func_990(iParam0, 4, 0);
	func_471(iParam0);
	func_993(iParam0);
	func_994(iParam0, 37, 1);
	bVar0 = func_186(Global_1360165[iParam0], 0);
	iVar1 = func_995(iParam0, 0);
	bVar2 = _0x800df3fc913355f3(iVar1);
	if (get_ped_config_flag(Global_1360165[iParam0], 503, true) && Global_1359489->f_16 & 8388608 == 0)
	{
		set_ped_config_flag(Global_1360165[iParam0], 503, false);
	}
	if (func_996(iParam0, 64, 1))
	{
		func_994(iParam0, 64, 1);
	}
	if (bParam3)
	{
		func_994(iParam0, 33, 1);
		func_994(iParam0, 34, 1);
		func_997(iParam0, 1056964608, -1, 1061158912);
		func_998(iParam0, 1, 1, 0);
		if (bParam6)
		{
			func_992(iParam0, 30, 1);
		}
		if (bParam7)
		{
			func_992(iParam0, 35, 1);
			if (bParam8)
			{
				func_992(iParam0, 62, 1);
			}
		}
		if (bVar0)
		{
			func_999(iParam0, 0);
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
		func_994(iParam0, 28, 1);
	}
	else
	{
		if (!bVar0)
		{
			set_ped_keep_task(Global_1360165[iParam0], true);
		}
		func_992(iParam0, 33, 1);
		func_998(iParam0, 0, 1, 0);
		if (fParam4 > 0f)
		{
			(*Global_1360165)[iParam0]->f_133 = fParam4;
			func_27(&((*Global_1360165)[iParam0]->f_130), 1);
		}
		else
		{
			func_557(&((*Global_1360165)[iParam0]->f_130));
		}
		if (bParam9)
		{
			func_992(iParam0, 34, 1);
		}
	}
	if (bParam1 || bParam2)
	{
		if (does_entity_exist(Global_1360165[iParam0]))
		{
			func_1000(iParam0, bParam2, bParam2, bParam2, 0);
		}
	}
	else if (bVar0)
	{
		set_ped_can_use_auto_conversation_lookat(Global_1360165[iParam0], false);
	}
	if (func_996(iParam0, 45, 1))
	{
		func_994(iParam0, 45, 1);
	}
	func_1001(iParam0, 16, 1);
	func_994(iParam0, 44, 1);
	(*Global_1360165)[iParam0]->f_129 = 0;
	Global_40.f_4942[iParam0]->f_4 = 0;
	if (bParam5)
	{
		if (func_186(func_462(iParam0), 0))
		{
			func_1002(0, iParam0, bParam3, 0, bParam2);
		}
	}
}

bool func_474(int iParam0)
{
	if (!func_441(iParam0))
	{
		return false;
	}
	return (*Global_1895087)[iParam0]->f_2 == get_id_of_this_thread();
}

bool func_475(int iParam0, int iParam1)
{
	if (func_20() != -1)
	{
		return false;
	}
	if (!func_441(iParam0))
	{
		return false;
	}
	return (Global_24887[iParam0] && iParam1) != 0;
}

bool func_476(int iParam0)
{
	if (!func_441(iParam0))
	{
		return false;
	}
	return _does_thread_exist((*Global_1895087)[iParam0]->f_2);
}

void func_477(int iParam0)
{
	if (!func_441(iParam0))
	{
		return;
	}
	iVar0 = func_1003(iParam0);
	if (does_entity_exist(iVar0))
	{
		if (does_entity_belong_to_this_script(iVar0, false))
		{
			set_ped_as_no_longer_needed(&iVar0);
		}
	}
	(*Global_1895087)[iParam0]->f_2 = 0;
}

int func_478(int iParam0, bool bParam1)
{
	if (!func_441(iParam0))
	{
		return 0;
	}
	if (!func_475(iParam0, 2))
	{
		return 0;
	}
	if (func_442(iParam0) == 0)
	{
		return 1;
	}
	if (!_0x800df3fc913355f3(func_444(iParam0)))
	{
		return 1;
	}
	if (func_475(iParam0, 1) && !bParam1)
	{
		func_927(iParam0, 128);
		return 1;
	}
	func_165(iParam0, 129);
	func_477(iParam0);
	_0xfc77c5b44d5ff7c0(func_444(iParam0));
	func_1004(iParam0, 0);
	return 1;
}

void func_479(int* iParam0)
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
					func_904(&(iVar1[iVar0]), get_offset_from_entity_in_world_coords(*iParam0, 3f, 3f, 0f), get_entity_heading(*iParam0), 2, 1073741824);
				}
			}
		}
		iVar0++;
	}
}

void func_480(int iParam0)
{
	iVar0 = func_1005(iParam0, 1);
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

void func_481(int iParam0)
{
	iVar0 = func_1005(iParam0, 1);
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

void func_482()
{
	func_481(-939420910);
	func_481(-1187950766);
	func_481(356365161);
	func_481(753127042);
	func_481(-2038424081);
	func_481(1884271742);
	func_481(459290420);
}

void func_483()
{
	func_481(704802028);
	func_481(588987611);
	func_481(2008888900);
	func_481(1649996811);
	func_481(227918160);
	func_481(168171957);
	func_481(1193080109);
	func_481(-491981251);
	func_481(-639037538);
	func_481(-618620429);
}

bool func_484(int iParam0)
{
	iVar0 = func_1005(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887->f_12 == -1)
	{
		return is_bit_set(&(Global_40.f_283[iVar1]), iVar2);
	}
	return is_bit_set(&(Global_1058888->f_40567[iVar1]), iVar2);
}

bool func_485(int iParam0)
{
	return iParam0 > -1;
}

void func_486(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_468(iParam0))
		{
			return;
		}
	}
	Global_40.f_4942[iParam0] = (Global_40.f_4942[iParam0] || iParam1);
}

bool func_487(int iParam0)
{
	return func_1006(iParam0, 2);
}

int func_488(int iParam0)
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

int func_489(int iParam0)
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

int func_490(int iParam0)
{
	return iParam0 & 31;
}

bool func_491()
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

int func_492(int iParam0)
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

int func_493(int iParam0)
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

void func_494(int iParam0, var uParam1)
{
	Var0 = iParam0;
	Var0.f_1 = uParam1;
	network_set_rich_presence(4, &Var0, 2, 2);
}

int func_495()
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

int func_496(int iParam0)
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

void func_497(var uParam0, var uParam1, var uParam2)
{
	vVar0.x = uParam0;
	vVar0.f_1 = uParam1;
	vVar0.f_2 = uParam2;
	network_set_rich_presence(3, &vVar0, 3, 3);
}

void func_498(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_12106[iParam0]->f_1 = iParam1;
		return;
	}
	if (iParam1 == 0 || iParam1 == -1)
	{
		func_1007(iParam0);
	}
	else
	{
		func_1008(iParam0, iParam1);
	}
	func_1009();
}

bool func_499(int iParam0)
{
	if (!func_197(iParam0))
	{
		return false;
	}
	switch (func_202(iParam0))
	{
		case 1:
			switch (func_276(iParam0))
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
			switch (func_276(iParam0))
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

void func_500(int iParam0)
{
	iVar2 = func_1010(0);
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_606(iVar1) == iParam0)
		{
			_0x6a564540fac12211(iVar2, iVar1);
		}
		iVar0++;
	}
	func_1012(func_1011(iParam0), 6);
}

void func_501(int iParam0)
{
	iVar2 = func_1010(0);
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_606(iVar1) == iParam0)
		{
			_0x766315a564594401(iVar2, iVar1, 0);
		}
		iVar0++;
	}
	func_1013(func_1011(iParam0), 6);
}

int func_502(int iParam0)
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

int func_503(int iParam0)
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
	func_1014(iParam0, Global_1898164->f_162);
	return 1;
}

bool func_504(int iParam0)
{
	return iParam0 != 0;
}

bool func_505(int iParam0)
{
	if (iParam0 != -1)
	{
		return true;
	}
	return false;
}

void func_506(int iParam0, var uParam1)
{
	if (!func_505(iParam0))
	{
		return;
	}
	if (*uParam1 == -1600776215)
	{
		return;
	}
	func_1015(iParam0, *uParam1, 0);
	func_1016(uParam1);
	Global_1935183->f_24 = 1;
}

void func_507(char* sParam0, int iParam1)
{
	sParam0->f_8 = (sParam0->f_8 || iParam1);
}

void func_508(int iParam0, float fParam1)
{
	iParam0->f_1 = (func_555() - fParam1);
	func_1017(iParam0, 1);
	func_1018(iParam0, 2);
	iParam0->f_2 = 0f;
}

bool func_509(int iParam0)
{
	return func_226(*iParam0, 2);
}

int func_510()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return iVar0;
	}
	return get_game_timer();
}

void func_511(bool bParam0)
{
	if (func_1019())
	{
		Global_1357509 = 1;
	}
	if (func_1020(-92416669))
	{
	}
	if (bParam0 && Global_1935630->f_44 == -1016714371)
	{
		set_current_ped_weapon(Global_35, -1569615261, true, 0, false, false);
		Global_1935630->f_44 = -1569615261;
	}
}

void func_512(var uParam0, struct<4> Param1)
{
	*uParam0 = { Param1 };
	uParam0->f_3 = Param1.f_3;
}

int func_513(int iParam0)
{
	if (func_202(iParam0) == 1)
	{
		return func_276(iParam0);
	}
	return -1;
}

int func_514(int iParam0)
{
	if (func_202(iParam0) == 8)
	{
		return func_276(iParam0);
	}
	return -1;
}

char[] func_515(int iParam0)
{
	if (!func_277(iParam0))
	{
		return uVar0;
	}
	uVar0 = (*Global_1347702)[iParam0]->f_3;
	return uVar0;
}

void func_516(int iParam0, bool bParam1)
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
		func_1021(1, bParam1);
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
		(*Global_2621440)[iParam0]->f_9.f_14 = func_289();
	}
}

void func_517(int iParam0, vector3 vParam1, var uParam4)
{
	(*Global_2621440)[iParam0]->f_9.f_7 = { vParam1 };
	(*Global_2621440)[iParam0]->f_9.f_13 = uParam4;
	(*Global_2621440)[iParam0]->f_9 = 5;
	(*Global_2621440)[iParam0]->f_9.f_15 = func_375(vParam1, 1);
}

bool func_518(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 13)
	{
		return false;
	}
	return true;
}

bool func_519(int iParam0)
{
	return Global_43884 == iParam0;
}

void func_520(bool bParam0)
{
	Global_1935496->f_18 = !bParam0;
}

bool func_521(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 120);
}

void func_522(int iParam0)
{
	Global_1310750->f_16035 = (Global_1310750->f_16035 - (Global_1310750->f_16035 && iParam0));
}

bool func_523(var uParam0, int iParam1, int iParam2)
{
	return is_bit_set(uParam0[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return is_bit_set(uParam0[iVar0], iVar1);
}

int func_524()
{
	return Global_1109400->f_245;
}

bool func_525(var uParam0, int iParam1)
{
	return func_394(uParam0->f_64, iParam1);
}

bool func_526(int iParam0)
{
	return func_715(iParam0, 16, 1);
}

void func_527(int iParam0)
{
	iParam0 = func_271(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_267(iParam0);
	if (!_does_thread_exist(iVar0))
	{
		func_534(iParam0);
	}
	else if (!is_thread_active(iVar0, false))
	{
		func_534(iParam0);
	}
}

bool func_528(int iParam0)
{
	iParam0 = func_271(iParam0);
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

void func_529(int iParam0)
{
	iParam0 = func_271(iParam0);
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

void func_530(int iParam0)
{
	iParam0 = func_271(iParam0);
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

bool func_531(int iParam0)
{
	if (!func_1022(iParam0))
	{
		return false;
	}
	if (!func_335())
	{
		return true;
	}
	return false;
}

void func_532(int iParam0)
{
	iParam0 = func_271(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_535(iParam0))
	{
		return;
	}
	iVar0 = func_222(iParam0);
	func_1023(iParam0);
	if (!_0x88ad6cc10d8d35b2(iVar0))
	{
		set_entity_as_mission_entity(iVar0, true, true);
	}
	iVar1 = get_entity_model(iVar0);
	if (_0xaa9f048dcf69b6dc(iVar1))
	{
		if (!func_531(iVar1))
		{
			set_ped_model_is_suppressed(iVar1, false);
		}
	}
	delete_ped(&iVar0);
	func_1024(iParam0, 0);
	func_534(iParam0);
}

bool func_533(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (is_entity_dead(iParam0) || is_ped_injured(iParam0))
	{
	}
	iVar0 = func_266(iParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	return true;
}

void func_534(int iParam0)
{
	iParam0 = func_271(iParam0);
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

bool func_535(int iParam0)
{
	iParam0 = func_271(iParam0);
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

void func_536(int iParam0)
{
	if (is_player_dead(player_id()))
	{
		return;
	}
	iVar0 = func_222(iParam0);
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
		func_529(iParam0);
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
	bVar3 = func_604(42);
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
		func_529(iParam0);
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
	if (func_900(iVar0) && !bVar9)
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
	iParam0 = func_271(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (!func_535(iParam0))
	{
		return false;
	}
	iVar0 = func_222(iParam0);
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
	iParam0 = func_271(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_535(iParam0))
	{
		return;
	}
	iVar0 = func_222(iParam0);
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
	func_712(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 1831944558, 0, 109029619, 0, 0, 0, 1);
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
		if (func_1034())
		{
			iVar2 = floor((to_float(iVar1) * 0.1f));
		}
		iParam0 = (iParam0 + iVar2);
		iVar1 = (iVar1 + iVar2);
		func_712(_create_var_string(2, "FEED_GANG_TOTAL_EARN", iParam0), "ITEMTYPE_TEXTURES", -1957849484, 0, 109029619, 0, 0, 0, 1);
		iParam0 = (iParam0 - iVar0);
		if (iVar0 > 0)
		{
			func_1035(iVar0);
			func_1036(iVar0, 0, 0);
		}
		func_712(_create_var_string(2, "FEED_GANG_PLAYER_EARN", iVar1), "ITEMTYPE_TEXTURES", 1831944558, 0, 109029619, 0, 0, 0, 1);
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
	if (!func_253(iParam0))
	{
		return false;
	}
	return func_257(iParam0, 67108864);
}

void func_547(int iParam0)
{
	StringCopy(&cVar0, func_1037(iParam0), 64);
	StringConCat(&cVar0, "_OUTLINE", 64);
	sVar8 = func_1038(cVar0);
	_0x563fcb6620523917(get_hash_key(sVar8), -1482012664);
}

void func_548(int iParam0)
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
	if (!func_521(iParam0))
	{
		return true;
	}
	return Global_17504.f_42[iParam0]->f_4 > 0;
}

int func_553(int iParam0)
{
	if (func_521(iParam0))
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

void func_557(int iParam0)
{
	iParam0->f_1 = 0f;
	iParam0->f_2 = 0f;
	*iParam0 = 0;
}

bool func_558(int iParam0, bool bParam1)
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

int func_559(int iParam0, bool bParam1, bool bParam2)
{
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (&Global_40.f_4283.f_6[iVar0] == iParam0)
		{
			func_572(Global_40.f_4283.f_6[iVar0], bParam1, bParam2);
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_560(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_2;
	}
	return -1;
}

void func_561(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_2 = iParam1;
}

int func_562()
{
	return Global_40.f_11095.f_35;
}

void func_563(int iParam0, int iParam1)
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
		func_564(1);
		Global_40.f_11922[0] = iParam0;
	}
}

void func_564(int iParam0)
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

bool func_565(int iParam0)
{
	return Global_40.f_490.f_402[iParam0] & 1 != 0;
}

int func_566()
{
	iVar0 = func_1043((*Global_1347702)[9]->f_15);
	iVar1 = func_1043((*Global_1835011)[69]->f_1);
	if (func_1044(iVar0, iVar1, 1))
	{
		return 0;
	}
	return 1;
}

bool func_567(int iParam0)
{
	if (!func_196(iParam0))
	{
		return false;
	}
	return func_331((*Global_1835011)[iParam0]->f_1, 1);
}

int func_568(int iParam0)
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

int func_569(int iParam0)
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

void func_570(int iParam0, bool bParam1)
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

bool func_571(int iParam0)
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

void func_572(var uParam0, bool bParam1, bool bParam2)
{
	if (*uParam0 == 176656832)
	{
		return;
	}
	func_570(*uParam0, 0);
	if (bParam1)
	{
		if (bParam2)
		{
			func_573(2, *uParam0);
		}
		else
		{
			func_574(2, *uParam0);
		}
	}
	func_1049(uParam0);
}

void func_573(int iParam0, int iParam1)
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

void func_574(int iParam0, int iParam1)
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

void func_575(int iParam0, int iParam1, bool bParam2)
{
	Global_1327479->f_4 = get_game_timer();
	func_1050(iParam0, iParam1, bParam2);
}

int func_576(int iParam0)
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

int func_577(int iParam0)
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

void func_578(int iParam0, bool bParam1, int iParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, bool bParam7)
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
	if (func_604(6))
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
	Global_40.f_11095.f_35 = func_313(Global_40.f_11095.f_35, iVar3, iVar2);
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
				if (iParam0 > func_577(14))
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
					func_712(_create_var_string(2, "PLAYER_HONOR_CHANGE_POS"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_GOOD"), 0, 109029619, "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_712(_create_var_string(2, "PLAYER_HONOR_CHANGE_POS_EVENT"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_GOOD"), 0, 109029619, "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
		else
		{
			func_95(func_94(-1636809477), 1);
			Global_1347477->f_204 = 0;
			if (!bParam1)
			{
				if (iParam0 < func_577(4))
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
					func_712(_create_var_string(2, "PLAYER_HONOR_CHANGE_NEG"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_BAD"), 1, 859817522, "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_712(_create_var_string(2, "PLAYER_HONOR_CHANGE_NEG_EVENT"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_BAD"), 1, 859817522, "Honor_Display_Sounds", sVar7, 0, 1);
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
		func_365(10, 1);
	}
}

void func_579(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	Global_1347477->f_155[iParam0] = iParam1;
	Global_1347477->f_155[iParam0]->f_2 = iParam2;
	Global_1347477->f_155[iParam0]->f_3 = iParam3;
	Global_1347477->f_155[iParam0]->f_4 = iParam4;
	Global_1347477->f_155[iParam0]->f_5 = bParam5;
	Global_1347477->f_155[iParam0]->f_1 = get_game_timer() + 500;
}

int func_580(int iParam0)
{
	return shift_right(iParam0, 15) & 16383;
}

int func_581(int iParam0)
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

bool func_582(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _item_database_is_key_valid(iParam0, iParam1);
}

bool func_583(int iParam0, int iParam1, bool bParam2, int iParam3)
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

bool func_584(int iParam0, int iParam1, int iParam2)
{
	*iParam1 = iParam2;
	func_1063(iParam0, iParam1);
	Var0 = { func_693(iParam0, 0, 1) };
	iVar5 = func_1064(iParam0, &Var0, 0, 0);
	iVar6 = func_1065(iParam0, 0);
	if ((iVar5 > 1 && !func_129()) && (iVar6 + iParam2) >= iVar5)
	{
		if (func_602(iParam0, -2051813666))
		{
			func_329(583, 1);
		}
		else
		{
			func_329(582, 0);
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

void func_585(int iParam0, bool bParam1)
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

int func_586(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_582(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_601(iParam0);
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
	iVar2 = _0xe787f05dfc977bde(func_1010(bParam2), iParam0, 0);
	return iVar2;
}

bool func_587(int iParam0)
{
	if (func_20() != -1)
	{
		return false;
	}
	return func_588(iParam0) != 0;
}

int func_588(int iParam0)
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

int func_589(int iParam0)
{
	return _0x6052b4de6657684f(iParam0);
}

int func_590(int iParam0)
{
	iVar1 = 0;
	while (iVar1 < func_1069())
	{
		iVar0 = _0x126cbebba46693cf(iVar1, -2076669067, 0);
		if (iParam0 == func_589(iVar0))
		{
			if (func_351(func_1070(iVar0), 1, 0))
			{
				iVar2++;
			}
		}
		iVar1++;
	}
	return iVar2;
}

void func_591(int iParam0)
{
	_0x3ea62e56f386c997(iParam0, 1);
	func_1071(48);
	func_370(0, -1);
}

bool func_592(int iParam0)
{
	if (func_20() != -1)
	{
		return false;
	}
	return func_331((*Global_1347702)[iParam0]->f_15, 1);
}

int func_593(int iParam0)
{
	return _0x62cab7db62ead434(-2076669067, iParam0);
}

int func_594(int iParam0)
{
	return _0x93f2e7b5db85657b(-2076669067, iParam0);
}

bool func_595(int iParam0)
{
	if (func_20() != -1)
	{
		return false;
	}
	return func_331((*Global_1835011)[iParam0]->f_1, 1);
}

bool func_596(int iParam0)
{
	if (func_20() != -1)
	{
		return false;
	}
	if (!func_277(iParam0))
	{
		return false;
	}
	return func_198((*Global_1347702)[iParam0]->f_15);
}

int func_597()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		if (func_351(func_1072(iVar1), 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_598(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, bool bParam7)
{
	switch (iParam0)
	{
		case 38:
			sVar0 = "MISSION_RCCIG";
			sVar1 = "SP_MISSIONS_13";
			if (func_398() && (func_596(38) || func_592(38)))
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
			if (func_398() && (func_596(39) || func_592(39)))
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
			if (func_398() && (func_596(41) || func_592(41)))
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
			if (func_398() && (func_596(49) || func_592(49)))
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

void func_599(int iParam0)
{
	Global_40.f_12004 = (Global_40.f_12004 || iParam0);
}

void func_600(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	switch (iParam0)
	{
		case 38:
			sVar0 = "COL_CC_TITLE";
			sVar3 = "COL_CC_CARD_FOUND";
			iVar7 = -2076669067;
			if (func_398() && (func_596(38) || func_592(38)))
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
			if (func_398() && (func_596(39) || func_592(39)))
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
			if (func_398() && (func_596(49) || func_592(49)))
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
		if (func_398() && (func_596(38) || func_592(38)))
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
			func_718(_create_var_string(2, sVar0), _create_var_string(2, func_1082(func_594(iParam6))), iVar5, iVar4, -2, 0, 0, 0, 0, 1, 1);
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
		if (func_398() && (func_596(39) || func_592(39)))
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
		if (func_398() && (func_596(49) || func_592(49)))
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

int func_601(int iParam0)
{
	if (!func_582(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

bool func_602(int iParam0, int iParam1)
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

bool func_603(int iParam0, int iParam1)
{
	if (!func_582(iParam0, 0))
	{
		return false;
	}
	return _0x245d07651b1d183b(iParam0, iParam1);
}

bool func_604(int iParam0)
{
	if (!func_1083(iParam0))
	{
		return false;
	}
	return func_1084(iParam0);
}

void func_605(int iParam0)
{
	if (!func_1083(iParam0))
	{
		return;
	}
	func_1085(iParam0);
	func_1086(iParam0);
}

int func_606(int iParam0)
{
	if (!func_582(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_607(int iParam0, bool bParam1)
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
	if (func_582(iVar0, 0))
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

int func_608(int iParam0, bool bParam1)
{
	if (!func_582(iParam0, 0))
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

void func_609(int iParam0)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	if (!func_696(iParam0))
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

bool func_610(bool bParam0)
{
	if (func_20() == -1)
	{
		return true;
	}
	return _inventory_are_local_changes_allowed(func_1010(bParam0));
}

bool func_611(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
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
		Var0 = { func_693(iParam0, 0, 1) };
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
				if (func_610(0))
				{
					_give_weapon_to_ped_2(Global_35, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
					if (!has_ped_got_weapon(Global_35, iParam0, 0, false))
					{
						return false;
					}
					func_612(_get_ammo_type_for_weapon(iParam0), iParam1, iParam6);
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

bool func_612(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return true;
	}
	if (!func_614(iParam0))
	{
		return false;
	}
	if (!func_610(0))
	{
		return false;
	}
	_add_ammo_to_ped_by_type(Global_35, iParam0, iParam1, iParam2);
	return true;
}

bool func_613(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	iVar0 = func_608(iParam0, 0);
	if (is_weapon_valid(iVar0))
	{
		if (func_20() == -1)
		{
			func_609(iVar0);
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
				func_611(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == -1415022764 || iVar0 == -160924582)
			{
				func_611(iVar0, 0, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == 2055893578)
			{
				func_611(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
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
					func_611(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
				}
				else
				{
					func_611(iVar0, _get_weapon_clip_size(iVar0) * 4, bParam3, bParam4, 0, 0, iParam1, 0);
				}
			}
			else if (_is_weapon_one_handed(iVar0))
			{
				iVar7 = func_1097(Global_35, 2, 0, 1);
				if ((((func_696(iVar7) && !Global_43891) && iVar7 != iVar0) && !func_604(24)) && bParam4)
				{
					_0xe9bd19f8121ade3e(Global_35, iVar7);
				}
				bVar8 = true;
				if (func_696(iVar7) && func_604(24))
				{
					if (!func_611(iVar0, iVar6, bParam3, bParam4, 3, bVar8, iParam1, 0))
					{
						return false;
					}
				}
				else if (!func_611(iVar0, iVar6, bParam3, bParam4, 0, bVar8, iParam1, 0))
				{
					return false;
				}
			}
			else if (!func_611(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0))
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
		func_329(480, 1);
	}
	return true;
}

bool func_614(int iParam0)
{
	return _is_ammo_valid(iParam0);
}

bool func_615(int iParam0, int iParam1, int iParam2)
{
	if (!func_614(iParam0))
	{
		return false;
	}
	iVar4 = _get_weapon_type_from_ammo_type(iParam0);
	iVar3 = get_ped_ammo_by_type(Global_35, iParam0);
	if (func_696(iVar4))
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
	if (func_351(611073244, 1, 0) && iParam2 == -897553835)
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
		func_650(func_1098(iParam0), func_649(iParam0), 1);
		return false;
	}
	if (iVar2 == (iVar3 + iVar0))
	{
		if (func_20() == -1)
		{
			if (func_331((*Global_1835011)[14]->f_1, 1))
			{
				func_329(416, 0);
			}
		}
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_610(0))
	{
		if (func_612(iParam0, iVar0, iParam2))
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

void func_616(int iParam0)
{
	if ((iParam0 == -615217896 && !func_342()) || iParam0 != -615217896)
	{
		if (func_1099(Global_35, iParam0, &uVar0))
		{
			func_634(player_ped_id(), iParam0, 0, -358215195, 1, 1, 1, 0, 1, 1);
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

void func_617(int iParam0)
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

struct<2> func_618(int iParam0)
{
	Var0.f_1 = iParam0;
	return Var0;
}

struct<2> func_619(int iParam0, int iParam1)
{
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

void func_620(int iParam0)
{
	bVar0 = func_602(iParam0, -2017733358);
	if (func_1102() < 3)
	{
		if (bVar0)
		{
			if (func_1104(func_1103(iParam0), iParam0))
			{
				func_650(79, func_649(func_1103(iParam0)), 1);
			}
			else
			{
				func_650(78, func_649(func_1103(iParam0)), 1);
			}
		}
		else
		{
			func_650(80, func_649(func_1105(iParam0)), 1);
		}
	}
}

bool func_621()
{
	if (((((func_1106(839908568, 400) || func_1106(-1134030454, 400)) || func_1106(623353496, 400)) || func_1106(-344413337, 400)) || func_1106(-1664948962, 400)) || func_1106(1795228059, 400))
	{
		return true;
	}
	return false;
}

int func_622(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, int iParam7)
{
	iVar0 = func_729(iParam0, bParam6, iParam7);
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

void func_623(int iParam0)
{
	switch (iParam0)
	{
		case -625427311:
			func_598(51, 0, 0, 1520110311, 0, 0, 4, 0);
			func_600(51, 0, 0, 0, 0, -1, 0);
			func_1107(8192);
			break;
		case 581047644:
			func_598(51, 0, 0, -1992824800, 0, 0, 1, 0);
			func_600(51, 0, 0, 0, 0, -1, 0);
			func_1107(524288);
			break;
		case -644199619:
			func_598(39, 0, 0, 0, 0, 0, 1, 0);
			func_600(39, 0, 0, 0, 0, -1, 0);
			func_1108(16);
			break;
		case 684296857:
			func_598(41, 0, 0, 0, 0, 0, 1, 0);
			func_600(41, 0, 0, 0, 0, -1, 0);
			func_1109(8);
			break;
		case 466137807:
			func_598(49, 0, 0, 0, 0, 0, 1, 0);
			func_600(49, 0, 0, 0, 0, -1, 0);
			func_1110(16);
			break;
		case -1087522507:
			func_598(43, 0, 0, -1791518714, func_1111(1), 0, -1, 0);
			func_1112(1);
			break;
		case -405829000:
			func_598(43, 0, 0, -2087881550, func_1111(2), 0, -1, 0);
			func_1112(2);
			break;
		case 378660860:
			func_598(43, 0, 0, 1908068621, func_1111(4), 0, -1, 0);
			func_1112(4);
			break;
		case 1566111097:
			func_598(43, 0, 0, 1611247019, func_1111(8), 0, -1, 0);
			func_1112(8);
			break;
		case 1276007140:
			func_598(43, 0, 0, 1319635688, func_1111(16), 0, -1, 0);
			func_1112(16);
			break;
	}
}

void func_624(int iParam0)
{
	if (func_1113() == 1)
	{
		if (func_592(39))
		{
			func_329(342, 0);
		}
		else
		{
			func_329(343, 0);
			func_1108(1);
		}
	}
	if (func_1113() >= 30)
	{
		func_329(344, 0);
	}
	func_598(39, 0, 0, 0, 0, 0, -1, 0);
	func_600(39, 0, 0, func_1113(), 30, 1, 0);
}

void func_625(int iParam0)
{
	if (func_1114() == 1)
	{
		if (func_592(49))
		{
			func_329(409, 0);
		}
		else
		{
			func_329(410, 0);
			func_1110(1);
		}
	}
	if (func_1114() >= 10)
	{
		func_329(411, 0);
	}
	func_598(49, 0, 0, 0, 0, 0, -1, 0);
	func_600(49, 0, 0, func_1114(), 10, 1, 0);
}

void func_626(int iParam0)
{
	switch (iParam0)
	{
		case 1369162587:
			_0x3ea62e56f386c997(-949689219, 1);
			func_329(437, 0);
			func_329(440, 0);
			func_1115(-949689219, 444160793, &sVar0, 1, 0, 0);
			func_598(51, 0, 0, -949689219, sVar0, 0, -1, 0);
			func_600(51, 0, 0, sVar0, func_1073(-949689219, 20), 1, 0);
			func_1107(1);
			func_190(-748969569, 0, 0);
			break;
		case 1610047510:
			_0x3ea62e56f386c997(-1248968496, 1);
			func_1115(-1248968496, -1969404854, &sVar0, 1, 0, 0);
			func_598(51, 0, 0, -1248968496, sVar0, 0, -1, 0);
			func_600(51, 0, 0, sVar0, func_1073(-1248968496, 20), 1, 0);
			func_1107(8);
			break;
		case 1317879106:
			_0x3ea62e56f386c997(1706369307, 1);
			func_1115(1706369307, -832850511, &sVar0, 1, 0, 0);
			func_598(51, 0, 0, 1706369307, sVar0, 0, -1, 0);
			func_600(51, 0, 0, sVar0, func_1073(1706369307, 20), 1, 0);
			func_1107(64);
			break;
		case 1062444751:
			_0x3ea62e56f386c997(1520110311, 1);
			func_1115(1520110311, -100913452, &sVar0, 1, 0, 0);
			func_598(51, 0, 0, 1520110311, sVar0, 0, -1, 0);
			func_600(51, 0, 0, sVar0, func_1073(1520110311, 20), 1, 0);
			func_1107(512);
			break;
		case 754186760:
			_0x3ea62e56f386c997(-1992824800, 1);
			func_329(438, 0);
			func_1115(-1992824800, 905173572, &sVar0, 1, 0, 0);
			func_598(51, 0, 0, -1992824800, sVar0, 0, -1, 0);
			func_600(51, 0, 0, sVar0, func_1073(-1992824800, 20), 1, 0);
			func_1107(32768);
			break;
		default:
			func_329(439, 0);
			break;
	}
}

void func_627()
{
	if (chal_get_num_ranks_completed(-1278339625) < 2)
	{
		chal_add_goal_progress_int(-1278339625, -1316535105, 1);
	}
}

void func_628(int iParam0, int iParam1)
{
	iVar1 = 0;
	if (func_20() == -1)
	{
		if (!func_592(43))
		{
			if (iParam0 == 281887510)
			{
				func_329(348, 0);
			}
			else if (iParam0 == -164081697)
			{
				func_329(350, 0);
			}
			else if (iParam0 == -1161319399)
			{
				func_329(352, 0);
			}
			else if (iParam0 == 728781265)
			{
				func_329(400, 0);
			}
		}
		else if (func_602(iParam0, 412399755))
		{
			func_1116(-1791518714);
			if (func_1117() == 0)
			{
				func_370(0, 10);
				iVar1 = func_1118(iParam0, iParam1, 1);
				if (((iParam0 == 281887510 || iParam0 == -164081697) || iParam0 == -1161319399) || iParam0 == 728781265)
				{
					if (func_1119(iParam0) < func_1120(iParam0))
					{
						func_598(43, iParam0, iParam1, -1791518714, iVar1, 0, -1, 0);
						func_600(43, 0, 0, iVar1, 30, 1, 0);
					}
				}
			}
		}
		if (!func_592(44))
		{
			if (iParam0 == -222563712)
			{
				func_329(354, 0);
			}
			else if (iParam0 == 1794857344)
			{
				func_329(399, 0);
			}
			else if (iParam0 == 1952409553)
			{
				func_329(401, 0);
			}
		}
		else if (func_602(iParam0, 709057512))
		{
			func_1116(-2087881550);
			if (func_1117() == 1)
			{
				func_370(0, 10);
				iVar1 = func_1118(iParam0, iParam1, 2);
				if ((iParam0 == -222563712 || iParam0 == 1794857344) || iParam0 == 1952409553)
				{
					if (func_1119(iParam0) < func_1120(iParam0))
					{
						func_598(43, iParam0, iParam1, -2087881550, iVar1, 0, -1, 0);
						func_600(43, 0, 0, iVar1, 37, 1, 0);
					}
				}
			}
		}
		if (!func_592(45))
		{
			if (iParam0 == 2116770557)
			{
				func_329(359, 0);
			}
			else if (iParam0 == -651064726)
			{
				func_329(394, 0);
			}
			else if (iParam0 == -404270094)
			{
				func_329(395, 0);
			}
			else if (iParam0 == 2093126853)
			{
				func_329(398, 0);
			}
		}
		else if (func_602(iParam0, -1478961327))
		{
			func_1116(1908068621);
			if (func_1117() == 2)
			{
				func_370(0, 10);
				iVar1 = func_1118(iParam0, iParam1, 4);
				if (iParam0 == 2116770557)
				{
					if (!func_1121(_0x126cbebba46693cf(iVar0, 2114735110, 0)) >= 25)
					{
						func_1122(_0x126cbebba46693cf(iVar0, 2114735110, 0), 1);
						func_1071(48);
					}
					if (func_1119(iParam0) < func_1120(iParam0))
					{
						func_598(43, iParam0, iParam1, 1908068621, iVar1, 0, -1, 0);
						func_600(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
				else if ((iParam0 == -651064726 || iParam0 == -404270094) || iParam0 == 2093126853)
				{
					if (func_1119(iParam0) < func_1120(iParam0))
					{
						func_598(43, iParam0, iParam1, 1908068621, iVar1, 0, -1, 0);
						func_600(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
			}
		}
		if (!func_592(46))
		{
			if (iParam0 == 2085530337)
			{
				func_329(356, 0);
			}
			else if (iParam0 == -150591160)
			{
				func_329(402, 0);
			}
			else if (iParam0 == -323969289)
			{
				func_329(404, 0);
			}
			else if (iParam0 == 1504361882)
			{
				func_329(406, 0);
			}
		}
		else if (func_602(iParam0, -1238404098))
		{
			func_1116(1611247019);
			if (func_1117() == 3)
			{
				func_370(0, 10);
				iVar1 = func_1118(iParam0, iParam1, 8);
				if (((iParam0 == 2085530337 || iParam0 == -150591160) || iParam0 == -323969289) || iParam0 == 1504361882)
				{
					if (func_1119(iParam0) < func_1120(iParam0))
					{
						func_598(43, iParam0, iParam1, 1611247019, iVar1, 0, -1, 0);
						func_600(43, 0, 0, iVar1, 50, 1, 0);
					}
				}
			}
		}
		if (!func_592(47))
		{
			if (iParam0 == -1521783510)
			{
				func_329(396, 0);
			}
			else if (iParam0 == 1714875242)
			{
				func_329(397, 0);
			}
			else if (iParam0 == 927763737)
			{
				func_329(405, 0);
			}
			else if (iParam0 == 1019229063)
			{
				func_329(403, 0);
			}
		}
		else if (func_602(iParam0, 1160548794))
		{
			func_1116(1319635688);
			if (func_1117() == 4)
			{
				func_370(0, 10);
				iVar1 = func_1118(iParam0, iParam1, 16);
				if (((iParam0 == -1521783510 || iParam0 == 1714875242) || iParam0 == 927763737) || iParam0 == 1019229063)
				{
					if (func_1119(iParam0) < func_1120(iParam0))
					{
						func_598(43, iParam0, iParam1, 1319635688, iVar1, 0, -1, 0);
						func_600(43, 0, 0, iVar1, 25, 1, 0);
					}
				}
			}
		}
	}
}

void func_629(int iParam0)
{
	if (iParam0 == 2116770557)
	{
		if (!func_1121(_0x126cbebba46693cf(iVar0, 2114735110, 0)) >= 25)
		{
			func_1122(_0x126cbebba46693cf(iVar0, 2114735110, 0), 1);
			func_1071(48);
		}
	}
}

void func_630(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar0 = _0x126cbebba46693cf(iVar1, 678508515, -1160144609);
		if (func_351(func_1123(iVar0, 10), 1, 0))
		{
			if (bParam2)
			{
				func_1124(iParam0, iVar0, sVar2, iParam1, bParam2);
			}
			else
			{
				func_1125(iParam0, iVar0, bParam3);
			}
		}
		iVar1++;
	}
}

void func_631(int iParam0, int iParam1, int iParam2)
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
				func_622(0, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, iVar0);
				return;
			}
		}
	}
	switch (iParam0)
	{
		case 489075255:
			func_622(-949580860, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1394529493:
			func_622(-1171997683, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1262623627:
			func_622(-2140931002, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1124867377:
			func_622(-1116228267, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1790920086:
			func_622(2112896861, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -2001202686:
			func_622(-1915150712, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1111063991:
			func_622(994220262, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1576210101:
			func_622(-1388440107, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 675090918:
			func_622(-1531790128, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 355838765:
			func_622(1351791770, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -343824903:
			func_622(-161493966, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1142684684:
			func_622(668131102, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1243851340:
			if (!func_1126())
			{
				func_622(1330954593, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			}
			break;
		case -525490740:
			func_622(817681514, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1736635264:
			func_622(1404311868, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1302860970:
			func_622(-175152067, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -1027115192:
			func_622(-526915387, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -1064332555:
			func_622(101362741, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -1954478446:
			func_622(1458818027, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -518592739:
			func_622(-1957208512, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -2010073778:
			func_622(2066857461, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -700133011:
			func_622(803940201, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -1415414735:
			func_622(-1717765429, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case 2045548742:
			func_622(1379920914, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case 830381058:
			func_622(447209691, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
	}
}

void func_632(int iParam0)
{
	if (func_592(41))
	{
		func_329(363, 0);
	}
	else
	{
		func_329(362, 0);
	}
	switch (iParam0)
	{
		case 323124696:
			func_1127(-1865241121);
			func_1128(-642026005);
			func_1129(-642026005);
			func_370(0, 10);
			break;
		case -2108314374:
			func_1127(2117142684);
			func_1128(-940584364);
			func_1129(-940584364);
			func_370(0, 10);
			break;
		case -1193798153:
			func_1127(-1409326024);
			func_1128(1972645282);
			func_1129(1972645282);
			func_370(0, 10);
			break;
		case -787702678:
			func_1127(-641744968);
			func_1128(1667205433);
			func_1129(1667205433);
			func_370(0, 10);
			break;
		case -804542901:
			func_1127(-946988203);
			func_1128(1362715885);
			func_1129(1362715885);
			func_370(0, 10);
			break;
		case -1696275132:
			func_1127(-646136018);
			func_1128(1053540370);
			func_1129(1053540370);
			func_370(0, 10);
			break;
		case -161595323:
			func_1127(-955835837);
			func_1128(-1100103852);
			func_1129(-1100103852);
			func_370(0, 10);
			break;
		case -1114363619:
			func_1127(-179276075);
			func_1128(-1409869209);
			func_1129(-1409869209);
			func_370(0, 10);
			break;
		case -368407134:
			func_1127(-492711560);
			func_1128(-1760235357);
			func_1129(-1760235357);
			func_370(0, 10);
			break;
		case 1997759228:
			func_1127(1764383959);
			func_1128(-138366827);
			func_1129(-138366827);
			func_370(0, 10);
			break;
		case 1265573293:
			func_1127(317501533);
			func_1128(-1261163843);
			func_1129(-1261163843);
			func_370(0, 10);
			break;
		case -1030441283:
			func_1127(817753087);
			func_1128(-963523016);
			func_1129(-963523016);
			func_370(0, 10);
			break;
		case -1490884871:
			func_1127(576606016);
			func_1128(560825326);
			func_1129(560825326);
			func_370(0, 10);
			break;
		case -395458616:
			func_1127(814934957);
			func_1128(858269539);
			func_1129(858269539);
			break;
	}
}

void func_633(int iParam0, int iParam1)
{
	func_1130(iParam0, iParam1, &uVar0);
}

int func_634(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	if (iParam3 == -358215195)
	{
		Var0 = { func_693(iParam1, 1, 0) };
		iParam3 = func_694(Var0.f_4);
		if (iParam3 == -358215195)
		{
			return 0;
		}
	}
	if (!func_1131(iParam1, iParam2, func_681(iParam3, 1), bParam4, bParam9))
	{
		return 0;
	}
	func_1132(1, (func_20() == -1 && bParam5), 1);
	switch (iParam3)
	{
		case 1145151482:
		case 1742327865:
			if (bParam8 && iParam1 != &Global_1946804->f_57[func_681(iParam3, 1)])
			{
				func_692(31, 0, 0, 0, 0);
			}
			break;
		case 1108822547:
			if (func_1133(32768) && iParam1 != &Global_1946804->f_57[func_681(iParam3, 1)])
			{
				func_1134();
				func_692(22, iParam3, 256, 0, 0);
			}
			clear_ped_damage_decal_by_zone(iParam0, 2, "ALL");
			clear_ped_blood_damage_by_zone(iParam0, 2);
			break;
	}
	if (!bParam6)
	{
		if (bParam7)
		{
			func_692(22, iParam3, 0, 0, 0);
		}
		return 1;
	}
	iVar5 = func_1135(iParam3);
	if (is_ped_a_player(iParam0))
	{
		func_692(19, 0, iVar5, 0, 0);
		if ((iParam3 == 1742327865 || iParam3 == 1108822547) || iParam3 == 1145151482)
		{
			func_1136(0);
			func_1137(36, 0, 0);
		}
	}
	else
	{
		iVar5 |= 1;
		func_692(19, 0, iVar5, iParam0, 0);
	}
	return 1;
}

bool func_635(int iParam0, bool bParam1)
{
	Var3.f_9 = -1591664384;
	bVar17 = false;
	*iParam0 = 0;
	iVar18 = func_1097(get_player_ped(get_player_index()), 2, 1, 0);
	iVar19 = func_1097(get_player_ped(get_player_index()), 3, 1, 0);
	if (func_1138("ALL WEAPONS", &iVar0, &iVar1, -1591664384, 0))
	{
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (func_1139(&Var3, iVar2, iVar0, iVar1))
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
						func_1140(iVar0);
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
	func_1141();
	func_1142();
	func_1143();
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
	if (!func_582(iParam0, 0))
	{
		return 0;
	}
	return iParam0;
}

void func_650(int iParam0, int iParam1, bool bParam2)
{
	func_688(iParam0, &iVar0, &iVar1);
	if (!func_689(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_1144(iParam0, 1024))
	{
		return;
	}
	func_690(iVar0, iVar1);
	Global_1905944->f_22[iParam0]->f_3[0] = iParam1;
	Global_1905944->f_22[iParam0]->f_3[0]->f_1 = 2;
}

void func_651(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	func_688(iParam0, &iVar0, &iVar1);
	if (!func_689(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_1144(iParam0, 1024))
	{
		return;
	}
	func_690(iVar0, iVar1);
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
		if (!func_1145(iVar1))
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
	if (!func_582(iParam0, 0))
	{
		return false;
	}
	if (iParam1 < 1)
	{
		return false;
	}
	Var0 = { func_693(iParam0, 0, 1) };
	Var5 = { func_1091(iParam0, Var0, Var0.f_4, 0) };
	return func_1146(iParam0, &Var5, &Var0, iParam1, iParam2, 0);
}

void func_656(int iParam0)
{
	if (func_20() != -1)
	{
		return;
	}
	switch (func_606(iParam0))
	{
		case 81053684:
			if (iParam0 == -1623728698 && func_1147(81053684, 0) <= 0)
			{
				func_692(32, iParam0, 0, 0, 0);
			}
			break;
		case -2061583405:
			if (iParam0 == -1535516064 || iParam0 == -763730846)
			{
				func_692(32, iParam0, 0, 0, 0);
			}
			break;
		case -999503751:
			iVar0 = func_1148(iParam0);
			if (func_1149(iVar0))
			{
				func_1150(iVar0, (iVar0 >= 0 && iVar0 <= 5), 1);
			}
			else
			{
				func_692(30, iParam0, 0, 0, 0);
			}
			if (func_683() == -2125499975 || func_683() == -449205311)
			{
				switch (iParam0)
				{
					case 624063935:
					case 1160643979:
					case 1661121390:
						func_692(32, iParam0, 0, 0, 0);
						break;
				}
			}
			else if (func_683() == 1160113249)
			{
				switch (iParam0)
				{
					case -361635024:
						func_692(32, iParam0, 0, 0, 0);
						break;
				}
			}
			break;
		case -525676072:
			if (!func_1151(-525676072, 0))
			{
				if (func_1152(-525676072, &iVar1))
				{
					func_692(33, iVar1, 0, 0, 0);
				}
			}
			func_692(32, iParam0, 0, 0, 0);
			break;
	}
	if ((iParam0 == 899611344 || iParam0 == -1515874150) || iParam0 == -1185145312)
	{
		if (!func_1153(99217379))
		{
			func_634(Global_35, iParam0, 0, 99217379, 1, 1, 1, 0, 1, 1);
		}
		func_605(24);
		if (func_635(&iVar2, 0))
		{
			func_611(iVar2, 0, 0, 1, 3, 0, 752097756, 0);
		}
	}
}

void func_657(int iParam0)
{
	if (func_602(iParam0, 943695443))
	{
		func_1154(0, iParam0);
	}
	else if (func_602(iParam0, -2096528786))
	{
		func_1154(1, iParam0);
	}
	else if (func_602(iParam0, -1094167013))
	{
		func_1154(2, iParam0);
	}
	else if (func_602(iParam0, 1936654645))
	{
		func_1154(3, iParam0);
	}
	else if (func_602(iParam0, 1306489306))
	{
		func_1154(4, iParam0);
	}
	else if (func_602(iParam0, 435762317))
	{
		func_1154(5, iParam0);
	}
	else if (func_602(iParam0, 1259363210))
	{
		func_1154(6, iParam0);
	}
	else if (func_602(iParam0, 881398259))
	{
		func_1154(7, iParam0);
	}
	else if (func_602(iParam0, -541549214))
	{
		func_1154(8, iParam0);
	}
	else if (func_602(iParam0, 130796156))
	{
		func_1154(-1, iParam0);
	}
}

int func_658(int iParam0, int iParam1)
{
	Var4.f_1 = 10;
	func_1155(&Var4, 1356624740);
	return func_1156(iParam0, &Var4, &uVar0, iParam1);
}

struct<2> func_659(int iParam0)
{
	if (!func_582(iParam0, 0))
	{
		return Var0;
	}
	if (func_602(iParam0, -305066475))
	{
		if (func_20() == -1)
		{
			if (func_602(iParam0, -537818634))
			{
				return func_94(189951448);
			}
			else
			{
				return func_94(1176172851);
			}
		}
	}
	else if (func_602(iParam0, -537818634))
	{
		return func_94(-963660207);
	}
	if (func_602(iParam0, 2084895747))
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
				if (func_331((*Global_1835011)[4]->f_1, 1))
				{
					func_329(109, 1);
				}
			}
			break;
	}
}

void func_661(int iParam0, char* sParam1)
{
	sVar0 = func_1158(func_1157(0));
	func_712(_create_var_string(38, "ITEM_CAUGHT_PUMP", sParam1, sVar0), "inventory_items", func_1159(iParam0), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

void func_662(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (iParam0 == 1662813436)
	{
		return;
	}
	if (!func_582(iParam0, 0))
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
	if (!func_1160())
	{
		func_1161(iParam0, iParam1, bParam2, bParam4);
		return;
	}
	bVar0 = false;
	iVar1 = absi(iParam1);
	StringCopy(&cVar2, func_1162(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
	if (iParam1 > 0)
	{
	}
	else
	{
		if (bParam3 || bParam4)
		{
			StringCopy(&cVar2, func_1162(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
		}
		else if (bParam2 && func_603(iParam0, 2097152))
		{
			StringCopy(&cVar2, "ITEM_READ_PUMP_MULT", 32);
		}
		bVar0 = true;
	}
	iVar6 = func_601(iParam0);
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
	else if (!func_1163(iParam0, &Var7, iVar11, iVar10, 0, -401018458))
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
	sVar15 = func_1164(_create_var_string(10, &cVar2, _create_var_string(0, func_649(iParam0)), iVar1), iVar12);
	if (((((iParam1 == 1 || func_602(iParam0, 1443104131)) || iParam0 == -885810591) || iParam0 == -1424823393) || iParam0 == 1463786584) || iParam0 == 1358243310)
	{
		sVar15 = _create_var_string(0, func_649(iParam0));
	}
	func_712(sVar15, Var7.f_1, get_hash_key(Var7), iVar14, iVar12, "Transaction_Feed_Sounds", sVar13, 0, 1);
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
	if (!func_582(iParam0, 0))
	{
		return false;
	}
	if (iParam1 != 0 && !func_1165(iParam0, iParam1, 1))
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
				if (Var2.f_2 == 1644203656 && func_1165(iParam0, Var2, 1))
				{
					if (func_1166(iParam0, Var2))
					{
						bVar0 = true;
					}
				}
			}
			iVar49++;
		}
	}
	else if (func_1166(iParam0, iParam1))
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		if (!bParam2)
		{
			func_329(206, 0);
		}
	}
	if (bParam3)
	{
		if (!func_204(0, 0, 1))
		{
			func_370(1, 5);
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
		func_329(iVar0, 0);
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
			func_1167(0);
			_unlock_set_unlocked(-121456797, false);
			func_1168();
		}
		return;
	}
	if (!func_331((*Global_1835011)[4]->f_1, 1))
	{
		return;
	}
	func_1169();
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
	func_1167(1);
}

void func_671()
{
	if (!func_331((*Global_1835011)[4]->f_1, 1))
	{
		return;
	}
	if (_unlock_is_unlocked(304788622))
	{
		return;
	}
	func_322(1351927599, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
			func_1170(0);
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
	if (!func_331((*Global_1835011)[4]->f_1, 1))
	{
		return;
	}
	_unlock_set_unlocked(1244328330, true);
	func_1170(1);
}

void func_673()
{
	bVar0 = is_dlc_present(-1499823613);
	if (!bVar0)
	{
		if (_unlock_is_unlocked(398807247))
		{
			func_1171(15000, 0, 0, 0, 1);
			func_1170(0);
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
	if (!func_331((*Global_1835011)[4]->f_1, 1))
	{
		return;
	}
	_unlock_set_unlocked(398807247, true);
	func_287(15000, 0, 1065353216, 1, 0, 0, 1, 752097756);
	func_1170(1);
}

void func_674()
{
	bVar0 = is_dlc_present(-679138445);
	if (bVar0)
	{
		if (_0xf83d3dda4d3c8169(-1491419385) > 0)
		{
			if ((!func_351(1191437462, 1, 0) && !func_198((*Global_1835011)[23]->f_1)) && !Global_43891)
			{
				func_322(1191437462, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			}
			if (!func_1172(1))
			{
				func_646(1);
			}
		}
		if (_0xf83d3dda4d3c8169(1809565830) > 0)
		{
			if ((!func_351(1119149048, 1, 0) && !func_198((*Global_1835011)[23]->f_1)) && !Global_43891)
			{
				func_322(1119149048, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			}
			if (!func_1172(2))
			{
				func_646(2);
			}
		}
		if (_0xf83d3dda4d3c8169(2056119786) > 0 && !func_1172(4))
		{
			func_646(4);
		}
		if (func_1172(0))
		{
			func_1173(0);
		}
	}
	else
	{
		if (_0xf83d3dda4d3c8169(-1491419385) > 0)
		{
			if (func_351(1191437462, 1, 0))
			{
				func_677(1191437462, 1, 1, -142743235, 0);
			}
		}
		if (_0xf83d3dda4d3c8169(1809565830) > 0)
		{
			if (func_351(1119149048, 1, 0))
			{
				func_677(1119149048, 1, 1, -142743235, 0);
			}
		}
		if (func_1172(1))
		{
			func_1173(1);
		}
		if (func_1172(2))
		{
			func_1173(2);
		}
		if (func_1172(4))
		{
			func_1173(4);
		}
		if (!func_1172(0))
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
	if (!func_331((*Global_1835011)[4]->f_1, 1))
	{
		return;
	}
	if (_unlock_is_unlocked(-236259196))
	{
		return;
	}
	Var1 = { func_1174() };
	if (!_0xb881ca836cc4b6d4(&Var1))
	{
		func_609(127400949);
		if (func_611(127400949, 0, 0, 0, 0, 0, 752097756, 0))
		{
			Var1 = { func_1174() };
		}
	}
	if (_0xb881ca836cc4b6d4(&Var1))
	{
		func_1175(-2055673461, Var1, 1423542233);
		func_1175(-202131179, Var1, -1264898804);
		func_1175(2013836545, Var1, 1592019450);
		func_1175(1497476650, Var1, 1117400455);
		func_1175(1063571467, Var1, 1150213537);
		func_1175(2107224237, Var1, 1598825281);
		func_1175(1747981656, Var1, -712527121);
		func_1175(-1371140647, Var1, 454332195);
		func_1175(-19142973, Var1, 256105670);
		func_1175(-2074737817, Var1, -1328061889);
		func_1175(-1114256243, Var1, -782241404);
		func_1175(-1653277288, Var1, 1669853467);
		func_1175(1869398132, Var1, -1559225678);
		func_1175(459868358, Var1, -266425508);
		if (!_0x3ab6c7b0bb0df4b1(Global_35, -1) && !func_29())
		{
			get_current_ped_weapon(Global_35, &iVar15, false, 2, false);
			get_current_ped_weapon(Global_35, &iVar16, false, 0, false);
			if (func_696(iVar16))
			{
				if (iVar16 != 127400949)
				{
					if (_is_weapon_one_handed(iVar16))
					{
						if (func_604(24))
						{
							set_current_ped_weapon(Global_35, iVar16, true, 3, false, false);
						}
						set_current_ped_weapon(Global_35, 127400949, true, 0, false, false);
					}
					else if (_is_weapon_two_handed(iVar16))
					{
						if ((func_604(24) && func_696(iVar15)) && iVar15 != 127400949)
						{
							set_current_ped_weapon(Global_35, iVar15, true, 3, false, false);
						}
						set_current_ped_weapon(Global_35, 127400949, true, 2, false, false);
					}
				}
			}
			else if (!func_696(iVar15))
			{
				set_current_ped_weapon(Global_35, 127400949, true, 2, false, false);
			}
			else if (iVar15 != 127400949)
			{
				if (func_604(24))
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
	if (!func_582(iParam0, 0))
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
	if (!func_351(iParam0, 1, bParam4))
	{
		return 0;
	}
	Var5 = { func_659(iParam0) };
	if (_stat_id_is_valid(&Var5))
	{
		if ((func_586(iParam0, 0, 0) - iParam1) >= 0)
		{
			_0xbd861ae8a5181ed7(&Var5, iParam1);
		}
		else if ((func_586(iParam0, 0, 0) - iParam1) < 0)
		{
			func_677(iParam0, func_586(iParam0, 0, 0), bParam2, iParam3, bParam4);
			return 0;
		}
	}
	if (func_601(iParam0) == -427144552)
	{
		if (!func_1176(iParam0, iParam1, 0, iParam3))
		{
			return 0;
		}
	}
	else if (!func_1177(iParam0, iParam1, iParam3, bParam2, bParam4))
	{
		return 0;
	}
	if (iParam0 == -569063887)
	{
		Global_1935496->f_20 = 0;
	}
	if (!func_610(0))
	{
		bParam2 = true;
	}
	if (!bParam2 && iParam0 != 1309979101)
	{
		func_662(iParam0, -iParam1, bVar0, bVar1, bVar2);
	}
	func_1178(iParam0, iParam1);
	return 1;
}

bool func_678(int iParam0)
{
	switch (func_606(iParam0))
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
	switch (func_606(iParam0))
	{
		case -2061583405:
			bVar0 = func_1179(iParam0, &(Global_1946804->f_2657.f_21));
			break;
		case 81053684:
			bVar0 = func_1179(iParam0, &(Global_1946804->f_2657.f_23));
			break;
		case -999503751:
			bVar0 = func_1179(iParam0, &(Global_1946804->f_2657.f_20));
			break;
		case -525676072:
			bVar0 = func_1179(iParam0, &(Global_1946804->f_2657.f_22));
			break;
		case -1719060085:
			bVar0 = func_1179(iParam0, &(Global_1946804->f_2657.f_24));
			break;
		case -413129408:
			bVar0 = func_1179(iParam0, &(Global_1946804->f_2657.f_25));
			break;
	}
	if (!bVar0)
	{
		return;
	}
	if (bParam2)
	{
		func_1180();
	}
	if (bParam1)
	{
		func_1181(0, 0);
	}
}

int func_680(int iParam0)
{
	Var0 = { func_693(iParam0, 1, 0) };
	return func_694(Var0.f_4);
}

int func_681(int iParam0, int iParam1)
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

void func_682(int iParam0)
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
		iVar0 = func_681(iVar1, 1);
		if (iVar0 < 0 || iVar0 >= 39)
		{
		}
		else
		{
			func_1182(Global_1946804->f_1378.f_1[iVar0], 2, 6);
		}
	}
}

int func_683()
{
	return Global_1946804->f_1;
}

bool func_684(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)
{
	Var4 = func_1183(iParam6);
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
		func_1185(uParam0, func_1184(iVar0), 1);
	}
	while (_0xed4413cee1bf142c(&Var4))
	{
		if (!_0x44b3a36933ac009c(&iVar0, &Var4, 1409451727))
		{
		}
		else
		{
			iVar3 = iVar0;
			iVar1 = func_681(iVar3, 1);
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
							if (func_1186(iVar3) && func_1187(&(uParam0->f_1[iVar1]), iVar3, &iVar0))
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
							func_1188(uParam0, &(uParam0->f_1[&Global_1946804->f_2612[iVar1]]), &(Global_1946804->f_2612[iVar1]), 0, 0);
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

Vector3 func_685(int iParam0, int iParam1)
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

int func_686(int iParam0, int iParam1)
{
	vVar0 = { func_685(iParam0, iParam1) };
	return vVar0.x;
}

void func_687(var uParam0, int iParam1, int iParam2)
{
	*Global_26796.f_26[iParam2]->f_1.f_1[iParam1] = { *uParam0 };
	Global_26796.f_26[iParam2]->f_1.f_1[iParam1]->f_2 = (Global_26796.f_26[iParam2]->f_1.f_1[iParam1]->f_2 - Global_26796.f_26[iParam2]->f_1.f_1[iParam1]->f_2 & 1);
}

void func_688(int iParam0, int iParam1, int iParam2)
{
	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

bool func_689(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return false;
	}
	if (func_1189(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_1190(iParam0))
	{
		return false;
	}
	if (func_1191(iParam0))
	{
		return false;
	}
	if ((Global_1898164->f_163 && !func_1144(iParam0, 1)) || func_82(32768))
	{
		if (!func_1144(iParam0, 262144) || !Global_1905944->f_5696)
		{
			return false;
		}
	}
	if (!func_1192())
	{
		return false;
	}
	return true;
}

void func_690(int iParam0, int iParam1)
{
	uVar0 = Global_1905944[iParam0];
	set_bit(&uVar0, iParam1);
	(*Global_1905944)[iParam0] = uVar0;
}

void func_691(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 = (uParam0->f_2 - (uParam0->f_2 && iParam1));
}

void func_692(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (bParam4)
	{
		func_1193(16384);
	}
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	Var0.f_2 = iParam2;
	Var0.f_3 = iParam3;
	func_1194(Var0);
}

struct<5> func_693(int iParam0, bool bParam1, bool bParam2)
{
	Var0 = { func_1195(bParam1) };
	Var0.f_4 = 1084182731;
	switch (func_601(iParam0))
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
			Var0 = { func_1196(bParam1) };
			if (bParam2 && func_1197(iParam0, 1))
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
			Var0 = { func_1198(bParam1) };
			switch (func_606(iParam0))
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
			if (func_1199(iParam0, -1823706425))
			{
				Var0 = { func_1091(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, -1838434463);
			}
			else if (func_1199(iParam0, -1483207246))
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
				if (!func_1200(Var0, &Var27, bParam1, 0))
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

int func_694(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (Global_1946804->f_57[iVar0]->f_8 == iParam0)
		{
			return func_1201(iVar0, 1);
		}
		iVar0++;
	}
	return -358215195;
}

void func_695(int iParam0)
{
	func_1182(Global_1946804->f_1497.f_1[func_681(iParam0, 1)], 2, 6);
	func_1182(Global_1946804->f_1378.f_1[func_681(iParam0, 1)], 2, 6);
}

bool func_696(int iParam0)
{
	return (is_weapon_valid(iParam0) && iParam0 != -1569615261);
}

bool func_697(int iParam0)
{
	return iParam0 != 0;
}

int func_698(int iParam0)
{
	iVar0 = -1;
	if (!func_697(iParam0))
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

bool func_699(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

int func_700(int iParam0)
{
	return (shift_right(iParam0, 26) & 31 * func_1202(is_bit_set(iParam0, 31), -1, 1)) + 1898;
}

int func_701(int iParam0)
{
	return shift_right(iParam0, 22) & 15;
}

int func_702(int iParam0)
{
	return shift_right(iParam0, 17) & 31;
}

int func_703(int iParam0)
{
	return shift_right(iParam0, 12) & 31;
}

int func_704(int iParam0)
{
	return shift_right(iParam0, 6) & 63;
}

int func_705(int iParam0)
{
	return shift_right(iParam0, 0) & 63;
}

int func_706(int iParam0, int iParam1)
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

void func_707(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_1203(iParam0, iParam6);
	func_1204(iParam0, iParam5);
	func_1205(iParam0, iParam4);
	func_1206(iParam0, iParam3);
	func_1207(iParam0, iParam2);
	func_1208(iParam0, iParam1);
}

bool func_708(int iParam0)
{
	if (iParam0 == -15)
	{
		return false;
	}
	iVar0 = func_705(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return false;
	}
	iVar1 = func_704(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return false;
	}
	iVar2 = func_703(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return false;
	}
	iVar3 = func_700(iParam0);
	if ((iVar3 <= 0 || iVar3 > 1930) || iVar3 < 1866)
	{
		return false;
	}
	iVar4 = func_701(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return false;
	}
	iVar5 = func_702(iParam0);
	if (iVar5 < 1 || iVar5 > func_706(iVar4, iVar3))
	{
		return false;
	}
	return true;
}

bool func_709(int iParam0, bool bParam1)
{
	return func_1044(func_289(), iParam0, bParam1);
}

void func_710(var uParam0, int iParam1)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

bool func_711(int iParam0, int iParam1)
{
	if (!func_582(iParam0, 0))
	{
		return false;
	}
	if (Global_1935630->f_12)
	{
		return false;
	}
	iVar0 = func_1067(iParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_1138("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_1139(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_696(Var4.f_4))
			{
			}
			else if (_get_ammo_type_for_weapon(Var4.f_4) == iVar0)
			{
				func_1140(iVar1);
				return true;
			}
			iVar3++;
		}
		func_1140(iVar1);
	}
	return false;
}

var func_712(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
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
	func_1209(sParam0, sParam1, iParam2);
	return uVar20;
}

int func_713()
{
	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar2 = func_1210(iVar1);
		if (!_unlock_is_visible(func_1211(iVar2)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_714()
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		iVar1 = func_1210(iVar0);
		if (!_unlock_is_visible(func_1211(iVar1)))
		{
			_unlock_set_visible(func_1211(iVar1), true);
		}
		iVar0++;
	}
}

bool func_715(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_485(iParam0))
		{
			return false;
		}
	}
	return (Global_40.f_4942[iParam0] && iParam1) != 0;
}

bool func_716()
{
	return (func_205(&Global_1935630, 4096) || _get_number_of_references_of_script_with_name_hash(1637780761) > 0);
}

int func_717(var uParam0, int iParam1, int iParam2, int iParam3)
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
	if (!func_582(iVar0, 0))
	{
		return 0;
	}
	if (!func_1212(iVar0))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	iVar3 = 1;
	func_1213(iVar0, iVar1, &iVar3, 0);
	iVar4 = (iVar2 * iVar3);
	if (func_602(iVar0, 58855631))
	{
		iVar4 = iVar2;
	}
	Var5 = { func_693(iVar0, 0, 1) };
	iVar10 = func_1214(iVar0, &Var5, 0, 0);
	if (iVar10 == 0)
	{
		return 0;
	}
	else if (iVar10 < iVar4)
	{
		iVar2 = ceil((to_float(iVar10) / to_float(iVar3)));
		iVar4 = iVar10;
	}
	iVar11 = (func_1215(iVar0, iVar1, 1, 0, 0) * iVar2);
	if (iVar11 <= 0)
	{
		return 0;
	}
	if (!func_1216(iVar11))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	if (!func_322(iVar0, iVar4, 1, 0, 0, 1248274121, 0, 0, 0, 0))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	func_1171(iVar11, 0, 0, 0, 1);
	*iParam3 = (*iParam3 + iVar11);
	*iParam1 = (*iParam1 + iVar2);
	return 1;
}

var func_718(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
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

void func_719(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (is_string_null_or_empty(sParam1))
	{
		sParam1 = "FEED_MONEY_SPEND";
	}
	func_712(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 1831944558, 1, 859817522, 0, 0, 0, 1);
}

var func_720(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

void func_721(bool bParam0, bool bParam1)
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

void func_722(int iParam0, int iParam1, float fParam2, int iParam3)
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
	_0xe6dc9b21ac7a8729(func_200(iParam0), iVar3, iVar1, iParam3);
	iVar4 = func_276(iParam0);
	if (func_202(iParam0) != 1 || (iVar4 != 37 && iVar4 != 58))
	{
		_uilog_add_total_take_entry(-1391579956, 1997120069, _create_var_string(2, "MISSION_COMPLETE_TAKE_ARTHUR"), _create_var_string(2, "MISSION_COMPLETE_TAKE_AMOUNT", iVar3), 601389479);
	}
	switch (func_202(iParam0))
	{
		case 1:
			switch (iVar4)
			{
				case 25:
					func_1217(1, iVar1);
					func_1217(8, iVar1);
					func_1217(7, iVar1);
					break;
				case 12:
					func_1217(6, iVar1);
					break;
				case 53:
					func_1217(3, iVar1);
					func_1217(7, iVar1);
					func_1217(4, iVar1);
					break;
				case 20:
					func_1217(8, iVar1);
					break;
				case 19:
					func_1217(1, iVar1);
					func_1217(2, iVar1);
					break;
				case 24:
					func_1217(3, iVar1);
					func_1217(9, iVar1);
					func_1217(20, iVar1);
					break;
				case 28:
					func_1217(1, iVar1);
					break;
				case 34:
					func_1217(23, iVar1);
					func_1217(2, iVar1);
					func_1217(18, iVar1);
					break;
				case 29:
					func_1217(0, iVar1);
					func_1217(9, iVar1);
					break;
				case 37:
					break;
				case 58:
					break;
				case 57:
					func_1217(0, iVar1);
					func_1217(3, iVar1);
					func_1217(2, iVar1);
					func_1217(11, iVar1);
					func_1217(6, iVar1);
					func_1217(25, iVar1);
					func_1217(24, iVar1);
					break;
			}
			break;
		case 8:
			switch (iVar4)
			{
				case 94:
					func_1217(5, iVar1);
					break;
				case 63:
					func_1217(1, iVar1);
					func_1217(3, iVar1);
					break;
				case 37:
					func_1217(23, iVar1);
					break;
				case 116:
					break;
			}
			break;
		case 11:
			if (iParam0 == func_366(0, 10, 11, 2116153146))
			{
				func_1217(7, iVar1);
				func_1217(4, iVar1);
			}
			else if (iParam0 == func_366(0, 7, 11, -379687487))
			{
				func_1217(8, iVar1);
				func_1217(15, iVar1);
			}
			else if (iParam0 == func_366(0, 8, 11, -1386089015))
			{
				func_1217(3, iVar1);
			}
			else if (iParam0 == func_366(0, 11, 11, -1952009645))
			{
				func_1217(6, iVar1);
				func_1217(3, iVar1);
			}
			else if (iParam0 == func_366(0, 12, 11, 2065895756))
			{
				func_1217(9, iVar1);
			}
			break;
	}
	_uilog_set_total_take_summary(_create_var_string(2, "MISSION_COMPLETE_TAKE_TOTAL", iParam1), _create_var_string(2, "MISSION_COMPLETE_TAKE_TOTAL_GANG", func_1218()));
	if (!func_1219(629))
	{
		func_329(629, 0);
	}
}

int func_723(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_3;
	}
	return 0;
}

bool func_724(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 17)
	{
		return false;
	}
	return true;
}

bool func_725(int iParam0, int iParam1, var uParam2)
{
	if (!func_724(iParam0))
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

int func_726()
{
	if (Global_1572887->f_12 == -1)
	{
		return 771;
	}
	return 20001;
}

int func_727(int iParam0, int iParam1, int iParam2)
{
	return ((iParam2 & 31 || shift_left(iParam0 & 1023, 5)) || shift_left(iParam1 & 16383, 15));
}

int func_728(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (!func_1220(iParam2))
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
	if (iParam3 < 0 || iParam3 > func_726())
	{
		return -1;
	}
	iVar0 = func_727(iParam0, iParam1, iParam2);
	iVar1 = iParam3;
	func_498(iVar1, 0);
	func_561(iVar1, 0);
	func_1221(iVar1, 0);
	func_1222(iVar1, 0);
	func_1223(iVar1, iVar0);
	if (iParam4 != 0)
	{
		func_1224(iVar1, iParam4);
	}
	return iVar1;
}

int func_729(int iParam0, bool bParam1, int iParam2)
{
	if (iParam2 != -1)
	{
		return iParam2;
	}
	fVar0 = 1f;
	if (bParam1 && func_351(1811977508, 1, 0))
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
			if (func_582(iVar25, 0) && func_602(iVar25, -1921346699))
			{
				return ceil((IntToFloat(&Var1.f_12[iVar24]) * fVar0));
			}
		}
		iVar24++;
	}
	return 0;
}

void func_730(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

int func_731(int iParam0)
{
	if (!func_197(iParam0))
	{
		return 0;
	}
	cVar0 = func_368(iParam0);
	if (is_string_null_or_empty(&cVar0))
	{
		return 0;
	}
	iVar1 = get_hash_key(&cVar0);
	iVar2 = iVar1;
	return iVar2;
}

bool func_732(int iParam0)
{
	return _0x4dac398297981b87(iParam0);
}

Vector3 func_733(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, bool bParam13)
{
	fVar2 = 9999999f;
	func_1225(&bVar12, &uVar13);
	bVar14 = false;
	if (bVar12)
	{
		if (func_1226() == 0 && !func_1227(0))
		{
			bVar14 = true;
		}
	}
	if (!func_1228(15, &Var15))
	{
		return 0f, 0f, 0f;
	}
	_0x748c5f51a18cb8f0(0);
	Var20 = { Var15 };
	if (bParam7)
	{
		bVar10 = func_1229();
		if (_does_volume_exist(bVar10))
		{
		}
	}
	if (!func_1230(Global_1310720->f_21))
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
			vVar7 = { func_1231(iVar0, iVar1) };
			bVar11 = func_1232(iVar0, iVar1);
			bVar3 = vdist(vParam0, vVar7);
			if (((((bVar3 < fVar2 && bVar3 > bParam10) && !func_399(vVar7)) && func_1233(iVar0, bParam8, iParam12)) && !func_1234(iVar0)) || bVar11)
			{
				if (func_1235(vVar7, iVar0, iVar1, iParam5, iParam6, bVar14, bVar10, bParam9, bParam13))
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

int func_734(vector3 vParam0, bool bParam3)
{
	iVar0 = func_1236(vParam0);
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

void func_735()
{
	disable_script_brain_set(1);
}

void func_736()
{
}

void func_737()
{
	disable_script_brain_set(2);
}

bool func_738(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_739(char* sParam0)
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

void func_740(int iParam0)
{
	if (func_738(iParam0, 1))
	{
		func_1237(1);
	}
}

int func_741()
{
	return -1904156936;
}

bool func_742(int iParam0)
{
	if (!func_197(iParam0))
	{
		return false;
	}
	switch (func_202(iParam0))
	{
		case 1:
			iVar0 = func_276(iParam0);
			return (((((((((((((iVar0 == 38 || iVar0 == 39) || iVar0 == 43) || iVar0 == 0) || iVar0 == 1) || iVar0 == 3) || iVar0 == 4) || iVar0 == 60) || iVar0 == 59) || iVar0 == 77) || iVar0 == 64) || iVar0 == 44) || iVar0 == 42) || iVar0 == 67);
		case 8:
			iVar1 = func_276(iParam0);
			return (((iVar1 == 67 || iVar1 == 82) || iVar1 == 83) || iVar1 == 1);
	}
	return false;
}

int func_743()
{
	return 166188472;
}

int func_744()
{
	return 2015838421;
}

int func_745()
{
	return 207908017;
}

var func_746(var uParam0, char* sParam1, var uParam2, int iParam3, int iParam4)
{
	vVar0.x = iParam3;
	vVar0.f_1 = sParam1;
	vVar0.f_2 = uParam2;
	uVar3 = _0x9f2cc2439a04e7ba(uParam0, &vVar0, iParam4);
	return uVar3;
}

var func_747(var uParam0, char* sParam1, int iParam2, int iParam3)
{
	Var0 = iParam2;
	Var0.f_1 = sParam1;
	uVar3 = _0x815c4065ae6e6071(uParam0, &Var0, iParam3);
	return uVar3;
}

void func_748(var uParam0)
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

int func_749(var uParam0, int iParam1)
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

char* func_750(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return "";
	}
	if (is_entity_a_ped(iParam0))
	{
		return func_1238(get_ped_index_from_entity_index(iParam0));
	}
	else if (is_entity_an_object(iParam0))
	{
		return func_1239(get_object_index_from_entity_index(iParam0));
	}
	else if (is_entity_a_vehicle(iParam0))
	{
		return func_1240(get_vehicle_index_from_entity_index(iParam0));
	}
	return "";
}

int func_751(var uParam0, char* sParam1)
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

int func_752(var uParam0)
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

void func_753(var uParam0, int iParam1)
{
	uParam0->f_2054 = (uParam0->f_2054 || iParam1);
}

void func_754(var uParam0, int iParam1)
{
	uParam0->f_8 = (uParam0->f_8 || iParam1);
}

int func_755()
{
	return Global_1572864->f_8;
}

void func_756(char[4] cParam0, int iParam1)
{
	func_1241(cParam0, iParam1);
	func_1242(cParam0, iParam1, 26);
}

bool func_757(char[4] cParam0)
{
	func_904(iLocal_249, -1555.625f, -1443.175f, 92.50795f, 322.1384f, 2, 1073741824);
	task_stand_still(iLocal_249, -1);
	func_904(iLocal_251, -1543.2f, -1442.799f, 92.9316f, 298.0643f, 2, 1073741824);
	task_stand_still(iLocal_251, -1);
	if (func_120(cParam0, 4))
	{
		set_clock_time(10, 0, 0);
	}
	func_928(471442861, 0, 0f, 0, 1, 0, 0, 0);
	func_928(410623597, 1, 0f, 0, 0, 0, 0, 0);
	func_928(1333038182, 1, 0f, 0, 0, 0, 0, 0);
	func_1243(64);
	func_1244(vLocal_1511, 150f, 0, 0, 0, 0, 0);
	return cParam0->f_607 == cParam0->f_607;
}

bool func_758(char[4] cParam0)
{
	if (!func_962(cParam0))
	{
		func_904(&(uLocal_239[0]), -1552.124f, -1453.289f, 93.8884f, 342.05f, 2, 1073741824);
	}
	return cParam0->f_607 == cParam0->f_607;
}

bool func_759(char[4] cParam0)
{
	set_blocking_of_non_temporary_events(&(uLocal_239[0]), false);
	uLocal_1824 = func_925(&(iLocal_1784[12]), 0, 0, 0);
	func_172(cParam0, 1);
	func_227(vLocal_1551[21]);
	return cParam0->f_607 == cParam0->f_607;
}

int func_760(char[4] cParam0)
{
	func_1245(cParam0);
	func_1246(&(uLocal_239[0]), vLocal_1551[36]);
	if (_0x8a3945405b31048f() > 0.1f)
	{
		func_1247(0.1f);
	}
	_0xab0d553fe20a6e25(0.1f);
	if (func_1248(cParam0) >= 2)
	{
		func_1249(cParam0);
	}
	if (func_1250(Global_35, vLocal_1511, 1) >= 50f)
	{
		if (!func_394(iVar1682, 16777216))
		{
			func_1251(&(uLocal_239[0]), iLocal_249, get_ped_group_index(Global_35));
		}
	}
	else
	{
		func_59(7);
		if (!is_ped_group_member(&(uLocal_239[0]), get_ped_group_index(Global_35), 0))
		{
			set_ped_config_flag(&(uLocal_239[0]), 279, true);
			set_ped_as_group_member(&(uLocal_239[0]), get_ped_group_index(Global_35));
		}
		if (get_ped_config_flag(&(uLocal_239[0]), 167, true))
		{
			set_ped_config_flag(&(uLocal_239[0]), 167, false);
		}
	}
	if (func_186(iLocal_243, 0))
	{
		if (!_does_scenario_point_exist(iVar1825))
		{
			iLocal_1828 = _find_closest_active_scenario_point_of_type(-869.4094f, -1313.978f, 42.4649f, -1426662425, 1f, 0, false);
		}
	}
	get_closest_vehicle_node(get_entity_coords(Global_35, true, false), &vVar0, 1, 3f, 0f);
	if (func_1250(Global_35, vVar0, 1) <= 30f)
	{
		if (does_blip_exist(iVar1502))
		{
			_blip_set_modifier(iVar1502, -1878373110);
		}
	}
	if (!func_186(&(uLocal_239[1]), 0))
	{
		func_896(cParam0, 11, uLocal_239[1], 0, -817.699f, -1304.955f, 42.55689f, 0, 1, 0, 0, 0, 1, 0);
	}
	else if (!func_394(iVar1681, 262144))
	{
		func_917(cParam0, 1);
		func_420(&uLocal_1684, 262144);
		set_entity_coords(&(uLocal_239[1]), -817.699f, -1304.955f, 42.55689f, true, false, true, true);
		_set_entity_something(&(uLocal_239[1]), true);
	}
	if (!does_entity_exist(iLocal_250))
	{
		iLocal_250 = func_1252(11, 1, 1, 0, 0, 1, 1, 1, 1, -813.6848f, -1305.152f, 43.8067f, 263.5501f, 0, 0, 0, 0);
	}
	if (func_1248(cParam0) >= 1 && func_1250(Global_35, vLocal_1511, 1) >= 50f)
	{
		if (!func_972(player_id(), 1, 0, 1))
		{
			if (func_1253(cParam0, iLocal_249, 1125515264, 0, 1, 1, -1925605092, 1084227584, 1103626240))
			{
				if (!func_394(iVar1683, 512))
				{
					func_420(&uLocal_1686, 512);
				}
				if (does_blip_exist(iVar1502))
				{
					_blip_set_modifier(iVar1502, -1186550032);
					_set_blip_flash_style(iVar1502, -1878373110);
				}
			}
			else if (func_394(iVar1683, 512))
			{
				if (does_blip_exist(iVar1502))
				{
					_set_blip_flash_style(iVar1502, -1186550032);
					_blip_set_modifier(iVar1502, -1878373110);
				}
				func_1254(&uLocal_1686, 512);
			}
		}
	}
	switch (func_1248(cParam0))
	{
		case 0:
			if (_is_ped_getting_into_a_mount_seat(Global_35, true))
			{
				func_1255(&(uLocal_239[0]));
				if (!is_ped_group_member(&(uLocal_239[0]), get_ped_group_index(Global_35), 0))
				{
					set_ped_config_flag(&(uLocal_239[0]), 279, true);
					set_ped_as_group_member(&(uLocal_239[0]), get_ped_group_index(Global_35));
				}
				set_group_formation(get_ped_group_index(Global_35), 9);
				set_ped_config_flag(&(uLocal_239[0]), 167, true);
				func_178(7, 32);
				func_135(cParam0, 2);
				func_134(cParam0, 1);
			}
			break;
		case 1:
			if (((does_blip_exist(iVar1502) && func_1250(Global_35, vLocal_1511, 1) <= 110f) && func_1256(cParam0)) && func_1257())
			{
				func_928(471442861, 0, 0f, 0, 1, 0, 0, 0);
				func_134(cParam0, 2);
			}
			break;
		case 2:
			if (does_blip_exist(iVar1502) && func_1250(Global_35, vLocal_1511, 1) <= 110f)
			{
				iLocal_61 = 2;
				func_134(cParam0, 3);
			}
			break;
		case 3:
			if (func_1258(&(uLocal_239[0]), &(iLocal_1784[13]), 1, 0) && has_entity_clear_los_to_entity(&(uLocal_239[0]), iLocal_243, 17))
			{
				if (!func_1259(&(uLocal_239[0]), -875674219))
				{
					task_turn_ped_to_face_entity(&(uLocal_239[0]), iLocal_243, -1, -1082130432, -1082130432, -1082130432);
				}
			}
			if (func_186(iLocal_243, 0))
			{
				set_ped_reset_flag(iLocal_243, 49, true);
			}
			if (!func_394(iVar1682, -2147483648))
			{
				if (does_entity_exist(&(iLocal_1406[17])))
				{
					if (func_1260(cParam0))
					{
						func_420(&uLocal_1685, -2147483648);
					}
				}
			}
			if (func_394(iVar1681, 131072))
			{
				if (func_1250(Global_35, vLocal_1511, 1) <= 15f)
				{
					if (!func_26(vLocal_1551[1]))
					{
						func_27(vLocal_1551[1], 0);
					}
					func_172(cParam0, 0);
					if (!func_394(iVar1683, 1024))
					{
						if (func_1261(vLocal_1551[1], 30f))
						{
							func_11(&iLocal_1833, 1, 1);
							set_ped_config_flag(iLocal_243, 297, false);
							if (func_1262(cParam0, "SAD3_INT_LI", 0))
							{
								iLocal_61 = 4;
							}
							_0xe98d55c5983f2509(iLocal_243);
							func_134(cParam0, 29);
						}
					}
				}
				else if (func_26(vLocal_1551[1]))
				{
					func_557(vLocal_1551[1]);
				}
			}
			if (func_1263(Global_35, vLocal_1511, vLocal_1551[8], 100f, 1106247680, 15f, 12f, 1f, 0, 1, 1, 1, 1) || (!is_ped_on_mount(Global_35) && func_1250(Global_35, vLocal_1511, 1) <= 15f))
			{
				if (!func_394(iVar1682, 16777216))
				{
					func_420(&uLocal_1685, 16777216);
				}
				if (get_ped_config_flag(&(uLocal_239[0]), 167, true))
				{
					set_ped_config_flag(&(uLocal_239[0]), 167, false);
				}
				set_group_formation(get_ped_group_index(Global_35), 0);
				set_ped_config_flag(&(uLocal_239[0]), 167, false);
				_0xbd62d98799a3daf0(iVar1502, 422991367);
				_blip_set_modifier(iVar1502, -401963276);
				func_1264(cParam0, "SAD3_LUMBER", -1082130432, 0, 0, -1, -1, 0);
				func_1265(cParam0, "SAD3_LUMBER", 0, 7500, 0, -1082130432, 0, 0, -1, -1, 0);
				if (iLocal_61 == 7)
				{
					func_177(&iLocal_1505);
					func_134(cParam0, 29);
				}
			}
			break;
		case 29:
			if (iLocal_61 == 7)
			{
				return 1;
			}
			break;
	}
	return 0;
}

bool func_761(char[4] cParam0)
{
	if (func_394(iVar1682, 536870912))
	{
		func_1254(&uLocal_1685, 536870912);
	}
	func_163();
	func_183(&(uLocal_239[0]));
	func_177(&iLocal_1505);
	func_48(64);
	func_172(cParam0, 0);
	set_blocking_of_non_temporary_events(&(uLocal_239[0]), true);
	if (_does_anim_scene_exist(&(Local_72[3])))
	{
		_delete_anim_scene(&(Local_72[3]));
	}
	return cParam0->f_607 == cParam0->f_607;
}

void func_762(char[4] cParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10)
{
	func_140(cParam0, iParam1, iParam9);
	func_1266(cParam0, iParam1);
	func_1242(cParam0, iParam1, iParam2);
	func_1267(cParam0, &iParam3, iParam1, 0);
	func_1267(cParam0, &iParam4, iParam1, 2);
	func_1267(cParam0, &iParam5, iParam1, 4);
	func_1267(cParam0, &iParam6, iParam1, 5);
	func_1267(cParam0, &iParam7, iParam1, 7);
	func_955(cParam0, iParam1, 0);
	StringCopy(&cVar0, sParam8, 32);
	func_1268(cParam0, iParam1, cVar0);
	func_1269(cParam0, iParam1, iParam10);
}

bool func_763(char[4] cParam0)
{
	if (!func_1256(cParam0))
	{
		return false;
	}
	if (does_entity_exist(&(iLocal_1406[17])))
	{
		if (!func_1260(cParam0))
		{
			return false;
		}
	}
	else
	{
		return false;
	}
	uLocal_1824 = func_925(&(iLocal_1784[12]), 0, 0, 0);
	func_1244(vLocal_1511, 150f, 0, 0, 0, 0, 0);
	set_clock_time(10, 0, 0);
	func_904(iLocal_249, -859.2632f, -1323.238f, 42.56f, 222.1533f, 2, 1073741824);
	task_stand_still(iLocal_249, -1);
	return cParam0->f_607 == cParam0->f_607;
}

bool func_764(char[4] cParam0)
{
	if (!does_entity_exist(iLocal_250))
	{
		iLocal_250 = func_1252(11, 1, 1, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	}
	if (!func_8(cParam0, 8))
	{
		if (!does_entity_exist(iLocal_250))
		{
			iLocal_250 = func_1252(11, 1, 1, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0);
			return false;
		}
		if (!func_186(&(uLocal_239[1]), 0))
		{
			if (!func_896(cParam0, 11, uLocal_239[1], 0, 0, 0, 0, 0, 1, 0, 1, 0, 1, 0))
			{
				return false;
			}
		}
		if (!func_1257())
		{
			return false;
		}
		func_917(cParam0, 1);
		func_904(&(uLocal_239[0]), -806.6376f, -1296.536f, 43.668f, 215.54f, 2, 1073741824);
	}
	if (_does_volume_exist(&(iLocal_1784[24])))
	{
		_0xc1799fafd2fdf52b(&(iLocal_1784[24]), 0, 0, 0);
		uLocal_1825 = func_925(&(iLocal_1784[24]), 0, 0, 0);
		func_1270(&(iLocal_1784[24]), 0, 0);
		func_1271(&(iLocal_1784[24]), 0, 0, 1, 1, 0);
		_0x19c7567d2f2287d6(&(iLocal_1784[24]), 7);
	}
	func_151(cParam0, Global_35, "JOHN", 0, 0, 0, 0);
	func_151(cParam0, iLocal_249, "Horse_01^1", 0, 0, 0, 0);
	func_151(cParam0, &(uLocal_239[0]), "uncle", 0, 0, 0, 0);
	func_151(cParam0, &(uLocal_239[1]), "MrsAdler", 0, 0, 0, 0);
	func_151(cParam0, iLocal_250, "Horse_01", 0, 0, 0, 0);
	func_151(cParam0, iLocal_243, "S_M_M_STRLUMBERJACK_01", 0, 0, 0, 0);
	func_151(cParam0, iLocal_244, "Ansel_Atherton", 0, 0, 0, 0);
	func_426(cParam0, &(iLocal_1406[17]), "p_cs_catalogue01x", 0, 0, 0, 0);
	func_904(iLocal_250, -801.3459f, -1300.025f, 43.5362f, 1f, 2, 1073741824);
	task_stand_still(iLocal_250, -1);
	func_904(iLocal_251, vLocal_1547, 180.5822f, 2, 1073741824);
	task_stand_still(iLocal_251, -1);
	func_1272(iLocal_243, 705257970, -870.9f, -1311.94f, 43.01f, 94.999f, 0, 0, 1, 0, -1082130432);
	set_player_control(player_id(), false, 0, false);
	clear_area(-864.5316f, -1334.015f, 42.2676f, 20f, 1048576);
	iLocal_1550 = get_interior_at_coords(-802.9685f, -1276.692f, 42.5172f);
	if (!is_valid_interior(iVar1547))
	{
	}
	else
	{
		pin_interior_in_memory(iVar1547);
	}
	return cParam0->f_607 == cParam0->f_607;
}

bool func_765(char[4] cParam0)
{
	func_135(cParam0, 1);
	func_469(cParam0, &(uLocal_239[0]));
	func_469(cParam0, iLocal_251);
	if (func_120(cParam0, 4))
	{
		func_915(0, 0);
	}
	_0xe737d5f14304a2ec(func_192(4), player_id(), 120000);
	func_172(cParam0, 1);
	func_1273(-653.1081f, -31.5032f, 84.7309f, 200f, 0);
	if (_does_volume_exist(&(iLocal_1784[24])))
	{
		func_173(&uLocal_1825, &(iLocal_1784[24]), 0);
		_0x2c87c3e1c7b96ee2(&(iLocal_1784[24]));
		_0xd17672447692478e(&(iLocal_1784[24]), 0);
	}
	func_1274(cParam0, &(uLocal_239[1]), 128);
	unpin_interior(iVar1547);
	if (does_entity_exist(iLocal_243))
	{
		func_175(&iLocal_243, 0);
	}
	if (does_entity_exist(iLocal_244))
	{
		func_175(&iLocal_244, 0);
	}
	if (does_entity_exist(&(iLocal_1406[17])))
	{
		delete_object(iLocal_1406[17]);
	}
	set_blocking_of_non_temporary_events(&(uLocal_239[1]), false);
	func_472(11, 1);
	func_1275(7);
	set_player_control(get_player_index(), true, 0, false);
	return cParam0->f_607 == cParam0->f_607;
}

int func_766(char[4] cParam0)
{
	func_1276(cParam0);
	func_1277(cParam0);
	func_1246(&(uLocal_239[1]), vLocal_1551[36]);
	func_1278();
	func_1279();
	func_1280(cParam0);
	if (!func_394(iVar1681, 268435456))
	{
		func_1251(&(uLocal_239[1]), iLocal_249, get_ped_group_index(Global_35));
	}
	if (does_entity_exist(Global_35) && does_entity_exist(&(iLocal_1441[0])))
	{
	}
	if (!bVar1701)
	{
		if (func_1250(Global_35, vLocal_1544, 1) <= 800f)
		{
			func_1281();
		}
	}
	else if (!func_394(iVar1682, 8))
	{
		if (does_entity_exist(Global_35) && does_entity_exist(&(iLocal_1441[0])))
		{
			if (func_903(Global_35, &(iLocal_1441[0]), 1, 1) <= 570f)
			{
				set_train_speed(&(iLocal_1441[0]), 7f);
				set_train_cruise_speed(&(iLocal_1441[0]), 7f);
				func_420(&uLocal_1685, 8);
			}
		}
	}
	if (func_1282(cParam0, 11, 1117126656, 1125515264, 0, 0, 1, 422991367))
	{
		if (!func_394(iVar1682, 65536))
		{
			if (does_blip_exist(iVar1502))
			{
				remove_blip(&iLocal_1505);
				func_420(&uLocal_1685, 65536);
			}
		}
	}
	else if (func_394(iVar1682, 65536))
	{
		if (!does_blip_exist(iVar1502))
		{
			iLocal_1505 = func_1283(408396114, vLocal_1535, 15f, 1);
			_blip_set_modifier(iVar1502, -1878373110);
			func_1254(&uLocal_1685, 65536);
		}
		func_1284(cParam0, &(uLocal_239[1]), 1105014447, 422991367, 0, 1);
	}
	if (!func_394(iVar1681, 268435456))
	{
		if (func_1253(cParam0, iLocal_249, 1125515264, 0, 1, 1, -1925605092, 1084227584, 1103626240))
		{
			if (does_blip_exist(iVar1502))
			{
				_blip_set_modifier(iVar1502, -1186550032);
				_set_blip_flash_style(iVar1502, -1878373110);
			}
		}
		else if (does_blip_exist(iVar1502))
		{
			_set_blip_flash_style(iVar1502, -1186550032);
			_blip_set_modifier(iVar1502, -1878373110);
		}
	}
	if (does_entity_exist(iLocal_250) && does_entity_exist(&(iLocal_1441[0])))
	{
		if (is_entity_touching_entity(iLocal_250, &(iLocal_1441[0])))
		{
			if (!func_26(vLocal_1551[43]))
			{
				func_27(vLocal_1551[43], 0);
			}
		}
		if (func_1285(vLocal_1551[43]) <= 2f)
		{
			if (is_ped_running_ragdoll_task(iLocal_250))
			{
				func_1286(iLocal_250, 0, 0);
			}
		}
		else
		{
			func_557(vLocal_1551[43]);
		}
	}
	switch (func_1248(cParam0))
	{
		case 0:
			if (is_ped_on_mount(Global_35))
			{
				if (does_entity_exist(&(uLocal_239[1])) && does_entity_exist(Global_35))
				{
					if (func_1287(&(uLocal_239[1]), Global_35, 0f) || func_903(&(uLocal_239[1]), Global_35, 1, 1) >= 10f)
					{
						if (!is_ped_group_member(&(uLocal_239[1]), get_ped_group_index(Global_35), 0))
						{
							set_ped_config_flag(&(uLocal_239[1]), 279, true);
							set_ped_as_group_member(&(uLocal_239[1]), get_ped_group_index(Global_35));
						}
						set_group_formation(get_ped_group_index(Global_35), 9);
						set_ped_config_flag(&(uLocal_239[1]), 167, true);
						func_134(cParam0, 1);
					}
				}
			}
			break;
		case 1:
			if (func_1250(Global_35, vLocal_1535, 1) <= 100f)
			{
				iLocal_1822 = func_1288(-599.7758f, -3.908978f, 88.6787f, -640.1675f, -78.47929f, 80.32367f, -630.6216f, -41.9204f, 83.8471f, 100f, 40f, 0);
				func_1289(2);
				func_1289(3);
				func_1289(8);
				func_1289(9);
				func_928(1189146288, 1, 0f, 0, 0, 0, 0, 0);
				func_928(906448125, 1, 0f, 0, 0, 0, 0, 0);
				func_928(-3516232, 1, 0f, 0, 0, 0, 0, 0);
				func_928(295238741, 1, 0f, 0, 0, 0, 0, 0);
				func_134(cParam0, 2);
			}
			break;
		case 2:
			func_1263(Global_35, vLocal_1535, vLocal_1551[16], 1112014848, 1106247680, 1097859072, 1084227584, 0.5f, 0, 0, 1, 1, 1);
			if (!func_394(iVar1681, 268435456))
			{
				if (func_1250(Global_35, get_blip_coords(iVar1502), 1) <= 30f && func_1290(Global_35, iLocal_249, 0))
				{
					set_ped_config_flag(&(uLocal_239[1]), 167, false);
					func_172(cParam0, 0);
					func_135(cParam0, 10);
					func_420(&uLocal_1684, 268435456);
				}
			}
			if (!func_394(iVar1681, 32768))
			{
				if (func_1263(&(uLocal_239[1]), vLocal_1535, vLocal_1551[17], 1112014848, 1106247680, 1097859072, 1084227584, 0.1f, 0, 0, 1, 1, 1))
				{
					set_ped_config_flag(&(uLocal_239[1]), 313, true);
				}
			}
			if (!is_ped_on_mount(&(uLocal_239[1])))
			{
				set_ped_config_flag(&(uLocal_239[1]), 167, false);
			}
			if (does_blip_exist(iVar1502))
			{
				if (func_1250(Global_35, get_blip_coords(iVar1502), 1) <= 20f)
				{
					if (!func_394(iVar1682, 33554432))
					{
						func_420(&uLocal_1685, 33554432);
					}
					if (!is_ped_on_mount(&(uLocal_239[1])) && !is_ped_on_mount(Global_35))
					{
						if (func_1250(Global_35, get_blip_coords(iVar1502), 1) <= 10f)
						{
							task_stand_still(iLocal_249, -1);
							task_stand_still(iLocal_250, -1);
							if (is_ped_in_group(&(uLocal_239[1])))
							{
								remove_ped_from_group(&(uLocal_239[1]));
							}
							set_blocking_of_non_temporary_events(&(uLocal_239[1]), true);
							if (func_26(vLocal_1551[9]))
							{
								func_557(vLocal_1551[9]);
							}
							if (does_blip_exist(iVar1502))
							{
								func_177(&iLocal_1505);
							}
							return 1;
						}
					}
				}
			}
			break;
		case 3:
			break;
	}
	return 0;
}

bool func_767(var uParam0)
{
	func_163();
	if (func_26(vLocal_1551[16]))
	{
		func_557(vLocal_1551[16]);
	}
	iVar0 = 0 + 1;
	while (iVar0 <= (10 - 1))
	{
		delete_vehicle(iLocal_1441[iVar0]);
		iVar0++;
	}
	func_183(&(uLocal_239[1]));
	if (does_blip_exist(iVar1502))
	{
		func_177(&iLocal_1505);
	}
	if (func_394(iVar1682, 65536))
	{
		func_1254(&uLocal_1685, 65536);
	}
	set_ped_config_flag(&(uLocal_239[1]), 313, false);
	return uParam0->f_607 == uParam0->f_607;
}

bool func_768(var uParam0)
{
	set_clock_time(12, 0, 0);
	iLocal_1822 = func_1288(-599.7758f, -3.908978f, 88.6787f, -640.1675f, -78.47929f, 80.32367f, -630.6216f, -41.9204f, 83.8471f, 100f, 40f, 0);
	func_904(&(uLocal_239[1]), -621.95f, -45.05f, 84.73f, 135f, 2, 1073741824);
	func_904(iLocal_249, -622.22f, -41.68f, 85.26f, -131.71f, 2, 1073741824);
	task_stand_still(iLocal_249, -1);
	func_904(iLocal_250, -623.5f, -43.14f, 84.88f, -131.71f, 2, 1073741824);
	task_stand_still(iLocal_250, -1);
	func_928(-3516232, 1, 0f, 0, 0, 0, 0, 0);
	func_928(295238741, 1, 0f, 0, 0, 0, 0, 0);
	func_1289(2);
	func_1289(8);
	func_1289(9);
	return uParam0->f_607 == uParam0->f_607;
}

bool func_769(char[4] cParam0)
{
	if (!func_1291(cParam0, 3, 0))
	{
		return false;
	}
	if (!func_1292(cParam0))
	{
		return false;
	}
	func_1289(11);
	func_1289(12);
	func_1289(13);
	func_1289(14);
	func_1289(15);
	func_1289(16);
	iLocal_1693 = create_tracked_point();
	iLocal_1694 = create_tracked_point();
	iLocal_1695 = create_tracked_point();
	return cParam0->f_607 == cParam0->f_607;
}

bool func_770(var uParam0)
{
	_0xae6004120c18df97(iVar1383, 0, 0);
	func_928(1189146288, 1, 0f, 0, 0, 0, 0, 0);
	func_928(906448125, 1, 0f, 0, 0, 0, 0, 0);
	func_928(-2134577774, 1, 1f, 0, 0, 0, 0, 0);
	func_928(1377144884, 1, -1f, 0, 0, 0, 0, 0);
	func_928(1705195343, 1, -1f, 0, 0, 0, 0, 0);
	func_928(939056123, 1, -1f, 0, 0, 0, 0, 0);
	_0x22031584496cfb70(1189146288, 1);
	_0x22031584496cfb70(906448125, 1);
	_0x7f458b543006c8fe(-3516232, 8);
	_0x7f458b543006c8fe(295238741, 8);
	func_928(-2134577774, 1, 1f, 0, 0, 0, 0, 0);
	if (_does_volume_exist(&(iLocal_1784[5])))
	{
		func_925(&(iLocal_1784[5]), 0, 0, 0);
	}
	set_tracked_point_info(iVar1690, -626.5f, -55.2f, 83.4f, 2f);
	set_tracked_point_info(iVar1691, -632.7997f, -58.42716f, 83f, 1f);
	set_tracked_point_info(iVar1692, -629.9738f, -48.7278f, 84f, 2f);
	if (!_0x0772f87d7b07719a(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_RAMON")))
	{
		_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_RAMON"));
	}
	_0xff745b0346e19e2c(-2146271366);
	func_1293(&iLocal_1832, 0);
	return uParam0->f_607 == uParam0->f_607;
}

int func_771(char[4] cParam0)
{
	func_1294(cParam0);
	func_1295(cParam0);
	func_1296(cParam0);
	if (func_394(iVar1682, 4194304))
	{
		set_ped_reset_flag(Global_35, 10, true);
		disable_control_action(0, -1404316431, false);
	}
	if (func_1258(Global_35, &(iLocal_1784[6]), 1, 0))
	{
		if (func_836(Global_35, 1, 0, 0) != -1569615261)
		{
			if (!func_394(iVar1681, 134217728))
			{
				set_current_ped_weapon(Global_35, -1569615261, false, 0, false, false);
				task_swap_weapon(Global_35, 0, 1, 0, 0);
				func_420(&uLocal_1684, 134217728);
			}
		}
		else if (func_394(iVar1681, 134217728))
		{
			func_1254(&uLocal_1684, 134217728);
		}
		disable_control_action(0, -1404316431, false);
		set_ped_reset_flag(Global_35, 168, true);
		set_ped_reset_flag(Global_35, 21, true);
		set_ped_reset_flag(Global_35, 2, true);
		if (!get_ped_config_flag(Global_35, 334, true))
		{
			set_ped_config_flag(Global_35, 334, true);
		}
	}
	if (func_394(iVar1683, 32))
	{
		disable_control_action(0, -1404316431, false);
		if (!get_ped_config_flag(Global_35, 334, true))
		{
			set_ped_config_flag(Global_35, 334, true);
		}
	}
	switch (func_1248(cParam0))
	{
		case 0:
			if ((func_1297(cParam0) == -1 && !func_1298()) && !is_ped_on_mount(Global_35))
			{
				iLocal_1505 = _blip_add_for_area(1247852480, -630.707f, -65.594f, 81.856f, 14f, 26f, 1f, 16);
				func_134(cParam0, 1);
			}
			break;
		case 1:
			if (func_1299(295238741) < 0f || func_1299(-3516232) > 0f)
			{
				func_1262(cParam0, "SAD3_IG2_ENTER", 0);
				func_134(cParam0, 2);
			}
			break;
		case 2:
			disable_control_action(0, -822242784, false);
			if (func_1258(Global_35, &(iLocal_1784[5]), 1, 0))
			{
				if (!is_entity_visible(iVar1383))
				{
					if ((!is_tracked_point_visible(iVar1690) && !is_tracked_ped_visible(iVar1383)) && !is_tracked_point_visible(iVar1692))
					{
						set_entity_visible(iVar1383, true);
						set_entity_collision(iVar1383, true, false);
						freeze_entity_position(iVar1383, false);
					}
					else
					{
						func_904(iVar1383, -632.7997f, -58.42716f, 81.85614f, 275.0427f, 2, 1073741824);
						set_entity_visible(iVar1383, true);
						set_entity_collision(iVar1383, true, false);
						freeze_entity_position(iVar1383, false);
						func_420(&uLocal_1685, 524288);
					}
				}
				if ((func_903(Global_35, iVar1383, 1, 1) >= 3f || is_tracked_ped_visible(iVar1383)) || func_394(iVar1682, 524288))
				{
					if (!func_1259(iVar1383, 1469008894))
					{
						if (!func_394(iVar1683, 32))
						{
							func_420(&uLocal_1686, 32);
						}
						if (!_does_volume_exist(iVar1814))
						{
							uLocal_1817 = _0x0eb78c2b156635b1(-1612834106, -629.33f, -53.27987f, 83.25195f, 0f, 0f, 4.34866f, 3.548011f, 3.042526f, 3.215499f);
						}
						force_ped_motion_state(iVar1383, 1619979220, false, 0, false);
						task_grapple(iVar1383, Global_35, 0, 1, 3f, 1, 1048576);
					}
					if (does_blip_exist(iVar1502))
					{
						remove_blip(&iLocal_1505);
					}
					if (!does_blip_exist(Local_1386.f_1))
					{
						Local_1386.f_1 = _blip_add_for_entity(953018525, iVar1383);
					}
					func_1264(cParam0, "SAD3_OBJ3b", -1082130432, 0, 0, -1, -1, 0);
					sLocal_238 = "SAD3_OBJ3b";
					set_ped_config_flag(iVar1383, 225, true);
					func_134(cParam0, 4);
				}
			}
			break;
		case 4:
			func_1300();
			if (does_blip_exist(Local_1386.f_1))
			{
				set_blip_name_from_text_file(Local_1386.f_1, "SAD3_ILO_BOUNT");
			}
			if (_0x3bdfcf25b58b0415(Global_35))
			{
				if (func_836(Global_35, 1, 0, 0) != -1569615261)
				{
					set_current_ped_weapon(Global_35, -1569615261, true, 0, false, false);
				}
				if (!func_394(iVar1682, 4194304))
				{
					func_420(&uLocal_1685, 4194304);
					if (_0x753b15ad0fd6f3e3(iVar1383) == -834353174)
					{
						_0x789dabd18e9024db(iVar1383, 3084, 0);
					}
				}
				if (!func_26(vLocal_1551[35]))
				{
					func_27(vLocal_1551[35], 0);
				}
				else
				{
					if (func_1301("SAD3_STRANGLE"))
					{
						func_227(vLocal_1551[35]);
					}
					if (func_1285(vLocal_1551[35]) >= 3f)
					{
						if (func_1262(cParam0, "SAD3_STRANGLE", 0))
						{
							func_227(vLocal_1551[35]);
						}
					}
				}
			}
			else if (func_26(vLocal_1551[35]))
			{
				func_557(vLocal_1551[35]);
			}
			if (_0x57779b55b83e2bea(iVar1383) || _0x7ee3a8660f38797e(iVar1383))
			{
				func_227(vLocal_1551[0]);
				func_134(cParam0, 5);
			}
			break;
		case 5:
			disable_control_action(0, -1292666904, false);
			disable_control_action(0, -1377110900, false);
			func_1300();
			if (func_1285(vLocal_1551[0]) >= 1f)
			{
				func_134(cParam0, 29);
			}
			break;
		case 29:
			return 1;
	}
	return 0;
}

bool func_772(var uParam0)
{
	if (does_blip_exist(Local_1386.f_1))
	{
		remove_blip(&(Local_1386.f_1));
	}
	if (_is_anim_scene_started(&(Local_72[2]), false))
	{
		_delete_anim_scene(&(Local_72[2]));
	}
	if (iVar1689 != -1)
	{
		_0x87247bc60b60bed8(iVar1689);
	}
	if (iVar1690 != 0)
	{
		destroy_tracked_point(iVar1690);
	}
	if (iVar1691 != 0)
	{
		destroy_tracked_point(iVar1691);
	}
	if (iVar1692 != 0)
	{
		destroy_tracked_point(iVar1692);
	}
	set_ped_config_flag(iVar1383, 137, false);
	set_ped_config_flag(iVar1383, 302, false);
	_0x949b2f9ed2917f5d(iVar1383, 23);
	_0x18ff3110cf47115d(iVar1383, 0, 1);
	set_player_forced_aim(player_id(), false, 0, -1, false);
	set_object_as_no_longer_needed(iLocal_1406[8]);
	set_object_as_no_longer_needed(iLocal_1406[9]);
	set_object_as_no_longer_needed(iLocal_1406[2]);
	set_object_as_no_longer_needed(iLocal_1406[3]);
	if (get_ped_config_flag(Global_35, 334, true))
	{
		set_ped_config_flag(Global_35, 334, false);
	}
	set_entity_proofs(iVar1383, 0, false);
	if (func_394(iVar1683, 2))
	{
		func_1254(&uLocal_1686, 2);
	}
	if (_does_volume_exist(iVar1814))
	{
		_delete_volume(iVar1814);
	}
	return uParam0->f_607 == uParam0->f_607;
}

bool func_773(char[4] cParam0)
{
	if (!func_1291(cParam0, 4, 1))
	{
		return false;
	}
	if (!func_1292(cParam0))
	{
		return false;
	}
	if (!_0xa0bc8faed8cfeb3c(iVar1383))
	{
		return false;
	}
	_0xff745b0346e19e2c(-2146271366);
	if (!_0xb8f52a3f84a7cc59(-2146271366))
	{
		return false;
	}
	set_clock_time(12, 0, 0);
	func_1289(11);
	func_1289(12);
	func_1289(13);
	func_1289(14);
	func_1289(15);
	func_1289(16);
	iLocal_59 = 0;
	func_904(iLocal_250, -626.7462f, -46.1641f, 82.9893f, 270.0998f, 2, 1073741824);
	func_904(iLocal_249, -629.3956f, -45.879f, 82.8821f, -90.4893f, 2, 1073741824);
	return cParam0->f_607 == cParam0->f_607;
}

bool func_774(char[4] cParam0)
{
	if (!func_8(cParam0, 8))
	{
		if (!_0xb8f52a3f84a7cc59(-2146271366))
		{
			return false;
		}
	}
	func_151(cParam0, iVar1383, "RAMON_CORTEZ", 0, 0, 0, 0);
	func_151(cParam0, &(uLocal_239[1]), "MrsAdler", 0, 0, 0, 0);
	func_151(cParam0, Global_35, "JOHN", 0, 0, 0, 0);
	func_151(cParam0, iLocal_250, "HORSE_01", 0, 0, 0, 0);
	func_151(cParam0, iLocal_249, "HORSE_01^1", 0, 0, 0, 0);
	Local_1763.f_3 = 0;
	if (func_837(268435584, 0) == 0)
	{
		if (func_837(268435456, 0) == 0)
		{
			func_937(Global_35, -916314281, 50, 0, 2, 1056964608, 1065353216, 0);
		}
		else
		{
			set_current_ped_weapon(Global_35, func_837(268435456, 0), true, 2, false, false);
		}
	}
	return cParam0->f_607 == cParam0->f_607;
}

bool func_775(char[4] cParam0)
{
	if (func_120(cParam0, 4))
	{
		func_915(0, 0);
	}
	if (!_0x0772f87d7b07719a(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_RAMON")))
	{
		_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_RAMON"));
	}
	iLocal_1702 = 1;
	func_420(&uLocal_1685, 256);
	clear_ped_tasks_immediately(&(uLocal_239[1]), false, true);
	clear_ped_tasks(Global_35, 1, 0);
	func_928(-3516232, 1, 0, 0, 1, 0, 0, 0);
	func_928(295238741, 1, 0, 0, 1, 0, 0, 0);
	set_entity_invincible(iVar1383, false);
	_0x18ff3110cf47115d(iVar1383, 1, 0);
	_0x18ff3110cf47115d(iVar1383, 2, 0);
	if (_does_volume_exist(&(iLocal_1784[8])))
	{
		uLocal_1818 = func_925(&(iLocal_1784[8]), 0, 0, 0);
		_0x2fcd528a397e5c88(&(iLocal_1784[8]), 16384);
		func_1270(&(iLocal_1784[8]), 0, 0);
		_0x2fcd528a397e5c88(&(iLocal_1784[8]), 8);
		_0x2fcd528a397e5c88(&(iLocal_1784[8]), 1048576);
		uLocal_1819 = _0x4c39c95ae5db1329(&(iLocal_1784[8]), false, 15);
	}
	if (_does_volume_exist(&(iLocal_1784[15])))
	{
		uLocal_1827 = func_925(&(iLocal_1784[15]), 0, 0, 0);
		func_1270(&(iLocal_1784[15]), 0, 0);
	}
	if (_does_volume_exist(&(iLocal_1784[5])))
	{
		func_925(&(iLocal_1784[5]), 0, 0, 0);
	}
	if (_does_volume_exist(&(iLocal_1784[25])))
	{
		_0xc1799fafd2fdf52b(&(iLocal_1784[25]), 0, 0, 0);
	}
	if (!_is_anim_scene_loaded(&(Local_72[2]), true, false) && !_is_anim_scene_loading(&(Local_72[2]), true))
	{
		load_anim_scene(&(Local_72[2]));
	}
	func_1302();
	iLocal_60 = 0;
	func_1293(&iLocal_1832, 35);
	func_557(vLocal_1551[8]);
	func_151(cParam0, &(uLocal_239[1]), "MrsAdler", 0, 0, 0, 0);
	set_blocking_of_non_temporary_events(&(uLocal_239[1]), false);
	return cParam0->f_607 == cParam0->f_607;
}

int func_776(char[4] cParam0)
{
	func_1303(cParam0);
	func_1304(cParam0);
	func_1296(cParam0);
	func_1277(cParam0);
	func_1246(&(uLocal_239[1]), vLocal_1551[36]);
	if (!func_394(iVar1681, 1048576))
	{
		func_1305(cParam0);
	}
	if (!func_394(iVar1683, 128))
	{
		if (func_1306(77, 0, 0, 0, 0, 0))
		{
			func_420(&uLocal_1686, 128);
		}
	}
	if (!func_394(iVar1682, 134217728))
	{
		if (func_1307())
		{
			func_151(cParam0, iVar1383, "RAMON_CORTEZ", 0, 0, 0, 0);
			func_151(cParam0, Global_35, "JOHN", 0, 0, 0, 0);
			func_151(cParam0, &(uLocal_239[1]), "MrsAdler", 0, 0, 0, 0);
			func_151(cParam0, iLocal_246, "U_M_M_RHDSHERIFF_01", 0, 0, 0, 0);
			func_151(cParam0, &(Local_264[0]), "G_M_M_UniBanditos_01", 0, 0, 0, 0);
			func_151(cParam0, &(Local_264[1]), "G_M_M_UniBanditos_01^1", 0, 0, 0, 0);
			func_151(cParam0, &(Local_264[2]), "G_M_M_UniBanditos_01^2", 0, 0, 0, 0);
			func_151(cParam0, &(Local_264[3]), "G_M_M_UniBanditos_01^3", 0, 0, 0, 0);
			func_151(cParam0, &(Local_264[4]), "G_M_M_UniBanditos_01^5", 0, 0, 0, 0);
			func_151(cParam0, &(Local_1285[2]), "Horse_01", 0, 0, 0, 0);
			func_151(cParam0, &(Local_1285[3]), "Horse_01^1", 0, 0, 0, 0);
			func_151(cParam0, &(Local_1285[4]), "Horse_01^2", 0, 0, 0, 0);
			func_420(&uLocal_1685, 134217728);
		}
	}
	if (func_1248(cParam0) >= 2)
	{
		func_1308(cParam0);
		func_1309();
		func_1310();
	}
	if (_does_volume_exist(iVar1813))
	{
		if (func_1258(&(uLocal_239[1]), iVar1813, 1, 0))
		{
			_delete_volume(iVar1813);
		}
	}
	if (is_waypoint_playback_going_on_for_ped(&(uLocal_239[1]), 0))
	{
		func_1311(&(uLocal_239[1]), 2f, 0, 1045220557, 1, 3f, 5f, 10f, 1033476506, 1061158912, 1, 0, 1045220557, 0);
	}
	if (_get_carrier_as_mount(iVar1383) == iLocal_250)
	{
		_0xc3abcfbc7d74afa5(iLocal_250, 6, 1);
	}
	switch (func_1248(cParam0))
	{
		case 0:
			if (is_ped_on_mount(Global_35))
			{
				func_1255(&(uLocal_239[1]));
				if (!does_group_exist(iVar1507))
				{
					iLocal_1510 = create_group(2);
					set_ped_config_flag(&(uLocal_239[1]), 279, true);
					set_ped_as_group_leader(&(uLocal_239[1]), iVar1507, false);
					set_group_formation(iVar1507, 10);
					_0x9bbeaf8b0c007f1e(&(uLocal_239[1]), 0);
					set_ped_config_flag(&(uLocal_239[1]), 167, true);
					_0x154b7e841ac7412f(iVar1507, 1);
					func_1284(cParam0, &(uLocal_239[1]), 1105014447, 422991367, 1, 1);
					task_follow_waypoint_recording(&(uLocal_239[1]), "sad3_painttorhodes", 0, 9226, -1, 0, 0, -1);
					_0xdd33a82352c4652f(player_id(), &(uLocal_239[1]), 1);
					_0xac22aa6df4d1c1de(player_id(), &(uLocal_239[1]), -1082130432, -1082130432, 2, 2, 0);
					func_134(cParam0, 1);
				}
			}
			break;
		case 1:
			if (func_1253(cParam0, iLocal_249, 1125515264, 0, 0, 1, -1925605092, 1084227584, 1103626240))
			{
				if (func_394(iVar1682, 256))
				{
					func_1312(cParam0, &(uLocal_239[1]), 1);
					waypoint_playback_pause(&(uLocal_239[1]), 1, 1, 0);
					func_1254(&uLocal_1685, 256);
				}
			}
			if (func_1290(Global_35, iLocal_249, 0))
			{
				if (!func_394(iVar1682, 256))
				{
					func_1284(cParam0, &(uLocal_239[1]), 1105014447, 422991367, 1, 1);
					func_1264(cParam0, "SAD3_OBJ4a", -1082130432, 0, 0, -1, -1, 0);
					waypoint_playback_resume(&(uLocal_239[1]), true, -1, 0);
					func_420(&uLocal_1685, 256);
				}
			}
			if (is_waypoint_playback_going_on_for_ped(&(uLocal_239[1]), 0) && get_ped_waypoint_progress(&(uLocal_239[1])) > 387)
			{
				func_1313(cParam0, &(Local_72[5]));
				func_1313(cParam0, &(Local_72[6]));
				if (func_394(iVar1683, 4096))
				{
					func_1254(&uLocal_1686, 4096);
				}
				func_1314(&iLocal_245);
				set_object_as_no_longer_needed(iLocal_1406[11]);
				set_object_as_no_longer_needed(iLocal_1406[12]);
				set_object_as_no_longer_needed(iLocal_1406[13]);
				set_object_as_no_longer_needed(iLocal_1406[14]);
				set_object_as_no_longer_needed(iLocal_1406[15]);
				set_object_as_no_longer_needed(iLocal_1406[16]);
				func_1289(18);
				func_1289(19);
				func_1289(20);
				func_1289(21);
				func_1289(22);
				func_928(349074475, 1, 0f, 0, 0, 0, 0, 0);
				func_151(cParam0, iLocal_246, "U_M_M_RHDSHERIFF_01", 0, 0, 0, 0);
				func_426(cParam0, &(iLocal_1406[18]), "P_KEYS01X", 0, 0, 0, 0);
				func_426(cParam0, &(iLocal_1406[19]), "P_BOTTLEJD01X", 0, 0, 0, 0);
				func_426(cParam0, &(iLocal_1406[20]), "p_whiskeyglass01x", 0, 0, 0, 0);
				func_426(cParam0, &(iLocal_1406[21]), "p_whiskeyglass01x^1", 0, 0, 0, 0);
				func_426(cParam0, &(iLocal_1406[22]), "p_whiskeyglass01x^2", 0, 0, 0, 0);
				if (!_does_volume_exist(iVar1813))
				{
					uLocal_1816 = _0x0eb78c2b156635b1(-1612834106, 1358.725f, -1307.297f, 77.60439f, 0f, 0f, -19.96882f, 5.799519f, 3.903756f, 3.823034f);
				}
				func_134(cParam0, 2);
			}
			break;
		case 2:
			if (is_waypoint_playback_going_on_for_ped(&(uLocal_239[1]), 0))
			{
				if (get_ped_waypoint_progress(&(uLocal_239[1])) > 801)
				{
					if (does_group_exist(iVar1507))
					{
						set_ped_config_flag(&(uLocal_239[1]), 167, false);
						_0x0c6b89876262a99d(player_id(), &(uLocal_239[1]));
						remove_ped_from_group(&(uLocal_239[1]));
						remove_group(iVar1507);
					}
				}
				if (get_ped_waypoint_progress(&(uLocal_239[1])) > 807)
				{
					if (func_903(Global_35, &(uLocal_239[1]), 1, 1) <= 25f)
					{
						func_135(cParam0, 3);
					}
					func_134(cParam0, 3);
				}
			}
			break;
		case 3:
			if (is_ped_on_mount(&(uLocal_239[1])))
			{
				func_1315(&(uLocal_239[1]), vLocal_1517, 0, 50f, 20f, 10f, 1084227584, 1, 1, 1, 0);
				if (!func_1259(&(uLocal_239[1]), 658540077))
				{
					if (!func_1259(&(uLocal_239[1]), 501393341))
					{
						task_dismount_animal(&(uLocal_239[1]), 262144, 0, 0, 0, 0);
					}
				}
			}
			if (is_ped_on_mount(Global_35))
			{
				func_1315(Global_35, 1348.525f, -1310.243f, 75.5912f, 0, 50f, 30f, 15f, 1084227584, 1, 1, 1, 0);
			}
			if (!is_ped_on_mount(&(uLocal_239[1])))
			{
				func_177(&iLocal_1505);
				func_135(cParam0, 4);
				func_1312(cParam0, &(uLocal_239[1]), 1);
				if (!func_1259(iLocal_250, -982327190))
				{
					task_stand_still(iLocal_250, -1);
				}
				set_blocking_of_non_temporary_events(&(uLocal_239[1]), true);
				if (!func_1259(&(uLocal_239[1]), 1369124074))
				{
					task_enter_anim_scene(&(uLocal_239[1]), &(Local_72[6]), "MRSADLER", func_417(15), 1f, 1, 0, 20000, -1082130432);
					iLocal_62 = 1;
				}
				_0x18ff3110cf47115d(iVar1383, 2, 1);
				if (!does_blip_exist(Local_1386.f_1))
				{
					func_1264(cParam0, "SAD3_OBJ4b", -1082130432, 0, 0, -1, -1, 0);
					Local_1386.f_1 = _blip_add_for_entity(953018525, iVar1383);
				}
				func_134(cParam0, 4);
			}
			break;
		case 4:
			if (does_blip_exist(Local_1386.f_1))
			{
				set_blip_name_from_text_file(Local_1386.f_1, "SAD3_ILO_BOUNT");
			}
			if (is_ped_on_mount(Global_35))
			{
				func_1315(Global_35, 1348.525f, -1310.243f, 75.5912f, 0, 1112014848, 1106247680, 1097859072, 1084227584, 1, 1, 1, 0);
			}
			if (func_1316(Global_35, iVar1383))
			{
				if (does_blip_exist(Local_1386.f_1))
				{
					remove_blip(&(Local_1386.f_1));
				}
				func_1264(cParam0, "SAD3_OBJ4c", -1082130432, 0, 0, -1, -1, 0);
				if (!func_394(iVar1685, 512))
				{
					func_135(cParam0, 6);
				}
				iLocal_1506 = func_1317(iLocal_246, 422991367, 1, 1);
				_blip_set_modifier(iVar1503, -401963276);
				func_134(cParam0, 5);
			}
			break;
		case 5:
			if (!func_1316(Global_35, iVar1383))
			{
				if (does_blip_exist(iVar1503))
				{
					_set_blip_flash_style(iVar1503, -401963276);
				}
				if (!does_blip_exist(Local_1386.f_1))
				{
					func_1264(cParam0, "SAD3_OBJ4b", -1082130432, 0, 0, -1, -1, 0);
					Local_1386.f_1 = _blip_add_for_entity(953018525, iVar1383);
				}
				func_134(cParam0, 4);
			}
			if (iLocal_62 == 6)
			{
				if (func_1318(cParam0, 0))
				{
					if (func_1301("SAD3_CORRAGE"))
					{
						func_1319("SAD3_CORRAGE", 0, 0);
					}
					func_1320(cParam0, 0);
					func_134(cParam0, 29);
				}
			}
			if (func_394(iVar1681, 4194304))
			{
				if (func_1301("SAD3_CORRAGE"))
				{
					func_1319("SAD3_CORRAGE", 0, 0);
				}
				func_134(cParam0, 29);
			}
			break;
		case 29:
			return 1;
	}
	return 0;
}

bool func_777(char[4] cParam0)
{
	func_183(&(uLocal_239[1]));
	if (does_blip_exist(iVar1502))
	{
		func_177(&iLocal_1505);
	}
	if (does_blip_exist(Local_1386.f_1))
	{
		remove_blip(&(Local_1386.f_1));
	}
	if (func_26(vLocal_1551[16]))
	{
		func_557(vLocal_1551[16]);
	}
	if (_does_volume_exist(&(iLocal_1784[25])))
	{
		_0xd17672447692478e(&(iLocal_1784[25]), 0);
	}
	if (_does_volume_exist(iVar1813))
	{
		_delete_volume(iVar1813);
	}
	_0x18ff3110cf47115d(iVar1383, 4, 1);
	_set_blip_flash_style(iVar1503, -401963276);
	func_1322(iLocal_249, func_1321(3, 4), 2, 1073741824);
	task_stand_still(iLocal_249, -1);
	func_904(iLocal_250, 1346.174f, -1307.837f, 75.5757f, 338.9842f, 2, 1073741824);
	task_stand_still(iLocal_250, -1);
	if (!func_394(iVar1681, 4194304))
	{
		func_928(349074475, 0, 1f, 0, 0, 0, 0, 0);
	}
	func_909(cParam0, 33554432);
	if (!func_8(cParam0, 8))
	{
		if (_0xb8f52a3f84a7cc59(-2146271366))
		{
			_0x6afda2264925bd11(-2146271366);
		}
	}
	return cParam0->f_607 == cParam0->f_607;
}

int func_778(char[4] cParam0)
{
	if (!func_1291(cParam0, 5, 1))
	{
		return 0;
	}
	if (!func_1307())
	{
		return 0;
	}
	if (!func_1305(cParam0))
	{
		return 0;
	}
	func_1322(&(Local_1285[2]), func_1321(0, 6), 2, 1073741824);
	func_1322(&(Local_1285[3]), func_1321(0, 7), 2, 1073741824);
	_0x140b3cb1d424a945(Global_35, -1);
	set_clock_time(18, 0, 0);
	_set_weather_type(1632247697, true, true, false, 0f, false);
	iLocal_1506 = func_1317(iLocal_246, 422991367, 1, 1);
	_0xc1799fafd2fdf52b(&(iLocal_1784[4]), 0, 0, 0);
	func_1273(1339.756f, -1310.034f, 75.4467f, 70f, 0);
	func_1244(1339.756f, -1310.034f, 75.4467f, 70f, 0, 0, 0, 0, 0);
	set_current_ped_weapon(Global_35, _0x9f67929d98e7c6e8(Global_35, -1101297303, 0, 0), false, 0, false, false);
	func_151(cParam0, iVar1383, "RAMON_CORTEZ", 0, 0, 0, 0);
	func_151(cParam0, Global_35, "JOHN", 0, 0, 0, 0);
	func_151(cParam0, &(uLocal_239[1]), "MrsAdler", 0, 0, 0, 0);
	func_151(cParam0, iLocal_246, "U_M_M_RHDSHERIFF_01", 0, 0, 0, 0);
	func_151(cParam0, &(Local_264[0]), "G_M_M_UniBanditos_01", 0, 0, 0, 0);
	func_151(cParam0, &(Local_264[1]), "G_M_M_UniBanditos_01^1", 0, 0, 0, 0);
	func_151(cParam0, &(Local_264[2]), "G_M_M_UniBanditos_01^2", 0, 0, 0, 0);
	func_151(cParam0, &(Local_264[3]), "G_M_M_UniBanditos_01^3", 0, 0, 0, 0);
	func_151(cParam0, &(Local_264[4]), "G_M_M_UniBanditos_01^5", 0, 0, 0, 0);
	func_151(cParam0, &(Local_1285[2]), "Horse_01", 0, 0, 0, 0);
	func_151(cParam0, &(Local_1285[3]), "Horse_01^1", 0, 0, 0, 0);
	func_151(cParam0, &(Local_1285[4]), "Horse_01^2", 0, 0, 0, 0);
	return 1;
}

int func_779(char[4] cParam0)
{
	if (func_120(cParam0, 4))
	{
		if (!_0x8cbe916cfc64ad5c(Global_35))
		{
			return 0;
		}
	}
	if (get_clock_hours() < 18)
	{
		set_clock_time(18, 0, 0);
	}
	func_169(26, 0);
	_set_weather_type(1632247697, false, true, false, 0f, false);
	set_ped_config_flag(&(uLocal_239[1]), 167, false);
	func_926(71);
	func_926(918);
	func_926(919);
	func_927(71, 32);
	func_927(918, 32);
	func_927(919, 32);
	func_1323(5);
	set_blocking_of_non_temporary_events(&(uLocal_239[1]), true);
	if (_does_volume_exist(&(iLocal_1784[14])))
	{
		uLocal_1826 = func_925(&(iLocal_1784[14]), 0, 0, 0);
		func_1271(&(iLocal_1784[14]), 0, 0, 1, 1, 0);
		func_1270(&(iLocal_1784[14]), 0, 0);
	}
	task_stand_still(iLocal_249, -1);
	func_904(iLocal_250, 1346.174f, -1307.837f, 75.5757f, 338.9842f, 2, 1073741824);
	task_stand_still(iLocal_250, -1);
	return 1;
}

int func_780(char[4] cParam0)
{
	iLocal_1702 = 1;
	_0x1a7a802b2301edc0(Global_35);
	if (func_120(cParam0, 4) || func_8(cParam0, 524288))
	{
		if (get_clock_hours() < 20)
		{
			set_clock_time(19, 45, 0);
		}
	}
	pause_clock(false, 0);
	if (get_closest_ped(1355.777f, -1302.272f, 76.7606f, 2.5f, 1, 0, &iLocal_252, 0, 0, 1, -1))
	{
		set_blocking_of_non_temporary_events(iLocal_252, true);
		task_cower(iLocal_252, -1, 0, 0);
	}
	func_928(349074475, 1, 1f, 1, 1, 0, 1, 0);
	_set_ped_crouch_movement(iLocal_246, true, 0, false);
	set_ped_sphere_defensive_area(iLocal_246, 1362.652f, -1301.036f, 77.7606f, 1f, 0, 0, 0);
	func_1324(cParam0, "MultiStart");
	func_1293(&iLocal_1832, 0);
	func_99(cParam0, 33554432);
	func_1325(cParam0, &(uLocal_239[1]), 0);
	set_ped_combat_attributes(&(uLocal_239[1]), 12, true);
	set_ped_combat_attributes(&(uLocal_239[1]), 111, true);
	if (!does_rayfire_map_object_exist(iVar1827))
	{
		iLocal_1830 = get_rayfire_map_object(1353.486f, -1302.814f, 76.75661f, 100f, "des_rho_sheriff");
	}
	if (!func_26(vLocal_1551[31]))
	{
		func_27(vLocal_1551[31], 0);
	}
	func_227(vLocal_1551[0]);
	return 1;
}

int func_781(char[4] cParam0)
{
	func_1326(cParam0);
	func_1327(cParam0);
	func_1328();
	func_1329(cParam0);
	func_1330();
	if (_0x8a3945405b31048f() > 0.95f)
	{
		func_1247(0.95f);
	}
	if (iVar1705 < 1)
	{
		func_1331(cParam0, &Local_264, &Local_1835, 1120403456);
	}
	if (does_rayfire_map_object_exist(iVar1827))
	{
	}
	disable_control_action(0, 399753205, false);
	set_player_may_not_enter_any_vehicle(player_id());
	_0x9f9a829c6751f3c7(player_id(), 28, 1);
	set_all_random_peds_flee_this_frame(get_player_index());
	if (does_entity_exist(&(Local_1285[2])))
	{
		set_ped_reset_flag(&(Local_1285[2]), 49, true);
		set_ped_reset_flag(&(Local_1285[2]), 53, true);
		if (is_waypoint_playback_going_on_for_ped(&(Local_1285[2]), 0))
		{
			waypoint_playback_override_speed(&(Local_1285[2]), 2f, 0, -1082130432, 0);
		}
	}
	if (does_entity_exist(&(Local_1285[3])))
	{
		set_ped_reset_flag(&(Local_1285[3]), 49, true);
		set_ped_reset_flag(&(Local_1285[3]), 53, true);
		if (is_waypoint_playback_going_on_for_ped(&(Local_1285[3]), 0))
		{
			waypoint_playback_override_speed(&(Local_1285[3]), 2f, 0, -1082130432, 0);
		}
	}
	if (!func_394(iVar1682, 8192))
	{
		if (func_1332(vLocal_1551[29], 30f))
		{
			func_1333(cParam0, &(uLocal_239[1]), 1, 1);
		}
		else
		{
			set_entity_only_damaged_by_player(&(uLocal_239[1]), true);
			func_1333(cParam0, &(uLocal_239[1]), 0, 1);
		}
	}
	switch (func_1248(cParam0))
	{
		case 0:
			if (iVar1705 == 1)
			{
				func_227(vLocal_1551[0]);
				func_135(cParam0, 4);
				func_134(cParam0, 1);
			}
			else if (!func_394(iVar1681, 256))
			{
				remove_ped_defensive_area(iLocal_246, false);
				set_ped_sphere_defensive_area(iLocal_246, get_entity_coords(iLocal_246, true, false), 2f, 1, 0, 0);
				set_ped_combat_movement(iLocal_246, 1);
				task_combat_hated_targets_around_ped(iLocal_246, 100f, 0, 0);
				func_420(&uLocal_1684, 256);
			}
			break;
		case 1:
			if (func_1301("SAD3_RH_SHOT"))
			{
				if (get_current_scripted_conversation_line("SAD3_RH_SHOT") >= 1)
				{
					func_227(vLocal_1551[0]);
					if (func_186(&(uLocal_239[1]), 0))
					{
						if (is_ped_in_cover(&(uLocal_239[1]), 0, 0))
						{
							task_exit_cover(&vLocal_1895);
						}
						if (iVar1829 == 20 || iVar1829 == 15)
						{
							func_1293(&iLocal_1832, 16);
						}
						func_134(cParam0, 2);
					}
				}
			}
			break;
		case 2:
			if ((func_186(&(uLocal_239[1]), 0) && is_collision_marked_outside(get_entity_coords(&(uLocal_239[1]), true, false))) && func_186(iLocal_246, 0))
			{
				_set_ped_crouch_movement(iLocal_246, false, 0, false);
				func_134(cParam0, 3);
			}
			break;
		case 3:
			if (iVar1705 == 1 && is_collision_marked_outside(func_1334(player_id())))
			{
				if (get_ped_accuracy(iLocal_246) != 0)
				{
					set_ped_accuracy(iLocal_246, 0);
				}
				if (_0xef2e6f870783369b(iLocal_246, 0) != &iLocal_1784[30])
				{
					_0xfc3db99c8144cd81(iLocal_246, &(iLocal_1784[30]), 0, 0, 0);
				}
			}
			if (!func_394(iVar1681, 536870912))
			{
				if (iVar1705 == 4)
				{
					if (!func_1259(iLocal_246, 713668775))
					{
						set_ped_using_action_mode(iLocal_246, true, -1, 0);
						task_follow_nav_mesh_to_coord(iLocal_246, 1357.824f, -1302.107f, 76.7606f, 1.5f, -1, 0.25f, 0, 250.9834f);
						func_420(&uLocal_1684, 536870912);
					}
				}
			}
			if (iVar1705 == 8 && is_collision_marked_outside(func_1334(player_id())))
			{
				func_1289(24);
				func_1289(25);
				if (func_1335(10, 0))
				{
					_set_ped_crouch_movement(&(Local_264[10]), true, 0, false);
					func_135(cParam0, 6);
					iLocal_1832 = 19;
					func_134(cParam0, 4);
				}
			}
			break;
		case 4:
			if (is_tracked_ped_visible(&(Local_264[10])))
			{
				if (!func_26(vLocal_1551[30]))
				{
					func_27(vLocal_1551[30], 0);
				}
				if (!func_1259(&(Local_264[10]), 518218985))
				{
					_set_ped_crouch_movement(&(Local_264[10]), false, 0, false);
					_task_flee_from_ped(&(Local_264[10]), Global_35, 1195.772f, -1136.499f, 72.12199f, -1f, -1, 1024, 2f, 0);
				}
			}
			if (!func_1298() || func_1285(vLocal_1551[30]) >= 3f)
			{
				if (does_entity_exist(iVar1383))
				{
					delete_ped(&Local_1386);
				}
				if (does_entity_exist(&(iLocal_1406[24])))
				{
					delete_object(iLocal_1406[24]);
				}
				if (iLocal_71 == 2 && !_0xc93a9a45430d484e(get_player_index()))
				{
					if (!is_tracked_ped_visible(&(Local_264[10])))
					{
						if (does_entity_exist(&(Local_264[10])))
						{
							delete_ped(Local_264[10]);
						}
					}
					add_explosion(1353.058f, -1302.552f, 77.05098f, 26, 0.5f, false, false, 1f);
					_play_sound_from_position("des_rho_sheriff", 1353.058f, -1302.552f, 77.05098f, "SAD3_SOUNDS", false, 0, true, 0);
					set_state_of_rayfire_map_object(iVar1827, 6);
					func_928(349074475, 0, 1f, 0, 1, 0, 0, 0);
					if (!func_26(vLocal_1551[14]))
					{
						func_27(vLocal_1551[14], 0);
					}
					func_134(cParam0, 29);
				}
			}
			break;
		case 29:
			if (func_913(vLocal_1551[14]) >= 2f)
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_782(char[4] cParam0)
{
	iVar0 = 0;
	while (iVar0 <= 44)
	{
		if (func_186(&(Local_264[iVar0]), 0))
		{
			func_175(Local_264[iVar0], 1);
		}
		iVar0++;
	}
	func_163();
	func_175(Local_1285[0], 1);
	func_557(vLocal_1551[21]);
	if (func_26(vLocal_1551[37]))
	{
		func_557(vLocal_1551[37]);
	}
	if (func_26(vLocal_1551[29]))
	{
		func_557(vLocal_1551[29]);
	}
	pause_clock(false, 0);
	if (does_blip_exist(Local_1386.f_1))
	{
		remove_blip(&(Local_1386.f_1));
	}
	set_ped_combat_attributes(&(uLocal_239[1]), 0, true);
	set_blocking_of_non_temporary_events(&(uLocal_239[1]), true);
	_0xd17672447692478e(&(iLocal_1784[4]), 0);
	func_174(&(iLocal_1784[4]));
	if (does_entity_exist(iLocal_252))
	{
		set_blocking_of_non_temporary_events(iLocal_252, false);
		clear_ped_tasks(iLocal_252, 1, 0);
		func_175(&iLocal_252, 1);
	}
	if (does_entity_exist(&(Local_1285[2])))
	{
		delete_ped(Local_1285[2]);
	}
	if (does_entity_exist(&(Local_1285[3])))
	{
		delete_ped(Local_1285[3]);
	}
	if (does_entity_exist(iVar1383))
	{
		delete_ped(&Local_1386);
	}
	if (does_blip_exist(iVar1503))
	{
		remove_blip(&iLocal_1506);
	}
	remove_cover_point(&(iLocal_1777[4]));
	func_50(&(uLocal_239[1]));
	func_909(cParam0, 33554432);
	set_ped_config_flag(&(uLocal_239[1]), 249, false);
	set_ped_using_action_mode(iLocal_246, false, -1, 0);
	return 1;
}

bool func_783(char[4] cParam0)
{
	if (!func_1291(cParam0, 6, 1))
	{
		return false;
	}
	if (!func_1305(cParam0))
	{
		return false;
	}
	if (!does_rayfire_map_object_exist(iVar1827))
	{
		iLocal_1830 = get_rayfire_map_object(1353.486f, -1302.814f, 76.75661f, 100f, "des_rho_sheriff");
		return false;
	}
	else if (!func_120(cParam0, 4))
	{
		if (get_state_of_rayfire_map_object(iVar1827) == 5)
		{
			set_state_of_rayfire_map_object(iVar1827, 6);
		}
	}
	else if (get_state_of_rayfire_map_object(iVar1827) != 9)
	{
		set_state_of_rayfire_map_object(iVar1827, 9);
	}
	func_169(26, 0);
	if (does_entity_exist(iVar1383))
	{
		func_904(iVar1383, 704.6401f, -528.8958f, 70.4574f, -29.2f, 2, 1073741824);
	}
	func_904(&(uLocal_239[1]), 1358.285f, -1308.43f, 76.72815f, 159.69f, 2, 1073741824);
	func_1288(-599.7758f, -3.908978f, 88.6787f, -640.1675f, -78.47929f, 80.32367f, -630.6216f, -41.9204f, 83.8471f, 100f, 40f, 0);
	set_clock_time(20, 30, 0);
	_set_weather_type(1632247697, true, true, false, 0f, false);
	_0xc1799fafd2fdf52b(&(iLocal_1784[4]), 0, 0, 0);
	return cParam0->f_607 == cParam0->f_607;
}

bool func_784(char[4] cParam0)
{
	if (func_8(cParam0, 524288))
	{
		set_clock_time(20, 30, 0);
	}
	iLocal_1702 = 1;
	set_ped_combat_movement(&(uLocal_239[1]), 1);
	set_current_ped_weapon(Global_35, -1569615261, false, 0, false, false);
	func_904(iLocal_249, 1344.789f, -1307.486f, 75.5506f, 338.9842f, 2, 1073741824);
	task_stand_still(iLocal_249, -1);
	func_904(iLocal_250, 1346.174f, -1307.837f, 75.5757f, 338.9842f, 2, 1073741824);
	task_stand_still(iLocal_250, -1);
	func_151(cParam0, Global_35, "JOHN", 0, 0, 0, 0);
	func_151(cParam0, &(uLocal_239[1]), "MrsAdler", 0, 0, 0, 0);
	if (_does_volume_exist(&(iLocal_1784[14])))
	{
		uLocal_1826 = func_925(&(iLocal_1784[14]), 0, 0, 0);
		func_1271(&(iLocal_1784[14]), 0, 0, 1, 1, 0);
		func_1270(&(iLocal_1784[14]), 0, 0);
	}
	func_47(0, 0);
	return cParam0->f_607 == cParam0->f_607;
}

bool func_785(char[4] cParam0)
{
	if (func_120(cParam0, 4))
	{
		func_904(Global_35, 1358.753f, -1307.401f, 76.7243f, 163.5097f, 2, 1073741824);
	}
	func_1336(cParam0);
	if (!get_ped_config_flag(&(uLocal_239[1]), 498, true))
	{
		set_ped_config_flag(&(uLocal_239[1]), 498, true);
	}
	set_ped_combat_movement(&(uLocal_239[1]), 1);
	set_current_ped_weapon(&(uLocal_239[1]), -1569615261, false, 0, false, false);
	iLocal_1702 = 0;
	func_1314(&Local_1386);
	func_1314(Local_1285[0]);
	func_1293(&iLocal_1832, 35);
	func_557(vLocal_1551[8]);
	func_557(vLocal_1551[4]);
	func_469(cParam0, iLocal_246);
	func_149(cParam0, 500f);
	func_150(cParam0, 550f);
	pause_clock(false, 0);
	_0xc1799fafd2fdf52b(&(iLocal_1784[1]), 0, 0, 0);
	_0xc1799fafd2fdf52b(&(iLocal_1784[2]), 0, 0, 0);
	_0xc1799fafd2fdf52b(&(iLocal_1784[3]), 0, 0, 0);
	return cParam0->f_607 == cParam0->f_607;
}

int func_786(char[4] cParam0)
{
	func_1337(cParam0);
	func_1338(cParam0);
	func_1246(&(uLocal_239[1]), vLocal_1551[36]);
	func_1277(cParam0);
	if (func_1248(cParam0) > 1 && func_1339())
	{
		if (!func_394(iVar1682, 8388608))
		{
			func_420(&uLocal_1685, 8388608);
		}
	}
	if (func_394(iVar1682, 8388608))
	{
		if (!func_26(vLocal_1551[4]))
		{
			func_227(vLocal_1551[4]);
			iVar0 = 11;
			while (iVar0 <= 15)
			{
				task_combat_hated_targets(&(Local_264[iVar0]), -1f);
				iVar0++;
			}
			task_smart_flee_ped(iVar1383, Global_35, -1f, -1, 0, 1077936128, 0);
			task_combat_hated_targets(&(uLocal_239[1]), -1f);
		}
		if (func_26(vLocal_1551[4]))
		{
			if (func_1285(vLocal_1551[4]) > 5.5f)
			{
				func_1340(cParam0, "SAD3_FAIL_ALERT", "", 1, 0);
			}
		}
	}
	switch (func_1248(cParam0))
	{
		case 0:
			if (iVar1829 == 46)
			{
				func_135(cParam0, 2);
				func_134(cParam0, 1);
			}
			break;
		case 1:
			if (((func_1250(Global_35, 705.3852f, -480.0224f, 80.6113f, 1) <= 150f && func_1341(0)) && func_1342(0)) && func_1291(cParam0, 6, 0))
			{
				func_1343(iVar1383, 1774730608, 448785448, 0, 0, -1082130432);
				if (iVar1829 != 46)
				{
					func_1293(&iLocal_1832, 46);
				}
				func_1289(1);
				func_1289(4);
				func_1289(5);
				func_1289(6);
				func_1289(7);
				func_134(cParam0, 2);
			}
			break;
		case 2:
			if (is_waypoint_playback_going_on_for_ped(&(uLocal_239[1]), 0))
			{
				if (IntToFloat(get_ped_waypoint_progress(&(uLocal_239[1]))) >= fVar1697)
				{
					func_134(cParam0, 3);
				}
			}
			break;
		case 3:
			if (is_waypoint_playback_going_on_for_ped(&(uLocal_239[1]), 0) && get_ped_waypoint_progress(&(uLocal_239[1])) >= 300)
			{
				func_135(cParam0, 5);
				func_134(cParam0, 4);
			}
			break;
		case 4:
			if (!func_394(iVar1682, 8388608))
			{
				func_1263(Global_35, 721.4784f, -466.737f, 78.3604f, vLocal_1551[16], 1112014848, 1106247680, 1097859072, 1084227584, 3f, 0, 0, 1, 1, 1);
				if (func_1250(Global_35, 721.4784f, -466.737f, 78.3604f, 1) <= 20f)
				{
					_0x0d7fd6a55fd63aef(7, 3, 0);
					_0x0d7fd6a55fd63aef(6, 3, 0);
					if (!_is_ped_getting_into_a_mount_seat(Global_35, true) && !is_ped_on_mount(&(uLocal_239[1])))
					{
						if (!func_394(iVar1683, 16))
						{
							func_420(&uLocal_1686, 16);
							if (!func_26(vLocal_1551[41]))
							{
								func_27(vLocal_1551[41], 0);
							}
						}
						if (!func_1259(iLocal_249, -982327190))
						{
							task_stand_still(iLocal_249, -1);
						}
					}
					if (func_394(iVar1685, 8))
					{
						if (!func_1301("SAD3_OFFHORDEW"))
						{
							if ((!is_ped_on_mount(Global_35) && !is_ped_on_mount(&(uLocal_239[1]))) && func_1285(vLocal_1551[41]) >= 2f)
							{
								func_134(cParam0, 29);
							}
						}
					}
				}
			}
			break;
		case 29:
			if (!func_394(iVar1682, 8388608))
			{
				return 1;
			}
			break;
	}
	return 0;
}

bool func_787(var uParam0)
{
	set_player_control(player_id(), true, 0, false);
	func_174(&(iLocal_1784[1]));
	func_177(&iLocal_1505);
	func_169(26, 1);
	if (func_26(vLocal_1551[16]))
	{
		func_557(vLocal_1551[16]);
	}
	_0x0c6b89876262a99d(player_id(), &(uLocal_239[1]));
	if (_does_volume_exist(&(iLocal_1784[14])))
	{
		func_173(&uLocal_1826, &(iLocal_1784[14]), 0);
	}
	if (get_ped_config_flag(&(uLocal_239[1]), 498, true))
	{
		set_ped_config_flag(&(uLocal_239[1]), 498, false);
	}
	if (func_394(iVar1683, 256))
	{
		func_1254(&uLocal_1686, 256);
	}
	_0x660a8f876df1d4f8(7);
	_0x660a8f876df1d4f8(6);
	func_59(7);
	return uParam0->f_607 == uParam0->f_607;
}

bool func_788(char[4] cParam0)
{
	if (!func_1291(cParam0, 7, 1))
	{
		return false;
	}
	if (!func_1341(0))
	{
		return false;
	}
	if (!func_1342(0))
	{
		return false;
	}
	func_1343(iVar1383, 1774730608, 448785448, 0, 0, -1082130432);
	func_904(iLocal_250, 721.1177f, -466.261f, 78.3621f, 236.9742f, 2, 1073741824);
	func_904(iLocal_249, 722.0214f, -463.9054f, 78.3726f, 229.2442f, 2, 1073741824);
	func_904(&(uLocal_239[1]), 722.8301f, -497.114f, 74.3039f, 200.235f, 2, 1073741824);
	func_1289(1);
	func_1289(4);
	func_1289(5);
	func_1289(6);
	func_1289(7);
	func_938();
	func_1344(get_entity_coords(&(uLocal_239[1]), true, false));
	if (func_120(cParam0, 4))
	{
		set_current_ped_weapon(Global_35, 1402226560, true, 0, false, false);
		_add_ammo_to_ped(Global_35, 1402226560, 30, 752097756);
		set_player_control(player_id(), true, 0, false);
		set_player_forced_aim(player_id(), true, 0, -1, false);
		_0x2208438012482a1a(Global_35, true, false);
		force_ped_motion_state(Global_35, 1063765679, false, 1, false);
		_0x9f9a829c6751f3c7(player_id(), 6, 1);
	}
	return cParam0->f_607 == cParam0->f_607;
}

int func_789(char[4] cParam0)
{
	func_1345(cParam0, 8192);
	func_1289(10);
	func_426(cParam0, &(iLocal_1406[10]), "w_rifle_rollingBlock01", 0, 0, 0, 0);
	func_151(cParam0, &(uLocal_239[1]), "MrsAdler", 0, 0, 0, 0);
	return 1;
}

bool func_790(var uParam0)
{
	if (!does_blip_exist(Local_1386.f_1))
	{
		Local_1386.f_1 = _blip_add_for_entity(953018525, iVar1383);
		_0x6569f31a01b4c097(iVar1383, 4, 0);
		_0x18ff3110cf47115d(iVar1383, 10, 0);
		return false;
	}
	else
	{
		set_blip_name_from_text_file(Local_1386.f_1, "SAD3_ILO_BOUNT");
	}
	iLocal_1702 = 1;
	_set_ped_crouch_movement(&(uLocal_239[1]), true, 0, false);
	if (!has_ped_got_weapon(Global_35, 1402226560, 0, false))
	{
		func_322(1402226560, 50, 1, 1, 0, -334626412, 0, 0, 0, 0);
	}
	if (!func_26(vLocal_1551[15]))
	{
		func_27(vLocal_1551[15], 0);
	}
	add_relationship_group("REL_GANG_LEADER", &uLocal_1900);
	set_relationship_between_groups(2, iVar1897, 1269650476);
	set_relationship_between_groups(2, -1538724068, iVar1897);
	set_relationship_between_groups(2, 1862763509, iVar1897);
	set_ped_relationship_group_hash(iVar1383, iVar1897);
	_0x463803429297117c(&(Local_264[14]), get_entity_coords(Global_35, true, false), 3, 0);
	_0x463803429297117c(&(Local_264[15]), get_entity_coords(Global_35, true, false), 3, 0);
	_0x463803429297117c(iVar1383, get_entity_coords(Global_35, true, false), 3, 0);
	_0xf1c03a5352243a30(&(Local_264[11]));
	_0xf1c03a5352243a30(&(Local_264[12]));
	_0xf1c03a5352243a30(&(Local_264[13]));
	freeze_entity_position(Global_35, true);
	_0xc9151483cc06a414(iLocal_250);
	_0xc9151483cc06a414(iLocal_249);
	set_entity_visible(iLocal_250, true);
	set_entity_visible(iLocal_249, true);
	if (!is_entity_dead(iLocal_250))
	{
		task_stand_still(iLocal_250, -1);
	}
	set_entity_proofs(&(uLocal_239[1]), 2, false);
	func_1323(0);
	return uParam0->f_607 == uParam0->f_607;
}

int func_791(char[4] cParam0)
{
	func_1346(cParam0);
	func_1277(cParam0);
	if (!func_394(iVar1682, 2048))
	{
		set_player_forced_aim(player_id(), true, 0, -1, false);
		func_420(&uLocal_1685, 2048);
	}
	if (!func_186(&(uLocal_239[1]), 0) || !func_186(Global_35, 0))
	{
		return 0;
	}
	if (func_1347(&Global_35))
	{
		if (!func_394(iVar1681, 8192))
		{
			func_420(&uLocal_1684, 8192);
		}
		if (_get_anim_scene_progress(&(Local_72[0])) <= 0.5413f || func_1348(Global_35, &(Local_264[11])))
		{
			_delete_anim_scene(&(Local_72[0]));
		}
	}
	disable_control_action(0, -1304887797, false);
	disable_control_action(0, -1819459471, false);
	disable_control_action(0, -640622144, false);
	disable_control_action(0, 101002513, false);
	disable_control_action(0, -1879280170, false);
	disable_control_action(0, -1404316431, false);
	disable_control_action(0, -1404316431, false);
	disable_control_action(0, 1287709438, false);
	disable_control_action(0, 1301263553, false);
	disable_control_action(0, -39308912, false);
	disable_control_action(0, -654888872, false);
	_0xf45e46deecf7df6e(480, 0, 0, -1, -1);
	switch (func_1248(cParam0))
	{
		case 0:
			if (is_ped_shooting(&(Local_264[11])) || func_1347(&Global_35))
			{
				iVar0 = 0;
				while (iVar0 <= 2)
				{
					if (!is_entity_dead(&(iLocal_253[iVar0])))
					{
						task_fly_away(&(iLocal_253[iVar0]), Global_35);
						set_ped_as_no_longer_needed(iLocal_253[iVar0]);
					}
					iVar0++;
				}
				if (is_ped_shooting(Global_35))
				{
					if (!func_394(iVar1683, 64))
					{
						func_420(&uLocal_1686, 64);
					}
				}
				func_134(cParam0, 29);
			}
			break;
		case 29:
			return 1;
	}
	return 0;
}

bool func_792(var uParam0)
{
	freeze_entity_position(Global_35, false);
	_set_ped_crouch_movement(&(uLocal_239[1]), false, 0, false);
	return uParam0->f_607 == uParam0->f_607;
}

bool func_793(char[4] cParam0)
{
	if (!func_1291(cParam0, 8, 1))
	{
		return false;
	}
	if (!func_1342(1))
	{
		return false;
	}
	func_904(iLocal_250, 721.1177f, -466.261f, 78.3621f, 236.9742f, 2, 1073741824);
	func_904(iLocal_249, 722.0214f, -463.9054f, 78.3726f, 229.2442f, 2, 1073741824);
	func_904(Global_35, 727.4158f, -472.0645f, 84.897f, 156.352f, 1, 1073741824);
	if (!has_ped_got_weapon(Global_35, 1402226560, 0, false))
	{
		func_322(1402226560, 50, 1, 1, 0, -334626412, 0, 0, 0, 0);
	}
	_0xcffc3eccd7a5cceb(player_id(), 1402226560, 0);
	set_current_ped_weapon(Global_35, 1402226560, true, 0, false, false);
	_add_ammo_to_ped(Global_35, 1402226560, 30, 752097756);
	func_904(&(uLocal_239[1]), 713.8235f, -509.9036f, 72.6642f, 139.3386f, 2, 1073741824);
	_0x9f9a829c6751f3c7(player_id(), 6, 1);
	func_1344(get_entity_coords(&(uLocal_239[1]), true, false));
	set_player_forced_aim(player_id(), true, 0, -1, false);
	add_relationship_group("REL_GANG_LEADER", &uLocal_1900);
	set_relationship_between_groups(2, iVar1897, 1269650476);
	set_relationship_between_groups(2, -1538724068, iVar1897);
	set_relationship_between_groups(2, 1862763509, iVar1897);
	set_ped_relationship_group_hash(iVar1383, iVar1897);
	func_1289(1);
	func_1289(4);
	func_1289(5);
	func_1289(6);
	func_1289(7);
	func_1323(0);
	set_entity_proofs(&(uLocal_239[1]), 2, false);
	return cParam0->f_607 == cParam0->f_607;
}

bool func_794(char[4] cParam0)
{
	func_99(cParam0, 512);
	_0xeeed8fafec331a70(iVar1383, 715.0442f, -511.9054f, 72.8622f, 1);
	_0xf1c03a5352243a30(&(Local_264[11]));
	_0xf1c03a5352243a30(&(Local_264[12]));
	_0xf1c03a5352243a30(&(Local_264[13]));
	_0x463803429297117c(&(Local_264[14]), get_entity_coords(Global_35, true, false), 3, 0);
	_0x463803429297117c(&(Local_264[15]), get_entity_coords(Global_35, true, false), 3, 0);
	_0x463803429297117c(iVar1383, get_entity_coords(Global_35, true, false), 3, 0);
	task_follow_waypoint_recording(iVar1383, sLocal_233, 0, 14, -1, 0, 0, -1);
	return cParam0->f_607 == cParam0->f_607;
}

bool func_795(var uParam0)
{
	iLocal_1702 = 1;
	set_ped_config_flag(&(uLocal_239[1]), 454, true);
	if (func_1349(11, 15) > 0)
	{
		func_1350();
		task_combat_hated_targets(0, -1f);
		iVar0 = 14;
		while (iVar0 <= 15)
		{
			if (func_186(&(Local_264[iVar0]), 0))
			{
				func_1351(&(Local_264[iVar0]), get_random_float_in_range(0.3f, 0.5f), get_random_float_in_range(0.6f, 1f), 0);
			}
			iVar0++;
		}
		if (func_394(iVar1681, 8192))
		{
			iVar0 = 11;
			while (iVar0 <= 13)
			{
				if (func_186(&(Local_264[iVar0]), 0))
				{
					func_1351(&(Local_264[iVar0]), get_random_float_in_range(0.1f, 0.3f), get_random_float_in_range(0.4f, 0.6f), 0);
				}
				iVar0++;
			}
		}
		else
		{
			iVar0 = 12;
			while (iVar0 <= 13)
			{
				if (func_186(&(Local_264[iVar0]), 0))
				{
					func_1351(&(Local_264[iVar0]), get_random_float_in_range(0.1f, 0.3f), get_random_float_in_range(0.4f, 0.6f), 0);
				}
				iVar0++;
			}
		}
		if (func_394(iVar1681, 1))
		{
			close_sequence_task(iVar1505);
			clear_sequence_task(&uLocal_1508);
			func_1254(&uLocal_1684, 1);
		}
	}
	uLocal_262 = &Local_264[14];
	if (!is_entity_dead(iLocal_250))
	{
		task_stand_still(iLocal_250, -1);
	}
	func_1293(&iLocal_1832, 0);
	return uParam0->f_607 == uParam0->f_607;
}

int func_796(char[4] cParam0)
{
	func_1352(cParam0);
	func_1353(cParam0);
	func_1331(cParam0, &Local_264, &Local_1861, 1120403456);
	func_1277(cParam0);
	disable_control_action(0, -1304887797, false);
	disable_control_action(0, -1819459471, false);
	disable_control_action(0, -640622144, false);
	disable_control_action(0, 101002513, false);
	disable_control_action(0, -1879280170, false);
	disable_control_action(0, -1404316431, false);
	disable_control_action(0, -1404316431, false);
	disable_control_action(0, 1287709438, false);
	disable_control_action(0, 1301263553, false);
	disable_control_action(0, -39308912, false);
	disable_control_action(0, -654888872, false);
	if (is_entity_dead(iVar259) && !is_entity_dead(&(Local_264[15])))
	{
		func_1354(&uLocal_262);
	}
	if ((func_836(Global_35, 1, 0, 0) == 1402226560 && _0x6929e22158e52265(Global_35, 0, &uLocal_1932)) && _0x4823f13a21f51964(Global_35, &uLocal_1932) == 0)
	{
		func_322(218444191, _get_weapon_clip_size(1402226560), 1, 0, 0, 752097756, 0, 0, 0, 0);
	}
	if (!func_394(iVar1682, 262144))
	{
		if (is_explosion_in_sphere(24, get_entity_coords(&(Local_264[13]), true, false), 3f))
		{
			start_entity_fire(&(Local_264[13]), 0, -1, 0);
			func_420(&uLocal_1685, 262144);
		}
	}
	if (!func_394(iVar1681, 2))
	{
		if (is_explosion_in_sphere(24, get_entity_coords(&(Local_264[12]), true, false), 3f))
		{
			start_entity_fire(&(Local_264[12]), 0, -1, 2);
			func_420(&uLocal_1684, 2);
		}
	}
	if (!func_394(iVar1681, 4096))
	{
		if (is_waypoint_playback_going_on_for_ped(iVar1383, sLocal_233))
		{
			if (get_ped_waypoint_progress(iVar1383) >= 27)
			{
				func_904(iVar1383, 590.2183f, -621.9337f, 41.66826f, 147.3677f, 2, 1073741824);
				func_420(&uLocal_1684, 4096);
			}
		}
	}
	if (func_1355(vLocal_1551[29], 30f))
	{
		func_1333(cParam0, &(uLocal_239[1]), 1, 1);
	}
	else
	{
		set_entity_only_damaged_by_player(&(uLocal_239[1]), true);
		func_1333(cParam0, &(uLocal_239[1]), 0, 1);
	}
	switch (func_1248(cParam0))
	{
		case 0:
			if (func_1349(12, 15) <= 2 && func_1356())
			{
				func_134(cParam0, 1);
			}
			break;
		case 1:
			if (func_1349(12, 17) <= 2 && func_1357())
			{
				func_134(cParam0, 2);
			}
			break;
		case 2:
			if (func_1349(12, 19) == 0)
			{
				return 1;
			}
			break;
	}
	return 0;
}

bool func_797(var uParam0)
{
	set_player_forced_aim(player_id(), false, 0, -1, false);
	set_current_ped_weapon(&(uLocal_239[1]), 2077870112, false, 0, false, false);
	task_swap_weapon(&(uLocal_239[1]), 1, 1, 0, 0);
	if (func_1258(Global_35, &(iLocal_1784[7]), 1, 0))
	{
		set_gameplay_entity_hint(&(uLocal_239[1]), 0f, 0f, 0f, true, 2000, 2000, 2000, 0);
	}
	if (func_26(vLocal_1551[29]))
	{
		func_557(vLocal_1551[29]);
	}
	set_ped_relationship_group_hash(iVar1383, -1976316465);
	set_ped_config_flag(&(uLocal_239[1]), 454, false);
	return uParam0->f_607 == uParam0->f_607;
}

bool func_798(char[4] cParam0)
{
	if (!func_1291(cParam0, 10, 1))
	{
		return false;
	}
	func_904(iLocal_250, 721.1177f, -466.261f, 78.3621f, 236.9742f, 2, 1073741824);
	func_904(iLocal_249, 722.0214f, -463.9054f, 78.3726f, 229.2442f, 2, 1073741824);
	if (!has_ped_got_weapon(&(uLocal_239[1]), 2077870112, 0, false))
	{
		func_1358(&(uLocal_239[1]), 2077870112, 1, 1, 0, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
	}
	set_current_ped_weapon(&(uLocal_239[1]), 2077870112, true, 0, false, false);
	task_stand_still(iLocal_249, -1);
	if (!is_entity_dead(iLocal_250))
	{
		task_stand_still(iLocal_250, -1);
	}
	func_904(Global_35, 727.4158f, -472.0645f, 84.897f, 156.352f, 1, 1073741824);
	func_904(&(uLocal_239[1]), 718.3256f, -526.9822f, 72.44542f, 164.7369f, 2, 1073741824);
	add_relationship_group("REL_GANG_LEADER", &uLocal_1900);
	set_relationship_between_groups(2, iVar1897, 1269650476);
	set_relationship_between_groups(2, -1538724068, iVar1897);
	set_relationship_between_groups(2, 1862763509, iVar1897);
	func_1289(1);
	func_1289(4);
	func_1289(5);
	func_1289(6);
	func_1289(7);
	func_1323(0);
	set_entity_proofs(&(uLocal_239[1]), 2, false);
	return cParam0->f_607 == cParam0->f_607;
}

bool func_799(char[4] cParam0)
{
	set_entity_invincible(&(Local_264[20]), true);
	set_entity_invincible(&(Local_264[21]), true);
	func_1312(cParam0, &(uLocal_239[1]), 1);
	clear_ped_tasks(&(uLocal_239[1]), 1, 0);
	set_group_formation(get_ped_group_index(Global_35), 9);
	set_ped_config_flag(&(uLocal_239[1]), 167, false);
	set_ped_config_flag(iVar1383, 265, false);
	_0xf008e0ba1fe1d644(5);
	return cParam0->f_607 == cParam0->f_607;
}

bool func_800(char[4] cParam0)
{
	if (!func_1341(1))
	{
		return false;
	}
	if (!func_1359())
	{
		return false;
	}
	if (!func_1360())
	{
		return false;
	}
	if (!func_1361(cParam0))
	{
		return false;
	}
	if (!func_1362())
	{
		return false;
	}
	fLocal_1701 = 90f;
	iLocal_1702 = 1;
	func_1284(cParam0, &(uLocal_239[1]), 1105014447, 422991367, 1, 1);
	set_ped_combat_attributes(&(uLocal_239[1]), 12, true);
	set_ragdoll_blocking_flags(Global_35, 512);
	if (!func_1259(&(uLocal_239[1]), 242628503))
	{
		clear_sequence_task(&uLocal_1508);
		open_sequence_task(&uLocal_1508);
		task_go_to_coord_and_aim_at_hated_entities_near_coord(0, 697.5186f, -530.1703f, 70.02785f, 697.5186f, -530.1703f, 70.02785f, 2f, true, 0.5f, 4f, true, 0, 0, -687903391);
		task_put_ped_directly_into_cover(0, 697.5186f, -530.1703f, 70.02785f, 2000, 0, 0f, 0, 0, &(iLocal_1777[2]), 1, 0, 0);
		task_combat_hated_targets_in_area(0, get_entity_coords(&(uLocal_239[1]), true, false), 300f, 0, 66);
		close_sequence_task(iVar1505);
		task_perform_sequence(&(uLocal_239[1]), iVar1505);
		clear_sequence_task(&uLocal_1508);
	}
	set_blocking_of_non_temporary_events(&(uLocal_239[1]), true);
	set_ped_accuracy(&(uLocal_239[1]), 5);
	set_entity_invincible(&(Local_264[20]), false);
	set_entity_invincible(&(Local_264[21]), false);
	set_entity_only_damaged_by_player(iVar1383, true);
	set_ped_config_flag(iVar1383, 277, true);
	_0x19b2c7a6c34fad54(get_player_index(), 1.25f);
	request_ped_visibility_tracking(iVar1383);
	_0x75ba1cb3b7d40caf(iVar1383, true);
	func_227(vLocal_1551[5]);
	func_508(vLocal_1551[7], 10f);
	remove_ped_defensive_area(&(uLocal_239[1]), false);
	remove_ped_defensive_area(&(uLocal_239[1]), true);
	set_ped_combat_movement(&(uLocal_239[1]), 1);
	set_ped_sphere_defensive_area(&(uLocal_239[1]), 697.4718f, -530.1913f, 69.9705f, 2f, 1, 0, 0);
	_0x8acc0506743a8a5c(&(uLocal_239[1]), 1819659395, 1, -1082130432);
	if (!is_entity_dead(&(Local_264[20])))
	{
		func_904(&(Local_264[20]), 688.3911f, -534.0921f, 69.8765f, 311.0519f, 34, 1073741824);
	}
	if (!is_entity_dead(&(Local_264[21])))
	{
		func_904(&(Local_264[21]), 686.6816f, -542.9273f, 68.9126f, 319.1815f, 2, 1073741824);
		set_ped_sphere_defensive_area(&(Local_264[21]), 677.7883f, -546.0134f, 68.7059f, 1.5f, 0, 0, 0);
		func_1350();
		task_go_to_coord_and_aim_at_hated_entities_near_coord(0, 677.7883f, -546.0134f, 68.7059f, 692.2726f, -532.6925f, 70.351f, 2f, true, 0.5f, 4f, true, 0, 0, -687903391);
		task_combat_hated_targets_in_area(0, 677.7883f, -546.0134f, 68.7059f, 125f, 0, 0);
		func_1351(&(Local_264[21]), -1082130432, -1082130432, 0);
	}
	_0x2208438012482a1a(Global_35, false, false);
	clear_area(657.448f, -571.748f, 75.47181f, 60f, 1048576);
	func_1324(cParam0, "1-PlayerThreatensCortez");
	func_383(cParam0, 8388608);
	func_99(cParam0, 33554432);
	return cParam0->f_607 == cParam0->f_607;
}

int func_801(char[4] cParam0)
{
	bVar1 = false;
	Var2.f_8 = -1;
	Var2.f_17 = 1097859072;
	Var2.f_18 = 1000;
	Var2.f_19 = 1067450368;
	Var2.f_20 = 5000;
	Var2.f_21 = 42;
	Var2.f_22 = 1103626240;
	Var2.f_23 = 1077936128;
	Var2.f_24 = 1106247680;
	Var2.f_25 = 1103101952;
	Var2.f_26 = 1097859072;
	Var2.f_27 = 1103626240;
	_0xba0980b5c0a11924(0f);
	set_vehicle_density_multiplier_this_frame(0f);
	if (_0x8a3945405b31048f() > 0.93f)
	{
		func_1247(0.93f);
	}
	if (func_394(iVar1685, 128))
	{
		func_1331(cParam0, &Local_264, &Local_1877, 1120403456);
	}
	func_1363(cParam0);
	func_1364(cParam0);
	func_1365(cParam0);
	func_1366(cParam0);
	func_1367();
	func_1368();
	func_1277(cParam0);
	if (!func_394(iVar1682, 16))
	{
		iVar0 = 20;
		while (iVar0 <= 38)
		{
			if (does_entity_exist(&(Local_264[iVar0])))
			{
				if (func_186(&(Local_264[iVar0]), 0))
				{
					if (func_903(Global_35, &(Local_264[iVar0]), 1, 1) <= 40f)
					{
						if (is_tracked_ped_visible(&(Local_264[iVar0])))
						{
							set_entity_only_damaged_by_player(&(Local_264[iVar0]), false);
						}
						else
						{
							set_entity_only_damaged_by_player(&(Local_264[iVar0]), true);
						}
					}
				}
			}
			iVar0++;
		}
	}
	waypoint_recording_get_closest_waypoint(sLocal_233, get_entity_coords(Global_35, true, false), &iVar30);
	waypoint_recording_get_closest_waypoint(sLocal_233, get_entity_coords(&(uLocal_239[1]), true, false), &iVar31);
	func_1369(cParam0);
	if (func_1248(cParam0) <= 1)
	{
		func_1370(24);
		iVar32 = 25;
		while (iVar32 <= 38)
		{
			if (iVar31 >= func_1371(iVar32) || iVar30 >= func_1371(iVar32))
			{
				if (iVar32 == 28)
				{
					if (!func_1335(iVar32, 1))
					{
						return 0;
					}
				}
				else if (!func_1335(iVar32, 0))
				{
					return 0;
				}
				if (iVar32 == 38)
				{
					iVar33 = 3;
					while (iVar33 <= 5)
					{
						if (!is_entity_dead(&(iLocal_253[iVar33])))
						{
							func_1350();
							task_pause(0, 2500);
							task_fly_away(0, &(Local_264[iVar32]));
							func_1351(&(iLocal_253[iVar33]), -1082130432, -1082130432, 0);
							set_ped_as_no_longer_needed(iLocal_253[iVar33]);
						}
						iVar33++;
					}
				}
				else if (iVar32 == 37)
				{
					func_420(&uLocal_1684, 64);
					if (!is_entity_dead(&(iLocal_253[6])))
					{
						func_1350();
						task_follow_waypoint_recording(0, sLocal_234, 0, 14, -1, 0, 0, -1);
						task_animal_flee(0, Global_35, -1);
						func_1351(&(iLocal_253[6]), -1082130432, -1082130432, 0);
						set_ped_keep_task(&(iLocal_253[6]), true);
						set_ped_config_flag(&(iLocal_253[6]), 288, true);
						set_ped_config_flag(&(iLocal_253[6]), 230, true);
						set_ped_as_no_longer_needed(iLocal_253[6]);
					}
					if (!is_entity_dead(&(iLocal_253[7])))
					{
						func_1350();
						task_follow_waypoint_recording_at_offset(0, sLocal_234, 1f, 0, 14, -1, 0);
						task_animal_flee(0, Global_35, -1);
						func_1351(&(iLocal_253[7]), -1082130432, -1082130432, 0);
						set_ped_keep_task(&(iLocal_253[7]), true);
						set_ped_config_flag(&(iLocal_253[7]), 288, true);
						set_ped_config_flag(&(iLocal_253[7]), 230, true);
						set_ped_as_no_longer_needed(iLocal_253[7]);
					}
				}
				else if (iVar32 == 35)
				{
					if (!func_394(iVar1682, 64))
					{
						func_135(cParam0, 7);
						func_420(&uLocal_1685, 64);
					}
				}
			}
			if (does_entity_exist(&(Local_264[iVar32])))
			{
				func_1370(iVar32);
			}
			iVar32++;
		}
	}
	if (func_1248(cParam0) > 1 && func_1248(cParam0) < 5)
	{
		if (iVar1706 == 12)
		{
			func_134(cParam0, 5);
		}
	}
	if (func_1248(cParam0) <= 1)
	{
		if (func_1332(vLocal_1551[29], fVar1698))
		{
			func_1333(cParam0, &(uLocal_239[1]), 1, 1);
		}
		else if (!func_394(iVar1683, 8192))
		{
			set_entity_only_damaged_by_player(&(uLocal_239[1]), true);
			func_1333(cParam0, &(uLocal_239[1]), 0, 1);
		}
	}
	if (func_1248(cParam0) == 1)
	{
		if ((func_1258(Global_35, &(iLocal_1784[26]), 1, 0) || func_1258(Global_35, &(iLocal_1784[27]), 1, 0)) || func_903(Global_35, &(uLocal_239[1]), 1, 1) >= 50f)
		{
			if (!func_26(vLocal_1551[42]))
			{
				func_27(vLocal_1551[42], 0);
			}
			else if (func_1285(vLocal_1551[42]) >= 10f)
			{
				if (!func_394(iVar1683, 4096))
				{
					func_420(&uLocal_1686, 4096);
				}
			}
		}
		else
		{
			if (func_26(vLocal_1551[42]))
			{
				func_557(vLocal_1551[42]);
			}
			if (func_394(iVar1683, 4096))
			{
				func_1254(&uLocal_1686, 4096);
			}
		}
		if (func_394(iVar1683, 4096))
		{
			if (!func_394(iVar1683, 8192))
			{
				func_420(&uLocal_1686, 8192);
				func_1333(cParam0, &(uLocal_239[1]), 1, 1);
			}
		}
		else if (func_394(iVar1683, 8192))
		{
			func_1254(&uLocal_1686, 8192);
			set_entity_only_damaged_by_player(&(uLocal_239[1]), true);
			func_1333(cParam0, &(uLocal_239[1]), 0, 1);
		}
	}
	if (!func_394(iVar1682, 1073741824))
	{
		if (does_entity_exist(&(Local_264[37])))
		{
			if (is_tracked_ped_visible(&(Local_264[37])) && is_entity_on_screen(&(Local_264[37])))
			{
				set_ped_sphere_defensive_area(&(Local_264[37]), 579.1401f, -623.7258f, 40.88965f, 1f, 0, 0, 0);
				func_420(&uLocal_1685, 1073741824);
			}
		}
	}
	if (func_836(Global_35, 1, 0, 0) == 2055893578)
	{
		if (get_ped_relationship_group_hash(iVar1383) != iVar1897)
		{
			set_ped_relationship_group_hash(iVar1383, iVar1897);
		}
	}
	else if (get_ped_relationship_group_hash(iVar1383) != -1976316465)
	{
		set_ped_relationship_group_hash(iVar1383, -1976316465);
	}
	switch (func_1248(cParam0))
	{
		case 0:
			if ((!is_entity_dead(&(Local_264[20])) && Local_264[20]->f_2 == 0) && is_entity_dead(&(Local_264[21])))
			{
				Local_264[20]->f_2++;
				set_ped_sphere_defensive_area(&(Local_264[20]), 679.358f, -541.5372f, 68.5189f, 1.5f, 0, 0, 0);
				func_1350();
				task_go_to_coord_and_aim_at_hated_entities_near_coord(0, 679.358f, -541.5372f, 68.5189f, 692.2726f, -532.6925f, 70.351f, 2f, true, 0.5f, 4f, true, 0, 0, -687903391);
				task_combat_hated_targets_in_area(0, 679.358f, -541.5372f, 68.5189f, 125f, 0, 0);
				func_1351(&(Local_264[20]), -1082130432, -1082130432, 0);
			}
			if (func_903(Global_35, &(uLocal_239[1]), 1, 1) <= 25f || iVar30 >= 15)
			{
				iVar0 = 22;
				while (iVar0 <= 23)
				{
					if (!does_entity_exist(&(Local_264[iVar0])))
					{
						if (!func_1335(iVar0, 0))
						{
							return 0;
						}
					}
					iVar0++;
				}
			}
			if (is_entity_dead(&(Local_264[20])) || is_entity_dead(&(Local_264[21])))
			{
				if (!bVar1)
				{
					func_1335(24, 0);
					bVar1 = true;
				}
			}
			if ((is_entity_dead(&(Local_264[20])) && is_entity_dead(&(Local_264[21]))) || iVar30 >= 15)
			{
				iVar0 = 24;
				while (iVar0 <= 26)
				{
					if (!does_entity_exist(&(Local_264[iVar0])))
					{
						if (!func_1335(iVar0, 0))
						{
							return 0;
						}
					}
					iVar0++;
				}
				iLocal_66 = 1;
				func_134(cParam0, 1);
			}
			break;
		case 1:
			if (func_394(iVar1681, 64))
			{
				if (func_1372(30, 38) == 1)
				{
					iVar34 = 30;
					while (iVar34 <= 38)
					{
						if (!func_26(vLocal_1551[25]))
						{
							func_27(vLocal_1551[25], 0);
						}
						else if (func_913(vLocal_1551[25]) >= 40f)
						{
							if (!is_tracked_ped_visible(&(Local_264[iVar34])))
							{
								func_1286(&(Local_264[iVar34]), 0, 0);
							}
						}
						iVar34++;
					}
				}
				if (func_1372(30, 38) == 0)
				{
					func_183(&(uLocal_239[1]));
					func_1350();
					task_follow_waypoint_recording(0, sLocal_233, 0, 14, 90, 0, 0, -1);
					task_aim_at_entity(0, iVar1383, -1, 0, 0);
					func_1351(&(uLocal_239[1]), -1082130432, -1082130432, 0);
					func_134(cParam0, 2);
				}
				if (!func_394(iVar1681, 512))
				{
					iVar34 = 20;
					while (iVar34 <= 38)
					{
						if (func_186(&(Local_264[iVar34]), 0))
						{
							if (iVar34 < 30)
							{
								if (!is_tracked_ped_visible(&(Local_264[iVar34])))
								{
									if (!func_26(&(Local_264[iVar34]->f_4)))
									{
										func_27(&(Local_264[iVar34]->f_4), 0);
									}
									else if (func_913(&(Local_264[iVar34]->f_4)) >= 5f)
									{
										func_1286(&(Local_264[iVar34]), 1, 0);
									}
								}
								else if (func_26(&(Local_264[iVar34]->f_4)))
								{
									func_557(&(Local_264[iVar34]->f_4));
								}
							}
							else
							{
								set_ped_combat_attributes(&(Local_264[iVar34]), 46, true);
								set_ped_combat_attributes(&(Local_264[iVar34]), 58, true);
								set_ped_combat_movement(&(Local_264[iVar34]), 2);
							}
						}
						iVar34++;
					}
					func_420(&uLocal_1684, 512);
				}
				if (iVar30 >= 76)
				{
					if (!func_394(iVar1682, 16))
					{
						func_420(&uLocal_1685, 16);
					}
					iVar34 = 22;
					while (iVar34 <= 35)
					{
						set_entity_only_damaged_by_player(&(Local_264[iVar34]), false);
						if (func_1372(22, 38) <= 2)
						{
							if (func_186(&(Local_264[iVar34]), 0))
							{
								if (!is_tracked_ped_visible(&(Local_264[iVar34])))
								{
									if (!func_26(&(Local_264[iVar34]->f_4)))
									{
										func_27(&(Local_264[iVar34]->f_4), 0);
									}
									else if (func_913(&(Local_264[iVar34]->f_4)) >= 5f)
									{
										func_1286(&(Local_264[iVar34]), 1, 0);
									}
								}
								else if (func_26(&(Local_264[iVar34]->f_4)))
								{
									func_557(&(Local_264[iVar34]->f_4));
								}
							}
						}
						iVar34++;
					}
				}
			}
			break;
		case 2:
			if (does_blip_exist(Local_1386.f_1))
			{
				_set_blip_flash_style(Local_1386.f_1, -401963276);
			}
			if (!does_blip_exist(iVar1502))
			{
				iLocal_1505 = func_1373(408396114, iVar1772, 1);
			}
			func_135(cParam0, 10);
			func_134(cParam0, 3);
			break;
		case 3:
			if ((!func_1298() && (((is_player_free_aiming_at_entity(player_id(), iVar1383) || is_player_free_aiming_at_entity(player_id(), iVar1772)) || func_1374(Global_35, iVar1383, &Var2)) || func_1375(Global_35, iVar1383, &Var2, 0))) || (get_ped_config_flag(Global_35, 12, true) && (func_1376(get_entity_coords(iVar1772, true, false), 0.49f, 0.51f, 0.49f, 0.51f) || func_1376(get_entity_coords(iVar1383, true, false), 0.49f, 0.51f, 0.49f, 0.51f))))
			{
				if (!func_394(iVar1681, 1073741824))
				{
					func_420(&uLocal_1684, 1073741824);
				}
				iLocal_63 = 2;
				func_134(cParam0, 4);
				func_227(vLocal_1551[0]);
			}
			break;
		case 4:
			if (func_1377(&(Local_72[4])))
			{
				func_227(vLocal_1551[0]);
				func_134(cParam0, 5);
				iLocal_1709 = 8;
			}
			break;
		case 5:
			if (!func_1298())
			{
				return 1;
			}
			break;
	}
	return 0;
}

bool func_802(var uParam0)
{
	func_1323(1);
	func_163();
	iVar1 = 22;
	while (iVar1 <= 33)
	{
		_0x3088634cf8c819cf(&(Local_264[iVar1]));
		func_175(Local_264[iVar1], 0);
		iVar1++;
	}
	iVar0 = 0;
	while (iVar0 < 26)
	{
		if (does_entity_exist(&(iLocal_1406[iVar0])))
		{
			set_object_as_no_longer_needed(iLocal_1406[iVar0]);
		}
		iVar0++;
	}
	if (does_entity_exist(iVar1437))
	{
		delete_vehicle(&iLocal_1440);
	}
	iVar1 = 45;
	while (iVar1 <= 50)
	{
		if (does_entity_exist(&(Local_264[iVar1])))
		{
			delete_ped(Local_264[iVar1]);
		}
		iVar1++;
	}
	_0x3088634cf8c819cf(&(Local_1285[0]));
	func_1314(Local_1285[0]);
	if (_does_volume_exist(&(iLocal_1784[7])))
	{
		_delete_volume(&(iLocal_1784[7]));
	}
	if (does_blip_exist(Local_1386.f_1))
	{
		remove_blip(&(Local_1386.f_1));
	}
	set_ped_config_flag(iVar1383, 138, false);
	if (is_ped_in_group(&(uLocal_239[1])))
	{
		remove_ped_from_group(&(uLocal_239[1]));
	}
	clear_ped_tasks(iVar1383, 1, 0);
	if (func_26(vLocal_1551[29]))
	{
		func_557(vLocal_1551[29]);
	}
	_0x19b2c7a6c34fad54(get_player_index(), 1f);
	func_177(&iLocal_1505);
	stop_audio_scene("SAD3_Rowboat_Escape_Scene");
	remove_entity_from_audio_mix_group(iVar1772, 0f);
	pause_clock(true, 0);
	return uParam0->f_607 == uParam0->f_607;
}

bool func_803(char[4] cParam0)
{
	if (!func_1291(cParam0, 11, 1))
	{
		return false;
	}
	if (!func_1361(cParam0))
	{
		return false;
	}
	if (!func_1378(0))
	{
		return false;
	}
	if (!func_1378(1))
	{
		return false;
	}
	if (!func_1378(2))
	{
		return false;
	}
	if (!func_1378(3))
	{
		return false;
	}
	if (!_0xa0bc8faed8cfeb3c(iVar1383))
	{
		return false;
	}
	func_1323(1);
	func_1324(cParam0, "1-PlayerThreatensCortez");
	func_383(cParam0, 8388608);
	func_99(cParam0, 33554432);
	_0x140b3cb1d424a945(Global_35, -1);
	func_1379(11, 0);
	set_ped_relationship_group_hash(iVar1383, -401180987);
	set_relationship_between_groups(3, -1247684992, -401180987);
	if (!has_ped_got_weapon(&(uLocal_239[1]), 2077870112, 0, false))
	{
		func_1358(&(uLocal_239[1]), 2077870112, 1, 1, 0, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
	}
	set_current_ped_weapon(&(uLocal_239[1]), 2077870112, false, 0, false, false);
	return cParam0->f_607 == cParam0->f_607;
}

bool func_804(char[4] cParam0)
{
	if (func_120(cParam0, 4))
	{
		if (!_0x8cbe916cfc64ad5c(Global_35))
		{
			return false;
		}
	}
	else
	{
		if (!func_1378(0))
		{
			return false;
		}
		if (!func_1378(1))
		{
			return false;
		}
		if (!func_1378(2))
		{
			return false;
		}
		if (!func_1378(3))
		{
			return false;
		}
	}
	_0xff745b0346e19e2c(-2146271366);
	func_151(cParam0, Global_35, "JOHN", 0, 0, 0, 0);
	func_151(cParam0, &(uLocal_239[1]), "MrsAdler", 0, 0, 0, 0);
	func_151(cParam0, iVar1383, "RAMON_CORTEZ", 0, 0, 1, 0);
	func_426(cParam0, iVar1772, "rowboat", 0, 0, 0, 0);
	func_1380(cParam0, Global_35, 2, "w_revolver_cattleman01", 0, 0);
	return cParam0->f_607 == cParam0->f_607;
}

bool func_805(char[4] cParam0)
{
	if (func_120(cParam0, 4) || func_8(cParam0, 524288))
	{
		iVar0 = 39;
		while (iVar0 <= 42)
		{
			if (func_186(&(Local_264[iVar0]), 0))
			{
				if (!func_1259(&(Local_264[iVar0]), 242628503))
				{
					clear_sequence_task(&uLocal_1508);
					open_sequence_task(&uLocal_1508);
					if (iVar0 != 39 && iVar0 != 40)
					{
						task_go_to_coord_and_aim_at_hated_entities_near_coord(0, Local_264[iVar0]->f_10, Local_264[iVar0]->f_10, 2f, true, 0.5f, 3f, true, 0, 0, -687903391);
					}
					task_combat_hated_targets(0, -1f);
					close_sequence_task(iVar1505);
					if (iVar0 == 40)
					{
						_task_perform_sequence_2(&(Local_264[iVar0]), iVar1505, 2f, 2f);
					}
					else
					{
						task_perform_sequence(&(Local_264[iVar0]), iVar1505);
					}
					clear_sequence_task(&uLocal_1508);
				}
			}
			iVar0++;
		}
	}
	_0x1a7a802b2301edc0(Global_35);
	func_1379(11, 0);
	set_gameplay_entity_hint(&(Local_264[39]), 0f, 0f, 0f, true, 2000, 2000, 2000, 0);
	if (does_entity_exist(&(Local_264[43])))
	{
		delete_ped(Local_264[43]);
	}
	if (does_entity_exist(&(Local_264[44])))
	{
		delete_ped(Local_264[44]);
	}
	return cParam0->f_607 == cParam0->f_607;
}

int func_806(char[4] cParam0)
{
	if (!func_186(Global_35, 0) || !func_186(&(uLocal_239[1]), 0))
	{
		return 0;
	}
	func_1381(cParam0);
	func_1382(cParam0);
	func_1328();
	if (func_1248(cParam0) == 2 || func_1248(cParam0) == 3)
	{
		if (func_394(iVar1681, 4))
		{
			if (func_1250(Global_35, 580.0553f, -623.2661f, 41.3076f, 1) <= 2f)
			{
				func_1254(&uLocal_1684, 4);
				set_ped_sphere_defensive_area(&(uLocal_239[1]), 580.0553f, -623.2661f, 41.3076f, 2f, 0, 0, 0);
				func_1350();
				task_follow_waypoint_recording(0, sLocal_235, 0, iVar1828, -1, 0, 0, -1);
				task_combat_hated_targets_around_ped(0, 100f, 0, 0);
				func_1351(&(uLocal_239[1]), -1082130432, -1082130432, 0);
			}
		}
	}
	if (func_1332(vLocal_1551[29], 30f))
	{
		func_1333(cParam0, &(uLocal_239[1]), 1, 1);
	}
	else
	{
		set_entity_only_damaged_by_player(&(uLocal_239[1]), true);
		func_1333(cParam0, &(uLocal_239[1]), 0, 1);
	}
	switch (func_1248(cParam0))
	{
		case 0:
			func_1350();
			task_follow_waypoint_recording(0, sLocal_235, 0, iVar1828, -1, 0, 0, -1);
			task_combat_hated_targets_around_ped(0, 100f, 0, 0);
			func_1351(&(uLocal_239[1]), -1082130432, -1082130432, 0);
			set_ped_sphere_defensive_area(&(uLocal_239[1]), 580.0553f, -623.2661f, 41.3076f, 2f, 0, 0, 0);
			func_227(vLocal_1551[0]);
			func_134(cParam0, 1);
			break;
		case 1:
			func_134(cParam0, 2);
			break;
		case 2:
			if (func_1250(&(Local_264[41]), Local_264[41]->f_10, 1) <= 5f)
			{
				set_combat_float(&(Local_264[41]), 31, 1000f);
			}
			if (!func_394(iVar1681, 8))
			{
				if (func_1383() == 1)
				{
					set_ped_combat_attributes(&(uLocal_239[1]), 27, true);
					set_ped_combat_movement(&(uLocal_239[1]), 2);
					_0xc2266aa617668ad3(&(Local_264[41]), 1000f);
					func_420(&uLocal_1684, 8);
				}
			}
			if (func_1349(39, 42) == 0 || func_1285(vLocal_1551[0]) >= 300f)
			{
				clear_ped_tasks(&(uLocal_239[1]), 1, 0);
				func_227(vLocal_1551[0]);
				func_135(cParam0, 6);
				func_134(cParam0, 29);
			}
			break;
		case 29:
			if (!func_1298() && func_1285(vLocal_1551[0]) > 3f)
			{
				return 1;
			}
			break;
	}
	return 0;
}

bool func_807(var uParam0)
{
	if (func_394(iVar1682, 536870912))
	{
		func_1254(&uLocal_1685, 536870912);
	}
	_0xd17672447692478e(&(iLocal_1784[1]), 0);
	_0xd17672447692478e(&(iLocal_1784[2]), 0);
	_0xd17672447692478e(&(iLocal_1784[3]), 0);
	func_174(&(iLocal_1784[1]));
	func_174(&(iLocal_1784[2]));
	func_174(&(iLocal_1784[3]));
	if (func_26(vLocal_1551[29]))
	{
		func_557(vLocal_1551[29]);
	}
	pause_clock(false, 0);
	return uParam0->f_607 == uParam0->f_607;
}

bool func_808(char[4] cParam0)
{
	if (!func_1291(cParam0, 12, 1))
	{
		return false;
	}
	if (!func_1361(cParam0))
	{
		return false;
	}
	if (!_0xa0bc8faed8cfeb3c(iVar1383))
	{
		return false;
	}
	_0xff745b0346e19e2c(-2146271366);
	func_904(Global_35, 592.1201f, -616.1202f, 43.2157f, 329.1346f, 2, 1073741824);
	func_904(&(uLocal_239[1]), 591.0792f, -613.9103f, 43.6304f, 336.7403f, 2, 1073741824);
	set_ped_path_may_enter_water(iVar1383, true);
	_0x9de63896b176ea94(iVar1383, 1);
	set_ped_path_prefer_to_avoid_water(iVar1383, false, 1f);
	return cParam0->f_607 == cParam0->f_607;
}

bool func_809(char[4] cParam0)
{
	if (!func_8(cParam0, 8))
	{
		if (!_0xb8f52a3f84a7cc59(-2146271366))
		{
			return false;
		}
		else
		{
			task_carriable(iVar1383, -2146271366, 0, 0, 0);
		}
	}
	func_904(iLocal_249, 574.1319f, -542.3969f, 71.0097f, 203.9199f, 2, 1073741824);
	task_stand_still(iLocal_249, -1);
	func_904(iLocal_250, 576.1377f, -547.5103f, 69.2601f, 188.8126f, 2, 1073741824);
	task_stand_still(iLocal_250, -1);
	_0xcffc3eccd7a5cceb(player_id(), -1569615261, 0);
	return cParam0->f_607 == cParam0->f_607;
}

bool func_810(char[4] cParam0)
{
	if (!does_blip_exist(Local_1386.f_1))
	{
		Local_1386.f_1 = _blip_add_for_entity(953018525, iVar1383);
		return false;
	}
	else
	{
		set_blip_name_from_text_file(Local_1386.f_1, "SAD3_ILO_BOUNT");
	}
	func_1384(&(uLocal_239[1]), 869278708, 1971704925);
	_0x18ff3110cf47115d(iLocal_250, 15, 1);
	if (!func_1259(iLocal_250, 1227113341))
	{
		task_go_to_entity(iLocal_250, &(uLocal_239[1]), 20000, 5f, 2f, 15f, 0);
	}
	if (!func_1259(iLocal_250, 1056466932))
	{
		task_follow_to_offset_of_entity(iLocal_249, iLocal_250, -1f, -2f, 0f, 2f, -1, 1036831949, 1, 1, 0, 1, 1);
	}
	if (!func_26(vLocal_1551[5]))
	{
		func_27(vLocal_1551[5], 0);
	}
	else
	{
		func_227(vLocal_1551[5]);
	}
	if (_does_volume_exist(&(iLocal_1784[14])))
	{
		_0xc1799fafd2fdf52b(&(iLocal_1784[14]), 0, 0, 0);
		func_1271(&(iLocal_1784[14]), 0, 0, 1, 1, 0);
	}
	func_189();
	func_1385(cParam0, "1-CortezWasCaptured-Multi");
	func_1385(cParam0, "1-CortezWasCaptured-Normal");
	func_1293(&iLocal_1832, 0);
	func_420(&uLocal_1689, 1);
	return cParam0->f_607 == cParam0->f_607;
}

int func_811(char[4] cParam0)
{
	func_1386(cParam0);
	func_1387(cParam0);
	func_1246(&(uLocal_239[1]), vLocal_1551[36]);
	if (func_1248(cParam0) >= 2)
	{
		func_1388(cParam0);
		if (!func_394(iVar1682, 268435456))
		{
			if (func_1389(cParam0))
			{
				func_420(&uLocal_1685, 268435456);
			}
		}
	}
	if (!func_394(iVar1682, 67108864))
	{
		func_1251(&(uLocal_239[1]), iLocal_249, get_ped_group_index(Global_35));
	}
	switch (func_1248(cParam0))
	{
		case 0:
			iVar0 = _0x61914209c36efddb(iVar1383);
			if ((_get_carrier_as_mount(iVar1383) != iLocal_250 && _get_carrier_as_mount(iVar1383) != iLocal_249) && iVar0 != 8)
			{
				if (func_394(iVar1681, 1024))
				{
					func_1254(&uLocal_1684, 1024);
				}
				if (func_1316(Global_35, iVar1383))
				{
					if (does_blip_exist(Local_1386.f_1))
					{
						remove_blip(&(Local_1386.f_1));
						func_59(7);
						if (func_394(iVar1686, 1))
						{
							func_1254(&uLocal_1689, 1);
						}
					}
					if (!func_394(iVar1682, 65536))
					{
						if (!does_blip_exist(iVar1502))
						{
							if (!func_394(iVar1686, 2))
							{
								func_420(&uLocal_1689, 2);
							}
							func_1264(cParam0, "SAD3_OBJ_LIFT", -1082130432, 0, 0, -1, -1, 0);
							iLocal_1505 = func_1373(408396114, iLocal_250, 1);
							set_blip_name_from_text_file(iVar1502, "SAD3_BLIP_HORSE");
						}
					}
				}
				else
				{
					if (!does_blip_exist(Local_1386.f_1))
					{
						if (!func_394(iVar1686, 1))
						{
							func_420(&uLocal_1689, 1);
						}
						if (func_394(iVar1686, 2))
						{
							func_1254(&uLocal_1689, 2);
						}
						func_1284(cParam0, &(uLocal_239[1]), 1105014447, 422991367, 0, 1);
						func_1264(cParam0, "SAD3_OBJ4b", -1082130432, 0, 0, -1, -1, 0);
						func_1265(cParam0, "SAD3_OBJ4b", 0, 7500, 0, -1082130432, 0, 0, -1, -1, 0);
						Local_1386.f_1 = _blip_add_for_entity(953018525, iVar1383);
					}
					else
					{
						set_blip_name_from_text_file(Local_1386.f_1, "SAD3_ILO_BOUNT");
					}
					if (does_blip_exist(iVar1502))
					{
						remove_blip(&iLocal_1505);
					}
				}
				if (func_913(vLocal_1551[13]) >= 10f)
				{
					func_135(cParam0, 3);
				}
			}
			else
			{
				if (func_394(iVar1686, 1))
				{
					func_1254(&uLocal_1689, 1);
				}
				if (func_394(iVar1686, 2))
				{
					func_1254(&uLocal_1689, 2);
				}
				if (does_blip_exist(iVar1502))
				{
					remove_blip(&iLocal_1505);
				}
				if (does_blip_exist(Local_1386.f_1))
				{
					remove_blip(&(Local_1386.f_1));
				}
				if (is_ped_on_mount(Global_35))
				{
					if (!func_394(iVar1685, 32))
					{
						func_135(cParam0, 5);
						func_420(&uLocal_1688, 32);
					}
					if (!is_ped_group_member(&(uLocal_239[1]), get_ped_group_index(Global_35), 0))
					{
						set_ped_config_flag(&(uLocal_239[1]), 279, true);
						set_ped_as_group_member(&(uLocal_239[1]), get_ped_group_index(Global_35));
					}
					set_group_formation(get_ped_group_index(Global_35), 9);
					set_ped_config_flag(&(uLocal_239[1]), 167, true);
					if (func_394(iVar1686, 4))
					{
						func_1254(&uLocal_1689, 4);
					}
					if (!func_394(iVar1686, 8))
					{
						func_420(&uLocal_1689, 8);
					}
					func_59(7);
					func_134(cParam0, 1);
				}
				else if (!func_394(iVar1681, 1024))
				{
					func_1264(cParam0, "SAD3_OBJ1", -1082130432, 0, 0, -1, -1, 0);
					if (!func_394(iVar1685, 4))
					{
						func_135(cParam0, 4);
						func_420(&uLocal_1688, 4);
					}
					if (!func_394(iVar1686, 4))
					{
						func_420(&uLocal_1689, 4);
					}
					func_1390(7);
					func_420(&uLocal_1684, 1024);
				}
			}
			break;
		case 1:
			if (!is_ped_on_mount(Global_35))
			{
				func_1254(&uLocal_1684, 1024);
				if (func_394(iVar1686, 8))
				{
					func_1254(&uLocal_1689, 8);
				}
				if (!func_394(iVar1686, 4))
				{
					func_420(&uLocal_1689, 4);
				}
				func_134(cParam0, 0);
			}
			if (!func_394(iVar1682, 65536))
			{
				if (!does_blip_exist(iVar1502))
				{
					iLocal_1505 = func_1391(408396114, 1345.198f, -1306.681f, 75.5891f, 1);
					_blip_set_modifier(iVar1502, -1878373110);
				}
			}
			if (!is_ped_on_mount(&(uLocal_239[1])))
			{
				if (compare_strings(func_1392(), "SAD3_WAIT", false, -1) != 0)
				{
					if (does_blip_exist(iVar1502))
					{
						remove_blip(&iLocal_1505);
					}
					func_1284(cParam0, &(uLocal_239[1]), 1105014447, 422991367, 1, 1);
					func_1264(cParam0, "SAD3_WAIT", -1082130432, 0, 0, -1, -1, 0);
				}
			}
			else if (func_903(&(uLocal_239[1]), Global_35, 1, 1) <= 20f)
			{
				if (compare_strings(func_1392(), "SAD3_OBJ12a", false, -1) != 0)
				{
					if (!does_blip_exist(iVar1502))
					{
						iLocal_1505 = func_1391(408396114, 1345.198f, -1306.681f, 75.5891f, 1);
						_blip_set_modifier(iVar1502, -1878373110);
					}
					func_1312(cParam0, &(uLocal_239[1]), 1);
					func_1264(cParam0, "SAD3_OBJ12a", -1082130432, 0, 0, -1, -1, 0);
				}
			}
			if ((func_1250(Global_35, vLocal_1514, 1) <= 200f && func_1305(cParam0)) && func_1393())
			{
				if (_does_volume_exist(&(iLocal_1784[8])))
				{
					if (!_0x91a5f9cbebb9d936(uVar1815))
					{
						uLocal_1818 = func_925(&(iLocal_1784[8]), 0, 0, 0);
					}
					_0x2fcd528a397e5c88(&(iLocal_1784[8]), 16384);
					func_1270(&(iLocal_1784[8]), 0, 0);
					_0x2fcd528a397e5c88(&(iLocal_1784[8]), 8);
					_0x2fcd528a397e5c88(&(iLocal_1784[8]), 1048576);
					if (!_0x91a5f9cbebb9d936(uVar1816))
					{
						uLocal_1819 = _0x4c39c95ae5db1329(&(iLocal_1784[8]), false, 15);
					}
				}
				func_1394();
				func_1313(cParam0, &(Local_72[7]));
				_0xc1799fafd2fdf52b(&(iLocal_1784[4]), 0, 0, 0);
				func_1244(1339.756f, -1310.034f, 75.4467f, 70f, 0, 0, 0, 0, 0);
				func_557(vLocal_1551[17]);
				func_134(cParam0, 2);
			}
			break;
		case 2:
			if (is_ped_on_mount(&(uLocal_239[1])))
			{
				func_1263(&(uLocal_239[1]), vLocal_1517, vLocal_1551[17], 50f, 20f, 10f, 5f, 0.5f, 0, 0, 1, 1, 1);
			}
			if (func_1250(Global_35, vLocal_1514, 1) <= 70f)
			{
				if (!func_394(iVar1682, 67108864))
				{
					func_135(cParam0, 7);
					func_420(&uLocal_1685, 67108864);
				}
			}
			if (func_1250(Global_35, vLocal_1514, 1) <= 50f)
			{
				if (is_ped_on_mount(Global_35))
				{
					func_1263(Global_35, 1348.525f, -1310.243f, 75.5912f, vLocal_1551[16], 50f, 20f, 5f, 4f, 0.5f, 0, 0, 1, 1, 1);
				}
				else
				{
					func_177(&iLocal_1505);
				}
				if (!is_ped_on_mount(Global_35))
				{
					if (func_1316(Global_35, iVar1383))
					{
						if (does_blip_exist(Local_1386.f_1))
						{
							remove_blip(&(Local_1386.f_1));
						}
						if (!does_blip_exist(iVar1503))
						{
							func_1264(cParam0, "SAD3_OBJ4c", -1082130432, 0, 0, -1, -1, 0);
							iLocal_1506 = func_1317(iLocal_246, 422991367, 1, 1);
							_blip_set_modifier(iVar1503, -401963276);
						}
					}
					else
					{
						if (!does_blip_exist(Local_1386.f_1))
						{
							func_1264(cParam0, "SAD3_OBJ4b", -1082130432, 0, 0, -1, -1, 0);
							func_1265(cParam0, "SAD3_OBJ4b", 0, 7500, 0, -1082130432, 0, 0, -1, -1, 0);
							Local_1386.f_1 = _blip_add_for_entity(953018525, iVar1383);
						}
						else
						{
							set_blip_name_from_text_file(Local_1386.f_1, "SAD3_ILO_BOUNT");
						}
						if (does_blip_exist(iVar1503))
						{
							remove_blip(&iLocal_1506);
						}
					}
					if (_is_anim_scene_loaded(cParam0->f_7375.f_804, true, false) && _0x23e33cb9f4a3f547(cParam0->f_7375.f_804, "1-CortezWasCaptured-Normal"))
					{
						func_1395(cParam0, "1-CortezWasCaptured-Normal");
						func_1324(cParam0, "1-CortezWasCaptured-Normal");
					}
					if (iLocal_64 == 4)
					{
						func_134(cParam0, 29);
					}
				}
			}
			break;
		case 4:
			break;
		case 5:
			break;
		case 29:
			return 1;
	}
	return 0;
}

bool func_812(var uParam0)
{
	func_183(&(uLocal_239[1]));
	if (does_blip_exist(iVar1502))
	{
		func_177(&iLocal_1505);
	}
	if (func_26(vLocal_1551[16]))
	{
		func_557(vLocal_1551[16]);
	}
	if (_does_anim_scene_exist(&(Local_72[7])))
	{
		_delete_anim_scene(&(Local_72[7]));
	}
	_0x18ff3110cf47115d(iVar1383, 4, 1);
	return uParam0->f_607 == uParam0->f_607;
}

bool func_813(char[4] cParam0)
{
	if (!func_1291(cParam0, 11, 1))
	{
		return false;
	}
	func_1394();
	if (!func_1389(cParam0))
	{
		return false;
	}
	if (!func_1305(cParam0) || !func_1393())
	{
		return false;
	}
	iLocal_1702 = 0;
	set_clock_time(5, 30, 0);
	func_1385(cParam0, "1-CortezWasCaptured-Multi");
	func_1395(cParam0, "1-CortezWasCaptured-Multi");
	func_1324(cParam0, "1-CortezWasCaptured-Multi");
	func_904(iVar1383, 1357.908f, -1304.037f, 76.7606f, 86.5674f, 2, 1073741824);
	return cParam0->f_607 == cParam0->f_607;
}

bool func_814(char[4] cParam0)
{
	if (!func_1316(Global_35, iVar1383))
	{
		task_carriable(iVar1383, -2146271366, Global_35, 0, 0);
	}
	func_1322(iLocal_249, func_1321(3, 6), 2, 1073741824);
	task_stand_still(iLocal_249, -1);
	set_current_ped_weapon(Global_35, -1569615261, false, 0, false, false);
	_0xcffc3eccd7a5cceb(player_id(), -1569615261, 0);
	func_151(cParam0, iVar260, "Horse_01", 0, 0, 0, 0);
	func_151(cParam0, Global_35, "JOHN", 0, 0, 0, 0);
	func_151(cParam0, &(uLocal_239[1]), "MrsAdler", 0, 0, 0, 0);
	func_151(cParam0, iLocal_250, "Horse_01^1", 0, 0, 0, 0);
	func_151(cParam0, iLocal_246, "U_M_M_RHDSHERIFF_01", 0, 0, 0, 0);
	func_151(cParam0, iVar1383, "RAMON_CORTEZ", 0, 0, 1, 0);
	func_151(cParam0, iLocal_247, "RhoDeputy_01", 0, 0, 0, 0);
	func_151(cParam0, iLocal_248, "RhoDeputy_02", 0, 0, 0, 0);
	func_1396(cParam0, 3072);
	func_1397(cParam0, 4);
	func_1398(cParam0, 524288);
	return cParam0->f_607 == cParam0->f_607;
}

bool func_815(var uParam0)
{
	func_227(vLocal_1551[0]);
	return uParam0->f_607 == uParam0->f_607;
}

int func_816(char[4] cParam0)
{
	if (func_1399())
	{
		return 1;
	}
	if (iLocal_57 >= 2)
	{
		_0xe296208c273bd7f0(0, -1, 0, 17, 1, 0);
	}
	switch (iLocal_57)
	{
		case 1:
			if (!is_screen_fading_out() && !is_screen_faded_out())
			{
				do_screen_fade_out(1000);
			}
			else
			{
				iLocal_57 = 2;
			}
			break;
		case 2:
			break;
	}
	return 0;
}

bool func_817(var uParam0)
{
	if (!animpostfx_is_running("SkyTimelapse_0600_01"))
	{
		_0x37d7bdba89f13959("SkyTimelapse_0600_01");
	}
	func_175(&Local_1386, 1);
	func_175(&iLocal_247, 0);
	func_175(&iLocal_248, 0);
	func_188(&iLocal_1776, 0);
	func_473(11, 0, 0, 1, -1082130432, 1, 1, 0, 0, 0, 0);
	if (func_185(70, 1))
	{
		func_187(70, 1, 1, 0, 0);
	}
	if (iVar1890 != 0)
	{
		_0xd2b9c78537ed5759(iVar1890);
	}
	return uParam0->f_607 == uParam0->f_607;
}

bool func_818()
{
	return func_1400() != -1;
}

bool func_819()
{
	return func_1401() != -1;
}

bool func_820()
{
	if (func_755() < 651 || func_755() > 750)
	{
		return false;
	}
	return true;
}

bool func_821()
{
	return func_1402() != -1;
}

bool func_822(var uParam0, int iParam1)
{
	return (uParam0->f_8 && iParam1) != 0;
}

bool func_823(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

Vector3 func_824(var uParam0)
{
	return uParam0->f_862;
}

void func_825(var uParam0)
{
	if (func_1403(&iVar0))
	{
		if (func_582(iVar0, 0))
		{
			if (func_606(iVar0) == -525676072)
			{
				_set_ped_component_disabled(Global_35, 1249071452, 0);
				func_634(Global_35, -2065815962, 0, 1108822547, 0, 1, 0, 0, 0, 0);
			}
			else
			{
				_set_ped_component_disabled(Global_35, 1606587013, 0);
			}
			if (!func_582(*uParam0, 0))
			{
				*uParam0 = iVar0;
			}
		}
	}
}

void func_826(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (Global_1935630->f_12)
	{
		return;
	}
	Global_16 = 1;
	if (!network_is_game_in_progress())
	{
		func_119(0, 0);
		func_1404(-1);
	}
	func_1405(1);
	set_entity_invincible(Global_35, true);
	if (!func_823(*iParam0, 32))
	{
		iParam1 |= 16;
	}
	if (!func_823(*iParam0, 64))
	{
		iParam1 |= 8;
	}
	if (!func_823(*iParam0, 128))
	{
		iParam1 |= 32;
	}
	if (func_823(*iParam0, 131072))
	{
		iParam1 |= 2048;
	}
	if (!func_823(*iParam0, 32768))
	{
		set_player_control(get_player_index(), false, iParam1, true);
	}
	if (!func_823(*iParam0, 1))
	{
		_0xf239400e16c23e08(0, 0);
	}
	if (!func_823(*iParam0, 65536))
	{
		set_everyone_ignore_player(player_id(), true);
	}
	if (!func_823(*iParam0, 4) && !func_823(*iParam0, 2))
	{
		_hide_hud_component(-1679307491);
	}
	else
	{
		_display_hud_component(-1679307491);
	}
	if (!func_823(*iParam0, 2048))
	{
		func_838(0, 0);
	}
	if (func_823(*iParam0, 8))
	{
		clear_ped_tasks_immediately(Global_35, false, true);
	}
	if (func_823(*iParam0, 256))
	{
		_hide_ped_weapons(Global_35, 2, true);
	}
	if (func_823(*iParam0, 8192))
	{
		func_938();
	}
	if (!func_823(*iParam0, 262144))
	{
		set_ped_reset_flag(Global_35, 264, true);
	}
	if (!func_823(*iParam0, 512))
	{
		if (is_gameplay_hint_active())
		{
			stop_gameplay_hint(false);
		}
	}
	if (!func_823(*iParam0, 1024))
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
		if (!func_823(*iParam0, 16))
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
						if (func_1406() == iVar7)
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
						func_1407(&vVar3, 50, 10, 0);
					}
					_0xed00d72f81cf7278(iVar7, 0, 1);
					set_entity_coords(iVar7, vVar3, false, true, true, true);
					if (bVar8)
					{
						func_1408(2);
						func_1409(-1);
						func_1410(vVar3);
						func_1412(func_1411());
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
	if (!func_823(*iParam0, 4096))
	{
		func_1413(Global_35);
	}
	if (!func_823(*iParam0, 1048576))
	{
		_0xdd1232b332cbb9e7(7, 1, 0);
	}
	if (!func_823(*iParam0, 2097152))
	{
		if (func_1414() || _0x50f124e6ef188b22(Global_35))
		{
			func_1415(1);
		}
	}
	if (Global_1359489->f_16 & 4194304 == 0)
	{
		Global_1359489->f_16 |= 4194304;
	}
	*iParam0 = 0;
}

void func_827(var uParam0, vector3 vParam1)
{
	uParam0->f_862 = { vParam1 };
}

void func_828(var uParam0)
{
	if (func_822(uParam0, 2048) && !func_399(func_1416(uParam0)))
	{
		bVar0 = _does_volume_exist(uParam0->f_4);
		iVar1 = _get_last_mount(Global_35);
		if ((!is_entity_dead(iVar1) && ((bVar0 && is_entity_in_volume(iVar1, uParam0->f_4, true, 0)) || func_822(uParam0, -2147483648))) && get_mount(Global_35) != iVar1)
		{
			iVar2 = 2;
			if (is_ped_in_writhe(iVar1))
			{
				iVar2 |= 32;
			}
			func_904(iVar1, func_1416(uParam0), func_1417(uParam0), iVar2, 1073741824);
		}
		iVar3 = get_players_last_vehicle();
		if ((!is_entity_dead(iVar3) && ((bVar0 && is_entity_in_volume(iVar3, uParam0->f_4, true, 0)) || func_822(uParam0, -2147483648))) && !is_ped_in_vehicle(Global_35, iVar3, true))
		{
			func_904(iVar3, func_1416(uParam0), func_1417(uParam0), 2, 1073741824);
		}
	}
}

void func_829(var uParam0)
{
	if ((func_822(uParam0, 268435456) && !func_399(func_1416(uParam0))) && is_ped_in_any_vehicle(Global_35, false))
	{
		iVar0 = get_vehicle_ped_is_using(Global_35);
		if (!is_entity_dead(iVar0))
		{
			vVar1 = { func_1416(uParam0) };
			func_904(iVar0, vVar1, func_1418(vVar1, Global_36, 1), 2, 1073741824);
			set_vehicle_on_ground_properly(iVar0, 0f);
			set_entity_velocity(iVar0, 0f, 0f, 0f);
			set_vehicle_forward_speed(iVar0, 0f);
		}
	}
}

void func_830(var uParam0, vector3 vParam1, int iParam4, bool bParam5)
{
	uParam0->f_865 = { vParam1 };
	uParam0->f_868 = iParam4;
	if (func_399(vParam1))
	{
		func_1419(uParam0, 2048, 1);
	}
	else
	{
		func_754(uParam0, 2048);
		if (bParam5)
		{
			func_754(uParam0, -2147483648);
		}
	}
}

void func_831(var uParam0)
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
					if (!func_1420(uParam0->f_13[iVar0], 8))
					{
						if (func_696(func_1097(iVar1, 0, 1, 0)))
						{
							if (!func_1421(uParam0, get_current_ped_weapon_entity_index(iVar1, 0)))
							{
								set_current_ped_weapon(iVar1, -1569615261, true, 0, false, false);
							}
						}
						if (func_696(func_1097(iVar1, 1, 1, 0)))
						{
							if (!func_1421(uParam0, get_current_ped_weapon_entity_index(iVar1, 1)))
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

void func_832(var uParam0, bool bParam1)
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

void func_833(var uParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
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
			func_1193(262144);
		}
	}
	else
	{
		bParam6 = false;
		if (iParam3 == -1 || iParam3 == 8)
		{
			func_1422(iParam1, 29, bVar4, 1, 0);
			func_1422(iParam1, 31, bVar4, 1, 0);
			func_1422(iParam1, 30, bVar4, 1, 0);
			func_1422(iParam1, 22, bVar4, 1, 0);
			func_1422(iParam1, 37, bVar4, 1, 0);
		}
	}
	if ((func_1133(32768) && func_1423(1108822547, 8)) && func_1424(10, iParam3))
	{
		func_1425(iParam1, 0, 1);
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
			iVar3 = func_1201(iVar1, 1);
			if (func_1423(iVar3, 8))
			{
			}
			else if (&Global_1946804->f_57[iVar1]->f_2[0] == -1802376732 || &uParam0->f_1[iVar1] == 0)
			{
			}
			else
			{
				iVar2 = &uParam0->f_1[iVar1];
				if (!func_1424(iVar1, iParam3))
				{
				}
				else if ((func_1423(iVar3, 6) || &uParam0->f_1[iVar1] == &Global_1946804->f_57[iVar1]) || uParam0->f_1[iVar1]->f_1 == 289238755)
				{
					if (!func_1423(iVar3, 1) || bParam2)
					{
						Global_1946804->f_857++;
						if (!bParam6)
						{
							func_1422(iParam1, iVar1, bVar4, 1, 0);
						}
						if (uParam0->f_1[iVar1]->f_1 == 289238755)
						{
							Global_1946804->f_2456[iVar1]->f_1 = 289238755;
						}
						func_1426(iVar3, 1, 6);
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
								func_1422(iParam1, iVar1, bVar4, 1, &(uParam0->f_1[iVar1]));
							}
							Global_1946804->f_2456[iVar1] = &uParam0->f_1[iVar1];
							Global_1946804->f_2456[iVar1]->f_1 = uParam0->f_1[iVar1]->f_1;
							if (func_1423(iVar3, 1))
							{
								func_1427(iVar3, 1, 6);
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

bool func_834(int iParam0)
{
	switch (iParam0)
	{
		case 14:
		case 34:
			return !func_1428((*Global_1835011)[iParam0]);
	}
	return false;
}

Vector3 func_835(int iParam0)
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

int func_836(int iParam0, bool bParam1, int iParam2, bool bParam3)
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

int func_837(int iParam0, int iParam1)
{
	return func_1429(&uVar0, iParam0, iParam1);
}

void func_838(bool bParam0, bool bParam1)
{
	iVar2 = 0;
	while (iVar2 < 29)
	{
		iVar4 = iVar2;
		if (get_current_ped_weapon(Global_35, &iVar3, false, iVar4, true))
		{
			if (func_696(iVar3) && _0x705be297eebdb95d(iVar3))
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
		func_1430(1);
	}
}

void func_839(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
}

void func_840(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_1 = 0;
}

void func_841(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
}

void func_842(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
}

void func_843(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

void func_844(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

void func_845(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
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
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
}

void func_848(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

void func_849(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
}

int func_850(var uParam0, int iParam1)
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

int func_851(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (!func_862((*uParam0)[iVar0]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_852(var uParam0, int iParam1)
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

int func_853(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (!func_877((*uParam0)[iVar0]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_854(var uParam0, char* sParam1)
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

int func_855(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 40)
	{
		if (!func_864((*uParam0)[iVar0]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_856(int iParam0, int iParam1)
{
	iVar0 = func_1431(iParam1);
	return (iParam0 && iVar0) != 0;
}

int func_857(var uParam0, char* sParam1, int iParam2)
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

int func_858(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (!func_871((*uParam0)[iVar0]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_859(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_860(var uParam0, int iParam1)
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

void func_861(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 || iParam1);
}

bool func_862(var uParam0)
{
	return *uParam0 != 0;
}

void func_863(var uParam0)
{
	if (!func_893(uParam0->f_1, 1))
	{
		request_model(*uParam0, false);
		func_859(&(uParam0->f_1), 1);
	}
}

bool func_864(var uParam0)
{
	return !is_string_null_or_empty(*uParam0);
}

void func_865(var uParam0)
{
	if (!func_893(uParam0->f_3, 1))
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
		func_859(&(uParam0->f_3), 1);
	}
}

bool func_866(var uParam0)
{
	return !is_string_null_or_empty(*uParam0);
}

void func_867(var uParam0)
{
	if (!func_893(uParam0->f_1, 1))
	{
		request_anim_dict(*uParam0);
		func_859(&(uParam0->f_1), 1);
	}
}

bool func_868(var uParam0)
{
	return !is_string_null_or_empty(*uParam0);
}

bool func_869(var uParam0)
{
	if (func_893(uParam0->f_1, 2))
	{
		return true;
	}
	if (!func_893(uParam0->f_1, 1))
	{
		func_1432(uParam0);
	}
	if (_0x85b8f04555ab49b8(*uParam0))
	{
		func_859(&(uParam0->f_1), 2);
		return true;
	}
	return false;
}

bool func_870(var uParam0)
{
	if (func_893(*uParam0, 2))
	{
		return true;
	}
	if (!func_893(*uParam0, 1))
	{
		func_1433(uParam0);
	}
	if (has_ptfx_asset_loaded())
	{
		func_859(uParam0, 2);
		return true;
	}
	return false;
}

bool func_871(var uParam0)
{
	return !is_string_null_or_empty(*uParam0);
}

void func_872(var uParam0)
{
	if (!func_893(uParam0->f_2, 1))
	{
		if (func_1434(uParam0))
		{
			if (_is_anim_scene_metadata_loaded(uParam0->f_1, false))
			{
				sVar0 = func_1435(get_entity_model(Global_35));
				if (_0x6f1f0b17109309da(uParam0->f_1, sVar0))
				{
					set_anim_scene_entity(uParam0->f_1, sVar0, Global_35, 0);
				}
				else if (_0x6f1f0b17109309da(uParam0->f_1, "player_zero") && func_308())
				{
					set_anim_scene_entity(uParam0->f_1, "player_zero", Global_35, 0);
				}
				else if (_0x6f1f0b17109309da(uParam0->f_1, "player_three") && func_1053())
				{
					set_anim_scene_entity(uParam0->f_1, "player_three", Global_35, 0);
				}
				load_anim_scene(uParam0->f_1);
				func_859(&(uParam0->f_2), 1);
			}
		}
	}
}

bool func_873(var uParam0)
{
	return !is_string_null_or_empty(*uParam0);
}

void func_874(var uParam0, int iParam1)
{
	if (!func_893(uParam0->f_1, 1))
	{
		if (!_is_anim_scene_loaded(iParam1, true, false))
		{
			return;
		}
		_0xdf7b5144e25cd3fe(iParam1, *uParam0);
		func_859(&(uParam0->f_1), 1);
	}
}

bool func_875(var uParam0)
{
	return *uParam0 != 0;
}

void func_876(var uParam0)
{
	if (!func_893(uParam0->f_2, 1))
	{
		_request_propset(*uParam0);
		func_859(&(uParam0->f_2), 1);
	}
}

bool func_877(var uParam0)
{
	return *uParam0 != 0;
}

void func_878(var uParam0)
{
	if (!func_893(uParam0->f_3, 1))
	{
		_0x72d4cb5db927009c(*uParam0, uParam0->f_1, uParam0->f_2);
		func_859(&(uParam0->f_3), 1);
	}
}

bool func_879(var uParam0)
{
	return !is_string_null_or_empty(*uParam0);
}

void func_880(var uParam0)
{
	if (!func_893(uParam0->f_1, 1))
	{
		request_script_audio_bank(*uParam0);
		func_859(&(uParam0->f_1), 1);
	}
}

bool func_881(var uParam0)
{
	return func_1436(*uParam0);
}

void func_882(var uParam0)
{
	if (!func_893(uParam0->f_1, 1))
	{
		_request_imap(*uParam0);
		func_859(&(uParam0->f_1), 1);
	}
}

bool func_883(var uParam0)
{
	return !is_string_null_or_empty(*uParam0);
}

void func_884(var uParam0)
{
	if (!func_893(uParam0->f_2, 1))
	{
		_0xe368e8422c860ba7(*uParam0, uParam0->f_1, -2);
		func_859(&(uParam0->f_2), 1);
	}
}

bool func_885(var uParam0)
{
	return !is_string_null_or_empty(*uParam0);
}

void func_886(var uParam0)
{
	if (!func_893(uParam0->f_1, 1))
	{
		_0x2b6529c54d29037a(*uParam0);
		func_859(&(uParam0->f_1), 1);
	}
}

bool func_887(var uParam0, int iParam1, char* sParam2)
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

void func_888(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5)
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
		sParam2 = func_750(iParam1);
	}
	if (is_string_null_or_empty(sParam2))
	{
		if (does_entity_exist(iParam1))
		{
		}
		return;
	}
	iVar0 = func_1437(uParam0, iParam1);
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
		iVar1 = func_1438(uParam0, sParam2);
		if (does_entity_exist(iVar1) && iVar1 != iParam1)
		{
			func_1439(uParam0, iVar1);
		}
	}
	if (iVar0 == -1)
	{
		iVar0 = func_1440(uParam0);
	}
	if (iVar0 != -1)
	{
		uParam0->f_13[iVar0] = iParam1;
		StringCopy(&(uParam0->f_13[iVar0]->f_1), sParam2, 64);
		uParam0->f_13[iVar0]->f_9 = iParam3;
		uParam0->f_13[iVar0]->f_10 = iParam4;
		if (bParam5)
		{
			func_1441(uParam0->f_13[iVar0], 2);
		}
		else
		{
			func_1442(uParam0->f_13[iVar0], 2);
		}
	}
}

struct<4> func_889(int iParam0)
{
	if (!func_196(iParam0))
	{
		return Var0;
	}
	return (*Global_1835011)[iParam0]->f_3;
}

bool func_890(var uParam0, char* sParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (!bParam4 && !uParam0->f_2501)
	{
		if (!func_912(uParam0, sParam1, iParam2, bParam4, bParam5))
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
			if (func_1443(uParam0, 0))
			{
				if (func_1444(uParam0, iParam2, iParam3, &cVar2, &iVar1, &iVar18))
				{
					if (func_1445(uParam0, 1, &iVar0))
					{
					}
					if (func_1446(uParam0, 3, &cVar2))
					{
					}
					if (func_1445(uParam0, 4, &iVar1))
					{
						cVar2.f_8 = iVar1;
					}
					if (func_1445(uParam0, 7, &(cVar2.f_12)))
					{
					}
					if (func_1445(uParam0, 8, &iVar1))
					{
						cVar2.f_10 = iVar1;
					}
					if (func_1445(uParam0, 10, &(cVar2.f_14)))
					{
					}
					if (func_1445(uParam0, 11, &iVar1))
					{
						cVar2.f_15 = iVar1;
					}
					if (iVar18 == 0)
					{
						if (iVar0 < 40 && uParam0->f_2504 < 40)
						{
							if (!func_1447(uParam0, &cVar2, uParam0->f_2504))
							{
								*(*uParam0)[uParam0->f_2504] = { cVar2 };
								func_507((*uParam0)[uParam0->f_2504], 1048576);
								uParam0->f_2504++;
							}
						}
					}
					else if (iVar18 == 3)
					{
						if (iVar0 < 40 && uParam0->f_2505 < 40)
						{
							*uParam0->f_641[uParam0->f_2505] = { cVar2 };
							func_507(uParam0->f_641[uParam0->f_2505], 1048576);
							uParam0->f_2505++;
						}
					}
					else if (iVar18 == 1)
					{
						if (iVar0 < 60 && uParam0->f_2506 < 60)
						{
							*uParam0->f_1282[uParam0->f_2506] = { cVar2 };
							func_507(uParam0->f_1282[uParam0->f_2506], 1048576);
							if (!bVar19 && func_224(&cVar2, 4))
							{
								prepare_music_event(uParam0->f_1282[uParam0->f_2506]);
								bVar19 = true;
							}
							uParam0->f_2506++;
						}
					}
					else if (iVar0 < 15 && uParam0->f_2507 < 15)
					{
						if (!func_1447(&(uParam0->f_2243), &cVar2, uParam0->f_2507))
						{
							*uParam0->f_2243[uParam0->f_2507] = { cVar2 };
							func_507(uParam0->f_2243[uParam0->f_2507], 1048576);
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
			if (func_1443(uParam0, 12))
			{
				if (func_1445(uParam0, 13, &iVar0))
				{
				}
				if (func_1445(uParam0, 14, &iVar1))
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

void func_891(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((func_224((*uParam0)[iVar0], 1048576) && (*uParam0)[iVar0]->f_9 == 8) && !func_224((*uParam0)[iVar0], 1))
		{
			func_1448((*uParam0)[iVar0]);
		}
		iVar0++;
	}
}

bool func_892(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, int iParam12)
{
	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < *uParam0)
	{
		if (func_862((*uParam0)[iVar1]))
		{
			if (func_856((*uParam0)[iVar1]->f_2, iParam12))
			{
				if (!func_1449((*uParam0)[iVar1]))
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
		if (func_864((*uParam1)[iVar1]))
		{
			if (func_856((*uParam1)[iVar1]->f_4, iParam12))
			{
				if (!func_1450((*uParam1)[iVar1]))
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
		if (func_866((*uParam2)[iVar1]))
		{
			if (func_856((*uParam2)[iVar1]->f_2, iParam12))
			{
				if (!func_1451((*uParam2)[iVar1]))
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
		if (func_868((*uParam3)[iVar1]))
		{
			if (func_856((*uParam3)[iVar1]->f_2, iParam12))
			{
				if (!func_869((*uParam3)[iVar1]))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	if (func_856(uParam4->f_1, iParam12))
	{
		if (!func_870(uParam4))
		{
			iVar0 = 0;
		}
	}
	iVar1 = 0;
	while (iVar1 < *uParam5)
	{
		if (func_871((*uParam5)[iVar1]))
		{
			if (func_856((*uParam5)[iVar1]->f_3, iParam12))
			{
				if (func_1434((*uParam5)[iVar1]))
				{
					if (!func_894((*uParam5)[iVar1]))
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
		if (func_871((*uParam5)[iVar1]))
		{
			if (func_856((*uParam5)[iVar1]->f_3, iParam12))
			{
				if (func_1434((*uParam5)[iVar1]))
				{
					if (func_894((*uParam5)[iVar1]))
					{
						iVar2 = 0;
						while (iVar2 < 20)
						{
							if (func_873((*uParam5)[iVar1]->f_4[iVar2]))
							{
								if (!func_1452((*uParam5)[iVar1]->f_4[iVar2], (*uParam5)[iVar1]->f_1))
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
		if (func_875((*uParam6)[iVar1]))
		{
			if (func_856((*uParam6)[iVar1]->f_3, iParam12))
			{
				if (!func_1453((*uParam6)[iVar1]))
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
		if (func_877((*uParam7)[iVar1]))
		{
			if (func_856((*uParam7)[iVar1]->f_4, iParam12))
			{
				if (!func_1454((*uParam7)[iVar1]))
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
		if (func_879((*uParam8)[iVar1]))
		{
			if (func_856((*uParam8)[iVar1]->f_2, iParam12))
			{
				if (!func_1455((*uParam8)[iVar1]))
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
		if (func_881((*uParam9)[iVar1]))
		{
			if (func_856((*uParam9)[iVar1]->f_2, iParam12))
			{
				if (!func_1456((*uParam9)[iVar1]))
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
		if (func_883((*uParam10)[iVar1]))
		{
			if (func_856((*uParam10)[iVar1]->f_3, iParam12))
			{
				if (!func_1457((*uParam10)[iVar1]))
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
		if (func_885((*uParam11)[iVar1]))
		{
			if (func_856((*uParam11)[iVar1]->f_2, iParam12))
			{
				if (!func_1458((*uParam11)[iVar1]))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	return iVar0;
}

bool func_893(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_894(var uParam0)
{
	if (func_893(uParam0->f_2, 2))
	{
		return true;
	}
	if (!func_893(uParam0->f_2, 1))
	{
		func_872(uParam0);
	}
	if (_is_anim_scene_loaded(uParam0->f_1, true, false))
	{
		func_859(&(uParam0->f_2), 2);
		return true;
	}
	return false;
}

int func_895(int iParam0)
{
	if (!func_196(iParam0))
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

bool func_896(char[4] cParam0, int iParam1, var uParam2, bool bParam3, int iParam4, int iParam5, int iParam6, float fParam7, bool bParam8, int iParam9, bool bParam10, int iParam11, bool bParam12, bool bParam13)
{
	if (!func_468(iParam1))
	{
		return false;
	}
	if ((!is_entity_dead(*uParam2) && func_264(iParam1)) && func_1459(iParam1) == *uParam2)
	{
		return true;
	}
	*uParam2 = func_1460(iParam1, 1, 0, iParam4, iParam5, iParam6, fParam7, bParam8, 1, 0, 0, bParam10, 0, iParam9, 0, 0, 0, iParam11, 1, 1, bParam13, 0, 1, 0, 1);
	if (does_entity_exist(*uParam2))
	{
		func_1461(cParam0, *uParam2, iParam1, bParam3, (bParam8 && bParam12), bParam10, bParam13);
		func_1462(iParam1);
		return true;
	}
	return false;
}

bool func_897(char[4] cParam0)
{
	if (!func_399(cParam0->f_5417))
	{
		return true;
	}
	switch (cParam0->f_607)
	{
		case 7:
			func_1463(cParam0, -271.1003f, 798.9771f, 118.0088f, 359.8847f);
			break;
		case 15:
			func_1463(cParam0, -101.4083f, -34.0691f, 94.9419f, 43.5697f);
			break;
		case 8:
			func_1463(cParam0, 884.1405f, 1283.638f, 233.1437f, 288.539f);
			break;
		case 25:
			func_1463(cParam0, 1154.01f, -87.7217f, 87.745f, 333.9165f);
			break;
		case 14:
			func_1463(cParam0, -257.4742f, 716.4608f, 114.3661f, 298.3928f);
			break;
		case 9:
			func_1463(cParam0, -113.3479f, -14.8907f, 96.1036f, 66.3363f);
			break;
		case 13:
			func_1463(cParam0, -893.1545f, -1097.781f, 59.3724f, 67.7581f);
			break;
		case 11:
			func_1463(cParam0, -1528.842f, -315.0988f, 143.0872f, 97.0964f);
			break;
		case 26:
			func_1463(cParam0, 705.8042f, -1230.294f, 44.2243f, 60.9884f);
			break;
		case 53:
			func_1463(cParam0, 705.8099f, -1229.4f, 44.2311f, 67.5463f);
			break;
		case 16:
			func_1463(cParam0, 667.7685f, -1211.293f, 45.3101f, 92.5271f);
			break;
		case 17:
			func_1463(cParam0, 1339.753f, -1305.21f, 75.5849f, 337.5673f);
			break;
		case 19:
			func_1463(cParam0, 1857.32f, -1367.512f, 41.2697f, 162.265f);
			break;
		case 24:
			func_1463(cParam0, 691.6649f, -1235.476f, 43.3174f, 227.0576f);
			break;
		case 23:
			func_1463(cParam0, 676.2985f, -1227.818f, 43.598f, 352.091f);
			break;
		case 22:
			func_1463(cParam0, 663.6722f, -1229.636f, 43.3769f, 171.6396f);
			break;
		case 36:
			func_1463(cParam0, 2647.098f, -1270.327f, 51.0841f, 113.0633f);
			break;
		case 28:
			func_1463(cParam0, 2413.412f, -1220.656f, 44.9084f, 0.0301f);
			break;
		case 30:
			func_1463(cParam0, 1853.05f, -1835.788f, 42.0957f, 29.7034f);
			break;
		case 37:
			func_1463(cParam0, 1842.425f, -1833.848f, 43.2426f, 0.0743f);
			break;
		case 45:
			func_1463(cParam0, 2824.987f, -1165.335f, 47.3695f, 190.1776f);
			break;
		case 48:
			func_1463(cParam0, 483.1636f, 2222.628f, 246.0867f, 109.4105f);
			break;
		case 49:
			func_1463(cParam0, 2376.538f, 1339.845f, 105.3362f, 193.8848f);
			break;
		case 50:
			func_1463(cParam0, 2377.94f, 1338.177f, 105.4092f, 196.4492f);
			break;
		case 51:
			func_1463(cParam0, 491.0881f, 2221.171f, 246.1786f, 246.5501f);
			break;
		case 55:
			func_1463(cParam0, 2774.684f, 513.5845f, 66.9882f, 355.826f);
			break;
		case 76:
			func_1463(cParam0, -1616.827f, -1379.19f, 81.8942f, 339.9481f);
			break;
		case 73:
			func_1463(cParam0, -1611.214f, -1344.436f, 81.8767f, 359.9349f);
			break;
		case 75:
			func_1463(cParam0, -1678.714f, -1378.879f, 83.969f, 347.6046f);
			break;
		case 69:
			func_1463(cParam0, -302.3015f, 786.3279f, 116.9486f, 185.0768f);
			break;
		case 70:
			func_1463(cParam0, -1566.102f, -1448.615f, 90.6887f, 291.3719f);
			break;
		case 71:
			func_1463(cParam0, -1625.965f, -1395.404f, 81.6263f, 114.6379f);
			break;
		case 72:
			func_1463(cParam0, -835.0144f, -1343.726f, 42.473f, 0.0002f);
			break;
	}
	return !func_399(cParam0->f_5417);
}

int func_898(int iParam0, var uParam1)
{
	uParam1->f_10 = func_271(uParam1->f_10);
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
		if (bVar0 && !func_331((*Global_1835011)[4]->f_1, 1))
		{
			if (func_1464(5))
			{
				func_532(5);
				func_1465(5);
				func_1409(0);
				func_1408(0);
			}
		}
	}
	if (func_1466(Global_36) == 8)
	{
		*iParam0 = 1;
		return 0;
	}
	if ((bVar0 && func_331((*Global_1835011)[37]->f_1, 1)) && !func_331((*Global_1835011)[43]->f_1, 1))
	{
		*iParam0 = 1;
		return 0;
	}
	if ((bVar0 && func_331((*Global_1835011)[43]->f_1, 1)) && !func_331((*Global_1835011)[44]->f_1, 1))
	{
		if (uParam1->f_10 == 0)
		{
			*iParam0 = 1;
			return 0;
		}
	}
	iVar1 = uParam1->f_10;
	iVar2 = func_222(iVar1);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	if (func_535(iVar1))
	{
		bVar3 = true;
		if (func_1467(iVar1))
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
			if (!func_1464(0) && func_1464(1))
			{
				func_1468(1, 0);
				*iParam0 = 0;
				return 0;
			}
		}
	}
	if (uParam1->f_4)
	{
		if (uParam1->f_10 == 0)
		{
			if (func_1469())
			{
				func_1470();
			}
			func_1409(0);
			func_1408(0);
			func_1410(uParam1->f_6);
		}
	}
	if (!func_535(uParam1->f_10))
	{
		if (*uParam1)
		{
			if ((func_1471(uParam1->f_10) == 0 || func_1472(uParam1->f_10) == 0) || func_1473(uParam1->f_10) == 0)
			{
				func_1474(uParam1->f_10);
			}
			func_1475(uParam1->f_10);
			func_1476(uParam1->f_10, uParam1->f_6, uParam1->f_9);
			*iParam0 = 0;
			return 0;
		}
		*iParam0 = 1;
		return 0;
	}
	iVar1 = uParam1->f_10;
	iVar2 = func_222(iVar1);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	if (func_535(iVar1))
	{
		bVar3 = true;
		if (func_1467(iVar1))
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
	if (func_1477(uParam1->f_10))
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
			Var8 = { func_1478(uParam1->f_10) };
			Var10 = { func_1479() };
			func_1480(iVar2, &Var8, &Var10, 0);
			_set_ped_as_saddle_horse_for_player(iVar6, iVar2);
			set_ped_config_flag(iVar2, 186, false);
		}
	}
	if (!uParam1->f_1)
	{
		*iParam0 = 2;
		return iVar2;
	}
	if (!func_528(uParam1->f_10))
	{
		set_entity_as_mission_entity(iVar2, true, true);
		func_1481(uParam1->f_10);
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
	func_527(uParam1->f_10);
	if (func_528(uParam1->f_10))
	{
		iVar16 = func_267(uParam1->f_10);
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

bool func_899(int iParam0, int iParam1, float fParam2, bool bParam3)
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

bool func_900(int iParam0)
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

bool func_901(int iParam0, int iParam1, vector3 vParam2, float fParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10)
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
	if (!func_1482(iParam1))
	{
		return false;
	}
	iVar0 = func_1483(iParam1, vParam2, fParam5, iParam8, 1, bParam6, bParam7);
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

void func_902(char[4] cParam0, bool bParam1)
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

float func_903(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

void func_904(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
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
	if (iParam0 == func_1484(Global_35) && is_player_teleport_active())
	{
	}
	if (func_1485(iParam0))
	{
		if (func_900(get_ped_index_from_entity_index(iParam0)))
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
				func_904(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (is_ped_on_mount(iVar1))
		{
			iVar2 = get_mount(iVar1);
			if (does_entity_exist(iVar2) && !is_entity_dead(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_904(iVar2, vParam1, fParam4, iParam5, iParam6);
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
		if (func_1485(iParam0))
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

bool func_905(int iParam0, int iParam1, int iParam2)
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

bool func_906(var uParam0, int iParam1)
{
	switch (func_1486(uParam0))
	{
		case 0:
			if (!func_1487(iParam1, &(uParam0->f_8), &(uParam0->f_6)))
			{
				return true;
			}
			func_1488(uParam0, 1);
			break;
		case 1:
			func_1489(uParam0);
			render_script_cams(true, false, 3000, true, false, 0);
			iVar0 = 0;
			func_826(&iVar0, 0, 2, 0, 0, 0, 0);
			func_1488(uParam0, 2);
			break;
		case 2:
			if (func_1490(uParam0))
			{
				func_1273(uParam0->f_8, 5000f, 0);
				_0x4759cc730f947c81();
				func_27(&(uParam0->f_3), 1);
				func_1488(uParam0, 3);
			}
			break;
		case 3:
			if (func_913(&(uParam0->f_3)) >= 1f)
			{
				func_1488(uParam0, 4);
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
			func_1491(&iVar1, 0);
			release_script_audio_bank();
			func_1488(uParam0, 0);
			return true;
	}
	return false;
}

void func_907(char[4] cParam0)
{
	if (!func_120(cParam0, 524288))
	{
		MemCopy(&uVar0, {func_110(cParam0->f_607)}, 8);
		func_1492(&uVar0, 15000, 0, 0, 0, 1);
		func_103(cParam0, 524288);
	}
}

bool func_908(char[4] cParam0)
{
	iVar0 = func_35(cParam0);
	if (func_162(cParam0, func_33(cParam0)) <= 3)
	{
		iVar0 = func_33(cParam0);
	}
	Var1 = { func_1493(cParam0, iVar0) };
	if (func_1495(&(cParam0->f_10792), Var1, func_1494(&(cParam0->f_10792)), 0))
	{
		func_140(cParam0, func_33(cParam0), 262144);
		if (func_1496(&(cParam0->f_10792), 524288))
		{
			func_383(cParam0, 67108864);
			func_1497(&(cParam0->f_10792), 524288);
		}
		func_1498(&(cParam0->f_7375), &(cParam0->f_10792));
		return true;
	}
	return false;
}

void func_909(char[4] cParam0, int iParam1)
{
	cParam0->f_5307 = (cParam0->f_5307 - (cParam0->f_5307 && iParam1));
}

bool func_910(char[4] cParam0, struct<4> Param1)
{
	if (is_string_null_or_empty(&Param1))
	{
		return true;
	}
	if (func_8(cParam0, 16777216))
	{
		func_1499(cParam0);
		func_1500(cParam0);
		return true;
	}
	if (func_1501(Param1, &(cParam0->f_7375), cParam0))
	{
		return true;
	}
	if (func_154(cParam0) == 0)
	{
		func_943(cParam0);
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
			func_1502(cParam0);
			func_909(cParam0, 524288);
			func_1503(cParam0);
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

bool func_911(char[4] cParam0)
{
	iVar0 = 1;
	if (!func_1504(func_61(cParam0), func_120(cParam0, 65536)))
	{
		iVar0 = 0;
	}
	Var1 = { func_1505(func_61(cParam0)) };
	if (!is_string_null_or_empty(&Var1))
	{
		if (!func_1506(func_61(cParam0)))
		{
			iVar0 = 0;
		}
	}
	if (!func_427(cParam0, func_33(cParam0), 1))
	{
		iVar0 = 0;
	}
	if (func_120(cParam0, 4) && !_0x5e420ff293ee5472())
	{
		iVar0 = 0;
	}
	MemCopy(&cVar9, {func_889(cParam0->f_607)}, 3);
	if (!func_23(&(cParam0->f_8269)))
	{
		if (!func_912(&(cParam0->f_8269), &cVar9, 0, 1, 1))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

bool func_912(var uParam0, char* sParam1, int iParam2, bool bParam3, bool bParam4)
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
	func_1507(uParam0);
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

float func_913(int iParam0)
{
	if (!func_26(iParam0))
	{
		return iParam0->f_1;
	}
	if (func_509(iParam0))
	{
		return iParam0->f_2;
	}
	return (func_555() - iParam0->f_1);
}

bool func_914()
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

void func_915(float fParam0, float fParam1)
{
	set_gameplay_cam_relative_heading(fParam0, 1f);
	set_gameplay_cam_relative_pitch(fParam1, 1f);
}

bool func_916(char[4] cParam0)
{
	switch (func_33(cParam0))
	{
		case 0:
		case 1:
		case 2:
		case 3:
			vVar0 = { -634.7f, -46.4f, 85.5f };
			break;
		case 4:
			vVar0 = { 1361.6f, -1304.6f, 79f };
			break;
		case 5:
			vVar0 = { 1342.4f, -1302.7f, 78.1f };
			break;
		case 6:
		case 7:
		case 8:
			vVar0 = { 722.8301f, -497.114f, 74.3039f };
			break;
		case 9:
		case 10:
			vVar0 = { 590.9f, -627.6f, 42.8f };
			break;
	}
	if (!func_896(cParam0, 11, uLocal_239[1], 0, vVar0.x, vVar0.y, vVar0.z, 0, 1, 0, 1, 0, 1, 0))
	{
		return false;
	}
	return true;
}

void func_917(char[4] cParam0, int iParam1)
{
	if (!is_entity_dead(&(uLocal_239[iParam1])))
	{
		switch (iParam1)
		{
			case 0:
				cVar0 = "UNCLE";
				iVar2 = 4;
				iVar1 = -1569615261;
				break;
			case 1:
				cVar0 = "SADIE_ADLER";
				iVar2 = 11;
				break;
			default:
				return;
		}
		set_blocking_of_non_temporary_events(&(uLocal_239[iParam1]), true);
		func_151(cParam0, &(uLocal_239[iParam1]), 0, 0, 0, 0, 0);
		func_1508(iVar2, -1341683964, 1);
		func_145(cParam0, &(uLocal_239[iParam1]), cVar0, 0);
		if (iParam1 == 1)
		{
			func_1509(&(uLocal_239[1]), 1240907314);
			func_1509(&(uLocal_239[1]), -2088446466);
			func_1509(&(uLocal_239[1]), -764310200);
			if (!has_ped_got_weapon(&(uLocal_239[1]), 392538360, 0, false))
			{
				func_1358(&(uLocal_239[1]), 392538360, 0, 1, 2, 1, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
			}
			if (!has_ped_got_weapon(&(uLocal_239[1]), 2077870112, 0, false))
			{
				func_1358(&(uLocal_239[1]), 2077870112, 0, 1, 0, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
			}
		}
		if (iParam1 == 0)
		{
			func_1509(&(uLocal_239[iParam1]), -1952010486);
		}
		if (iVar1 != 0)
		{
			func_937(&(uLocal_239[iParam1]), iVar1, -1, 0, 0, 1056964608, 1065353216, 0);
			set_current_ped_weapon(&(uLocal_239[iParam1]), iVar1, true, 0, true, false);
		}
		set_entity_only_damaged_by_player(&(uLocal_239[iParam1]), true);
		_0xc2266aa617668ad3(&(uLocal_239[iParam1]), 0f);
		set_ped_accuracy(&(uLocal_239[iParam1]), 10);
		set_ped_config_flag(&(uLocal_239[iParam1]), 6, true);
		func_1510(11, 1);
	}
}

bool func_918(char[4] cParam0)
{
	if (func_33(cParam0) >= 1)
	{
		if ((!does_entity_exist(iLocal_250) && does_entity_exist(&(uLocal_239[1]))) && !bVar0)
		{
			iLocal_250 = func_1252(11, 1, 1, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0);
			bVar0 = true;
		}
	}
	if ((!does_entity_exist(iLocal_251) && does_entity_exist(&(uLocal_239[0]))) && !bVar0)
	{
		iLocal_251 = func_1252(4, 1, 1, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0);
		bVar0 = true;
	}
	return !bVar0;
}

bool func_919(char[4] cParam0, bool bParam1)
{
	Var0 = { func_1511(cParam0) };
	if (!does_entity_exist(iLocal_249))
	{
		iLocal_249 = func_1512(Var0, Var0.f_3, 1, 1, 1, 1, 1);
	}
	else
	{
		set_blocking_of_non_temporary_events(iLocal_249, true);
		if (bParam1)
		{
			task_stand_still(iLocal_249, -1);
		}
		_0xfd6943b6df77e449(iLocal_249, false);
		set_entity_only_damaged_by_player(iLocal_249, true);
		func_1514(cParam0, iLocal_249, 283594, 0, 0, 67108863, 1023, 3, 40);
		return true;
	}
	return false;
}

void func_920()
{
	iVar0 = func_222(1);
	iVar1 = 0;
	vVar2 = { -1566.102f, -1448.615f, 90.6887f };
	fVar5 = 291.3719f;
	if ((does_entity_exist(iVar0) && !is_entity_dead(iVar0)) && is_entity_in_volume(iVar0, func_1515(37), true, 0))
	{
		if (func_900(iVar0))
		{
			_0x0348469daa17576c(iVar0);
		}
		clear_ped_tasks_immediately(iVar0, false, true);
		func_904(iVar0, vVar2, fVar5, 2, 1073741824);
		iVar1 = _find_closest_active_scenario_point_of_type(vVar2, -1805387726, 2f, 0, false);
		if (_does_scenario_point_exist(iVar1))
		{
			_task_use_scenario_point(iVar0, iVar1, "", -1, false, true, 0, false, -1f, false);
		}
		else
		{
			task_stand_still(iVar0, -1);
		}
	}
}

void func_921(char[4] cParam0, int iParam1, bool bParam2, int iParam3)
{
	if (!is_entity_dead(iParam1))
	{
		set_blocking_of_non_temporary_events(iParam1, true);
		task_stand_still(iParam1, -1);
		_0xfd6943b6df77e449(iParam1, false);
		set_entity_invincible(iParam1, false);
		set_entity_only_damaged_by_player(iParam1, true);
		if (bParam2)
		{
			func_1514(cParam0, iParam1, 283594, 0, 0, 67108863, 1023, 3, 40);
		}
		else if (iParam3 == 1)
		{
			func_1516(cParam0, iParam1, &(uLocal_239[1]));
		}
		else
		{
			func_1516(cParam0, iParam1, &(uLocal_239[0]));
		}
	}
}

void func_922()
{
	Local_1835[0]->f_1 = "SAD3_BAN3_SHRF1";
	Local_1835[0]->f_2 = "BANDITO_PED3";
	Local_1835[0]->f_3 = 2;
	Local_1835[1]->f_1 = "SAD3_BAN5_SHRF1";
	Local_1835[1]->f_2 = "BANDITO_PED5";
	Local_1835[1]->f_3 = 1;
	Local_1835[2]->f_1 = "SAD3_BAN5_SHRF2";
	Local_1835[2]->f_2 = "BANDITO_PED5";
	Local_1835[2]->f_3 = 2;
	Local_1835[3]->f_1 = "SAD3_BAN7_SHRF1";
	Local_1835[3]->f_2 = "BANDITO_PED7";
	Local_1835[3]->f_3 = 2;
	Local_1835[4]->f_1 = "SAD3_BAN7_SHRF2";
	Local_1835[4]->f_2 = "BANDITO_PED7";
	Local_1835[4]->f_3 = 2;
	Local_1861[0]->f_1 = "SAD3_BAN3_COMB1";
	Local_1861[0]->f_2 = "BANDITO_PED3";
	Local_1861[0]->f_3 = 4;
	Local_1861[1]->f_1 = "SAD3_BAN5_COMB1";
	Local_1861[1]->f_2 = "BANDITO_PED5";
	Local_1861[1]->f_3 = 4;
	Local_1861[2]->f_1 = "SAD3_BAN7_COMB1";
	Local_1861[2]->f_2 = "BANDITO_PED7";
	Local_1861[2]->f_3 = 4;
	Local_1877[0]->f_1 = "SAD3_BAN3_SNIPE";
	Local_1877[0]->f_2 = "BANDITO_PED3";
	Local_1877[0]->f_3 = 5;
	Local_1877[1]->f_1 = "SAD3_BAN5_SNIPE";
	Local_1877[1]->f_2 = "BANDITO_PED5";
	Local_1877[1]->f_3 = 5;
	Local_1877[2]->f_1 = "SAD3_BAN7_SNIPE";
	Local_1877[2]->f_2 = "BANDITO_PED7";
	Local_1877[2]->f_3 = 3;
	func_1517();
}

void func_923(int iParam0)
{
	if (!_is_imap_active(iParam0))
	{
		_request_imap(iParam0);
	}
}

void func_924()
{
	iVar0 = 0;
	while (iVar0 < 31)
	{
		switch (iVar0)
		{
			case 0:
				vVar1 = { 707.6389f, -519.8435f, 75.52919f };
				vVar4 = { 0f, 0f, -38.20813f };
				vVar7 = { 38.82989f, 44.20531f, 16.42189f };
				sVar10 = "SAD3_VOL_MEETING";
				break;
			case 1:
				vVar1 = { 657.448f, -571.748f, 74.91603f };
				vVar4 = { 0f, 0f, 54f };
				vVar7 = { 10f, 18f, 3.5f };
				sVar10 = "SAD3_VOL_DEWBRIDGE";
				break;
			case 2:
				vVar1 = { 584.451f, -519.6888f, 77.05247f };
				vVar4 = { 0f, 0f, 0f };
				vVar7 = { 21.12356f, 23.86367f, 4.775251f };
				sVar10 = "SAD3_VOL_DEW_ROADBLOCK_1";
				break;
			case 3:
				vVar1 = { 738.7587f, -568.7253f, 81.88922f };
				vVar4 = { 0f, 0f, 0f };
				vVar7 = { 30.37503f, 30.95364f, 15.28504f };
				sVar10 = "SAD3_VOL_DEW_ROADBLOCK_2";
				break;
			case 4:
				vVar1 = { 1390.179f, -1397.837f, 96.01807f };
				vVar4 = { 0f, 0f, -32.25276f };
				vVar7 = { 201.3048f, 155.3766f, 67.86075f };
				sVar10 = "SAD3_VOL_ROADBLOCK";
				break;
			case 5:
				vVar1 = { -630.2156f, -65.50515f, 83.56931f };
				vVar4 = { 0f, 0f, 6f };
				vVar7 = { 11.59502f, 18.25639f, 3.531228f };
				sVar10 = "SAD3_VOL_BARN";
				break;
			case 6:
				vVar1 = { -630.1826f, -64.65451f, 83.56931f };
				vVar4 = { 0f, 0f, 4.931658f };
				vVar7 = { 11.59502f, 20.08644f, 3.531228f };
				sVar10 = "SAD3_VOL_BARN_DISABLE_WEAPON";
				break;
			case 7:
				vVar1 = { 726.6357f, -469.5828f, 85.53365f };
				vVar4 = { 0f, 0f, 56.37386f };
				vVar7 = { 7.147007f, 6.449855f, 3.989684f };
				sVar10 = "SAD3_VOL_ROOF";
				break;
			case 8:
				vVar1 = { 1345.581f, -1307.524f, 76.98455f };
				vVar4 = { 0f, 0f, -21.29962f };
				vVar7 = { 4.514126f, 4.523096f, 3.232977f };
				sVar10 = "SAD3_VOL_HITCH_BLOCK";
				break;
			case 9:
				vVar1 = { -538.0277f, -138.6277f, 49.09711f };
				vVar4 = { 0f, 0f, -9.989111f };
				vVar7 = { 107.3941f, 62.35453f, 28.86375f };
				sVar10 = "SAD3_VOL_PAINT_RHODE_DIAG1";
				break;
			case 10:
				vVar1 = { 1355.133f, -1302.07f, 78.07088f };
				vVar4 = { 0f, 0f, -20.85f };
				vVar7 = { 3.499064f, 4.204414f, 2.638905f };
				sVar10 = "SAD3_VOL_CLEAR_CELL";
				break;
			case 11:
				vVar1 = { -602.5735f, -47.7486f, 87.43393f };
				vVar4 = { 0f, 0f, 0f };
				vVar7 = { 73.48716f, 83.32714f, 28.83432f };
				sVar10 = "SAD3_VOL_CME_PLACEHOLDER";
				break;
			case 12:
				vVar1 = { -866.2323f, -1303.821f, 45.20745f };
				vVar4 = { 0f, 0f, 0f };
				vVar7 = { 26.3022f, 27.60776f, 7.288033f };
				sVar10 = "SAD3_VOL_CLEAR_LUMBERYARD";
				break;
			case 13:
				vVar1 = { -866.3387f, -1304.175f, 45.20745f };
				vVar4 = { 0f, 0f, 0f };
				vVar7 = { 21.25849f, 21.38266f, 7.288033f };
				sVar10 = "SAD3_VOL_LUMBERYARD_INTERIOR";
				break;
			case 14:
				vVar1 = { 1331.856f, -1303.684f, 96.01805f };
				vVar4 = { 0f, 0f, -32.25276f };
				vVar7 = { 304.9653f, 189.8641f, 67.86075f };
				sVar10 = "SAD3_VOL_RHODES_CLEAR_PEDS";
				break;
			case 15:
				vVar1 = { 1358.581f, -1307.674f, 78.07088f };
				vVar4 = { 0f, 0f, -20.85f };
				vVar7 = { 5.926441f, 3.903756f, 2.809357f };
				sVar10 = "SAD3_VOL_RHODES_SHERIFF_CLEAR_PEDS";
				break;
			case 16:
				vVar1 = { 1359.994f, -1309.023f, 77.60252f };
				vVar4 = { 0f, 0f, -110.1079f };
				vVar7 = { 1f, 1.676271f, 1.913766f };
				sVar10 = "SAD3_VOL_RHODES_SHOOT_DEF_1_A";
				break;
			case 17:
				vVar1 = { 1356.536f, -1307.757f, 77.27752f };
				vVar4 = { 0f, 0f, -110.1079f };
				vVar7 = { 1f, 1.676271f, 1.913766f };
				sVar10 = "SAD3_VOL_RHODES_SHOOT_DEF_1_B";
				break;
			case 18:
				vVar1 = { 1347.915f, -1316.375f, 76.96289f };
				vVar4 = { 0f, 0f, 0f };
				vVar7 = { 1f, 1f, 1.444954f };
				sVar10 = "SAD3_VOL_RHODES_SHOOT_DEF_2_A";
				break;
			case 19:
				vVar1 = { 1343.411f, -1318.518f, 76.96289f };
				vVar4 = { 0f, 0f, 0f };
				vVar7 = { 1f, 1f, 1.444954f };
				sVar10 = "SAD3_VOL_RHODES_SHOOT_DEF_2_B";
				break;
			case 20:
				vVar1 = { 1337.715f, -1304.866f, 76.96289f };
				vVar4 = { 0f, 0f, 0f };
				vVar7 = { 1f, 1f, 1.444954f };
				sVar10 = "SAD3_VOL_RHODES_SHOOT_DEF_3_A";
				break;
			case 21:
				vVar1 = { 1334.068f, -1317.551f, 76.96289f };
				vVar4 = { 0f, 0f, 0f };
				vVar7 = { 1f, 1f, 1.444954f };
				sVar10 = "SAD3_VOL_RHODES_SHOOT_DEF_3_B";
				break;
			case 22:
				vVar1 = { 1322.09f, -1294.587f, 76.96289f };
				vVar4 = { 0f, 0f, 0f };
				vVar7 = { 1f, 1f, 1.444954f };
				sVar10 = "SAD3_VOL_RHODES_SHOOT_DEF_4_A";
				break;
			case 23:
				vVar1 = { 1320.326f, -1296.951f, 76.60646f };
				vVar4 = { 0f, 0f, 0f };
				vVar7 = { 1f, 1f, 1.444954f };
				sVar10 = "SAD3_VOL_RHODES_SHOOT_DEF_4_B";
				break;
			case 24:
				vVar1 = { -800.0536f, -1293.217f, 46.65602f };
				vVar4 = { 0f, 0f, 0f };
				vVar7 = { 18.39271f, 31.72297f, 10.68238f };
				sVar10 = "SAD3_VOL_INT_CLEAR";
				break;
			case 25:
				vVar1 = { -523.593f, -155.8833f, 39.61935f };
				vVar4 = { 0f, 0f, 0f };
				vVar7 = { 25.98018f, 26.17071f, 21.504f };
				sVar10 = "SAD3_VOL_RIVER_BLOCK";
				break;
			case 26:
				vVar1 = { 686.9646f, -573.2482f, 76.05163f };
				vVar4 = { 0f, 0f, 24.25444f };
				vVar7 = { 69.68789f, 44.14314f, 11.56425f };
				sVar10 = "SAD3_VOL_LEFT_BOUNDARY";
				break;
			case 27:
				vVar1 = { 649.1874f, -527.3615f, 76.05163f };
				vVar4 = { 0f, 0f, 31.907f };
				vVar7 = { 68.40489f, 44.14314f, 11.56425f };
				sVar10 = "SAD3_VOL_RIGHT_BOUNDARY";
				break;
			case 28:
				vVar1 = { 1360.659f, -1301.604f, 78.00629f };
				vVar4 = { 0f, 0f, -20.01215f };
				vVar7 = { 5.69896f, 8.931143f, 2.522797f };
				sVar10 = "SAD3_VOL_SHERIFF_OFFICE";
				break;
			case 29:
				vVar1 = { 727.5914f, -468.1458f, 81.49889f };
				vVar4 = { 0f, 0f, 56.37386f };
				vVar7 = { 23.53583f, 16.44678f, 13.85886f };
				sVar10 = "SAD3_VOL_VANTAGE";
				break;
			case 30:
				vVar1 = { 1358.639f, -1307.522f, 78.07088f };
				vVar4 = { 0f, 0f, -20.85f };
				vVar7 = { 5.485906f, 3.03873f, 2.809357f };
				sVar10 = "SAD3_VOL_SHERIFF_DEF";
				break;
		}
		if (((((iVar0 == 18 || iVar0 == 19) || iVar0 == 20) || iVar0 == 21) || iVar0 == 22) || iVar0 == 23)
		{
			if (!_does_volume_exist(&(iLocal_1784[iVar0])))
			{
				iLocal_1784[iVar0] = _create_volume_cylinder_with_custom_name(vVar1, vVar4, vVar7, sVar10);
			}
		}
		else if (!_does_volume_exist(&(iLocal_1784[iVar0])))
		{
			func_1518(iLocal_1784[iVar0], vVar1, vVar4, vVar7, sVar10);
		}
		iVar0++;
	}
}

var func_925(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (!_does_volume_exist(iParam0))
	{
		return uVar0;
	}
	func_1519(iParam0, bParam2);
	_0x18262cafebb5fbe1(iParam0, iParam3, 0, 0, -1, -1, 0);
	_0xb56d41a694e42e86(iParam0, iParam3, 0, 0, -1, -1, 2);
	uVar0 = _0x4c39c95ae5db1329(iParam0, bParam2, 15);
	return uVar0;
}

int func_926(int iParam0)
{
	if (!func_441(iParam0))
	{
		return 0;
	}
	if (!func_443(func_442(iParam0)))
	{
		return 1;
	}
	if (!_0x800df3fc913355f3(func_444(iParam0)))
	{
		return 0;
	}
	if (network_is_in_session())
	{
		if (!network_has_control_of_entity(_0x31c70a716cae1fee(func_444(iParam0))))
		{
			return 1;
		}
	}
	iVar0 = _0x31c70a716cae1fee(func_444(iParam0));
	if (does_entity_exist(iVar0))
	{
		if (!_0x88ad6cc10d8d35b2(iVar0))
		{
			set_entity_as_mission_entity(iVar0, true, true);
		}
	}
	_0x7b204f88f6c3d287(func_444(iParam0));
	return 1;
}

void func_927(int iParam0, int iParam1)
{
	if (func_20() != -1)
	{
		return;
	}
	if (!func_441(iParam0))
	{
		return;
	}
	Global_24887[iParam0] = (Global_24887[iParam0] || iParam1);
}

void func_928(int iParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4, float fParam5, int iParam6, bool bParam7)
{
	func_1520(iParam0, 0, 0);
	if (func_466(iParam0))
	{
		door_system_set_open_ratio(iParam0, fParam2, iParam6);
		if (fParam5 > 0f)
		{
			door_system_set_automatic_rate(iParam0, fParam5);
		}
		if (bParam3)
		{
			func_1521(iParam0, fParam2, 1, iParam6);
		}
		else if (bParam1)
		{
			if (bParam4)
			{
				func_1522(iParam0, 1);
			}
			else
			{
				func_1523(iParam0, 1);
			}
		}
		else
		{
			func_1524(iParam0, 1);
		}
		if (bParam7)
		{
			_0x276aaf0f1c7f2494(iParam0, 1);
		}
	}
	else if (func_1525())
	{
	}
	else if (network_is_in_session())
	{
	}
}

int func_929(char[4] cParam0)
{
	iVar0 = func_33(cParam0);
	if (iVar0 == iLocal_49)
	{
		_0x140b3cb1d424a945(Global_35, -1);
		_set_weather_type(1632247697, false, true, true, 45f, false);
	}
	if (iVar0 == iLocal_51)
	{
	}
	if (iVar0 == iLocal_54)
	{
		_0x140b3cb1d424a945(Global_35, -1);
	}
	return 1;
}

void func_930(char[4] cParam0, int iParam1)
{
	cParam0->f_8265 = iParam1;
	func_103(cParam0, 2048);
}

int func_931(char[4] cParam0)
{
	switch (func_33(cParam0))
	{
		case 0:
			if (!func_394(iVar1682, 536870912))
			{
				func_1526(iLocal_249, 4, -1557.296f, -1445.664f, 92.30183f, 0);
				func_420(&uLocal_1685, 536870912);
			}
			if (func_1527(cParam0, &(uLocal_239[0]), "uncle", 0, 1, 1) || _0x005e6f28dd7ed58d(Global_43800, "uncle"))
			{
				if (!func_1259(&(uLocal_239[0]), 1868526510))
				{
					task_mount_animal(&(uLocal_239[0]), iLocal_251, 20000, -1, 1f, 1, 0, 0);
				}
			}
			if (func_1527(cParam0, Global_35, "JOHN", 0, 1, 1) || _0x005e6f28dd7ed58d(Global_43800, "JOHN"))
			{
				func_1528(-668482597, 2000, 0, 1, 1, 0, 0, 0);
				if (func_120(cParam0, 4))
				{
					func_915(0, 0);
				}
			}
			break;
		case 1:
			if (_0x8d81e7824b7753f7(Global_43800, "SAD3_INT_P3_T02_Shot_1", 1))
			{
				if (get_clock_hours() >= 4 && get_clock_hours() < 7)
				{
					set_clock_time(7, 0, 0);
				}
			}
			if (is_named_rendertarget_registered("cata_mp_stamp_ct"))
			{
				set_text_render_id(get_named_rendertarget_render_id("cata_mp_stamp_ct"));
				_0x9d37eb5003e0f2cf(get_named_rendertarget_render_id("cata_mp_stamp_ct"), 1);
				draw_rect(0.5f, 0.5f, 2f, 2f, 0, 0, 0, 255, false, true);
			}
			if (is_named_rendertarget_registered("catalogue01x_ct"))
			{
				set_text_render_id(get_named_rendertarget_render_id("catalogue01x_ct"));
				draw_sprite("UI_DOC_BUILDCAT", "UI_DOC_BUILDCAT", 0.5f, 0.5f, 1f, 1f, 0f, 255, 255, 255, 255, false);
				draw_sprite("UI_DOC_BARNCAT", "UI_DOC_BARNCAT", 0.5f, 1f, 1f, 1f, 0f, 255, 255, 255, 255, false);
			}
			if (func_394(iVar1683, 4))
			{
				func_1254(&uLocal_1686, 4);
			}
			if (_0x8a3945405b31048f() > 0.6f)
			{
				func_1247(0.6f);
			}
			_0xab0d553fe20a6e25(0f);
			set_scenario_ped_density_multiplier_this_frame(0f);
			if (!func_394(iVar1683, 1))
			{
				func_904(iLocal_249, -803.261f, -1304.708f, 43.436f, 1.7f, 2, 1073741824);
				task_stand_still(iLocal_249, -1);
				func_420(&uLocal_1686, 1);
			}
			if (func_1527(cParam0, &(uLocal_239[1]), "MrsAdler", 0, 1, 1))
			{
				if (func_120(cParam0, 4) || func_8(cParam0, 524288))
				{
					_set_ped_on_mount(&(uLocal_239[1]), iLocal_250, -1, true);
				}
			}
			if (func_1527(cParam0, Global_35, "JOHN", 0, 1, 1))
			{
				if (func_120(cParam0, 4) || func_8(cParam0, 524288))
				{
					_set_ped_on_mount(Global_35, iLocal_249, -1, true);
				}
			}
			if (func_1527(cParam0, &(uLocal_239[0]), "uncle", 0, 1, 1))
			{
				if (!func_1259(&(uLocal_239[0]), -1107084229))
				{
					set_ped_config_flag(&(uLocal_239[0]), 167, true);
					_task_move_in_traffic_4(&(uLocal_239[0]), 1.75f, -1407.406f, -1384.5f, 90.7442f, 1);
				}
			}
			break;
		case 3:
			if (!func_394(iVar1683, 8))
			{
				func_1529(iVar1383, 0, 1);
				func_420(&uLocal_1686, 8);
			}
			func_1530();
			if (get_clock_hours() <= 12 && get_clock_hours() != 18)
			{
				set_clock_time(12, 0, 0);
			}
			if (func_1527(cParam0, iVar1383, "RAMON_CORTEZ", 0, 1, 1))
			{
				if (func_120(cParam0, 4) || func_8(cParam0, 524288))
				{
					if (!_does_anim_scene_exist(cParam0->f_7375.f_804))
					{
						if (_0x61914209c36efddb(iVar1383) != 7)
						{
							task_carriable(iVar1383, -2146271366, iLocal_250, 5, 0);
						}
					}
				}
			}
			if (func_1527(cParam0, Global_35, "JOHN", 0, 1, 1) || _0x005e6f28dd7ed58d(Global_43800, "JOHN"))
			{
				set_current_ped_weapon(Global_35, -1569615261, true, 0, false, false);
				if (func_120(cParam0, 4) || func_8(cParam0, 524288))
				{
					func_1531(Global_35, iLocal_249, 0, -1, 1);
				}
			}
			if (func_1527(cParam0, &(uLocal_239[1]), "MrsAdler", 0, 1, 1) || _0x005e6f28dd7ed58d(Global_43800, "MrsAdler"))
			{
				if (func_120(cParam0, 4) || func_8(cParam0, 524288))
				{
					_set_ped_on_mount(&(uLocal_239[1]), iLocal_250, -1, true);
				}
			}
			break;
		case 4:
			if (has_anim_event_fired(iVar1383, 567187370))
			{
				if (_0x5da36cccb63c0895(iVar1383, 1, 1))
				{
					_0x7e8f9949b7aabbf0(iVar1383, 1, 1);
				}
			}
			if (func_1527(cParam0, Global_35, "JOHN", 0, 1, 1))
			{
				if (_is_base_a_cover_point(&(iLocal_1777[4])) && _0x8cbe916cfc64ad5c(Global_35))
				{
					if (!func_1259(Global_35, -1959848946))
					{
						task_put_ped_directly_into_cover(Global_35, func_1532(1, 6), -1, 1, 0f, 1, 1, &(iLocal_1777[4]), 0, 1, 0);
						_0x2208438012482a1a(Global_35, false, false);
					}
				}
				if (func_120(cParam0, 4) || func_8(cParam0, 524288))
				{
					iVar2 = 0;
					while (iVar2 <= 9)
					{
						if (does_entity_exist(&(Local_264[iVar2])))
						{
							set_entity_visible(&(Local_264[iVar2]), true);
							freeze_entity_position(&(Local_264[iVar2]), false);
							set_entity_completely_disable_collision(&(Local_264[iVar2]), true, false);
							set_ped_config_flag(&(Local_264[iVar2]), 471, false);
							set_ped_config_flag(&(Local_264[iVar2]), 324, false);
						}
						iVar2++;
					}
					iVar3 = 2;
					while (iVar3 <= 4)
					{
						if (does_entity_exist(&(Local_1285[iVar3])))
						{
							set_entity_visible(&(Local_1285[iVar3]), true);
							freeze_entity_position(&(Local_1285[iVar3]), false);
							_0xc9151483cc06a414(&(Local_1285[iVar3]));
							set_entity_completely_disable_collision(&(Local_1285[iVar3]), true, false);
							set_ped_config_flag(&(Local_1285[iVar3]), 471, false);
							set_ped_config_flag(&(Local_1285[iVar3]), 324, false);
						}
						iVar3++;
					}
				}
			}
			if (func_1527(cParam0, &(uLocal_239[1]), "MrsAdler", 0, 1, 1))
			{
				if (!func_1259(&(uLocal_239[1]), 242628503))
				{
					set_ped_sphere_defensive_area(&(uLocal_239[1]), 1360.198f, -1305.764f, 76.9f, 0.75f, 0, 0, 0);
					clear_sequence_task(&uLocal_1508);
					open_sequence_task(&uLocal_1508);
					task_put_ped_directly_into_cover(0, 1360.198f, -1305.764f, 76.7606f, 2, 1, 0f, 0, 0, &(iLocal_1777[5]), 0, 1, 0);
					task_combat_hated_targets_around_ped(0, 100f, 0, 0);
					close_sequence_task(iVar1505);
					task_perform_sequence(&(uLocal_239[1]), iVar1505);
					clear_sequence_task(&uLocal_1508);
				}
			}
			if (func_1527(cParam0, iVar1383, "RAMON_CORTEZ", 0, 1, 1))
			{
				iLocal_1829 = _find_closest_active_scenario_point_of_type(1357.171f, -1300.728f, 76.76055f, 421625586, 1f, 1, false);
				if (_does_scenario_point_exist(iVar1826))
				{
					if (!func_1259(iVar1383, -76381094))
					{
						_task_use_scenario_point(iVar1383, iVar1826, 0, -1, false, true, 0, false, -1f, false);
					}
				}
			}
			if (func_1527(cParam0, &(Local_1285[4]), "Horse_01^2", 0, 1, 0))
			{
				if (does_entity_exist(&(Local_1285[4])))
				{
					delete_ped(Local_1285[4]);
				}
			}
			if (func_120(cParam0, 4))
			{
				if (iVar1687 <= 4)
				{
					iLocal_1690 = 4;
				}
			}
			switch (iVar1687)
			{
				case 0:
					if ((_0x1f0e401031e20146(Global_43800, "MultiStart") && _get_anim_scene_progress(Global_43800) >= 0.7611732f) || (_0x1f0e401031e20146(Global_43800, "NormalStart") && _get_anim_scene_progress(Global_43800) >= 0.7466745f))
					{
						iVar2 = 0;
						while (iVar2 <= 9)
						{
							if (iVar2 != 4 && iVar2 != 5)
							{
								if (does_entity_exist(&(Local_264[iVar2])))
								{
									set_entity_visible(&(Local_264[iVar2]), true);
									freeze_entity_position(&(Local_264[iVar2]), false);
									set_entity_completely_disable_collision(&(Local_264[iVar2]), true, false);
									set_ped_config_flag(&(Local_264[iVar2]), 471, false);
									set_ped_config_flag(&(Local_264[iVar2]), 324, false);
								}
							}
							iVar2++;
						}
						iVar3 = 2;
						while (iVar3 <= 3)
						{
							if (does_entity_exist(&(Local_1285[iVar3])))
							{
								set_entity_visible(&(Local_1285[iVar3]), true);
								freeze_entity_position(&(Local_1285[iVar3]), false);
								_0xc9151483cc06a414(&(Local_1285[iVar3]));
								set_entity_completely_disable_collision(&(Local_1285[iVar3]), true, false);
								set_ped_config_flag(&(Local_1285[iVar3]), 471, false);
								set_ped_config_flag(&(Local_1285[iVar3]), 324, false);
							}
							iVar3++;
						}
						iLocal_1690 = iVar1687 + 1;
					}
				case 1:
					if ((_0x1f0e401031e20146(Global_43800, "MultiStart") && _get_anim_scene_progress(Global_43800) >= 0.8427374f) || (_0x1f0e401031e20146(Global_43800, "NormalStart") && _get_anim_scene_progress(Global_43800) >= 0.8321017f))
					{
						iVar2 = 4;
						while (iVar2 <= 5)
						{
							if (does_entity_exist(&(Local_264[iVar2])))
							{
								set_entity_visible(&(Local_264[iVar2]), true);
								freeze_entity_position(&(Local_264[iVar2]), false);
								set_entity_collision(&(Local_264[iVar2]), true, false);
							}
							iVar2++;
						}
						if (does_entity_exist(&(Local_1285[4])))
						{
							set_entity_visible(&(Local_1285[4]), true);
							freeze_entity_position(&(Local_1285[4]), false);
							_0xc9151483cc06a414(&(Local_1285[4]));
							set_entity_collision(&(Local_1285[4]), true, false);
						}
						iLocal_1690 = iVar1687 + 1;
					}
				case 2:
					if (((_0x1f0e401031e20146(Global_43800, "MultiStart") && _get_anim_scene_progress(Global_43800) >= 0.953352f) || (_0x1f0e401031e20146(Global_43800, "NormalStart") && _get_anim_scene_progress(Global_43800) >= 0.9577298f)) || func_120(cParam0, 4))
					{
						_remove_ped_from_mount(&(Local_264[0]), true, false);
						_remove_ped_from_mount(&(Local_264[1]), true, false);
						_remove_ped_from_mount(&(Local_264[2]), true, false);
						func_1322(&(Local_264[0]), func_1321(0, 0), 2, 1073741824);
						func_1322(&(Local_264[1]), func_1321(0, 1), 2, 1073741824);
						func_1322(&(Local_264[2]), func_1321(0, 2), 2, 1073741824);
						func_1322(&(Local_264[3]), func_1321(0, 3), 2, 1073741824);
						func_1322(&(Local_264[4]), func_1321(0, 4), 2, 1073741824);
						func_1322(&(Local_1285[2]), func_1321(0, 6), 2, 1073741824);
						func_1322(&(Local_1285[3]), func_1321(0, 7), 2, 1073741824);
						iLocal_1690 = iVar1687 + 1;
					}
					break;
				case 3:
					if (!func_8(cParam0, 524288))
					{
						iVar4 = 0;
						while (iVar4 <= 5)
						{
							if (!func_1259(&(Local_264[iVar4]), -982327190))
							{
								task_stand_still(&(Local_264[iVar4]), -1);
								set_ped_using_action_mode(&(Local_264[iVar4]), true, -1, 0);
							}
							iVar4++;
						}
					}
					iLocal_1690 = iVar1687 + 1;
				case 4:
					if (_0x1f0e401031e20146(Global_43800, "MultiStart"))
					{
						fVar0 = 0.973854f;
					}
					else if (_0x1f0e401031e20146(Global_43800, "NormalStart"))
					{
						fVar0 = 0.9701601f;
					}
					if ((_get_anim_scene_progress(Global_43800) >= fVar0 || func_1527(cParam0, Global_35, "JOHN", 0, 1, 1)) || _0x005e6f28dd7ed58d(Global_43800, "JOHN"))
					{
						iVar4 = 0;
						while (iVar4 <= 5)
						{
							set_ped_combat_attributes(&(Local_264[iVar4]), 30, true);
							set_ped_using_action_mode(&(Local_264[iVar4]), true, -1, 0);
							if (!func_1259(&(Local_264[iVar4]), 242628503))
							{
								register_target(iLocal_246, &(Local_264[iVar4]), 1);
								clear_sequence_task(&uLocal_1508);
								open_sequence_task(&uLocal_1508);
								task_combat_hated_targets_around_ped(0, 100f, 0, 0);
								close_sequence_task(iVar1505);
								task_perform_sequence(&(Local_264[iVar4]), iVar1505);
								clear_sequence_task(&uLocal_1508);
								_0x2208438012482a1a(&(Local_264[iVar4]), false, false);
							}
							iVar4++;
						}
						if (!func_1259(&(Local_1285[2]), 658540077))
						{
							task_follow_waypoint_recording(&(Local_1285[2]), "sad3_flee_ambush1", 0, 0, -1, 0, 0, -1);
							_0x2208438012482a1a(&(Local_1285[2]), false, false);
						}
						if (!func_1259(&(Local_1285[3]), 658540077))
						{
							task_follow_waypoint_recording(&(Local_1285[3]), "sad3_flee_ambush2", 0, 0, -1, 0, 0, -1);
							_0x2208438012482a1a(&(Local_1285[3]), false, false);
						}
						iLocal_1690 = iVar1687 + 1;
					}
				case 5:
					if (does_entity_exist(&(Local_1285[2])) && is_waypoint_playback_going_on_for_ped(&(Local_1285[2]), 0))
					{
						waypoint_playback_override_speed(&(Local_1285[2]), 2f, 0, -1082130432, 0);
					}
					if (does_entity_exist(&(Local_1285[3])) && is_waypoint_playback_going_on_for_ped(&(Local_1285[3]), 0))
					{
						waypoint_playback_override_speed(&(Local_1285[3]), 2f, 0, -1082130432, 0);
					}
					break;
			}
			break;
		case 5:
			if (func_1527(cParam0, &(uLocal_239[1]), "MrsAdler", 0, 1, 1) || _0x005e6f28dd7ed58d(Global_43800, "MrsAdler"))
			{
				if (!func_1259(&(uLocal_239[1]), 1868526510))
				{
					task_mount_animal(&(uLocal_239[1]), iLocal_250, 20000, -1, 1.5f, 1, 0, 0);
				}
			}
			if (func_1527(cParam0, Global_35, "JOHN", 0, 1, 0) || _0x005e6f28dd7ed58d(Global_43800, "JOHN"))
			{
				set_current_ped_weapon(Global_35, -1569615261, false, 0, false, false);
				if (!func_120(cParam0, 4))
				{
					simulate_player_input_gait(get_player_index(), 1f, 2000, 0f, true, false);
				}
			}
			if (func_1527(cParam0, iLocal_246, "U_M_M_RHDSHERIFF_01", 0, 1, 0) || _0x005e6f28dd7ed58d(Global_43800, "U_M_M_RHDSHERIFF_01"))
			{
				set_blocking_of_non_temporary_events(iLocal_246, false);
				if (!func_1259(iLocal_246, -1098463898))
				{
					task_start_scenario_at_position(iLocal_246, 421625586, 1362.082f, -1302.171f, 76.76797f, 70.4101f, -1, false, true, "WORLD_HUMAN_LEAN_BACK_WALL_MALE_D", -1f, false);
				}
			}
			break;
		case 6:
			if (func_394(iVar1683, 16))
			{
				func_1254(&uLocal_1686, 16);
			}
			if (!func_394(iVar1681, 67108864) && !func_120(cParam0, 4))
			{
				_0xcac43d060099ea72(iLocal_250);
				_0xcac43d060099ea72(iLocal_249);
				set_entity_visible(iLocal_250, false);
				set_entity_visible(iLocal_249, false);
				set_clock_time(2, 0, 0);
				func_420(&uLocal_1684, 67108864);
			}
			if (func_1527(cParam0, &(uLocal_239[1]), "MrsAdler", 0, 1, 0))
			{
				func_1533(cParam0, 0);
				if (!_is_anim_scene_started(&(Local_72[0]), false))
				{
					func_904(&(uLocal_239[1]), 722.6404f, -497.3124f, 74.3039f, 224.65f, 2, 1073741824);
					start_anim_scene(&(Local_72[0]));
				}
			}
			if (!_get_ped_crouch_movement(Global_35))
			{
				_set_ped_crouch_movement(Global_35, true, 0, false);
			}
			_0xe9b3fec825668291(Global_35, 1402226560, 5f);
			if (_0xb89fcff19dafff28(Global_43800, "JOHN"))
			{
				func_904(Global_35, 727.4158f, -472.0645f, 84.897f, 156.352f, 2, 1073741824);
				func_1344(get_entity_coords(&(uLocal_239[1]), true, false));
				set_current_ped_weapon(&(uLocal_239[1]), -1569615261, false, 0, false, false);
				set_current_ped_weapon(Global_35, 1402226560, true, 0, false, false);
				_add_ammo_to_ped(Global_35, 1402226560, 30, 752097756);
				_0x183ce355115b6e75(Global_35, 1402226560);
				set_player_control(player_id(), true, 0, false);
				set_player_forced_aim(player_id(), true, 0, -1, false);
				_0x2208438012482a1a(Global_35, true, false);
				force_ped_motion_state(Global_35, 1063765679, false, 1, false);
				_0x9f9a829c6751f3c7(player_id(), 6, 1);
			}
			if (_0xb89fcff19dafff28(cParam0->f_7375.f_804, "w_rifle_rollingBlock01"))
			{
				delete_object(iLocal_1406[10]);
			}
			break;
		case 9:
			if (!func_394(iVar1682, 536870912))
			{
				func_1526(iLocal_249, 4, 721.2582f, -467.2651f, 78.35786f, 0);
				func_420(&uLocal_1685, 536870912);
			}
			if (_0x1f0e401031e20146(Global_43800, "1-PlayerThreatensCortez") && _get_anim_scene_progress(Global_43800) >= 0.65f)
			{
				iVar1 = 43;
				while (iVar1 <= 44)
				{
					if (func_186(&(Local_264[iVar1]), 0))
					{
						if (!func_1259(&(Local_264[iVar1]), 242628503))
						{
							clear_sequence_task(&uLocal_1508);
							open_sequence_task(&uLocal_1508);
							task_go_to_coord_and_aim_at_hated_entities_near_coord(0, Local_264[iVar1]->f_10, Local_264[iVar1]->f_10, 2f, false, 0.5f, 3f, true, 0, 0, -687903391);
							close_sequence_task(iVar1505);
							if (iVar1 == 44)
							{
								_task_perform_sequence_2(&(Local_264[iVar1]), iVar1505, 1.5f, 1.5f);
							}
							else
							{
								task_perform_sequence(&(Local_264[iVar1]), iVar1505);
							}
							clear_sequence_task(&uLocal_1508);
						}
					}
					iVar1++;
				}
			}
			if (_0x1f0e401031e20146(Global_43800, "1-PlayerThreatensCortez") && _get_anim_scene_progress(Global_43800) >= 0.85f)
			{
				iVar1 = 43;
				while (iVar1 <= 44)
				{
					if (does_entity_exist(&(Local_264[iVar1])))
					{
						delete_ped(Local_264[iVar1]);
					}
					iVar1++;
				}
			}
			if (_0x1f0e401031e20146(Global_43800, "1-PlayerThreatensCortez") && _get_anim_scene_progress(Global_43800) >= 0.75f)
			{
				iVar1 = 39;
				while (iVar1 <= 42)
				{
					if (func_186(&(Local_264[iVar1]), 0))
					{
						if (!func_1259(&(Local_264[iVar1]), 242628503))
						{
							clear_sequence_task(&uLocal_1508);
							open_sequence_task(&uLocal_1508);
							if (iVar1 != 39 && iVar1 != 40)
							{
								task_go_to_coord_and_aim_at_hated_entities_near_coord(0, Local_264[iVar1]->f_10, Local_264[iVar1]->f_10, 2f, true, 0.5f, 3f, true, 0, 0, -687903391);
							}
							task_combat_hated_targets(0, -1f);
							close_sequence_task(iVar1505);
							if (iVar1 == 40)
							{
								_task_perform_sequence_2(&(Local_264[iVar1]), iVar1505, 2f, 2f);
							}
							else
							{
								task_perform_sequence(&(Local_264[iVar1]), iVar1505);
							}
							clear_sequence_task(&uLocal_1508);
						}
					}
					iVar1++;
				}
			}
			if (func_1527(cParam0, iVar1383, "RAMON_CORTEZ", 0, 1, 1) || _0x005e6f28dd7ed58d(cParam0->f_7375.f_804, "RAMON_CORTEZ"))
			{
				if (!_is_ped_hogtied(iVar1383))
				{
					func_904(iVar1383, 585.7644f, -625.0264f, 40.8097f, 316.72f, 0, 1073741824);
					task_carriable(iVar1383, -2146271366, 0, 0, 0);
				}
			}
			if (func_1527(cParam0, &(uLocal_239[1]), "MrsAdler", 0, 1, 1))
			{
				if (func_120(cParam0, 4) || func_8(cParam0, 524288))
				{
					func_904(&(uLocal_239[1]), 580.0553f, -623.2661f, 41.3076f, 218.09f, 2, 1073741824);
				}
				task_put_ped_directly_into_cover(&(uLocal_239[1]), 580.0553f, -623.2661f, 41.3076f, -1, 1, 0f, 0, 0, 0, 0, 0, 0);
			}
			if (func_120(cParam0, 4) || func_8(cParam0, 524288))
			{
				if (func_1527(cParam0, Global_35, "JOHN", 0, 1, 1) || _0x005e6f28dd7ed58d(cParam0->f_7375.f_804, "JOHN"))
				{
					func_904(Global_35, 591.624f, -625.5999f, 42.1166f, 203.54f, 2, 1073741824);
					if (_is_base_a_cover_point(&(iLocal_1777[3])) && _0x8cbe916cfc64ad5c(Global_35))
					{
						func_1534(610.0647f, -606.1842f, 48.10181f, 0);
						task_put_ped_directly_into_cover(Global_35, func_1532(6, 0), -1, 1, 0f, 0, 0, &(iLocal_1777[3]), 0, 0, 0);
					}
				}
			}
			if (has_anim_event_fired(Global_35, -481972696))
			{
				if (_is_base_a_cover_point(&(iLocal_1777[3])) && _0x8cbe916cfc64ad5c(Global_35))
				{
					func_1534(610.0647f, -606.1842f, 48.10181f, 0);
					task_put_ped_directly_into_cover(Global_35, func_1532(6, 0), -1, 1, 0f, 0, 0, &(iLocal_1777[3]), 0, 0, 0);
				}
			}
			if (func_1535(cParam0, iVar1772, "rowboat", 0, 1, 1))
			{
				func_904(iVar1772, 583.1984f, -625.6459f, 41.1075f, 307.63f, 1, 1073741824);
			}
			break;
		case 25:
			if (_0x5da36cccb63c0895(iVar1383, 1, 1))
			{
				_0x7e8f9949b7aabbf0(iVar1383, 1, 1);
			}
			if (_get_anim_scene_progress(Global_43800) >= 0.968f)
			{
				if (iLocal_57 != 1 || iLocal_57 != 2)
				{
					iLocal_57 = 1;
				}
			}
			if (func_1527(cParam0, iVar1383, "RAMON_CORTEZ", 0, 1, 0))
			{
				func_175(&Local_1386, 0);
			}
			if (func_1527(cParam0, iLocal_247, "RhoDeputy_01", 0, 1, 0))
			{
				func_175(&iLocal_247, 0);
			}
			if (func_1527(cParam0, iLocal_248, "RhoDeputy_02", 0, 1, 0))
			{
				func_175(&iLocal_248, 0);
			}
			if (func_1527(cParam0, &(uLocal_239[1]), "MrsAdler", 0, 1, 1))
			{
				func_473(11, 0, 0, 1, -1082130432, 1, 1, 0, 0, 0, 0);
			}
			if (func_1527(cParam0, iLocal_246, "U_M_M_RHDSHERIFF_01", 0, 1, 1))
			{
				if (func_185(70, 1))
				{
					func_187(70, 1, 1, 0, 0);
				}
			}
			if (func_1535(cParam0, iVar1773, "wagonprison01x", 0, 1, 0))
			{
				func_188(&iLocal_1776, 0);
			}
			break;
	}
	return 1;
}

void func_932(char[4] cParam0, int iParam1)
{
	cParam0->f_8266 = iParam1;
	func_103(cParam0, 1024);
}

int func_933(char[4] cParam0)
{
	switch (func_33(cParam0))
	{
		case 0:
			func_1264(cParam0, "SAD3_OBJ1", -1082130432, 0, 0, -1, -1, 0);
			break;
		case 1:
			func_1264(cParam0, "SAD3_OBJ2", -1082130432, 0, 0, -1, -1, 0);
			break;
		case 2:
			func_1264(cParam0, "SAD3_OBJ3A", -1082130432, 0, 0, -1, -1, 0);
			break;
		case 3:
			_0xff745b0346e19e2c(-2146271366);
			if (_0xb8f52a3f84a7cc59(-2146271366))
			{
				return 0;
			}
			func_1264(cParam0, "SAD3_OBJ4a", -1082130432, 0, 0, -1, -1, 0);
			break;
		case 4:
			func_1264(cParam0, "SAD3_OBJ5a", -1082130432, 0, 0, -1, -1, 0);
			break;
		case 5:
			func_1264(cParam0, "SAD3_OBJ1", -1082130432, 0, 0, -1, -1, 0);
			break;
		case 6:
			func_1264(cParam0, "SAD3_OBJ7", -1082130432, 0, 0, -1, -1, 0);
			break;
		case 7:
			func_1264(cParam0, "SAD3_OBJ8", -1082130432, 0, 0, -1, -1, 0);
			break;
		case 8:
			func_1264(cParam0, "SAD3_OBJ10", -1082130432, 0, 0, -1, -1, 0);
			break;
		case 9:
			func_1264(cParam0, "SAD3_OBJ11a", -1082130432, 0, 0, -1, -1, 0);
			break;
		case 10:
			func_1264(cParam0, "SAD3_OBJ12a", -1082130432, 0, 0, -1, -1, 0);
			break;
	}
	return 1;
}

void func_934(char[4] cParam0, int iParam1)
{
	cParam0->f_8267 = iParam1;
	func_103(cParam0, 131072);
}

void func_935(int iParam0, int iParam1, bool bParam2, float fParam3)
{
	func_1536(iParam0, iParam1, bParam2, fParam3);
}

void func_936(var uParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6, int iParam7)
{
	if (!func_1537(uParam0))
	{
		*uParam0 = _0xfa50f79257745e74(vParam1, fParam4, iParam5, iParam6, iParam7);
		if (func_1537(uParam0))
		{
		}
	}
}

int func_937(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	bVar0 = func_1538(iParam3, 1);
	bVar1 = func_1538(iParam3, 2);
	bVar2 = !func_1538(iParam3, 4);
	bVar3 = func_1538(iParam3, 8);
	bVar4 = !func_1538(iParam3, 16);
	bVar5 = func_1538(iParam3, 32);
	bVar6 = func_1538(iParam3, 64);
	return func_1358(iParam0, iParam1, bVar0, bVar1, iParam4, bVar2, bVar3, iParam5, iParam6, iParam2, bVar4, bVar5, bParam7, bVar6);
}

void func_938()
{
	iVar0 = func_1097(Global_35, 9, 1, 0);
	if (func_696(iVar0))
	{
		return;
	}
	iVar0 = func_1097(Global_35, 7, 1, 0);
	if (func_696(iVar0))
	{
		set_current_ped_weapon(Global_35, iVar0, true, 8, false, false);
	}
	iVar0 = func_1097(Global_35, 0, 1, 0);
	if (func_696(iVar0) && _is_weapon_two_handed(iVar0))
	{
		set_current_ped_weapon(Global_35, iVar0, true, 9, false, false);
		return;
	}
	iVar0 = func_1097(Global_35, 1, 1, 0);
	if (func_696(iVar0) && _is_weapon_two_handed(iVar0))
	{
		set_current_ped_weapon(Global_35, iVar0, true, 9, false, false);
		return;
	}
	iVar0 = func_1097(Global_35, 18, 1, 0);
	if (func_696(iVar0) && _is_weapon_two_handed(iVar0))
	{
		set_current_ped_weapon(Global_35, iVar0, true, 9, false, false);
		return;
	}
	iVar0 = func_1539();
	if (func_696(iVar0))
	{
		if (has_ped_got_weapon(Global_35, iVar0, 0, true))
		{
			func_1358(Global_35, iVar0, 1, 0, 9, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
		}
		else
		{
			set_current_ped_weapon(Global_35, iVar0, true, 9, false, false);
		}
		return;
	}
	iVar0 = func_1540(6291456, 0);
	if (func_696(iVar0))
	{
		if (!has_ped_got_weapon(Global_35, iVar0, 0, true))
		{
			func_1358(Global_35, iVar0, 1, 0, 9, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
		}
		else
		{
			set_current_ped_weapon(Global_35, iVar0, true, 9, false, false);
		}
	}
}

void func_939(var uParam0)
{
	func_1541(uParam0, 0);
	func_1542(uParam0, 0);
	func_1543(uParam0, 1);
	func_1544(uParam0, 1);
	func_1545(uParam0, 0);
	func_1546(uParam0, 1);
	func_1547(uParam0, 1, 1, 1);
}

void func_940(var uParam0, int iParam1)
{
	uParam0->f_21 = iParam1;
}

void func_941(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_986(&(uParam0->f_1), 8);
	}
	else
	{
		func_985(&(uParam0->f_1), 8);
	}
}

void func_942(char[4] cParam0)
{
	func_1548(cParam0);
	if (func_33(cParam0) == iLocal_46)
	{
		if (_0x8a3945405b31048f() > 0.1f)
		{
			func_1247(0.1f);
		}
		_0xab0d553fe20a6e25(0.1f);
	}
	_0xf45e46deecf7df6e(4096, 0, 0, -1, -1);
	if (func_33(cParam0) > iLocal_50)
	{
		func_1328();
		if (Global_1935496->f_30 == 1402226560)
		{
			_0x78030c7867d8b9b6(Global_35, 0);
			disable_control_action(0, 2109526038, false);
		}
		else
		{
			_0x78030c7867d8b9b6(Global_35, 1);
			enable_control_action(0, 2109526038, true);
		}
	}
	if (func_33(cParam0) == iLocal_49)
	{
		set_ped_reset_flag(&(uLocal_239[1]), 289, true);
	}
	if (func_33(cParam0) <= iLocal_48)
	{
		if (get_clock_hours() >= 18)
		{
			set_clock_time(18, 0, 0);
		}
	}
	if (func_33(cParam0) == iLocal_49)
	{
		if (get_clock_hours() >= 20 && get_clock_minutes() >= 30)
		{
			set_clock_time(20, 30, 0);
		}
	}
	if (func_33(cParam0) >= iLocal_49 && func_33(cParam0) <= iLocal_54)
	{
		if (get_clock_hours() == 4)
		{
			pause_clock(true, 0);
			set_clock_time(4, 0, 0);
		}
	}
	if (func_33(cParam0) == iLocal_55)
	{
		if (get_clock_hours() >= 5 && get_clock_minutes() >= 30)
		{
			set_clock_time(5, 30, 0);
		}
	}
	if (func_33(cParam0) == iLocal_45 || func_33(cParam0) == iLocal_46)
	{
		if (func_394(iVar1683, 4))
		{
			_0xe296208c273bd7f0(-1, -1, 0, 17, 1, 0);
		}
	}
	if (func_33(cParam0) == iLocal_50 || func_33(cParam0) == iLocal_51)
	{
		if (func_394(iVar1683, 16))
		{
			_0xe296208c273bd7f0(-1, -1, 0, 17, 1, 0);
		}
	}
	if (func_33(cParam0) >= iLocal_55)
	{
		_0xe94b5e938619712e();
	}
	if (func_33(cParam0) >= iLocal_56)
	{
		_0xc9caeaeec1256e54(-1679307491);
		func_816(cParam0);
	}
	if (func_33(cParam0) >= iLocal_55)
	{
		if (!does_rayfire_map_object_exist(iVar1827))
		{
			iLocal_1830 = get_rayfire_map_object(1353.486f, -1302.814f, 76.75661f, 100f, "des_rho_sheriff");
		}
		else if (get_state_of_rayfire_map_object(iVar1827) != 9)
		{
			set_state_of_rayfire_map_object(iVar1827, 9);
		}
	}
	if (func_33(cParam0) == iLocal_47 || func_33(cParam0) == iLocal_48)
	{
		if (func_394(iVar1683, 4096))
		{
			_disable_guard_zone("PAINTED_SKY");
		}
	}
}

void func_943(char[4] cParam0)
{
	if (!func_23(&(cParam0->f_8269)))
	{
		return;
	}
	if (!func_121(cParam0, func_33(cParam0), 268435456))
	{
		return;
	}
	func_1549(cParam0);
}

void func_944(char[4] cParam0)
{
	if (!func_8(cParam0, 8388608))
	{
		if (func_162(cParam0, func_33(cParam0)) == 5 || func_162(cParam0, func_33(cParam0)) == 6)
		{
			if (!func_220())
			{
				if (func_913(&(cParam0->f_13112)) < 5f)
				{
					_0x9f9a829c6751f3c7(get_player_index(), 31, 0);
				}
			}
			else
			{
				func_227(&(cParam0->f_13112));
			}
		}
	}
	else
	{
		_0x9f9a829c6751f3c7(get_player_index(), 31, 1);
	}
}

void func_945(char[4] cParam0)
{
	if (func_121(cParam0, func_33(cParam0), 8388608))
	{
		if (func_1550(cParam0))
		{
			_uiprompt_enable_prompt_type_this_frame(6);
			func_1551();
		}
		else
		{
			_display_hud_component(-1679307491);
			func_1552(cParam0, func_33(cParam0), 8388608);
		}
	}
}

void func_946(char[4] cParam0)
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
		if (func_244() || func_54())
		{
			func_99(cParam0, 1048576);
		}
	}
	else if (!func_244() && !func_54())
	{
		func_909(cParam0, 1048576);
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
			func_909(cParam0, 134217728);
		}
	}
}

void func_947(char[4] cParam0)
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

void func_948(char[4] cParam0)
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

void func_949(char[4] cParam0)
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

int func_950(char[4] cParam0)
{
	if ((func_20() != -1 || func_33(cParam0) == 25) || func_33(cParam0) == 26)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < cParam0->f_13145)
	{
		if (func_260(cParam0->f_5423[iVar0]))
		{
			func_1553(cParam0->f_5423[iVar0]);
		}
		iVar0++;
	}
	return 0;
}

bool func_951(char[4] cParam0, int iParam1, int iParam2)
{
	iVar0 = func_132(iParam1);
	if (!func_1554(iVar0))
	{
		return false;
	}
	iVar1 = func_1555(iParam2);
	if (!func_1556(iVar1))
	{
		return false;
	}
	if (!func_1557(cParam0, iParam1, iParam2))
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

int func_952(char[4] cParam0, int iParam1)
{
	return cParam0->f_1[func_132(iParam1)]->f_21;
}

int func_953(char[4] cParam0, int iParam1)
{
	return 1;
}

void func_954(char[4] cParam0)
{
	if (!func_20() == 0 || network_is_host_of_this_script())
	{
		func_227(&(cParam0->f_603));
	}
}

void func_955(char[4] cParam0, int iParam1, int iParam2)
{
	cParam0->f_1[func_132(iParam1)]->f_10 = iParam2;
	settimera(0);
}

bool func_956(char[4] cParam0)
{
	if (!is_screen_faded_out())
	{
		return true;
	}
	if (!func_26(&(cParam0->f_13109)))
	{
		func_27(&(cParam0->f_13109), 0);
	}
	else if (func_913(&(cParam0->f_13109)) >= 10f)
	{
		return true;
	}
	iVar0 = 1;
	if (func_261(cParam0->f_5421))
	{
		iVar1 = 0;
		while (iVar1 < func_262(cParam0->f_5421))
		{
			iVar2 = func_263(cParam0->f_5421, iVar1);
			if (does_entity_exist(iVar2))
			{
				if (is_entity_a_ped(iVar2))
				{
					iVar3 = func_1558(cParam0->f_5421, iVar1);
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

float func_957(char[4] cParam0)
{
	return func_913(&(cParam0->f_603));
}

bool func_958(char[4] cParam0)
{
	if ((func_120(cParam0, 4) || func_120(cParam0, 128)) && !func_102())
	{
		return false;
	}
	return true;
}

bool func_959(char[4] cParam0, int iParam1, int iParam2)
{
	if (func_8(cParam0, -2147483648))
	{
		return true;
	}
	if (func_951(cParam0, iParam1, 4))
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
		func_1559(cParam0);
		if (func_1560(cParam0))
		{
			func_1561(cParam0);
		}
		if (func_121(cParam0, func_33(cParam0), 33554432) && func_8(cParam0, 524288))
		{
			_uilog_print_cached_objective();
		}
		func_909(cParam0, 524288);
		func_1562(&(cParam0->f_7375), 4);
		if (func_1550(cParam0))
		{
			func_140(cParam0, func_33(cParam0), 8388608);
			_hide_hud_component(-1679307491);
			_uiprompt_enable_prompt_type_this_frame(6);
			func_1551();
		}
		return true;
	}
	return false;
}

void func_960(char[4] cParam0)
{
	func_1563(cParam0);
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

bool func_961(char[4] cParam0, int iParam1)
{
	if (func_120(cParam0, 16384))
	{
		if (func_908(cParam0))
		{
			func_51(&(cParam0->f_10792));
			func_909(cParam0, 2097152);
			func_270(cParam0, 16384);
			func_103(cParam0, 128);
			return true;
		}
		return false;
	}
	if (!func_8(cParam0, 4))
	{
		func_953(cParam0, iParam1);
		func_99(cParam0, 4);
	}
	Var0 = { func_1493(cParam0, iParam1) };
	if (func_121(cParam0, func_33(cParam0), 2))
	{
		if (func_8(cParam0, 2097152))
		{
			if (func_908(cParam0))
			{
				func_909(cParam0, 2097152);
				func_910(cParam0, Var0);
			}
			return false;
		}
		else
		{
			return func_910(cParam0, Var0);
		}
	}
	else if (func_8(cParam0, 2097152))
	{
		if (func_908(cParam0))
		{
			func_909(cParam0, 2097152);
			func_1500(cParam0);
			return true;
		}
		else
		{
			return false;
		}
	}
	if (func_121(cParam0, func_33(cParam0), 2))
	{
		return func_910(cParam0, Var0);
	}
	return true;
}

bool func_962(char[4] cParam0)
{
	return func_1564(&(cParam0->f_7375));
}

void func_963(char[4] cParam0)
{
	if (((!does_entity_exist(Global_35) || Global_1935630->f_12) || is_ped_fatally_injured(Global_35)) || get_entity_health(Global_35) <= 0)
	{
		if (func_1565(cParam0))
		{
			func_438(cParam0, 2);
			StringCopy(&cVar0, "PLAYER_DEAD", 64);
			if (get_ped_config_flag(Global_35, 11, true))
			{
				StringCopy(&cVar0, "PLAYER_KO", 64);
			}
			func_1566(cParam0, cVar0);
			func_160(cParam0, 2);
		}
	}
}

int func_964(char[4] cParam0, int iParam1)
{
	if (((func_20() != -1 || func_33(cParam0) == 25) || func_33(cParam0) == 26) || Global_1935630->f_12)
	{
		return 0;
	}
	bVar0 = func_121(cParam0, func_33(cParam0), 1);
	iVar1 = 0;
	while (iVar1 < cParam0->f_13145)
	{
		if (func_260(cParam0->f_5423[iVar1]))
		{
			if (func_1567(cParam0->f_5423[iVar1]->f_7, iParam1))
			{
				func_1568(cParam0, cParam0->f_5423[iVar1], bVar0);
			}
		}
		iVar1++;
	}
	return 0;
}

void func_965(char[4] cParam0)
{
	if ((is_screen_faded_out() && !is_player_playing(player_id())) && is_player_being_arrested(player_id(), false))
	{
		if (func_1569(cParam0))
		{
			func_438(cParam0, 6);
			StringCopy(&cVar0, "PLAYER_ARRESTED", 64);
			func_1566(cParam0, cVar0);
			func_160(cParam0, 2);
		}
	}
}

void func_966(char[4] cParam0)
{
	switch (func_1570(&iVar0))
	{
		case 1:
			func_1571(cParam0, Var1, 1, 0);
			break;
		case 3:
			if (!_databinding_is_data_id_valid(cParam0->f_13178))
			{
				cParam0->f_13178 = _databinding_add_data_bool_from_path("", "bAllowedtoAbandon", 0);
			}
			if (func_197(iVar0) && iVar0 == func_12(cParam0->f_607))
			{
				bVar9 = true;
			}
			_databinding_write_data_bool(cParam0->f_13178, bVar9);
			break;
	}
}

bool func_967(char[4] cParam0, int iParam1)
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

int func_968(char[4] cParam0, int iParam1)
{
	if (func_8(cParam0, 16777216))
	{
		func_1499(cParam0);
		func_909(cParam0, 65536);
		return 0;
	}
	if (!func_121(cParam0, iParam1, 2))
	{
		return 0;
	}
	Var0 = { func_1493(cParam0, iParam1) };
	if (func_1572(cParam0, &Var0))
	{
		if (!func_8(cParam0, 65536))
		{
			func_99(cParam0, 65536);
		}
		return 1;
	}
	return 0;
}

void func_969(char[4] cParam0, int iParam1)
{
	func_1573(&(cParam0->f_638), &(cParam0->f_819), &(cParam0->f_1020), &(cParam0->f_1081), &(cParam0->f_1124), &(cParam0->f_1126), &(cParam0->f_5147), &(cParam0->f_5188), &(cParam0->f_5239), &(cParam0->f_5249), &(cParam0->f_5265), &(cParam0->f_5286), iParam1, func_231(cParam0, iParam1));
}

void func_970(char[4] cParam0, int iParam1)
{
	if (!func_121(cParam0, func_33(cParam0), 67108864))
	{
		if (does_blip_exist(cParam0->f_5303))
		{
			remove_blip(&(cParam0->f_5303));
		}
		cParam0->f_7374 = 0;
		func_955(cParam0, iParam1, 2);
		func_134(cParam0, 0);
		func_135(cParam0, 0);
		func_99(cParam0, 8);
		func_909(cParam0, -2147483648);
		func_140(cParam0, func_33(cParam0), 67108864);
		func_909(cParam0, 4);
		func_909(cParam0, 8192);
		func_909(cParam0, 536870912);
		func_270(cParam0, 4);
		func_65(0);
		func_64(0);
		func_909(cParam0, 2);
		func_45();
		cParam0->f_5302 = 0;
		func_1574(cParam0);
		if ((func_35(cParam0) == 25 || func_35(cParam0) == 26) && func_82(32768))
		{
			func_383(cParam0, 524288);
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
				func_1575(1, 1);
			}
		}
	}
}

void func_971(bool bParam0)
{
	if (!func_204(0, 0, 1) || bParam0)
	{
		iVar0 = func_1051();
		iVar1 = func_1054(iVar0);
		fVar2 = (1f - (absf(to_float(iVar1)) / to_float(8)));
		fVar3 = func_1576(iVar0 < 0, 0f, (to_float(iVar1) / to_float(8)));
		fVar4 = func_1576(iVar0 > 0, 0f, (to_float(iVar1) / to_float(8)));
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

bool func_972(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (iParam0 == player_id())
	{
		return func_1577(bParam1, bParam2, bParam3);
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

var func_973(char* sParam0, int iParam1, bool bParam2, bool bParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, int iParam8)
{
	if (bParam2)
	{
		_0xdd1232b332cbb9e7(3, 1, 1);
	}
	if (Global_1572887->f_12 != -1)
	{
		return func_1578(sParam0, iParam1, 0, 0, 1, 1);
	}
	sVar0 = func_1579(iParam8, sParam0, sParam4, sParam5, sParam6, sParam7);
	if (bParam3)
	{
		_uilog_set_cached_objective(sVar0);
	}
	return func_1578(sVar0, iParam1, 0, 0, 1, 1);
}

bool func_974(char[4] cParam0)
{
	return true;
}

bool func_975(char[4] cParam0)
{
	return true;
}

int func_976(char[4] cParam0)
{
	return 1;
}

float func_977()
{
	return (func_1580(150f, to_float(Global_1934765->f_286)) / to_float(300));
}

int func_978(int iParam0)
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

void func_979(int iParam0)
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

void func_980()
{
	_0x243cede8f916b994();
	Global_1934765->f_338 = -1;
}

void func_981(bool bParam0, float fParam1)
{
	if (is_bit_set(Global_1934765->f_301, 1))
	{
		return;
	}
	iVar0 = func_982();
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
	if (func_1581(&(Global_1934765->f_318[iVar0]), bParam0, fParam1))
	{
		Global_1934765->f_338 = iVar0;
	}
}

int func_982()
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
		iVar3 = func_1582(Global_1934765->f_318[iVar2]->f_1);
		if (iVar3 > iVar0)
		{
			iVar0 = iVar3;
			iVar1 = iVar2;
		}
		iVar2 = (iVar2 + -1);
	}
	return iVar1;
}

bool func_983(int iParam0, int iParam1)
{
	if (!func_451(iParam0))
	{
		return false;
	}
	return (Global_1914319->f_3[iParam0]->f_7 && iParam1) != 0;
}

bool func_984(int iParam0)
{
	if (func_1583())
	{
		if (Global_1914319->f_16855 == iParam0)
		{
			return true;
		}
	}
	return false;
}

void func_985(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_986(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_987(int iParam0)
{
	return iParam0 != 0;
}

bool func_988(char[4] cParam0, int iParam1, int iParam2)
{
	if (!does_entity_exist(iParam1))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < cParam0->f_13145)
	{
		if (func_260(cParam0->f_5423[iVar0]))
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

bool func_989(char[4] cParam0, int iParam1)
{
	if (!does_entity_exist(iParam1))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < cParam0->f_13145)
	{
		if (((func_260(cParam0->f_5423[iVar0]) && is_entity_an_object(&(cParam0->f_5423[iVar0]))) && get_object_index_from_entity_index(&(cParam0->f_5423[iVar0])) != iParam1) && get_entity_model(&(cParam0->f_5423[iVar0])) == get_entity_model(iParam1))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

void func_990(int iParam0, int iParam1, bool bParam2)
{
	if (!func_485(iParam0))
	{
		return;
	}
	func_1584(&((*Global_1360165)[iParam0]->f_13), iParam1, bParam2);
}

bool func_991(var uParam0, int iParam1)
{
	return (*uParam0 && iParam1) != 0;
}

void func_992(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_485(iParam0))
		{
			return;
		}
	}
	func_1585(iParam1, &iVar0, &iVar1);
	set_bit((*Global_1360165)[iParam0]->f_58[iVar0], iVar1);
}

void func_993(int iParam0)
{
	func_992(iParam0, 36, 1);
}

void func_994(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_485(iParam0))
		{
			return;
		}
	}
	func_1585(iParam1, &iVar0, &iVar1);
	clear_bit((*Global_1360165)[iParam0]->f_58[iVar0], iVar1);
}

int func_995(int iParam0, bool bParam1)
{
	if (!func_468(iParam0))
	{
		return 0;
	}
	if (bParam1)
	{
		if (!_0x800df3fc913355f3((*Global_1360165)[iParam0]->f_1))
		{
			func_1586(iParam0);
		}
	}
	return (*Global_1360165)[iParam0]->f_1;
}

bool func_996(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_485(iParam0))
		{
			return false;
		}
	}
	func_1585(iParam1, &iVar0, &iVar1);
	return is_bit_set(&((*Global_1360165)[iParam0]->f_58[iVar0]), iVar1);
}

void func_997(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (func_468(iParam0))
	{
		iVar1 = func_192(iParam0);
		if (!is_entity_dead(iVar1))
		{
			iVar0 = get_ped_max_health(iVar1);
			set_ped_config_flag(iVar1, 179, true);
			func_1587(iParam0);
		}
	}
	if (func_996(iParam0, 5, 1))
	{
		set_ped_config_flag(func_192(iParam0), 137, true);
	}
}

void func_998(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!func_485(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_994(iParam0, 50, 1);
		func_994(iParam0, 48, 1);
		func_994(iParam0, 49, 1);
		func_994(iParam0, 51, 1);
		func_994(iParam0, 52, 1);
		func_994(iParam0, 54, 1);
		func_994(iParam0, 55, 1);
	}
	else
	{
		func_992(iParam0, 50, 1);
		func_992(iParam0, 48, 1);
		func_992(iParam0, 49, 1);
		func_992(iParam0, 51, 1);
		if (bParam3)
		{
			func_992(iParam0, 54, 1);
		}
		else
		{
			func_994(iParam0, 54, 1);
		}
		if (!bParam2)
		{
			func_992(iParam0, 52, 1);
			if (bParam3)
			{
				func_992(iParam0, 55, 1);
			}
		}
		else
		{
			func_994(iParam0, 52, 1);
			if (!bParam3)
			{
				func_994(iParam0, 55, 1);
			}
		}
	}
}

void func_999(int iParam0, bool bParam1)
{
	if (!func_485(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		set_ped_config_flag(func_192(iParam0), 204, true);
	}
	else
	{
		set_ped_config_flag(func_192(iParam0), 204, false);
	}
}

void func_1000(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (!func_468(iParam0))
	{
		return;
	}
	if (func_526(iParam0))
	{
		if (!func_264(iParam0))
		{
			return;
		}
		if (!bParam1)
		{
			return;
		}
	}
	if (func_996(iParam0, 32, 1))
	{
		if (!bParam2)
		{
			return;
		}
	}
	iVar0 = func_995(iParam0, 0);
	if (!_is_base_a_persistent_character(iVar0))
	{
		return;
	}
	iVar1 = func_192(iParam0);
	if (((does_entity_exist(iVar1) && func_1588(iParam0) < 10000f) && !bParam3) && !is_screen_faded_out())
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
		func_992(iParam0, 2, 1);
	}
	else
	{
		func_1589(iParam0);
		func_992(iParam0, 1, 1);
	}
}

void func_1001(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_468(iParam0))
		{
			return;
		}
	}
	Global_40.f_4942[iParam0] = (&Global_40.f_4942[iParam0] - (Global_40.f_4942[iParam0] && iParam1));
}

void func_1002(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	if (!func_485(iParam1))
	{
		return;
	}
	iVar0 = func_462(iParam1);
	if (func_1590(iParam1))
	{
		if (!func_1591(iParam1))
		{
			return;
		}
	}
	func_994(iParam1, 39, 1);
	func_463(iParam1, 64, 0);
	(*Global_1360165)[iParam1]->f_70.f_11 = 0;
	func_463(iParam1, 8, 0);
	if (does_entity_exist(iVar0))
	{
		if (!bParam2)
		{
			func_463(iParam1, 512, 1);
			set_ped_keep_task(iVar0, true);
		}
		else
		{
			set_blocking_of_non_temporary_events(iVar0, false);
			func_992(iParam1, 43, 1);
		}
		if (bParam4)
		{
			func_1592(iParam1, 0, 1, 1, 1);
		}
	}
}

int func_1003(int iParam0)
{
	iVar0 = func_444(iParam0);
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

void func_1004(int iParam0, int iParam1)
{
	if (!func_441(iParam0))
	{
		return;
	}
	(*Global_1895087)[iParam0]->f_1 = iParam1;
}

int func_1005(int iParam0, int iParam1)
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

bool func_1006(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return ((*Global_1945938)[iParam0]->f_1 && iParam1) != 0;
}

int func_1007(int iParam0)
{
	iVar0 = func_488(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return func_1593(iVar0);
}

int func_1008(int iParam0, int iParam1)
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
			func_1594(iVar2);
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

void func_1009()
{
	iVar0 = 0;
	while (iVar0 < Global_1058888->f_40501)
	{
		iVar0++;
	}
}

int func_1010(bool bParam0)
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

int func_1011(int iParam0)
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

void func_1012(int iParam0, int iParam1)
{
	Global_1946804->f_2657.f_26.f_6 = (Global_1946804->f_2657.f_26.f_6 - (Global_1946804->f_2657.f_26.f_6 && iParam0));
}

void func_1013(int iParam0, int iParam1)
{
	Global_1946804->f_2657.f_26.f_6 = (Global_1946804->f_2657.f_26.f_6 || iParam0);
}

void func_1014(int iParam0, int iParam1)
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
			func_1595((iVar0 - 1), iVar0);
			iVar0 = (iVar0 - 1);
		}
	}
	else
	{
		iVar0 = iParam0;
		while (iVar0 < iParam1)
		{
			func_1595(iVar0, iVar0 + 1);
			iVar0++;
		}
	}
	if (func_197(&(Global_1898164->f_1[0])))
	{
		func_209(&(Global_1898164->f_1[0]), 3);
	}
}

void func_1015(int iParam0, int iParam1, bool bParam2)
{
	if (!func_505(iParam0))
	{
		return;
	}
	func_1596(iParam1, &iVar0, &iVar1);
	if (bParam2)
	{
		set_bit((*Global_1935183->f_73[iParam0])[iVar0], iVar1);
	}
	else
	{
		clear_bit((*Global_1935183->f_73[iParam0])[iVar0], iVar1);
	}
}

void func_1016(var uParam0)
{
	Var0 = -1600776215;
	Var0.f_1 = 820723243;
	Var0.f_2 = 1;
	*uParam0 = { Var0 };
}

void func_1017(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 || iParam1);
}

void func_1018(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
}

bool func_1019()
{
	if (_get_number_of_references_of_script_with_name_hash(-92416669) > 0)
	{
		return true;
	}
	return false;
}

bool func_1020(int iParam0)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1934603->f_161)
	{
		if (iParam0 == get_hash_key(&((*Global_1934603)[iVar0]->f_10)))
		{
			func_1597(iVar0);
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_1021(bool bParam0, bool bParam1)
{
	if (func_20() == -1)
	{
		func_1598();
	}
	else
	{
		return;
	}
	func_1599();
	Global_40.f_9.f_14 = func_289();
	Global_40.f_9.f_20 = _get_bounty_for_player(get_player_index());
	Global_40.f_11999 = _0xb00ce33465b5406d(1, "startup");
	if (bParam0 && !bParam1)
	{
		if (func_1600())
		{
			func_374(Global_1310720->f_1);
		}
		else if (func_1601() == func_375(Global_36, 1) && func_1602() != 2)
		{
			func_374(Global_40.f_6);
			Global_40.f_9 = 1;
		}
		else
		{
			func_374(Global_36);
		}
		func_1603(Global_36, &vVar0, &uVar4);
		if (!func_1600())
		{
			if (func_1604(vVar0, Global_36) < func_1604(Global_40.f_9.f_7, Global_36))
			{
				func_374(vVar0);
				Global_40.f_9 = uVar4;
			}
			else
			{
				Global_40.f_9 = 0;
			}
		}
		Global_40.f_9.f_15 = func_375(Global_40.f_9.f_7, 1);
	}
	else if (!bParam0)
	{
		func_1603(Global_36, &(Global_40.f_9.f_7), &(Global_40.f_9));
		override_save_house(true, Global_40.f_9.f_7, 0f, true, &vVar0, &uVar3);
	}
	if (!bParam1)
	{
		func_235(Global_1935630, 8192);
	}
	func_1605();
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
	iParam0 = func_271(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_222(iParam0);
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	iVar6 = 0;
	while (iVar6 < 3)
	{
		iVar1 = func_1606(iVar6);
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
	iParam0 = func_271(iParam0);
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
	iParam0 = func_271(iParam0);
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
		_set_blip_name_from_player_string(*uParam0, func_1608(func_1607(255), 109029619));
	}
	else if (func_308())
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
	iParam0 = func_271(iParam0);
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
		_set_blip_name_from_player_string(*uParam0, func_1608(func_1607(255), 109029619));
	}
	else
	{
		sVar0 = "";
		if (bParam1)
		{
			sVar0 = "HORSE_BLIP_TEMPORARY";
		}
		else if (func_308())
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
	iParam0 = func_271(iParam0);
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
	iParam0 = func_271(iParam0);
	if (iParam0 == -1)
	{
		return -1f;
	}
	if (iParam0 >= 7)
	{
		return -1f;
	}
	iVar0 = func_1471(iParam0);
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
	fVar6 = func_1609(iParam0);
	fVar7 = to_float(get_default_attribute_points_needed_for_rank(iVar0, 7, iVar1));
	fVar8 = to_float(get_default_attribute_points_needed_for_rank(iVar0, 7, iVar5));
	fVar9 = (fVar6 - fVar7);
	fVar10 = (fVar8 - fVar7);
	fVar11 = (fVar9 / fVar10);
	fVar12 = func_1610(fVar3, fVar4, fVar11);
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
	if (func_342())
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
	func_1611((Global_40.f_4283.f_325 + iParam0));
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
		func_712(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", -329231034, 0, -585750914, 0, 0, 0, 1);
	}
	else
	{
		func_712(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 2124880615, 0, -585750914, 0, 0, 0, 1);
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
		func_985(&(Global_40.f_12019.f_42), 1);
	}
	else
	{
		func_986(&(Global_40.f_12019.f_42), 1);
	}
}

int func_1043(int iParam0)
{
	if (!func_197(iParam0))
	{
		return -15;
	}
	return func_1612(iParam0);
}

bool func_1044(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_708(iParam1) || !func_708(iParam0))
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
	iVar0 = func_1613(iParam0, 1);
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
	iVar0 = func_562();
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
	fVar1 = func_1576(absf(fVar1) < 1f, func_1576(fVar1 < 0f, -1f, 1f), fVar1);
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
	func_1614((get_game_timer() + iParam2), !bParam1);
	_databinding_write_data_int(Global_1955569->f_1.f_2.f_1, iParam0);
	func_1615(iParam0);
}

void func_1057(int iParam0)
{
	_databinding_write_data_bool(&(Global_1955569->f_5.f_2[0]->f_16[2]), false);
	_databinding_write_data_bool(&(Global_1955569->f_5.f_2[0]->f_32[2]), true);
	_databinding_write_data_string(&(Global_1955569->f_5.f_2[0]->f_20[2]), func_1616(iParam0));
	_databinding_write_data_string(&(Global_1955569->f_5.f_2[0]->f_24[2]), "pausemenu_player");
}

void func_1058(bool bParam0)
{
	bVar3 = false;
	if (func_1617(&iVar4))
	{
		if (iVar4 <= 0)
		{
			return;
		}
		iVar5 = 0;
		while (iVar5 < iVar4)
		{
			if (func_1618(iVar5, &iVar2, &iVar0))
			{
				if (!func_582(iVar2, 0))
				{
				}
				else
				{
					iVar1 = func_1619(iVar2);
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
							if (func_601(iVar2) == -1013984273)
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
								bVar3 = iVar0 == func_1620();
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
	return func_601(iParam0) == -427144552;
}

bool func_1061(int iParam0)
{
	if (func_20() != -1)
	{
		return false;
	}
	if (func_603(iParam0, 1048576))
	{
		return false;
	}
	if (is_weapon_valid(iParam0))
	{
		return func_1066(iParam0, &uVar0, 1, 0, 0);
	}
	return func_351(iParam0, 1, 0);
}

void func_1062(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (func_601(iParam0) != -427144552)
	{
		return;
	}
	iVar0 = func_608(iParam0, 0);
	if (!is_weapon_valid(iVar0))
	{
		return;
	}
	if (bParam2 || !func_122(iVar0))
	{
		if (func_20() == -1)
		{
			func_609(iVar0);
		}
		if (bParam2 || (!has_ped_got_weapon(Global_35, iVar0, 0, false) && func_586(iParam0, 0, 0) == 0))
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
	if (func_602(iParam0, 58855631))
	{
		func_1213(iParam0, -915411861, &iVar0, 1);
		*iParam1 = (*iParam1 * iVar0);
	}
}

int func_1064(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	if (!func_582(iParam0, 0))
	{
		return 0;
	}
	if (!func_610(0))
	{
		bParam2 = true;
	}
	if (bParam2)
	{
		return _0xe80e50bee276a54a(iParam0, uParam1->f_4);
	}
	return _0xaddd1e7c0ecf7d95(func_1010(bParam3), iParam0);
}

int func_1065(int iParam0, bool bParam1)
{
	if (func_614(iParam0))
	{
		return get_ped_ammo_by_type(Global_35, iParam0);
	}
	return _0xe787f05dfc977bde(func_1010(bParam1), iParam0, 0);
}

bool func_1066(int iParam0, var uParam1, int iParam2, bool bParam3, bool bParam4)
{
	func_1621(&iParam0);
	if (!func_582(iParam0, 0))
	{
		return false;
	}
	if (!func_610(0))
	{
		bParam3 = true;
	}
	if (func_1060(iParam0) && _0x705be297eebdb95d(iParam0))
	{
		if (_is_weapon_one_handed(iParam0))
		{
			Var0 = { func_1196(0) };
			Var4.f_9 = -1591664384;
			if (!func_1089(iParam0, &Var0, 1728382685, 0))
			{
				return false;
			}
			else if (func_1090(iParam0, &Var4, 1728382685))
			{
				return false;
			}
			if (func_1197(iParam0, 1))
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
		else if (!func_1622(iParam0, &uVar26, 0))
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
		iVar28 = func_1623(iParam0, *uParam1, uParam1->f_4, bParam4);
	}
	else
	{
		iVar28 = _0xe787f05dfc977bde(func_1010(bParam4), iParam0, 0);
	}
	if ((iVar28 + iParam2) > iVar27)
	{
		return true;
	}
	return false;
}

int func_1067(int iParam0, int iParam1)
{
	if (!func_582(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_601(iParam0);
	if (iVar0 == -427144552 && is_weapon_valid(iParam0))
	{
		return _get_ammo_type_for_weapon(iParam0);
	}
	else if (iVar0 == 307971639 && _is_ammo_valid(iParam0))
	{
		return iParam0;
	}
	if (func_602(iParam0, 1399091007))
	{
		func_1130(iParam0, &uVar1, &uVar2);
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
	Var0 = { func_1624(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam1)
	{
		func_1625(&Var0, func_1196(0));
	}
	if (!func_1626(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	func_1140(iVar14);
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
	iVar0 = func_1627(iParam0);
	fVar1 = func_1628(iParam0);
	if ((Global_1347477->f_117 || !func_604(31)) || !func_1629(iVar0))
	{
		return;
	}
	if (fVar1 <= 0f)
	{
		return;
	}
	if (func_1630(iVar0) >= 7)
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
	func_1631(iVar0, (&Global_40.f_11095.f_11[iVar0] + fVar1), 0);
	func_712(_create_var_string(6, func_1632(iParam0), fVar1), "itemtype_textures", func_1633(iVar0), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
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
	if (!func_1228(17, &Var0))
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
			else if (func_597() >= 12)
			{
				sParam3 = _create_var_string(2, "COL_CC_CARD_POSTED_OBJ", func_1634(), 12);
			}
			else
			{
				sParam3 = _create_var_string(2, "COL_CC_CARD_FOUND_OBJ", func_1635(), 12);
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
				sParam3 = _create_var_string(2, "COL_DB_POSTED_OBJ", func_1636(), 30);
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
				sParam3 = _create_var_string(2, "COL_LF_CAUGHT_OBJ", func_1637(), 13);
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
				sParam3 = _create_var_string(2, "COL_RC_POSTED_OBJ", func_1638(), 10);
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
			iVar2 = func_1639(iVar0);
			if (iParam4 == iVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = (func_351(iVar2, 1, 0) || func_1641(func_1640(iVar2)));
			}
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1082(func_1639(iVar0))), func_1082(func_1639(iVar0)), bVar1, true, false);
		}
		if (iParam2 == -440187297)
		{
			if (iVar0 == 0)
			{
				bVar1 = func_1113() >= iParam8;
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1642(iVar0)), func_1642(iVar0), bVar1, true, false);
			}
			else if (iVar0 == 1)
			{
				bVar1 = func_1636() >= iParam8;
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1642(iVar0)), func_1642(iVar0), bVar1, true, false);
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
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1642(iVar0)), func_1642(iVar0), bVar1, true, false);
			}
		}
		if (iParam2 == -1531394072)
		{
			iVar2 = func_1123(iParam3, func_1643(iVar0));
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			else if (bParam9)
			{
				if (iParam4 == iVar2)
				{
					bVar1 = (func_1119(iVar2) - iParam7) >= func_1073(iParam3, func_1644(iVar0));
				}
				else
				{
					bVar1 = func_1119(iVar2) >= func_1073(iParam3, func_1644(iVar0));
				}
			}
			else if (iParam4 == iVar2)
			{
				bVar1 = (func_1119(iVar2) + iParam7) >= func_1073(iParam3, func_1644(iVar0));
			}
			else
			{
				bVar1 = func_1119(iVar2) >= func_1073(iParam3, func_1644(iVar0));
			}
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1645(iVar2)), func_1645(iVar2), bVar1, true, false);
		}
		if (iParam2 == 1995362678)
		{
			if (func_1646(_0x126cbebba46693cf(iVar0, 1995362678, 0)))
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
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1647(_0x126cbebba46693cf(iVar0, iParam2, 0))), func_1647(_0x126cbebba46693cf(iVar0, iParam2, 0)), bVar1, true, false);
		}
		if (iParam2 == 2103522376)
		{
			if (iVar0 == 0)
			{
				bVar1 = func_1114() >= iParam8;
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1648(iVar0)), func_1648(iVar0), bVar1, true, false);
			}
			else if (iVar0 == 1)
			{
				bVar1 = func_1638() >= iParam8;
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1648(iVar0)), func_1648(iVar0), bVar1, true, false);
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
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1648(iVar0)), func_1648(iVar0), bVar1, true, false);
			}
		}
		if (iParam2 == 678508515)
		{
			iVar2 = func_1123(iParam3, func_1643(iVar0));
			if (bParam9)
			{
				if (iParam4 == iVar2)
				{
					bVar1 = (func_1119(iVar2) - iParam7) >= true;
				}
				else
				{
					bVar1 = func_1649(iVar2);
				}
			}
			else if (iParam4 == iVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = func_1649(iVar2);
			}
			if (((((((iParam5 == 7 || iParam5 == 3) || iParam5 == 4) || iParam5 == 5) || iParam5 == 0) || iParam5 == 1) || iParam5 == 2) || iParam5 == 8)
			{
				bVar1 = true;
			}
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1650(iVar2)), func_1650(iVar2), bVar1, true, false);
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
		if (func_1637() >= 13)
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
	if (func_197(func_210(0)) && ((func_1651(0) == 1 || func_1651(0) == 8) || func_1651(0) == 6))
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
			func_1652(1);
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
			func_1653(1);
			break;
		case 19:
			_uitutorial_set_rpg_icon_visibility(1, 0);
			_uitutorial_set_rpg_icon_visibility(0, 0);
			func_1653(2);
			break;
		case 20:
			_uitutorial_set_rpg_icon_visibility(3, 0);
			_uitutorial_set_rpg_icon_visibility(2, 0);
			func_1653(3);
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
			func_1654(1);
			break;
		case 34:
			func_1655(1);
			break;
		case 35:
			func_1656(1);
			break;
		case 36:
			break;
		case 37:
			func_1657(0);
			break;
		case 38:
			func_1658(0);
			break;
		case 39:
			func_1659(0);
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
				func_718("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_MANUAL_PAINT", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_level(get_player_index(), 2);
			func_329(586, 0);
			break;
		case 3:
			if ((!&Global_1879534 && func_398()) && _is_deadeye_ability_locked(get_player_index(), 3))
			{
				func_718("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_STAY_ACTIVE", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_locked(get_player_index(), 3, false);
			_set_deadeye_ability_level(get_player_index(), 3);
			func_329(587, 0);
			break;
		case 4:
			if ((!&Global_1879534 && func_398()) && _is_deadeye_ability_locked(get_player_index(), 4))
			{
				func_718("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_FATAL", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_locked(get_player_index(), 3, false);
			_set_deadeye_ability_locked(get_player_index(), 4, false);
			_set_deadeye_ability_level(get_player_index(), 4);
			func_329(588, 0);
			break;
		case 5:
			if ((!&Global_1879534 && func_398()) && _is_deadeye_ability_locked(get_player_index(), 5))
			{
				func_718("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_CRITICAL", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_locked(get_player_index(), 3, false);
			_set_deadeye_ability_locked(get_player_index(), 4, false);
			_set_deadeye_ability_locked(get_player_index(), 5, false);
			_set_deadeye_ability_level(get_player_index(), 5);
			func_329(589, 0);
			break;
		case 24:
			_unlock_set_unlocked(-200143754, true);
			_unlock_set_visible(-200143754, true);
			_0x83b8d50eb9446bba(player_ped_id(), 1);
			if (func_20() == -1)
			{
				if (!func_1153(99217379) || func_1660(99217379) == 2110595215)
				{
					if (func_1053())
					{
						iVar0 = -1515874150;
					}
					else
					{
						iVar0 = 899611344;
					}
					if (!func_351(iVar0, 1, 0))
					{
						func_655(iVar0, 1, 752097756);
					}
					func_634(Global_35, iVar0, 0, 99217379, 1, 1, 1, 0, 1, 1);
				}
			}
			break;
		case 48:
			if (func_20() == -1)
			{
				if (!func_351(1013902307, 1, 0))
				{
					func_655(1013902307, 1, 752097756);
				}
			}
			break;
		case 50:
			if (func_20() == -1)
			{
				if (!func_351(1013902307, 1, 0))
				{
					func_655(1013902307, 1, 752097756);
				}
				if (!func_351(142640135, 1, 0))
				{
					func_655(142640135, 1, 752097756);
				}
			}
			break;
		case 49:
			if (func_20() == -1)
			{
				if (!func_351(786809402, 1, 0))
				{
					func_655(786809402, 1, 752097756);
				}
			}
			break;
		case 51:
			if (func_20() == -1)
			{
				if (!func_351(786809402, 1, 0))
				{
					func_655(786809402, 1, 752097756);
				}
				if (!func_351(-518019409, 1, 0))
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
			func_1661();
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
	return func_1623(iParam0, *uParam1, iParam2, bParam3) > 0;
}

bool func_1090(int iParam0, var uParam1, int iParam2)
{
	if (func_1662(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return false;
}

struct<4> func_1091(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	if (!func_582(iParam0, 0))
	{
		return Var0;
	}
	_0x886dfd3e185c8a89(func_1010(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

bool func_1092(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(uParam1))
	{
		return false;
	}
	if (func_1663(iParam0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_1200(*uParam1, &Var0, bParam6, 0))
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
	if (!func_610(bParam6))
	{
		iVar14 = -1;
		return iVar14 != -1;
	}
	if (!_0x3e4e811480b3ae79(func_1010(bParam6), uParam1, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

void func_1093(int iParam0, int iParam1)
{
	if ((get_ammo_in_clip(Global_35, &iVar0, iParam0) && iVar0 < iParam1) && iVar0 < _get_weapon_clip_size(iParam0))
	{
		iVar1 = func_1664(_get_weapon_clip_size(iParam0), iParam1);
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
	iVar2 = func_289();
	func_338(&iVar2, 0, 0, 0, 1, 0, 0, 0);
	decor_set_int(Global_35, sVar1, iVar2);
}

int func_1095(int iParam0)
{
	if (func_1665(iParam0))
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
			if (!func_604(50))
			{
				if (!func_604(48))
				{
					return 133;
				}
				return 135;
			}
		}
		else if (_is_weapon_one_handed(iVar0))
		{
			if (!func_604(51))
			{
				if (!func_604(49))
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
	if (!func_582(iParam1, 0))
	{
		return false;
	}
	if (func_601(iParam1) != -1037537535)
	{
		return false;
	}
	bVar1 = func_20() != -1;
	iVar2 = _get_metaped_type(iParam0);
	if (func_606(iParam1) == -999503751)
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
	if (func_602(iParam1, 866047851))
	{
		iVar5 = func_681(iVar4, 1);
		if (func_1666(&(Global_1946804->f_1497)) >= 2 && &Global_1946804->f_1497.f_1[iVar5] != iVar8)
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
			iVar3 = func_606(&(Global_1946804->f_1497.f_1[iVar5]));
			if (bVar7 && iVar3 == -525676072)
			{
				*uParam2 = -1938792745;
				return false;
			}
			break;
		case -1944638739:
			iVar5 = 35;
			if (&Global_1946804->f_1497.f_1[iVar5] != &Global_1946804->f_57[iVar5] && func_602(iParam1, -1638171711))
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
			if (func_1667(1868067663, &uVar0))
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
				iVar10 = func_1668(iVar8, iVar4, iVar2, bVar1);
				iVar9 = func_1668(&(Global_1946804->f_1497.f_1[iVar5]), iVar4, iVar2, bVar1);
				if (((iVar11 + iVar10) - iVar9) > 31)
				{
					*uParam2 = -1608241763;
					return false;
				}
				Jump @776; //curOff = 583
				iVar3 = func_606(iParam1);
				iVar5 = 36;
				iVar6 = 35;
				if (iParam1 != &Global_1946804->f_57[iVar6] && func_602(&(Global_1946804->f_1497.f_1[iVar5]), -1638171711))
				{
					*uParam2 = -357399012;
					return false;
				}
				if (iVar3 == 1769055947 || iVar3 == 1545016984)
				{
				}
				else
				{
					if (iParam1 != &Global_1946804->f_57[iVar6] && func_1669(&(Global_1946804->f_1497.f_1[iVar5])))
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
		if (func_351(func_1670(iVar1), 1, 0))
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
	if (func_351(iVar0, 1, 0) && func_351(iVar1, 1, 0))
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
	iVar0 = func_1671(iParam0);
	if (iVar0 != -15)
	{
		func_338(&iVar0, 0, iParam1, 0, 0, 0, 0, 0);
		return !func_709(iVar0, 1);
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

int func_1111(int iParam0)
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
	iVar1 = func_1119(iVar9);
	iVar2 = func_1119(iVar10);
	iVar3 = func_1119(iVar11);
	iVar5 = func_1120(iVar9);
	iVar6 = func_1120(iVar10);
	iVar7 = func_1120(iVar11);
	if (iParam0 != 2)
	{
		iVar4 = func_1119(iVar12);
		iVar8 = func_1120(iVar12);
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
		if (func_1672(_0x126cbebba46693cf(iVar1, -440187297, 0)))
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
			if (func_1649(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1649(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_1649(iVar0))
		{
			*sParam2++;
		}
		if (func_1649(iVar0))
		{
			return true;
		}
	}
	else if (iParam0 == -1248968496)
	{
		if (bParam3)
		{
			if (func_1649(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1649(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_1649(iVar0))
		{
			*sParam2++;
		}
		if (func_1649(iVar1))
		{
			*sParam2++;
		}
		if (func_1649(iVar0) && func_1649(iVar1))
		{
			return true;
		}
	}
	else if (iParam0 == 1706369307)
	{
		if (bParam3)
		{
			if (func_1649(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1649(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_1649(iVar0))
		{
			*sParam2++;
		}
		if (func_1649(iVar1))
		{
			*sParam2++;
		}
		if (func_1649(iVar2))
		{
			*sParam2++;
		}
		if ((func_1649(iVar0) && func_1649(iVar1)) && func_1649(iVar2))
		{
			return true;
		}
	}
	else
	{
		if (bParam3)
		{
			if (func_1649(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1649(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_1649(iVar0))
		{
			*sParam2++;
		}
		if (func_1649(iVar1))
		{
			*sParam2++;
		}
		if (func_1649(iVar2))
		{
			*sParam2++;
		}
		if (func_1649(iVar3))
		{
			*sParam2++;
		}
		if (((func_1649(iVar0) && func_1649(iVar1)) && func_1649(iVar2)) && func_1649(iVar3))
		{
			return true;
		}
	}
	return false;
}

void func_1116(int iParam0)
{
	if (!func_1673(iParam0))
	{
		func_1675(func_1674(iParam0));
	}
}

int func_1117()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (func_1673(_0x126cbebba46693cf(iVar1, -1531394072, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1118(int iParam0, int iParam1, int iParam2)
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
	iVar1 = func_1119(iVar9);
	iVar2 = func_1119(iVar10);
	iVar3 = func_1119(iVar11);
	iVar5 = func_1120(iVar9);
	iVar6 = func_1120(iVar10);
	iVar7 = func_1120(iVar11);
	if (iParam2 != 2)
	{
		iVar4 = func_1119(iVar12);
		iVar8 = func_1120(iVar12);
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

int func_1119(int iParam0)
{
	if (func_351(iParam0, 1, 0))
	{
		iVar0 = func_586(iParam0, 0, 0);
	}
	return iVar0;
}

int func_1120(int iParam0)
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

int func_1121(int iParam0)
{
	return _0xf83d3dda4d3c8169(iParam0);
}

void func_1122(int iParam0, int iParam1)
{
	_0x3ea62e56f386c997(iParam0, iParam1);
}

int func_1123(int iParam0, int iParam1)
{
	if (!func_1228(17, &Var0))
	{
		return 0;
	}
	Var0.f_2 = iParam1;
	Var0.f_3 = iParam0;
	_datafile_get_hash(&uVar5, &Var0);
	return uVar5;
}

void func_1124(int iParam0, int iParam1, char* sParam2, int iParam3, bool bParam4)
{
	if ((((iParam0 == func_1123(iParam1, 5) || iParam0 == func_1123(iParam1, 6)) || iParam0 == func_1123(iParam1, 7)) || iParam0 == func_1123(iParam1, 8)) || iParam0 == func_1123(iParam1, 9))
	{
		func_1115(iParam1, iParam0, &sParam2, 0, iParam3, bParam4);
		func_598(51, 0, 0, iParam1, sParam2, 0, -1, 0);
		func_600(51, 0, 0, 0, 0, -1, 0);
	}
}

void func_1125(int iParam0, int iParam1, bool bParam2)
{
	iVar0 = 1;
	if ((((iParam0 == func_1123(iParam1, 5) || iParam0 == func_1123(iParam1, 6)) || iParam0 == func_1123(iParam1, 7)) || iParam0 == func_1123(iParam1, 8)) || iParam0 == func_1123(iParam1, 9))
	{
		if (func_1115(iParam1, iParam0, &iVar0, 0, 0, 0))
		{
			func_598(51, iParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				func_600(51, 0, 0, iVar0, func_1073(iParam1, 20), 1, 0);
			}
		}
		else
		{
			func_598(51, iParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				func_600(51, 0, 0, iVar0, func_1073(iParam1, 20), 1, 0);
			}
		}
	}
}

bool func_1126()
{
	if (func_198((*Global_1347702)[37]->f_15) && Global_1392388->f_7)
	{
		return true;
	}
	return false;
}

void func_1127(int iParam0)
{
	_0x3ea62e56f386c997(iParam0, 1);
}

void func_1128(int iParam0)
{
	if (!func_1676(iParam0))
	{
		_0x3ea62e56f386c997(iParam0, 1);
	}
}

void func_1129(int iParam0)
{
	_0x398fab9c96a81924(iParam0, 1);
}

void func_1130(int iParam0, int iParam1, var uParam2)
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

bool func_1131(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	func_1677();
	if (iParam2 == 39)
	{
		Var0 = { func_693(iParam0, 1, 0) };
		iParam2 = func_681(func_694(Var0.f_4), 1);
	}
	if (iParam2 < 0 || iParam2 >= 39)
	{
		return false;
	}
	if (func_602(iParam0, 866047851) && func_1666(&(Global_1946804->f_1378)) >= 2)
	{
		return false;
	}
	if ((func_1133(32768) && iParam2 == 10) && iParam0 != &Global_1946804->f_57[iParam2])
	{
		func_1678(func_1201(iParam2, 1));
	}
	iVar5 = 0;
	if (bParam4)
	{
		iVar5 = 3;
	}
	func_1679(iParam2);
	func_1680(iParam2, iVar5);
	if (&Global_1946804->f_1378.f_1[iParam2] != &Global_1946804->f_57[iParam2] && Global_1946804->f_57[iParam2]->f_1 > 1)
	{
		func_1182(Global_1946804->f_1378.f_1[iParam2], 4, 6);
		func_1182(Global_1946804->f_1497.f_1[iParam2], 4, 6);
	}
	func_1188(&(Global_1946804->f_1378), iParam0, iParam2, bParam4, 1);
	if (iParam1 == 0)
	{
		iParam1 = Global_1946804->f_1378.f_1[iParam2]->f_1;
	}
	Global_1946804->f_1378.f_1[iParam2] = iParam0;
	Global_1946804->f_1378.f_1[iParam2]->f_1 = func_1681(iParam0, iParam2, iParam1, func_20() != -1);
	if (bParam4)
	{
		func_1682(&(Global_1946804->f_1378), 1, 3);
	}
	else
	{
		func_1682(&(Global_1946804->f_1378), 1, 0);
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
				func_1427(func_1201(&(Global_1946804->f_2589.f_2[iVar6]), 1), 1, 6);
			}
			iVar6++;
		}
	}
	return true;
}

void func_1132(bool bParam0, bool bParam1, bool bParam2)
{
	func_1683(&(Global_1946804->f_2589), bParam0, bParam1, bParam2);
}

bool func_1133(int iParam0)
{
	return (Global_1946804 && iParam0) != 0;
}

void func_1134()
{
	func_1684(&(Global_1946804->f_2776));
	func_1685(32768);
	func_1427(1108822547, 8, 6);
}

int func_1135(int iParam0)
{
	iVar0 = 0;
	iVar1 = func_681(iParam0, 1);
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

void func_1136(int iParam0)
{
	if (func_1686(iParam0, 4096))
	{
		Global_1946804->f_858++;
	}
	if (Global_1946804->f_858 <= 0)
	{
		return;
	}
	Var0.f_1 = iParam0;
	Var0 = 34;
	func_1687(Var0);
}

void func_1137(int iParam0, int iParam1, int iParam2)
{
	Var0.f_1 = iParam2;
	Var0 = iParam0;
	Var0.f_2 = iParam1;
	func_1687(Var0);
}

bool func_1138(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	*iParam1 = _0x80d78bdc9d88ef07(func_1010(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_1139(var uParam0, int iParam1, int iParam2, int iParam3)
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

int func_1140(int iParam0)
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

float func_1141()
{
	if (func_1688())
	{
		return 0f;
	}
	if (_0x200373a8df081f22(Global_35, 2) || Global_40.f_11095.f_46 == 0)
	{
		return func_1689(2);
	}
	if (Global_1347477->f_119)
	{
		return func_1689(2);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_46) * 60f);
	fVar0 = (fVar0 / to_float(7));
	fVar1 = func_1690();
	fVar2 = func_1691();
	fVar3 = func_1692();
	fVar4 = func_1693();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_50)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_1694()));
	fVar7 = (func_1689(2) - fVar6);
	iVar8 = round(((fVar0 / 60f) * to_float(7)));
	fVar9 = (100f * (to_float(90) / to_float(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_1695(3, round((to_float(iVar8) * fVar10)), 0);
	func_1696(3, fVar9, fVar9 > 100f);
	return func_1697(fVar7, -100f, 100f);
}

float func_1142()
{
	if (func_1688())
	{
		return 0f;
	}
	if (_0x200373a8df081f22(Global_35, 1) || Global_40.f_11095.f_47 == 0)
	{
		return func_1689(1);
	}
	if (Global_1347477->f_119)
	{
		return func_1689(1);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_47) * 60f);
	fVar0 = (fVar0 / to_float(7));
	fVar1 = func_1690();
	fVar2 = func_1691();
	fVar3 = func_1692();
	fVar4 = func_1693();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_51)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_1694()));
	fVar7 = (func_1689(1) - fVar6);
	iVar8 = round(((fVar0 / 60f) * to_float(7)));
	fVar9 = (100f * (to_float(90) / to_float(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_1695(2, round((to_float(iVar8) * fVar10)), 0);
	func_1696(2, fVar9, fVar9 > 100f);
	return func_1697(fVar7, -100f, 100f);
}

float func_1143()
{
	if (func_1688())
	{
		return 0f;
	}
	if (_0x200373a8df081f22(Global_35, 0) || Global_40.f_11095.f_48 == 0)
	{
		return func_1689(0);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_48) * 60f);
	if (func_1698())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_54 + 1f));
	}
	else if (func_1699())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_53 + 1f));
	}
	else if (Global_1347477->f_119)
	{
		return func_1689(0);
	}
	if (Global_40.f_11095.f_43)
	{
		fVar0 = (10f * 60f);
	}
	fVar0 = (fVar0 / to_float(7));
	fVar1 = func_1690();
	fVar2 = func_1691();
	fVar3 = func_1692();
	fVar4 = func_1693();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_49)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_1694()));
	fVar7 = (func_1689(0) - fVar6);
	iVar8 = round(((fVar0 / 60f) * to_float(7)));
	fVar9 = (100f * (to_float(90) / to_float(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_1695(1, round((to_float(iVar8) * fVar10)), 0);
	func_1696(1, fVar9, fVar9 > 100f);
	if (fVar7 <= -100f && _get_player_health(player_id()) < 1f)
	{
		return func_1689(0);
	}
	return func_1697(fVar7, -100f, 100f);
}

bool func_1144(int iParam0, int iParam1)
{
	return (Global_1905944->f_22[iParam0]->f_2 && iParam1) != 0;
}

bool func_1145(int iParam0)
{
	return _0xf83d3dda4d3c8169(iParam0) > 0;
}

bool func_1146(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5)
{
	if (!func_582(iParam0, 0))
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
	if (!func_610(0))
	{
		return false;
	}
	if (!_0xcb5d11f9508a928d(func_1010(0), uParam1, uParam2, iParam0, uParam2->f_4, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

int func_1147(int iParam0, bool bParam1)
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
				return func_1700();
			}
			break;
	}
	return 0;
}

int func_1148(int iParam0)
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

bool func_1149(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 95)
	{
		return false;
	}
	return true;
}

void func_1150(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_1149(iParam0))
	{
		return;
	}
	if (func_1701(iParam0))
	{
		return;
	}
	if (!func_1702(iParam0))
	{
		func_1703(iParam0, 1, 0);
	}
	iVar0 = func_1704(iParam0);
	if (iVar0 != 0 && !(iParam0 >= 0 && iParam0 <= 5))
	{
		if (func_1705(iParam0, 512))
		{
			func_692(30, iVar0, 0, 0, 0);
		}
	}
	if ((!func_221() && !bParam1) && !func_204(0, 0, 1))
	{
		func_720(_create_var_string(10, "OUT_JOURN_DONE", _create_var_string(0, iVar0)), 10000, 0, 0, 0, 1);
	}
	func_1706(iParam0, 6);
	if (bParam2)
	{
		if (!func_204(0, 0, 1))
		{
			func_370(1, 4);
		}
	}
}

bool func_1151(int iParam0, bool bParam1)
{
	return func_1147(iParam0, 0) < func_1707(iParam0, bParam1);
}

bool func_1152(int iParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_606(iVar1) == iParam0)
		{
			*iParam1 = iVar1;
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_1153(int iParam0)
{
	if (iParam0 == -358215195)
	{
		return false;
	}
	return &Global_1946804->f_1497.f_1[func_681(iParam0, 1)] != &Global_1946804->f_57[func_681(iParam0, 1)];
}

void func_1154(int iParam0, int iParam1)
{
	if (func_602(iParam1, 130796156))
	{
		func_1708(iParam1, 0);
	}
	else if (func_602(iParam1, 930141731))
	{
		func_1708(iParam1, 1);
		func_1709(iParam0);
	}
}

void func_1155(var uParam0, int iParam1)
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

int func_1156(int iParam0, var uParam1, var uParam2, int iParam3)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!_cashinventory_is_session_ready())
	{
		return 0;
	}
	func_1710(uParam1);
	if (!_0x77b299e8799b1332(&uVar0, &(uParam1->f_1), uParam2))
	{
		return 0;
	}
	Var1.f_2.f_1 = 10;
	Var1 = iParam3;
	Var1.f_2 = { *uParam1 };
	func_1711(uParam2, iParam0, Var1);
	return 1;
}

int func_1157(int iParam0)
{
	return &(Global_1900073->f_159[iParam0]);
}

char* func_1158(int iParam0)
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

int func_1159(int iParam0)
{
	if (!func_1712(iParam0, &uVar0, 805880880, 0, 0, -401018458))
	{
		return -1102349958;
	}
	return uVar0;
}

bool func_1160()
{
	return !&Global_1911774;
}

void func_1161(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

char* func_1162(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

bool func_1163(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

char* func_1164(char* sParam0, int iParam1)
{
	return _create_var_string(42, "COLOR_STRING", _create_color_string(iParam1), sParam0);
}

bool func_1165(int iParam0, int iParam1, bool bParam2)
{
	if ((bParam2 && func_20() == 0) && !_unlock_is_visible(iParam0))
	{
		return false;
	}
	if (!func_1713(iParam0, iParam1, &uVar0, &iVar11) || iVar11 < 1)
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

bool func_1166(int iParam0, int iParam1)
{
	if (func_20() != -1)
	{
		return false;
	}
	if (func_1713(iParam0, iParam1, &uVar2, &iVar1))
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

void func_1167(bool bParam0)
{
	if (bParam0)
	{
		func_322(2032023096, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_322(-615217896, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		func_322(655868243, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		func_1168();
		_unlock_set_unlocked(645322743, true);
	}
	else
	{
		func_1714(2032023096);
		func_325(-615217896);
		func_677(655868243, 1, 1, -142743235, 1);
		func_1716(146323340, func_1715());
		Var0 = { func_1479() };
		if (func_1717(&Var0) == -1387633835)
		{
			func_1718(&Var0);
			func_1719(Var0);
		}
		iVar7 = -868094182;
		iVar8 = 1074477367;
		iVar9 = 1;
		func_1720(&iVar7, &iVar8, &iVar9);
		iVar6 = 0;
		while (iVar6 < 7)
		{
			if (func_1472(iVar6) == 2010625508)
			{
				func_1721(iVar6, iVar7);
				func_1722(iVar6, iVar8);
				func_1723(iVar6, iVar9);
				func_1724(iVar6, 0);
				if (func_1725(iVar6))
				{
					func_1726(iVar6);
				}
				iVar10 = func_1727(iVar8);
				func_1728(iVar6, iVar10);
			}
			iVar6++;
		}
		_unlock_set_unlocked(645322743, false);
	}
}

int func_1168()
{
	if (!func_1729(-1898635967, func_1715(), 1))
	{
		return 0;
	}
	if (func_342())
	{
		if (!func_1729(146323340, func_1715(), 0))
		{
			return 0;
		}
	}
	return 1;
}

void func_1169()
{
	func_336(34411519);
	func_336(834124286);
	func_336(-570967010);
}

void func_1170(bool bParam0)
{
	if (bParam0)
	{
		if (_unlock_is_unlocked(-1426541042))
		{
			return;
		}
		func_322(-1080874779, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_322(-223790555, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_322(1566032147, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_322(891311852, 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_322(-1353737667, 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_322(-330313895, 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_322(-2051332199, 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_322(1237770824, 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_322(-1795542128, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_322(-1757588258, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_322(-1921080134, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
		func_1720(&iVar1, &iVar2, &iVar3);
		iVar0 = 0;
		while (iVar0 < 7)
		{
			if (func_1472(iVar0) == 153881023)
			{
				func_1721(iVar0, iVar1);
				func_1722(iVar0, iVar2);
				func_1723(iVar0, iVar3);
				func_1724(iVar0, 0);
				if (func_1725(iVar0))
				{
					func_1726(iVar0);
				}
				iVar4 = func_1727(iVar2);
				func_1728(iVar0, iVar4);
			}
			iVar0++;
		}
		func_1168();
		_unlock_set_unlocked(-1426541042, false);
	}
}

void func_1171(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4)
{
	func_1730(iParam0);
	if (bParam3)
	{
		func_719(iParam0, sParam1, iParam2);
	}
}

bool func_1172(int iParam0)
{
	return (Global_40.f_12004.f_10 && iParam0) != 0;
}

void func_1173(int iParam0)
{
	Global_40.f_12004.f_10 = (Global_40.f_12004.f_10 - (Global_40.f_12004.f_10 && iParam0));
}

struct<14> func_1174()
{
	Var3.f_9 = -1591664384;
	Var17.f_9 = -1591664384;
	if (func_1138("ALL WEAPONS", &iVar0, &iVar1, -1591664384, 0))
	{
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (!func_1139(&Var3, iVar2, iVar0, iVar1))
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
				func_1140(iVar0);
				return Var3;
			}
			iVar2++;
		}
		func_1140(iVar0);
	}
	Var39.f_9 = -1591664384;
	return Var39;
}

void func_1175(int iParam0, struct<4> Param1, int iParam5)
{
	Var0 = { Param1 };
	Var0.f_4 = iParam5;
	Var5.f_9 = -1591664384;
	if (func_1731(Param1, iParam5, &Var5, 0))
	{
		func_1092(Var5.f_4, &Var5, &Var0, -1, -142743235, 1, 0);
	}
	func_1146(iParam0, &Var19, &Var0, 1, 752097756, 0);
	func_1732(Var19, 1);
}

bool func_1176(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (!is_weapon_valid(iParam0))
	{
		return false;
	}
	Var0 = { func_1624(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam2)
	{
		func_1625(&Var0, func_1196(0));
	}
	if (!func_1626(&Var0, &iVar14, &iVar15, 0))
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
			if (!func_1139(&Var16, iVar35, iVar14, iVar15))
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
	func_1140(iVar14);
	if (iVar36 < iParam1)
	{
	}
	return true;
}

bool func_1177(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (!func_582(iParam0, 0))
	{
		return false;
	}
	if (iParam1 < 1)
	{
		return false;
	}
	Var0 = { func_693(iParam0, bParam4, 1) };
	if (Var0.f_4 == 1084182731)
	{
		return func_1733(iParam0, iParam1, iParam2, bParam3, bParam4);
	}
	Var5 = { func_1091(iParam0, Var0, Var0.f_4, bParam4) };
	return func_1092(iParam0, &Var5, &Var0, iParam1, iParam2, bParam3, bParam4);
}

void func_1178(int iParam0, int iParam1)
{
	if (!Global_1901328->f_94)
	{
		if (func_602(iParam0, 606799272))
		{
			func_1734(iParam0, iParam1);
		}
		if (func_602(iParam0, -1112814642) && func_602(iParam0, -1697809989))
		{
			func_630(iParam0, iParam1, 1, 0);
		}
	}
}

int func_1179(int iParam0, var uParam1)
{
	iVar1 = iParam0;
	if (!func_1735(iVar1, &iVar0))
	{
		return 0;
	}
	if (Global_1946804->f_2657.f_19 == 1)
	{
		Global_1946804->f_2657.f_19 = 0;
		*uParam1 = 0;
		if (func_606(iParam0) != -999503751)
		{
			func_1736(&(Global_1946804->f_2657.f_26), 0, Global_1946804->f_2657.f_19);
		}
		Global_1946804->f_2657[0] = 0;
		return 1;
	}
	Global_1946804->f_2657.f_19 = (Global_1946804->f_2657.f_19 - 1);
	*uParam1 = (*uParam1 - 1);
	Global_1946804->f_2657[iVar0] = &Global_1946804->f_2657[Global_1946804->f_2657.f_19];
	Global_1946804->f_2657[Global_1946804->f_2657.f_19] = 0;
	if (func_606(iParam0) != -999503751)
	{
		func_1736(&(Global_1946804->f_2657.f_26), iVar0, Global_1946804->f_2657.f_19);
	}
	func_1737(iParam0, 1);
	return 1;
}

void func_1180()
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

void func_1181(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		func_1738(0);
	}
	if (bParam0)
	{
		func_1193(8);
		func_1193(512);
	}
	else
	{
		func_1193(8);
		func_1193(16);
	}
}

void func_1182(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

int func_1183(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = func_683();
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

int func_1184(int iParam0)
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

void func_1185(var uParam0, int iParam1, bool bParam2)
{
	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (func_1739(uParam0->f_1[iVar0], 2))
		{
			iVar7 = func_1201(iVar0, 1);
			if (func_1424(iVar0, iParam1))
			{
				vVar4 = { func_685(iVar0, -1) };
				if ((vVar4.x != &Global_1946804->f_57[iVar0] && vVar4.x != 0) && (&uParam0->f_1[iVar0] != vVar4.x || uParam0->f_1[iVar0]->f_1 != vVar4.y))
				{
					*uParam0->f_1[iVar0] = { vVar4 };
				}
				if (func_1423(iVar7, 4))
				{
					func_1427(iVar7, 4, 6);
				}
			}
			else
			{
				func_1426(iVar7, 4, 6);
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

bool func_1186(int iParam0)
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
	func_1740(&(Global_1946804->f_964), iVar0, -367421157, 1409451727, 1, iParam0);
	_0x91ded5dd64bb2691(&(Global_1946804->f_964));
	if (!_0x44b3a36933ac009c(&uVar1, &(Global_1946804->f_964), 1409451727))
	{
		return false;
	}
	return true;
}

bool func_1187(int iParam0, int iParam1, int iParam2)
{
	*iParam2 = 1155669136;
	return true;
}

void func_1188(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	iVar1 = 12;
	iVar2 = func_606(&(uParam0->f_1[iParam2]));
	iVar3 = 0;
	if (bParam3)
	{
		iVar3 = 3;
	}
	if (func_1424(iParam2, 65536) && &uParam0->f_1[iVar1] == -452402570)
	{
		uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
		uParam0->f_1[iVar1]->f_1 = 0;
		if (bParam4)
		{
			func_1680(iVar1, iVar3);
		}
	}
	if (func_1153(-1586649372) && func_1424(iParam2, 524288))
	{
		iVar1 = 33;
		uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
		uParam0->f_1[iVar1]->f_1 = 0;
		if (bParam4)
		{
			func_1680(iVar1, iVar3);
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
						func_1680(iVar1, iVar3);
					}
				}
			}
			func_1741(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
			break;
		case 688587926:
			func_1741(uParam0, 0, (1 && bParam4), (1 && bParam4), bParam3);
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
						func_1680(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 525
				func_1741(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				iVar1 = 16;
				if (uParam0->f_1[iVar1]->f_1 == 1155669136)
				{
					uParam0->f_1[iVar1]->f_1 = -1539589426;
					if (bParam4)
					{
						func_1680(iVar1, iVar3);
					}
				}
				if (uParam0->f_1[iVar1]->f_1 == 1530758430)
				{
					uParam0->f_1[iVar1]->f_1 = 1334603721;
					if (bParam4)
					{
						func_1680(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 656
				func_1741(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				Jump @1415; //curOff = 691
				func_1741(uParam0, (1 && bParam4), (1 && bParam4), 0, bParam3);
				iVar1 = 22;
				if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1])
				{
					uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
					uParam0->f_1[iVar1]->f_1 = 0;
					if (bParam4)
					{
						func_1680(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 786
				func_1741(uParam0, (1 && bParam4), 0, 1, bParam3);
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
							func_1680(iVar1, iVar3);
						}
					}
					iVar1 = 38;
					if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1])
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_1680(iVar1, iVar3);
						}
					}
					iVar1 = 35;
					if (-923693316 == func_606(&(uParam0->f_1[iVar1])))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_1680(iVar1, iVar3);
						}
					}
				}
				else
				{
					iVar1 = 35;
					if ((func_1669(iParam1) && &uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1]) && -923693316 == func_606(&(uParam0->f_1[iVar1])))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_1680(iVar1, iVar3);
						}
					}
				}
				Jump @1415; //curOff = 1130
				iVar1 = 36;
				if (&uParam0->f_1[iParam2] != &Global_1946804->f_57[iParam2] && func_602(&(Global_1946804->f_1497.f_1[iVar1]), -1638171711))
				{
					uParam0->f_1[iParam2] = &Global_1946804->f_57[iParam2];
					uParam0->f_1[iParam2]->f_1 = 0;
					if (bParam4)
					{
						func_1680(iVar1, iVar3);
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
						func_1680(iVar1, iVar3);
					}
				}
				if (&uParam0->f_1[iParam2] != &Global_1946804->f_57[iParam2] && (func_1669(&(Global_1946804->f_1497.f_1[iVar1])) || func_602(&(Global_1946804->f_1497.f_1[iVar1]), -1638171711)))
				{
					uParam0->f_1[iParam2] = &Global_1946804->f_57[iParam2];
					uParam0->f_1[iParam2]->f_1 = 0;
					if (bParam4)
					{
						func_1680(iVar1, iVar3);
					}
				}
			}
			switch (func_606(iParam1))
			{
				case 81053684:
					iVar1 = 10;
					if (-525676072 == func_606(&(uParam0->f_1[iVar1])))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_1680(iVar1, iVar3);
						}
					}
					break;
				case -525676072:
					iVar1 = 12;
					if (81053684 == func_606(&(uParam0->f_1[iVar1])) || func_602(&(uParam0->f_1[iVar1]), 866047851))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_1680(iVar1, iVar3);
						}
					}
					break;
			}
			default:
				break;
	}
}

bool func_1189(int iParam0, int iParam1)
{
	if (func_20() != -1)
	{
		return is_bit_set(&(Global_36638.f_1444[iParam0]), iParam1);
	}
	return is_bit_set(&(Global_40.f_7832[iParam0]), iParam1);
}

bool func_1190(int iParam0)
{
	if (func_20() != -1)
	{
		if (func_1144(iParam0, 4))
		{
			return false;
		}
	}
	else if (func_1144(iParam0, 2))
	{
		return false;
	}
	return true;
}

bool func_1191(int iParam0)
{
	iVar1 = get_cloud_time_as_int();
	if (!func_1144(iParam0, 65536) && !func_1144(iParam0, 32768))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_7756)
	{
		if (Global_40.f_7756[iVar0]->f_2 == iParam0)
		{
			iVar3 = 3;
			if (func_1144(iParam0, 131072))
			{
				iVar3 = 2;
			}
			iVar2 = (&Global_40.f_7756[iVar0] - iVar1);
			if (Global_40.f_7756[iVar0]->f_1 >= iVar3)
			{
				return true;
			}
			if (iVar2 < 1800 && func_1144(iParam0, 32768))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_1192()
{
	return Global_1905944->f_5694;
}

void func_1193(int iParam0)
{
	Global_1946804 = (Global_1946804 || iParam0);
}

void func_1194(struct<4> Param0)
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
			if (func_1742(Param0))
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
			func_1743(Param0);
			*Global_1946804->f_668[Global_1946804->f_856] = { Param0 };
			Global_1946804->f_850++;
			Global_1946804->f_856 = (Global_1946804->f_856 + 1 % 25);
			func_1193(8);
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
			if (func_1742(Param0))
			{
				return;
			}
			func_1743(Param0);
			*Global_1946804->f_567[Global_1946804->f_851] = { Param0 };
			Global_1946804->f_851++;
			func_1193(8);
			break;
		case 30:
		case 31:
		case 32:
		case 33:
		case 35:
		case 36:
			func_1137(Param0, Param0.f_1, Param0.f_2);
			break;
	}
}

struct<4> func_1195(bool bParam0)
{
	return func_1091(1328661203, func_1744(), -1591664384, bParam0);
}

struct<4> func_1196(bool bParam0)
{
	iVar0 = func_1010(bParam0);
	if (iVar0 == 2)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224215))
		{
			*Global_1224215 = { func_1091(923904168, func_1195(bParam0), -740156546, bParam0) };
		}
		return *Global_1224215;
	}
	else if (iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224223))
		{
			*Global_1224223 = { func_1091(923904168, func_1195(bParam0), -740156546, 0) };
		}
		return *Global_1224223;
	}
	return func_1091(923904168, func_1195(bParam0), -740156546, 0);
}

bool func_1197(int iParam0, bool bParam1)
{
	if (func_606(iParam0) == 1779021115)
	{
		return false;
	}
	if (_is_weapon_one_handed(iParam0))
	{
		if (bParam1)
		{
			return func_604(24);
		}
		else
		{
			return true;
		}
	}
	return false;
}

struct<4> func_1198(bool bParam0)
{
	iVar0 = func_1010(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224219))
		{
			*Global_1224219 = { func_1091(271701509, func_1195(bParam0), 12999093, 0) };
		}
		return *Global_1224219;
	}
	return func_1091(271701509, func_1195(bParam0), 12999093, 0);
}

bool func_1199(int iParam0, int iParam1)
{
	if (iParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_606(iParam0);
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

bool func_1200(var uParam0, var uParam1, bool bParam2, int iParam3, var uParam4, bool bParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(&uParam0))
	{
		return false;
	}
	if (!_0x9700e8efc4ab9089(func_1010(bParam5), &uParam0, uParam4, !bParam6))
	{
		return false;
	}
	return true;
}

int func_1201(int iParam0, int iParam1)
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

int func_1202(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_1203(int iParam0, int iParam1)
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

void func_1204(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 62914560);
	*iParam0 = (*iParam0 || shift_left(iParam1, 22));
}

void func_1205(int iParam0, int iParam1)
{
	iVar0 = func_701(*iParam0);
	iVar1 = func_700(*iParam0);
	if (iParam1 < 1 || iParam1 > func_706(iVar0, iVar1))
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4063232);
	*iParam0 = (*iParam0 || shift_left(iParam1, 17));
}

void func_1206(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 126976);
	*iParam0 = (*iParam0 || shift_left(iParam1, 12));
}

void func_1207(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4032);
	*iParam0 = (*iParam0 || shift_left(iParam1, 6));
}

void func_1208(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 63);
	*iParam0 = (*iParam0 || shift_left(iParam1, 0));
}

void func_1209(char* sParam0, char* sParam1, int iParam2)
{
	_0x74bcceb233ad95b2(-466562563, get_hash_key(sParam0));
	_0x74bcceb233ad95b2(1885309238, get_hash_key(sParam1));
	_0x74bcceb233ad95b2(-826961056, iParam2);
}

int func_1210(int iParam0)
{
	return floor(pow(2f, to_float(iParam0)));
}

int func_1211(int iParam0)
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

bool func_1212(int iParam0)
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

int func_1213(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (!func_582(iParam0, 0))
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

int func_1214(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	func_1621(&iParam0);
	if (!func_582(iParam0, 0))
	{
		return 0;
	}
	if (!func_610(0))
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
		iVar1 = func_1623(iParam0, *uParam1, uParam1->f_4, bParam3);
	}
	else
	{
		iVar1 = _0xe787f05dfc977bde(func_1010(bParam3), iParam0, 0);
	}
	if (iVar0 > iVar1)
	{
		return (iVar0 - iVar1);
	}
	return 0;
}

int func_1215(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (func_602(iParam0, -5284486))
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
		if (func_1745(iParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
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
					if (func_582(iVar63, 0) && iVar63 != iParam0)
					{
						if (bParam4)
						{
							iVar49 = (iVar49 + func_1215(iVar63, -915411861, 1, 0, 0));
						}
						else
						{
							Var35 = iVar63;
							iVar33 = _0x640f890c3e5a3ffd(1, &Var35, &iVar34);
							if (iVar33 != -1)
							{
								if (iVar34 == 0)
								{
									iVar49 = (iVar49 + func_1215(iVar63, -915411861, 1, 0, 0));
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
	if (!func_1745(iParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
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

bool func_1216(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return iParam0 <= func_1746(1);
}

void func_1217(int iParam0, char* sParam1)
{
	if (iParam0 != 18 && iParam0 != 7)
	{
		_uilog_add_total_take_entry(get_hash_key(func_1747(iParam0)), 1997120069, _create_var_string(10, "MISSION_COMPLETE_TAKE_COMP", _create_var_string(2, func_328(iParam0, 0))), _create_var_string(2, "MISSION_COMPLETE_TAKE_AMOUNT", sParam1), 601389479);
	}
	else
	{
		_uilog_add_total_take_entry(get_hash_key(func_1747(iParam0)), 1997120069, _create_var_string(10, "MISSION_COMPLETE_TAKE_COMP_NOS", _create_var_string(2, func_328(iParam0, 0))), _create_var_string(2, "MISSION_COMPLETE_TAKE_AMOUNT", sParam1), 601389479);
	}
}

var func_1218()
{
	return Global_40.f_4283.f_325;
}

bool func_1219(int iParam0)
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

bool func_1220(int iParam0)
{
	return (iParam0 > 0 && iParam0 < 13);
}

void func_1221(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_3 = iParam1;
}

void func_1222(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_4 = iParam1;
}

void func_1223(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_12106[iParam0] = iParam1;
		return;
	}
	Global_1058888->f_498[iParam0] = iParam1;
}

void func_1224(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_12106[iParam0]->f_5 = iParam1;
		return;
	}
	Global_1058888->f_498[iParam0]->f_1 = iParam1;
}

int func_1225(bool bParam0, var uParam1)
{
	*bParam0 = 0;
	*uParam1 = 0;
	bVar0 = func_398();
	bVar1 = false;
	if (bVar0 && !func_1748(4))
	{
		bVar1 = true;
	}
	if ((bVar0 && func_1748(37)) && !func_1748(43))
	{
		*bParam0 = 0;
		*uParam1 = 0;
		return 0;
	}
	bVar2 = false;
	if ((bVar0 && func_1748(43)) && !func_1748(44))
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
		if (func_1473(0) == 1)
		{
			*bParam0 = 1;
		}
		if (func_1473(1) == 1)
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

int func_1226()
{
	return Global_40.f_1095.f_3054;
}

bool func_1227(int iParam0)
{
	iParam0 = func_271(iParam0);
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

bool func_1228(int iParam0, var uParam1)
{
	if (!func_1749(iParam0))
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

int func_1229()
{
	if (func_398())
	{
		if (!func_1748(3))
		{
			return func_1515(43);
		}
		if (func_1748(38) && !func_1748(43))
		{
			return func_1750(8);
		}
	}
	return 0;
}

bool func_1230(int iParam0)
{
	if (!func_253(iParam0))
	{
		return false;
	}
	return (((*Global_1888801)[iParam0]->f_20 == 1 || (*Global_1888801)[iParam0]->f_20 == 2) && !func_1751(iParam0));
}

Vector3 func_1231(int iParam0, int iParam1)
{
	func_1228(15, &Var0);
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

int func_1232(int iParam0, int iParam1)
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
	iVar0 = func_1752(Global_1310720->f_21, 2);
	if (iVar0 == -1)
	{
		return 0;
	}
	func_1228(15, &Var1);
	Var1.f_2 = -1999103282;
	Var1.f_3 = iParam0;
	Var1.f_4 = iParam1;
	if (_datafile_get_data_node_index(&(Var1.f_1), &Var1))
	{
		Var1.f_2 = 383290544;
		_datafile_get_hash(&iVar6, &Var1);
		if (func_1753(iVar0) == iVar6)
		{
			return 1;
		}
	}
	return 0;
}

bool func_1233(int iParam0, bool bParam1, int iParam2)
{
	iVar0 = func_1754(iParam0);
	if (func_484(373691918) && Global_1310720->f_12)
	{
		return iVar0 == 4;
	}
	if (iParam2 != -1)
	{
		return iVar0 == iParam2;
	}
	return (bParam1 || iVar0 == -1);
}

bool func_1234(int iParam0)
{
	if (!func_1228(15, &Var0))
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

bool func_1235(vector3 vParam0, int iParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, int iParam10)
{
	if (bParam5)
	{
		if (func_1755(iParam3, iParam4))
		{
			return false;
		}
	}
	if (!bParam7 || func_1756(5))
	{
		if (func_1757(iParam3, iParam4))
		{
			return false;
		}
	}
	iVar0 = func_1466(vParam0);
	if (bParam6)
	{
		iVar1 = func_375(vParam0, 1);
		if (func_116(iVar1) || func_1758(iVar0, 1))
		{
			return false;
		}
	}
	if (!func_1759(iParam3, iParam4))
	{
		return false;
	}
	if (!func_1760())
	{
		if (func_1761(iParam3, iParam4))
		{
			return false;
		}
	}
	if (!_does_volume_exist(bParam8))
	{
		if (!func_1762(iVar0))
		{
			return false;
		}
		if (Global_1310720->f_23 >= 3)
		{
			if (Global_1310720->f_21 != -1)
			{
				if (Global_1310720->f_21 == func_375(vParam0, 0))
				{
					return false;
				}
			}
		}
	}
	if (!func_1763(iParam3, iParam4))
	{
		return false;
	}
	if (func_1764(0) == 3)
	{
		if (((vParam0.x > -1480f && vParam0.x < -1475f) && vParam0.y > -359f) && vParam0.y < -354f)
		{
			return false;
		}
	}
	if (!func_1765(65536, 2))
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
		if (func_1766(vParam0, iParam10) || func_1767(vParam0, iParam10))
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

int func_1236(vector3 vParam0)
{
	iVar0 = func_1768(vParam0, 0f, 0f, 0, 2);
	return func_1768(vParam0, (*Global_1894052)[iVar0]->f_1, (*Global_1894052)[iVar0]->f_2, Global_1894052[iVar0], 4);
}

void func_1237(int iParam0)
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

char* func_1238(int iParam0)
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
	return func_1435(iVar0);
}

char* func_1239(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return "";
	}
	iVar0 = get_entity_model(iParam0);
	return func_1769(iVar0);
}

char* func_1240(int iParam0)
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

void func_1241(char[4] cParam0, int iParam1)
{
	iVar0 = func_132(iParam1);
	if (!func_1554(iVar0))
	{
		return;
	}
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 <= 7)
	{
		(*cParam0->f_1[iVar0])[iVar1] = 62290;
		clear_bit(&(cParam0->f_1[iVar0]->f_17), iVar1);
		iVar1++;
	}
}

void func_1242(char[4] cParam0, int iParam1, int iParam2)
{
	iVar0 = func_132(iParam1);
	if (func_1554(iVar0))
	{
		cParam0->f_1[iVar0]->f_9 = iParam2;
	}
}

void func_1243(int iParam0)
{
	switch (func_20())
	{
		case -1:
			Global_1357549->f_1494 = (Global_1357549->f_1494 || iParam0);
			break;
	}
}

void func_1244(vector3 vParam0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)
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

void func_1245(char[4] cParam0)
{
	func_1770(&(uLocal_239[0]), cLocal_237, 1, 1);
	switch (func_1297(cParam0))
	{
		case 0:
			func_1264(cParam0, "SAD3_OBJ1", -1082130432, 0, 0, -1, -1, 0);
			func_1390(7);
			if (func_1285(vLocal_1551[21]) >= 2f)
			{
				if (func_1262(cParam0, "SAD3_UWALKHORSE", 0))
				{
					func_135(cParam0, 1);
					func_227(vLocal_1551[21]);
				}
			}
			break;
		case 1:
			if (func_1301("SAD3_UWALKHORSE"))
			{
				func_227(vLocal_1551[21]);
			}
			else if (!is_ped_on_mount(&(uLocal_239[0])))
			{
				func_227(vLocal_1551[21]);
			}
			else if (func_1285(vLocal_1551[21]) >= 5f)
			{
				if (!func_1290(Global_35, iLocal_249, 0))
				{
					if (func_1262(cParam0, "SAD3_UTOHORSE", 0))
					{
						func_135(cParam0, -1);
					}
				}
			}
			break;
		case 2:
			iLocal_1505 = func_1391(408396114, vLocal_1511, 1);
			func_1264(cParam0, "SAD3_BLACK", -1082130432, 0, 0, -1, -1, 0);
			func_227(vLocal_1551[21]);
			func_135(cParam0, 3);
			break;
		case 3:
			if (_is_ped_getting_into_a_mount_seat(&(uLocal_239[0]), true))
			{
				if (func_1262(cParam0, "SAD3_UTOBLW", 0))
				{
					func_227(vLocal_1551[21]);
					func_135(cParam0, 4);
				}
			}
			break;
		case 4:
			if (func_1301("SAD3_UTOBLW"))
			{
				func_227(vLocal_1551[21]);
			}
			else
			{
				if (!func_1771("SAD3_BLACK"))
				{
					func_1265(cParam0, "SAD3_BLACK", 0, 7500, 0, -1082130432, 0, 0, -1, -1, 0);
				}
				if (func_1285(vLocal_1551[21]) >= 5f)
				{
					if (func_1262(cParam0, "SAD3_BLACKRIDE", 0))
					{
						cLocal_237 = "SAD3_BLACKRIDE";
						func_135(cParam0, 5);
					}
				}
			}
			break;
		case 5:
			if (func_1250(Global_35, vLocal_1511, 1) <= 15f)
			{
				if (func_903(Global_35, &(uLocal_239[0]), 1, 1) <= 30f)
				{
					if (func_1262(cParam0, "SAD3_UATCAKES", 0))
					{
						func_135(cParam0, -1);
					}
				}
				else
				{
					func_135(cParam0, -1);
				}
			}
			break;
	}
}

void func_1246(int iParam0, int iParam1)
{
	if (is_entity_dead(iParam0))
	{
		return;
	}
	get_current_ped_weapon(iParam0, &iVar0, true, 0, false);
	if ((iVar0 != -1569615261 && !func_1772(iParam0, 716706914)) && get_script_task_status(iParam0, 716706914, true) != 6)
	{
		if ((is_ped_shooting(iParam0) || is_ped_in_combat(iParam0, 0)) || is_ped_shooting(Global_35))
		{
			if (func_26(iParam1))
			{
				func_557(iParam1);
			}
		}
		else if (!func_26(iParam1))
		{
			func_227(iParam1);
		}
		else if (func_913(iParam1) >= 1.5f)
		{
			set_current_ped_weapon(iParam0, -1569615261, false, 0, false, false);
			set_current_ped_weapon(iParam0, -1569615261, false, 1, false, false);
			task_swap_weapon(iParam0, 0, 1, 0, 0);
			func_227(iParam1);
		}
	}
}

void func_1247(float fParam0)
{
	func_1773(ceil((to_float(300) - (to_float(300) * fParam0))));
}

int func_1248(char[4] cParam0)
{
	return cParam0->f_598;
}

void func_1249(char[4] cParam0)
{
	switch (iLocal_61)
	{
		case 0:
			if (_does_anim_scene_exist(&(Local_72[3])))
			{
				func_1533(cParam0, 3);
				iLocal_61 = 1;
			}
			break;
		case 1:
			break;
		case 2:
			if (_does_anim_scene_exist(&(Local_72[3])))
			{
				if (!_is_anim_scene_started(&(Local_72[3]), false))
				{
					start_anim_scene(&(Local_72[3]));
					_0xdf7b5144e25cd3fe(&(Local_72[3]), func_417(12));
					_0xdf7b5144e25cd3fe(&(Local_72[3]), func_417(13));
				}
				else
				{
					iLocal_61 = 3;
				}
			}
			break;
		case 3:
			if ((func_1287(iLocal_243, Global_35, 0.5f) && func_1258(Global_35, &(iLocal_1784[13]), 1, 0)) && has_entity_clear_los_to_entity(iLocal_243, Global_35, 17))
			{
				if (func_1301("SAD3_BLACKRIDE"))
				{
					func_1319("SAD3_BLACKRIDE", 0, 0);
				}
				_0x870708a6e147a9ad(iLocal_243, "", 4f, 0, 0, 0, 0, 0, 0, -1);
				set_anim_scene_bool(&(Local_72[3]), "b_loop_sitting", true, false);
				iLocal_61 = 5;
			}
			break;
		case 5:
			if (!func_394(iVar1681, 131072))
			{
				if (_0x8d81e7824b7753f7(&(Local_72[3]), "s_base_standing", 1))
				{
					func_420(&uLocal_1684, 131072);
				}
			}
			iVar0 = func_1484(iLocal_243);
			if (_0x3ee1f7a8c32f24e1(player_id(), &iVar0, 0, 0))
			{
				if (iLocal_243 == get_ped_index_from_entity_index(iVar0))
				{
					if (func_10(iVar1830))
					{
						if (func_394(iVar1681, 131072))
						{
							func_1774(iVar1830, 1, 1);
							if (func_1775(iVar1830, 1))
							{
								if (!func_394(iVar1683, 4))
								{
									func_420(&uLocal_1686, 4);
								}
								set_player_control(get_player_index(), false, 256, false);
								if (!func_394(iVar1683, 1024))
								{
									func_420(&uLocal_1686, 1024);
								}
								func_11(&iLocal_1833, 1, 1);
								set_ped_config_flag(iLocal_243, 297, false);
								if (func_1262(cParam0, "SAD3_BARN_ILO", 0))
								{
									iLocal_61 = 4;
								}
								_0xe98d55c5983f2509(iLocal_243);
							}
						}
					}
					else
					{
						iLocal_1833 = func_1776("SAD3_CXT_LUMBER", -163964935, iLocal_243, 3, 0, 0, 0, 0, 5f, 570, 4000, 10, 1073741824, 0, 1704213876, 0, 0);
						func_1774(iVar1830, 0, 1);
						_uiprompt_set_group((*Global_1945938)[func_194(iVar1830)]->f_3, _uiprompt_get_group_id_for_target_entity(iLocal_243), 0);
						func_1777(iVar1830, 8f, 1);
					}
				}
				else
				{
					func_11(&iLocal_1833, 1, 1);
				}
			}
			else
			{
				func_11(&iLocal_1833, 1, 1);
			}
			if (func_903(Global_35, iLocal_243, 1, 1) > 5f)
			{
				if (_0x8d81e7824b7753f7(&(Local_72[3]), "s_base_standing", 1))
				{
					set_anim_scene_bool(&(Local_72[3]), "b_loop_sitting", false, false);
					func_1778(3, 13);
					iLocal_61 = 3;
				}
			}
			break;
		case 4:
			if (!func_1301("SAD3_BARN_ILO") && !func_1301("SAD3_INT_LI"))
			{
				iLocal_61 = 7;
			}
			break;
		case 7:
			break;
	}
}

float func_1250(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!does_entity_exist(iParam0))
	{
		return 0f;
	}
	return get_distance_between_coords(get_entity_coords(iParam0, false, false), vParam1, bParam4);
}

int func_1251(int iParam0, int iParam1, int iParam2)
{
	if ((is_entity_dead(iParam0) || is_entity_dead(iParam1)) || !does_group_exist(iParam2))
	{
		return 0;
	}
	if (!is_ped_on_mount(Global_35) || get_mount(Global_35) != iParam1)
	{
		if (is_ped_in_group(iParam0))
		{
			remove_ped_from_group(iParam0);
			task_look_at_entity(iParam0, Global_35, -1, 2096, 51, 1);
		}
	}
	else if (!is_ped_in_group(iParam0))
	{
		func_1779(iParam0, iParam2);
		task_clear_look_at(iParam0);
		return 1;
	}
	return 0;
}

int func_1252(int iParam0, bool bParam1, bool bParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10, int iParam11, float fParam12, bool bParam13, bool bParam14, bool bParam15, int iParam16)
{
	if (!func_485(iParam0))
	{
		return 0;
	}
	iVar1 = func_1780(&uVar0, iParam0, bParam1, bParam2, iParam3, iParam4, iParam5, bParam7, bParam8, iParam9, iParam10, iParam11, fParam12, bParam13, bParam14, bParam15, bParam6, iParam16);
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

bool func_1253(char[4] cParam0, int iParam1, char[4] cParam2, int iParam3, char[4] cParam4, char[4] cParam5, int iParam6, float fParam7, float fParam8)
{
	if (!does_entity_exist(iParam1))
	{
		return false;
	}
	if (is_entity_dead(iParam1))
	{
		return false;
	}
	StringCopy(&cVar0, "HORSE_RET", 64);
	if (func_899(Global_35, iParam1, fParam7, 1))
	{
		StringCopy(&cVar0, "HORSE_MOUNT", 64);
	}
	StringCopy(&cVar8, "HORSE_FAIL", 64);
	bVar16 = func_1781(cParam0, iParam1, cVar0, cVar8, 512, cParam2, cParam4, cParam5);
	if (func_22(cParam0) != 1 && func_8(cParam0, 64))
	{
		func_1782(cParam0, iParam1, iParam6, bVar16, iParam3);
		func_909(cParam0, 64);
		if (bVar16)
		{
			_0x0751d461f06e41ce(get_player_index(), 33, 2, 1);
		}
		else
		{
			_0x0751d461f06e41ce(get_player_index(), 33, 2, 0);
		}
	}
	if (bVar16)
	{
		if (!func_399(cParam0->f_5304) && func_1250(iParam1, cParam0->f_5304, 1) >= fParam8)
		{
			if (func_1259(iParam1, 2043986356))
			{
				clear_ped_tasks(iParam1, 1, 0);
			}
			func_1783(1);
		}
		_0xc71d07c96946e263(player_id(), iParam1);
		disable_control_action(0, 399753205, false);
		return true;
	}
	return false;
}

void func_1254(int iParam0, int iParam1)
{
	func_1784(iParam0, iParam1);
}

void func_1255(int iParam0)
{
	if (!is_entity_dead(iParam0))
	{
		task_clear_look_at(iParam0);
	}
}

bool func_1256(char[4] cParam0)
{
	if (!does_entity_exist(iLocal_243))
	{
		iLocal_243 = func_1785(iLocal_43, -869.5363f, -1311.384f, 42.01419f, 256.068f, 1, 1, 0, 1, 1, 0, 0, 0, 0, 0);
		set_blocking_of_non_temporary_events(iLocal_243, false);
		set_ped_config_flag(iLocal_243, 297, true);
		set_ped_config_flag(iLocal_243, 130, true);
		_0xd355e2f1bb41087e(iLocal_243, 5f);
		return false;
	}
	else
	{
		if (!func_394(iVar1682, 131072))
		{
			if (_0xa0bc8faed8cfeb3c(iLocal_243))
			{
				func_1786(iLocal_243, 41788943);
				func_420(&uLocal_1685, 131072);
				return false;
			}
		}
		else if (!_0xa0bc8faed8cfeb3c(iLocal_243))
		{
			return false;
		}
		if (!func_394(iVar1681, 8388608))
		{
			add_relationship_group("relLumber", &uLocal_1901);
			set_relationship_between_groups(2, 1862763509, iVar1898);
			set_relationship_between_groups(4, iVar1898, 1862763509);
			func_420(&uLocal_1684, 8388608);
		}
		if (!_0x0772f87d7b07719a(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_ALBERT_CAKE")))
		{
			_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_ALBERT_CAKE"));
		}
		set_ped_relationship_group_hash(iLocal_243, iVar1898);
		func_145(cParam0, iLocal_243, "BLW_LUMBEROWNER", 0);
		stop_ped_speaking(iLocal_243, false);
		func_1289(17);
	}
	return true;
}

bool func_1257()
{
	if (!does_entity_exist(iLocal_244))
	{
		iLocal_244 = func_1785(iLocal_44, -820.9681f, -1278.578f, 42.638f, 282.3828f, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
		set_blocking_of_non_temporary_events(iLocal_244, true);
		return false;
	}
	return true;
}

bool func_1258(int iParam0, int iParam1, bool bParam2, int iParam3)
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

bool func_1259(int iParam0, int iParam1)
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

bool func_1260(char[4] cParam0)
{
	switch (iVar1928)
	{
		case 0:
			_request_streamed_txd(348790925, false);
			_request_streamed_txd(-374158355, false);
			if (func_1787("catalogue01x_ct"))
			{
				iLocal_1931 = 1;
			}
			break;
		case 1:
			if (func_1787("cata_mp_stamp_ct"))
			{
				iLocal_1931 = 2;
			}
			break;
		case 2:
			if (does_entity_exist(&(iLocal_1406[17])))
			{
				if (_has_streamed_txd_loaded(348790925) && _has_streamed_txd_loaded(-374158355))
				{
					iLocal_1931 = 3;
				}
			}
			break;
		case 3:
			if (func_33(cParam0) == 0)
			{
				set_anim_scene_entity(&(Local_72[3]), "p_cs_catalogue01x", &(iLocal_1406[17]), 0);
			}
			if (is_named_rendertarget_registered("cata_mp_stamp_ct"))
			{
				set_text_render_id(get_named_rendertarget_render_id("cata_mp_stamp_ct"));
				_0x9d37eb5003e0f2cf(get_named_rendertarget_render_id("cata_mp_stamp_ct"), 1);
				draw_rect(0.5f, 0.5f, 2f, 2f, 0, 0, 0, 255, false, true);
			}
			if (is_named_rendertarget_registered("catalogue01x_ct"))
			{
				set_text_render_id(get_named_rendertarget_render_id("catalogue01x_ct"));
				draw_sprite("UI_DOC_BUILDCAT", "UI_DOC_BUILDCAT", 0.5f, 0.5f, 1f, 1f, 0f, 255, 255, 255, 255, false);
				draw_sprite("UI_DOC_BARNCAT", "UI_DOC_BARNCAT", 0.5f, 1f, 1f, 1f, 0f, 255, 255, 255, 255, false);
			}
			iLocal_1931 = 4;
			break;
		case 4:
			return true;
	}
	return false;
}

bool func_1261(var uParam0, float fParam1)
{
	if (func_1788(uParam0, fParam1))
	{
		func_557(uParam0);
		return true;
	}
	return false;
}

bool func_1262(char[4] cParam0, char* sParam1, bool bParam2)
{
	StringCopy(&cVar0, sParam1, 24);
	if (func_1789(&(cParam0->f_5310), cVar0, 0, -1, bParam2, 0))
	{
		return true;
	}
	return false;
}

bool func_1263(int iParam0, vector3 vParam1, int iParam4, float fParam5, bool bParam6, bool bParam7, bool bParam8, float fParam9, bool bParam10, int iParam11, bool bParam12, bool bParam13, bool bParam14)
{
	func_1315(iParam0, vParam1, 0, fParam5, bParam6, bParam7, bParam8, bParam12, bParam13, bParam14, 0);
	iVar1 = get_mount(iParam0);
	if (is_ped_in_any_vehicle(iParam0, false))
	{
		iVar2 = get_vehicle_ped_is_in(iParam0, false);
	}
	bVar4 = func_1250(iParam0, vParam1, 1);
	if (!func_26(iParam4))
	{
		if (bVar4 <= bParam8)
		{
			if (does_entity_exist(iVar1) || does_entity_exist(iVar2))
			{
				func_27(iParam4, 0);
			}
		}
	}
	else if (bParam10 && bVar4 > bParam8)
	{
		func_557(iParam4);
	}
	if (func_26(iParam4))
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
		if (func_913(iParam4) >= fParam9)
		{
			if (iParam0 == Global_35)
			{
				set_player_may_not_enter_any_vehicle(player_id());
				_0x9f9a829c6751f3c7(player_id(), 28, 1);
			}
			if (!is_entity_dead(iVar1) && !func_1772(iParam0, 501393341))
			{
				if (is_ped_on_mount(iParam0))
				{
					task_dismount_animal(iParam0, 0, 0, 0, 0, 0);
					return true;
				}
			}
			if (!is_entity_dead(iVar2) && !func_1772(iParam0, -828834893))
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

void func_1264(char[4] cParam0, char* sParam1, float fParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6, int iParam7)
{
	sVar0 = func_1579(iParam7, sParam1, sParam3, sParam4, sParam5, sParam6);
	if (get_hash_key(sParam1) != cParam0->f_5302)
	{
		_uilog_set_cached_objective(sVar0);
		cParam0->f_5302 = get_hash_key(sParam1);
		_uilog_add_or_update_objective(1, func_85(cParam0), get_hash_key(sParam1), sParam1, fParam2 >= 0.9f, false, false);
	}
	func_140(cParam0, func_33(cParam0), 33554432);
}

var func_1265(char[4] cParam0, char* sParam1, int iParam2, int iParam3, bool bParam4, float fParam5, char* sParam6, char* sParam7, char* sParam8, char* sParam9, int iParam10)
{
	func_1264(cParam0, sParam1, fParam5, sParam6, sParam7, sParam8, sParam9, iParam10);
	if (bParam4)
	{
		_uilog_set_has_displayed_cached_objective();
		uVar0 = func_973(sParam1, iParam3, bParam4, 1, sParam6, sParam7, sParam8, sParam9, iParam10);
	}
	else if (!func_1790(cParam0, sParam1))
	{
		sVar1 = func_1579(iParam10, sParam1, sParam6, sParam7, sParam8, sParam9);
		_uilog_set_has_displayed_cached_objective();
		uVar0 = func_1578(sVar1, iParam3, 0, 0, 0, 1);
	}
	return uVar0;
}

void func_1266(char[4] cParam0, int iParam1)
{
	cParam0->f_1[func_132(iParam1)]->f_12 = 1;
}

void func_1267(char[4] cParam0, int iParam1, int iParam2, int iParam3)
{
	iVar0 = func_132(iParam2);
	if (!func_1554(iVar0))
	{
		return;
	}
	iVar1 = func_1555(iParam3);
	if (!func_1556(iVar1))
	{
		return;
	}
	(*cParam0->f_1[iVar0])[iVar1] = *iParam1;
	set_bit(&(cParam0->f_1[iVar0]->f_17), iVar1);
}

void func_1268(char[4] cParam0, int iParam1, char[16] cParam2)
{
	cParam0->f_1[func_132(iParam1)]->f_13 = { cParam2 };
}

void func_1269(char[4] cParam0, int iParam1, int iParam2)
{
	cParam0->f_1[func_132(iParam1)]->f_21 = iParam2;
}

void func_1270(int iParam0, bool bParam1, bool bParam2)
{
	iVar0 = 1048576;
	if (bParam1)
	{
		iVar0 |= 131072;
	}
	if (bParam2)
	{
		iVar0 |= 524288;
	}
	_0x2fcd528a397e5c88(iParam0, iVar0);
}

void func_1271(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
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

void func_1272(int iParam0, int iParam1, vector3 vParam2, float fParam5, int iParam6, bool bParam7, bool bParam8, char* sParam9, float fParam10)
{
	task_start_scenario_at_position(iParam0, iParam1, vParam2, fParam5, iParam6, bParam7, bParam8, sParam9, fParam10, false);
}

void func_1273(vector3 vParam0, float fParam3, bool bParam4)
{
	iVar0 = 16384;
	if (bParam4)
	{
		iVar0 |= 524288;
	}
	clear_area(vParam0, fParam3, iVar0);
}

void func_1274(char[4] cParam0, int iParam1, int iParam2)
{
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	if (!func_988(cParam0, iParam1, &iVar0))
	{
		return;
	}
	func_1791(cParam0->f_5423[iVar0], iParam2);
}

void func_1275(int iParam0)
{
	func_1001(iParam0, 4, 1);
}

void func_1276(char[4] cParam0)
{
	if (!func_394(iVar1685, 256))
	{
		func_1770(&(uLocal_239[1]), cLocal_237, 1, 1);
	}
	switch (func_1297(cParam0))
	{
		case 1:
			func_1264(cParam0, "SAD3_OBJ2", -1082130432, 0, 0, -1, -1, 0);
			if (func_1262(cParam0, "SAD3_JTOUNC", 0))
			{
				cLocal_237 = "SAD3_JTOUNC";
				iLocal_1505 = func_1283(408396114, vLocal_1535, 15f, 1);
				_blip_set_modifier(iVar1502, -1878373110);
				func_227(vLocal_1551[21]);
				func_135(cParam0, 2);
			}
			break;
		case 2:
			if (!func_1301("SAD3_JTOUNC"))
			{
				if (func_1285(vLocal_1551[21]) >= 2f)
				{
					if (func_1262(cParam0, "SAD3_SLETSGO", 0))
					{
						cLocal_237 = "SAD3_SLETSGO";
						func_227(vLocal_1551[21]);
						func_135(cParam0, 3);
					}
				}
			}
			else
			{
				func_227(vLocal_1551[21]);
			}
			break;
		case 3:
			if (!func_1301("SAD3_SLETSGO"))
			{
				if (!func_1771("SAD3_OBJ2"))
				{
					func_1265(cParam0, "SAD3_OBJ2", 0, 7500, 0, -1082130432, 0, 0, -1, -1, 0);
				}
			}
			if (!func_1301("SAD3_SLETSGO") && !func_1301("SAD3_SLETSGO2"))
			{
				if (func_1248(cParam0) == 0)
				{
					if (func_1285(vLocal_1551[21]) >= 6f)
					{
						if (func_1262(cParam0, "SAD3_SLETSGO2", 0))
						{
							cLocal_237 = "SAD3_SLETSGO2";
							func_227(vLocal_1551[21]);
						}
					}
				}
				else
				{
					func_135(cParam0, 4);
				}
			}
			else
			{
				func_227(vLocal_1551[21]);
			}
			break;
		case 4:
			if (func_1792())
			{
				if (!func_1298())
				{
					if (func_1285(vLocal_1551[21]) >= 2f)
					{
						if (func_1262(cParam0, "SAD3_DONEBH", 0))
						{
							cLocal_237 = "SAD3_DONEBH";
							func_135(cParam0, 5);
						}
					}
				}
				else
				{
					func_227(vLocal_1551[21]);
				}
			}
			else
			{
				func_135(cParam0, 5);
			}
			break;
		case 5:
			if (!func_1298())
			{
				if (func_1285(vLocal_1551[21]) >= 5f)
				{
					if (func_1262(cParam0, "SAD3_RIDE1", 0))
					{
						cLocal_237 = "SAD3_RIDE1";
						func_135(cParam0, 6);
					}
				}
			}
			else
			{
				func_227(vLocal_1551[21]);
			}
			break;
		case 6:
			if (!func_1301("SAD3_RIDE1") && !_0xf01c570e0a0a1e67(cLocal_237))
			{
				if (func_1285(vLocal_1551[21]) >= 4f)
				{
					if (func_1793(5))
					{
						if (func_1262(cParam0, "SAD3_RIDE2_DL", 0))
						{
							cLocal_237 = "SAD3_RIDE2_DL";
							func_135(cParam0, 7);
						}
					}
					else if (func_1262(cParam0, "SAD3_RIDE2_WHO", 0))
					{
						cLocal_237 = "SAD3_RIDE2_WHO";
						func_135(cParam0, 8);
					}
				}
			}
			else
			{
				func_227(vLocal_1551[21]);
			}
			break;
		case 7:
			if (!func_1301("SAD3_RIDE2_DL") && !_0xf01c570e0a0a1e67(cLocal_237))
			{
				if ((func_1794(15) || func_1794(13)) && func_1794(20))
				{
					if (func_1262(cParam0, "SAD3_RIDE2_DL3", 0))
					{
						cLocal_237 = "SAD3_RIDE2_DL3";
						func_135(cParam0, 8);
					}
				}
				else if (func_1794(15) || func_1794(13))
				{
					if (func_1262(cParam0, "SAD3_RIDE2_DL2", 0))
					{
						cLocal_237 = "SAD3_RIDE2_DL2";
						func_135(cParam0, 8);
					}
				}
				else if (func_1262(cParam0, "SAD3_RIDE2_DL1", 0))
				{
					cLocal_237 = "SAD3_RIDE2_DL1";
					func_135(cParam0, 8);
				}
			}
			break;
		case 8:
			if (!func_1298() && !_0xf01c570e0a0a1e67(cLocal_237))
			{
				if (func_1262(cParam0, "SAD3_RIDE3", 0))
				{
					cLocal_237 = "SAD3_RIDE3";
					func_135(cParam0, 9);
				}
			}
			break;
		case 9:
			if (!func_1301("SAD3_RIDE3") && !_0xf01c570e0a0a1e67(cLocal_237))
			{
				if (func_1262(cParam0, "SAD3_RIDE4", 0))
				{
					cLocal_237 = "SAD3_RIDE4";
					func_135(cParam0, -1);
				}
			}
			break;
		case 10:
			if (!func_1298() && !_0xf01c570e0a0a1e67(cLocal_237))
			{
				if (func_1250(&(uLocal_239[1]), vLocal_1535, 1) <= 30f)
				{
					if (func_1262(cParam0, "SAD3_RANCH", 0))
					{
						cLocal_237 = "SAD3_RANCH";
						func_135(cParam0, 11);
					}
				}
			}
			else
			{
				func_47(1, 0);
			}
			break;
		case 11:
			if (!func_1301("SAD3_RANCH"))
			{
				if (func_1250(&(uLocal_239[1]), vLocal_1535, 1) <= 10f)
				{
					if (func_1262(cParam0, "SAD3_OFFHORSE", 0))
					{
						cLocal_237 = "SAD3_OFFHORSE";
						func_135(cParam0, 51);
					}
				}
			}
			break;
	}
}

void func_1277(char[4] cParam0)
{
	if (func_33(cParam0) == iLocal_46)
	{
		iVar0 = 9;
		vVar1 = { vLocal_1520 };
		vVar4 = { vLocal_1535 };
	}
	if (func_33(cParam0) == iLocal_50)
	{
		iVar0 = 23;
		vVar1 = { vLocal_1523 };
		vVar4 = { vLocal_1526 };
	}
	if (func_33(cParam0) >= iLocal_51 && func_33(cParam0) <= iLocal_53)
	{
		vVar1 = { vLocal_1529 };
		vVar4 = { vLocal_1532 };
	}
	if (get_clock_hours() < iVar0)
	{
		fVar7 = get_distance_between_coords(Global_36, vVar4, true);
		fVar8 = get_distance_between_coords(vVar1, vVar4, true);
		fVar9 = func_1697(((fVar8 - fVar7) / fVar8), 0f, 1f);
		func_1795(iVar0, 0, fVar9, &Local_1763);
	}
}

void func_1278()
{
	if (!func_394(iVar1683, 2))
	{
		if (!func_1796(Global_35, func_1532(4, 0), 175f, 1, 1))
		{
			return;
		}
		vVar0 = { func_1532(4, 0) };
		if (func_1798(163, vVar0, 0f, 0f, func_1797(4, 0), 1, 0, 1, 0, 0, 0, -1))
		{
			func_420(&uLocal_1685, 2);
		}
	}
}

void func_1279()
{
	if (!func_394(iVar1683, 4))
	{
		if (!func_1796(Global_35, func_1532(4, 1), 175f, 1, 1))
		{
			return;
		}
		vVar0 = { func_1532(4, 1) };
		if (func_1798(44, vVar0, 0f, 0f, func_1797(4, 1), 1, 0, 1, 0, 0, 0, -1))
		{
			func_420(&uLocal_1685, 4);
		}
	}
}

void func_1280(char[4] cParam0)
{
	if (!bVar0)
	{
		if (is_ped_on_mount(&(uLocal_239[0])) && func_1250(&(uLocal_239[0]), vLocal_1547, 1) >= 15f)
		{
			bVar0 = true;
			stop_ped_speaking(&(uLocal_239[0]), true);
		}
	}
	if (bVar0)
	{
		if (func_903(Global_35, &(uLocal_239[0]), 1, 1) <= 10f)
		{
			if (!func_26(vLocal_1551[40]))
			{
				func_1799(vLocal_1551[40], 6f, 0);
			}
			else if (func_1285(vLocal_1551[40]) >= 8f)
			{
				if (!func_394(iVar1685, 256))
				{
					func_420(&uLocal_1688, 256);
				}
				if (func_1301(cLocal_237))
				{
					pause_scripted_conversation(cLocal_237, true, false, false, true);
				}
				else if (func_1262(cParam0, "SAD3_UTOJGO", 0))
				{
					func_227(vLocal_1551[40]);
				}
			}
		}
		else
		{
			if (_0xd89504d9d7d5057d(cLocal_237) && func_1800(cLocal_237))
			{
				restart_scripted_conversation(cLocal_237);
			}
			func_1254(&uLocal_1688, 256);
			func_557(vLocal_1551[40]);
		}
	}
	if (func_526(4))
	{
		if (func_1250(&(uLocal_239[0]), vLocal_1547, 1) >= 150f || func_903(Global_35, &(uLocal_239[0]), 1, 1) >= 150f)
		{
			func_473(4, 1, 0, 1, -1082130432, 1, 1, 0, 0, 0, 0);
			func_1275(4);
		}
	}
}

int func_1281()
{
	if (!bVar1702)
	{
		if (func_1801())
		{
			if (!does_entity_exist(&(iLocal_1441[0])))
			{
				iLocal_1441[0] = _create_mission_train(1094934838, vLocal_1544, true, false, false, true);
				return 0;
			}
			else if (!_0xbd3c4a2ed509205e(&(iLocal_1441[0])))
			{
				return 0;
			}
			else
			{
				set_train_speed(&(iLocal_1441[0]), 0f);
				set_train_cruise_speed(&(iLocal_1441[0]), 0f);
				set_vehicle_is_considered_by_player(&(iLocal_1441[0]), false);
				iLocal_1704 = 1;
			}
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_1282(char[4] cParam0, int iParam1, char[4] cParam2, int iParam3, int iParam4, float fParam5, float fParam6, int iParam7)
{
	Var0 = { func_1802(iParam1) };
	Var8 = { func_1803(iParam1) };
	return func_1805(cParam0, func_1804(cParam0, iParam1), &Var0, &Var8, cParam2, iParam3, iParam4, fParam5, fParam6, iParam7, 1);
}

int func_1283(int iParam0, vector3 vParam1, float fParam4, bool bParam5)
{
	iVar0 = _blip_add_for_radius(iParam0, vParam1, fParam4);
	if (bParam5)
	{
		_blip_set_modifier(iVar0, 231194138);
	}
	return iVar0;
}

int func_1284(char[4] cParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (is_entity_dead(iParam1))
	{
		return iVar0;
	}
	bVar1 = func_1806(cParam0, iParam1);
	bVar2 = (is_entity_a_ped(iParam1) && func_1807(get_ped_index_from_entity_index(iParam1)));
	if (bVar2)
	{
		iVar3 = func_1808(get_ped_index_from_entity_index(iParam1));
	}
	if (bVar1)
	{
		func_1274(cParam0, iParam1, 128);
		if (bParam4)
		{
			func_1274(cParam0, iParam1, 1024);
		}
	}
	if (is_entity_a_ped(iParam1) && bParam4)
	{
		iVar0 = get_blip_from_entity(iParam1);
		if (bVar2)
		{
			func_1809(iVar3);
			if (does_blip_exist(iVar0))
			{
				_blip_set_modifier(iVar0, -546708623);
				if (bParam5)
				{
					_blip_set_modifier(iVar0, 231194138);
				}
			}
		}
		else if (func_1806(cParam0, iParam1) && does_blip_exist(iVar0))
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
		if (func_988(cParam0, iParam1, &iVar4))
		{
			func_1553(cParam0->f_5423[iVar4]);
		}
	}
	if (bVar2)
	{
		set_this_script_can_remove_blips_created_by_any_script(true);
		func_1810(iVar3);
	}
	return iVar0;
}

float func_1285(int iParam0)
{
	if (!func_26(iParam0))
	{
		return 0f;
	}
	if (func_509(iParam0))
	{
		return iParam0->f_2;
	}
	return (func_555() - iParam0->f_1);
}

void func_1286(int iParam0, bool bParam1, bool bParam2)
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

bool func_1287(int iParam0, int iParam1, float fParam2)
{
	return func_1811(iParam0, get_entity_coords(iParam1, false, false), fParam2);
}

int func_1288(vector3 vParam0, vector3 vParam3, vector3 vParam6, float fParam9, float fParam10, int iParam11)
{
	vVar1 = { func_464(vParam0, vParam3, fParam10) };
	vVar4 = { func_465(vParam0, vParam3, fParam10) };
	func_1273(vParam6, fParam9, iParam11);
	set_ped_non_creation_area(vVar1, vVar4);
	set_ped_paths_in_area(vVar1, vVar4, false, 0);
	iVar0 = add_scenario_blocking_area(vVar1, vVar4, iParam11, 15);
	return iVar0;
}

void func_1289(int iParam0)
{
	if (!does_entity_exist(&(iLocal_1406[iParam0])))
	{
		switch (iParam0)
		{
			case 1:
				vVar0 = { 712.255f, -510.65f, 72.175f };
				vVar3 = { 7.25f, -4.325f, 64.905f };
				iVar6 = iLocal_20;
				break;
			case 2:
				vVar0 = { -633.47f, -48.91f, 82.33f };
				vVar3 = { -2f, -7f, 92.3f };
				iVar6 = iLocal_25;
				break;
			case 3:
				vVar0 = { -623.32f, -50.43f, 82.65f };
				vVar3 = { 4.999999f, -3.999999f, 0f };
				iVar6 = iLocal_26;
				break;
			case 4:
				vVar0 = { 706.98f, -528.52f, 70.715f };
				vVar3 = { -1.525f, 8.1f, 158f };
				iVar6 = iLocal_29;
				break;
			case 5:
				vVar0 = { 716.32f, -525.371f, 73.59f };
				vVar3 = { -3.775f, -6.375f, 119.25f };
				iVar6 = iLocal_30;
				break;
			case 6:
				vVar0 = { 701.975f, -529.76f, 72.735f };
				vVar3 = { 12.425f, 2.675f, -30.3f };
				iVar6 = iLocal_30;
				break;
			case 7:
				vVar0 = { 699.125f, -528.168f, 70.252f };
				vVar3 = { 5.675f, 4.3f, -42.825f };
				iVar6 = iLocal_30;
				break;
			case 8:
				vVar0 = { -630.8f, -67.8f, 81.86f };
				vVar3 = { 0f, 0f, 2.29f };
				iVar6 = iLocal_27;
				break;
			case 9:
				vVar0 = { -633.1f, -67.7f, 81.86f };
				vVar3 = { 0f, 0f, 88.42f };
				iVar6 = iLocal_28;
				break;
			case 10:
				vVar0 = { 726.3084f, -466.4799f, 78.50744f };
				vVar3 = { 0f, 0f, 0f };
				break;
			case 11:
				vVar0 = { -612.6861f, -27.196f, 84.976f };
				vVar3 = { 33.8675f, 175.449f, 129.472f };
				iVar6 = iLocal_31;
				break;
			case 12:
				vVar0 = { -612.4688f, -26.2728f, 84.9857f };
				vVar3 = { 0.459411f, 2.12418f, -65.9584f };
				iVar6 = iLocal_32;
				break;
			case 13:
				vVar0 = { -612.1972f, -26.2905f, 84.9539f };
				vVar3 = { 2.73234f, -89.7813f, 110.023f };
				iVar6 = iLocal_33;
				break;
			case 14:
				vVar0 = { -612.0358f, -26.4071f, 84.9481f };
				vVar3 = { 9.65477f, -94.1353f, 101.736f };
				iVar6 = iLocal_33;
				break;
			case 15:
				vVar0 = { -612.8694f, -26.3256f, 85.0194f };
				vVar3 = { -76.4266f, -46.5939f, 51.4582f };
				iVar6 = iLocal_34;
				break;
			case 16:
				vVar0 = { -613.1255f, -26.2915f, 85.0036f };
				vVar3 = { 81.939f, 130.571f, 150.596f };
				iVar6 = iLocal_34;
				break;
			case 17:
				vVar0 = { -869.4485f, -1312.277f, 42.01419f };
				vVar3 = { 0f, 0f, 0f };
				iVar6 = iLocal_35;
				break;
			case 18:
				vVar0 = { 1360.16f, -1297.747f, 76.76055f };
				vVar3 = { 0f, 0f, 0f };
				iVar6 = iLocal_36;
				break;
			case 19:
				vVar0 = { 1360.16f, -1297.747f, 76.76055f };
				vVar3 = { 0f, 0f, 0f };
				iVar6 = iLocal_37;
				break;
			case 20:
				vVar0 = { 1360.16f, -1297.747f, 76.76055f };
				vVar3 = { 0f, 0f, 0f };
				iVar6 = iLocal_38;
				break;
			case 21:
				vVar0 = { 1360.16f, -1297.747f, 76.76055f };
				vVar3 = { 0f, 0f, 0f };
				iVar6 = iLocal_38;
				break;
			case 22:
				vVar0 = { 1360.16f, -1297.747f, 76.76055f };
				vVar3 = { 0f, 0f, 0f };
				iVar6 = iLocal_38;
				break;
			case 23:
				vVar0 = { 1360.16f, -1297.747f, 76.76055f };
				vVar3 = { 0f, 0f, 0f };
				iVar6 = iLocal_40;
				break;
			case 24:
				vVar0 = { 1353.058f, -1302.552f, 77.05098f };
				vVar3 = { 0f, 0f, 0f };
				iVar6 = iLocal_42;
				break;
			case 25:
				vVar0 = { 1353.151f, -1300.837f, 75.73296f };
				vVar3 = { 0f, 0f, 0f };
				iVar6 = iLocal_41;
				break;
		}
		if (iParam0 == 10)
		{
			iLocal_1406[iParam0] = _create_weapon_object(1402226560, 30, vVar0, true, 1f);
		}
		else
		{
			iLocal_1406[iParam0] = create_object_no_offset(iVar6, vVar0, true, true, false, true);
			set_entity_rotation(&(iLocal_1406[iParam0]), vVar3, 2, true);
			set_entity_only_damaged_by_player(&(iLocal_1406[iParam0]), true);
		}
	}
}

bool func_1290(int iParam0, int iParam1, bool bParam2)
{
	if (does_entity_exist(iParam0) && !is_entity_dead(iParam0))
	{
		if (does_entity_exist(iParam1) && !is_entity_dead(iParam1))
		{
			if (bParam2)
			{
				return (_is_ped_getting_into_a_mount_seat(iParam0, true) && get_mount(iParam0) == iParam1);
			}
			else
			{
				return (is_ped_on_mount(iParam0) && get_mount(iParam0) == iParam1);
			}
		}
	}
	return false;
}

bool func_1291(char[4] cParam0, int iParam1, int iParam2)
{
	if (!does_entity_exist(iVar1381))
	{
		if (iParam1 == 12)
		{
			vVar0 = { 592.8381f, -614.5518f, 43.7533f };
			fVar3 = 252.8699f;
		}
		else if (iParam1 == 13)
		{
			vVar0 = { 1359.943f, -1303.831f, 76.7818f };
			fVar3 = 0f;
		}
		else if (iParam1 == 11)
		{
			vVar0 = { 574.9622f, -622.5505f, 41.1762f };
			fVar3 = 0f;
		}
		else if (iParam1 > 8)
		{
			vVar0 = { 590.2183f, -621.9337f, 41.66826f };
			fVar3 = 147.3677f;
		}
		else if (iParam1 >= 6)
		{
			vVar0 = { 704.6401f, -528.8958f, 70.4574f };
			fVar3 = 0f;
		}
		else if (iParam1 == 5)
		{
			vVar0 = { 1355.764f, -1301.79f, 76.7606f };
			fVar3 = 0f;
		}
		else if (iParam1 == 4)
		{
			vVar0 = { -637.571f, -57.91627f, 81.77711f };
			fVar3 = 0f;
		}
		else
		{
			vVar0 = { -626.3886f, -55.62261f, 81.89654f };
			fVar3 = 181.35f;
		}
		Local_1386 = func_1785(iLocal_17, vVar0, fVar3, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0);
		set_blocking_of_non_temporary_events(iVar1381, true);
		if (iParam1 >= 7 && iParam1 != 11)
		{
			if (!does_blip_exist(Local_1386.f_1))
			{
				Local_1386.f_1 = _blip_add_for_entity(953018525, iVar1381);
				_0x6569f31a01b4c097(iVar1381, 4, 0);
				_0x18ff3110cf47115d(iVar1381, 10, 0);
			}
		}
		remove_all_ped_weapons(iVar1381, true, true);
		if (iParam1 < 4)
		{
			set_entity_visible(iVar1381, false);
			set_entity_collision(iVar1381, false, false);
			freeze_entity_position(iVar1381, true);
			set_ped_config_flag(iVar1381, 137, true);
			set_ped_config_flag(iVar1381, 302, true);
			_0xb8de69d9473b7593(iVar1381, 23);
		}
		func_145(cParam0, iVar1381, "SAD3_BOUNTY", 0);
		func_1254(&uLocal_1684, 524288);
		return false;
	}
	iLocal_1702 = 1;
	_0x41d1331afad5a091(iVar1381, 1, 0);
	_0x18ff3110cf47115d(iVar1381, 1, 0);
	set_ped_config_flag(iVar1381, 6, true);
	if (iParam1 == 3)
	{
		request_ped_visibility_tracking(iVar1381);
		set_entity_proofs(iVar1381, 24, false);
	}
	if (iParam1 >= 4)
	{
		func_1529(iVar1381, 0, 1);
	}
	if (!func_394(iVar1679, 524288))
	{
		_set_ped_outfit_preset(iVar1381, 0, 0);
		_update_ped_variation(iVar1381, false, true, false, false, false);
		func_420(&uLocal_1684, 524288);
	}
	if (!does_blip_exist(iVar1502))
	{
		uLocal_1507 = _0x3e593df9c2962ec6(953018525);
	}
	set_blip_sprite(iVar1502, 1481032477, true);
	_0x97f6f158cc5b5ca2(iVar1381, iVar1502);
	stop_ped_speaking(iVar1381, true);
	func_1812(iVar1381, 0);
	set_ped_lod_multiplier(iVar1381, 2f);
	return true;
}

bool func_1292(char[4] cParam0)
{
	if (!does_entity_exist(iLocal_245))
	{
		vVar0 = { -611.8641f, -29.2678f, 84.9736f };
		fVar3 = 282f;
		iLocal_245 = func_1785(iLocal_18, vVar0, fVar3, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
		set_blocking_of_non_temporary_events(iLocal_245, true);
		remove_all_ped_weapons(iLocal_245, true, true);
		set_ped_relationship_group_hash(iLocal_245, -1538724068);
		if (!func_394(iVar1683, 4096))
		{
			func_420(&uLocal_1686, 4096);
		}
		return false;
	}
	return true;
}

void func_1293(int iParam0, int iParam1)
{
	*iParam0 = iParam1;
}

void func_1294(char[4] cParam0)
{
	if (func_1813(cParam0, 11, 50f, 100f, 0, 0, 1, 422991367))
	{
		if (!func_394(iVar1683, 2))
		{
			func_420(&uLocal_1686, 2);
		}
		if (compare_strings(sLocal_238, "SAD3_OBJ3A", false, -1) == 0)
		{
			if (does_blip_exist(iVar1502))
			{
				remove_blip(&iLocal_1505);
			}
		}
		else if (compare_strings(sLocal_238, "SAD3_OBJ3b", false, -1) == 0)
		{
			if (does_blip_exist(Local_1386.f_1))
			{
				remove_blip(&(Local_1386.f_1));
			}
		}
	}
	else if (func_394(iVar1683, 2))
	{
		if (compare_strings(sLocal_238, "SAD3_OBJ3A", false, -1) == 0)
		{
			if (!does_blip_exist(iVar1502))
			{
				iLocal_1505 = _blip_add_for_area(1247852480, -630.707f, -65.594f, 81.856f, 14f, 26f, 1f, 16);
			}
		}
		else if (compare_strings(sLocal_238, "SAD3_OBJ3b", false, -1) == 0)
		{
			if (!does_blip_exist(Local_1386.f_1))
			{
				Local_1386.f_1 = _blip_add_for_entity(953018525, iVar1383);
			}
		}
		func_1254(&uLocal_1686, 2);
	}
	switch (func_1297(cParam0))
	{
		case 0:
			if (!func_1298())
			{
				if (func_1262(cParam0, "SAD3_BN_INVES", 0))
				{
					func_928(-3516232, 1, 0f, 0, 1, 0, 0, 0);
					func_928(295238741, 1, 0f, 0, 1, 0, 0, 0);
					_0x7f458b543006c8fe(-3516232, 8);
					_0x7f458b543006c8fe(295238741, 8);
					func_1264(cParam0, "SAD3_OBJ3A", -1082130432, 0, 0, -1, -1, 0);
					sLocal_238 = "SAD3_OBJ3A";
					func_135(cParam0, 1);
				}
			}
			break;
		case 1:
			if (!func_1771("SAD3_OBJ3A"))
			{
				if (!func_1301("SAD3_BN_INVES"))
				{
					func_1265(cParam0, "SAD3_OBJ3A", 0, 7500, 0, -1082130432, 0, 0, -1, -1, 0);
				}
			}
			else
			{
				func_135(cParam0, -1);
			}
			break;
		case 2:
			if (func_1262(cParam0, "SAD3_EMPTY", 0))
			{
				func_135(cParam0, -1);
			}
			break;
		case 7:
			if (func_1285(vLocal_1551[0]) >= 2f)
			{
				func_134(cParam0, 29);
			}
			break;
	}
}

void func_1295(char[4] cParam0)
{
	switch (iVar1829)
	{
		case 0:
			func_1350();
			task_turn_ped_to_face_entity(0, Global_35, 0, -1082130432, -1082130432, -1082130432);
			task_look_at_entity(0, Global_35, -1, 0, 51, 0);
			func_1351(&(uLocal_239[1]), -1082130432, -1082130432, 0);
			func_1293(&iLocal_1832, 2);
			break;
		case 2:
			if (func_1297(cParam0) == -1 && !func_1298())
			{
				if (!func_1259(&(uLocal_239[1]), 1369124074))
				{
					task_enter_anim_scene(&(uLocal_239[1]), &(Local_72[2]), "CS_MrsAdler", func_417(5), 1.48f, 1, 16, 60000, -1082130432);
				}
				else
				{
					func_1293(&iLocal_1832, 3);
				}
			}
			break;
		case 3:
			if (func_903(Global_35, &(uLocal_239[1]), 1, 1) <= 6f)
			{
				if (!func_1298() && (_does_anim_scene_exist(&(Local_72[2])) && !_is_anim_scene_started(&(Local_72[2]), false)))
				{
					if (!func_26(vLocal_1551[22]))
					{
						func_27(vLocal_1551[22], 0);
					}
					else if (func_913(vLocal_1551[22]) >= 6f)
					{
						if (func_1262(cParam0, "SAD3_SEARCH", 0))
						{
							func_227(vLocal_1551[22]);
						}
					}
				}
				else
				{
					func_227(vLocal_1551[22]);
				}
			}
			else if (func_26(vLocal_1551[22]))
			{
				func_557(vLocal_1551[22]);
			}
			if (_0x1f0e401031e20146(&(Local_72[2]), func_417(5)))
			{
				iLocal_60 = 1;
				func_1293(&iLocal_1832, 9);
			}
			break;
		case 9:
			if (_0xb89fcff19dafff28(&(Local_72[2]), "CS_MrsAdler"))
			{
				func_1293(&iLocal_1832, 10);
			}
			break;
		case 10:
			if (!func_1259(&(uLocal_239[1]), 713668775))
			{
				task_follow_nav_mesh_to_coord(&(uLocal_239[1]), -620.9865f, -49.3596f, 83.1077f, 1f, -1, 0.25f, 0, 114.3238f);
				func_1293(&iLocal_1832, 4);
			}
			break;
		case 4:
			if (func_903(Global_35, &(uLocal_239[1]), 1, 1) <= 10f)
			{
				if (func_1262(cParam0, "SAD3_EMPTY", 0))
				{
					func_227(vLocal_1551[5]);
					func_1293(&iLocal_1832, 5);
				}
			}
			break;
		case 5:
			if (!func_1301("SAD3_EMPTY") && !func_1301("SAD3_TOBARN"))
			{
				if (func_903(Global_35, &(uLocal_239[1]), 1, 1) <= 10f)
				{
					if (func_1285(vLocal_1551[5]) >= 5f)
					{
						if (func_1262(cParam0, "SAD3_TOBARN", 0))
						{
							func_227(vLocal_1551[5]);
						}
					}
				}
				else
				{
					func_227(vLocal_1551[5]);
				}
			}
			else
			{
				func_227(vLocal_1551[5]);
			}
			break;
	}
}

void func_1296(char[4] cParam0)
{
	switch (iLocal_60)
	{
		case 0:
			if (_does_anim_scene_exist(&(Local_72[2])))
			{
				func_1533(cParam0, 2);
				iLocal_60 = 5;
			}
			break;
		case 2:
			break;
		case 5:
			if (_does_anim_scene_exist(&(Local_72[2])))
			{
				if (!_is_anim_scene_started(&(Local_72[2]), false) && _is_anim_scene_loaded(&(Local_72[2]), true, false))
				{
					start_anim_scene(&(Local_72[2]));
					if (func_33(cParam0) == 3)
					{
						iLocal_60 = 3;
					}
					else
					{
						iLocal_60 = 1;
					}
				}
			}
			break;
		case 3:
			if (!_0x23e33cb9f4a3f547(&(Local_72[2]), func_417(7)) && !_0x0df57f86fe71dbe5(&(Local_72[2]), func_417(7)))
			{
				_0xdf7b5144e25cd3fe(&(Local_72[2]), func_417(7));
			}
			if (func_1778(2, 7))
			{
				func_904(&(iLocal_1406[11]), -612.6861f, -27.196f, 84.976f, 0f, 1, 1073741824);
				set_entity_rotation(&(iLocal_1406[11]), 33.8675f, 175.449f, 129.472f, 2, true);
				func_904(&(iLocal_1406[12]), -612.4688f, -26.2728f, 84.9857f, 0f, 1, 1073741824);
				set_entity_rotation(&(iLocal_1406[12]), 0.459411f, 2.12418f, -65.9584f, 2, true);
				func_904(&(iLocal_1406[13]), -612.1972f, -26.2905f, 84.9539f, 0f, 1, 1073741824);
				set_entity_rotation(&(iLocal_1406[13]), 2.73234f, -89.7813f, 110.023f, 2, true);
				func_904(&(iLocal_1406[14]), -612.0358f, -26.4071f, 84.9481f, 0f, 1, 1073741824);
				set_entity_rotation(&(iLocal_1406[14]), 9.65477f, -94.1353f, 101.736f, 2, true);
				func_904(&(iLocal_1406[15]), -612.8694f, -26.3256f, 85.0194f, 0f, 1, 1073741824);
				set_entity_rotation(&(iLocal_1406[15]), -76.4266f, -46.5939f, 51.4582f, 2, true);
				func_904(&(iLocal_1406[16]), -613.1255f, -26.2915f, 85.0036f, 0f, 1, 1073741824);
				set_entity_rotation(&(iLocal_1406[16]), 81.939f, 130.571f, 150.596f, 2, true);
				iLocal_60 = 1;
			}
			break;
		case 4:
			break;
		case 1:
			if (_0x1f0e401031e20146(&(Local_72[2]), func_417(6)))
			{
				if (is_ped_shooting(Global_35))
				{
					if (func_1814())
					{
						set_anim_scene_bool(&(Local_72[2]), "bGunshotA", true, false);
					}
					else
					{
						set_anim_scene_bool(&(Local_72[2]), "bGunshotB", true, false);
					}
				}
			}
			else
			{
				set_anim_scene_bool(&(Local_72[2]), "bGunshotA", false, false);
				set_anim_scene_bool(&(Local_72[2]), "bGunshotB", false, false);
			}
			if (_0x1f0e401031e20146(&(Local_72[2]), func_417(7)) || _0x1f0e401031e20146(&(Local_72[2]), func_417(8)))
			{
				if (is_ped_shooting(Global_35))
				{
					set_anim_scene_bool(&(Local_72[2]), "bReactFlee", true, false);
					iLocal_60 = 7;
				}
				else if (func_1348(iLocal_245, Global_35))
				{
					iLocal_60 = 6;
				}
			}
			break;
		case 6:
			if (func_186(iLocal_245, 0))
			{
				if (!func_1259(iLocal_245, 518218985))
				{
					_task_smart_flee_style_ped(iLocal_245, Global_35, 3, 0, -1082130432, -1, 0);
					iLocal_60 = 7;
				}
			}
			break;
		case 7:
			if (get_anim_scene_bool(&(Local_72[2]), "bReactFlee"))
			{
				if (_0x005e6f28dd7ed58d(&(Local_72[2]), "U_M_O_PSHRANCHER_01"))
				{
					if (func_186(iLocal_245, 0))
					{
						if (!func_1259(iLocal_245, 518218985))
						{
							_task_smart_flee_style_ped(iLocal_245, Global_35, 3, 0, -1082130432, -1, 0);
							iLocal_60 = 7;
						}
					}
				}
			}
			if (func_1377(&(Local_72[2])))
			{
				if (_does_anim_scene_exist(&(Local_72[2])))
				{
					_delete_anim_scene(&(Local_72[2]));
				}
			}
			break;
	}
}

int func_1297(char[4] cParam0)
{
	return cParam0->f_599;
}

bool func_1298()
{
	return func_1815(1);
}

float func_1299(int iParam0)
{
	func_1520(iParam0, 0, 0);
	if (func_466(iParam0))
	{
		return door_system_get_open_ratio(iParam0);
	}
	return -1f;
}

void func_1300()
{
	if (_0x3bdfcf25b58b0415(iVar1384))
	{
		if (!func_394(iVar1682, 128))
		{
			set_entity_invincible(iVar1384, true);
			func_420(&uLocal_1684, 128);
		}
	}
	else if (func_394(iVar1682, 128))
	{
		set_entity_invincible(iVar1384, false);
		func_1254(&uLocal_1684, 128);
	}
}

bool func_1301(char* sParam0)
{
	return func_1816(sParam0);
}

void func_1302()
{
	StringCopy(&Local_1747, "camera_treatments", 64);
	StringCopy(&(Local_1747.f_8), "GENERIC_CME_PULL_OUT_TREATMENT_REQUEST", 64);
	_0x6a4d224fc7643941(&Local_1747);
}

void func_1303(char[4] cParam0)
{
	switch (func_1297(cParam0))
	{
		case 0:
			if (func_1262(cParam0, "SAD3_TORHD", 0))
			{
				func_1264(cParam0, "SAD3_OBJ4a", -1082130432, 0, 0, -1, -1, 0);
				func_227(vLocal_1551[21]);
				func_135(cParam0, 1);
			}
			break;
		case 1:
			if (!func_1301("SAD3_TORHD"))
			{
				if (!func_1771("SAD3_OBJ4a"))
				{
					func_1265(cParam0, "SAD3_OBJ4a", 0, 7500, 0, -1082130432, 0, 0, -1, -1, 0);
				}
				if (func_1285(vLocal_1551[21]) >= 2f)
				{
					if (func_1262(cParam0, "SAD3_CORAWAKE", 0))
					{
						func_135(cParam0, 2);
					}
				}
			}
			else
			{
				func_227(vLocal_1551[21]);
			}
			break;
		case 2:
			if (func_1258(&(uLocal_239[1]), &(iLocal_1784[9]), 1, 0))
			{
				if (!func_1301("SAD3_CORAWAKE"))
				{
					if (func_1262(cParam0, "SAD3_TORIVER", 0))
					{
						func_135(cParam0, -1);
					}
				}
				else
				{
					func_135(cParam0, -1);
				}
			}
			break;
		case 3:
			if (func_1262(cParam0, "SAD3_ATRHD", 0))
			{
				func_135(cParam0, -1);
			}
			break;
		case 4:
			if (func_1262(cParam0, "SAD3_RHDOFFHOR", 0) && func_1262(cParam0, "SAD3_CORGRUMBLE", 0))
			{
				func_135(cParam0, 5);
			}
			break;
		case 5:
			if (!func_1301("SAD3_RHDOFFHOR"))
			{
				func_1265(cParam0, "SAD3_OBJ4b", 0, 7500, 0, -1082130432, 0, 0, -1, -1, 0);
				func_135(cParam0, -1);
			}
			break;
		case 6:
			if (func_1262(cParam0, "SAD3_CORRAGE", 0))
			{
				func_420(&uLocal_1688, 512);
				func_135(cParam0, -1);
			}
			break;
	}
}

int func_1304(char[4] cParam0)
{
	_0xf60165e1d2c5370b(iLocal_250, &uVar5, &fVar4);
	if (iLocal_68 >= 1 && iLocal_68 <= 9)
	{
		if (func_394(iVar1682, 32768))
		{
			disable_control_action(0, 1287709438, false);
			_0xe296208c273bd7f0(-1, -1, 0, 17, 1, 0);
		}
	}
	if (iLocal_68 >= 2 && iLocal_68 <= 8)
	{
		if (func_394(iVar1682, 32768))
		{
			_0x702b75dc9d3ede56(true);
		}
	}
	if (iLocal_68 >= 2 && iLocal_68 <= 12)
	{
		if (is_waypoint_playback_going_on_for_ped(Global_35, 0))
		{
			waypoint_playback_override_speed(Global_35, fVar4, 0, -1082130432, 0);
		}
	}
	switch (iLocal_68)
	{
		case 0:
			prefetch_srl("script@CME@SAD3_CME_RIVER_CROSSING_srl");
			_0xae00387e53b1e9fc();
			if (!func_394(iVar1681, 16384))
			{
				_0x1b3c2d961f5fc0e1("script@Story@SAD3@ride_to_sheriff");
				func_420(&uLocal_1684, 16384);
			}
			iLocal_68 = 1;
			break;
		case 1:
			if (_0xdd0b7c5ae58f721d("script@Story@SAD3@ride_to_sheriff") && is_srl_loaded())
			{
				waypoint_recording_get_closest_waypoint("sad3_painttorhodes", get_entity_coords(Global_35, true, false), &iVar0);
				waypoint_recording_get_coord("sad3_painttorhodes", 26, &vVar1);
				if (func_1250(Global_35, vVar1, 1) <= 10f)
				{
					if (!func_394(iVar1682, 512))
					{
						set_ped_can_be_knocked_off_vehicle(Global_35, 1);
						func_420(&uLocal_1685, 512);
					}
				}
				else if (func_394(iVar1682, 512))
				{
					set_ped_can_be_knocked_off_vehicle(Global_35, 0);
					func_1254(&uLocal_1685, 512);
				}
				if (func_1250(&(uLocal_239[1]), vVar1, 1) <= 10f)
				{
					if (!func_394(iVar1682, 1024))
					{
						set_ped_can_be_knocked_off_vehicle(&(uLocal_239[1]), 1);
						func_420(&uLocal_1685, 1024);
					}
				}
				else if (func_394(iVar1682, 1024))
				{
					set_ped_can_be_knocked_off_vehicle(Global_35, 0);
					func_1254(&uLocal_1685, 1024);
				}
				if (((is_waypoint_playback_going_on_for_ped(&(uLocal_239[1]), 0) && _is_ped_getting_into_a_mount_seat(Global_35, true)) && iVar0 >= 23) && fVar4 >= 1.25f)
				{
					set_player_control(player_id(), false, 0, false);
					if (!func_1259(Global_35, 658540077))
					{
						task_follow_entity_along_waypoint_recording_at_offset(Global_35, &(uLocal_239[1]), "sad3_painttorhodes", -1f, -5f, 0, 4203528, -1, 0);
					}
					if (!func_394(iVar1682, 32768))
					{
						func_420(&uLocal_1685, 32768);
					}
				}
				if (func_394(iVar1682, 32768))
				{
					if (_0xdd0b7c5ae58f721d(&Local_1747))
					{
						if (!func_394(iVar1682, 16384))
						{
							_0xb8b207c34285e978(&Local_1747);
							func_420(&uLocal_1685, 16384);
						}
						else if (!func_26(vLocal_1551[19]))
						{
							func_27(vLocal_1551[19], 0);
						}
						else if (func_913(vLocal_1551[19]) >= 2.5f)
						{
							set_player_control(player_id(), false, 0, false);
							use_waypoint_recording_as_assisted_movement_route("sad3_painttorhodes", 0, 1065353216, 1056964608, 1);
							iLocal_1703 = 1;
							iLocal_68 = 2;
						}
					}
				}
			}
			break;
		case 2:
			if (is_srl_loaded())
			{
				if (!func_1290(Global_35, iLocal_249, 0))
				{
					_set_ped_on_mount(Global_35, iLocal_249, -1, true);
				}
				if (!func_1290(&(uLocal_239[1]), iLocal_250, 0))
				{
					_set_ped_on_mount(&(uLocal_239[1]), iLocal_250, -1, true);
				}
				func_904(iLocal_249, -533.6143f, -118.8476f, 42.95826f, 172.1807f, 34, 1073741824);
				func_904(iLocal_250, -533.5f, -131.2f, 41.1f, 172.1807f, 34, 1073741824);
				_0x0c6b89876262a99d(player_id(), &(uLocal_239[1]));
				task_follow_waypoint_recording(&(uLocal_239[1]), "sad3_painttorhodes", 0, 9224, -1, 0, 0, -1);
				task_follow_waypoint_recording(Global_35, "sad3_painttorhodes", 0, 9224, -1, 0, 0, -1);
				_0x2208438012482a1a(&(uLocal_239[1]), false, false);
				_0x2208438012482a1a(Global_35, false, false);
				if (is_waypoint_playback_going_on_for_ped(&(uLocal_239[1]), 0))
				{
					waypoint_playback_override_speed(&(uLocal_239[1]), 2f, 0, -1082130432, 0);
				}
				_0xbc016635d6a73b31("script@Story@SAD3@ride_to_sheriff", "1_RiverCrossing_1", 5);
				_0x5e3ccf03995388b5(1054559281, -518.6f, -172.3f, 41.4f);
				func_227(vLocal_1551[19]);
				iLocal_68 = 3;
			}
			break;
		case 3:
			waypoint_playback_override_speed(&(uLocal_239[1]), 2f, 0, -1082130432, 0);
			if (iVar1694 < 10)
			{
				iLocal_1697 = iVar1694 + 1;
				return 0;
			}
			if (bVar1700)
			{
				end_srl();
				_0xae00387e53b1e9fc();
				iLocal_1703 = 0;
			}
			if (_0xffe9c53deea3db0b((_0xea113bf9b0c0c5d7("script@Story@SAD3@ride_to_sheriff", "1_RiverCrossing_1", 5) - func_228(vLocal_1551[19])), -463023046, -512.3f, -180.8f, 41.9f, is_srl_loaded(), (_0x465f04f68ad38197("script@Story@SAD3@ride_to_sheriff", "1_RiverCrossing_1", 5) - func_228(vLocal_1551[19]))))
			{
				iLocal_1697 = 0;
				iLocal_68 = 4;
			}
			break;
		case 4:
			if (is_srl_loaded())
			{
				if (!func_1290(Global_35, iLocal_249, 0))
				{
					_set_ped_on_mount(Global_35, iLocal_249, -1, true);
				}
				if (!func_1290(&(uLocal_239[1]), iLocal_250, 0))
				{
					_set_ped_on_mount(&(uLocal_239[1]), iLocal_250, -1, true);
				}
				func_904(iLocal_249, -521.1f, -169.8f, 41.2f, -159.6f, 34, 1073741824);
				func_904(iLocal_250, -518.7f, -182.2f, 41.5f, -159.1f, 34, 1073741824);
				task_follow_waypoint_recording(&(uLocal_239[1]), "sad3_painttorhodes", 0, 9224, -1, 0, 0, -1);
				task_follow_waypoint_recording(Global_35, "sad3_painttorhodes", 0, 9224, -1, 0, 0, -1);
				_0x2208438012482a1a(&(uLocal_239[1]), false, false);
				_0x2208438012482a1a(Global_35, false, false);
				if (is_waypoint_playback_going_on_for_ped(&(uLocal_239[1]), 0))
				{
					waypoint_playback_override_speed(&(uLocal_239[1]), 2f, 0, -1082130432, 0);
				}
				func_227(vLocal_1551[19]);
				func_227(vLocal_1551[34]);
				_0xbc016635d6a73b31("script@Story@SAD3@ride_to_sheriff", "2_RiverCrossing_2", 5);
				iLocal_1703 = 1;
				iLocal_68 = 5;
			}
			break;
		case 5:
			waypoint_playback_override_speed(&(uLocal_239[1]), 2f, 0, -1082130432, 0);
			if (iVar1694 < 10)
			{
				iLocal_1697 = iVar1694 + 1;
				return 0;
			}
			if (bVar1700)
			{
				end_srl();
				iLocal_1703 = 0;
			}
			bVar6 = load_stream("CLOUD_BED", "DEATH_FAIL_RESPAWN_SOUNDS");
			if (func_1285(vLocal_1551[34]) >= 6.5f)
			{
				if (_does_anim_scene_exist(&(Local_72[8])) && !_is_anim_scene_started(&(Local_72[8]), false))
				{
					if (!func_26(vLocal_1551[20]))
					{
						func_27(vLocal_1551[20], 0);
					}
					start_anim_scene(&(Local_72[8]));
					if (bVar6)
					{
						uLocal_1696 = _0x0556c784fa056628("CLOUD_BED", "DEATH_FAIL_RESPAWN_SOUNDS");
						play_stream_frontend(uVar1693);
					}
				}
			}
			if (!func_394(iVar1683, 2048))
			{
				if (_does_anim_scene_exist(&(Local_72[8])) && _is_anim_scene_started(&(Local_72[8]), false))
				{
					if (_get_anim_scene_progress(&(Local_72[8])) >= 0.1733333f)
					{
						clear_ped_tasks_immediately(&(uLocal_239[1]), false, true);
						clear_ped_tasks_immediately(Global_35, false, true);
						func_904(iLocal_249, 1212.469f, -1229.167f, 72.4869f, 252.5258f, 2, 1073741824);
						func_904(iLocal_250, 1221.288f, -1231.882f, 72.4733f, 241.5219f, 2, 1073741824);
						prefetch_srl("script@CME@SAD3_CME_RHODES_srl");
						_0xef1a8a484118735e();
						_0xae00387e53b1e9fc();
						if (!func_1290(Global_35, iLocal_249, 0))
						{
							_set_ped_on_mount(Global_35, iLocal_249, -1, true);
						}
						if (!func_1290(&(uLocal_239[1]), iLocal_250, 0))
						{
							_set_ped_on_mount(&(uLocal_239[1]), iLocal_250, -1, true);
						}
						func_420(&uLocal_1686, 2048);
					}
				}
			}
			if (is_srl_loaded())
			{
				iLocal_1698 = iVar1695 + 1;
			}
			else
			{
				iLocal_1698 = 0;
			}
			if (iVar1695 >= 5)
			{
				bVar7 = true;
			}
			if (_get_anim_scene_progress(&(Local_72[8])) >= 0.7033333f)
			{
				if (!is_srl_loaded())
				{
					if (!is_screen_faded_out() && !is_screen_fading_out())
					{
						do_screen_fade_out(1000);
					}
				}
			}
			if (_0xffe9c53deea3db0b((_0xea113bf9b0c0c5d7("script@Story@SAD3@ride_to_sheriff", "2_RiverCrossing_2", 5) - func_228(vLocal_1551[19])), -1802100233, -512.4f, -182.3f, 42.4f, bVar7, (_0x465f04f68ad38197("script@Story@SAD3@ride_to_sheriff", "2_RiverCrossing_2", 5) - func_228(vLocal_1551[19]))))
			{
				iLocal_1697 = 0;
				iLocal_68 = 6;
			}
			break;
		case 6:
			_0xa54d643d0773eb65("script@Story@SAD3@ride_to_sheriff", "2_RiverCrossing_2", 5);
			func_227(vLocal_1551[19]);
			_0xc1799fafd2fdf52b(&(iLocal_1784[14]), 0, 0, 0);
			func_1271(&(iLocal_1784[14]), 0, 0, 1, 1, 0);
			iLocal_1703 = 1;
			iLocal_68 = 7;
			break;
		case 7:
			if (_0xffe9c53deea3db0b((7400 - func_228(vLocal_1551[20])), 699829578, 1222.3f, -1241.6f, 74.4f, true, (7400 - func_228(vLocal_1551[20]))))
			{
				iLocal_68 = 8;
				stop_stream(uVar1693);
			}
			break;
		case 8:
			if (is_srl_loaded())
			{
				if (((_does_anim_scene_exist(&(Local_72[8])) && _get_anim_scene_progress(&(Local_72[8])) >= 0.9533333f) || (_does_anim_scene_exist(&(Local_72[8])) && !_is_anim_scene_started(&(Local_72[8]), false))) || !_does_anim_scene_exist(&(Local_72[8])))
				{
					if ((is_screen_faded_out() && !is_screen_fading_in()) && !is_screen_faded_in())
					{
						do_screen_fade_in(1000);
					}
				}
				if (is_screen_fading_in() || is_screen_faded_in())
				{
					if (!func_1290(Global_35, iLocal_249, 0))
					{
						_set_ped_on_mount(Global_35, iLocal_249, -1, true);
					}
					if (!func_1290(&(uLocal_239[1]), iLocal_250, 0))
					{
						_set_ped_on_mount(&(uLocal_239[1]), iLocal_250, -1, true);
					}
					set_clock_time(18, 0, 0);
					func_904(iLocal_249, 1212.469f, -1229.167f, 72.4869f, 252.5258f, 34, 1073741824);
					func_904(iLocal_250, 1221.288f, -1231.882f, 72.4733f, 241.5219f, 34, 1073741824);
					task_follow_waypoint_recording(&(uLocal_239[1]), "sad3_painttorhodes", 0, 9224, -1, 0, 0, -1);
					task_follow_waypoint_recording(Global_35, "sad3_painttorhodes", 0, 9224, -1, 0, 0, -1);
					_0x2208438012482a1a(&(uLocal_239[1]), false, false);
					_0x2208438012482a1a(Global_35, false, false);
					if (is_waypoint_playback_going_on_for_ped(&(uLocal_239[1]), 0))
					{
						waypoint_playback_override_speed(&(uLocal_239[1]), 2f, 0, -1082130432, 0);
					}
					func_227(vLocal_1551[19]);
					_0xbc016635d6a73b31("script@Story@SAD3@ride_to_sheriff", "7_Rhodes_1", 5);
					iLocal_1703 = 1;
					iLocal_68 = 9;
				}
			}
			break;
		case 9:
			waypoint_playback_override_speed(&(uLocal_239[1]), 2f, 0, -1082130432, 0);
			if (iVar1694 < 10)
			{
				iLocal_1697 = iVar1694 + 1;
				return 0;
			}
			if (bVar1700)
			{
				end_srl();
				iLocal_1703 = 0;
			}
			if (_0xffe9c53deea3db0b((_0xea113bf9b0c0c5d7("script@Story@SAD3@ride_to_sheriff", "7_Rhodes_1", 5) - func_228(vLocal_1551[19])), 0, 1211.7f, -1227.1f, 84.1f, is_srl_loaded(), (_0x465f04f68ad38197("script@Story@SAD3@ride_to_sheriff", "7_Rhodes_1", 5) - func_228(vLocal_1551[19]))))
			{
				iLocal_1697 = 0;
				iLocal_68 = 12;
			}
			else
			{
				_0x702b75dc9d3ede56(true);
				disable_control_action(0, 1287709438, false);
				_0xe296208c273bd7f0(-1, -1, 0, 17, 1, 0);
			}
			break;
		case 12:
			_0xa54d643d0773eb65("script@Story@SAD3@ride_to_sheriff", "7_Rhodes_1", 5);
			func_99(cParam0, 33554432);
			_0x43037abfe214a851();
			if (_0x927b810e43e99932(&Local_1747))
			{
				_0x0a5a4f1979abb40e(&Local_1747);
			}
			if (_0xdd0b7c5ae58f721d(&Local_1747))
			{
				_0x798be43c9393632b(&Local_1747);
			}
			_0x2412216fcc7b4e3e("script@Story@SAD3@ride_to_sheriff");
			clear_ped_tasks(Global_35, 1, 0);
			set_player_control(player_id(), true, 0, false);
			force_ped_motion_state(iLocal_249, -530524, false, 0, true);
			_0x2208438012482a1a(iLocal_249, true, false);
			simulate_player_input_gait(player_id(), 2f, 1500, 0f, true, false);
			iLocal_68 = 13;
			break;
		case 13:
			waypoint_recording_get_coord("sad3_painttorhodes", 726, &vVar1);
			if (is_waypoint_playback_going_on_for_ped(&(uLocal_239[1]), 0) && func_1250(iLocal_250, vVar1, 1) <= 1.3f)
			{
				clear_sequence_task(&uLocal_1508);
				open_sequence_task(&uLocal_1508);
				task_dismount_animal(0, 262144, 0, 0, 0, 0);
				close_sequence_task(iVar1505);
				task_perform_sequence(&(uLocal_239[1]), iVar1505);
				clear_sequence_task(&uLocal_1508);
				iLocal_68 = 14;
			}
			break;
		case 14:
			set_ped_can_be_knocked_off_vehicle(Global_35, 1);
			set_ped_can_be_knocked_off_vehicle(&(uLocal_239[1]), 1);
			if (func_26(vLocal_1551[19]))
			{
				func_557(vLocal_1551[19]);
			}
			return 1;
	}
	return 0;
}

bool func_1305(char[4] cParam0)
{
	if (!func_185(70, 1) || !does_entity_exist(iLocal_246))
	{
		if (!func_1817(70, 1))
		{
			if (!func_1818(70, 1))
			{
				return false;
			}
		}
		func_1306(70, 1, 0, 0, 0, 0);
		iLocal_246 = func_1819(70, 0, 0, 1, 1, 1);
		return false;
	}
	else
	{
		if (!func_394(iVar1681, 1048576))
		{
			func_420(&uLocal_1684, 1048576);
		}
		set_ped_combat_movement(iLocal_246, 1);
		set_blocking_of_non_temporary_events(iLocal_246, true);
		set_ped_relationship_group_hash(iLocal_246, -1538724068);
		set_entity_only_damaged_by_player(iLocal_246, true);
		if (func_33(cParam0) == 4)
		{
			set_current_ped_weapon(iLocal_246, 379542007, true, 0, false, false);
		}
		else
		{
			set_current_ped_weapon(iLocal_246, -1569615261, true, 0, false, false);
		}
		func_145(cParam0, iLocal_246, "RHD_Sheriff", 0);
		func_151(cParam0, iLocal_246, "U_M_M_RHDSHERIFF_01", 0, 0, 0, 0);
		func_904(iLocal_246, 1363.015f, -1299.165f, 76.7818f, 109.1677f, 2, 1073741824);
	}
	return true;
}

bool func_1306(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	if (!func_441(iParam0))
	{
		return false;
	}
	if (!func_443(func_442(iParam0)))
	{
		return true;
	}
	if (!_0x800df3fc913355f3(func_444(iParam0)))
	{
		func_1818(iParam0, 0);
		return false;
	}
	vVar0 = { iParam2, iParam3, iParam4 };
	if (!func_1817(iParam0, 0))
	{
		if (bParam1)
		{
			if (!func_1820(iParam0))
			{
				return false;
			}
		}
		else
		{
			return false;
		}
	}
	if (!func_399(vVar0))
	{
		_0x59c7ad6fea2ac449(func_444(iParam0), vVar0);
	}
	if (bParam5)
	{
		iVar3 = _0x08fc896d2cb31fcc(func_444(iParam0), 0);
	}
	else
	{
		iVar3 = _0x0cadc3a977997472(func_444(iParam0), 0);
	}
	if (!func_399(vVar0))
	{
		_0xbb68908cd11aebdc(func_444(iParam0));
	}
	if (does_entity_exist(iVar3))
	{
		return true;
	}
	return false;
}

bool func_1307()
{
	bVar0 = false;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (!does_entity_exist(&(Local_264[iVar1])) && !bVar0)
		{
			func_1335(iVar1, 0);
			bVar0 = true;
		}
		if (!_0xa0bc8faed8cfeb3c(&(Local_264[iVar1])))
		{
			return false;
		}
		iVar1++;
	}
	if (!bVar0)
	{
		iVar1 = 0;
		while (iVar1 <= 9)
		{
			if (does_entity_exist(&(Local_264[iVar1])))
			{
				set_entity_visible(&(Local_264[iVar1]), false);
				freeze_entity_position(&(Local_264[iVar1]), true);
				set_entity_completely_disable_collision(&(Local_264[iVar1]), false, false);
				set_ped_config_flag(&(Local_264[iVar1]), 471, true);
				set_ped_config_flag(&(Local_264[iVar1]), 324, true);
			}
			iVar1++;
		}
		iVar2 = 2;
		while (iVar2 <= 4)
		{
			if (does_entity_exist(&(Local_1285[iVar2])))
			{
				set_entity_visible(&(Local_1285[iVar2]), false);
				freeze_entity_position(&(Local_1285[iVar2]), true);
				_0xcac43d060099ea72(&(Local_1285[iVar2]));
				set_entity_completely_disable_collision(&(Local_1285[iVar2]), false, false);
				set_ped_config_flag(&(Local_1285[iVar2]), 471, true);
				set_ped_config_flag(&(Local_1285[iVar2]), 324, true);
			}
			iVar2++;
		}
	}
	return !bVar0;
}

void func_1308(char[4] cParam0)
{
	switch (iLocal_62)
	{
		case 0:
			if (_does_anim_scene_exist(&(Local_72[5])))
			{
				func_1533(cParam0, 5);
			}
			if (_does_anim_scene_exist(&(Local_72[5])))
			{
				func_1533(cParam0, 6);
				iLocal_62 = 4;
			}
			break;
		case 1:
			if (_does_anim_scene_exist(&(Local_72[6])))
			{
				if (_is_anim_scene_started(&(Local_72[6]), false))
				{
					iLocal_62 = 2;
				}
			}
			break;
		case 2:
			if (func_903(Global_35, &(uLocal_239[1]), 1, 1) <= 5f)
			{
				if (func_1316(Global_35, iVar1383))
				{
					func_1395(cParam0, "MultiStart");
					func_420(&uLocal_1684, 4194304);
					iLocal_62 = 6;
				}
			}
			else
			{
				iLocal_62 = 6;
			}
			break;
		case 4:
			if (_does_anim_scene_exist(&(Local_72[5])) && _is_anim_scene_loaded(&(Local_72[5]), true, false))
			{
				if (!_is_anim_scene_started(&(Local_72[5]), false))
				{
					start_anim_scene(&(Local_72[5]));
				}
				else
				{
					iLocal_62 = 3;
				}
			}
			break;
		case 6:
			if (func_1377(&(Local_72[5])))
			{
				if (_does_anim_scene_exist(&(Local_72[5])))
				{
					_delete_anim_scene(&(Local_72[5]));
				}
			}
			if (func_1377(&(Local_72[6])))
			{
				if (_does_anim_scene_exist(&(Local_72[6])))
				{
					_delete_anim_scene(&(Local_72[6]));
				}
			}
			break;
	}
}

void func_1309()
{
	if (func_186(Global_35, 0))
	{
		if (bVar1703)
		{
			if (!is_ped_on_mount(Global_35))
			{
				func_1821(3);
				iLocal_1705 = 0;
			}
		}
		else if (is_ped_on_mount(Global_35))
		{
			iLocal_1705 = 1;
		}
	}
}

void func_1310()
{
	if (!is_ped_on_mount(Global_35))
	{
		if (func_903(Global_35, &(uLocal_239[1]), 1, 1) <= 5f)
		{
			set_ped_max_move_blend_ratio(Global_35, 1f);
		}
		else if (iLocal_62 != 6 && func_1287(&(uLocal_239[1]), Global_35, 0))
		{
			set_ped_max_move_blend_ratio(Global_35, 1f);
		}
		else if (iLocal_62 != 6 && func_903(Global_35, &(uLocal_239[1]), 1, 1) <= 10f)
		{
			set_ped_max_move_blend_ratio(Global_35, 1.5f);
		}
		else if (iLocal_62 != 6 && func_903(Global_35, &(uLocal_239[1]), 1, 1) <= 15f)
		{
			set_ped_max_move_blend_ratio(Global_35, 2f);
		}
	}
}

void func_1311(int iParam0, float fParam1, int iParam2, int iParam3, bool bParam4, float fParam5, float fParam6, float fParam7, int iParam8, int iParam9, bool bParam10, int iParam11, int iParam12, int iParam13)
{
	if (does_entity_exist(iParam0))
	{
		if (!is_ped_injured(iParam0))
		{
			if (is_waypoint_playback_going_on_for_ped(iParam0, 0))
			{
				if (bParam4)
				{
					waypoint_playback_override_speed(iParam0, fParam1, iParam2, iParam3, 0);
				}
				set_enable_speed_restrain_for_waypoint_recording_leader(iParam0, 1);
				set_up_speed_restrain_information_for_player_follower(iParam0, fParam5, fParam6, fParam7, iParam8, iParam9, iParam11, iParam12, iParam13);
			}
		}
	}
	if (bParam10)
	{
		if (is_ped_on_mount(player_ped_id()))
		{
			disable_control_action(0, 440314811, false);
			disable_control_action(0, -1292666904, false);
			disable_control_action(0, 2028806450, false);
			disable_control_action(0, 371916472, false);
		}
	}
}

void func_1312(char[4] cParam0, int iParam1, bool bParam2)
{
	if (is_entity_dead(iParam1))
	{
		return;
	}
	bVar0 = (is_entity_a_ped(iParam1) && func_1807(get_ped_index_from_entity_index(iParam1)));
	if (bVar0)
	{
		iVar1 = func_1808(get_ped_index_from_entity_index(iParam1));
	}
	if (is_entity_a_ped(iParam1))
	{
		iVar2 = get_ped_index_from_entity_index(iParam1);
		if (bVar0)
		{
			func_471(iVar1);
			if (does_blip_exist(get_blip_from_entity(iVar2)))
			{
				_set_blip_flash_style(get_blip_from_entity(iVar2), -546708623);
				_set_blip_flash_style(get_blip_from_entity(iVar2), 231194138);
			}
		}
		else if (func_1806(cParam0, iParam1) && does_blip_exist(get_blip_from_entity(iParam1)))
		{
			_set_blip_flash_style(get_blip_from_entity(iParam1), -546708623);
			_set_blip_flash_style(get_blip_from_entity(iParam1), 231194138);
		}
		else
		{
			func_1822(iParam1);
		}
	}
	if (func_1806(cParam0, iParam1))
	{
		func_1823(cParam0, iParam1, 1024);
		if (bParam2)
		{
			func_1274(cParam0, iParam1, 128);
		}
		else
		{
			func_1823(cParam0, iParam1, 128);
		}
		if (func_988(cParam0, iParam1, &iVar3))
		{
			func_1553(cParam0->f_5423[iVar3]);
		}
	}
	if (bVar0)
	{
		set_this_script_can_remove_blips_created_by_any_script(true);
		func_1810(iVar1);
	}
}

void func_1313(char[4] cParam0, int iParam1)
{
	if (!_does_anim_scene_exist(iParam1))
	{
		return;
	}
	if (_is_anim_scene_loading(iParam1, true))
	{
		return;
	}
	if (_is_anim_scene_loaded(iParam1, true, false))
	{
		return;
	}
	iVar0 = func_860(&(cParam0->f_1126), iParam1);
	if (iVar0 == -1)
	{
		return;
	}
	if (!func_856(cParam0->f_1126[iVar0]->f_3, func_33(cParam0)))
	{
		return;
	}
	cParam0->f_1126[iVar0]->f_66 = 1;
}

void func_1314(int* iParam0)
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

void func_1315(int iParam0, vector3 vParam1, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, int iParam10, bool bParam11, int iParam12)
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
	if (func_1824(vParam1, 0f, 0f, 0f))
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
	bVar3 = func_1250(iParam0, vParam1, 1);
	if ((bVar3 <= bParam5 && bVar3 > bParam6) && bVar3 > bParam7)
	{
		if (does_entity_exist(iVar0) && !is_entity_dead(iVar0))
		{
			set_ped_max_move_blend_ratio(iVar0, 1.75f);
		}
		if ((func_1825() && !is_entity_dead(iVar1)) && _is_draft_vehicle(iVar1))
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
			if (!is_entity_dead(iVar0) && !func_1772(iParam0, 501393341))
			{
				task_dismount_animal(iParam0, iParam12, 0, 0, 0, 0);
			}
			if (!is_entity_dead(iVar1) && !func_1772(iParam0, -828834893))
			{
				task_leave_any_vehicle(iParam0, 0, iParam12);
			}
		}
	}
}

bool func_1316(int iParam0, int iParam1)
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

int func_1317(int iParam0, int iParam1, int iParam2, bool bParam3)
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

bool func_1318(char[4] cParam0, bool bParam1)
{
	func_908(cParam0);
	if (((bParam1 && func_1826(&(cParam0->f_10792)) != 11) && !func_1496(&(cParam0->f_10792), 131072)) && !func_1496(&(cParam0->f_10792), 32768))
	{
		return false;
	}
	return func_1827(&(cParam0->f_10792));
}

void func_1319(char* sParam0, bool bParam1, bool bParam2)
{
	func_1828(sParam0, bParam1, bParam2);
}

void func_1320(char[4] cParam0, int iParam1)
{
	Var0 = { func_1829(&(cParam0->f_7375)) };
	if ((((func_1496(&(cParam0->f_10792), 32768) && _does_anim_scene_exist(cParam0->f_7375.f_804)) && _is_anim_scene_loaded(cParam0->f_7375.f_804, true, false)) && _0xa9016536015de29d(cParam0->f_7375.f_804, &Var0)) && _0x23e33cb9f4a3f547(cParam0->f_7375.f_804, &Var0))
	{
		func_1395(cParam0, &Var0);
		func_1830(cParam0);
	}
	else
	{
		if (iParam1 == 1 && func_120(cParam0, 16384))
		{
			func_1831(&(cParam0->f_10792), Global_43805);
			func_753(&(cParam0->f_10792), 8);
		}
		func_246(&(cParam0->f_10792), iParam1);
		func_908(cParam0);
		func_99(cParam0, 2097152);
	}
}

struct<4> func_1321(int iParam0, int iParam1)
{
	return func_1832(iParam0, iParam1);
}

void func_1322(int iParam0, struct<4> Param1, int iParam5, float fParam6)
{
	func_904(iParam0, Param1, Param1.f_3, iParam5, fParam6);
}

void func_1323(int iParam0)
{
	func_189();
	switch (iParam0)
	{
		case 0:
			iLocal_1777[0] = add_cover_point(701.4022f, -530.3133f, 70.2596f, 324.1019f, 3, 2, 3, false);
			iLocal_1777[2] = add_cover_point(697.4718f, -530.1913f, 69.9705f, 139.1128f, 3, 2, 3, false);
			iLocal_1777[1] = add_cover_point(func_1532(1, 8), func_1797(1, 8), 3, 2, 1, false);
			break;
		case 1:
			iLocal_1777[3] = add_cover_point(func_1532(6, 0), func_1797(6, 0), 3, 0, 1, true);
			break;
		case 5:
			iLocal_1777[4] = add_cover_point(func_1532(1, 6), func_1797(1, 6), 3, 2, 1, true);
			iLocal_1777[5] = add_cover_point(func_1532(1, 7), func_1797(1, 7), 3, 2, 1, false);
			break;
	}
}

void func_1324(char[4] cParam0, char[4] cParam1)
{
	func_1833(&(cParam0->f_7375), cParam1);
	func_383(cParam0, 33554432);
}

void func_1325(char[4] cParam0, int iParam1, bool bParam2)
{
	if (is_entity_dead(iParam1))
	{
		return;
	}
	if (!func_988(cParam0, iParam1, &iVar0))
	{
		return;
	}
	if (bParam2)
	{
		func_1834(cParam0->f_5423[iVar0], 256);
	}
	else
	{
		func_1791(cParam0->f_5423[iVar0], 256);
	}
	func_1835(cParam0->f_5423[iVar0], bParam2);
}

void func_1326(char[4] cParam0)
{
	if (iVar1705 == 1 && func_1258(Global_35, &(iLocal_1784[28]), 1, 0))
	{
		if (!func_26(vLocal_1551[37]))
		{
			func_27(vLocal_1551[37], 0);
		}
		else if (func_1285(vLocal_1551[37]) >= 10f)
		{
			if (!func_1298())
			{
				if (func_1262(cParam0, "SAD3_CHECKONCOR", 0))
				{
					func_227(vLocal_1551[37]);
				}
			}
		}
	}
	if (func_1248(cParam0) >= 1)
	{
		if (!func_26(vLocal_1551[38]))
		{
			func_27(vLocal_1551[38], 0);
		}
		else if (func_1349(0, 9) >= 1)
		{
			if (!_0x54b187f111d9c6f8(&(uLocal_239[1]), 1))
			{
				if (func_1285(vLocal_1551[38]) >= 7f)
				{
					if (func_1262(cParam0, "SAD3_BU_SADIE", 0))
					{
						func_227(vLocal_1551[38]);
					}
				}
			}
			else
			{
				func_227(vLocal_1551[38]);
			}
		}
	}
	switch (func_1297(cParam0))
	{
		case 0:
			func_1264(cParam0, "SAD3_OBJ5a", -1082130432, 0, 0, -1, -1, 0);
			func_1799(vLocal_1551[21], 7f, 0);
			func_135(cParam0, 1);
			break;
		case 1:
			if (func_1262(cParam0, "SAD3_SADIESHIT", 0))
			{
				func_135(cParam0, 2);
			}
			break;
		case 2:
			if (!func_1301("SAD3_SADIESHIT"))
			{
				func_135(cParam0, 3);
			}
			break;
		case 3:
			if (iVar1688 <= 5)
			{
				if (func_913(vLocal_1551[21]) >= 10f)
				{
					if (func_1262(cParam0, "SAD3_SHRF_STO", 0))
					{
						uLocal_1691 = iVar1688 + 1;
						func_227(vLocal_1551[21]);
					}
				}
			}
			break;
		case 4:
			if (func_1262(cParam0, "SAD3_RH_SHOT", 0))
			{
				func_227(vLocal_1551[21]);
				func_135(cParam0, -1);
				func_1264(cParam0, "SAD3_OBJ5B", -1082130432, 0, 0, -1, -1, 0);
			}
			break;
		case 5:
			if (!func_1301("SAD3_RH_SHOT") && !func_1301("SAD3_RH_SHOT1"))
			{
				if (func_1285(vLocal_1551[21]) >= 2f)
				{
					if (func_1262(cParam0, "SAD3_RH_SHOT2", 0))
					{
						func_135(cParam0, -1);
					}
				}
			}
			else
			{
				func_227(vLocal_1551[21]);
			}
			break;
		case 6:
			if (func_1262(cParam0, "SAD3_BU_LAST", 0))
			{
				func_135(cParam0, -1);
			}
			break;
	}
}

void func_1327(char[4] cParam0)
{
	vVar0 = { 1353.538f, -1312.674f, 76.2426f };
	vVar3 = { 1317.661f, -1297.318f, 75.26112f };
	switch (iVar1829)
	{
		case 0:
			vLocal_1895.f_1 = 3;
			vLocal_1895.x = &uLocal_239[1];
			vLocal_1895.f_2 = { 1358.532f, -1307.764f, 76.72623f };
			func_1293(&iLocal_1832, 20);
			break;
		case 20:
			if (is_collision_marked_outside(func_1334(player_id())))
			{
				if (is_ped_in_cover(&(uLocal_239[1]), 0, 0))
				{
					task_exit_cover(&vLocal_1895);
				}
				_0xfc3db99c8144cd81(&(uLocal_239[1]), &(iLocal_1784[16]), 1, 0, 0);
				_0xfc3db99c8144cd81(&(uLocal_239[1]), &(iLocal_1784[17]), 1, 1, 0);
				_0x4ec4ea2f72b36358(&(uLocal_239[1]), 1);
				func_1293(&iLocal_1832, 15);
			}
			break;
		case 15:
			if (!func_394(iVar1682, 128))
			{
				if (!func_1259(&(uLocal_239[1]), 1318460802))
				{
					if (!func_1259(&(uLocal_239[1]), -1442466670))
					{
						task_combat_hated_targets_around_ped(&(uLocal_239[1]), 200f, 0, 0);
						func_420(&uLocal_1685, 128);
					}
				}
			}
			break;
		case 16:
			remove_ped_defensive_area(&(uLocal_239[1]), false);
			remove_ped_defensive_area(&(uLocal_239[1]), true);
			set_ped_combat_movement(&(uLocal_239[1]), 2);
			if (!func_1259(&(uLocal_239[1]), 1318460802))
			{
				clear_sequence_task(&uLocal_1508);
				open_sequence_task(&uLocal_1508);
				set_ped_sphere_defensive_area(&(uLocal_239[1]), vVar0, 1f, 1, 0, 0);
				task_go_to_coord_and_aim_at_hated_entities_near_coord(0, vVar0, vVar0, 2f, true, 0.5f, 2f, true, 0, 0, -687903391);
				close_sequence_task(iVar1505);
				task_perform_sequence(&(uLocal_239[1]), iVar1505);
				clear_sequence_task(&uLocal_1508);
				func_1293(&iLocal_1832, 21);
			}
			break;
		case 21:
			if (func_1250(&(uLocal_239[1]), vVar0, 1) <= 1f || !func_1259(&(uLocal_239[1]), 242628503))
			{
				if (!func_1259(&(uLocal_239[1]), -1442466670))
				{
					task_combat_hated_targets_around_ped(&(uLocal_239[1]), 200f, 0, 66);
					if (!func_26(vLocal_1551[26]))
					{
						func_27(vLocal_1551[26], 0);
					}
					func_1293(&iLocal_1832, 17);
				}
			}
			break;
		case 17:
			if (!func_1259(&(uLocal_239[1]), -1442466670))
			{
				task_combat_hated_targets_around_ped(&(uLocal_239[1]), 200f, 0, 66);
			}
			if (func_26(vLocal_1551[26]))
			{
				if (func_913(vLocal_1551[26]) >= 0f)
				{
					remove_ped_defensive_area(&(uLocal_239[1]), false);
					_0x4ec4ea2f72b36358(&(uLocal_239[1]), 1);
					_0xfc3db99c8144cd81(&(uLocal_239[1]), &(iLocal_1784[18]), 1, 0, 0);
					_0xfc3db99c8144cd81(&(uLocal_239[1]), &(iLocal_1784[19]), 0, 1, 0);
					func_557(vLocal_1551[26]);
				}
			}
			if (func_1258(&(uLocal_239[1]), &(iLocal_1784[18]), 1, 0) || func_1258(&(uLocal_239[1]), &(iLocal_1784[19]), 1, 0))
			{
				if (!func_26(vLocal_1551[26]))
				{
					func_27(vLocal_1551[26], 0);
					func_1293(&iLocal_1832, 22);
				}
			}
			break;
		case 22:
			if (!func_1259(&(uLocal_239[1]), -1442466670))
			{
				task_combat_hated_targets_around_ped(&(uLocal_239[1]), 200f, 0, 66);
			}
			if (func_26(vLocal_1551[26]))
			{
				if (!func_186(&(Local_264[7]), 3) && func_913(vLocal_1551[26]) >= 3f)
				{
					remove_ped_defensive_area(&(uLocal_239[1]), false);
					_0xfc3db99c8144cd81(&(uLocal_239[1]), &(iLocal_1784[20]), 1, 0, 0);
					_0xfc3db99c8144cd81(&(uLocal_239[1]), &(iLocal_1784[21]), 0, 1, 0);
					if (!func_394(iVar1685, 16))
					{
						if (func_1262(cParam0, "SAD3_RH_SHOT1", 0))
						{
							func_420(&uLocal_1688, 16);
						}
					}
				}
				if (func_913(vLocal_1551[26]) >= 6f && func_186(&(Local_264[7]), 1))
				{
					set_ped_reset_flag(&(Local_264[7]), 163, true);
					if (_0xcc2b20596e29e4e3(&(Local_264[7]), 0))
					{
						set_ped_combat_attributes(&(Local_264[7]), 0, false);
					}
					if (!get_ped_config_flag(&(Local_264[7]), 138, true) || _0xdc9273d95976ba22(&(Local_264[7])) != 10f)
					{
						func_1836(&(Local_264[7]), 1);
						_0xc2266aa617668ad3(&(Local_264[7]), 100f);
						_0xd05ad61f242c626b(&(Local_264[7]), 100f);
					}
				}
			}
			break;
		case 18:
			if (!func_1259(&(uLocal_239[1]), -1442466670))
			{
				task_combat_hated_targets_around_ped(&(uLocal_239[1]), 200f, 0, 66);
			}
			remove_ped_defensive_area(&(uLocal_239[1]), false);
			_0xfc3db99c8144cd81(&(uLocal_239[1]), &(iLocal_1784[22]), 1, 0, 0);
			_0xfc3db99c8144cd81(&(uLocal_239[1]), &(iLocal_1784[23]), 0, 1, 0);
			func_135(cParam0, 5);
			func_1293(&iLocal_1832, 23);
			break;
		case 23:
			if (func_903(Global_35, &(uLocal_239[1]), 1, 1) >= 20f)
			{
				if (!func_26(vLocal_1551[33]))
				{
					func_27(vLocal_1551[33], 0);
				}
				else
				{
					if (!func_394(iVar1682, 4096))
					{
						if (func_913(vLocal_1551[33]) >= 5f)
						{
							if (func_1262(cParam0, "SAD3_NEEDBACKUP", 0))
							{
								func_420(&uLocal_1685, 4096);
							}
						}
					}
					if (func_913(vLocal_1551[33]) >= 10f)
					{
						if (_0xcc2b20596e29e4e3(&(uLocal_239[1]), 0))
						{
							set_ped_combat_attributes(&(uLocal_239[1]), 0, false);
						}
						if (!func_394(iVar1682, 8192))
						{
							func_420(&uLocal_1685, 8192);
							func_1333(cParam0, &(uLocal_239[1]), 1, 1);
						}
					}
				}
			}
			else
			{
				func_1333(cParam0, &(uLocal_239[1]), 0, 1);
				if (func_394(iVar1682, 8192))
				{
					func_1254(&uLocal_1685, 8192);
				}
				if (!func_26(vLocal_1551[33]))
				{
					func_557(vLocal_1551[33]);
				}
			}
			break;
		case 19:
			if (!func_1259(&(uLocal_239[1]), 242628503))
			{
				clear_sequence_task(&uLocal_1508);
				open_sequence_task(&uLocal_1508);
				set_ped_sphere_defensive_area(&(uLocal_239[1]), vVar3, 1f, 1, 0, 0);
				task_go_to_coord_and_aim_at_hated_entities_near_coord(0, vVar3, vVar3, 2f, true, 0.5f, 2f, true, 0, 0, -687903391);
				task_combat_hated_targets_around_ped(0, 200f, 0, 0);
				close_sequence_task(iVar1505);
				task_perform_sequence(&(uLocal_239[1]), iVar1505);
				clear_sequence_task(&uLocal_1508);
				func_1293(&iLocal_1832, 24);
			}
			break;
		case 24:
			break;
	}
}

void func_1328()
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (iVar0 != 0)
		{
			if (func_186(&(Local_1285[iVar0]), 0))
			{
				switch (Local_1285[iVar0]->f_2)
				{
					case 0:
						if (!func_186(_get_rider_of_mount(&(Local_1285[iVar0]), true), 0) || !func_1290(_get_rider_of_mount(&(Local_1285[iVar0]), false), &(Local_1285[iVar0]), 0))
						{
							func_227(&(Local_1285[iVar0]->f_4));
							Local_1285[iVar0]->f_2++;
						}
						break;
					case 1:
						if (func_913(&(Local_1285[iVar0]->f_4)) >= 2f)
						{
							task_animal_flee(&(Local_1285[iVar0]), Global_35, -1);
							set_ped_as_no_longer_needed(Local_1285[iVar0]);
							Local_1285[iVar0]->f_2++;
						}
						break;
				}
			}
		}
		iVar0++;
	}
}

void func_1329(char[4] cParam0)
{
	if (func_1349(0, 9) <= 0)
	{
		iLocal_1708 = 8;
	}
	if (iVar1705 != 8)
	{
		iVar0 = 6;
		while (iVar0 <= 9)
		{
			if (func_186(&(Local_264[iVar0]), 0) && is_tracked_ped_visible(&(Local_264[iVar0])))
			{
				if (!func_1259(&(Local_264[iVar0]), -2117564886) && !func_1259(&(Local_264[iVar0]), 242628503))
				{
					task_combat_hated_targets(&(Local_264[iVar0]), -1f);
				}
			}
			iVar0++;
		}
	}
	switch (iVar1705)
	{
		case 0:
			if ((func_1347(&Global_35) || func_1347(uLocal_239[1])) || is_collision_marked_outside(func_1334(player_id())))
			{
				iVar0 = 0;
				while (iVar0 <= 5)
				{
					set_ped_combat_movement(&(Local_264[iVar0]), 1);
					_0x8acc0506743a8a5c(&(Local_264[iVar0]), 1819659395, 1, -1082130432);
					if (iVar0 == 1)
					{
						set_ped_sphere_defensive_area(&(Local_264[iVar0]), 1353.889f, -1322.286f, 76.19059f, 0.75f, 1, 0, 0);
					}
					if (iVar0 == 2)
					{
						set_ped_sphere_defensive_area(&(Local_264[iVar0]), _get_object_offset_from_coords(func_1532(1, 1), func_1797(1, 1), 0f, -1f, 0.5f), 0.75f, 0, 0, 0);
					}
					if (iVar0 == 3)
					{
						set_ped_sphere_defensive_area(&(Local_264[iVar0]), _get_object_offset_from_coords(func_1532(1, 0), func_1797(1, 0), 0f, -1f, 0.5f), 0.75f, 0, 0, 0);
					}
					iVar0++;
				}
			}
			if (func_1349(0, 5) <= 4)
			{
				iVar0 = 0;
				while (iVar0 <= 7)
				{
					if (func_186(&(Local_264[iVar0]), 0))
					{
						set_ped_combat_movement(&(Local_264[iVar0]), 1);
						if (iVar0 == 6 || iVar0 == 7)
						{
							if (!func_1259(&(Local_264[iVar0]), -2117564886))
							{
								register_target(iLocal_246, &(Local_264[iVar0]), 1);
								task_combat_hated_targets(&(Local_264[iVar0]), -1f);
								_set_blip_flash_style(&(iLocal_1453[iVar0]), -1034486097);
							}
						}
						else
						{
							_set_blip_flash_style(&(iLocal_1453[iVar0]), -1034486097);
							clear_sequence_task(&uLocal_1508);
							open_sequence_task(&uLocal_1508);
							task_go_to_coord_and_aim_at_hated_entities_near_coord(0, Local_264[iVar0]->f_13, get_entity_coords(Global_35, true, false), 2f, true, 0.5f, 4f, true, 0, 0, -687903391);
							close_sequence_task(iVar1505);
							_task_perform_sequence_2(&(Local_264[iVar0]), iVar1505, 0f, 2f);
							clear_sequence_task(&uLocal_1508);
						}
					}
					iVar0++;
				}
				if (func_26(vLocal_1551[31]))
				{
					if (func_913(vLocal_1551[31]) <= 30f)
					{
						func_1837(cParam0, 1567839258);
					}
					func_557(vLocal_1551[31]);
				}
				iLocal_1708 = 1;
			}
			break;
		case 1:
			if (func_1349(0, 5) <= 0)
			{
				bVar1 = true;
			}
			bVar1 = true;
			iVar0 = 0;
			while (iVar0 <= 5)
			{
				if (func_186(&(Local_264[iVar0]), 3))
				{
					if (func_1250(&(Local_264[iVar0]), Local_264[iVar0]->f_13, 1) <= 2f)
					{
						if (!func_1259(&(Local_264[iVar0]), -2117564886))
						{
							set_ped_sphere_defensive_area(&(Local_264[iVar0]), get_entity_coords(&(Local_264[iVar0]), true, false), 5f, 0, 0, 0);
							task_combat_hated_targets(&(Local_264[iVar0]), -1f);
						}
					}
					else
					{
						bVar1 = false;
					}
				}
				iVar0++;
			}
			if (bVar1)
			{
				bVar1 = false;
				iLocal_1708 = 2;
			}
			break;
		case 2:
			iVar0 = 0;
			while (iVar0 <= 5)
			{
				if (func_186(&(Local_264[iVar0]), 0))
				{
					if (!func_1259(&(Local_264[iVar0]), -2117564886))
					{
						set_ped_sphere_defensive_area(&(Local_264[iVar0]), get_entity_coords(&(Local_264[iVar0]), true, false), 5f, 0, 0, 0);
						task_combat_hated_targets(&(Local_264[iVar0]), -1f);
					}
				}
				iVar0++;
			}
			iLocal_1708 = 3;
			break;
		case 3:
			if (func_1349(0, 7) <= 3)
			{
				iVar0 = 0;
				while (iVar0 <= 9)
				{
					if (func_186(&(Local_264[iVar0]), 0))
					{
						set_ped_combat_movement(&(Local_264[iVar0]), 1);
						if (iVar0 == 8 || iVar0 == 9)
						{
							if (!func_1259(&(Local_264[iVar0]), -2117564886))
							{
								_set_blip_flash_style(&(iLocal_1453[iVar0]), -1034486097);
								task_combat_hated_targets(&(Local_264[iVar0]), -1f);
							}
						}
						else
						{
							clear_sequence_task(&uLocal_1508);
							open_sequence_task(&uLocal_1508);
							task_go_to_coord_and_aim_at_hated_entities_near_coord(0, Local_264[iVar0]->f_16, get_entity_coords(Global_35, true, false), 2f, true, 0.5f, 4f, true, 0, 0, -687903391);
							close_sequence_task(iVar1505);
							_task_perform_sequence_2(&(Local_264[iVar0]), iVar1505, 0f, 1.5f);
							clear_sequence_task(&uLocal_1508);
						}
					}
					iVar0++;
				}
				func_1293(&iLocal_1832, 18);
				iLocal_1708 = 4;
			}
			break;
		case 4:
			if (func_1349(0, 7) <= 0)
			{
				bVar1 = true;
			}
			bVar1 = true;
			iVar0 = 0;
			while (iVar0 <= 7)
			{
				if (func_186(&(Local_264[iVar0]), 3))
				{
					if (func_1250(&(Local_264[iVar0]), Local_264[iVar0]->f_16, 1) <= 5f)
					{
						if (!func_1259(&(Local_264[iVar0]), -2117564886))
						{
							set_ped_sphere_defensive_area(&(Local_264[iVar0]), get_entity_coords(&(Local_264[iVar0]), true, false), 5f, 0, 0, 0);
							task_combat_hated_targets(&(Local_264[iVar0]), -1f);
						}
					}
					else
					{
						bVar1 = false;
					}
				}
				iVar0++;
			}
			if (bVar1)
			{
				iLocal_1708 = 5;
			}
			break;
		case 5:
			iVar0 = 0;
			while (iVar0 <= 7)
			{
				if (func_186(&(Local_264[iVar0]), 0))
				{
					if (!func_1259(&(Local_264[iVar0]), -2117564886))
					{
						set_ped_sphere_defensive_area(&(Local_264[iVar0]), get_entity_coords(&(Local_264[iVar0]), true, false), 7f, 0, 0, 0);
						task_combat_hated_targets(&(Local_264[iVar0]), -1f);
					}
				}
				iVar0++;
			}
			iLocal_1708 = 6;
			break;
		case 6:
			if (func_1097(&(uLocal_239[1]), 0, 1, 0) == 2077870112)
			{
				set_current_ped_weapon(&(uLocal_239[1]), 392538360, false, 0, false, false);
				task_swap_weapon(&(uLocal_239[1]), 1, 1, 0, 0);
				set_ped_config_flag(&(uLocal_239[1]), 249, true);
			}
			if (func_1349(0, 9) <= 1)
			{
				iVar0 = 0;
				while (iVar0 <= 9)
				{
					if (func_186(&(Local_264[iVar0]), 0))
					{
						if (!func_1259(&(Local_264[iVar0]), 518218985))
						{
							task_smart_flee_ped(&(Local_264[iVar0]), Global_35, -1f, -1, 0, 1077936128, 0);
						}
					}
					iVar0++;
				}
				iLocal_1708 = 8;
			}
			break;
	}
}

int func_1330()
{
	switch (iLocal_71)
	{
		case 0:
			if (!does_rayfire_map_object_exist(iVar1828))
			{
				iLocal_1830 = get_rayfire_map_object(1353.486f, -1302.814f, 76.75661f, 100f, "des_rho_sheriff");
			}
			if (get_state_of_rayfire_map_object(iVar1828) != 4 && get_state_of_rayfire_map_object(iVar1828) != 5)
			{
				set_state_of_rayfire_map_object(iVar1828, 4);
			}
			iLocal_71 = 1;
			break;
		case 1:
			if (get_state_of_rayfire_map_object(iVar1828) == 5)
			{
				iLocal_71 = 2;
			}
			break;
		case 2:
			break;
		case 3:
			return 1;
	}
	return 0;
}

void func_1331(char[4] cParam0, int iParam1, var uParam2, int iParam3)
{
	func_27(vLocal_1551[23], 0);
	if (func_1285(vLocal_1551[23]) > fVar1693)
	{
		iVar0 = func_1838(uParam2);
		if (iVar0 >= 0)
		{
			if (func_1839(iParam1, &iVar1, get_entity_coords(Global_35, true, false), iParam3))
			{
				if (does_entity_exist(uParam2[iVar0]))
				{
					func_1840(cParam0, uParam2[iVar0]);
				}
				func_145(cParam0, iVar1, (*uParam2)[iVar0]->f_2, 0);
				(*uParam2)[iVar0] = iVar1;
				if (func_1262(cParam0, (*uParam2)[iVar0]->f_1, 0))
				{
					func_557(vLocal_1551[23]);
					func_1517();
					(*uParam2)[iVar0]->f_4++;
				}
			}
		}
	}
}

bool func_1332(int iParam0, float fParam1)
{
	if ((((((!is_player_dead(player_id()) && is_player_playing(player_id())) && !is_player_free_aiming(player_id())) && !is_player_targetting_anything(player_id())) && !is_ped_aiming_from_cover(Global_35)) && !is_ped_shooting(Global_35)) && !is_ped_reloading(Global_35))
	{
		if (!func_26(iParam0))
		{
			func_227(iParam0);
		}
		else if (func_1285(iParam0) >= fParam1)
		{
			return true;
		}
		else if (((fParam1 > 15f && func_1841(Global_35)) && is_ped_human(get_ped_index_from_entity_index(func_1842(Global_35)))) && func_1285(iParam0) < (fParam1 - 15f))
		{
			func_508(iParam0, (fParam1 - 15f));
		}
	}
	else if (func_26(iParam0))
	{
		func_557(iParam0);
	}
	return false;
}

void func_1333(char[4] cParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!does_entity_exist(iParam1) || is_entity_dead(iParam1))
	{
		return;
	}
	func_1843(iParam1, bParam2);
	if (bParam3 && func_988(cParam0, iParam1, &uVar0))
	{
		if (bParam2)
		{
			if (!func_1844(cParam0, iParam1, 32))
			{
				func_1274(cParam0, iParam1, 32);
			}
		}
		else if (func_1844(cParam0, iParam1, 32))
		{
			func_1823(cParam0, iParam1, 32);
		}
	}
}

Vector3 func_1334(int iParam0)
{
	return get_entity_coords(get_player_ped(iParam0), false, false);
}

bool func_1335(int iParam0, bool bParam1)
{
	if (!does_entity_exist(&(Local_264[iParam0])))
	{
		fVar3 = 2f;
		bVar7 = false;
		bVar8 = true;
		bVar9 = false;
		bVar10 = false;
		bVar11 = false;
		bVar12 = true;
		bVar13 = true;
		bVar14 = false;
		bVar15 = true;
		bVar16 = false;
		bVar17 = false;
		bVar18 = true;
		bVar19 = false;
		bVar20 = true;
		bVar21 = true;
		bVar22 = false;
		iVar23 = 0;
		bVar24 = true;
		bVar25 = true;
		bVar26 = false;
		bVar27 = false;
		bVar28 = false;
		bVar29 = false;
		bVar30 = false;
		bVar31 = false;
		bVar34 = false;
		bVar35 = false;
		bVar36 = true;
		bVar39 = false;
		fVar43 = 1f;
		fVar44 = 125f;
		iVar45 = -1;
		iVar46 = 0;
		iVar49 = 0;
		iVar50 = 0;
		iVar51 = -1;
		if (bVar32)
		{
		}
		if (bVar33)
		{
		}
		switch (iParam0)
		{
			case 0:
				vVar0 = { func_1532(0, 0) };
				Local_264[iParam0]->f_10 = { func_1532(0, 0) };
				Local_264[iParam0]->f_13 = { func_1532(5, 0) };
				Local_264[iParam0]->f_16 = { func_1532(7, 0) };
				fVar4 = func_1797(0, 0);
				iVar48 = iLocal_16;
				iVar51 = 2;
				iVar47 = 1406052049;
				bVar9 = true;
				bParam1 = true;
				break;
			case 1:
				vVar0 = { func_1532(0, 1) };
				Local_264[iParam0]->f_10 = { func_1532(0, 1) };
				Local_264[iParam0]->f_13 = { func_1532(5, 1) };
				Local_264[iParam0]->f_16 = { func_1532(7, 1) };
				fVar4 = func_1797(0, 1);
				iVar48 = iLocal_16;
				iVar51 = 3;
				iVar47 = -1386325513;
				bVar9 = true;
				bParam1 = true;
				break;
			case 2:
				vVar0 = { func_1532(0, 2) };
				Local_264[iParam0]->f_10 = { func_1532(0, 2) };
				Local_264[iParam0]->f_13 = { func_1532(5, 2) };
				Local_264[iParam0]->f_16 = { func_1532(7, 2) };
				fVar4 = func_1797(0, 2);
				iVar48 = iLocal_16;
				iVar51 = 4;
				iVar47 = -1155172987;
				bVar9 = true;
				bParam1 = true;
				bVar37 = true;
				break;
			case 3:
				vVar0 = { func_1532(0, 3) };
				Local_264[iParam0]->f_10 = { func_1532(0, 3) };
				Local_264[iParam0]->f_13 = { func_1532(5, 3) };
				Local_264[iParam0]->f_16 = { func_1532(7, 3) };
				fVar4 = func_1797(0, 3);
				iVar48 = iLocal_16;
				iVar47 = -900000784;
				bVar9 = true;
				bParam1 = true;
				bVar37 = true;
				break;
			case 4:
				vVar0 = { func_1532(0, 4) };
				Local_264[iParam0]->f_10 = { func_1532(0, 4) };
				Local_264[iParam0]->f_13 = { func_1532(5, 4) };
				Local_264[iParam0]->f_16 = { func_1532(7, 4) };
				fVar4 = func_1797(0, 4);
				iVar48 = iLocal_16;
				iVar47 = -425505664;
				bVar9 = true;
				bParam1 = true;
				break;
			case 5:
				vVar0 = { func_1532(0, 5) };
				fVar4 = func_1797(0, 5);
				Local_264[iParam0]->f_10 = { func_1532(0, 5) };
				Local_264[iParam0]->f_13 = { func_1532(5, 5) };
				Local_264[iParam0]->f_16 = { func_1532(7, 5) };
				iVar48 = iLocal_16;
				iVar46 = 3;
				bVar9 = true;
				bParam1 = true;
				break;
			case 6:
				vVar0 = { func_1532(2, 0) };
				fVar4 = func_1797(2, 0);
				Local_264[iParam0]->f_10 = { _get_object_offset_from_coords(func_1532(1, 2), func_1797(1, 2), 0f, -1f, 0f) };
				Local_264[iParam0]->f_16 = { func_1532(7, 6) };
				fVar3 = 0.75f;
				iVar48 = iLocal_16;
				iVar46 = 4;
				break;
			case 7:
				vVar0 = { func_1532(2, 1) };
				fVar4 = func_1797(2, 1);
				Local_264[iParam0]->f_10 = { _get_object_offset_from_coords(func_1532(1, 3), func_1797(1, 3), 0f, -1f, 0f) };
				Local_264[iParam0]->f_16 = { func_1532(7, 7) };
				fVar3 = 0.75f;
				iVar48 = iLocal_16;
				iVar46 = 5;
				bVar37 = true;
				break;
			case 8:
				vVar0 = { func_1532(2, 3) };
				fVar4 = func_1797(2, 3);
				Local_264[iParam0]->f_10 = { func_1532(2, 6) };
				fVar3 = 0.75f;
				iVar48 = iLocal_16;
				iVar46 = 3;
				bVar37 = true;
				break;
			case 9:
				vVar0 = { func_1532(2, 4) };
				fVar4 = func_1797(2, 5);
				Local_264[iParam0]->f_10 = { func_1532(2, 5) };
				fVar3 = 0.75f;
				iVar48 = iLocal_16;
				iVar46 = 6;
				break;
			case 10:
				vVar0 = { func_1532(2, 2) };
				fVar4 = func_1797(2, 2);
				iVar48 = iLocal_16;
				iVar46 = 8;
				bVar15 = false;
				break;
			case 11:
				vVar0 = { 719.9507f, -504.3471f, 73.9739f };
				fVar4 = 271.4063f;
				iVar48 = iLocal_16;
				iVar49 = -183018591;
				iVar46 = 0;
				Local_264[iParam0]->f_10 = { 715.6518f, -519.9623f, 72.2361f };
				bVar39 = true;
				break;
			case 12:
				vVar0 = { 704.3022f, -525.0439f, 70.4286f };
				fVar4 = 10.3228f;
				iVar48 = iLocal_16;
				iVar46 = 9;
				iVar49 = -183018591;
				iVar50 = 127400949;
				Local_264[iParam0]->f_10 = { 701.3218f, -530.2534f, 70.2709f };
				bVar37 = true;
				bVar39 = true;
				break;
			case 13:
				vVar0 = { 712.8935f, -527.4934f, 71.6144f };
				fVar4 = 291.4351f;
				iVar48 = iLocal_16;
				iVar46 = 8;
				iVar49 = -183018591;
				Local_264[iParam0]->f_10 = { 716.9122f, -527.1522f, 72.3295f };
				fVar3 = 1f;
				bVar39 = true;
				break;
			case 14:
				vVar0 = { 707.1915f, -526.22f, 70.875f };
				fVar4 = 305.4023f;
				iVar48 = iLocal_16;
				iVar46 = 3;
				iVar49 = -183018591;
				Local_264[iParam0]->f_10 = { 709.3044f, -525.3839f, 70.89664f };
				fVar3 = 1.5f;
				bVar39 = true;
				break;
			case 15:
				vVar0 = { 708.8361f, -528.5605f, 71.1435f };
				fVar4 = 294.3945f;
				iVar48 = iLocal_16;
				iVar46 = 6;
				Local_264[iParam0]->f_10 = { 711.3271f, -526.7702f, 71.5f };
				fVar3 = 0.75f;
				bVar37 = true;
				bVar39 = true;
				break;
			case 16:
				vVar0 = { 677.6518f, -517.3425f, 77.7049f };
				fVar4 = 275.4487f;
				iVar48 = iLocal_16;
				iVar46 = 2;
				Local_264[iParam0]->f_10 = { 702.0942f, -505.2389f, 75.6521f };
				bVar14 = true;
				fVar5 = 0.1f;
				break;
			case 17:
				vVar0 = { 681.3974f, -519.4725f, 76.4012f };
				fVar4 = 288.8339f;
				iVar48 = iLocal_16;
				iVar46 = 1;
				Local_264[iParam0]->f_10 = { 700.325f, -515.6852f, 73.8126f };
				bVar14 = true;
				fVar5 = 0.1f;
				break;
			case 18:
				vVar0 = { 674.726f, -542.4521f, 68.62534f };
				fVar4 = 275.4487f;
				iVar48 = iLocal_16;
				iVar46 = 6;
				Local_264[iParam0]->f_10 = { 703.4441f, -525.4789f, 70.35617f };
				bVar14 = true;
				fVar3 = 3f;
				fVar5 = 0.1f;
				break;
			case 19:
				vVar0 = { 670.4191f, -543.4786f, 68.64783f };
				fVar4 = 275.4487f;
				iVar48 = iLocal_16;
				iVar46 = 5;
				Local_264[iParam0]->f_10 = { 701.0566f, -523.1977f, 70.84402f };
				bVar14 = true;
				fVar3 = 3f;
				fVar5 = 0.1f;
				break;
			case 20:
				vVar0 = { 686.1927f, -536.3441f, 69.57589f };
				fVar4 = 291.283f;
				iVar48 = iLocal_16;
				Local_264[iParam0]->f_10 = { 686.1927f, -536.3441f, 69.57589f };
				iVar46 = 9;
				bVar14 = true;
				bVar16 = true;
				bVar37 = true;
				break;
			case 21:
				vVar0 = { 676.6837f, -545.6262f, 68.6402f };
				fVar4 = 273.3271f;
				iVar48 = iLocal_16;
				Local_264[iParam0]->f_10 = { 686.6816f, -542.9273f, 68.9126f };
				iVar46 = 4;
				bVar14 = true;
				bVar16 = true;
				break;
			case 22:
				vVar0 = { 642.3636f, -572.8561f, 63.54324f };
				fVar4 = 323.0886f;
				iVar48 = iLocal_16;
				iVar46 = 3;
				bVar14 = true;
				bVar30 = true;
				bVar38 = true;
				break;
			case 23:
				vVar0 = { 639.9719f, -577.0951f, 61.99159f };
				fVar4 = 323.0886f;
				iVar48 = iLocal_16;
				iVar46 = 7;
				bVar14 = true;
				bVar30 = true;
				bVar38 = true;
				break;
			case 24:
				vVar0 = { 680.0007f, -560.5756f, 73.33658f };
				fVar4 = 11.0776f;
				iVar48 = iLocal_16;
				Local_264[iParam0]->f_10 = { 677.7234f, -554.9025f, 73.32154f };
				iVar46 = 3;
				bVar11 = true;
				bVar30 = true;
				bVar32 = true;
				bVar33 = true;
				iVar6 = 70;
				break;
			case 25:
				vVar0 = { 664.4644f, -533.4609f, 72.3247f };
				fVar4 = 184.5853f;
				iVar48 = iLocal_16;
				Local_264[iParam0]->f_10 = { 670.7897f, -543.6622f, 68.7072f };
				iVar46 = 7;
				bVar11 = true;
				bVar30 = true;
				bVar32 = true;
				bVar33 = true;
				bVar37 = true;
				break;
			case 26:
				vVar0 = { 674.2321f, -562.1005f, 72.1643f };
				fVar4 = 13.0901f;
				iVar48 = iLocal_16;
				iVar46 = 8;
				Local_264[iParam0]->f_10 = { 669.95f, -548.2133f, 68.3692f };
				bVar11 = true;
				bVar30 = true;
				bVar32 = true;
				bVar33 = true;
				break;
			case 27:
				vVar0 = { 665.1495f, -575.3972f, 73.7066f };
				fVar4 = 39.1852f;
				iVar48 = iLocal_16;
				iVar46 = 6;
				Local_264[iParam0]->f_10 = { 654.8949f, -564.6367f, 73.36279f };
				bVar11 = true;
				bVar30 = true;
				bVar32 = true;
				bVar33 = true;
				break;
			case 28:
				vVar0 = { 620.5862f, -545.4949f, 74.6548f };
				fVar4 = 226.1998f;
				iVar48 = iLocal_16;
				iVar46 = 2;
				Local_264[iParam0]->f_10 = { 645.739f, -562.8143f, 73.8561f };
				iVar51 = 0;
				bVar30 = true;
				bVar32 = true;
				bVar33 = true;
				bParam1 = true;
				break;
			case 29:
				vVar0 = { 649.7441f, -551.4623f, 71.23785f };
				fVar4 = 270.403f;
				iVar48 = iLocal_16;
				iVar46 = 0;
				fVar3 = 0.75f;
				Local_264[iParam0]->f_10 = { 650.1314f, -554.3826f, 70.17564f };
				bVar11 = true;
				bVar30 = true;
				bVar32 = true;
				bVar33 = true;
				break;
			case 30:
				vVar0 = { 629.566f, -566.8062f, 73.10009f };
				fVar4 = 224.3089f;
				iVar48 = iLocal_16;
				iVar46 = 1;
				Local_264[iParam0]->f_10 = { 633.6833f, -573.5807f, 70.8714f };
				fVar3 = 1f;
				bVar11 = true;
				bVar30 = true;
				bVar32 = true;
				bVar33 = true;
				iVar6 = 70;
				break;
			case 31:
				vVar0 = { 644.6136f, -593.0283f, 59.5934f };
				fVar4 = 78.3494f;
				iVar48 = iLocal_16;
				iVar46 = 2;
				Local_264[iParam0]->f_10 = { 632.6699f, -595.4872f, 58.56918f };
				iVar49 = 1676963302;
				bVar11 = true;
				bVar30 = true;
				bVar32 = true;
				bVar33 = true;
				break;
			case 32:
				vVar0 = { 617.0519f, -578.7621f, 60.9556f };
				fVar4 = 190.8039f;
				iVar48 = iLocal_16;
				iVar46 = 4;
				Local_264[iParam0]->f_10 = { 620.3595f, -592.2355f, 57.3566f };
				bVar11 = true;
				bVar30 = true;
				bVar32 = true;
				bVar33 = true;
				break;
			case 33:
				vVar0 = { 627.6882f, -608.7838f, 52.555f };
				fVar4 = 68.4922f;
				iVar48 = iLocal_16;
				iVar46 = 6;
				Local_264[iParam0]->f_10 = { 619.2123f, -604.9418f, 52.4183f };
				bVar11 = true;
				bVar30 = true;
				bVar32 = true;
				bVar33 = true;
				iVar6 = 70;
				break;
			case 34:
				vVar0 = { 599.6963f, -595.4708f, 52.8988f };
				fVar4 = 236.1126f;
				iVar48 = iLocal_16;
				iVar46 = 7;
				Local_264[iParam0]->f_10 = { 609.0871f, -603.3452f, 51.6922f };
				bVar29 = true;
				bVar11 = true;
				bVar30 = true;
				bVar32 = true;
				bVar33 = true;
				break;
			case 35:
				vVar0 = { 613.449f, -611.1585f, 49.6589f };
				fVar4 = 31.5683f;
				iVar48 = iLocal_16;
				iVar46 = 8;
				Local_264[iParam0]->f_10 = { 611.2338f, -607.7773f, 49.0902f };
				fVar3 = 1.5f;
				iVar49 = -1783478894;
				bVar29 = true;
				bVar11 = true;
				bVar30 = true;
				bVar32 = true;
				bVar33 = true;
				break;
			case 36:
				vVar0 = { 574.6739f, -613.9036f, 43.30838f };
				fVar4 = 279.1268f;
				iVar48 = iLocal_16;
				iVar46 = 9;
				Local_264[iParam0]->f_10 = { 581.7516f, -612.1082f, 43.92028f };
				fVar3 = 1f;
				bVar29 = true;
				bVar11 = true;
				bVar30 = true;
				bVar32 = true;
				bVar33 = true;
				break;
			case 37:
				vVar0 = { 594.9899f, -639.3923f, 41.83443f };
				fVar4 = 248.9646f;
				iVar48 = iLocal_16;
				iVar46 = 4;
				Local_264[iParam0]->f_10 = { 596.1293f, -636.4665f, 41.97483f };
				fVar3 = 1f;
				bVar29 = true;
				bVar11 = true;
				bVar30 = true;
				bVar32 = true;
				bVar33 = true;
				break;
			case 38:
				vVar0 = { 644.6136f, -593.0283f, 59.5934f };
				fVar4 = 78.3494f;
				iVar48 = iLocal_16;
				iVar46 = 3;
				Local_264[iParam0]->f_10 = { 633.2195f, -592.0331f, 58.8911f };
				bVar7 = true;
				bVar11 = true;
				bVar30 = true;
				bVar32 = true;
				bVar33 = true;
				break;
			case 39:
				vVar0 = { 624.7617f, -588.9257f, 54.22914f };
				fVar4 = 128.7949f;
				iVar48 = iLocal_16;
				iVar46 = 3;
				bVar29 = true;
				bVar31 = true;
				bVar38 = true;
				break;
			case 40:
				vVar0 = { 625.0106f, -587.6951f, 54.54704f };
				fVar4 = 117.9692f;
				iVar48 = iLocal_16;
				iVar46 = 9;
				bVar29 = true;
				bVar31 = true;
				bVar38 = true;
				break;
			case 41:
				vVar0 = { 684.2028f, -607.2736f, 64.63437f };
				fVar4 = 82.9532f;
				Local_264[iParam0]->f_10 = { 615.0064f, -622.7041f, 47.89655f };
				fVar3 = 5f;
				iVar48 = iLocal_16;
				iVar46 = 7;
				bVar29 = true;
				bVar34 = true;
				iVar51 = 1;
				break;
			case 42:
				vVar0 = { 610.7793f, -563.6404f, 65.91808f };
				fVar4 = 159.8334f;
				Local_264[iParam0]->f_10 = { 604.9408f, -596.9568f, 52.99452f };
				fVar3 = 5f;
				iVar48 = iLocal_16;
				iVar46 = 1;
				bVar29 = true;
				bVar34 = true;
				bVar31 = true;
				break;
			case 43:
				vVar0 = { 624.7617f, -588.9257f, 54.22914f };
				fVar4 = 128.7949f;
				Local_264[iParam0]->f_10 = { 606.8727f, -617.1329f, 45.9632f };
				iVar48 = iLocal_16;
				iVar46 = 3;
				bVar29 = true;
				bVar34 = true;
				bVar31 = true;
				break;
			case 44:
				vVar0 = { 625.0106f, -587.6951f, 54.54704f };
				fVar4 = 117.9692f;
				Local_264[iParam0]->f_10 = { 600.4967f, -604.9031f, 48.2704f };
				iVar48 = iLocal_16;
				iVar46 = 9;
				bVar29 = true;
				bVar34 = true;
				bVar31 = true;
				break;
			case 45:
				vVar0 = { 597.866f, -529.3788f, 75.73396f };
				fVar4 = 13.0901f;
				iVar48 = iLocal_16;
				iVar46 = 3;
				bVar11 = true;
				bVar30 = true;
				bVar32 = true;
				bVar35 = true;
				break;
			case 46:
				vVar0 = { 597.3778f, -530.2727f, 75.7076f };
				fVar4 = 13.0901f;
				iVar48 = iLocal_16;
				iVar46 = 5;
				bVar11 = true;
				bVar30 = true;
				bVar32 = true;
				bVar35 = true;
				break;
			case 47:
				vVar0 = { 603.9374f, -540.77f, 76.02867f };
				fVar4 = 13.0901f;
				Local_264[iParam0]->f_10 = { 644.9743f, -566.6932f, 73.8877f };
				iVar48 = iLocal_16;
				iVar46 = 4;
				bVar11 = true;
				bVar30 = true;
				bVar32 = true;
				bVar35 = true;
				break;
			case 48:
				vVar0 = { 602.8942f, -537.7308f, 75.71129f };
				fVar4 = 13.0901f;
				Local_264[iParam0]->f_10 = { 636.3821f, -560.1846f, 73.8846f };
				iVar48 = iLocal_16;
				iVar46 = 2;
				bVar11 = true;
				bVar30 = true;
				bVar32 = true;
				bVar35 = true;
				break;
			case 49:
				vVar0 = { 607.5488f, -531.6373f, 75.65385f };
				fVar4 = 13.0901f;
				Local_264[iParam0]->f_10 = { 640.1566f, -558.4568f, 73.88562f };
				iVar48 = iLocal_16;
				iVar46 = 1;
				bVar11 = true;
				bVar30 = true;
				bVar32 = true;
				bVar35 = true;
				break;
			case 50:
				vVar0 = { 609.9263f, -531.28f, 75.67886f };
				fVar4 = 13.0901f;
				Local_264[iParam0]->f_10 = { 645.4055f, -562.1598f, 73.88742f };
				iVar48 = iLocal_16;
				iVar46 = 8;
				bVar11 = true;
				bVar30 = true;
				bVar32 = true;
				bVar35 = true;
				break;
		}
		if (iVar51 != -1 && !does_entity_exist(&(Local_1285[iVar51])))
		{
			if (iVar51 != 0)
			{
				Local_1285[iVar51] = func_1785(iLocal_19, vVar0, fVar4, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
			}
			else
			{
				Local_1285[iVar51] = func_1785(iLocal_19, 619.1517f, -546.9402f, 74.62016f, fVar4, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
			}
			if (bVar32)
			{
				set_entity_visible(&(Local_1285[iVar51]), false);
				freeze_entity_position(&(Local_1285[iVar51]), true);
				_0xcac43d060099ea72(&(Local_1285[iVar51]));
				set_entity_collision(&(Local_1285[iVar51]), false, false);
			}
			if (iVar51 == 0)
			{
				request_ped_visibility_tracking(&(Local_1285[iVar51]));
			}
			else
			{
				set_blocking_of_non_temporary_events(&(Local_1285[iVar51]), true);
			}
			return false;
		}
		if (iParam0 == 28)
		{
			Local_264[iParam0]->f_19 = create_tracked_point();
			set_tracked_point_info(Local_264[iParam0]->f_19, 620.5862f, -545.4949f, 75f, 3f);
		}
		if (!func_394(iVar1681, 32))
		{
			func_420(&uLocal_1685, 32);
			return false;
		}
		Local_264[iParam0] = func_1785(iVar48, vVar0, fVar4, 1, 1, 0, 1, 1, 0, 0, 0, 0, 0);
		if (iParam0 == 30)
		{
			set_ped_config_flag(&(Local_264[iParam0]), 132, true);
		}
		if (func_394(iVar1681, 32))
		{
			func_1254(&uLocal_1685, 32);
		}
		if (does_entity_exist(&(Local_264[iParam0])))
		{
			set_blocking_of_non_temporary_events(&(Local_264[iParam0]), bVar12);
			_0xd05ad61f242c626b(&(Local_264[iParam0]), fVar43);
			set_ped_combat_attributes(&(Local_264[iParam0]), 5, bVar13);
			set_current_ped_weapon(&(Local_264[iParam0]), get_best_ped_weapon(&(Local_264[iParam0]), false, false), true, 0, false, false);
			set_ped_flee_attributes(&(Local_264[iParam0]), 512, bVar20);
			set_ped_combat_attributes(&(Local_264[iParam0]), 46, bVar21);
			set_ped_combat_attributes(&(Local_264[iParam0]), 0, bVar18);
			set_ped_combat_attributes(&(Local_264[iParam0]), 35, true);
			set_entity_invincible(&(Local_264[iParam0]), bVar22);
			set_ped_config_flag(&(Local_264[iParam0]), 186, false);
			set_entity_load_collision_flag(&(Local_264[iParam0]), iVar23);
			set_ped_drops_weapons_when_dead(&(Local_264[iParam0]), bVar25);
			_0x18ff3110cf47115d(&(Local_264[iParam0]), 1, 0);
			set_entity_lod_dist(&(Local_264[iParam0]), 600);
			if (bVar39)
			{
				set_ped_lod_multiplier(&(Local_264[iParam0]), 2f);
			}
			request_ped_visibility_tracking(&(Local_264[iParam0]));
			stop_ped_speaking(&(Local_264[iParam0]), true);
			if (bVar32)
			{
				set_entity_visible(&(Local_264[iParam0]), false);
				freeze_entity_position(&(Local_264[iParam0]), true);
				set_entity_collision(&(Local_264[iParam0]), false, false);
			}
			if (bVar38)
			{
				set_ped_combat_attributes(&(Local_264[iParam0]), 50, true);
				set_ped_config_flag(&(Local_264[iParam0]), 112, true);
			}
			if (bVar37)
			{
				func_1845(&(Local_264[iParam0]), -2084181920, 5, 1);
			}
			if (bVar35)
			{
				_0xfd6943b6df77e449(&(Local_264[iParam0]), false);
			}
			if (bVar15)
			{
				set_ped_relationship_group_hash(&(Local_264[iParam0]), 1269650476);
			}
			if (bVar19)
			{
				set_combat_float(&(Local_264[iParam0]), 28, 0f);
			}
			if (iVar45 != -1)
			{
				set_entity_max_health(&(Local_264[iParam0]), iVar45);
				_set_entity_health(&(Local_264[iParam0]), iVar45, 0);
			}
			if (bVar36)
			{
				set_ped_config_flag(&(Local_264[iParam0]), 6, true);
			}
			if (iVar51 != -1 && !bParam1)
			{
				set_ped_config_flag(&(Local_1285[iVar51]), 186, false);
				_set_ped_on_mount(&(Local_264[iParam0]), &(Local_1285[iVar51]), -1, true);
				set_blocking_of_non_temporary_events(&(Local_1285[iVar51]), true);
				set_ped_combat_attributes(&(Local_1285[iVar51]), 98, true);
				set_ped_can_be_targetted(&(Local_1285[iVar51]), false);
				set_ped_combat_attributes(&(Local_264[iParam0]), 98, true);
			}
			if (!bVar24)
			{
				set_ped_config_flag(&(Local_264[iParam0]), 277, true);
				set_ped_config_flag(&(Local_264[iParam0]), 253, true);
			}
			if (bVar7)
			{
				func_1836(&(Local_264[iParam0]), 1);
			}
			if (bVar34)
			{
				set_ped_combat_attributes(&(Local_264[iParam0]), 30, true);
			}
			if (iVar49 != 0)
			{
				remove_all_ped_weapons(&(Local_264[iParam0]), true, true);
				func_937(&(Local_264[iParam0]), iVar49, 50, 1, 0, 1056964608, 1065353216, 0);
				if (iVar50 != 0)
				{
					func_937(&(Local_264[iParam0]), iVar50, 50, 1, 0, 1056964608, 1065353216, 0);
				}
			}
			else
			{
				remove_all_ped_weapons(&(Local_264[iParam0]), true, true);
				func_937(&(Local_264[iParam0]), 127400949, 50, 1, 0, 1056964608, 1065353216, 0);
			}
			if (bVar10)
			{
				set_ped_combat_movement(&(Local_264[iParam0]), 0);
			}
			if (bVar8)
			{
				iLocal_1453[iParam0] = _blip_add_for_entity(831283580, &(Local_264[iParam0]));
				_blip_set_modifier(&(iLocal_1453[iParam0]), -1034486097);
			}
			if (bVar9)
			{
				set_ped_sphere_defensive_area(&(Local_264[iParam0]), vVar0, 2f, 1, 0, 0);
			}
			else if (!func_1824(Local_264[iParam0]->f_10, 0f, 0f, 0f))
			{
				set_ped_sphere_defensive_area(&(Local_264[iParam0]), Local_264[iParam0]->f_10, fVar3, 1, 0, 0);
			}
			if (bVar30)
			{
				_0x8acc0506743a8a5c(&(Local_264[iParam0]), 1240409539, 1, -1082130432);
			}
			if (bVar31)
			{
				_0x8acc0506743a8a5c(&(Local_264[iParam0]), -1838134243, 1, -1082130432);
			}
			if (iVar6 != 0)
			{
				set_ped_accuracy(&(Local_264[iParam0]), round((IntToFloat(iVar6) * func_1846())));
			}
			if (fVar5 != 0f)
			{
				_0xc2266aa617668ad3(&(Local_264[iParam0]), fVar5);
			}
			if (bVar14)
			{
				if (iVar51 == -1)
				{
					if (!func_1824(Local_264[iParam0]->f_10, 0f, 0f, 0f))
					{
						force_ped_motion_state(&(Local_264[iParam0]), -530524, false, 0, false);
						func_1350();
						task_combat_hated_targets_in_area(0, Local_264[iParam0]->f_10, fVar44, 0, 0);
						func_1351(&(Local_264[iParam0]), -1082130432, -1082130432, 0);
						_0x2208438012482a1a(&(Local_264[iParam0]), false, false);
					}
					else
					{
						task_combat_hated_targets_around_ped(&(Local_264[iParam0]), 200f, 0, 0);
					}
					if (bVar27)
					{
						_set_ped_crouch_movement(&(Local_264[iParam0]), true, 0, false);
					}
				}
				else
				{
					if (func_1824(vVar40, 0f, 0f, 0f))
					{
						set_ped_combat_movement(&(Local_264[iParam0]), 1);
						func_420(&(Local_264[iParam0]->f_3), 1);
						func_1350();
						task_set_blocking_of_non_temporary_events(0, true);
						task_set_blocking_of_non_temporary_events(0, true);
						task_combat_hated_targets_in_area(0, Local_264[iParam0]->f_10, 200f, 0, 0);
						func_1351(&(Local_264[iParam0]), -1082130432, -1082130432, 0);
					}
					else
					{
						func_1350();
						task_set_blocking_of_non_temporary_events(0, true);
						if (bVar28)
						{
							task_go_straight_to_coord(0, vVar40, 2f, 20000, 40000f, 1056964608, 0);
						}
						else
						{
							task_follow_nav_mesh_to_coord(0, vVar40, 2f, -1, 1.5f, 0, 40000f);
						}
						task_dismount_animal(0, 268439616, 0, 0, 0, 0);
						task_set_blocking_of_non_temporary_events(0, false);
						task_combat_hated_targets_in_area(0, Local_264[iParam0]->f_10, 200f, 0, 0);
						func_1351(&(Local_264[iParam0]), -1082130432, -1082130432, 0);
					}
					force_ped_motion_state(&(Local_1285[iVar51]), -530524, false, 0, false);
					_0x2208438012482a1a(&(Local_1285[iVar51]), false, false);
				}
			}
			if (bVar16)
			{
				set_entity_only_damaged_by_player(&(Local_264[iParam0]), true);
			}
			if (bVar17)
			{
				set_entity_is_target_priority(&(Local_264[iParam0]), true, 0f);
			}
			if (bVar11)
			{
				_0x815c0074a1bc0d93(&(Local_264[iParam0]), 2);
			}
			if (bVar26)
			{
				set_ped_combat_range(&(Local_264[iParam0]), 3);
				set_ped_seeing_range(&(Local_264[iParam0]), 200f);
			}
			if (bVar29)
			{
				set_ped_combat_attributes(&(Local_264[iParam0]), 46, true);
			}
			if (iVar47 != 0)
			{
				_set_ped_body_component(&(Local_264[iParam0]), iVar47);
				_update_ped_variation(&(Local_264[iParam0]), false, true, true, true, false);
			}
			else
			{
				_set_ped_outfit_preset(&(Local_264[iParam0]), iVar46, 0);
				_update_ped_variation(&(Local_264[iParam0]), false, true, false, false, false);
			}
			return false;
		}
	}
	return true;
}

void func_1336(char[4] cParam0)
{
	func_1847(&(cParam0->f_7375));
}

void func_1337(char[4] cParam0)
{
	if (!is_collision_marked_outside(func_1334(player_id())) && func_903(Global_35, iLocal_246, 1, 1) <= 10f)
	{
		if (!func_26(vLocal_1551[37]))
		{
			func_27(vLocal_1551[37], 0);
		}
	}
	else
	{
		func_557(vLocal_1551[37]);
	}
	if (func_26(vLocal_1551[37]))
	{
		if (func_913(vLocal_1551[37]) >= 10f)
		{
			if (func_1262(cParam0, "SAD3_SHRF_RTRN", 0))
			{
				if (!func_394(iVar1685, 1024))
				{
					func_420(&uLocal_1688, 1024);
				}
				task_look_at_entity(iLocal_246, Global_35, -1, 0, 51, 0);
				func_557(vLocal_1551[37]);
			}
		}
	}
	if (!func_1301("SAD3_SHRF_RTRN"))
	{
		if (func_394(iVar1685, 1024))
		{
			func_1255(iLocal_246);
			func_1254(&uLocal_1688, 1024);
		}
	}
	if (!func_394(iVar1683, 256))
	{
		if (func_1290(Global_35, iLocal_249, 1))
		{
			func_420(&uLocal_1686, 256);
		}
	}
	else if (func_1248(cParam0) >= 1 && func_1250(Global_35, 721.4784f, -466.737f, 78.3604f, 1) > 20f)
	{
		if (!func_394(iVar1683, 16))
		{
			if (func_1253(cParam0, iLocal_249, 1125515264, 0, 0, 1, -1925605092, 1084227584, 1103626240))
			{
				if (!func_394(iVar1683, 512))
				{
					func_1312(cParam0, &(uLocal_239[1]), 1);
					func_420(&uLocal_1686, 512);
				}
			}
			else if (func_394(iVar1683, 512))
			{
				func_1284(cParam0, &(uLocal_239[1]), 1105014447, 422991367, 1, 1);
				func_1254(&uLocal_1686, 512);
			}
		}
	}
	func_1770(&(uLocal_239[1]), cLocal_237, 1, 1);
	switch (func_1297(cParam0))
	{
		case 0:
			func_1264(cParam0, "SAD3_OBJ1", -1082130432, 0, 0, -1, -1, 0);
			func_1390(7);
			if (func_1262(cParam0, "SAD3_POSTSHER", 0))
			{
				func_135(cParam0, -1);
			}
			break;
		case 1:
			break;
		case 2:
			if (func_1262(cParam0, "SAD3_LETSDEW", 0))
			{
				func_1264(cParam0, "SAD3_OBJ6a", -1082130432, 0, 0, -1, -1, 0);
				func_135(cParam0, 3);
			}
			break;
		case 3:
			if (!func_1301("SAD3_LETSDEW"))
			{
				if (func_1262(cParam0, "SAD3_DEW1", 0))
				{
					func_227(vLocal_1551[21]);
					cLocal_237 = "SAD3_DEW1";
					func_135(cParam0, 4);
				}
			}
			break;
		case 4:
			if (!func_1301("SAD3_DEW1"))
			{
				if (func_1285(vLocal_1551[21]) >= 2f)
				{
					if (func_1262(cParam0, "SAD3_DEW2", 0))
					{
						cLocal_237 = "SAD3_DEW2";
						func_135(cParam0, -1);
					}
				}
			}
			else
			{
				func_227(vLocal_1551[21]);
			}
			break;
		case 5:
			if (func_1262(cParam0, "SAD3_UPHERE", 0))
			{
				cLocal_237 = "SAD3_UPHERE";
				func_135(cParam0, -1);
			}
			break;
		case 6:
			break;
		case 7:
			break;
	}
}

void func_1338(char[4] cParam0)
{
	waypoint_recording_get_closest_waypoint("sad3_rhodestodew", get_entity_coords(Global_35, true, false), &iVar0);
	if (!func_394(iVar1682, 2097152))
	{
		if ((is_waypoint_playback_going_on_for_ped(&(uLocal_239[1]), 0) && IntToFloat(get_ped_waypoint_progress(&(uLocal_239[1]))) >= fVar1697) && IntToFloat(iVar0) >= (fVar1697 - 2f))
		{
			if (waypoint_playback_get_is_paused(&(uLocal_239[1])))
			{
				if (func_903(Global_35, &(uLocal_239[1]), 1, 1) <= 15f)
				{
					set_gameplay_coord_hint(701.0631f, -528.5361f, 70.3198f, 1700, 2000, 2000, 0);
					func_420(&uLocal_1685, 2097152);
				}
			}
		}
	}
	if (func_394(iVar1683, 16384))
	{
		func_1315(Global_35, get_entity_coords(&(uLocal_239[1]), true, false), 0, 20f, 13f, 7f, 1084227584, 1, 1, 1, 0);
	}
	switch (iVar1829)
	{
		case 35:
			set_ped_reset_flag(iLocal_250, 317, true);
			if (!get_ped_config_flag(iLocal_250, 174, true))
			{
				set_ped_config_flag(iLocal_250, 174, true);
			}
			if (is_ped_on_mount(&(uLocal_239[1])) && is_ped_on_mount(Global_35))
			{
				if (!does_group_exist(iVar1507))
				{
					iLocal_1510 = create_group(2);
				}
				set_ped_config_flag(&(uLocal_239[1]), 279, true);
				set_ped_as_group_leader(&(uLocal_239[1]), iVar1507, false);
				set_group_formation(iVar1507, 5);
				add_custom_formation_location(iVar1507, 0f, -8f, 0f, 0);
				set_ped_config_flag(&(uLocal_239[1]), 167, true);
				set_blocking_of_non_temporary_events(&(uLocal_239[1]), true);
				func_59(7);
				func_1284(cParam0, &(uLocal_239[1]), 1105014447, 422991367, 1, 1);
				func_1293(&iLocal_1832, 44);
			}
			break;
		case 44:
			set_ped_reset_flag(iLocal_250, 317, true);
			task_follow_waypoint_recording(&(uLocal_239[1]), "sad3_rhodestodew", 0, 9226, -1, 0, 0, -1);
			_0xac22aa6df4d1c1de(player_id(), &(uLocal_239[1]), -1082130432, -1082130432, 4, 2, 0);
			_0xdd33a82352c4652f(player_id(), &(uLocal_239[1]), 1);
			func_1293(&iLocal_1832, 46);
			break;
		case 46:
			set_ped_reset_flag(iLocal_250, 317, true);
			if (is_waypoint_playback_going_on_for_ped(&(uLocal_239[1]), 0))
			{
			}
			func_1311(&(uLocal_239[1]), 2.001f, 0, 1045220557, 1, 1077936128, 1106247680, 1114636288, 1033476506, 1061158912, 1, 1, 1045220557, 0);
			if (is_waypoint_playback_going_on_for_ped(&(uLocal_239[1]), 0))
			{
				func_1848();
				if (IntToFloat(get_ped_waypoint_progress(&(uLocal_239[1]))) >= fVar1697)
				{
					if (!waypoint_playback_get_is_paused(&(uLocal_239[1])))
					{
						waypoint_playback_pause(&(uLocal_239[1]), 0, 0, 0);
						if (!func_394(iVar1683, 16384))
						{
							func_420(&uLocal_1686, 16384);
						}
					}
					else
					{
						task_look_at_coord(&(uLocal_239[1]), 701.0631f, -528.5361f, 70.3198f, -1, 0, 51, 1);
						task_look_at_coord(Global_35, 701.0631f, -528.5361f, 70.3198f, -1, 0, 51, 1);
						if (func_1301("SAD3_DEW1"))
						{
							func_1319("SAD3_DEW1", 0, 0);
							func_135(cParam0, -1);
						}
						if (func_1301("SAD3_DEW2"))
						{
							func_1319("SAD3_DEW2", 0, 0);
						}
						if (!func_1301("SAD3_DEW1") && !func_1301("SAD3_DEW2"))
						{
							if (func_1262(cParam0, "SAD3_DEW3", 0))
							{
								func_1293(&iLocal_1832, 45);
							}
						}
					}
				}
			}
			break;
		case 45:
			set_ped_reset_flag(iLocal_250, 317, true);
			if (is_waypoint_playback_going_on_for_ped(&(uLocal_239[1]), 0))
			{
			}
			func_1311(&(uLocal_239[1]), 2.001f, 0, 1045220557, 1, 1077936128, 1106247680, 1114636288, 1033476506, 1061158912, 1, 0, 1045220557, 0);
			if (!func_1301("SAD3_DEW3"))
			{
				if (waypoint_playback_get_is_paused(&(uLocal_239[1])))
				{
					task_clear_look_at(&(uLocal_239[1]));
					task_clear_look_at(Global_35);
					waypoint_playback_resume(&(uLocal_239[1]), false, -1, 0);
					if (func_394(iVar1683, 16384))
					{
						func_1254(&uLocal_1686, 16384);
					}
				}
			}
			if (is_waypoint_playback_going_on_for_ped(&(uLocal_239[1]), 0))
			{
				if (get_ped_waypoint_progress(&(uLocal_239[1])) >= 261)
				{
					set_blocking_of_non_temporary_events(&(uLocal_239[1]), true);
				}
				if (get_ped_waypoint_progress(&(uLocal_239[1])) >= 318)
				{
					set_ped_config_flag(&(uLocal_239[1]), 167, false);
					if (does_group_exist(iVar1507))
					{
						remove_group(iVar1507);
					}
					func_1293(&iLocal_1832, 31);
				}
			}
			break;
		case 31:
			set_ped_reset_flag(iLocal_250, 317, true);
			if (func_1263(&(uLocal_239[1]), 721.4784f, -466.737f, 78.3604f, vLocal_1551[9], 1112014848, 1106247680, 10f, 5f, 3f, 0, 0, 1, 1, 1))
			{
				_0x0c6b89876262a99d(player_id(), &(uLocal_239[1]));
				if (func_1262(cParam0, "SAD3_OFFHORDEW", 0))
				{
					if (!func_394(iVar1685, 8))
					{
						func_420(&uLocal_1688, 8);
					}
					func_1293(&iLocal_1832, 2);
				}
			}
			break;
		case 2:
			if (get_ped_config_flag(iLocal_250, 174, true))
			{
				set_ped_config_flag(iLocal_250, 174, false);
			}
			if (!func_394(iVar1682, 8388608))
			{
				if (!is_ped_on_mount(&(uLocal_239[1])))
				{
					clear_sequence_task(&uLocal_1509);
					open_sequence_task(&uLocal_1509);
					task_follow_nav_mesh_to_coord(0, 724.6479f, -464.4884f, 78.3394f, 1f, -1, 0.25f, 0, 130.7703f);
					close_sequence_task(iVar1506);
					task_perform_sequence(&(uLocal_239[1]), iVar1506);
					clear_sequence_task(&uLocal_1509);
					set_blocking_of_non_temporary_events(&(uLocal_239[1]), true);
					func_557(vLocal_1551[9]);
					if (func_903(Global_35, &(uLocal_239[1]), 1, 1) <= 15f)
					{
						func_1293(&iLocal_1832, 87);
					}
				}
			}
			break;
	}
}

bool func_1339()
{
	Var0.f_8 = -1;
	Var0.f_17 = 1097859072;
	Var0.f_18 = 1000;
	Var0.f_19 = 1067450368;
	Var0.f_20 = 5000;
	Var0.f_21 = 42;
	Var0.f_22 = 1103626240;
	Var0.f_23 = 1077936128;
	Var0.f_24 = 1106247680;
	Var0.f_25 = 1103101952;
	Var0.f_26 = 1097859072;
	Var0.f_27 = 1103626240;
	func_939(&Var0);
	func_1849(&Var0);
	func_1850(&Var0, 1);
	func_1851(&Var0, 1);
	func_1852(&Var0, 1);
	func_1544(&Var0, 1);
	func_1543(&Var0, 1);
	func_1853(&Var0, 0);
	func_1542(&Var0, 1);
	func_1854(&Var0, 1);
	func_1855(&Var0, 1);
	func_1545(&Var0, 1);
	func_1856(&Var0, 1);
	iVar29 = 11;
	while (iVar29 <= 13)
	{
		if (func_1857(&(Local_264[iVar29]), &Var0, &uVar28, 0) || func_1858(&(Local_264[iVar29]), 0, &Var0, &uVar28, 0, 0))
		{
			return true;
		}
		iVar29++;
	}
	return false;
}

void func_1340(char[4] cParam0, char* sParam1, char* sParam2, bool bParam3, bool bParam4)
{
	if (bParam4)
	{
		func_438(cParam0, 2);
	}
	else
	{
		func_438(cParam0, 1);
	}
	StringCopy(&cVar0, sParam1, 64);
	func_1566(cParam0, cVar0);
	func_160(cParam0, 2);
	if (((!_0x139efb0a71dd9011() && !func_29()) && !func_6(cParam0, 80)) && bParam3)
	{
		func_30(cParam0);
	}
	func_27(&(cParam0->f_13118), 0);
}

bool func_1341(int iParam0)
{
	if (iParam0 == 0)
	{
		iVar0 = 0;
		iVar1 = 2;
	}
	else
	{
		iVar0 = 3;
		iVar1 = 5;
	}
	iVar2 = iVar0;
	while (iVar2 <= iVar1)
	{
		if (!does_entity_exist(&(iLocal_253[iVar2])))
		{
			func_1859(iVar2);
			return false;
		}
		iVar2++;
	}
	return true;
}

bool func_1342(bool bParam0)
{
	bVar0 = false;
	iVar1 = 11;
	while (iVar1 <= 15)
	{
		if (!does_entity_exist(&(Local_264[iVar1])) && !bVar0)
		{
			func_1335(iVar1, 0);
			bVar0 = true;
		}
		if (!_0xa0bc8faed8cfeb3c(&(Local_264[iVar1])))
		{
			return false;
		}
		iVar1++;
	}
	if (!bVar0)
	{
		if (bParam0)
		{
			func_1286(&(Local_264[11]), 0, 0);
		}
		else
		{
			iVar1 = 11;
			while (iVar1 <= 13)
			{
				if (iVar1 == 11 || iVar1 == 13)
				{
					_0x9238a3d970bbb0a9(&(Local_264[iVar1]), -820192119);
					if (!func_1259(&(Local_264[iVar1]), -1098463898))
					{
						func_1343(&(Local_264[iVar1]), 1978275899, -1, 0, 0, -1082130432);
					}
				}
				if (iVar1 == 12)
				{
					_0x9238a3d970bbb0a9(&(Local_264[iVar1]), -820192119);
					if (!func_1259(&(Local_264[iVar1]), -1098463898))
					{
						func_1343(&(Local_264[iVar1]), -1032721003, -1, 0, 0, -1082130432);
					}
				}
				iVar1++;
			}
			iVar1 = 14;
			while (iVar1 <= 15)
			{
				_0x9238a3d970bbb0a9(&(Local_264[iVar1]), -820192119);
				func_1350();
				func_1343(0, 1774730608, -1, 0, 448785448, -1082130432);
				func_1351(&(Local_264[14]), 0.1f, 0.4f, 0);
				func_1351(&(Local_264[15]), 0.3f, 0.7f, 0);
				iVar1++;
			}
		}
		return true;
	}
	return false;
}

void func_1343(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, float fParam5)
{
	_task_start_scenario_in_place(iParam0, iParam1, iParam2, bParam3, iParam4, fParam5, false);
}

void func_1344(vector3 vParam0)
{
	if (!Global_1935630->f_12)
	{
		func_1860(vParam0);
		func_1861(vParam0);
	}
}

void func_1345(char[4] cParam0, int iParam1)
{
	func_1862(&(cParam0->f_7375.f_860), iParam1);
}

void func_1346(char[4] cParam0)
{
	switch (func_1297(cParam0))
	{
		case 0:
			func_1264(cParam0, "SAD3_OBJ7", -1082130432, 0, 0, -1, -1, 0);
			func_135(cParam0, -1);
			break;
	}
}

bool func_1347(var uParam0)
{
	if (!func_186(*uParam0, 0))
	{
		return false;
	}
	return is_ped_shooting(*uParam0);
}

bool func_1348(int iParam0, int iParam1)
{
	if (!is_entity_dead(iParam0))
	{
		if (!is_entity_dead(iParam1))
		{
			return has_entity_been_damaged_by_entity(iParam0, iParam1, 1, 1);
		}
	}
	return false;
}

int func_1349(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	while (iVar0 <= iParam1)
	{
		if (func_186(&(Local_264[iVar0]), 3))
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

void func_1350()
{
	if (!func_394(iVar1682, 1))
	{
		clear_sequence_task(&uLocal_1508);
		open_sequence_task(&uLocal_1508);
		func_420(&uLocal_1684, 1);
	}
}

void func_1351(int iParam0, float fParam1, float fParam2, bool bParam3)
{
	if (func_394(iVar1678, 1))
	{
		close_sequence_task(iVar1502);
		func_1254(&uLocal_1684, 1);
	}
	if (fParam1 == -1f || fParam2 == -1f)
	{
		task_perform_sequence(iParam0, iVar1502);
	}
	else
	{
		_task_perform_sequence_2(iParam0, iVar1502, fParam1, fParam2);
	}
	if (bParam3)
	{
		clear_sequence_task(&uLocal_1508);
	}
}

void func_1352(char[4] cParam0)
{
	if (!func_394(iVar1681, 2097152))
	{
		if (get_script_task_status(iVar1383, 658540077, true) == 1)
		{
			func_145(cParam0, &(Local_264[13]), "BANDITO_PED5", 0);
			if (func_1262(cParam0, "SAD3_BAN5_COMB2", 0))
			{
				func_420(&uLocal_1684, 2097152);
			}
		}
	}
	if (func_394(iVar1685, 64))
	{
		iVar0 = 12;
		while (iVar0 <= 17)
		{
			if (_0x09d7afd3716da8e1(&(Local_264[iVar0]), 8000) || has_entity_been_damaged_by_entity(&(Local_264[iVar0]), Global_35, 1, 1))
			{
				iLocal_1706 = 1;
			}
			iVar0++;
		}
		if (!bVar1703)
		{
			if (!func_26(vLocal_1551[39]))
			{
				func_27(vLocal_1551[39], 0);
			}
		}
		else if (func_26(vLocal_1551[39]))
		{
			func_557(vLocal_1551[39]);
		}
		iVar0 = 12;
		while (iVar0 <= 17)
		{
			clear_entity_last_damage_entity(&(Local_264[iVar0]));
			iVar0++;
		}
		iLocal_1706 = 0;
		if (func_26(vLocal_1551[39]))
		{
			if (func_913(vLocal_1551[39]) >= 8f)
			{
				if (!_0x54b187f111d9c6f8(&(uLocal_239[1]), 1))
				{
					if (func_1262(cParam0, "SAD3_CA_COVER", 0))
					{
						func_557(vLocal_1551[39]);
					}
				}
				else
				{
					func_508(vLocal_1551[39], 6f);
				}
			}
		}
	}
	switch (func_1297(cParam0))
	{
		case 0:
			if (!func_394(iVar1683, 64))
			{
				if (func_1262(cParam0, "SAD3_DEWSHOOT", 0))
				{
					func_135(cParam0, 1);
					func_1264(cParam0, "SAD3_OBJ8", -1082130432, 0, 0, -1, -1, 0);
					func_227(vLocal_1551[5]);
				}
			}
			else
			{
				func_135(cParam0, 1);
				func_1264(cParam0, "SAD3_OBJ8", -1082130432, 0, 0, -1, -1, 0);
				func_227(vLocal_1551[5]);
			}
			break;
		case 1:
			if (func_913(vLocal_1551[5]) >= 5f && func_1262(cParam0, "SAD3_CA_COVER", 0))
			{
				if (!func_394(iVar1685, 64))
				{
					func_420(&uLocal_1688, 64);
				}
				func_227(vLocal_1551[5]);
				func_135(cParam0, 2);
			}
			break;
		case 2:
			if (func_1349(12, 15) <= 2)
			{
				func_135(cParam0, 3);
			}
			else
			{
				iVar0 = 12;
				while (iVar0 <= 15)
				{
					if (func_186(&(Local_264[iVar0]), 0))
					{
						if (func_1250(&(Local_264[iVar0]), Local_264[iVar0]->f_10, 1) <= 3f)
						{
							if (func_1285(vLocal_1551[5]) >= 5f)
							{
								if (!func_1298())
								{
									if (func_1262(cParam0, "SAD3_CA_ROCK", 0))
									{
										func_135(cParam0, 3);
									}
								}
								else
								{
									func_508(vLocal_1551[5], 3f);
								}
							}
						}
					}
					iVar0++;
				}
			}
			break;
		case 3:
			iVar0 = 16;
			while (iVar0 <= 17)
			{
				if (func_186(&(Local_264[iVar0]), 0))
				{
					if (func_1250(&(Local_264[iVar0]), Local_264[iVar0]->f_10, 1) <= 5f)
					{
						if (!func_1298())
						{
							if (func_1262(cParam0, "SAD3_CA_SLOPE", 0))
							{
								func_135(cParam0, -1);
							}
						}
					}
				}
				iVar0++;
			}
			break;
		case 4:
			if (func_1262(cParam0, "SAD3_CA_MEET", 0))
			{
				func_135(cParam0, 51);
			}
			break;
	}
}

void func_1353(char[4] cParam0)
{
	switch (iVar1829)
	{
		case 0:
			set_ped_combat_movement(&(uLocal_239[1]), 1);
			set_ped_sphere_defensive_area(&(uLocal_239[1]), 714.1292f, -509.8732f, 72.1348f, 1f, 1, 0, 0);
			set_ped_combat_attributes(&(uLocal_239[1]), 35, true);
			set_combat_float(&(uLocal_239[1]), 1, 4f);
			set_combat_float(&(uLocal_239[1]), 3, 0.75f);
			if ((((_does_anim_scene_exist(&(Local_72[0])) && _0x005e6f28dd7ed58d(&(Local_72[0]), "CS_MrsAdler")) || (_does_anim_scene_exist(&(Local_72[0])) && _0xb89fcff19dafff28(&(Local_72[0]), "CS_MrsAdler"))) || (_does_anim_scene_exist(&(Local_72[0])) && !_is_anim_scene_started(&(Local_72[0]), false))) || !_does_anim_scene_exist(&(Local_72[0])))
			{
				clear_sequence_task(&uLocal_1508);
				open_sequence_task(&uLocal_1508);
				task_set_blocking_of_non_temporary_events(0, true);
				if (!func_394(iVar1683, 64))
				{
					task_put_ped_directly_into_cover(0, func_1532(1, 8), 5, 1, 0f, 1, 1, &(iLocal_1777[1]), 0, 1, 0);
				}
				task_combat_hated_targets_around_ped(0, 150f, 0, 66);
				close_sequence_task(iVar1505);
				task_perform_sequence(&(uLocal_239[1]), iVar1505);
				clear_sequence_task(&uLocal_1508);
				func_1293(&iLocal_1832, 15);
			}
			break;
		case 15:
			if (func_1349(11, 15) <= 3)
			{
				remove_ped_defensive_area(&(uLocal_239[1]), false);
				set_ped_sphere_defensive_area(&(uLocal_239[1]), 715.4019f, -515.0953f, 72.0105f, 0.75f, 1, 0, 0);
				func_1350();
				task_combat_hated_targets_around_ped(0, 150f, 0, 0);
				func_1351(&(uLocal_239[1]), -1082130432, -1082130432, 0);
				if (func_26(vLocal_1551[28]))
				{
					func_557(vLocal_1551[28]);
					set_ped_accuracy(&(uLocal_239[1]), 10);
				}
				func_1293(&iLocal_1832, 16);
			}
			else if (!func_26(vLocal_1551[28]))
			{
				func_27(vLocal_1551[28], 0);
			}
			else if (func_913(vLocal_1551[28]) >= 20f)
			{
				set_ped_accuracy(&(uLocal_239[1]), 70);
			}
			break;
		case 16:
			if ((!func_186(&(Local_264[14]), 0) && !func_186(&(Local_264[15]), 0)) && !func_186(&(Local_264[13]), 0))
			{
				set_ped_sphere_defensive_area(&(uLocal_239[1]), 712.5074f, -526.0272f, 71.2318f, 0.75f, 1, 0, 0);
				func_1350();
				task_combat_hated_targets_around_ped(0, 150f, 0, 0);
				func_1351(&(uLocal_239[1]), -1082130432, -1082130432, 0);
				if (func_26(vLocal_1551[28]))
				{
					func_557(vLocal_1551[28]);
					set_ped_accuracy(&(uLocal_239[1]), 10);
				}
				func_1293(&iLocal_1832, 20);
			}
			else if (!func_26(vLocal_1551[28]))
			{
				func_27(vLocal_1551[28], 0);
			}
			else if (func_913(vLocal_1551[28]) >= 20f)
			{
				set_ped_accuracy(&(uLocal_239[1]), 50);
			}
			break;
		case 20:
			break;
	}
}

void func_1354(var uParam0)
{
	iVar0 = 14;
	while (iVar0 <= 15)
	{
		if (!is_entity_dead(&(Local_264[iVar0])) && &Local_264[iVar0] != iVar259)
		{
			*uParam0 = &Local_264[iVar0];
			if (*uParam0 == iVar259)
			{
				vVar1 = { 710.8358f, -526.1792f, 71.4805f };
			}
			else
			{
				vVar1 = { 717.1047f, -525.912f, 72.2424f };
			}
			set_ped_sphere_defensive_area(*uParam0, vVar1, 2f, 0, 0, 0);
			return;
		}
		iVar0++;
	}
}

bool func_1355(int iParam0, float fParam1)
{
	if ((((!is_player_dead(player_id()) && is_player_playing(player_id())) && !is_player_targetting_anything(player_id())) && !is_ped_shooting(Global_35)) && !is_ped_reloading(Global_35))
	{
		if (!func_26(iParam0))
		{
			func_227(iParam0);
		}
		else if (func_1285(iParam0) >= fParam1)
		{
			return true;
		}
	}
	else if (func_26(iParam0))
	{
		func_557(iParam0);
	}
	return false;
}

bool func_1356()
{
	bVar0 = false;
	iVar1 = 16;
	while (iVar1 <= 17)
	{
		if (!does_entity_exist(&(Local_264[iVar1])) && !bVar0)
		{
			func_1335(iVar1, 0);
			bVar0 = true;
		}
		if (!_0xa0bc8faed8cfeb3c(&(Local_264[iVar1])))
		{
			return false;
		}
		iVar1++;
	}
	return !bVar0;
}

bool func_1357()
{
	bVar0 = false;
	iVar1 = 18;
	while (iVar1 <= 19)
	{
		if (!does_entity_exist(&(Local_264[iVar1])) && !bVar0)
		{
			func_1335(iVar1, 0);
			bVar0 = true;
		}
		if (!_0xa0bc8faed8cfeb3c(&(Local_264[iVar1])))
		{
			return false;
		}
		iVar1++;
	}
	return !bVar0;
}

int func_1358(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6, int iParam7, int iParam8, int iParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
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
					if (func_696(iVar3) && _0xf252a85b8f3f8c58(iVar2, iVar3))
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
							if (func_696(iVar4) && iVar4 != iVar0)
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
	if (func_20() == -1 && !func_122(iVar0))
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
				if (func_122(-183018591))
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
		if (iParam0 != Global_35 && func_696(iVar0))
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
		func_611(iVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 752097756, 0);
	}
	else if (!bParam13)
	{
		fVar25 = 0f;
		func_1863(iParam0, &iVar0, &fVar25);
		iVar0 = _give_weapon_to_ped_2(iParam0, iVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 0.5f, 1f, 752097756, bVar22, fVar25, false);
	}
	if (iParam0 != Global_35)
	{
		if (func_1096(iVar0))
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

bool func_1359()
{
	bVar0 = false;
	iVar1 = 20;
	while (iVar1 <= 21)
	{
		if (!does_entity_exist(&(Local_264[iVar1])) && !bVar0)
		{
			func_1335(iVar1, 0);
			bVar0 = true;
		}
		if (!_0xa0bc8faed8cfeb3c(&(Local_264[iVar1])))
		{
			return false;
		}
		iVar1++;
	}
	return !bVar0;
}

bool func_1360()
{
	bVar0 = false;
	if (!bVar0 && !does_entity_exist(&(iLocal_253[6])))
	{
		func_1859(6);
		bVar0 = true;
	}
	if (!bVar0 && !does_entity_exist(&(iLocal_253[7])))
	{
		func_1859(7);
		bVar0 = true;
	}
	return !bVar0;
}

bool func_1361(char[4] cParam0)
{
	iVar0 = func_33(cParam0);
	if (iVar0 <= iLocal_53)
	{
		vVar1 = { 577.38f, -637.59f, 40.67f };
		fVar4 = 170f;
	}
	else if (iVar0 >= iLocal_54)
	{
		vVar1 = { 583.1984f, -625.6459f, 41.1075f };
		fVar4 = 307.63f;
	}
	if (!does_entity_exist(iVar1772))
	{
		func_1244(vVar1, 50f, 0, 0, 0, 0, 0);
		iLocal_1775 = create_vehicle(iLocal_24, vVar1, fVar4, true, true, false, false);
	}
	else
	{
		func_904(iVar1772, vVar1, fVar4, 128, 1073741824);
		if (iVar0 == iLocal_53)
		{
			set_boat_anchor(iVar1772, true);
		}
		add_entity_to_audio_mix_group(iVar1772, "SAD3_Boat_group", 0f);
		set_entity_invincible(iVar1772, true);
		return true;
	}
	return false;
}

bool func_1362()
{
	if (!does_entity_exist(iVar1438))
	{
		iLocal_1440 = create_vehicle(iLocal_21, 600.3401f, -531.5391f, 75.6297f, 236.4421f, true, true, false, false);
		_0xe1a83d4a3b5d7938(iVar1438);
		_0x226c6a4e3346d288(iVar1438, 1);
		set_entity_load_collision_flag(iVar1438, 1);
		set_vehicle_on_ground_properly(iVar1438, 0f);
		set_entity_visible(iVar1438, false);
		freeze_entity_position(iVar1438, true);
		set_entity_collision(iVar1438, false, false);
		return false;
	}
	else
	{
		if (func_1864(&iLocal_1440) && is_vehicle_driveable(iVar1438, false, false))
		{
			_0x3f08c6163a4ab1d6(iVar1438);
			set_vehicle_extra(iVar1438, 1, true);
			set_vehicle_extra(iVar1438, 2, true);
			set_vehicle_extra(iVar1438, 3, true);
			set_vehicle_extra(iVar1438, 4, true);
			set_vehicle_extra(iVar1438, 5, true);
			set_vehicle_extra(iVar1438, 6, true);
			set_vehicle_extra(iVar1438, 7, true);
			set_vehicle_extra(iVar1438, 8, true);
			set_vehicle_extra(iVar1438, 9, true);
			_0x201b8ed4ff7fe9f5(iVar1438);
		}
		iVar0 = 45;
		while (iVar0 <= 50)
		{
			if (!does_entity_exist(&(Local_264[iVar0])))
			{
				func_1335(iVar0, 0);
				return false;
			}
			else if (iVar0 == 45)
			{
				set_ped_into_vehicle(&(Local_264[iVar0]), iVar1438, -1);
			}
			else if (iVar0 == 46)
			{
				set_ped_into_vehicle(&(Local_264[iVar0]), iVar1438, 0);
			}
			iVar0++;
		}
	}
	return true;
}

void func_1363(char[4] cParam0)
{
	switch (func_1297(cParam0))
	{
		case 0:
			if ((func_1258(Global_35, &(iLocal_1784[7]), 1, 0) && func_1262(cParam0, "SAD3_CA_MEET", 0)) || (!func_1258(Global_35, &(iLocal_1784[7]), 1, 0) && func_1262(cParam0, "SAD3_CA_MEETB", 0)))
			{
				func_1264(cParam0, "SAD3_OBJ9", -1082130432, 0, 0, -1, -1, 0);
				func_135(cParam0, 1);
			}
			break;
		case 1:
			if (func_903(Global_35, &(uLocal_239[1]), 1, 1) <= 25f)
			{
				func_227(vLocal_1551[29]);
				fLocal_1701 = 20f;
				if (func_1262(cParam0, "SAD3_CA_RUNUP", 0))
				{
					func_1312(cParam0, &(uLocal_239[1]), 1);
					if (does_blip_exist(Local_1386.f_1))
					{
						_blip_set_modifier(Local_1386.f_1, -401963276);
					}
					func_227(vLocal_1551[21]);
					if (func_186(&(Local_264[20]), 0))
					{
						func_145(cParam0, &(Local_264[20]), "BANDITO_PED3", 0);
					}
					else if (func_186(&(Local_264[21]), 0))
					{
						func_145(cParam0, &(Local_264[21]), "BANDITO_PED3", 0);
					}
					else if (func_186(&(Local_264[24]), 0))
					{
						func_145(cParam0, &(Local_264[24]), "BANDITO_PED3", 0);
					}
					func_1264(cParam0, "SAD3_OBJ10", -1082130432, 0, 0, -1, -1, 0);
					func_135(cParam0, 2);
				}
			}
			break;
		case 2:
			if (!func_1301("SAD3_CA_RUNUP"))
			{
				func_420(&uLocal_1684, 33554432);
				func_135(cParam0, 3);
			}
			break;
		case 3:
			if (func_186(&(Local_264[20]), 0))
			{
				func_145(cParam0, &(Local_264[20]), "BANDITO_PED3", 0);
			}
			else if (func_186(&(Local_264[21]), 0))
			{
				func_145(cParam0, &(Local_264[21]), "BANDITO_PED3", 0);
			}
			else if (func_186(&(Local_264[24]), 0))
			{
				func_145(cParam0, &(Local_264[21]), "BANDITO_PED3", 0);
			}
			if (!func_1298())
			{
				if (func_1285(vLocal_1551[21]) >= 0.5f)
				{
					if (!func_394(iVar1685, 128))
					{
						func_420(&uLocal_1688, 128);
					}
					if (func_1262(cParam0, "SAD3_BAN3_COMB2", 0))
					{
						func_135(cParam0, -1);
					}
					else
					{
						func_135(cParam0, -1);
					}
				}
			}
			else
			{
				func_227(vLocal_1551[21]);
			}
			break;
		case 7:
			if (func_1262(cParam0, "SAD3_BEACH", 0))
			{
				func_1264(cParam0, "SAD3_OBJ10b", -1082130432, 0, 0, -1, -1, 0);
				func_227(vLocal_1551[5]);
				func_135(cParam0, 8);
			}
			break;
		case 8:
			if (!_0x54b187f111d9c6f8(&(uLocal_239[1]), 1))
			{
				if (func_1285(vLocal_1551[5]) >= 3f)
				{
					if (func_1262(cParam0, "SAD3_FUCORTEZ", 0))
					{
						func_1264(cParam0, "SAD3_OBJ10b", -1082130432, 0, 0, -1, -1, 0);
						func_135(cParam0, 9);
					}
				}
			}
			else
			{
				func_227(vLocal_1551[5]);
			}
			break;
		case 9:
			if (func_1372(30, 38) != 0)
			{
				if (!_0x54b187f111d9c6f8(&(uLocal_239[1]), 1))
				{
					if (func_1285(vLocal_1551[5]) >= 6f)
					{
						if (func_1262(cParam0, "SAD3_BEACH2", 0))
						{
							func_227(vLocal_1551[5]);
						}
					}
				}
				else
				{
					func_508(vLocal_1551[5], 4f);
				}
			}
			break;
		case 10:
			if (!func_1298())
			{
				if (func_1285(vLocal_1551[5]) >= 2f)
				{
					if (func_1262(cParam0, "SAD3_AIMBOAT1", 0))
					{
						func_1264(cParam0, "SAD3_OBJ10c", -1082130432, 0, 0, -1, -1, 0);
						func_135(cParam0, 11);
					}
				}
			}
			else
			{
				func_227(vLocal_1551[5]);
			}
			break;
		case 11:
			if (func_1865(cParam0, "SAD3_OBJ10c", 4, 0, 0))
			{
				func_227(vLocal_1551[5]);
				func_135(cParam0, 12);
			}
			break;
		case 12:
			if (!func_1301("SAD3_AIMBOAT1"))
			{
				if (func_1262(cParam0, "SAD3_AIMBOAT3", 0))
				{
					func_135(cParam0, 13);
				}
			}
			break;
		case 13:
			if (!func_1301("SAD3_AIMBOAT3"))
			{
				if (func_1285(vLocal_1551[5]) >= 7f)
				{
					if (func_1262(cParam0, "SAD3_AIMBOAT2", 0))
					{
						func_227(vLocal_1551[5]);
					}
				}
			}
			else
			{
				func_227(vLocal_1551[5]);
			}
			break;
	}
}

void func_1364(char[4] cParam0)
{
	if (!is_entity_dead(iVar1383))
	{
		switch (iVar1706)
		{
			case 0:
				iLocal_1709 = 1;
				break;
			case 1:
				if (is_tracked_ped_visible(iVar1383))
				{
				}
				if (func_903(Global_35, iVar1383, 1, 1) <= 55f)
				{
				}
				if (func_903(Global_35, iVar1772, 1, 1) <= 55f)
				{
				}
				if ((is_tracked_ped_visible(iVar1383) || func_903(Global_35, iVar1383, 1, 1) <= 80f) || func_903(Global_35, iVar1772, 1, 1) <= 80f)
				{
					set_ped_path_may_enter_water(iVar1383, true);
					_0x9de63896b176ea94(iVar1383, 1);
					set_ped_path_prefer_to_avoid_water(iVar1383, false, 1f);
					force_ped_motion_state(iVar1383, -530524, false, 0, false);
					func_1836(iVar1383, 1);
					func_1866(iVar1383, iVar1772, -1, 3f, -1, 1);
					iLocal_1709 = 6;
				}
				if (func_903(Global_35, iVar1772, 1, 1) <= 25f)
				{
					set_ped_into_vehicle(iVar1383, iVar1772, -1);
					func_1836(iVar1383, 1);
					iLocal_1709 = 6;
				}
				break;
			case 6:
				if (is_ped_in_vehicle(iVar1383, iVar1772, false))
				{
					start_audio_scene("SAD3_Rowboat_Escape_Scene");
					set_boat_anchor(iVar1772, false);
					task_vehicle_follow_waypoint_recording(iVar1383, iVar1772, "sad3_boat_FLEE", 524308, 0, 8, -1, -1082130432, 0, 1073741824, 0);
					iLocal_1709 = 7;
				}
				break;
			case 7:
				if (!is_ped_in_vehicle(iVar1383, iVar1772, false))
				{
					set_ped_combat_attributes(iVar1383, 3, false);
					iLocal_1709 = 12;
				}
				else
				{
					vehicle_waypoint_playback_override_speed(iVar1772, 2.25f);
				}
				break;
		}
	}
}

void func_1365(char[4] cParam0)
{
	if ((iVar1706 == 7 && func_903(Global_35, iVar1383, 1, 1) >= 130f) && !func_394(iVar1681, 1073741824))
	{
		func_1340(cParam0, "SAD3_FAIL_KIDNAPPER", "", 1, 0);
	}
}

void func_1366(char[4] cParam0)
{
	switch (iLocal_63)
	{
		case 0:
			if (_does_anim_scene_exist(&(Local_72[4])))
			{
				func_1533(cParam0, 4);
				iLocal_63 = 1;
			}
			break;
		case 1:
			break;
		case 2:
			if (_does_anim_scene_exist(&(Local_72[4])))
			{
				if (!_is_anim_scene_started(&(Local_72[4]), false))
				{
					start_anim_scene(&(Local_72[4]));
				}
				else
				{
					iLocal_63 = 3;
				}
			}
			break;
		case 3:
			if (func_1377(&(Local_72[4])))
			{
				if (_does_anim_scene_exist(&(Local_72[4])))
				{
					_delete_anim_scene(&(Local_72[4]));
				}
			}
			break;
	}
}

void func_1367()
{
	waypoint_recording_get_closest_waypoint(sLocal_233, get_entity_coords(Global_35, true, false), &iVar0);
	switch (iLocal_65)
	{
		case 0:
			if (!func_1258(Global_35, &(iLocal_1784[29]), 1, 0))
			{
				iVar1 = 45;
				while (iVar1 <= 50)
				{
					if (!is_tracked_ped_visible(&(Local_264[iVar1])) && !has_entity_clear_los_to_entity(Global_35, &(Local_264[iVar1]), 17))
					{
						set_entity_visible(&(Local_264[iVar1]), true);
						freeze_entity_position(&(Local_264[iVar1]), false);
						set_entity_collision(&(Local_264[iVar1]), true, false);
						set_ped_accuracy(&(Local_264[iVar1]), 90);
					}
					iVar1++;
				}
				if (!_0xc8ccdb712fbcba92(iVar1438) && !has_entity_clear_los_to_entity(Global_35, iVar1438, 17))
				{
					set_entity_visible(iVar1438, true);
					freeze_entity_position(iVar1438, false);
					set_entity_collision(iVar1438, true, false);
					_0x41cda90ee3450921(iVar1438);
				}
				iLocal_65 = 1;
			}
			break;
		case 1:
			if (!func_1258(Global_35, &(iLocal_1784[29]), 1, 0))
			{
				iVar1 = 45;
				while (iVar1 <= 50)
				{
					if (func_1258(Global_35, &(iLocal_1784[26]), 1, 0))
					{
					}
					if (func_1258(Global_35, &(iLocal_1784[27]), 1, 0))
					{
					}
					if (is_tracked_ped_visible(&(Local_264[iVar1])))
					{
					}
					if ((func_1258(Global_35, &(iLocal_1784[26]), 1, 0) || func_1258(Global_35, &(iLocal_1784[27]), 1, 0)) || is_tracked_ped_visible(&(Local_264[iVar1])))
					{
						_0xfd6943b6df77e449(&(Local_264[iVar1]), true);
						if (!func_394(iVar1683, 1))
						{
							func_420(&uLocal_1685, 1);
						}
						if (is_entity_visible(&(Local_264[iVar1])))
						{
							if (iVar1 == 45)
							{
								if (!func_1259(&(Local_264[iVar1]), 242628503))
								{
									clear_sequence_task(&uLocal_1508);
									open_sequence_task(&uLocal_1508);
									_task_vehicle_drive_to_destination(0, iVar1438, 634.4171f, -555.7009f, 73.94942f, 3f, 524295, 3, 2f, 2f, 1);
									task_combat_hated_targets_in_area(0, get_entity_coords(&(Local_264[iVar1]), true, false), 500f, 0, 0);
									close_sequence_task(iVar1506);
									task_perform_sequence(&(Local_264[iVar1]), iVar1506);
									clear_sequence_task(&uLocal_1508);
								}
							}
							else if (iVar1 == 46)
							{
								if (!func_1259(&(Local_264[iVar1]), 1120685857))
								{
									task_combat_hated_targets_in_area(&(Local_264[iVar1]), get_entity_coords(&(Local_264[iVar1]), true, false), 500f, 0, 0);
								}
							}
							else if (!func_1259(&(Local_264[iVar1]), 1120685857))
							{
								task_combat_hated_targets_in_area(&(Local_264[iVar1]), get_entity_coords(&(Local_264[iVar1]), true, false), 500f, 0, 0);
							}
							if (func_903(Global_35, &(Local_264[iVar1]), 1, 1) <= 20f)
							{
								remove_ped_defensive_area(&(Local_264[iVar1]), false);
							}
						}
					}
					iVar1++;
				}
			}
			if (iVar0 >= 43)
			{
				if (!func_394(iVar1683, 1))
				{
					if (does_entity_exist(iVar1438))
					{
						delete_vehicle(&iLocal_1440);
					}
					iVar1 = 45;
					while (iVar1 <= 50)
					{
						if (does_entity_exist(&(Local_264[iVar1])))
						{
							delete_ped(Local_264[iVar1]);
						}
						iVar1++;
					}
					iLocal_65 = 2;
				}
			}
			break;
	}
}

void func_1368()
{
	if (!func_26(vLocal_1551[32]))
	{
		func_27(vLocal_1551[32], 0);
	}
	iVar0 = 24;
	while (iVar0 <= 38)
	{
		if (does_entity_exist(&(Local_264[iVar0])))
		{
			if (func_1250(&(Local_264[iVar0]), Local_264[iVar0]->f_10, 1) < 2.1f && is_tracked_ped_visible(&(Local_264[iVar0])))
			{
				if (!func_26(&(Local_264[iVar0]->f_7)))
				{
					func_27(&(Local_264[iVar0]->f_7), 0);
				}
			}
			if (func_1285(&(Local_264[iVar0]->f_7)) >= 10f && func_1285(vLocal_1551[32]) >= 5f)
			{
				_0xd05ad61f242c626b(&(Local_264[iVar0]), 1000f);
				_0xc2266aa617668ad3(&(Local_264[iVar0]), 1000f);
				func_227(vLocal_1551[32]);
				func_557(&(Local_264[iVar0]->f_7));
			}
			if (_0xdc9273d95976ba22(&(Local_264[iVar0])) == 1000f)
			{
				set_ped_reset_flag(&(Local_264[iVar0]), 23, true);
			}
		}
		iVar0++;
	}
}

void func_1369(char[4] cParam0)
{
	waypoint_recording_get_closest_waypoint(sLocal_233, get_entity_coords(Global_35, true, false), &iVar0);
	func_1867(cParam0);
	if (func_26(vLocal_1551[27]))
	{
	}
	if (func_1372(20, 38) == 0)
	{
		if (!func_26(vLocal_1551[27]))
		{
			if (func_1250(&(uLocal_239[1]), vLocal_1541, 1) <= 2.5f)
			{
				func_27(vLocal_1551[27], 0);
			}
		}
		else
		{
			if (!bVar1)
			{
				if (func_1248(cParam0) <= 1)
				{
					if (!_0x54b187f111d9c6f8(&(uLocal_239[1]), 1))
					{
						func_1262(cParam0, "SAD3_MOVEMOVE", 0);
					}
				}
			}
			bVar1 = true;
		}
	}
	else if (func_26(vLocal_1551[27]))
	{
		bVar1 = false;
		func_557(vLocal_1551[27]);
	}
	if (iVar0 == 16)
	{
		if (!func_394(iVar1684, 1))
		{
			iLocal_66 = 2;
			func_420(&uLocal_1687, 1);
		}
	}
	else if (iVar0 == 22)
	{
		if (!func_394(iVar1684, 2))
		{
			iLocal_66 = 3;
			if (func_1248(cParam0) <= 1)
			{
				if (!_0x54b187f111d9c6f8(&(uLocal_239[1]), 1))
				{
					func_1262(cParam0, "SAD3_MOVEMOVE", 0);
				}
			}
			func_420(&uLocal_1687, 2);
		}
	}
	else if (iVar0 == 30)
	{
		if (!func_394(iVar1684, 4))
		{
			iLocal_66 = 4;
			func_420(&uLocal_1687, 4);
		}
	}
	else if (iVar0 == 37)
	{
		if (!func_394(iVar1684, 8))
		{
			iLocal_66 = 5;
			if (func_1248(cParam0) <= 1)
			{
				if (!_0x54b187f111d9c6f8(&(uLocal_239[1]), 1))
				{
					func_1262(cParam0, "SAD3_MOVEMOVE", 0);
				}
			}
			func_420(&uLocal_1687, 8);
		}
	}
	else if (iVar0 == 44)
	{
		if (!func_394(iVar1684, 16))
		{
			iLocal_66 = 6;
			func_420(&uLocal_1687, 16);
		}
	}
	else if (iVar0 == 52)
	{
		if (!func_394(iVar1684, 32))
		{
			iLocal_66 = 7;
			if (func_1248(cParam0) <= 1)
			{
				if (!_0x54b187f111d9c6f8(&(uLocal_239[1]), 1))
				{
					func_1262(cParam0, "SAD3_MOVEMOVE", 0);
				}
			}
			func_420(&uLocal_1687, 32);
		}
	}
	else if (iVar0 == 57)
	{
		if (!func_394(iVar1684, 64))
		{
			iLocal_66 = 8;
			func_420(&uLocal_1687, 64);
		}
	}
	else if (iVar0 == 62)
	{
		if (!func_394(iVar1684, 128))
		{
			iLocal_66 = 9;
			if (func_1248(cParam0) <= 1)
			{
				if (!_0x54b187f111d9c6f8(&(uLocal_239[1]), 1))
				{
					func_1262(cParam0, "SAD3_MOVEMOVE", 0);
				}
			}
			func_420(&uLocal_1687, 128);
		}
	}
	else if (iVar0 == 74)
	{
		if (!func_394(iVar1684, 256))
		{
			iLocal_66 = 10;
			func_420(&uLocal_1687, 256);
		}
	}
	switch (iLocal_66)
	{
		case 1:
			vLocal_1541 = { 688.7137f, -535.9912f, 70.10723f };
			remove_ped_defensive_area(&(uLocal_239[1]), false);
			set_ped_sphere_defensive_area(&(uLocal_239[1]), vLocal_1541, 1f, 1, 0, 0);
			if (bVar1)
			{
				vLocal_1541 = { 680.8095f, -539.5477f, 68.94474f };
				func_420(&uLocal_1687, 1);
				bVar1 = false;
				func_557(vLocal_1551[27]);
				iLocal_66 = 2;
			}
			break;
		case 2:
			vLocal_1541 = { 680.8095f, -539.5477f, 68.94474f };
			remove_ped_defensive_area(&(uLocal_239[1]), false);
			set_ped_sphere_defensive_area(&(uLocal_239[1]), vLocal_1541, 1f, 1, 0, 0);
			if (bVar1)
			{
				vLocal_1541 = { 671.364f, -545.358f, 68.45767f };
				func_420(&uLocal_1687, 2);
				bVar1 = false;
				func_557(vLocal_1551[27]);
				iLocal_66 = 3;
			}
			break;
		case 3:
			vLocal_1541 = { 671.364f, -545.358f, 68.45767f };
			remove_ped_defensive_area(&(uLocal_239[1]), false);
			set_ped_sphere_defensive_area(&(uLocal_239[1]), vLocal_1541, 1f, 1, 0, 0);
			if (bVar1)
			{
				vLocal_1541 = { 647.2861f, -561.9218f, 66.37f };
				func_420(&uLocal_1687, 4);
				func_557(vLocal_1551[27]);
				bVar1 = false;
				iLocal_66 = 4;
			}
			break;
		case 4:
			vLocal_1541 = { 647.2861f, -561.9218f, 66.37f };
			remove_ped_defensive_area(&(uLocal_239[1]), false);
			set_ped_sphere_defensive_area(&(uLocal_239[1]), vLocal_1541, 1f, 1, 0, 0);
			if (bVar1)
			{
				vLocal_1541 = { 643.9082f, -571.6401f, 64.49853f };
				func_420(&uLocal_1687, 8);
				func_557(vLocal_1551[27]);
				bVar1 = false;
				iLocal_66 = 5;
			}
			break;
		case 5:
			vLocal_1541 = { 643.9082f, -571.6401f, 64.49853f };
			remove_ped_defensive_area(&(uLocal_239[1]), false);
			set_ped_sphere_defensive_area(&(uLocal_239[1]), vLocal_1541, 1f, 1, 0, 0);
			if (bVar1)
			{
				vLocal_1541 = { 636.6007f, -582.635f, 59.09217f };
				func_420(&uLocal_1687, 16);
				func_557(vLocal_1551[27]);
				bVar1 = false;
				iLocal_66 = 6;
			}
			break;
		case 6:
			vLocal_1541 = { 636.6007f, -582.635f, 59.09217f };
			remove_ped_defensive_area(&(uLocal_239[1]), false);
			set_ped_sphere_defensive_area(&(uLocal_239[1]), vLocal_1541, 1f, 1, 0, 0);
			if (bVar1)
			{
				vLocal_1541 = { 626.3519f, -585.4892f, 55.55062f };
				func_420(&uLocal_1687, 32);
				func_557(vLocal_1551[27]);
				bVar1 = false;
				iLocal_66 = 7;
			}
			break;
		case 7:
			vLocal_1541 = { 626.3519f, -585.4892f, 55.55062f };
			remove_ped_defensive_area(&(uLocal_239[1]), false);
			set_ped_sphere_defensive_area(&(uLocal_239[1]), vLocal_1541, 1f, 1, 0, 0);
			if (bVar1)
			{
				vLocal_1541 = { 622.8557f, -599.1309f, 52.50756f };
				func_420(&uLocal_1687, 64);
				func_557(vLocal_1551[27]);
				bVar1 = false;
				iLocal_66 = 8;
			}
			break;
		case 8:
			vLocal_1541 = { 622.8557f, -599.1309f, 52.50756f };
			remove_ped_defensive_area(&(uLocal_239[1]), false);
			set_ped_sphere_defensive_area(&(uLocal_239[1]), vLocal_1541, 1f, 1, 0, 0);
			if (bVar1)
			{
				vLocal_1541 = { 612.9921f, -605.6162f, 49.07291f };
				func_420(&uLocal_1687, 128);
				func_557(vLocal_1551[27]);
				bVar1 = false;
				iLocal_66 = 9;
			}
			break;
		case 9:
			vLocal_1541 = { 612.9921f, -605.6162f, 49.07291f };
			remove_ped_defensive_area(&(uLocal_239[1]), false);
			set_ped_sphere_defensive_area(&(uLocal_239[1]), vLocal_1541, 1f, 1, 0, 0);
			break;
	}
}

void func_1370(int iParam0)
{
	if (iParam0 == 28)
	{
		if (does_entity_exist(&(Local_264[iParam0])))
		{
			if (!func_1258(Global_35, &(iLocal_1784[26]), 1, 0) && !func_1258(Global_35, &(iLocal_1784[27]), 1, 0))
			{
				if (!is_tracked_point_visible(Local_264[iParam0]->f_19) && !has_entity_clear_los_to_entity(Global_35, &(Local_264[iParam0]), 17))
				{
					if (does_entity_exist(&(Local_1285[0])))
					{
						if (!func_394(iVar1681, 16777216))
						{
							if (!is_tracked_ped_visible(&(Local_1285[0])) && !has_entity_clear_los_to_entity(Global_35, &(Local_1285[0]), 17))
							{
								set_entity_visible(&(Local_1285[0]), true);
								freeze_entity_position(&(Local_1285[0]), false);
								set_entity_collision(&(Local_1285[0]), true, false);
								set_entity_visible(&(Local_264[iParam0]), true);
								freeze_entity_position(&(Local_264[iParam0]), false);
								set_entity_collision(&(Local_264[iParam0]), true, false);
								_0xc9151483cc06a414(&(Local_1285[0]));
								_set_ped_on_mount(&(Local_264[iParam0]), &(Local_1285[0]), -1, true);
								func_420(&uLocal_1684, 16777216);
							}
						}
					}
					if (!func_1824(Local_264[iParam0]->f_10, 0f, 0f, 0f))
					{
						if (!func_1259(&(Local_264[iParam0]), 242628503))
						{
							force_ped_motion_state(&(Local_264[0]), -530524, false, 0, false);
							clear_sequence_task(&uLocal_1508);
							open_sequence_task(&uLocal_1508);
							task_combat_hated_targets_in_area(0, Local_264[iParam0]->f_10, 500f, 0, 0);
							close_sequence_task(iVar1505);
							task_perform_sequence(&(Local_264[iParam0]), iVar1505);
							clear_sequence_task(&uLocal_1508);
							_0x2208438012482a1a(&(Local_264[iParam0]), false, false);
						}
					}
					else if (!func_1259(&(Local_264[iParam0]), -1442466670))
					{
						task_combat_hated_targets_around_ped(&(Local_264[iParam0]), 200f, 0, 0);
					}
				}
			}
		}
	}
	else if (does_entity_exist(&(Local_264[iParam0])))
	{
		if (!is_tracked_ped_visible(&(Local_264[iParam0])) && !has_entity_clear_los_to_entity(Global_35, &(Local_264[iParam0]), 17))
		{
			set_entity_visible(&(Local_264[iParam0]), true);
			freeze_entity_position(&(Local_264[iParam0]), false);
			set_entity_collision(&(Local_264[iParam0]), true, false);
			if (!func_1824(Local_264[iParam0]->f_10, 0f, 0f, 0f))
			{
				if (!func_1259(&(Local_264[iParam0]), 242628503))
				{
					force_ped_motion_state(&(Local_264[iParam0]), -530524, false, 0, false);
					clear_sequence_task(&uLocal_1508);
					open_sequence_task(&uLocal_1508);
					task_combat_hated_targets_in_area(0, Local_264[iParam0]->f_10, 500f, 0, 0);
					close_sequence_task(iVar1505);
					task_perform_sequence(&(Local_264[iParam0]), iVar1505);
					clear_sequence_task(&uLocal_1508);
					_0x2208438012482a1a(&(Local_264[iParam0]), false, false);
				}
			}
			else if (!func_1259(&(Local_264[iParam0]), -1442466670))
			{
				task_combat_hated_targets_around_ped(&(Local_264[iParam0]), 200f, 0, 0);
			}
		}
	}
}

int func_1371(int iParam0)
{
	switch (iParam0)
	{
		case 24:
			return 14;
		case 25:
			return 15;
		case 26:
			return 16;
		case 27:
			return 23;
		case 28:
			return 23;
		case 29:
			return 21;
		case 30:
			return 33;
		case 38:
			return 38;
		case 31:
			return 38;
		case 32:
			return 47;
		case 33:
			return 57;
		case 34:
			return 63;
		case 35:
			return 63;
		case 36:
			return 63;
		case 37:
			return 65;
	}
	return 0;
}

int func_1372(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	while (iVar0 <= iParam1)
	{
		if ((func_186(&(Local_264[iVar0]), 3) && func_903(Global_35, &(Local_264[iVar0]), 1, 1) <= 100f) && ((func_1259(&(Local_264[iVar0]), -1442466670) || func_1259(&(Local_264[iVar0]), 1120685857)) || func_1259(&(Local_264[iVar0]), 242628503)))
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

int func_1373(int iParam0, int iParam1, bool bParam2)
{
	iVar0 = _blip_add_for_entity(iParam0, iParam1);
	if (bParam2)
	{
		_blip_set_modifier(iVar0, 231194138);
	}
	return iVar0;
}

bool func_1374(var uParam0, int iParam1, var uParam2)
{
	if (!is_entity_dead(iParam1))
	{
		if (!network_is_in_session())
		{
			fVar0 = func_1868(uParam2);
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
			if (func_1869(uParam2, iParam1))
			{
				func_1870(uParam2, 1);
				return true;
			}
		}
	}
	return false;
}

bool func_1375(var uParam0, int iParam1, var uParam2, bool bParam3)
{
	vVar0 = { get_entity_coords(iParam1, false, true) };
	iVar3 = func_1871(uParam2);
	if (!bParam3)
	{
		switch (iVar3)
		{
			case 0:
				if (is_shocking_event_in_sphere(217247011, vVar0, uParam2->f_22))
				{
					func_1870(uParam2, 1);
					return true;
				}
				break;
			case 1:
				if (is_shocking_event_in_sphere(956330317, vVar0, uParam2->f_27))
				{
					func_1870(uParam2, 1);
					return true;
				}
				break;
			case 2:
				if (is_shocking_event_in_sphere(-966930978, vVar0, uParam2->f_22))
				{
					get_coords_of_projectile_type_within_distance(iParam1, -1504859554, uParam2->f_26, &vVar4, 0, 0);
					if (func_1872(iParam1, vVar0, vVar4))
					{
						func_1870(uParam2, 1);
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
					func_1870(uParam2, 1);
					return true;
				}
				break;
			case 2:
				if (is_shocking_event_in_sphere(-966930978, vVar0, uParam2->f_22))
				{
					get_coords_of_projectile_type_within_distance(iParam1, -1504859554, uParam2->f_26, &vVar7, 0, 0);
					if (func_1872(iParam1, vVar0, vVar7))
					{
						func_1870(uParam2, 1);
						return true;
					}
				}
				break;
		}
	}
	return false;
}

bool func_1376(vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6)
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

bool func_1377(int iParam0)
{
	return (!_does_anim_scene_exist(iParam0) || _is_anim_scene_finished(iParam0, false));
}

bool func_1378(int iParam0)
{
	bVar0 = false;
	switch (iParam0)
	{
		case 0:
			iVar2 = 39;
			iVar3 = 40;
			break;
		case 1:
			iVar2 = 42;
			iVar3 = 42;
			break;
		case 2:
			iVar2 = 41;
			iVar3 = 41;
			break;
		case 3:
			iVar2 = 43;
			iVar3 = 44;
			break;
	}
	iVar1 = iVar2;
	while (iVar1 <= iVar3)
	{
		if (!does_entity_exist(&(Local_264[iVar1])) && !bVar0)
		{
			func_1335(iVar1, 0);
			bVar0 = true;
		}
		if (!_0xa0bc8faed8cfeb3c(&(Local_264[iVar1])))
		{
			return false;
		}
		iVar1++;
	}
	return !bVar0;
}

void func_1379(int iParam0, bool bParam1)
{
	if (!func_485(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (func_991(&((*Global_1360165)[iParam0]->f_12), 16))
		{
			func_990(iParam0, 16, 0);
		}
	}
	func_990(iParam0, 1, bParam1);
}

void func_1380(char[4] cParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	func_1873(&(cParam0->f_7375), iParam1, iParam2, sParam3, iParam4, iParam5);
}

void func_1381(char[4] cParam0)
{
	switch (func_1297(cParam0))
	{
		case 0:
			if (func_1839(&Local_264, &iVar0, get_entity_coords(Global_35, true, false), 50f))
			{
				func_145(cParam0, iVar0, "BANDITO_PED5", 0);
				if (func_1262(cParam0, "SAD3_BAN5_FINAL", 0))
				{
					func_1264(cParam0, "SAD3_OBJ11a", -1082130432, 0, 0, -1, -1, 0);
					func_227(vLocal_1551[5]);
					func_135(cParam0, 1);
				}
			}
			break;
		case 1:
			if (!func_1298())
			{
				if (func_1262(cParam0, "SAD3_BU_ARRIVE", 0))
				{
					func_227(vLocal_1551[5]);
					func_135(cParam0, 2);
				}
			}
			break;
		case 2:
			if (!func_1298())
			{
				if (func_913(vLocal_1551[5]) >= 3f)
				{
					if (func_1839(&Local_264, &iVar0, get_entity_coords(Global_35, true, false), 100f))
					{
						func_145(cParam0, iVar0, "BANDITO_PED3", 0);
						if (func_1262(cParam0, "SAD3_BAN3_FIN_A", 0))
						{
							func_227(vLocal_1551[5]);
							func_135(cParam0, 3);
						}
					}
				}
			}
			else
			{
				func_227(vLocal_1551[5]);
			}
			break;
		case 3:
			if (!func_1298())
			{
				if (func_1285(vLocal_1551[5]) >= 2f && func_1262(cParam0, "SAD3_BU_MOREFU", 0))
				{
					func_227(vLocal_1551[5]);
					func_135(cParam0, 4);
				}
			}
			else
			{
				func_227(vLocal_1551[5]);
			}
			break;
		case 4:
			if (!func_1301("SAD3_BU_MOREFU"))
			{
				if (func_1285(vLocal_1551[5]) >= 2f)
				{
					if (func_1839(&Local_264, &iVar0, get_entity_coords(Global_35, true, false), 100f))
					{
						func_145(cParam0, iVar0, "BANDITO_PED7", 0);
						if (func_1262(cParam0, "SAD3_BAN7_FIN", 0))
						{
							func_227(vLocal_1551[5]);
							func_135(cParam0, -1);
						}
					}
				}
			}
			else
			{
				func_227(vLocal_1551[5]);
			}
			break;
		case 5:
			if (!func_1301("SAD3_BAN7_FIN"))
			{
				if (func_1285(vLocal_1551[5]) >= 7f)
				{
					if (func_1262(cParam0, "SAD3_BU_MOREFU", 0))
					{
						func_227(vLocal_1551[5]);
						func_135(cParam0, -1);
					}
				}
			}
			else
			{
				func_508(vLocal_1551[5], 7f);
			}
			break;
		case 6:
			func_227(vLocal_1551[5]);
			func_135(cParam0, 7);
			break;
		case 7:
			if (func_913(vLocal_1551[5]) >= 1.5f && func_1262(cParam0, "SAD3_BU_DONE", 0))
			{
				func_135(cParam0, -1);
			}
			break;
	}
}

void func_1382(char[4] cParam0)
{
	func_1874(cParam0, 585.4218f, -624.4282f, 40.7559f, "SAD3_WARN_BACKUP", "SAD3_FAIL_ABAND", 60f, 80f, 0, 0, 0, 1, 1);
}

int func_1383()
{
	iVar0 = 51;
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (func_186(&(Local_264[iVar1]), 3))
		{
			iVar2++;
		}
		iVar1++;
	}
	return iVar2;
}

void func_1384(var uParam0, int iParam1, int iParam2)
{
	task_whistle_anim(uParam0, iParam1, iParam2);
}

void func_1385(char[4] cParam0, char[4] cParam1)
{
	func_1875(&(cParam0->f_7375), cParam1, func_162(cParam0, func_33(cParam0)) != 5);
}

void func_1386(char[4] cParam0)
{
	if (!func_394(iVar1685, 2048))
	{
		func_1770(&(uLocal_239[1]), cLocal_237, 1, 1);
	}
	if (func_903(Global_35, &(uLocal_239[1]), 1, 1) > 15f)
	{
		if (func_1301("SAD3_HOGTIED"))
		{
			if (!func_1800("SAD3_HOGTIED"))
			{
				pause_scripted_conversation("SAD3_HOGTIED", true, false, false, true);
				if (!func_394(iVar1685, 2048))
				{
					func_420(&uLocal_1688, 2048);
				}
			}
		}
	}
	else if (!func_1298())
	{
		if (func_1800("SAD3_HOGTIED"))
		{
			restart_scripted_conversation("SAD3_HOGTIED");
			if (func_394(iVar1685, 2048))
			{
				func_1254(&uLocal_1688, 2048);
			}
		}
	}
	switch (func_1297(cParam0))
	{
		case 0:
			if (func_913(vLocal_1551[5]) >= 2f)
			{
				if (func_1262(cParam0, "SAD3_HOGTIED", 0))
				{
					if (!func_1771("SAD3_OBJ4b"))
					{
						func_1265(cParam0, "SAD3_OBJ4b", 0, 7500, 0, -1082130432, 0, 0, -1, -1, 0);
					}
					cLocal_237 = "SAD3_HOGTIED";
					if (!func_26(vLocal_1551[13]))
					{
						func_27(vLocal_1551[13], 0);
					}
					func_1264(cParam0, "SAD3_OBJ4b", -1082130432, 0, 0, -1, -1, 0);
					func_135(cParam0, 2);
				}
			}
			break;
		case 2:
			if (func_1301(cLocal_237))
			{
				if (get_current_scripted_conversation_line(cLocal_237) >= 1)
				{
					func_135(cParam0, -1);
				}
			}
			break;
		case 3:
			if (!func_1298())
			{
				if (func_913(vLocal_1551[13]) >= 10f)
				{
					if (func_1262(cParam0, "SAD3_LIFT_IDLE", 0))
					{
						func_227(vLocal_1551[13]);
						func_135(cParam0, -1);
					}
				}
			}
			else
			{
				func_227(vLocal_1551[13]);
			}
			break;
		case 4:
			if (_is_ped_getting_into_a_mount_seat(&(uLocal_239[1]), true))
			{
				if (!func_1301("SAD3_LIFT_IDLE"))
				{
					if (func_1285(vLocal_1551[5]) >= 7f)
					{
						if (func_1262(cParam0, "SAD3_LIFT_GOGO", 0))
						{
							func_1264(cParam0, "SAD3_OBJ12a", -1082130432, 0, 0, -1, -1, 0);
							func_227(vLocal_1551[5]);
						}
					}
				}
				else
				{
					func_508(vLocal_1551[5], 7f);
				}
			}
			break;
		case 5:
			if (!func_1301("SAD3_LIFT_GOGO"))
			{
				if (!func_1771("SAD3_OBJ12a"))
				{
					func_1265(cParam0, "SAD3_OBJ12a", 0, 7500, 0, -1082130432, 0, 0, -1, -1, 0);
				}
				if (func_1262(cParam0, "SAD3_BACKTORHD", 0))
				{
					cLocal_237 = "SAD3_BACKTORHD";
					func_135(cParam0, -1);
				}
			}
			break;
		case 7:
			if (!func_1298())
			{
				if (func_1262(cParam0, "SAD3_BACKINRHD", 0))
				{
					func_135(cParam0, -1);
				}
			}
			break;
		case 8:
			if (!_0x54b187f111d9c6f8(&(uLocal_239[1]), 1))
			{
				if (func_1262(cParam0, "SAD3_BACKGETHIM", 0))
				{
					func_1264(cParam0, "SAD3_OBJ4b", -1082130432, 0, 0, -1, -1, 0);
					func_1265(cParam0, "SAD3_OBJ4b", 0, 7500, 0, -1082130432, 0, 0, -1, -1, 0);
					func_135(cParam0, 9);
				}
			}
			else
			{
				func_47(0, 0);
			}
			break;
		case 9:
			if (!func_1301("SAD3_BACKGETHIM"))
			{
				if (func_1262(cParam0, "SAD3_BACKCOR", 0))
				{
					func_135(cParam0, -1);
				}
			}
			break;
	}
}

void func_1387(char[4] cParam0)
{
	switch (iVar1829)
	{
		case 0:
			func_1293(&iLocal_1832, 2);
			break;
		case 2:
			if (!func_1259(iLocal_250, 1227113341))
			{
				if (!func_1259(&(uLocal_239[1]), 1868526510))
				{
					task_mount_animal(&(uLocal_239[1]), iLocal_250, -1, -1, 1073741824, 1, 0, 0);
					set_blocking_of_non_temporary_events(&(uLocal_239[1]), false);
					func_1293(&iLocal_1832, 8);
				}
			}
			break;
		case 8:
			if (_get_carrier_as_mount(iVar1383) == iLocal_250 || _get_carrier_as_mount(iVar1383) == iLocal_249)
			{
				if (!func_1259(iLocal_250, 242628503))
				{
					clear_sequence_task(&uLocal_1508);
					open_sequence_task(&uLocal_1508);
					task_turn_ped_to_face_entity(0, Global_35, 0, -1082130432, -1082130432, -1082130432);
					close_sequence_task(iVar1505);
					_task_perform_sequence_2(iLocal_250, iVar1505, 1f, 1f);
					clear_sequence_task(&uLocal_1508);
					func_1293(&iLocal_1832, 3);
				}
			}
			break;
		case 3:
			if (is_ped_on_mount(Global_35))
			{
				if (func_1259(iLocal_250, 242628503))
				{
					clear_ped_tasks_immediately(iLocal_250, false, true);
				}
			}
			if (func_1250(Global_35, vLocal_1514, 1) <= 50f)
			{
				if (!func_1259(&(uLocal_239[1]), 713668775))
				{
					task_follow_nav_mesh_to_coord(&(uLocal_239[1]), 1345.973f, -1308.072f, 75.5759f, 1.25f, -1, 0.25f, 0, 338.5156f);
					func_1293(&iLocal_1832, 9);
				}
			}
			break;
		case 9:
			if (!func_1259(&(uLocal_239[1]), 713668775))
			{
				if (!is_ped_on_mount(&(uLocal_239[1])))
				{
					set_ped_config_flag(&(uLocal_239[1]), 167, false);
					_0x0c6b89876262a99d(player_id(), &(uLocal_239[1]));
					if (is_ped_in_group(&(uLocal_239[1])))
					{
						remove_ped_from_group(&(uLocal_239[1]));
					}
					if (does_group_exist(iVar1507))
					{
						remove_group(iVar1507);
					}
					func_135(cParam0, 8);
					set_blocking_of_non_temporary_events(&(uLocal_239[1]), true);
					task_follow_nav_mesh_to_coord(&(uLocal_239[1]), vLocal_1538, 1f, -1, 0.25f, 0, 341.6696f);
					func_1293(&iLocal_1832, 10);
				}
			}
			break;
		case 16:
			break;
	}
}

void func_1388(char[4] cParam0)
{
	switch (iLocal_64)
	{
		case 0:
			if (_does_anim_scene_exist(&(Local_72[7])))
			{
				func_1533(cParam0, 7);
				iLocal_64 = 2;
			}
			break;
		case 1:
			if (func_1316(Global_35, iVar1383))
			{
				if (func_1250(Global_35, vLocal_1538, 1) <= 5f)
				{
					if (!func_26(vLocal_1551[2]))
					{
						func_27(vLocal_1551[2], 0);
					}
					set_anim_scene_bool(&(Local_72[7]), "Looper", true, false);
					iLocal_64 = 3;
				}
			}
			else if (func_26(vLocal_1551[2]))
			{
				func_557(vLocal_1551[2]);
			}
			break;
		case 2:
			if (_does_anim_scene_exist(&(Local_72[7])) && _is_anim_scene_loaded(&(Local_72[7]), true, false))
			{
				if (!_is_anim_scene_started(&(Local_72[7]), false))
				{
					start_anim_scene(&(Local_72[7]));
				}
				else
				{
					iLocal_64 = 1;
				}
			}
			break;
		case 3:
			if (func_26(vLocal_1551[2]))
			{
				func_557(vLocal_1551[2]);
			}
			if (func_1377(&(Local_72[7])) || _get_anim_scene_progress(&(Local_72[7])) >= 1f)
			{
				if (_does_anim_scene_exist(&(Local_72[7])))
				{
					iLocal_64 = 4;
				}
			}
			break;
	}
}

bool func_1389(char[4] cParam0)
{
	if (!does_entity_exist(iVar260))
	{
		iLocal_263 = func_1785(iLocal_19, 0f, 0f, 0f, 0f, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
		return false;
	}
	if (does_entity_exist(iVar1773) && func_1864(&iLocal_1776))
	{
		func_426(cParam0, iVar1773, "wagonprison01x", 0, 0, 0, 0);
	}
	else
	{
		return false;
	}
	if (has_model_loaded(-1866470762))
	{
		if (iVar1890 == 0)
		{
			uLocal_1893 = _0x6f3068258a499e52(-1866470762, 1359.618f, -1306.845f, 77.50598f, 7);
			return false;
		}
		else if (_0x1ff441d7954f8709(iVar1890))
		{
			uLocal_1894 = _0x4735e2a4bb83d9da(iVar1890);
			func_426(cParam0, iVar1891, "p_doorrhosheriff02x", 0, 0, 0, 0);
		}
		else
		{
			return false;
		}
	}
	return true;
}

void func_1390(int iParam0)
{
	iParam0 = func_271(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_1876(iParam0, 32);
	func_272();
}

int func_1391(int iParam0, vector3 vParam1, bool bParam4)
{
	iVar0 = _blip_add_for_coord(iParam0, vParam1);
	if (bParam4)
	{
		_blip_set_modifier(iVar0, 231194138);
	}
	return iVar0;
}

char* func_1392()
{
	return _uilog_get_cached_objective();
}

bool func_1393()
{
	if (!does_entity_exist(iLocal_247))
	{
		iLocal_247 = func_1785(-1904849241, 1361.11f, -1300.945f, 76.7606f, 0, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
		return false;
	}
	else
	{
		_set_ped_body_component(iLocal_247, 41788943);
		_update_ped_variation(iLocal_247, false, true, true, true, false);
	}
	if (!does_entity_exist(iLocal_248))
	{
		iLocal_248 = func_1785(2074847506, 1361.11f, -1300.945f, 76.7606f, 0, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
		return false;
	}
	else
	{
		_set_ped_body_component(iLocal_248, 41788943);
		_update_ped_variation(iLocal_248, false, true, true, true, false);
	}
	return true;
}

void func_1394()
{
	if (!does_entity_exist(iVar1774))
	{
		iLocal_1776 = create_vehicle(-859420242, 1360.882f, -1314.074f, 76.6889f, 245.79f, true, true, false, false);
		set_vehicle_is_considered_by_player(iVar1774, false);
		func_1289(23);
	}
}

void func_1395(char[4] cParam0, char[4] cParam1)
{
	func_1877(&(cParam0->f_7375), cParam1);
}

void func_1396(char[4] cParam0, int iParam1)
{
	func_140(cParam0, func_33(cParam0), iParam1);
}

void func_1397(char[4] cParam0, int iParam1)
{
	func_1878(&(cParam0->f_7375.f_861), iParam1);
}

void func_1398(char[4] cParam0, int iParam1)
{
	func_754(&(cParam0->f_7375), iParam1);
}

bool func_1399()
{
	if (iLocal_69 >= 2 && iLocal_69 <= 4)
	{
		_0xe296208c273bd7f0(0, -1, 0, 17, 1, 0);
		disable_control_action(0, 1287709438, false);
		_0x702b75dc9d3ede56(true);
	}
	switch (iLocal_69)
	{
		case 0:
			if (!func_394(iVar1683, 1048576))
			{
				_0x1b3c2d961f5fc0e1("script@Story@SAD3@ReturnToBeechers");
				func_420(&uLocal_1684, 1048576);
			}
			iLocal_69 = 1;
			break;
		case 1:
			if (iLocal_57 == 2)
			{
				iLocal_69 = 2;
			}
			break;
		case 2:
			if (_0xdd0b7c5ae58f721d("script@Story@SAD3@ReturnToBeechers"))
			{
			}
			if (_0xdd0b7c5ae58f721d("script@Story@SAD3@ReturnToBeechers") && is_screen_faded_out())
			{
				iLocal_1703 = 1;
				if (!func_26(vLocal_1551[19]))
				{
					func_27(vLocal_1551[19], 0);
				}
				set_player_control(player_id(), false, 0, false);
				set_clock_time(18, 30, 0);
				_0x5e3ccf03995388b5(647011488, -1483f, -1325.7f, 89.6f);
				_set_ped_on_mount(Global_35, iLocal_249, -1, true);
				func_904(iLocal_249, -1405.5f, -1401.4f, 92.293f, 359.909f, 34, 1073741824);
				prefetch_srl("script@cme@SAD3_TIMELAPSE_SHOT1_srl");
				_0xae00387e53b1e9fc();
				_0xbc016635d6a73b31("script@Story@SAD3@ReturnToBeechers", "GreatPlains", 5);
				func_227(vLocal_1551[19]);
				func_190(1193080109, 1, 0);
				iLocal_69 = 3;
			}
			break;
		case 3:
			waypoint_playback_override_speed(Global_35, 1.5f, 0, -1082130432, 0);
			if (func_913(vLocal_1551[19]) >= 2f)
			{
				if ((is_screen_faded_out() && is_srl_loaded()) && !is_screen_fading_in())
				{
					task_follow_waypoint_recording(Global_35, "sad3_cme_timelapse", 0, 9480, -1, 0, 0, -1);
					_0x2208438012482a1a(Global_35, true, false);
					_0x2208438012482a1a(iLocal_249, true, false);
					force_ped_motion_state(iLocal_249, -1415276238, false, 0, false);
					waypoint_playback_override_speed(Global_35, 1.5f, 0, -1082130432, 0);
					do_screen_fade_in(1000);
				}
			}
			if (iVar1695 < 10)
			{
				iLocal_1697 = iVar1695 + 1;
				return false;
			}
			if (bVar1701)
			{
				end_srl();
				prefetch_srl("script@cme@SAD3_TIMELAPSE_SHOT3_srl");
				_0xae00387e53b1e9fc();
				iLocal_1703 = 0;
			}
			if (_0xffe9c53deea3db0b((_0xea113bf9b0c0c5d7("script@Story@SAD3@ReturnToBeechers", "GreatPlains", 5) - func_228(vLocal_1551[19])), -1912002240, -1671.5f, -1508.2f, 85.4f, is_srl_loaded(), (_0x465f04f68ad38197("script@Story@SAD3@ReturnToBeechers", "GreatPlains", 5) - func_228(vLocal_1551[19]))))
			{
				iLocal_69 = 4;
			}
			break;
		case 4:
			if (is_srl_loaded())
			{
				func_904(iLocal_249, -1657.227f, -1508.48f, 82.5782f, 340.0569f, 34, 1073741824);
				task_follow_waypoint_recording(Global_35, "sad3_cme_timelapse_2", 0, 9480, -1, 0, 0, -1);
				_0x2208438012482a1a(Global_35, true, false);
				_0x2208438012482a1a(iLocal_249, true, false);
				force_ped_motion_state(iLocal_249, -1415276238, false, 0, false);
				waypoint_playback_override_speed(Global_35, 1.5f, 0, -1082130432, 0);
				_0xbc016635d6a73b31("script@Story@SAD3@ReturnToBeechers", "Beechers", 5);
				func_227(vLocal_1551[19]);
				iLocal_1703 = 1;
				iLocal_69 = 5;
			}
			break;
		case 5:
			waypoint_playback_override_speed(Global_35, 1.5f, 0, -1082130432, 0);
			if (iVar1695 < 10)
			{
				iLocal_1697 = iVar1695 + 1;
				return false;
			}
			if (bVar1701)
			{
				end_srl();
				prefetch_srl("script@cme@SAD3_TIMELAPSE_SHOT2_srl");
				_0xef1a8a484118735e();
				_0xae00387e53b1e9fc();
				iLocal_1703 = 0;
			}
			if (_0xffe9c53deea3db0b((_0xea113bf9b0c0c5d7("script@Story@SAD3@ReturnToBeechers", "Beechers", 5) - func_228(vLocal_1551[19])), 0, -1646.5f, -1376.5f, 85.6f, is_srl_loaded(), (_0x465f04f68ad38197("script@Story@SAD3@ReturnToBeechers", "Beechers", 5) - func_228(vLocal_1551[19]))))
			{
				iLocal_69 = 6;
			}
			else
			{
				_0xe296208c273bd7f0(0, -1, 0, 17, 1, 0);
				disable_control_action(0, 1287709438, false);
				_0x702b75dc9d3ede56(true);
			}
			break;
		case 6:
			set_gameplay_cam_relative_heading(-69.0763f, 1f);
			set_gameplay_cam_relative_pitch(-6.9307f, 1f);
			_set_entity_coords_and_heading(iLocal_249, -1643.67f, -1377.725f, 82.9704f, 329.7003f, true, false, true);
			_0x9587913b9e772d29(iLocal_249, 0);
			clear_ped_tasks_immediately(Global_35, false, true);
			clear_ped_tasks_immediately(iLocal_249, false, true);
			_0x2208438012482a1a(Global_35, true, false);
			_0x2208438012482a1a(iLocal_249, true, false);
			_0xa54d643d0773eb65("script@Story@SAD3@ReturnToBeechers", "Beechers", 5);
			_0x43037abfe214a851();
			_0x2412216fcc7b4e3e("script@Story@SAD3@ReturnToBeechers");
			set_player_control(player_id(), true, 0, false);
			return true;
	}
	return false;
}

int func_1400()
{
	return func_514(func_755());
}

int func_1401()
{
	return func_1879(func_755());
}

int func_1402()
{
	if (func_202(func_755()) == 2)
	{
		if (func_276(func_755()) == 3)
		{
			iVar0 = func_319(func_755());
			if (func_1880(iVar0))
			{
				return iVar0;
			}
		}
	}
	return -1;
}

bool func_1403(int iParam0)
{
	if (-1829635046 == func_1881(81053684))
	{
		if (func_1882(iParam0))
		{
			return true;
		}
	}
	else if (func_1667(-525676072, iParam0))
	{
		if (func_1882(iParam0))
		{
			return true;
		}
	}
	return false;
}

void func_1404(int iParam0)
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

void func_1405(int iParam0)
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

int func_1406()
{
	return Global_1900383->f_393;
}

int func_1407(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (func_1824(*uParam0, 0f, 0f, 0f))
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

void func_1408(int iParam0)
{
	Global_40.f_1095.f_3054.f_1 = iParam0;
}

void func_1409(int iParam0)
{
	Global_40.f_1095.f_3054 = iParam0;
}

void func_1410(vector3 vParam0)
{
	Global_40.f_1095.f_3054.f_77 = { vParam0 };
}

var func_1411()
{
	return &Global_1899515;
}

void func_1412(var uParam0)
{
	Global_40.f_1095.f_3054.f_2 = uParam0;
}

void func_1413(int iParam0)
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

bool func_1414()
{
	return (func_1883() || func_1884());
}

void func_1415(bool bParam0)
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
	func_1885(0f);
	Global_1935436->f_11 = 1;
	if (func_308())
	{
		set_ambient_voice_name(Global_35, "ARTHUR");
	}
	else
	{
		set_ambient_voice_name(Global_35, "JOHN_PLAYER");
	}
	if (animpostfx_is_running("PlayerDrunk01"))
	{
		func_1886();
	}
	if (is_gameplay_cam_shaking())
	{
		stop_gameplay_cam_shaking(false);
	}
}

Vector3 func_1416(var uParam0)
{
	return uParam0->f_865;
}

float func_1417(var uParam0)
{
	return uParam0->f_868;
}

float func_1418(struct<2> Param0, int iParam2, struct<2> Param3, var uParam5, int iParam6)
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

void func_1419(var uParam0, int iParam1, bool bParam2)
{
	uParam0->f_8 = (uParam0->f_8 - (uParam0->f_8 && iParam1));
	if (((iParam1 == 512 && bParam2) && _does_anim_scene_exist(uParam0->f_804)) && _0xef324e9550a394d5(uParam0->f_804))
	{
		_0x8a8208ae92bf87a5(uParam0->f_804);
	}
}

bool func_1420(var uParam0, int iParam1)
{
	return (uParam0->f_11 && iParam1) != 0;
}

bool func_1421(var uParam0, int iParam1)
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

void func_1422(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	iVar2 = func_1201(iParam1, 1);
	if (!bParam2 && iVar2 == 1367443060)
	{
		bParam3 = false;
	}
	if (iParam4 != 0)
	{
		if (iVar2 == 1108822547)
		{
			iVar1 = func_1887(iParam4);
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

bool func_1423(int iParam0, int iParam1)
{
	return ((Global_1946804->f_57[func_681(iParam0, 1)])->f_10 && iParam1) != 0;
}

bool func_1424(int iParam0, int iParam1)
{
	return (Global_1946804->f_57[iParam0]->f_9 && iParam1) != 0;
}

void func_1425(int iParam0, bool bParam1, bool bParam2)
{
	iVar0 = 10;
	if (func_1423(1108822547, 6))
	{
		if (bParam2)
		{
			func_1422(iParam0, iVar0, func_20() != -1, 0, 0);
			func_1426(1108822547, 1, 6);
		}
		else
		{
			return;
		}
	}
	else
	{
		_0xbc6df00d7a4a6819(iParam0, Global_1946804->f_2776.f_1, &(Global_1946804->f_2776.f_3[0]), &(Global_1946804->f_2776.f_3[1]), &(Global_1946804->f_2776.f_3[2]), Global_1946804->f_2776.f_8, Global_1946804->f_2776.f_9, Global_1946804->f_2776.f_10, Global_1946804->f_2776.f_11);
		func_1427(1108822547, 1, 6);
	}
	Global_1946804->f_857++;
	if (!bParam1)
	{
		return;
	}
	_update_ped_variation(iParam0, false, true, true, true, false);
}

void func_1426(int iParam0, int iParam1, int iParam2)
{
	(Global_1946804->f_57[func_681(iParam0, 1)])->f_10 = ((Global_1946804->f_57[func_681(iParam0, 1)])->f_10 || iParam1);
}

void func_1427(int iParam0, int iParam1, int iParam2)
{
	(Global_1946804->f_57[func_681(iParam0, 1)])->f_10 = ((Global_1946804->f_57[func_681(iParam0, 1)])->f_10 - ((Global_1946804->f_57[func_681(iParam0, 1)])->f_10 && iParam1));
}

bool func_1428(var uParam0)
{
	if (func_1888(&(uParam0->f_29), 62))
	{
		switch (func_1889())
		{
			case 1:
				if (!func_1888(&(uParam0->f_29), 6))
				{
					return false;
				}
				break;
			case 2:
				if (!func_1888(&(uParam0->f_29), 8))
				{
					return false;
				}
				break;
			case 4:
				if (!func_1888(&(uParam0->f_29), 16))
				{
					return false;
				}
				break;
			case 8:
				if (!func_1888(&(uParam0->f_29), 32))
				{
					if (func_1888(&(uParam0->f_29), 2))
					{
						if (func_703(func_289()) < 5)
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

int func_1429(var uParam0, int iParam1, int iParam2)
{
	iVar0 = 0;
	Var4.f_9 = -1591664384;
	bVar18 = func_1890(iParam1, 128);
	Var23.f_9 = -1591664384;
	if (func_1138("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_1139(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_696(Var4.f_4))
			{
			}
			else if (!_0x705be297eebdb95d(Var4.f_4))
			{
			}
			else if (iParam2 != 0 && Var4.f_4 == iParam2)
			{
			}
			else if ((!func_1890(iParam1, 512) && func_1662(Var4.f_4, &uVar19, &Var23, 1728382685)) && !Var23.f_21)
			{
			}
			else if (!bVar18 || _0xf29a186ed428b552(Global_35, Var4.f_4))
			{
				if (((_is_weapon_one_handed(Var4.f_4) && (!_is_weapon_shotgun(Var4.f_4) || func_1890(iParam1, 32))) && (!_is_weapon_pistol(Var4.f_4) || !func_1890(iParam1, 16777216))) && (!_is_weapon_revolver(Var4.f_4) || !func_1890(iParam1, 33554432)))
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
		func_1140(iVar1);
	}
	if (func_696(iVar0))
	{
	}
	else if (!func_1890(iParam1, 512))
	{
		iParam1 |= 512;
		return func_1429(uParam0, iParam1, iParam2);
	}
	else if (func_1890(iParam1, 256))
	{
		iVar0 = -1569615261;
	}
	return iVar0;
}

void func_1430(int iParam0)
{
	_0x51345ae20f22c261(player_id(), to_float(iParam0 * 14), 0, 0, 0);
}

int func_1431(int iParam0)
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

void func_1432(var uParam0)
{
	if (!func_893(uParam0->f_1, 1))
	{
		_0x03ddbf2d73799f9e(*uParam0);
		func_859(&(uParam0->f_1), 1);
	}
}

void func_1433(var uParam0)
{
	if (!func_893(*uParam0, 1))
	{
		request_ptfx_asset();
		func_859(uParam0, 1);
	}
}

bool func_1434(var uParam0)
{
	if (func_893(uParam0->f_2, 1))
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

char* func_1435(int iParam0)
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

bool func_1436(int iParam0)
{
	return iParam0 != 0;
}

int func_1437(var uParam0, int iParam1)
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

int func_1438(var uParam0, char* sParam1)
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

void func_1439(var uParam0, int iParam1)
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

int func_1440(var uParam0)
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

void func_1441(var uParam0, int iParam1)
{
	uParam0->f_11 = (uParam0->f_11 || iParam1);
}

void func_1442(var uParam0, int iParam1)
{
	uParam0->f_11 = (uParam0->f_11 - (uParam0->f_11 && iParam1));
}

bool func_1443(var uParam0, int iParam1)
{
	uParam0->f_2495.f_2 = iParam1;
	return _datafile_get_data_node_index(&(uParam0->f_2495.f_1), &(uParam0->f_2495));
}

bool func_1444(var uParam0, int iParam1, int iParam2, char[4] cParam3, int iParam4, int iParam5)
{
	if (iParam2 == -1)
	{
		if (func_1445(uParam0, 2, iParam4))
		{
			*iParam5 = *iParam4;
		}
		if (func_1445(uParam0, 6, &(cParam3->f_11)))
		{
		}
		if (func_1445(uParam0, 9, &(cParam3->f_13)))
		{
		}
		if (func_1445(uParam0, 5, iParam4))
		{
			cParam3->f_9 = *iParam4;
		}
		return true;
	}
	if (func_1445(uParam0, 2, iParam4))
	{
		*iParam5 = *iParam4;
	}
	if (func_1445(uParam0, 6, &(cParam3->f_11)))
	{
	}
	if (func_1445(uParam0, 5, iParam4))
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
			if (func_1445(uParam0, 9, &(cParam3->f_13)))
			{
			}
			return true;
		}
		return false;
	}
	if (func_1445(uParam0, 9, &(cParam3->f_13)))
	{
	}
	return (iParam2 >= cParam3->f_11 && iParam2 <= cParam3->f_13);
}

bool func_1445(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2495.f_2 = iParam1;
	return _datafile_get_int(iParam2, &(uParam0->f_2495));
}

bool func_1446(var uParam0, int iParam1, char[4] cParam2)
{
	uParam0->f_2495.f_2 = iParam1;
	return _datafile_get_string(cParam2, &(uParam0->f_2495));
}

bool func_1447(var uParam0, char* sParam1, int iParam2)
{
	if (iParam2 == 0)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < iParam2)
	{
		if (((func_224((*uParam0)[iVar0], 1048576) && are_strings_equal((*uParam0)[iVar0], sParam1)) && (*uParam0)[iVar0]->f_9 == sParam1->f_9) && (*uParam0)[iVar0]->f_10 == sParam1->f_10)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_1448(char* sParam0)
{
	if (!is_audio_scene_active(sParam0))
	{
		start_audio_scene(sParam0);
	}
	func_507(sParam0, 1);
}

bool func_1449(var uParam0)
{
	if (func_893(uParam0->f_1, 2))
	{
		return true;
	}
	if (!func_893(uParam0->f_1, 1))
	{
		func_863(uParam0);
	}
	if (has_model_loaded(*uParam0))
	{
		func_859(&(uParam0->f_1), 2);
		return true;
	}
	return false;
}

bool func_1450(var uParam0)
{
	if (func_893(uParam0->f_3, 2))
	{
		return true;
	}
	if (!func_893(uParam0->f_3, 1))
	{
		func_865(uParam0);
	}
	switch (uParam0->f_1)
	{
		case 2:
			if (get_is_waypoint_recording_loaded(*uParam0))
			{
				func_859(&(uParam0->f_3), 2);
				return true;
			}
			break;
		case 1:
			if (has_vehicle_recording_been_loaded(uParam0->f_2, *uParam0))
			{
				func_859(&(uParam0->f_3), 2);
				return true;
			}
			break;
	}
	return false;
}

bool func_1451(var uParam0)
{
	if (func_893(uParam0->f_1, 2))
	{
		return true;
	}
	if (!func_893(uParam0->f_1, 1))
	{
		func_867(uParam0);
	}
	if (has_anim_dict_loaded(*uParam0))
	{
		func_859(&(uParam0->f_1), 2);
		return true;
	}
	return false;
}

bool func_1452(var uParam0, int iParam1)
{
	if (func_893(uParam0->f_1, 2))
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
	if (!func_893(uParam0->f_1, 1))
	{
		func_874(uParam0, iParam1);
	}
	if (_0x23e33cb9f4a3f547(iParam1, *uParam0))
	{
		func_859(&(uParam0->f_1), 2);
		return true;
	}
	return false;
}

bool func_1453(var uParam0)
{
	if (func_893(uParam0->f_2, 2))
	{
		return true;
	}
	if (!func_893(uParam0->f_2, 1))
	{
		func_876(uParam0);
	}
	if (_has_propset_loaded(*uParam0))
	{
		func_859(&(uParam0->f_2), 2);
		return true;
	}
	return false;
}

bool func_1454(var uParam0)
{
	if (func_893(uParam0->f_3, 2))
	{
		return true;
	}
	if (!func_893(uParam0->f_3, 1))
	{
		func_878(uParam0);
	}
	if (_0xff07cf465f48b830(*uParam0))
	{
		func_859(&(uParam0->f_3), 2);
		return true;
	}
	return false;
}

bool func_1455(var uParam0)
{
	if (func_893(uParam0->f_1, 2))
	{
		return true;
	}
	if (!func_893(uParam0->f_1, 1))
	{
		func_880(uParam0);
	}
	if (request_script_audio_bank(*uParam0))
	{
		func_859(&(uParam0->f_1), 2);
		return true;
	}
	return false;
}

bool func_1456(var uParam0)
{
	if (func_893(uParam0->f_1, 2))
	{
		return true;
	}
	if (!func_893(uParam0->f_1, 1))
	{
		func_882(uParam0);
	}
	if (_is_imap_active(*uParam0))
	{
		func_859(&(uParam0->f_1), 2);
		return true;
	}
	return false;
}

bool func_1457(var uParam0)
{
	if (func_893(uParam0->f_2, 2))
	{
		return true;
	}
	if (!func_893(uParam0->f_2, 1))
	{
		func_884(uParam0);
	}
	if (_0xe368e8422c860ba7(*uParam0, uParam0->f_1, -2))
	{
		func_859(&(uParam0->f_2), 2);
		return true;
	}
	return false;
}

bool func_1458(var uParam0)
{
	if (func_893(uParam0->f_1, 2))
	{
		return true;
	}
	if (!func_893(uParam0->f_1, 1))
	{
		func_886(uParam0);
	}
	if (_0x2c04d89a0fb4e244(*uParam0))
	{
		func_859(&(uParam0->f_1), 2);
		return true;
	}
	return false;
}

int func_1459(int iParam0)
{
	if (func_468(iParam0))
	{
		return Global_1360165[iParam0];
	}
	return 0;
}

int func_1460(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, float fParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, int iParam17, bool bParam18, bool bParam19, bool bParam20, bool bParam21, bool bParam22, bool bParam23, bool bParam24)
{
	if (!func_468(iParam0))
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
			if (func_996(iParam0, 2, 1))
			{
				func_994(iParam0, 2, 1);
			}
			if (func_715(iParam0, 16, 1))
			{
				if (*Global_1360165)[iParam0]->f_129 != get_id_of_this_thread()
				{
					if (bParam14)
					{
						func_992(iParam0, 29, 1);
						return 0;
					}
					if (is_thread_active((*Global_1360165)[iParam0]->f_129, false))
					{
					}
					else
					{
						func_473(iParam0, 0, 0, 1, -1082130432, 1, 1, 0, 0, 0, 0);
					}
					return 0;
				}
				else if (func_186(Global_1360165[iParam0], 0))
				{
					return Global_1360165[iParam0];
				}
			}
			if (func_186(Global_1360165[iParam0], 0))
			{
				if (is_scripted_speech_playing(Global_1360165[iParam0]))
				{
					return 0;
				}
				if (is_ped_ragdoll(Global_1360165[iParam0]))
				{
					if (bParam1)
					{
						func_1891(iParam0, 1, "Stealing, but companion is a ragdoll");
					}
					else
					{
						return 0;
					}
				}
				func_992(iParam0, 44, 1);
				(*Global_1360165)[iParam0]->f_1156 = get_id_of_this_thread();
				func_1892(iParam0, 2);
				return 0;
			}
			else if (bParam1)
			{
				func_992(iParam0, 44, 1);
				(*Global_1360165)[iParam0]->f_1156 = get_id_of_this_thread();
				func_1892(iParam0, 1);
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
			if (!func_996(iParam0, 44, 0))
			{
				func_992(iParam0, 44, 0);
			}
			if (func_1893(iParam0, vVar0, iParam13, 0, 1, iParam17, bParam20, -1, 1, 0))
			{
				func_1892(iParam0, 2);
			}
			break;
		case 2:
			set_ped_config_flag(Global_1360165[iParam0], 171, true);
			if (!_0x88ad6cc10d8d35b2(Global_1360165[iParam0]))
			{
				set_entity_as_mission_entity(Global_1360165[iParam0], true, true);
			}
			func_994(iParam0, 18, 1);
			set_entity_visible(Global_1360165[iParam0], true);
			set_ped_relationship_group_hash(Global_1360165[iParam0], 1030835986);
			_0xf74e134f40192884(Global_1360165[iParam0], 0);
			_0x6759bee6762e140b((*Global_1360165)[iParam0]->f_1);
			set_ped_config_flag(Global_1360165[iParam0], 130, false);
			func_998(iParam0, bParam9, 1, 0);
			if (bParam22)
			{
				func_1894(iParam0, 0, 0, 1);
			}
			func_994(iParam0, 33, 1);
			func_994(iParam0, 34, 1);
			func_994(iParam0, 29, 1);
			if (!func_399(vVar0) && bParam7)
			{
				func_1892(iParam0, 3);
			}
			else if (iParam13 != 0)
			{
				func_1892(iParam0, 4);
			}
			else
			{
				func_1892(iParam0, 5);
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
						func_1891(iParam0, 1, "Teleporting a stolen companion using a scenario.");
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
				func_904(Global_1360165[iParam0], vVar0, fParam6, 2, 1073741824);
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
				func_1892(iParam0, 4);
			}
			else
			{
				func_1892(iParam0, 5);
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
				if (func_1895(iParam0, iParam13))
				{
					if (_0xa0bc8faed8cfeb3c(Global_1360165[iParam0]))
					{
						func_1508(iParam0, iParam13, 0);
						func_1896(iParam0, Global_1360165[iParam0], iParam13, 1);
						if (func_996(iParam0, 25, 0))
						{
							func_994(iParam0, 25, 0);
						}
						func_992(iParam0, 66, 0);
						func_1892(iParam0, 5);
						(*Global_1360165)[iParam0]->f_63 = iParam13;
					}
					else
					{
						return 0;
					}
				}
				else
				{
					func_1892(iParam0, 5);
				}
				func_992(iParam0, 28, 1);
			}
			else
			{
				func_1892(iParam0, 5);
			}
			break;
		case 5:
			if (_0xa0bc8faed8cfeb3c(Global_1360165[iParam0]))
			{
				func_1892(iParam0, 6);
			}
			break;
		case 6:
			if (func_186(Global_1360165[iParam0], 0))
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
					func_1897(iParam0);
				}
				if (bParam21)
				{
					clear_ped_secondary_task(Global_1360165[iParam0]);
					func_1898(Global_1360165[iParam0], 1);
				}
			}
			func_1892(iParam0, 7);
		case 7:
			func_998(iParam0, bParam9, bParam15, 0);
			func_990(iParam0, 4, bParam11);
			func_993(iParam0);
			if (bParam20)
			{
				if (func_1899(Global_1360165[iParam0]))
				{
				}
			}
			func_1900(iParam0, Global_1360165[iParam0]);
			if (!bParam23 && !get_ped_config_flag(Global_1360165[iParam0], 503, true))
			{
				set_ped_config_flag(Global_1360165[iParam0], 503, true);
			}
			Global_40.f_4942[iParam0]->f_4 = Global_40.f_4942[iParam0]->f_3;
			func_1892(iParam0, 0);
			func_486(iParam0, 16, 1);
			func_994(iParam0, 44, 1);
			(*Global_1360165)[iParam0]->f_1156 = 0;
			(*Global_1360165)[iParam0]->f_129 = get_id_of_this_thread();
			return Global_1360165[iParam0];
	}
	return 0;
}

void func_1461(char[4] cParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	func_1901(iParam1, bParam3, bParam4, bParam6);
	if (!func_120(cParam0, 512))
	{
		if (func_120(cParam0, 4) && bParam4)
		{
			vVar0 = { get_offset_from_entity_in_world_coords(Global_35, 5f, 0f, 0f) };
			func_1902(iParam1, vVar0);
		}
	}
	else
	{
		Stack.Push(cParam0);
		Call_Loc(cParam0->f_10781);
	}
	func_1903(cParam0, iParam1, iParam2, func_328(iParam2, 0));
	func_1274(cParam0, iParam1, 512);
	if (bParam5)
	{
		func_1274(cParam0, iParam1, 128);
	}
	else
	{
		func_1823(cParam0, iParam1, 128);
	}
	switch (iParam2)
	{
		case 1:
		case default:
	}
}

void func_1462(int iParam0)
{
	if (!func_468(iParam0))
	{
		return;
	}
	iVar0 = func_192(iParam0);
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	_0x406ccf555b04fad3(iVar0, 0, 0f);
}

void func_1463(char[4] cParam0, vector3 vParam1, float fParam4)
{
	cParam0->f_5417 = { vParam1 };
	cParam0->f_5420 = fParam4;
}

bool func_1464(int iParam0)
{
	iParam0 = func_271(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (func_1473(iParam0) == 0)
	{
		return false;
	}
	return true;
}

void func_1465(int iParam0)
{
	iParam0 = func_271(iParam0);
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
	func_1904(&Var0);
	func_1905(iParam0, Var0);
	func_1906(&(Global_40.f_1095.f_1[iParam0]->f_15));
	func_1907(&(Global_40.f_1095.f_1[iParam0]->f_298));
	func_1908(&(Global_40.f_1095.f_1[iParam0]->f_356));
	func_1909(&(Global_40.f_1095.f_1[iParam0]->f_372));
	iVar2 = 0;
	while (iVar2 < 2)
	{
		func_1910(iVar2, Global_40.f_1095.f_1[iParam0]->f_398[iVar2]);
		iVar2++;
	}
	iVar3 = 0;
	while (iVar3 < 3)
	{
		func_1911(iVar3, Global_40.f_1095.f_1[iParam0]->f_407[iVar3]);
		iVar3++;
	}
	func_1912(&(Global_40.f_1095.f_1[iParam0]->f_420));
	func_1913(&(Global_40.f_1095.f_1[iParam0]->f_422));
	func_1914(&(Global_40.f_1095.f_1[iParam0]->f_425));
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

int func_1466(vector3 vParam0)
{
	return func_1915(_get_map_zone_at_coords(vParam0, 10));
}

bool func_1467(int iParam0)
{
	iParam0 = func_271(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (!func_535(iParam0))
	{
		return false;
	}
	iVar0 = func_222(iParam0);
	if (is_entity_dead(iVar0) || is_ped_injured(iVar0))
	{
		return true;
	}
	return false;
}

void func_1468(int iParam0, int iParam1)
{
	iVar0 = get_player_index();
	if (is_player_dead(iVar0))
	{
	}
	func_529(iParam0);
	func_529(iParam0);
	func_1916(iParam0, iParam1);
	func_1917(iParam0, iParam1);
	func_1918(iParam0, iParam1);
	iVar1 = func_222(iParam0);
	if (does_entity_exist(iVar1))
	{
		if (iParam0 == 0 || iParam0 == 1)
		{
			func_1919(iVar1);
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
	iVar3 = func_222(iParam1);
	if (does_entity_exist(iVar3))
	{
		if (iParam1 == 0 || iParam1 == 1)
		{
			func_1919(iVar3);
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
	func_272();
}

bool func_1469()
{
	iVar0 = func_1406();
	if (does_entity_exist(iVar0))
	{
		return true;
	}
	return false;
}

void func_1470()
{
	iVar0 = func_1406();
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	if (!_0x88ad6cc10d8d35b2(iVar0))
	{
		set_entity_as_mission_entity(iVar0, true, true);
	}
	delete_object(&iVar0);
	func_1920(0);
}

int func_1471(int iParam0)
{
	iParam0 = func_271(iParam0);
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

int func_1472(int iParam0)
{
	iParam0 = func_271(iParam0);
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

int func_1473(int iParam0)
{
	iParam0 = func_271(iParam0);
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

void func_1474(int iParam0)
{
	iParam0 = func_271(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_1720(&iVar0, &iVar1, &iVar2);
	func_1721(iParam0, iVar0);
	func_1722(iParam0, iVar1);
	func_1723(iParam0, iVar2);
	func_1921(iParam0, 1);
	func_1922(iParam0, 1);
}

void func_1475(int iParam0)
{
	iParam0 = func_271(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_1876(iParam0, 1);
}

void func_1476(int iParam0, vector3 vParam1, var uParam4)
{
	iParam0 = func_271(iParam0);
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

bool func_1477(int iParam0)
{
	iParam0 = func_271(iParam0);
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

struct<2> func_1478(int iParam0)
{
	iParam0 = func_271(iParam0);
	if (iParam0 == -1)
	{
		return Var0;
	}
	if (iParam0 >= 7)
	{
		return Var0;
	}
	if (!func_1923(iParam0, &uVar2))
	{
	}
	if (!func_1924(iParam0, &uVar3))
	{
	}
	Var0 = uVar2;
	Var0.f_1 = uVar3;
	return Var0;
}

struct<6> func_1479()
{
	if (func_1925(-997150586, &uVar6))
	{
		Var0.f_4 = uVar6;
	}
	if (func_1925(-1189569496, &uVar7))
	{
		Var0 = uVar7;
	}
	if (func_1925(325139909, &uVar8))
	{
		Var0.f_2 = uVar8;
	}
	if (func_1925(1310070322, &uVar9))
	{
		Var0.f_5 = uVar9;
	}
	if (func_1925(986998820, &uVar10))
	{
		Var0.f_3 = uVar10;
	}
	if (func_1925(-415648720, &uVar11))
	{
		Var0.f_1 = uVar11;
	}
	return Var0;
}

void func_1480(int iParam0, var uParam1, var uParam2, int iParam3)
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
	func_1926(iParam0);
	func_1927(iParam0, uParam1);
	func_1928(iParam0);
	func_1929(iParam0, uParam2);
	if (iParam3 != 0)
	{
		func_1930(iParam0, iParam3, 0);
	}
	_update_ped_variation(iParam0, false, true, true, true, true);
}

void func_1481(int iParam0)
{
	iParam0 = func_271(iParam0);
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

bool func_1482(int iParam0)
{
	if (iParam0 == 0)
	{
		return true;
	}
	request_model(iParam0, false);
	return has_model_loaded(iParam0);
}

int func_1483(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)
{
	iVar0 = create_ped(iParam0, vParam1, fParam4, bParam6, bParam7, false, false);
	if (bParam5)
	{
		_set_random_outfit_variation(iVar0, true);
	}
	return iVar0;
}

int func_1484(int iParam0)
{
	return iParam0;
}

bool func_1485(int iParam0)
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

int func_1486(var uParam0)
{
	return *uParam0;
}

bool func_1487(int iParam0, var uParam1, int iParam2)
{
	return false;
	if (iParam0 <= -1 || iParam0 > 80)
	{
		return false;
	}
	*uParam1 = { func_1931(iParam0) };
	if (func_1824(*uParam1, 0f, 0f, 0f))
	{
		return false;
	}
	if (!func_905(iParam0, iParam2, &iVar0))
	{
		return false;
	}
	if (func_1932(*iParam2, iVar0))
	{
		return false;
	}
	return true;
}

void func_1488(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_1489(var uParam0)
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

bool func_1490(var uParam0)
{
	switch (func_1933(uParam0))
	{
		case 0:
			uParam0->f_24 = func_289();
			iVar4 = func_289();
			func_1206(&iVar4, uParam0->f_6);
			func_1207(&iVar4, 0);
			func_1208(&iVar4, 0);
			if (func_1044(uParam0->f_24, iVar4, 1))
			{
				func_338(&iVar4, 0, 0, 0, 1, 0, 0, 0);
			}
			func_1934(uParam0->f_24, iVar4, &iVar0, &iVar1, &iVar2, &uVar3, &uVar3, &uVar3);
			uParam0->f_7 = ((iVar0 + iVar1 * 60) + iVar2 * 3600);
			func_1935(uParam0, 1);
			break;
		case 1:
			fVar5 = func_1936(uParam0, -1082130432);
			if (fVar5 >= 0.5f)
			{
				func_1935(uParam0, 2);
			}
			break;
		case 2:
			fVar5 = func_1936(uParam0, -1082130432);
			if (fVar5 >= 0.99f || fVar5 == -1f)
			{
				iVar4 = uParam0->f_24;
				func_338(&iVar4, uParam0->f_7, 0, 0, 0, 0, 0, 0);
				set_clock_time(func_703(iVar4), func_704(iVar4), func_705(iVar4));
				func_1937(get_clock_hours());
				func_1938(1, 0, 0);
				return true;
			}
			break;
	}
	return false;
}

void func_1491(int iParam0, int iParam1)
{
	if (Global_1935630->f_12)
	{
		return;
	}
	func_1939(2000);
	Global_16 = 0;
	func_1940();
	set_entity_invincible(Global_35, func_1941(*iParam0, 8));
	if (!func_1941(*iParam0, 1))
	{
		set_player_control(get_player_index(), true, 0, false);
	}
	_0xa0cefcea390aab9b(0);
	set_all_random_peds_flee(player_id(), false);
	set_everyone_ignore_player(player_id(), false);
	if (func_1941(*iParam0, 2) || func_1941(*iParam0, 4))
	{
		_hide_hud_component(-1679307491);
	}
	else
	{
		_display_hud_component(-1679307491);
	}
	if (!func_1941(*iParam0, 16))
	{
		func_241(1);
	}
	if (func_1941(*iParam0, 32))
	{
		func_634(Global_35, -383172193, 0, 1742327865, 0, 1, 0, 0, 1, 0);
		func_1942(-1623728698, 0);
	}
	func_833(&(Global_1946804->f_1497), Global_35, 1, 49217, 1, 1, 1);
	if (Global_1359489->f_16 & 4194304 != 0)
	{
		Global_1359489->f_16 = (Global_1359489->f_16 - Global_1359489->f_16 & 4194304);
	}
	*iParam0 = 0;
}

var func_1492(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

struct<4> func_1493(char[4] cParam0, int iParam1)
{
	return cParam0->f_1[func_132(iParam1)]->f_13;
}

int func_1494(var uParam0)
{
	return *uParam0;
}

bool func_1495(var uParam0, struct<4> Param1, int iParam5, bool bParam6)
{
	if (func_1496(uParam0, 32768))
	{
		return true;
	}
	if (func_1943(uParam0) >= 3)
	{
		uParam0->f_2286 = func_972(get_player_index(), 0, 0, 1);
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
		func_1944(uParam0);
	}
	if (func_1943(uParam0) < 10)
	{
		if (func_1943(uParam0) == 3)
		{
			func_1945(uParam0, iParam5, bParam6);
		}
		else if (func_1943(uParam0) > 3)
		{
			if (func_1494(uParam0) == 0)
			{
				if (!func_1496(uParam0, 524288))
				{
					func_1946(uParam0);
				}
				else if (is_screen_faded_out())
				{
					func_1947(uParam0, 4);
					func_1948(uParam0, 10);
					func_1949(uParam0, iParam5);
					return true;
				}
			}
			if (!func_1496(uParam0, 67108864) && !Global_1935630->f_12)
			{
				set_ped_reset_flag(Global_35, 25, true);
			}
			if (!func_1950(uParam0->f_1406[uParam0->f_2074], 16))
			{
				disable_control_action(0, -1404316431, false);
				disable_control_action(0, -1304887797, false);
			}
			_0x8910c24b7e0046ec();
			func_1783(0);
			func_1951();
			disable_control_action(0, -1722177808, false);
			disable_control_action(0, 1644850270, false);
			disable_control_action(0, 2139949496, false);
			if (uParam0->f_2074 >= 0)
			{
				if (!func_1950(uParam0->f_1406[uParam0->f_2078], 32768))
				{
					_uiprompt_enable_prompt_type_this_frame(6);
				}
				if (func_1952(uParam0, uParam0->f_2074))
				{
					if (func_1826(uParam0) < 7 && uParam0->f_2078 >= 0)
					{
						func_1953(uParam0, uParam0->f_1406[uParam0->f_2078]->f_27, uParam0->f_1735[uParam0->f_2078]->f_1, 1065353216);
					}
				}
				else if (uParam0->f_2078 >= 0)
				{
					func_1953(uParam0, uParam0->f_1406[uParam0->f_2078]->f_27, uParam0->f_1735[uParam0->f_2078]->f_1, 1065353216);
				}
				func_1954(uParam0);
			}
		}
	}
	bVar0 = func_1955(uParam0, iParam5, bParam6);
	bVar1 = _0xa24c1d341c6e0d53(1, 0, 0);
	if (bVar0)
	{
		if ((!func_1496(uParam0, 268435456) && bVar1) && !func_1496(uParam0, 262144))
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
				func_753(uParam0, 131072);
				func_753(uParam0, 268435456);
			}
		}
		if (func_1956(uParam0, 64) || (uParam0->f_2074 >= 0 && !func_1950(uParam0->f_1406[uParam0->f_2074], 524288)))
		{
			if (_0xa2b1c7ef759a63ce() > 0f || func_1494(uParam0) == 0)
			{
				_0xc9caeaeec1256e54(-1679307491);
				_0xe296208c273bd7f0(-1, -1, 0, 17, 1, 0);
			}
		}
	}
	if (func_1943(uParam0) == 3 || func_1496(uParam0, 131072))
	{
		func_1957(uParam0);
		if (!func_1496(uParam0, 262144))
		{
			if ((bVar0 && func_1496(uParam0, 65536)) || func_1496(uParam0, 131072))
			{
				func_753(uParam0, 32768);
				func_1947(uParam0, 4);
				func_1948(uParam0, 10);
				uParam0->f_2159 = 1;
				func_1949(uParam0, iParam5);
				return true;
			}
		}
	}
	if (func_1943(uParam0) >= 3)
	{
		func_1958(uParam0, iParam5);
		func_1959(uParam0);
		if (!func_1960(uParam0, 1))
		{
			func_1961(uParam0);
		}
		func_1962(uParam0);
	}
	switch (func_1943(uParam0))
	{
		case 0:
			func_1963(uParam0, Param1, iParam5);
			break;
		case 1:
			func_1964(uParam0);
			break;
		case 2:
			func_1965(uParam0);
			break;
		case 3:
			if (func_1827(uParam0))
			{
				func_1966(2);
				func_1953(uParam0, uParam0->f_1406[uParam0->f_2074]->f_27, uParam0->f_1735[uParam0->f_2074]->f_1, 1065353216);
				func_227(&(uParam0->f_2262));
				func_1947(uParam0, 1);
				func_1967();
				func_1948(uParam0, 5);
			}
			break;
		case 5:
		case 6:
		case 8:
			_0x9f9a829c6751f3c7(get_player_index(), 31, 1);
			if (!func_1496(uParam0, 67108864))
			{
				set_ped_reset_flag(Global_35, 25, true);
			}
			set_ped_reset_flag(Global_35, 264, true);
			set_ped_reset_flag(Global_35, 321, true);
			if (func_1943(uParam0) == 5)
			{
				if (func_1968(uParam0))
				{
					func_1947(uParam0, 2);
					func_1948(uParam0, 6);
				}
			}
			if (func_1943(uParam0) == 6)
			{
				if (func_1969(uParam0))
				{
					func_1947(uParam0, 3);
					func_1948(uParam0, 8);
				}
			}
			if (uParam0->f_2075 >= 0 || func_1285(&(uParam0->f_2262)) >= 15f)
			{
				if (func_1970(uParam0, iParam5))
				{
					if (func_1971(uParam0))
					{
						uParam0->f_2075 = func_1972(uParam0);
						func_227(&(uParam0->f_2262));
						set_player_control(get_player_index(), true, 0, false);
						_display_hud_component(-1679307491);
						clear_ped_tasks(Global_35, 1, 0);
						func_1947(uParam0, 6);
						func_1948(uParam0, 9);
					}
					else
					{
						func_1947(uParam0, 4);
						func_1948(uParam0, 10);
						func_1949(uParam0, iParam5);
						return true;
					}
				}
			}
			break;
		case 9:
			if (func_1970(uParam0, iParam5))
			{
				func_1949(uParam0, iParam5);
				func_1948(uParam0, 10);
				return true;
			}
			break;
		case 10:
			return true;
	}
	return false;
}

bool func_1496(var uParam0, int iParam1)
{
	return (uParam0->f_2054 && iParam1) != 0;
}

void func_1497(var uParam0, int iParam1)
{
	uParam0->f_2054 = (uParam0->f_2054 - (uParam0->f_2054 && iParam1));
}

void func_1498(var uParam0, var uParam1)
{
	if (func_1496(uParam1, 32768))
	{
		Var0 = { func_1829(uParam0) };
		func_1877(uParam0, &Var0);
		if (func_1496(uParam1, 131072))
		{
			func_754(uParam0, 268435456);
			if (func_399(uParam0->f_865))
			{
				uParam0->f_865 = { func_1973(uParam1, uParam1->f_2074) };
			}
			if (func_399(uParam0->f_862))
			{
				uParam0->f_862 = { func_1973(uParam1, uParam1->f_2074) };
				get_ground_z_for_3d_coord(uParam0->f_862, &(uParam0->f_862.f_2), false);
				uParam0->f_862.f_2 = (uParam0->f_862.f_2 + 0.5f);
			}
		}
		if (func_1496(uParam1, 268435456))
		{
			func_1862(&(uParam0->f_860), 16384);
		}
	}
	else if (func_1496(uParam1, 524288))
	{
		func_754(uParam0, 67108864);
		func_1497(uParam1, 524288);
	}
	if (func_1956(uParam1, 128))
	{
		func_754(uParam0, 32);
	}
	if (uParam1->f_2293 != 0)
	{
		uParam0->f_872 = uParam1->f_2293;
		if (uParam1->f_2074 >= 0 && func_1950(uParam1->f_1406[uParam1->f_2074], 256))
		{
			func_1862(&(uParam0->f_860), 524288);
		}
	}
	if (*uParam1 == 0 && _0x927b810e43e99932(&(uParam1->f_2082)))
	{
		_copy_memory(&(uParam0->f_873), &(uParam1->f_2082), 16);
	}
}

void func_1499(char[4] cParam0)
{
	if (func_822(&(cParam0->f_7375), 128) || func_822(&(cParam0->f_7375), 256))
	{
		if (_does_anim_scene_exist(cParam0->f_7375.f_804))
		{
			_delete_anim_scene(cParam0->f_7375.f_804);
		}
		func_1974(&(cParam0->f_7375));
		func_1419(&(cParam0->f_7375), 128, 1);
		func_1419(&(cParam0->f_7375), 256, 1);
		func_1419(&(cParam0->f_7375), 4096, 1);
	}
}

void func_1500(char[4] cParam0)
{
	func_1975(&(cParam0->f_7375));
}

bool func_1501(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, var uParam4, char[4] cParam5)
{
	func_1976(uParam4, &cParam0);
	if (func_822(uParam4, 2) && !func_822(uParam4, 67108864))
	{
		disable_control_action(0, -842734359, false);
	}
	if (func_1977(uParam4) != 1)
	{
		func_1978(uParam4);
	}
	_0xf45e46deecf7df6e(4096, 0, 0, -1, -1);
	set_ped_reset_flag(Global_35, 134, true);
	_uiprompt_enable_prompt_type_this_frame(6);
	_0x9f9a829c6751f3c7(get_player_index(), 31, 1);
	switch (func_1977(uParam4))
	{
		case 1:
			if (_does_anim_scene_exist(uParam4->f_804) && _is_anim_scene_loaded(uParam4->f_804, true, false))
			{
				if (!_is_anim_scene_started(uParam4->f_804, false))
				{
					func_1979(uParam4, &cParam0, cParam5);
				}
				else if (_0xef324e9550a394d5(uParam4->f_804))
				{
					func_1980(uParam4, 4);
					return false;
				}
				else
				{
					if (func_1981(uParam4, 2))
					{
						Stack.Push(uParam4);
						Call_Loc(uParam4->f_797);
					}
					func_1982(cParam5);
				}
				func_1980(uParam4, 3);
			}
			else if (!_does_anim_scene_exist(uParam4->f_804))
			{
				if (!is_screen_fading_out())
				{
					do_screen_fade_out(0);
				}
				if (func_121(cParam5, func_33(cParam5), 262144))
				{
					if (!func_822(uParam4, 2097152))
					{
						func_1983(uParam4);
					}
				}
				else if (!is_string_null_or_empty(&(uParam4->f_806)) && (!func_8(cParam5, 8) || func_822(uParam4, 134217728)))
				{
				}
				else
				{
					func_1847(uParam4);
				}
				func_227(&(uParam4->f_1));
				func_1980(uParam4, 2);
			}
			else
			{
				if (!is_screen_fading_out() && !is_screen_faded_out())
				{
					do_screen_fade_out(0);
				}
				func_1984(uParam4);
				if (!func_26(&(uParam4->f_1)))
				{
					func_27(&(uParam4->f_1), 0);
				}
				else if (func_913(&(uParam4->f_1)) >= 60f)
				{
					if (_does_anim_scene_exist(uParam4->f_804))
					{
						_delete_anim_scene(uParam4->f_804);
					}
					func_1980(uParam4, 4);
				}
			}
			break;
		case 2:
			if (!_does_anim_scene_exist(uParam4->f_804) || !_is_anim_scene_loaded(uParam4->f_804, true, false))
			{
				if (func_1985(uParam4, &cParam0, 1, 1))
				{
					if (!_is_anim_scene_loaded(uParam4->f_804, true, false))
					{
						func_1980(uParam4, 4);
					}
					else if (!func_399(func_1986(uParam4)) && !func_1796(Global_35, func_1986(uParam4), 100f, 1, 1))
					{
						func_1405(1);
						start_player_teleport(get_player_index(), func_1986(uParam4), 0f, true, true, true, false);
					}
				}
				else if (func_913(&(uParam4->f_1)) >= 60f)
				{
					if (_does_anim_scene_exist(uParam4->f_804))
					{
						_delete_anim_scene(uParam4->f_804);
					}
					func_1980(uParam4, 4);
				}
			}
			else if (!is_player_teleport_active() || _has_player_teleport_finished(get_player_index()))
			{
				if (func_283(cParam5) != 0 || (func_154(cParam5) == 1 && func_162(cParam5, func_33(cParam5)) >= 3))
				{
					if (!get_is_loading_screen_active())
					{
						_0xa565fac215cbc77d();
						func_16(1, 0);
						func_1979(uParam4, &cParam0, cParam5);
						func_1980(uParam4, 3);
					}
					else
					{
						shutdown_loading_screen();
					}
				}
			}
			else if (func_913(&(uParam4->f_1)) >= 60f)
			{
				if (_does_anim_scene_exist(uParam4->f_804))
				{
					_delete_anim_scene(uParam4->f_804);
				}
				func_1980(uParam4, 4);
			}
			break;
		case 3:
			func_395(uParam4);
			if (func_1981(uParam4, 2))
			{
				Stack.Push(uParam4);
				Call_Loc(uParam4->f_797);
			}
			func_1982(cParam5);
			if ((_does_anim_scene_exist(uParam4->f_804) && _is_anim_scene_started(uParam4->f_804, false)) && (_0xef324e9550a394d5(uParam4->f_804) || func_822(uParam4, 512)))
			{
				if (!func_822(uParam4, 1024) && func_1987(uParam4, 1))
				{
					set_gameplay_cam_relative_heading(0f, 1f);
					set_gameplay_cam_relative_pitch(0f, 1f);
				}
				if (!func_822(uParam4, 512))
				{
					func_227(&(uParam4->f_1));
					func_754(uParam4, 512);
					func_1980(uParam4, 4);
				}
				else if (func_822(uParam4, 524288))
				{
					if (is_screen_faded_in() || is_screen_fading_in())
					{
					}
					do_screen_fade_out(0);
				}
			}
			else
			{
				func_1978(uParam4);
			}
			if (func_822(uParam4, 524288))
			{
				if (IntToFloat(absi((func_1988(uParam4) - func_1989(uParam4)))) <= 2f)
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
				if (func_1990(uParam4, Global_35, 4))
				{
					_0x1b70811d3bf75db9(1, 1);
				}
				if ((is_screen_faded_out() || is_screen_fading_out()) && func_1989(uParam4) > 5000)
				{
					_0x1b70811d3bf75db9(1, 1);
				}
			}
			if (func_1991(uParam4))
			{
				if (!_does_anim_scene_exist(uParam4->f_804))
				{
				}
				func_1992(uParam4);
				return true;
			}
			else
			{
				if (func_822(uParam4, 67108864))
				{
					if (is_screen_faded_out())
					{
						if (!_is_anim_scene_paused(uParam4->f_804) && !_0xef324e9550a394d5(uParam4->f_804))
						{
							_delete_anim_scene_2(uParam4->f_804);
						}
						func_227(&(uParam4->f_1));
						_0x1b70811d3bf75db9(1, 1);
						func_754(uParam4, 512);
						func_1419(uParam4, 67108864, 1);
						func_1980(uParam4, 4);
					}
					else if (!is_screen_fading_out() && !is_screen_faded_out())
					{
						do_screen_fade_out(1000);
					}
				}
				else if ((((!func_822(uParam4, 16384) && !_0xef324e9550a394d5(uParam4->f_804)) && is_screen_faded_out()) && func_1989(uParam4) <= 5000) && func_1989(uParam4) >= 0)
				{
					do_screen_fade_in(1000);
				}
				if (!func_822(uParam4, 536870912) && has_anim_event_fired(Global_35, -1495039362))
				{
					func_1491(&(uParam4->f_861), 0);
					func_754(uParam4, 536870912);
				}
				if (func_1989(uParam4) >= 5000 && func_1989(uParam4) <= (func_1988(uParam4) - 5000))
				{
					func_1993();
				}
			}
			break;
		case 6:
			if (func_1991(uParam4))
			{
				func_1992(uParam4);
				return true;
			}
			break;
		case 4:
			if (func_822(uParam4, 524288))
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
						func_754(uParam4, 1073741824);
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
					if (func_1994(cParam5))
					{
						if (_does_anim_scene_exist(uParam4->f_804) && _is_anim_scene_paused(uParam4->f_804))
						{
							set_anim_scene_paused(uParam4->f_804, false);
						}
						func_1980(uParam4, 3);
					}
					else if (func_913(&(uParam4->f_1)) >= 30f)
					{
						if (_does_anim_scene_exist(uParam4->f_804) && _is_anim_scene_paused(uParam4->f_804))
						{
							set_anim_scene_paused(uParam4->f_804, false);
						}
						func_1980(uParam4, 3);
					}
				}
				if (iVar0 == 0)
				{
					Stack.Push(!func_1981(uParam4, 4));
					Stack.Push(uParam4);
					Call_Loc(uParam4->f_798);
					if (StackVal || StackVal)
					{
						if (_does_anim_scene_exist(uParam4->f_804) && _is_anim_scene_paused(uParam4->f_804))
						{
							set_anim_scene_paused(uParam4->f_804, false);
						}
						func_1980(uParam4, 3);
					}
					else if (func_913(&(uParam4->f_1)) >= 30f)
					{
						if (_does_anim_scene_exist(uParam4->f_804) && _is_anim_scene_paused(uParam4->f_804))
						{
							set_anim_scene_paused(uParam4->f_804, false);
						}
						func_1980(uParam4, 3);
					}
				}
				if (func_1977(uParam4) == 3)
				{
					if (func_822(uParam4, 524288))
					{
						do_screen_fade_out(0);
					}
				}
			}
			break;
		case 5:
			func_1980(uParam4, 4);
			break;
	}
	return false;
}

void func_1502(char[4] cParam0)
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
			if (decor_exist_on(get_indexed_item_in_itemset(iVar0, Global_43616), func_1995()))
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

void func_1503(char[4] cParam0)
{
	func_1983(&(cParam0->f_7375));
}

bool func_1504(int iParam0, bool bParam1)
{
	iVar0 = 1;
	MemCopy(&uVar1, {func_273(iParam0)}, 8);
	StringCopy(&cVar9, _get_label_text_2(&uVar1), 64);
	if (!is_string_null_or_empty(&cVar9))
	{
		if (!func_1996(iParam0))
		{
			iVar0 = 0;
		}
	}
	if (!bParam1)
	{
		MemCopy(&uVar1, {func_274(iParam0)}, 8);
		StringCopy(&cVar9, _get_label_text_2(&uVar1), 64);
		if (!is_string_null_or_empty(&cVar9))
		{
			if (!func_1997(iParam0))
			{
				iVar0 = 0;
			}
		}
	}
	return iVar0;
}

struct<8> func_1505(int iParam0)
{
	MemCopy(&cVar0, {func_273(iParam0)}, 8);
	StringConCat(&cVar0, "_Sounds", 64);
	return cVar0;
}

bool func_1506(int iParam0)
{
	Var0 = { func_1505(iParam0) };
	if (!is_string_null_or_empty(&Var0))
	{
		if (!_0xd9130842d7226045(&Var0, 0))
		{
			return false;
		}
	}
	return true;
}

void func_1507(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 15)
	{
		_datafile_register_query(uParam0->f_2495, iVar0, func_1998(iVar0));
		iVar0++;
	}
}

void func_1508(int iParam0, int iParam1, bool bParam2)
{
	if (!func_468(iParam0))
	{
		return;
	}
	if (!func_1895(iParam0, iParam1))
	{
		return;
	}
	Global_40.f_4942[iParam0]->f_3 = iParam1;
	if (bParam2)
	{
		func_992(iParam0, 25, 1);
	}
}

void func_1509(int iParam0, int iParam1)
{
	if (!is_weapon_valid(iParam1))
	{
		return;
	}
	if (iParam1 == -1569615261)
	{
		return;
	}
	if (is_entity_dead(iParam0))
	{
		return;
	}
	if (has_ped_got_weapon(iParam0, iParam1, 0, false))
	{
		remove_weapon_from_ped(iParam0, iParam1, true, -142743235);
	}
}

void func_1510(int iParam0, bool bParam1)
{
	if (!func_485(iParam0))
	{
		return;
	}
	iVar0 = func_192(iParam0);
	func_1999(iVar0);
	if (iParam0 == 14)
	{
		func_2000(iVar0);
	}
	func_992(iParam0, 61, 1);
	if (bParam1)
	{
		func_2001(iParam0);
	}
}

struct<4> func_1511(char[4] cParam0)
{
	if (func_33(cParam0) == iLocal_45)
	{
		Var0 = { func_1321(3, 0) };
	}
	else if (func_33(cParam0) == iLocal_46)
	{
		Var0 = { func_1321(3, 1) };
	}
	else if (func_33(cParam0) == iLocal_47)
	{
		Var0 = { func_1321(3, 2) };
	}
	else if (func_33(cParam0) == iLocal_48)
	{
		Var0 = { func_1321(3, 3) };
	}
	else if (func_33(cParam0) == iLocal_49 || func_33(cParam0) == iLocal_50)
	{
		Var0 = { func_1321(3, 4) };
	}
	else if (func_33(cParam0) == iLocal_51)
	{
	}
	else if (func_33(cParam0) == iLocal_52)
	{
	}
	else if (func_33(cParam0) == iLocal_53)
	{
	}
	else if (func_33(cParam0) == iLocal_54)
	{
	}
	else if (func_33(cParam0) == iLocal_55)
	{
		Var0 = { func_1321(3, 5) };
	}
	else if (func_33(cParam0) == iLocal_56)
	{
		Var0 = { 1360.602f, -1257.64f, 77.8351f };
		Var0.f_3 = 156.2726f;
	}
	return Var0;
}

int func_1512(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	Var1.f_10 = 7;
	Var1 = iParam4;
	Var1.f_1 = iParam5;
	Var1.f_2 = iParam6;
	Var1.f_3 = iParam7;
	Var1.f_4 = iParam8;
	Var1.f_6 = { vParam0 };
	Var1.f_9 = iParam3;
	return func_898(&uVar0, &Var1);
}

bool func_1513(var uParam0)
{
	return *uParam0 == *uParam0;
}

void func_1514(char[4] cParam0, int iParam1, int iParam2, int iParam3, char* sParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	if (!func_1806(cParam0, iParam1))
	{
		if (!func_2002(cParam0, iParam1, &iVar0))
		{
			if (!func_2003(cParam0, &iVar0))
			{
				return;
			}
		}
	}
	else
	{
		return;
	}
	func_1791(cParam0->f_5423[iVar0], 1);
	cParam0->f_5423[iVar0] = iParam1;
	if (is_entity_a_ped(iParam1) && is_ped_human(get_ped_index_from_entity_index(iParam1)))
	{
		func_1791(cParam0->f_5423[iVar0], 128);
	}
	if (does_entity_exist(iParam3))
	{
		if (func_1485(iParam3))
		{
			cParam0->f_5423[iVar0]->f_1 = iParam3;
			func_1791(cParam0->f_5423[iVar0], 4);
			func_1791(cParam0->f_5423[iVar0], 16);
		}
		else if (is_entity_a_vehicle(iParam3))
		{
			cParam0->f_5423[iVar0]->f_1 = iParam3;
			func_1791(cParam0->f_5423[iVar0], 4);
			func_1791(cParam0->f_5423[iVar0], 8);
		}
	}
	cParam0->f_5423[iVar0]->f_4 = sParam4;
	cParam0->f_5423[iVar0]->f_7 = iParam5;
	cParam0->f_5423[iVar0]->f_6 = iParam6;
	if (is_entity_a_ped(iParam1))
	{
		if (iParam8 == -1)
		{
			if (get_ped_index_from_entity_index(iParam1) == func_222(7))
			{
				cParam0->f_5423[iVar0]->f_9 = 40;
			}
			else
			{
				cParam0->f_5423[iVar0]->f_9 = func_2004(iParam1);
			}
		}
		else
		{
			cParam0->f_5423[iVar0]->f_9 = iParam8;
		}
		if (iParam8 > -1 && iParam8 < 27)
		{
			cParam0->f_5423[iVar0]->f_10 = iParam8;
		}
		if (func_468(cParam0->f_5423[iVar0]->f_10))
		{
		}
	}
	cParam0->f_13145++;
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
			cParam0->f_5423[iVar0]->f_23[iVar1]->f_3 = 283594;
			iVar1++;
		}
		func_2005(cParam0, iParam1, 2, 4);
		func_2006(cParam0, iParam1, 2500, 8);
		func_2006(cParam0, iParam1, 2500, 512);
		func_2007(cParam0, iParam1, 5000, 512);
		if (cParam0->f_5423[iVar0]->f_9 == 14)
		{
			func_2008(cParam0, iParam1, -2147483648);
		}
	}
}

int func_1515(int iParam0)
{
	if (!func_253(iParam0))
	{
		return 0;
	}
	return (*Global_1888801)[iParam0]->f_3;
}

void func_1516(char[4] cParam0, int iParam1, int iParam2)
{
	if (!does_entity_exist(iParam2))
	{
		return;
	}
	if (!func_988(cParam0, iParam2, &iVar0))
	{
		return;
	}
	iVar2 = -1;
	iVar1 = 0;
	while (iVar1 < cParam0->f_13145)
	{
		if (func_260(cParam0->f_5423[iVar1]))
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
	func_1791(cParam0->f_5423[iVar0], 64);
	if (is_entity_a_vehicle(iParam1))
	{
		func_1791(cParam0->f_5423[iVar0], 8);
	}
	else if (func_1485(iParam1))
	{
		func_1791(cParam0->f_5423[iVar0], 16);
	}
}

void func_1517()
{
	fLocal_1699 = get_random_float_in_range(6.5f, 10f);
}

void func_1518(var uParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7, char* sParam10)
{
	*uParam0 = _create_volume_box_with_custom_name(vParam1, vParam4, vParam7, sParam10);
}

void func_1519(int iParam0, bool bParam1)
{
	iVar0 = 16384;
	if (bParam1)
	{
		iVar0 |= 524288;
	}
	_0x2fcd528a397e5c88(iParam0, iVar0);
}

int func_1520(int iParam0, bool bParam1, bool bParam2)
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

void func_1521(int iParam0, float fParam1, bool bParam2, int iParam3)
{
	if (func_466(iParam0))
	{
		if (door_system_get_door_state(iParam0) != 1 || bParam2)
		{
			door_system_set_door_state(iParam0, 1);
		}
		door_system_set_open_ratio(iParam0, fParam1, iParam3);
	}
}

void func_1522(int iParam0, bool bParam1)
{
	if (func_466(iParam0))
	{
		if (door_system_get_door_state(iParam0) != 2 || bParam1)
		{
			door_system_set_door_state(iParam0, 2);
		}
	}
}

void func_1523(int iParam0, bool bParam1)
{
	if (func_466(iParam0))
	{
		if (door_system_get_door_state(iParam0) != 1 || bParam1)
		{
			door_system_set_door_state(iParam0, 1);
		}
	}
}

void func_1524(int iParam0, bool bParam1)
{
	if (func_466(iParam0))
	{
		if (door_system_get_door_state(iParam0) != 0 || bParam1)
		{
			door_system_set_door_state(iParam0, 0);
		}
	}
}

bool func_1525()
{
	return true;
}

void func_1526(int iParam0, int iParam1, float fParam2, float fParam3, float fParam4, int iParam5)
{
	iVar8 = 1;
	if (!is_ped_injured(iParam0))
	{
		if (_0x608bc6a6aacd5036(&Var4, iParam0, iParam1, 0))
		{
			if (does_entity_exist(Var4.f_3))
			{
				iVar3 = func_2009(Var4.f_3);
				if (func_582(iVar3, 0))
				{
					if (iParam5 == 0)
					{
						_0xed00d72f81cf7278(Var4.f_3, 0, 1);
						vVar0.x = fParam2;
						vVar0.f_1 = fParam3;
						vVar0.f_2 = fParam4;
						if (func_399(vVar0))
						{
							vVar0 = { get_offset_from_entity_in_world_coords(iParam0, 0f, -1f, 0f) };
							func_1407(&vVar0, 50, 10, 0);
						}
						set_entity_coords(Var4.f_3, vVar0, false, false, true, true);
					}
					func_2010(&iParam0, iVar3, &iVar8, 1, -142743235);
				}
				else if (is_entity_a_ped(Var4.f_3))
				{
					iVar9 = get_ped_index_from_entity_index(Var4.f_3);
					if (is_ped_human(iVar9))
					{
						_0xed00d72f81cf7278(Var4.f_3, 0, 1);
						vVar0.x = fParam2;
						vVar0.f_1 = fParam3;
						vVar0.f_2 = fParam4;
						if (func_399(vVar0))
						{
							vVar0 = { get_offset_from_entity_in_world_coords(iParam0, 0f, -1f, 0f) };
							func_1407(&vVar0, 50, 10, 0);
						}
						set_entity_coords(Var4.f_3, vVar0, false, _is_ped_hogtied(iVar9), true, true);
					}
				}
			}
		}
	}
}

bool func_1527(char[4] cParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, bool bParam5)
{
	return func_1535(cParam0, iParam1, sParam2, iParam3, bParam4, bParam5);
}

void func_1528(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7)
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

void func_1529(int iParam0, int iParam1, bool bParam2)
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

void func_1530()
{
	if (func_2011(&Global_35))
	{
		return;
	}
	if (!func_2011(&Global_35))
	{
		iVar0 = _0x1f714e7a9dadfc42(Global_35);
		if (does_entity_exist(iVar0) && !is_entity_dead(iVar0))
		{
			if (!bVar1705)
			{
				if (has_anim_event_fired(Global_35, -1428754921))
				{
					iLocal_1707 = 1;
				}
			}
			else if (_0x11cd066f54da0133(iVar0))
			{
				_0x9addbb9242179d56(iVar0, Global_35);
				if (_0x4eccc2815ca79ae2(iVar0))
				{
					_0xaa0af6025160243a(iVar0, Global_35);
					set_entity_as_mission_entity(iVar0, true, true);
					delete_object(&iVar0);
				}
			}
		}
	}
}

int func_1531(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
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

{
}

{
	{
			{