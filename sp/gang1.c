void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_126 = -155999274;
	iLocal_161 = 1;
	iLocal_162 = 2;
	iLocal_163 = 3;
	iLocal_164 = 25;
	iLocal_170 = 35;
	iLocal_180 = -1832370395;
	iLocal_181 = -859701570;
	sLocal_267 = "gang1_Trench";
	sLocal_268 = "gang1_arrive";
	sLocal_269 = "gang1_riverHouseAssist";
	sLocal_270 = "gang1_BillAssist";
	sLocal_271 = "gang1_billToCover";
	sLocal_272 = "gang1_sadieToCover";
	iLocal_362 = 1;
	vLocal_363 = { 2261.17f, -738.1764f, 41.2723f };
	vLocal_366 = { 2260.977f, -744.437f, 41.4092f };
	vLocal_369 = { 2271.801f, -741.9879f, 40.9903f };
	vLocal_372 = { 2276.332f, -742.6232f, 40.7898f };
	if (has_force_cleanup_occurred(4642))
	{
		func_1(&uLocal_377, 1073741824);
		func_2(&uLocal_377, 1);
		terminate_this_thread();
	}
	while (!func_3(64))
	{
		wait(0);
	}
	func_4(&uScriptParam_0, &uLocal_377);
	func_5(&uLocal_377);
	while (!func_6(&uLocal_377, -2147483648))
	{
		func_7(&uLocal_377);
		wait(0);
	}
	while (!func_2(&uLocal_377, 0))
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
	iLocal_125 = func_125(uParam0);
	iLocal_125 = iLocal_125;
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

bool func_6(char[4] cParam0, int iParam1)
{
	return (cParam0->f_5309 && iParam1) != 0;
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

bool func_8(char[4] cParam0, int iParam1)
{
	return (cParam0->f_5307 && iParam1) != 0;
}

bool func_9(char[4] cParam0)
{
	pause_clock(false, 0);
	func_163();
	func_164();
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (func_165(&(uLocal_182[iVar0]), 0))
		{
			freeze_entity_position(&(uLocal_182[iVar0]), false);
			set_blocking_of_non_temporary_events(&(uLocal_182[iVar0]), false);
		}
		iVar0++;
	}
	func_166(0);
	func_167(cParam0);
	func_168(Local_14.f_90, 1);
	func_169();
	stop_gameplay_cam_shaking(true);
	_0x24db6b9f2b719043(-1f);
	set_ped_config_flag(Global_35, 249, false);
	set_ped_config_flag(Global_35, 263, false);
	_0xe0b61ed8bb37712f(Global_35);
	delete_object(&iLocal_321);
	delete_object(&iLocal_322);
	if (does_entity_exist(iLocal_199))
	{
		freeze_entity_position(iLocal_199, true);
		delete_object(&iLocal_199);
	}
	if (does_entity_exist(iLocal_201))
	{
		delete_vehicle(&iLocal_201);
	}
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (does_entity_exist(&(Local_14.f_82[iVar0])))
		{
			func_170(&(Local_14.f_82[iVar0]), Local_14.f_81);
			set_object_as_no_longer_needed(Local_14.f_82[iVar0]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (does_entity_exist(&(Local_14.f_104[iVar0])))
		{
			func_170(&(Local_14.f_104[iVar0]), Local_14.f_103);
			set_object_as_no_longer_needed(Local_14.f_104[iVar0]);
		}
		iVar0++;
	}
	if (does_entity_exist(&(Local_14.f_97[0])))
	{
		set_object_as_no_longer_needed(Local_14.f_97[0]);
	}
	if (does_entity_exist(iLocal_200))
	{
		delete_object(&iLocal_200);
	}
	iVar0 = 0;
	while (iVar0 < iLocal_202)
	{
		if (_does_volume_exist(&(iLocal_202[iVar0])))
		{
			_delete_volume(&(iLocal_202[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_208)
	{
		if (_does_volume_exist(&(iLocal_208[iVar0])))
		{
			_delete_volume(&(iLocal_208[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_213)
	{
		if (_does_volume_exist(&(iLocal_213[iVar0])))
		{
			_delete_volume(&(iLocal_213[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_218)
	{
		if (_does_volume_exist(&(iLocal_218[iVar0])))
		{
			_delete_volume(&(iLocal_218[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_224)
	{
		if (_does_volume_exist(&(iLocal_224[iVar0])))
		{
			_delete_volume(&(iLocal_224[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_228)
	{
		if (_does_volume_exist(&(iLocal_228[iVar0])))
		{
			_delete_volume(&(iLocal_228[iVar0]));
		}
		iVar0++;
	}
	if (_does_volume_exist(iLocal_235))
	{
		_delete_volume(iLocal_235);
	}
	if (_does_volume_exist(iLocal_236))
	{
		_delete_volume(iLocal_236);
	}
	func_171(&(Local_14.f_3), 0);
	func_171(&(Local_14.f_10), 0);
	func_171(&(Local_14.f_44), 0);
	func_171(&(Local_14.f_49), 0);
	func_171(&(Local_14.f_35), 0);
	func_166(0);
	func_172(-821604574, 0, 0, 0, 1, 0, 0, 0);
	func_172(686097120, 0, 0, 0, 1, 0, 0, 0);
	func_172(984852093, 0, 0, 0, 1, 0, 0, 0);
	func_172(675165849, 0, 0, 0, 1, 0, 0, 0);
	func_172(57906928, 0, 0, 0, 1, 0, 0, 0);
	func_172(-239733899, 0, 0, 0, 1, 0, 0, 0);
	if (func_22(cParam0) == 0)
	{
		if (func_173(68, 1, 0, 0, 0))
		{
		}
		else
		{
			func_174(68, 0, 0);
		}
	}
	else
	{
		func_175(68, 1, 0);
	}
	set_player_control(player_id(), true, 0, false);
	if (func_165(Global_35, 0))
	{
		clear_ped_tasks(Global_35, 1, 0);
	}
	func_176();
	func_177();
	_0x67e21acc5c0c970c(Global_35, 9, true);
	_0x67e21acc5c0c970c(Global_35, 16, true);
	_0x67e21acc5c0c970c(Global_35, 24, true);
	_0x67e21acc5c0c970c(Global_35, 18, true);
	_0x24db6b9f2b719043(-1f);
	func_178(Local_14.f_14);
	func_178(Local_14.f_22);
	func_178(Local_14.f_53);
	func_178(Local_14.f_64);
	func_178(Local_14.f_1);
	func_178(Local_14.f_42);
	func_178(Local_14.f_47);
	func_178(Local_14.f_33);
	if (does_entity_exist(&(Local_14.f_62[0])))
	{
		delete_ped(Local_14.f_62[0]);
	}
	func_179(0, 0, 0);
	func_180(1);
	remove_model_hide(func_181(1, 20), 20f, iLocal_181, 0);
	_set_weather_type_frozen(false);
	pause_clock(false, 0);
	set_time_scale(1f);
	func_48(4294);
	if (!is_interior_entity_set_active(iVar358, "lak_hideout_intgroup_trapdoor"))
	{
		activate_interior_entity_set(iVar358, "lak_hideout_intgroup_trapdoor", 0);
	}
	if (!func_182(26))
	{
		func_183(26);
	}
	stop_fire_in_range(func_181(2, 0), 150f);
	clear_timecycle_modifier();
	_set_rain_level(-1f);
	func_184(0, 1103626240);
	set_entity_invincible(&(uLocal_182[6]), false);
	func_185(67108864);
	_release_metaped_outfit_request(iVar324);
	_release_metaped_outfit_request(iVar323);
	if (is_interior_entity_set_active(iVar325, "lak_dockhouse_hammock_CS"))
	{
		deactivate_interior_entity_set(iVar325, "lak_dockhouse_hammock_CS", true);
	}
	if (is_interior_entity_set_active(iVar325, "lak_dockhouse_hammock_SP"))
	{
		deactivate_interior_entity_set(iVar325, "lak_dockhouse_hammock_SP", true);
	}
	func_186("lak_nav_camp_gang1");
	func_187("lak_nav_camp_running");
	_remove_imap(-605128543);
	_remove_imap(-337712376);
	func_188(iVar330);
	func_188(iVar329);
	_0x83c989d5b5b5b466(player_id(), 1f);
	set_gameplay_cam_shake_amplitude(1f);
	_0x67659a8f248e0141(player_id(), 1f);
	set_entity_proofs(Global_35, 0, false);
	func_131(2236.357f, -767.6544f, 42.4689f, 0.75f, 1, 0, 0, 0, 0);
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
	iVar0 = func_189(*iParam0);
	if ((*Global_1945938)[iVar0]->f_16 != get_id_of_this_thread() && bParam2)
	{
		*iParam0 = 0;
		return;
	}
	func_190(iVar0);
	*iParam0 = 0;
}

int func_12(int iParam0)
{
	if (!func_191(iParam0))
	{
		return 0;
	}
	return (*Global_1835011)[iParam0]->f_1;
}

void func_13(int iParam0, bool bParam1, int iParam2)
{
	if (!func_192(iParam0))
	{
		if (!bParam1)
		{
		}
		return;
	}
	if (!func_193(iParam0) && !func_194(iParam0))
	{
		if (!bParam1)
		{
		}
		return;
	}
	if (func_195(iParam0) == 0)
	{
	}
	if (iParam2 == 2 && !func_193(iParam0))
	{
		iParam2 = -1;
	}
	if (func_196(iParam0) == 3 || (func_196(iParam0) == 1 && _0x01f4d242765c6b24(func_195(iParam0))))
	{
		func_198(func_197(iParam0), func_195(iParam0), iParam2);
		if ((!func_192(Global_1572864->f_8) && !func_199(0, 1, 0)) && !func_200(&Global_1935630, 32768))
		{
			iVar0 = func_201(iParam0);
			if (iVar0 != -1)
			{
				func_202(0);
			}
			else if (func_197(iParam0) == 8)
			{
				iVar0 = func_203();
				if (iVar0 != -1)
				{
					func_202(0);
				}
			}
		}
	}
	func_204(iParam0, 0);
	if (func_205(0) == iParam0)
	{
		func_40(1);
		func_206(0);
		func_207(1);
	}
	func_208(iParam0, 1);
	func_209(iParam0);
}

void func_14()
{
	Global_1572864->f_8 = -1;
	Global_1572864->f_9 = -1;
	Global_1572864->f_10 = -1;
	func_210(0);
	func_211(0);
	func_64(0);
	func_65(0);
	func_212(0);
	func_213(1f);
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
		func_214();
	}
	_0xa0cefcea390aab9b(0);
}

void func_16(bool bParam0, int iParam1)
{
	if (func_215())
	{
		_0xdd1232b332cbb9e7(3, 1, 0);
	}
	if (bParam0)
	{
		if (func_216())
		{
			func_113(1);
		}
	}
	_0x36559148b78853b3(0, iParam1, 0);
}

void func_17(char[4] cParam0, bool bParam1)
{
	Var0 = func_195(func_12(cParam0->f_607));
	Var0.f_1 = 0;
	Var0.f_2 = func_132(func_33(cParam0));
	Var0.f_4 = (get_entity_health(Global_35) * 100 / get_entity_max_health(Global_35, false));
	Var0.f_5 = Global_40.f_7729;
	Var0.f_6 = func_217(0);
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
		func_218(iVar0, iParam0);
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
		if (func_219((*uParam1)[iVar0], 1048576))
		{
			switch (iParam0)
			{
				case 0:
					if ((*uParam1)[iVar0]->f_9 == 7)
					{
						func_220((*uParam1)[iVar0], 1);
					}
					break;
				case 1:
				case 2:
					if ((*uParam1)[iVar0]->f_9 == 3)
					{
						func_220((*uParam1)[iVar0], 1);
					}
					break;
				case 3:
					if ((*uParam1)[iVar0]->f_9 == 2)
					{
						func_220((*uParam1)[iVar0], 1);
					}
					break;
			}
		}
		iVar0++;
	}
}

bool func_26(var uParam0)
{
	return func_221(*uParam0, 1);
}

void func_27(var uParam0, bool bParam1)
{
	if (bParam1 || !func_26(uParam0))
	{
		func_222(uParam0);
	}
}

bool func_28(char[4] cParam0, bool bParam1)
{
	if (func_8(cParam0, 128) && func_29())
	{
		return true;
	}
	if (func_223(&(cParam0->f_13118)) >= 4000)
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
	func_224(!func_6(cParam0, 32), 1);
	func_1(cParam0, 32);
}

bool func_31(char[4] cParam0)
{
	return true;
}

bool func_32()
{
	return func_192(Global_1572864->f_8);
}

int func_33(char[4] cParam0)
{
	return cParam0->f_597;
}

struct<4> func_34(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			func_226(&Var0, func_225(0, 0));
			break;
		case 1:
			func_226(&Var0, func_225(6, 1));
			break;
		case 2:
			func_227(&Var0, 2253.779f, -780.6114f, 43.1462f, 27.7328f);
			break;
		case 3:
			func_227(&Var0, 2250.469f, -769.4153f, 41.7737f, 281.9608f);
			break;
		case 25:
			func_226(&Var0, func_225(0, 4));
			break;
	}
	return Var0;
}

int func_35(char[4] cParam0)
{
	return func_228(cParam0, func_33(cParam0));
}

void func_36(char[4] cParam0, struct<4> Param1, struct<4> Param5, int iParam9, int iParam10)
{
	Var0 = { Param1 };
	Var0.f_3 = Param1.f_3;
	Var4 = { Param5 };
	Var4.f_3 = Param5.f_3;
	func_210(0);
	func_229(func_12(cParam0->f_607), Var0, Var4, func_132(iParam9), func_132(iParam10));
}

void func_37(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_219((*uParam0)[iVar0], 1048576) && (*uParam0)[iVar0]->f_9 == 9)
		{
			func_230((*uParam0)[iVar0]);
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
			func_231(iVar0, 4096);
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
		func_232(Global_1935630, 4194304);
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
	func_233();
	func_234();
	func_235();
	func_236();
}

void func_43()
{
	if (func_237())
	{
		Global_18 = 0;
		Global_43884 = 0;
		if (!func_29())
		{
			func_238(1);
		}
	}
}

void func_44()
{
	Global_1894899->f_186 = 0;
	func_239();
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
	func_240(1, iParam0, iParam1);
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
	return (func_241() || func_54());
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
	func_242(uParam0);
	func_243(uParam0, 0);
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
		func_244(iVar0);
		iVar0++;
	}
	func_245();
	func_246();
}

bool func_54()
{
	return Global_1894899 & 2 != 0;
}

void func_55(bool bParam0, int iParam1)
{
	if (func_247())
	{
		if (func_248(255))
		{
			if (!func_249(36, 255))
			{
				return;
			}
		}
	}
	bVar0 = bParam0;
	if (!bParam0)
	{
		if (func_250(Global_1894899->f_2) && func_251(Global_1894899->f_2))
		{
			func_252(Global_1894899->f_2, 0);
			if (iParam1 != 0)
			{
				Global_1894899->f_7 = iParam1;
				func_253(16);
			}
		}
		else if (func_250(Global_1894899->f_2) && !func_254(Global_1894899->f_2, 2))
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
		func_255(16);
		func_256();
		if (bVar0)
		{
			func_255(1);
		}
	}
}

void func_56(char[4] cParam0)
{
	iVar0 = 0;
	while (iVar0 < cParam0->f_13145)
	{
		if (func_257(cParam0->f_5423[iVar0]))
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
	if (func_258(cParam0->f_5421))
	{
		iVar0 = 0;
		while (iVar0 < func_259(cParam0->f_5421))
		{
			iVar1 = func_260(cParam0->f_5421, iVar0);
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
		if (func_261(iVar1))
		{
			iVar2 = Global_1360165[iVar0];
			func_262(cParam0, iVar1, iVar2, iParam1, bParam2, bParam3, 0);
		}
		iVar0++;
	}
}

void func_58(char[4] cParam0, bool bParam1)
{
	_0x0751d461f06e41ce(get_player_index(), 33, 2, 0);
	iVar0 = func_263(cParam0);
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	if (is_entity_dead(iVar0) || is_ped_injured(iVar0))
	{
	}
	iVar1 = func_264(iVar0);
	iVar2 = get_id_of_this_thread();
	bVar3 = false;
	if (is_thread_active(iVar2, false) && func_265(iVar1) == iVar2)
	{
		bVar3 = true;
	}
	if (bVar3)
	{
		if (bParam1)
		{
			func_266(7);
		}
		else
		{
			func_267(iVar0, 0);
		}
		func_268(cParam0, 16);
		set_ped_config_flag(iVar0, 219, false);
	}
}

void func_59(int iParam0)
{
	iParam0 = func_269(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_270(iParam0, 32);
	func_271();
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
	Var0 = { func_272(iParam0) };
	if (!is_string_null_or_empty(&Var0))
	{
		_text_database_delete(&Var0);
	}
}

void func_63(int iParam0)
{
	Var0 = { func_273(iParam0) };
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
		func_212(1);
	}
}

void func_65(bool bParam0)
{
	Global_1572864->f_13 = bParam0;
	if (bParam0)
	{
		func_212(0);
	}
}

void func_66(int iParam0)
{
}

void func_67(char[4] cParam0)
{
	func_274(&(cParam0->f_13121));
}

void func_68(int iParam0, var uParam1)
{
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (func_219((*uParam1)[iVar0], 1048576) && (*uParam1)[iVar0]->f_9 == 9)
		{
			func_220((*uParam1)[iVar0], 1);
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
	iVar0 = func_197(iParam0);
	iVar1 = -1;
	if (iVar0 == 1)
	{
		iVar2 = func_275(iParam0);
		if (iVar2 == 36)
		{
			iVar1 = 99;
			if (func_276(iVar1))
			{
				if (func_277(iVar1, 4))
				{
					func_278(iVar1, 1);
				}
			}
		}
		else if (iVar2 == 38)
		{
			func_279(1);
		}
	}
	else if (iVar0 == 8)
	{
		iVar3 = func_275(iParam0);
		if (iVar3 == 59)
		{
			func_279(1);
		}
		else if (iVar3 == 61)
		{
			func_279(0);
		}
		else if (iVar3 == 83)
		{
			func_279(0);
		}
	}
}

void func_73()
{
	iVar0 = 0;
	while (iVar0 < &Global_1347702)
	{
		if (func_276(iVar0))
		{
			if (func_277(iVar0, 4))
			{
				if (func_277(iVar0, 16))
				{
					func_280(iVar0, 1);
				}
				if (func_277(iVar0, 8))
				{
					func_281(iVar0, 1);
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
		if (func_282(cParam0) == 0 && iVar0 == 0)
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
		func_283(iVar3, iVar4);
	}
	if (bVar2)
	{
		func_284(cParam0);
	}
}

void func_75(char[4] cParam0)
{
	iVar0 = 0;
	if (func_285(cParam0))
	{
		fVar1 = to_float((_get_bounty_for_player(get_player_index()) - (*Global_2621440)[0]->f_9.f_20));
		if (fVar1 > 0f)
		{
			fVar2 = (1f + (to_float(get_random_int_in_range(50, 200)) / 1000f));
			iVar0 = (iVar0 + round((fVar1 * fVar2)));
		}
	}
	func_286(iVar0, 0, 1065353216, 1, 0, 0, 1, 752097756);
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
	if (!func_250(iParam0))
	{
		return;
	}
	bVar0 = func_254(iParam0, 67108864);
	if (bParam1)
	{
		if (((!bVar0 && func_287(iParam0) == 1) && iParam0 != 120) && iParam0 != 92)
		{
			func_289(iParam0, func_288());
			func_290(iParam0, 67108864);
		}
	}
	else if (bVar0)
	{
		func_291(iParam0, 67108864);
		func_289(iParam0, -15);
	}
	func_292(iParam0);
}

void func_79(bool bParam0)
{
	if (!bParam0)
	{
		func_293(11);
	}
	else
	{
		func_294(11);
	}
}

void func_80(int iParam0)
{
	if (func_295(iParam0, 0))
	{
		func_296(262144, 5, 0, 1);
		func_297(720f, 1, 0);
	}
	switch (iParam0)
	{
		case 18:
			func_298(101, 7, 1f, 0, 1);
			func_298(89, 7, 1f, 0, 1);
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
	if (!func_192(iParam0))
	{
		return;
	}
	if (func_299(iParam0) == 4)
	{
		func_300(iParam0, func_288());
		if (!func_196(iParam0) == 5 && !func_196(iParam0) == 6)
		{
			if (bParam3)
			{
				func_204(iParam0, 6);
			}
			else
			{
				func_204(iParam0, 5);
			}
			func_209(iParam0);
		}
		return;
	}
	if (bParam1)
	{
		func_40(1);
	}
	iVar0 = func_197(iParam0);
	bVar1 = func_20() == false;
	if (iVar0 == 1 || iVar0 == 8)
	{
		func_301(0, 2);
		if (!bVar1 && bParam1)
		{
			func_302();
		}
	}
	else
	{
		func_206(0);
	}
	if (!iVar0 == 1 && !iVar0 == 8)
	{
		func_303(iParam0);
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
				if (bParam1 && func_196(iParam0) != 0)
				{
					if (iVar0 == 1)
					{
						if (func_275(iParam0) == 77)
						{
							stat_id_set_gxt_label(&Var4, &((*Global_1835011)[76]->f_8), true);
						}
						else
						{
							stat_id_set_gxt_label(&Var4, &((*Global_1835011)[func_275(iParam0)]->f_8), true);
						}
					}
					else if ((func_275(iParam0) != 95 && func_275(iParam0) != 82) && !func_304((*Global_1347702)[func_275(iParam0)]->f_12, 512))
					{
						stat_id_set_gxt_label(&Var4, &((*Global_1347702)[func_275(iParam0)]->f_3), true);
					}
				}
			}
			else
			{
				switch (_0x225640e09effdc3f())
				{
					case 0:
						stat_id_set_gxt_label(&Var4, &((*Global_1835011)[func_275(iParam0)]->f_8), true);
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
		func_306(func_275(iParam0), iVar6, func_305());
	}
	else if (iVar0 == 8)
	{
		func_308(func_275(iParam0), iVar6, func_305(), func_307());
	}
	if (!func_196(iParam0) == 5 && !func_196(iParam0) == 6)
	{
		iVar9 = func_309(iParam0, &iVar7, &iVar8);
		if (iVar9 != 176656832)
		{
			func_310(iVar9, iVar7, -469960592, iVar8, 1, 1, 0);
		}
	}
	if (!&Global_1879534 && !Global_1879534->f_1)
	{
		switch (iVar0)
		{
			case 1:
				iVar10 = func_311(func_275(iParam0), &iVar11);
				if (!Global_17504.f_9)
				{
					iVar10 = func_312((iVar10 - 20), 0, iVar10);
					iVar11 = func_312((iVar11 - 10), 0, iVar11);
				}
				func_313(1);
				func_314(iVar10, iVar11, 1);
				Global_17504.f_9 = 0;
				Global_17504.f_10 = 0;
				Global_1899528->f_217 = 1;
				break;
			case 4:
				func_314(45, 0, 1);
				break;
			case 8:
				iVar10 = func_315(func_275(iParam0), &iVar11);
				if (!Global_17504.f_9)
				{
					iVar10 = func_312((iVar10 - 20), 0, iVar10);
					iVar11 = func_312((iVar11 - 10), 0, iVar11);
				}
				func_314(iVar10, iVar11, 1);
				Global_17504.f_9 = 0;
				Global_17504.f_10 = 0;
				if (func_316(func_275(iParam0)))
				{
					func_317(14, 0, 0, 0, 0, 0, 1065353216, 0);
				}
				Global_1899528->f_217 = 1;
				break;
			case 9:
				func_314(120, 0, 1);
				break;
			case 2:
				func_314(120, 0, 1);
				break;
			case 6:
				func_314(func_319(func_318(iParam0)), 0, 1);
				break;
			case 5:
				func_314(120, 0, 1);
				break;
		}
	}
	func_208(iParam0, 1);
	func_300(iParam0, func_288());
	func_209(iParam0);
	if ((!func_196(iParam0) == 0 && bParam1) && func_20() == -1)
	{
		iVar12 = func_201(iParam0);
		if (iVar12 != -1)
		{
			func_202(0);
		}
		else if (iVar0 == 8)
		{
			iVar12 = func_203();
			if (iVar12 != -1)
			{
				func_202(0);
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
				switch (func_275(iParam0))
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
				if (func_276(func_275(iParam0)) && func_304((*Global_1347702)[func_275(iParam0)]->f_12, 4))
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
				if (func_275(iParam0) != 77)
				{
					Global_1879514->f_1 = iParam0;
					Global_1879514->f_11 = bParam3;
					Global_1879514->f_13 = func_129();
				}
				break;
			case 8:
				if (func_275(iParam0) != 58)
				{
					Global_1879514->f_1 = iParam0;
					Global_1879514->f_11 = bParam3;
					Global_1879514->f_13 = func_129();
				}
				break;
		}
	}
	if (!func_196(iParam0) == 5 && !func_196(iParam0) == 6)
	{
		if (bParam3)
		{
			func_204(iParam0, 6);
		}
		else
		{
			func_204(iParam0, 5);
		}
		func_209(iParam0);
		bVar13 = true;
	}
	if (bVar13)
	{
		switch (iVar0)
		{
			case 1:
				switch (func_275(iParam0))
				{
					case 0:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_PROFESSION_ODRISCOLL"));
						_0xd8c7162ab2e2af45(-1753910767);
						break;
					case 1:
						func_320();
						_0xbb697756309d77ee(1);
						break;
					case 4:
						func_321(-1781387050, 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_321(1433048902, 4, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_321(-597058368, 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_321(-529638012, 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_321(500564674, 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_321(-875449072, 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_321(1237770824, 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_321(236757114, 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_321(-601932535, 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_321(-1267972061, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_322(-1267972061);
						func_321(1619534881, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_322(1619534881);
						func_321(-755457379, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_322(-755457379);
						func_321(1015404643, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_322(1015404643);
						func_321(-1724192342, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_322(-1724192342);
						func_321(1310680212, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_322(1310680212);
						func_321(-566881549, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_322(-566881549);
						func_321(-1753730528, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_322(-1753730528);
						func_321(147796381, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_322(147796381);
						func_321(-378547623, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_322(-378547623);
						func_321(829545206, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_322(829545206);
						func_321(891318243, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_322(891318243);
						func_321(-1016714371, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_321(-1838434463, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_321(-1448210800, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_321(-248960099, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_323();
						func_324(967523420);
						func_325();
						func_326();
						break;
					case 5:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_TOMMY"));
						break;
					case 14:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_LEVITICUS"));
						break;
					case 2:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key(func_327(10, 0)));
						break;
					case 8:
						_0x946d46cd6dfb9742(get_player_index(), 0, 621714131);
						break;
					case 15:
						func_321(1030791766, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
						if (!_unlock_is_visible(1231074654))
						{
							_unlock_set_visible(1231074654, true);
							func_328(449, 0);
						}
						break;
					case 10:
						if (!_unlock_is_visible(1880205078))
						{
							_unlock_set_visible(1880205078, true);
							func_328(446, 0);
						}
						break;
					case 16:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("ALLY_LEIGHGRAY"));
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("ALLY_ARCHIBALD"));
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_PROFESSION_GRAY"));
						break;
					case 18:
						func_329(304805134, 1, 1);
						if (!func_330((*Global_1347702)[21]->f_15, 1))
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
						func_331();
						break;
					case 26:
						func_332();
						break;
					case 17:
						func_333(Global_35, 176992230, 0, -358215195, 1, 1);
						if (func_334())
						{
							func_335(1905553950);
						}
						break;
					case 19:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_TAVISH_GRAY"));
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_CLAY"));
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_CLIVE"));
						break;
					case 33:
						if (!func_336(-514575035, -1))
						{
							iVar15 = func_288();
							func_337(&iVar15, 0, 0, 0, 2, 0, 0, 0);
							func_338(-514575035, iVar15, 0);
						}
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_EVELYN_MILLER"));
						if (func_334())
						{
							func_335(1529685685);
						}
						break;
					case 34:
						if (func_334())
						{
							func_335(-2082646505);
						}
						break;
					case 28:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_BRONTE"));
						break;
					case 31:
						func_339();
						break;
					case 37:
						func_340();
						if (func_341())
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
						func_342();
						break;
					case 43:
						func_343();
						break;
					case 44:
						if (!func_330((*Global_1347702)[82]->f_15, 1))
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
						if (!func_330((*Global_1347702)[83]->f_15, 1))
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
						func_344();
						break;
					case 59:
						func_345();
						break;
					case 60:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_TOM_DICKENS"));
						break;
					case 61:
						func_346();
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
						func_347();
						if (!_unlock_is_visible(1673898385))
						{
							_unlock_set_visible(1673898385, true);
							func_328(451, 0);
						}
						if (!func_348(-1992824800))
						{
							if (func_348(1520110311))
							{
								iVar16 = func_288();
								func_337(&iVar16, 0, 0, 6, 0, 0, 0, 0);
								func_338(1937177603, iVar16, 1);
							}
						}
						if (func_349(4))
						{
							if (!func_350(684296857, 1, 0))
							{
								iVar17 = func_288();
								func_337(&iVar17, 0, 0, 6, 0, 0, 0, 0);
								func_338(-1439688706, iVar17, 1);
							}
						}
						func_321(1224687176, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_321(-4440804, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						break;
					case 74:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_ALBERT_CAKE"));
						func_351(89200);
						func_351(2300);
						func_351(2300);
						break;
					case 68:
						func_352();
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
						func_353();
						func_351(-139100);
						break;
					case 69:
						if (func_330((*Global_1347702)[9]->f_15, 1))
						{
							func_351(-6000);
						}
						break;
					case 70:
						func_351(23400);
						func_351(1900);
						func_351(-15000);
						break;
					case 71:
						func_351(-5500);
						break;
				}
				break;
			case 8:
				switch (func_275(iParam0))
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
						func_354();
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
						func_355();
						break;
					case 66:
						func_356();
						func_357();
						break;
					case 67:
						if (!func_358(6))
						{
							func_359(6);
						}
						if (!func_358(3))
						{
							func_359(3);
						}
						if (func_334())
						{
							func_335(1534638301);
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
						if (func_330((*Global_1835011)[69]->f_1, 1))
						{
							func_360(0);
							func_351(40500);
						}
						else
						{
							func_360(0);
							func_351(46500);
						}
						break;
				}
				break;
			case 6:
				switch (func_275(iParam0))
				{
					case 0:
						switch (func_318(iParam0))
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
				switch (func_275(iParam0))
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
						if (!func_350(-2046502963, 1, 0))
						{
							func_321(-2046502963, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
				if (func_304((*Global_1347702)[func_275(iParam0)]->f_12, 536870912))
				{
					func_365(11, 1);
				}
				switch (func_275(iParam0))
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
			if (!func_196(iParam0) == 0)
			{
				if (func_195(iParam0) == 0)
				{
				}
				else if (_0x01f4d242765c6b24(func_195(iParam0)))
				{
					iVar19 = 0;
					if (bParam3)
					{
						iVar19 = 3;
					}
					func_198(func_197(iParam0), func_195(iParam0), iVar19);
					if (bParam4)
					{
						if (iVar0 == 8 && func_275(iParam0) == 58)
						{
							Global_1879514->f_1 = iParam0;
						}
						func_369(func_368(Global_1879514->f_1));
						if (iVar0 == 8 && func_275(iParam0) == 58)
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
						if (func_276(func_275(iParam0)) && func_304((*Global_1347702)[func_275(iParam0)]->f_12, 1))
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
	func_207(1);
	if ((bVar13 || func_129()) && (func_197(iParam0) == 1 || func_197(iParam0) == 8))
	{
		Global_1879534->f_6 = 1;
		Global_1879534->f_7 = 1;
	}
}

void func_84(int iParam0, bool bParam1)
{
	if (_0x01f4d242765c6b24(func_195(iParam0)))
	{
		iVar0 = 0;
		if (bParam1)
		{
			iVar0 = 3;
		}
		func_198(func_197(iParam0), func_195(iParam0), iVar0);
		if (func_82(32768))
		{
			iVar1 = func_197(iParam0);
			if ((iVar1 == 1 || iVar1 == 8) || (iVar1 == 11 && iParam0 == func_366(0, 10, 11, 2116153146)))
			{
				Global_1898438 = get_game_timer();
				Global_1879514->f_1 = iParam0;
				Global_1879514->f_19 = func_371();
				Global_1879514->f_18 = 1;
			}
		}
	}
	if (func_194(iParam0))
	{
		func_13(iParam0, 0, 2);
	}
	else if (func_193(iParam0))
	{
		if (!func_196(iParam0) == 5 && !func_196(iParam0) == 6)
		{
			if (bParam1)
			{
				func_204(iParam0, 6);
			}
			else
			{
				func_204(iParam0, 5);
			}
			func_209(iParam0);
		}
	}
	switch (func_197(iParam0))
	{
		case 1:
			switch (func_275(iParam0))
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
			switch (func_275(iParam0))
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
	if (!func_192(iParam0))
	{
		return;
	}
	if (iParam0 != func_205(0))
	{
		return;
	}
	if (func_195(iParam0) == 0)
	{
	}
	iVar0 = func_197(iParam0);
	if (func_196(iParam0) == 3)
	{
		if (func_195(iParam0) == 0)
		{
		}
		else if (_0x01f4d242765c6b24(func_195(iParam0)))
		{
			if (func_197(iParam0) != 1 && func_197(iParam0) != 8)
			{
				func_198(func_197(iParam0), func_195(iParam0), 1);
			}
		}
	}
	Global_1898438 = (get_game_timer() - 10000);
	func_209(iParam0);
	func_40(1);
	func_206(0);
	func_204(iParam0, 0);
	switch (iVar0)
	{
		case 1:
			func_313(1);
			func_314(15, 0, 1);
			break;
		case 4:
			func_314(10, 0, 1);
			break;
		case 8:
			func_314(10, 0, 1);
			break;
		case 9:
			func_314(10, 0, 1);
			break;
		case 2:
			func_314(10, 0, 1);
			break;
		case 6:
			func_314(10, 0, 1);
			break;
		case 5:
			func_314(10, 0, 1);
			break;
	}
	func_207(1);
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
		func_213(0.88f);
	}
	StringCopy(&(Global_1347343->f_3), sParam2, 64);
	Global_1347343->f_2 = iParam0;
	Global_1347343 = 0;
	Global_1347343->f_1 = iParam1;
	func_232(Global_1935630, 2048);
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

void func_100(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < Global_43619)
	{
		if (does_entity_exist(&(Global_43619[iVar0])))
		{
			*uParam0->f_7375.f_13[iVar0] = { *Global_43619[iVar0] };
			func_382(&(uParam0->f_10792), &(Global_43619[iVar0]), &(Global_43619[iVar0]->f_1), 0);
		}
		iVar0++;
	}
	if (_does_anim_scene_exist(Global_43800))
	{
		uParam0->f_7375.f_804 = Global_43800;
		take_ownership_of_anim_scene(uParam0->f_7375.f_804);
	}
	if (func_200(&Global_1935630, 524288))
	{
		func_71(Global_1935630, 524288);
		func_383(uParam0, 67108864);
	}
}

int func_101(var uParam0)
{
	return func_384(&(uParam0->f_7375));
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
	cParam0->f_634[0] = 58256;
	cParam0->f_634[1] = 58256;
	cParam0->f_637 = 0;
	func_388(cParam0, *uParam1);
	func_389(cParam0);
}

void func_109(char[4] cParam0)
{
}

char[] func_110(int iParam0)
{
	if (!func_191(iParam0))
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
			func_390(iVar0, iVar1);
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
	if (!func_250(iParam0))
	{
		return false;
	}
	return func_254(iParam0, 33554432);
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
	return func_391(cParam0->f_1[func_132(iParam1)]->f_11, iParam2);
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
		func_392(&(uParam0->f_7375));
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

int func_125(char[4] cParam0)
{
	return cParam0->f_8268;
}

Vector3 func_126(int iParam0)
{
	return func_393(iParam0);
}

bool func_127(struct<4> Param0)
{
	if (func_82(32768))
	{
		return true;
	}
	return func_394(Param0, Param0.f_3);
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
	if (!func_395())
	{
		return false;
	}
	if (!func_330((*Global_1835011)[1]->f_1, 1))
	{
		return true;
	}
	if ((func_330((*Global_1835011)[2]->f_1, 1) && func_330((*Global_1347702)[120]->f_15, 1)) && !func_330((*Global_1835011)[4]->f_1, 1))
	{
		return true;
	}
	if (func_330((*Global_1835011)[37]->f_1, 1) && !func_330((*Global_1835011)[39]->f_1, 1))
	{
		return true;
	}
	if (func_330((*Global_1835011)[57]->f_1, 1) && !func_330((*Global_1835011)[60]->f_1, 1))
	{
		return true;
	}
	if (func_330((*Global_1835011)[26]->f_1, 1) && !func_330((*Global_1347702)[67]->f_15, 1))
	{
		return true;
	}
	if ((func_330((*Global_1835011)[62]->f_1, 1) && func_330((*Global_1835011)[63]->f_1, 1)) && !func_330((*Global_1835011)[64]->f_1, 1))
	{
		return true;
	}
	if (func_330((*Global_1835011)[75]->f_1, 1) && !func_330((*Global_1347702)[1]->f_15, 1))
	{
		return true;
	}
	if (func_330((*Global_1835011)[76]->f_1, 1) && !func_330((*Global_1835011)[77]->f_1, 1))
	{
		return true;
	}
	if ((func_330((*Global_1835011)[40]->f_1, 1) && func_330((*Global_1835011)[41]->f_1, 1)) && !func_330((*Global_1835011)[44]->f_1, 1))
	{
		return true;
	}
	if ((func_330((*Global_1835011)[62]->f_1, 1) && func_330((*Global_1835011)[63]->f_1, 1)) && !func_330((*Global_1835011)[64]->f_1, 1))
	{
		return true;
	}
	if ((func_330((*Global_1835011)[65]->f_1, 1) && func_330((*Global_1835011)[66]->f_1, 1)) && !func_330((*Global_1835011)[67]->f_1, 1))
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
	if (func_396(vParam1))
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
	func_222(&(uParam0->f_603));
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
		return func_397();
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
		func_398(uParam0->f_607);
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

bool func_136(var uParam0, int iParam1)
{
	return uParam0->f_1[func_132(iParam1)]->f_12;
}

void func_137(var uParam0)
{
	func_399(&(uParam0->f_638));
	func_400(&(uParam0->f_819));
	func_401(&(uParam0->f_1020));
	func_402(&(uParam0->f_1081));
	func_403(&(uParam0->f_1126));
	func_404(&(uParam0->f_5147));
	func_405(&(uParam0->f_1124));
	func_406(&(uParam0->f_5188));
	func_407(&(uParam0->f_5239));
	func_408(&(uParam0->f_5249));
	func_409(&(uParam0->f_5265));
	func_410(&(uParam0->f_5286));
}

void func_138(var uParam0)
{
	if (!is_itemset_valid(Local_14))
	{
		Local_14 = create_itemset(true);
	}
	func_411(uParam0, -1261543418, 67108863);
	func_411(uParam0, 421820477, 67108863);
	func_411(uParam0, -2021891582, 67108863);
	func_411(uParam0, 2070068088, 67108863);
	func_411(uParam0, -219829341, 67108863);
	func_411(uParam0, 628999829, 67108863);
	func_411(uParam0, 1461854168, 28);
	func_411(uParam0, 1935100224, 67108863);
	func_411(uParam0, 737910671, 67108863);
	func_411(uParam0, -1261543418, 67108863);
	func_411(uParam0, 421820477, 67108863);
	func_411(uParam0, -2021891582, 67108863);
	func_411(uParam0, 2070068088, 67108863);
	func_411(uParam0, -219829341, 67108863);
	func_411(uParam0, 628999829, 67108863);
	func_411(uParam0, iLocal_126, 8);
	func_411(uParam0, 1461854168, 28);
	func_411(uParam0, 1935100224, 67108863);
}

void func_139(var uParam0)
{
	func_412(uParam0, cVar264, 3, 2, -1);
	func_412(uParam0, cVar265, 8, 2, -1);
	func_412(uParam0, cVar266, 1, 2, -1);
	func_412(uParam0, "gng1_mcs1_assist", 2, 2, -1);
	func_412(uParam0, cVar267, 4, 2, -1);
	func_412(uParam0, cVar269, 8, 2, -1);
	func_412(uParam0, cVar268, 8, 2, -1);
	func_413(uParam0, "script@story@gng1@ig@ig_1_escape_bunkie@ig_1_escape_bunkie", uLocal_171[0], 1, 0, "pl_leadout", 0, 1);
	func_413(uParam0, "script@story@gng1@ig@ig_1_escape_bunkie@ig_1_escape_bunkie_mrs_alder", uLocal_171[1], 3, 0, "", 0, 1);
	func_413(uParam0, "script@story@GNG1@Leadin@MCS1@Leadin", uLocal_171[2], 2, 0, 0, 0, 1);
	func_413(uParam0, "script@story@gng1@ig@ig2_dutch_micah_bill_idle_loops_p1@ig2_d_m_b_loop01", uLocal_171[3], 7, 0, 0, 0, 1);
	func_413(uParam0, "script@story@gng1@ig@ig_3_bunkhouse_companion_cover_loops@ig_3_bunkhouse_companion_cover_loops", uLocal_171[4], 67108863, 0, "s_idle", 0, 1);
	func_413(uParam0, "lightrig@mission@gang1_interior_fire", uLocal_171[5], 3, 0, "plMain_looped", 0, 1);
	func_411(uParam0, 1854261786, 2);
	func_411(uParam0, 742064790, 67108863);
	func_411(uParam0, iLocal_180, 67108863);
	func_411(uParam0, iLocal_181, 67108863);
	func_411(uParam0, -136833353, 12);
}

void func_140(char[4] cParam0, int iParam1, int iParam2)
{
	func_414(&(cParam0->f_1[func_132(iParam1)]->f_11), iParam2);
}

void func_141(var uParam0)
{
	func_103(uParam0, 1);
}

void func_142(var uParam0, int iParam1)
{
	func_415(&(uParam0->f_638), &(uParam0->f_819), &(uParam0->f_1020), &(uParam0->f_1081), &(uParam0->f_1124), &(uParam0->f_1126), &(uParam0->f_5147), &(uParam0->f_5188), &(uParam0->f_5239), &(uParam0->f_5249), &(uParam0->f_5265), &(uParam0->f_5286), iParam1);
}

void func_143(int iParam0)
{
	Var0 = { func_272(iParam0) };
	if (!is_string_null_or_empty(&Var0))
	{
		_text_database_request(&Var0);
	}
}

void func_144(int iParam0)
{
	Var0 = { func_273(iParam0) };
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
	if (!func_258(cParam0->f_5421))
	{
		cParam0->f_5421 = { func_417() };
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
	if (!func_191(iParam0))
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
		if (func_421(uParam0, func_35(uParam0), 0))
		{
			func_140(uParam0, func_35(uParam0), 536870912);
		}
	}
	if (func_8(uParam0, 8192))
	{
		if (!func_8(uParam0, 536870912))
		{
			if (func_422(&(uParam0->f_1126), func_33(uParam0)))
			{
				func_99(uParam0, 536870912);
			}
		}
		return;
	}
	bVar0 = false;
	if (func_421(uParam0, func_33(uParam0), 1))
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
	if (func_423(uParam0) < 1)
	{
		func_424(uParam0, func_128(uParam0, 3), !func_8(uParam0, 2097152), uParam0->f_5410, !func_8(uParam0, 32), 0);
		func_425(uParam0, 1, uParam0->f_5413, uParam0->f_5413.f_1, uParam0->f_5413.f_2, uParam0->f_5416, 1, 1, 1);
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
				func_426(uParam0);
			}
		}
		if (func_120(uParam0, 32))
		{
			func_427(uParam0);
		}
	}
	switch (func_423(uParam0))
	{
		case -1:
		case 0:
			func_428(uParam0, 1);
			break;
		case 1:
			if (func_429(uParam0))
			{
				if (func_120(uParam0, 4096))
				{
					func_428(uParam0, 2);
				}
				else
				{
					func_428(uParam0, 3);
				}
			}
			break;
		case 2:
			if (func_430(uParam0))
			{
				func_428(uParam0, 3);
			}
			break;
		case 3:
			if (func_431(uParam0))
			{
				func_428(uParam0, 4);
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

void func_160(char[4] cParam0, int iParam1)
{
	*cParam0 = iParam1;
}

bool func_161(var uParam0)
{
	if (func_33(uParam0) == 26)
	{
		func_432(uParam0, 0);
		return true;
	}
	if (func_433(uParam0))
	{
		iVar0 = func_33(uParam0);
		func_107(uParam0, func_35(uParam0));
		if (func_33(uParam0) == 26)
		{
			func_432(uParam0, 0);
			return true;
		}
		else if (func_121(uParam0, iVar0, 128))
		{
			func_433(uParam0);
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
	while (iVar0 < 27)
	{
		if ((((((((((iLocal_238[iVar0] && iVar0 != 1) && iVar0 != 23) && iVar0 != 5) && iVar0 != 9) && iVar0 != 8) && iVar0 != 11) && iVar0 != 26) && iVar0 != 25) && iVar0 != 24) && iVar0 != 16)
		{
			func_434(iVar0, 2, 1);
			func_359(iVar0);
		}
		iVar0++;
	}
}

void func_164()
{
	if (!is_player_dead(player_id()) && func_165(Global_35, 0))
	{
		set_ped_reset_flag(player_ped_id(), 159, false);
		_0xae637bb8ef017875(player_id(), 1);
		_0x4be3ec91c01f0fe8();
		set_player_forced_aim(player_id(), false, 0, -1, false);
	}
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
	if (func_391(iVar0, 1))
	{
		if (is_ped_fatally_injured(iParam0))
		{
			return false;
		}
	}
	if (func_391(iVar0, 2))
	{
		if (_is_ped_hogtied(iParam0))
		{
			return false;
		}
	}
	if (func_391(iVar0, 8))
	{
		if (get_ped_config_flag(iParam0, 11, false))
		{
			return false;
		}
	}
	if (func_391(iVar0, 16))
	{
		if (!is_ped_on_mount(iParam0) && !is_ped_in_any_vehicle(iParam0, false))
		{
			return false;
		}
	}
	if (func_391(iVar0, 32))
	{
		if (is_entity_in_water(iParam0))
		{
			return false;
		}
	}
	if (func_391(iVar0, 64))
	{
		if (_0xb655db7582aec805(iParam0))
		{
			return false;
		}
	}
	if (func_391(iVar0, 128))
	{
		if (is_ped_ragdoll(iParam0))
		{
			return false;
		}
	}
	if (func_391(iVar0, 256))
	{
		if (!_0xa0bc8faed8cfeb3c(iParam0))
		{
			return false;
		}
	}
	return true;
}

void func_166(int iParam0)
{
	Global_1357549->f_1614 = iParam0;
}

void func_167(char[4] cParam0)
{
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (func_165(&(uLocal_182[iVar0]), 0))
		{
			freeze_entity_position(&(uLocal_182[iVar0]), false);
			_set_ped_crouch_movement(&(uLocal_182[iVar0]), false, 0, false);
		}
		iVar0++;
	}
	func_262(cParam0, 0, &(uLocal_182[0]), 0, 0, 1, 0);
	func_262(cParam0, 3, &(uLocal_182[1]), 0, 0, 1, 0);
	func_262(cParam0, 6, &(uLocal_182[2]), 0, 0, 1, 0);
	func_262(cParam0, 11, &(uLocal_182[3]), 0, 0, 1, 0);
	func_262(cParam0, 18, &(uLocal_182[4]), 0, 0, 1, 0);
	func_262(cParam0, 4, &(uLocal_182[6]), 0, 0, 1, 0);
	func_262(cParam0, 13, &(uLocal_182[7]), 0, 0, 1, 0);
	func_262(cParam0, 22, &(uLocal_182[8]), 0, 0, 1, 0);
	func_262(cParam0, 17, &(uLocal_182[9]), 0, 0, 1, 0);
	func_262(cParam0, 7, &(uLocal_182[13]), 0, 0, 1, 0);
	func_262(cParam0, 2, &(uLocal_182[10]), 0, 0, 1, 0);
	func_262(cParam0, 21, &(uLocal_182[12]), 0, 0, 1, 0);
	func_262(cParam0, 19, &(uLocal_182[11]), 0, 0, 1, 0);
}

void func_168(int iParam0, bool bParam1)
{
	if (!is_itemset_valid(iParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < get_itemset_size(iParam0))
	{
		iVar1 = get_indexed_item_in_itemset(iVar0, iParam0);
		iVar2 = iVar1;
		if (does_entity_exist(iVar2))
		{
			delete_entity(&iVar2);
		}
		iVar0++;
	}
	_0x20a4bf0e09bee146(iParam0);
	if (bParam1)
	{
		destroy_itemset(iParam0);
	}
}

void func_169()
{
	func_435(&(Global_1946804->f_1949));
}

void func_170(int iParam0, int iParam1)
{
	if (!is_itemset_valid(iParam1))
	{
		return;
	}
	if (does_entity_exist(iParam0))
	{
		if (is_in_itemset(iParam0, iParam1))
		{
			remove_from_itemset(iParam0, iParam1);
		}
	}
}

void func_171(var uParam0, bool bParam1)
{
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		func_436((*uParam0)[iVar0], bParam1);
		iVar0++;
	}
}

void func_172(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, float fParam5, int iParam6, bool bParam7)
{
	func_437(iParam0, 0, 0);
	if (func_438(iParam0))
	{
		door_system_set_open_ratio(iParam0, iParam2, iParam6);
		if (fParam5 > 0f)
		{
			door_system_set_automatic_rate(iParam0, fParam5);
		}
		if (bParam3)
		{
			func_439(iParam0, iParam2, 1, iParam6);
		}
		else if (bParam1)
		{
			if (bParam4)
			{
				func_440(iParam0, 1);
			}
			else
			{
				func_441(iParam0, 1);
			}
		}
		else
		{
			func_442(iParam0, 1);
		}
		if (bParam7)
		{
			_0x276aaf0f1c7f2494(iParam0, 1);
		}
	}
	else if (func_443())
	{
	}
	else if (network_is_in_session())
	{
	}
}

bool func_173(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (!func_276(iParam0))
	{
		return true;
	}
	if (!func_444(iParam0, 0))
	{
		if (iParam1 == 0)
		{
			return true;
		}
		func_445(iParam0, 0);
	}
	if (bParam2)
	{
		if (!func_446((*Global_1347702)[iParam0]->f_13, 1024))
		{
			func_447(&((*Global_1347702)[iParam0]->f_13), 1024);
		}
	}
	if (bParam4 && !func_446((*Global_1347702)[iParam0]->f_13, 8192))
	{
		func_447(&((*Global_1347702)[iParam0]->f_13), 8192);
	}
	if (is_thread_active((*Global_1347702)[iParam0]->f_42, false))
	{
		if (func_446((*Global_1347702)[iParam0]->f_13, 64))
		{
			return true;
		}
		return false;
	}
	if (!func_448(iParam0))
	{
		func_449((*Global_1347702)[iParam0]->f_15);
	}
	else if (bParam3 && !func_450((*Global_1347702)[iParam0]->f_15))
	{
		func_451((*Global_1347702)[iParam0]->f_15);
	}
	if (!func_446((*Global_1347702)[iParam0]->f_13, 256))
	{
		func_447(&((*Global_1347702)[iParam0]->f_13), 256);
	}
	return false;
}

void func_174(int iParam0, int iParam1, bool bParam2)
{
	if (func_452(iParam0))
	{
		return;
	}
	if (iParam1 == 1 || func_444(iParam0, 0))
	{
		if ((bParam2 || func_304((*Global_1347702)[iParam0]->f_12, 65536)) || func_453(iParam0))
		{
			if (bParam2 && !func_446((*Global_1347702)[iParam0]->f_13, 1024))
			{
				func_447(&((*Global_1347702)[iParam0]->f_13), 1024);
			}
			func_454(&((*Global_1347702)[iParam0]->f_12), 1024);
			func_454(&((*Global_1347702)[iParam0]->f_12), 32768);
			func_455(iParam0);
		}
	}
}

void func_175(int iParam0, int iParam1, bool bParam2)
{
	if (!func_276(iParam0))
	{
		return;
	}
	func_456(iParam0, 1, iParam1, 1, 32);
	if (bParam2 && func_446((*Global_1347702)[iParam0]->f_13, 1024))
	{
		func_457(&((*Global_1347702)[iParam0]->f_13), 1024);
	}
	if (func_448(iParam0))
	{
		func_458((*Global_1347702)[iParam0]->f_15);
	}
	if (iParam1 == 1)
	{
		func_459(iParam0, 1);
	}
}

void func_176()
{
	_delete_volume(Local_127);
	_delete_volume(Local_127.f_1);
	_delete_volume(Local_127.f_2);
	_delete_volume(Local_127.f_3);
	_delete_volume(Local_127.f_4);
	_delete_volume(Local_127.f_5);
	_delete_volume(Local_127.f_6);
	_delete_volume(Local_127.f_7);
	_delete_volume(Local_127.f_8);
	_delete_volume(Local_127.f_9);
	_delete_volume(Local_127.f_10);
	_delete_volume(Local_127.f_11);
	_delete_volume(Local_127.f_12);
	_delete_volume(Local_127.f_13);
	_delete_volume(Local_127.f_14);
	_delete_volume(Local_127.f_15);
	_delete_volume(Local_127.f_16);
	_delete_volume(Local_127.f_17);
	_delete_volume(Local_127.f_18);
	_delete_volume(Local_127.f_19);
	_delete_volume(Local_127.f_20);
	_delete_volume(Local_127.f_21);
	_delete_volume(Local_127.f_22);
	_delete_volume(Local_127.f_23);
	_delete_volume(Local_127.f_24);
	_delete_volume(Local_127.f_25);
	_delete_volume(Local_127.f_26);
	_delete_volume(Local_127.f_27);
	_delete_volume(Local_127.f_28);
	_delete_volume(Local_127.f_29);
	_delete_volume(Local_127.f_30);
	_delete_volume(Local_127.f_31);
}

void func_177()
{
	remove_cover_point(iLocal_237);
}

void func_178(struct<2> Param0)
{
	if (!func_258(Param0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < func_259(Param0))
	{
		iVar1 = func_460(Param0, iVar0);
		if (does_entity_exist(iVar1))
		{
			if (!is_entity_dead(iVar1))
			{
				if (is_entity_a_ped(iVar1))
				{
					_set_entity_health(iVar1, 0, 0);
				}
			}
		}
		iVar0++;
	}
}

void func_179(bool bParam0, bool bParam1, int iParam2)
{
	if (bParam0)
	{
		func_461(4096);
		if (bParam1 && _does_volume_exist(iParam2))
		{
			iVar0 = 0;
			while (iVar0 < 27)
			{
				if (func_165(func_462(iVar0), 0))
				{
					if (!func_463(iVar0))
					{
						if (func_464(iVar0, 32768, 1))
						{
							_0x7b204f88f6c3d287(func_465(iVar0, 0));
						}
					}
				}
				iVar0++;
			}
		}
	}
	else
	{
		func_48(4096);
	}
}

void func_180(bool bParam0)
{
	if (!bParam0)
	{
		func_466(0);
	}
	Global_1935689->f_2 = bParam0;
}

Vector3 func_181(int iParam0, int iParam1)
{
	return func_467(iParam0, iParam1);
}

bool func_182(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return is_bit_set(&(Global_1934765->f_21[iVar1]), iVar2);
}

void func_183(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	set_bit(Global_1934765->f_21[iVar1], iVar2);
}

void func_184(bool bParam0, float fParam1)
{
	clear_bit(&(Global_1934765->f_301), 1);
	func_468(bParam0, fParam1);
}

void func_185(int iParam0)
{
	switch (func_20())
	{
		case -1:
			Global_1357549->f_1495 = (Global_1357549->f_1495 - (Global_1357549->f_1495 && iParam0));
			break;
	}
}

void func_186(char* sParam0)
{
	if (_0x5ac0944c156e5f44(sParam0))
	{
		_0x527b97c203bb8606(sParam0);
	}
}

void func_187(char* sParam0)
{
	if (!_0x5ac0944c156e5f44(sParam0))
	{
		_0x7c334ff4d9215912(sParam0);
	}
}

void func_188(int iParam0)
{
	if (_does_volume_exist(iParam0))
	{
		_delete_volume(iParam0);
	}
}

int func_189(int iParam0)
{
	return iParam0;
}

void func_190(int iParam0)
{
	if (!func_469(iParam0))
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

bool func_191(int iParam0)
{
	return (iParam0 > -1 && iParam0 <= 80);
}

bool func_192(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

bool func_193(int iParam0)
{
	iVar0 = func_299(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

bool func_194(int iParam0)
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
		iVar0 = func_196(iParam0);
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

int func_195(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_5;
	}
	return Global_1058888->f_498[iParam0]->f_1;
}

int func_196(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_1;
	}
	iVar0 = func_470(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888->f_40501.f_1[iVar0]->f_1;
}

int func_197(int iParam0)
{
	if (!func_192(iParam0))
	{
		return 0;
	}
	return func_472(func_471(iParam0));
}

void func_198(int iParam0, int iParam1, int iParam2)
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

bool func_199(int iParam0, bool bParam1, bool bParam2)
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
		if (func_473())
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
		iVar0 = func_275(&(Global_1898164->f_1[0]));
		if (func_276(iVar0) && func_304((*Global_1347702)[iVar0]->f_12, 131072))
		{
			return false;
		}
	}
	if (iParam0 == 0 && func_192(&(Global_1898164->f_1[0])))
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

bool func_200(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_201(int iParam0)
{
	switch (func_197(iParam0))
	{
		case 1:
			iVar0 = func_275(iParam0);
			return func_474(iVar0);
		case 8:
			iVar1 = func_275(iParam0);
			if (func_304((*Global_1347702)[iVar1]->f_12, 1))
			{
				return func_475(iVar1);
			}
			break;
	}
	return -1;
}

void func_202(bool bParam0)
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
		func_476(iVar0, Global_1898077->f_12);
	}
	else
	{
		Global_1898077->f_1 = 0;
		Global_1898077->f_7 = iVar0;
		Global_1898077->f_8 = func_477();
		Global_1898077->f_9 = func_478(Global_1894899->f_2);
		func_479(Global_1898077->f_7, Global_1898077->f_8, Global_1898077->f_9);
	}
	Global_1898077->f_2 = 0;
}

int func_203()
{
	if (!func_330((*Global_1835011)[4]->f_1, 1))
	{
		return 0;
	}
	else if (!func_330((*Global_1347702)[66]->f_15, 1))
	{
		return 1;
	}
	else if (!func_330((*Global_1347702)[67]->f_15, 1))
	{
		return 2;
	}
	else if (!func_330((*Global_1835011)[38]->f_1, 1))
	{
		return 3;
	}
	else if (!func_330((*Global_1347702)[68]->f_15, 1))
	{
		return 4;
	}
	else if (!func_330((*Global_1835011)[59]->f_1, 1))
	{
		return 5;
	}
	else if (!func_330((*Global_1835011)[67]->f_1, 1))
	{
		return 7;
	}
	else
	{
		return 8;
	}
	return -1;
}

void func_204(int iParam0, int iParam1)
{
	if (!func_192(iParam0))
	{
		return;
	}
	func_480(iParam0, iParam1);
}

int func_205(int iParam0)
{
	return &(Global_1898164->f_1[iParam0]);
}

int func_206(bool bParam0)
{
	if (!bParam0 && func_481(373691918))
	{
		return 0;
	}
	_0xc61edebf16cd9668(752193127, bParam0, 0);
	return 1;
}

void func_207(int iParam0)
{
	Global_1898164 = (Global_1898164 || iParam0);
}

void func_208(int iParam0, bool bParam1)
{
	if (func_20() != -1)
	{
		return;
	}
	if (func_205(0) != iParam0)
	{
		return;
	}
	if (func_482(iParam0))
	{
		if (bParam1)
		{
			func_483(-525676072);
		}
		else
		{
			func_484(-525676072);
		}
	}
}

int func_209(int iParam0)
{
	return func_486(func_485(iParam0));
}

void func_210(int iParam0)
{
	Global_1572864->f_12 = iParam0;
}

void func_211(int iParam0)
{
	Global_1572864->f_11 = iParam0;
}

void func_212(int iParam0)
{
	Global_1572864->f_15 = iParam0;
}

void func_213(float fParam0)
{
	Global_1572864->f_22 = fParam0;
}

void func_214()
{
	if (func_10(Global_43801))
	{
		func_11(&Global_43801, 0, 0);
	}
}

bool func_215()
{
	return func_487(_0xc17f69e1418cd11f(3));
}

bool func_216()
{
	iVar0 = _0xc17f69e1418cd11f(1);
	return (iVar0 != 0 && _0x59fa676177dbe4c9(iVar0) == 4);
}

int func_217(int iParam0)
{
	iParam0 = func_269(iParam0);
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

int func_218(int iParam0, int iParam1)
{
	if (!func_488(iParam0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if ((*Global_40.f_11206[iParam0])[iVar0]->f_3 == iParam1)
		{
			func_489(iParam0, (*Global_40.f_11206[iParam0])[iVar0]);
		}
		iVar0++;
	}
	return 1;
}

bool func_219(char* sParam0, int iParam1)
{
	return (sParam0->f_8 && iParam1) != 0;
}

bool func_220(char* sParam0, bool bParam1)
{
	if (func_219(sParam0, 1))
	{
		return false;
	}
	if (sParam0->f_9 == 15 || sParam0->f_9 == 16)
	{
		prepare_music_event(sParam0);
		func_490(sParam0, 1);
		return true;
	}
	if (bParam1)
	{
		if (sParam0->f_9 == 17 || sParam0->f_9 == 19)
		{
			set_audio_flag(sParam0, true);
			func_490(sParam0, 1);
			return false;
		}
		if (sParam0->f_9 == 18 || sParam0->f_9 == 20)
		{
			set_audio_flag(sParam0, false);
			func_490(sParam0, 1);
			return false;
		}
	}
	else
	{
		if (sParam0->f_9 == 10 || sParam0->f_9 == 12)
		{
			set_audio_flag(sParam0, true);
			func_490(sParam0, 1);
			return false;
		}
		if (sParam0->f_9 == 11 || sParam0->f_9 == 13)
		{
			set_audio_flag(sParam0, false);
			func_490(sParam0, 1);
			return false;
		}
	}
	if (!is_string_null_or_empty(sParam0))
	{
		trigger_music_event(sParam0);
		func_490(sParam0, 1);
		return true;
	}
	func_490(sParam0, 1);
	return false;
}

bool func_221(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_222(var uParam0)
{
	func_491(uParam0, 0f);
}

int func_223(var uParam0)
{
	if (!func_26(uParam0))
	{
		return round((uParam0->f_1 * 1000f));
	}
	if (func_492(uParam0))
	{
		return round((uParam0->f_2 * 1000f));
	}
	return (func_493() - round((uParam0->f_1 * 1000f)));
}

void func_224(bool bParam0, bool bParam1)
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
		func_494(0);
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

struct<4> func_225(int iParam0, int iParam1)
{
	return func_495(iParam0, iParam1);
}

void func_226(var uParam0, struct<4> Param1)
{
	*uParam0 = { Param1 };
	uParam0->f_3 = Param1.f_3;
}

void func_227(var uParam0, vector3 vParam1, float fParam4)
{
	Var0 = { vParam1 };
	Var0.f_3 = fParam4;
	func_226(uParam0, Var0);
}

int func_228(char[4] cParam0, int iParam1)
{
	return cParam0->f_1[func_132(iParam1)]->f_9;
}

void func_229(int iParam0, struct<4> Param1, struct<4> Param5, int iParam9, int iParam10)
{
	Global_1572864->f_8 = iParam0;
	Global_1572864->f_9 = iParam9;
	Global_1572864->f_10 = iParam10;
	StringCopy(&cVar0, "INVALID", 8);
	if (func_197(iParam0) == 1)
	{
		cVar0 = func_110(func_496(iParam0));
		_0x8ec7890d446bd9c1(&cVar0, 0, Global_1572864->f_9);
	}
	else if (func_197(iParam0) == 8)
	{
		cVar0 = func_498(func_497(iParam0));
		_0x8ec7890d446bd9c1(&cVar0, 0, Global_1572864->f_9);
	}
	func_499(1, 1);
	func_500(1, Param1, Param1.f_3);
	*Global_1347394 = { Param5 };
	func_64(0);
	func_65(0);
	func_213(1f);
}

void func_230(char* sParam0)
{
	if (is_audio_scene_active(sParam0))
	{
		stop_audio_scene(sParam0);
	}
	func_490(sParam0, 2);
}

void func_231(int iParam0, int iParam1)
{
	if (!func_501(iParam0))
	{
		return;
	}
	Global_40.f_11029[iParam0] = (Global_40.f_11029[iParam0] || iParam1);
}

void func_232(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_233()
{
	Global_1934266->f_78.f_62 = -1;
}

void func_234()
{
	StringCopy(&(Global_1934266->f_78.f_64), "", 24);
}

void func_235()
{
	StringCopy(&(Global_1934266->f_78.f_67), "", 24);
}

void func_236()
{
	Global_1934266->f_78.f_63 = 0;
}

bool func_237()
{
	return func_502(get_id_of_this_thread());
}

void func_238(bool bParam0)
{
	if (bParam0)
	{
		Global_1945938->f_865 = (Global_1945938->f_865 - Global_1945938->f_865 & 2);
	}
	else
	{
		Global_1945938->f_865 |= 2;
	}
	func_503(bParam0);
}

void func_239()
{
	if (!Global_1894899->f_186)
	{
		_0xf5ffb08976911b50(Global_1894899->f_182, Global_1894899->f_183, Global_1894899->f_184, Global_1894899->f_185);
	}
}

void func_240(int iParam0, int iParam1, int iParam2)
{
	_0x36559148b78853b3(iParam0, iParam1, iParam2);
}

bool func_241()
{
	return (Global_1894899 & 1 != 0 && func_77() != -1);
}

void func_242(var uParam0)
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

void func_243(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_244(int iParam0)
{
	if (!func_504(iParam0))
	{
		return;
	}
	(*Global_1310750)[iParam0]->f_46 = 0;
}

void func_245()
{
	func_505(64);
}

void func_246()
{
	Global_1310750->f_16072 = 0;
}

bool func_247()
{
	if (Global_1572887->f_12 == -1)
	{
		return false;
	}
	return Global_1058888->f_4;
}

bool func_248(int iParam0)
{
	return func_249(23, iParam0);
}

bool func_249(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_506(&(Global_1109400->f_4), iVar0, 5);
	}
	if (iParam1 == func_507())
	{
		return func_506(&(Global_1109400->f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (&Global_1225639->f_21[iParam1])
	{
		return func_506(&((*Global_1108178)[iParam1]->f_4), iVar0, 5);
	}
	return false;
}

bool func_250(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

bool func_251(int iParam0)
{
	if (!func_250(iParam0))
	{
		return false;
	}
	return func_254(iParam0, 8);
}

void func_252(int iParam0, int iParam1)
{
	if (!func_250(iParam0))
	{
		return;
	}
	(*Global_1888801)[iParam0]->f_19 = iParam1;
}

void func_253(int iParam0)
{
	Global_1894899 = (Global_1894899 || iParam0);
}

bool func_254(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		return (Global_23118[iParam0] && iParam1) != 0;
	}
	return (Global_1058888->f_40615[iParam0] && iParam1) != 0;
}

void func_255(int iParam0)
{
	Global_1894899 = (&Global_1894899 - (Global_1894899 && iParam0));
}

bool func_256()
{
	bVar0 = false;
	iVar1 = 0;
	while (iVar1 < 150)
	{
		if (func_254(iVar1, 1))
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
			else if (func_254(iVar1, 2))
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
				func_291(iVar1, 11);
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

bool func_257(var uParam0)
{
	if (func_508(uParam0, 1) || func_508(uParam0, 2))
	{
		return true;
	}
	return false;
}

bool func_258(int iParam0, var uParam1)
{
	return is_itemset_valid(iParam0);
}

int func_259(struct<2> Param0)
{
	if (!func_258(Param0))
	{
		return 0;
	}
	return get_itemset_size(Param0);
}

int func_260(struct<2> Param0, int iParam2)
{
	if (!func_258(Param0))
	{
		return 0;
	}
	iVar0 = get_indexed_item_in_itemset(iParam2, Param0);
	iVar1 = iVar0;
	return iVar1;
}

bool func_261(int iParam0)
{
	if (!func_509(iParam0))
	{
		return false;
	}
	if (!func_510(iParam0))
	{
		return false;
	}
	return (*Global_1360165)[iParam0]->f_129 == get_id_of_this_thread();
}

void func_262(char[4] cParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (!func_509(iParam1))
	{
		return;
	}
	if (!func_261(iParam1))
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
		func_511(cParam0, iParam2);
		func_512(iParam2);
	}
	func_513(iParam1);
	func_514(iParam1, 0);
	func_515(iParam1, 0, bParam4, bParam5, -1082130432, 1, 1, 0, 0, 0, 0);
	if (bParam5)
	{
	}
}

int func_263(char[4] cParam0)
{
	return cParam0->f_5411;
}

int func_264(int iParam0)
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

int func_265(int iParam0)
{
	iParam0 = func_269(iParam0);
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

void func_266(int iParam0)
{
	iParam0 = func_269(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = get_id_of_this_thread();
	func_516(iParam0);
	if (func_517(iParam0))
	{
		if (func_265(iParam0) != iVar0)
		{
			return;
		}
	}
	func_518(iParam0);
	func_519(iParam0);
	iVar1 = func_217(iParam0);
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
			if (!func_520(iVar2))
			{
				set_ped_model_is_suppressed(iVar2, false);
			}
		}
		func_521(iParam0);
	}
}

void func_267(int iParam0, bool bParam1)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (is_entity_dead(iParam0) || is_ped_injured(iParam0))
	{
		return;
	}
	if (!func_522(iParam0))
	{
		return;
	}
	iVar0 = func_264(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (iVar0 >= 7)
	{
		return;
	}
	func_59(iVar0);
	func_516(iVar0);
	iVar1 = get_id_of_this_thread();
	iVar2 = func_265(iVar0);
	if (!bParam1)
	{
		if (iVar1 != iVar2)
		{
			return;
		}
		if (!func_517(iVar0))
		{
			return;
		}
	}
	func_523(iVar0);
	set_ped_keep_task(iParam0, true);
	if (bParam1 && func_20() == -1)
	{
		if (!_0x88ad6cc10d8d35b2(iParam0))
		{
			set_entity_as_mission_entity(iParam0, true, true);
		}
	}
}

void func_268(char[4] cParam0, int iParam1)
{
	cParam0->f_5308 = (cParam0->f_5308 - (cParam0->f_5308 && iParam1));
}

int func_269(int iParam0)
{
	if (iParam0 == 7)
	{
		return Global_40.f_1095;
	}
	return iParam0;
}

void func_270(int iParam0, int iParam1)
{
	iParam0 = func_269(iParam0);
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

void func_271()
{
	if (func_524(0))
	{
		func_525(0);
	}
	if (func_524(1))
	{
		func_525(1);
	}
	if (func_524(5))
	{
		func_525(5);
	}
	if (func_524(6))
	{
		func_518(6);
	}
}

struct<2> func_272(int iParam0)
{
	MemCopy(&Var0, {func_110(iParam0)}, 2);
	return Var0;
}

struct<2> func_273(int iParam0)
{
	Var0 = { func_272(iParam0) };
	StringConCat(&Var0, "AUD", 16);
	return Var0;
}

void func_274(var uParam0)
{
	_0xebff94328ff7a18a(-3.141593f, 3.141593f);
	if (_uiprompt_is_valid(uParam0->f_11))
	{
		_uiprompt_delete(uParam0->f_11);
	}
}

int func_275(int iParam0)
{
	if (!func_192(iParam0))
	{
		return -1;
	}
	return func_526(func_471(iParam0));
}

bool func_276(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_277(int iParam0, int iParam1)
{
	return (Global_40.f_490.f_402[iParam0] && iParam1) != 0;
}

void func_278(int iParam0, bool bParam1)
{
	iVar0 = func_527(iParam0);
	if (_uilog_is_entry_registered(iVar0, func_528(iParam0)))
	{
		_uilog_remove_entry(iVar0, func_528(iParam0));
	}
	if (bParam1)
	{
		if (iVar0 == 1)
		{
			if (_uilog_is_entry_registered(2, func_528(iParam0)))
			{
				_uilog_remove_entry(2, func_528(iParam0));
			}
		}
	}
	func_529(iParam0, 4);
	func_529(iParam0, 8);
	func_529(iParam0, 16);
}

void func_279(bool bParam0)
{
	iVar0 = 0;
	while (iVar0 < &Global_1347702)
	{
		if (func_276(iVar0))
		{
			if (func_277(iVar0, 4))
			{
				func_280(iVar0, bParam0);
			}
		}
		iVar0++;
	}
}

void func_280(int iParam0, bool bParam1)
{
	if (!func_277(iParam0, 4))
	{
		return;
	}
	if (!_uilog_is_entry_registered(func_527(iParam0), func_528(iParam0)))
	{
		return;
	}
	if (bParam1)
	{
		_uilog_mark_entry_availability(func_527(iParam0), func_528(iParam0), 2, "");
		func_530(iParam0, 16);
	}
	else
	{
		if (func_277(iParam0, 8))
		{
			_uilog_mark_entry_availability(func_527(iParam0), func_528(iParam0), 1, "");
		}
		else
		{
			_uilog_mark_entry_availability(func_527(iParam0), func_528(iParam0), 0, "");
		}
		func_529(iParam0, 16);
	}
}

void func_281(int iParam0, bool bParam1)
{
	if ((*Global_1347702)[iParam0]->f_12 & 67108864 != 0)
	{
		return;
	}
	if (!func_277(iParam0, 4))
	{
		return;
	}
	if (!_uilog_is_entry_registered(func_527(iParam0), func_528(iParam0)))
	{
		return;
	}
	if (bParam1)
	{
		if (func_277(iParam0, 16))
		{
		}
		else
		{
			_uilog_mark_entry_availability(func_527(iParam0), func_528(iParam0), 1, "");
		}
		func_530(iParam0, 8);
	}
	else
	{
		if (func_277(iParam0, 16))
		{
		}
		else
		{
			_uilog_mark_entry_availability(func_527(iParam0), func_528(iParam0), 0, "");
		}
		func_529(iParam0, 8);
	}
}

int func_282(char[4] cParam0)
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

void func_283(int iParam0, int iParam1)
{
	if (func_524(0))
	{
		if (func_531(0))
		{
			func_532(0);
		}
	}
	if (func_524(1))
	{
		if (func_531(1))
		{
			func_532(1);
		}
	}
}

void func_284(char[4] cParam0)
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

bool func_285(char[4] cParam0)
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

void func_286(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, int iParam6, int iParam7)
{
	if (!bParam1)
	{
		func_533(iParam0, sParam4, iParam5);
	}
	func_534(iParam0, bParam1, fParam2, iParam3, iParam7);
}

int func_287(int iParam0)
{
	if (!func_250(iParam0))
	{
		return 0;
	}
	return (*Global_1888801)[iParam0]->f_20;
}

int func_288()
{
	return &Global_1899515;
}

void func_289(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_23118[iParam0]->f_2 = iParam1;
		return;
	}
	Global_1058888->f_40615[iParam0]->f_2 = iParam1;
}

void func_290(int iParam0, int iParam1)
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

void func_291(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_23118[iParam0] = (&Global_23118[iParam0] - (Global_23118[iParam0] && iParam1));
		return;
	}
	Global_1058888->f_40615[iParam0] = (&Global_1058888->f_40615[iParam0] - (Global_1058888->f_40615[iParam0] && iParam1));
}

void func_292(int iParam0)
{
	if (!func_250(iParam0))
	{
		return;
	}
	if (func_535(iParam0))
	{
		func_536(iParam0);
	}
	else
	{
		func_537(iParam0);
	}
}

int func_293(int iParam0)
{
	if (func_538(&(Global_1109400->f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

int func_294(int iParam0)
{
	if (func_539(&(Global_1109400->f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

bool func_295(int iParam0, int iParam1)
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

void func_296(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	iVar0 = 0;
	while (iVar0 < 120)
	{
		iVar1 = 0;
		if (func_540(Global_1310750[iVar0], iParam0))
		{
			if (!func_541(iVar0))
			{
				iVar1 = 1;
			}
			else if (iParam0 == 16777216)
			{
				if (func_542(iVar0) < func_543(iParam1))
				{
					iVar1 = 1;
				}
			}
			func_298(iVar0, iParam1, 1f, (iVar1 || iParam2), bParam3);
		}
		iVar0++;
	}
}

void func_297(float fParam0, bool bParam1, bool bParam2)
{
	fVar0 = func_544();
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

void func_298(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
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
	func_545(iParam0, bParam3, round((fVar0 * fParam2)), round((fVar1 * fParam2)), round((fVar2 * fParam2)), round((fVar3 * fParam2)), bParam4, 1);
}

int func_299(int iParam0)
{
	if (!func_192(iParam0))
	{
		return -1;
	}
	return func_196(iParam0);
}

void func_300(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_6 = iParam1;
}

int func_301(bool bParam0, int iParam1)
{
	if (!bParam0 && func_481(373691918))
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
	func_206(bParam0);
	return 1;
}

void func_302()
{
	Var0 = Global_35;
	Var0.f_12 = 8;
	Var0.f_8 = 0;
	iVar17 = 0;
	while (iVar17 < 27)
	{
		if (func_509(iVar17))
		{
			iVar18 = func_546(iVar17);
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
	func_547(&(Global_1359489->f_55));
	if (func_548(1777191912, 1))
	{
		func_549(1777191912, 1, 0);
	}
}

void func_303(int iParam0)
{
	if (!func_192(iParam0))
	{
		return;
	}
	func_551(iParam0, (func_550(iParam0) + shift_left(1, 16)));
}

bool func_304(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_305()
{
	return func_552() > 0;
}

void func_306(int iParam0, int iParam1, bool bParam2)
{
	switch (iParam0)
	{
		case 67:
			func_553(-1032423150, iParam1);
			break;
		case 18:
			func_553(294066959, iParam1);
			func_553(-1925639563, iParam1);
			func_553(-378582304, iParam1);
			func_553(-338306437, iParam1);
			break;
		case 20:
			func_553(437270255, iParam1);
			break;
		case 2:
			func_553(-304000413, iParam1);
			func_553(-533612796, iParam1);
			func_553(48036954, iParam1);
			break;
		case 23:
			func_553(193108691, iParam1);
			func_553(491732588, iParam1);
			func_553(671962088, iParam1);
			func_554(1);
			break;
		case 16:
			func_553(-1836056650, iParam1);
			func_553(-754657922, iParam1);
			func_553(-1752355838, iParam1);
			func_553(-1375324510, iParam1);
			break;
		case 59:
			func_553(-514392105, iParam1);
			func_553(-822060246, iParam1);
			if (func_555(146))
			{
				func_553(1372748575, iParam1);
			}
			func_554(1);
			break;
		case 76:
			func_553(1991352213, iParam1);
			if (func_556() == 0)
			{
				func_553(1852488616, iParam1);
			}
			else
			{
				func_553(-9866350, iParam1);
			}
			break;
		case 44:
			func_553(863852599, iParam1);
			func_553(1228374935, iParam1);
			func_553(1517889050, iParam1);
			func_553(830657578, iParam1);
			func_553(1901354958, iParam1);
			break;
		case 46:
			func_553(-582805654, iParam1);
			func_553(250378940, iParam1);
			func_553(-2143265426, iParam1);
			break;
		case 17:
			func_553(-941494139, iParam1);
			func_553(1641489521, iParam1);
			break;
		case 19:
			func_553(-1829423531, iParam1);
			func_553(-1590504752, iParam1);
			func_553(1357221321, iParam1);
			break;
		case 21:
			func_553(-1037992610, iParam1);
			func_553(-1286414399, iParam1);
			func_554(0);
			break;
		case 15:
			func_553(-1014460309, iParam1);
			func_553(-1030502825, iParam1);
			break;
		case 33:
			func_553(479388090, iParam1);
			func_553(-1396342239, iParam1);
			func_553(-619618632, iParam1);
			break;
		case 34:
			func_553(1193561641, iParam1);
			break;
		case 64:
			func_553(1363960851, iParam1);
			break;
		case 60:
			func_553(-1232453926, iParam1);
			func_553(-882833584, iParam1);
			break;
		case 73:
			func_553(2023205767, iParam1);
			break;
		case 74:
			func_553(-2135286513, iParam1);
			if (func_556() == 0)
			{
				func_553(33799444, iParam1);
			}
			else
			{
				func_553(-161343203, iParam1);
			}
			break;
		case 8:
			func_553(841639693, iParam1);
			func_553(358952323, iParam1);
			break;
		case 36:
			func_553(852538149, iParam1);
			func_553(689020839, iParam1);
			if (&Global_1357515 == 0)
			{
				func_553(-404049058, iParam1);
			}
			else if (&Global_1357515 == 1)
			{
				func_553(1116039310, iParam1);
			}
			break;
		case 27:
			func_553(107633428, iParam1);
			func_553(335902282, iParam1);
			func_553(575673055, iParam1);
			func_553(-425944207, iParam1);
			break;
		case 28:
			func_553(-1941530250, iParam1);
			func_553(1399269304, iParam1);
			func_553(1839684664, iParam1);
			func_553(923168503, iParam1);
			func_553(-1485078322, iParam1);
			break;
		case 29:
			func_553(574995900, iParam1);
			func_553(-1691275407, iParam1);
			func_553(-1725307861, iParam1);
			break;
		case 31:
			func_553(-2108383238, iParam1);
			func_553(-1321828931, iParam1);
			func_553(-1632118592, iParam1);
			func_553(334938948, iParam1);
			break;
		case 4:
			func_553(115823701, iParam1);
			func_553(-1896939736, iParam1);
			func_553(-1830746356, iParam1);
			func_553(-1235169781, iParam1);
			func_554(0);
			break;
		case 6:
			func_553(1801727621, iParam1);
			if (&Global_1357515 == -1)
			{
				func_553(-999872881, iParam1);
			}
			else if (&Global_1357515 == 0)
			{
				func_553(-1227289741, iParam1);
			}
			else if (&Global_1357515 == 1)
			{
				func_553(-384176140, iParam1);
			}
			break;
		case 25:
			func_553(1056132658, iParam1);
			break;
		case 24:
			if (&Global_1357515 == -1)
			{
				func_553(1343889751, iParam1);
			}
			else if (&Global_1357515 == 0)
			{
				func_553(-948326001, iParam1);
			}
			else if (&Global_1357515 == 1)
			{
				func_553(-1374849484, iParam1);
			}
			break;
		case 48:
			func_553(-1632856601, iParam1);
			if (&Global_1357515 == -1)
			{
				func_553(217772674, iParam1);
			}
			else
			{
				func_553(2071798160, iParam1);
			}
			if (func_557(51))
			{
				func_553(-792802286, iParam1);
			}
			break;
		case 49:
			func_553(-1972727021, iParam1);
			if (&Global_1357515 == 0)
			{
				func_553(-1444030885, iParam1);
			}
			else if (&Global_1357515 == 1)
			{
				func_553(-1272255787, iParam1);
			}
			else if (&Global_1357515 == 2)
			{
				func_553(1402120602, iParam1);
			}
			break;
		case 58:
			func_553(-1661934591, iParam1);
			break;
		case 50:
			func_553(-1713759426, iParam1);
			break;
		case 52:
			func_553(-314799932, iParam1);
			func_553(-462260432, iParam1);
			func_553(822929377, iParam1);
			if (bParam2 == 1)
			{
				func_553(345256028, iParam1);
				func_553(-1635084094, iParam1);
			}
			else
			{
				func_553(114267347, iParam1);
			}
			break;
		case 32:
			func_553(615304157, iParam1);
			break;
		case 47:
			func_553(415434835, iParam1);
			break;
		case 69:
			func_553(1373465877, iParam1);
			if (func_330((*Global_1347702)[9]->f_15, 1))
			{
				func_553(-2058273527, iParam1);
			}
			break;
		case 70:
			func_553(451334985, iParam1);
			if (func_556() == 0)
			{
				func_553(-224150200, iParam1);
			}
			else
			{
				func_553(289012628, iParam1);
			}
			break;
		case 71:
			if (func_556() == 0)
			{
				func_553(-41692120, iParam1);
			}
			else
			{
				func_553(1537840678, iParam1);
			}
			break;
		case 37:
			func_553(1520478365, iParam1);
			break;
		case 9:
			if (&Global_1357515 == -1)
			{
				func_553(1842132550, iParam1);
			}
			else
			{
				func_553(-785735240, iParam1);
			}
			func_553(-1605690566, iParam1);
			break;
		case 13:
			func_553(-731367459, iParam1);
			func_553(224176585, iParam1);
			func_553(-14545580, iParam1);
			break;
		case 53:
			func_553(1095274522, iParam1);
			break;
		case 54:
			func_553(-572027988, iParam1);
			break;
		case 56:
			func_553(1339307101, iParam1);
			func_553(2102267732, iParam1);
			break;
		case 57:
			func_553(710102686, iParam1);
			break;
		case 22:
			func_553(-1754368482, iParam1);
			func_553(-2071408557, iParam1);
			break;
		case 12:
			func_553(-181334543, iParam1);
			break;
		case 0:
			func_553(-2134669864, iParam1);
			func_553(-548289709, iParam1);
			func_553(-911271922, iParam1);
			func_553(-604455775, iParam1);
			break;
		case 1:
			func_554(1);
			break;
		case 3:
			if (func_341())
			{
				if (_journal_can_write_entry(-1478534115))
				{
					func_553(-1286192062, iParam1);
				}
			}
			else if (_journal_can_write_entry(-1286192062))
			{
				func_553(-1478534115, iParam1);
			}
			break;
		default:
			break;
	}
}

bool func_307()
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

void func_308(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	switch (iParam0)
	{
		case 0:
			func_553(-145926707, iParam1);
			func_553(-604922090, iParam1);
			func_553(-848690769, iParam1);
			break;
		case 1:
			func_553(-1477631591, iParam1);
			break;
		case 2:
			func_553(76112544, iParam1);
			break;
		case 9:
			func_553(1396404308, iParam1);
			func_553(-1357381228, iParam1);
			if (func_330((*Global_1835011)[69]->f_1, 1))
			{
				func_553(1902679064, iParam1);
			}
			else
			{
				func_553(-2146422425, iParam1);
			}
			break;
		case 22:
			func_553(-1534761730, iParam1);
			break;
		case 26:
			if (bParam3 == 1)
			{
				func_553(-1934184559, iParam1);
				func_553(1281755988, iParam1);
			}
			else
			{
				func_553(-1745220872, iParam1);
				func_553(-1044976796, iParam1);
			}
			break;
		case 29:
			if (bParam3 == 1)
			{
				func_553(-1641504538, iParam1);
				func_553(-988014485, iParam1);
			}
			else if (func_555(26))
			{
				func_553(-343043950, iParam1);
				func_553(-640062214, iParam1);
			}
			else
			{
				func_553(-1272028496, iParam1);
			}
			break;
		case 32:
			if (bParam3 == 1)
			{
				if (&Global_1357515 == -1)
				{
					func_553(-1816782797, iParam1);
				}
				else if (&Global_1357515 == 0)
				{
					func_553(-176175898, iParam1);
				}
				else if (&Global_1357515 == 1)
				{
					func_553(1711460080, iParam1);
				}
				else if (&Global_1357515 == 2)
				{
					func_553(-2108576508, iParam1);
				}
				else if (&Global_1357515 == 3)
				{
					func_553(-1103692224, iParam1);
				}
				else if (&Global_1357515 == 4)
				{
					func_553(1301690984, iParam1);
				}
			}
			else
			{
				func_553(699457343, iParam1);
				if (&Global_1357515 == -1)
				{
					func_553(-908444626, iParam1);
				}
				else if (&Global_1357515 == 0)
				{
					func_553(-1475448104, iParam1);
				}
				else if (&Global_1357515 == 1)
				{
					func_553(1727640249, iParam1);
				}
				else if (&Global_1357515 == 2)
				{
					func_553(-2050867743, iParam1);
				}
				else if (&Global_1357515 == 3)
				{
					func_553(-996445915, iParam1);
				}
				else if (&Global_1357515 == 4)
				{
					func_553(-1868882771, iParam1);
				}
			}
			break;
		case 35:
			if (bParam3 == 1)
			{
				func_553(-754570528, iParam1);
			}
			else
			{
				func_553(1690083163, iParam1);
			}
			break;
		case 36:
			if (bParam3 == 1)
			{
				func_553(-2072125821, iParam1);
			}
			else
			{
				func_553(270040030, iParam1);
			}
			break;
		case 37:
			func_553(-870030001, iParam1);
			break;
		case 53:
			if (bParam3 == 1)
			{
				func_553(-505314737, iParam1);
				func_553(-1853052860, iParam1);
			}
			else
			{
				func_553(-1975624994, iParam1);
				func_553(1648135852, iParam1);
			}
			break;
		case 54:
			if (bParam3 == 1)
			{
				func_553(1690231002, iParam1);
			}
			else
			{
				func_553(517031924, iParam1);
			}
			break;
		case 55:
			if (bParam3 == 1)
			{
				func_553(1225386280, iParam1);
			}
			else if (func_555(54))
			{
				func_553(-283235773, iParam1);
			}
			else
			{
				func_553(701962369, iParam1);
			}
			break;
		case 38:
			if (bParam3 == 1)
			{
				func_553(1355398007, iParam1);
			}
			else
			{
				func_553(-1900349467, iParam1);
			}
			break;
		case 39:
			if (bParam3 == 1)
			{
				func_553(574636806, iParam1);
			}
			else
			{
				func_553(-196256251, iParam1);
			}
			break;
		case 40:
			if (bParam3 == 1)
			{
				func_553(821118338, iParam1);
			}
			else if (func_555(39))
			{
				func_553(846829260, iParam1);
			}
			else
			{
				func_553(-1212247553, iParam1);
			}
			break;
		case 43:
			if (bParam3 == 1)
			{
				if (func_364((*Global_1835011)[33]->f_1) == 1)
				{
					func_553(1422779093, iParam1);
				}
				else
				{
					func_553(-1769536986, iParam1);
				}
			}
			else
			{
				func_553(-600786233, iParam1);
			}
			break;
		case 45:
			if (bParam3 == 1)
			{
				func_553(352134789, iParam1);
			}
			else if (func_555(43))
			{
				func_553(260723113, iParam1);
			}
			else
			{
				func_553(1080243038, iParam1);
			}
			break;
		case 41:
			if (bParam3 == 1)
			{
				func_553(-457958799, iParam1);
			}
			else
			{
				func_553(2076458086, iParam1);
			}
			break;
		case 42:
			if (func_555(41))
			{
				func_553(-546824600, iParam1);
			}
			else
			{
				func_553(-308364587, iParam1);
			}
			break;
		case 49:
			if (bParam3 == 1)
			{
				func_553(1297261593, iParam1);
			}
			else
			{
				func_553(1940089142, iParam1);
			}
			break;
		case 50:
			if (bParam3 == 1)
			{
				func_553(2068484886, iParam1);
			}
			else if (func_555(49))
			{
				func_553(-1489080639, iParam1);
				func_553(-2102244050, iParam1);
			}
			else
			{
				func_553(-1863040467, iParam1);
			}
			break;
		case 51:
			func_553(-2055943209, iParam1);
			break;
		case 58:
			if (func_330((*Global_1347702)[23]->f_15, 1))
			{
				func_553(1650066845, iParam1);
			}
			else
			{
				func_553(151370023, iParam1);
			}
			func_553(1426057961, iParam1);
			func_553(476379584, iParam1);
			break;
		case 59:
			func_553(-1638117866, iParam1);
			break;
		case 62:
			func_553(199541730, iParam1);
			break;
		case 63:
			func_553(1703485804, iParam1);
			func_553(-800449045, iParam1);
			break;
		case 65:
			func_553(-1678210868, iParam1);
			func_553(-1448238026, iParam1);
			func_553(-1200864845, iParam1);
			func_553(1473511536, iParam1);
			break;
		case 66:
			func_553(-1774490051, iParam1);
			func_553(-34645921, iParam1);
			func_553(174027075, iParam1);
			func_553(-1155999, iParam1);
			func_554(1);
			break;
		case 67:
			func_553(701612593, iParam1);
			func_553(-1069631343, iParam1);
			func_553(1673428882, iParam1);
			break;
		case 68:
			func_553(-739133286, iParam1);
			func_553(-2130089358, iParam1);
			func_553(2056190391, iParam1);
			func_553(1941753817, iParam1);
			func_554(0);
			break;
		case 70:
			func_553(-1217555753, iParam1);
			break;
		case 71:
			func_553(697048821, iParam1);
			break;
		case 73:
			func_553(-553148661, iParam1);
			break;
		case 75:
			func_553(1349250531, iParam1);
			break;
		case 77:
			if (bParam3 == 1)
			{
				func_553(1414263863, iParam1);
			}
			else
			{
				func_553(-1772294468, iParam1);
			}
			break;
		case 79:
			if (bParam3 == 1)
			{
				func_553(1835465936, iParam1);
				func_553(523715611, iParam1);
			}
			else if (func_555(78))
			{
				func_553(1420338873, iParam1);
			}
			else
			{
				func_553(-46362051, iParam1);
			}
			break;
		case 80:
			if (bParam3 == 1)
			{
				func_553(10180941, iParam1);
			}
			else if (func_555(79))
			{
				func_553(768420635, iParam1);
			}
			else
			{
				func_553(-1734012650, iParam1);
			}
			break;
		case 85:
			if (bParam3 == 1)
			{
				func_553(-383601523, iParam1);
			}
			else
			{
				func_553(1004812390, iParam1);
			}
			break;
		case 86:
			if (bParam3 == 1)
			{
				func_553(1606472408, iParam1);
			}
			else
			{
				func_553(1405690220, iParam1);
			}
			break;
		case 87:
			if (bParam3 == 1)
			{
				func_553(-203571927, iParam1);
			}
			else
			{
				func_553(640033630, iParam1);
			}
			break;
		case 88:
			if (bParam3 == 1)
			{
				func_553(729886222, iParam1);
			}
			else
			{
				func_553(-158717807, iParam1);
			}
			break;
		case 89:
			if (bParam3 == 1)
			{
				func_553(-714816362, iParam1);
			}
			else
			{
				func_553(1160146336, iParam1);
			}
			break;
		case 92:
			if (bParam3 == 1)
			{
				func_553(-932932179, iParam1);
				func_553(-1458537240, iParam1);
			}
			else
			{
				func_553(-1764383885, iParam1);
				func_553(894349517, iParam1);
			}
			break;
		case 93:
			if (bParam3 == 1)
			{
				func_553(1741466706, iParam1);
			}
			else
			{
				func_553(1405815775, iParam1);
			}
			break;
		case 94:
			func_553(1163067702, iParam1);
			if (&Global_1357515 == -1)
			{
				func_553(1905280979, iParam1);
			}
			else
			{
				func_553(-1966245299, iParam1);
			}
			func_553(721468880, iParam1);
			break;
		case 99:
			func_553(800644248, iParam1);
			break;
		case 101:
			if (bParam3 == 1)
			{
				func_553(1502176860, iParam1);
				if (&Global_1357515 == -1)
				{
					func_553(-1117781095, iParam1);
				}
				else
				{
					func_553(-618709225, iParam1);
				}
			}
			else if (&Global_1357515 == -1)
			{
				func_553(141494548, iParam1);
			}
			else
			{
				func_553(-633957459, iParam1);
			}
			break;
		case 102:
			if (bParam3 == 1)
			{
				func_553(-369525697, iParam1);
			}
			else if (func_555(101))
			{
				func_553(1595015219, iParam1);
			}
			else
			{
				func_553(-321486961, iParam1);
			}
			break;
		case 103:
			func_553(1422724221, iParam1);
			break;
		case 104:
			if (bParam3 == 1)
			{
				func_553(793460477, iParam1);
				func_553(-1610242176, iParam1);
			}
			else if (func_555(103))
			{
				func_553(1830897187, iParam1);
			}
			else
			{
				func_553(1419017828, iParam1);
			}
			break;
		case 105:
			if (bParam3 == 1)
			{
				func_553(1528309077, iParam1);
			}
			else if (func_555(104))
			{
				func_553(1864966105, iParam1);
			}
			else
			{
				func_553(-103336013, iParam1);
			}
			break;
		case 108:
			func_553(1175579551, iParam1);
			break;
		case 109:
			if (bParam3 == 1)
			{
				func_553(-1123227713, iParam1);
				func_553(-889574341, iParam1);
			}
			else
			{
				func_553(2065385917, iParam1);
				func_553(780305039, iParam1);
			}
			break;
		case 110:
			if (bParam3 == 1)
			{
				func_553(-887421691, iParam1);
			}
			else if (func_555(109))
			{
				func_553(-1318117949, iParam1);
			}
			else
			{
				func_553(1632244327, iParam1);
			}
			break;
		case 111:
			if (bParam3 == 1)
			{
				if (&Global_1357515 == 0)
				{
					func_553(284822762, iParam1);
				}
				else
				{
					func_553(-1425017554, iParam1);
				}
			}
			else if (func_555(110))
			{
				if (&Global_1357515 == 0)
				{
					func_553(553087292, iParam1);
				}
				else
				{
					func_553(-1766870331, iParam1);
					func_553(1971788022, iParam1);
				}
			}
			else if (&Global_1357515 == 0)
			{
				func_553(-1980598735, iParam1);
			}
			else
			{
				func_553(-442732098, iParam1);
				func_553(1955756409, iParam1);
			}
			break;
		case 115:
			func_553(394303528, iParam1);
			func_553(-2040171028, iParam1);
			break;
		case 143:
			if (bParam3 == 1)
			{
				func_553(1182403394, iParam1);
			}
			else
			{
				func_553(-2116547899, iParam1);
			}
			break;
		case 144:
			if (bParam3 == 1)
			{
				func_553(924445424, iParam1);
			}
			else
			{
				func_553(1227062271, iParam1);
			}
			break;
		case 117:
			if (bParam3 == 1)
			{
				func_553(430755273, iParam1);
				func_553(-1473879802, iParam1);
			}
			else
			{
				func_553(1121266049, iParam1);
			}
			break;
		case 118:
			if (bParam3 == 1)
			{
				func_553(73885747, iParam1);
			}
			else if (func_555(117))
			{
				func_553(1559707913, iParam1);
			}
			else
			{
				func_553(926897873, iParam1);
			}
			break;
		case 119:
			if (bParam3 == 1)
			{
				func_553(-2103887972, iParam1);
			}
			else if (func_555(118))
			{
				func_553(-435828462, iParam1);
			}
			else
			{
				func_553(-516020583, iParam1);
			}
			break;
		case 121:
			if (bParam3 == 1)
			{
				func_553(2054486196, iParam1);
			}
			else
			{
				func_553(1809320262, iParam1);
			}
			break;
		case 122:
			if (bParam3 == 1)
			{
				func_553(-570086056, iParam1);
			}
			else if (func_555(121))
			{
				func_553(32337856, iParam1);
			}
			else
			{
				func_553(-206811842, iParam1);
			}
			break;
		case 124:
			if (bParam3 == 1)
			{
				func_553(813493663, iParam1);
			}
			else if (func_555(122))
			{
				func_553(-2132763590, iParam1);
			}
			else
			{
				func_553(477901035, iParam1);
			}
			break;
		case 125:
			if (bParam3 == 1)
			{
				func_553(-66240572, iParam1);
				func_553(1563075046, iParam1);
			}
			else
			{
				func_553(-787011772, iParam1);
				func_553(-1523377438, iParam1);
			}
			break;
		case 127:
			func_553(61020800, iParam1);
			break;
		case 129:
			func_553(428985222, iParam1);
			break;
		case 131:
			func_553(-1393851036, iParam1);
			break;
		case 133:
			func_553(1559531342, iParam1);
			break;
		case 134:
			func_553(-718846442, iParam1);
			break;
		case 135:
			if (bParam3 == 1)
			{
				if (&Global_1357515 == -1)
				{
					func_553(-1374407408, iParam1);
				}
				else
				{
					func_553(471210931, iParam1);
				}
			}
			else if ((_journal_can_write_entry(1732474719) && _journal_can_write_entry(801682048)) && _journal_can_write_entry(-1986404392))
			{
				if (&Global_1357515 == -1)
				{
					func_553(-472672138, iParam1);
				}
				else
				{
					func_553(-2132098614, iParam1);
				}
			}
			else if (&Global_1357515 == -1)
			{
				func_553(-1678710489, iParam1);
			}
			else
			{
				func_553(1522210661, iParam1);
			}
			break;
		case 136:
			if (bParam3 == 1)
			{
				func_553(1717582460, iParam1);
			}
			else
			{
				func_553(343644664, iParam1);
			}
			break;
		case 137:
			if (bParam3 == 1)
			{
				func_553(1568112362, iParam1);
				func_553(1388317526, iParam1);
			}
			else if (func_555(136))
			{
				func_553(-1597534828, iParam1);
				func_553(-1207918353, iParam1);
			}
			else
			{
				func_553(-1940891082, iParam1);
				func_553(-598277294, iParam1);
			}
			break;
		case 142:
			if (bParam2 == 1)
			{
				func_553(448334530, iParam1);
				func_553(2145375502, iParam1);
			}
			else
			{
				func_553(-1891994685, iParam1);
			}
			break;
		case 146:
			if (bParam3 == 1)
			{
				if (&Global_1357515 == 1)
				{
					func_553(1159121660, iParam1);
				}
				else if (&Global_1357515 == 0)
				{
					func_553(-1968554187, iParam1);
				}
			}
			else if (&Global_1357515 == 1)
			{
				func_553(841927377, iParam1);
			}
			else if (&Global_1357515 == 0)
			{
				func_553(848633571, iParam1);
			}
			break;
		case 147:
			if (bParam3 == 1)
			{
				func_553(-66616327, iParam1);
			}
			else
			{
				func_553(1978361607, iParam1);
			}
			break;
		case 148:
			if (bParam3 == 1)
			{
				func_553(1862916706, iParam1);
			}
			else if (func_555(147))
			{
				func_553(675105199, iParam1);
			}
			else
			{
				func_553(-1993800776, iParam1);
			}
			break;
		case 149:
			if (bParam3 == 1)
			{
				func_553(174409701, iParam1);
			}
			else if (func_555(148))
			{
				func_553(-1730895475, iParam1);
			}
			else
			{
				func_553(-342396910, iParam1);
			}
			break;
		case 150:
			if (bParam3 == 1)
			{
				func_553(1295237052, iParam1);
			}
			else if (func_555(149))
			{
				func_553(-788577684, iParam1);
			}
			else
			{
				func_553(1527015024, iParam1);
			}
			break;
		default:
			break;
	}
}

int func_309(int iParam0, var uParam1, int iParam2)
{
	*uParam1 = 1137976064;
	*iParam2 = -1;
	iVar0 = func_197(iParam0);
	switch (iVar0)
	{
		case 1:
			iVar1 = func_496(iParam0);
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
			iVar2 = func_275(iParam0);
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
			iVar3 = func_275(iParam0);
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

int func_310(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
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
	iVar2 = func_558(iParam0);
	iVar3 = func_559(iParam0);
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (&Global_40.f_4283.f_6[iVar0] == 176656832)
		{
			Global_40.f_4283.f_6[iVar0] = iParam0;
			Global_40.f_4283.f_6[iVar0]->f_2 = iParam1;
			Global_40.f_4283.f_6[iVar0]->f_3 = iVar3;
			if (iParam3 > 0)
			{
				iVar1 = func_288();
				func_337(&iVar1, 0, 0, iParam3, 0, 0, 0, 0);
			}
			else
			{
				iVar1 = -15;
			}
			Global_40.f_4283.f_6[iVar0]->f_1 = iVar1;
			Global_40.f_4283.f_6[iVar0]->f_4 = iVar2;
			func_560(iParam0, 1);
			if (func_561(iVar2))
			{
				iVar4 = 0;
				while (iVar4 < 60)
				{
					if (Global_40.f_4283.f_6[iVar4]->f_4 == iVar2 && &Global_40.f_4283.f_6[iVar4] != iParam0)
					{
						func_562(Global_40.f_4283.f_6[iVar4], 1, 0);
					}
					iVar4++;
				}
			}
			if (bParam5)
			{
				if (bParam6)
				{
					func_563(1, iParam0);
				}
				else
				{
					func_564(1, iParam0);
				}
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_311(int iParam0, int iParam1)
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

int func_312(int iParam0, int iParam1, int iParam2)
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

void func_313(bool bParam0)
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

void func_314(int iParam0, int iParam1, bool bParam2)
{
	iVar0 = iParam0 * 1000;
	if ((iVar0 + get_game_timer()) > Global_1327479->f_4)
	{
		func_565(iParam0, iParam1, bParam2);
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

int func_315(int iParam0, int iParam1)
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

bool func_316(int iParam0)
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

void func_317(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, bool bParam5, float fParam6, bool bParam7)
{
	if (func_20() != -1)
	{
		return;
	}
	if ((Global_36616 && func_566(iParam1)) != 0)
	{
		return;
	}
	iVar0 = func_567(iParam0);
	iVar0 = round((IntToFloat(iVar0) * fParam6));
	if ((((((iParam1 != 1142025875 && iParam1 != 1587891565) && iParam1 != -643014279) && iParam1 != -597116214) && iParam1 != 551416228) && iParam1 != -735200598) && iParam1 != -2010847721)
	{
		func_568(iVar0, 0, iParam0, iParam1, sParam3, iParam4, bParam5, bParam7);
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
			func_569(iVar1, iVar0, iParam0, iParam1, iParam4, bParam5);
		}
		else
		{
			func_568(iVar0, 1, iParam0, iParam1, sParam3, iParam4, bParam5, 0);
		}
	}
}

int func_318(int iParam0)
{
	if (!func_192(iParam0))
	{
		return -1;
	}
	return func_570(func_471(iParam0));
}

int func_319(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return 120;
	}
	return 60;
}

void func_320()
{
	_sc_feed_submit_preset_message(2, 1);
	if (is_orbis_version())
	{
		iVar0 = func_571(13);
		(*Global_1898441)[iVar0] = 13;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_WIN2_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_WIN2_COM", 24);
	}
}

bool func_321(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
{
	if (!func_572(iParam0, 0))
	{
		return false;
	}
	if (!func_573(iParam0, iParam1, bParam2, iParam5))
	{
		return false;
	}
	if (!func_574(iParam0, &iVar0, iParam1))
	{
		return false;
	}
	func_575(iParam0, bParam2);
	iVar2 = 0;
	if (func_576(iParam0, 0, 0) == 0)
	{
		if (func_577(iParam0))
		{
			iVar5 = func_578(iParam0);
			iVar6 = func_579(iVar5);
			iVar7 = func_580(iVar6) + 1;
			func_581(iVar5);
			if (func_582(38))
			{
				func_328(483, 0);
			}
			else
			{
				func_328(482, 0);
			}
			if (iVar7 == func_583(iVar6))
			{
				func_321(func_584(iVar6), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				if (func_395() && func_585(4))
				{
					if (func_395() && (func_586(38) || func_582(38)))
					{
						func_588(38, func_584(iVar6), 0, 0, func_587(), 0, -1, 0);
						func_589(2);
					}
					else
					{
						func_588(38, func_584(iVar6), 0, 0, func_587(), 0, -1, 0);
						func_589(1);
					}
				}
			}
			else if (func_395() && func_585(4))
			{
				if (func_395() && (func_586(38) || func_582(38)))
				{
					func_588(38, 0, 0, 0, func_587(), 0, -1, 0);
					func_589(2);
				}
				else
				{
					func_588(38, 0, 0, 0, func_587(), 0, -1, 0);
					func_589(1);
				}
			}
			if (func_395() && func_585(4))
			{
				if (!Global_1914319->f_17376)
				{
					if (func_395() && (func_586(38) || func_582(38)))
					{
						func_590(38, _0x13aaecda43318bfe(-2076669067, iVar6), _0xd52d20b0c76bb26d(-2076669067, iVar6), iVar7, 12, 0, iVar6);
					}
					else
					{
						func_590(38, get_hash_key("toast_log_blips"), get_hash_key("BLIP_RC_COLLECTABLE_CIGCARD"), iVar7, 12, 0, iVar6);
					}
				}
			}
		}
	}
	if (func_591(iParam0) == -1037537535)
	{
		if ((!func_592(iParam0, 866047851) && !func_592(iParam0, -1979000645)) && !func_592(iParam0, 1248798204))
		{
			bVar3 = true;
		}
	}
	if (func_593(iParam0, 8388608) && !func_594(28))
	{
		func_595(28);
	}
	if (!bVar3)
	{
		if (func_592(iParam0, -1588156645))
		{
			bParam2 = true;
			bVar4 = true;
			if (func_596(iParam0) == -1447088266)
			{
				iVar1 = func_598(func_597(iParam0, 1), 0);
				if (is_weapon_valid(iVar1))
				{
					if (func_20() == -1)
					{
						func_599(iVar1);
					}
					if (func_600(0) && func_601(iVar1, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_602(iParam0, iVar0, iParam5);
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
						func_599(iParam0);
					}
					if (func_600(0) && func_601(iParam0, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_602(iVar1, iVar0, iParam5);
						if (!bParam9)
						{
							bParam2 = false;
						}
					}
				}
			}
		}
		else if (func_591(iParam0) == -427144552)
		{
			if (!func_603(iParam0, iParam5, &bParam2, bParam3, bParam4))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_591(iParam0) == 307971639 && func_604(iParam0))
		{
			if (!func_605(iParam0, &iVar0, iParam5))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_592(iParam0, 866047851))
		{
			func_606(iParam0);
		}
		else if (func_592(iParam0, 2000026003))
		{
			func_607(iParam0);
		}
		else if (func_592(iParam0, -103750053))
		{
			func_95(func_608(-1019857971), iVar0);
		}
		else if (iParam0 == 2093098109)
		{
			func_95(func_609(-717883113, 2091222383), iVar0);
		}
		else if (func_592(iParam0, -121341956) && !func_592(iParam0, 606799272))
		{
			if (iParam0 != 191707516 && iParam0 != 1993672959)
			{
				if (func_330((*Global_1835011)[4]->f_1, 1))
				{
					func_328(498, 0);
				}
			}
			if (func_592(iParam0, -2017733358) || func_592(iParam0, -1369131378))
			{
				func_610(iParam0);
			}
		}
		else if (func_592(iParam0, -136654233))
		{
			if (func_592(iParam0, -1021472396))
			{
			}
		}
		else if (func_592(iParam0, -1466706512) && func_592(iParam0, 1147021565))
		{
			func_328(484, 0);
		}
		else if (func_592(iParam0, 1147021565) && func_592(iParam0, -524514947))
		{
		}
		else if (func_592(iParam0, 554195525))
		{
		}
		else if (func_592(iParam0, 589988438))
		{
			if (func_611())
			{
				func_612(1339418451, 0, 1065353216, 1, 0, 0, 0, -1);
				bParam2 = true;
				bVar4 = true;
			}
		}
		else if (func_592(iParam0, 787083290) && func_592(iParam0, 949916894))
		{
			func_613(iParam0);
		}
		else if (func_592(iParam0, -1718133314))
		{
			func_614(iParam0);
		}
		else if (func_592(iParam0, -1738650224))
		{
			func_615(iParam0);
		}
		else if (func_592(iParam0, -1112814642) && func_592(iParam0, 949916894))
		{
			func_616(iParam0);
		}
		else if (iParam0 == -569063887)
		{
			Global_1935496->f_20 = 0;
		}
		else if (func_592(iParam0, 1841149704))
		{
			func_617();
		}
		else if (func_592(iParam0, 606799272))
		{
			func_618(iParam0, iParam1);
			func_619(iParam0);
		}
		else if (func_592(iParam0, -1112814642) && func_592(iParam0, -1697809989))
		{
			func_620(iParam0, 0, 0, 0);
		}
		else if (func_592(iParam0, -2017733358) || func_592(iParam0, -1369131378))
		{
			func_610(iParam0);
		}
		else if (func_592(iParam0, -1921346699))
		{
			if (func_20() != -1)
			{
				return false;
			}
			func_621(iParam0, iParam5, iParam8);
			bParam2 = true;
		}
		else if (func_592(iParam0, 1192444843))
		{
			switch (iParam0)
			{
				case 1815744868:
					if (!func_350(215778062, 1, 0))
					{
						func_321(215778062, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 1334018438:
					if (!func_350(670273567, 1, 0))
					{
						func_321(670273567, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 1055480217:
					if (!func_350(-967317137, 1, 0))
					{
						func_321(-967317137, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case -978159653:
					if (!func_350(526074061, 1, 0))
					{
						func_321(526074061, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 2100131425:
					if (!func_350(-1045488665, 1, 0))
					{
						func_321(-1045488665, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case -2041382104:
					if (!func_350(471514780, 1, 0))
					{
						func_321(471514780, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
			}
		}
		else if (func_592(iParam0, -839724752) && func_593(iParam0, 4))
		{
			if (!func_582(42))
			{
				func_622(iParam0);
			}
		}
		else if (func_592(iParam0, 1399091007))
		{
			func_623(iParam0, &iVar2);
			bParam2 = true;
			bVar4 = true;
		}
		else if (func_592(iParam0, 1248798204))
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
				func_321(iVar8, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_595(24);
				if (&Global_1946804->f_1497.f_1[27] == &Global_1946804->f_57[27])
				{
					func_624(player_ped_id(), -1185145312, 0, 99217379, 1, 1, 1, 0, 1, 0);
				}
				if (func_625(&iVar9, 0))
				{
					func_601(iVar9, 0, 0, bParam4, 3, 0, 752097756, 0);
				}
				break;
			case 1171350303:
				if (func_20() == -1 && &Global_1946804->f_1497.f_1[25] == &Global_1946804->f_57[25])
				{
					func_624(player_ped_id(), 1171350303, 0, 673166414, 1, 1, 1, 0, 1, 0);
				}
				break;
			case -160924582:
				break;
			case 2131771850:
				func_328(415, 0);
				Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
				func_626();
				Global_40.f_11095.f_61 = (Global_40.f_11095.f_61 + 0.1f);
				func_627();
				Global_40.f_11095.f_55 = (Global_40.f_11095.f_55 + 0.1f);
				Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
				Global_40.f_11095.f_56 = (Global_40.f_11095.f_56 + 0.1f);
				Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
				func_628();
				Global_40.f_11095.f_63 = (Global_40.f_11095.f_63 + 0.1f);
				func_629();
				Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
				Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
				Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
				func_630();
				break;
			case -102111672:
				bParam2 = true;
				bVar4 = true;
				break;
			case -1937935584:
				func_631(499813453, 854119837, 0);
				func_632(499813453, 0);
				func_633(1);
				break;
			case 2127812557:
				func_631(499813453, -1292544588, 0);
				func_632(499813453, 0);
				func_633(2);
				break;
			case 808991383:
				func_631(499813453, -1003325394, 0);
				func_632(499813453, 0);
				func_633(4);
				break;
			case 1134518629:
				func_631(666607663, -335460405, 0);
				func_632(666607663, 0);
				func_634(1);
				break;
			case 902940106:
				func_631(666607663, 903797617, 0);
				func_632(666607663, 0);
				func_634(2);
				break;
			case -418174898:
				func_631(666607663, 669728650, 0);
				func_632(666607663, 0);
				func_634(4);
				break;
			case -648114971:
				func_631(-220219788, 1214120047, 0);
				func_632(-220219788, 0);
				func_635(1);
				break;
			case 211153747:
				func_631(-220219788, 655769340, 0);
				func_632(-220219788, 0);
				func_635(2);
				break;
			case -32876996:
				func_631(-220219788, 885316185, 0);
				func_632(-220219788, 0);
				func_635(4);
				break;
			case 1191437462:
				func_631(218622660, -1491419385, 0);
				func_632(218622660, 0);
				func_636(1);
				break;
			case 1119149048:
				func_631(218622660, 1809565830, 0);
				func_632(218622660, 0);
				func_636(2);
				break;
			case 506073827:
				func_631(390004462, -628873767, 0);
				func_632(390004462, 0);
				func_637(1);
				break;
			case -1876986168:
				func_631(390004462, -405421956, 0);
				func_632(390004462, 0);
				func_637(2);
				break;
			case 2142623221:
				func_631(390004462, -1108972386, 0);
				func_632(390004462, 0);
				func_637(4);
				break;
			case 1508215381:
				func_631(6410548, 1053716392, 0);
				func_632(6410548, 0);
				func_638(1);
				break;
			case -888935280:
				func_631(6410548, 806507056, 0);
				func_632(6410548, 0);
				func_638(2);
				break;
			case -1252474566:
				func_631(6410548, 1571925350, 0);
				func_632(6410548, 0);
				func_638(4);
				break;
			case -1465702449:
				func_631(6410548, 1330352282, 0);
				func_632(6410548, 0);
				func_638(8);
				break;
			case -21093309:
				func_640(242, func_639(-21093309), 0);
				break;
			case 204375141:
				func_640(240, func_639(204375141), 0);
				break;
			case -417963070:
				func_640(241, func_639(-417963070), 0);
				break;
			case -1080874779:
			case -755485480:
			case 230530039:
			case 299161628:
				if (get_game_timer() >= (Global_1935689->f_10197 + 60000))
				{
					func_641(594, 1934060482, 1, 1);
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
					func_641(594, 1110018439, 1, 1);
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
					func_641(594, 1408511260, 1, 1);
					Global_1935689->f_10197 = get_game_timer();
				}
				break;
			case -1976480343:
			case -953313786:
			case 730856618:
				if (get_game_timer() >= (Global_1935689->f_10197 + 60000))
				{
					func_641(594, -1228016946, 1, 1);
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
					func_641(595, -103579, 1, 1);
					Global_1935689->f_10197 = get_game_timer();
				}
				break;
			case -1977068039:
			case -399865011:
				if (get_game_timer() >= (Global_1935689->f_10197 + 60000))
				{
					func_641(595, -1531530025, 1, 1);
					Global_1935689->f_10197 = get_game_timer();
				}
				break;
			case 80178851:
				func_328(488, 0);
				break;
			case 1613651027:
				func_328(491, 0);
				break;
			case -885810591:
				func_328(485, 0);
				if ((get_random_int_in_range(0, 65536) % 3) == 0)
				{
					func_321(func_642(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				else
				{
					func_321(func_643(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				break;
			case -601932535:
				if (func_594(1))
				{
					func_328(487, 0);
				}
				break;
			case -898386032:
				func_328(486, 0);
				break;
			case -2035110427:
				if (func_20() == -1)
				{
					iParam0 = -1448210800;
				}
				break;
			case 1510719693:
				func_328(496, 0);
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
		func_644(&iVar10);
		if (!func_645(iVar10, iVar0, iParam5))
		{
			return false;
		}
		else if (!func_600(0))
		{
			return true;
		}
		if (func_591(iParam0) == -1037537535)
		{
			func_646(iParam0);
		}
		if (func_592(iParam0, -1979000645))
		{
			func_647(iParam0);
		}
	}
	else if (iVar2 != 0)
	{
		if (func_600(0))
		{
			Var11.f_1 = 10;
			Var11.f_12 = 10;
			_0x48e4d50f87a96aa5(Global_35, 0, 0, iVar2, &Var11, 0);
			iVar34 = 0;
			while (iVar34 < Var11)
			{
				func_321(&(Var11.f_1[iVar34]), &(Var11.f_12[iVar34]), 0, 0, 0, -897553835, 0, 0, 0, 0);
				iVar34++;
			}
		}
		else
		{
			func_648(iVar2, 0);
		}
	}
	Var35 = { func_649(iParam0) };
	if (_stat_id_is_valid(&Var35))
	{
		_0x6a0184e904cdf25e(&Var35, iVar0);
	}
	func_650(iParam0);
	if (fParam6 > 0f)
	{
		if (func_592(iParam0, -839724752))
		{
			func_651(iParam0, fParam6);
		}
	}
	else if (!bParam2)
	{
		bVar37 = iParam5 == 1248274121;
		func_652(iParam0, iVar0, 0, bVar37, 0);
	}
	return true;
}

void func_322(int iParam0)
{
	if (func_592(iParam0, 1989861793))
	{
		iVar0 = func_653(iParam0, 1697966752);
		if (iVar0 != 0)
		{
			Var3 = { func_654(-1591664384, -1591664384, 0, 0, 0, 0, -1, iVar0, 0) };
			if (func_655(Var3, &iVar1, &iVar2, 0))
			{
				bVar13 = false;
				iVar14 = 0;
				while (iVar14 < iVar2)
				{
					iVar15 = func_656(iVar14, iVar1);
					if (iVar15 != iParam0 && func_572(iVar15, 0))
					{
						if (func_657(iVar15, 0, 0, 1, 0))
						{
							bVar13 = true;
						}
					}
					iVar14++;
				}
				func_658(iVar1);
				if (bVar13)
				{
					func_659(iParam0);
				}
				else
				{
					func_328(306, 0);
				}
			}
		}
	}
}

void func_323()
{
	if (func_20() != -1)
	{
		return;
	}
	func_660();
	func_661();
	func_662();
	func_663();
	func_664();
	func_665();
	func_666();
}

void func_324(int iParam0)
{
	func_667(iParam0, 1, 1, -142743235, 1);
	if (func_668(iParam0))
	{
		func_669(iParam0, 1, 1);
	}
	bVar3 = false;
	bVar7 = false;
	iVar8 = func_671(func_670(iParam0), 1);
	if (iVar8 >= 39)
	{
		bVar7 = true;
	}
	func_672(-2124052603);
	iVar1 = 0;
	while (iVar1 < 39)
	{
		vVar4.x = &Global_1946804->f_57[iVar1];
		*Global_1946804->f_1616.f_1[iVar1] = { vVar4 };
		Global_1946804->f_1616.f_1[iVar1]->f_2 = (Global_1946804->f_1497.f_1[iVar1]->f_2 || Global_1946804->f_1378.f_1[iVar1]->f_2);
		iVar1++;
	}
	if (func_673() == -2125499975)
	{
		iVar2 = 2020890174;
	}
	else
	{
		iVar2 = 1105329772;
	}
	func_674(&(Global_1946804->f_1616), iVar2, &uVar9, 1, 0, 0, 0);
	func_674(&(Global_1946804->f_1616), 211609491, &uVar9, 1, 0, 0, 0);
	*Global_1946804->f_1616.f_1[8] = { func_675(8, 0) };
	*Global_1946804->f_1616.f_1[9] = { func_675(9, 0) };
	*Global_1946804->f_1616.f_1[0] = { func_675(0, 0) };
	*Global_1946804->f_1616.f_1[2] = { func_675(2, 0) };
	*Global_1946804->f_1616.f_1[3] = { func_675(3, 0) };
	*Global_1946804->f_1616.f_1[1] = { func_675(1, 0) };
	*Global_1946804->f_1616.f_1[5] = { func_675(5, 0) };
	*Global_1946804->f_1616.f_1[6] = { func_675(6, 0) };
	*Global_1946804->f_1616.f_1[7] = { func_675(7, 0) };
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (bVar7)
		{
			iVar8 = 0;
			while (iVar8 < 39)
			{
				if (iParam0 == func_676(iVar8, iVar0))
				{
					func_677(Global_1946804->f_1616.f_1[iVar8], iVar8, iVar0);
				}
				else
				{
					iVar8++;
				}
			}
		}
		else if (iParam0 == func_676(iVar8, iVar0))
		{
			func_677(Global_1946804->f_1616.f_1[iVar8], iVar8, iVar0);
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

void func_325()
{
	iVar5 = 16;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		iVar1 = func_676(iVar5, iVar0);
		if (iVar1 == &Global_1946804->f_57[iVar5] || iVar1 == 0)
		{
			if (func_673() == -2125499975 || func_673() == -449205311)
			{
				vVar2.x = -2018863109;
				vVar2.f_1 = 1530758430;
				func_677(&vVar2, iVar5, iVar0);
			}
			else
			{
				vVar2.x = 1734931872;
				vVar2.f_1 = 1155669136;
				func_677(&vVar2, iVar5, iVar0);
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

void func_326()
{
	_sc_feed_submit_preset_message(2, 2);
	if (is_orbis_version())
	{
		iVar0 = func_571(14);
		(*Global_1898441)[iVar0] = 14;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_MUD1_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_MUD1_COM", 24);
	}
}

char* func_327(int iParam0, bool bParam1)
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
			if ((func_330((*Global_1835011)[59]->f_1, 1) || func_330((*Global_1347702)[1]->f_15, 1)) || func_193((*Global_1347702)[1]->f_15))
			{
				return "COMP_RUFUS";
			}
			else if (func_548(403634348, 1))
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

void func_328(int iParam0, bool bParam1)
{
	func_678(iParam0, &iVar0, &iVar1);
	if (!func_679(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_680(iVar0, iVar1);
}

void func_329(int iParam0, bool bParam1, bool bParam2)
{
	iVar0 = func_671(iParam0, 1);
	func_681(Global_1946804->f_1497.f_1[iVar0], 2, 6);
	func_681(Global_1946804->f_1378.f_1[iVar0], 2, 6);
	if (bParam1)
	{
		Global_1946804->f_1497.f_1[iVar0] = &Global_1946804->f_57[iVar0];
		Global_1946804->f_1497.f_1[iVar0]->f_1 = 0;
		*Global_1946804->f_1378.f_1[iVar0] = { *Global_1946804->f_1497.f_1[iVar0] };
		if (bParam2)
		{
			func_682(17, iParam0, 0, 0, 0);
		}
	}
	if (func_20() == -1)
	{
		iVar1 = 0;
		while (iVar1 < 5)
		{
			func_681(Global_26796.f_26[iVar1]->f_1.f_1[iVar0], 2, 6);
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
			func_681(Global_36638.f_45.f_350.f_26[iVar1]->f_1.f_1[iVar0], 2, 6);
			if (bParam1)
			{
				Global_36638.f_45.f_350.f_26[iVar1]->f_1.f_1[iVar0] = &Global_1946804->f_57[iVar0];
				Global_36638.f_45.f_350.f_26[iVar1]->f_1.f_1[iVar0]->f_1 = 0;
			}
			iVar1++;
		}
	}
}

bool func_330(int iParam0, bool bParam1)
{
	switch (func_299(iParam0))
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

void func_331()
{
	_sc_feed_submit_preset_message(2, 5);
	if (is_orbis_version())
	{
		iVar0 = func_571(17);
		(*Global_1898441)[iVar0] = 17;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_BRA2_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_BRA2_COM", 24);
	}
}

void func_332()
{
	_sc_feed_submit_preset_message(2, 6);
	if (is_orbis_version())
	{
		iVar0 = func_571(18);
		(*Global_1898441)[iVar0] = 18;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_BRA3_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_BRA3_COM", 24);
	}
}

int func_333(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (iParam3 == -358215195)
	{
		Var0 = { func_683(iParam1, 1, 0) };
		iParam3 = func_684(Var0.f_4);
		if (iParam3 == -358215195)
		{
			return 0;
		}
	}
	func_685(iParam3);
	return func_624(iParam0, iParam1, iParam2, iParam3, bParam4, bParam5, 1, 0, 1, 0);
}

bool func_334()
{
	return _unlock_is_unlocked(99890643);
}

void func_335(int iParam0)
{
	if (!func_686(iParam0))
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

bool func_336(int iParam0, int iParam1)
{
	if (!func_687(iParam0))
	{
		return false;
	}
	if ((iParam1 == -1 || iParam1 < 0) || iParam1 > 179)
	{
		iParam1 = func_688(iParam0);
	}
	if (iParam1 == -1)
	{
		return false;
	}
	return func_689(Global_40.f_9910[iParam1], 4);
}

void func_337(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	iVar0 = func_690(*iParam0);
	iVar1 = func_691(*iParam0);
	iVar2 = func_692(*iParam0);
	iVar3 = func_693(*iParam0);
	iVar4 = func_694(*iParam0);
	iVar5 = func_695(*iParam0);
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
	iVar6 = func_696(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_696(iVar1, iVar0);
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
	func_697(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_338(int iParam0, int iParam1, bool bParam2)
{
	if (!func_687(iParam0))
	{
		return;
	}
	if (!func_698(iParam1))
	{
		return;
	}
	if (func_699(iParam1, 1))
	{
		return;
	}
	iVar0 = func_688(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (func_336(iParam0, -1))
	{
		return;
	}
	else
	{
		func_700(Global_40.f_9910[iVar0], 2);
	}
	Global_40.f_9910[iVar0]->f_4 = iParam1;
	if (bParam2)
	{
		if (!func_199(0, 0, 1))
		{
			func_370(0, 17);
		}
	}
}

void func_339()
{
	_sc_feed_submit_preset_message(2, 7);
	if (is_orbis_version())
	{
		iVar0 = func_571(19);
		(*Global_1898441)[iVar0] = 19;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_MOB5_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_MOB5_COM", 24);
	}
}

void func_340()
{
	_sc_feed_submit_preset_message(2, 8);
	if (is_orbis_version())
	{
		iVar0 = func_571(20);
		(*Global_1898441)[iVar0] = 20;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_SAI1_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_SAI1_COM", 24);
	}
}

bool func_341()
{
	return _unlock_is_unlocked(-121456797);
}

void func_342()
{
	_sc_feed_submit_preset_message(2, 9);
	if (is_orbis_version())
	{
		iVar0 = func_571(21);
		(*Global_1898441)[iVar0] = 21;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_GUA1_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_GUA1_COM", 24);
	}
}

void func_343()
{
	_sc_feed_submit_preset_message(2, 10);
	if (is_orbis_version())
	{
		iVar0 = func_571(22);
		(*Global_1898441)[iVar0] = 22;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_GUA3_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_GUA3_COM", 24);
	}
}

void func_344()
{
	_sc_feed_submit_preset_message(2, 12);
	if (is_orbis_version())
	{
		iVar0 = func_571(24);
		(*Global_1898441)[iVar0] = 24;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_ODR5_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_ODR5_COM", 24);
	}
}

void func_345()
{
	_sc_feed_submit_preset_message(2, 13);
	if (is_orbis_version())
	{
		iVar0 = func_571(25);
		(*Global_1898441)[iVar0] = 25;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_FIN1_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_FIN1_COM", 24);
	}
}

void func_346()
{
	_sc_feed_submit_preset_message(2, 14);
	if (is_orbis_version())
	{
		iVar0 = func_571(27);
		(*Global_1898441)[iVar0] = 27;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_MAR51_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_MAR51_COM", 24);
	}
}

void func_347()
{
	_sc_feed_submit_preset_message(2, 15);
	if (is_orbis_version())
	{
		iVar0 = func_571(28);
		(*Global_1898441)[iVar0] = 28;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_ABI21_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_ABI_21_COM", 24);
	}
}

bool func_348(int iParam0)
{
	return _0x9a03f22ad446eeac(iParam0) > 0;
}

bool func_349(int iParam0)
{
	return (Global_40.f_12019.f_4 && iParam0) != 0;
}

bool func_350(int iParam0, int iParam1, bool bParam2)
{
	if (!func_572(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_591(iParam0);
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
		if (!func_701(iParam0, 1))
		{
			return false;
		}
	}
	return func_576(iParam0, 0, bParam2) >= iParam1;
}

void func_351(int iParam0)
{
	if (func_82(32768))
	{
		return;
	}
	if (iParam0 < 0)
	{
		func_702(_create_var_string(2, "MISSION_COMPLETE_BANK_FEED", absi(iParam0)), "itemtype_textures", get_hash_key("ITEMTYPE_BANK_DEBT"), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
		Global_1879514->f_14 = 1;
		Global_1879514->f_15 = 0;
	}
	else
	{
		func_702(_create_var_string(2, "MISSION_COMPLETE_LOAN_FEED", iParam0), "itemtype_textures", get_hash_key("ITEMTYPE_BANK_DEBT"), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Negative", 0, 1);
		Global_1879514->f_14 = 0;
		Global_1879514->f_15 = 1;
	}
}

void func_352()
{
	_sc_feed_submit_preset_message(2, 16);
	if (is_orbis_version())
	{
		iVar0 = func_571(29);
		(*Global_1898441)[iVar0] = 29;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_BEE22_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_BEE22_COM", 24);
	}
}

void func_353()
{
	_sc_feed_submit_preset_message(2, 17);
	if (is_orbis_version())
	{
		iVar0 = func_571(26);
		(*Global_1898441)[iVar0] = 26;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_FIN2_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_FIN2_COM", 24);
	}
}

void func_354()
{
	_sc_feed_submit_preset_message(2, 11);
	if (is_orbis_version())
	{
		iVar0 = func_571(23);
		(*Global_1898441)[iVar0] = 23;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_DOC_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_DOC_COM", 24);
	}
}

void func_355()
{
	_sc_feed_submit_preset_message(2, 3);
	if (is_orbis_version())
	{
		iVar0 = func_571(15);
		(*Global_1898441)[iVar0] = 15;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_DOW3_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_DOW3_COM", 24);
	}
}

void func_356()
{
	_sc_feed_submit_preset_message(2, 4);
	if (is_orbis_version())
	{
		iVar0 = func_571(16);
		(*Global_1898441)[iVar0] = 16;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_DUT1_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_DUT1_COM", 24);
	}
}

void func_357()
{
	if (func_703() > 1)
	{
		func_704();
	}
	else
	{
		if (!_unlock_is_visible(-707360575))
		{
			_unlock_set_visible(-707360575, true);
			func_328(444, 1);
		}
		if (!_unlock_is_visible(-1201174711))
		{
			_unlock_set_visible(-1201174711, true);
			func_328(447, 1);
		}
		if (!_unlock_is_visible(151582343))
		{
			_unlock_set_visible(151582343, true);
			func_328(448, 1);
		}
		if (!_unlock_is_visible(-642492359))
		{
			_unlock_set_visible(-642492359, true);
			func_328(450, 1);
		}
		if (!_unlock_is_visible(5171247))
		{
			_unlock_set_visible(5171247, true);
			func_328(452, 1);
		}
	}
}

bool func_358(int iParam0)
{
	return func_464(iParam0, 4, 1);
}

void func_359(int iParam0)
{
	func_434(iParam0, 4, 1);
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
	if (!func_192(iParam0))
	{
		return;
	}
	func_232(Global_1935630, 8192);
	iVar2 = 1;
	switch (func_197(iParam0))
	{
		case 1:
			func_95(func_609(909007663, -587839005), 1);
			iVar0 = func_275(iParam0);
			func_95(func_94(-634848880), 1);
			switch (func_474(iVar0))
			{
				case 0:
					func_95(func_609(909007663, 1325140787), 1);
					break;
				case 1:
					func_95(func_609(909007663, 2101241783), 1);
					break;
				case 2:
					func_95(func_609(909007663, -1296936294), 1);
					break;
				case 3:
					func_95(func_609(909007663, -798388728), 1);
					break;
				case 4:
					func_95(func_609(909007663, -1787586531), 1);
					break;
				case 5:
					func_95(func_609(909007663, -1002834519), 1);
					break;
				case 6:
					func_95(func_609(909007663, -50600144), 1);
					break;
				case 7:
					func_95(func_609(909007663, -348503123), 1);
					break;
				case 8:
					func_95(func_609(909007663, -528798161), 1);
					break;
				default:
					iVar2 = 0;
					break;
			}
			if (iVar0 == 7)
			{
				func_95(func_609(909007663, -406093146), 1);
			}
			if (iVar2 && _0xe824ce7d13fcb35e(get_hash_key(&((*Global_1835011)[iVar0]->f_8))))
			{
				func_95(func_609(909007663, 532323983), 1);
			}
			break;
		case 8:
			iVar1 = func_275(iParam0);
			if (func_304((*Global_1347702)[iVar1]->f_12, 1))
			{
				func_95(func_94(-634848880), 1);
			}
			if (func_304((*Global_1347702)[iVar1]->f_12, 4) || iVar1 == 59)
			{
				if (func_304((*Global_1347702)[iVar1]->f_12, 1))
				{
					func_95(func_609(909007663, -587839005), 1);
				}
				else
				{
					func_95(func_609(909007663, -2049243343), 1);
				}
			}
			if (func_304((*Global_1347702)[iVar1]->f_12, 1))
			{
				switch (func_475(iVar1))
				{
					case 0:
						func_95(func_609(909007663, 1325140787), 1);
						break;
					case 1:
						func_95(func_609(909007663, 2101241783), 1);
						break;
					case 2:
						func_95(func_609(909007663, -1296936294), 1);
						break;
					case 3:
						func_95(func_609(909007663, -798388728), 1);
						break;
					case 4:
						func_95(func_609(909007663, -1787586531), 1);
						break;
					case 5:
						func_95(func_609(909007663, -1002834519), 1);
						break;
					case 6:
						func_95(func_609(909007663, -50600144), 1);
						break;
					case 7:
						func_95(func_609(909007663, -348503123), 1);
						break;
					case 8:
						func_95(func_609(909007663, -528798161), 1);
						break;
					default:
						iVar2 = 0;
						break;
				}
				if (iVar2 && _0xe824ce7d13fcb35e(get_hash_key(&((*Global_1347702)[iVar1]->f_3))))
				{
					func_95(func_609(909007663, 532323983), 1);
				}
			}
			else if (func_304((*Global_1347702)[iVar1]->f_12, 4))
			{
				if (func_304((*Global_1347702)[iVar1]->f_12, 4194304))
				{
				}
				else if (!func_304((*Global_1347702)[iVar1]->f_12, 512))
				{
					func_95(func_609(909007663, 551192206), 1);
				}
				else
				{
					func_95(func_609(909007663, -406093146), 1);
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
	else if (func_200(&Global_1935630, 131072))
	{
		return;
	}
	else if ((func_199(0, 0, 1) || func_705()) || func_129())
	{
		return;
	}
	iVar0 = func_203();
	if (((iVar0 == 0 || iVar0 == 4) || iVar0 == 6) || iVar0 == 7)
	{
		return;
	}
	while (_spactionproxy_get_next_pending_buy_action(&uVar4))
	{
		if (!_spactionproxy_process_action(uVar4, func_706(&uVar4, &iVar1, &iVar2, &iVar3)))
		{
		}
	else
	{
		}
	}
	if (iVar1 == 1)
	{
		func_707(_create_var_string(2, "SHOP_CATALOGUE_DELIVERY"), _create_var_string(2, "SHOP_CATALOGUE_PURCHASE_RECEIVED_SINGLE", 1), 908516622, -576888982, -2, 0, 0, 0, 0, 1, 1);
	}
	else if (iVar1 > 1)
	{
		func_707(_create_var_string(2, "SHOP_CATALOGUE_DELIVERY"), _create_var_string(2, "SHOP_CATALOGUE_PURCHASE_RECEIVED_PLURAL", iVar1), 908516622, -576888982, -2, 0, 0, 0, 0, 1, 1);
	}
	if (iVar3 > 0)
	{
		func_708(iVar3, 0, 0);
	}
	if (iVar1 > 0)
	{
		func_370(0, -1);
	}
	if (iVar2 > 0)
	{
		func_709("SHOP_CATALOGUE_PURCHASE_FAILED", 10000, 0, 0, 0, 1);
	}
	func_710(1, 0);
	Global_1956575->f_4 = 1;
}

void func_363(int iParam0, int iParam1, bool bParam2, float fParam3, int iParam4, char* sParam5, int iParam6, int iParam7)
{
	if (func_82(32768))
	{
		return;
	}
	func_286(iParam1, bParam2, fParam3, iParam4, sParam5, iParam6, iParam7, 752097756);
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
		func_711(iParam0, iParam1, fParam3, iParam4);
	}
}

int func_364(int iParam0)
{
	if (!func_192(iParam0))
	{
		return -1;
	}
	return func_712(iParam0);
}

int func_365(int iParam0, int iParam1)
{
	if (!func_713(iParam0))
	{
		return 0;
	}
	if (!func_395())
	{
		return 0;
	}
	if (!func_714(iParam0, &iVar0, &iVar1))
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
	if (iVar2 >= func_715())
	{
		iVar2 = func_715();
	}
	iVar5 = func_716(iVar3, iVar4, iParam2);
	if (Global_1572887->f_12 == -1)
	{
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			iVar6 = iVar0;
			if (func_471(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_471(iVar6) == 0)
			{
				return func_717(iVar3, iVar4, iParam2, iVar0, iParam3);
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
			if (func_471(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_471(iVar6) == 0)
			{
				return func_717(iVar3, iVar4, iParam2, iVar0, iParam3);
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
				return func_717(iVar3, iVar4, iParam2, iVar0, 0);
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
			return func_718(1330954593, 0, -1);
		case 1:
			return func_718(1330954593, 0, -1);
		case 2:
			return func_718(1330954593, 0, -1) * 2;
		case 4:
			return func_718(1330954593, 0, -1);
		case 5:
			return func_718(1330954593, 0, -1);
		case 6:
			return func_718(1330954593, 0, -1) * 2;
		case 12:
			return 75000;
		case 8:
			return func_718(1330954593, 0, -1) * 3;
		case 9:
			return func_718(1330954593, 0, -1) * 3;
		case 10:
			return func_718(1330954593, 0, -1) * 3;
		case 11:
			return func_718(1330954593, 0, -1);
		default:
			break;
	}
	return 0;
}

char[] func_368(int iParam0)
{
	if (!func_192(iParam0))
	{
		return cVar0;
	}
	switch (func_197(iParam0))
	{
		case 1:
			cVar0 = (*Global_1835011)[func_496(iParam0)]->f_8;
			break;
		case 8:
			cVar0 = (*Global_1347702)[func_275(iParam0)]->f_3;
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
			if (func_197(Global_1879514->f_1) == 1)
			{
				func_365(5, 1);
			}
			else if (func_197(Global_1879514->f_1) == 8 && (func_304((*Global_1347702)[func_275(Global_1879514->f_1)]->f_12, 1) || func_304((*Global_1347702)[func_275(Global_1879514->f_1)]->f_12, 33554432)))
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
		func_719(&Global_0, 8);
	}
	if (!func_395() || func_20() != -1)
	{
		return;
	}
	func_719(&Global_0, 1);
}

int func_371()
{
	iVar0 = func_720(Global_1879514->f_1);
	if (Global_1425247->f_53)
	{
		return 0;
	}
	if (func_721(iVar0))
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
	vVar0 = { func_722(vParam0, iParam3, iParam4, iParam5, iParam6, 1, iParam7, bParam8, bParam9, bParam10, -1, 1103626240) };
	if (func_396(vVar0))
	{
		vVar0 = { func_722(vParam0, iParam3, iParam4, 0, 1, 1, iParam7, bParam8, 0, 0, -1, 1103626240) };
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
	if (func_250(iVar0))
	{
		if (_0xf256a75210c5c0eb((*Global_1888801)[iVar0]->f_3, vParam0))
		{
			return iVar0;
		}
	}
	return func_723(vParam0, iParam3);
}

void func_376()
{
	func_724();
	func_725();
	func_726();
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
	if (!func_727(iParam16, 2))
	{
		if (_get_number_of_references_of_script_with_name_hash(get_hash_key(&(Param0.f_10))) > 0 || func_728(&(Param0.f_10)))
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
			func_729(iParam16);
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
	if (func_487(Global_1935630->f_3))
	{
		return;
	}
	iVar0 = 1;
	Var1.f_2 = 4;
	Var1 = "HUD_PENALTY_SOUNDSET";
	Var1.f_1 = "HUD_FAIL";
	Var1.f_3 = func_730();
	Var1.f_3.f_3 = iVar0;
	if ((!func_731(Global_1347343->f_2) && !func_378(Global_1347343->f_11, 64)) || func_82(32768))
	{
		Var1.f_7 = func_732();
		Var1.f_7.f_3 = iVar0;
	}
	if (!func_378(Global_1347343->f_11, 1024) && !func_82(32768))
	{
		Var1.f_11 = func_733();
		Var1.f_11.f_3 = iVar0;
	}
	if (func_378(Global_1347343->f_11, 8))
	{
		Var1.f_15 = func_734();
		Var1.f_15.f_3 = iVar0;
	}
	if (Global_1347343->f_1 != 2)
	{
		Global_1935630->f_3 = func_735(&Var1, "REPLAY_T", &(Global_1347343->f_3), 0, 1);
	}
	else
	{
		Global_1935630->f_3 = func_736(&Var1, "REPLAY_T_DEAD", 0, 1);
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
	func_737(uParam0);
	iVar0 = func_738(uParam0, iParam1);
	if (bParam3)
	{
		if (is_string_null_or_empty(sParam2))
		{
			sParam2 = func_739(iParam1);
		}
		iVar0 = func_740(uParam0, sParam2);
		if (iVar0 == -1)
		{
			iVar0 = func_741(uParam0);
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
		iVar0 = func_741(uParam0);
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
	func_742(uParam0, 2);
}

void func_383(char[4] cParam0, int iParam1)
{
	func_743(&(cParam0->f_7375), iParam1);
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
	return func_496(func_744());
}

void func_386(char[4] cParam0)
{
	iVar0 = 0;
	while (iVar0 < func_397())
	{
		func_745(cParam0, iVar0);
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
	func_751(cParam0, iLocal_160, iLocal_161, 110428, 110693, 111043, 111815, 112676, "GNG1_INT", 74, -1);
	func_751(cParam0, iLocal_161, iLocal_162, 112857, 113283, 113362, 113542, 115752, "", 72, -1);
	func_751(cParam0, iLocal_162, iLocal_163, 115865, 116073, 116345, 116722, 122572, "GNG1_MCS1", 74, 30);
	func_751(cParam0, iLocal_163, iLocal_164, 122615, 122886, 122954, 123674, 125357, "", 72, -1);
	func_751(cParam0, iLocal_164, 26, 125456, 125628, 126053, 126222, 126275, "GNG1_EXT", 90, -1);
}

void func_390(int iParam0, int iParam1)
{
	uVar0 = Global_1905944[iParam0];
	clear_bit(&uVar0, iParam1);
	(*Global_1905944)[iParam0] = uVar0;
}

bool func_391(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_392(var uParam0)
{
	if (!func_772(uParam0, 4))
	{
		if (func_773(uParam0->f_860, 16384))
		{
			animpostfx_play("CamTransition01");
		}
		vVar0 = { func_774(uParam0) };
		if (!func_773(uParam0->f_860, 524288))
		{
			func_775(&(uParam0->f_872));
		}
		func_776(&(uParam0->f_860), 0, 2, vVar0.x, vVar0.y, vVar0.z, 0);
		func_777(uParam0, 0f, 0f, 0f);
		func_778(uParam0);
		func_779(uParam0);
		func_780(uParam0, 0f, 0f, 0f, 0, 0);
		func_781(uParam0);
		func_743(uParam0, 4);
		func_782(uParam0, 0);
		func_783(&(Global_1946804->f_1497), Global_35, 1, 64, 1, 1, 1);
		if (_0x927b810e43e99932(&(uParam0->f_873)))
		{
			_0x0a5a4f1979abb40e(&(uParam0->f_873));
		}
	}
}

Vector3 func_393(int iParam0)
{
	if (func_784(iParam0))
	{
		return func_785(iParam0);
	}
	return (*Global_1835011)[iParam0]->f_18;
}

int func_394(vector3 vParam0, var uParam3)
{
	if (_0x1b065a2bf7953815(0) != 1)
	{
		func_499(0, 1);
	}
	else
	{
		return 0;
	}
	iVar0 = func_786(Global_35, 0, 2, 0);
	if (!is_weapon_valid(iVar0))
	{
		iVar0 = func_787(0, 0);
		if (func_686(iVar0))
		{
			set_current_ped_weapon(Global_35, iVar0, true, 2, false, false);
			func_788(1, 0);
		}
	}
	else
	{
		func_788(1, 0);
	}
	func_211(0);
	func_500(0, vParam0, uParam3);
	return 1;
}

bool func_395()
{
	return true;
	if (Global_1572887->f_12 == 0)
	{
		return true;
	}
	return Global_40.f_1;
}

bool func_396(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

int func_397()
{
	return 26;
}

void func_398(int iParam0)
{
	if (!func_191(iParam0))
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

void func_399(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 60)
	{
		func_789((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_400(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 40)
	{
		func_790((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_401(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 20)
	{
		func_791((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_402(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 14)
	{
		func_792((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_403(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 60)
	{
		func_793((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_404(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 10)
	{
		func_794((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_405(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
}

void func_406(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 10)
	{
		func_795((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_407(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 3)
	{
		func_796((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_408(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		func_797((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_409(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		func_798((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_410(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		func_799((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_411(var uParam0, int iParam1, int iParam2)
{
	if (func_120(uParam0, 2097152))
	{
		return;
	}
	iVar0 = func_800(&(uParam0->f_638), iParam1);
	if (iVar0 == -1)
	{
		iVar0 = func_801(&(uParam0->f_638));
	}
	if (iVar0 == -1)
	{
		return;
	}
	uParam0->f_638[iVar0] = iParam1;
	uParam0->f_638[iVar0]->f_2 = (uParam0->f_638[iVar0]->f_2 || iParam2);
}

void func_412(var uParam0, char[4] cParam1, int iParam2, int iParam3, int iParam4)
{
	if (func_120(uParam0, 2097152))
	{
		return;
	}
	iVar0 = func_802(&(uParam0->f_819), cParam1);
	if (iVar0 == -1)
	{
		iVar0 = func_803(&(uParam0->f_819));
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

void func_413(var uParam0, char[4] cParam1, var uParam2, int iParam3, int iParam4, char* sParam5, int iParam6, bool bParam7)
{
	if (!func_804(iParam3, func_33(uParam0)) && !func_804(iParam3, func_35(uParam0)))
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
	iVar0 = func_805(&(uParam0->f_1126), cParam1, *uParam2);
	if (iVar0 == -1)
	{
		iVar0 = func_806(&(uParam0->f_1126));
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
		func_807(&(uParam0->f_1126[iVar0]->f_2), 4);
	}
}

void func_414(int iParam0, int iParam1)
{
	func_808(iParam0, iParam1);
}

void func_415(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, int iParam12)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_809((*uParam0)[iVar0]))
		{
			if (func_804((*uParam0)[iVar0]->f_2, iParam12))
			{
				func_810((*uParam0)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (func_811((*uParam1)[iVar0]))
		{
			if (func_804((*uParam1)[iVar0]->f_4, iParam12))
			{
				func_812((*uParam1)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam2)
	{
		if (func_813((*uParam2)[iVar0]))
		{
			if (func_804((*uParam2)[iVar0]->f_2, iParam12))
			{
				func_814((*uParam2)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam3)
	{
		if (func_815((*uParam3)[iVar0]))
		{
			if (func_804((*uParam3)[iVar0]->f_2, iParam12))
			{
				func_816((*uParam3)[iVar0]);
			}
		}
		iVar0++;
	}
	if (func_804(uParam4->f_1, iParam12))
	{
		func_817(uParam4);
	}
	iVar0 = 0;
	while (iVar0 < *uParam5)
	{
		if (func_818((*uParam5)[iVar0]))
		{
			if (func_804((*uParam5)[iVar0]->f_3, iParam12))
			{
				func_819((*uParam5)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam5)
	{
		if (func_818((*uParam5)[iVar0]))
		{
			iVar1 = 0;
			while (iVar1 < 20)
			{
				if (func_820((*uParam5)[iVar0]->f_4[iVar1]))
				{
					if (func_804((*uParam5)[iVar0]->f_4[iVar1]->f_2, iParam12))
					{
						func_821((*uParam5)[iVar0]->f_4[iVar1], (*uParam5)[iVar0]->f_1);
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
		if (func_822((*uParam6)[iVar0]))
		{
			if (func_804((*uParam6)[iVar0]->f_3, iParam12))
			{
				func_823((*uParam6)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam7)
	{
		if (func_824((*uParam7)[iVar0]))
		{
			if (func_804((*uParam7)[iVar0]->f_4, iParam12))
			{
				func_825((*uParam7)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam8)
	{
		if (func_826((*uParam8)[iVar0]))
		{
			if (func_804((*uParam8)[iVar0]->f_2, iParam12))
			{
				func_827((*uParam8)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam9)
	{
		if (func_828((*uParam9)[iVar0]))
		{
			if (func_804((*uParam9)[iVar0]->f_2, iParam12))
			{
				func_829((*uParam9)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam10)
	{
		if (func_830((*uParam10)[iVar0]))
		{
			if (func_804((*uParam10)[iVar0]->f_3, iParam12))
			{
				func_831((*uParam10)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam11)
	{
		if (func_832((*uParam11)[iVar0]))
		{
			if (func_804((*uParam11)[iVar0]->f_2, iParam12))
			{
				func_833((*uParam11)[iVar0]);
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
	if (func_834(uParam0, iParam1, sParam2))
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
	func_835(&(cParam0->f_7375), iParam1, sParam2, iParam3, iParam4, bParam5);
	func_382(&(cParam0->f_10792), iParam1, sParam2, bParam6);
}

bool func_421(char[4] cParam0, int iParam1, bool bParam2)
{
	iVar0 = 1;
	if (bParam2 && func_23(&(cParam0->f_8269)))
	{
		if (!func_121(cParam0, iParam1, 268435456))
		{
			MemCopy(&cVar1, {func_836(cParam0->f_607)}, 3);
			if (func_837(&(cParam0->f_8269), &cVar1, 0, func_132(iParam1), 1, 0))
			{
				if (func_24(&(cParam0->f_8269)))
				{
					func_838(&(cParam0->f_8269));
				}
				func_140(cParam0, iParam1, 268435456);
			}
			else
			{
				iVar0 = 0;
			}
		}
	}
	if (!func_839(&(cParam0->f_638), &(cParam0->f_819), &(cParam0->f_1020), &(cParam0->f_1081), &(cParam0->f_1124), &(cParam0->f_1126), &(cParam0->f_5147), &(cParam0->f_5188), &(cParam0->f_5239), &(cParam0->f_5249), &(cParam0->f_5265), &(cParam0->f_5286), iParam1))
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
		if (func_818((*uParam0)[iVar0]))
		{
			if (func_804((*uParam0)[iVar0]->f_3, iParam1))
			{
				if ((*uParam0)[iVar0]->f_65 > 0f || func_840((*uParam0)[iVar0]->f_2, 4))
				{
					if (!func_841((*uParam0)[iVar0]))
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

int func_423(var uParam0)
{
	return uParam0->f_596;
}

bool func_424(var uParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, int iParam5)
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
	iVar0 = func_842(func_61(uParam0));
	if (!func_29())
	{
		vVar2 = { func_126(uParam0->f_607) };
	}
	if (func_843(uParam0, iVar0, &uVar1, bParam1, vVar2.x, vVar2.y, vVar2.z, 0, bParam2, iParam3, bParam4, iParam5, 1, 0))
	{
		uParam0->f_5408 = uVar1;
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
			if (!func_844(cParam0))
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
				iVar12 = func_845(&iVar11, &Var0);
				if (iVar11 != 0)
				{
					func_103(cParam0, 16777216);
					if (iVar11 == 2 && !is_entity_dead(iVar12))
					{
						if (iVar12 == cParam0->f_5411)
						{
							func_103(cParam0, 16777216);
						}
						else if (func_846(iVar12, cParam0->f_5411, 5f, 1))
						{
							if (func_847(iVar12))
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
		if (func_848(&iVar17, func_125(cParam0), vVar14, 0f, 0, 0, 1, 1, 1))
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
		iVar13 = func_845(&iVar29, &Var18);
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
		func_849(cParam0, bParam1);
		if (!func_120(cParam0, 256))
		{
			if (!func_120(cParam0, 32768))
			{
				vVar14.x = uParam2;
				vVar14.f_1 = uParam3;
				vVar14.f_2 = uParam4;
				if ((!func_847(iVar13) || func_850(Global_35, iVar13, 1, 1) > 200f) && !func_396(vVar14))
				{
					if (!func_29())
					{
						freeze_entity_position(iVar13, false);
						func_851(iVar13, vVar14, fParam5, 2, 1073741824);
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

void func_426(var uParam0)
{
	if (!func_120(uParam0, 32) && func_128(uParam0, 3))
	{
		if (func_852(uParam0->f_607, &iVar0, &uVar1))
		{
			set_clock_time(iVar0, 0, 0);
			func_103(uParam0, 32);
		}
	}
	if (!func_120(uParam0, 32))
	{
		if (func_853(&(uParam0->f_609), uParam0->f_607))
		{
			func_103(uParam0, 32);
		}
	}
}

void func_427(var uParam0)
{
	if (!func_120(uParam0, 128))
	{
		if (func_120(uParam0, 16384))
		{
			func_854(uParam0);
			if (func_855(uParam0))
			{
				func_51(&(uParam0->f_10792));
				func_856(uParam0, 2097152);
				func_268(uParam0, 16384);
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
			func_854(uParam0);
			MemCopy(&Var0, {func_155(func_61(uParam0))}, 4);
			if (func_857(uParam0, Var0))
			{
				if (func_423(uParam0) != 4)
				{
					do_screen_fade_out(0);
				}
				func_103(uParam0, 128);
			}
		}
		else
		{
			if (func_423(uParam0) != 4)
			{
				do_screen_fade_out(1);
			}
			func_103(uParam0, 128);
		}
	}
}

void func_428(var uParam0, int iParam1)
{
	uParam0->f_596 = iParam1;
}

bool func_429(var uParam0)
{
	iVar0 = 1;
	if (!func_858(uParam0))
	{
		iVar0 = 0;
	}
	if (!func_424(uParam0, func_128(uParam0, 3), !func_8(uParam0, 2097152), uParam0->f_5410, !func_8(uParam0, 32), 0))
	{
		iVar0 = 0;
	}
	if (!func_425(uParam0, 1, uParam0->f_5413, uParam0->f_5413.f_1, uParam0->f_5413.f_2, uParam0->f_5416, 1, 1, 1))
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
		MemCopy(&cVar1, {func_836(uParam0->f_607)}, 3);
		if (func_859(&(uParam0->f_8269), &cVar1, 0, 1, 1))
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
		if (func_860(&(uParam0->f_13115)) < 30f)
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

bool func_430(var uParam0)
{
	bVar0 = (_has_player_teleport_finished(player_id()) || !is_player_teleport_active());
	if (func_860(&(uParam0->f_603)) >= uParam0->f_13144)
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		if (is_player_teleport_active())
		{
			stop_player_teleport();
		}
		if ((func_82(32768) && func_861()) && func_860(&(uParam0->f_603)) < (uParam0->f_13144 + 10f))
		{
			return false;
		}
		if (func_120(uParam0, 8) && is_valid_interior(get_interior_at_coords(func_126(uParam0->f_607))))
		{
			unpin_interior(get_interior_at_coords(func_126(uParam0->f_607)));
			func_268(uParam0, 8);
		}
		_set_milliseconds_per_game_minute(2000);
		func_862(0, 0);
		func_268(uParam0, 4096);
		return true;
	}
	return false;
}

bool func_431(var uParam0)
{
	func_863();
	if (!func_864(uParam0))
	{
		return false;
	}
	if (!func_865(uParam0))
	{
		return false;
	}
	func_145(uParam0, Global_35, "ARTHUR", 0);
	if (does_entity_exist(&(uLocal_182[0])))
	{
		func_145(uParam0, &(uLocal_182[0]), "DUTCH", 0);
	}
	else
	{
		return false;
	}
	if (does_entity_exist(&(uLocal_182[1])))
	{
		func_145(uParam0, &(uLocal_182[1]), "BILL", 0);
	}
	else
	{
		return false;
	}
	if (!func_866())
	{
		return false;
	}
	if (!func_867())
	{
		return false;
	}
	if (func_33(uParam0) > iLocal_160)
	{
		if (!bVar327)
		{
			func_868();
			iLocal_330 = 1;
			return false;
		}
		if (!bVar326)
		{
			func_595(24);
			func_869(0, 1, 0);
			iLocal_329 = 1;
			return false;
		}
		if (!func_870())
		{
			return false;
		}
	}
	if (func_33(uParam0) <= iLocal_162)
	{
		if (!_is_metaped_outfit_request_valid(iVar324))
		{
			iLocal_327 = _request_metaped_outfit(737910671, -180751400);
		}
		if (!_0x610438375e5d1801(iVar324))
		{
			return false;
		}
		if (!func_871(uParam0))
		{
			return false;
		}
	}
	if (func_33(uParam0) == iLocal_160)
	{
		iLocal_328 = get_interior_at_coords(2231.073f, -772.7877f, 43.5574f);
		if (!is_interior_ready(iVar325))
		{
			return false;
		}
	}
	if (!_is_imap_active(-337712376))
	{
		if (!_is_position_inside_imap_streaming_extents(-337712376, Global_36))
		{
			_request_imap(-337712376);
		}
	}
	bVar0 = true;
	if (func_33(uParam0) >= iLocal_163)
	{
		bVar0 = false;
	}
	if (!func_872(uParam0, bVar0))
	{
		return false;
	}
	func_873();
	func_145(uParam0, &(uLocal_182[3]), "SADIE_ADLER", 0);
	func_145(uParam0, &(uLocal_182[2]), "MICAH_BELL", 0);
	func_145(uParam0, &(uLocal_182[7]), "ABIGAIL", 0);
	_0x72d4cb5db927009c(-95736505, -1, 0);
	_0x72d4cb5db927009c(36703333, -1, 0);
	_0x72d4cb5db927009c(-183018591, -1, 0);
	if (func_33(uParam0) == iLocal_160)
	{
		_0x1b3c2d961f5fc0e1("script@Story@GNG1@ig1_crawl_treatment");
		_0xe6cb36f43a95d75f(0f);
	}
	if (func_33(uParam0) >= iLocal_162)
	{
		if (!func_594(4))
		{
			func_874(4);
		}
	}
	if (func_33(uParam0) >= iLocal_162 && func_33(uParam0) != iLocal_164)
	{
		func_875(-1, 1);
	}
	if (!func_391(iLocal_168, 256))
	{
		create_model_hide_excluding_script_objects(func_181(1, 20), 20f, iLocal_181, true);
		func_414(&iLocal_168, 256);
	}
	func_877(uParam0, 143368);
	func_879(uParam0, 145075);
	func_881(uParam0, 145520);
	if (!Global_40.f_1)
	{
		func_882(5);
	}
	if (func_33(uParam0) > iLocal_160)
	{
		func_883();
		_0xe6cb36f43a95d75f(0.25f);
		func_884(0);
		func_885(&iLocal_198, &iLocal_201, -1, 1);
		func_886(-1, 1);
		func_887(-1, 1);
		func_888();
		func_889();
		set_timecycle_modifier("Gang_1_mod");
		_0x1d77b47afa584e90(player_id(), -1, 1);
		func_186("lak_nav_camp_running");
		func_187("lak_nav_camp_gang1");
		_request_imap(-605128543);
		func_890(100f, 0, 0, 1);
		func_891(100f, 0, 0, 1);
		func_892(100f, 0, 0, 1);
	}
	func_893();
	func_166(1);
	func_894();
	if (func_33(uParam0) >= iLocal_162)
	{
		func_895(0, 180);
	}
	func_172(-239733899, 0, 1f, 1, 1, 0, 0, 0);
	iVar1 = 0;
	while (iVar1 < 15)
	{
		if (func_165(&(uLocal_182[iVar1]), 0))
		{
			set_blocking_of_non_temporary_events(&(uLocal_182[iVar1]), true);
		}
		iVar1++;
	}
	clear_area(func_181(2, 0), 200f, 56);
	if (does_entity_exist(&(uLocal_182[3])))
	{
		set_ped_config_flag(get_ped_index_from_entity_index(&(uLocal_182[3])), 273, false);
	}
	func_461(4294);
	func_896(67108864);
	return true;
}

void func_432(char[4] cParam0, int iParam1)
{
	func_66(iParam1);
	cParam0->f_10783 = iParam1;
}

bool func_433(var uParam0)
{
	func_897(uParam0);
	func_898(uParam0);
	iVar0 = func_33(uParam0);
	iVar1 = func_35(uParam0);
	iVar2 = func_162(uParam0, iVar0);
	if (func_8(uParam0, 2097152))
	{
		if (iVar2 == 7 || iVar2 < 3)
		{
			func_855(uParam0);
		}
	}
	func_899(uParam0);
	func_900(uParam0);
	func_901(uParam0);
	func_902(uParam0);
	func_903(uParam0);
	func_904(uParam0);
	if (iVar2 != 5 && iVar2 != 6)
	{
		func_905(uParam0);
	}
	if ((func_33(uParam0) == 0 && iVar2 < 3) && func_282(uParam0) == 0)
	{
		func_427(uParam0);
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
			if (func_906(uParam0, iVar0, 0))
			{
				if (func_907(uParam0, func_33(uParam0)) != -1 && _0x62de46f061caa468() < func_907(uParam0, func_33(uParam0)))
				{
					_0xf008e0ba1fe1d644((func_907(uParam0, func_33(uParam0)) - _0x62de46f061caa468()));
				}
				if ((func_33(uParam0) == 25 || func_33(uParam0) == 26) && func_82(32768))
				{
					func_383(uParam0, 524288);
				}
				if (func_120(uParam0, 4))
				{
					if (!func_8(uParam0, 4))
					{
						func_908(uParam0, iVar0);
						func_99(uParam0, 4);
					}
					func_909(uParam0);
					func_910(uParam0, iVar0, 1);
				}
				else
				{
					func_910(uParam0, iVar0, 1);
				}
			}
			break;
		case 1:
			if (func_858(uParam0))
			{
				if (func_911(uParam0))
				{
					if (func_8(uParam0, 4))
					{
						func_856(uParam0, 4);
					}
					func_910(uParam0, iVar0, 2);
				}
			}
			else if (func_912(uParam0) >= uParam0->f_13144)
			{
				if (func_8(uParam0, 4))
				{
					func_856(uParam0, 4);
				}
				func_910(uParam0, iVar0, 2);
			}
			break;
		case 2:
			if (func_906(uParam0, iVar0, 2))
			{
				if (!func_913(uParam0))
				{
					func_910(uParam0, iVar0, 4);
					if (func_914(uParam0, iVar0, iVar1))
					{
						func_910(uParam0, iVar0, 5);
					}
				}
				else
				{
					func_915(uParam0);
					func_910(uParam0, iVar0, 3);
					if (func_916(uParam0, iVar0))
					{
						func_910(uParam0, iVar0, 4);
						if (func_914(uParam0, iVar0, iVar1))
						{
							func_910(uParam0, iVar0, 5);
						}
					}
				}
			}
			else if (func_917(uParam0))
			{
				func_916(uParam0, iVar0);
			}
			break;
		case 3:
			if (func_916(uParam0, iVar0))
			{
				func_910(uParam0, iVar0, 4);
				if (func_914(uParam0, iVar0, iVar1))
				{
					func_910(uParam0, iVar0, 5);
				}
			}
			break;
		case 4:
			if (func_914(uParam0, iVar0, iVar1))
			{
				func_910(uParam0, iVar0, 5);
			}
			break;
		case 5:
			if (!func_20() == 0)
			{
				func_918(uParam0);
				func_919(uParam0, iVar0);
				func_920(uParam0);
				func_921(uParam0);
				if (func_121(uParam0, iVar1, 2))
				{
					if (func_922(uParam0, iVar1))
					{
						func_923(uParam0, iVar1);
					}
				}
			}
			if (func_906(uParam0, iVar0, 5))
			{
				if (func_906(uParam0, iVar0, 7))
				{
					if (!func_121(uParam0, func_33(uParam0), 67108864))
					{
						func_924(uParam0, func_33(uParam0));
					}
					func_925(uParam0, iVar1);
					func_898(uParam0);
					return true;
				}
				else
				{
					func_910(uParam0, iVar0, 7);
				}
			}
			else
			{
				if (!func_121(uParam0, func_33(uParam0), 4194304))
				{
					if ((!is_screen_faded_in() && !is_screen_fading_in()) && !func_121(uParam0, func_33(uParam0), 16))
					{
						do_screen_fade_in(0);
						func_926(0);
					}
					func_140(uParam0, func_33(uParam0), 4194304);
				}
				if ((func_927(get_player_index(), 0, 0, 1) && !func_120(uParam0, 8192)) && !func_121(uParam0, func_33(uParam0), 8))
				{
					func_47(1, 0);
					func_928("MISSION_WANTED", 7500, 0, 1, 0, 0, -1, -1, 0);
					if (func_929(uParam0))
					{
						func_910(uParam0, iVar0, 6);
					}
				}
				if (func_8(uParam0, 268435456))
				{
					if (_0x1b065a2bf7953815(1) != 1)
					{
						func_36(uParam0, func_34(iVar0), func_34(iVar1), iVar0, iVar1);
						func_856(uParam0, 268435456);
					}
				}
				if (func_120(uParam0, 1048576))
				{
					if (func_127(func_34(0)))
					{
						func_268(uParam0, 1048576);
					}
				}
			}
			break;
		case 6:
			if (!func_20() == 0)
			{
				func_918(uParam0);
				func_919(uParam0, iVar0);
				func_920(uParam0);
				func_921(uParam0);
				if (func_121(uParam0, func_35(uParam0), 2))
				{
					if (func_922(uParam0, func_35(uParam0)))
					{
						func_923(uParam0, func_35(uParam0));
					}
				}
			}
			if ((!func_927(get_player_index(), 0, 0, 1) || func_120(uParam0, 8192)) || func_121(uParam0, func_33(uParam0), 8))
			{
				if (func_906(uParam0, iVar0, 5))
				{
					if (func_930(uParam0))
					{
						func_910(uParam0, iVar0, 7);
					}
				}
				else
				{
					func_930(uParam0);
					func_910(uParam0, iVar0, 5);
				}
			}
			else
			{
				func_906(uParam0, iVar0, 5);
				func_931(uParam0);
			}
			break;
		case 7:
			if (func_906(uParam0, iVar0, 7))
			{
				if (!func_121(uParam0, func_33(uParam0), 67108864))
				{
					func_924(uParam0, func_33(uParam0));
				}
				func_925(uParam0, iVar1);
				func_898(uParam0);
				return true;
			}
			break;
		default:
			func_910(uParam0, iVar0, 7);
			break;
	}
	return false;
}

void func_434(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_509(iParam0))
		{
			return;
		}
	}
	Global_40.f_4942[iParam0] = (Global_40.f_4942[iParam0] || iParam1);
}

void func_435(var uParam0)
{
	uParam0->f_1 = 0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_134)
	{
		if (_0x93ffd92f05ec32fd(&(uParam0->f_135[iVar0])))
		{
			_0x13e7320c762f0477(&(uParam0->f_135[iVar0]));
		}
		uParam0->f_135[iVar0]->f_1 = -1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 39)
	{
		*uParam0->f_1.f_1[iVar0] = { vVar1 };
		iVar0++;
	}
	func_932(&(uParam0->f_120));
	uParam0->f_134 = 0;
	*uParam0 = 0;
}

void func_436(int* iParam0, bool bParam1)
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

int func_437(int iParam0, bool bParam1, bool bParam2)
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

bool func_438(int iParam0)
{
	if (func_933(iParam0))
	{
		return is_door_registered_with_system(iParam0);
	}
	return false;
}

void func_439(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (func_438(iParam0))
	{
		if (door_system_get_door_state(iParam0) != 1 || bParam2)
		{
			door_system_set_door_state(iParam0, 1);
		}
		door_system_set_open_ratio(iParam0, iParam1, iParam3);
	}
}

void func_440(int iParam0, bool bParam1)
{
	if (func_438(iParam0))
	{
		if (door_system_get_door_state(iParam0) != 2 || bParam1)
		{
			door_system_set_door_state(iParam0, 2);
		}
	}
}

void func_441(int iParam0, bool bParam1)
{
	if (func_438(iParam0))
	{
		if (door_system_get_door_state(iParam0) != 1 || bParam1)
		{
			door_system_set_door_state(iParam0, 1);
		}
	}
}

void func_442(int iParam0, bool bParam1)
{
	if (func_438(iParam0))
	{
		if (door_system_get_door_state(iParam0) != 0 || bParam1)
		{
			door_system_set_door_state(iParam0, 0);
		}
	}
}

bool func_443()
{
	return true;
}

bool func_444(int iParam0, bool bParam1)
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

int func_445(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_304((*Global_1347702)[iParam0]->f_12, 2097152))
		{
			if (func_330((*Global_1835011)[59]->f_1, 1))
			{
				return 0;
			}
		}
		else if (func_304((*Global_1347702)[iParam0]->f_12, 256))
		{
			if (!func_330((*Global_1835011)[59]->f_1, 1))
			{
				return 0;
			}
		}
	}
	return func_934(iParam0);
}

bool func_446(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_447(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_448(int iParam0)
{
	if (func_20() != -1)
	{
		return false;
	}
	if (!func_276(iParam0))
	{
		return false;
	}
	return func_194((*Global_1347702)[iParam0]->f_15);
}

int func_449(int iParam0)
{
	if (&Global_1898329 == 15)
	{
		return -1;
	}
	if (!func_935(iParam0))
	{
		return -1;
	}
	if (func_20() != -1)
	{
		iVar2 = func_936(iParam0);
		if (iVar2 >= 0)
		{
			func_937(iParam0, 1);
			return iVar2;
		}
		else
		{
			iVar1 = &Global_1898329;
			(*Global_1898330)[iVar1] = iParam0;
			*(*Global_1898346)[iVar1] = { Var3 };
			func_938(iVar1, 1);
			func_937(iParam0, 1);
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
		iVar2 = func_936(iParam0);
		if (iVar2 >= 0)
		{
			func_937(iParam0, 1);
			return iVar2;
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < &Global_1898330)
			{
				if (!func_192(Global_1898330[iVar0]))
				{
					(*Global_1898330)[iVar0] = iParam0;
					*(*Global_1898346)[iVar0] = { Var3 };
					func_938(iVar0, 1);
					func_937(iParam0, 1);
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

bool func_450(int iParam0)
{
	return func_299(iParam0) == 2;
}

void func_451(int iParam0)
{
	func_939(iParam0);
}

bool func_452(int iParam0)
{
	if (func_20() != -1)
	{
		return false;
	}
	if (!func_276(iParam0))
	{
		return false;
	}
	return func_330((*Global_1347702)[iParam0]->f_15, 1);
}

bool func_453(int iParam0)
{
	if ((*Global_1347702)[iParam0]->f_44 != -1)
	{
		if ((*Global_1347702)[iParam0]->f_44 != 0)
		{
			if (!func_940((*Global_1347702)[iParam0]->f_44))
			{
				return false;
			}
		}
	}
	return true;
}

void func_454(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_455(int iParam0)
{
	if ((*Global_1347702)[iParam0]->f_13 & 2 == 0)
	{
		iVar0 = 0;
		iVar1 = 0;
		while (iVar1 <= 4)
		{
			if (func_509(&((*Global_1347702)[iParam0]->f_29[iVar1])))
			{
				func_942(&iVar0, func_941(&((*Global_1347702)[iParam0]->f_29[iVar1])));
			}
			iVar1++;
		}
		if (iVar0 == 0)
		{
			func_447(&((*Global_1347702)[iParam0]->f_13), 2);
		}
		else if ((*Global_1347702)[iParam0]->f_12 & 1 != 0)
		{
			if (func_944(iVar0, (*Global_1347702)[iParam0]->f_15, 1, (*Global_1347702)[iParam0]->f_27, func_943()))
			{
				func_447(&((*Global_1347702)[iParam0]->f_13), 2);
			}
		}
		else
		{
			func_447(&((*Global_1347702)[iParam0]->f_13), 2);
		}
	}
}

void func_456(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (!func_276(iParam0))
	{
		return;
	}
	if (iParam2 == 1)
	{
		func_945(iParam0);
	}
	if (func_446((*Global_1347702)[iParam0]->f_13, 256))
	{
		func_457(&((*Global_1347702)[iParam0]->f_13), 256);
	}
	if (func_304((*Global_1347702)[iParam0]->f_12, 1024))
	{
		func_946(&((*Global_1347702)[iParam0]->f_12), 1024);
	}
	if (iParam1 == 1)
	{
		func_947(iParam0, 0);
	}
	func_948(iParam0);
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

void func_457(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_458(int iParam0)
{
	if (&Global_1898329 <= 0)
	{
		return;
	}
	if (!func_192(iParam0))
	{
		return;
	}
	if (func_194(iParam0))
	{
		func_13(iParam0, 0, 2);
	}
	iVar0 = func_936(iParam0);
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

void func_459(int iParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 <= (Global_40.f_1094 - 1))
	{
		if (&Global_40.f_450[iVar0] == iParam0)
		{
			func_457(&((*Global_1347702)[iParam0]->f_13), 2);
			_0x748c5f51a18cb8f0(0);
			func_456(iParam0, 1, 1, iParam1, 32);
			_0x748c5f51a18cb8f0(1);
			iVar1 = (Global_40.f_1094 - 1);
			if (iVar0 < iVar1)
			{
				if (func_276(&(Global_40.f_450[iVar1])))
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

int func_460(struct<2> Param0, int iParam2)
{
	if (!func_258(Param0))
	{
		return 0;
	}
	iVar0 = get_indexed_item_in_itemset(iParam2, Param0);
	iVar1 = iVar0;
	return iVar1;
}

void func_461(int iParam0)
{
	switch (func_20())
	{
		case -1:
			Global_1357549->f_1494 = (Global_1357549->f_1494 || iParam0);
			break;
	}
}

int func_462(int iParam0)
{
	if (!func_509(iParam0))
	{
		return 0;
	}
	if (!does_entity_exist((*Global_1360165)[iParam0]->f_70))
	{
		(*Global_1360165)[iParam0]->f_70 = 0;
	}
	return (*Global_1360165)[iParam0]->f_70;
}

bool func_463(int iParam0)
{
	if (!func_949(iParam0))
	{
		return false;
	}
	if ((*Global_1360165)[iParam0]->f_70.f_11 == 0 || (*Global_1360165)[iParam0]->f_70.f_11 == (*Global_1360165)[iParam0]->f_128)
	{
		return false;
	}
	return true;
}

bool func_464(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_949(iParam0))
		{
			return false;
		}
	}
	return (Global_40.f_4942[iParam0] && iParam1) != 0;
}

int func_465(int iParam0, bool bParam1)
{
	if (!func_949(iParam0))
	{
		return 0;
	}
	if (!_0x800df3fc913355f3((*Global_1360165)[iParam0]->f_126) && bParam1)
	{
		(*Global_1360165)[iParam0]->f_126 = func_950(iParam0);
	}
	return (*Global_1360165)[iParam0]->f_126;
}

void func_466(bool bParam0)
{
	if (bParam0)
	{
		Global_1935689 = 1;
	}
	else
	{
		Global_1935689 = 2;
	}
}

Vector3 func_467(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 2234.668f, -769.6484f, 42.5235f;
				case 1:
					return 2251.947f, -787.7179f, 43.2202f;
				case 2:
					return 2253.334f, -782.2519f, 43.1656f;
				case 3:
					return 2250.083f, -769.4971f, 42.3413f;
				case 4:
					return 2248.658f, -769.3017f, 41.8527f;
				case 5:
					return 2241.084f, -756.1327f, 42.1432f;
				case 6:
					return 2252.025f, -782.2742f, 43.19f;
				case 7:
					return 2233.062f, -770.6892f, 42.6433f;
				case 8:
					return 2251.644f, -772.0358f, 42.072f;
				case 9:
					return 2266.322f, -766.2075f, 42.4502f;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 2231.715f, -771.5156f, 42.7985f;
				case 1:
					return 2230.017f, -770.834f, 42.5558f;
				case 2:
					return 2234.148f, -767.7072f, 42.6239f;
				case 3:
					return 2234.289f, -772.2901f, 42.5392f;
				case 4:
					return 2228.728f, -769.3655f, 42.574f;
				case 5:
					return 2220.889f, -775.226f, 42.4009f;
				case 6:
					return 2254.746f, -786.5359f, 43.1791f;
				case 7:
					return 2254.401f, -782.3422f, 43.2072f;
				case 8:
					return 2249.113f, -772.3027f, 42.2172f;
				case 9:
					return 2225.381f, -772.0844f, 42.5459f;
				case 10:
					return 2227.523f, -772.0992f, 42.564f;
				case 11:
					return 2232.293f, -769.0421f, 42.5477f;
				case 12:
					return 2226.36f, -772.4492f, 42.5589f;
				case 13:
					return 2229.99f, -776.0275f, 42.4836f;
				case 14:
					return 2228.681f, -770.5245f, 42.6712f;
				case 15:
					return 2239.252f, -777.022f, 43.97f;
				case 16:
					return 2251.72f, -763.9131f, 41.8701f;
				case 17:
					return 2253.107f, -771.8948f, 41.8909f;
				case 18:
					return 2223.095f, -775.8643f, 42.4713f;
				case 19:
					return 2252.928f, -786.7086f, 41.1426f;
				case 20:
					return 2232.662f, -766.6888f, 42.5565f;
				case 21:
					return 2228.765f, -773.2656f, 42.558f;
				case 22:
					return 2229.016f, -771.6218f, 42.9693f;
				case 23:
					return 2221.981f, -773.0682f, 42.9693f;
				case 24:
					return 2223.828f, -772.5457f, 42.9693f;
				case 25:
					return 2223.206f, -773.5213f, 42.9693f;
				case 26:
					return 2251.646f, -763.9346f, 42.0393f;
				case 27:
					return 2254.438f, -772.9828f, 42.0393f;
				case 28:
					return 2246.801f, -737.3879f, 41.5107f;
				case 29:
					return 2282.324f, -739.2172f, 40.5107f;
				case 30:
					return 2250.663f, -748.1483f, 41.8511f;
				case 31:
					return 2273.151f, -745.6063f, 41.6011f;
				case 32:
					return 2249.355f, -755.222f, 42.4874f;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return 2251.192f, -769.7682f, 41.8781f;
				case 1:
					return 2235.41f, -772.4548f, 44.065f;
				case 2:
					return 2235.689f, -769.2715f, 43.4137f;
				case 3:
					return 2235.032f, -765.7596f, 43.9687f;
				case 4:
					return 2251.339f, -769.4532f, 42.9923f;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return 2244.187f, -755.1193f, 42.5292f;
				case 1:
					return 2251.328f, -762.4437f, 42.0292f;
				case 2:
					return 2245.312f, -748.2694f, 42.0292f;
				case 3:
					return 2246.699f, -752.8236f, 42.3885f;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return 2555.779f, -1521.31f, 42.9535f;
				case 1:
					return 2217.243f, -775.2333f, 42.704f;
				case 2:
					return 2255.315f, -800.6909f, 40.0733f;
				case 3:
					return 2248.503f, -769.3429f, 41.8505f;
				case 4:
					return 2248.913f, -771.7186f, 41.9594f;
				case 5:
					return 2247.163f, -772.7949f, 42.2251f;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					return 2251.614f, -753.677f, 42.2792f;
				case 1:
					return 2245.968f, -747.9392f, 42.0292f;
				case 2:
					return 2245.739f, -761.0375f, 42.2792f;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					return 2232.908f, -777.3099f, 42.3775f;
				case 1:
					return 2228.648f, -775.5603f, 42.6284f;
				case 2:
					return 2251.167f, -785.1525f, 40.955f;
			}
			break;
		case 7:
			switch (iParam1)
			{
				case 0:
					return 2241.53f, -766.9432f, 42.5046f;
				case 1:
					return 2241.386f, -770.5615f, 42.5314f;
				case 2:
					return 2236.225f, -765.0564f, 42.5489f;
				case 3:
					return 2234.099f, -773.6073f, 42.5708f;
				case 4:
					return 2233.301f, -767.4317f, 42.582f;
				case 5:
					return 2232.909f, -768.1078f, 42.4842f;
				case 6:
					return 2233.252f, -773.1021f, 42.5679f;
				case 7:
					return 2246.626f, -768.9361f, 42.7951f;
				case 8:
					return 2246.49f, -770.0437f, 42.7951f;
			}
			break;
		case 8:
			switch (iParam1)
			{
				case 0:
					return 2257.477f, -759.8085f, 42.3561f;
				case 1:
					return 2264.172f, -764.9252f, 42.1061f;
				case 2:
					return 2267.416f, -773.4126f, 41.6061f;
				case 3:
					return 2256.124f, -777.4336f, 42.3561f;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 0:
					return 2263.626f, -762.9818f, 41.8238f;
				case 1:
					return 2266.843f, -763.871f, 42.02f;
				case 2:
					return 2271.684f, -772.3907f, 41.5455f;
				case 3:
					return 2256.663f, -776.1887f, 42.409f;
				case 4:
					return 2259.292f, -771.1442f, 42.1022f;
			}
			break;
		case 10:
			switch (iParam1)
			{
				case 0:
					return 2242.283f, -762.2211f, 42.3454f;
				case 1:
					return 2263.747f, -766.2313f, 41.9543f;
				case 2:
					return 2253.151f, -758.9163f, 41.8579f;
				case 3:
					return 2257.661f, -756.1445f, 41.9337f;
				case 4:
					return 2245.536f, -760.1215f, 42.0422f;
				case 5:
					return 2242.662f, -773.8764f, 42.4481f;
			}
			break;
		case 11:
			switch (iParam1)
			{
				case 0:
					return 2243.814f, -763.3016f, 42.1005f;
				case 1:
					return 2258.809f, -769.7121f, 42.1005f;
				case 2:
					return 2255.055f, -766.3001f, 42.1005f;
				case 3:
					return 2252.867f, -762.1797f, 41.8505f;
				case 4:
					return 2247.645f, -763.2205f, 42.3505f;
			}
			break;
		case 12:
			switch (iParam1)
			{
				case 0:
					return 2334.031f, -736.0431f, 41.0398f;
				case 1:
					return 2321.279f, -752.1851f, 42.0398f;
				case 2:
					return 2327.978f, -752.4265f, 42.4502f;
			}
			break;
		case 13:
			switch (iParam1)
			{
				case 0:
					return 2281.868f, -758.7219f, 41.0451f;
				case 1:
					return 2277.57f, -757.3082f, 41.5451f;
				case 2:
					return 2287.677f, -747.1125f, 40.9502f;
				case 3:
					return 2279.493f, -742.5753f, 40.9502f;
			}
			break;
		case 14:
			switch (iParam1)
			{
				case 0:
					return 2221.649f, -770.4642f, 42.9502f;
				case 1:
					return 2220.097f, -773.1323f, 42.9502f;
				case 2:
					return 2219.922f, -770.4822f, 42.9502f;
			}
			break;
		case 15:
			switch (iParam1)
			{
				case 0:
					return 2256.587f, -767.948f, 41.7951f;
				case 1:
					return 2308.859f, -750.6512f, 42.7951f;
			}
			break;
		case 16:
			switch (iParam1)
			{
				case 0:
					return 2257.978f, -755.7499f, 41.7953f;
				case 1:
					return 2259.085f, -757.3171f, 41.7953f;
			}
			break;
		case 17:
			switch (iParam1)
			{
				case 0:
					return 2284.399f, -739.5353f, 40.6515f;
				case 1:
					return 2275.57f, -729.2933f, 40.6515f;
				case 2:
					return 2274.444f, -741.9049f, 40.9015f;
				case 3:
					return 2267.715f, -730.4379f, 40.9015f;
				case 4:
					return 2263.443f, -731.1149f, 41.6515f;
				case 5:
					return 2262.352f, -744.7448f, 41.4015f;
				case 6:
					return 2262.091f, -736.9439f, 41.4015f;
				case 7:
					return 2258.395f, -745.2004f, 41.9015f;
			}
			break;
	}
	return 0f, 0f, 0f;
}

void func_468(bool bParam0, float fParam1)
{
	if (is_bit_set(Global_1934765->f_301, 1))
	{
		return;
	}
	iVar0 = func_951();
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
	if (func_952(&(Global_1934765->f_318[iVar0]), bParam0, fParam1))
	{
		Global_1934765->f_338 = iVar0;
	}
}

bool func_469(int iParam0)
{
	return func_953(iParam0, 2);
}

int func_470(int iParam0)
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

int func_471(int iParam0)
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

int func_472(int iParam0)
{
	return iParam0 & 31;
}

bool func_473()
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

int func_474(int iParam0)
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

int func_475(int iParam0)
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

void func_476(int iParam0, var uParam1)
{
	Var0 = iParam0;
	Var0.f_1 = uParam1;
	network_set_rich_presence(4, &Var0, 2, 2);
}

int func_477()
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

int func_478(int iParam0)
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

void func_479(var uParam0, var uParam1, var uParam2)
{
	vVar0.x = uParam0;
	vVar0.f_1 = uParam1;
	vVar0.f_2 = uParam2;
	network_set_rich_presence(3, &vVar0, 3, 3);
}

void func_480(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_12106[iParam0]->f_1 = iParam1;
		return;
	}
	if (iParam1 == 0 || iParam1 == -1)
	{
		func_954(iParam0);
	}
	else
	{
		func_955(iParam0, iParam1);
	}
	func_956();
}

bool func_481(int iParam0)
{
	iVar0 = func_957(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887->f_12 == -1)
	{
		return is_bit_set(&(Global_40.f_283[iVar1]), iVar2);
	}
	return is_bit_set(&(Global_1058888->f_40567[iVar1]), iVar2);
}

bool func_482(int iParam0)
{
	if (!func_192(iParam0))
	{
		return false;
	}
	switch (func_197(iParam0))
	{
		case 1:
			switch (func_275(iParam0))
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
			switch (func_275(iParam0))
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

void func_483(int iParam0)
{
	iVar2 = func_958(0);
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_596(iVar1) == iParam0)
		{
			_0x6a564540fac12211(iVar2, iVar1);
		}
		iVar0++;
	}
	func_960(func_959(iParam0), 6);
}

void func_484(int iParam0)
{
	iVar2 = func_958(0);
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_596(iVar1) == iParam0)
		{
			_0x766315a564594401(iVar2, iVar1, 0);
		}
		iVar0++;
	}
	func_961(func_959(iParam0), 6);
}

int func_485(int iParam0)
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

int func_486(int iParam0)
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
	func_962(iParam0, Global_1898164->f_162);
	return 1;
}

bool func_487(int iParam0)
{
	return iParam0 != 0;
}

bool func_488(int iParam0)
{
	if (iParam0 != -1)
	{
		return true;
	}
	return false;
}

void func_489(int iParam0, var uParam1)
{
	if (!func_488(iParam0))
	{
		return;
	}
	if (*uParam1 == -1600776215)
	{
		return;
	}
	func_963(iParam0, *uParam1, 0);
	func_964(uParam1);
	Global_1935183->f_24 = 1;
}

void func_490(char* sParam0, int iParam1)
{
	sParam0->f_8 = (sParam0->f_8 || iParam1);
}

void func_491(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_544() - fParam1);
	func_965(uParam0, 1);
	func_966(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_492(var uParam0)
{
	return func_221(*uParam0, 2);
}

int func_493()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return iVar0;
	}
	return get_game_timer();
}

void func_494(bool bParam0)
{
	if (func_967())
	{
		Global_1357509 = 1;
	}
	if (func_968(-92416669))
	{
	}
	if (bParam0 && Global_1935630->f_44 == -1016714371)
	{
		set_current_ped_weapon(Global_35, -1569615261, true, 0, false, false);
		Global_1935630->f_44 = -1569615261;
	}
}

struct<4> func_495(int iParam0, int iParam1)
{
	Var0 = { func_467(iParam0, iParam1) };
	Var0.f_3 = func_969(iParam0, iParam1);
	return Var0;
}

int func_496(int iParam0)
{
	if (func_197(iParam0) == 1)
	{
		return func_275(iParam0);
	}
	return -1;
}

int func_497(int iParam0)
{
	if (func_197(iParam0) == 8)
	{
		return func_275(iParam0);
	}
	return -1;
}

char[] func_498(int iParam0)
{
	if (!func_276(iParam0))
	{
		return uVar0;
	}
	uVar0 = (*Global_1347702)[iParam0]->f_3;
	return uVar0;
}

void func_499(int iParam0, bool bParam1)
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
		func_970(1, bParam1);
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
		(*Global_2621440)[iParam0]->f_9.f_14 = func_288();
	}
}

void func_500(int iParam0, vector3 vParam1, var uParam4)
{
	(*Global_2621440)[iParam0]->f_9.f_7 = { vParam1 };
	(*Global_2621440)[iParam0]->f_9.f_13 = uParam4;
	(*Global_2621440)[iParam0]->f_9 = 5;
	(*Global_2621440)[iParam0]->f_9.f_15 = func_375(vParam1, 1);
}

bool func_501(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 13)
	{
		return false;
	}
	return true;
}

bool func_502(int iParam0)
{
	return Global_43884 == iParam0;
}

void func_503(bool bParam0)
{
	Global_1935496->f_18 = !bParam0;
}

bool func_504(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 120);
}

void func_505(int iParam0)
{
	Global_1310750->f_16035 = (Global_1310750->f_16035 - (Global_1310750->f_16035 && iParam0));
}

bool func_506(var uParam0, int iParam1, int iParam2)
{
	return is_bit_set(uParam0[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return is_bit_set(uParam0[iVar0], iVar1);
}

int func_507()
{
	return Global_1109400->f_245;
}

bool func_508(var uParam0, int iParam1)
{
	return func_391(uParam0->f_64, iParam1);
}

bool func_509(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 27)
	{
		return false;
	}
	return true;
}

bool func_510(int iParam0)
{
	return func_464(iParam0, 16, 1);
}

void func_511(char[4] cParam0, int iParam1)
{
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	if (!func_971(cParam0, iParam1, &iVar0))
	{
		return;
	}
	if (is_entity_an_object(iParam1) && func_972(cParam0, get_object_index_from_entity_index(iParam1)))
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

void func_512(int iParam0)
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

void func_513(int iParam0)
{
	func_973(iParam0, 8, 0);
}

void func_514(int iParam0, bool bParam1)
{
	if (!func_949(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (func_974(&((*Global_1360165)[iParam0]->f_12), 1))
		{
			func_973(iParam0, 1, 0);
		}
	}
	func_973(iParam0, 16, bParam1);
}

void func_515(int iParam0, bool bParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	if (!func_509(iParam0))
	{
		return;
	}
	if (func_510(iParam0))
	{
		if ((*Global_1360165)[iParam0]->f_129 != 0 && (*Global_1360165)[iParam0]->f_129 != get_id_of_this_thread())
		{
			return;
		}
	}
	if (bParam10)
	{
		func_975(iParam0, 56, 1);
		func_27(&(Global_1359489->f_40), 1);
	}
	func_514(iParam0, 0);
	func_973(iParam0, 4, 0);
	func_513(iParam0);
	func_976(iParam0);
	func_977(iParam0, 37, 1);
	bVar0 = func_165(Global_1360165[iParam0], 0);
	iVar1 = func_978(iParam0, 0);
	bVar2 = _0x800df3fc913355f3(iVar1);
	if (get_ped_config_flag(Global_1360165[iParam0], 503, true) && Global_1359489->f_16 & 8388608 == 0)
	{
		set_ped_config_flag(Global_1360165[iParam0], 503, false);
	}
	if (func_979(iParam0, 64, 1))
	{
		func_977(iParam0, 64, 1);
	}
	if (bParam3)
	{
		func_977(iParam0, 33, 1);
		func_977(iParam0, 34, 1);
		func_980(iParam0, 1056964608, -1, 1061158912);
		func_981(iParam0, 1, 1, 0);
		if (bParam6)
		{
			func_975(iParam0, 30, 1);
		}
		if (bParam7)
		{
			func_975(iParam0, 35, 1);
			if (bParam8)
			{
				func_975(iParam0, 62, 1);
			}
		}
		if (bVar0)
		{
			func_982(iParam0, 0);
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
		func_977(iParam0, 28, 1);
	}
	else
	{
		if (!bVar0)
		{
			set_ped_keep_task(Global_1360165[iParam0], true);
		}
		func_975(iParam0, 33, 1);
		func_981(iParam0, 0, 1, 0);
		if (fParam4 > 0f)
		{
			(*Global_1360165)[iParam0]->f_133 = fParam4;
			func_27(&((*Global_1360165)[iParam0]->f_130), 1);
		}
		else
		{
			func_547(&((*Global_1360165)[iParam0]->f_130));
		}
		if (bParam9)
		{
			func_975(iParam0, 34, 1);
		}
	}
	if (bParam1 || bParam2)
	{
		if (does_entity_exist(Global_1360165[iParam0]))
		{
			func_983(iParam0, bParam2, bParam2, bParam2, 0);
		}
	}
	else if (bVar0)
	{
		set_ped_can_use_auto_conversation_lookat(Global_1360165[iParam0], false);
	}
	if (func_979(iParam0, 45, 1))
	{
		func_977(iParam0, 45, 1);
	}
	func_984(iParam0, 16, 1);
	func_977(iParam0, 44, 1);
	(*Global_1360165)[iParam0]->f_129 = 0;
	Global_40.f_4942[iParam0]->f_4 = 0;
	if (bParam5)
	{
		if (func_165(func_462(iParam0), 0))
		{
			func_985(0, iParam0, bParam3, 0, bParam2);
		}
	}
}

void func_516(int iParam0)
{
	iParam0 = func_269(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_265(iParam0);
	if (!_does_thread_exist(iVar0))
	{
		func_523(iParam0);
	}
	else if (!is_thread_active(iVar0, false))
	{
		func_523(iParam0);
	}
}

bool func_517(int iParam0)
{
	iParam0 = func_269(iParam0);
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

void func_518(int iParam0)
{
	iParam0 = func_269(iParam0);
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

void func_519(int iParam0)
{
	iParam0 = func_269(iParam0);
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

bool func_520(int iParam0)
{
	if (!func_986(iParam0))
	{
		return false;
	}
	if (!func_334())
	{
		return true;
	}
	return false;
}

void func_521(int iParam0)
{
	iParam0 = func_269(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_524(iParam0))
	{
		return;
	}
	iVar0 = func_217(iParam0);
	func_987(iParam0);
	if (!_0x88ad6cc10d8d35b2(iVar0))
	{
		set_entity_as_mission_entity(iVar0, true, true);
	}
	iVar1 = get_entity_model(iVar0);
	if (_0xaa9f048dcf69b6dc(iVar1))
	{
		if (!func_520(iVar1))
		{
			set_ped_model_is_suppressed(iVar1, false);
		}
	}
	delete_ped(&iVar0);
	func_988(iParam0, 0);
	func_523(iParam0);
}

bool func_522(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (is_entity_dead(iParam0) || is_ped_injured(iParam0))
	{
	}
	iVar0 = func_264(iParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	return true;
}

void func_523(int iParam0)
{
	iParam0 = func_269(iParam0);
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

bool func_524(int iParam0)
{
	iParam0 = func_269(iParam0);
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

void func_525(int iParam0)
{
	if (is_player_dead(player_id()))
	{
		return;
	}
	iVar0 = func_217(iParam0);
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
	if (func_989(iParam0, 64))
	{
		func_518(iParam0);
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
	bVar3 = func_594(42);
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
				func_990(&((*Global_1900383)[iParam0]->f_27));
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
		func_518(iParam0);
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
		if (func_991(1) < 1)
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
		func_992(&((*Global_1900383)[iParam0]->f_26), bVar6);
	}
	if (!does_blip_exist((*Global_1900383)[iParam0]->f_26))
	{
		return;
	}
	bVar8 = false;
	if (func_989(iParam0, 32))
	{
		bVar8 = true;
	}
	bVar9 = is_ped_in_writhe(iVar0);
	bVar10 = false;
	iVar11 = func_993(iParam0);
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
	fVar15 = func_994(vVar12, Global_36);
	bVar16 = false;
	if (fVar15 > func_995(iParam0))
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
		func_996((*Global_1900383)[iParam0]->f_26);
		func_997((*Global_1900383)[iParam0]->f_26);
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
	if (func_847(iVar0) && !bVar9)
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
	iVar21 = func_991(iParam0);
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

int func_526(int iParam0)
{
	return shift_right(iParam0, 5) & 1023;
}

int func_527(int iParam0)
{
	if ((*Global_1347702)[iParam0]->f_12 & 1 != 0 || (*Global_1347702)[iParam0]->f_12 & 33554432 != 0)
	{
		return 1;
	}
	return 3;
}

int func_528(int iParam0)
{
	uVar0 = (*Global_1347702)[iParam0]->f_3;
	return get_hash_key(&uVar0);
}

void func_529(int iParam0, int iParam1)
{
	Global_40.f_490.f_402[iParam0] = (&Global_40.f_490.f_402[iParam0] - (Global_40.f_490.f_402[iParam0] && iParam1));
}

void func_530(int iParam0, int iParam1)
{
	Global_40.f_490.f_402[iParam0] = (Global_40.f_490.f_402[iParam0] || iParam1);
}

bool func_531(int iParam0)
{
	iParam0 = func_269(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (!func_524(iParam0))
	{
		return false;
	}
	iVar0 = func_217(iParam0);
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

void func_532(int iParam0)
{
	iParam0 = func_269(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_524(iParam0))
	{
		return;
	}
	iVar0 = func_217(iParam0);
	if (is_entity_dead(iVar0))
	{
		return;
	}
	_set_entity_health(iVar0, 0, 0);
}

void func_533(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (is_string_null_or_empty(sParam1))
	{
		sParam1 = "FEED_MONEY_EARN";
	}
	func_702(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 1831944558, 0, 109029619, 0, 0, 0, 1);
}

void func_534(int iParam0, bool bParam1, float fParam2, int iParam3, int iParam4)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if (bParam1)
	{
		iVar0 = round((to_float(iParam0) * fParam2));
		iVar1 = ((iParam0 - iVar0) / iParam3);
		if (func_998())
		{
			iVar2 = floor((to_float(iVar1) * 0.1f));
		}
		iParam0 = (iParam0 + iVar2);
		iVar1 = (iVar1 + iVar2);
		func_702(_create_var_string(2, "FEED_GANG_TOTAL_EARN", iParam0), "ITEMTYPE_TEXTURES", -1957849484, 0, 109029619, 0, 0, 0, 1);
		iParam0 = (iParam0 - iVar0);
		if (iVar0 > 0)
		{
			func_999(iVar0);
			func_1000(iVar0, 0, 0);
		}
		func_702(_create_var_string(2, "FEED_GANG_PLAYER_EARN", iVar1), "ITEMTYPE_TEXTURES", 1831944558, 0, 109029619, 0, 0, 0, 1);
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

bool func_535(int iParam0)
{
	if (!func_250(iParam0))
	{
		return false;
	}
	return func_254(iParam0, 67108864);
}

void func_536(int iParam0)
{
	StringCopy(&cVar0, func_1001(iParam0), 64);
	StringConCat(&cVar0, "_OUTLINE", 64);
	sVar8 = func_1002(cVar0);
	_0x563fcb6620523917(get_hash_key(sVar8), -1482012664);
}

void func_537(int iParam0)
{
	StringCopy(&cVar0, func_1001(iParam0), 64);
	StringConCat(&cVar0, "_OUTLINE", 64);
	sVar8 = func_1002(cVar0);
	iVar9 = get_hash_key(sVar8);
	if (_0xe38450dbcbc70e3d(iVar9, -1305340593) || _0xe38450dbcbc70e3d(iVar9, -1482012664))
	{
		_0x6786d7afac3162b3(iVar9);
	}
}

bool func_538(var uParam0, int iParam1, int iParam2)
{
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	bVar2 = is_bit_set(uParam0[iVar0], iVar1);
	clear_bit((*uParam0)[iVar0], iVar1);
	return bVar2;
}

bool func_539(var uParam0, int iParam1, int iParam2)
{
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	bVar2 = is_bit_set(uParam0[iVar0], iVar1);
	set_bit((*uParam0)[iVar0], iVar1);
	return !bVar2;
}

bool func_540(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_541(int iParam0)
{
	if (!func_504(iParam0))
	{
		return true;
	}
	return Global_17504.f_42[iParam0]->f_4 > 0;
}

int func_542(int iParam0)
{
	if (func_504(iParam0))
	{
		return Global_17504.f_42[iParam0]->f_4;
	}
	return 0;
}

int func_543(int iParam0)
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

float func_544()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return (to_float(iVar0) / 1000f);
	}
	return (to_float(get_game_timer()) / 1000f);
}

void func_545(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	iVar0 = (((iParam2 + (60 * iParam3)) + (3600 * iParam4)) + (86400 * iParam5));
	if (func_1003(iParam0) == 1 && bParam7)
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

int func_546(int iParam0)
{
	if (!func_949(iParam0))
	{
		return 0;
	}
	if (!does_entity_exist(Global_1360165[iParam0]))
	{
		(*Global_1360165)[iParam0] = 0;
	}
	return Global_1360165[iParam0];
}

void func_547(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

bool func_548(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return func_1004(iParam0);
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

int func_549(int iParam0, bool bParam1, bool bParam2)
{
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (&Global_40.f_4283.f_6[iVar0] == iParam0)
		{
			func_562(Global_40.f_4283.f_6[iVar0], bParam1, bParam2);
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_550(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_2;
	}
	return -1;
}

void func_551(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_2 = iParam1;
}

int func_552()
{
	return Global_40.f_11095.f_35;
}

void func_553(int iParam0, int iParam1)
{
	if (iParam1 == 1)
	{
		func_1005(iParam0, 0);
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
		func_554(1);
		Global_40.f_11922[0] = iParam0;
	}
}

void func_554(int iParam0)
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
			func_1005(&(Global_40.f_11922[iVar0]), 0);
			Global_40.f_11922[iVar0] = 0;
			iVar1 = 1;
		}
		iVar0++;
	}
	if (iVar1 == 1)
	{
		func_1006(1);
	}
}

bool func_555(int iParam0)
{
	return Global_40.f_490.f_402[iParam0] & 1 != 0;
}

int func_556()
{
	iVar0 = func_1007((*Global_1347702)[9]->f_15);
	iVar1 = func_1007((*Global_1835011)[69]->f_1);
	if (func_1008(iVar0, iVar1, 1))
	{
		return 0;
	}
	return 1;
}

bool func_557(int iParam0)
{
	if (!func_191(iParam0))
	{
		return false;
	}
	return func_330((*Global_1835011)[iParam0]->f_1, 1);
}

int func_558(int iParam0)
{
	Var0 = Global_1357549->f_576;
	Var0.f_1 = 0;
	Var0.f_3 = iParam0;
	iVar5 = 0;
	if (func_1009(Var0, 70005598, &iVar6, 0))
	{
		iVar5 = func_1010(iVar6);
	}
	return iVar5;
}

int func_559(int iParam0)
{
	Var0 = Global_1357549->f_576;
	Var0.f_1 = 0;
	Var0.f_3 = iParam0;
	iVar5 = 1;
	if (func_1011(Var0, -1875502208, &iVar5, 0))
	{
	}
	return iVar5;
}

void func_560(int iParam0, bool bParam1)
{
	func_1012(iParam0, &iVar0, &iVar1);
	if (bParam1)
	{
		set_bit(Global_1357549->f_1848[iVar0], iVar1);
	}
	else
	{
		clear_bit(Global_1357549->f_1848[iVar0], iVar1);
	}
}

bool func_561(int iParam0)
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

void func_562(var uParam0, bool bParam1, bool bParam2)
{
	if (*uParam0 == 176656832)
	{
		return;
	}
	func_560(*uParam0, 0);
	if (bParam1)
	{
		if (bParam2)
		{
			func_563(2, *uParam0);
		}
		else
		{
			func_564(2, *uParam0);
		}
	}
	func_1013(uParam0);
}

void func_563(int iParam0, int iParam1)
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

void func_564(int iParam0, int iParam1)
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

void func_565(int iParam0, int iParam1, bool bParam2)
{
	Global_1327479->f_4 = get_game_timer();
	func_1014(iParam0, iParam1, bParam2);
}

int func_566(int iParam0)
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

int func_567(int iParam0)
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

void func_568(int iParam0, bool bParam1, int iParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, bool bParam7)
{
	iVar0 = func_1015();
	if (iParam3 == 1142025875 || iParam3 == 1587891565)
	{
		if (bParam6)
		{
			iParam0 = func_1016(iParam0);
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
	if (func_594(6))
	{
		iVar2 = 320;
		iVar3 = -320;
		if (!func_1017())
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
	Global_40.f_11095.f_35 = func_312(Global_40.f_11095.f_35, iVar3, iVar2);
	iVar1 = func_1015();
	if ((iVar1 != iVar0 && (iVar1 != 0 || iParam3 == -1091304842)) || bParam7)
	{
		iVar6 = func_1018(iVar1);
		func_1020(func_1019(), 0, 4000);
		func_1021(Global_40.f_11095.f_35);
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
		func_1022(0);
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
				if (iParam0 > func_567(14))
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
					sParam4 = func_1023(iParam3);
				}
				if (is_string_null_or_empty(sParam4))
				{
					func_702(_create_var_string(2, "PLAYER_HONOR_CHANGE_POS"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_GOOD"), 0, 109029619, "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_702(_create_var_string(2, "PLAYER_HONOR_CHANGE_POS_EVENT"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_GOOD"), 0, 109029619, "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
		else
		{
			func_95(func_94(-1636809477), 1);
			Global_1347477->f_204 = 0;
			if (!bParam1)
			{
				if (iParam0 < func_567(4))
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
					sParam4 = func_1023(iParam3);
				}
				if (is_string_null_or_empty(sParam4))
				{
					func_702(_create_var_string(2, "PLAYER_HONOR_CHANGE_NEG"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_BAD"), 1, 859817522, "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_702(_create_var_string(2, "PLAYER_HONOR_CHANGE_NEG_EVENT"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_BAD"), 1, 859817522, "Honor_Display_Sounds", sVar7, 0, 1);
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

void func_569(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	Global_1347477->f_155[iParam0] = iParam1;
	Global_1347477->f_155[iParam0]->f_2 = iParam2;
	Global_1347477->f_155[iParam0]->f_3 = iParam3;
	Global_1347477->f_155[iParam0]->f_4 = iParam4;
	Global_1347477->f_155[iParam0]->f_5 = bParam5;
	Global_1347477->f_155[iParam0]->f_1 = get_game_timer() + 500;
}

int func_570(int iParam0)
{
	return shift_right(iParam0, 15) & 16383;
}

int func_571(int iParam0)
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

bool func_572(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _item_database_is_key_valid(iParam0, iParam1);
}

bool func_573(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (func_20() == -1)
	{
		if (func_1024(iParam0) && func_1025(iParam0))
		{
			func_1026(iParam0, iParam1, 1, &bParam2, iParam3);
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

bool func_574(int iParam0, int iParam1, int iParam2)
{
	*iParam1 = iParam2;
	func_1027(iParam0, iParam1);
	Var0 = { func_683(iParam0, 0, 1) };
	iVar5 = func_1028(iParam0, &Var0, 0, 0);
	iVar6 = func_1029(iParam0, 0);
	if ((iVar5 > 1 && !func_129()) && (iVar6 + iParam2) >= iVar5)
	{
		if (func_592(iParam0, -2051813666))
		{
			func_328(583, 1);
		}
		else
		{
			func_328(582, 0);
		}
	}
	if (func_1030(iParam0, &Var0, *iParam1, 0, 0))
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

void func_575(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return;
	}
	switch (func_653(iParam0, -949239683))
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

int func_576(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_572(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_591(iParam0);
	if (iVar0 == 307971639 || (bParam1 && iVar0 == -427144552))
	{
		iVar1 = func_1031(iParam0, 1);
		if (iVar1 != 0)
		{
			return get_ped_ammo_by_type(Global_35, iVar1);
		}
	}
	else if (iVar0 == -427144552)
	{
		return func_1032(iParam0, 0);
	}
	iVar2 = _0xe787f05dfc977bde(func_958(bParam2), iParam0, 0);
	return iVar2;
}

bool func_577(int iParam0)
{
	if (func_20() != -1)
	{
		return false;
	}
	return func_578(iParam0) != 0;
}

int func_578(int iParam0)
{
	iVar1 = 0;
	while (iVar1 < func_1033())
	{
		iVar0 = _0x126cbebba46693cf(iVar1, -2076669067, 0);
		if (iParam0 == func_1034(iVar0))
		{
			return iVar0;
		}
		iVar1++;
	}
	return 0;
}

int func_579(int iParam0)
{
	return _0x6052b4de6657684f(iParam0);
}

int func_580(int iParam0)
{
	iVar1 = 0;
	while (iVar1 < func_1033())
	{
		iVar0 = _0x126cbebba46693cf(iVar1, -2076669067, 0);
		if (iParam0 == func_579(iVar0))
		{
			if (func_350(func_1034(iVar0), 1, 0))
			{
				iVar2++;
			}
		}
		iVar1++;
	}
	return iVar2;
}

void func_581(int iParam0)
{
	_0x3ea62e56f386c997(iParam0, 1);
	func_1035(48);
	func_370(0, -1);
}

bool func_582(int iParam0)
{
	if (func_20() != -1)
	{
		return false;
	}
	return func_330((*Global_1347702)[iParam0]->f_15, 1);
}

int func_583(int iParam0)
{
	return _0x62cab7db62ead434(-2076669067, iParam0);
}

int func_584(int iParam0)
{
	return _0x93f2e7b5db85657b(-2076669067, iParam0);
}

bool func_585(int iParam0)
{
	if (func_20() != -1)
	{
		return false;
	}
	return func_330((*Global_1835011)[iParam0]->f_1, 1);
}

bool func_586(int iParam0)
{
	if (func_20() != -1)
	{
		return false;
	}
	if (!func_276(iParam0))
	{
		return false;
	}
	return func_193((*Global_1347702)[iParam0]->f_15);
}

int func_587()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		if (func_350(func_1036(iVar1), 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_588(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, bool bParam7)
{
	switch (iParam0)
	{
		case 38:
			sVar0 = "MISSION_RCCIG";
			sVar1 = "SP_MISSIONS_13";
			if (func_395() && (func_586(38) || func_582(38)))
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
			if (func_395() && (func_586(39) || func_582(39)))
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
			iVar9 = func_1037(iParam3, 19);
			iVar14 = -1531394072;
			iVar11 = get_hash_key("BLIP_RC_COLLECTABLE_EXOTICS");
			iVar13 = 911890963;
			break;
		case 41:
			if (func_395() && (func_586(41) || func_582(41)))
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
			if (func_395() && (func_586(49) || func_582(49)))
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
			iVar9 = func_1037(iParam3, 20);
			iVar14 = 678508515;
			iVar11 = 1986498931;
			iVar13 = -1424865411;
			break;
	}
	sVar2 = func_1038(iParam0, iVar14, iParam6, sVar2, sParam4, iVar10, iParam3);
	if (iParam6 == 8)
	{
		iVar11 = get_hash_key("TOAST_MEDAL_COLLECTABLE");
		iVar12 = get_hash_key("hud_toasts");
	}
	else
	{
		iVar12 = get_hash_key("toast_log_blips");
	}
	if (func_1039(iParam0, iVar13, iVar14))
	{
	}
	if (func_1040(iParam0, iVar13, vVar6, sVar4, sVar3))
	{
	}
	if (func_1041(iParam0, iVar13, sVar2, sVar5, sVar0, sVar1, iVar11, iVar12))
	{
	}
	if (func_1042(iParam0, iVar13, iVar14, iParam3, iParam1, iParam6, iVar9, iParam2, iVar10, bParam5))
	{
	}
	if (func_1043(iParam0, iVar13, iVar14, iParam6))
	{
	}
	if (func_1044(iParam0, iVar13, iVar14, iParam6, bParam7))
	{
	}
}

void func_589(int iParam0)
{
	Global_40.f_12004 = (Global_40.f_12004 || iParam0);
}

void func_590(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	switch (iParam0)
	{
		case 38:
			sVar0 = "COL_CC_TITLE";
			sVar3 = "COL_CC_CARD_FOUND";
			iVar7 = -2076669067;
			if (func_395() && (func_586(38) || func_582(38)))
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
			if (func_395() && (func_586(39) || func_582(39)))
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
			if (func_395() && (func_586(49) || func_582(49)))
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
		if (func_395() && (func_586(38) || func_582(38)))
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
			func_1045(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 1)
		{
			sVar3 = "COL_CC_CARD_POSTED_OBJ";
			func_1045(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 0)
		{
			func_707(_create_var_string(2, sVar0), _create_var_string(2, func_1046(func_584(iParam6))), iVar5, iVar4, -2, 0, 0, 0, 0, 1, 1);
			func_1045(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			sVar1 = "COL_CC_INTRO";
			func_1045(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == -440187297)
	{
		if (func_395() && (func_586(39) || func_582(39)))
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
			func_1045(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_1045(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == 2103522376)
	{
		if (func_395() && (func_586(49) || func_582(49)))
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
			func_1045(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_1045(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else
	{
		_uilog_set_pending_details_id(1, iVar6);
		if (iParam5 == 1)
		{
			func_1045(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_1045(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
}

int func_591(int iParam0)
{
	if (!func_572(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

bool func_592(int iParam0, int iParam1)
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

bool func_593(int iParam0, int iParam1)
{
	if (!func_572(iParam0, 0))
	{
		return false;
	}
	return _0x245d07651b1d183b(iParam0, iParam1);
}

bool func_594(int iParam0)
{
	if (!func_1047(iParam0))
	{
		return false;
	}
	return func_1048(iParam0);
}

void func_595(int iParam0)
{
	if (!func_1047(iParam0))
	{
		return;
	}
	func_1049(iParam0);
	func_874(iParam0);
}

int func_596(int iParam0)
{
	if (!func_572(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_597(int iParam0, bool bParam1)
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
	if (func_572(iVar0, 0))
	{
		if (bParam1)
		{
			if (func_1050(iVar0) || func_122(iVar0))
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

int func_598(int iParam0, bool bParam1)
{
	if (!func_572(iParam0, 0))
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

void func_599(int iParam0)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	if (!func_686(iParam0))
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

bool func_600(bool bParam0)
{
	if (func_20() == -1)
	{
		return true;
	}
	return _inventory_are_local_changes_allowed(func_958(bParam0));
}

bool func_601(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
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
		Var0 = { func_683(iParam0, 0, 1) };
		iVar5 = 1728382685;
		Var6.f_9 = -1591664384;
		iVar28 = 0;
		while (iVar28 < 4)
		{
			iVar5 = func_1051((386 + iVar28), 1);
			if (func_1052(iParam0, &Var0, iVar5, 0))
			{
				if (func_1053(iParam0, &Var6, iVar5))
				{
					Var29 = { func_1054(iParam0, Var0, iVar5, 0) };
					func_1055(iParam0, &Var29, &Var0, 1, -142743235, 1, 0);
				}
				else
				{
					iVar28++;
				}
				if (func_600(0))
				{
					_give_weapon_to_ped_2(Global_35, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
					if (!has_ped_got_weapon(Global_35, iParam0, 0, false))
					{
						return false;
					}
					func_602(_get_ammo_type_for_weapon(iParam0), iParam1, iParam6);
					func_1056(iParam0, iParam1);
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

bool func_602(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return true;
	}
	if (!func_604(iParam0))
	{
		return false;
	}
	if (!func_600(0))
	{
		return false;
	}
	_add_ammo_to_ped_by_type(Global_35, iParam0, iParam1, iParam2);
	return true;
}

bool func_603(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	iVar0 = func_598(iParam0, 0);
	if (is_weapon_valid(iVar0))
	{
		if (func_20() == -1)
		{
			func_599(iVar0);
			if (iParam1 == 1248274121)
			{
				func_1057(iVar0);
			}
		}
		if (!func_1030(iParam0, &uVar1, 1, 0, 0))
		{
			func_1026(iParam0, 1, 0, bParam2, iParam1);
			iVar6 = func_1058(iVar0);
			if (_is_weapon_sniper(iVar0))
			{
				func_601(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == -1415022764 || iVar0 == -160924582)
			{
				func_601(iVar0, 0, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == 2055893578)
			{
				func_601(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (_is_weapon_melee(iVar0))
			{
				if (iVar0 == 494733111 && !func_1017())
				{
					return false;
				}
				if (_0x2c83212a7aa51d3d(iParam0))
				{
				}
				else if (!func_1059(iVar0))
				{
					func_601(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
				}
				else
				{
					func_601(iVar0, _get_weapon_clip_size(iVar0) * 4, bParam3, bParam4, 0, 0, iParam1, 0);
				}
			}
			else if (_is_weapon_one_handed(iVar0))
			{
				iVar7 = func_1060(Global_35, 2, 0, 1);
				if ((((func_686(iVar7) && !Global_43891) && iVar7 != iVar0) && !func_594(24)) && bParam4)
				{
					_0xe9bd19f8121ade3e(Global_35, iVar7);
				}
				bVar8 = true;
				if (func_686(iVar7) && func_594(24))
				{
					if (!func_601(iVar0, iVar6, bParam3, bParam4, 3, bVar8, iParam1, 0))
					{
						return false;
					}
				}
				else if (!func_601(iVar0, iVar6, bParam3, bParam4, 0, bVar8, iParam1, 0))
				{
					return false;
				}
			}
			else if (!func_601(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0))
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
		func_328(480, 1);
	}
	return true;
}

bool func_604(int iParam0)
{
	return _is_ammo_valid(iParam0);
}

bool func_605(int iParam0, int iParam1, int iParam2)
{
	if (!func_604(iParam0))
	{
		return false;
	}
	iVar4 = _get_weapon_type_from_ammo_type(iParam0);
	iVar3 = get_ped_ammo_by_type(Global_35, iParam0);
	if (func_686(iVar4))
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
	if (func_350(611073244, 1, 0) && iParam2 == -897553835)
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
		func_640(func_1061(iParam0), func_639(iParam0), 1);
		return false;
	}
	if (iVar2 == (iVar3 + iVar0))
	{
		if (func_20() == -1)
		{
			if (func_330((*Global_1835011)[14]->f_1, 1))
			{
				func_328(416, 0);
			}
		}
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_600(0))
	{
		if (func_602(iParam0, iVar0, iParam2))
		{
			*iParam1 = iVar0;
			return true;
		}
	}
	else
	{
		return func_645(iParam0, *iParam1, iParam2);
	}
	return false;
}

void func_606(int iParam0)
{
	if ((iParam0 == -615217896 && !func_341()) || iParam0 != -615217896)
	{
		if (func_1062(Global_35, iParam0, &uVar0))
		{
			func_624(player_ped_id(), iParam0, 0, -358215195, 1, 1, 1, 0, 1, 1);
		}
	}
	switch (iParam0)
	{
		case -62615415:
			Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
			func_630();
			break;
		case -832719552:
			Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
			func_630();
			break;
		case -1941112926:
			Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
			func_630();
			break;
		case -615217896:
			Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
			func_628();
			break;
		case -121629511:
			Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.2f);
			func_626();
			break;
	}
}

void func_607(int iParam0)
{
	switch (iParam0)
	{
		case -224110471:
			Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
			func_626();
			break;
		case 1289585739:
			Global_40.f_11095.f_61 = (Global_40.f_11095.f_61 + 0.1f);
			func_627();
			break;
		case 1441506783:
			Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
			break;
		case 780305678:
			Global_40.f_11095.f_56 = (Global_40.f_11095.f_56 + 0.1f);
			break;
		case -935153695:
			Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
			func_628();
			break;
		case 655868243:
			Global_40.f_11095.f_63 = (Global_40.f_11095.f_63 + 0.1f);
			func_629();
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
			func_630();
			break;
		case -569248339:
			Global_40.f_11095.f_64 = (Global_40.f_11095.f_64 + 0.3f);
			func_1063();
			break;
		case -1196089647:
			Global_40.f_11095.f_68 = (Global_40.f_11095.f_68 + 0.1f);
			break;
		case -982895431:
			Global_40.f_11095.f_69 = (Global_40.f_11095.f_69 + 0.1f);
			func_1064();
			break;
		case -1056342069:
			Global_40.f_11095.f_70 = (Global_40.f_11095.f_70 + 0.2f);
			break;
	}
}

struct<2> func_608(int iParam0)
{
	Var0.f_1 = iParam0;
	return Var0;
}

struct<2> func_609(int iParam0, int iParam1)
{
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

void func_610(int iParam0)
{
	bVar0 = func_592(iParam0, -2017733358);
	if (func_1065() < 3)
	{
		if (bVar0)
		{
			if (func_1067(func_1066(iParam0), iParam0))
			{
				func_640(79, func_639(func_1066(iParam0)), 1);
			}
			else
			{
				func_640(78, func_639(func_1066(iParam0)), 1);
			}
		}
		else
		{
			func_640(80, func_639(func_1068(iParam0)), 1);
		}
	}
}

bool func_611()
{
	if (((((func_1069(839908568, 400) || func_1069(-1134030454, 400)) || func_1069(623353496, 400)) || func_1069(-344413337, 400)) || func_1069(-1664948962, 400)) || func_1069(1795228059, 400))
	{
		return true;
	}
	return false;
}

int func_612(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, int iParam7)
{
	iVar0 = func_718(iParam0, bParam6, iParam7);
	if (!bParam1)
	{
		func_533(iVar0, sParam4, iParam5);
	}
	iVar1 = 752097756;
	if (bParam6)
	{
		iVar1 = -897553835;
	}
	func_534(iVar0, bParam1, fParam2, iParam3, iVar1);
	return iVar0;
}

void func_613(int iParam0)
{
	switch (iParam0)
	{
		case -625427311:
			func_588(51, 0, 0, 1520110311, 0, 0, 4, 0);
			func_590(51, 0, 0, 0, 0, -1, 0);
			func_1070(8192);
			break;
		case 581047644:
			func_588(51, 0, 0, -1992824800, 0, 0, 1, 0);
			func_590(51, 0, 0, 0, 0, -1, 0);
			func_1070(524288);
			break;
		case -644199619:
			func_588(39, 0, 0, 0, 0, 0, 1, 0);
			func_590(39, 0, 0, 0, 0, -1, 0);
			func_1071(16);
			break;
		case 684296857:
			func_588(41, 0, 0, 0, 0, 0, 1, 0);
			func_590(41, 0, 0, 0, 0, -1, 0);
			func_1072(8);
			break;
		case 466137807:
			func_588(49, 0, 0, 0, 0, 0, 1, 0);
			func_590(49, 0, 0, 0, 0, -1, 0);
			func_1073(16);
			break;
		case -1087522507:
			func_588(43, 0, 0, -1791518714, func_1074(1), 0, -1, 0);
			func_1075(1);
			break;
		case -405829000:
			func_588(43, 0, 0, -2087881550, func_1074(2), 0, -1, 0);
			func_1075(2);
			break;
		case 378660860:
			func_588(43, 0, 0, 1908068621, func_1074(4), 0, -1, 0);
			func_1075(4);
			break;
		case 1566111097:
			func_588(43, 0, 0, 1611247019, func_1074(8), 0, -1, 0);
			func_1075(8);
			break;
		case 1276007140:
			func_588(43, 0, 0, 1319635688, func_1074(16), 0, -1, 0);
			func_1075(16);
			break;
	}
}

void func_614(int iParam0)
{
	if (func_1076() == 1)
	{
		if (func_582(39))
		{
			func_328(342, 0);
		}
		else
		{
			func_328(343, 0);
			func_1071(1);
		}
	}
	if (func_1076() >= 30)
	{
		func_328(344, 0);
	}
	func_588(39, 0, 0, 0, 0, 0, -1, 0);
	func_590(39, 0, 0, func_1076(), 30, 1, 0);
}

void func_615(int iParam0)
{
	if (func_1077() == 1)
	{
		if (func_582(49))
		{
			func_328(409, 0);
		}
		else
		{
			func_328(410, 0);
			func_1073(1);
		}
	}
	if (func_1077() >= 10)
	{
		func_328(411, 0);
	}
	func_588(49, 0, 0, 0, 0, 0, -1, 0);
	func_590(49, 0, 0, func_1077(), 10, 1, 0);
}

void func_616(int iParam0)
{
	switch (iParam0)
	{
		case 1369162587:
			_0x3ea62e56f386c997(-949689219, 1);
			func_328(437, 0);
			func_328(440, 0);
			func_1078(-949689219, 444160793, &sVar0, 1, 0, 0);
			func_588(51, 0, 0, -949689219, sVar0, 0, -1, 0);
			func_590(51, 0, 0, sVar0, func_1037(-949689219, 20), 1, 0);
			func_1070(1);
			func_1079(-748969569, 0, 0);
			break;
		case 1610047510:
			_0x3ea62e56f386c997(-1248968496, 1);
			func_1078(-1248968496, -1969404854, &sVar0, 1, 0, 0);
			func_588(51, 0, 0, -1248968496, sVar0, 0, -1, 0);
			func_590(51, 0, 0, sVar0, func_1037(-1248968496, 20), 1, 0);
			func_1070(8);
			break;
		case 1317879106:
			_0x3ea62e56f386c997(1706369307, 1);
			func_1078(1706369307, -832850511, &sVar0, 1, 0, 0);
			func_588(51, 0, 0, 1706369307, sVar0, 0, -1, 0);
			func_590(51, 0, 0, sVar0, func_1037(1706369307, 20), 1, 0);
			func_1070(64);
			break;
		case 1062444751:
			_0x3ea62e56f386c997(1520110311, 1);
			func_1078(1520110311, -100913452, &sVar0, 1, 0, 0);
			func_588(51, 0, 0, 1520110311, sVar0, 0, -1, 0);
			func_590(51, 0, 0, sVar0, func_1037(1520110311, 20), 1, 0);
			func_1070(512);
			break;
		case 754186760:
			_0x3ea62e56f386c997(-1992824800, 1);
			func_328(438, 0);
			func_1078(-1992824800, 905173572, &sVar0, 1, 0, 0);
			func_588(51, 0, 0, -1992824800, sVar0, 0, -1, 0);
			func_590(51, 0, 0, sVar0, func_1037(-1992824800, 20), 1, 0);
			func_1070(32768);
			break;
		default:
			func_328(439, 0);
			break;
	}
}

void func_617()
{
	if (chal_get_num_ranks_completed(-1278339625) < 2)
	{
		chal_add_goal_progress_int(-1278339625, -1316535105, 1);
	}
}

void func_618(int iParam0, int iParam1)
{
	iVar1 = 0;
	if (func_20() == -1)
	{
		if (!func_582(43))
		{
			if (iParam0 == 281887510)
			{
				func_328(348, 0);
			}
			else if (iParam0 == -164081697)
			{
				func_328(350, 0);
			}
			else if (iParam0 == -1161319399)
			{
				func_328(352, 0);
			}
			else if (iParam0 == 728781265)
			{
				func_328(400, 0);
			}
		}
		else if (func_592(iParam0, 412399755))
		{
			func_1080(-1791518714);
			if (func_1081() == 0)
			{
				func_370(0, 10);
				iVar1 = func_1082(iParam0, iParam1, 1);
				if (((iParam0 == 281887510 || iParam0 == -164081697) || iParam0 == -1161319399) || iParam0 == 728781265)
				{
					if (func_1083(iParam0) < func_1084(iParam0))
					{
						func_588(43, iParam0, iParam1, -1791518714, iVar1, 0, -1, 0);
						func_590(43, 0, 0, iVar1, 30, 1, 0);
					}
				}
			}
		}
		if (!func_582(44))
		{
			if (iParam0 == -222563712)
			{
				func_328(354, 0);
			}
			else if (iParam0 == 1794857344)
			{
				func_328(399, 0);
			}
			else if (iParam0 == 1952409553)
			{
				func_328(401, 0);
			}
		}
		else if (func_592(iParam0, 709057512))
		{
			func_1080(-2087881550);
			if (func_1081() == 1)
			{
				func_370(0, 10);
				iVar1 = func_1082(iParam0, iParam1, 2);
				if ((iParam0 == -222563712 || iParam0 == 1794857344) || iParam0 == 1952409553)
				{
					if (func_1083(iParam0) < func_1084(iParam0))
					{
						func_588(43, iParam0, iParam1, -2087881550, iVar1, 0, -1, 0);
						func_590(43, 0, 0, iVar1, 37, 1, 0);
					}
				}
			}
		}
		if (!func_582(45))
		{
			if (iParam0 == 2116770557)
			{
				func_328(359, 0);
			}
			else if (iParam0 == -651064726)
			{
				func_328(394, 0);
			}
			else if (iParam0 == -404270094)
			{
				func_328(395, 0);
			}
			else if (iParam0 == 2093126853)
			{
				func_328(398, 0);
			}
		}
		else if (func_592(iParam0, -1478961327))
		{
			func_1080(1908068621);
			if (func_1081() == 2)
			{
				func_370(0, 10);
				iVar1 = func_1082(iParam0, iParam1, 4);
				if (iParam0 == 2116770557)
				{
					if (!func_1085(_0x126cbebba46693cf(iVar0, 2114735110, 0)) >= 25)
					{
						func_1086(_0x126cbebba46693cf(iVar0, 2114735110, 0), 1);
						func_1035(48);
					}
					if (func_1083(iParam0) < func_1084(iParam0))
					{
						func_588(43, iParam0, iParam1, 1908068621, iVar1, 0, -1, 0);
						func_590(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
				else if ((iParam0 == -651064726 || iParam0 == -404270094) || iParam0 == 2093126853)
				{
					if (func_1083(iParam0) < func_1084(iParam0))
					{
						func_588(43, iParam0, iParam1, 1908068621, iVar1, 0, -1, 0);
						func_590(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
			}
		}
		if (!func_582(46))
		{
			if (iParam0 == 2085530337)
			{
				func_328(356, 0);
			}
			else if (iParam0 == -150591160)
			{
				func_328(402, 0);
			}
			else if (iParam0 == -323969289)
			{
				func_328(404, 0);
			}
			else if (iParam0 == 1504361882)
			{
				func_328(406, 0);
			}
		}
		else if (func_592(iParam0, -1238404098))
		{
			func_1080(1611247019);
			if (func_1081() == 3)
			{
				func_370(0, 10);
				iVar1 = func_1082(iParam0, iParam1, 8);
				if (((iParam0 == 2085530337 || iParam0 == -150591160) || iParam0 == -323969289) || iParam0 == 1504361882)
				{
					if (func_1083(iParam0) < func_1084(iParam0))
					{
						func_588(43, iParam0, iParam1, 1611247019, iVar1, 0, -1, 0);
						func_590(43, 0, 0, iVar1, 50, 1, 0);
					}
				}
			}
		}
		if (!func_582(47))
		{
			if (iParam0 == -1521783510)
			{
				func_328(396, 0);
			}
			else if (iParam0 == 1714875242)
			{
				func_328(397, 0);
			}
			else if (iParam0 == 927763737)
			{
				func_328(405, 0);
			}
			else if (iParam0 == 1019229063)
			{
				func_328(403, 0);
			}
		}
		else if (func_592(iParam0, 1160548794))
		{
			func_1080(1319635688);
			if (func_1081() == 4)
			{
				func_370(0, 10);
				iVar1 = func_1082(iParam0, iParam1, 16);
				if (((iParam0 == -1521783510 || iParam0 == 1714875242) || iParam0 == 927763737) || iParam0 == 1019229063)
				{
					if (func_1083(iParam0) < func_1084(iParam0))
					{
						func_588(43, iParam0, iParam1, 1319635688, iVar1, 0, -1, 0);
						func_590(43, 0, 0, iVar1, 25, 1, 0);
					}
				}
			}
		}
	}
}

void func_619(int iParam0)
{
	if (iParam0 == 2116770557)
	{
		if (!func_1085(_0x126cbebba46693cf(iVar0, 2114735110, 0)) >= 25)
		{
			func_1086(_0x126cbebba46693cf(iVar0, 2114735110, 0), 1);
			func_1035(48);
		}
	}
}

void func_620(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar0 = _0x126cbebba46693cf(iVar1, 678508515, -1160144609);
		if (func_350(func_1087(iVar0, 10), 1, 0))
		{
			if (bParam2)
			{
				func_1088(iParam0, iVar0, sVar2, iParam1, bParam2);
			}
			else
			{
				func_1089(iParam0, iVar0, bParam3);
			}
		}
		iVar1++;
	}
}

void func_621(int iParam0, int iParam1, int iParam2)
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
				func_612(0, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, iVar0);
				return;
			}
		}
	}
	switch (iParam0)
	{
		case 489075255:
			func_612(-949580860, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1394529493:
			func_612(-1171997683, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1262623627:
			func_612(-2140931002, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1124867377:
			func_612(-1116228267, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1790920086:
			func_612(2112896861, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -2001202686:
			func_612(-1915150712, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1111063991:
			func_612(994220262, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1576210101:
			func_612(-1388440107, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 675090918:
			func_612(-1531790128, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 355838765:
			func_612(1351791770, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -343824903:
			func_612(-161493966, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1142684684:
			func_612(668131102, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1243851340:
			if (!func_1090())
			{
				func_612(1330954593, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			}
			break;
		case -525490740:
			func_612(817681514, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1736635264:
			func_612(1404311868, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1302860970:
			func_612(-175152067, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -1027115192:
			func_612(-526915387, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -1064332555:
			func_612(101362741, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -1954478446:
			func_612(1458818027, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -518592739:
			func_612(-1957208512, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -2010073778:
			func_612(2066857461, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -700133011:
			func_612(803940201, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -1415414735:
			func_612(-1717765429, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case 2045548742:
			func_612(1379920914, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case 830381058:
			func_612(447209691, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
	}
}

void func_622(int iParam0)
{
	if (func_582(41))
	{
		func_328(363, 0);
	}
	else
	{
		func_328(362, 0);
	}
	switch (iParam0)
	{
		case 323124696:
			func_1091(-1865241121);
			func_1092(-642026005);
			func_1093(-642026005);
			func_370(0, 10);
			break;
		case -2108314374:
			func_1091(2117142684);
			func_1092(-940584364);
			func_1093(-940584364);
			func_370(0, 10);
			break;
		case -1193798153:
			func_1091(-1409326024);
			func_1092(1972645282);
			func_1093(1972645282);
			func_370(0, 10);
			break;
		case -787702678:
			func_1091(-641744968);
			func_1092(1667205433);
			func_1093(1667205433);
			func_370(0, 10);
			break;
		case -804542901:
			func_1091(-946988203);
			func_1092(1362715885);
			func_1093(1362715885);
			func_370(0, 10);
			break;
		case -1696275132:
			func_1091(-646136018);
			func_1092(1053540370);
			func_1093(1053540370);
			func_370(0, 10);
			break;
		case -161595323:
			func_1091(-955835837);
			func_1092(-1100103852);
			func_1093(-1100103852);
			func_370(0, 10);
			break;
		case -1114363619:
			func_1091(-179276075);
			func_1092(-1409869209);
			func_1093(-1409869209);
			func_370(0, 10);
			break;
		case -368407134:
			func_1091(-492711560);
			func_1092(-1760235357);
			func_1093(-1760235357);
			func_370(0, 10);
			break;
		case 1997759228:
			func_1091(1764383959);
			func_1092(-138366827);
			func_1093(-138366827);
			func_370(0, 10);
			break;
		case 1265573293:
			func_1091(317501533);
			func_1092(-1261163843);
			func_1093(-1261163843);
			func_370(0, 10);
			break;
		case -1030441283:
			func_1091(817753087);
			func_1092(-963523016);
			func_1093(-963523016);
			func_370(0, 10);
			break;
		case -1490884871:
			func_1091(576606016);
			func_1092(560825326);
			func_1093(560825326);
			func_370(0, 10);
			break;
		case -395458616:
			func_1091(814934957);
			func_1092(858269539);
			func_1093(858269539);
			break;
	}
}

void func_623(int iParam0, int iParam1)
{
	func_1094(iParam0, iParam1, &uVar0);
}

int func_624(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	if (iParam3 == -358215195)
	{
		Var0 = { func_683(iParam1, 1, 0) };
		iParam3 = func_684(Var0.f_4);
		if (iParam3 == -358215195)
		{
			return 0;
		}
	}
	if (!func_1095(iParam1, iParam2, func_671(iParam3, 1), bParam4, bParam9))
	{
		return 0;
	}
	func_1096(1, (func_20() == -1 && bParam5), 1);
	switch (iParam3)
	{
		case 1145151482:
		case 1742327865:
			if (bParam8 && iParam1 != &Global_1946804->f_57[func_671(iParam3, 1)])
			{
				func_682(31, 0, 0, 0, 0);
			}
			break;
		case 1108822547:
			if (func_1097(32768) && iParam1 != &Global_1946804->f_57[func_671(iParam3, 1)])
			{
				func_1098();
				func_682(22, iParam3, 256, 0, 0);
			}
			clear_ped_damage_decal_by_zone(iParam0, 2, "ALL");
			clear_ped_blood_damage_by_zone(iParam0, 2);
			break;
	}
	if (!bParam6)
	{
		if (bParam7)
		{
			func_682(22, iParam3, 0, 0, 0);
		}
		return 1;
	}
	iVar5 = func_1099(iParam3);
	if (is_ped_a_player(iParam0))
	{
		func_682(19, 0, iVar5, 0, 0);
		if ((iParam3 == 1742327865 || iParam3 == 1108822547) || iParam3 == 1145151482)
		{
			func_1100(0);
			func_1101(36, 0, 0);
		}
	}
	else
	{
		iVar5 |= 1;
		func_682(19, 0, iVar5, iParam0, 0);
	}
	return 1;
}

bool func_625(int iParam0, bool bParam1)
{
	Var3.f_9 = -1591664384;
	bVar17 = false;
	*iParam0 = 0;
	iVar18 = func_1060(get_player_ped(get_player_index()), 2, 1, 0);
	iVar19 = func_1060(get_player_ped(get_player_index()), 3, 1, 0);
	if (func_1102("ALL WEAPONS", &iVar0, &iVar1, -1591664384, 0))
	{
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (func_1103(&Var3, iVar2, iVar0, iVar1))
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
						func_1104(iVar0);
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

void func_626()
{
	_0x11a7ff918ef6bc66(player_id(), (1f - Global_40.f_11095.f_60));
}

void func_627()
{
	fVar0 = Global_40.f_11095.f_62;
	fVar1 = (Global_40.f_11095.f_62 + Global_40.f_11095.f_61);
	_0x497a6539bb0e8787(player_id(), (1f - fVar0), (1f - fVar1));
}

void func_628()
{
	_0xe0d6c2a146a5c993(player_id(), (1f / (1f + Global_40.f_11095.f_58)));
}

void func_629()
{
	_0xb427911ea6dffef3(player_id(), (1f - Global_40.f_11095.f_63));
}

void func_630()
{
	func_1105();
	func_1106();
	func_1107();
}

void func_631(int iParam0, int iParam1, bool bParam2)
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

void func_632(int iParam0, bool bParam1)
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
	func_1045(_create_var_string(2, sVar1), _create_var_string(2, sVar2), get_hash_key("toast_log_blips"), get_hash_key("BLIP_RC_TREASURE_HUNTER"), 1433015236, _create_var_string(2, sVar3), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
}

void func_633(int iParam0)
{
	Global_40.f_12004.f_7 = (Global_40.f_12004.f_7 || iParam0);
}

void func_634(int iParam0)
{
	Global_40.f_12004.f_8 = (Global_40.f_12004.f_8 || iParam0);
}

void func_635(int iParam0)
{
	Global_40.f_12004.f_9 = (Global_40.f_12004.f_9 || iParam0);
}

void func_636(int iParam0)
{
	Global_40.f_12004.f_10 = (Global_40.f_12004.f_10 || iParam0);
}

void func_637(int iParam0)
{
	Global_40.f_12004.f_11 = (Global_40.f_12004.f_11 || iParam0);
}

void func_638(int iParam0)
{
	Global_40.f_12004.f_12 = (Global_40.f_12004.f_12 || iParam0);
}

int func_639(int iParam0)
{
	if (!func_572(iParam0, 0))
	{
		return 0;
	}
	return iParam0;
}

void func_640(int iParam0, int iParam1, bool bParam2)
{
	func_678(iParam0, &iVar0, &iVar1);
	if (!func_679(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_1108(iParam0, 1024))
	{
		return;
	}
	func_680(iVar0, iVar1);
	Global_1905944->f_22[iParam0]->f_3[0] = iParam1;
	Global_1905944->f_22[iParam0]->f_3[0]->f_1 = 2;
}

void func_641(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	func_678(iParam0, &iVar0, &iVar1);
	if (!func_679(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_1108(iParam0, 1024))
	{
		return;
	}
	func_680(iVar0, iVar1);
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

int func_642()
{
	iVar0 = _0x5461c821d00fe15a(-2076669067, 0);
	if (iVar0 == func_1033())
	{
		return func_643();
	}
	iVar4 = (func_1033() - iVar0);
	iVar5 = get_random_int_in_range(0, iVar4);
	iVar2 = 0;
	while (iVar2 < func_1033())
	{
		iVar1 = _0x126cbebba46693cf(iVar2, -2076669067, 0);
		if (!func_1109(iVar1))
		{
			if (iVar5 == iVar3)
			{
				return func_1034(iVar1);
			}
			iVar3++;
		}
		iVar2++;
	}
	return 0;
}

int func_643()
{
	iVar0 = get_random_int_in_range(0, func_1033());
	return func_1034(_0x126cbebba46693cf(iVar0, -2076669067, 0));
}

void func_644(int iParam0)
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

bool func_645(int iParam0, int iParam1, int iParam2)
{
	if (!func_572(iParam0, 0))
	{
		return false;
	}
	if (iParam1 < 1)
	{
		return false;
	}
	Var0 = { func_683(iParam0, 0, 1) };
	Var5 = { func_1054(iParam0, Var0, Var0.f_4, 0) };
	return func_1110(iParam0, &Var5, &Var0, iParam1, iParam2, 0);
}

void func_646(int iParam0)
{
	if (func_20() != -1)
	{
		return;
	}
	switch (func_596(iParam0))
	{
		case 81053684:
			if (iParam0 == -1623728698 && func_1111(81053684, 0) <= 0)
			{
				func_682(32, iParam0, 0, 0, 0);
			}
			break;
		case -2061583405:
			if (iParam0 == -1535516064 || iParam0 == -763730846)
			{
				func_682(32, iParam0, 0, 0, 0);
			}
			break;
		case -999503751:
			iVar0 = func_1112(iParam0);
			if (func_1113(iVar0))
			{
				func_1114(iVar0, (iVar0 >= 0 && iVar0 <= 5), 1);
			}
			else
			{
				func_682(30, iParam0, 0, 0, 0);
			}
			if (func_673() == -2125499975 || func_673() == -449205311)
			{
				switch (iParam0)
				{
					case 624063935:
					case 1160643979:
					case 1661121390:
						func_682(32, iParam0, 0, 0, 0);
						break;
				}
			}
			else if (func_673() == 1160113249)
			{
				switch (iParam0)
				{
					case -361635024:
						func_682(32, iParam0, 0, 0, 0);
						break;
				}
			}
			break;
		case -525676072:
			if (!func_1115(-525676072, 0))
			{
				if (func_1116(-525676072, &iVar1))
				{
					func_682(33, iVar1, 0, 0, 0);
				}
			}
			func_682(32, iParam0, 0, 0, 0);
			break;
	}
	if ((iParam0 == 899611344 || iParam0 == -1515874150) || iParam0 == -1185145312)
	{
		if (!func_1117(99217379))
		{
			func_624(Global_35, iParam0, 0, 99217379, 1, 1, 1, 0, 1, 1);
		}
		func_595(24);
		if (func_625(&iVar2, 0))
		{
			func_601(iVar2, 0, 0, 1, 3, 0, 752097756, 0);
		}
	}
}

void func_647(int iParam0)
{
	if (func_592(iParam0, 943695443))
	{
		func_1118(0, iParam0);
	}
	else if (func_592(iParam0, -2096528786))
	{
		func_1118(1, iParam0);
	}
	else if (func_592(iParam0, -1094167013))
	{
		func_1118(2, iParam0);
	}
	else if (func_592(iParam0, 1936654645))
	{
		func_1118(3, iParam0);
	}
	else if (func_592(iParam0, 1306489306))
	{
		func_1118(4, iParam0);
	}
	else if (func_592(iParam0, 435762317))
	{
		func_1118(5, iParam0);
	}
	else if (func_592(iParam0, 1259363210))
	{
		func_1118(6, iParam0);
	}
	else if (func_592(iParam0, 881398259))
	{
		func_1118(7, iParam0);
	}
	else if (func_592(iParam0, -541549214))
	{
		func_1118(8, iParam0);
	}
	else if (func_592(iParam0, 130796156))
	{
		func_1118(-1, iParam0);
	}
}

int func_648(int iParam0, int iParam1)
{
	Var4.f_1 = 10;
	func_1119(&Var4, 1356624740);
	return func_1120(iParam0, &Var4, &uVar0, iParam1);
}

struct<2> func_649(int iParam0)
{
	if (!func_572(iParam0, 0))
	{
		return Var0;
	}
	if (func_592(iParam0, -305066475))
	{
		if (func_20() == -1)
		{
			if (func_592(iParam0, -537818634))
			{
				return func_94(189951448);
			}
			else
			{
				return func_94(1176172851);
			}
		}
	}
	else if (func_592(iParam0, -537818634))
	{
		return func_94(-963660207);
	}
	if (func_592(iParam0, 2084895747))
	{
		return func_94(1694039471);
	}
	return Var2;
}

void func_650(int iParam0)
{
	switch (iParam0)
	{
		case 236757114:
			if (func_20() == -1)
			{
				if (func_330((*Global_1835011)[4]->f_1, 1))
				{
					func_328(109, 1);
				}
			}
			break;
	}
}

void func_651(int iParam0, char* sParam1)
{
	sVar0 = func_1122(func_1121(0));
	func_702(_create_var_string(38, "ITEM_CAUGHT_PUMP", sParam1, sVar0), "inventory_items", func_1123(iParam0), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

void func_652(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (iParam0 == 1662813436)
	{
		return;
	}
	if (!func_572(iParam0, 0))
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
	if (!func_1124())
	{
		func_1125(iParam0, iParam1, bParam2, bParam4);
		return;
	}
	bVar0 = false;
	iVar1 = absi(iParam1);
	StringCopy(&cVar2, func_1126(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
	if (iParam1 > 0)
	{
	}
	else
	{
		if (bParam3 || bParam4)
		{
			StringCopy(&cVar2, func_1126(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
		}
		else if (bParam2 && func_593(iParam0, 2097152))
		{
			StringCopy(&cVar2, "ITEM_READ_PUMP_MULT", 32);
		}
		bVar0 = true;
	}
	iVar6 = func_591(iParam0);
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
	else if (!func_1127(iParam0, &Var7, iVar11, iVar10, 0, -401018458))
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
	sVar15 = func_1128(_create_var_string(10, &cVar2, _create_var_string(0, func_639(iParam0)), iVar1), iVar12);
	if (((((iParam1 == 1 || func_592(iParam0, 1443104131)) || iParam0 == -885810591) || iParam0 == -1424823393) || iParam0 == 1463786584) || iParam0 == 1358243310)
	{
		sVar15 = _create_var_string(0, func_639(iParam0));
	}
	func_702(sVar15, Var7.f_1, get_hash_key(Var7), iVar14, iVar12, "Transaction_Feed_Sounds", sVar13, 0, 1);
}

int func_653(int iParam0, int iParam1)
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

struct<10> func_654(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
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

bool func_655(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, int iParam10, int iParam11, int iParam12)
{
	*iParam10 = _item_database_create_item_collection(&uParam0, iParam11, iParam12);
	if (*iParam10 >= 0)
	{
		return true;
	}
	return false;
}

int func_656(int iParam0, int iParam1)
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

bool func_657(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!func_572(iParam0, 0))
	{
		return false;
	}
	if (iParam1 != 0 && !func_1129(iParam0, iParam1, 1))
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
				if (Var2.f_2 == 1644203656 && func_1129(iParam0, Var2, 1))
				{
					if (func_1130(iParam0, Var2))
					{
						bVar0 = true;
					}
				}
			}
			iVar49++;
		}
	}
	else if (func_1130(iParam0, iParam1))
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		if (!bParam2)
		{
			func_328(206, 0);
		}
	}
	if (bParam3)
	{
		if (!func_199(0, 0, 1))
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

int func_658(int iParam0)
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

void func_659(int iParam0)
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
		func_328(iVar0, 0);
	}
}

void func_660()
{
	bVar0 = is_dlc_present(33819255);
	if (!bVar0)
	{
		if (_unlock_is_unlocked(-121456797))
		{
			_0xe824ce7d13fcb300(2116153146, 0);
			func_1131(0);
			_unlock_set_unlocked(-121456797, false);
			func_1132();
		}
		return;
	}
	if (!func_330((*Global_1835011)[4]->f_1, 1))
	{
		return;
	}
	func_1133();
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
	func_1131(1);
}

void func_661()
{
	if (!func_330((*Global_1835011)[4]->f_1, 1))
	{
		return;
	}
	if (_unlock_is_unlocked(304788622))
	{
		return;
	}
	func_321(1351927599, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
	_unlock_set_unlocked(304788622, true);
	if (_unlock_is_unlocked(-1968398307))
	{
		return;
	}
	_unlock_set_unlocked(-1968398307, true);
}

void func_662()
{
	bVar0 = is_dlc_present(-751383868);
	if (!bVar0)
	{
		if (_unlock_is_unlocked(1244328330))
		{
			func_1134(0);
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
	if (!func_330((*Global_1835011)[4]->f_1, 1))
	{
		return;
	}
	_unlock_set_unlocked(1244328330, true);
	func_1134(1);
}

void func_663()
{
	bVar0 = is_dlc_present(-1499823613);
	if (!bVar0)
	{
		if (_unlock_is_unlocked(398807247))
		{
			func_1135(15000, 0, 0, 0, 1);
			func_1134(0);
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
	if (!func_330((*Global_1835011)[4]->f_1, 1))
	{
		return;
	}
	_unlock_set_unlocked(398807247, true);
	func_286(15000, 0, 1065353216, 1, 0, 0, 1, 752097756);
	func_1134(1);
}

void func_664()
{
	bVar0 = is_dlc_present(-679138445);
	if (bVar0)
	{
		if (_0xf83d3dda4d3c8169(-1491419385) > 0)
		{
			if ((!func_350(1191437462, 1, 0) && !func_193((*Global_1835011)[23]->f_1)) && !Global_43891)
			{
				func_321(1191437462, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			}
			if (!func_1136(1))
			{
				func_636(1);
			}
		}
		if (_0xf83d3dda4d3c8169(1809565830) > 0)
		{
			if ((!func_350(1119149048, 1, 0) && !func_193((*Global_1835011)[23]->f_1)) && !Global_43891)
			{
				func_321(1119149048, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			}
			if (!func_1136(2))
			{
				func_636(2);
			}
		}
		if (_0xf83d3dda4d3c8169(2056119786) > 0 && !func_1136(4))
		{
			func_636(4);
		}
		if (func_1136(0))
		{
			func_1137(0);
		}
	}
	else
	{
		if (_0xf83d3dda4d3c8169(-1491419385) > 0)
		{
			if (func_350(1191437462, 1, 0))
			{
				func_667(1191437462, 1, 1, -142743235, 0);
			}
		}
		if (_0xf83d3dda4d3c8169(1809565830) > 0)
		{
			if (func_350(1119149048, 1, 0))
			{
				func_667(1119149048, 1, 1, -142743235, 0);
			}
		}
		if (func_1136(1))
		{
			func_1137(1);
		}
		if (func_1136(2))
		{
			func_1137(2);
		}
		if (func_1136(4))
		{
			func_1137(4);
		}
		if (!func_1136(0))
		{
			func_636(0);
		}
	}
}

void func_665()
{
	bVar0 = _unlock_is_unlocked(240039223);
	if (!bVar0)
	{
		return;
	}
	if (!func_330((*Global_1835011)[4]->f_1, 1))
	{
		return;
	}
	if (_unlock_is_unlocked(-236259196))
	{
		return;
	}
	Var1 = { func_1138() };
	if (!_0xb881ca836cc4b6d4(&Var1))
	{
		func_599(127400949);
		if (func_601(127400949, 0, 0, 0, 0, 0, 752097756, 0))
		{
			Var1 = { func_1138() };
		}
	}
	if (_0xb881ca836cc4b6d4(&Var1))
	{
		func_1139(-2055673461, Var1, 1423542233);
		func_1139(-202131179, Var1, -1264898804);
		func_1139(2013836545, Var1, 1592019450);
		func_1139(1497476650, Var1, 1117400455);
		func_1139(1063571467, Var1, 1150213537);
		func_1139(2107224237, Var1, 1598825281);
		func_1139(1747981656, Var1, -712527121);
		func_1139(-1371140647, Var1, 454332195);
		func_1139(-19142973, Var1, 256105670);
		func_1139(-2074737817, Var1, -1328061889);
		func_1139(-1114256243, Var1, -782241404);
		func_1139(-1653277288, Var1, 1669853467);
		func_1139(1869398132, Var1, -1559225678);
		func_1139(459868358, Var1, -266425508);
		if (!_0x3ab6c7b0bb0df4b1(Global_35, -1) && !func_29())
		{
			get_current_ped_weapon(Global_35, &iVar15, false, 2, false);
			get_current_ped_weapon(Global_35, &iVar16, false, 0, false);
			if (func_686(iVar16))
			{
				if (iVar16 != 127400949)
				{
					if (_is_weapon_one_handed(iVar16))
					{
						if (func_594(24))
						{
							set_current_ped_weapon(Global_35, iVar16, true, 3, false, false);
						}
						set_current_ped_weapon(Global_35, 127400949, true, 0, false, false);
					}
					else if (_is_weapon_two_handed(iVar16))
					{
						if ((func_594(24) && func_686(iVar15)) && iVar15 != 127400949)
						{
							set_current_ped_weapon(Global_35, iVar15, true, 3, false, false);
						}
						set_current_ped_weapon(Global_35, 127400949, true, 2, false, false);
					}
				}
			}
			else if (!func_686(iVar15))
			{
				set_current_ped_weapon(Global_35, 127400949, true, 2, false, false);
			}
			else if (iVar15 != 127400949)
			{
				if (func_594(24))
				{
					set_current_ped_weapon(Global_35, iVar15, true, 3, false, false);
				}
				set_current_ped_weapon(Global_35, 127400949, true, 2, false, false);
			}
		}
		_unlock_set_unlocked(-236259196, true);
	}
}

void func_666()
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

int func_667(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	if (!func_572(iParam0, 0))
	{
		return 0;
	}
	bVar0 = iParam3 == 562618531;
	bVar1 = iParam3 == 1992602754;
	bVar2 = iParam3 == -1387038764;
	iVar3 = func_1031(iParam0, 1);
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
			func_652(iParam0, -iParam1, bVar0, bVar1, bVar2);
		}
		return 0;
	}
	if (!func_350(iParam0, 1, bParam4))
	{
		return 0;
	}
	Var5 = { func_649(iParam0) };
	if (_stat_id_is_valid(&Var5))
	{
		if ((func_576(iParam0, 0, 0) - iParam1) >= 0)
		{
			_0xbd861ae8a5181ed7(&Var5, iParam1);
		}
		else if ((func_576(iParam0, 0, 0) - iParam1) < 0)
		{
			func_667(iParam0, func_576(iParam0, 0, 0), bParam2, iParam3, bParam4);
			return 0;
		}
	}
	if (func_591(iParam0) == -427144552)
	{
		if (!func_1140(iParam0, iParam1, 0, iParam3))
		{
			return 0;
		}
	}
	else if (!func_1141(iParam0, iParam1, iParam3, bParam2, bParam4))
	{
		return 0;
	}
	if (iParam0 == -569063887)
	{
		Global_1935496->f_20 = 0;
	}
	if (!func_600(0))
	{
		bParam2 = true;
	}
	if (!bParam2 && iParam0 != 1309979101)
	{
		func_652(iParam0, -iParam1, bVar0, bVar1, bVar2);
	}
	func_1142(iParam0, iParam1);
	return 1;
}

bool func_668(int iParam0)
{
	switch (func_596(iParam0))
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

void func_669(int iParam0, bool bParam1, bool bParam2)
{
	switch (func_596(iParam0))
	{
		case -2061583405:
			bVar0 = func_1143(iParam0, &(Global_1946804->f_2657.f_21));
			break;
		case 81053684:
			bVar0 = func_1143(iParam0, &(Global_1946804->f_2657.f_23));
			break;
		case -999503751:
			bVar0 = func_1143(iParam0, &(Global_1946804->f_2657.f_20));
			break;
		case -525676072:
			bVar0 = func_1143(iParam0, &(Global_1946804->f_2657.f_22));
			break;
		case -1719060085:
			bVar0 = func_1143(iParam0, &(Global_1946804->f_2657.f_24));
			break;
		case -413129408:
			bVar0 = func_1143(iParam0, &(Global_1946804->f_2657.f_25));
			break;
	}
	if (!bVar0)
	{
		return;
	}
	if (bParam2)
	{
		func_1144();
	}
	if (bParam1)
	{
		func_1145(0, 0);
	}
}

int func_670(int iParam0)
{
	Var0 = { func_683(iParam0, 1, 0) };
	return func_684(Var0.f_4);
}

int func_671(int iParam0, int iParam1)
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

void func_672(int iParam0)
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
		iVar0 = func_671(iVar1, 1);
		if (iVar0 < 0 || iVar0 >= 39)
		{
		}
		else
		{
			func_1146(Global_1946804->f_1378.f_1[iVar0], 2, 6);
		}
	}
}

int func_673()
{
	return Global_1946804->f_1;
}

bool func_674(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)
{
	Var4 = func_1147(iParam6);
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
		func_1149(uParam0, func_1148(iVar0), 1);
	}
	while (_0xed4413cee1bf142c(&Var4))
	{
		if (!_0x44b3a36933ac009c(&iVar0, &Var4, 1409451727))
		{
		}
		else
		{
			iVar3 = iVar0;
			iVar1 = func_671(iVar3, 1);
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
							if (func_1150(iVar3) && func_1151(&(uParam0->f_1[iVar1]), iVar3, &iVar0))
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
							func_1152(uParam0, &(uParam0->f_1[&Global_1946804->f_2612[iVar1]]), &(Global_1946804->f_2612[iVar1]), 0, 0);
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

Vector3 func_675(int iParam0, int iParam1)
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

int func_676(int iParam0, int iParam1)
{
	vVar0 = { func_675(iParam0, iParam1) };
	return vVar0.x;
}

void func_677(var uParam0, int iParam1, int iParam2)
{
	*Global_26796.f_26[iParam2]->f_1.f_1[iParam1] = { *uParam0 };
	Global_26796.f_26[iParam2]->f_1.f_1[iParam1]->f_2 = (Global_26796.f_26[iParam2]->f_1.f_1[iParam1]->f_2 - Global_26796.f_26[iParam2]->f_1.f_1[iParam1]->f_2 & 1);
}

void func_678(int iParam0, int iParam1, int iParam2)
{
	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

bool func_679(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return false;
	}
	if (func_1153(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_1154(iParam0))
	{
		return false;
	}
	if (func_1155(iParam0))
	{
		return false;
	}
	if ((Global_1898164->f_163 && !func_1108(iParam0, 1)) || func_82(32768))
	{
		if (!func_1108(iParam0, 262144) || !Global_1905944->f_5696)
		{
			return false;
		}
	}
	if (!func_1156())
	{
		return false;
	}
	return true;
}

void func_680(int iParam0, int iParam1)
{
	uVar0 = Global_1905944[iParam0];
	set_bit(&uVar0, iParam1);
	(*Global_1905944)[iParam0] = uVar0;
}

void func_681(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 = (uParam0->f_2 - (uParam0->f_2 && iParam1));
}

void func_682(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (bParam4)
	{
		func_1157(16384);
	}
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	Var0.f_2 = iParam2;
	Var0.f_3 = iParam3;
	func_1158(Var0);
}

struct<5> func_683(int iParam0, bool bParam1, bool bParam2)
{
	Var0 = { func_1159(bParam1) };
	Var0.f_4 = 1084182731;
	switch (func_591(iParam0))
	{
		case -1037537535:
			if (!_inventory_fits_slot_id(iParam0, 1034665895))
			{
				Var0 = { func_1054(889965687, Var0, 1034665895, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, 889965687);
			}
			else
			{
				Var0.f_4 = 1034665895;
			}
			break;
		case -427144552:
			Var0 = { func_1160(bParam1) };
			if (bParam2 && func_1161(iParam0, 1))
			{
				Var5.f_9 = -1591664384;
				if (!func_1052(iParam0, &Var0, 1728382685, 0))
				{
					Var0.f_4 = 1728382685;
				}
				else if (!func_1052(iParam0, &Var0, -649335959, 0))
				{
					Var0.f_4 = -649335959;
				}
				else if (func_1053(iParam0, &Var5, 1728382685))
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
			Var0 = { func_1162(bParam1) };
			switch (func_596(iParam0))
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
			if (func_1163(iParam0, -1823706425))
			{
				Var0 = { func_1054(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, -1838434463);
			}
			else if (func_1163(iParam0, -1483207246))
			{
				Var0 = { func_1054(889965687, Var0, 1034665895, bParam1) };
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
				if (!func_1164(Var0, &Var27, bParam1, 0))
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

int func_684(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (Global_1946804->f_57[iVar0]->f_8 == iParam0)
		{
			return func_1165(iVar0, 1);
		}
		iVar0++;
	}
	return -358215195;
}

void func_685(int iParam0)
{
	func_1146(Global_1946804->f_1497.f_1[func_671(iParam0, 1)], 2, 6);
	func_1146(Global_1946804->f_1378.f_1[func_671(iParam0, 1)], 2, 6);
}

bool func_686(int iParam0)
{
	return (is_weapon_valid(iParam0) && iParam0 != -1569615261);
}

bool func_687(int iParam0)
{
	return iParam0 != 0;
}

int func_688(int iParam0)
{
	iVar0 = -1;
	if (!func_687(iParam0))
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

bool func_689(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

int func_690(int iParam0)
{
	return (shift_right(iParam0, 26) & 31 * func_1166(is_bit_set(iParam0, 31), -1, 1)) + 1898;
}

int func_691(int iParam0)
{
	return shift_right(iParam0, 22) & 15;
}

int func_692(int iParam0)
{
	return shift_right(iParam0, 17) & 31;
}

int func_693(int iParam0)
{
	return shift_right(iParam0, 12) & 31;
}

int func_694(int iParam0)
{
	return shift_right(iParam0, 6) & 63;
}

int func_695(int iParam0)
{
	return shift_right(iParam0, 0) & 63;
}

int func_696(int iParam0, int iParam1)
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

void func_697(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_1167(iParam0, iParam6);
	func_1168(iParam0, iParam5);
	func_1169(iParam0, iParam4);
	func_1170(iParam0, iParam3);
	func_1171(iParam0, iParam2);
	func_1172(iParam0, iParam1);
}

bool func_698(int iParam0)
{
	if (iParam0 == -15)
	{
		return false;
	}
	iVar0 = func_695(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return false;
	}
	iVar1 = func_694(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return false;
	}
	iVar2 = func_693(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return false;
	}
	iVar3 = func_690(iParam0);
	if ((iVar3 <= 0 || iVar3 > 1930) || iVar3 < 1866)
	{
		return false;
	}
	iVar4 = func_691(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return false;
	}
	iVar5 = func_692(iParam0);
	if (iVar5 < 1 || iVar5 > func_696(iVar4, iVar3))
	{
		return false;
	}
	return true;
}

bool func_699(int iParam0, bool bParam1)
{
	return func_1008(func_288(), iParam0, bParam1);
}

void func_700(var uParam0, int iParam1)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

bool func_701(int iParam0, int iParam1)
{
	if (!func_572(iParam0, 0))
	{
		return false;
	}
	if (Global_1935630->f_12)
	{
		return false;
	}
	iVar0 = func_1031(iParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_1102("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_1103(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_686(Var4.f_4))
			{
			}
			else if (_get_ammo_type_for_weapon(Var4.f_4) == iVar0)
			{
				func_1104(iVar1);
				return true;
			}
			iVar3++;
		}
		func_1104(iVar1);
	}
	return false;
}

var func_702(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
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
	func_1173(sParam0, sParam1, iParam2);
	return uVar20;
}

int func_703()
{
	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar2 = func_1174(iVar1);
		if (!_unlock_is_visible(func_1175(iVar2)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_704()
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		iVar1 = func_1174(iVar0);
		if (!_unlock_is_visible(func_1175(iVar1)))
		{
			_unlock_set_visible(func_1175(iVar1), true);
		}
		iVar0++;
	}
}

bool func_705()
{
	return (func_200(&Global_1935630, 4096) || _get_number_of_references_of_script_with_name_hash(1637780761) > 0);
}

int func_706(var uParam0, int iParam1, int iParam2, int iParam3)
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
	if (!func_572(iVar0, 0))
	{
		return 0;
	}
	if (!func_1176(iVar0))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	iVar3 = 1;
	func_1177(iVar0, iVar1, &iVar3, 0);
	iVar4 = (iVar2 * iVar3);
	if (func_592(iVar0, 58855631))
	{
		iVar4 = iVar2;
	}
	Var5 = { func_683(iVar0, 0, 1) };
	iVar10 = func_1178(iVar0, &Var5, 0, 0);
	if (iVar10 == 0)
	{
		return 0;
	}
	else if (iVar10 < iVar4)
	{
		iVar2 = ceil((to_float(iVar10) / to_float(iVar3)));
		iVar4 = iVar10;
	}
	iVar11 = (func_1179(iVar0, iVar1, 1, 0, 0) * iVar2);
	if (iVar11 <= 0)
	{
		return 0;
	}
	if (!func_1180(iVar11))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	if (!func_321(iVar0, iVar4, 1, 0, 0, 1248274121, 0, 0, 0, 0))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	func_1135(iVar11, 0, 0, 0, 1);
	*iParam3 = (*iParam3 + iVar11);
	*iParam1 = (*iParam1 + iVar2);
	return 1;
}

var func_707(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
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

void func_708(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (is_string_null_or_empty(sParam1))
	{
		sParam1 = "FEED_MONEY_SPEND";
	}
	func_702(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 1831944558, 1, 859817522, 0, 0, 0, 1);
}

var func_709(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

void func_710(bool bParam0, bool bParam1)
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

void func_711(int iParam0, int iParam1, float fParam2, int iParam3)
{
	iVar0 = floor((to_float(iParam1) * fParam2));
	iVar1 = ((iParam1 - iVar0) / iParam3);
	if (func_998())
	{
		iVar2 = floor((to_float(iVar1) * 0.1f));
		_uilog_add_total_take_entry(1072517412, 908516622, _create_var_string(2, "MISSION_COMPLETE_TAKE_GANG"), _create_var_string(2, "MISSION_COMPLETE_TAKE_AMOUNT", iVar0), -1689362167);
	}
	else
	{
		_uilog_add_total_take_entry(2067252994, 908516622, _create_var_string(2, "MISSION_COMPLETE_TAKE_GANG"), _create_var_string(2, "MISSION_COMPLETE_TAKE_AMOUNT", iVar0), -1689362167);
	}
	iVar3 = iVar1;
	if (func_998())
	{
		iVar3 = (iVar3 + iVar2);
	}
	_0xe6dc9b21ac7a8729(func_195(iParam0), iVar3, iVar1, iParam3);
	iVar4 = func_275(iParam0);
	if (func_197(iParam0) != 1 || (iVar4 != 37 && iVar4 != 58))
	{
		_uilog_add_total_take_entry(-1391579956, 1997120069, _create_var_string(2, "MISSION_COMPLETE_TAKE_ARTHUR"), _create_var_string(2, "MISSION_COMPLETE_TAKE_AMOUNT", iVar3), 601389479);
	}
	switch (func_197(iParam0))
	{
		case 1:
			switch (iVar4)
			{
				case 25:
					func_1181(1, iVar1);
					func_1181(8, iVar1);
					func_1181(7, iVar1);
					break;
				case 12:
					func_1181(6, iVar1);
					break;
				case 53:
					func_1181(3, iVar1);
					func_1181(7, iVar1);
					func_1181(4, iVar1);
					break;
				case 20:
					func_1181(8, iVar1);
					break;
				case 19:
					func_1181(1, iVar1);
					func_1181(2, iVar1);
					break;
				case 24:
					func_1181(3, iVar1);
					func_1181(9, iVar1);
					func_1181(20, iVar1);
					break;
				case 28:
					func_1181(1, iVar1);
					break;
				case 34:
					func_1181(23, iVar1);
					func_1181(2, iVar1);
					func_1181(18, iVar1);
					break;
				case 29:
					func_1181(0, iVar1);
					func_1181(9, iVar1);
					break;
				case 37:
					break;
				case 58:
					break;
				case 57:
					func_1181(0, iVar1);
					func_1181(3, iVar1);
					func_1181(2, iVar1);
					func_1181(11, iVar1);
					func_1181(6, iVar1);
					func_1181(25, iVar1);
					func_1181(24, iVar1);
					break;
			}
			break;
		case 8:
			switch (iVar4)
			{
				case 94:
					func_1181(5, iVar1);
					break;
				case 63:
					func_1181(1, iVar1);
					func_1181(3, iVar1);
					break;
				case 37:
					func_1181(23, iVar1);
					break;
				case 116:
					break;
			}
			break;
		case 11:
			if (iParam0 == func_366(0, 10, 11, 2116153146))
			{
				func_1181(7, iVar1);
				func_1181(4, iVar1);
			}
			else if (iParam0 == func_366(0, 7, 11, -379687487))
			{
				func_1181(8, iVar1);
				func_1181(15, iVar1);
			}
			else if (iParam0 == func_366(0, 8, 11, -1386089015))
			{
				func_1181(3, iVar1);
			}
			else if (iParam0 == func_366(0, 11, 11, -1952009645))
			{
				func_1181(6, iVar1);
				func_1181(3, iVar1);
			}
			else if (iParam0 == func_366(0, 12, 11, 2065895756))
			{
				func_1181(9, iVar1);
			}
			break;
	}
	_uilog_set_total_take_summary(_create_var_string(2, "MISSION_COMPLETE_TAKE_TOTAL", iParam1), _create_var_string(2, "MISSION_COMPLETE_TAKE_TOTAL_GANG", func_1182()));
	if (!func_1183(629))
	{
		func_328(629, 0);
	}
}

int func_712(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_3;
	}
	return 0;
}

bool func_713(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 17)
	{
		return false;
	}
	return true;
}

bool func_714(int iParam0, int iParam1, var uParam2)
{
	if (!func_713(iParam0))
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

int func_715()
{
	if (Global_1572887->f_12 == -1)
	{
		return 771;
	}
	return 20001;
}

int func_716(int iParam0, int iParam1, int iParam2)
{
	return ((iParam2 & 31 || shift_left(iParam0 & 1023, 5)) || shift_left(iParam1 & 16383, 15));
}

int func_717(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (!func_1184(iParam2))
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
	if (iParam3 < 0 || iParam3 > func_715())
	{
		return -1;
	}
	iVar0 = func_716(iParam0, iParam1, iParam2);
	iVar1 = iParam3;
	func_480(iVar1, 0);
	func_551(iVar1, 0);
	func_1185(iVar1, 0);
	func_1186(iVar1, 0);
	func_1187(iVar1, iVar0);
	if (iParam4 != 0)
	{
		func_1188(iVar1, iParam4);
	}
	return iVar1;
}

int func_718(int iParam0, bool bParam1, int iParam2)
{
	if (iParam2 != -1)
	{
		return iParam2;
	}
	fVar0 = 1f;
	if (bParam1 && func_350(1811977508, 1, 0))
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
			if (func_572(iVar25, 0) && func_592(iVar25, -1921346699))
			{
				return ceil((IntToFloat(&Var1.f_12[iVar24]) * fVar0));
			}
		}
		iVar24++;
	}
	return 0;
}

void func_719(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

int func_720(int iParam0)
{
	if (!func_192(iParam0))
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

bool func_721(int iParam0)
{
	return _0x4dac398297981b87(iParam0);
}

Vector3 func_722(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, bool bParam13)
{
	fVar2 = 9999999f;
	func_1189(&bVar12, &uVar13);
	bVar14 = false;
	if (bVar12)
	{
		if (func_1190() == 0 && !func_1191(0))
		{
			bVar14 = true;
		}
	}
	if (!func_1192(15, &Var15))
	{
		return 0f, 0f, 0f;
	}
	_0x748c5f51a18cb8f0(0);
	Var20 = { Var15 };
	if (bParam7)
	{
		bVar10 = func_1193();
		if (_does_volume_exist(bVar10))
		{
		}
	}
	if (!func_1194(Global_1310720->f_21))
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
			vVar7 = { func_1195(iVar0, iVar1) };
			bVar11 = func_1196(iVar0, iVar1);
			bVar3 = vdist(vParam0, vVar7);
			if (((((bVar3 < fVar2 && bVar3 > bParam10) && !func_396(vVar7)) && func_1197(iVar0, bParam8, iParam12)) && !func_1198(iVar0)) || bVar11)
			{
				if (func_1199(vVar7, iVar0, iVar1, iParam5, iParam6, bVar14, bVar10, bParam9, bParam13))
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

int func_723(vector3 vParam0, bool bParam3)
{
	iVar0 = func_1200(vParam0);
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

void func_724()
{
	disable_script_brain_set(1);
}

void func_725()
{
}

void func_726()
{
	disable_script_brain_set(2);
}

bool func_727(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_728(char* sParam0)
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

void func_729(int iParam0)
{
	if (func_727(iParam0, 1))
	{
		func_1201(1);
	}
}

int func_730()
{
	return -1904156936;
}

bool func_731(int iParam0)
{
	if (!func_192(iParam0))
	{
		return false;
	}
	switch (func_197(iParam0))
	{
		case 1:
			iVar0 = func_275(iParam0);
			return (((((((((((((iVar0 == 38 || iVar0 == 39) || iVar0 == 43) || iVar0 == 0) || iVar0 == 1) || iVar0 == 3) || iVar0 == 4) || iVar0 == 60) || iVar0 == 59) || iVar0 == 77) || iVar0 == 64) || iVar0 == 44) || iVar0 == 42) || iVar0 == 67);
		case 8:
			iVar1 = func_275(iParam0);
			return (((iVar1 == 67 || iVar1 == 82) || iVar1 == 83) || iVar1 == 1);
	}
	return false;
}

int func_732()
{
	return 166188472;
}

int func_733()
{
	return 2015838421;
}

int func_734()
{
	return 207908017;
}

var func_735(var uParam0, char* sParam1, var uParam2, int iParam3, int iParam4)
{
	vVar0.x = iParam3;
	vVar0.f_1 = sParam1;
	vVar0.f_2 = uParam2;
	uVar3 = _0x9f2cc2439a04e7ba(uParam0, &vVar0, iParam4);
	return uVar3;
}

var func_736(var uParam0, char* sParam1, int iParam2, int iParam3)
{
	Var0 = iParam2;
	Var0.f_1 = sParam1;
	uVar3 = _0x815c4065ae6e6071(uParam0, &Var0, iParam3);
	return uVar3;
}

void func_737(var uParam0)
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

int func_738(var uParam0, int iParam1)
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

char* func_739(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return "";
	}
	if (is_entity_a_ped(iParam0))
	{
		return func_1202(get_ped_index_from_entity_index(iParam0));
	}
	else if (is_entity_an_object(iParam0))
	{
		return func_1203(get_object_index_from_entity_index(iParam0));
	}
	else if (is_entity_a_vehicle(iParam0))
	{
		return func_1204(get_vehicle_index_from_entity_index(iParam0));
	}
	return "";
}

int func_740(var uParam0, char* sParam1)
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

int func_741(var uParam0)
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

void func_742(var uParam0, int iParam1)
{
	uParam0->f_2054 = (uParam0->f_2054 || iParam1);
}

void func_743(var uParam0, int iParam1)
{
	uParam0->f_8 = (uParam0->f_8 || iParam1);
}

int func_744()
{
	return Global_1572864->f_8;
}

void func_745(char[4] cParam0, int iParam1)
{
	func_1205(cParam0, iParam1);
	func_1206(cParam0, iParam1, 26);
}

int func_746(var uParam0)
{
	func_1207();
	if (func_120(uParam0, 4))
	{
		if (!func_1208())
		{
			return 0;
		}
		if (!func_1209())
		{
			return 0;
		}
	}
	func_1210(0, 0);
	func_1210(1, 0);
	func_1210(6, 0);
	_set_weather_type(-416908843, true, true, false, 0f, false);
	if (func_282(uParam0) == 1)
	{
		set_clock_time(21, 0, 0);
		pause_clock(true, 0);
		set_timecycle_modifier("Gang_1_mod");
		_set_weather_type(2082228755, true, true, false, 0f, false);
		_set_weather_type_frozen(true);
		func_883();
		func_884(0);
		func_890(100f, 0, 0, 1);
		func_891(100f, 0, 0, 1);
		func_892(100f, 0, 0, 1);
		_0x1d77b47afa584e90(player_id(), -1, 1);
	}
	func_172(-1187306838, 1, 0f, 0, 0, 1f, 1, 0);
	func_172(-875247651, 1, 0f, 0, 0, 1f, 1, 0);
	func_172(-821604574, 1, 0f, 0, 0, 0, 0, 0);
	func_172(686097120, 1, 0f, 0, 0, 0, 0, 0);
	func_172(984852093, 1, 0f, 0, 0, 0, 0, 0);
	return 1;
}

int func_747(var uParam0)
{
	if (is_interior_entity_set_active(iVar325, "lak_dockhouse_hammock_SP"))
	{
		deactivate_interior_entity_set(iVar325, "lak_dockhouse_hammock_SP", true);
	}
	if (!is_interior_entity_set_active(iVar325, "lak_dockhouse_hammock_CS"))
	{
		activate_interior_entity_set(iVar325, "lak_dockhouse_hammock_CS", 0);
	}
	func_1211(0);
	func_1212();
	func_1213(uParam0);
	if (func_165(iLocal_198, 0) && is_ped_in_vehicle(iLocal_198, iLocal_201, false))
	{
		task_vehicle_aim_at_coord(iLocal_198, func_1214(3));
	}
	func_420(uParam0, func_1215(675165849, 0), "P_DOORSGL01x^1", 0, 0, 0, 0);
	func_140(uParam0, func_33(uParam0), 16777216);
	_0x72d4cb5db927009c(-95736505, 2, 0);
	_0x72d4cb5db927009c(36703333, 2, 0);
	if (does_entity_exist(iLocal_198))
	{
		set_entity_visible(iLocal_198, false);
	}
	if (does_entity_exist(iLocal_201))
	{
		set_entity_visible(iLocal_201, false);
	}
	if (does_entity_exist(iLocal_199))
	{
		set_entity_visible(iLocal_199, false);
	}
	if (func_282(uParam0) != 1)
	{
		set_entity_visible(&(uLocal_182[0]), false);
		set_entity_visible(&(uLocal_182[1]), false);
	}
	func_1216(&(uLocal_182[3]), 2077870112);
	func_1216(&(uLocal_182[13]), 2031861036);
	func_1216(&(uLocal_182[6]), -1952010486);
	func_1216(&(uLocal_182[6]), 1845102363);
	func_1216(&(uLocal_182[6]), -1723243514);
	func_1216(&(uLocal_182[6]), 2075992054);
	func_1217(&(uParam0->f_7375), &(uLocal_182[3]), 8);
	return 1;
}

int func_748(var uParam0)
{
	if (_get_next_weather_type_hash_name() != 2082228755)
	{
		_set_weather_type(2082228755, true, true, false, 0f, false);
	}
	if (does_entity_exist(iLocal_198) && !is_entity_visible(iLocal_198))
	{
		set_entity_visible(iLocal_198, true);
	}
	if (does_entity_exist(iLocal_201) && !is_entity_visible(iLocal_201))
	{
		set_entity_visible(iLocal_201, true);
	}
	if (does_entity_exist(iLocal_199) && !is_entity_visible(iLocal_199))
	{
		set_entity_visible(iLocal_199, true);
	}
	if (!func_1208())
	{
		return 0;
	}
	func_1218(0, 0, 0);
	if (!func_1209())
	{
		return 0;
	}
	if (_0xdd0b7c5ae58f721d("script@Story@GNG1@ig1_crawl_treatment"))
	{
		shake_gameplay_cam("HAND_SHAKE", 1f);
	}
	else
	{
		return 0;
	}
	if (is_interior_entity_set_active(iVar325, "lak_dockhouse_hammock_CS"))
	{
		deactivate_interior_entity_set(iVar325, "lak_dockhouse_hammock_CS", true);
	}
	if (!is_interior_entity_set_active(iVar325, "lak_dockhouse_hammock_SP"))
	{
		activate_interior_entity_set(iVar325, "lak_dockhouse_hammock_SP", 0);
	}
	if (!func_391(iLocal_168, 32768))
	{
		func_1211(1);
		func_414(&iLocal_168, 32768);
	}
	func_888();
	func_1219(Local_14.f_14, 0);
	func_222(&uLocal_280);
	iLocal_165 = get_random_int_in_range(200, 500);
	if (func_165(iLocal_198, 0))
	{
		func_885(&iLocal_198, &iLocal_201, -1, 1);
		if (is_ped_in_vehicle(iLocal_198, iLocal_201, false))
		{
			task_vehicle_shoot_at_coord(iLocal_198, func_1214(3), 20f);
			set_ped_config_flag(iLocal_198, 22, true);
			set_ped_combat_attributes(iLocal_198, 1, true);
			set_ped_combat_attributes(iLocal_198, 52, true);
			set_ped_combat_attributes(iLocal_198, 30, true);
			set_ped_combat_attributes(iLocal_198, 57, true);
			set_ped_combat_attributes(iLocal_198, 27, false);
			set_ped_combat_movement(iLocal_198, 0);
			set_current_ped_vehicle_weapon(iLocal_198, -1193642378);
			set_ped_firing_pattern(iLocal_198, -957453492);
			func_1220(Local_14.f_29, 1);
		}
	}
	func_172(-1187306838, 1, 0f, 0, 0, 0, 0, 0);
	func_172(-875247651, 1, 0f, 0, 0, 0, 0, 0);
	func_172(-821604574, 1, 0f, 0, 0, 0, 0, 0);
	func_172(686097120, 1, 0f, 0, 0, 0, 0, 0);
	func_172(984852093, 1, 0f, 0, 0, 0, 0, 0);
	if (does_entity_exist(iLocal_198))
	{
		set_entity_only_damaged_by_player(iLocal_198, true);
	}
	func_1221(1);
	func_180(0);
	func_1222();
	func_145(uParam0, _get_anim_scene_ped(&(uLocal_171[0]), "MiltonAndrews", false), "MILTON", 0);
	func_1223(uParam0, "GNG1_INT_LO", 0);
	iLocal_334 = 1;
	if (!_0xa24c1d341c6e0d53(1, 1, 1))
	{
		_0xbc016635d6a73b31("script@Story@GNG1@ig1_crawl_treatment", "crawl_camera", 5);
	}
	set_ped_config_flag(&(uLocal_182[10]), 380, false);
	if (does_entity_exist(iLocal_198))
	{
		set_entity_visible(iLocal_198, true);
	}
	if (does_entity_exist(iLocal_201))
	{
		set_entity_visible(iLocal_201, true);
	}
	if (does_entity_exist(iLocal_199))
	{
		set_entity_visible(iLocal_199, true);
	}
	func_1224(uParam0, &(uLocal_182[3]), 128);
	func_1224(uParam0, &(uLocal_182[0]), 128);
	func_1224(uParam0, &(uLocal_182[1]), 128);
	func_1224(uParam0, &(uLocal_182[2]), 128);
	if (!is_entity_visible(&(uLocal_182[0])))
	{
		set_entity_visible(&(uLocal_182[0]), true);
	}
	if (!is_entity_visible(&(uLocal_182[1])))
	{
		set_entity_visible(&(uLocal_182[1]), true);
	}
	func_886(-1, 1);
	return 1;
}

int func_749(char[4] cParam0)
{
	if (get_entity_speed(Global_35) > 0f && !func_391(iLocal_168, 32))
	{
		func_414(&iLocal_168, 32);
	}
	_0x437c08db4febe2bd(Global_35, "Stealth", 1f, 1);
	disable_control_action(0, -640622144, false);
	func_1225(cParam0);
	func_1226(cParam0);
	func_1227(cParam0);
	func_1228(func_1214(0), func_181(1, 14));
	if (func_1229(cParam0) > 0)
	{
		func_1230();
	}
	func_1231(cParam0);
	if (!func_391(iLocal_168, 4))
	{
		func_1232();
	}
	if (func_1229(cParam0) < 1)
	{
		disable_control_action(0, -1404316431, false);
		disable_control_action(0, 2011525043, false);
		disable_control_action(0, -1046962283, false);
		disable_control_action(0, 1618006066, false);
		disable_control_action(0, 1287709438, false);
		disable_control_action(0, 1934388793, false);
		disable_control_action(0, -209515122, false);
	}
	else
	{
		func_1233(cParam0);
	}
	if (func_846(Global_35, &(uLocal_182[7]), 2.5f, 1))
	{
		iLocal_334 = 0;
	}
	if ((((func_391(iLocal_168, 512) && get_number_of_fires_in_range(func_1214(6), 1.5f) < 1) && _does_anim_scene_exist(&(uLocal_171[5]))) && _is_anim_scene_started(&(uLocal_171[5]), false)) && !get_anim_scene_bool(&(uLocal_171[5]), "breakout"))
	{
		set_anim_scene_bool(&(uLocal_171[5]), "breakout", true, false);
	}
	if (!func_391(iLocal_168, 512))
	{
		if (func_1234(Global_35, func_1214(6), 0) < 0.5f)
		{
			Var0.f_8 = -1082130432;
			Var0 = { func_1214(5) };
			Var0.f_3 = { func_1214(1) };
			Var0.f_6 = -183018591;
			Var0.f_7 = 100f;
			Var0.f_13 = 1;
			Var0.f_16 = 1;
			iLocal_334 = 2;
			_fire_single_bullet_ignore_entity_new(&Var0);
			func_1235();
			func_135(cParam0, 3);
			func_414(&iLocal_168, 512);
		}
	}
	switch (func_1229(cParam0))
	{
		case 0:
			if (func_165(Global_35, 0) && func_1236())
			{
				func_180(1);
				_set_ped_crouch_movement(Global_35, true, 0, false);
				use_waypoint_recording_as_assisted_movement_route(uVar266, 1, 1f, 1f, 1);
				set_entity_proofs(Global_35, 0, false);
				func_887(-1, 1);
				func_134(cParam0, 1);
			}
			if (func_1237(Global_35, Local_127.f_10, 1, 0))
			{
				func_180(1);
				_set_ped_crouch_movement(Global_35, true, 0, false);
				use_waypoint_recording_as_assisted_movement_route(uVar266, 1, 1f, 1f, 1);
				func_887(-1, 1);
				func_134(cParam0, 1);
			}
			if (!_is_anim_scene_started(&(uLocal_171[0]), false) && func_1238(Global_35, 2219.395f, -771.77f, 43.72f, 1.5f, 1, 1))
			{
				func_180(1);
				_set_ped_crouch_movement(Global_35, true, 0, false);
				use_waypoint_recording_as_assisted_movement_route(uVar266, 1, 1f, 1f, 1);
				func_887(-1, 1);
				func_186("lak_nav_camp_running");
				func_187("lak_nav_camp_gang1");
				_request_imap(-605128543);
				func_134(cParam0, 1);
			}
			break;
		case 1:
			if (func_165(Global_35, 0))
			{
				if (func_1237(Global_35, Local_127.f_10, 1, 0) || (func_1237(&(uLocal_182[3]), Local_127.f_10, 1, 0) && func_850(Global_35, &(uLocal_182[3]), 1, 1) < 3.5f))
				{
					func_134(cParam0, 29);
				}
			}
			break;
		case 29:
			set_ped_max_move_blend_ratio(Global_35, 1.5f);
			return 1;
	}
	set_ped_max_move_blend_ratio(Global_35, 1.5f);
	return 0;
}

int func_750(var uParam0)
{
	func_513(11);
	stop_gameplay_cam_shaking(false);
	set_ped_max_move_blend_ratio(Global_35, 1.5f);
	use_waypoint_recording_as_assisted_movement_route(uVar266, 0, 1f, 1f, 1);
	func_414(&iLocal_168, 524288);
	return 1;
}

void func_751(char[4] cParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10)
{
	func_140(cParam0, iParam1, iParam9);
	func_1239(cParam0, iParam1);
	func_1206(cParam0, iParam1, iParam2);
	func_1240(cParam0, &iParam3, iParam1, 0);
	func_1240(cParam0, &iParam4, iParam1, 2);
	func_1240(cParam0, &iParam5, iParam1, 4);
	func_1240(cParam0, &iParam6, iParam1, 5);
	func_1240(cParam0, &iParam7, iParam1, 7);
	func_910(cParam0, iParam1, 0);
	StringCopy(&cVar0, sParam8, 32);
	func_1241(cParam0, iParam1, cVar0);
	func_1242(cParam0, iParam1, iParam10);
}

int func_752(var uParam0)
{
	func_1213(uParam0);
	func_1207();
	if (!func_1208())
	{
		return 0;
	}
	if (!func_1209())
	{
		return 0;
	}
	func_1210(0, 0);
	func_1210(1, 0);
	func_1210(6, 0);
	func_1243(&(uLocal_182[3]), func_225(6, 0), 2, 1073741824);
	func_1243(Global_35, func_225(6, 1), 2, 1073741824);
	func_172(-1187306838, 1, 0f, 0, 0, 1f, 1, 0);
	func_172(-875247651, 1, 0f, 0, 0, 1f, 1, 0);
	func_172(-821604574, 1, 0f, 0, 0, 0, 0, 0);
	func_172(686097120, 1, 0f, 0, 0, 0, 0, 0);
	func_172(984852093, 1, 0f, 0, 0, 0, 0, 0);
	_0x7f458b543006c8fe(-1187306838, 12);
	_0x7f458b543006c8fe(-875247651, 12);
	_0x7f458b543006c8fe(-821604574, 12);
	_0x7f458b543006c8fe(686097120, 12);
	_0x7f458b543006c8fe(984852093, 12);
	if (does_entity_exist(iLocal_198))
	{
		set_entity_only_damaged_by_player(iLocal_198, true);
	}
	func_1221(1);
	set_clock_time(21, 0, 0);
	_set_weather_type(2082228755, true, true, false, 0f, false);
	_set_weather_type_frozen(true);
	pause_clock(true, 0);
	if (func_165(Global_35, 0))
	{
		_set_ped_crouch_movement(Global_35, true, 0, true);
	}
	func_1218(0, 0, 0);
	func_1216(&(uLocal_182[3]), 2077870112);
	if (!func_391(iLocal_168, 512))
	{
		Var0.f_8 = -1082130432;
		Var0 = { func_1214(5) };
		Var0.f_3 = { func_1214(1) };
		Var0.f_6 = -183018591;
		Var0.f_7 = 100f;
		Var0.f_13 = 1;
		Var0.f_16 = 1;
		_fire_single_bullet_ignore_entity_new(&Var0);
		func_1235();
		func_414(&iLocal_168, 512);
	}
	return 1;
}

int func_753(var uParam0)
{
	if (func_165(Global_35, 0))
	{
		_set_ped_crouch_movement(Global_35, true, 0, false);
		set_ped_config_flag(Global_35, 249, false);
		set_player_can_use_cover(player_id(), true);
		set_player_control(player_id(), true, 0, false);
	}
	set_ped_max_move_blend_ratio(Global_35, 1.5f);
	func_135(uParam0, 0);
	return 1;
}

int func_754(var uParam0)
{
	_0x24db6b9f2b719043(1.5f);
	func_1219(Local_14.f_14, 0);
	if (!func_8(uParam0, 8))
	{
		if (func_165(Global_35, 0))
		{
			_set_ped_crouch_movement(Global_35, true, 0, false);
		}
	}
	if (func_165(iLocal_198, 0) && is_ped_in_vehicle(iLocal_198, iLocal_201, false))
	{
		task_vehicle_shoot_at_coord(iLocal_198, func_1214(3), 20f);
	}
	_0xe6cb36f43a95d75f(0.25f);
	set_ped_max_move_blend_ratio(Global_35, 1.5f);
	func_222(&uLocal_304);
	if (!_does_volume_exist(iLocal_236))
	{
		iLocal_236 = _0x0eb78c2b156635b1(665633627, 2252.089f, -782.3533f, 43.28002f, 0f, 0f, 0f, 1.244468f, 1.256194f, 1f);
	}
	return 1;
}

int func_755(char[4] cParam0)
{
	func_1244(cParam0);
	_0x437c08db4febe2bd(Global_35, "Stealth", 1f, 1);
	set_ped_reset_flag(Global_35, 174, true);
	set_ped_reset_flag(player_ped_id(), 129, true);
	func_1230();
	if (func_1237(Global_35, Local_127.f_29, 1, 0))
	{
		disable_control_action(0, -620139643, false);
		if (!_get_ped_crouch_movement(Global_35))
		{
			_set_ped_crouch_movement(Global_35, true, 0, false);
		}
	}
	if (func_1245(&uLocal_307, 45f))
	{
		explode_ped_head(&(uLocal_182[0]), -183018591);
	}
	if (get_entity_speed(Global_35) > 0f && !func_391(iLocal_168, 32))
	{
		func_414(&iLocal_168, 32);
	}
	if ((((func_391(iLocal_168, 512) && get_number_of_fires_in_range(func_1214(6), 1.5f) < 1) && _does_anim_scene_exist(&(uLocal_171[5]))) && _is_anim_scene_started(&(uLocal_171[5]), false)) && !get_anim_scene_bool(&(uLocal_171[5]), "breakout"))
	{
		set_anim_scene_bool(&(uLocal_171[5]), "breakout", true, false);
	}
	if (!func_391(iLocal_168, 4) && func_1229(cParam0) < 3)
	{
		func_1232();
	}
	if ((func_1229(cParam0) >= 4 && !func_1246(iLocal_198, 1872528988)) && !func_391(iLocal_168, 33554432))
	{
		clear_ped_tasks(iLocal_198, 1, 0);
		task_vehicle_aim_at_coord(iLocal_198, func_1214(3));
		func_414(&iLocal_168, 33554432);
	}
	func_1226(cParam0);
	set_ped_max_move_blend_ratio(Global_35, 1.75f);
	func_1247();
	func_1233(cParam0);
	func_1248(cParam0);
	switch (func_1229(cParam0))
	{
		case 0:
			set_ped_max_move_blend_ratio(Global_35, 1.5f);
			if (func_846(Global_35, &(uLocal_182[3]), 4.5f, 1))
			{
				set_ped_max_move_blend_ratio(Global_35, 0.25f);
			}
			func_134(cParam0, 1);
			break;
		case 1:
			set_ped_max_move_blend_ratio(Global_35, 1.5f);
			if (func_846(Global_35, &(uLocal_182[3]), 4.5f, 1))
			{
				set_ped_max_move_blend_ratio(Global_35, 0.25f);
			}
			vVar0 = { func_1249(player_id()) };
			if (func_165(Global_35, 0) && vVar0.z < 42f)
			{
				func_1250(cParam0);
				func_134(cParam0, 2);
			}
			break;
		case 2:
			if ((func_850(Global_35, &(uLocal_182[3]), 1, 1) < 26f && func_850(Global_35, &(uLocal_182[3]), 1, 1) > 10f) && iVar317 == 0)
			{
				func_1251(cParam0, "GNG1_SADIE_DAWD", 9f);
			}
			if (func_846(Global_35, &(uLocal_182[3]), 5f, 1) || (func_1234(Global_35, 2252.625f, -787.1647f, 40.7948f, 1) - 1f) < func_1234(&(uLocal_182[3]), 2252.625f, -787.1647f, 40.7948f, 1))
			{
				set_ped_max_move_blend_ratio(Global_35, 1f);
			}
			if (func_846(Global_35, &(uLocal_182[3]), 1.5f, 1))
			{
				set_ped_max_move_blend_ratio(Global_35, 0.25f);
			}
			if (func_165(Global_35, 0) && iVar314 == 11)
			{
				if (func_850(Global_35, &(uLocal_182[3]), 1, 1) <= 8.5f)
				{
					func_135(cParam0, 3);
					clear_ped_tasks(&(uLocal_182[3]), 1, 0);
					open_sequence_task(&uLocal_336);
					task_climb(0, true);
					task_put_ped_directly_into_cover(0, func_181(0, 6), -1, 0, 0f, 0, 0, iLocal_237, 1, 0, 0);
					close_sequence_task(iVar333);
					task_perform_sequence(&(uLocal_182[3]), iVar333);
					clear_sequence_task(&uLocal_336);
					if (_is_anim_scene_started(&(uLocal_171[1]), false))
					{
						func_1252(&(uLocal_171[1]));
					}
					func_134(cParam0, 3);
				}
			}
			break;
		case 3:
			bVar3 = func_1237(&(uLocal_182[3]), Local_127.f_21, 1, 0);
			bVar4 = is_ped_climbing(&(uLocal_182[3]));
			if (bVar3 && !bVar4)
			{
				if (!func_391(iLocal_168, 4))
				{
					set_anim_scene_bool(&(uLocal_171[2]), "LOOP_RIFLE_PLACEMENT", true, false);
					func_513(11);
					_0x4c39c95ae5db1329(Local_127.f_8, 0, 63);
					_0x4c39c95ae5db1329(Local_127.f_7, 0, 63);
					_0x4c39c95ae5db1329(Local_127.f_22, 0, 63);
					if (does_blip_exist(iVar356))
					{
						_set_blip_flash_style(iVar356, -401963276);
						remove_blip(&iLocal_359);
					}
					iLocal_359 = func_1253(408396114, 2254.86f, -782.0423f, 43.1898f, 1);
					_blip_set_modifier(iVar356, -401963276);
					func_1254(cParam0, "GNG1_OBJ_COVER", -1082130432, 0, 0, -1, -1, 0);
					func_134(cParam0, 4);
				}
				else
				{
					func_134(cParam0, 19);
				}
			}
			break;
		case 4:
			vVar5 = { func_1249(player_id()) };
			if ((func_165(Global_35, 0) && vVar5.z > 42.5f) && func_1237(Global_35, Local_127.f_8, 1, 0))
			{
				bVar8 = true;
			}
			if (!bVar8)
			{
				if (!func_10(iVar322))
				{
					iLocal_325 = func_1255("INPUT_CLIMB_DISPLAYONLY", -640622144, 2252.556f, -787.3371f, 40.7489f, 0.75f, 3, 0, 1, 0, 570, 4000, 10, 1073741824, 0, 1704213876, 0);
				}
			}
			else if (func_10(iVar322))
			{
				func_11(&iLocal_325, 1, 1);
			}
			if (((is_entity_at_coord(&(uLocal_182[3]), func_181(0, 6), 2f, 2f, 2f, false, false, 0) && func_1256()) && is_entity_at_coord(Global_35, 2253.052f, -785.638f, 43.1811f, 10f, 10f, 10f, false, false, 0)) && bVar8)
			{
				if (!func_1257())
				{
					func_1258(cParam0, "GNG1_OBJ_COVER", 0, 7500, 0, -1082130432, 0, 0, -1, -1, 0);
				}
				if (!func_391(iLocal_168, 536870912))
				{
					func_414(&iLocal_168, 536870912);
					_play_sound_from_position("SadieClimbs", 2252.908f, -786.9497f, 43.0844f, "GNG1_Sounds", false, 0, true, 0);
				}
				iLocal_358 = add_cover_point(2254.86f, -782.142f, 43.19f, 357.675f, 1, 2, 7, true);
				func_134(cParam0, 5);
			}
			break;
		case 5:
			if (!func_391(iLocal_168, 4))
			{
				if ((((_does_anim_scene_exist(&(uLocal_171[2])) && _is_anim_scene_started(&(uLocal_171[2]), false)) && func_846(Global_35, &(uLocal_182[3]), 18f, 1)) && !func_1237(Global_35, Local_127.f_14, 1, 0)) && !func_1237(Global_35, Local_127.f_13, 1, 0))
				{
					func_1251(cParam0, "GNG1_COVER_DAWD", 9f);
				}
				disable_control_action(0, -562475458, false);
				if (func_1238(Global_35, _0xf70f00013a62f866(Local_127.f_12), 2.5f, 1, 0))
				{
					if (_0xcb690f680a3ea971(Global_35, 7))
					{
						_hide_ped_weapons(Global_35, 2, false);
					}
					_set_ped_crouch_movement(Global_35, false, 0, false);
					set_player_control(player_id(), false, 0, false);
					Local_337.f_3 = iVar355;
					Local_337.f_7 = 1;
					Local_337.f_4 = 1;
					Local_337.f_10 = 1.5f;
					Local_337 = Global_35;
					Local_337.f_5 = -1;
					Local_337.f_14 = { get_scripted_cover_point_coords(iVar355) };
					task_enter_cover(&Local_337);
					func_222(&uLocal_274);
					func_134(cParam0, 6);
				}
			}
			break;
		case 6:
			if (func_1238(Global_35, _0xf70f00013a62f866(Local_127.f_12), 3.25f, 1, 0))
			{
				if (_get_ped_crouch_movement(Global_35))
				{
					_set_ped_crouch_movement(Global_35, false, 0, false);
					disable_control_action(0, -562475458, false);
				}
				disable_control_action(0, -620139643, false);
			}
			if (((func_1237(Global_35, Local_127.f_12, 1, 0) && is_ped_in_cover(Global_35, 0, 0)) && !_get_ped_crouch_movement(Global_35)) || func_223(&uLocal_274) > 5000)
			{
				_0xe296208c273bd7f0(-1, -1, 0, 17, 1, 0);
				_0xdd1232b332cbb9e7(3, 1, 0);
				_0xe296208c273bd7f0(-1, -1, 0, 17, 1, 0);
				set_player_control(player_id(), false, 0, false);
				_set_ped_crouch_movement(Global_35, false, 0, false);
				func_222(&uLocal_274);
				func_134(cParam0, 29);
			}
			if (_0xa24c1d341c6e0d53(0, 0, 0))
			{
				_0xdd1232b332cbb9e7(3, 1, 0);
				_set_ped_crouch_movement(Global_35, false, 0, false);
				func_222(&uLocal_274);
				func_134(cParam0, 29);
			}
			break;
		case 29:
			_0xe296208c273bd7f0(-1, -1, 0, 17, 1, 0);
			if (does_blip_exist(iVar356))
			{
				remove_blip(&iLocal_359);
			}
			if (_get_ped_crouch_movement(Global_35))
			{
				_set_ped_crouch_movement(Global_35, false, 0, false);
			}
			if (_0xa24c1d341c6e0d53(0, 0, 0))
			{
				func_1259(cParam0);
				return 1;
			}
			if (func_223(&uLocal_274) > 3500 || (((is_ped_in_cover(Global_35, 0, 0) && !_get_ped_crouch_movement(Global_35)) && func_1237(Global_35, Local_127.f_12, 1, 0)) && func_223(&uLocal_274) > 1500))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_756(var uParam0)
{
	_0xe296208c273bd7f0(-1, -1, 0, 17, 1, 0);
	if (!is_player_control_on(player_id()))
	{
		set_player_control(player_id(), true, 0, false);
	}
	_0x0c0a373d181bf900(-1187306838);
	_0x0c0a373d181bf900(-875247651);
	_0x0c0a373d181bf900(-821604574);
	_0x0c0a373d181bf900(686097120);
	_0x0c0a373d181bf900(984852093);
	func_414(&iLocal_168, 524288);
	if (_does_volume_exist(iLocal_236))
	{
		_delete_volume(iLocal_236);
	}
	return 1;
}

int func_757(var uParam0)
{
	func_1207();
	if ((!has_ped_got_weapon(Global_35, -183018591, 0, false) && func_120(uParam0, 4)) && !func_128(uParam0, 2))
	{
		func_1260(Global_35, -183018591, 1, 0, 0, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
		func_1261(1);
		func_222(&uLocal_298);
		return 0;
	}
	func_1243(&(uLocal_182[3]), func_225(0, 6), 2, 1073741824);
	func_1243(&(uLocal_182[0]), func_225(1, 0), 2, 1073741824);
	func_1243(&(uLocal_182[2]), func_225(1, 3), 2, 1073741824);
	func_1218(0, 0, 0);
	set_clock_time(21, 0, 0);
	_set_weather_type(2082228755, true, true, false, 0f, false);
	_set_weather_type_frozen(true);
	pause_clock(true, 0);
	return 1;
}

int func_758(char[4] cParam0)
{
	if (!func_871(cParam0))
	{
		return 0;
	}
	if (!func_1208())
	{
		return 0;
	}
	if (!func_1209())
	{
		return 0;
	}
	func_420(cParam0, func_1215(-1187306838, 0), "P_DOOR63A", 0, 0, 1, 0);
	func_420(cParam0, func_1215(-875247651, 0), "P_DOOR64B", 0, 0, 1, 0);
	func_1216(&(uLocal_182[3]), 2077870112);
	func_1217(&(cParam0->f_7375), iLocal_198, 8);
	_0x67e21acc5c0c970c(&(uLocal_182[3]), 9, false);
	func_1262(cParam0);
	func_875(-1, 1);
	func_172(675165849, 0, 1f, 1, 1, 0, 0, 0);
	func_172(57906928, 0, 1f, 1, 1, 0, 0, 0);
	func_172(-239733899, 0, 1f, 1, 1, 0, 0, 0);
	if (does_entity_exist(iLocal_198))
	{
		task_vehicle_aim_at_coord(iLocal_198, func_1214(3));
	}
	if (!_is_imap_active(-98843293))
	{
		if (!_is_position_inside_imap_streaming_extents(-98843293, Global_36))
		{
			_request_imap(-98843293);
		}
	}
	_hide_ped_weapons(Global_35, 2, true);
	_set_rain_level(0.5f);
	return 1;
}

int func_759(var uParam0)
{
	func_1260(&(uLocal_182[3]), 1240907314, 1, 0, 0, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
	func_1216(&(uLocal_182[3]), -183018591);
	func_1260(&(uLocal_182[3]), 2077870112, 1, 0, 0, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
	_0x24db6b9f2b719043(2.5f);
	if (func_165(iLocal_198, 0))
	{
		set_ped_accuracy(iLocal_198, 5);
	}
	set_ped_can_be_knocked_off_vehicle(iLocal_198, 2);
	func_172(-1187306838, 0, -1f, 1, 1, 0, 0, 0);
	func_172(-875247651, 0, 1f, 1, 1, 0, 0, 0);
	set_ped_sphere_defensive_area(&(uLocal_182[3]), func_181(0, 6), 0.75f, 1, 0, 0);
	func_1221(0);
	iLocal_321 = create_object(628999829, 2261.973f, -744.3873f, 41.1907f, true, true, false, false, true);
	iLocal_322 = create_object(628999829, 2278.522f, -737.7026f, 40.13434f, true, true, false, false, true);
	if (!does_pickup_exist(iVar321))
	{
		iLocal_324 = create_pickup_rotate(1961725845, 2255.4f, -754.13f, 42.58506f, 90.29f, 180f, 90.81f, 16 | 1048576, -1, 2, true, 0, 0, 0f, 0);
	}
	_0x67e21acc5c0c970c(&(uLocal_182[3]), 9, true);
	iLocal_332 = _create_volume_cylinder(0f, 0f, 0f, 0f, 0f, 0f, 1.5f, 1.5f, 3f);
	iLocal_333 = _create_volume_cylinder(0f, 0f, 0f, 0f, 0f, 0f, 1.5f, 1.5f, 3f);
	return 1;
}

int func_760(char[4] cParam0)
{
	func_1263(cParam0);
	func_1264();
	func_1265();
	if (func_1266(&uLocal_304, 35f))
	{
		func_1267(cParam0, &(uLocal_182[0]), 1, 1);
		func_1267(cParam0, &(uLocal_182[3]), 1, 1);
		func_1267(cParam0, &(uLocal_182[1]), 1, 1);
	}
	else
	{
		func_1267(cParam0, &(uLocal_182[0]), 0, 1);
		func_1267(cParam0, &(uLocal_182[3]), 0, 1);
		func_1267(cParam0, &(uLocal_182[1]), 0, 1);
	}
	if (((((does_entity_exist(iLocal_201) && func_846(Global_35, iLocal_201, 6.5f, 1)) && Global_36.f_2 >= 43.4f) && func_1268(iLocal_201, 0)) && !is_ped_in_vehicle(Global_35, iLocal_201, false)) && !func_216())
	{
		func_709("GNG1_HELP_GATLING", 10000, 0, 0, 0, 1);
	}
	func_1269(Local_14.f_14);
	func_1269(Local_14.f_22);
	func_1269(Local_14.f_53);
	func_1269(Local_14.f_64);
	func_1269(Local_14.f_73);
	if (does_entity_exist(iLocal_201) && is_ped_in_vehicle(Global_35, iLocal_201, false))
	{
		_0x9c113883487fd53c(347777538, 898171178);
		func_1270(Local_14.f_14);
		func_1270(Local_14.f_22);
	}
	func_1226(cParam0);
	func_1271();
	func_1272();
	if (func_1229(cParam0) < 10 && func_1229(cParam0) > 6)
	{
		func_1273();
	}
	switch (func_1229(cParam0))
	{
		case 0:
			if (func_165(Global_35, 0))
			{
				if (func_120(cParam0, 4) || func_120(cParam0, 8388608))
				{
					func_1274();
					func_1275();
				}
				func_134(cParam0, 1);
			}
			break;
		case 1:
			func_1276(iLocal_198, 1);
			func_134(cParam0, 2);
			break;
		case 2:
			func_222(&uLocal_298);
			func_134(cParam0, 3);
			break;
		case 3:
			func_1277(3);
			func_134(cParam0, 4);
			break;
		case 4:
			if (is_ped_dead_or_dying(iLocal_198, true) && func_1278(cParam0) == -1)
			{
				func_135(cParam0, 2);
			}
			if (func_1279(&uLocal_298) >= 5f || !func_1238(Global_35, 2253.751f, -780.7013f, 43.1658f, 13f, 1, 1))
			{
				func_1261(0);
				set_ped_accuracy(iLocal_198, 40);
				_0x50b72a754ee64a71(-1392528840);
				func_134(cParam0, 6);
			}
			break;
		case 6:
			if (!func_165(iLocal_198, 0) || !func_1238(Global_35, 2253.751f, -780.7013f, 43.1658f, 13f, 1, 1))
			{
				func_135(cParam0, 2);
				func_172(675165849, 0, 1f, 1, 1, 0, 0, 0);
				func_172(57906928, 0, 1f, 1, 1, 0, 0, 0);
				clear_ped_tasks_immediately(&(Local_14.f_16[1]), false, true);
				clear_ped_tasks_immediately(&(Local_14.f_16[2]), false, true);
				func_1280(1);
				func_1280(2);
				func_1281(cParam0, Local_14.f_14, "GNG1_SHOUTS1", "GNG1_PINKERTON1", 0);
				func_1282();
				func_1276(&(Local_14.f_16[0]), 1);
				_0xd05ad61f242c626b(&(Local_14.f_16[0]), 1000f);
				set_vehicle_is_considered_by_player(iLocal_201, true);
				func_1283();
				func_134(cParam0, 7);
			}
			break;
		case 7:
			if (!func_1238(&(Local_14.f_16[1]), 2252.982f, -773.2321f, 43.292f, 10f, 1, 1) || is_ped_dead_or_dying(&(Local_14.f_16[1]), true))
			{
				bVar0 = true;
			}
			else
			{
				bVar0 = false;
			}
			if (!func_1238(&(Local_14.f_16[2]), 2252.982f, -773.2321f, 43.292f, 10f, 1, 1) || is_ped_dead_or_dying(&(Local_14.f_16[2]), true))
			{
				bVar0 = true;
			}
			else
			{
				bVar0 = false;
			}
			if ((func_1284() <= 4 && bVar0) || !func_1238(Global_35, 2253.751f, -780.7013f, 43.1658f, 13f, 1, 1))
			{
				func_1223(cParam0, "GNG1_CAMP_PUSH", 0);
				func_1277(3);
				func_1285();
				func_134(cParam0, 8);
			}
			break;
		case 8:
			if (func_1286())
			{
				func_1281(cParam0, Local_14.f_22, "GNG1_SHOUTS2", "GNG1_PINKERTON2", 0);
				func_1281(cParam0, Local_14.f_14, "GNG1_SHOUTS2", "GNG1_PINKERTON2", 0);
				func_547(&uLocal_274);
				func_134(cParam0, 9);
			}
			break;
		case 9:
			func_1287();
			if (is_ped_dead_or_dying(&(Local_14.f_24[1]), true) && func_391(iLocal_168, 128))
			{
				func_1285();
				vVar1 = { 2246.024f, -763.9796f, 41.9541f };
				func_50(&(uLocal_182[1]));
				set_ped_sphere_defensive_area(&(uLocal_182[1]), vVar1, 1.5f, 1, 1, 0);
				set_ped_combat_movement(&(uLocal_182[1]), 1);
				open_sequence_task(&uLocal_336);
				task_go_to_coord_and_aim_at_hated_entities_near_coord_using_combat_style(0, vVar1, vVar1, 2f, 1, 1056964608, 1082130432, 1, 0, 0, -687903391);
				task_combat_hated_targets_in_area(0, func_181(2, 0), 175f, 0, 4);
				close_sequence_task(iVar333);
				_task_perform_sequence_2(&(uLocal_182[1]), iVar333, 1f, 1f);
				clear_sequence_task(&uLocal_336);
			}
			if (!func_391(iLocal_168, 1024))
			{
				func_1277(3);
				func_1281(cParam0, Local_14.f_14, "GNG1_SHOUTS3", "GNG1_PINKERTON3", 0);
				func_1281(cParam0, Local_14.f_22, "GNG1_SHOUTS3", "GNG1_PINKERTON3", 0);
				func_1288();
				func_414(&iLocal_168, 1024);
			}
			if (func_1284() <= 2)
			{
				if (!func_26(&uLocal_274))
				{
					func_222(&uLocal_274);
				}
				func_1289();
				if (!func_1290() && (is_entity_on_screen(&(uLocal_182[3])) || func_1291(&uLocal_274) > 2500))
				{
					func_1223(cParam0, "GNG1_PUSH", 0);
					func_1254(cParam0, "GNG1_FOLLOW_COMPANIONS", -1082130432, 0, 0, -1, -1, 0);
					open_sequence_task(&uLocal_336);
					task_set_crouch_movement(0, false, 0, false);
					task_follow_waypoint_recording(0, uVar269, 0, 1024, -1, 0, 1, -1);
					close_sequence_task(iVar333);
					_task_perform_sequence_2(&(uLocal_182[3]), iVar333, 1.25f, 1.25f);
					clear_sequence_task(&uLocal_336);
					open_sequence_task(&uLocal_336);
					task_set_crouch_movement(0, false, 0, false);
					task_follow_waypoint_recording(0, uVar268, 0, 1024, -1, 0, 1, -1);
					close_sequence_task(iVar333);
					_task_perform_sequence_2(&(uLocal_182[1]), iVar333, 2.6f, 2.6f);
					clear_sequence_task(&uLocal_336);
					vVar6 = { 2261.033f, -743.6303f, 43.33357f };
					iVar4 = 0;
					while (iVar4 < 5)
					{
						if (does_entity_exist(&(Local_14.f_16[iVar4])) && !is_entity_dead(&(Local_14.f_16[iVar4])))
						{
							func_1276(&(Local_14.f_16[iVar4]), 1);
							set_ped_sphere_defensive_area(&(Local_14.f_16[iVar4]), vVar6, 1.5f, 1, 0, 0);
						}
						iVar4++;
					}
					iVar5 = 0;
					while (iVar5 < 4)
					{
						if (does_entity_exist(&(Local_14.f_24[iVar5])) && !is_entity_dead(&(Local_14.f_24[iVar5])))
						{
							func_1276(&(Local_14.f_24[iVar5]), 1);
							set_ped_sphere_defensive_area(&(Local_14.f_24[iVar5]), vVar6, 1.5f, 1, 0, 0);
						}
						iVar5++;
					}
					func_134(cParam0, 10);
				}
			}
			if ((is_ped_in_vehicle(Global_35, iLocal_201, false) && func_1284() <= 4) && func_1223(cParam0, "GNG1_PUSH", 0))
			{
				func_1289();
				open_sequence_task(&uLocal_336);
				task_set_crouch_movement(0, false, 0, false);
				task_follow_waypoint_recording(0, uVar269, 0, 1088, -1, 0, 1, -1);
				close_sequence_task(iVar333);
				_task_perform_sequence_2(&(uLocal_182[3]), iVar333, 1.25f, 1.25f);
				clear_sequence_task(&uLocal_336);
				open_sequence_task(&uLocal_336);
				task_set_crouch_movement(0, false, 0, false);
				task_follow_waypoint_recording(0, uVar268, 0, 1024, -1, 0, 1, -1);
				close_sequence_task(iVar333);
				_task_perform_sequence_2(&(uLocal_182[1]), iVar333, 2.6f, 2.6f);
				clear_sequence_task(&uLocal_336);
				func_222(&uLocal_274);
				func_134(cParam0, 10);
			}
			break;
		case 10:
			if (!func_1292("GNG1_PUSH"))
			{
				if (!func_974(&((*Global_1360165)[11]->f_13), 8))
				{
					func_1258(cParam0, "GNG1_FOLLOW_COMPANIONS", 0, 7500, 1, -1082130432, 0, 0, -1, -1, 0);
					func_1293(11);
				}
				if (!func_974(&((*Global_1360165)[3]->f_13), 8))
				{
					func_1293(3);
				}
			}
			func_1294(&(uLocal_182[3]), 1.8f);
			func_1294(&(uLocal_182[1]), 1.4f);
			if (func_1238(&(uLocal_182[3]), vLocal_363, 3.5f, 1, 1) && !(func_1295(get_ped_defensive_area_position(&(uLocal_182[3]), false), vLocal_363, 0.85f, 1) || func_1295(get_ped_defensive_area_position(&(uLocal_182[3]), false), 2260.934f, -731.8542f, 41.0164f, 0.85f, 1)))
			{
				if (_does_volume_exist(iVar329))
				{
					if (!func_1238(Global_35, vLocal_363, 2.5f, 1, 1))
					{
						if (!func_1295(_0xf70f00013a62f866(iVar329), vLocal_363, 0.75f, 0))
						{
							func_1296(&(uLocal_182[3]), vLocal_363, 1);
						}
					}
					else if (!func_1295(_0xf70f00013a62f866(iVar329), 2260.934f, -731.8542f, 41.0164f, 0.75f, 0))
					{
						func_1296(&(uLocal_182[3]), 2260.934f, -731.8542f, 41.0164f, 1);
					}
				}
			}
			if (func_1238(&(uLocal_182[1]), vLocal_366, 4.5f, 1, 1) && !(func_1295(get_ped_defensive_area_position(&(uLocal_182[1]), false), vLocal_366, 0.85f, 1) || func_1295(get_ped_defensive_area_position(&(uLocal_182[1]), false), 2255.881f, -741.7477f, 41.4454f, 0.85f, 1)))
			{
				if (_does_volume_exist(iVar330))
				{
					if (!func_1238(Global_35, vLocal_366, 2.5f, 1, 1))
					{
						if (!func_1295(_0xf70f00013a62f866(iVar330), vLocal_366, 0.75f, 0))
						{
							func_1296(&(uLocal_182[1]), vLocal_366, 1);
						}
					}
					else if (!func_1295(_0xf70f00013a62f866(iVar330), 2255.881f, -741.7477f, 41.4454f, 0.75f, 0))
					{
						func_1296(&(uLocal_182[1]), 2255.881f, -741.7477f, 41.4454f, 1);
					}
				}
			}
			if ((func_1297() && func_1298(cParam0, "GNG1_IG1_B", 0, 0.6f, 0)) && _does_volume_exist(Local_127.f_24))
			{
				if (!is_entity_in_volume(Global_35, Local_127.f_24, true, 0))
				{
					func_1254(cParam0, "GNG1_FOLLOW_COMPANIONS", -1082130432, 0, 0, -1, -1, 0);
					if (!func_974(&((*Global_1360165)[11]->f_13), 8))
					{
						func_1293(11);
					}
					if (!func_974(&((*Global_1360165)[3]->f_13), 8))
					{
						func_1293(3);
					}
				}
				else
				{
					func_1254(cParam0, "GNG1_KILL_SIDE", -1082130432, 0, 0, -1, -1, 0);
				}
				func_134(cParam0, 11);
			}
			break;
		case 11:
			if (_does_volume_exist(Local_127.f_24) && is_entity_in_volume(Global_35, Local_127.f_24, true, 0))
			{
				if (func_974(&((*Global_1360165)[11]->f_13), 8))
				{
					if (func_974(&((*Global_1360165)[11]->f_13), 8))
					{
						func_513(11);
					}
					if (func_974(&((*Global_1360165)[3]->f_13), 8))
					{
						func_513(3);
					}
					func_1254(cParam0, "GNG1_KILL_SIDE", -1082130432, 0, 0, -1, -1, 0);
				}
			}
			if (((func_1238(&(uLocal_182[3]), vLocal_363, 3.5f, 1, 1) || func_1238(&(uLocal_182[3]), 2260.934f, -731.8542f, 41.0164f, 3.5f, 1, 1)) && (func_1238(&(uLocal_182[1]), vLocal_366, 4.5f, 1, 1) || func_1238(&(uLocal_182[1]), 2255.881f, -741.7477f, 41.4454f, 4.5f, 1, 1))) || func_1291(&uLocal_274) > 15000)
			{
				if (_does_volume_exist(iVar329))
				{
					if (!func_1238(Global_35, vLocal_363, 2.5f, 1, 1))
					{
						if (!func_1295(_0xf70f00013a62f866(iVar329), vLocal_363, 0.75f, 0))
						{
							func_1296(&(uLocal_182[3]), vLocal_363, 1);
						}
					}
					else if (!func_1295(_0xf70f00013a62f866(iVar329), 2260.934f, -731.8542f, 41.0164f, 0.75f, 0))
					{
						func_1296(&(uLocal_182[3]), 2260.934f, -731.8542f, 41.0164f, 1);
					}
				}
				if (_does_volume_exist(iVar330))
				{
					if (!func_1238(Global_35, vLocal_366, 2.5f, 1, 1))
					{
						if (!func_1295(_0xf70f00013a62f866(iVar330), vLocal_366, 0.75f, 0))
						{
							func_1296(&(uLocal_182[1]), vLocal_366, 1);
						}
					}
					else if (!func_1295(_0xf70f00013a62f866(iVar330), 2255.881f, -741.7477f, 41.4454f, 0.75f, 0))
					{
						func_1296(&(uLocal_182[1]), 2255.881f, -741.7477f, 41.4454f, 1);
					}
				}
				func_134(cParam0, 12);
			}
			break;
		case 12:
			if (func_1299())
			{
				if (_does_volume_exist(Local_127.f_24) && is_entity_in_volume(Global_35, Local_127.f_24, true, 0))
				{
					if (func_974(&((*Global_1360165)[11]->f_13), 8))
					{
						if (func_974(&((*Global_1360165)[11]->f_13), 8))
						{
							func_513(11);
						}
						if (func_974(&((*Global_1360165)[3]->f_13), 8))
						{
							func_513(3);
						}
						func_1254(cParam0, "GNG1_KILL_SIDE", -1082130432, 0, 0, -1, -1, 0);
						func_1258(cParam0, "GNG1_KILL_SIDE", 0, 7500, 1, -1082130432, 0, 0, -1, -1, 0);
					}
				}
				func_1281(cParam0, Local_14.f_64, "GNG1_SHOUTS3", "GNG1_PINKERTON6", 0);
				func_222(&uLocal_301);
				func_222(&uLocal_274);
				func_134(cParam0, 13);
			}
			break;
		case 13:
			if (((_does_volume_exist(Local_127.f_24) && !is_entity_in_volume(Global_35, Local_127.f_24, true, 0)) && func_223(&uLocal_301) >= 8000) && func_1298(cParam0, "GNG1_PUSH_R", 0, 0, 0))
			{
				if (!func_974(&((*Global_1360165)[11]->f_13), 8))
				{
					if (!func_974(&((*Global_1360165)[11]->f_13), 8))
					{
						func_1293(11);
					}
					if (!func_974(&((*Global_1360165)[3]->f_13), 8))
					{
						func_1293(3);
					}
					func_1254(cParam0, "GNG1_FOLLOW_COMPANIONS", -1082130432, 0, 0, -1, -1, 0);
				}
				func_222(&uLocal_301);
			}
			if (_does_volume_exist(Local_127.f_24) && !is_entity_in_volume(Global_35, Local_127.f_24, true, 0))
			{
				if (func_1291(&uLocal_274) >= 14000 && !func_1300("GNG1_FOLLOW_COMPANIONS", 1))
				{
					func_1258(cParam0, "GNG1_FOLLOW_COMPANIONS", 0, -1, 1, -1082130432, 0, 0, -1, -1, 0);
				}
			}
			if ((_does_volume_exist(Local_127.f_24) && is_entity_in_volume(Global_35, Local_127.f_24, true, 0)) || func_1284() <= 5)
			{
				_0xdd1232b332cbb9e7(3, 1, 0);
				_0x9851de7aec10b4e1(func_181(2, 0), 8f, 1, 1);
				if (func_974(&((*Global_1360165)[11]->f_13), 8))
				{
					if (func_974(&((*Global_1360165)[11]->f_13), 8))
					{
						func_513(11);
					}
					if (func_974(&((*Global_1360165)[3]->f_13), 8))
					{
						func_513(3);
					}
					func_1254(cParam0, "GNG1_KILL_SIDE", -1082130432, 0, 0, -1, -1, 0);
					if (func_215())
					{
						func_1258(cParam0, "GNG1_KILL_SIDE", 0, 7500, 1, -1082130432, 0, 0, -1, -1, 0);
					}
				}
				func_1281(cParam0, Local_14.f_53, "GNG1_SHOUTS6", "GNG1_PINKERTON6", 0);
				func_1281(cParam0, Local_14.f_64, "GNG1_SHOUTS6", "GNG1_PINKERTON6", 5.5f);
				if (func_1301(Local_14.f_53, 0) == 0 || func_1284() <= 10)
				{
					open_sequence_task(&uLocal_336);
					task_follow_nav_mesh_to_coord(0, 2234.832f, -769.4636f, 42.5299f, 2f, 20000, 0.25f, 131072, 40000f);
					func_1302(0, 2234.832f, -769.4636f, 42.5299f, func_181(2, 0), -1, 0, 0, 0, 0, 0, 0);
					close_sequence_task(iVar333);
					task_perform_sequence(&(uLocal_182[0]), iVar333);
					clear_sequence_task(&uLocal_336);
					open_sequence_task(&uLocal_336);
					task_follow_nav_mesh_to_coord(0, 2234.562f, -771.368f, 42.5199f, 2f, 20000, 0.25f, 131072, 40000f);
					func_1302(0, 2234.562f, -771.368f, 42.5199f, func_181(2, 0), -1, 0, 0, 0, 0, 0, 0);
					close_sequence_task(iVar333);
					task_perform_sequence(&(uLocal_182[2]), iVar333);
					clear_sequence_task(&uLocal_336);
					func_1281(cParam0, Local_14.f_53, "GNG1_SHOUTS5", "GNG1_PINKERTON5", 0);
					func_1281(cParam0, Local_14.f_64, "GNG1_SHOUTS5", "GNG1_PINKERTON5", 0);
					func_134(cParam0, 14);
				}
			}
			break;
		case 14:
			if (_does_volume_exist(iVar329))
			{
				if (!func_1238(Global_35, vLocal_363, 2.5f, 1, 1))
				{
					if (!func_1295(_0xf70f00013a62f866(iVar329), vLocal_363, 0.75f, 0))
					{
						func_1296(&(uLocal_182[3]), vLocal_363, 1);
					}
				}
				else if (!func_1295(_0xf70f00013a62f866(iVar329), 2260.934f, -731.8542f, 41.0164f, 0.75f, 0))
				{
					func_1296(&(uLocal_182[3]), 2260.934f, -731.8542f, 41.0164f, 1);
				}
			}
			if (_does_volume_exist(iVar330))
			{
				if (!func_1238(Global_35, vLocal_366, 2.5f, 1, 1))
				{
					if (!func_1295(_0xf70f00013a62f866(iVar330), vLocal_366, 0.75f, 0))
					{
						func_1296(&(uLocal_182[1]), vLocal_366, 1);
					}
				}
				else if (!func_1295(_0xf70f00013a62f866(iVar330), 2255.881f, -741.7477f, 41.4454f, 0.75f, 0))
				{
					func_1296(&(uLocal_182[1]), 2255.881f, -741.7477f, 41.4454f, 1);
				}
			}
			if (func_1284() <= 8)
			{
				func_1281(cParam0, Local_14.f_53, "GNG1_SHOUTS5", "GNG1_PINKERTON5", 0);
				func_1281(cParam0, Local_14.f_64, "GNG1_SHOUTS5", "GNG1_PINKERTON5", 5f);
				func_134(cParam0, 15);
			}
			break;
		case 15:
			if (_does_volume_exist(iVar329))
			{
				if (!func_1238(Global_35, vLocal_363, 2.5f, 1, 1))
				{
					if (!func_1295(_0xf70f00013a62f866(iVar329), vLocal_363, 0.75f, 0))
					{
						func_1296(&(uLocal_182[3]), vLocal_363, 1);
					}
				}
				else if (!func_1295(_0xf70f00013a62f866(iVar329), 2260.934f, -731.8542f, 41.0164f, 0.75f, 0))
				{
					func_1296(&(uLocal_182[3]), 2260.934f, -731.8542f, 41.0164f, 1);
				}
			}
			if (_does_volume_exist(iVar330))
			{
				if (!func_1238(Global_35, vLocal_366, 2.5f, 1, 1))
				{
					if (!func_1295(_0xf70f00013a62f866(iVar330), vLocal_366, 0.75f, 0))
					{
						func_1296(&(uLocal_182[1]), vLocal_366, 1);
					}
				}
				else if (!func_1295(_0xf70f00013a62f866(iVar330), 2255.881f, -741.7477f, 41.4454f, 0.75f, 0))
				{
					func_1296(&(uLocal_182[1]), 2255.881f, -741.7477f, 41.4454f, 1);
				}
			}
			if (!_0xa2cac9def0195e6f(0))
			{
				if ((func_1284() <= 5 && !func_1303()) || func_1284() <= 4)
				{
					func_1223(cParam0, "GNG1_WRECK_PUSH", 0);
					if (_does_volume_exist(iVar329))
					{
						if (!func_1238(Global_35, vLocal_369, 2f, 1, 1))
						{
							if (!func_1295(_0xf70f00013a62f866(iVar329), vLocal_369, 0.75f, 0))
							{
								func_1296(&(uLocal_182[3]), vLocal_369, 0);
							}
						}
						else if (!func_1295(_0xf70f00013a62f866(iVar329), 2277.41f, -737.9014f, 40.4838f, 0.75f, 0))
						{
							func_1296(&(uLocal_182[3]), 2277.41f, -737.9014f, 40.4838f, 0);
						}
					}
					if (_does_volume_exist(iVar330))
					{
						if (!func_1238(Global_35, vLocal_372, 2.5f, 1, 1))
						{
							if (!func_1295(_0xf70f00013a62f866(iVar330), vLocal_372, 0.75f, 0))
							{
								func_1296(&(uLocal_182[1]), vLocal_372, 0);
							}
						}
						else if (!func_1295(_0xf70f00013a62f866(iVar330), 2281.51f, -739.9014f, 41.4838f, 0.75f, 0))
						{
							func_1296(&(uLocal_182[1]), 2281.51f, -739.9014f, 41.4838f, 0);
						}
					}
					if (does_blip_exist(iVar356))
					{
						remove_blip(&iLocal_359);
					}
					func_135(cParam0, 5);
					func_1254(cParam0, "GNG1_KILL_SIDE", -1082130432, 0, 0, -1, -1, 0);
					func_134(cParam0, 16);
				}
			}
			break;
		case 16:
			func_1281(cParam0, Local_14.f_53, "GNG1_SHOUTS2", "GNG1_PINKERTON2", 2f);
			func_1281(cParam0, Local_14.f_64, "GNG1_SHOUTS2", "GNG1_PINKERTON2", 6f);
			if ((func_1284() <= 2 && !_0xb16223cb7da965f0(player_id())) && func_1223(cParam0, "GNG1_RETURN", 0))
			{
				_0xdd1232b332cbb9e7(3, 1, 0);
				func_1254(cParam0, "GNG1_GET_TO_THE_GUN", -1082130432, 0, 0, -1, -1, 0);
				if (!does_blip_exist(iVar356))
				{
					iLocal_359 = func_1253(408396114, func_181(2, 0), 1);
					set_blip_sprite(iVar356, 2120954438, false);
					set_blip_name_from_text_file(iVar356, "GNG1_BLIP_GUN");
				}
				func_134(cParam0, 17);
			}
			break;
		case 17:
			if (!func_1292("GNG1_RETURN"))
			{
				func_135(cParam0, 4);
				func_895(1, 180);
				func_1304(1, 1);
				func_222(&uLocal_301);
				func_222(&uLocal_274);
				func_1258(cParam0, "GNG1_GET_TO_THE_GUN", 0, 10000, 1, -1082130432, 0, 0, -1, -1, 0);
				func_134(cParam0, 29);
			}
			break;
		case 29:
			if (func_223(&uLocal_301) >= 16500)
			{
				if (!func_1305())
				{
					func_1223(cParam0, "GNG1_GO_TO_GUN", 0);
					func_222(&uLocal_301);
				}
			}
			if (func_223(&uLocal_274) >= 18500 && !func_1305())
			{
				func_1258(cParam0, "GNG1_GET_TO_THE_GUN", 0, 7500, 1, -1082130432, 0, 0, -1, -1, 0);
			}
			if ((func_1238(&(uLocal_182[1]), func_181(1, 16), 20f, 1, 1) && func_1238(&(uLocal_182[3]), func_181(1, 17), 20f, 1, 1)) && !func_1238(Global_35, func_181(2, 0), 31f, 1, 1))
			{
				func_1306();
				func_1220(Local_14.f_73, 1);
			}
			if (((func_1238(Global_35, func_181(2, 0), 7f, 1, 1) || func_223(&uLocal_274) >= 32500) && func_1306()) && func_1307())
			{
				func_1308();
				if (does_blip_exist(iVar356))
				{
					remove_blip(&iLocal_359);
				}
				return 1;
			}
			break;
	}
	return 0;
}

int func_761(var uParam0)
{
	func_178(Local_14.f_14);
	func_178(Local_14.f_22);
	func_414(&iLocal_168, 524288);
	func_164();
	return 1;
}

int func_762(var uParam0)
{
	if (!func_1307())
	{
		return 0;
	}
	if (!does_entity_exist(iLocal_201))
	{
		return 0;
	}
	if (does_entity_exist(iLocal_201) && !func_1309(Global_35, iLocal_201, 1))
	{
		set_entity_coords(Global_35, 2250.929f, -769.8284f, 41.7654f, true, false, true, true);
		func_1310(Global_35, iLocal_201, -1, 3f, 5000, 2);
		return 0;
	}
	func_1243(&(uLocal_182[3]), func_225(1, 8), 2, 1073741824);
	func_1243(&(uLocal_182[1]), func_225(1, 32), 2, 1073741824);
	if (!_is_imap_active(-98843293))
	{
		if (!_is_position_inside_imap_streaming_extents(-98843293, Global_36))
		{
			_request_imap(-98843293);
		}
	}
	func_1218(0, 1, 0);
	set_clock_time(21, 0, 0);
	_set_weather_type(2082228755, true, true, false, 0f, false);
	_set_weather_type_frozen(true);
	pause_clock(true, 0);
	_set_rain_level(0.5f);
	func_1260(Global_35, -183018591, 1, 0, 0, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
	return 1;
}

int func_763(var uParam0)
{
	if (!func_165(Global_35, 0))
	{
		return 0;
	}
	func_1311(-1, 0);
	set_ped_config_flag(Global_35, 263, true);
	set_ai_weapon_damage_modifier(0.5f);
	func_140(uParam0, func_33(uParam0), 16777216);
	return 1;
}

int func_764(char[4] cParam0)
{
	_add_ammo_to_ped(Global_35, -183018591, 120, 752097756);
	if (!func_1209())
	{
		return 0;
	}
	_0x24db6b9f2b719043(2.5f);
	func_1312();
	func_1313();
	if (!func_8(cParam0, 8))
	{
		func_1243(&(uLocal_182[2]), func_225(1, 3), 2, 1073741824);
		func_1243(&(uLocal_182[0]), func_225(1, 0), 2, 1073741824);
		open_sequence_task(&uLocal_336);
		task_follow_nav_mesh_to_coord(0, 2234.832f, -769.4636f, 42.5299f, 2f, 20000, 0.25f, 131072, 40000f);
		func_1302(0, 2234.832f, -769.4636f, 42.5299f, func_181(2, 0), -1, 0, 0, 0, 0, 0, 0);
		close_sequence_task(iVar333);
		task_perform_sequence(&(uLocal_182[0]), iVar333);
		clear_sequence_task(&uLocal_336);
		open_sequence_task(&uLocal_336);
		task_follow_nav_mesh_to_coord(0, 2234.562f, -771.368f, 42.5199f, 2f, 20000, 0.25f, 131072, 40000f);
		func_1302(0, 2234.562f, -771.368f, 42.5199f, func_181(2, 0), -1, 0, 0, 0, 0, 0, 0);
		close_sequence_task(iVar333);
		task_perform_sequence(&(uLocal_182[2]), iVar333);
		clear_sequence_task(&uLocal_336);
	}
	set_player_control(player_id(), false, 256, false);
	func_172(675165849, 0, 0, 0, 1, 0, 0, 0);
	func_172(57906928, 0, 0, 0, 1, 0, 0, 0);
	func_172(-1187306838, 0, -1f, 1, 1, 0, 0, 0);
	func_172(-875247651, 0, 1f, 1, 1, 0, 0, 0);
	set_vehicle_is_considered_by_player(iLocal_201, true);
	func_383(cParam0, 142606336);
	func_420(cParam0, &(Local_14.f_79[0]), "P_CART01X", 0, 0, 0, 0);
	if (func_120(cParam0, 4) && !func_128(cParam0, 2))
	{
		func_1258(cParam0, "GNG1_KILL", 0, 7500, 0, -1082130432, 0, 0, -1, -1, 0);
	}
	_0x1d77b47afa584e90(player_id(), -1, 1);
	func_1314(12);
	func_983(12, 1, 1, 1, 0);
	func_1304(1, 1);
	func_222(&uLocal_304);
	func_1315(&(cParam0->f_7375), "1-ifOnGun", 0);
	func_1315(&(cParam0->f_7375), "2-ifNotOnGun", 0);
	if (!func_8(cParam0, 8))
	{
		func_321(-183018591, 1, 1, 1, 0, -334626412, 0, 0, 0, 0);
		_add_ammo_to_ped(Global_35, -183018591, 50, 752097756);
		if (!does_pickup_exist(iVar321))
		{
			iLocal_324 = create_pickup_rotate(1961725845, 2255.4f, -754.13f, 42.58506f, 90.29f, 180f, 90.81f, 16 | 1048576, -1, 2, true, 0, 0, 0f, 0);
		}
	}
	set_entity_proofs(&(uLocal_182[3]), 6, false);
	set_entity_proofs(&(uLocal_182[1]), 6, false);
	_0x83c989d5b5b5b466(player_id(), 1.5f);
	_0x67659a8f248e0141(player_id(), 1.75f);
	return 1;
}

int func_765(char[4] cParam0)
{
	if (func_1266(&uLocal_304, 20f))
	{
		func_1267(cParam0, &(uLocal_182[0]), 1, 1);
		func_1267(cParam0, &(uLocal_182[3]), 1, 1);
		func_1267(cParam0, &(uLocal_182[1]), 1, 1);
	}
	else
	{
		func_1267(cParam0, &(uLocal_182[0]), 0, 1);
		func_1267(cParam0, &(uLocal_182[3]), 0, 1);
		func_1267(cParam0, &(uLocal_182[1]), 0, 1);
	}
	if (func_1309(Global_35, iLocal_201, 0))
	{
		_0x9c113883487fd53c(347777538, 898171178);
		if (!is_ped_shooting(Global_35) && func_1229(cParam0) != 29)
		{
			if (!bVar263)
			{
				func_1251(cParam0, "GNG1_GUN_DWD_S", 12f);
				iLocal_266 = 1;
			}
			else
			{
				func_1251(cParam0, "GNG1_GUN_DWD_B", 12f);
				iLocal_266 = 0;
			}
		}
		if (func_1316(&uLocal_310, 1102315520))
		{
			func_1267(cParam0, &(uLocal_182[0]), 1, 1);
			func_1267(cParam0, &(uLocal_182[3]), 1, 1);
			func_1267(cParam0, &(uLocal_182[1]), 1, 1);
		}
		else
		{
			func_1267(cParam0, &(uLocal_182[0]), 0, 1);
			func_1267(cParam0, &(uLocal_182[3]), 0, 1);
			func_1267(cParam0, &(uLocal_182[1]), 0, 1);
		}
	}
	else
	{
		func_222(&uLocal_310);
	}
	func_1317(cParam0);
	func_1269(Local_14.f_53);
	func_1269(Local_14.f_64);
	func_1269(Local_14.f_73);
	func_1269(Local_14.f_1);
	func_1269(Local_14.f_8);
	func_1269(Local_14.f_42);
	func_1269(Local_14.f_47);
	func_1269(Local_14.f_33);
	if (does_entity_exist(iLocal_201) && is_ped_in_vehicle(Global_35, iLocal_201, false))
	{
		set_entity_proofs(Global_35, 38, false);
		if (can_knock_ped_off_vehicle(Global_35))
		{
			set_ped_can_be_knocked_off_vehicle(Global_35, 1);
		}
	}
	else
	{
		set_ped_can_be_knocked_off_vehicle(Global_35, 0);
		set_entity_proofs(Global_35, 0, false);
	}
	if (does_entity_exist(iLocal_201) && is_ped_in_vehicle(Global_35, iLocal_201, false))
	{
		func_1270(Local_14.f_64);
		func_1270(Local_14.f_64);
		func_1270(Local_14.f_1);
		func_1270(Local_14.f_8);
		func_1270(Local_14.f_42);
		func_1270(Local_14.f_47);
		func_1270(Local_14.f_33);
		set_gameplay_cam_shake_amplitude(0.25f);
	}
	if (func_1229(cParam0) < 3)
	{
		disable_control_action(0, 1101824977, true);
		disable_control_action(0, -349518703, true);
		disable_control_action(0, -1098542161, true);
		disable_control_action(0, -432665970, true);
	}
	else
	{
		func_1318();
		if (func_1238(&(uLocal_182[3]), func_181(1, 17), 3f, 1, 1))
		{
			func_1319();
		}
		if (func_1238(&(uLocal_182[1]), func_181(1, 16), 3f, 1, 1))
		{
			func_1320();
		}
	}
	func_1321(cParam0);
	func_1226(cParam0);
	switch (func_1229(cParam0))
	{
		case 0:
			if (func_258(Local_14.f_1))
			{
				iVar0 = 0;
				while (iVar0 < 4)
				{
					if (func_165(&(Local_14.f_3[iVar0]), 0) && !func_8(cParam0, 8))
					{
						func_1243(&(Local_14.f_3[iVar0]), func_495(13, iVar0), 2, 1073741824);
					}
					iVar0++;
				}
				func_1322();
				func_134(cParam0, 1);
				func_1323(&iLocal_168, 2048);
				func_895(0, 180);
			}
			break;
		case 1:
			set_vehicle_is_considered_by_player(iLocal_201, true);
			func_1281(cParam0, Local_14.f_1, "GNG1_SHOUTS4", "GNG1_PINKERTON4", 0);
			func_222(&uLocal_274);
			func_134(cParam0, 3);
			break;
		case 3:
			if (func_1284() <= 3 || func_1279(&uLocal_274) > 60f)
			{
				func_1281(cParam0, Local_14.f_1, "GNG1_SHOUTS3", "GNG1_PINKERTON3", 0);
				func_134(cParam0, 4);
			}
			break;
		case 4:
			if (func_1324())
			{
				func_1325(1);
				func_222(&uLocal_274);
				if (is_ped_in_vehicle(Global_35, iLocal_201, false))
				{
					func_135(cParam0, 2);
				}
				func_134(cParam0, 5);
			}
			break;
		case 5:
			if (func_1284() <= 3 || func_1279(&uLocal_274) > 40f)
			{
				func_134(cParam0, 6);
			}
			break;
		case 6:
			if (func_1326())
			{
				func_1325(2);
				func_222(&uLocal_274);
				func_134(cParam0, 7);
			}
			break;
		case 7:
			if (func_1284() <= 4 || func_1279(&uLocal_274) > 30f)
			{
				func_134(cParam0, 8);
			}
			break;
		case 8:
			if (func_1327())
			{
				func_1325(3);
				func_222(&uLocal_274);
				func_135(cParam0, 3);
				func_134(cParam0, 9);
			}
			break;
		case 9:
			if (func_1284() <= 5 || func_1279(&uLocal_274) > 60f)
			{
				func_547(&uLocal_274);
				func_134(cParam0, 10);
			}
			break;
		case 10:
			if (func_1328() && func_1223(cParam0, "GNG1_MORE", 0))
			{
				func_1325(2);
				func_134(cParam0, 11);
			}
			break;
		case 11:
			if ((func_1284() - (func_1301(Local_14.f_64, 0) + func_1301(Local_14.f_53, 0))) <= 3)
			{
				func_135(cParam0, 51);
				func_1329();
				func_1330(Local_14.f_1);
				func_1330(Local_14.f_8);
				func_1330(Local_14.f_42);
				func_1330(Local_14.f_47);
				func_1330(Local_14.f_33);
				func_27(&uLocal_274, 1);
				_set_weather_type(-416908843, false, false, true, 6f, false);
				disable_control_action(0, -17122892, false);
				func_134(cParam0, 12);
				func_135(cParam0, 4);
			}
			break;
		case 12:
			disable_control_action(0, -17122892, false);
			if (!func_1331() || func_1279(&uLocal_274) > 5.5f)
			{
				_0xe296208c273bd7f0(-1, -1, 0, 17, 1, 0);
				func_222(&uLocal_274);
				func_134(cParam0, 29);
			}
			break;
		case 29:
			_0xe296208c273bd7f0(-1, -1, 0, 17, 1, 0);
			disable_control_action(0, -17122892, false);
			if (func_1279(&uLocal_274) >= 2.5f)
			{
				_0xae637bb8ef017875(player_id(), 1);
				if (func_1309(Global_35, iLocal_201, 0))
				{
					func_1332(0);
				}
				if (!func_391(iLocal_168, 8192))
				{
					if (func_1309(Global_35, iLocal_201, 0))
					{
						sLocal_273 = "1-ifOnGun";
					}
					else
					{
						sLocal_273 = "2-ifNotOnGun";
					}
					if (_0x23e33cb9f4a3f547(cParam0->f_7375.f_804, sVar270))
					{
						func_1333(cParam0, sVar270);
						func_1334(cParam0, sVar270);
						func_414(&iLocal_168, 8192);
					}
				}
			}
			if (func_1279(&uLocal_274) >= 5f && func_391(iLocal_168, 8192))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_766(var uParam0)
{
	_0xe296208c273bd7f0(-1, -1, 0, 17, 1, 0);
	if (!_is_metaped_outfit_request_valid(iVar323))
	{
		iLocal_326 = _request_metaped_outfit(737910671, -245346160);
	}
	if (!_0x610438375e5d1801(iVar323))
	{
		return 0;
	}
	_0x9851de7aec10b4e1(2245.283f, -768.0008f, 42.0784f, 8f, 1, 0);
	func_414(&iLocal_168, 524288);
	return 1;
}

int func_767(char[4] cParam0)
{
	if (!_is_metaped_outfit_request_valid(iVar323))
	{
		iLocal_326 = _request_metaped_outfit(737910671, -245346160);
	}
	if (!_0x610438375e5d1801(iVar323))
	{
		return 0;
	}
	func_1334(cParam0, "GNG1_EXT");
	if (!_is_imap_active(-98843293))
	{
		if (!_is_position_inside_imap_streaming_extents(-98843293, Global_36))
		{
			_request_imap(-98843293);
		}
	}
	func_883();
	set_clock_time(21, 0, 0);
	_set_weather_type(-416908843, true, true, false, 0f, false);
	_set_weather_type_frozen(true);
	pause_clock(true, 0);
	func_1260(Global_35, -183018591, 1, 0, 0, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
	return 1;
}

int func_768(char[4] cParam0)
{
	if (!func_1335(-1, 0))
	{
		return 0;
	}
	set_entity_visible(&(Local_14.f_62[0]), false);
	if (_is_metaped_outfit_request_valid(iVar323) && does_entity_exist(&(Local_14.f_62[0])))
	{
		_apply_ped_metaped_outfit(iVar323, &(Local_14.f_62[0]), true, false);
		_update_ped_variation(&(Local_14.f_62[0]), false, true, true, true, false);
	}
	iVar0 = 0;
	func_776(&iVar0, 0, 2, 0, 0, 0, 0);
	iVar1 = 0;
	while (iVar1 < 15)
	{
		if (func_165(&(uLocal_182[iVar1]), 0))
		{
			freeze_entity_position(&(uLocal_182[iVar1]), false);
			_set_ped_crouch_movement(&(uLocal_182[iVar1]), false, 0, false);
		}
		iVar1++;
	}
	func_172(57906928, 0, 0, 0, 1, 0, 0, 0);
	func_166(0);
	func_383(cParam0, 142606336);
	func_383(cParam0, 1024);
	func_383(cParam0, 524288);
	func_1(cParam0, 4);
	if (!func_8(cParam0, 8))
	{
		func_1333(cParam0, "1-ifOnGun");
		func_1334(cParam0, "1-ifOnGun");
		sLocal_273 = "1-ifOnGun";
	}
	func_420(cParam0, &(Local_14.f_79[0]), "P_CART01X", 0, 0, 0, 0);
	func_1336(cParam0);
	func_1216(&(uLocal_182[3]), 2077870112);
	hide_ped_weapon_for_scripted_cutscene(&(uLocal_182[3]), true);
	func_1216(&(uLocal_182[1]), -665597951);
	hide_ped_weapon_for_scripted_cutscene(&(uLocal_182[1]), true);
	func_1216(&(uLocal_182[13]), 2031861036);
	func_1260(&(uLocal_182[11]), 1845102363, 1, 0, 0, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
	func_1217(&(cParam0->f_7375), &(uLocal_182[11]), 8);
	_set_rain_level(-1f);
	if (is_screen_faded_out())
	{
		do_screen_fade_in(1000);
	}
	return 1;
}

int func_769(var uParam0)
{
	_0x1b70811d3bf75db9(1, 1);
	if (!is_screen_faded_out())
	{
		do_screen_fade_out(0);
	}
	func_515(11, 0, 1, 1, -1082130432, 1, 1, 0, 0, 0, 0);
	func_851(&(uLocal_182[7]), 2228.702f, -769.4835f, 43.5126f, 137.6647f, 1, 1073741824);
	clear_ped_tasks(Global_35, 1, 0);
	func_515(0, 0, 1, 1, -1082130432, 1, 1, 0, 0, 0, 0);
	func_515(19, 0, 0, 1, -1082130432, 1, 1, 0, 0, 0, 0);
	func_515(17, 0, 0, 1, -1082130432, 1, 1, 0, 0, 0, 0);
	func_1337(302, 60, 1, 0, 0);
	func_1338(0);
	return 1;
}

int func_770(char[4] cParam0)
{
	_0x1b70811d3bf75db9(1, 1);
	switch (func_1229(cParam0))
	{
		case 0:
			if (!is_screen_faded_out())
			{
				do_screen_fade_out(0);
			}
			return 1;
	}
	return 0;
}

int func_771(var uParam0)
{
	func_167(uParam0);
	do_screen_fade_out(0);
	func_1339(1);
	func_1340(uParam0, -1, 0);
	func_1341(0);
	func_1342();
	_0x9851de7aec10b4e1(func_181(2, 0), 100f, 1, 1);
	_0x1b70811d3bf75db9(1, 1);
	return 1;
}

bool func_772(var uParam0, int iParam1)
{
	return (uParam0->f_8 && iParam1) != 0;
}

bool func_773(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

Vector3 func_774(var uParam0)
{
	return uParam0->f_862;
}

void func_775(var uParam0)
{
	if (func_1343(&iVar0))
	{
		if (func_572(iVar0, 0))
		{
			if (func_596(iVar0) == -525676072)
			{
				_set_ped_component_disabled(Global_35, 1249071452, 0);
				func_624(Global_35, -2065815962, 0, 1108822547, 0, 1, 0, 0, 0, 0);
			}
			else
			{
				_set_ped_component_disabled(Global_35, 1606587013, 0);
			}
			if (!func_572(*uParam0, 0))
			{
				*uParam0 = iVar0;
			}
		}
	}
}

void func_776(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (Global_1935630->f_12)
	{
		return;
	}
	Global_16 = 1;
	if (!network_is_game_in_progress())
	{
		func_119(0, 0);
		func_1344(-1);
	}
	func_1345(1);
	set_entity_invincible(Global_35, true);
	if (!func_773(*iParam0, 32))
	{
		iParam1 |= 16;
	}
	if (!func_773(*iParam0, 64))
	{
		iParam1 |= 8;
	}
	if (!func_773(*iParam0, 128))
	{
		iParam1 |= 32;
	}
	if (func_773(*iParam0, 131072))
	{
		iParam1 |= 2048;
	}
	if (!func_773(*iParam0, 32768))
	{
		set_player_control(get_player_index(), false, iParam1, true);
	}
	if (!func_773(*iParam0, 1))
	{
		_0xf239400e16c23e08(0, 0);
	}
	if (!func_773(*iParam0, 65536))
	{
		set_everyone_ignore_player(player_id(), true);
	}
	if (!func_773(*iParam0, 4) && !func_773(*iParam0, 2))
	{
		_hide_hud_component(-1679307491);
	}
	else
	{
		_display_hud_component(-1679307491);
	}
	if (!func_773(*iParam0, 2048))
	{
		func_788(0, 0);
	}
	if (func_773(*iParam0, 8))
	{
		clear_ped_tasks_immediately(Global_35, false, true);
	}
	if (func_773(*iParam0, 256))
	{
		_hide_ped_weapons(Global_35, 2, true);
	}
	if (func_773(*iParam0, 8192))
	{
		func_1346();
	}
	if (!func_773(*iParam0, 262144))
	{
		set_ped_reset_flag(Global_35, 264, true);
	}
	if (!func_773(*iParam0, 512))
	{
		if (is_gameplay_hint_active())
		{
			stop_gameplay_hint(false);
		}
	}
	if (!func_773(*iParam0, 1024))
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
		if (!func_773(*iParam0, 16))
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
						if (func_1347() == iVar7)
						{
							bVar8 = true;
						}
					}
					vVar3.x = iParam3;
					vVar3.f_1 = iParam4;
					vVar3.f_2 = iParam5;
					if (func_396(vVar3))
					{
						vVar3 = { get_offset_from_entity_in_world_coords(Global_35, 0f, IntToFloat((-1 + iVar2)), 0f) };
						func_1348(&vVar3, 50, 10, 0);
					}
					_0xed00d72f81cf7278(iVar7, 0, 1);
					set_entity_coords(iVar7, vVar3, false, true, true, true);
					if (bVar8)
					{
						func_1349(2);
						func_1350(-1);
						func_1351(vVar3);
						func_1353(func_1352());
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
	if (!func_773(*iParam0, 4096))
	{
		func_1354(Global_35);
	}
	if (!func_773(*iParam0, 1048576))
	{
		_0xdd1232b332cbb9e7(7, 1, 0);
	}
	if (!func_773(*iParam0, 2097152))
	{
		if (func_1355() || _0x50f124e6ef188b22(Global_35))
		{
			func_1356(1);
		}
	}
	if (Global_1359489->f_16 & 4194304 == 0)
	{
		Global_1359489->f_16 |= 4194304;
	}
	*iParam0 = 0;
}

void func_777(var uParam0, vector3 vParam1)
{
	uParam0->f_862 = { vParam1 };
}

void func_778(var uParam0)
{
	if (func_772(uParam0, 2048) && !func_396(func_1357(uParam0)))
	{
		bVar0 = _does_volume_exist(uParam0->f_4);
		iVar1 = _get_last_mount(Global_35);
		if ((!is_entity_dead(iVar1) && ((bVar0 && is_entity_in_volume(iVar1, uParam0->f_4, true, 0)) || func_772(uParam0, -2147483648))) && get_mount(Global_35) != iVar1)
		{
			iVar2 = 2;
			if (is_ped_in_writhe(iVar1))
			{
				iVar2 |= 32;
			}
			func_851(iVar1, func_1357(uParam0), func_1358(uParam0), iVar2, 1073741824);
		}
		iVar3 = get_players_last_vehicle();
		if ((!is_entity_dead(iVar3) && ((bVar0 && is_entity_in_volume(iVar3, uParam0->f_4, true, 0)) || func_772(uParam0, -2147483648))) && !is_ped_in_vehicle(Global_35, iVar3, true))
		{
			func_851(iVar3, func_1357(uParam0), func_1358(uParam0), 2, 1073741824);
		}
	}
}

void func_779(var uParam0)
{
	if ((func_772(uParam0, 268435456) && !func_396(func_1357(uParam0))) && is_ped_in_any_vehicle(Global_35, false))
	{
		iVar0 = get_vehicle_ped_is_using(Global_35);
		if (!is_entity_dead(iVar0))
		{
			vVar1 = { func_1357(uParam0) };
			func_851(iVar0, vVar1, func_1359(vVar1, Global_36, 1), 2, 1073741824);
			set_vehicle_on_ground_properly(iVar0, 0f);
			set_entity_velocity(iVar0, 0f, 0f, 0f);
			set_vehicle_forward_speed(iVar0, 0f);
		}
	}
}

void func_780(var uParam0, vector3 vParam1, int iParam4, bool bParam5)
{
	uParam0->f_865 = { vParam1 };
	uParam0->f_868 = iParam4;
	if (func_396(vParam1))
	{
		func_1360(uParam0, 2048, 1);
	}
	else
	{
		func_743(uParam0, 2048);
		if (bParam5)
		{
			func_743(uParam0, -2147483648);
		}
	}
}

void func_781(var uParam0)
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
					if (!func_1361(uParam0->f_13[iVar0], 8))
					{
						if (func_686(func_1060(iVar1, 0, 1, 0)))
						{
							if (!func_1362(uParam0, get_current_ped_weapon_entity_index(iVar1, 0)))
							{
								set_current_ped_weapon(iVar1, -1569615261, true, 0, false, false);
							}
						}
						if (func_686(func_1060(iVar1, 1, 1, 0)))
						{
							if (!func_1362(uParam0, get_current_ped_weapon_entity_index(iVar1, 1)))
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

void func_782(var uParam0, bool bParam1)
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

void func_783(var uParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
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
			func_1157(262144);
		}
	}
	else
	{
		bParam6 = false;
		if (iParam3 == -1 || iParam3 == 8)
		{
			func_1363(iParam1, 29, bVar4, 1, 0);
			func_1363(iParam1, 31, bVar4, 1, 0);
			func_1363(iParam1, 30, bVar4, 1, 0);
			func_1363(iParam1, 22, bVar4, 1, 0);
			func_1363(iParam1, 37, bVar4, 1, 0);
		}
	}
	if ((func_1097(32768) && func_1364(1108822547, 8)) && func_1365(10, iParam3))
	{
		func_1366(iParam1, 0, 1);
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
			iVar3 = func_1165(iVar1, 1);
			if (func_1364(iVar3, 8))
			{
			}
			else if (&Global_1946804->f_57[iVar1]->f_2[0] == -1802376732 || &uParam0->f_1[iVar1] == 0)
			{
			}
			else
			{
				iVar2 = &uParam0->f_1[iVar1];
				if (!func_1365(iVar1, iParam3))
				{
				}
				else if ((func_1364(iVar3, 6) || &uParam0->f_1[iVar1] == &Global_1946804->f_57[iVar1]) || uParam0->f_1[iVar1]->f_1 == 289238755)
				{
					if (!func_1364(iVar3, 1) || bParam2)
					{
						Global_1946804->f_857++;
						if (!bParam6)
						{
							func_1363(iParam1, iVar1, bVar4, 1, 0);
						}
						if (uParam0->f_1[iVar1]->f_1 == 289238755)
						{
							Global_1946804->f_2456[iVar1]->f_1 = 289238755;
						}
						func_1367(iVar3, 1, 6);
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
								func_1363(iParam1, iVar1, bVar4, 1, &(uParam0->f_1[iVar1]));
							}
							Global_1946804->f_2456[iVar1] = &uParam0->f_1[iVar1];
							Global_1946804->f_2456[iVar1]->f_1 = uParam0->f_1[iVar1]->f_1;
							if (func_1364(iVar3, 1))
							{
								func_1368(iVar3, 1, 6);
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

bool func_784(int iParam0)
{
	switch (iParam0)
	{
		case 14:
		case 34:
			return !func_1369((*Global_1835011)[iParam0]);
	}
	return false;
}

Vector3 func_785(int iParam0)
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

int func_786(int iParam0, bool bParam1, int iParam2, bool bParam3)
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

int func_787(int iParam0, int iParam1)
{
	return func_1370(&uVar0, iParam0, iParam1);
}

void func_788(bool bParam0, bool bParam1)
{
	iVar2 = 0;
	while (iVar2 < 29)
	{
		iVar4 = iVar2;
		if (get_current_ped_weapon(Global_35, &iVar3, false, iVar4, true))
		{
			if (func_686(iVar3) && _0x705be297eebdb95d(iVar3))
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
		func_1339(1);
	}
}

void func_789(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
}

void func_790(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_1 = 0;
}

void func_791(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
}

void func_792(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
}

void func_793(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

void func_794(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

void func_795(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
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
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

void func_799(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
}

int func_800(var uParam0, int iParam1)
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

int func_801(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (!func_809((*uParam0)[iVar0]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_802(var uParam0, char* sParam1)
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

int func_803(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 40)
	{
		if (!func_811((*uParam0)[iVar0]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_804(int iParam0, int iParam1)
{
	iVar0 = func_1371(iParam1);
	return (iParam0 && iVar0) != 0;
}

int func_805(var uParam0, char* sParam1, int iParam2)
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

int func_806(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (!func_818((*uParam0)[iVar0]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_807(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_808(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 || iParam1);
}

bool func_809(var uParam0)
{
	return *uParam0 != 0;
}

void func_810(var uParam0)
{
	if (!func_840(uParam0->f_1, 1))
	{
		request_model(*uParam0, false);
		func_807(&(uParam0->f_1), 1);
	}
}

bool func_811(var uParam0)
{
	return !is_string_null_or_empty(*uParam0);
}

void func_812(var uParam0)
{
	if (!func_840(uParam0->f_3, 1))
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
		func_807(&(uParam0->f_3), 1);
	}
}

bool func_813(var uParam0)
{
	return !is_string_null_or_empty(*uParam0);
}

void func_814(var uParam0)
{
	if (!func_840(uParam0->f_1, 1))
	{
		request_anim_dict(*uParam0);
		func_807(&(uParam0->f_1), 1);
	}
}

bool func_815(var uParam0)
{
	return !is_string_null_or_empty(*uParam0);
}

bool func_816(var uParam0)
{
	if (func_840(uParam0->f_1, 2))
	{
		return true;
	}
	if (!func_840(uParam0->f_1, 1))
	{
		func_1372(uParam0);
	}
	if (_0x85b8f04555ab49b8(*uParam0))
	{
		func_807(&(uParam0->f_1), 2);
		return true;
	}
	return false;
}

bool func_817(var uParam0)
{
	if (func_840(*uParam0, 2))
	{
		return true;
	}
	if (!func_840(*uParam0, 1))
	{
		func_1373(uParam0);
	}
	if (has_ptfx_asset_loaded())
	{
		func_807(uParam0, 2);
		return true;
	}
	return false;
}

bool func_818(var uParam0)
{
	return !is_string_null_or_empty(*uParam0);
}

void func_819(var uParam0)
{
	if (!func_840(uParam0->f_2, 1))
	{
		if (func_1374(uParam0))
		{
			if (_is_anim_scene_metadata_loaded(uParam0->f_1, false))
			{
				sVar0 = func_1375(get_entity_model(Global_35));
				if (_0x6f1f0b17109309da(uParam0->f_1, sVar0))
				{
					set_anim_scene_entity(uParam0->f_1, sVar0, Global_35, 0);
				}
				else if (_0x6f1f0b17109309da(uParam0->f_1, "player_zero") && func_307())
				{
					set_anim_scene_entity(uParam0->f_1, "player_zero", Global_35, 0);
				}
				else if (_0x6f1f0b17109309da(uParam0->f_1, "player_three") && func_1017())
				{
					set_anim_scene_entity(uParam0->f_1, "player_three", Global_35, 0);
				}
				load_anim_scene(uParam0->f_1);
				func_807(&(uParam0->f_2), 1);
			}
		}
	}
}

bool func_820(var uParam0)
{
	return !is_string_null_or_empty(*uParam0);
}

void func_821(var uParam0, int iParam1)
{
	if (!func_840(uParam0->f_1, 1))
	{
		if (!_is_anim_scene_loaded(iParam1, true, false))
		{
			return;
		}
		_0xdf7b5144e25cd3fe(iParam1, *uParam0);
		func_807(&(uParam0->f_1), 1);
	}
}

bool func_822(var uParam0)
{
	return *uParam0 != 0;
}

void func_823(var uParam0)
{
	if (!func_840(uParam0->f_2, 1))
	{
		_request_propset(*uParam0);
		func_807(&(uParam0->f_2), 1);
	}
}

bool func_824(var uParam0)
{
	return *uParam0 != 0;
}

void func_825(var uParam0)
{
	if (!func_840(uParam0->f_3, 1))
	{
		_0x72d4cb5db927009c(*uParam0, uParam0->f_1, uParam0->f_2);
		func_807(&(uParam0->f_3), 1);
	}
}

bool func_826(var uParam0)
{
	return !is_string_null_or_empty(*uParam0);
}

void func_827(var uParam0)
{
	if (!func_840(uParam0->f_1, 1))
	{
		request_script_audio_bank(*uParam0);
		func_807(&(uParam0->f_1), 1);
	}
}

bool func_828(var uParam0)
{
	return func_1376(*uParam0);
}

void func_829(var uParam0)
{
	if (!func_840(uParam0->f_1, 1))
	{
		_request_imap(*uParam0);
		func_807(&(uParam0->f_1), 1);
	}
}

bool func_830(var uParam0)
{
	return !is_string_null_or_empty(*uParam0);
}

void func_831(var uParam0)
{
	if (!func_840(uParam0->f_2, 1))
	{
		_0xe368e8422c860ba7(*uParam0, uParam0->f_1, -2);
		func_807(&(uParam0->f_2), 1);
	}
}

bool func_832(var uParam0)
{
	return !is_string_null_or_empty(*uParam0);
}

void func_833(var uParam0)
{
	if (!func_840(uParam0->f_1, 1))
	{
		_0x2b6529c54d29037a(*uParam0);
		func_807(&(uParam0->f_1), 1);
	}
}

bool func_834(var uParam0, int iParam1, char* sParam2)
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

void func_835(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5)
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
		sParam2 = func_739(iParam1);
	}
	if (is_string_null_or_empty(sParam2))
	{
		if (does_entity_exist(iParam1))
		{
		}
		return;
	}
	iVar0 = func_1377(uParam0, iParam1);
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
		iVar1 = func_1378(uParam0, sParam2);
		if (does_entity_exist(iVar1) && iVar1 != iParam1)
		{
			func_1379(uParam0, iVar1);
		}
	}
	if (iVar0 == -1)
	{
		iVar0 = func_1380(uParam0);
	}
	if (iVar0 != -1)
	{
		uParam0->f_13[iVar0] = iParam1;
		StringCopy(&(uParam0->f_13[iVar0]->f_1), sParam2, 64);
		uParam0->f_13[iVar0]->f_9 = iParam3;
		uParam0->f_13[iVar0]->f_10 = iParam4;
		if (bParam5)
		{
			func_1381(uParam0->f_13[iVar0], 2);
		}
		else
		{
			func_1382(uParam0->f_13[iVar0], 2);
		}
	}
}

struct<4> func_836(int iParam0)
{
	if (!func_191(iParam0))
	{
		return Var0;
	}
	return (*Global_1835011)[iParam0]->f_3;
}

bool func_837(var uParam0, char* sParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (!bParam4 && !uParam0->f_2501)
	{
		if (!func_859(uParam0, sParam1, iParam2, bParam4, bParam5))
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
			if (func_1383(uParam0, 0))
			{
				if (func_1384(uParam0, iParam2, iParam3, &cVar2, &iVar1, &iVar18))
				{
					if (func_1385(uParam0, 1, &iVar0))
					{
					}
					if (func_1386(uParam0, 3, &cVar2))
					{
					}
					if (func_1385(uParam0, 4, &iVar1))
					{
						cVar2.f_8 = iVar1;
					}
					if (func_1385(uParam0, 7, &(cVar2.f_12)))
					{
					}
					if (func_1385(uParam0, 8, &iVar1))
					{
						cVar2.f_10 = iVar1;
					}
					if (func_1385(uParam0, 10, &(cVar2.f_14)))
					{
					}
					if (func_1385(uParam0, 11, &iVar1))
					{
						cVar2.f_15 = iVar1;
					}
					if (iVar18 == 0)
					{
						if (iVar0 < 40 && uParam0->f_2504 < 40)
						{
							if (!func_1387(uParam0, &cVar2, uParam0->f_2504))
							{
								*(*uParam0)[uParam0->f_2504] = { cVar2 };
								func_490((*uParam0)[uParam0->f_2504], 1048576);
								uParam0->f_2504++;
							}
						}
					}
					else if (iVar18 == 3)
					{
						if (iVar0 < 40 && uParam0->f_2505 < 40)
						{
							*uParam0->f_641[uParam0->f_2505] = { cVar2 };
							func_490(uParam0->f_641[uParam0->f_2505], 1048576);
							uParam0->f_2505++;
						}
					}
					else if (iVar18 == 1)
					{
						if (iVar0 < 60 && uParam0->f_2506 < 60)
						{
							*uParam0->f_1282[uParam0->f_2506] = { cVar2 };
							func_490(uParam0->f_1282[uParam0->f_2506], 1048576);
							if (!bVar19 && func_219(&cVar2, 4))
							{
								prepare_music_event(uParam0->f_1282[uParam0->f_2506]);
								bVar19 = true;
							}
							uParam0->f_2506++;
						}
					}
					else if (iVar0 < 15 && uParam0->f_2507 < 15)
					{
						if (!func_1387(&(uParam0->f_2243), &cVar2, uParam0->f_2507))
						{
							*uParam0->f_2243[uParam0->f_2507] = { cVar2 };
							func_490(uParam0->f_2243[uParam0->f_2507], 1048576);
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
			if (func_1383(uParam0, 12))
			{
				if (func_1385(uParam0, 13, &iVar0))
				{
				}
				if (func_1385(uParam0, 14, &iVar1))
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

void func_838(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((func_219((*uParam0)[iVar0], 1048576) && (*uParam0)[iVar0]->f_9 == 8) && !func_219((*uParam0)[iVar0], 1))
		{
			func_1388((*uParam0)[iVar0]);
		}
		iVar0++;
	}
}

bool func_839(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, int iParam12)
{
	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < *uParam0)
	{
		if (func_809((*uParam0)[iVar1]))
		{
			if (func_804((*uParam0)[iVar1]->f_2, iParam12))
			{
				if (!func_1389((*uParam0)[iVar1]))
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
		if (func_811((*uParam1)[iVar1]))
		{
			if (func_804((*uParam1)[iVar1]->f_4, iParam12))
			{
				if (!func_1390((*uParam1)[iVar1]))
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
		if (func_813((*uParam2)[iVar1]))
		{
			if (func_804((*uParam2)[iVar1]->f_2, iParam12))
			{
				if (!func_1391((*uParam2)[iVar1]))
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
		if (func_815((*uParam3)[iVar1]))
		{
			if (func_804((*uParam3)[iVar1]->f_2, iParam12))
			{
				if (!func_816((*uParam3)[iVar1]))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	if (func_804(uParam4->f_1, iParam12))
	{
		if (!func_817(uParam4))
		{
			iVar0 = 0;
		}
	}
	iVar1 = 0;
	while (iVar1 < *uParam5)
	{
		if (func_818((*uParam5)[iVar1]))
		{
			if (func_804((*uParam5)[iVar1]->f_3, iParam12))
			{
				if (func_1374((*uParam5)[iVar1]))
				{
					if (!func_841((*uParam5)[iVar1]))
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
		if (func_818((*uParam5)[iVar1]))
		{
			if (func_804((*uParam5)[iVar1]->f_3, iParam12))
			{
				if (func_1374((*uParam5)[iVar1]))
				{
					if (func_841((*uParam5)[iVar1]))
					{
						iVar2 = 0;
						while (iVar2 < 20)
						{
							if (func_820((*uParam5)[iVar1]->f_4[iVar2]))
							{
								if (!func_1392((*uParam5)[iVar1]->f_4[iVar2], (*uParam5)[iVar1]->f_1))
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
		if (func_822((*uParam6)[iVar1]))
		{
			if (func_804((*uParam6)[iVar1]->f_3, iParam12))
			{
				if (!func_1393((*uParam6)[iVar1]))
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
		if (func_824((*uParam7)[iVar1]))
		{
			if (func_804((*uParam7)[iVar1]->f_4, iParam12))
			{
				if (!func_1394((*uParam7)[iVar1]))
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
		if (func_826((*uParam8)[iVar1]))
		{
			if (func_804((*uParam8)[iVar1]->f_2, iParam12))
			{
				if (!func_1395((*uParam8)[iVar1]))
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
		if (func_828((*uParam9)[iVar1]))
		{
			if (func_804((*uParam9)[iVar1]->f_2, iParam12))
			{
				if (!func_1396((*uParam9)[iVar1]))
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
		if (func_830((*uParam10)[iVar1]))
		{
			if (func_804((*uParam10)[iVar1]->f_3, iParam12))
			{
				if (!func_1397((*uParam10)[iVar1]))
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
		if (func_832((*uParam11)[iVar1]))
		{
			if (func_804((*uParam11)[iVar1]->f_2, iParam12))
			{
				if (!func_1398((*uParam11)[iVar1]))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	return iVar0;
}

bool func_840(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_841(var uParam0)
{
	if (func_840(uParam0->f_2, 2))
	{
		return true;
	}
	if (!func_840(uParam0->f_2, 1))
	{
		func_819(uParam0);
	}
	if (_is_anim_scene_loaded(uParam0->f_1, true, false))
	{
		func_807(&(uParam0->f_2), 2);
		return true;
	}
	return false;
}

int func_842(int iParam0)
{
	if (!func_191(iParam0))
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

bool func_843(char[4] cParam0, int iParam1, var uParam2, bool bParam3, var uParam4, var uParam5, var uParam6, float fParam7, bool bParam8, int iParam9, bool bParam10, int iParam11, bool bParam12, bool bParam13)
{
	if (!func_509(iParam1))
	{
		return false;
	}
	if ((!is_entity_dead(*uParam2) && func_261(iParam1)) && func_1399(iParam1) == *uParam2)
	{
		return true;
	}
	*uParam2 = func_1400(iParam1, 1, 0, uParam4, uParam5, uParam6, fParam7, bParam8, 1, 0, 0, bParam10, 0, iParam9, 0, 0, 0, iParam11, 1, 1, bParam13, 0, 1, 0, 1);
	if (does_entity_exist(*uParam2))
	{
		func_1401(cParam0, *uParam2, iParam1, bParam3, (bParam8 && bParam12), bParam10, bParam13);
		func_1402(iParam1);
		return true;
	}
	return false;
}

bool func_844(char[4] cParam0)
{
	if (!func_396(cParam0->f_5417))
	{
		return true;
	}
	switch (cParam0->f_607)
	{
		case 7:
			func_1403(cParam0, -271.1003f, 798.9771f, 118.0088f, 359.8847f);
			break;
		case 15:
			func_1403(cParam0, -101.4083f, -34.0691f, 94.9419f, 43.5697f);
			break;
		case 8:
			func_1403(cParam0, 884.1405f, 1283.638f, 233.1437f, 288.539f);
			break;
		case 25:
			func_1403(cParam0, 1154.01f, -87.7217f, 87.745f, 333.9165f);
			break;
		case 14:
			func_1403(cParam0, -257.4742f, 716.4608f, 114.3661f, 298.3928f);
			break;
		case 9:
			func_1403(cParam0, -113.3479f, -14.8907f, 96.1036f, 66.3363f);
			break;
		case 13:
			func_1403(cParam0, -893.1545f, -1097.781f, 59.3724f, 67.7581f);
			break;
		case 11:
			func_1403(cParam0, -1528.842f, -315.0988f, 143.0872f, 97.0964f);
			break;
		case 26:
			func_1403(cParam0, 705.8042f, -1230.294f, 44.2243f, 60.9884f);
			break;
		case 53:
			func_1403(cParam0, 705.8099f, -1229.4f, 44.2311f, 67.5463f);
			break;
		case 16:
			func_1403(cParam0, 667.7685f, -1211.293f, 45.3101f, 92.5271f);
			break;
		case 17:
			func_1403(cParam0, 1339.753f, -1305.21f, 75.5849f, 337.5673f);
			break;
		case 19:
			func_1403(cParam0, 1857.32f, -1367.512f, 41.2697f, 162.265f);
			break;
		case 24:
			func_1403(cParam0, 691.6649f, -1235.476f, 43.3174f, 227.0576f);
			break;
		case 23:
			func_1403(cParam0, 676.2985f, -1227.818f, 43.598f, 352.091f);
			break;
		case 22:
			func_1403(cParam0, 663.6722f, -1229.636f, 43.3769f, 171.6396f);
			break;
		case 36:
			func_1403(cParam0, 2647.098f, -1270.327f, 51.0841f, 113.0633f);
			break;
		case 28:
			func_1403(cParam0, 2413.412f, -1220.656f, 44.9084f, 0.0301f);
			break;
		case 30:
			func_1403(cParam0, 1853.05f, -1835.788f, 42.0957f, 29.7034f);
			break;
		case 37:
			func_1403(cParam0, 1842.425f, -1833.848f, 43.2426f, 0.0743f);
			break;
		case 45:
			func_1403(cParam0, 2824.987f, -1165.335f, 47.3695f, 190.1776f);
			break;
		case 48:
			func_1403(cParam0, 483.1636f, 2222.628f, 246.0867f, 109.4105f);
			break;
		case 49:
			func_1403(cParam0, 2376.538f, 1339.845f, 105.3362f, 193.8848f);
			break;
		case 50:
			func_1403(cParam0, 2377.94f, 1338.177f, 105.4092f, 196.4492f);
			break;
		case 51:
			func_1403(cParam0, 491.0881f, 2221.171f, 246.1786f, 246.5501f);
			break;
		case 55:
			func_1403(cParam0, 2774.684f, 513.5845f, 66.9882f, 355.826f);
			break;
		case 76:
			func_1403(cParam0, -1616.827f, -1379.19f, 81.8942f, 339.9481f);
			break;
		case 73:
			func_1403(cParam0, -1611.214f, -1344.436f, 81.8767f, 359.9349f);
			break;
		case 75:
			func_1403(cParam0, -1678.714f, -1378.879f, 83.969f, 347.6046f);
			break;
		case 69:
			func_1403(cParam0, -302.3015f, 786.3279f, 116.9486f, 185.0768f);
			break;
		case 70:
			func_1403(cParam0, -1566.102f, -1448.615f, 90.6887f, 291.3719f);
			break;
		case 71:
			func_1403(cParam0, -1625.965f, -1395.404f, 81.6263f, 114.6379f);
			break;
		case 72:
			func_1403(cParam0, -835.0144f, -1343.726f, 42.473f, 0.0002f);
			break;
	}
	return !func_396(cParam0->f_5417);
}

int func_845(int iParam0, var uParam1)
{
	uParam1->f_10 = func_269(uParam1->f_10);
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
		if (func_396(uParam1->f_6))
		{
		}
	}
	bVar0 = func_395();
	if (*uParam1)
	{
		if (bVar0 && !func_330((*Global_1835011)[4]->f_1, 1))
		{
			if (func_1404(5))
			{
				func_521(5);
				func_1405(5);
				func_1350(0);
				func_1349(0);
			}
		}
	}
	if (func_1406(Global_36) == 8)
	{
		*iParam0 = 1;
		return 0;
	}
	if ((bVar0 && func_330((*Global_1835011)[37]->f_1, 1)) && !func_330((*Global_1835011)[43]->f_1, 1))
	{
		*iParam0 = 1;
		return 0;
	}
	if ((bVar0 && func_330((*Global_1835011)[43]->f_1, 1)) && !func_330((*Global_1835011)[44]->f_1, 1))
	{
		if (uParam1->f_10 == 0)
		{
			*iParam0 = 1;
			return 0;
		}
	}
	iVar1 = uParam1->f_10;
	iVar2 = func_217(iVar1);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	if (func_524(iVar1))
	{
		bVar3 = true;
		if (func_1407(iVar1))
		{
			bVar4 = true;
		}
		if (func_531(iVar1))
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
				func_532(uParam1->f_10);
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
			if (!func_1404(0) && func_1404(1))
			{
				func_1408(1, 0);
				*iParam0 = 0;
				return 0;
			}
		}
	}
	if (uParam1->f_4)
	{
		if (uParam1->f_10 == 0)
		{
			if (func_1409())
			{
				func_1410();
			}
			func_1350(0);
			func_1349(0);
			func_1351(uParam1->f_6);
		}
	}
	if (!func_524(uParam1->f_10))
	{
		if (*uParam1)
		{
			if ((func_1411(uParam1->f_10) == 0 || func_1412(uParam1->f_10) == 0) || func_1413(uParam1->f_10) == 0)
			{
				func_1414(uParam1->f_10);
			}
			func_1415(uParam1->f_10);
			func_1416(uParam1->f_10, uParam1->f_6, uParam1->f_9);
			*iParam0 = 0;
			return 0;
		}
		*iParam0 = 1;
		return 0;
	}
	iVar1 = uParam1->f_10;
	iVar2 = func_217(iVar1);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	if (func_524(iVar1))
	{
		bVar3 = true;
		if (func_1407(iVar1))
		{
			bVar4 = true;
		}
		if (func_531(iVar1))
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
			if (!func_396(uParam1->f_6))
			{
				set_entity_coords(iVar2, uParam1->f_6, false, true, true, true);
				set_entity_heading(iVar2, uParam1->f_9);
				_0x9587913b9e772d29(iVar2, 0);
			}
		}
	}
	if (func_1417(uParam1->f_10))
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
			Var8 = { func_1418(uParam1->f_10) };
			Var10 = { func_1419() };
			func_1420(iVar2, &Var8, &Var10, 0);
			_set_ped_as_saddle_horse_for_player(iVar6, iVar2);
			set_ped_config_flag(iVar2, 186, false);
		}
	}
	if (!uParam1->f_1)
	{
		*iParam0 = 2;
		return iVar2;
	}
	if (!func_517(uParam1->f_10))
	{
		set_entity_as_mission_entity(iVar2, true, true);
		func_1421(uParam1->f_10);
		if (uParam1->f_2 && !func_396(uParam1->f_6))
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
	func_516(uParam1->f_10);
	if (func_517(uParam1->f_10))
	{
		iVar16 = func_265(uParam1->f_10);
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

bool func_846(int iParam0, int iParam1, float fParam2, bool bParam3)
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

bool func_847(int iParam0)
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

bool func_848(int iParam0, int iParam1, vector3 vParam2, float fParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10)
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
	if (!func_1422(iParam1))
	{
		return false;
	}
	iVar0 = func_1423(iParam1, vParam2, fParam5, iParam8, 1, bParam6, bParam7);
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

void func_849(char[4] cParam0, bool bParam1)
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

float func_850(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

void func_851(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
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
	if (iParam0 == func_1424(Global_35) && is_player_teleport_active())
	{
	}
	if (func_1425(iParam0))
	{
		if (func_847(get_ped_index_from_entity_index(iParam0)))
		{
			_0x0348469daa17576c(iParam0);
		}
	}
	if (func_391(iParam5, 4) && is_entity_a_ped(iParam0))
	{
		iVar1 = get_ped_index_from_entity_index(iParam0);
		if (is_ped_on_vehicle(iVar1, false))
		{
			iVar0 = get_vehicle_ped_is_in(iVar1, true);
			if (does_entity_exist(iVar0) && !is_entity_dead(iVar0))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_851(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (is_ped_on_mount(iVar1))
		{
			iVar2 = get_mount(iVar1);
			if (does_entity_exist(iVar2) && !is_entity_dead(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_851(iVar2, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
	}
	if (!func_391(iParam5, 32))
	{
		if (bVar4 && is_entity_attached(iParam0))
		{
			clear_ped_tasks_immediately(get_ped_index_from_entity_index(iParam0), false, true);
		}
	}
	if (func_391(iParam5, 2))
	{
		if (is_entity_a_vehicle(iParam0))
		{
			_set_entity_coords_and_heading(iParam0, vParam1, fParam4, true, func_391(iParam5, 32), true);
		}
		else
		{
			_set_entity_coords_and_heading(iParam0, vParam1, fParam4, true, func_391(iParam5, 32), true);
			_0x9587913b9e772d29(iParam0, 0);
		}
	}
	else if (func_391(iParam5, 129))
	{
		if (func_391(iParam5, 128))
		{
			if (get_water_height_no_waves(vParam1, &uVar5))
			{
				vParam1.f_2 = uVar5;
			}
		}
		set_entity_coords_no_offset(iParam0, vParam1, func_391(iParam5, 32), true, true);
		set_entity_heading(iParam0, fParam4);
	}
	else
	{
		_set_entity_coords_and_heading(iParam0, vParam1, fParam4, true, func_391(iParam5, 32), true);
	}
	if (bVar4)
	{
		if (!func_391(iParam5, 16))
		{
			_set_ped_crouch_movement(get_ped_index_from_entity_index(iParam0), bVar3, 0, false);
		}
		if (func_1425(iParam0))
		{
			iVar6 = get_ped_index_from_entity_index(iParam0);
			_0x0348469daa17576c(iVar6);
			if (!func_391(iParam5, 32))
			{
				clear_ped_tasks(iVar6, 1, 0);
				task_stand_still(iVar6, -1);
			}
		}
		set_ped_cloth_package_index(get_ped_index_from_entity_index(iParam0), 1);
		if (get_ped_index_from_entity_index(iParam0) == Global_35 && !func_391(iParam5, 64))
		{
			if (!is_screen_faded_out())
			{
			}
			set_gameplay_cam_relative_heading(0f, 1f);
			set_gameplay_cam_relative_pitch(0f, 1f);
		}
	}
}

bool func_852(int iParam0, int iParam1, int iParam2)
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

bool func_853(var uParam0, int iParam1)
{
	switch (func_1426(uParam0))
	{
		case 0:
			if (!func_1427(iParam1, &(uParam0->f_8), &(uParam0->f_6)))
			{
				return true;
			}
			func_1428(uParam0, 1);
			break;
		case 1:
			func_1429(uParam0);
			render_script_cams(true, false, 3000, true, false, 0);
			iVar0 = 0;
			func_776(&iVar0, 0, 2, 0, 0, 0, 0);
			func_1428(uParam0, 2);
			break;
		case 2:
			if (func_1430(uParam0))
			{
				func_1431(uParam0->f_8, 5000f, 0);
				_0x4759cc730f947c81();
				func_27(&(uParam0->f_3), 1);
				func_1428(uParam0, 3);
			}
			break;
		case 3:
			if (func_860(&(uParam0->f_3)) >= 1f)
			{
				func_1428(uParam0, 4);
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
			func_1432(&iVar1, 0);
			release_script_audio_bank();
			func_1428(uParam0, 0);
			return true;
	}
	return false;
}

void func_854(char[4] cParam0)
{
	if (!func_120(cParam0, 524288))
	{
		MemCopy(&uVar0, {func_110(cParam0->f_607)}, 8);
		func_1433(&uVar0, 15000, 0, 0, 0, 1);
		func_103(cParam0, 524288);
	}
}

bool func_855(char[4] cParam0)
{
	iVar0 = func_35(cParam0);
	if (func_162(cParam0, func_33(cParam0)) <= 3)
	{
		iVar0 = func_33(cParam0);
	}
	Var1 = { func_1434(cParam0, iVar0) };
	if (func_1436(&(cParam0->f_10792), Var1, func_1435(&(cParam0->f_10792)), 0))
	{
		func_140(cParam0, func_33(cParam0), 262144);
		if (func_1437(&(cParam0->f_10792), 524288))
		{
			func_383(cParam0, 67108864);
			func_1438(&(cParam0->f_10792), 524288);
		}
		func_1439(&(cParam0->f_7375), &(cParam0->f_10792));
		return true;
	}
	return false;
}

void func_856(char[4] cParam0, int iParam1)
{
	cParam0->f_5307 = (cParam0->f_5307 - (cParam0->f_5307 && iParam1));
}

bool func_857(char[4] cParam0, struct<4> Param1)
{
	if (is_string_null_or_empty(&Param1))
	{
		return true;
	}
	if (func_8(cParam0, 16777216))
	{
		func_1440(cParam0);
		func_1441(cParam0);
		return true;
	}
	if (func_1442(Param1, &(cParam0->f_7375), cParam0))
	{
		return true;
	}
	if (func_154(cParam0) == 0)
	{
		func_898(cParam0);
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
			func_1443(cParam0);
			func_856(cParam0, 524288);
			func_1444(cParam0);
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

bool func_858(char[4] cParam0)
{
	iVar0 = 1;
	if (!func_1445(func_61(cParam0), func_120(cParam0, 65536)))
	{
		iVar0 = 0;
	}
	Var1 = { func_1446(func_61(cParam0)) };
	if (!is_string_null_or_empty(&Var1))
	{
		if (!func_1447(func_61(cParam0)))
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
	MemCopy(&cVar9, {func_836(cParam0->f_607)}, 3);
	if (!func_23(&(cParam0->f_8269)))
	{
		if (!func_859(&(cParam0->f_8269), &cVar9, 0, 1, 1))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

bool func_859(var uParam0, char* sParam1, int iParam2, bool bParam3, bool bParam4)
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
	func_1448(uParam0);
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

float func_860(var uParam0)
{
	if (!func_26(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_492(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_544() - uParam0->f_1);
}

bool func_861()
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

void func_862(float fParam0, float fParam1)
{
	set_gameplay_cam_relative_heading(fParam0, 1f);
	set_gameplay_cam_relative_pitch(fParam1, 1f);
}

void func_863()
{
	set_bit(&(Global_1934765->f_301), 1);
	func_1449();
}

bool func_864(char[4] cParam0)
{
	if (func_391(iLocal_168, 1048576))
	{
		return true;
	}
	if ((((((((func_1450(cParam0, 4, 18, func_225(1, 4)) && func_1450(cParam0, 6, 4, func_225(1, 9))) && func_1450(cParam0, 7, 13, func_225(1, 10))) && func_1450(cParam0, 8, 22, func_225(1, 11))) && func_1450(cParam0, 9, 17, func_225(1, 12))) && func_1450(cParam0, 13, 7, func_225(1, 23))) && func_1450(cParam0, 10, 2, func_225(1, 22))) && func_1450(cParam0, 12, 21, func_225(1, 25))) && func_1450(cParam0, 11, 19, func_225(1, 21)))
	{
		iVar0 = 0;
		while (iVar0 < 15)
		{
			func_151(cParam0, &(uLocal_182[iVar0]), 0, 0, 0, 0, 0);
			iVar0++;
		}
		func_414(&iLocal_168, 1048576);
		return true;
	}
	return false;
}

bool func_865(var uParam0)
{
	if (((func_1450(uParam0, 3, 11, func_225(1, 1)) && func_1450(uParam0, 1, 3, func_225(1, 2))) && func_1450(uParam0, 0, 0, func_225(1, 0))) && func_1450(uParam0, 2, 6, func_225(1, 3)))
	{
		func_151(uParam0, &(uLocal_182[3]), 0, 0, 0, 0, 0);
		func_151(uParam0, &(uLocal_182[1]), 0, 0, 0, 0, 0);
		func_151(uParam0, &(uLocal_182[0]), 0, 0, 0, 0, 0);
		func_151(uParam0, &(uLocal_182[2]), 0, 0, 0, 0, 0);
		return true;
	}
	return false;
}

bool func_866()
{
	if (!does_entity_exist(&(Local_14.f_79[0])))
	{
		func_1451(-1, 1);
		return false;
	}
	else
	{
		return true;
	}
	return false;
}

bool func_867()
{
	iLocal_361 = get_interior_at_coords(2252.968f, -786.9642f, 40.8607f);
	if (is_valid_interior(iVar359))
	{
		pin_interior_in_memory(iVar359);
		if (is_interior_ready(iVar359))
		{
			if (is_interior_entity_set_active(iVar359, "lak_hideout_intgroup_trapdoor"))
			{
				deactivate_interior_entity_set(iVar359, "lak_hideout_intgroup_trapdoor", true);
			}
			if (!is_interior_entity_set_active(iVar359, "lak_hideout_intgroup_trapdoor"))
			{
				if (func_182(26))
				{
					func_1452(26);
				}
				return true;
			}
		}
	}
	return false;
}

void func_868()
{
	if (!_0x7c7e4ab748ea3b07())
	{
		return;
	}
	uVar0 = 29;
	func_1453(Global_35, &uVar0);
	Var30 = { func_1159(0) };
	_0xe36d4a38d28d9cfb(0);
	_0xc04f47d488ef9eba(5, 1, &Var30, 0);
	_0x5d6182f3bce1333b(5, -142743235);
	func_1454(0);
	func_1455(7);
	func_1456(-1623728698, 1, 1, 0);
	if (func_673() == 1160113249)
	{
		func_1456(-763730846, 1, 1, 1);
		func_1456(-361635024, 1, 1, 1);
	}
	func_1457(Global_35, &uVar0);
}

void func_869(bool bParam0, bool bParam1, bool bParam2)
{
	func_1458(bParam0, bParam1, bParam2);
	_unlock_set_unlocked(1170789519, false);
}

bool func_870()
{
	return func_1459();
}

bool func_871(var uParam0)
{
	if (!func_1460(-1, 1))
	{
		return false;
	}
	if (!func_391(iLocal_168, 268435456))
	{
		func_1461(Local_14.f_14);
		func_414(&iLocal_168, 268435456);
		return false;
	}
	if (!func_391(iLocal_168, 134217728))
	{
		iVar0 = 0;
		while (iVar0 < iLocal_202)
		{
			if (!_does_volume_exist(&(iLocal_202[iVar0])))
			{
				if (func_165(&(Local_14.f_16[iVar0]), 0))
				{
					iLocal_202[iVar0] = _create_volume_cylinder(func_467(11, iVar0), 0f, 0f, 0f, 0.5f, 0.5f, 3f);
					_0xfc3db99c8144cd81(&(Local_14.f_16[iVar0]), &(iLocal_202[iVar0]), 0, 0, 0);
					_0x18ff3110cf47115d(&(Local_14.f_16[iVar0]), 7, 0);
					_0x18ff3110cf47115d(&(Local_14.f_16[iVar0]), 2, 0);
					set_ped_hearing_range(&(Local_14.f_16[iVar0]), 250f);
					set_ped_config_flag(&(Local_14.f_16[iVar0]), 186, true);
					if (iVar0 == 0 || iVar0 == 1)
					{
						remove_all_ped_weapons(&(Local_14.f_16[iVar0]), true, true);
						func_1260(&(Local_14.f_16[iVar0]), 379542007, 1, 0, 0, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
					}
					task_aim_at_coord(&(Local_14.f_16[iVar0]), func_181(2, 1), -1, 1, 0);
				}
			}
			iVar0++;
		}
		func_414(&iLocal_168, 134217728);
		return false;
	}
	func_151(uParam0, &(Local_14.f_16[1]), "S_M_M_PINLAW_01^5", 0, 0, 0, 0);
	func_151(uParam0, &(Local_14.f_16[2]), "S_M_M_PINLAW_01^4", 0, 0, 0, 0);
	func_151(uParam0, &(Local_14.f_16[4]), "S_M_M_PINLAW_01^3", 0, 0, 0, 0);
	return true;
}

bool func_872(var uParam0, bool bParam1)
{
	if (bParam1 && !func_391(iLocal_168, 1073741824))
	{
		func_1462(uParam0, -1, 0);
		func_1461(Local_14.f_29);
		func_1463(Local_14.f_29, 1);
		if (func_165(&(Local_14.f_31[0]), 0))
		{
			iLocal_198 = &Local_14.f_31[0];
			if (_is_metaped_outfit_request_valid(iVar323) && does_entity_exist(iLocal_198))
			{
				_apply_ped_metaped_outfit(iVar323, iLocal_198, true, false);
				_update_ped_variation(iLocal_198, false, true, true, true, false);
			}
			if (!_does_volume_exist(iLocal_235))
			{
				iLocal_235 = _create_volume_cylinder(func_181(2, 0), 0f, 0f, 0f, 2f, 2f, 3f);
			}
			_0xfc3db99c8144cd81(iLocal_198, iLocal_235, 0, 0, 0);
			set_ped_combat_attributes(iLocal_198, 30, true);
			set_ped_accuracy(iLocal_198, 1);
			_0x18ff3110cf47115d(iLocal_198, 2, 0);
		}
		func_414(&iLocal_168, 1073741824);
		return false;
	}
	if (!does_entity_exist(iLocal_199))
	{
		iLocal_199 = &Local_14.f_79[0];
		freeze_entity_position(iLocal_199, true);
	}
	if (!does_entity_exist(iLocal_201))
	{
		vVar0 = { func_181(2, 0) };
		vVar0.f_2 = (vVar0.z + 0.8f);
		iLocal_201 = create_vehicle(742064790, vVar0, func_1464(2, 0), true, true, false, true);
	}
	set_force_hd_vehicle(iLocal_201, true);
	set_vehicle_is_considered_by_player(iLocal_201, false);
	attach_entity_to_entity_physically(iLocal_201, iLocal_199, -1, -1, -0.1f, 0.25f, 0.82f, 0f, 0f, 0f, 0f, 0f, -20f, 100f, 1, 1, 0, 1, 2, 0, 1065353216, 1065353216);
	set_entity_invincible(iLocal_201, true);
	if ((_is_metaped_outfit_request_valid(iVar323) && _0x610438375e5d1801(iVar323)) && does_entity_exist(iLocal_198))
	{
		_apply_ped_metaped_outfit(iVar323, iLocal_198, true, false);
		_update_ped_variation(iLocal_198, false, true, true, true, false);
	}
	return true;
}

void func_873()
{
	if (does_entity_exist(&(uLocal_182[4])))
	{
		set_anim_scene_entity(&(uLocal_171[4]), "IG_LeoStrauss", &(uLocal_182[4]), 0);
	}
	if (does_entity_exist(&(uLocal_182[7])))
	{
		set_anim_scene_entity(&(uLocal_171[4]), "IG_AbigailRoberts", &(uLocal_182[7]), 0);
	}
	if (does_entity_exist(&(uLocal_182[13])))
	{
		set_anim_scene_entity(&(uLocal_171[4]), "IG_CharlesSmith", &(uLocal_182[13]), 0);
	}
	if (does_entity_exist(&(uLocal_182[10])))
	{
		set_anim_scene_entity(&(uLocal_171[4]), "IG_JavierEscuella", &(uLocal_182[10]), 0);
	}
	if (does_entity_exist(&(uLocal_182[9])))
	{
		set_anim_scene_entity(&(uLocal_171[4]), "IG_MrPearson", &(uLocal_182[9]), 0);
	}
	if (does_entity_exist(&(uLocal_182[12])))
	{
		set_anim_scene_entity(&(uLocal_171[4]), "IG_RevSwanson", &(uLocal_182[12]), 0);
	}
	if (does_entity_exist(&(uLocal_182[11])))
	{
		set_anim_scene_entity(&(uLocal_171[4]), "IG_SUSANGRIMSHAW", &(uLocal_182[11]), 0);
	}
	if (does_entity_exist(&(uLocal_182[8])))
	{
		set_anim_scene_entity(&(uLocal_171[4]), "IG_Tilly", &(uLocal_182[8]), 0);
	}
	if (does_entity_exist(&(uLocal_182[6])))
	{
		set_anim_scene_entity(&(uLocal_171[4]), "IG_Uncle", &(uLocal_182[6]), 0);
	}
	_0xdf7b5144e25cd3fe(&(uLocal_171[4]), "pl_enter");
}

void func_874(int iParam0)
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
			func_1465(1);
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
			func_1466(1);
			break;
		case 19:
			_uitutorial_set_rpg_icon_visibility(1, 0);
			_uitutorial_set_rpg_icon_visibility(0, 0);
			func_1466(2);
			break;
		case 20:
			_uitutorial_set_rpg_icon_visibility(3, 0);
			_uitutorial_set_rpg_icon_visibility(2, 0);
			func_1466(3);
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
			func_1467(1);
			break;
		case 34:
			func_1468(1);
			break;
		case 35:
			func_1469(1);
			break;
		case 36:
			break;
		case 37:
			func_1470(0);
			break;
		case 38:
			func_1471(0);
			break;
		case 39:
			func_1472(0);
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
			if ((!&Global_1879534 && func_395()) && _is_deadeye_ability_locked(get_player_index(), 2))
			{
				func_707("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_MANUAL_PAINT", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_level(get_player_index(), 2);
			func_328(586, 0);
			break;
		case 3:
			if ((!&Global_1879534 && func_395()) && _is_deadeye_ability_locked(get_player_index(), 3))
			{
				func_707("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_STAY_ACTIVE", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_locked(get_player_index(), 3, false);
			_set_deadeye_ability_level(get_player_index(), 3);
			func_328(587, 0);
			break;
		case 4:
			if ((!&Global_1879534 && func_395()) && _is_deadeye_ability_locked(get_player_index(), 4))
			{
				func_707("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_FATAL", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_locked(get_player_index(), 3, false);
			_set_deadeye_ability_locked(get_player_index(), 4, false);
			_set_deadeye_ability_level(get_player_index(), 4);
			func_328(588, 0);
			break;
		case 5:
			if ((!&Global_1879534 && func_395()) && _is_deadeye_ability_locked(get_player_index(), 5))
			{
				func_707("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_CRITICAL", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_locked(get_player_index(), 3, false);
			_set_deadeye_ability_locked(get_player_index(), 4, false);
			_set_deadeye_ability_locked(get_player_index(), 5, false);
			_set_deadeye_ability_level(get_player_index(), 5);
			func_328(589, 0);
			break;
		case 24:
			_unlock_set_unlocked(-200143754, true);
			_unlock_set_visible(-200143754, true);
			_0x83b8d50eb9446bba(player_ped_id(), 1);
			if (func_20() == -1)
			{
				if (!func_1117(99217379) || func_1473(99217379) == 2110595215)
				{
					if (func_1017())
					{
						iVar0 = -1515874150;
					}
					else
					{
						iVar0 = 899611344;
					}
					if (!func_350(iVar0, 1, 0))
					{
						func_645(iVar0, 1, 752097756);
					}
					func_624(Global_35, iVar0, 0, 99217379, 1, 1, 1, 0, 1, 1);
				}
			}
			break;
		case 48:
			if (func_20() == -1)
			{
				if (!func_350(1013902307, 1, 0))
				{
					func_645(1013902307, 1, 752097756);
				}
			}
			break;
		case 50:
			if (func_20() == -1)
			{
				if (!func_350(1013902307, 1, 0))
				{
					func_645(1013902307, 1, 752097756);
				}
				if (!func_350(142640135, 1, 0))
				{
					func_645(142640135, 1, 752097756);
				}
			}
			break;
		case 49:
			if (func_20() == -1)
			{
				if (!func_350(786809402, 1, 0))
				{
					func_645(786809402, 1, 752097756);
				}
			}
			break;
		case 51:
			if (func_20() == -1)
			{
				if (!func_350(786809402, 1, 0))
				{
					func_645(786809402, 1, 752097756);
				}
				if (!func_350(-518019409, 1, 0))
				{
					func_645(-518019409, 1, 752097756);
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
			func_1474();
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

void func_875(int iParam0, bool bParam1)
{
	if (!is_itemset_valid(Local_14.f_96))
	{
		Local_14.f_96 = create_itemset(true);
	}
	if (!does_entity_exist(&(Local_14.f_97[2])) && (iParam0 == -1 || iParam0 == 2))
	{
		Local_14.f_97[2] = create_object(628999829, 2272.812f, -741.9662f, 40.6726f, true, true, false, false, true);
		set_entity_rotation(&(Local_14.f_97[2]), 0f, 0f, -167.2612f, 2, true);
		freeze_entity_position(&(Local_14.f_97[2]), bParam1);
	}
	func_1475(&(Local_14.f_97[2]), Local_14);
	func_1475(&(Local_14.f_97[2]), Local_14.f_96);
	if (!does_entity_exist(&(Local_14.f_97[3])) && (iParam0 == -1 || iParam0 == 3))
	{
		Local_14.f_97[3] = create_object(1461854168, 2257.248f, -742.8776f, 41.4611f, true, true, false, false, true);
		set_entity_rotation(&(Local_14.f_97[3]), 0f, 0f, -90.507f, 2, true);
		freeze_entity_position(&(Local_14.f_97[3]), bParam1);
	}
	func_1475(&(Local_14.f_97[3]), Local_14);
	func_1475(&(Local_14.f_97[3]), Local_14.f_96);
	if (!does_entity_exist(&(Local_14.f_97[4])) && (iParam0 == -1 || iParam0 == 4))
	{
		Local_14.f_97[4] = create_object(-219829341, 2256.977f, -741.282f, 41.298f, true, true, false, false, true);
		set_entity_rotation(&(Local_14.f_97[4]), 0f, 0f, 16.4452f, 2, true);
		freeze_entity_position(&(Local_14.f_97[4]), bParam1);
	}
	func_1475(&(Local_14.f_97[4]), Local_14);
	func_1475(&(Local_14.f_97[4]), Local_14.f_96);
}

int func_876(char[4] cParam0)
{
	if (func_33(cParam0) == iLocal_160)
	{
		if (_0x8d81e7824b7753f7(cParam0->f_7375.f_804, "GNG1_INT_P1_T06_Shot_1", 1) && func_786(&(uLocal_182[3]), 1, 0, 0) != 1845102363)
		{
			func_1260(&(uLocal_182[3]), 1845102363, 1, 0, 0, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
		}
		iVar0 = func_1476(cParam0);
		if (has_anim_event_fired(Global_35, -159106566))
		{
			do_screen_fade_out(1000);
		}
		if (has_anim_event_fired(Global_35, 1977727171))
		{
			func_1216(&(uLocal_182[3]), 2077870112);
			func_1216(&(uLocal_182[3]), 1845102363);
			func_1216(&(uLocal_182[3]), 575725904);
			func_1216(&(uLocal_182[3]), -183018591);
			_set_weather_type(2082228755, true, true, false, 0f, false);
			set_timecycle_modifier("Gang_1_mod");
			_set_weather_type_frozen(true);
			func_890(100f, 0, 0, 1);
			func_891(100f, 0, 0, 1);
			func_892(100f, 0, 0, 1);
			if (!is_entity_visible(&(uLocal_182[0])))
			{
				set_entity_visible(&(uLocal_182[0]), true);
			}
			if (!is_entity_visible(&(uLocal_182[1])))
			{
				set_entity_visible(&(uLocal_182[1]), true);
			}
			_0x1d77b47afa584e90(player_id(), -1, 1);
			if (get_clock_hours() != 21)
			{
				set_clock_time(21, 0, 0);
				pause_clock(true, 0);
			}
			do_screen_fade_in(1000);
		}
		if (iVar0 > 12500)
		{
			func_1216(&(uLocal_182[3]), 2077870112);
			func_1216(&(uLocal_182[3]), 1845102363);
			func_1216(&(uLocal_182[3]), 575725904);
			func_1216(&(uLocal_182[3]), -183018591);
		}
		if (iVar0 > 30000)
		{
			if (((func_870() && !bVar328) && bVar327) && bVar326)
			{
				func_883();
				func_884(0);
				iLocal_331 = 1;
			}
			if (bVar327 && !bVar326)
			{
				func_595(24);
				func_869(0, 1, 0);
				iLocal_329 = 1;
			}
			if (!bVar327)
			{
				func_868();
				iLocal_330 = 1;
			}
			if (!is_entity_visible(&(uLocal_182[0])))
			{
				set_entity_visible(&(uLocal_182[0]), true);
			}
			if (!is_entity_visible(&(uLocal_182[1])))
			{
				set_entity_visible(&(uLocal_182[1]), true);
			}
		}
		if (!func_391(iLocal_168, 32768))
		{
			if (iVar0 > 131270)
			{
				func_1211(1);
				if (does_entity_exist(iLocal_198))
				{
					set_entity_visible(iLocal_198, true);
				}
				func_414(&iLocal_168, 32768);
			}
		}
		if (iVar0 >= 131030 && !func_391(iLocal_168, 8))
		{
			func_1477("GNG1_START_CS", 1);
			func_414(&iLocal_168, 8);
		}
		if (func_1478(cParam0, Global_35, "Arthur", 0, 1, 1) && func_165(Global_35, 0))
		{
			func_1479();
			set_entity_proofs(Global_35, 6, false);
		}
		if (func_1478(cParam0, iLocal_198, "S_M_M_PINLAW_01", 0, 1, 0))
		{
			func_885(&iLocal_198, &iLocal_201, -1, 1);
			_0x2208438012482a1a(iLocal_198, true, false);
		}
	}
	else if (func_33(cParam0) == iLocal_164)
	{
		if (!is_entity_visible(&(Local_14.f_62[0])))
		{
			set_entity_visible(&(Local_14.f_62[0]), true);
		}
		if (func_1476(cParam0) >= 0)
		{
			func_1338(1);
		}
		if (func_1476(cParam0) > 88000 && func_261(0))
		{
			func_262(cParam0, 0, &(uLocal_182[0]), 0, 0, 1, 0);
		}
		if (has_anim_event_fired(Global_35, 1163102853))
		{
			if (!is_screen_faded_out() && !is_screen_fading_out())
			{
				do_screen_fade_out(700);
			}
		}
		if (!does_entity_exist(iVar320))
		{
			if (func_1476(cParam0) < 45000)
			{
				iLocal_323 = _get_anim_scene_object(cParam0->f_7375.f_804, "w_shotgun_sawed01", false);
			}
		}
		else if (func_1476(cParam0) >= 45000 && is_entity_visible(iVar320))
		{
			set_entity_visible(iVar320, false);
		}
		if (!func_261(0))
		{
			func_173(68, 1, 0, 0, 0);
		}
		_0x1b70811d3bf75db9(1, 1);
		if (func_1478(cParam0, Global_35, "ARTHUR", 0, 1, 1))
		{
			if (!func_1480(cParam0, 16384))
			{
				func_1481(cParam0, 16384);
			}
			func_1482(0);
			func_1483(Global_35, 0, 0);
		}
	}
	if (func_33(cParam0) == iLocal_162)
	{
		if ((func_1478(cParam0, Global_35, "ARTHUR", 0, 1, 1) && func_165(Global_35, 0)) && _0xff07cf465f48b830(-183018591))
		{
			iVar1 = 0;
			func_1432(&iVar1, 0);
			func_1260(Global_35, -183018591, 1, 0, 0, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
			func_1274();
			func_1275();
		}
		if (func_1478(cParam0, &(Local_14.f_16[0]), "S_M_M_PinLaw_01", 0, 1, 1) && func_165(&(Local_14.f_16[0]), 0))
		{
			task_combat_hated_targets_around_ped(&(Local_14.f_16[0]), 100f, 16384, 0);
			_0x8acc0506743a8a5c(&(Local_14.f_16[0]), 1240093907, 1, -1082130432);
			set_ped_combat_movement(&(Local_14.f_16[0]), 1);
		}
		if (func_1478(cParam0, &(Local_14.f_16[3]), "S_M_M_PinLaw_01^1", 0, 1, 1) && func_165(&(Local_14.f_16[3]), 0))
		{
			task_combat_hated_targets_around_ped(&(Local_14.f_16[3]), 100f, 16384, 0);
			_0x8acc0506743a8a5c(&(Local_14.f_16[3]), 1240093907, 1, -1082130432);
			set_ped_combat_movement(&(Local_14.f_16[3]), 1);
		}
		if (func_1478(cParam0, &(Local_14.f_16[4]), "S_M_M_PinLaw_01^3", 0, 1, 1) && func_165(&(Local_14.f_16[4]), 0))
		{
			task_combat_hated_targets_around_ped(&(Local_14.f_16[4]), 100f, 16384, 0);
			_0x8acc0506743a8a5c(&(Local_14.f_16[4]), 1240093907, 1, -1082130432);
			set_ped_combat_movement(&(Local_14.f_16[4]), 1);
		}
		if (func_1478(cParam0, &(Local_14.f_16[2]), "S_M_M_PinLaw_01^4", 0, 1, 1) && func_165(&(Local_14.f_16[2]), 0))
		{
			task_combat_hated_targets_around_ped(&(Local_14.f_16[2]), 100f, 16384, 0);
			_0x8acc0506743a8a5c(&(Local_14.f_16[2]), 1240093907, 1, -1082130432);
			set_ped_combat_movement(&(Local_14.f_16[2]), 1);
		}
		if (func_1478(cParam0, &(Local_14.f_16[1]), "S_M_M_PinLaw_01^5", 0, 1, 1) && func_165(&(Local_14.f_16[1]), 0))
		{
			task_combat_hated_targets_around_ped(&(Local_14.f_16[1]), 100f, 16384, 0);
			_0x8acc0506743a8a5c(&(Local_14.f_16[1]), 1240093907, 1, -1082130432);
			set_ped_combat_movement(&(Local_14.f_16[1]), 1);
		}
		if (func_165(iLocal_198, 0) && !is_ped_dead_or_dying(iLocal_198, true))
		{
			_0x9f9a829c6751f3c7(player_id(), 6, 1);
			set_player_forced_aim(player_id(), true, iLocal_198, 21030, false);
		}
		else
		{
			set_player_forced_aim(player_id(), false, iLocal_198, 21030, false);
			_0x4be3ec91c01f0fe8();
		}
	}
	return 0;
}

void func_877(char[4] cParam0, int iParam1)
{
	cParam0->f_8266 = iParam1;
	func_103(cParam0, 1024);
}

int func_878(var uParam0)
{
	if (func_33(uParam0) == iLocal_160)
	{
		if (!bVar327)
		{
			func_868();
			iLocal_330 = 1;
			return 0;
		}
		if (!bVar326)
		{
			func_595(24);
			func_869(0, 1, 0);
			iLocal_329 = 1;
			return 0;
		}
		if (!func_870())
		{
			return 0;
		}
		if (!_0xa0bc8faed8cfeb3c(Global_35))
		{
			return 0;
		}
		else
		{
			set_clock_time(21, 0, 0);
			pause_clock(true, 0);
			set_timecycle_modifier("Gang_1_mod");
			_set_weather_type(2082228755, true, true, false, 0f, false);
			_set_weather_type_frozen(true);
			func_883();
			func_884(0);
			func_890(100f, 0, 0, 1);
			func_891(100f, 0, 0, 1);
			func_892(100f, 0, 0, 1);
			_0x1d77b47afa584e90(player_id(), -1, 1);
			if (!is_entity_visible(&(uLocal_182[0])))
			{
				set_entity_visible(&(uLocal_182[0]), true);
			}
			if (!is_entity_visible(&(uLocal_182[1])))
			{
				set_entity_visible(&(uLocal_182[1]), true);
			}
			func_1216(&(uLocal_182[3]), 2077870112);
			func_1216(&(uLocal_182[3]), 1845102363);
			func_1216(&(uLocal_182[3]), 575725904);
			func_1216(&(uLocal_182[3]), -183018591);
		}
	}
	if (func_33(uParam0) == iLocal_162)
	{
		if (!_0xa0bc8faed8cfeb3c(Global_35))
		{
			return 0;
		}
		if (!has_ped_got_weapon(Global_35, -183018591, 0, false))
		{
			set_current_ped_weapon(Global_35, -183018591, true, 0, false, false);
			func_1261(1);
			func_222(&uLocal_298);
			return 0;
		}
	}
	if (func_33(uParam0) == iLocal_163)
	{
		do_screen_fade_out(0);
	}
	if (func_33(uParam0) == iLocal_164)
	{
		if (!func_1480(uParam0, 16384))
		{
			func_1481(uParam0, 16384);
		}
	}
	return 1;
}

void func_879(char[4] cParam0, int iParam1)
{
	cParam0->f_8267 = iParam1;
	func_103(cParam0, 131072);
}

int func_880(char[4] cParam0)
{
	if (func_33(cParam0) == iLocal_160)
	{
		if (func_1462(cParam0, -1, 0))
		{
			func_420(cParam0, &(Local_14.f_31[0]), "S_M_M_PINLAW_01", 0, 0, 0, 0);
		}
		else
		{
			return 0;
		}
		func_851(&(uLocal_182[0]), 2227.787f, -767.344f, 41.541f, -142.79f, 2, 1073741824);
		clear_ped_tasks_immediately(&(uLocal_182[0]), false, true);
		task_stand_still(&(uLocal_182[0]), -1);
		func_851(&(uLocal_182[1]), 2229.228f, -767.428f, 42.549f, -5.04f, 2, 1073741824);
		clear_ped_tasks_immediately(&(uLocal_182[1]), false, true);
		task_stand_still(&(uLocal_182[1]), -1);
		prepare_music_event("GNG1_START_CS");
	}
	if (func_33(cParam0) == iLocal_162 || func_1484(&(cParam0->f_7375), "GNG1_MCS1"))
	{
		_hide_ped_weapons(Global_35, 2, false);
		func_321(-183018591, 1, 1, 1, 0, -334626412, 0, 0, 0, 0);
		_0x67e21acc5c0c970c(Global_35, 9, false);
		_0x67e21acc5c0c970c(Global_35, 16, false);
		_0x67e21acc5c0c970c(Global_35, 24, false);
		_0x67e21acc5c0c970c(Global_35, 18, false);
		if (does_entity_exist(&(Local_14.f_16[0])))
		{
			func_151(cParam0, &(Local_14.f_16[0]), "S_M_M_PINLAW_01", 0, 0, 0, 0);
		}
		if (does_entity_exist(&(Local_14.f_16[3])))
		{
			func_151(cParam0, &(Local_14.f_16[3]), "S_M_M_PINLAW_01^1", 0, 0, 0, 0);
		}
	}
	if (func_33(cParam0) == iLocal_164)
	{
		func_383(cParam0, 524288);
		func_151(cParam0, &(uLocal_182[11]), 0, 0, 0, 0, 0);
		func_151(cParam0, &(uLocal_182[10]), 0, 0, 0, 0, 0);
		if (!is_entity_dead(iLocal_199))
		{
		}
	}
	return 1;
}

void func_881(char[4] cParam0, int iParam1)
{
	cParam0->f_8265 = iParam1;
	func_103(cParam0, 2048);
}

void func_882(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (Global_40.f_4283 == iParam0)
	{
		iVar0 = func_1486(func_1485(iParam0));
		if (iVar0 != -1)
		{
			Global_40.f_6 = { Global_1395601->f_5[iVar0]->f_2 };
		}
		func_310(func_1487(iParam0), 1137976064, -1235532919, -1, 1, 1, 0);
		_0x748c5f51a18cb8f0(0);
		_0x748c5f51a18cb8f0(1);
		Global_40.f_4283.f_330 = -15;
		return;
	}
	func_1488();
	switch (iParam0)
	{
		case 0:
		case 1:
			func_186("hso_post_caravan");
			func_1489(-349064220);
			break;
		case 2:
			func_186("dewclm_post_caravan");
			func_1489(1776302352);
			func_1490(-349064220);
			break;
		case 3:
			func_1489(-523522517);
			func_1490(-349064220);
			func_1490(1776302352);
			break;
		case 4:
		case 5:
		case 6:
			func_1490(-349064220);
			func_1490(1776302352);
			func_1490(-523522517);
			break;
		case 7:
		case 8:
			func_1490(-349064220);
			func_1490(1776302352);
			func_1490(-523522517);
			func_1490(1591451572);
			break;
	}
	Global_1934266->f_66 = 1;
	func_1491(func_1485(iParam0), 0);
	switch (func_20())
	{
		case -1:
			func_1492();
			func_1493(iParam0);
			func_370(1, 18);
			func_1494(iParam0);
			func_1495(iParam0);
			Var2.f_11 = 1;
			iVar22 = 0;
			while (iVar22 < 10)
			{
				_copy_memory(Global_40.f_6563.f_274[iVar22], &Var2, 20);
				iVar22++;
			}
			Global_40.f_6563.f_273 = 0;
			func_1496(&(Global_1359489->f_25), 1, 1);
			Global_1359453 = 0;
			iVar1 = 0;
			while (iVar1 < 27)
			{
				func_984(iVar1, 16384, 1);
				iVar1++;
			}
			func_55(0, 14);
			func_1497();
			func_1498();
			Global_1357549->f_1497.f_8 |= 1;
			Global_1391438 = 1;
			Global_40.f_4283.f_330 = -15;
			func_310(-285172118, 195285667, -1235532919, -1, 0, 1, 0);
			func_310(func_1487(iParam0), 1137976064, -1235532919, -1, 1, 1, 0);
			break;
	}
}

void func_883()
{
	if (!func_391(iLocal_168, 65536))
	{
		clear_ped_blood_damage(Global_35);
		_0xa7a806677f8de138(Global_35);
		set_ped_sweat(Global_35, 0f);
		func_1499(0);
		_0xe6cb36f43a95d75f(0.25f);
		func_414(&iLocal_168, 65536);
	}
}

void func_884(bool bParam0)
{
	if (Global_43891)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 30)
	{
		iVar1 = func_1060(Global_35, iVar0, 0, 1);
		if (is_weapon_valid(iVar1))
		{
			if (_is_weapon_two_handed(iVar1) || func_1500(iVar1))
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

int func_885(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (is_entity_dead(*iParam0))
	{
		return 0;
	}
	if (!is_vehicle_driveable(*iParam1, false, false))
	{
		return 0;
	}
	if (get_ped_in_vehicle_seat(*iParam1, iParam2) != *iParam0)
	{
		if (!is_vehicle_seat_free(*iParam1, iParam2))
		{
			if (iParam3 && func_1501(*iParam1))
			{
				iParam2 = func_1502(*iParam1);
			}
			else
			{
				return 0;
			}
		}
		if (is_ped_on_mount(*iParam0))
		{
			_remove_ped_from_mount(*iParam0, true, false);
		}
		set_ped_into_vehicle(*iParam0, *iParam1, iParam2);
	}
	return 1;
}

void func_886(int iParam0, bool bParam1)
{
	if (!is_itemset_valid(Local_14.f_81))
	{
		Local_14.f_81 = create_itemset(true);
	}
	if (!does_entity_exist(&(Local_14.f_82[0])) && (iParam0 == -1 || iParam0 == 0))
	{
		Local_14.f_82[0] = create_object(421820477, 2235.45f, -776.4903f, 42.4804f, true, true, false, false, true);
		set_entity_rotation(&(Local_14.f_82[0]), 0f, 0f, -33.6968f, 2, true);
		freeze_entity_position(&(Local_14.f_82[0]), bParam1);
	}
	func_1475(&(Local_14.f_82[0]), Local_14);
	func_1475(&(Local_14.f_82[0]), Local_14.f_81);
	if (!does_entity_exist(&(Local_14.f_82[1])) && (iParam0 == -1 || iParam0 == 1))
	{
		Local_14.f_82[1] = create_object(-2021891582, 2220.295f, -767.5731f, 42.4458f, true, true, false, false, true);
		set_entity_rotation(&(Local_14.f_82[1]), 0f, 0f, -1.7261f, 2, true);
		freeze_entity_position(&(Local_14.f_82[1]), bParam1);
	}
	func_1475(&(Local_14.f_82[1]), Local_14);
	func_1475(&(Local_14.f_82[1]), Local_14.f_81);
	if (!does_entity_exist(&(Local_14.f_82[3])) && (iParam0 == -1 || iParam0 == 3))
	{
		Local_14.f_82[3] = create_object(421820477, 2235.448f, -776.3476f, 43.4843f, true, true, false, false, true);
		set_entity_rotation(&(Local_14.f_82[3]), 0f, 0f, -95.9816f, 2, true);
		freeze_entity_position(&(Local_14.f_82[3]), bParam1);
	}
	func_1475(&(Local_14.f_82[3]), Local_14);
	func_1475(&(Local_14.f_82[3]), Local_14.f_81);
}

void func_887(int iParam0, bool bParam1)
{
	if (!is_itemset_valid(Local_14.f_103))
	{
		Local_14.f_103 = create_itemset(true);
	}
	if (!does_entity_exist(&(Local_14.f_104[0])) && (iParam0 == -1 || iParam0 == 0))
	{
		Local_14.f_104[0] = create_object(1935100224, 2275.69f, -771.0028f, 42.9588f, true, true, false, false, true);
		set_entity_rotation(&(Local_14.f_104[0]), 1.9851f, 6.6176f, 49.8853f, 2, true);
		freeze_entity_position(&(Local_14.f_104[0]), bParam1);
	}
	func_1475(&(Local_14.f_104[0]), Local_14);
	func_1475(&(Local_14.f_104[0]), Local_14.f_103);
	if (!does_entity_exist(&(Local_14.f_104[1])) && (iParam0 == -1 || iParam0 == 1))
	{
		Local_14.f_104[1] = create_object(1935100224, 2256.917f, -755.9015f, 41.7409f, true, true, false, false, true);
		set_entity_rotation(&(Local_14.f_104[1]), 0f, 0f, -0.0028f, 2, true);
		freeze_entity_position(&(Local_14.f_104[1]), bParam1);
	}
	func_1475(&(Local_14.f_104[1]), Local_14);
	func_1475(&(Local_14.f_104[1]), Local_14.f_103);
	if (!does_entity_exist(&(Local_14.f_104[2])) && (iParam0 == -1 || iParam0 == 2))
	{
		Local_14.f_104[2] = create_object(1935100224, 2260.91f, -775.8492f, 42.4092f, true, true, false, false, true);
		set_entity_rotation(&(Local_14.f_104[2]), 1.2307f, 4.4176f, -0.0503f, 2, true);
		freeze_entity_position(&(Local_14.f_104[2]), bParam1);
	}
	func_1475(&(Local_14.f_104[2]), Local_14);
	func_1475(&(Local_14.f_104[2]), Local_14.f_103);
	if (!does_entity_exist(&(Local_14.f_104[3])) && (iParam0 == -1 || iParam0 == 3))
	{
		Local_14.f_104[3] = create_object(1935100224, 2284.756f, -763.7355f, 41.6308f, true, true, false, false, true);
		set_entity_rotation(&(Local_14.f_104[3]), 3.201f, 2.5266f, -0.0735f, 2, true);
		freeze_entity_position(&(Local_14.f_104[3]), bParam1);
	}
	func_1475(&(Local_14.f_104[3]), Local_14);
	func_1475(&(Local_14.f_104[3]), Local_14.f_103);
	if (!does_entity_exist(&(Local_14.f_104[4])) && (iParam0 == -1 || iParam0 == 4))
	{
		Local_14.f_104[4] = create_object(1935100224, 2243.419f, -752.8737f, 42.3352f, true, true, false, false, true);
		set_entity_rotation(&(Local_14.f_104[4]), 0f, 0f, 122.3414f, 2, true);
		freeze_entity_position(&(Local_14.f_104[4]), bParam1);
	}
	func_1475(&(Local_14.f_104[4]), Local_14);
	func_1475(&(Local_14.f_104[4]), Local_14.f_103);
	if (!does_entity_exist(&(Local_14.f_104[5])) && (iParam0 == -1 || iParam0 == 5))
	{
		Local_14.f_104[5] = create_object(1935100224, 2272.307f, -731.3752f, 40.6417f, true, true, false, false, true);
		set_entity_rotation(&(Local_14.f_104[5]), -0.0058f, 5.4406f, 0.0003f, 2, true);
		freeze_entity_position(&(Local_14.f_104[5]), bParam1);
	}
	func_1475(&(Local_14.f_104[5]), Local_14);
	func_1475(&(Local_14.f_104[5]), Local_14.f_103);
}

void func_888()
{
	Local_127 = _create_volume_cylinder(2243.814f, -763.3016f, 42.1005f, 0f, 0f, 0f, 0.5f, 0.5f, 3f);
	Local_127.f_1 = _create_volume_cylinder(2258.809f, -769.7121f, 42.1005f, 0f, 0f, 0f, 0.5f, 0.5f, 3f);
	Local_127.f_2 = _create_volume_cylinder(2255.055f, -766.3001f, 42.1005f, 0f, 0f, 0f, 0.5f, 0.5f, 3f);
	Local_127.f_3 = _create_volume_cylinder(2252.867f, -762.1797f, 41.8505f, 0f, 0f, 0f, 0.5f, 0.5f, 3f);
	Local_127.f_4 = _create_volume_cylinder(2247.645f, -763.2205f, 42.3505f, 0f, 0f, 0f, 0.5f, 0.5f, 3f);
	Local_127.f_5 = _create_volume_cylinder(2251.192f, -769.7682f, 41.8781f, 0f, 0f, 0f, 2f, 2f, 3f);
	Local_127.f_6 = _create_volume_box(2208.75f, -789.9003f, 46.7211f, 0f, 0f, 30.52776f, 65.47265f, 86.97409f, 22.33494f);
	Local_127.f_7 = _create_volume_box(2225.426f, -771.335f, 42.11253f, 0f, 0f, 0f, 19.19045f, 12.99794f, 11.39883f);
	Local_127.f_8 = _create_volume_box(2253.167f, -790.4281f, 43.96191f, 0f, 0f, 0f, 10.22287f, 23.57416f, 8.376131f);
	Local_127.f_9 = _create_volume_box(2214.46f, -771.6308f, 40.92903f, 0f, 0f, 0f, 10.21466f, 15.08498f, 8.182734f);
	Local_127.f_10 = _create_volume_box(2230.072f, -779.0812f, 42.49466f, -1.937973f, -0.24408f, -7.175094f, 8.694f, 10.11077f, 5.394402f);
	Local_127.f_11 = _create_volume_box(2252f, -767.8444f, 43.42217f, 0f, 0f, 22.40666f, 6.257119f, 9.729459f, 6.775698f);
	Local_127.f_12 = _create_volume_box(2254.666f, -782.25f, 44.30791f, 0f, 0f, 0f, 1.09f, 1.3f, 2.793186f);
	Local_127.f_13 = _create_volume_box(2250.073f, -785.548f, 41.2809f, 0f, 0f, 23.62402f, 3.309319f, 4.1464f, 3.086169f);
	Local_127.f_14 = _create_volume_box(2243.646f, -783.4688f, 40.85674f, 0f, 0f, -25.5887f, 25.22902f, 5.20699f, 2.989559f);
	Local_127.f_15 = _create_volume_cylinder(2266.304f, -757.1893f, 58.90649f, 0f, 0f, 0f, 66.89801f, 61.33105f, 23.99365f);
	Local_127.f_16 = _create_volume_cylinder(2281.545f, -750.73f, 58.90649f, 0f, 0f, 17f, 110.5479f, 89.68216f, 23.99365f);
	Local_127.f_17 = _create_volume_box(2217.529f, -775.5342f, 43.42272f, 0f, 0f, 0f, 6.491428f, 6.962561f, 5.86052f);
	Local_127.f_18 = _create_volume_box(2224.753f, -770.5308f, 43.83804f, 0f, 0f, 0f, 7.093f, 7.87112f, 4.10253f);
	Local_127.f_19 = _create_volume_box(2232.799f, -770.0836f, 43.9828f, 0f, 0f, 0f, 4.359315f, 9.583136f, 3.067498f);
	Local_127.f_20 = _create_volume_box(2253.586f, -772.4698f, 43.93557f, 0f, 0f, -1.077447f, 7.034366f, 4.851017f, 7.152293f);
	Local_127.f_21 = _create_volume_box(2253.145f, -786.6848f, 44.255f, 0f, 0f, 0f, 3.72021f, 3.916259f, 2.5f);
	Local_127.f_22 = _create_volume_box(2269.666f, -762.5468f, 42.60426f, 0f, 0f, 0f, 109f, 91f, 52f);
	Local_127.f_23 = _create_volume_cylinder(2300.605f, -729.866f, 41.80787f, 0f, 0f, -15.00003f, 35f, 24f, 5f);
	Local_127.f_24 = _create_volume_box(2279.365f, -746.5807f, 42.96433f, 0f, 0f, -23.00002f, 50f, 24f, 12f);
	Local_127.f_25 = _create_volume_cylinder(2305.609f, -741.463f, 45.62097f, 0f, 0f, 0f, 19f, 20f, 7f);
	Local_127.f_26 = _create_volume_box(2239.888f, -780.3407f, 43.50625f, 0f, 0f, 0f, 59f, 54f, 31f);
	Local_127.f_27 = _create_volume_box(2239.888f, -780.3407f, 43.50626f, 0f, 0f, 0f, 50f, 48f, 31f);
	Local_127.f_28 = _create_volume_box(2266.951f, -766.6288f, 42.58786f, 0f, 2.000024f, 27f, 11f, 11f, 4f);
	Local_127.f_29 = _create_volume_box(2250.154f, -785.9281f, 41.60313f, 0f, 0f, 0f, 9f, 6f, 2f);
	Local_127.f_30 = _create_volume_box(2241.3f, -768.4f, 43.5f, 0f, 0f, 0f, 5f, 5f, 5f);
	Local_127.f_31 = _create_volume_box(2250.69f, -770.7295f, 45.09159f, 0f, 0f, 0f, 33f, 30f, 4f);
}

void func_889()
{
	func_1216(&(uLocal_182[3]), 379542007);
	func_1216(&(uLocal_182[3]), -183018591);
	func_1216(&(uLocal_182[3]), 1845102363);
	func_1216(&(uLocal_182[1]), 1999408598);
	func_1260(&(uLocal_182[1]), 1845380267, 0, 0, 0, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
	func_1260(&(uLocal_182[1]), -665597951, 1, 0, 0, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
	func_1216(&(uLocal_182[2]), 127400949);
	func_1260(&(uLocal_182[2]), 36703333, 1, 0, 0, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
	func_1216(&(uLocal_182[0]), 2075992054);
	func_1260(&(uLocal_182[0]), -733324796, 1, 0, 0, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
}

void func_890(float fParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (func_20() == 0)
	{
		func_1503(1, (fParam0 / 2f), bParam1, 1, bParam2);
		return;
	}
	fVar0 = func_1504(1);
	if (bParam1)
	{
		func_1505(fVar0);
	}
	if (bParam2)
	{
		fParam0 = func_1506(1, fParam0, bParam3);
	}
	fParam0 = (fParam0 + fVar0);
	func_1508(1, func_1507(fParam0, -100f, 100f), bParam1);
}

void func_891(float fParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (func_20() == 0)
	{
		func_1503(2, (fParam0 / 2f), bParam1, 1, bParam2);
		return;
	}
	fVar0 = func_1504(2);
	if (bParam1)
	{
		func_1505(fVar0);
	}
	if (bParam2)
	{
		fParam0 = func_1506(2, fParam0, bParam3);
	}
	fParam0 = (fParam0 + fVar0);
	func_1508(2, func_1507(fParam0, -100f, 100f), bParam1);
}

void func_892(float fParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (func_20() == 0)
	{
		func_1503(0, (fParam0 / 2f), bParam1, 1, bParam2);
		return;
	}
	fVar0 = func_1504(0);
	if (bParam1)
	{
		func_1505(fVar0);
	}
	if (fVar0 >= (100f - 1f))
	{
		func_1509();
	}
	if (bParam2)
	{
		fParam0 = func_1506(0, fParam0, bParam3);
	}
	fParam0 = (fParam0 + fVar0);
	func_1508(0, func_1507(fParam0, -100f, 100f), bParam1);
}

void func_893()
{
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (does_entity_exist(&(Local_14.f_104[iVar0])))
		{
			_0xf49574e2332a8f06(&(Local_14.f_104[iVar0]), 0.1f);
			_0x63e39f09310f481f(&(Local_14.f_104[iVar0]), 1.75f);
		}
		iVar0++;
	}
}

void func_894()
{
	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (((((((((((((iVar0 != 0 && iVar0 != 3) && iVar0 != 6) && iVar0 != 11) && iVar0 != 4) && iVar0 != 17) && iVar0 != 18) && iVar0 != 13) && iVar0 != 22) && iVar0 != 17) && iVar0 != 7) && iVar0 != 21) && iVar0 != 2) && iVar0 != 19)
		{
			func_1314(iVar0);
			func_983(iVar0, 1, 1, 1, 0);
			iLocal_238[iVar0] = 1;
		}
		iVar0++;
	}
}

void func_895(bool bParam0, int iParam1)
{
	if (!func_391(iLocal_168, 2048) || bParam0)
	{
		if ((!func_165(iLocal_198, 0) && !is_entity_dead(iLocal_201)) && does_entity_exist(iLocal_201))
		{
			set_entity_heading(iLocal_201, (func_1464(2, 4) - IntToFloat(iParam1)));
			if (!bParam0)
			{
				func_414(&iLocal_168, 2048);
			}
		}
	}
}

void func_896(int iParam0)
{
	switch (func_20())
	{
		case -1:
			Global_1357549->f_1495 = (Global_1357549->f_1495 || iParam0);
			break;
	}
}

void func_897(char[4] cParam0)
{
	if (does_entity_exist(&(Local_14.f_79[0])))
	{
		set_entity_invincible(&(Local_14.f_79[0]), true);
	}
	_0xf45e46deecf7df6e(14336, 0, 0, -1, -1);
	_0xab0d553fe20a6e25(0f);
	set_vehicle_density_multiplier_this_frame(0f);
	set_random_vehicle_density_multiplier_this_frame(0f);
	set_parked_vehicle_density_multiplier_this_frame(0f);
	set_scenario_ped_density_multiplier_this_frame(0f);
	func_1510(0f);
	set_radar_as_exterior_this_frame();
	set_ped_reset_flag(Global_35, 154, true);
	func_1511(0);
	if (func_33(cParam0) == iLocal_162)
	{
		if (func_26(&uLocal_298) && func_860(&uLocal_298) <= 5f)
		{
			if (_0xb16223cb7da965f0(player_id()))
			{
				disable_control_action(1, -1722177808, false);
				_0xc252c0cc969af79a(1);
				if (func_165(Global_35, 0) && is_player_playing(player_id()))
				{
					set_player_forced_aim(player_id(), true, 0, -1, false);
				}
			}
			else
			{
				set_player_forced_aim(player_id(), false, 0, -1, false);
				_0x4be3ec91c01f0fe8();
				func_1261(0);
			}
		}
		else
		{
			set_player_forced_aim(player_id(), false, 0, -1, false);
			_0x4be3ec91c01f0fe8();
			func_1261(0);
		}
	}
	if (!func_391(iLocal_168, 1048576))
	{
		if (func_864(cParam0))
		{
			func_414(&iLocal_168, 1048576);
		}
	}
}

void func_898(char[4] cParam0)
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

void func_899(char[4] cParam0)
{
	if (!func_8(cParam0, 8388608))
	{
		if (func_162(cParam0, func_33(cParam0)) == 5 || func_162(cParam0, func_33(cParam0)) == 6)
		{
			if (!func_215())
			{
				if (func_860(&(cParam0->f_13112)) < 5f)
				{
					_0x9f9a829c6751f3c7(get_player_index(), 31, 0);
				}
			}
			else
			{
				func_222(&(cParam0->f_13112));
			}
		}
	}
	else
	{
		_0x9f9a829c6751f3c7(get_player_index(), 31, 1);
	}
}

void func_900(char[4] cParam0)
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

void func_901(char[4] cParam0)
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
		if (func_241() || func_54())
		{
			func_99(cParam0, 1048576);
		}
	}
	else if (!func_241() && !func_54())
	{
		func_856(cParam0, 1048576);
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
			func_856(cParam0, 134217728);
		}
	}
}

void func_902(char[4] cParam0)
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

void func_903(char[4] cParam0)
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

void func_904(var uParam0)
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

int func_905(char[4] cParam0)
{
	if ((func_20() != -1 || func_33(cParam0) == 25) || func_33(cParam0) == 26)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < cParam0->f_13145)
	{
		if (func_257(cParam0->f_5423[iVar0]))
		{
			func_1516(cParam0->f_5423[iVar0]);
		}
		iVar0++;
	}
	return 0;
}

bool func_906(char[4] cParam0, int iParam1, int iParam2)
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

int func_907(char[4] cParam0, int iParam1)
{
	return cParam0->f_1[func_132(iParam1)]->f_21;
}

int func_908(char[4] cParam0, int iParam1)
{
	return 1;
}

void func_909(var uParam0)
{
	if (!func_20() == 0 || network_is_host_of_this_script())
	{
		func_222(&(uParam0->f_603));
	}
}

void func_910(char[4] cParam0, int iParam1, int iParam2)
{
	cParam0->f_1[func_132(iParam1)]->f_10 = iParam2;
	settimera(0);
}

bool func_911(var uParam0)
{
	if (!is_screen_faded_out())
	{
		return true;
	}
	if (!func_26(&(uParam0->f_13109)))
	{
		func_27(&(uParam0->f_13109), 0);
	}
	else if (func_860(&(uParam0->f_13109)) >= 10f)
	{
		return true;
	}
	iVar0 = 1;
	if (func_258(uParam0->f_5421))
	{
		iVar1 = 0;
		while (iVar1 < func_259(uParam0->f_5421))
		{
			iVar2 = func_260(uParam0->f_5421, iVar1);
			if (does_entity_exist(iVar2))
			{
				if (is_entity_a_ped(iVar2))
				{
					iVar3 = func_460(uParam0->f_5421, iVar1);
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

float func_912(var uParam0)
{
	return func_860(&(uParam0->f_603));
}

bool func_913(char[4] cParam0)
{
	if ((func_120(cParam0, 4) || func_120(cParam0, 128)) && !func_102())
	{
		return false;
	}
	return true;
}

bool func_914(char[4] cParam0, int iParam1, int iParam2)
{
	if (func_8(cParam0, -2147483648))
	{
		return true;
	}
	if (func_906(cParam0, iParam1, 4))
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
		func_1521(cParam0);
		if (func_1522(cParam0))
		{
			func_1523(cParam0);
		}
		if (func_121(cParam0, func_33(cParam0), 33554432) && func_8(cParam0, 524288))
		{
			_uilog_print_cached_objective();
		}
		func_856(cParam0, 524288);
		func_1524(&(cParam0->f_7375), 4);
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

void func_915(char[4] cParam0)
{
	func_1525(cParam0);
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

bool func_916(char[4] cParam0, int iParam1)
{
	if (func_120(cParam0, 16384))
	{
		if (func_855(cParam0))
		{
			func_51(&(cParam0->f_10792));
			func_856(cParam0, 2097152);
			func_268(cParam0, 16384);
			func_103(cParam0, 128);
			return true;
		}
		return false;
	}
	if (!func_8(cParam0, 4))
	{
		func_908(cParam0, iParam1);
		func_99(cParam0, 4);
	}
	Var0 = { func_1434(cParam0, iParam1) };
	if (func_121(cParam0, func_33(cParam0), 2))
	{
		if (func_8(cParam0, 2097152))
		{
			if (func_855(cParam0))
			{
				func_856(cParam0, 2097152);
				func_857(cParam0, Var0);
			}
			return false;
		}
		else
		{
			return func_857(cParam0, Var0);
		}
	}
	else if (func_8(cParam0, 2097152))
	{
		if (func_855(cParam0))
		{
			func_856(cParam0, 2097152);
			func_1441(cParam0);
			return true;
		}
		else
		{
			return false;
		}
	}
	if (func_121(cParam0, func_33(cParam0), 2))
	{
		return func_857(cParam0, Var0);
	}
	return true;
}

bool func_917(var uParam0)
{
	return func_1526(&(uParam0->f_7375));
}

void func_918(var uParam0)
{
	if (((!does_entity_exist(Global_35) || Global_1935630->f_12) || is_ped_fatally_injured(Global_35)) || get_entity_health(Global_35) <= 0)
	{
		if (func_1527(uParam0))
		{
			func_432(uParam0, 2);
			StringCopy(&cVar0, "PLAYER_DEAD", 64);
			if (get_ped_config_flag(Global_35, 11, true))
			{
				StringCopy(&cVar0, "PLAYER_KO", 64);
			}
			func_1528(uParam0, cVar0);
			func_160(uParam0, 2);
		}
	}
}

int func_919(char[4] cParam0, int iParam1)
{
	if (((func_20() != -1 || func_33(cParam0) == 25) || func_33(cParam0) == 26) || Global_1935630->f_12)
	{
		return 0;
	}
	bVar0 = func_121(cParam0, func_33(cParam0), 1);
	iVar1 = 0;
	while (iVar1 < cParam0->f_13145)
	{
		if (func_257(cParam0->f_5423[iVar1]))
		{
			if (func_1529(cParam0->f_5423[iVar1]->f_7, iParam1))
			{
				func_1530(cParam0, cParam0->f_5423[iVar1], bVar0);
			}
		}
		iVar1++;
	}
	return 0;
}

void func_920(var uParam0)
{
	if ((is_screen_faded_out() && !is_player_playing(player_id())) && is_player_being_arrested(player_id(), false))
	{
		if (func_1531(uParam0))
		{
			func_432(uParam0, 6);
			StringCopy(&cVar0, "PLAYER_ARRESTED", 64);
			func_1528(uParam0, cVar0);
			func_160(uParam0, 2);
		}
	}
}

void func_921(char[4] cParam0)
{
	switch (func_1532(&iVar0))
	{
		case 1:
			func_1533(cParam0, Var1, 1, 0);
			break;
		case 3:
			if (!_databinding_is_data_id_valid(cParam0->f_13178))
			{
				cParam0->f_13178 = _databinding_add_data_bool_from_path("", "bAllowedtoAbandon", 0);
			}
			if (func_192(iVar0) && iVar0 == func_12(cParam0->f_607))
			{
				bVar9 = true;
			}
			_databinding_write_data_bool(cParam0->f_13178, bVar9);
			break;
	}
}

bool func_922(char[4] cParam0, int iParam1)
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

int func_923(char[4] cParam0, int iParam1)
{
	if (func_8(cParam0, 16777216))
	{
		func_1440(cParam0);
		func_856(cParam0, 65536);
		return 0;
	}
	if (!func_121(cParam0, iParam1, 2))
	{
		return 0;
	}
	Var0 = { func_1434(cParam0, iParam1) };
	if (func_1534(cParam0, &Var0))
	{
		if (!func_8(cParam0, 65536))
		{
			func_99(cParam0, 65536);
		}
		return 1;
	}
	return 0;
}

void func_924(var uParam0, int iParam1)
{
	func_1535(&(uParam0->f_638), &(uParam0->f_819), &(uParam0->f_1020), &(uParam0->f_1081), &(uParam0->f_1124), &(uParam0->f_1126), &(uParam0->f_5147), &(uParam0->f_5188), &(uParam0->f_5239), &(uParam0->f_5249), &(uParam0->f_5265), &(uParam0->f_5286), iParam1, func_228(uParam0, iParam1));
}

void func_925(char[4] cParam0, int iParam1)
{
	if (!func_121(cParam0, func_33(cParam0), 67108864))
	{
		if (does_blip_exist(cParam0->f_5303))
		{
			remove_blip(&(cParam0->f_5303));
		}
		cParam0->f_7374 = 0;
		func_910(cParam0, iParam1, 2);
		func_134(cParam0, 0);
		func_135(cParam0, 0);
		func_99(cParam0, 8);
		func_856(cParam0, -2147483648);
		func_140(cParam0, func_33(cParam0), 67108864);
		func_856(cParam0, 4);
		func_856(cParam0, 8192);
		func_856(cParam0, 536870912);
		func_268(cParam0, 4);
		func_65(0);
		func_64(0);
		func_856(cParam0, 2);
		func_45();
		cParam0->f_5302 = 0;
		func_1536(cParam0);
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
				func_1537(1, 1);
			}
		}
	}
}

void func_926(bool bParam0)
{
	if (!func_199(0, 0, 1) || bParam0)
	{
		iVar0 = func_1015();
		iVar1 = func_1018(iVar0);
		fVar2 = (1f - (absf(to_float(iVar1)) / to_float(8)));
		fVar3 = func_1538(iVar0 < 0, 0f, (to_float(iVar1) / to_float(8)));
		fVar4 = func_1538(iVar0 > 0, 0f, (to_float(iVar1) / to_float(8)));
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

int func_927(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (iParam0 == player_id())
	{
		return func_1539(bParam1, bParam2, bParam3);
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

var func_928(char* sParam0, int iParam1, bool bParam2, bool bParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, int iParam8)
{
	if (bParam2)
	{
		_0xdd1232b332cbb9e7(3, 1, 1);
	}
	if (Global_1572887->f_12 != -1)
	{
		return func_1540(sParam0, iParam1, 0, 0, 1, 1);
	}
	sVar0 = func_1541(iParam8, sParam0, sParam4, sParam5, sParam6, sParam7);
	if (bParam3)
	{
		_uilog_set_cached_objective(sVar0);
	}
	return func_1540(sVar0, iParam1, 0, 0, 1, 1);
}

bool func_929(var uParam0)
{
	return true;
}

bool func_930(var uParam0)
{
	return true;
}

int func_931(var uParam0)
{
	return 1;
}

void func_932(var uParam0)
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

bool func_933(int iParam0)
{
	return iParam0 != 0;
}

int func_934(int iParam0)
{
	if (func_452(iParam0))
	{
		return 0;
	}
	if (func_444(iParam0, 0))
	{
		func_455(iParam0);
		return 1;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < Global_40.f_450)
		{
			if (&Global_40.f_450[iVar0] == -1)
			{
				func_455(iParam0);
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

bool func_935(int iParam0)
{
	return func_299(iParam0) == 0;
}

int func_936(int iParam0)
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

void func_937(int iParam0, bool bParam1)
{
	if (!func_192(iParam0))
	{
		return;
	}
	if (!func_935(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (func_195(iParam0) == 0)
		{
		}
		else if (!_0x01f4d242765c6b24(func_195(iParam0)))
		{
			_0xca41e86545413b5b(func_197(iParam0), func_275(iParam0), func_318(iParam0), func_195(iParam0), Global_36);
		}
	}
	func_204(iParam0, 1);
	bParam1 = bParam1;
}

void func_938(int iParam0, bool bParam1)
{
	if ((*Global_1898346)[iParam0]->f_2 == 0 || bParam1)
	{
		(*Global_1898346)[iParam0]->f_2 = func_471(Global_1898330[iParam0]);
		func_1542((*Global_1898346)[iParam0]->f_2, &((*Global_1898346)[iParam0]->f_4), &((*Global_1898346)[iParam0]->f_5), &((*Global_1898346)[iParam0]->f_3));
	}
}

void func_939(int iParam0)
{
	if (!func_192(iParam0))
	{
		return;
	}
	if (!func_194(iParam0))
	{
		return;
	}
	func_204(iParam0, 2);
}

bool func_940(int iParam0)
{
	if (iParam0 == -1)
	{
		return true;
	}
	if (iParam0 == 0)
	{
		return false;
	}
	iVar0 = func_693(func_288());
	if (func_1543(iParam0, 1))
	{
		if (iVar0 >= 6 && iVar0 < 12)
		{
			return true;
		}
	}
	if (func_1543(iParam0, 2))
	{
		if (iVar0 >= 12 && iVar0 < 18)
		{
			return true;
		}
	}
	if (func_1543(iParam0, 4096))
	{
		if (iVar0 >= 11 && iVar0 < 14)
		{
			return true;
		}
	}
	if (func_1543(iParam0, 4))
	{
		if (iVar0 >= 18 && iVar0 < 24)
		{
			return true;
		}
	}
	if (func_1543(iParam0, 8))
	{
		if (iVar0 >= 0 && iVar0 < 6)
		{
			return true;
		}
	}
	if (func_1543(iParam0, 16))
	{
		if (iVar0 >= 20 || iVar0 < 7)
		{
			return true;
		}
	}
	if (func_1543(iParam0, 1024))
	{
		if (iVar0 >= 5 && iVar0 < 12)
		{
			return true;
		}
	}
	if (func_1543(iParam0, 32))
	{
		if (iVar0 >= 5 && iVar0 < 22)
		{
			return true;
		}
	}
	if (func_1543(iParam0, 64))
	{
		if (iVar0 >= 6 && iVar0 < 20)
		{
			return true;
		}
	}
	if (func_1543(iParam0, 128))
	{
		if (iVar0 >= 21 || iVar0 < 5)
		{
			return true;
		}
	}
	if (func_1543(iParam0, 256))
	{
		if (iVar0 >= 22 && iVar0 < 24)
		{
			return true;
		}
	}
	if (func_1543(iParam0, 512))
	{
		if (iVar0 >= 0 && iVar0 < 5)
		{
			return true;
		}
	}
	if (func_1543(iParam0, 8192))
	{
		if (iVar0 >= 6 && iVar0 < 20)
		{
			return true;
		}
	}
	if (func_1543(iParam0, 2048))
	{
		if (iVar0 >= 1 && iVar0 < 3)
		{
			return true;
		}
	}
	if (func_1543(iParam0, 16384))
	{
		if (iVar0 >= 6 && iVar0 < 24)
		{
			return true;
		}
	}
	if (func_1543(iParam0, 32768))
	{
		if (iVar0 >= 21 || iVar0 < 6)
		{
			return true;
		}
	}
	if (func_1543(iParam0, 65536))
	{
		if (iVar0 >= 18 && iVar0 < 19)
		{
			return true;
		}
	}
	return false;
}

int func_941(int iParam0)
{
	return shift_left(1, iParam0);
}

void func_942(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 || iParam1);
}

int func_943()
{
	return Global_40.f_4283.f_1;
}

bool func_944(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (func_20() != -1)
	{
		return true;
	}
	if (iParam2 == 0 && func_199(0, 1, 1))
	{
		return false;
	}
	if (&Global_1879534)
	{
		return false;
	}
	if (func_1544(iParam0, iParam1))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (func_1545(iVar0, &iParam0))
		{
			Global_40.f_4942[iVar0]->f_59 = iParam1;
			if (iParam3 == iParam4)
			{
				func_434(iVar0, 512, 1);
			}
			else
			{
				func_984(iVar0, 512, 1);
			}
		}
		iVar0++;
	}
	return true;
}

void func_945(int iParam0)
{
	if (_does_volume_exist((*Global_1347702)[iParam0]->f_41))
	{
		func_1546((*Global_1347702)[iParam0]->f_41);
		if (iParam0 == 91 || iParam0 == 129)
		{
			_0xd17672447692478e((*Global_1347702)[iParam0]->f_41, 0);
		}
		_delete_volume((*Global_1347702)[iParam0]->f_41);
	}
}

void func_946(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_947(int iParam0, bool bParam1)
{
	if (!func_276(iParam0))
	{
		return;
	}
	if (does_blip_exist((*Global_1347702)[iParam0]->f_37))
	{
		func_1547(&((*Global_1347702)[iParam0]->f_14));
		func_457(&((*Global_1347702)[iParam0]->f_13), 16);
		func_1548(iParam0);
		if ((!func_1549(player_id(), 1, 0, 1) || Global_43891) || bParam1)
		{
			set_this_script_can_remove_blips_created_by_any_script(true);
			_0x2f901291ef177b02((*Global_1347702)[iParam0]->f_40, 0);
			func_457(&((*Global_1347702)[iParam0]->f_13), 4096);
			func_1550(&((*Global_1347702)[iParam0]->f_37));
		}
		else
		{
			func_1551(iParam0, 16384);
			func_1553(iParam0, 1, func_1552(iParam0));
		}
	}
}

void func_948(int iParam0)
{
	if (func_1554(iParam0, &iVar1, &iVar0))
	{
		if (func_1555(iVar1, iVar0, 1))
		{
			func_1556(iVar1, iVar0);
		}
	}
}

bool func_949(int iParam0)
{
	return iParam0 > -1;
}

int func_950(int iParam0)
{
	if (!func_949(iParam0))
	{
		return 0;
	}
	if (!_0x800df3fc913355f3((*Global_1360165)[iParam0]->f_126))
	{
		iVar0 = func_1557(iParam0, 1);
		iVar1 = _0xa00df706c60173d1(iVar0);
		if (Global_40.f_4942[iParam0]->f_7 != 0 && iVar1 != Global_40.f_4942[iParam0]->f_7)
		{
			_0x8bc555034a5a5e8c(iVar0, Global_40.f_4942[iParam0]->f_7);
		}
		(*Global_1360165)[iParam0]->f_126 = _create_persistent_character(iVar0);
		_0xfcc6db8dbe709bc8((*Global_1360165)[iParam0]->f_126);
	}
	return (*Global_1360165)[iParam0]->f_126;
}

int func_951()
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
		iVar3 = func_1558(Global_1934765->f_318[iVar2]->f_1);
		if (iVar3 > iVar0)
		{
			iVar0 = iVar3;
			iVar1 = iVar2;
		}
		iVar2 = (iVar2 + -1);
	}
	return iVar1;
}

bool func_952(int iParam0, bool bParam1, float fParam2)
{
	if (!is_bit_set(Global_1934765->f_301, 0))
	{
		return false;
	}
	if (is_bit_set(Global_1934765->f_301, 1))
	{
		return false;
	}
	if (iParam0 == 15)
	{
		return false;
	}
	if (iParam0 == 0)
	{
		_0x243cede8f916b994();
		return false;
	}
	iVar0 = func_1559(iParam0, 1);
	iVar1 = 0;
	while (iVar1 < 24)
	{
		iVar2 = func_1560(iVar1, 1);
		if (iVar2 == 0 || iVar2 == -1439599467)
		{
		}
		else if (is_bit_set(&(Global_1934765->f_302[iVar0]), iVar1))
		{
			_0xd3f943b88f55376a(iVar2);
		}
		else
		{
			_0x2916b30dc6c41179(iVar2);
		}
		iVar1++;
	}
	return func_1561(iParam0, bParam1, fParam2);
}

bool func_953(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return ((*Global_1945938)[iParam0]->f_1 && iParam1) != 0;
}

int func_954(int iParam0)
{
	iVar0 = func_470(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return func_1562(iVar0);
}

int func_955(int iParam0, int iParam1)
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
			func_1563(iVar2);
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

void func_956()
{
	iVar0 = 0;
	while (iVar0 < Global_1058888->f_40501)
	{
		iVar0++;
	}
}

int func_957(int iParam0, int iParam1)
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

int func_958(bool bParam0)
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

int func_959(int iParam0)
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

void func_960(int iParam0, int iParam1)
{
	Global_1946804->f_2657.f_26.f_6 = (Global_1946804->f_2657.f_26.f_6 - (Global_1946804->f_2657.f_26.f_6 && iParam0));
}

void func_961(int iParam0, int iParam1)
{
	Global_1946804->f_2657.f_26.f_6 = (Global_1946804->f_2657.f_26.f_6 || iParam0);
}

void func_962(int iParam0, int iParam1)
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
			func_1564((iVar0 - 1), iVar0);
			iVar0 = (iVar0 - 1);
		}
	}
	else
	{
		iVar0 = iParam0;
		while (iVar0 < iParam1)
		{
			func_1564(iVar0, iVar0 + 1);
			iVar0++;
		}
	}
	if (func_192(&(Global_1898164->f_1[0])))
	{
		func_204(&(Global_1898164->f_1[0]), 3);
	}
}

void func_963(int iParam0, int iParam1, bool bParam2)
{
	if (!func_488(iParam0))
	{
		return;
	}
	func_1565(iParam1, &iVar0, &iVar1);
	if (bParam2)
	{
		set_bit((*Global_1935183->f_73[iParam0])[iVar0], iVar1);
	}
	else
	{
		clear_bit((*Global_1935183->f_73[iParam0])[iVar0], iVar1);
	}
}

void func_964(var uParam0)
{
	Var0 = -1600776215;
	Var0.f_1 = 820723243;
	Var0.f_2 = 1;
	*uParam0 = { Var0 };
}

void func_965(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_966(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_967()
{
	if (_get_number_of_references_of_script_with_name_hash(-92416669) > 0)
	{
		return true;
	}
	return false;
}

bool func_968(int iParam0)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1934603->f_161)
	{
		if (iParam0 == get_hash_key(&((*Global_1934603)[iVar0]->f_10)))
		{
			func_1566(iVar0);
			return true;
		}
		iVar0++;
	}
	return false;
}

float func_969(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 273.128f;
				case 1:
					return 10.8019f;
				case 2:
					return 0f;
				case 3:
					return -77.76f;
				case 4:
					return 158.4f;
				case 5:
					return -97.3229f;
				case 6:
					return 1.44f;
				case 7:
					return 87.72f;
				case 8:
					return -255.92f;
				case 9:
					return 305.0839f;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 453.128f;
				case 1:
					return 273.128f;
				case 2:
					return 273.128f;
				case 3:
					return 265.84f;
				case 4:
					return 148.32f;
				case 5:
					return -83.52f;
				case 6:
					return 22.32f;
				case 7:
					return -0.9882f;
				case 8:
					return -96.3115f;
				case 9:
					return 365.4846f;
				case 10:
					return 309.86f;
				case 11:
					return 187.4078f;
				case 12:
					return 349.92f;
				case 13:
					return 172.08f;
				case 14:
					return 88.7779f;
				case 15:
					return 272.1146f;
				case 16:
					return -65.92f;
				case 17:
					return -51.84f;
				case 18:
					return -79.92f;
				case 19:
					return -7.92f;
				case 20:
					return 265.4802f;
				case 21:
					return 373.9154f;
				case 22:
					return 267.9154f;
				case 23:
					return 329.9154f;
				case 24:
					return 377.9154f;
				case 25:
					return 371.9154f;
				case 26:
					return 460.1552f;
				case 27:
					return 354.1552f;
				case 28:
					return 219.3779f;
				case 29:
					return 269.3779f;
				case 30:
					return 12.2406f;
				case 31:
					return -121.7594f;
				case 32:
					return 175.643f;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return -69.84f;
				case 1:
					return 195.3318f;
				case 2:
					return 48.4168f;
				case 3:
					return 48.4168f;
				case 4:
					return 105.72f;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return 220.8441f;
				case 1:
					return 186.8441f;
				case 2:
					return 212.8441f;
				case 3:
					return 259.633f;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return 372.0932f;
				case 1:
					return 103.343f;
				case 2:
					return 8.643f;
				case 3:
					return 148.32f;
				case 4:
					return -18.72f;
				case 5:
					return -69.84f;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					return 166.8441f;
				case 1:
					return 194.8441f;
				case 2:
					return 264.8441f;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					return 162.72f;
				case 1:
					return 241.68f;
				case 2:
					return 144.8849f;
			}
			break;
		case 7:
			switch (iParam1)
			{
				case 0:
					return -97.2f;
				case 1:
					return -77.04f;
				case 2:
					return -104.4f;
				case 3:
					return 257.76f;
				case 4:
					return -59.76f;
				case 5:
					return -36f;
				case 6:
					return -114.48f;
				case 7:
					return -104f;
				case 8:
					return -62f;
			}
			break;
		case 8:
			switch (iParam1)
			{
				case 0:
					return 499.3857f;
				case 1:
					return 481.3857f;
				case 2:
					return 457.3857f;
				case 3:
					return 421.3857f;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 0:
					return 148.72f;
				case 1:
					return 120.32f;
				case 2:
					return 71.04f;
				case 3:
					return -337.44f;
				case 4:
					return 72.32f;
			}
			break;
		case 10:
			switch (iParam1)
			{
				case 0:
					return 183.36f;
				case 1:
					return 86.64f;
				case 2:
					return -146.8f;
				case 3:
					return 138.16f;
				case 4:
					return 231.84f;
					Jump @1734; //curOff = 1720
					return -44.64f;
					Jump @2273; //curOff = 1734
					switch (iParam1)
					{
						case 0:
							return 197.874f;
						case 1:
							return 167.874f;
						case 2:
							return 559.874f;
						case 3:
							return 219.874f;
						case 4:
							return 469.874f;
					}
					Jump @2273; //curOff = 1830
					switch (iParam1)
					{
						case 0:
							return 497.0745f;
						case 1:
							return 153.0744f;
						case 2:
							return 305.0839f;
					}
					Jump @2273; //curOff = 1892
					switch (iParam1)
					{
						case 0:
							return 110f;
						case 1:
							return 124f;
						case 2:
							return 483.0839f;
						case 3:
							return 559.0839f;
					}
					Jump @2273; //curOff = 1971
					switch (iParam1)
					{
						case 0:
							return 273.0839f;
						case 1:
							return 287.0839f;
						case 2:
							return 271.0839f;
					}
					Jump @2273; //curOff = 2033
					switch (iParam1)
					{
						case 0:
							return 77.7328f;
						case 1:
							return 77.7328f;
					}
					Jump @2273; //curOff = 2078
					switch (iParam1)
					{
						case 0:
							return 123.8871f;
						case 1:
							return 125.8871f;
					}
					Jump @2273; //curOff = 2123
					switch (iParam1)
					{
						case 0:
							return 81.6868f;
						case 1:
							return 187.6868f;
						case 2:
							return 89.6868f;
						case 3:
							return 135.6868f;
						case 4:
							return 149.6868f;
						case 5:
							return 53.6868f;
						case 6:
							return 117.6868f;
						case 7:
							return 69.6868f;
					}
					return 0f;
				}

void func_970(bool bParam0, bool bParam1)
{
	if (func_20() == -1)
	{
		func_1567();
	}
	else
	{
		return;
	}
	func_1568();
	Global_40.f_9.f_14 = func_288();
	Global_40.f_9.f_20 = _get_bounty_for_player(get_player_index());
	Global_40.f_11999 = _0xb00ce33465b5406d(1, "startup");
	if (bParam0 && !bParam1)
	{
		if (func_1569())
		{
			func_374(Global_1310720->f_1);
		}
		else if (func_943() == func_375(Global_36, 1) && func_1570() != 2)
		{
			func_374(Global_40.f_6);
			Global_40.f_9 = 1;
		}
		else
		{
			func_374(Global_36);
		}
		func_1571(Global_36, &vVar0, &uVar4);
		if (!func_1569())
		{
			if (func_1572(vVar0, Global_36) < func_1572(Global_40.f_9.f_7, Global_36))
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
		func_1571(Global_36, &(Global_40.f_9.f_7), &(Global_40.f_9));
		override_save_house(true, Global_40.f_9.f_7, 0f, true, &vVar0, &uVar3);
	}
	if (!bParam1)
	{
		func_232(Global_1935630, 8192);
	}
	func_1573();
}

bool func_971(char[4] cParam0, int iParam1, int iParam2)
{
	if (!does_entity_exist(iParam1))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < cParam0->f_13145)
	{
		if (func_257(cParam0->f_5423[iVar0]))
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

bool func_972(char[4] cParam0, int iParam1)
{
	if (!does_entity_exist(iParam1))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < cParam0->f_13145)
	{
		if (((func_257(cParam0->f_5423[iVar0]) && is_entity_an_object(&(cParam0->f_5423[iVar0]))) && get_object_index_from_entity_index(&(cParam0->f_5423[iVar0])) != iParam1) && get_entity_model(&(cParam0->f_5423[iVar0])) == get_entity_model(iParam1))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

void func_973(int iParam0, int iParam1, bool bParam2)
{
	if (!func_949(iParam0))
	{
		return;
	}
	func_1574(&((*Global_1360165)[iParam0]->f_13), iParam1, bParam2);
}

bool func_974(var uParam0, int iParam1)
{
	return (*uParam0 && iParam1) != 0;
}

void func_975(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_949(iParam0))
		{
			return;
		}
	}
	func_1575(iParam1, &iVar0, &iVar1);
	set_bit((*Global_1360165)[iParam0]->f_58[iVar0], iVar1);
}

void func_976(int iParam0)
{
	func_975(iParam0, 36, 1);
}

void func_977(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_949(iParam0))
		{
			return;
		}
	}
	func_1575(iParam1, &iVar0, &iVar1);
	clear_bit((*Global_1360165)[iParam0]->f_58[iVar0], iVar1);
}

int func_978(int iParam0, bool bParam1)
{
	if (!func_509(iParam0))
	{
		return 0;
	}
	if (bParam1)
	{
		if (!_0x800df3fc913355f3((*Global_1360165)[iParam0]->f_1))
		{
			func_1576(iParam0);
		}
	}
	return (*Global_1360165)[iParam0]->f_1;
}

bool func_979(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_949(iParam0))
		{
			return false;
		}
	}
	func_1575(iParam1, &iVar0, &iVar1);
	return is_bit_set(&((*Global_1360165)[iParam0]->f_58[iVar0]), iVar1);
}

void func_980(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (func_509(iParam0))
	{
		iVar1 = func_546(iParam0);
		if (!is_entity_dead(iVar1))
		{
			iVar0 = get_ped_max_health(iVar1);
			set_ped_config_flag(iVar1, 179, true);
			func_1577(iParam0);
		}
	}
	if (func_979(iParam0, 5, 1))
	{
		set_ped_config_flag(func_546(iParam0), 137, true);
	}
}

void func_981(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!func_949(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_977(iParam0, 50, 1);
		func_977(iParam0, 48, 1);
		func_977(iParam0, 49, 1);
		func_977(iParam0, 51, 1);
		func_977(iParam0, 52, 1);
		func_977(iParam0, 54, 1);
		func_977(iParam0, 55, 1);
	}
	else
	{
		func_975(iParam0, 50, 1);
		func_975(iParam0, 48, 1);
		func_975(iParam0, 49, 1);
		func_975(iParam0, 51, 1);
		if (bParam3)
		{
			func_975(iParam0, 54, 1);
		}
		else
		{
			func_977(iParam0, 54, 1);
		}
		if (!bParam2)
		{
			func_975(iParam0, 52, 1);
			if (bParam3)
			{
				func_975(iParam0, 55, 1);
			}
		}
		else
		{
			func_977(iParam0, 52, 1);
			if (!bParam3)
			{
				func_977(iParam0, 55, 1);
			}
		}
	}
}

void func_982(int iParam0, bool bParam1)
{
	if (!func_949(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		set_ped_config_flag(func_546(iParam0), 204, true);
	}
	else
	{
		set_ped_config_flag(func_546(iParam0), 204, false);
	}
}

void func_983(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (!func_509(iParam0))
	{
		return;
	}
	if (func_510(iParam0))
	{
		if (!func_261(iParam0))
		{
			return;
		}
		if (!bParam1)
		{
			return;
		}
	}
	if (func_979(iParam0, 32, 1))
	{
		if (!bParam2)
		{
			return;
		}
	}
	iVar0 = func_978(iParam0, 0);
	if (!_is_base_a_persistent_character(iVar0))
	{
		return;
	}
	iVar1 = func_546(iParam0);
	if (((does_entity_exist(iVar1) && func_1578(iParam0) < 10000f) && !bParam3) && !is_screen_faded_out())
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
		func_975(iParam0, 2, 1);
	}
	else
	{
		func_1579(iParam0);
		func_975(iParam0, 1, 1);
	}
}

void func_984(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_509(iParam0))
		{
			return;
		}
	}
	Global_40.f_4942[iParam0] = (&Global_40.f_4942[iParam0] - (Global_40.f_4942[iParam0] && iParam1));
}

void func_985(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	if (!func_949(iParam1))
	{
		return;
	}
	iVar0 = func_462(iParam1);
	if (func_463(iParam1))
	{
		if (!func_1580(iParam1))
		{
			return;
		}
	}
	func_977(iParam1, 39, 1);
	func_1581(iParam1, 64, 0);
	(*Global_1360165)[iParam1]->f_70.f_11 = 0;
	func_1581(iParam1, 8, 0);
	if (does_entity_exist(iVar0))
	{
		if (!bParam2)
		{
			func_1581(iParam1, 512, 1);
			set_ped_keep_task(iVar0, true);
		}
		else
		{
			set_blocking_of_non_temporary_events(iVar0, false);
			func_975(iParam1, 43, 1);
		}
		if (bParam4)
		{
			func_1582(iParam1, 0, 1, 1, 1);
		}
	}
}

bool func_986(int iParam0)
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

void func_987(int iParam0)
{
	iParam0 = func_269(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_217(iParam0);
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	iVar6 = 0;
	while (iVar6 < 3)
	{
		iVar1 = func_1583(iVar6);
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

void func_988(int iParam0, int iParam1)
{
	iParam0 = func_269(iParam0);
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

bool func_989(int iParam0, int iParam1)
{
	iParam0 = func_269(iParam0);
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

void func_990(var uParam0)
{
	if (network_is_game_in_progress())
	{
		_set_blip_name_from_player_string(*uParam0, func_1585(func_1584(255), 109029619));
	}
	else if (func_307())
	{
		set_blip_name_from_text_file(*uParam0, "SADDLE_BLIP_ARTHUR");
	}
	else
	{
		func_1017();
		set_blip_name_from_text_file(*uParam0, "SADDLE_BLIP_JOHN");
	}
}

int func_991(int iParam0)
{
	iParam0 = func_269(iParam0);
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

void func_992(var uParam0, bool bParam1)
{
	if (network_is_game_in_progress())
	{
		_set_blip_name_from_player_string(*uParam0, func_1585(func_1584(255), 109029619));
	}
	else
	{
		sVar0 = "";
		if (bParam1)
		{
			sVar0 = "HORSE_BLIP_TEMPORARY";
		}
		else if (func_307())
		{
			sVar0 = "HORSE_BLIP_ARTHUR";
		}
		else if (func_1017())
		{
			sVar0 = "HORSE_BLIP_JOHN";
		}
		if (compare_strings(sVar0, "", false, -1) != 0)
		{
			set_blip_name_from_text_file(*uParam0, sVar0);
		}
	}
}

int func_993(int iParam0)
{
	iParam0 = func_269(iParam0);
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

float func_994(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist(vParam0, vParam3);
}

float func_995(int iParam0)
{
	iParam0 = func_269(iParam0);
	if (iParam0 == -1)
	{
		return -1f;
	}
	if (iParam0 >= 7)
	{
		return -1f;
	}
	iVar0 = func_1411(iParam0);
	if (!is_model_valid(iVar0))
	{
		return -1f;
	}
	iVar1 = func_991(iParam0);
	iVar2 = get_default_max_attribute_rank(iVar0, 7);
	fVar3 = _0xeb67d4e056c85a81(iVar1);
	fVar4 = _0x78d8c1d4eb80c588(iVar1);
	if (iVar1 >= iVar2)
	{
		return fVar3;
	}
	iVar5 = func_991(iParam0) + 1;
	fVar6 = func_1586(iParam0);
	fVar7 = to_float(get_default_attribute_points_needed_for_rank(iVar0, 7, iVar1));
	fVar8 = to_float(get_default_attribute_points_needed_for_rank(iVar0, 7, iVar5));
	fVar9 = (fVar6 - fVar7);
	fVar10 = (fVar8 - fVar7);
	fVar11 = (fVar9 / fVar10);
	fVar12 = func_1587(fVar3, fVar4, fVar11);
	return fVar12;
}

void func_996(int iParam0)
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

void func_997(int iParam0)
{
	_set_blip_flash_style(iParam0, 673950256);
	_set_blip_flash_style(iParam0, 561559387);
	_set_blip_flash_style(iParam0, -201249929);
}

bool func_998()
{
	if (func_341())
	{
		return _get_special_edition_cash_camp_bonus_enabled();
	}
	return false;
}

void func_999(int iParam0)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if ((Global_40.f_4283.f_325 + iParam0) < 0)
	{
		return;
	}
	func_1588((Global_40.f_4283.f_325 + iParam0));
}

void func_1000(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (is_string_null_or_empty(sParam1))
	{
		sParam1 = "FEED_GANG_MONEY_EARN";
	}
	if (func_998())
	{
		func_702(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", -329231034, 0, -585750914, 0, 0, 0, 1);
	}
	else
	{
		func_702(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 2124880615, 0, -585750914, 0, 0, 0, 1);
	}
}

char* func_1001(int iParam0)
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

char* func_1002(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7)
{
	return _0xd8402b858f4ddd88(&cParam0, get_length_of_literal_string(&cParam0));
}

int func_1003(int iParam0)
{
	return Global_17504.f_42[iParam0]->f_5;
}

bool func_1004(int iParam0)
{
	func_1012(iParam0, &iVar0, &iVar1);
	return is_bit_set(&(Global_1357549->f_1866[iVar0]), iVar1);
}

void func_1005(int iParam0, int iParam1)
{
	_journal_write_entry(iParam0);
	if (iParam1 == 1)
	{
		func_1006(1);
	}
}

void func_1006(bool bParam0)
{
	if (bParam0)
	{
		func_1589(&(Global_40.f_12019.f_42), 1);
	}
	else
	{
		func_1590(&(Global_40.f_12019.f_42), 1);
	}
}

int func_1007(int iParam0)
{
	if (!func_192(iParam0))
	{
		return -15;
	}
	return func_1591(iParam0);
}

bool func_1008(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_698(iParam1) || !func_698(iParam0))
		{
			return true;
		}
	}
	return iParam0 > iParam1;
}

bool func_1009(vector3 vParam0, int iParam3, var uParam4, int iParam5, int iParam6, bool bParam7)
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

int func_1010(int iParam0)
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

bool func_1011(vector3 vParam0, int iParam3, var uParam4, int iParam5, int iParam6, bool bParam7)
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

int func_1012(int iParam0, int iParam1, int iParam2)
{
	iVar0 = func_1592(iParam0, 1);
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
	return 1;
}

void func_1013(var uParam0)
{
	*uParam0 = 176656832;
	uParam0->f_1 = -15;
	uParam0->f_2 = 1017034651;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
}

void func_1014(int iParam0, int iParam1, bool bParam2)
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

int func_1015()
{
	iVar0 = func_552();
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

int func_1016(int iParam0)
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
	fVar1 = func_1538(absf(fVar1) < 1f, func_1538(fVar1 < 0f, -1f, 1f), fVar1);
	return ceil(fVar1);
}

bool func_1017()
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

int func_1018(int iParam0)
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

int func_1019()
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

void func_1020(int iParam0, bool bParam1, int iParam2)
{
	func_1593((get_game_timer() + iParam2), !bParam1);
	_databinding_write_data_int(Global_1955569->f_1.f_2.f_1, iParam0);
	func_1594(iParam0);
}

void func_1021(int iParam0)
{
	_databinding_write_data_bool(&(Global_1955569->f_5.f_2[0]->f_16[2]), false);
	_databinding_write_data_bool(&(Global_1955569->f_5.f_2[0]->f_32[2]), true);
	_databinding_write_data_string(&(Global_1955569->f_5.f_2[0]->f_20[2]), func_1595(iParam0));
	_databinding_write_data_string(&(Global_1955569->f_5.f_2[0]->f_24[2]), "pausemenu_player");
}

void func_1022(bool bParam0)
{
	bVar3 = false;
	if (func_1596(&iVar4))
	{
		if (iVar4 <= 0)
		{
			return;
		}
		iVar5 = 0;
		while (iVar5 < iVar4)
		{
			if (func_1597(iVar5, &iVar2, &iVar0))
			{
				if (!func_572(iVar2, 0))
				{
				}
				else
				{
					iVar1 = func_1598(iVar2);
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
							if (func_591(iVar2) == -1013984273)
							{
								if (iVar0 == 1014511709)
								{
									bVar3 = func_1015() <= -160;
								}
								else if (iVar0 == -1712679084)
								{
									bVar3 = func_1015() >= 160;
								}
							}
							else
							{
								bVar3 = iVar0 == func_1599();
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

char* func_1023(int iParam0)
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

bool func_1024(int iParam0)
{
	return func_591(iParam0) == -427144552;
}

bool func_1025(int iParam0)
{
	if (func_20() != -1)
	{
		return false;
	}
	if (func_593(iParam0, 1048576))
	{
		return false;
	}
	if (is_weapon_valid(iParam0))
	{
		return func_1030(iParam0, &uVar0, 1, 0, 0);
	}
	return func_350(iParam0, 1, 0);
}

void func_1026(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (func_591(iParam0) != -427144552)
	{
		return;
	}
	iVar0 = func_598(iParam0, 0);
	if (!is_weapon_valid(iVar0))
	{
		return;
	}
	if (bParam2 || !func_122(iVar0))
	{
		if (func_20() == -1)
		{
			func_599(iVar0);
		}
		if (bParam2 || (!has_ped_got_weapon(Global_35, iVar0, 0, false) && func_576(iParam0, 0, 0) == 0))
		{
			if (!*bParam3 && !iParam4 == 1248274121)
			{
				func_652(iParam0, iParam1, 0, 0, 0);
				play_sound_frontend("REWARD_NEW_GUN", "HUD_REWARD_SOUNDSET", true, 0);
				*bParam3 = 1;
			}
		}
	}
}

void func_1027(int iParam0, int iParam1)
{
	if (func_592(iParam0, 58855631))
	{
		func_1177(iParam0, -915411861, &iVar0, 1);
		*iParam1 = (*iParam1 * iVar0);
	}
}

int func_1028(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	if (!func_572(iParam0, 0))
	{
		return 0;
	}
	if (!func_600(0))
	{
		bParam2 = true;
	}
	if (bParam2)
	{
		return _0xe80e50bee276a54a(iParam0, uParam1->f_4);
	}
	return _0xaddd1e7c0ecf7d95(func_958(bParam3), iParam0);
}

int func_1029(int iParam0, bool bParam1)
{
	if (func_604(iParam0))
	{
		return get_ped_ammo_by_type(Global_35, iParam0);
	}
	return _0xe787f05dfc977bde(func_958(bParam1), iParam0, 0);
}

bool func_1030(int iParam0, var uParam1, int iParam2, bool bParam3, bool bParam4)
{
	func_1600(&iParam0);
	if (!func_572(iParam0, 0))
	{
		return false;
	}
	if (!func_600(0))
	{
		bParam3 = true;
	}
	if (func_1024(iParam0) && _0x705be297eebdb95d(iParam0))
	{
		if (_is_weapon_one_handed(iParam0))
		{
			Var0 = { func_1160(0) };
			Var4.f_9 = -1591664384;
			if (!func_1052(iParam0, &Var0, 1728382685, 0))
			{
				return false;
			}
			else if (func_1053(iParam0, &Var4, 1728382685))
			{
				return false;
			}
			if (func_1161(iParam0, 1))
			{
				if (!func_1052(iParam0, &Var0, -649335959, 0))
				{
					return false;
				}
				else if (func_1053(iParam0, &Var4, -649335959))
				{
					return false;
				}
			}
		}
		else if (!func_1601(iParam0, &uVar26, 0))
		{
			return false;
		}
		return true;
	}
	iVar27 = func_1028(iParam0, uParam1, bParam3, bParam4);
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
		iVar28 = func_1602(iParam0, *uParam1, uParam1->f_4, bParam4);
	}
	else
	{
		iVar28 = _0xe787f05dfc977bde(func_958(bParam4), iParam0, 0);
	}
	if ((iVar28 + iParam2) > iVar27)
	{
		return true;
	}
	return false;
}

int func_1031(int iParam0, int iParam1)
{
	if (!func_572(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_591(iParam0);
	if (iVar0 == -427144552 && is_weapon_valid(iParam0))
	{
		return _get_ammo_type_for_weapon(iParam0);
	}
	else if (iVar0 == 307971639 && _is_ammo_valid(iParam0))
	{
		return iParam0;
	}
	if (func_592(iParam0, 1399091007))
	{
		func_1094(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

int func_1032(int iParam0, bool bParam1)
{
	if (!is_weapon_valid(iParam0))
	{
		return 0;
	}
	Var0 = { func_1603(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam1)
	{
		func_1604(&Var0, func_1160(0));
	}
	if (!func_1605(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	func_1104(iVar14);
	return uVar15;
}

int func_1033()
{
	return _0x62cab7db62ead434(-2076669067, 0);
}

int func_1034(int iParam0)
{
	return _0xec3959e9950bf56b(iParam0);
}

void func_1035(int iParam0)
{
	if (func_20() != -1)
	{
		return;
	}
	iVar0 = func_1606(iParam0);
	fVar1 = func_1607(iParam0);
	if ((Global_1347477->f_117 || !func_594(31)) || !func_1608(iVar0))
	{
		return;
	}
	if (fVar1 <= 0f)
	{
		return;
	}
	if (func_1609(iVar0) >= 7)
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
	func_1610(iVar0, (&Global_40.f_11095.f_11[iVar0] + fVar1), 0);
	func_702(_create_var_string(6, func_1611(iParam0), fVar1), "itemtype_textures", func_1612(iVar0), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

int func_1036(int iParam0)
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

int func_1037(int iParam0, int iParam1)
{
	if (!func_1192(17, &Var0))
	{
		return 0;
	}
	Var0.f_2 = iParam1;
	Var0.f_3 = iParam0;
	_datafile_get_int(&uVar5, &Var0);
	return uVar5;
}

char* func_1038(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6)
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
			else if (func_587() >= 12)
			{
				sParam3 = _create_var_string(2, "COL_CC_CARD_POSTED_OBJ", func_1613(), 12);
			}
			else
			{
				sParam3 = _create_var_string(2, "COL_CC_CARD_FOUND_OBJ", func_1614(), 12);
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
			else if (func_1076() >= 30)
			{
				sParam3 = _create_var_string(2, "COL_DB_POSTED_OBJ", func_1615(), 30);
			}
			else
			{
				sParam3 = _create_var_string(2, "COL_DB_FOUND_OBJ", func_1076(), 30);
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
				sParam3 = _create_var_string(2, "COL_LF_CAUGHT_OBJ", func_1616(), 13);
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
			else if (func_1077() >= 10)
			{
				sParam3 = _create_var_string(2, "COL_RC_POSTED_OBJ", func_1617(), 10);
			}
			else
			{
				sParam3 = _create_var_string(2, "COL_RC_FOUND_OBJ", func_1077(), 10);
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
				sParam3 = _create_var_string(2, "COL_TX_CARCASS_COLLECTED_OBJ", sParam4, func_1037(iParam6, 20));
			}
			break;
	}
	return sParam3;
}

bool func_1039(int iParam0, int iParam1, int iParam2)
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

bool func_1040(int iParam0, int iParam1, vector3 vParam2, char* sParam5, char* sParam6)
{
	if (!_uilog_is_entry_registered(3, iParam1))
	{
		_uilog_add_entry_hash(3, iParam1, vParam2, get_hash_key(sParam5), get_hash_key(sParam6), 0);
	}
	return true;
}

bool func_1041(int iParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6, int iParam7)
{
	_uilog_add_or_update_objective(3, iParam1, get_hash_key(sParam2), sParam2, false, false, false);
	_uilog_set_entry_pinned(3, iParam1, true);
	_uilog_set_entry_brief_texture(3, iParam1, get_hash_key(sParam4), get_hash_key(sParam5));
	_uilog_set_entry_icon_texture(3, iParam1, iParam6, iParam7);
	_uilog_update_entry_subheader(3, iParam1, _create_var_string(2, sParam3));
	return true;
}

bool func_1042(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
{
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < iParam6)
	{
		if (iParam2 == -2076669067)
		{
			iVar2 = func_1618(iVar0);
			if (iParam4 == iVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = (func_350(iVar2, 1, 0) || func_1620(func_1619(iVar2)));
			}
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1046(func_1618(iVar0))), func_1046(func_1618(iVar0)), bVar1, true, false);
		}
		if (iParam2 == -440187297)
		{
			if (iVar0 == 0)
			{
				bVar1 = func_1076() >= iParam8;
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1621(iVar0)), func_1621(iVar0), bVar1, true, false);
			}
			else if (iVar0 == 1)
			{
				bVar1 = func_1615() >= iParam8;
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1621(iVar0)), func_1621(iVar0), bVar1, true, false);
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
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1621(iVar0)), func_1621(iVar0), bVar1, true, false);
			}
		}
		if (iParam2 == -1531394072)
		{
			iVar2 = func_1087(iParam3, func_1622(iVar0));
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			else if (bParam9)
			{
				if (iParam4 == iVar2)
				{
					bVar1 = (func_1083(iVar2) - iParam7) >= func_1037(iParam3, func_1623(iVar0));
				}
				else
				{
					bVar1 = func_1083(iVar2) >= func_1037(iParam3, func_1623(iVar0));
				}
			}
			else if (iParam4 == iVar2)
			{
				bVar1 = (func_1083(iVar2) + iParam7) >= func_1037(iParam3, func_1623(iVar0));
			}
			else
			{
				bVar1 = func_1083(iVar2) >= func_1037(iParam3, func_1623(iVar0));
			}
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1624(iVar2)), func_1624(iVar2), bVar1, true, false);
		}
		if (iParam2 == 1995362678)
		{
			if (func_1625(_0x126cbebba46693cf(iVar0, 1995362678, 0)))
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
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1626(_0x126cbebba46693cf(iVar0, iParam2, 0))), func_1626(_0x126cbebba46693cf(iVar0, iParam2, 0)), bVar1, true, false);
		}
		if (iParam2 == 2103522376)
		{
			if (iVar0 == 0)
			{
				bVar1 = func_1077() >= iParam8;
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1627(iVar0)), func_1627(iVar0), bVar1, true, false);
			}
			else if (iVar0 == 1)
			{
				bVar1 = func_1617() >= iParam8;
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1627(iVar0)), func_1627(iVar0), bVar1, true, false);
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
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1627(iVar0)), func_1627(iVar0), bVar1, true, false);
			}
		}
		if (iParam2 == 678508515)
		{
			iVar2 = func_1087(iParam3, func_1622(iVar0));
			if (bParam9)
			{
				if (iParam4 == iVar2)
				{
					bVar1 = (func_1083(iVar2) - iParam7) >= true;
				}
				else
				{
					bVar1 = func_1628(iVar2);
				}
			}
			else if (iParam4 == iVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = func_1628(iVar2);
			}
			if (((((((iParam5 == 7 || iParam5 == 3) || iParam5 == 4) || iParam5 == 5) || iParam5 == 0) || iParam5 == 1) || iParam5 == 2) || iParam5 == 8)
			{
				bVar1 = true;
			}
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1629(iVar2)), func_1629(iVar2), bVar1, true, false);
		}
		iVar0++;
	}
	return true;
}

bool func_1043(int iParam0, int iParam1, int iParam2, int iParam3)
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
		if (func_1616() >= 13)
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

bool func_1044(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (func_192(func_205(0)) && ((func_1630(0) == 1 || func_1630(0) == 8) || func_1630(0) == 6))
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

var func_1045(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, int iParam6, int iParam7, char* sParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13)
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

char* func_1046(int iParam0)
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

bool func_1047(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_1048(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return is_bit_set(&(Global_40.f_7857[iVar1]), iVar2);
}

void func_1049(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	uVar3 = &Global_40.f_7857[iVar1];
	set_bit(&uVar3, iVar2);
	Global_40.f_7857[iVar1] = uVar3;
}

bool func_1050(int iParam0)
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

int func_1051(int iParam0, int iParam1)
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

bool func_1052(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	return func_1602(iParam0, *uParam1, iParam2, bParam3) > 0;
}

bool func_1053(int iParam0, var uParam1, int iParam2)
{
	if (func_1631(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return false;
}

struct<4> func_1054(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	if (!func_572(iParam0, 0))
	{
		return Var0;
	}
	_0x886dfd3e185c8a89(func_958(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

bool func_1055(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(uParam1))
	{
		return false;
	}
	if (func_1632(iParam0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_1164(*uParam1, &Var0, bParam6, 0))
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
	if (!func_600(bParam6))
	{
		iVar14 = -1;
		return iVar14 != -1;
	}
	if (!_0x3e4e811480b3ae79(func_958(bParam6), uParam1, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

void func_1056(int iParam0, int iParam1)
{
	if ((get_ammo_in_clip(Global_35, &iVar0, iParam0) && iVar0 < iParam1) && iVar0 < _get_weapon_clip_size(iParam0))
	{
		iVar1 = func_1633(_get_weapon_clip_size(iParam0), iParam1);
		set_ammo_in_clip(Global_35, iParam0, iVar1);
	}
}

void func_1057(int iParam0)
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
	iVar2 = func_288();
	func_337(&iVar2, 0, 0, 0, 1, 0, 0, 0);
	decor_set_int(Global_35, sVar1, iVar2);
}

int func_1058(int iParam0)
{
	if (func_1500(iParam0))
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

bool func_1059(int iParam0)
{
	return _is_ammo_valid(_get_ammo_type_for_weapon(iParam0));
}

int func_1060(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	iVar0 = 0;
	if (!is_entity_dead(iParam0))
	{
		get_current_ped_weapon(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

int func_1061(int iParam0)
{
	iVar0 = _get_weapon_type_from_ammo_type(iParam0);
	if (_0x705be297eebdb95d(iVar0))
	{
		if (_is_weapon_two_handed(iVar0))
		{
			if (!func_594(50))
			{
				if (!func_594(48))
				{
					return 133;
				}
				return 135;
			}
		}
		else if (_is_weapon_one_handed(iVar0))
		{
			if (!func_594(51))
			{
				if (!func_594(49))
				{
					return 134;
				}
				return 136;
			}
		}
	}
	return 137;
}

bool func_1062(int iParam0, int iParam1, var uParam2)
{
	if (!func_572(iParam1, 0))
	{
		return false;
	}
	if (func_591(iParam1) != -1037537535)
	{
		return false;
	}
	bVar1 = func_20() != -1;
	iVar2 = _get_metaped_type(iParam0);
	if (func_596(iParam1) == -999503751)
	{
		return true;
	}
	iVar4 = func_670(iParam1);
	if (iVar4 == -358215195)
	{
		*uParam2 = 2084739242;
		return false;
	}
	bVar7 = false;
	iVar8 = iParam1;
	if (func_592(iParam1, 866047851))
	{
		iVar5 = func_671(iVar4, 1);
		if (func_1634(&(Global_1946804->f_1497)) >= 2 && &Global_1946804->f_1497.f_1[iVar5] != iVar8)
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
			iVar3 = func_596(&(Global_1946804->f_1497.f_1[iVar5]));
			if (bVar7 && iVar3 == -525676072)
			{
				*uParam2 = -1938792745;
				return false;
			}
			break;
		case -1944638739:
			iVar5 = 35;
			if (&Global_1946804->f_1497.f_1[iVar5] != &Global_1946804->f_57[iVar5] && func_592(iParam1, -1638171711))
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
			if (func_1635(1868067663, &uVar0))
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
				iVar10 = func_1636(iVar8, iVar4, iVar2, bVar1);
				iVar9 = func_1636(&(Global_1946804->f_1497.f_1[iVar5]), iVar4, iVar2, bVar1);
				if (((iVar11 + iVar10) - iVar9) > 31)
				{
					*uParam2 = -1608241763;
					return false;
				}
				Jump @776; //curOff = 583
				iVar3 = func_596(iParam1);
				iVar5 = 36;
				iVar6 = 35;
				if (iParam1 != &Global_1946804->f_57[iVar6] && func_592(&(Global_1946804->f_1497.f_1[iVar5]), -1638171711))
				{
					*uParam2 = -357399012;
					return false;
				}
				if (iVar3 == 1769055947 || iVar3 == 1545016984)
				{
				}
				else
				{
					if (iParam1 != &Global_1946804->f_57[iVar6] && func_1637(&(Global_1946804->f_1497.f_1[iVar5])))
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

void func_1063()
{
	_0xfe7c9cf376d23342(player_id(), (1f - (Global_40.f_11095.f_64 + Global_1347477->f_175)));
}

void func_1064()
{
	fVar0 = Global_40.f_11095.f_44;
	fVar1 = Global_40.f_11095.f_45;
	set_player_health_recharge_multiplier(player_id(), (1f - (fVar0 - Global_40.f_11095.f_69)));
	_0x08e22898a6af4905(player_id(), (1f - fVar0));
	_0xfeca17cf3343694b(player_id(), (1f - fVar0));
	_0xbbadfb5e5e5766fb(player_id(), (1f - fVar1));
}

int func_1065()
{
	iVar1 = 0;
	while (iVar1 < 26)
	{
		if (func_350(func_1638(iVar1), 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1066(int iParam0)
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

bool func_1067(int iParam0, int iParam1)
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
	if (func_350(iVar0, 1, 0) && func_350(iVar1, 1, 0))
	{
		return true;
	}
	return false;
}

int func_1068(int iParam0)
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

bool func_1069(int iParam0, int iParam1)
{
	iVar0 = func_1639(iParam0);
	if (iVar0 != -15)
	{
		func_337(&iVar0, 0, iParam1, 0, 0, 0, 0, 0);
		return !func_699(iVar0, 1);
	}
	return false;
}

void func_1070(int iParam0)
{
	Global_40.f_12004.f_6 = (Global_40.f_12004.f_6 || iParam0);
}

void func_1071(int iParam0)
{
	Global_40.f_12004.f_1 = (Global_40.f_12004.f_1 || iParam0);
}

void func_1072(int iParam0)
{
	Global_40.f_12004.f_3 = (Global_40.f_12004.f_3 || iParam0);
}

void func_1073(int iParam0)
{
	Global_40.f_12004.f_5 = (Global_40.f_12004.f_5 || iParam0);
}

char* func_1074(int iParam0)
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
	iVar1 = func_1083(iVar9);
	iVar2 = func_1083(iVar10);
	iVar3 = func_1083(iVar11);
	iVar5 = func_1084(iVar9);
	iVar6 = func_1084(iVar10);
	iVar7 = func_1084(iVar11);
	if (iParam0 != 2)
	{
		iVar4 = func_1083(iVar12);
		iVar8 = func_1084(iVar12);
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

void func_1075(int iParam0)
{
	Global_40.f_12004.f_2 = (Global_40.f_12004.f_2 || iParam0);
}

int func_1076()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 30)
	{
		if (func_1640(_0x126cbebba46693cf(iVar1, -440187297, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1077()
{
	return _0x5461c821d00fe15a(2103522376, 0);
}

bool func_1078(int iParam0, int iParam1, char* sParam2, bool bParam3, int iParam4, bool bParam5)
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
			if (func_1628(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1628(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_1628(iVar0))
		{
			*sParam2++;
		}
		if (func_1628(iVar0))
		{
			return true;
		}
	}
	else if (iParam0 == -1248968496)
	{
		if (bParam3)
		{
			if (func_1628(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1628(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_1628(iVar0))
		{
			*sParam2++;
		}
		if (func_1628(iVar1))
		{
			*sParam2++;
		}
		if (func_1628(iVar0) && func_1628(iVar1))
		{
			return true;
		}
	}
	else if (iParam0 == 1706369307)
	{
		if (bParam3)
		{
			if (func_1628(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1628(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_1628(iVar0))
		{
			*sParam2++;
		}
		if (func_1628(iVar1))
		{
			*sParam2++;
		}
		if (func_1628(iVar2))
		{
			*sParam2++;
		}
		if ((func_1628(iVar0) && func_1628(iVar1)) && func_1628(iVar2))
		{
			return true;
		}
	}
	else
	{
		if (bParam3)
		{
			if (func_1628(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1628(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_1628(iVar0))
		{
			*sParam2++;
		}
		if (func_1628(iVar1))
		{
			*sParam2++;
		}
		if (func_1628(iVar2))
		{
			*sParam2++;
		}
		if (func_1628(iVar3))
		{
			*sParam2++;
		}
		if (((func_1628(iVar0) && func_1628(iVar1)) && func_1628(iVar2)) && func_1628(iVar3))
		{
			return true;
		}
	}
	return false;
}

void func_1079(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2)
	{
	}
	switch (iParam0)
	{
		case 1497516462:
			func_1490(1497516462);
			func_1489(2016141805);
			func_1489(1010885152);
			func_1489(-502324015);
			break;
		case 2016141805:
			func_1489(1497516462);
			func_1490(2016141805);
			func_1489(1010885152);
			func_1489(-502324015);
			break;
		case 1010885152:
			func_1489(1497516462);
			func_1489(2016141805);
			func_1490(1010885152);
			func_1489(-502324015);
			break;
		case -502324015:
			func_1489(1497516462);
			func_1489(2016141805);
			func_1489(1010885152);
			func_1490(-502324015);
			break;
		case -1056767524:
		case -538889627:
		case -538880323:
			func_1489(-538889627);
			func_1489(-538880323);
			func_1489(-1056767524);
			func_1490(iParam0);
			break;
		case -2038424081:
		case -1187950766:
		case -939420910:
		case 356365161:
		case 459290420:
		case 753127042:
		case 1884271742:
			func_1641();
			func_1490(iParam0);
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
			func_1642();
			func_1490(iParam0);
			break;
		case 2019386373:
			func_1489(-664252410);
			func_1489(2109952320);
			func_1490(2019386373);
			break;
		case -664252410:
			func_1489(2019386373);
			func_1489(2109952320);
			func_1490(-664252410);
			break;
		case 2109952320:
			func_1489(2019386373);
			func_1489(-664252410);
			func_1490(2109952320);
			break;
		case -1674179981:
			func_1489(-1835851517);
			func_1489(-1838352012);
			func_1490(-1674179981);
			break;
		case -1835851517:
			func_1489(-1674179981);
			func_1489(-1838352012);
			func_1490(-1835851517);
			break;
		case -1838352012:
			func_1489(-1674179981);
			func_1489(-1835851517);
			func_1490(-1838352012);
			break;
		case -1717960576:
			func_1489(210001842);
			func_1490(-1717960576);
			break;
		case 210001842:
			func_1489(-1717960576);
			func_1490(210001842);
			break;
		case -150493654:
			func_1489(-1271608261);
			func_1489(1846061697);
			func_1489(-1145519186);
			func_1490(-150493654);
			break;
		case -1271608261:
			func_1489(-150493654);
			func_1489(1846061697);
			func_1489(-1145519186);
			func_1490(-1271608261);
			break;
		case 1846061697:
			func_1489(-150493654);
			func_1489(-1271608261);
			func_1489(-1145519186);
			func_1490(1846061697);
			break;
		case -1145519186:
			func_1489(-150493654);
			func_1489(-1271608261);
			func_1489(1846061697);
			func_1490(-1145519186);
			break;
		case 1766284049:
			func_1489(280705402);
			func_1489(1926308480);
			func_1490(1766284049);
			break;
		case 280705402:
			func_1489(1766284049);
			func_1489(1926308480);
			func_1490(280705402);
			break;
		case 1926308480:
			func_1489(1766284049);
			func_1489(280705402);
			func_1490(1926308480);
			break;
		case 1609506757:
			if (bParam1)
			{
				func_1489(439465264);
				func_1490(1609506757);
			}
			else
			{
				func_1489(1609506757);
				func_1489(439465264);
			}
			break;
		case 439465264:
			if (func_481(1609506757))
			{
				if (bParam1)
				{
					func_1490(439465264);
				}
				else
				{
					func_1489(439465264);
				}
			}
			break;
		case 1822001510:
			func_1489(-1612662716);
			func_1490(1822001510);
			break;
		case -1612662716:
			func_1489(1822001510);
			func_1490(-1612662716);
			break;
		case 1306158345:
			func_1489(1952610440);
			func_1489(-223469678);
			func_1489(-404698347);
			func_1489(1517904467);
			func_1490(1306158345);
			break;
		case 1952610440:
			func_1489(1306158345);
			func_1489(-223469678);
			func_1489(-404698347);
			func_1489(1517904467);
			func_1490(1952610440);
			break;
		case -223469678:
			func_1489(1306158345);
			func_1489(1952610440);
			func_1489(-404698347);
			func_1489(1517904467);
			func_1490(-223469678);
			break;
		case -404698347:
			func_1489(1306158345);
			func_1489(1952610440);
			func_1489(-223469678);
			func_1489(1517904467);
			func_1490(-404698347);
			break;
		case 1517904467:
			func_1489(1306158345);
			func_1489(1952610440);
			func_1489(-223469678);
			func_1489(-404698347);
			func_1490(1517904467);
			break;
		case 1376646519:
			func_1489(931649776);
			func_1489(-434590080);
			func_1489(1743048395);
			func_1489(449774763);
			func_1490(1376646519);
			break;
		case 931649776:
			func_1489(1376646519);
			func_1489(-434590080);
			func_1489(1743048395);
			func_1489(449774763);
			func_1490(931649776);
			break;
		case -434590080:
			func_1489(1376646519);
			func_1489(931649776);
			func_1489(1743048395);
			func_1489(449774763);
			func_1490(-434590080);
			break;
		case 1743048395:
			func_1489(1376646519);
			func_1489(931649776);
			func_1489(-434590080);
			func_1489(449774763);
			func_1490(1743048395);
			break;
		case 449774763:
			func_1489(1376646519);
			func_1489(931649776);
			func_1489(-434590080);
			func_1489(1743048395);
			func_1490(449774763);
			break;
		case -1414537028:
			func_1489(38162571);
			func_1489(1350391819);
			func_1489(54073871);
			func_1490(-1414537028);
			break;
		case 38162571:
			func_1489(-1414537028);
			func_1489(1350391819);
			func_1489(54073871);
			func_1490(38162571);
			break;
		case 1350391819:
			func_1489(-1414537028);
			func_1489(38162571);
			func_1489(54073871);
			func_1490(1350391819);
			break;
		case 54073871:
			func_1489(-1414537028);
			func_1489(38162571);
			func_1489(1350391819);
			func_1490(54073871);
			break;
		case 198200492:
			func_1490(198200492);
			func_1489(-1124061431);
			func_1489(52706132);
			func_1489(-259123672);
			break;
		case -1124061431:
			func_1489(198200492);
			func_1490(-1124061431);
			func_1489(52706132);
			func_1489(-259123672);
			break;
		case 52706132:
			func_1489(198200492);
			func_1489(-1124061431);
			func_1490(52706132);
			func_1489(-259123672);
			break;
		case -259123672:
			func_1489(198200492);
			func_1489(-1124061431);
			func_1489(52706132);
			func_1490(-259123672);
			break;
		case -919512195:
			func_1490(-919512195);
			func_1489(-1925798111);
			func_1489(420709909);
			func_1489(1703426636);
			break;
		case -1925798111:
			func_1490(-1925798111);
			func_1489(-919512195);
			func_1489(420709909);
			func_1489(1703426636);
			break;
		case 420709909:
			func_1490(420709909);
			func_1489(-919512195);
			func_1489(-1925798111);
			func_1489(1703426636);
			break;
		case 1703426636:
			func_1490(1703426636);
			func_1489(-919512195);
			func_1489(-1925798111);
			func_1489(420709909);
			break;
		case -1223121209:
			func_1490(-1223121209);
			func_1489(630808005);
			break;
		case 630808005:
			func_1490(630808005);
			func_1489(-1223121209);
			break;
		case 1453909576:
			func_1490(1453909576);
			func_1489(1643531967);
			break;
		case 1643531967:
			func_1490(1643531967);
			func_1489(1453909576);
			break;
		case 0:
			func_1490(0);
			func_1489(473295046);
			func_1489(-1738165526);
			break;
		case 473295046:
			func_1490(473295046);
			func_1489(0);
			func_1489(-1738165526);
			break;
		case -1738165526:
			func_1490(-1738165526);
			func_1489(0);
			func_1489(473295046);
			break;
		case 932909855:
			func_1490(932909855);
			func_1489(2051822093);
			break;
		case 2051822093:
			func_1490(2051822093);
			func_1489(932909855);
			break;
		case 405586984:
			func_1490(405586984);
			func_1489(1509509592);
			func_1489(-959357075);
			func_1489(-1311865656);
			break;
		case 1509509592:
			func_1490(1509509592);
			func_1489(405586984);
			func_1489(-959357075);
			func_1489(-1311865656);
			break;
		case -959357075:
			func_1490(-959357075);
			func_1489(1509509592);
			func_1489(405586984);
			func_1489(-1311865656);
			break;
		case -1311865656:
			func_1490(-1311865656);
			func_1489(1509509592);
			func_1489(-959357075);
			func_1489(405586984);
			break;
		case -524145696:
			if (bParam1)
			{
				func_1490(-524145696);
			}
			else
			{
				func_1489(-524145696);
			}
			func_1489(1626481264);
			func_1489(282809459);
			break;
		case 282809459:
			func_1490(282809459);
			func_1489(1626481264);
			func_1489(-524145696);
			break;
		case 1626481264:
			func_1490(1626481264);
			func_1489(-524145696);
			func_1489(282809459);
			break;
		case 885203519:
			if (bParam1)
			{
				func_1490(885203519);
			}
			else
			{
				func_1489(885203519);
			}
			break;
		case -1080627546:
			if (bParam1)
			{
				func_1490(-1080627546);
			}
			else
			{
				func_1489(-1080627546);
			}
			break;
		default:
			if (bParam1)
			{
				if (!func_481(iParam0))
				{
					func_1490(iParam0);
				}
			}
			else if (func_481(iParam0))
			{
				func_1489(iParam0);
			}
			break;
	}
}

void func_1080(int iParam0)
{
	if (!func_1643(iParam0))
	{
		func_1645(func_1644(iParam0));
	}
}

int func_1081()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (func_1643(_0x126cbebba46693cf(iVar1, -1531394072, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1082(int iParam0, int iParam1, int iParam2)
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
	iVar1 = func_1083(iVar9);
	iVar2 = func_1083(iVar10);
	iVar3 = func_1083(iVar11);
	iVar5 = func_1084(iVar9);
	iVar6 = func_1084(iVar10);
	iVar7 = func_1084(iVar11);
	if (iParam2 != 2)
	{
		iVar4 = func_1083(iVar12);
		iVar8 = func_1084(iVar12);
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

int func_1083(int iParam0)
{
	if (func_350(iParam0, 1, 0))
	{
		iVar0 = func_576(iParam0, 0, 0);
	}
	return iVar0;
}

int func_1084(int iParam0)
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

int func_1085(int iParam0)
{
	return _0xf83d3dda4d3c8169(iParam0);
}

void func_1086(int iParam0, int iParam1)
{
	_0x3ea62e56f386c997(iParam0, iParam1);
}

int func_1087(int iParam0, int iParam1)
{
	if (!func_1192(17, &Var0))
	{
		return 0;
	}
	Var0.f_2 = iParam1;
	Var0.f_3 = iParam0;
	_datafile_get_hash(&uVar5, &Var0);
	return uVar5;
}

void func_1088(int iParam0, int iParam1, char* sParam2, int iParam3, bool bParam4)
{
	if ((((iParam0 == func_1087(iParam1, 5) || iParam0 == func_1087(iParam1, 6)) || iParam0 == func_1087(iParam1, 7)) || iParam0 == func_1087(iParam1, 8)) || iParam0 == func_1087(iParam1, 9))
	{
		func_1078(iParam1, iParam0, &sParam2, 0, iParam3, bParam4);
		func_588(51, 0, 0, iParam1, sParam2, 0, -1, 0);
		func_590(51, 0, 0, 0, 0, -1, 0);
	}
}

void func_1089(int iParam0, int iParam1, bool bParam2)
{
	iVar0 = 1;
	if ((((iParam0 == func_1087(iParam1, 5) || iParam0 == func_1087(iParam1, 6)) || iParam0 == func_1087(iParam1, 7)) || iParam0 == func_1087(iParam1, 8)) || iParam0 == func_1087(iParam1, 9))
	{
		if (func_1078(iParam1, iParam0, &iVar0, 0, 0, 0))
		{
			func_588(51, iParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				func_590(51, 0, 0, iVar0, func_1037(iParam1, 20), 1, 0);
			}
		}
		else
		{
			func_588(51, iParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				func_590(51, 0, 0, iVar0, func_1037(iParam1, 20), 1, 0);
			}
		}
	}
}

bool func_1090()
{
	if (func_193((*Global_1347702)[37]->f_15) && Global_1392388->f_7)
	{
		return true;
	}
	return false;
}

void func_1091(int iParam0)
{
	_0x3ea62e56f386c997(iParam0, 1);
}

void func_1092(int iParam0)
{
	if (!func_1646(iParam0))
	{
		_0x3ea62e56f386c997(iParam0, 1);
	}
}

void func_1093(int iParam0)
{
	_0x398fab9c96a81924(iParam0, 1);
}

void func_1094(int iParam0, int iParam1, var uParam2)
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

bool func_1095(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	func_1647();
	if (iParam2 == 39)
	{
		Var0 = { func_683(iParam0, 1, 0) };
		iParam2 = func_671(func_684(Var0.f_4), 1);
	}
	if (iParam2 < 0 || iParam2 >= 39)
	{
		return false;
	}
	if (func_592(iParam0, 866047851) && func_1634(&(Global_1946804->f_1378)) >= 2)
	{
		return false;
	}
	if ((func_1097(32768) && iParam2 == 10) && iParam0 != &Global_1946804->f_57[iParam2])
	{
		func_1648(func_1165(iParam2, 1));
	}
	iVar5 = 0;
	if (bParam4)
	{
		iVar5 = 3;
	}
	func_1649(iParam2);
	func_1650(iParam2, iVar5);
	if (&Global_1946804->f_1378.f_1[iParam2] != &Global_1946804->f_57[iParam2] && Global_1946804->f_57[iParam2]->f_1 > 1)
	{
		func_1146(Global_1946804->f_1378.f_1[iParam2], 4, 6);
		func_1146(Global_1946804->f_1497.f_1[iParam2], 4, 6);
	}
	func_1152(&(Global_1946804->f_1378), iParam0, iParam2, bParam4, 1);
	if (iParam1 == 0)
	{
		iParam1 = Global_1946804->f_1378.f_1[iParam2]->f_1;
	}
	Global_1946804->f_1378.f_1[iParam2] = iParam0;
	Global_1946804->f_1378.f_1[iParam2]->f_1 = func_1651(iParam0, iParam2, iParam1, func_20() != -1);
	if (bParam4)
	{
		func_1652(&(Global_1946804->f_1378), 1, 3);
	}
	else
	{
		func_1652(&(Global_1946804->f_1378), 1, 0);
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
				func_1368(func_1165(&(Global_1946804->f_2589.f_2[iVar6]), 1), 1, 6);
			}
			iVar6++;
		}
	}
	return true;
}

void func_1096(bool bParam0, bool bParam1, bool bParam2)
{
	func_1653(&(Global_1946804->f_2589), bParam0, bParam1, bParam2);
}

bool func_1097(int iParam0)
{
	return (Global_1946804 && iParam0) != 0;
}

void func_1098()
{
	func_932(&(Global_1946804->f_2776));
	func_1654(32768);
	func_1368(1108822547, 8, 6);
}

int func_1099(int iParam0)
{
	iVar0 = 0;
	iVar1 = func_671(iParam0, 1);
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

void func_1100(int iParam0)
{
	if (func_1655(iParam0, 4096))
	{
		Global_1946804->f_858++;
	}
	if (Global_1946804->f_858 <= 0)
	{
		return;
	}
	Var0.f_1 = iParam0;
	Var0 = 34;
	func_1656(Var0);
}

void func_1101(int iParam0, int iParam1, int iParam2)
{
	Var0.f_1 = iParam2;
	Var0 = iParam0;
	Var0.f_2 = iParam1;
	func_1656(Var0);
}

bool func_1102(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	*iParam1 = _0x80d78bdc9d88ef07(func_958(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_1103(var uParam0, int iParam1, int iParam2, int iParam3)
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

int func_1104(int iParam0)
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

float func_1105()
{
	if (func_1657())
	{
		return 0f;
	}
	if (_0x200373a8df081f22(Global_35, 2) || Global_40.f_11095.f_46 == 0)
	{
		return func_1504(2);
	}
	if (Global_1347477->f_119)
	{
		return func_1504(2);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_46) * 60f);
	fVar0 = (fVar0 / to_float(7));
	fVar1 = func_1658();
	fVar2 = func_1659();
	fVar3 = func_1660();
	fVar4 = func_1661();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_50)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_1662()));
	fVar7 = (func_1504(2) - fVar6);
	iVar8 = round(((fVar0 / 60f) * to_float(7)));
	fVar9 = (100f * (to_float(90) / to_float(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_1663(3, round((to_float(iVar8) * fVar10)), 0);
	func_1664(3, fVar9, fVar9 > 100f);
	return func_1507(fVar7, -100f, 100f);
}

float func_1106()
{
	if (func_1657())
	{
		return 0f;
	}
	if (_0x200373a8df081f22(Global_35, 1) || Global_40.f_11095.f_47 == 0)
	{
		return func_1504(1);
	}
	if (Global_1347477->f_119)
	{
		return func_1504(1);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_47) * 60f);
	fVar0 = (fVar0 / to_float(7));
	fVar1 = func_1658();
	fVar2 = func_1659();
	fVar3 = func_1660();
	fVar4 = func_1661();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_51)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_1662()));
	fVar7 = (func_1504(1) - fVar6);
	iVar8 = round(((fVar0 / 60f) * to_float(7)));
	fVar9 = (100f * (to_float(90) / to_float(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_1663(2, round((to_float(iVar8) * fVar10)), 0);
	func_1664(2, fVar9, fVar9 > 100f);
	return func_1507(fVar7, -100f, 100f);
}

float func_1107()
{
	if (func_1657())
	{
		return 0f;
	}
	if (_0x200373a8df081f22(Global_35, 0) || Global_40.f_11095.f_48 == 0)
	{
		return func_1504(0);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_48) * 60f);
	if (func_1665())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_54 + 1f));
	}
	else if (func_1666())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_53 + 1f));
	}
	else if (Global_1347477->f_119)
	{
		return func_1504(0);
	}
	if (Global_40.f_11095.f_43)
	{
		fVar0 = (10f * 60f);
	}
	fVar0 = (fVar0 / to_float(7));
	fVar1 = func_1658();
	fVar2 = func_1659();
	fVar3 = func_1660();
	fVar4 = func_1661();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_49)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_1662()));
	fVar7 = (func_1504(0) - fVar6);
	iVar8 = round(((fVar0 / 60f) * to_float(7)));
	fVar9 = (100f * (to_float(90) / to_float(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_1663(1, round((to_float(iVar8) * fVar10)), 0);
	func_1664(1, fVar9, fVar9 > 100f);
	if (fVar7 <= -100f && _get_player_health(player_id()) < 1f)
	{
		return func_1504(0);
	}
	return func_1507(fVar7, -100f, 100f);
}

bool func_1108(int iParam0, int iParam1)
{
	return (Global_1905944->f_22[iParam0]->f_2 && iParam1) != 0;
}

bool func_1109(int iParam0)
{
	return _0xf83d3dda4d3c8169(iParam0) > 0;
}

bool func_1110(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5)
{
	if (!func_572(iParam0, 0))
	{
	}
	if (!_0xb881ca836cc4b6d4(uParam2))
	{
		return false;
	}
	if (func_1030(iParam0, uParam2, iParam3, bParam5, 0))
	{
		return false;
	}
	if (!func_600(0))
	{
		return false;
	}
	if (!_0xcb5d11f9508a928d(func_958(0), uParam1, uParam2, iParam0, uParam2->f_4, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

int func_1111(int iParam0, bool bParam1)
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
				return func_1667();
			}
			break;
	}
	return 0;
}

int func_1112(int iParam0)
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

bool func_1113(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 95)
	{
		return false;
	}
	return true;
}

void func_1114(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_1113(iParam0))
	{
		return;
	}
	if (func_1668(iParam0))
	{
		return;
	}
	if (!func_1669(iParam0))
	{
		func_1670(iParam0, 1, 0);
	}
	iVar0 = func_1671(iParam0);
	if (iVar0 != 0 && !(iParam0 >= 0 && iParam0 <= 5))
	{
		if (func_1672(iParam0, 512))
		{
			func_682(30, iVar0, 0, 0, 0);
		}
	}
	if ((!func_216() && !bParam1) && !func_199(0, 0, 1))
	{
		func_709(_create_var_string(10, "OUT_JOURN_DONE", _create_var_string(0, iVar0)), 10000, 0, 0, 0, 1);
	}
	func_1673(iParam0, 6);
	if (bParam2)
	{
		if (!func_199(0, 0, 1))
		{
			func_370(1, 4);
		}
	}
}

bool func_1115(int iParam0, bool bParam1)
{
	return func_1111(iParam0, 0) < func_1674(iParam0, bParam1);
}

bool func_1116(int iParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_596(iVar1) == iParam0)
		{
			*iParam1 = iVar1;
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_1117(int iParam0)
{
	if (iParam0 == -358215195)
	{
		return false;
	}
	return &Global_1946804->f_1497.f_1[func_671(iParam0, 1)] != &Global_1946804->f_57[func_671(iParam0, 1)];
}

void func_1118(int iParam0, int iParam1)
{
	if (func_592(iParam1, 130796156))
	{
		func_1675(iParam1, 0);
	}
	else if (func_592(iParam1, 930141731))
	{
		func_1675(iParam1, 1);
		func_1676(iParam0);
	}
}

void func_1119(var uParam0, int iParam1)
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

int func_1120(int iParam0, var uParam1, var uParam2, int iParam3)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!_cashinventory_is_session_ready())
	{
		return 0;
	}
	func_1677(uParam1);
	if (!_0x77b299e8799b1332(&uVar0, &(uParam1->f_1), uParam2))
	{
		return 0;
	}
	Var1.f_2.f_1 = 10;
	Var1 = iParam3;
	Var1.f_2 = { *uParam1 };
	func_1678(uParam2, iParam0, Var1);
	return 1;
}

int func_1121(int iParam0)
{
	return &(Global_1900073->f_159[iParam0]);
}

char* func_1122(int iParam0)
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

int func_1123(int iParam0)
{
	if (!func_1679(iParam0, &uVar0, 805880880, 0, 0, -401018458))
	{
		return -1102349958;
	}
	return uVar0;
}

bool func_1124()
{
	return !&Global_1911774;
}

void func_1125(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

char* func_1126(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

bool func_1127(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

char* func_1128(char* sParam0, int iParam1)
{
	return _create_var_string(42, "COLOR_STRING", _create_color_string(iParam1), sParam0);
}

bool func_1129(int iParam0, int iParam1, bool bParam2)
{
	if ((bParam2 && func_20() == 0) && !_unlock_is_visible(iParam0))
	{
		return false;
	}
	if (!func_1680(iParam0, iParam1, &uVar0, &iVar11) || iVar11 < 1)
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

bool func_1130(int iParam0, int iParam1)
{
	if (func_20() != -1)
	{
		return false;
	}
	if (func_1680(iParam0, iParam1, &uVar2, &iVar1))
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

void func_1131(bool bParam0)
{
	if (bParam0)
	{
		func_321(2032023096, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_321(-615217896, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		func_321(655868243, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		func_1132();
		_unlock_set_unlocked(645322743, true);
	}
	else
	{
		func_1681(2032023096);
		func_324(-615217896);
		func_667(655868243, 1, 1, -142743235, 1);
		func_1683(146323340, func_1682());
		Var0 = { func_1419() };
		if (func_1684(&Var0) == -1387633835)
		{
			func_1685(&Var0);
			func_1686(Var0);
		}
		iVar7 = -868094182;
		iVar8 = 1074477367;
		iVar9 = 1;
		func_1687(&iVar7, &iVar8, &iVar9);
		iVar6 = 0;
		while (iVar6 < 7)
		{
			if (func_1412(iVar6) == 2010625508)
			{
				func_1688(iVar6, iVar7);
				func_1689(iVar6, iVar8);
				func_1690(iVar6, iVar9);
				func_1691(iVar6, 0);
				if (func_1692(iVar6))
				{
					func_1693(iVar6);
				}
				iVar10 = func_1694(iVar8);
				func_1695(iVar6, iVar10);
			}
			iVar6++;
		}
		_unlock_set_unlocked(645322743, false);
	}
}

int func_1132()
{
	if (!func_1696(-1898635967, func_1682(), 1))
	{
		return 0;
	}
	if (func_341())
	{
		if (!func_1696(146323340, func_1682(), 0))
		{
			return 0;
		}
	}
	return 1;
}

void func_1133()
{
	func_335(34411519);
	func_335(834124286);
	func_335(-570967010);
}

void func_1134(bool bParam0)
{
	if (bParam0)
	{
		if (_unlock_is_unlocked(-1426541042))
		{
			return;
		}
		func_321(-1080874779, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_321(-223790555, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_321(1566032147, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_321(891311852, 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_321(-1353737667, 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_321(-330313895, 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_321(-2051332199, 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_321(1237770824, 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_321(-1795542128, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_321(-1757588258, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_321(-1921080134, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		_unlock_set_unlocked(-1426541042, true);
	}
	else
	{
		if (!_unlock_is_unlocked(-1426541042))
		{
			return;
		}
		func_667(-1080874779, 3, 1, -142743235, 1);
		func_667(-223790555, 3, 1, -142743235, 1);
		func_667(1566032147, 3, 1, -142743235, 1);
		func_667(891311852, 5, 1, -142743235, 1);
		func_667(-1353737667, 5, 1, -142743235, 1);
		func_667(-330313895, 5, 1, -142743235, 1);
		func_667(-2051332199, 5, 1, -142743235, 1);
		func_667(1237770824, 5, 1, -142743235, 1);
		func_667(-1795542128, 3, 1, -142743235, 1);
		func_667(-1757588258, 3, 1, -142743235, 1);
		func_667(-1921080134, 10, 1, -142743235, 1);
		iVar1 = -868094182;
		iVar2 = 1074477367;
		iVar3 = 1;
		func_1687(&iVar1, &iVar2, &iVar3);
		iVar0 = 0;
		while (iVar0 < 7)
		{
			if (func_1412(iVar0) == 153881023)
			{
				func_1688(iVar0, iVar1);
				func_1689(iVar0, iVar2);
				func_1690(iVar0, iVar3);
				func_1691(iVar0, 0);
				if (func_1692(iVar0))
				{
					func_1693(iVar0);
				}
				iVar4 = func_1694(iVar2);
				func_1695(iVar0, iVar4);
			}
			iVar0++;
		}
		func_1132();
		_unlock_set_unlocked(-1426541042, false);
	}
}

void func_1135(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4)
{
	func_1697(iParam0);
	if (bParam3)
	{
		func_708(iParam0, sParam1, iParam2);
	}
}

bool func_1136(int iParam0)
{
	return (Global_40.f_12004.f_10 && iParam0) != 0;
}

void func_1137(int iParam0)
{
	Global_40.f_12004.f_10 = (Global_40.f_12004.f_10 - (Global_40.f_12004.f_10 && iParam0));
}

struct<14> func_1138()
{
	Var3.f_9 = -1591664384;
	Var17.f_9 = -1591664384;
	if (func_1102("ALL WEAPONS", &iVar0, &iVar1, -1591664384, 0))
	{
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (!func_1103(&Var3, iVar2, iVar0, iVar1))
			{
				Jump @136; //curOff = 80
			}
			else if (Var3.f_4 != 127400949)
			{
			}
			else if (func_1053(Var3.f_4, &Var17, Var3.f_9))
			{
			}
			else
			{
				func_1104(iVar0);
				return Var3;
			}
			iVar2++;
		}
		func_1104(iVar0);
	}
	Var39.f_9 = -1591664384;
	return Var39;
}

void func_1139(int iParam0, struct<4> Param1, int iParam5)
{
	Var0 = { Param1 };
	Var0.f_4 = iParam5;
	Var5.f_9 = -1591664384;
	if (func_1698(Param1, iParam5, &Var5, 0))
	{
		func_1055(Var5.f_4, &Var5, &Var0, -1, -142743235, 1, 0);
	}
	func_1110(iParam0, &Var19, &Var0, 1, 752097756, 0);
	func_1699(Var19, 1);
}

bool func_1140(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (!is_weapon_valid(iParam0))
	{
		return false;
	}
	Var0 = { func_1603(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam2)
	{
		func_1604(&Var0, func_1160(0));
	}
	if (!func_1605(&Var0, &iVar14, &iVar15, 0))
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
			if (!func_1103(&Var16, iVar35, iVar14, iVar15))
			{
			}
			else
			{
				Var30.f_4 = Var16.f_9;
				Var30 = { Var16.f_5 };
				if (func_1055(iParam0, &Var16, &Var30, 1, iParam3, 0, 0))
				{
					iVar36++;
				}
			}
			iVar35++;
		}
	}
	func_1104(iVar14);
	if (iVar36 < iParam1)
	{
	}
	return true;
}

bool func_1141(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (!func_572(iParam0, 0))
	{
		return false;
	}
	if (iParam1 < 1)
	{
		return false;
	}
	Var0 = { func_683(iParam0, bParam4, 1) };
	if (Var0.f_4 == 1084182731)
	{
		return func_1700(iParam0, iParam1, iParam2, bParam3, bParam4);
	}
	Var5 = { func_1054(iParam0, Var0, Var0.f_4, bParam4) };
	return func_1055(iParam0, &Var5, &Var0, iParam1, iParam2, bParam3, bParam4);
}

void func_1142(int iParam0, int iParam1)
{
	if (!Global_1901328->f_94)
	{
		if (func_592(iParam0, 606799272))
		{
			func_1701(iParam0, iParam1);
		}
		if (func_592(iParam0, -1112814642) && func_592(iParam0, -1697809989))
		{
			func_620(iParam0, iParam1, 1, 0);
		}
	}
}

int func_1143(int iParam0, var uParam1)
{
	iVar1 = iParam0;
	if (!func_1702(iVar1, &iVar0))
	{
		return 0;
	}
	if (Global_1946804->f_2657.f_19 == 1)
	{
		Global_1946804->f_2657.f_19 = 0;
		*uParam1 = 0;
		if (func_596(iParam0) != -999503751)
		{
			func_1703(&(Global_1946804->f_2657.f_26), 0, Global_1946804->f_2657.f_19);
		}
		Global_1946804->f_2657[0] = 0;
		return 1;
	}
	Global_1946804->f_2657.f_19 = (Global_1946804->f_2657.f_19 - 1);
	*uParam1 = (*uParam1 - 1);
	Global_1946804->f_2657[iVar0] = &Global_1946804->f_2657[Global_1946804->f_2657.f_19];
	Global_1946804->f_2657[Global_1946804->f_2657.f_19] = 0;
	if (func_596(iParam0) != -999503751)
	{
		func_1703(&(Global_1946804->f_2657.f_26), iVar0, Global_1946804->f_2657.f_19);
	}
	func_1704(iParam0, 1);
	return 1;
}

void func_1144()
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

void func_1145(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		func_1705(0);
	}
	if (bParam0)
	{
		func_1157(8);
		func_1157(512);
	}
	else
	{
		func_1157(8);
		func_1157(16);
	}
}

void func_1146(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

int func_1147(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = func_673();
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

int func_1148(int iParam0)
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

void func_1149(var uParam0, int iParam1, bool bParam2)
{
	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (func_1706(uParam0->f_1[iVar0], 2))
		{
			iVar7 = func_1165(iVar0, 1);
			if (func_1365(iVar0, iParam1))
			{
				vVar4 = { func_675(iVar0, -1) };
				if ((vVar4.x != &Global_1946804->f_57[iVar0] && vVar4.x != 0) && (&uParam0->f_1[iVar0] != vVar4.x || uParam0->f_1[iVar0]->f_1 != vVar4.y))
				{
					*uParam0->f_1[iVar0] = { vVar4 };
				}
				if (func_1364(iVar7, 4))
				{
					func_1368(iVar7, 4, 6);
				}
			}
			else
			{
				func_1367(iVar7, 4, 6);
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

bool func_1150(int iParam0)
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
	func_1707(&(Global_1946804->f_964), iVar0, -367421157, 1409451727, 1, iParam0);
	_0x91ded5dd64bb2691(&(Global_1946804->f_964));
	if (!_0x44b3a36933ac009c(&uVar1, &(Global_1946804->f_964), 1409451727))
	{
		return false;
	}
	return true;
}

bool func_1151(int iParam0, int iParam1, int iParam2)
{
	*iParam2 = 1155669136;
	return true;
}

void func_1152(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	iVar1 = 12;
	iVar2 = func_596(&(uParam0->f_1[iParam2]));
	iVar3 = 0;
	if (bParam3)
	{
		iVar3 = 3;
	}
	if (func_1365(iParam2, 65536) && &uParam0->f_1[iVar1] == -452402570)
	{
		uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
		uParam0->f_1[iVar1]->f_1 = 0;
		if (bParam4)
		{
			func_1650(iVar1, iVar3);
		}
	}
	if (func_1117(-1586649372) && func_1365(iParam2, 524288))
	{
		iVar1 = 33;
		uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
		uParam0->f_1[iVar1]->f_1 = 0;
		if (bParam4)
		{
			func_1650(iVar1, iVar3);
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
						func_1650(iVar1, iVar3);
					}
				}
			}
			func_1708(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
			break;
		case 688587926:
			func_1708(uParam0, 0, (1 && bParam4), (1 && bParam4), bParam3);
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
						func_1650(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 525
				func_1708(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				iVar1 = 16;
				if (uParam0->f_1[iVar1]->f_1 == 1155669136)
				{
					uParam0->f_1[iVar1]->f_1 = -1539589426;
					if (bParam4)
					{
						func_1650(iVar1, iVar3);
					}
				}
				if (uParam0->f_1[iVar1]->f_1 == 1530758430)
				{
					uParam0->f_1[iVar1]->f_1 = 1334603721;
					if (bParam4)
					{
						func_1650(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 656
				func_1708(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				Jump @1415; //curOff = 691
				func_1708(uParam0, (1 && bParam4), (1 && bParam4), 0, bParam3);
				iVar1 = 22;
				if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1])
				{
					uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
					uParam0->f_1[iVar1]->f_1 = 0;
					if (bParam4)
					{
						func_1650(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 786
				func_1708(uParam0, (1 && bParam4), 0, 1, bParam3);
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
							func_1650(iVar1, iVar3);
						}
					}
					iVar1 = 38;
					if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1])
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_1650(iVar1, iVar3);
						}
					}
					iVar1 = 35;
					if (-923693316 == func_596(&(uParam0->f_1[iVar1])))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_1650(iVar1, iVar3);
						}
					}
				}
				else
				{
					iVar1 = 35;
					if ((func_1637(iParam1) && &uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1]) && -923693316 == func_596(&(uParam0->f_1[iVar1])))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_1650(iVar1, iVar3);
						}
					}
				}
				Jump @1415; //curOff = 1130
				iVar1 = 36;
				if (&uParam0->f_1[iParam2] != &Global_1946804->f_57[iParam2] && func_592(&(Global_1946804->f_1497.f_1[iVar1]), -1638171711))
				{
					uParam0->f_1[iParam2] = &Global_1946804->f_57[iParam2];
					uParam0->f_1[iParam2]->f_1 = 0;
					if (bParam4)
					{
						func_1650(iVar1, iVar3);
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
						func_1650(iVar1, iVar3);
					}
				}
				if (&uParam0->f_1[iParam2] != &Global_1946804->f_57[iParam2] && (func_1637(&(Global_1946804->f_1497.f_1[iVar1])) || func_592(&(Global_1946804->f_1497.f_1[iVar1]), -1638171711)))
				{
					uParam0->f_1[iParam2] = &Global_1946804->f_57[iParam2];
					uParam0->f_1[iParam2]->f_1 = 0;
					if (bParam4)
					{
						func_1650(iVar1, iVar3);
					}
				}
			}
			switch (func_596(iParam1))
			{
				case 81053684:
					iVar1 = 10;
					if (-525676072 == func_596(&(uParam0->f_1[iVar1])))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_1650(iVar1, iVar3);
						}
					}
					break;
				case -525676072:
					iVar1 = 12;
					if (81053684 == func_596(&(uParam0->f_1[iVar1])) || func_592(&(uParam0->f_1[iVar1]), 866047851))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_1650(iVar1, iVar3);
						}
					}
					break;
			}
			default:
				break;
	}
}

bool func_1153(int iParam0, int iParam1)
{
	if (func_20() != -1)
	{
		return is_bit_set(&(Global_36638.f_1444[iParam0]), iParam1);
	}
	return is_bit_set(&(Global_40.f_7832[iParam0]), iParam1);
}

bool func_1154(int iParam0)
{
	if (func_20() != -1)
	{
		if (func_1108(iParam0, 4))
		{
			return false;
		}
	}
	else if (func_1108(iParam0, 2))
	{
		return false;
	}
	return true;
}

bool func_1155(int iParam0)
{
	iVar1 = get_cloud_time_as_int();
	if (!func_1108(iParam0, 65536) && !func_1108(iParam0, 32768))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_7756)
	{
		if (Global_40.f_7756[iVar0]->f_2 == iParam0)
		{
			iVar3 = 3;
			if (func_1108(iParam0, 131072))
			{
				iVar3 = 2;
			}
			iVar2 = (&Global_40.f_7756[iVar0] - iVar1);
			if (Global_40.f_7756[iVar0]->f_1 >= iVar3)
			{
				return true;
			}
			if (iVar2 < 1800 && func_1108(iParam0, 32768))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_1156()
{
	return Global_1905944->f_5694;
}

void func_1157(int iParam0)
{
	Global_1946804 = (Global_1946804 || iParam0);
}

void func_1158(struct<4> Param0)
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
			if (func_1709(Param0))
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
			func_1710(Param0);
			*Global_1946804->f_668[Global_1946804->f_856] = { Param0 };
			Global_1946804->f_850++;
			Global_1946804->f_856 = (Global_1946804->f_856 + 1 % 25);
			func_1157(8);
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
			if (func_1709(Param0))
			{
				return;
			}
			func_1710(Param0);
			*Global_1946804->f_567[Global_1946804->f_851] = { Param0 };
			Global_1946804->f_851++;
			func_1157(8);
			break;
		case 30:
		case 31:
		case 32:
		case 33:
		case 35:
		case 36:
			func_1101(Param0, Param0.f_1, Param0.f_2);
			break;
	}
}

struct<4> func_1159(bool bParam0)
{
	return func_1054(1328661203, func_1711(), -1591664384, bParam0);
}

struct<4> func_1160(bool bParam0)
{
	iVar0 = func_958(bParam0);
	if (iVar0 == 2)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224215))
		{
			*Global_1224215 = { func_1054(923904168, func_1159(bParam0), -740156546, bParam0) };
		}
		return *Global_1224215;
	}
	else if (iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224223))
		{
			*Global_1224223 = { func_1054(923904168, func_1159(bParam0), -740156546, 0) };
		}
		return *Global_1224223;
	}
	return func_1054(923904168, func_1159(bParam0), -740156546, 0);
}

bool func_1161(int iParam0, bool bParam1)
{
	if (func_596(iParam0) == 1779021115)
	{
		return false;
	}
	if (_is_weapon_one_handed(iParam0))
	{
		if (bParam1)
		{
			return func_594(24);
		}
		else
		{
			return true;
		}
	}
	return false;
}

struct<4> func_1162(bool bParam0)
{
	iVar0 = func_958(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224219))
		{
			*Global_1224219 = { func_1054(271701509, func_1159(bParam0), 12999093, 0) };
		}
		return *Global_1224219;
	}
	return func_1054(271701509, func_1159(bParam0), 12999093, 0);
}

bool func_1163(int iParam0, int iParam1)
{
	if (iParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_596(iParam0);
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

bool func_1164(var uParam0, var uParam1, bool bParam2, int iParam3, var uParam4, bool bParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(&uParam0))
	{
		return false;
	}
	if (!_0x9700e8efc4ab9089(func_958(bParam5), &uParam0, uParam4, !bParam6))
	{
		return false;
	}
	return true;
}

int func_1165(int iParam0, int iParam1)
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

int func_1166(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_1167(int iParam0, int iParam1)
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

void func_1168(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 62914560);
	*iParam0 = (*iParam0 || shift_left(iParam1, 22));
}

void func_1169(int iParam0, int iParam1)
{
	iVar0 = func_691(*iParam0);
	iVar1 = func_690(*iParam0);
	if (iParam1 < 1 || iParam1 > func_696(iVar0, iVar1))
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4063232);
	*iParam0 = (*iParam0 || shift_left(iParam1, 17));
}

void func_1170(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 126976);
	*iParam0 = (*iParam0 || shift_left(iParam1, 12));
}

void func_1171(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4032);
	*iParam0 = (*iParam0 || shift_left(iParam1, 6));
}

void func_1172(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 63);
	*iParam0 = (*iParam0 || shift_left(iParam1, 0));
}

void func_1173(char* sParam0, char* sParam1, int iParam2)
{
	_0x74bcceb233ad95b2(-466562563, get_hash_key(sParam0));
	_0x74bcceb233ad95b2(1885309238, get_hash_key(sParam1));
	_0x74bcceb233ad95b2(-826961056, iParam2);
}

int func_1174(int iParam0)
{
	return floor(pow(2f, to_float(iParam0)));
}

int func_1175(int iParam0)
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

bool func_1176(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	bVar0 = false;
	if (func_20() == -1)
	{
		if (func_1024(iParam0))
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

int func_1177(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (!func_572(iParam0, 0))
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

int func_1178(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	func_1600(&iParam0);
	if (!func_572(iParam0, 0))
	{
		return 0;
	}
	if (!func_600(0))
	{
		bParam2 = true;
	}
	iVar0 = func_1028(iParam0, uParam1, bParam2, bParam3);
	if (iVar0 < 0)
	{
		return 2147483647;
	}
	if (bParam2)
	{
		iVar1 = func_1602(iParam0, *uParam1, uParam1->f_4, bParam3);
	}
	else
	{
		iVar1 = _0xe787f05dfc977bde(func_958(bParam3), iParam0, 0);
	}
	if (iVar0 > iVar1)
	{
		return (iVar0 - iVar1);
	}
	return 0;
}

int func_1179(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (func_592(iParam0, -5284486))
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
		if (func_1712(iParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
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
		iVar64 = func_653(iParam0, 862142561);
		if (iVar64 != 0)
		{
			Var50.f_8 = iVar64;
			iVar61 = _item_database_create_item_collection(&Var50, &iVar60, 1);
			if (iVar61 != -1)
			{
				iVar62 = 0;
				while (iVar62 < iVar60)
				{
					iVar63 = func_656(iVar62, iVar61);
					if (func_572(iVar63, 0) && iVar63 != iParam0)
					{
						if (bParam4)
						{
							iVar49 = (iVar49 + func_1179(iVar63, -915411861, 1, 0, 0));
						}
						else
						{
							Var35 = iVar63;
							iVar33 = _0x640f890c3e5a3ffd(1, &Var35, &iVar34);
							if (iVar33 != -1)
							{
								if (iVar34 == 0)
								{
									iVar49 = (iVar49 + func_1179(iVar63, -915411861, 1, 0, 0));
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
	if (!func_1712(iParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
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

bool func_1180(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return iParam0 <= func_1713(1);
}

void func_1181(int iParam0, char* sParam1)
{
	if (iParam0 != 18 && iParam0 != 7)
	{
		_uilog_add_total_take_entry(get_hash_key(func_1714(iParam0)), 1997120069, _create_var_string(10, "MISSION_COMPLETE_TAKE_COMP", _create_var_string(2, func_327(iParam0, 0))), _create_var_string(2, "MISSION_COMPLETE_TAKE_AMOUNT", sParam1), 601389479);
	}
	else
	{
		_uilog_add_total_take_entry(get_hash_key(func_1714(iParam0)), 1997120069, _create_var_string(10, "MISSION_COMPLETE_TAKE_COMP_NOS", _create_var_string(2, func_327(iParam0, 0))), _create_var_string(2, "MISSION_COMPLETE_TAKE_AMOUNT", sParam1), 601389479);
	}
}

var func_1182()
{
	return Global_40.f_4283.f_325;
}

bool func_1183(int iParam0)
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

bool func_1184(int iParam0)
{
	return (iParam0 > 0 && iParam0 < 13);
}

void func_1185(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_3 = iParam1;
}

void func_1186(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_4 = iParam1;
}

void func_1187(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_12106[iParam0] = iParam1;
		return;
	}
	Global_1058888->f_498[iParam0] = iParam1;
}

void func_1188(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_12106[iParam0]->f_5 = iParam1;
		return;
	}
	Global_1058888->f_498[iParam0]->f_1 = iParam1;
}

int func_1189(bool bParam0, var uParam1)
{
	*bParam0 = 0;
	*uParam1 = 0;
	bVar0 = func_395();
	bVar1 = false;
	if (bVar0 && !func_1715(4))
	{
		bVar1 = true;
	}
	if ((bVar0 && func_1715(37)) && !func_1715(43))
	{
		*bParam0 = 0;
		*uParam1 = 0;
		return 0;
	}
	bVar2 = false;
	if ((bVar0 && func_1715(43)) && !func_1715(44))
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
		if (func_1413(0) == 1)
		{
			*bParam0 = 1;
		}
		if (func_1413(1) == 1)
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

int func_1190()
{
	return Global_40.f_1095.f_3054;
}

bool func_1191(int iParam0)
{
	iParam0 = func_269(iParam0);
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

bool func_1192(int iParam0, var uParam1)
{
	if (!func_1716(iParam0))
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

int func_1193()
{
	if (func_395())
	{
		if (!func_1715(3))
		{
			return func_1717(43);
		}
		if (func_1715(38) && !func_1715(43))
		{
			return func_1718(8);
		}
	}
	return 0;
}

bool func_1194(int iParam0)
{
	if (!func_250(iParam0))
	{
		return false;
	}
	return (((*Global_1888801)[iParam0]->f_20 == 1 || (*Global_1888801)[iParam0]->f_20 == 2) && !func_1719(iParam0));
}

Vector3 func_1195(int iParam0, int iParam1)
{
	func_1192(15, &Var0);
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

int func_1196(int iParam0, int iParam1)
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
	iVar0 = func_1720(Global_1310720->f_21, 2);
	if (iVar0 == -1)
	{
		return 0;
	}
	func_1192(15, &Var1);
	Var1.f_2 = -1999103282;
	Var1.f_3 = iParam0;
	Var1.f_4 = iParam1;
	if (_datafile_get_data_node_index(&(Var1.f_1), &Var1))
	{
		Var1.f_2 = 383290544;
		_datafile_get_hash(&iVar6, &Var1);
		if (func_1721(iVar0) == iVar6)
		{
			return 1;
		}
	}
	return 0;
}

bool func_1197(int iParam0, bool bParam1, int iParam2)
{
	iVar0 = func_1722(iParam0);
	if (func_481(373691918) && Global_1310720->f_12)
	{
		return iVar0 == 4;
	}
	if (iParam2 != -1)
	{
		return iVar0 == iParam2;
	}
	return (bParam1 || iVar0 == -1);
}

bool func_1198(int iParam0)
{
	if (!func_1192(15, &Var0))
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

bool func_1199(vector3 vParam0, int iParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, int iParam10)
{
	if (bParam5)
	{
		if (func_1723(iParam3, iParam4))
		{
			return false;
		}
	}
	if (!bParam7 || func_1724(5))
	{
		if (func_1725(iParam3, iParam4))
		{
			return false;
		}
	}
	iVar0 = func_1406(vParam0);
	if (bParam6)
	{
		iVar1 = func_375(vParam0, 1);
		if (func_116(iVar1) || func_1726(iVar0, 1))
		{
			return false;
		}
	}
	if (!func_1727(iParam3, iParam4))
	{
		return false;
	}
	if (!func_1728())
	{
		if (func_1729(iParam3, iParam4))
		{
			return false;
		}
	}
	if (!_does_volume_exist(bParam8))
	{
		if (!func_1730(iVar0))
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
	if (!func_1731(iParam3, iParam4))
	{
		return false;
	}
	if (func_1732(0) == 3)
	{
		if (((vParam0.x > -1480f && vParam0.x < -1475f) && vParam0.y > -359f) && vParam0.y < -354f)
		{
			return false;
		}
	}
	if (!func_1733(65536, 2))
	{
		if (((vParam0.x > 1673f && vParam0.x < 1676f) && vParam0.y > -1888f) && vParam0.y < -1885f)
		{
			return false;
		}
	}
	if (func_395())
	{
		if (_does_volume_exist(bParam8))
		{
			if (!_0xf256a75210c5c0eb(bParam8, vParam0))
			{
				return false;
			}
		}
		if (func_1734(vParam0, iParam10) || func_1735(vParam0, iParam10))
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

int func_1200(vector3 vParam0)
{
	iVar0 = func_1736(vParam0, 0f, 0f, 0, 2);
	return func_1736(vParam0, (*Global_1894052)[iVar0]->f_1, (*Global_1894052)[iVar0]->f_2, Global_1894052[iVar0], 4);
}

void func_1201(int iParam0)
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

char* func_1202(int iParam0)
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
	return func_1375(iVar0);
}

char* func_1203(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return "";
	}
	iVar0 = get_entity_model(iParam0);
	return func_1737(iVar0);
}

char* func_1204(int iParam0)
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

void func_1205(char[4] cParam0, int iParam1)
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
		(*cParam0->f_1[iVar0])[iVar1] = 58256;
		clear_bit(&(cParam0->f_1[iVar0]->f_17), iVar1);
		iVar1++;
	}
}

void func_1206(char[4] cParam0, int iParam1, int iParam2)
{
	iVar0 = func_132(iParam1);
	if (func_1517(iVar0))
	{
		cParam0->f_1[iVar0]->f_9 = iParam2;
	}
}

void func_1207()
{
	set_anim_scene_entity(&(uLocal_171[3]), "IG_Dutch", &(uLocal_182[0]), 0);
	set_anim_scene_entity(&(uLocal_171[3]), "IG_BILLWILLIAMSON", &(uLocal_182[1]), 0);
	set_anim_scene_entity(&(uLocal_171[3]), "IG_MICAHBELL", &(uLocal_182[2]), 0);
	_0xdf7b5144e25cd3fe(&(uLocal_171[3]), "pl_IG2_D_M_B_LOOP01");
}

bool func_1208()
{
	if ((!_is_anim_scene_started(&(uLocal_171[3]), false) && _is_anim_scene_loaded(&(uLocal_171[3]), true, false)) && _0x23e33cb9f4a3f547(&(uLocal_171[3]), "pl_IG2_D_M_B_LOOP01"))
	{
		_set_anim_scene_playback_list_bool(&(uLocal_171[3]), "pl_IG2_D_M_B_LOOP01", true);
		start_anim_scene(&(uLocal_171[3]));
	}
	if (_is_anim_scene_started(&(uLocal_171[3]), false) && _is_anim_scene_started(&(uLocal_171[3]), false))
	{
		return true;
	}
	return false;
}

bool func_1209()
{
	if (!_is_anim_scene_started(&(uLocal_171[4]), false) && _is_anim_scene_loaded(&(uLocal_171[4]), true, false))
	{
		start_anim_scene(&(uLocal_171[4]));
	}
	if (_is_anim_scene_started(&(uLocal_171[4]), false))
	{
		return true;
	}
	return false;
}

void func_1210(int iParam0, bool bParam1)
{
	iParam0 = func_269(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_59(iParam0);
	func_518(iParam0);
	func_519(iParam0);
	func_516(iParam0);
	if (func_517(iParam0))
	{
		iVar0 = get_id_of_this_thread();
		if (func_265(iParam0) != iVar0)
		{
			return;
		}
	}
	func_1738(iParam0, 4);
	if (bParam1)
	{
		func_1738(iParam0, 16);
	}
}

void func_1211(bool bParam0)
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		set_entity_visible(&(Local_14.f_16[iVar0]), bParam0);
		iVar0++;
	}
}

void func_1212()
{
	set_anim_scene_entity(&(uLocal_171[0]), "ARTHUR", Global_35, 0);
	_0xdf7b5144e25cd3fe(&(uLocal_171[0]), "PL_IG1_WALKS01");
}

void func_1213(char[4] cParam0)
{
	set_anim_scene_entity(&(uLocal_171[1]), "MRSADLER", &(uLocal_182[3]), 0);
	set_anim_scene_entity(&(uLocal_171[1]), "p_doorsgl02x", func_1215(-239733899, 0), 0);
	if (func_33(cParam0) == iLocal_160)
	{
		_0xdf7b5144e25cd3fe(&(uLocal_171[1]), "PL_IG1_SADIE_CRAWL01");
	}
	else
	{
		_0xdf7b5144e25cd3fe(&(uLocal_171[1]), "PL_IG1_SADIE_CRAWL05");
	}
}

Vector3 func_1214(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2340f, -770.7446f, 45f;
		case 1:
			return 2223.887f, -769.1788f, 43.3606f;
		case 2:
			return 2225.146f, -771.2934f, 44.5682f;
		case 3:
			return 2236.166f, -775.1282f, 44.0293f;
		case 4:
			return 2235.824f, -765.6557f, 44.1798f;
		case 5:
			return 2235f, -770.7446f, 44.4893f;
		case 6:
			return 2224.625f, -770.351f, 42.5048f;
		case 7:
			return 80f, 0f, 180f;
		case 8:
			return 2253f, -789.65f, 44f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

int func_1215(int iParam0, int iParam1)
{
	func_437(iParam0, 0, 0);
	if (func_438(iParam0))
	{
		iVar0 = _0xf7424890e4a094c0(iParam0, iParam1);
		if (does_entity_exist(iVar0))
		{
			return iVar0;
		}
	}
	return 0;
}

void func_1216(int iParam0, int iParam1)
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

void func_1217(var uParam0, int iParam1, int iParam2)
{
	iVar0 = 0;
	while (iVar0 < 65)
	{
		if (does_entity_exist(&(uParam0->f_13[iVar0])) && &uParam0->f_13[iVar0] == iParam1)
		{
			func_1381(uParam0->f_13[iVar0], iParam2);
		}
		iVar0++;
	}
}

void func_1218(bool bParam0, int iParam1, bool bParam2)
{
	if (bParam0 && !func_1238(&(uLocal_182[3]), func_181(1, 1), 1f, 1, 1))
	{
		func_1243(&(uLocal_182[3]), func_225(1, 1), 2, 1073741824);
	}
	if (bParam2 && !func_1238(&(uLocal_182[1]), func_181(1, 2), 1f, 1, 1))
	{
		func_1243(&(uLocal_182[1]), func_225(1, 2), 2, 1073741824);
	}
	func_1739(Local_14.f_14);
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if ((iVar0 == 8 || iVar0 == 7) || iVar0 == 6)
		{
			if (func_165(&(uLocal_182[iVar0]), 0) && !_0x083d497d57b7400f(&(uLocal_182[iVar0])))
			{
				set_blocking_of_non_temporary_events(&(uLocal_182[iVar0]), true);
				freeze_entity_position(&(uLocal_182[iVar0]), true);
			}
		}
		else if (iVar0 == 4)
		{
			if (func_165(&(uLocal_182[iVar0]), 0) && !_0x083d497d57b7400f(&(uLocal_182[iVar0])))
			{
				set_current_ped_weapon(&(uLocal_182[iVar0]), -1569615261, true, 0, false, false);
				set_blocking_of_non_temporary_events(&(uLocal_182[iVar0]), true);
				freeze_entity_position(&(uLocal_182[iVar0]), true);
			}
		}
		else if (((iVar0 == 13 || iVar0 == 11) || iVar0 == 12) || iVar0 == 9)
		{
			if (func_165(&(uLocal_182[iVar0]), 0) && !_0x083d497d57b7400f(&(uLocal_182[iVar0])))
			{
				_set_ped_crouch_movement(&(uLocal_182[iVar0]), true, 0, false);
				set_blocking_of_non_temporary_events(&(uLocal_182[iVar0]), true);
				freeze_entity_position(&(uLocal_182[iVar0]), true);
			}
		}
		if (does_entity_exist(&(uLocal_182[iVar0])))
		{
			set_ped_config_flag(&(uLocal_182[iVar0]), 18, true);
			set_entity_proofs(&(uLocal_182[iVar0]), 102, false);
		}
		if (iVar0 == 6)
		{
			func_1216(&(uLocal_182[iVar0]), -1952010486);
			func_1216(&(uLocal_182[iVar0]), -1723243514);
			set_entity_invincible(&(uLocal_182[iVar0]), true);
		}
		if (iVar0 == 13)
		{
			func_1216(&(uLocal_182[iVar0]), 2031861036);
		}
		iVar0++;
	}
}

void func_1219(struct<2> Param0, bool bParam2)
{
	if (!func_258(Param0))
	{
		return;
	}
	vVar3 = { func_181(2, 1) };
	vVar3.x = (vVar3.x + IntToFloat(get_random_int_in_range(-10, 10)));
	vVar3.f_1 = (vVar3.y + IntToFloat(get_random_int_in_range(-5, 10)));
	vVar3.f_2 = (vVar3.z + IntToFloat(get_random_int_in_range(-5, 10)));
	if (bParam2)
	{
		func_1463(Param0, 1);
		iVar2 = 0;
		while (iVar2 < func_259(Param0))
		{
			iVar0 = func_460(Param0, iVar2);
			if (does_entity_exist(iVar0))
			{
				iVar1 = get_ped_index_from_entity_index(iVar0);
				if (func_165(iVar1, 0))
				{
					clear_ped_tasks(iVar1, 1, 0);
					task_vehicle_shoot_at_coord(iVar1, func_181(2, 1), 20f);
				}
			}
			iVar2++;
		}
	}
	else
	{
		func_1463(Param0, 1);
		iVar2 = 0;
		while (iVar2 < func_259(Param0))
		{
			iVar0 = func_460(Param0, iVar2);
			if (does_entity_exist(iVar0))
			{
				iVar1 = get_ped_index_from_entity_index(iVar0);
				if (func_165(iVar1, 0))
				{
					task_shoot_at_coord(iVar1, func_181(2, 1), -1, -687903391, 1);
				}
			}
			iVar2++;
		}
	}
}

void func_1220(struct<2> Param0, bool bParam2)
{
	if (bParam2)
	{
		func_1740(Param0, Global_35);
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (func_165(&(uLocal_182[iVar0]), 0) && !(iVar0 == 3 && !bParam2))
		{
			func_1740(Param0, &(uLocal_182[iVar0]));
		}
		iVar0++;
	}
}

void func_1221(bool bParam0)
{
	if (does_entity_exist(&(uLocal_182[1])))
	{
		set_entity_invincible(&(uLocal_182[1]), bParam0);
	}
	if (does_entity_exist(&(uLocal_182[2])))
	{
		set_entity_invincible(&(uLocal_182[2]), bParam0);
	}
	if (does_entity_exist(&(uLocal_182[10])))
	{
		set_entity_invincible(&(uLocal_182[10]), bParam0);
	}
}

void func_1222()
{
	Global_1357516 = 0;
}

bool func_1223(char[4] cParam0, char* sParam1, bool bParam2)
{
	StringCopy(&cVar0, sParam1, 24);
	if (func_1741(&(cParam0->f_5310), cVar0, 0, -1, bParam2, 0))
	{
		return true;
	}
	return false;
}

void func_1224(char[4] cParam0, int iParam1, int iParam2)
{
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	if (!func_971(cParam0, iParam1, &iVar0))
	{
		return;
	}
	func_1742(cParam0->f_5423[iVar0], iParam2);
}

void func_1225(char[4] cParam0)
{
	switch (func_1278(cParam0))
	{
		case 0:
			if (!func_1305())
			{
				iLocal_334 = 1;
				func_135(cParam0, 1);
			}
			break;
		case 1:
			if (!func_1305())
			{
				func_1223(cParam0, "GNG1_IG1_P1", 0);
				func_1293(11);
				func_1254(cParam0, "GNG1_OBJ_FOLLOW_S", -1082130432, 0, 0, -1, -1, 0);
				func_222(&uLocal_283);
				func_135(cParam0, 2);
			}
			break;
		case 2:
			if ((func_1279(&uLocal_283) > 3.5f || ((!func_846(Global_35, &(uLocal_182[3]), 4f, 1) && !func_391(iLocal_168, 32)) && iVar313 < 5)) && !func_1292("GNG1_IG1_P1"))
			{
				func_547(&uLocal_283);
				func_1258(cParam0, "GNG1_OBJ_FOLLOW_S", 0, 7500, 0, -1082130432, 0, 0, -1, -1, 0);
				func_135(cParam0, 51);
			}
			else if (iVar313 > 8)
			{
				func_547(&uLocal_283);
				func_135(cParam0, 51);
			}
			else if (func_1279(&uLocal_283) > 10f && func_391(iLocal_168, 32))
			{
				func_222(&uLocal_283);
			}
			break;
		case 3:
			break;
	}
}

void func_1226(char[4] cParam0)
{
	if (!func_165(Global_35, 0))
	{
		return;
	}
	if (func_33(cParam0) > iLocal_161)
	{
		func_1743(cParam0, Local_127.f_15, Local_127.f_16, "GNG1_AREA_WARN", "GNG1_CAB_FAIL", 0, 1, 1, 408396114);
	}
	if (_does_volume_exist(Local_127.f_27))
	{
		if (func_33(cParam0) <= iLocal_161 && !func_1237(Global_35, Local_127.f_27, 1, 0))
		{
			func_1258(cParam0, "GNG1_CAB_WARN", 0, 7500, 0, -1082130432, 0, 0, -1, -1, 0);
			if (does_blip_exist(iVar356))
			{
				remove_blip(&iLocal_359);
			}
			if (!func_974(&((*Global_1360165)[11]->f_13), 8))
			{
				func_1293(11);
			}
		}
		else if (!does_blip_exist(iVar356))
		{
			if (func_33(cParam0) == iLocal_161 && func_1229(cParam0) == 4)
			{
				_get_anim_scene_entity_matrix(&(uLocal_171[2]), "Arthur", &vVar0, false, 0, 2);
				iLocal_359 = func_1253(408396114, vVar0, 1);
				_blip_set_modifier(iVar356, -401963276);
				func_513(11);
			}
		}
	}
	if (func_33(cParam0) < iLocal_162)
	{
		if (_does_volume_exist(Local_127.f_26))
		{
			if (!func_1237(Global_35, Local_127.f_26, 1, 0))
			{
				func_1744(cParam0, "GNG1_CAB_FAIL", "", 1, 0);
			}
		}
	}
}

void func_1227(char[4] cParam0)
{
	if (!func_165(&(uLocal_182[3]), 0))
	{
		return;
	}
	func_1248(cParam0);
}

void func_1228(vector3 vParam0, vector3 vParam3)
{
	if (!func_26(&uLocal_280))
	{
		func_27(&uLocal_280, 0);
	}
	else if (func_223(&uLocal_280) > iLocal_165)
	{
		fVar0 = (get_random_float_in_range(0f, 3f) - 1.5f);
		vParam3.f_1 = (vParam3.y + fVar0);
		vParam3.f_2 = (vParam3.z + (get_random_float_in_range(0f, 0.6f) + 1.3f));
		Var1.f_8 = -1082130432;
		if (iLocal_170 == iLocal_169)
		{
			Var1.f_3 = { func_1214(2) };
			iLocal_169 = 0;
			iLocal_170 = get_random_int_in_range(30, 45);
			vParam0.f_1 = (vParam0.y + 2f);
		}
		else
		{
			iLocal_169++;
			Var1.f_3 = { vParam3 };
		}
		Var1 = { vParam0 };
		Var1.f_6 = -183018591;
		Var1.f_7 = 0f;
		Var1.f_13 = 0;
		Var1.f_16 = 1;
		Var1.f_18 = 1;
		Var1.f_11 = iLocal_198;
		_fire_single_bullet_ignore_entity_new(&Var1);
		func_222(&uLocal_280);
		iLocal_165 = get_random_int_in_range(80, 240);
	}
}

int func_1229(char[4] cParam0)
{
	return cParam0->f_598;
}

void func_1230()
{
	if ((func_165(Global_35, 0) && func_165(iLocal_198, 0)) && (func_1237(Global_35, Local_127.f_18, 1, 0) || func_1237(Global_35, Local_127.f_19, 1, 0)))
	{
		Var0.f_8 = -1082130432;
		Var0 = { func_1214(0) };
		Var0.f_3 = { func_1249(player_id()) };
		Var0.f_6 = -183018591;
		Var0.f_7 = 100f;
		Var0.f_13 = 1;
		Var0.f_16 = 1;
		_fire_single_bullet_ignore_entity_new(&Var0);
		apply_force_to_entity(Global_35, 1, -6f, 0f, -0.1f, 0f, 0f, 0f, 0, true, true, true, false, true);
		func_1276(Global_35, 1);
		explode_ped_head(Global_35, -183018591);
	}
}

void func_1231(char[4] cParam0)
{
	switch (iVar331)
	{
		case 1:
			if (!func_391(iVar332, 1))
			{
				if (func_1223(cParam0, "GNG1_DUTCH_YELL", 0))
				{
					func_414(&uLocal_335, 1);
					iLocal_334 = 3;
				}
			}
			break;
		case 0:
			if (!func_391(iVar332, 2))
			{
				func_1223(cParam0, "GNG1_ABIGAIL", 0);
				func_414(&uLocal_335, 2);
				iLocal_334 = 3;
			}
			break;
		case 2:
			if (!func_391(iVar332, 4))
			{
				if (func_1298(cParam0, "GNG1_BULLET_FLY", 1, 0, 0))
				{
					func_414(&uLocal_335, 4);
					iLocal_334 = 3;
				}
			}
			break;
	}
}

void func_1232()
{
	if (!func_26(&uLocal_295))
	{
		func_27(&uLocal_295, 0);
		iLocal_167 = 0;
		iLocal_166 = 23;
		fLocal_179 = 1.5f;
		vLocal_313 = { func_1214(3) };
	}
	switch (iVar317)
	{
		case 0:
			if (func_1279(&uLocal_295) > 0.1f)
			{
				iLocal_167++;
				if (func_391(iLocal_168, 16384))
				{
					vLocal_313.f_1 = (vLocal_313.y + (0.1f + get_random_float_in_range(0f, 0.05f)));
					vVar0 = { func_1214(4) };
					if (vLocal_313.y > vVar0.y)
					{
						func_1323(&iLocal_168, 16384);
					}
				}
				else
				{
					vLocal_313.f_1 = (vLocal_313.y - (0.1f + get_random_float_in_range(0f, 0.05f)));
					vVar0 = { func_1214(3) };
					if (vLocal_313.y < vVar0.y)
					{
						func_414(&iLocal_168, 16384);
					}
				}
				if (iLocal_167 > iLocal_166)
				{
					clear_ped_tasks(iLocal_198, 1, 0);
					iLocal_167 = 0;
					iLocal_166 = get_random_int_in_range(25, 36);
					iLocal_319 = 1;
				}
				else
				{
					_0xaf2ef28ce3084505(iLocal_198, vLocal_313);
				}
				func_222(&uLocal_295);
			}
			break;
		case 1:
			if (func_1279(&uLocal_295) > fLocal_179)
			{
				iLocal_319 = 0;
				fLocal_179 = get_random_float_in_range(1.3f, 1.9f);
				task_vehicle_shoot_at_coord(iLocal_198, vLocal_313, 20f);
				func_222(&uLocal_295);
			}
			break;
	}
}

void func_1233(char[4] cParam0)
{
	switch (iVar317)
	{
		case 0:
			if (func_1745())
			{
				func_222(&uLocal_277);
				iLocal_320 = 1;
			}
			break;
		case 1:
			func_547(&uLocal_277);
			iLocal_320 = 2;
			set_anim_scene_bool(&(uLocal_171[3]), "b_breakout", true, false);
			func_414(&iLocal_168, 4);
			break;
		case 2:
			if (func_165(iLocal_198, 0))
			{
				func_145(cParam0, iLocal_198, "GNG1_AMB1", 0);
				set_ped_accuracy(iLocal_198, 95);
				task_combat_ped(iLocal_198, Global_35, 0, 0);
				func_145(cParam0, iLocal_198, "GNG1_PINKERTON1", 0);
				func_1223(cParam0, "GNG1_SPOT", 0);
			}
			iVar0 = 0;
			while (iVar0 < 5)
			{
				if (func_165(&(Local_14.f_16[iVar0]), 0))
				{
					set_ped_accuracy(&(Local_14.f_16[iVar0]), 80);
					task_combat_hated_targets(&(Local_14.f_16[iVar0]), -1f);
				}
				iVar0++;
			}
			iLocal_320 = 3;
			func_222(&uLocal_277);
			break;
		case 3:
			if (func_165(&(uLocal_182[0]), 0))
			{
				set_ped_combat_movement(&(uLocal_182[0]), 2);
				task_combat_hated_targets(&(uLocal_182[0]), -1f);
			}
			if (func_165(&(uLocal_182[2]), 0))
			{
				set_ped_combat_movement(&(uLocal_182[2]), 2);
				task_combat_hated_targets(&(uLocal_182[2]), -1f);
			}
			if (func_165(&(uLocal_182[1]), 0))
			{
				set_ped_combat_movement(&(uLocal_182[1]), 2);
				task_combat_hated_targets(&(uLocal_182[1]), -1f);
			}
			iLocal_320 = 4;
			break;
		case 4:
			if (func_1279(&uLocal_277) > 7f || !func_1292("GNG1_SPOT"))
			{
				func_1744(cParam0, "GNG1_FAIL_SPOT", "", 1, 0);
				func_547(&uLocal_277);
				iLocal_320 = 5;
			}
			break;
	}
}

float func_1234(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!does_entity_exist(iParam0))
	{
		return 0f;
	}
	return get_distance_between_coords(get_entity_coords(iParam0, false, false), vParam1, bParam4);
}

int func_1235()
{
	if (!_is_anim_scene_started(&(uLocal_171[5]), false) && _is_anim_scene_loaded(&(uLocal_171[5]), true, false))
	{
		start_anim_scene(&(uLocal_171[5]));
	}
	if (_is_anim_scene_started(&(uLocal_171[5]), false))
	{
		return 1;
	}
	return 0;
}

bool func_1236()
{
	if (!func_165(Global_35, 0))
	{
		return false;
	}
	if (!_is_anim_scene_started(&(uLocal_171[0]), false))
	{
		return false;
	}
	bVar0 = false;
	if (func_1746(&uLocal_304, 2.5f))
	{
		func_709("GNG1_HELP_CRAWL", 10000, 0, 0, 0, 1);
	}
	if (func_1746(&uLocal_304, 15f))
	{
		explode_ped_head(&(uLocal_182[0]), -183018591);
	}
	_0x718c6ecf5e8cbdd4();
	if (get_control_normal(0, -1882188328) >= 0.15f || get_disabled_control_normal(0, -1882188328) >= 0.15f)
	{
		bVar0 = true;
		if (!func_391(iLocal_168, 32))
		{
			func_414(&iLocal_168, 32);
		}
	}
	else if (func_391(iLocal_168, 32))
	{
		func_1323(&iLocal_168, 32);
	}
	if (iVar314 < 2)
	{
		_0x632be8d84846fa56();
	}
	switch (iVar314)
	{
		case 0:
			if ((_0x8d81e7824b7753f7(&(uLocal_171[0]), "s_ig1_reacts_idle01", 1) && _0x23e33cb9f4a3f547(&(uLocal_171[0]), "PL_IG1_WALKS01")) && bVar0)
			{
				_set_anim_scene_playback_list_bool(&(uLocal_171[0]), "PL_IG1_WALKS01", true);
				_0xdf7b5144e25cd3fe(&(uLocal_171[0]), "pl_IG1_Crawls_Trans");
				iLocal_316 = 1;
			}
			break;
		case 1:
			if ((_0x8d81e7824b7753f7(&(uLocal_171[0]), "s_ig1_react_idle02", 1) && _0x23e33cb9f4a3f547(&(uLocal_171[0]), "pl_IG1_Crawls_Trans")) && bVar0)
			{
				_set_anim_scene_playback_list_bool(&(uLocal_171[0]), "pl_IG1_Crawls_Trans", true);
				_0xdf7b5144e25cd3fe(&(uLocal_171[0]), "PL_IG1_LEFT_FOOT_CRAWL_TRANS01");
				_0xa54d643d0773eb65("script@Story@GNG1@ig1_crawl_treatment", "crawl_camera", 5);
				iLocal_316 = 2;
			}
			break;
		case 2:
			if ((_0x8d81e7824b7753f7(&(uLocal_171[0]), "s_ig1_left_foot_crawl_idle01", 1) && _0x23e33cb9f4a3f547(&(uLocal_171[0]), "PL_IG1_LEFT_FOOT_CRAWL_TRANS01")) && bVar0)
			{
				_set_anim_scene_playback_list_bool(&(uLocal_171[0]), "PL_IG1_LEFT_FOOT_CRAWL_TRANS01", true);
				_0xdf7b5144e25cd3fe(&(uLocal_171[0]), "PL_IG1_RIGHT_FOOT_CRAWL_TRANS02");
				iLocal_316 = 3;
			}
			break;
		case 3:
			if ((_0x8d81e7824b7753f7(&(uLocal_171[0]), "s_ig1_right_foot_crawl_idle02", 1) && _0x23e33cb9f4a3f547(&(uLocal_171[0]), "PL_IG1_RIGHT_FOOT_CRAWL_TRANS02")) && bVar0)
			{
				_set_anim_scene_playback_list_bool(&(uLocal_171[0]), "PL_IG1_RIGHT_FOOT_CRAWL_TRANS02", true);
				_0xdf7b5144e25cd3fe(&(uLocal_171[0]), "PL_IG1_LEFT_FOOT_CRAWL_TRANS03");
				iLocal_316 = 4;
			}
			break;
		case 4:
			if ((_0x8d81e7824b7753f7(&(uLocal_171[0]), "s_ig1_left_foot_crawl_idle03", 1) && _0x23e33cb9f4a3f547(&(uLocal_171[0]), "PL_IG1_LEFT_FOOT_CRAWL_TRANS03")) && bVar0)
			{
				_set_anim_scene_playback_list_bool(&(uLocal_171[0]), "PL_IG1_LEFT_FOOT_CRAWL_TRANS03", true);
				_0xdf7b5144e25cd3fe(&(uLocal_171[0]), "PL_IG1_LEFT_FOOT_CRAWL_TRANS04");
				iLocal_316 = 5;
			}
			break;
		case 5:
			if ((_0x8d81e7824b7753f7(&(uLocal_171[0]), "s_ig1_left_foot_crawl_idle04", 1) && _0x23e33cb9f4a3f547(&(uLocal_171[0]), "PL_IG1_LEFT_FOOT_CRAWL_TRANS04")) && bVar0)
			{
				_set_anim_scene_playback_list_bool(&(uLocal_171[0]), "PL_IG1_LEFT_FOOT_CRAWL_TRANS04", true);
				_0xdf7b5144e25cd3fe(&(uLocal_171[0]), "PL_IG1_RIGHT_FOOT_CRAWL_TRANS05");
				iLocal_316 = 6;
			}
			break;
		case 6:
			if ((_0x8d81e7824b7753f7(&(uLocal_171[0]), "s_ig1_right_foot_crawl_idle05", 1) && _0x23e33cb9f4a3f547(&(uLocal_171[0]), "PL_IG1_RIGHT_FOOT_CRAWL_TRANS05")) && bVar0)
			{
				_set_anim_scene_playback_list_bool(&(uLocal_171[0]), "PL_IG1_RIGHT_FOOT_CRAWL_TRANS05", true);
				_0xdf7b5144e25cd3fe(&(uLocal_171[0]), "PL_IG1_RIGHT_FOOT_CRAWL_TRANS06");
				iLocal_316 = 7;
			}
			break;
		case 7:
			if ((_0x8d81e7824b7753f7(&(uLocal_171[0]), "s_ig1_left_foot_crawl_idle06", 1) && _0x23e33cb9f4a3f547(&(uLocal_171[0]), "PL_IG1_RIGHT_FOOT_CRAWL_TRANS06")) && bVar0)
			{
				_set_anim_scene_playback_list_bool(&(uLocal_171[0]), "PL_IG1_RIGHT_FOOT_CRAWL_TRANS06", true);
				_0xdf7b5144e25cd3fe(&(uLocal_171[0]), "PL_IG1_RIGHT_FOOT_CRAWL_GET_UP");
				iLocal_316 = 8;
			}
			break;
		case 8:
			if ((_0x8d81e7824b7753f7(&(uLocal_171[0]), "s_ig1_right_foot_crawl_idle07", 1) && _0x23e33cb9f4a3f547(&(uLocal_171[0]), "PL_IG1_RIGHT_FOOT_CRAWL_GET_UP")) && bVar0)
			{
				_set_anim_scene_playback_list_bool(&(uLocal_171[0]), "PL_IG1_RIGHT_FOOT_CRAWL_GET_UP", true);
				iLocal_316 = 9;
			}
			break;
		case 9:
			if (_0x005e6f28dd7ed58d(&(uLocal_171[0]), "ARTHUR"))
			{
				_0x2412216fcc7b4e3e("script@Story@GNG1@ig1_crawl_treatment");
				return true;
			}
			break;
	}
	return false;
}

bool func_1237(int iParam0, int iParam1, bool bParam2, int iParam3)
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

bool func_1238(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6)
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
	else if (func_1572(get_entity_coords(iParam0, bParam5, false), vParam1) <= (fParam4 * fParam4))
	{
		return true;
	}
	return false;
}

void func_1239(char[4] cParam0, int iParam1)
{
	cParam0->f_1[func_132(iParam1)]->f_12 = 1;
}

void func_1240(char[4] cParam0, int iParam1, int iParam2, int iParam3)
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

void func_1241(char[4] cParam0, int iParam1, char[16] cParam2)
{
	cParam0->f_1[func_132(iParam1)]->f_13 = { cParam2 };
}

void func_1242(char[4] cParam0, int iParam1, int iParam2)
{
	cParam0->f_1[func_132(iParam1)]->f_21 = iParam2;
}

void func_1243(int iParam0, struct<4> Param1, int iParam5, float fParam6)
{
	func_851(iParam0, Param1, Param1.f_3, iParam5, fParam6);
}

void func_1244(char[4] cParam0)
{
	switch (func_1278(cParam0))
	{
		case 0:
			if (!func_1305() && func_1223(cParam0, "GNG1_DOWN", 0))
			{
				func_135(cParam0, 1);
				func_1293(11);
				func_1254(cParam0, "GNG1_OBJ_FOLLOW_S", -1082130432, 0, 0, -1, -1, 0);
				func_222(&uLocal_283);
			}
			break;
		case 1:
			if (func_1279(&uLocal_283) > 30f)
			{
				func_547(&uLocal_283);
				func_1258(cParam0, "GNG1_OBJ_FOLLOW_S", 0, 7500, 0, -1082130432, 0, 0, -1, -1, 0);
				func_135(cParam0, 3);
			}
			else if (func_1229(cParam0) > 2)
			{
				func_547(&uLocal_283);
				func_135(cParam0, 51);
			}
			break;
		case 3:
			if (!func_1305())
			{
				func_1281(cParam0, Local_14.f_14, "GNG1_SHOUTS5", "GNG1_PINKERTON5", 0);
				func_135(cParam0, 5);
			}
			break;
		case 5:
			if (!func_1305())
			{
				func_1281(cParam0, Local_14.f_14, "GNG1_SHOUTS3", "GNG1_PINKERTON3", 0);
				func_135(cParam0, 51);
			}
			break;
	}
}

bool func_1245(var uParam0, float fParam1)
{
	if ((!is_player_dead(player_id()) && is_player_playing(player_id())) && get_entity_speed(Global_35) < 0.1f)
	{
		if (!func_26(uParam0))
		{
			func_222(uParam0);
		}
		else if (func_1279(uParam0) >= fParam1)
		{
			return true;
		}
	}
	else if (func_26(uParam0))
	{
		func_547(uParam0);
	}
	return false;
}

bool func_1246(int iParam0, int iParam1)
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

void func_1247()
{
	if (((_does_anim_scene_exist(&(uLocal_171[1])) && _is_anim_scene_started(&(uLocal_171[1]), false)) && !func_1237(&(uLocal_182[3]), Local_127.f_21, 1, 0)) && !is_ped_climbing(&(uLocal_182[3])))
	{
		disable_control_action(0, -640622144, false);
	}
}

void func_1248(char[4] cParam0)
{
	if (iVar314 > 0)
	{
		func_1747();
	}
	switch (iVar314)
	{
		case 0:
			func_1748(cParam0);
			if (!func_26(&uLocal_274) && get_entity_speed(Global_35) > 0f)
			{
				func_222(&uLocal_274);
			}
			if (func_1278(cParam0) == 2 || (func_1279(&uLocal_274) > 2.5f && get_entity_speed(Global_35) > 0f))
			{
				func_547(&uLocal_274);
				_0xdf7b5144e25cd3fe(&(uLocal_171[1]), "PL_IG1_SADIE_CRAWL02");
				if (func_33(cParam0) == iLocal_160)
				{
					iLocal_317 = 1;
				}
				else
				{
					iLocal_317 = 5;
				}
			}
			break;
		case 1:
			if (!_0x23e33cb9f4a3f547(&(uLocal_171[1]), "PL_IG1_SADIE_CRAWL02"))
			{
			}
			if (((_0x8d81e7824b7753f7(&(uLocal_171[1]), "S_IG1_SADIE_IDLE01", 1) && _0x23e33cb9f4a3f547(&(uLocal_171[1]), "PL_IG1_SADIE_CRAWL02")) && func_391(iLocal_168, 32)) && func_846(Global_35, &(uLocal_182[3]), 7.5f, 1))
			{
				_set_anim_scene_playback_list_bool(&(uLocal_171[1]), "PL_IG1_SADIE_CRAWL02", true);
				_0xdf7b5144e25cd3fe(&(uLocal_171[1]), "PL_IG1_SADIE_CRAWL03");
				iLocal_317 = 2;
			}
			break;
		case 2:
			if ((_0x8d81e7824b7753f7(&(uLocal_171[1]), "S_IG1_SADIE_IDLE02", 1) && _0x23e33cb9f4a3f547(&(uLocal_171[1]), "PL_IG1_SADIE_CRAWL03")) && func_1749())
			{
				_set_anim_scene_playback_list_bool(&(uLocal_171[1]), "PL_IG1_SADIE_CRAWL03", true);
				_0xdf7b5144e25cd3fe(&(uLocal_171[1]), "PL_IG1_SADIE_CRAWL04");
				iLocal_317 = 3;
			}
			break;
		case 3:
			if ((_0x8d81e7824b7753f7(&(uLocal_171[1]), "S_IG1_SADIE_IDLE03", 1) && _0x23e33cb9f4a3f547(&(uLocal_171[1]), "PL_IG1_SADIE_CRAWL04")) && func_1749())
			{
				_set_anim_scene_playback_list_bool(&(uLocal_171[1]), "PL_IG1_SADIE_CRAWL04", true);
				_0xdf7b5144e25cd3fe(&(uLocal_171[1]), "PL_IG1_SADIE_CRAWL05");
				iLocal_317 = 4;
			}
			break;
		case 4:
			if ((_0x8d81e7824b7753f7(&(uLocal_171[1]), "S_IG1_SADIE_IDLE04", 1) && _0x23e33cb9f4a3f547(&(uLocal_171[1]), "PL_IG1_SADIE_CRAWL05")) && func_1749())
			{
				_set_anim_scene_playback_list_bool(&(uLocal_171[1]), "PL_IG1_SADIE_CRAWL05", true);
				iLocal_317 = 5;
			}
			break;
		case 5:
			if (_0x8d81e7824b7753f7(&(uLocal_171[1]), "S_IG1_SADIE_IDLE05", 1) && func_1749())
			{
				func_1298(cParam0, "GNG1_SADIE_DAWD", 0, 0, 0);
				iLocal_317 = 11;
			}
			break;
		case 6:
			if (!func_846(Global_35, &(uLocal_182[3]), 7f, 1) && func_1291(&uLocal_301) >= 6500)
			{
				func_1298(cParam0, "GNG1_SADIE_DAWD", 0, 0, 0);
				func_222(&uLocal_301);
			}
			if (func_1749())
			{
				iLocal_317 = iVar315;
			}
			break;
	}
}

Vector3 func_1249(int iParam0)
{
	return get_entity_coords(get_player_ped(iParam0), false, false);
}

void func_1250(char[4] cParam0)
{
	set_anim_scene_entity(&(uLocal_171[2]), "ARTHUR", Global_35, 0);
	set_anim_scene_entity(&(uLocal_171[2]), "MRSADLER", &(uLocal_182[3]), 0);
	_0xdf7b5144e25cd3fe(&(uLocal_171[2]), "pl_leadin");
}

void func_1251(char[4] cParam0, char* sParam1, float fParam2)
{
	if (!func_26(&uLocal_304))
	{
		func_222(&uLocal_304);
	}
	if (func_1279(&uLocal_304) > fParam2)
	{
		func_1298(cParam0, sParam1, 0, 0, 0);
		func_222(&uLocal_304);
	}
}

void func_1252(int iParam0)
{
	if (_does_anim_scene_exist(iParam0))
	{
		if (_is_anim_scene_started(iParam0, false))
		{
			_delete_anim_scene(iParam0);
		}
	}
}

int func_1253(int iParam0, vector3 vParam1, bool bParam4)
{
	iVar0 = _blip_add_for_coord(iParam0, vParam1);
	if (bParam4)
	{
		_blip_set_modifier(iVar0, 231194138);
	}
	return iVar0;
}

void func_1254(char[4] cParam0, char* sParam1, float fParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6, int iParam7)
{
	sVar0 = func_1541(iParam7, sParam1, sParam3, sParam4, sParam5, sParam6);
	if (get_hash_key(sParam1) != cParam0->f_5302)
	{
		_uilog_set_cached_objective(sVar0);
		cParam0->f_5302 = get_hash_key(sParam1);
		_uilog_add_or_update_objective(1, func_85(cParam0), get_hash_key(sParam1), sParam1, fParam2 >= 0.9f, false, false);
	}
	func_140(cParam0, func_33(cParam0), 33554432);
}

int func_1255(char* sParam0, int iParam1, vector3 vParam2, float fParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, int iParam16)
{
	if (is_string_null_or_empty(sParam0))
	{
		return 0;
	}
	if (!_0xbc0884bc590951c7(iParam1, 0))
	{
		return 0;
	}
	if (func_396(vParam2))
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
		if (func_953(iVar0, 2))
		{
			if (func_1295(vParam2, (*Global_1945938)[iVar0]->f_6, 0.01f, 1) && iParam1 == (*Global_1945938)[iVar0]->f_4)
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
		func_1750(iVar1, iParam1, sParam0, 4, iParam6, iParam7, vParam2, fParam5, 0, 0, 2, iParam8, iParam9, iParam10, iParam11, iParam12, iParam13, iParam14, 1065353216, 0, 0, 0, bParam15, iParam16);
		return iVar1;
	}
	return 0;
}

bool func_1256()
{
	if (_does_anim_scene_exist(&(uLocal_171[2])) && _is_anim_scene_started(&(uLocal_171[2]), false))
	{
		return true;
	}
	if ((!_is_anim_scene_started(&(uLocal_171[2]), false) && _is_anim_scene_loaded(&(uLocal_171[2]), true, false)) && _0x23e33cb9f4a3f547(&(uLocal_171[2]), "pl_leadin"))
	{
		_set_anim_scene_playback_list_bool(&(uLocal_171[2]), "pl_leadin", true);
		start_anim_scene(&(uLocal_171[2]));
		return true;
	}
	return false;
}

bool func_1257()
{
	return _uilog_has_displayed_cached_objective();
}

var func_1258(char[4] cParam0, char* sParam1, int iParam2, int iParam3, bool bParam4, float fParam5, char* sParam6, char* sParam7, char* sParam8, char* sParam9, int iParam10)
{
	func_1254(cParam0, sParam1, fParam5, sParam6, sParam7, sParam8, sParam9, iParam10);
	if (bParam4)
	{
		_uilog_set_has_displayed_cached_objective();
		uVar0 = func_928(sParam1, iParam3, bParam4, 1, sParam6, sParam7, sParam8, sParam9, iParam10);
	}
	else if (!func_1751(cParam0, sParam1))
	{
		sVar1 = func_1541(iParam10, sParam1, sParam6, sParam7, sParam8, sParam9);
		_uilog_set_has_displayed_cached_objective();
		uVar0 = func_1540(sVar1, iParam3, 0, 0, 0, 1);
	}
	return uVar0;
}

void func_1259(char[4] cParam0)
{
	Var0 = { func_1434(cParam0, func_35(cParam0)) };
	func_1752(cParam0, &Var0);
}

int func_1260(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6, int iParam7, int iParam8, int iParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
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
					if (func_686(iVar3) && _0xf252a85b8f3f8c58(iVar2, iVar3))
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
							if (func_686(iVar4) && iVar4 != iVar0)
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
		if (iParam0 != Global_35 && func_686(iVar0))
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
		func_601(iVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 752097756, 0);
	}
	else if (!bParam13)
	{
		fVar25 = 0f;
		func_1753(iParam0, &iVar0, &fVar25);
		iVar0 = _give_weapon_to_ped_2(iParam0, iVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 0.5f, 1f, 752097756, bVar22, fVar25, false);
	}
	if (iParam0 != Global_35)
	{
		if (func_1059(iVar0))
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

void func_1261(bool bParam0)
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_165(&(Local_14.f_16[iVar0]), 0))
		{
			set_ped_config_flag(&(Local_14.f_16[iVar0]), 277, bParam0);
		}
		iVar0++;
	}
}

void func_1262(char[4] cParam0)
{
	func_1754(&(cParam0->f_7375), &(Local_14.f_16[0]), 0, "WEAPON_REVOLVER_CATTLEMAN", 0, 0);
	func_1754(&(cParam0->f_7375), &(Local_14.f_16[1]), 0, "WEAPON_REVOLVER_CATTLEMAN^1", 0, 0);
	func_1754(&(cParam0->f_7375), &(Local_14.f_16[2]), 0, "WEAPON_RIFLE_SPRINGFIELD^2", 0, 0);
	func_1754(&(cParam0->f_7375), &(Local_14.f_16[3]), 0, "WEAPON_RIFLE_SPRINGFIELD^4", 0, 0);
	func_1754(&(cParam0->f_7375), &(Local_14.f_16[4]), 0, "WEAPON_RIFLE_SPRINGFIELD^3", 0, 0);
}

void func_1263(char[4] cParam0)
{
	switch (func_1278(cParam0))
	{
		case 0:
			func_1254(cParam0, "GNG1_KILL_GUN", -1082130432, 0, 0, -1, -1, 0);
			if (func_165(iLocal_198, 0))
			{
				func_1258(cParam0, "GNG1_KILL_GUN", 0, 7500, 1, -1082130432, 0, 0, -1, -1, 0);
			}
			func_135(cParam0, -1);
			break;
		case 2:
			_0xdd1232b332cbb9e7(3, 1, 0);
			func_1254(cParam0, "GNG1_KILL", -1082130432, 0, 0, -1, -1, 0);
			func_222(&uLocal_283);
			func_135(cParam0, 3);
			break;
		case 3:
			if (func_1279(&uLocal_283) > 30f)
			{
				func_547(&uLocal_283);
				func_1258(cParam0, "GNG1_KILL", 0, 7500, 1, -1082130432, 0, 0, -1, -1, 0);
				func_135(cParam0, 51);
			}
			else if (func_1284() < 5)
			{
				func_547(&uLocal_283);
				func_135(cParam0, 51);
			}
			break;
		case 4:
			func_222(&uLocal_301);
			if (!func_1305() && func_1223(cParam0, "GNG1_GUN", 0))
			{
				func_135(cParam0, -1);
			}
			break;
		case 5:
			if (func_1298(cParam0, "GNG1_SAD_H", 0, 2f, 0))
			{
				func_135(cParam0, 6);
			}
			break;
		case 6:
			if (func_1298(cParam0, "GNG1_BILL_H", 0, 2.6f, 0))
			{
				func_135(cParam0, 7);
			}
			break;
		case 7:
			if (func_1298(cParam0, "GNG1_ART_H", 0, 1.7f, 0))
			{
				func_135(cParam0, 51);
			}
			break;
	}
}

void func_1264()
{
	if (func_1238(Global_35, 2244.392f, -775.4561f, 43.5922f, 1.25f, 1, 0) && func_1295(get_ped_defensive_area_position(&(uLocal_182[1]), true), 2244.392f, -775.4561f, 43.5922f, 0.75f, 0))
	{
		func_50(&(uLocal_182[1]));
		set_ped_sphere_defensive_area(&(uLocal_182[1]), 2248.893f, -775.1564f, 42.2411f, 1.5f, 1, 0, 0);
	}
	if (func_1238(Global_35, 2248.893f, -775.1564f, 42.2411f, 0.75f, 1, 0) && func_1295(get_ped_defensive_area_position(&(uLocal_182[1]), true), 2248.893f, -775.1564f, 42.2411f, 0.75f, 0))
	{
		func_50(&(uLocal_182[1]));
		set_ped_sphere_defensive_area(&(uLocal_182[1]), 2244.392f, -775.4561f, 43.5922f, 1.5f, 1, 0, 0);
	}
	if (func_1238(Global_35, 2260.977f, -744.437f, 41.4092f, 1.25f, 1, 0) && func_1295(get_ped_defensive_area_position(&(uLocal_182[1]), true), 2260.977f, -744.437f, 41.4092f, 0.75f, 0))
	{
		func_50(&(uLocal_182[1]));
		set_ped_sphere_defensive_area(&(uLocal_182[1]), 2255.881f, -741.7477f, 41.4454f, 1.5f, 1, 0, 0);
	}
	if (func_1238(Global_35, 2255.881f, -741.7477f, 41.4454f, 1.25f, 1, 0) && func_1295(get_ped_defensive_area_position(&(uLocal_182[1]), true), 2255.881f, -741.7477f, 41.4454f, 0.75f, 0))
	{
		func_50(&(uLocal_182[1]));
		set_ped_sphere_defensive_area(&(uLocal_182[1]), 2260.977f, -744.437f, 41.4092f, 1.5f, 1, 0, 0);
	}
	if (func_1238(Global_35, 2276.332f, -742.6232f, 40.7898f, 1.15f, 1, 0) && func_1295(get_ped_defensive_area_position(&(uLocal_182[1]), true), 2276.332f, -742.6232f, 40.7898f, 0.75f, 0))
	{
		func_50(&(uLocal_182[1]));
		set_ped_sphere_defensive_area(&(uLocal_182[1]), 2281.51f, -739.9014f, 41.4838f, 1.5f, 1, 0, 0);
	}
	if (func_1238(Global_35, 2281.51f, -739.9014f, 41.4838f, 1.15f, 1, 0) && func_1295(get_ped_defensive_area_position(&(uLocal_182[1]), true), 2281.51f, -739.9014f, 41.4838f, 0.75f, 0))
	{
		func_50(&(uLocal_182[1]));
		set_ped_sphere_defensive_area(&(uLocal_182[1]), 2276.332f, -742.6232f, 40.7898f, 1.5f, 1, 0, 0);
	}
	if (func_1238(Global_35, func_181(1, 16), 1.15f, 1, 0) && func_1295(get_ped_defensive_area_position(&(uLocal_182[1]), true), func_181(1, 16), 0.75f, 0))
	{
		func_50(&(uLocal_182[1]));
		set_ped_sphere_defensive_area(&(uLocal_182[1]), 2245.366f, -774.7524f, 42.3328f, 1.5f, 1, 0, 0);
	}
	if (func_1238(Global_35, 2245.366f, -774.7524f, 42.3328f, 1.15f, 1, 0) && func_1295(get_ped_defensive_area_position(&(uLocal_182[1]), true), 2245.366f, -774.7524f, 42.3328f, 0.75f, 0))
	{
		func_50(&(uLocal_182[1]));
		set_ped_sphere_defensive_area(&(uLocal_182[1]), func_181(1, 16), 1.5f, 1, 0, 0);
	}
}

void func_1265()
{
	if (func_1295(get_ped_defensive_area_position(&(uLocal_182[3]), true), 2261.17f, -738.1764f, 41.2723f, 0.85f, 0))
	{
	}
	if (func_1295(get_ped_defensive_area_position(&(uLocal_182[3]), true), 2260.934f, -731.8542f, 41.0164f, 0.85f, 0))
	{
	}
	if (func_1238(Global_35, 2261.17f, -738.1764f, 41.2723f, 0.85f, 1, 0) && func_1295(get_ped_defensive_area_position(&(uLocal_182[3]), true), 2261.17f, -738.1764f, 41.2723f, 0.85f, 0))
	{
		func_50(&(uLocal_182[3]));
		set_ped_sphere_defensive_area(&(uLocal_182[3]), 2260.934f, -731.8542f, 41.0164f, 1.5f, 1, 0, 0);
	}
	if (func_1238(Global_35, 2260.934f, -731.8542f, 41.0164f, 0.85f, 1, 0) && func_1295(get_ped_defensive_area_position(&(uLocal_182[3]), true), 2260.934f, -731.8542f, 41.0164f, 0.85f, 0))
	{
		func_50(&(uLocal_182[3]));
		set_ped_sphere_defensive_area(&(uLocal_182[3]), 2261.17f, -738.1764f, 41.2723f, 1.5f, 1, 0, 0);
	}
	if (func_1238(Global_35, 2271.801f, -741.9879f, 40.9903f, 1.25f, 1, 0) && func_1295(get_ped_defensive_area_position(&(uLocal_182[3]), true), 2271.801f, -741.9879f, 40.9903f, 0.75f, 0))
	{
		func_50(&(uLocal_182[3]));
		set_ped_sphere_defensive_area(&(uLocal_182[3]), 2277.41f, -737.9014f, 40.4838f, 1.5f, 1, 0, 0);
	}
	if (func_1238(Global_35, 2277.41f, -737.9014f, 40.4838f, 1.25f, 1, 0) && func_1295(get_ped_defensive_area_position(&(uLocal_182[3]), true), 2277.41f, -737.9014f, 40.4838f, 0.75f, 0))
	{
		func_50(&(uLocal_182[3]));
		set_ped_sphere_defensive_area(&(uLocal_182[3]), 2271.801f, -741.9879f, 40.9903f, 1.5f, 1, 0, 0);
	}
	if (func_1238(Global_35, func_181(1, 17), 1.15f, 1, 0) && func_1295(get_ped_defensive_area_position(&(uLocal_182[3]), true), func_181(1, 17), 0.75f, 0))
	{
		func_50(&(uLocal_182[3]));
		set_ped_sphere_defensive_area(&(uLocal_182[3]), 2257.128f, -771.5497f, 41.8211f, 1.5f, 1, 0, 0);
	}
	if (func_1238(Global_35, 2257.128f, -771.5497f, 41.8211f, 1.15f, 1, 0) && func_1295(get_ped_defensive_area_position(&(uLocal_182[3]), true), 2257.128f, -771.5497f, 41.8211f, 0.75f, 0))
	{
		func_50(&(uLocal_182[3]));
		set_ped_sphere_defensive_area(&(uLocal_182[3]), func_181(1, 16), 1.5f, 1, 0, 0);
	}
}

bool func_1266(var uParam0, float fParam1)
{
	if ((((((!is_player_dead(player_id()) && is_player_playing(player_id())) && !is_player_free_aiming(player_id())) && !is_player_targetting_anything(player_id())) && !is_ped_aiming_from_cover(Global_35)) && !is_ped_shooting(Global_35)) && !is_ped_reloading(Global_35))
	{
		if (!func_26(uParam0))
		{
			func_222(uParam0);
		}
		else if (func_1279(uParam0) >= fParam1)
		{
			return true;
		}
		else if (((fParam1 > 15f && func_1755(Global_35)) && is_ped_human(get_ped_index_from_entity_index(func_1756(Global_35)))) && func_1279(uParam0) < (fParam1 - 15f))
		{
			func_491(uParam0, (fParam1 - 15f));
		}
	}
	else if (func_26(uParam0))
	{
		func_547(uParam0);
	}
	return false;
}

void func_1267(char[4] cParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!does_entity_exist(iParam1) || is_entity_dead(iParam1))
	{
		return;
	}
	func_1757(iParam1, bParam2);
	if (bParam3 && func_971(cParam0, iParam1, &uVar0))
	{
		if (bParam2)
		{
			if (!func_1758(cParam0, iParam1, 32))
			{
				func_1224(cParam0, iParam1, 32);
			}
		}
		else if (func_1758(cParam0, iParam1, 32))
		{
			func_1759(cParam0, iParam1, 32);
		}
	}
}

bool func_1268(int iParam0, bool bParam1)
{
	if (!is_vehicle_seat_free(iParam0, -1))
	{
		if (bParam1 && !is_entity_dead(get_ped_in_vehicle_seat(iParam0, -1)))
		{
			return false;
		}
	}
	if (!is_vehicle_seat_free(iParam0, 0))
	{
		if (bParam1 && !is_entity_dead(get_ped_in_vehicle_seat(iParam0, 0)))
		{
			return false;
		}
	}
	if (!is_vehicle_seat_free(iParam0, 1))
	{
		if (bParam1 && !is_entity_dead(get_ped_in_vehicle_seat(iParam0, 1)))
		{
			return false;
		}
	}
	if (!is_vehicle_seat_free(iParam0, 2))
	{
		if (bParam1 && !is_entity_dead(get_ped_in_vehicle_seat(iParam0, 2)))
		{
			return false;
		}
	}
	return true;
}

void func_1269(struct<2> Param0)
{
	if (func_786(Global_35, 1, 0, 0) == 834124286)
	{
		if (!func_258(Param0))
		{
			return;
		}
		iVar0 = 0;
		while (iVar0 < func_259(Param0))
		{
			iVar1 = func_460(Param0, iVar0);
			if (does_entity_exist(iVar1) && func_850(Global_35, iVar1, 1, 1) < 4.5f)
			{
				if (is_entity_a_ped(iVar1))
				{
					if (is_bullet_in_area(get_ped_bone_coords(iVar1, 21030, 0f, 0f, 0f), 0.6f, true))
					{
						apply_damage_to_ped(iVar1, 200, 1, 21030, Global_35);
						func_1760(iVar1, 21030);
						return;
					}
					if (is_bullet_in_area(get_ped_bone_coords(iVar1, 37873, 0f, 0f, 0f), 0.5f, true))
					{
						apply_damage_to_ped(iVar1, 200, 1, 37873, Global_35);
						func_1760(iVar1, 37873);
						return;
					}
					if (is_bullet_in_area(get_ped_bone_coords(iVar1, 46065, 0f, 0f, 0f), 0.5f, true))
					{
						apply_damage_to_ped(iVar1, 200, 1, 46065, Global_35);
						func_1760(iVar1, 46065);
						return;
					}
					if (is_bullet_in_area(get_ped_bone_coords(iVar1, 65478, 0f, 0f, 0f), 0.5f, true))
					{
						apply_damage_to_ped(iVar1, 200, 1, 65478, Global_35);
						func_1760(iVar1, 65478);
						return;
					}
					if (is_bullet_in_area(get_ped_bone_coords(iVar1, 6884, 0f, 0f, 0f), 0.5f, true))
					{
						apply_damage_to_ped(iVar1, 200, 1, 6884, Global_35);
						func_1760(iVar1, 6884);
						return;
					}
				}
			}
			iVar0++;
		}
	}
}

void func_1270(struct<2> Param0)
{
	if (func_258(Param0))
	{
		iVar0 = 0;
		while (iVar0 < func_259(Param0))
		{
			iVar1 = func_460(Param0, iVar0);
			if (does_entity_exist(iVar1))
			{
				if (!is_entity_dead(iVar1))
				{
					if (is_entity_a_ped(iVar1))
					{
						iVar2 = get_ped_index_from_entity_index(iVar1);
						if (func_165(iVar2, 0) && is_entity_on_screen(iVar2))
						{
							func_1761(iVar2, -1034486097, 1);
						}
						else
						{
							func_1762(iVar2, -1034486097, 1);
						}
					}
				}
			}
			iVar0++;
		}
	}
}

void func_1271()
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_165(&(Local_14.f_16[iVar0]), 0))
		{
			if (has_entity_been_damaged_by_entity(&(Local_14.f_16[iVar0]), Global_35, 1, 1))
			{
				func_1276(&(Local_14.f_16[iVar0]), 1);
			}
		}
		iVar0++;
	}
}

void func_1272()
{
	if (does_entity_exist(Global_35) && _0xa24c1d341c6e0d53(1, 1, 0))
	{
		func_1763(Local_14.f_14);
		func_1763(Local_14.f_29);
		func_1763(Local_14.f_22);
		func_1763(Local_14.f_53);
		func_1763(Local_14.f_64);
	}
}

void func_1273()
{
	if (!func_26(&uLocal_289))
	{
		fLocal_178 = 1.5f;
		func_27(&uLocal_289, 0);
	}
	if (func_1279(&uLocal_289) > fLocal_178)
	{
		iVar0 = get_random_int_in_range(0, 3);
		iVar1 = get_random_int_in_range(0, 6);
		Var2.f_8 = -1082130432;
		Var2 = { func_1764(1, iVar0) };
		Var2.f_3 = { func_1764(0, iVar1) };
		Var2.f_6 = -183018591;
		Var2.f_7 = 100f;
		Var2.f_13 = 1;
		Var2.f_16 = 1;
		_fire_single_bullet_ignore_entity_new(&Var2);
		fLocal_178 = get_random_float_in_range(0.8f, 2f);
		func_222(&uLocal_289);
	}
}

void func_1274()
{
	if (func_165(Global_35, 0))
	{
		if (!func_594(4))
		{
			func_874(4);
		}
		_0x1d77b47afa584e90(player_id(), -1, 1);
		func_891(100f, 0, 0, 1);
		func_1261(1);
		func_321(-1330115686, 120, 1, 0, 0, 752097756, 0, 0, 0, 0);
		func_321(1681219929, 50, 1, 0, 0, 752097756, 0, 0, 0, 0);
		_0x6b7a88a61b41e589("GANG1_Deadeye_Override");
		set_ped_reset_flag(player_ped_id(), 159, true);
		_0xbba140062b15a8ac(player_id());
		set_player_forced_aim(player_id(), true, iLocal_198, -1, false);
		_0x7d654266025e921b(-1392528840);
		disable_control_action(1, -1722177808, false);
		func_222(&uLocal_298);
	}
}

void func_1275()
{
	if (func_165(iLocal_198, 0))
	{
		if (is_ped_in_vehicle(iLocal_198, iLocal_201, false))
		{
			task_vehicle_shoot_at_ped(iLocal_198, Global_35, 20f);
		}
	}
}

void func_1276(int iParam0, bool bParam1)
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

void func_1277(int iParam0)
{
	if (func_165(&(uLocal_182[iParam0]), 0))
	{
		set_blocking_of_non_temporary_events(&(uLocal_182[iParam0]), true);
		set_combat_float(&(uLocal_182[iParam0]), 38, 60f);
		_0x8acc0506743a8a5c(&(uLocal_182[iParam0]), 1307780291, 2, -1082130432);
		task_combat_hated_targets_in_area(&(uLocal_182[iParam0]), func_181(2, 0), 150f, 0, 4);
		_0x1f44b7e283c09ede(&(uLocal_182[iParam0]), 0.75f, 10000);
	}
}

int func_1278(char[4] cParam0)
{
	return cParam0->f_599;
}

float func_1279(var uParam0)
{
	if (!func_26(uParam0))
	{
		return 0f;
	}
	if (func_492(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_544() - uParam0->f_1);
}

void func_1280(int iParam0)
{
	if (func_165(&(Local_14.f_16[iParam0]), 0))
	{
		iVar0 = _create_volume_cylinder(func_467(10, iParam0), 0f, 0f, 0f, 0.5f, 0.5f, 3f);
		_0xfc3db99c8144cd81(&(Local_14.f_16[iParam0]), iVar0, 1, 0, 0);
		_0x1f44b7e283c09ede(&(Local_14.f_16[iParam0]), 0.35f, 10000);
		open_sequence_task(&uLocal_336);
		task_go_to_coord_while_aiming_at_entity_using_combat_style(0, func_467(10, iParam0), Global_35, 3f, 1, 1056964608, 1082130432, 1, 1057, 0, -687903391, -1, 0);
		task_combat_hated_targets_around_ped(0, 100f, 33554432, 1);
		close_sequence_task(iVar333);
		task_perform_sequence(&(Local_14.f_16[iParam0]), iVar333);
	}
}

void func_1281(char[4] cParam0, struct<2> Param1, char* sParam3, char* sParam4, float fParam5)
{
	if (func_258(Param1))
	{
		iVar0 = 0;
		while (iVar0 < func_259(Param1))
		{
			iVar1 = func_460(Param1, iVar0);
			if (does_entity_exist(iVar1))
			{
				if (!is_entity_dead(iVar1))
				{
					if (is_entity_a_ped(iVar1))
					{
						iVar2 = get_ped_index_from_entity_index(iVar1);
						if (func_1292(sParam3))
						{
						}
						else
						{
							if (!is_entity_dead(iVar2) && !func_1292(sParam3))
							{
								func_145(cParam0, iVar2, sParam4, 0);
								func_1298(cParam0, sParam3, 0, fParam5, 0);
							}
							iVar0++;
						}
					}
				}
			}
		}
	}
}

void func_1282()
{
	if ((!func_165(&(uLocal_182[1]), 0) && !func_165(&(uLocal_182[0]), 0)) && !func_165(&(uLocal_182[2]), 0))
	{
		return;
	}
	set_entity_invincible(&(uLocal_182[0]), true);
	set_entity_invincible(&(uLocal_182[2]), true);
	func_1739(Local_14.f_14);
	func_1739(Local_14.f_22);
	clear_ped_tasks(&(uLocal_182[1]), 1, 0);
	_set_ped_crouch_movement(&(uLocal_182[1]), false, 0, false);
	set_ped_combat_attributes(&(uLocal_182[1]), 35, true);
	set_ped_combat_attributes(&(uLocal_182[1]), 12, true);
	set_ped_combat_attributes(&(uLocal_182[1]), 112, true);
	set_ped_combat_attributes(&(uLocal_182[1]), 30, true);
	set_ped_combat_attributes(&(uLocal_182[1]), 5, true);
	set_ped_combat_attributes(&(uLocal_182[1]), 50, false);
	_0xe01c8dc8edd28d31(&(uLocal_182[1]), 1);
	set_combat_float(&(uLocal_182[1]), 0, 0.8f);
	set_combat_float(&(uLocal_182[1]), 3, 0.2f);
	set_ped_combat_movement(&(uLocal_182[1]), 1);
	set_ped_sphere_defensive_area(&(uLocal_182[1]), 2244.392f, -775.4561f, 43.5922f, 1.7f, 1, 0, 0);
	set_ped_accuracy(&(uLocal_182[1]), 25);
	open_sequence_task(&uLocal_336);
	task_follow_waypoint_recording(0, uVar268, 0, 96, -1, 0, 1, -1);
	task_combat_hated_targets_in_area(0, func_181(2, 0), 150f, 0, 4);
	close_sequence_task(iVar334);
	task_perform_sequence(&(uLocal_182[1]), iVar334);
	clear_sequence_task(&uLocal_336);
	clear_ped_tasks(&(uLocal_182[3]), 1, 0);
	set_ped_combat_attributes(&(uLocal_182[3]), 35, true);
	set_ped_combat_attributes(&(uLocal_182[3]), 12, true);
	set_ped_combat_attributes(&(uLocal_182[3]), 112, true);
	set_ped_combat_attributes(&(uLocal_182[3]), 30, true);
	set_ped_combat_attributes(&(uLocal_182[3]), 5, true);
	set_ped_combat_attributes(&(uLocal_182[3]), 50, false);
	_0xe01c8dc8edd28d31(&(uLocal_182[3]), 1);
	set_combat_float(&(uLocal_182[3]), 1, 3f);
	set_combat_float(&(uLocal_182[3]), 3, 0.55f);
	set_ped_combat_movement(&(uLocal_182[3]), 1);
	set_ped_accuracy(&(uLocal_182[3]), 30);
	task_combat_hated_targets_in_area(&(uLocal_182[3]), func_181(2, 0), 150f, 0, 4);
	clear_sequence_task(&uLocal_336);
	clear_ped_tasks(&(uLocal_182[2]), 1, 0);
	_set_ped_crouch_movement(&(uLocal_182[2]), false, 0, false);
	set_ped_combat_attributes(&(uLocal_182[2]), 35, true);
	set_ped_combat_attributes(&(uLocal_182[2]), 12, true);
	set_ped_combat_attributes(&(uLocal_182[2]), 112, true);
	set_ped_combat_attributes(&(uLocal_182[2]), 30, true);
	set_ped_combat_attributes(&(uLocal_182[2]), 5, true);
	set_ped_combat_attributes(&(uLocal_182[2]), 50, false);
	set_ped_combat_attributes(&(uLocal_182[2]), 39, false);
	set_ped_combat_attributes(&(uLocal_182[2]), 42, false);
	set_ped_combat_attributes(&(uLocal_182[2]), 14, false);
	_0xe01c8dc8edd28d31(&(uLocal_182[2]), 1);
	func_50(&(uLocal_182[2]));
	set_ped_sphere_defensive_area(&(uLocal_182[2]), 2238.714f, -772.0353f, 42.2076f, 1.5f, 1, 0, 0);
	set_ped_combat_movement(&(uLocal_182[2]), 1);
	set_ped_accuracy(&(uLocal_182[2]), 65);
	task_combat_hated_targets_in_area(&(uLocal_182[2]), func_181(2, 0), 150f, 0, 4);
	clear_ped_tasks(&(uLocal_182[0]), 1, 0);
	_set_ped_crouch_movement(&(uLocal_182[0]), false, 0, false);
	set_ped_combat_attributes(&(uLocal_182[0]), 35, true);
	set_ped_combat_attributes(&(uLocal_182[0]), 12, true);
	set_ped_combat_attributes(&(uLocal_182[0]), 112, true);
	set_ped_combat_attributes(&(uLocal_182[0]), 30, true);
	set_ped_combat_attributes(&(uLocal_182[0]), 5, true);
	set_ped_combat_attributes(&(uLocal_182[0]), 50, false);
	set_ped_combat_attributes(&(uLocal_182[0]), 39, false);
	set_ped_combat_attributes(&(uLocal_182[0]), 42, false);
	set_ped_combat_attributes(&(uLocal_182[0]), 14, false);
	_0xe01c8dc8edd28d31(&(uLocal_182[0]), 1);
	func_50(&(uLocal_182[0]));
	set_ped_sphere_defensive_area(&(uLocal_182[0]), 2236.529f, -766.0679f, 42.5112f, 1.5f, 1, 0, 0);
	set_ped_combat_movement(&(uLocal_182[0]), 1);
	set_ped_accuracy(&(uLocal_182[0]), 85);
	task_combat_hated_targets_in_area(&(uLocal_182[0]), func_181(2, 0), 150f, 0, 64);
}

void func_1283()
{
	func_1765(Local_14.f_14);
	func_1276(&(Local_14.f_16[3]), 1);
	iVar0 = 0;
	while (iVar0 < 5)
	{
		func_1280(iVar0);
		iVar0++;
	}
}

int func_1284()
{
	iVar0 = 0;
	iVar0 = (iVar0 + func_1301(Local_14.f_29, 0));
	iVar0 = (iVar0 + func_1301(Local_14.f_14, 0));
	iVar0 = (iVar0 + func_1301(Local_14.f_22, 0));
	iVar0 = (iVar0 + func_1301(Local_14.f_53, 0));
	iVar0 = (iVar0 + func_1301(Local_14.f_64, 0));
	iVar0 = (iVar0 + func_1301(Local_14.f_1, 0));
	iVar0 = (iVar0 + func_1301(Local_14.f_8, 0));
	iVar0 = (iVar0 + func_1301(Local_14.f_42, 0));
	iVar0 = (iVar0 + func_1301(Local_14.f_47, 0));
	iVar0 = (iVar0 + func_1301(Local_14.f_33, 0));
	return iVar0;
}

void func_1285()
{
	remove_ped_defensive_area(&(uLocal_182[3]), false);
	if (!func_391(iLocal_168, 128))
	{
		if (!func_1238(Global_35, func_181(1, 27), 2.5f, 1, 1))
		{
			iVar0 = _create_volume_cylinder(func_181(1, 27), 0f, 0f, 0f, 1.5f, 1.5f, 3f);
		}
		else
		{
			iVar0 = _create_volume_cylinder(func_181(1, 26), 0f, 0f, 0f, 1.5f, 1.5f, 3f);
		}
		func_414(&iLocal_168, 128);
	}
	else
	{
		iVar0 = _create_volume_cylinder(func_181(1, 26), 0f, 0f, 0f, 1.5f, 1.5f, 3f);
		if (!func_1238(Global_35, func_181(1, 26), 2.5f, 1, 1))
		{
			iVar0 = _create_volume_cylinder(func_181(1, 26), 0f, 0f, 0f, 1.5f, 1.5f, 3f);
		}
		else
		{
			iVar0 = _create_volume_cylinder(func_181(1, 27), 0f, 0f, 0f, 1.5f, 1.5f, 3f);
		}
		func_1323(&iLocal_168, 128);
	}
	_0xfc3db99c8144cd81(&(uLocal_182[3]), iVar0, 1, 1, 0);
}

bool func_1286()
{
	if (!func_1766(-1, 1))
	{
		return false;
	}
	func_1461(Local_14.f_22);
	iVar0 = 0;
	while (iVar0 < iLocal_213)
	{
		if (!_does_volume_exist(&(iLocal_208[iVar0])))
		{
			iLocal_208[iVar0] = _create_volume_cylinder(func_467(3, iVar0), 0f, 0f, 0f, 0.5f, 0.5f, 3f);
		}
		if (func_165(&(Local_14.f_24[iVar0]), 0) && !func_1246(&(Local_14.f_24[iVar0]), 242628503))
		{
			clear_ped_tasks(&(Local_14.f_24[iVar0]), 1, 0);
			_0xfc3db99c8144cd81(&(Local_14.f_24[iVar0]), &(iLocal_208[iVar0]), 1, 0, 0);
			set_ped_config_flag(&(Local_14.f_24[iVar0]), 186, true);
			_0x18ff3110cf47115d(&(Local_14.f_24[iVar0]), 7, 0);
			set_entity_can_be_damaged_by_relationship_group(&(Local_14.f_24[iVar0]), false, -1538724068);
			set_ped_combat_movement(&(Local_14.f_24[iVar0]), 1);
			open_sequence_task(&uLocal_336);
			task_set_blocking_of_non_temporary_events(0, true);
			task_combat_hated_targets_in_area(0, func_181(2, 0), 100f, 0, 0);
			func_1767(&(Local_14.f_24[iVar0]), 0, 0);
			clear_sequence_task(&uLocal_336);
		}
		iVar0++;
	}
	set_ped_config_flag(&(Local_14.f_24[0]), 138, true);
	return true;
}

void func_1287()
{
	if (is_ped_in_vehicle(Global_35, iLocal_201, false) && !func_391(iLocal_168, -2147483648))
	{
		func_1289();
		func_414(&iLocal_168, -2147483648);
	}
}

void func_1288()
{
	func_1768(&(Local_14.f_16), -1034486097);
	func_1768(&(Local_14.f_24), -1034486097);
}

void func_1289()
{
	if (!func_391(iLocal_168, 8388608))
	{
		iVar0 = _create_volume_box_with_custom_name(2270.941f, -740.4673f, 42.15945f, 0f, 0f, 33f, 6f, 16f, 5f, "GNG1_GATLING_RESPONSE_AREA_1");
		iVar1 = 0;
		while (iVar1 < 5)
		{
			if (does_entity_exist(&(Local_14.f_16[iVar1])) && !is_entity_dead(&(Local_14.f_16[iVar1])))
			{
				func_1276(&(Local_14.f_16[iVar1]), 1);
				_0xfc3db99c8144cd81(&(Local_14.f_16[iVar1]), iVar0, 1, 0, 0);
			}
			iVar1++;
		}
		iVar2 = 0;
		while (iVar2 < 4)
		{
			if (does_entity_exist(&(Local_14.f_24[iVar2])) && !is_entity_dead(&(Local_14.f_24[iVar2])))
			{
				func_1276(&(Local_14.f_24[iVar2]), 1);
				_0xfc3db99c8144cd81(&(Local_14.f_24[iVar2]), iVar0, 1, 0, 0);
			}
			iVar2++;
		}
		func_414(&iLocal_168, 8388608);
	}
}

bool func_1290()
{
	if (!_does_volume_exist(iVar373))
	{
		iLocal_375 = _create_volume_box_with_custom_name(2245.095f, -752.7341f, 43.33357f, 0f, 0f, 37f, 13f, 14f, 8f, "GNG1_ENEMY_AREA_CHECK");
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (does_entity_exist(&(Local_14.f_16[iVar0])) && func_1769(&(Local_14.f_16[iVar0]), iVar373, 0, 1))
		{
			return true;
		}
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (does_entity_exist(&(Local_14.f_24[iVar1])) && func_1769(&(Local_14.f_24[iVar1]), iVar373, 0, 1))
		{
			return true;
		}
		iVar1++;
	}
	return false;
}

int func_1291(var uParam0)
{
	if (!func_26(uParam0))
	{
		return 0;
	}
	if (func_492(uParam0))
	{
		return round((uParam0->f_2 * 1000f));
	}
	return (func_493() - round((uParam0->f_1 * 1000f)));
}

int func_1292(char* sParam0)
{
	return func_1770(sParam0);
}

void func_1293(int iParam0)
{
	func_973(iParam0, 8, 1);
}

void func_1294(int iParam0, float fParam1)
{
	if (!is_entity_dead(iParam0))
	{
		if (is_waypoint_playback_going_on_for_ped(iParam0, 0))
		{
			waypoint_playback_override_speed(iParam0, fParam1, 0, -1082130432, 0);
		}
	}
}

bool func_1295(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
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

void func_1296(int iParam0, vector3 vParam1, bool bParam4)
{
	func_50(iParam0);
	set_ped_config_flag(iParam0, 252, false);
	if (iParam0 == &uLocal_182[3])
	{
		func_188(iVar325);
		iLocal_332 = _create_volume_cylinder(vParam1, 0f, 0f, 0f, 1.5f, 1.5f, 3f);
		_0xfc3db99c8144cd81(iParam0, iVar325, 1, 1, 0);
	}
	if (iParam0 == &uLocal_182[1])
	{
		func_188(iVar326);
		iLocal_333 = _create_volume_cylinder(vParam1, 0f, 0f, 0f, 1.5f, 1.5f, 3f);
		_0xfc3db99c8144cd81(iParam0, iVar326, 1, 1, 0);
	}
	set_ped_combat_movement(iParam0, 1);
	if (bParam4)
	{
		fVar0 = 0f;
	}
	else
	{
		fVar0 = 2f;
	}
	open_sequence_task(&uLocal_336);
	task_go_to_coord_and_aim_at_hated_entities_near_coord_using_combat_style(0, vParam1, vParam1, 1.4f, 1, 1056964608, 1082130432, 1, 0, 0, -687903391);
	task_combat_hated_targets_in_area(0, func_181(2, 0), 175f, 0, 4);
	close_sequence_task(iVar329);
	_task_perform_sequence_2(iParam0, iVar329, fVar0, fVar0);
	clear_sequence_task(&uLocal_336);
}

bool func_1297()
{
	if (!func_1771(-1, 1))
	{
		return false;
	}
	func_1461(Local_14.f_53);
	iVar0 = 0;
	while (iVar0 < iLocal_213)
	{
		if (!_does_volume_exist(&(iLocal_213[iVar0])))
		{
			iLocal_213[iVar0] = _create_volume_cylinder(func_467(17, iVar0), 0f, 0f, 0f, 0.5f, 0.5f, 3f);
		}
		if (func_165(&(Local_14.f_55[iVar0]), 0) && !func_1246(&(Local_14.f_55[iVar0]), 1120685857))
		{
			clear_ped_tasks(&(Local_14.f_55[iVar0]), 1, 0);
			if (_does_volume_exist(&(iLocal_213[iVar0])))
			{
				_0xfc3db99c8144cd81(&(Local_14.f_55[iVar0]), &(iLocal_213[iVar0]), 1, 0, 0);
			}
			set_ped_config_flag(&(Local_14.f_55[iVar0]), 186, true);
			set_blocking_of_non_temporary_events(&(Local_14.f_55[iVar0]), false);
			_0x18ff3110cf47115d(&(Local_14.f_55[iVar0]), 2, 0);
			_0x18ff3110cf47115d(&(Local_14.f_55[iVar0]), 7, 0);
			set_entity_can_be_damaged_by_relationship_group(&(Local_14.f_55[iVar0]), false, -1538724068);
			set_ped_accuracy(&(Local_14.f_55[iVar0]), 7);
			set_ped_combat_movement(&(Local_14.f_55[iVar0]), 1);
			task_combat_hated_targets_in_area(&(Local_14.f_55[iVar0]), 2258.534f, -740.0727f, 41.351f, 100f, 0, 0);
		}
		iVar0++;
	}
	return true;
}

bool func_1298(char[4] cParam0, char* sParam1, int iParam2, float fParam3, char* sParam4)
{
	if (iParam2 == 0 || iParam2 == 4)
	{
		if (func_1305() || func_215())
		{
			return false;
		}
	}
	else if (iParam2 == 7 && func_216())
	{
		return false;
	}
	else if (iParam2 == 6 && func_1772(sParam1))
	{
		func_547(&(cParam0->f_13106));
		return true;
	}
	if (iParam2 != 2 && iParam2 != 3)
	{
		func_27(&(cParam0->f_13106), 0);
	}
	if ((func_1773(&(cParam0->f_13106), fParam3) || fParam3 <= 0f) || (iParam2 == 2 && iParam2 == 3))
	{
		switch (iParam2)
		{
			case 0:
				if (!func_1223(cParam0, sParam1, 0))
				{
					return false;
				}
				break;
			case 1:
				func_1223(cParam0, sParam1, 0);
				break;
			case 2:
			case 3:
				bVar0 = iParam2 == 2;
				if (!is_string_null_or_empty(sParam4))
				{
					if (_0x1ecc76792f661cf5(sParam4))
					{
						pause_scripted_conversation(sParam4, bVar0, true, false, true);
						func_547(&(cParam0->f_13106));
						return false;
					}
					else if (!_0xd89504d9d7d5057d(sParam4) || !_0xf01c570e0a0a1e67(sParam4))
					{
						if (iParam2 == 3)
						{
							func_1223(cParam0, sParam1, 0);
						}
						else if (!func_1223(cParam0, sParam1, 0))
						{
							return false;
						}
					}
					if (_0xd89504d9d7d5057d(sParam4) && _0xf01c570e0a0a1e67(sParam4))
					{
						if (!func_26(&(cParam0->f_13106)) && func_1223(cParam0, sParam1, 0))
						{
							func_27(&(cParam0->f_13106), 0);
							return false;
						}
						if (func_26(&(cParam0->f_13106)))
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
					func_1223(cParam0, sParam1, 0);
				}
				else if (!func_1223(cParam0, sParam1, 0))
				{
					return false;
				}
				break;
			case 4:
			case 6:
				func_1258(cParam0, sParam1, 0, 7500, 0, -1082130432, 0, 0, -1, -1, 0);
				break;
			case 5:
				_0xdd1232b332cbb9e7(3, 1, 0);
				func_1258(cParam0, sParam1, 0, 7500, 1, -1082130432, 0, 0, -1, -1, 0);
				break;
			case 7:
				func_709(sParam1, 10000, 0, 0, 0, 1);
				break;
			case 8:
				func_113(1);
				func_709(sParam1, 10000, 0, 0, 0, 1);
				break;
			case 9:
				func_113(1);
				func_1774(sParam1, 0, 0, 1);
				break;
		}
		func_547(&(cParam0->f_13106));
		return true;
	}
	return false;
}

bool func_1299()
{
	if (!func_1775(-1, 1))
	{
		return false;
	}
	func_1461(Local_14.f_64);
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (func_165(&(Local_14.f_66[iVar0]), 0) && !func_1246(&(Local_14.f_66[iVar0]), 242628503))
		{
			clear_ped_tasks(&(Local_14.f_66[iVar0]), 1, 0);
			set_blocking_of_non_temporary_events(&(Local_14.f_66[iVar0]), false);
			_0xfc3db99c8144cd81(&(Local_14.f_66[iVar0]), Local_127.f_23, 0, 0, 0);
			set_ped_config_flag(&(Local_14.f_66[iVar0]), 186, false);
			_0x18ff3110cf47115d(&(Local_14.f_66[iVar0]), 7, 0);
			set_entity_can_be_damaged_by_relationship_group(&(Local_14.f_66[iVar0]), false, -1538724068);
			_0x9238a3d970bbb0a9(&(Local_14.f_66[iVar0]), 1963457635);
			_0x8acc0506743a8a5c(&(Local_14.f_66[iVar0]), 692651805, 1, -1082130432);
			_0x8b1e8e35a6e814ea(&(Local_14.f_66[iVar0]), -1447368064, -1082130432);
			_0x3ad8eff9703be657(&(Local_14.f_66[iVar0]), 0f);
			_0xc6170856e54557b2(&(Local_14.f_66[iVar0]), 0, 0f);
			_0xf948f4356f010f11(&(Local_14.f_66[iVar0]), 0, 0f);
			_0x8bb283a7888ad1ad(&(Local_14.f_66[iVar0]), 0, 0f);
			_0x12990818c1d35886(&(Local_14.f_66[iVar0]), 0, 0f);
			_0x9de63896b176ea94(&(Local_14.f_66[iVar0]), 1);
			set_ped_path_prefer_to_avoid_water(&(Local_14.f_66[iVar0]), false, 0f);
			set_ped_path_may_enter_water(&(Local_14.f_66[iVar0]), true);
			_0x8bb283a7888ad1ad(&(Local_14.f_66[iVar0]), 0, 1f);
			task_combat_hated_targets_around_ped(&(Local_14.f_66[iVar0]), 200f, 0, 0);
		}
		iVar0++;
	}
	return true;
}

bool func_1300(char* sParam0, int iParam1)
{
	Var0.f_1 = sParam0;
	return func_1776(_0x4e88a65968a55c78(&Var0, iParam1));
}

int func_1301(struct<2> Param0, int iParam2)
{
	iVar0 = 0;
	if (!func_258(Param0))
	{
		return iVar0;
	}
	iVar1 = 0;
	while (iVar1 < func_259(Param0))
	{
		iVar2 = func_460(Param0, iVar1);
		if (does_entity_exist(iVar2))
		{
			if (!is_entity_dead(iVar2))
			{
				if (is_entity_a_ped(iVar2))
				{
					iVar3 = get_ped_index_from_entity_index(iVar2);
					if (func_165(iVar3, iParam2))
					{
						iVar0++;
					}
				}
			}
		}
		iVar1++;
	}
	return iVar0;
}

void func_1302(int iParam0, vector3 vParam1, vector3 vParam4, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)
{
	_0xdf8a5855b9f9a97b(iParam0, 0, 0, vParam4, vParam1, iParam7, iParam8, iParam9, iParam10, iParam11, iParam12, iParam13, 0, 0);
}

bool func_1303()
{
	if (!_does_volume_exist(iVar374))
	{
		iLocal_376 = _create_volume_box_with_custom_name(2269.568f, -737.9839f, 42.66233f, 0f, 0f, 46f, 14f, 30f, 10f, "GNG1_ENEMY_AREA_CHECK");
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if ((does_entity_exist(&(Local_14.f_24[iVar0])) && !is_ped_dead_or_dying(&(Local_14.f_24[iVar0]), true)) && func_1769(&(Local_14.f_24[iVar0]), iVar374, 0, 1))
		{
			iVar3 = 1;
		}
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if ((does_entity_exist(&(Local_14.f_55[iVar1])) && !is_ped_dead_or_dying(&(Local_14.f_55[iVar1]), true)) && func_1769(&(Local_14.f_55[iVar1]), iVar374, 0, 1))
		{
			iVar4 = 1;
		}
		iVar1++;
	}
	iVar2 = 0;
	while (iVar2 < 6)
	{
		if ((does_entity_exist(&(Local_14.f_66[iVar2])) && !is_ped_dead_or_dying(&(Local_14.f_66[iVar2]), true)) && func_1769(&(Local_14.f_66[iVar2]), iVar374, 0, 1))
		{
			iVar5 = 1;
		}
		iVar2++;
	}
	if ((iVar3 && iVar4) && iVar5)
	{
		if (_does_volume_exist(iVar374))
		{
			_delete_volume(iVar374);
		}
		return true;
	}
	return false;
}

void func_1304(bool bParam0, bool bParam1)
{
	vVar1 = { func_181(12, 1) };
	if (bParam1 && func_165(&(uLocal_182[1]), 0))
	{
		clear_ped_tasks(&(uLocal_182[1]), 1, 0);
		set_blocking_of_non_temporary_events(&(uLocal_182[1]), false);
		func_50(&(uLocal_182[1]));
		open_sequence_task(&uLocal_336);
		task_set_blocking_of_non_temporary_events(0, true);
		task_follow_nav_mesh_to_coord(0, func_181(1, 16), 2f, -1, 0.25f, 0, 40000f);
		func_1302(0, func_181(1, 16), vVar1, -1, 1, 0, 0, 0, 0, 0);
		task_combat_hated_targets_around_ped(0, 175f, 0, 4);
		close_sequence_task(iVar332);
		iVar0 = _create_volume_cylinder(func_181(1, 16), 0f, 0f, 0f, 0.5f, 0.5f, 3f);
		_0xfc3db99c8144cd81(&(uLocal_182[1]), iVar0, 1, 1, 0);
		set_ped_combat_attributes(&(uLocal_182[1]), 50, false);
		set_ped_combat_attributes(&(uLocal_182[1]), 39, false);
		set_ped_combat_attributes(&(uLocal_182[1]), 42, false);
		set_ped_combat_attributes(&(uLocal_182[1]), 14, false);
		_task_perform_sequence_2(&(uLocal_182[1]), iVar332, 3f, 3f);
		clear_sequence_task(&uLocal_336);
	}
	if (bParam0 && func_165(&(uLocal_182[3]), 0))
	{
		clear_ped_tasks(&(uLocal_182[3]), 1, 0);
		set_blocking_of_non_temporary_events(&(uLocal_182[3]), false);
		remove_ped_defensive_area(&(uLocal_182[3]), false);
		open_sequence_task(&uLocal_336);
		task_set_blocking_of_non_temporary_events(0, true);
		task_follow_nav_mesh_to_coord(0, func_181(1, 17), 2f, -1, 0.25f, 0, 40000f);
		func_1302(0, func_181(1, 17), vVar1, -1, 1, 0, 0, 0, 0, 0);
		task_combat_hated_targets_around_ped(0, 175f, 0, 4);
		close_sequence_task(iVar332);
		iVar0 = _create_volume_cylinder(func_181(1, 17), 0f, 0f, 0f, 0.5f, 0.5f, 3f);
		_0xfc3db99c8144cd81(&(uLocal_182[3]), iVar0, 1, 1, 0);
		set_ped_combat_attributes(&(uLocal_182[3]), 50, false);
		set_ped_combat_attributes(&(uLocal_182[3]), 39, false);
		set_ped_combat_attributes(&(uLocal_182[3]), 42, false);
		set_ped_combat_attributes(&(uLocal_182[3]), 14, false);
		_task_perform_sequence_2(&(uLocal_182[3]), iVar332, 1.5f, 1.5f);
		clear_sequence_task(&uLocal_336);
	}
}

bool func_1305()
{
	return func_1777(1);
}

bool func_1306()
{
	if (!func_1778(-1, 1))
	{
		return false;
	}
	func_1461(Local_14.f_73);
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (func_165(&(Local_14.f_75[iVar0]), 0) && !func_1246(&(Local_14.f_75[iVar0]), 242628503))
		{
			clear_ped_tasks(&(Local_14.f_75[iVar0]), 1, 0);
			if (iVar0 == 0)
			{
				set_ped_sphere_defensive_area(&(Local_14.f_75[iVar0]), 2268.358f, -771.957f, 41.2913f, 3f, 1, 0, 0);
			}
			if (iVar0 == 1)
			{
				_0xb8de69d9473b7593(&(Local_14.f_75[iVar0]), 0);
				set_ped_sphere_defensive_area(&(Local_14.f_75[iVar0]), 2267.106f, -762.6555f, 41.4632f, 3f, 1, 0, 0);
			}
			set_ped_config_flag(&(Local_14.f_75[iVar0]), 186, true);
			_0x18ff3110cf47115d(&(Local_14.f_75[iVar0]), 7, 0);
			set_entity_can_be_damaged_by_relationship_group(&(Local_14.f_75[iVar0]), false, -1538724068);
			set_entity_only_damaged_by_player(&(Local_14.f_75[iVar0]), true);
			set_ped_accuracy(&(Local_14.f_75[iVar0]), 7);
			set_ped_combat_movement(&(Local_14.f_75[iVar0]), 2);
			set_ped_combat_attributes(&(Local_14.f_75[iVar0]), 50, true);
			open_sequence_task(&uLocal_336);
			task_set_blocking_of_non_temporary_events(0, true);
			task_combat_hated_targets_in_area(0, func_181(2, 0), 100f, 0, 0);
			func_1767(&(Local_14.f_75[iVar0]), 0, 0);
			clear_sequence_task(&uLocal_336);
		}
		iVar0++;
	}
	return true;
}

bool func_1307()
{
	if (!func_1779(-1, 1))
	{
		return false;
	}
	func_1461(Local_14.f_1);
	return true;
}

void func_1308()
{
	if (!bVar358)
	{
		iVar0 = 0;
		while (iVar0 < 6)
		{
			if (func_165(&(Local_14.f_66[iVar0]), 0) && !func_1246(&(Local_14.f_66[iVar0]), 242628503))
			{
				func_50(&(Local_14.f_66[iVar0]));
				_0xfc3db99c8144cd81(&(Local_14.f_66[iVar0]), Local_127.f_28, 0, 0, 0);
			}
			iVar0++;
		}
		iVar1 = 0;
		while (iVar1 < 4)
		{
			if (func_165(&(Local_14.f_55[iVar1]), 0) && !func_1246(&(Local_14.f_55[iVar1]), 242628503))
			{
				func_50(&(Local_14.f_55[iVar1]));
				_0xfc3db99c8144cd81(&(Local_14.f_55[iVar1]), Local_127.f_28, 0, 0, 0);
			}
			iVar1++;
		}
		func_1330(Local_14.f_53);
		func_1330(Local_14.f_64);
		func_1330(Local_14.f_73);
		iLocal_360 = 1;
	}
}

bool func_1309(int iParam0, int iParam1, bool bParam2)
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

void func_1310(int iParam0, int iParam1, int iParam2, float fParam3, int iParam4, int iParam5)
{
	if (!is_entity_dead(iParam0))
	{
		if (is_vehicle_driveable(iParam1, false, false))
		{
			if (is_vehicle_seat_free(iParam1, iParam2) && !is_ped_in_vehicle(iParam0, iParam1, false))
			{
				task_enter_vehicle(iParam0, iParam1, iParam4, iParam2, fParam3, iParam5, 0);
			}
		}
	}
}

void func_1311(int iParam0, bool bParam1)
{
	if (!is_itemset_valid(Local_14.f_90))
	{
		Local_14.f_90 = create_itemset(true);
	}
	if ((!does_entity_exist(&(Local_14.f_91[0])) && (iParam0 == -1 || iParam0 == 0)) && !(is_sphere_visible(2267.679f, -778.7394f, 41.3361f, 3f) && !func_1238(Global_35, 2249.541f, -768.5691f, 41.7889f, 9f, 1, 1)))
	{
		Local_14.f_91[0] = create_object(iLocal_126, 2267.315f, -778.7474f, 41.38228f, true, true, false, false, true);
		set_entity_rotation(&(Local_14.f_91[0]), 0f, 0f, 166.257f, 2, true);
		freeze_entity_position(&(Local_14.f_91[0]), bParam1);
	}
	func_1475(&(Local_14.f_91[0]), Local_14);
	func_1475(&(Local_14.f_91[0]), Local_14.f_90);
	if ((!does_entity_exist(&(Local_14.f_91[1])) && (iParam0 == -1 || iParam0 == 1)) && !(is_sphere_visible(2243.216f, -751.3793f, 41.8201f, 3f) && !func_1238(Global_35, 2249.541f, -768.5691f, 41.7889f, 9f, 1, 1)))
	{
		Local_14.f_91[1] = create_object(iLocal_126, 2243.216f, -751.3793f, 41.8201f, true, true, false, false, true);
		set_entity_rotation(&(Local_14.f_91[1]), 0f, 0f, -95.9375f, 2, true);
		freeze_entity_position(&(Local_14.f_91[1]), bParam1);
	}
	func_1475(&(Local_14.f_91[1]), Local_14);
	func_1475(&(Local_14.f_91[1]), Local_14.f_90);
	if ((!does_entity_exist(&(Local_14.f_91[2])) && (iParam0 == -1 || iParam0 == 2)) && !(is_sphere_visible(2262.481f, -764.8719f, 41.643f, 3f) && !func_1238(Global_35, 2249.541f, -768.5691f, 41.7889f, 9f, 1, 1)))
	{
		Local_14.f_91[2] = create_object(iLocal_126, 2262.327f, -764.6597f, 41.68568f, true, true, false, false, true);
		set_entity_rotation(&(Local_14.f_91[2]), 0f, 0f, 9.9901f, 2, true);
		freeze_entity_position(&(Local_14.f_91[2]), bParam1);
	}
	func_1475(&(Local_14.f_91[2]), Local_14);
	func_1475(&(Local_14.f_91[2]), Local_14.f_90);
	if ((!does_entity_exist(&(Local_14.f_91[3])) && (iParam0 == -1 || iParam0 == 3)) && !(is_sphere_visible(2260.3f, -754.7104f, 41.6102f, 3f) && !func_1238(Global_35, 2249.541f, -768.5691f, 41.7889f, 9f, 1, 1)))
	{
		Local_14.f_91[3] = create_object(iLocal_126, 2260.467f, -755.8096f, 41.63314f, true, true, false, false, true);
		set_entity_rotation(&(Local_14.f_91[3]), 0f, 0f, 86.3539f, 2, true);
		freeze_entity_position(&(Local_14.f_91[3]), bParam1);
	}
	func_1475(&(Local_14.f_91[3]), Local_14);
	func_1475(&(Local_14.f_91[3]), Local_14.f_90);
}

void func_1312()
{
	if (func_165(&(Local_14.f_3[0]), 0))
	{
		task_follow_waypoint_recording_at_offset(&(Local_14.f_3[0]), uVar266, -0.8f, 0, 8, -1, 0);
		force_ped_motion_state(&(Local_14.f_3[0]), -1115154469, false, 0, false);
	}
	if (func_165(&(Local_14.f_3[1]), 0))
	{
		task_follow_waypoint_recording_at_offset(&(Local_14.f_3[1]), uVar266, 0.2f, 0, 8, -1, 0);
		force_ped_motion_state(&(Local_14.f_3[1]), -1115154469, false, 0, false);
	}
	if (func_165(&(Local_14.f_3[2]), 0))
	{
		task_follow_waypoint_recording_at_offset(&(Local_14.f_3[2]), uVar266, -0.3f, 0, 8, -1, 0);
		force_ped_motion_state(&(Local_14.f_3[2]), -1115154469, false, 0, false);
	}
	if (func_165(&(Local_14.f_3[3]), 0))
	{
		task_follow_waypoint_recording_at_offset(&(Local_14.f_3[3]), uVar266, 0.5f, 0, 8, -1, 0);
		force_ped_motion_state(&(Local_14.f_3[3]), -1115154469, false, 0, false);
	}
}

void func_1313()
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (!_does_volume_exist(&(iLocal_218[iVar0])))
		{
			iLocal_218[iVar0] = _create_volume_cylinder(func_467(9, iVar0), 0f, 0f, 0f, 0.5f, 0.5f, 3f);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!_does_volume_exist(&(iLocal_224[iVar0])))
		{
			iLocal_224[iVar0] = _create_volume_cylinder(func_467(5, iVar0), 0f, 0f, 0f, 0.5f, 0.5f, 3f);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (!_does_volume_exist(&(iLocal_228[iVar0])))
		{
			iLocal_228[iVar0] = _create_volume_cylinder(func_467(8, iVar0), 0f, 0f, 0f, 0.5f, 0.5f, 3f);
		}
		iVar0++;
	}
}

void func_1314(int iParam0)
{
	func_984(iParam0, 4, 1);
}

void func_1315(var uParam0, char* sParam1, bool bParam2)
{
	if (is_string_null_or_empty(sParam1))
	{
		return;
	}
	if (func_1780(uParam0, sParam1))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (is_string_null_or_empty(uParam0->f_822[iVar0]))
		{
			if (!func_1781(uParam0, sParam1) || func_772(uParam0, 8388608))
			{
				StringCopy(uParam0->f_822[iVar0], sParam1, 64);
				if (!bParam2)
				{
					if (_does_anim_scene_exist(uParam0->f_804) && _is_anim_scene_loaded(uParam0->f_804, true, false))
					{
						if (_0xa9016536015de29d(uParam0->f_804, sParam1))
						{
							_0xdf7b5144e25cd3fe(uParam0->f_804, sParam1);
						}
					}
					else
					{
						func_743(uParam0, 4194304);
					}
				}
				else
				{
					func_743(uParam0, 4194304);
				}
				return;
			}
			else
			{
				return;
			}
		}
		iVar0++;
	}
}

bool func_1316(var uParam0, float fParam1)
{
	if ((!is_player_dead(player_id()) && is_player_playing(player_id())) && !is_ped_shooting(Global_35))
	{
		if (!func_26(uParam0))
		{
			func_222(uParam0);
		}
		else if (func_1279(uParam0) >= fParam1)
		{
			return true;
		}
	}
	else if (func_26(uParam0))
	{
		func_547(uParam0);
	}
	return false;
}

void func_1317(char[4] cParam0)
{
	switch (func_1278(cParam0))
	{
		case 0:
			func_1254(cParam0, "GNG1_KILL", -1082130432, 0, 0, -1, -1, 0);
			func_222(&uLocal_283);
			func_135(cParam0, 1);
			break;
		case 1:
			if (func_1279(&uLocal_283) > 10f && !func_1309(Global_35, iLocal_201, 0))
			{
				func_1223(cParam0, "GNG1_IG1_S", 0);
				func_1258(cParam0, "GNG1_KILL", 0, 7500, 0, -1082130432, 0, 0, -1, -1, 0);
				func_222(&uLocal_283);
				func_135(cParam0, 51);
			}
			if (func_1279(&uLocal_283) > 40f)
			{
				func_547(&uLocal_283);
				func_1258(cParam0, "GNG1_KILL", 0, 7500, 0, -1082130432, 0, 0, -1, -1, 0);
				func_135(cParam0, 51);
			}
			else if (func_1284() < 4)
			{
				func_547(&uLocal_283);
				func_135(cParam0, 51);
			}
			break;
		case 2:
			if ((!func_1305() && func_1782()) && func_1309(Global_35, iLocal_201, 0))
			{
				func_1223(cParam0, "GNG1_WAVE_LEFT", 0);
				func_135(cParam0, 5);
			}
			break;
		case 3:
			if (!func_1305() && func_1782())
			{
				func_1223(cParam0, "GNG1_WAVE_RIGHT", 0);
				func_135(cParam0, 6);
			}
			break;
		case 4:
			if (func_1298(cParam0, "GNG1_FLEE", 0, 0, 0))
			{
				func_135(cParam0, -1);
			}
			break;
		case 5:
			if (!func_1305())
			{
				func_1281(cParam0, Local_14.f_1, "GNG1_SHOUTS5", "GNG1_PINKERTON5", 0);
				func_1281(cParam0, Local_14.f_8, "GNG1_SHOUTS5", "GNG1_PINKERTON5", 0);
				func_135(cParam0, -1);
			}
			break;
		case 6:
			if (!func_1305())
			{
				func_1281(cParam0, Local_14.f_8, "GNG1_SHOUTS2", "GNG1_PINKERTON2", 0);
				func_1281(cParam0, Local_14.f_42, "GNG1_SHOUTS2", "GNG1_PINKERTON2", 0);
				func_1281(cParam0, Local_14.f_47, "GNG1_SHOUTS2", "GNG1_PINKERTON2", 0);
				func_1281(cParam0, Local_14.f_33, "GNG1_SHOUTS2", "GNG1_PINKERTON2", 0);
				func_135(cParam0, -1);
			}
			break;
	}
}

void func_1318()
{
	if (!func_26(&uLocal_292))
	{
		func_27(&uLocal_292, 0);
	}
	if (func_1279(&uLocal_292) > 4f)
	{
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if (func_165(&(Local_14.f_3[iVar0]), 0))
			{
				vVar4 = { get_entity_coords(&(Local_14.f_3[iVar0]), true, false) };
				if (get_distance_between_coords(vVar4, get_ped_defensive_area_position(&(Local_14.f_3[iVar0]), false), true) < 2.5f)
				{
					if ((((get_screen_coord_from_world_coord(vVar4, &fVar2, &fVar3) && fVar2 >= 0.4f) && fVar2 <= 0.6f) && fVar3 >= 0.4f) && fVar3 <= 0.6f)
					{
						remove_ped_defensive_area(&(Local_14.f_3[iVar0]), false);
						if (vVar4.y > -768.8478f)
						{
							iVar1 = get_random_int_in_range(3, 5);
							_0xfc3db99c8144cd81(&(Local_14.f_3[iVar0]), &(iLocal_218[iVar1]), 1, 0, 0);
						}
						else if (vVar4.x > 2261.964f)
						{
							iVar1 = get_random_int_in_range(0, 2);
							_0xfc3db99c8144cd81(&(Local_14.f_3[iVar0]), &(iLocal_218[iVar1]), 1, 0, 0);
						}
						else
						{
							iVar1 = get_random_int_in_range(0, 3);
							_0xfc3db99c8144cd81(&(Local_14.f_3[iVar0]), &(iLocal_218[iVar1]), 1, 0, 0);
						}
						func_222(&uLocal_292);
					}
					else
					{
						iVar0++;
					}
					iVar0 = 0;
					while (iVar0 < 3)
					{
						if (func_165(&(Local_14.f_49[iVar0]), 0))
						{
							vVar4 = { get_entity_coords(&(Local_14.f_49[iVar0]), true, false) };
							if (get_distance_between_coords(vVar4, get_ped_defensive_area_position(&(Local_14.f_49[iVar0]), false), true) < 2.5f)
							{
								if ((((get_screen_coord_from_world_coord(vVar4, &fVar2, &fVar3) && fVar2 >= 0.4f) && fVar2 <= 0.6f) && fVar3 >= 0.4f) && fVar3 <= 0.6f)
								{
									remove_ped_defensive_area(&(Local_14.f_49[iVar0]), false);
									if (vVar4.y > -768.8478f)
									{
										iVar1 = get_random_int_in_range(3, 5);
										_0xfc3db99c8144cd81(&(Local_14.f_49[iVar0]), &(iLocal_218[iVar1]), 1, 0, 0);
									}
									else if (vVar4.x > 2261.964f)
									{
										iVar1 = get_random_int_in_range(0, 3);
										_0xfc3db99c8144cd81(&(Local_14.f_49[iVar0]), &(iLocal_218[iVar1]), 1, 0, 0);
									}
									else
									{
										iVar1 = get_random_int_in_range(2, 5);
										_0xfc3db99c8144cd81(&(Local_14.f_49[iVar0]), &(iLocal_218[iVar1]), 1, 0, 0);
									}
									func_222(&uLocal_292);
								}
								else
								{
									iVar0++;
								}
								if ((func_1783(Local_14.f_1) == 0 && func_1783(Local_14.f_47) == 0) && func_1783(Local_14.f_33) == 0)
								{
									func_222(&uLocal_292);
								}
							}
						}
					}
				}
			}
		}
	}
}

void func_1319()
{
	if (get_screen_coord_from_world_coord(func_181(1, 17), &fVar0, &uVar1))
	{
		if ((!func_391(iLocal_168, 2097152) && fVar0 > 0.32f) && fVar0 < 0.67f)
		{
			clear_ped_tasks(&(uLocal_182[3]), 0, 0);
			_set_ped_crouch_movement(&(uLocal_182[3]), true, 0, false);
			if (!func_1246(&(uLocal_182[3]), -2117564886))
			{
				task_combat_hated_targets(&(uLocal_182[3]), -1f);
			}
			func_414(&iLocal_168, 2097152);
		}
		else if (func_391(iLocal_168, 2097152) && ((fVar0 <= 0.32f || fVar0 >= 0.67f) || !is_entity_on_screen(&(uLocal_182[3]))))
		{
			if (!func_1246(&(uLocal_182[3]), -2117564886))
			{
				task_combat_hated_targets(&(uLocal_182[3]), -1f);
			}
			func_1323(&iLocal_168, 2097152);
		}
	}
}

void func_1320()
{
	if (get_screen_coord_from_world_coord(func_181(1, 16), &fVar0, &uVar1))
	{
		if ((!func_391(iLocal_168, 262144) && fVar0 > 0.27f) && fVar0 < 0.73f)
		{
			clear_ped_tasks(&(uLocal_182[1]), 0, 0);
			_set_ped_crouch_movement(&(uLocal_182[1]), true, 0, false);
			if (!func_1246(&(uLocal_182[1]), -2117564886))
			{
				task_combat_hated_targets_around_ped(&(uLocal_182[1]), 100f, 0, 96);
			}
			func_414(&iLocal_168, 262144);
		}
		else if (func_391(iLocal_168, 262144) && ((fVar0 <= 0.27f || fVar0 >= 0.73f) || !is_entity_on_screen(&(uLocal_182[1]))))
		{
			if (!func_1246(&(uLocal_182[1]), -2117564886))
			{
				task_combat_hated_targets(&(uLocal_182[1]), -1f);
			}
			func_1323(&iLocal_168, 262144);
		}
	}
}

void func_1321(char[4] cParam0)
{
	if ((func_1229(cParam0) > 2 && !is_control_pressed(0, -128997553)) && is_control_just_pressed(0, -824104112))
	{
		if (!func_391(iLocal_168, 67108864))
		{
			func_414(&iLocal_168, 67108864);
		}
		else
		{
			func_1784(0);
			func_1323(&iLocal_168, 67108864);
		}
	}
	if (!is_control_pressed(0, -824104112) && func_391(iLocal_168, 67108864))
	{
		func_1323(&iLocal_168, 67108864);
	}
	if ((func_391(iLocal_168, 67108864) && !is_control_pressed(0, -128997553)) && _0xa81d24ae0af99a5e(player_id()) > 0f)
	{
		func_1784(1);
	}
}

void func_1322()
{
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_165(&(Local_14.f_3[iVar0]), 0) && !func_1246(&(Local_14.f_3[iVar0]), 242628503))
		{
			func_1276(&(Local_14.f_3[iVar0]), 1);
			clear_ped_tasks(&(Local_14.f_3[iVar0]), 1, 0);
			_0xfc3db99c8144cd81(&(Local_14.f_3[iVar0]), &(iLocal_218[iVar0]), 1, 0, 0);
			set_ped_combat_movement(&(Local_14.f_3[iVar0]), 1);
			set_ped_accuracy(&(Local_14.f_3[iVar0]), 7);
			set_blocking_of_non_temporary_events(&(Local_14.f_3[iVar0]), true);
			_0x8acc0506743a8a5c(&(Local_14.f_3[iVar0]), 1819659395, 2, -1082130432);
			open_sequence_task(&uLocal_336);
			task_set_blocking_of_non_temporary_events(0, true);
			task_go_to_coord_and_aim_at_hated_entities_near_coord(0, func_467(9, iVar0), func_1249(player_id()), 3f, true, 0.5f, 4f, true, 0, 0, -687903391);
			task_combat_hated_targets_around_ped(0, 175f, 0, 4);
			func_1767(&(Local_14.f_3[iVar0]), 0, 0);
			clear_sequence_task(&uLocal_336);
			force_ped_motion_state(&(Local_14.f_3[iVar0]), -1115154469, false, 1, true);
		}
		iVar0++;
	}
}

void func_1323(int iParam0, int iParam1)
{
	func_1785(iParam0, iParam1);
}

bool func_1324()
{
	if (!func_1786(-1, 1))
	{
		return false;
	}
	func_1461(Local_14.f_8);
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!_does_volume_exist(&(iLocal_224[iVar0])))
		{
		}
		if (func_165(&(Local_14.f_10[iVar0]), 0) && !func_1246(&(Local_14.f_10[iVar0]), 242628503))
		{
			func_1276(&(Local_14.f_10[iVar0]), 1);
			set_ped_config_flag(&(Local_14.f_10[iVar0]), 186, true);
			set_ped_flee_attributes(&(Local_14.f_10[iVar0]), 512, true);
			set_ped_combat_attributes(&(Local_14.f_10[iVar0]), 35, true);
			set_ped_accuracy(&(Local_14.f_10[iVar0]), 20);
			set_combat_float(&(Local_14.f_10[iVar0]), 1, 4f);
			set_combat_float(&(Local_14.f_10[iVar0]), 3, 0.75f);
			clear_ped_tasks(&(Local_14.f_10[iVar0]), 1, 0);
			_0xfc3db99c8144cd81(&(Local_14.f_10[iVar0]), &(iLocal_224[iVar0]), 1, 0, 0);
			set_ped_combat_movement(&(Local_14.f_10[iVar0]), 1);
			_0x18ff3110cf47115d(&(Local_14.f_10[iVar0]), 7, 0);
			open_sequence_task(&uLocal_336);
			task_set_blocking_of_non_temporary_events(0, true);
			task_combat_hated_targets_in_area(0, func_181(2, 0), 90f, 0, 0);
			func_1767(&(Local_14.f_10[iVar0]), 0, 0);
			clear_sequence_task(&uLocal_336);
		}
		iVar0++;
	}
	return true;
}

void func_1325(int iParam0)
{
	if (iParam0 == 1)
	{
		iVar0 = &Local_14.f_10[0];
	}
	else if (iParam0 == 2)
	{
		iVar0 = &Local_14.f_44[0];
	}
	else if (iParam0 == 3)
	{
		iVar0 = &Local_14.f_49[0];
	}
	else if (iParam0 == 4)
	{
		iVar0 = &Local_14.f_35[0];
	}
	clear_sequence_task(&uLocal_336);
	open_sequence_task(&uLocal_336);
	func_1787(0, iVar0, 200, 1, 1, 1);
	task_combat_hated_targets_around_ped(0, 150f, 0, 0);
	close_sequence_task(iVar333);
	if (!func_391(iLocal_168, 2097152))
	{
		task_perform_sequence(&(uLocal_182[3]), iVar333);
	}
	if (!func_391(iLocal_168, 262144))
	{
		task_perform_sequence(&(uLocal_182[1]), iVar333);
	}
	clear_sequence_task(&uLocal_336);
}

bool func_1326()
{
	if (!func_1788(-1, 1))
	{
		return false;
	}
	func_1461(Local_14.f_42);
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (_does_volume_exist(&(iLocal_224[iVar0])))
		{
			func_188(&(iLocal_224[iVar0]));
		}
		iLocal_224[iVar0] = _create_volume_cylinder(func_467(16, iVar0), 0f, 0f, 0f, 1f, 1f, 3f);
		if (func_165(&(Local_14.f_44[iVar0]), 0) && !func_1246(&(Local_14.f_44[iVar0]), 242628503))
		{
			func_1276(&(Local_14.f_44[iVar0]), 1);
			set_entity_can_be_damaged_by_relationship_group(&(Local_14.f_44[iVar0]), false, 1391706777);
			set_ped_config_flag(&(Local_14.f_44[iVar0]), 186, true);
			set_ped_flee_attributes(&(Local_14.f_44[iVar0]), 512, true);
			set_ped_combat_attributes(&(Local_14.f_44[iVar0]), 35, true);
			set_ped_accuracy(&(Local_14.f_44[iVar0]), 20);
			set_combat_float(&(Local_14.f_44[iVar0]), 1, 4f);
			set_combat_float(&(Local_14.f_44[iVar0]), 3, 0.75f);
			clear_ped_tasks(&(Local_14.f_44[iVar0]), 1, 0);
			set_ped_combat_movement(&(Local_14.f_44[iVar0]), 1);
			_0x18ff3110cf47115d(&(Local_14.f_44[iVar0]), 7, 0);
			_0x18ff3110cf47115d(&(Local_14.f_44[iVar0]), 2, 0);
			_0xfc3db99c8144cd81(&(Local_14.f_44[iVar0]), &(iLocal_224[iVar0]), 1, 0, 0);
			_0x1f44b7e283c09ede(&(Local_14.f_44[iVar0]), 0.35f, 10000);
			open_sequence_task(&uLocal_336);
			task_set_blocking_of_non_temporary_events(0, true);
			task_combat_hated_targets_in_area(0, func_181(2, 0), 90f, 0, 0);
			func_1767(&(Local_14.f_44[iVar0]), 0, 0);
			clear_sequence_task(&uLocal_336);
		}
		iVar0++;
	}
	return true;
}

bool func_1327()
{
	if (!func_1789(-1, 1))
	{
		return false;
	}
	func_1461(Local_14.f_47);
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (func_165(&(Local_14.f_49[iVar0]), 0) && !func_1246(&(Local_14.f_49[iVar0]), 242628503))
		{
			func_1276(&(Local_14.f_49[iVar0]), 1);
			set_ped_config_flag(&(Local_14.f_49[iVar0]), 186, true);
			set_ped_flee_attributes(&(Local_14.f_49[iVar0]), 512, true);
			set_ped_combat_attributes(&(Local_14.f_49[iVar0]), 35, true);
			set_ped_accuracy(&(Local_14.f_49[iVar0]), 25);
			set_combat_float(&(Local_14.f_49[iVar0]), 1, 4f);
			set_combat_float(&(Local_14.f_49[iVar0]), 3, 0.75f);
			clear_ped_tasks(&(Local_14.f_49[iVar0]), 1, 0);
			_0xfc3db99c8144cd81(&(Local_14.f_49[iVar0]), &(iLocal_218[iVar0]), 1, 0, 0);
			set_ped_combat_movement(&(Local_14.f_49[iVar0]), 1);
			_0x18ff3110cf47115d(&(Local_14.f_49[iVar0]), 7, 0);
			_0x18ff3110cf47115d(&(Local_14.f_49[iVar0]), 2, 0);
			open_sequence_task(&uLocal_336);
			task_set_blocking_of_non_temporary_events(0, true);
			task_combat_hated_targets_in_area(0, func_181(2, 0), 90f, 0, 0);
			func_1767(&(Local_14.f_49[iVar0]), 0, 0);
			clear_sequence_task(&uLocal_336);
		}
		iVar0++;
	}
	return true;
}

bool func_1328()
{
	if (!func_1790(-1, 1))
	{
		return false;
	}
	func_1461(Local_14.f_33);
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (func_165(&(Local_14.f_35[iVar0]), 0) && !func_1246(&(Local_14.f_35[iVar0]), 242628503))
		{
			func_1276(&(Local_14.f_35[iVar0]), 1);
			set_ped_config_flag(&(Local_14.f_35[iVar0]), 186, true);
			set_ped_flee_attributes(&(Local_14.f_35[iVar0]), 512, true);
			set_ped_combat_attributes(&(Local_14.f_35[iVar0]), 35, true);
			_0x18ff3110cf47115d(&(Local_14.f_35[iVar0]), 7, 0);
			_0x18ff3110cf47115d(&(Local_14.f_35[iVar0]), 2, 0);
			if (iVar0 == 0)
			{
				set_entity_can_be_damaged_by_relationship_group(&(Local_14.f_35[iVar0]), false, -1538724068);
			}
			if (iVar0 == 1)
			{
				set_entity_can_be_damaged_by_relationship_group(&(Local_14.f_35[iVar0]), false, -1538724068);
			}
			if (iVar0 == 2)
			{
				set_entity_can_be_damaged_by_relationship_group(&(Local_14.f_35[iVar0]), false, -1538724068);
			}
			set_ped_accuracy(&(Local_14.f_35[iVar0]), 25);
			set_combat_float(&(Local_14.f_35[iVar0]), 1, 4f);
			set_combat_float(&(Local_14.f_35[iVar0]), 3, 0.75f);
			clear_ped_tasks(&(Local_14.f_35[iVar0]), 1, 0);
			_0xfc3db99c8144cd81(&(Local_14.f_35[iVar0]), &(iLocal_228[iVar0]), 1, 0, 0);
			set_ped_combat_movement(&(Local_14.f_35[iVar0]), 1);
			open_sequence_task(&uLocal_336);
			task_set_blocking_of_non_temporary_events(0, true);
			task_combat_hated_targets_in_area(0, func_181(2, 0), 90f, 0, 0);
			func_1767(&(Local_14.f_35[iVar0]), 0, 0);
			clear_sequence_task(&uLocal_336);
		}
		iVar0++;
	}
	return true;
}

void func_1329()
{
	func_1765(Local_14.f_53);
	func_1765(Local_14.f_64);
	func_1765(Local_14.f_73);
	func_1765(Local_14.f_1);
	func_1765(Local_14.f_8);
	func_1765(Local_14.f_42);
	func_1765(Local_14.f_47);
	func_1765(Local_14.f_33);
	func_1463(Local_14.f_53, 1);
	func_1463(Local_14.f_64, 1);
	func_1463(Local_14.f_73, 1);
	func_1463(Local_14.f_1, 1);
	func_1463(Local_14.f_8, 1);
	func_1463(Local_14.f_42, 1);
	func_1463(Local_14.f_47, 1);
	func_1463(Local_14.f_33, 1);
	func_1791(Local_14.f_53, 0);
	func_1791(Local_14.f_64, 0);
	func_1791(Local_14.f_73, 0);
	func_1791(Local_14.f_42, 0);
	func_1791(Local_14.f_1, 0);
	func_1791(Local_14.f_8, 0);
	func_1791(Local_14.f_42, 0);
	func_1791(Local_14.f_47, 0);
	func_1791(Local_14.f_33, 0);
	vVar0 = { 2336.979f, -732.7156f, 42.0271f };
	func_1792(Local_14.f_53, vVar0);
	func_1792(Local_14.f_64, vVar0);
	func_1792(Local_14.f_73, vVar0);
	func_1792(Local_14.f_1, vVar0);
	func_1792(Local_14.f_8, vVar0);
	func_1792(Local_14.f_42, vVar0);
	func_1792(Local_14.f_47, vVar0);
	func_1792(Local_14.f_33, vVar0);
}

void func_1330(struct<2> Param0)
{
	if (!func_258(Param0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < func_259(Param0))
	{
		iVar1 = func_460(Param0, iVar0);
		if (does_entity_exist(iVar1) && !is_ped_dead_or_dying(iVar1, true))
		{
			func_1276(iVar1, 1);
			set_entity_only_damaged_by_player(iVar1, false);
		}
		iVar0++;
	}
}

bool func_1331()
{
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if ((does_entity_exist(&(Local_14.f_55[iVar0])) && !is_ped_dead_or_dying(&(Local_14.f_55[iVar0]), true)) && func_1238(&(Local_14.f_55[iVar0]), func_181(2, 0), 21f, 1, 1))
		{
			return true;
		}
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 6)
	{
		if ((does_entity_exist(&(Local_14.f_66[iVar1])) && !is_ped_dead_or_dying(&(Local_14.f_66[iVar1]), true)) && func_1238(&(Local_14.f_66[iVar1]), func_181(2, 0), 21f, 1, 1))
		{
			return true;
		}
		iVar1++;
	}
	iVar2 = 0;
	while (iVar2 < 4)
	{
		if ((does_entity_exist(&(Local_14.f_3[iVar2])) && !is_ped_dead_or_dying(&(Local_14.f_3[iVar2]), true)) && func_1238(&(Local_14.f_3[iVar2]), func_181(2, 0), 21f, 1, 1))
		{
			return true;
		}
		iVar2++;
	}
	iVar3 = 0;
	while (iVar3 < 3)
	{
		if ((does_entity_exist(&(Local_14.f_10[iVar3])) && !is_ped_dead_or_dying(&(Local_14.f_10[iVar3]), true)) && func_1238(&(Local_14.f_10[iVar3]), func_181(2, 0), 21f, 1, 1))
		{
			return true;
		}
		iVar3++;
	}
	iVar4 = 0;
	while (iVar4 < 6)
	{
		if ((does_entity_exist(&(Local_14.f_35[iVar4])) && !is_ped_dead_or_dying(&(Local_14.f_35[iVar4]), true)) && func_1238(&(Local_14.f_35[iVar4]), func_181(2, 0), 21f, 1, 1))
		{
			return true;
		}
		iVar4++;
	}
	return false;
}

void func_1332(int iParam0)
{
	disable_control_action(0, -236813012, false);
	disable_control_action(0, -1971208180, false);
	disable_control_action(0, -558006538, false);
	disable_control_action(0, 383204893, false);
	disable_control_action(0, -1644869882, false);
	disable_control_action(0, -1750532712, false);
	disable_control_action(0, 1228478939, false);
	disable_control_action(0, -1225530114, false);
	disable_control_action(0, 1210409198, false);
	disable_control_action(0, -674562833, false);
	disable_control_action(0, -197984200, false);
	disable_control_action(0, -238861894, false);
	disable_control_action(0, 1537201378, false);
	disable_control_action(0, 1847550875, false);
	disable_control_action(0, -248506778, false);
	disable_control_action(0, -17122892, false);
	disable_control_action(0, 1708280984, false);
	disable_control_action(0, -890654697, false);
	disable_control_action(0, 1644850270, false);
	disable_control_action(0, 585168871, false);
	disable_control_action(0, -1752838637, false);
	disable_control_action(0, 1226157066, false);
	disable_control_action(0, 1671483992, false);
	disable_control_action(0, 1915927219, false);
	disable_control_action(0, 139329429, false);
	disable_control_action(0, 827890385, false);
	disable_control_action(0, -1122746426, false);
	disable_control_action(0, -299367216, false);
	disable_control_action(0, 665666611, false);
	disable_control_action(0, 1589851512, false);
	disable_control_action(0, 1252087310, false);
	disable_control_action(0, -2074653976, false);
	disable_control_action(0, -271587657, false);
	disable_control_action(0, 598619298, false);
	disable_control_action(0, 1808336124, false);
	disable_control_action(0, -2003148177, false);
	disable_control_action(0, 211270343, false);
	disable_control_action(0, 1048377764, false);
	disable_control_action(0, -1437157082, false);
	disable_control_action(0, -1182422434, false);
	disable_control_action(0, 1652311577, false);
	disable_control_action(0, 1156046995, false);
	disable_control_action(0, -410363332, false);
	disable_control_action(0, 1184686705, false);
	disable_control_action(0, -101775574, false);
	disable_control_action(0, -1171447126, false);
	disable_control_action(0, -762559377, false);
	disable_control_action(0, -172830981, false);
	disable_control_action(0, -677830796, false);
	disable_control_action(0, 2102517284, false);
	disable_control_action(0, 1679904073, false);
	disable_control_action(0, -1538519165, false);
	disable_control_action(0, -41065305, false);
	disable_control_action(0, 1482593325, false);
	disable_control_action(0, 308778731, false);
	disable_control_action(0, 1002303471, false);
	disable_control_action(0, 1771341755, false);
	disable_control_action(0, 1459101765, false);
	disable_control_action(0, -2032700426, false);
	disable_control_action(0, 2120975890, false);
	disable_control_action(0, 1879610457, false);
	disable_control_action(0, 1033498310, false);
	disable_control_action(0, -1074497799, false);
	disable_control_action(0, 1623727326, false);
	disable_control_action(0, -922478227, false);
	disable_control_action(0, 1520437207, false);
	disable_control_action(0, -513041747, false);
	disable_control_action(0, -874806616, false);
	disable_control_action(0, -2128083607, false);
	disable_control_action(0, -128997553, false);
	disable_control_action(0, 130948705, false);
	disable_control_action(0, -640622144, false);
	disable_control_action(0, -1879280170, false);
	disable_control_action(0, -485697785, false);
	disable_control_action(0, 1938056823, false);
	disable_control_action(0, -822242784, false);
	disable_control_action(0, 1301263553, false);
	disable_control_action(0, -39308912, false);
	if (iParam0 == 1)
	{
		disable_control_action(0, -1450761377, false);
		disable_control_action(0, -771458680, false);
	}
}

void func_1333(char[4] cParam0, char[4] cParam1)
{
	func_1793(&(cParam0->f_7375), cParam1);
}

void func_1334(char[4] cParam0, char[4] cParam1)
{
	func_1794(&(cParam0->f_7375), cParam1);
	func_383(cParam0, 33554432);
}

bool func_1335(int iParam0, bool bParam1)
{
	if (!func_258(Local_14.f_60))
	{
		Local_14.f_60 = { func_417() };
	}
	if (func_1795(&(Local_14.f_60), 1))
	{
		return true;
	}
	if (!does_entity_exist(&(Local_14.f_62[0])) && (iParam0 == -1 || iParam0 == 0))
	{
		Local_14.f_62[0] = func_1796(737910671, 2242.157f, -768.0135f, 43.4243f, 359.9993f, 1, 1, 0, 1, 1, 1, 1, 0, 0, 0);
		set_ped_name_debug(&(Local_14.f_62[0]), "pinlaw");
		func_1797(Local_14.f_60, &(Local_14.f_62[0]));
		func_1475(&(Local_14.f_62[0]), Local_14);
		func_1260(&(Local_14.f_62[0]), -1569615261, 1, 0, 0, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
		_0x9587913b9e772d29(&(Local_14.f_62[0]), 0);
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
	func_1798(&(Local_14.f_60), 1);
	return true;
}

void func_1336(char[4] cParam0)
{
	func_151(cParam0, &(Local_14.f_62[0]), "S_M_M_PINLAW_01", 0, 0, 0, 0);
	set_ped_config_flag(&(Local_14.f_62[0]), 223, true);
}

int func_1337(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (func_1799(iParam0))
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < Global_1327590->f_19574)
	{
		if (func_1800(iVar0))
		{
		}
		else
		{
			Global_1327590->f_19574[iVar0] = iParam0;
			Global_1327590->f_19574[iVar0]->f_7 = iParam1;
			Global_1327590->f_19574[iVar0]->f_3 = iParam2;
			Global_1327590->f_19574[iVar0]->f_1 = iParam3;
			Global_1327590->f_19574[iVar0]->f_2 = iParam4;
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_1338(bool bParam0)
{
	if (bParam0)
	{
		if (does_entity_exist(iLocal_199))
		{
			set_entity_visible(iLocal_199, false);
			set_entity_collision(iLocal_199, false, false);
			freeze_entity_position(iLocal_199, true);
		}
		if (does_entity_exist(iLocal_201))
		{
			set_entity_visible(iLocal_201, false);
			set_entity_collision(iLocal_201, false, false);
			freeze_entity_position(iLocal_201, true);
		}
	}
	else
	{
		if (does_entity_exist(iLocal_199))
		{
			set_entity_visible(iLocal_199, true);
			set_entity_collision(iLocal_199, true, false);
			freeze_entity_position(iLocal_199, false);
		}
		if (does_entity_exist(iLocal_201))
		{
			set_entity_visible(iLocal_201, true);
			set_entity_collision(iLocal_201, true, false);
			freeze_entity_position(iLocal_201, false);
		}
	}
}

void func_1339(int iParam0)
{
	_0x51345ae20f22c261(player_id(), to_float(iParam0 * 14), 0, 0, 0);
}

void func_1340(var uParam0, int iParam1, int iParam2)
{
	if (func_82(32768))
	{
		return;
	}
	func_1801(&((*Global_1835011)[uParam0->f_607]->f_22), iParam1, iParam2);
}

void func_1341(int iParam0)
{
	Global_1905944->f_5694 = iParam0;
}

void func_1342()
{
	func_1802(8);
}

bool func_1343(int iParam0)
{
	if (-1829635046 == func_1803(81053684))
	{
		if (func_1804(iParam0))
		{
			return true;
		}
	}
	else if (func_1635(-525676072, iParam0))
	{
		if (func_1804(iParam0))
		{
			return true;
		}
	}
	return false;
}

void func_1344(int iParam0)
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

void func_1345(int iParam0)
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

void func_1346()
{
	iVar0 = func_1060(Global_35, 9, 1, 0);
	if (func_686(iVar0))
	{
		return;
	}
	iVar0 = func_1060(Global_35, 7, 1, 0);
	if (func_686(iVar0))
	{
		set_current_ped_weapon(Global_35, iVar0, true, 8, false, false);
	}
	iVar0 = func_1060(Global_35, 0, 1, 0);
	if (func_686(iVar0) && _is_weapon_two_handed(iVar0))
	{
		set_current_ped_weapon(Global_35, iVar0, true, 9, false, false);
		return;
	}
	iVar0 = func_1060(Global_35, 1, 1, 0);
	if (func_686(iVar0) && _is_weapon_two_handed(iVar0))
	{
		set_current_ped_weapon(Global_35, iVar0, true, 9, false, false);
		return;
	}
	iVar0 = func_1060(Global_35, 18, 1, 0);
	if (func_686(iVar0) && _is_weapon_two_handed(iVar0))
	{
		set_current_ped_weapon(Global_35, iVar0, true, 9, false, false);
		return;
	}
	iVar0 = func_1805();
	if (func_686(iVar0))
	{
		if (has_ped_got_weapon(Global_35, iVar0, 0, true))
		{
			func_1260(Global_35, iVar0, 1, 0, 9, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
		}
		else
		{
			set_current_ped_weapon(Global_35, iVar0, true, 9, false, false);
		}
		return;
	}
	iVar0 = func_1806(6291456, 0);
	if (func_686(iVar0))
	{
		if (!has_ped_got_weapon(Global_35, iVar0, 0, true))
		{
			func_1260(Global_35, iVar0, 1, 0, 9, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
		}
		else
		{
			set_current_ped_weapon(Global_35, iVar0, true, 9, false, false);
		}
	}
}

int func_1347()
{
	return Global_1900383->f_393;
}

int func_1348(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (func_1807(*uParam0, 0f, 0f, 0f))
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

void func_1349(int iParam0)
{
	Global_40.f_1095.f_3054.f_1 = iParam0;
}

void func_1350(int iParam0)
{
	Global_40.f_1095.f_3054 = iParam0;
}

void func_1351(vector3 vParam0)
{
	Global_40.f_1095.f_3054.f_77 = { vParam0 };
}

var func_1352()
{
	return &Global_1899515;
}

void func_1353(var uParam0)
{
	Global_40.f_1095.f_3054.f_2 = uParam0;
}

void func_1354(int iParam0)
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

bool func_1355()
{
	return (func_1808() || func_1809());
}

void func_1356(bool bParam0)
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
	func_1810(0f);
	Global_1935436->f_11 = 1;
	if (func_307())
	{
		set_ambient_voice_name(Global_35, "ARTHUR");
	}
	else
	{
		set_ambient_voice_name(Global_35, "JOHN_PLAYER");
	}
	if (animpostfx_is_running("PlayerDrunk01"))
	{
		func_1811();
	}
	if (is_gameplay_cam_shaking())
	{
		stop_gameplay_cam_shaking(false);
	}
}

Vector3 func_1357(var uParam0)
{
	return uParam0->f_865;
}

float func_1358(var uParam0)
{
	return uParam0->f_868;
}

float func_1359(struct<2> Param0, int iParam2, struct<2> Param3, var uParam5, int iParam6)
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

void func_1360(var uParam0, int iParam1, bool bParam2)
{
	uParam0->f_8 = (uParam0->f_8 - (uParam0->f_8 && iParam1));
	if (((iParam1 == 512 && bParam2) && _does_anim_scene_exist(uParam0->f_804)) && _0xef324e9550a394d5(uParam0->f_804))
	{
		_0x8a8208ae92bf87a5(uParam0->f_804);
	}
}

bool func_1361(var uParam0, int iParam1)
{
	return (uParam0->f_11 && iParam1) != 0;
}

bool func_1362(var uParam0, int iParam1)
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

void func_1363(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	iVar2 = func_1165(iParam1, 1);
	if (!bParam2 && iVar2 == 1367443060)
	{
		bParam3 = false;
	}
	if (iParam4 != 0)
	{
		if (iVar2 == 1108822547)
		{
			iVar1 = func_1812(iParam4);
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

bool func_1364(int iParam0, int iParam1)
{
	return ((Global_1946804->f_57[func_671(iParam0, 1)])->f_10 && iParam1) != 0;
}

bool func_1365(int iParam0, int iParam1)
{
	return (Global_1946804->f_57[iParam0]->f_9 && iParam1) != 0;
}

void func_1366(int iParam0, bool bParam1, bool bParam2)
{
	iVar0 = 10;
	if (func_1364(1108822547, 6))
	{
		if (bParam2)
		{
			func_1363(iParam0, iVar0, func_20() != -1, 0, 0);
			func_1367(1108822547, 1, 6);
		}
		else
		{
			return;
		}
	}
	else
	{
		_0xbc6df00d7a4a6819(iParam0, Global_1946804->f_2776.f_1, &(Global_1946804->f_2776.f_3[0]), &(Global_1946804->f_2776.f_3[1]), &(Global_1946804->f_2776.f_3[2]), Global_1946804->f_2776.f_8, Global_1946804->f_2776.f_9, Global_1946804->f_2776.f_10, Global_1946804->f_2776.f_11);
		func_1368(1108822547, 1, 6);
	}
	Global_1946804->f_857++;
	if (!bParam1)
	{
		return;
	}
	_update_ped_variation(iParam0, false, true, true, true, false);
}

void func_1367(int iParam0, int iParam1, int iParam2)
{
	(Global_1946804->f_57[func_671(iParam0, 1)])->f_10 = ((Global_1946804->f_57[func_671(iParam0, 1)])->f_10 || iParam1);
}

void func_1368(int iParam0, int iParam1, int iParam2)
{
	(Global_1946804->f_57[func_671(iParam0, 1)])->f_10 = ((Global_1946804->f_57[func_671(iParam0, 1)])->f_10 - ((Global_1946804->f_57[func_671(iParam0, 1)])->f_10 && iParam1));
}

bool func_1369(var uParam0)
{
	if (func_1813(&(uParam0->f_29), 62))
	{
		switch (func_1814())
		{
			case 1:
				if (!func_1813(&(uParam0->f_29), 6))
				{
					return false;
				}
				break;
			case 2:
				if (!func_1813(&(uParam0->f_29), 8))
				{
					return false;
				}
				break;
			case 4:
				if (!func_1813(&(uParam0->f_29), 16))
				{
					return false;
				}
				break;
			case 8:
				if (!func_1813(&(uParam0->f_29), 32))
				{
					if (func_1813(&(uParam0->f_29), 2))
					{
						if (func_693(func_288()) < 5)
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

int func_1370(var uParam0, int iParam1, int iParam2)
{
	iVar0 = 0;
	Var4.f_9 = -1591664384;
	bVar18 = func_1815(iParam1, 128);
	Var23.f_9 = -1591664384;
	if (func_1102("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_1103(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_686(Var4.f_4))
			{
			}
			else if (!_0x705be297eebdb95d(Var4.f_4))
			{
			}
			else if (iParam2 != 0 && Var4.f_4 == iParam2)
			{
			}
			else if ((!func_1815(iParam1, 512) && func_1631(Var4.f_4, &uVar19, &Var23, 1728382685)) && !Var23.f_21)
			{
			}
			else if (!bVar18 || _0xf29a186ed428b552(Global_35, Var4.f_4))
			{
				if (((_is_weapon_one_handed(Var4.f_4) && (!_is_weapon_shotgun(Var4.f_4) || func_1815(iParam1, 32))) && (!_is_weapon_pistol(Var4.f_4) || !func_1815(iParam1, 16777216))) && (!_is_weapon_revolver(Var4.f_4) || !func_1815(iParam1, 33554432)))
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
		func_1104(iVar1);
	}
	if (func_686(iVar0))
	{
	}
	else if (!func_1815(iParam1, 512))
	{
		iParam1 |= 512;
		return func_1370(uParam0, iParam1, iParam2);
	}
	else if (func_1815(iParam1, 256))
	{
		iVar0 = -1569615261;
	}
	return iVar0;
}

int func_1371(int iParam0)
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

void func_1372(var uParam0)
{
	if (!func_840(uParam0->f_1, 1))
	{
		_0x03ddbf2d73799f9e(*uParam0);
		func_807(&(uParam0->f_1), 1);
	}
}

void func_1373(var uParam0)
{
	if (!func_840(*uParam0, 1))
	{
		request_ptfx_asset();
		func_807(uParam0, 1);
	}
}

bool func_1374(var uParam0)
{
	if (func_840(uParam0->f_2, 1))
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

char* func_1375(int iParam0)
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

bool func_1376(int iParam0)
{
	return iParam0 != 0;
}

int func_1377(var uParam0, int iParam1)
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

int func_1378(var uParam0, char* sParam1)
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

void func_1379(var uParam0, int iParam1)
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

int func_1380(var uParam0)
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

void func_1381(var uParam0, int iParam1)
{
	uParam0->f_11 = (uParam0->f_11 || iParam1);
}

void func_1382(var uParam0, int iParam1)
{
	uParam0->f_11 = (uParam0->f_11 - (uParam0->f_11 && iParam1));
}

bool func_1383(var uParam0, int iParam1)
{
	uParam0->f_2495.f_2 = iParam1;
	return _datafile_get_data_node_index(&(uParam0->f_2495.f_1), &(uParam0->f_2495));
}

bool func_1384(var uParam0, int iParam1, int iParam2, char[4] cParam3, int iParam4, int iParam5)
{
	if (iParam2 == -1)
	{
		if (func_1385(uParam0, 2, iParam4))
		{
			*iParam5 = *iParam4;
		}
		if (func_1385(uParam0, 6, &(cParam3->f_11)))
		{
		}
		if (func_1385(uParam0, 9, &(cParam3->f_13)))
		{
		}
		if (func_1385(uParam0, 5, iParam4))
		{
			cParam3->f_9 = *iParam4;
		}
		return true;
	}
	if (func_1385(uParam0, 2, iParam4))
	{
		*iParam5 = *iParam4;
	}
	if (func_1385(uParam0, 6, &(cParam3->f_11)))
	{
	}
	if (func_1385(uParam0, 5, iParam4))
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
			if (func_1385(uParam0, 9, &(cParam3->f_13)))
			{
			}
			return true;
		}
		return false;
	}
	if (func_1385(uParam0, 9, &(cParam3->f_13)))
	{
	}
	return (iParam2 >= cParam3->f_11 && iParam2 <= cParam3->f_13);
}

bool func_1385(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2495.f_2 = iParam1;
	return _datafile_get_int(iParam2, &(uParam0->f_2495));
}

bool func_1386(var uParam0, int iParam1, char[4] cParam2)
{
	uParam0->f_2495.f_2 = iParam1;
	return _datafile_get_string(cParam2, &(uParam0->f_2495));
}

bool func_1387(var uParam0, char* sParam1, int iParam2)
{
	if (iParam2 == 0)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < iParam2)
	{
		if (((func_219((*uParam0)[iVar0], 1048576) && are_strings_equal((*uParam0)[iVar0], sParam1)) && (*uParam0)[iVar0]->f_9 == sParam1->f_9) && (*uParam0)[iVar0]->f_10 == sParam1->f_10)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_1388(char* sParam0)
{
	if (!is_audio_scene_active(sParam0))
	{
		start_audio_scene(sParam0);
	}
	func_490(sParam0, 1);
}

bool func_1389(var uParam0)
{
	if (func_840(uParam0->f_1, 2))
	{
		return true;
	}
	if (!func_840(uParam0->f_1, 1))
	{
		func_810(uParam0);
	}
	if (has_model_loaded(*uParam0))
	{
		func_807(&(uParam0->f_1), 2);
		return true;
	}
	return false;
}

bool func_1390(var uParam0)
{
	if (func_840(uParam0->f_3, 2))
	{
		return true;
	}
	if (!func_840(uParam0->f_3, 1))
	{
		func_812(uParam0);
	}
	switch (uParam0->f_1)
	{
		case 2:
			if (get_is_waypoint_recording_loaded(*uParam0))
			{
				func_807(&(uParam0->f_3), 2);
				return true;
			}
			break;
		case 1:
			if (has_vehicle_recording_been_loaded(uParam0->f_2, *uParam0))
			{
				func_807(&(uParam0->f_3), 2);
				return true;
			}
			break;
	}
	return false;
}

bool func_1391(var uParam0)
{
	if (func_840(uParam0->f_1, 2))
	{
		return true;
	}
	if (!func_840(uParam0->f_1, 1))
	{
		func_814(uParam0);
	}
	if (has_anim_dict_loaded(*uParam0))
	{
		func_807(&(uParam0->f_1), 2);
		return true;
	}
	return false;
}

bool func_1392(var uParam0, int iParam1)
{
	if (func_840(uParam0->f_1, 2))
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
	if (!func_840(uParam0->f_1, 1))
	{
		func_821(uParam0, iParam1);
	}
	if (_0x23e33cb9f4a3f547(iParam1, *uParam0))
	{
		func_807(&(uParam0->f_1), 2);
		return true;
	}
	return false;
}

bool func_1393(var uParam0)
{
	if (func_840(uParam0->f_2, 2))
	{
		return true;
	}
	if (!func_840(uParam0->f_2, 1))
	{
		func_823(uParam0);
	}
	if (_has_propset_loaded(*uParam0))
	{
		func_807(&(uParam0->f_2), 2);
		return true;
	}
	return false;
}

bool func_1394(var uParam0)
{
	if (func_840(uParam0->f_3, 2))
	{
		return true;
	}
	if (!func_840(uParam0->f_3, 1))
	{
		func_825(uParam0);
	}
	if (_0xff07cf465f48b830(*uParam0))
	{
		func_807(&(uParam0->f_3), 2);
		return true;
	}
	return false;
}

bool func_1395(var uParam0)
{
	if (func_840(uParam0->f_1, 2))
	{
		return true;
	}
	if (!func_840(uParam0->f_1, 1))
	{
		func_827(uParam0);
	}
	if (request_script_audio_bank(*uParam0))
	{
		func_807(&(uParam0->f_1), 2);
		return true;
	}
	return false;
}

bool func_1396(var uParam0)
{
	if (func_840(uParam0->f_1, 2))
	{
		return true;
	}
	if (!func_840(uParam0->f_1, 1))
	{
		func_829(uParam0);
	}
	if (_is_imap_active(*uParam0))
	{
		func_807(&(uParam0->f_1), 2);
		return true;
	}
	return false;
}

bool func_1397(var uParam0)
{
	if (func_840(uParam0->f_2, 2))
	{
		return true;
	}
	if (!func_840(uParam0->f_2, 1))
	{
		func_831(uParam0);
	}
	if (_0xe368e8422c860ba7(*uParam0, uParam0->f_1, -2))
	{
		func_807(&(uParam0->f_2), 2);
		return true;
	}
	return false;
}

bool func_1398(var uParam0)
{
	if (func_840(uParam0->f_1, 2))
	{
		return true;
	}
	if (!func_840(uParam0->f_1, 1))
	{
		func_833(uParam0);
	}
	if (_0x2c04d89a0fb4e244(*uParam0))
	{
		func_807(&(uParam0->f_1), 2);
		return true;
	}
	return false;
}

int func_1399(int iParam0)
{
	if (func_509(iParam0))
	{
		return Global_1360165[iParam0];
	}
	return 0;
}

int func_1400(int iParam0, bool bParam1, int iParam2, var uParam3, var uParam4, var uParam5, float fParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, int iParam17, bool bParam18, bool bParam19, bool bParam20, bool bParam21, bool bParam22, bool bParam23, bool bParam24)
{
	if (!func_509(iParam0))
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
			if (func_979(iParam0, 2, 1))
			{
				func_977(iParam0, 2, 1);
			}
			if (func_464(iParam0, 16, 1))
			{
				if (*Global_1360165)[iParam0]->f_129 != get_id_of_this_thread()
				{
					if (bParam14)
					{
						func_975(iParam0, 29, 1);
						return 0;
					}
					if (is_thread_active((*Global_1360165)[iParam0]->f_129, false))
					{
					}
					else
					{
						func_515(iParam0, 0, 0, 1, -1082130432, 1, 1, 0, 0, 0, 0);
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
						func_1816(iParam0, 1, "Stealing, but companion is a ragdoll");
					}
					else
					{
						return 0;
					}
				}
				func_975(iParam0, 44, 1);
				(*Global_1360165)[iParam0]->f_1156 = get_id_of_this_thread();
				func_1817(iParam0, 2);
				return 0;
			}
			else if (bParam1)
			{
				func_975(iParam0, 44, 1);
				(*Global_1360165)[iParam0]->f_1156 = get_id_of_this_thread();
				func_1817(iParam0, 1);
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
			if (!func_979(iParam0, 44, 0))
			{
				func_975(iParam0, 44, 0);
			}
			if (func_1818(iParam0, vVar0, iParam13, 0, 1, iParam17, bParam20, -1, 1, 0))
			{
				func_1817(iParam0, 2);
			}
			break;
		case 2:
			set_ped_config_flag(Global_1360165[iParam0], 171, true);
			if (!_0x88ad6cc10d8d35b2(Global_1360165[iParam0]))
			{
				set_entity_as_mission_entity(Global_1360165[iParam0], true, true);
			}
			func_977(iParam0, 18, 1);
			set_entity_visible(Global_1360165[iParam0], true);
			set_ped_relationship_group_hash(Global_1360165[iParam0], 1030835986);
			_0xf74e134f40192884(Global_1360165[iParam0], 0);
			_0x6759bee6762e140b((*Global_1360165)[iParam0]->f_1);
			set_ped_config_flag(Global_1360165[iParam0], 130, false);
			func_981(iParam0, bParam9, 1, 0);
			if (bParam22)
			{
				func_1819(iParam0, 0, 0, 1);
			}
			func_977(iParam0, 33, 1);
			func_977(iParam0, 34, 1);
			func_977(iParam0, 29, 1);
			if (!func_396(vVar0) && bParam7)
			{
				func_1817(iParam0, 3);
			}
			else if (iParam13 != 0)
			{
				func_1817(iParam0, 4);
			}
			else
			{
				func_1817(iParam0, 5);
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
						func_1816(iParam0, 1, "Teleporting a stolen companion using a scenario.");
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
				func_851(Global_1360165[iParam0], vVar0, fParam6, 2, 1073741824);
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
				func_1817(iParam0, 4);
			}
			else
			{
				func_1817(iParam0, 5);
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
				if (func_1820(iParam0, iParam13))
				{
					if (_0xa0bc8faed8cfeb3c(Global_1360165[iParam0]))
					{
						func_1821(iParam0, iParam13, 0);
						func_1822(iParam0, Global_1360165[iParam0], iParam13, 1);
						if (func_979(iParam0, 25, 0))
						{
							func_977(iParam0, 25, 0);
						}
						func_975(iParam0, 66, 0);
						func_1817(iParam0, 5);
						(*Global_1360165)[iParam0]->f_63 = iParam13;
					}
					else
					{
						return 0;
					}
				}
				else
				{
					func_1817(iParam0, 5);
				}
				func_975(iParam0, 28, 1);
			}
			else
			{
				func_1817(iParam0, 5);
			}
			break;
		case 5:
			if (_0xa0bc8faed8cfeb3c(Global_1360165[iParam0]))
			{
				func_1817(iParam0, 6);
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
					func_1823(iParam0);
				}
				if (bParam21)
				{
					clear_ped_secondary_task(Global_1360165[iParam0]);
					func_1824(Global_1360165[iParam0], 1);
				}
			}
			func_1817(iParam0, 7);
		case 7:
			func_981(iParam0, bParam9, bParam15, 0);
			func_973(iParam0, 4, bParam11);
			func_976(iParam0);
			if (bParam20)
			{
				if (func_1825(Global_1360165[iParam0]))
				{
				}
			}
			func_1826(iParam0, Global_1360165[iParam0]);
			if (!bParam23 && !get_ped_config_flag(Global_1360165[iParam0], 503, true))
			{
				set_ped_config_flag(Global_1360165[iParam0], 503, true);
			}
			Global_40.f_4942[iParam0]->f_4 = Global_40.f_4942[iParam0]->f_3;
			func_1817(iParam0, 0);
			func_434(iParam0, 16, 1);
			func_977(iParam0, 44, 1);
			(*Global_1360165)[iParam0]->f_1156 = 0;
			(*Global_1360165)[iParam0]->f_129 = get_id_of_this_thread();
			return Global_1360165[iParam0];
	}
	return 0;
}

void func_1401(char[4] cParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	func_1827(iParam1, bParam3, bParam4, bParam6);
	if (!func_120(cParam0, 512))
	{
		if (func_120(cParam0, 4) && bParam4)
		{
			vVar0 = { get_offset_from_entity_in_world_coords(Global_35, 5f, 0f, 0f) };
			func_1828(iParam1, vVar0);
		}
	}
	else
	{
		Stack.Push(cParam0);
		Call_Loc(cParam0->f_10781);
	}
	func_1829(cParam0, iParam1, iParam2, func_327(iParam2, 0));
	func_1224(cParam0, iParam1, 512);
	if (bParam5)
	{
		func_1224(cParam0, iParam1, 128);
	}
	else
	{
		func_1759(cParam0, iParam1, 128);
	}
	switch (iParam2)
	{
		case 1:
		case default:
	}
}

void func_1402(int iParam0)
{
	if (!func_509(iParam0))
	{
		return;
	}
	iVar0 = func_546(iParam0);
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	_0x406ccf555b04fad3(iVar0, 0, 0f);
}

void func_1403(char[4] cParam0, vector3 vParam1, float fParam4)
{
	cParam0->f_5417 = { vParam1 };
	cParam0->f_5420 = fParam4;
}

bool func_1404(int iParam0)
{
	iParam0 = func_269(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (func_1413(iParam0) == 0)
	{
		return false;
	}
	return true;
}

void func_1405(int iParam0)
{
	iParam0 = func_269(iParam0);
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
	func_1830(&Var0);
	func_1831(iParam0, Var0);
	func_1832(&(Global_40.f_1095.f_1[iParam0]->f_15));
	func_1833(&(Global_40.f_1095.f_1[iParam0]->f_298));
	func_1834(&(Global_40.f_1095.f_1[iParam0]->f_356));
	func_1835(&(Global_40.f_1095.f_1[iParam0]->f_372));
	iVar2 = 0;
	while (iVar2 < 2)
	{
		func_1836(iVar2, Global_40.f_1095.f_1[iParam0]->f_398[iVar2]);
		iVar2++;
	}
	iVar3 = 0;
	while (iVar3 < 3)
	{
		func_1837(iVar3, Global_40.f_1095.f_1[iParam0]->f_407[iVar3]);
		iVar3++;
	}
	func_1838(&(Global_40.f_1095.f_1[iParam0]->f_420));
	func_1839(&(Global_40.f_1095.f_1[iParam0]->f_422));
	func_1840(&(Global_40.f_1095.f_1[iParam0]->f_425));
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

int func_1406(vector3 vParam0)
{
	return func_1841(_get_map_zone_at_coords(vParam0, 10));
}

bool func_1407(int iParam0)
{
	iParam0 = func_269(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (!func_524(iParam0))
	{
		return false;
	}
	iVar0 = func_217(iParam0);
	if (is_entity_dead(iVar0) || is_ped_injured(iVar0))
	{
		return true;
	}
	return false;
}

void func_1408(int iParam0, int iParam1)
{
	iVar0 = get_player_index();
	if (is_player_dead(iVar0))
	{
	}
	func_518(iParam0);
	func_518(iParam0);
	func_1842(iParam0, iParam1);
	func_1843(iParam0, iParam1);
	func_1844(iParam0, iParam1);
	iVar1 = func_217(iParam0);
	if (does_entity_exist(iVar1))
	{
		if (iParam0 == 0 || iParam0 == 1)
		{
			func_1845(iVar1);
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
	iVar3 = func_217(iParam1);
	if (does_entity_exist(iVar3))
	{
		if (iParam1 == 0 || iParam1 == 1)
		{
			func_1845(iVar3);
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
	func_271();
}

bool func_1409()
{
	iVar0 = func_1347();
	if (does_entity_exist(iVar0))
	{
		return true;
	}
	return false;
}

void func_1410()
{
	iVar0 = func_1347();
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	if (!_0x88ad6cc10d8d35b2(iVar0))
	{
		set_entity_as_mission_entity(iVar0, true, true);
	}
	delete_object(&iVar0);
	func_1846(0);
}

int func_1411(int iParam0)
{
	iParam0 = func_269(iParam0);
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

int func_1412(int iParam0)
{
	iParam0 = func_269(iParam0);
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

int func_1413(int iParam0)
{
	iParam0 = func_269(iParam0);
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

void func_1414(int iParam0)
{
	iParam0 = func_269(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_1687(&iVar0, &iVar1, &iVar2);
	func_1688(iParam0, iVar0);
	func_1689(iParam0, iVar1);
	func_1690(iParam0, iVar2);
	func_1847(iParam0, 1);
	func_1848(iParam0, 1);
}

void func_1415(int iParam0)
{
	iParam0 = func_269(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_1738(iParam0, 1);
}

void func_1416(int iParam0, vector3 vParam1, var uParam4)
{
	iParam0 = func_269(iParam0);
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

bool func_1417(int iParam0)
{
	iParam0 = func_269(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	return func_989(iParam0, 1);
}

struct<2> func_1418(int iParam0)
{
	iParam0 = func_269(iParam0);
	if (iParam0 == -1)
	{
		return Var0;
	}
	if (iParam0 >= 7)
	{
		return Var0;
	}
	if (!func_1849(iParam0, &uVar2))
	{
	}
	if (!func_1850(iParam0, &uVar3))
	{
	}
	Var0 = uVar2;
	Var0.f_1 = uVar3;
	return Var0;
}

struct<6> func_1419()
{
	if (func_1851(-997150586, &uVar6))
	{
		Var0.f_4 = uVar6;
	}
	if (func_1851(-1189569496, &uVar7))
	{
		Var0 = uVar7;
	}
	if (func_1851(325139909, &uVar8))
	{
		Var0.f_2 = uVar8;
	}
	if (func_1851(1310070322, &uVar9))
	{
		Var0.f_5 = uVar9;
	}
	if (func_1851(986998820, &uVar10))
	{
		Var0.f_3 = uVar10;
	}
	if (func_1851(-415648720, &uVar11))
	{
		Var0.f_1 = uVar11;
	}
	return Var0;
}

void func_1420(int iParam0, var uParam1, var uParam2, int iParam3)
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
	func_1852(iParam0);
	func_1853(iParam0, uParam1);
	func_1854(iParam0);
	func_1855(iParam0, uParam2);
	if (iParam3 != 0)
	{
		func_1856(iParam0, iParam3, 0);
	}
	_update_ped_variation(iParam0, false, true, true, true, true);
}

void func_1421(int iParam0)
{
	iParam0 = func_269(iParam0);
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

bool func_1422(int iParam0)
{
	if (iParam0 == 0)
	{
		return true;
	}
	request_model(iParam0, false);
	return has_model_loaded(iParam0);
}

int func_1423(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)
{
	iVar0 = create_ped(iParam0, vParam1, fParam4, bParam6, bParam7, false, false);
	if (bParam5)
	{
		_set_random_outfit_variation(iVar0, true);
	}
	return iVar0;
}

int func_1424(var uParam0)
{
	return uParam0;
}

bool func_1425(int iParam0)
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

int func_1426(var uParam0)
{
	return *uParam0;
}

bool func_1427(int iParam0, var uParam1, int iParam2)
{
	return false;
	if (iParam0 <= -1 || iParam0 > 80)
	{
		return false;
	}
	*uParam1 = { func_1857(iParam0) };
	if (func_1807(*uParam1, 0f, 0f, 0f))
	{
		return false;
	}
	if (!func_852(iParam0, iParam2, &iVar0))
	{
		return false;
	}
	if (func_1858(*iParam2, iVar0))
	{
		return false;
	}
	return true;
}

void func_1428(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_1429(var uParam0)
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

bool func_1430(var uParam0)
{
	switch (func_1859(uParam0))
	{
		case 0:
			uParam0->f_24 = func_288();
			iVar4 = func_288();
			func_1170(&iVar4, uParam0->f_6);
			func_1171(&iVar4, 0);
			func_1172(&iVar4, 0);
			if (func_1008(uParam0->f_24, iVar4, 1))
			{
				func_337(&iVar4, 0, 0, 0, 1, 0, 0, 0);
			}
			func_1860(uParam0->f_24, iVar4, &iVar0, &iVar1, &iVar2, &uVar3, &uVar3, &uVar3);
			uParam0->f_7 = ((iVar0 + iVar1 * 60) + iVar2 * 3600);
			func_1861(uParam0, 1);
			break;
		case 1:
			fVar5 = func_1862(uParam0, -1082130432);
			if (fVar5 >= 0.5f)
			{
				func_1861(uParam0, 2);
			}
			break;
		case 2:
			fVar5 = func_1862(uParam0, -1082130432);
			if (fVar5 >= 0.99f || fVar5 == -1f)
			{
				iVar4 = uParam0->f_24;
				func_337(&iVar4, uParam0->f_7, 0, 0, 0, 0, 0, 0);
				set_clock_time(func_693(iVar4), func_694(iVar4), func_695(iVar4));
				func_1863(get_clock_hours());
				func_1864(1, 0, 0);
				return true;
			}
			break;
	}
	return false;
}

void func_1431(vector3 vParam0, float fParam3, bool bParam4)
{
	iVar0 = 16384;
	if (bParam4)
	{
		iVar0 |= 524288;
	}
	clear_area(vParam0, fParam3, iVar0);
}

void func_1432(int iParam0, int iParam1)
{
	if (Global_1935630->f_12)
	{
		return;
	}
	func_1865(2000);
	Global_16 = 0;
	func_1866();
	set_entity_invincible(Global_35, func_1867(*iParam0, 8));
	if (!func_1867(*iParam0, 1))
	{
		set_player_control(get_player_index(), true, 0, false);
	}
	_0xa0cefcea390aab9b(0);
	set_all_random_peds_flee(player_id(), false);
	set_everyone_ignore_player(player_id(), false);
	if (func_1867(*iParam0, 2) || func_1867(*iParam0, 4))
	{
		_hide_hud_component(-1679307491);
	}
	else
	{
		_display_hud_component(-1679307491);
	}
	if (!func_1867(*iParam0, 16))
	{
		func_238(1);
	}
	if (func_1867(*iParam0, 32))
	{
		func_624(Global_35, -383172193, 0, 1742327865, 0, 1, 0, 0, 1, 0);
		func_1868(-1623728698, 0);
	}
	func_783(&(Global_1946804->f_1497), Global_35, 1, 49217, 1, 1, 1);
	if (Global_1359489->f_16 & 4194304 != 0)
	{
		Global_1359489->f_16 = (Global_1359489->f_16 - Global_1359489->f_16 & 4194304);
	}
	*iParam0 = 0;
}

var func_1433(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

struct<4> func_1434(char[4] cParam0, int iParam1)
{
	return cParam0->f_1[func_132(iParam1)]->f_13;
}

int func_1435(var uParam0)
{
	return *uParam0;
}

bool func_1436(var uParam0, struct<4> Param1, int iParam5, bool bParam6)
{
	if (func_1437(uParam0, 32768))
	{
		return true;
	}
	if (func_1869(uParam0) >= 3)
	{
		uParam0->f_2286 = func_927(get_player_index(), 0, 0, 1);
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
		func_1870(uParam0);
	}
	if (func_1869(uParam0) < 10)
	{
		if (func_1869(uParam0) == 3)
		{
			func_1871(uParam0, iParam5, bParam6);
		}
		else if (func_1869(uParam0) > 3)
		{
			if (func_1435(uParam0) == 0)
			{
				if (!func_1437(uParam0, 524288))
				{
					func_1872(uParam0);
				}
				else if (is_screen_faded_out())
				{
					func_1873(uParam0, 4);
					func_1874(uParam0, 10);
					func_1875(uParam0, iParam5);
					return true;
				}
			}
			if (!func_1437(uParam0, 67108864) && !Global_1935630->f_12)
			{
				set_ped_reset_flag(Global_35, 25, true);
			}
			if (!func_1876(uParam0->f_1406[uParam0->f_2074], 16))
			{
				disable_control_action(0, -1404316431, false);
				disable_control_action(0, -1304887797, false);
			}
			_0x8910c24b7e0046ec();
			func_1511(0);
			func_1877();
			disable_control_action(0, -1722177808, false);
			disable_control_action(0, 1644850270, false);
			disable_control_action(0, 2139949496, false);
			if (uParam0->f_2074 >= 0)
			{
				if (!func_1876(uParam0->f_1406[uParam0->f_2078], 32768))
				{
					_uiprompt_enable_prompt_type_this_frame(6);
				}
				if (func_1878(uParam0, uParam0->f_2074))
				{
					if (func_1879(uParam0) < 7 && uParam0->f_2078 >= 0)
					{
						func_1880(uParam0, uParam0->f_1406[uParam0->f_2078]->f_27, uParam0->f_1735[uParam0->f_2078]->f_1, 1065353216);
					}
				}
				else if (uParam0->f_2078 >= 0)
				{
					func_1880(uParam0, uParam0->f_1406[uParam0->f_2078]->f_27, uParam0->f_1735[uParam0->f_2078]->f_1, 1065353216);
				}
				func_1881(uParam0);
			}
		}
	}
	bVar0 = func_1882(uParam0, iParam5, bParam6);
	bVar1 = _0xa24c1d341c6e0d53(1, 0, 0);
	if (bVar0)
	{
		if ((!func_1437(uParam0, 268435456) && bVar1) && !func_1437(uParam0, 262144))
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
				func_742(uParam0, 131072);
				func_742(uParam0, 268435456);
			}
		}
		if (func_1883(uParam0, 64) || (uParam0->f_2074 >= 0 && !func_1876(uParam0->f_1406[uParam0->f_2074], 524288)))
		{
			if (_0xa2b1c7ef759a63ce() > 0f || func_1435(uParam0) == 0)
			{
				_0xc9caeaeec1256e54(-1679307491);
				_0xe296208c273bd7f0(-1, -1, 0, 17, 1, 0);
			}
		}
	}
	if (func_1869(uParam0) == 3 || func_1437(uParam0, 131072))
	{
		func_1884(uParam0);
		if (!func_1437(uParam0, 262144))
		{
			if ((bVar0 && func_1437(uParam0, 65536)) || func_1437(uParam0, 131072))
			{
				func_742(uParam0, 32768);
				func_1873(uParam0, 4);
				func_1874(uParam0, 10);
				uParam0->f_2159 = 1;
				func_1875(uParam0, iParam5);
				return true;
			}
		}
	}
	if (func_1869(uParam0) >= 3)
	{
		func_1885(uParam0, iParam5);
		func_1886(uParam0);
		if (!func_1887(uParam0, 1))
		{
			func_1888(uParam0);
		}
		func_1889(uParam0);
	}
	switch (func_1869(uParam0))
	{
		case 0:
			func_1890(uParam0, Param1, iParam5);
			break;
		case 1:
			func_1891(uParam0);
			break;
		case 2:
			func_1892(uParam0);
			break;
		case 3:
			if (func_1893(uParam0))
			{
				func_1894(2);
				func_1880(uParam0, uParam0->f_1406[uParam0->f_2074]->f_27, uParam0->f_1735[uParam0->f_2074]->f_1, 1065353216);
				func_222(&(uParam0->f_2262));
				func_1873(uParam0, 1);
				func_1895();
				func_1874(uParam0, 5);
			}
			break;
		case 5:
		case 6:
		case 8:
			_0x9f9a829c6751f3c7(get_player_index(), 31, 1);
			if (!func_1437(uParam0, 67108864))
			{
				set_ped_reset_flag(Global_35, 25, true);
			}
			set_ped_reset_flag(Global_35, 264, true);
			set_ped_reset_flag(Global_35, 321, true);
			if (func_1869(uParam0) == 5)
			{
				if (func_1896(uParam0))
				{
					func_1873(uParam0, 2);
					func_1874(uParam0, 6);
				}
			}
			if (func_1869(uParam0) == 6)
			{
				if (func_1897(uParam0))
				{
					func_1873(uParam0, 3);
					func_1874(uParam0, 8);
				}
			}
			if (uParam0->f_2075 >= 0 || func_1279(&(uParam0->f_2262)) >= 15f)
			{
				if (func_1898(uParam0, iParam5))
				{
					if (func_1899(uParam0))
					{
						uParam0->f_2075 = func_1900(uParam0);
						func_222(&(uParam0->f_2262));
						set_player_control(get_player_index(), true, 0, false);
						_display_hud_component(-1679307491);
						clear_ped_tasks(Global_35, 1, 0);
						func_1873(uParam0, 6);
						func_1874(uParam0, 9);
					}
					else
					{
						func_1873(uParam0, 4);
						func_1874(uParam0, 10);
						func_1875(uParam0, iParam5);
						return true;
					}
				}
			}
			break;
		case 9:
			if (func_1898(uParam0, iParam5))
			{
				func_1875(uParam0, iParam5);
				func_1874(uParam0, 10);
				return true;
			}
			break;
		case 10:
			return true;
	}
	return false;
}

bool func_1437(var uParam0, int iParam1)
{
	return (uParam0->f_2054 && iParam1) != 0;
}

void func_1438(var uParam0, int iParam1)
{
	uParam0->f_2054 = (uParam0->f_2054 - (uParam0->f_2054 && iParam1));
}

void func_1439(var uParam0, var uParam1)
{
	if (func_1437(uParam1, 32768))
	{
		Var0 = { func_1901(uParam0) };
		func_1793(uParam0, &Var0);
		if (func_1437(uParam1, 131072))
		{
			func_743(uParam0, 268435456);
			if (func_396(uParam0->f_865))
			{
				uParam0->f_865 = { func_1902(uParam1, uParam1->f_2074) };
			}
			if (func_396(uParam0->f_862))
			{
				uParam0->f_862 = { func_1902(uParam1, uParam1->f_2074) };
				get_ground_z_for_3d_coord(uParam0->f_862, &(uParam0->f_862.f_2), false);
				uParam0->f_862.f_2 = (uParam0->f_862.f_2 + 0.5f);
			}
		}
		if (func_1437(uParam1, 268435456))
		{
			func_1903(&(uParam0->f_860), 16384);
		}
	}
	else if (func_1437(uParam1, 524288))
	{
		func_743(uParam0, 67108864);
		func_1438(uParam1, 524288);
	}
	if (func_1883(uParam1, 128))
	{
		func_743(uParam0, 32);
	}
	if (uParam1->f_2293 != 0)
	{
		uParam0->f_872 = uParam1->f_2293;
		if (uParam1->f_2074 >= 0 && func_1876(uParam1->f_1406[uParam1->f_2074], 256))
		{
			func_1903(&(uParam0->f_860), 524288);
		}
	}
	if (*uParam1 == 0 && _0x927b810e43e99932(&(uParam1->f_2082)))
	{
		_copy_memory(&(uParam0->f_873), &(uParam1->f_2082), 16);
	}
}

void func_1440(char[4] cParam0)
{
	if (func_772(&(cParam0->f_7375), 128) || func_772(&(cParam0->f_7375), 256))
	{
		if (_does_anim_scene_exist(cParam0->f_7375.f_804))
		{
			_delete_anim_scene(cParam0->f_7375.f_804);
		}
		func_1904(&(cParam0->f_7375));
		func_1360(&(cParam0->f_7375), 128, 1);
		func_1360(&(cParam0->f_7375), 256, 1);
		func_1360(&(cParam0->f_7375), 4096, 1);
	}
}

void func_1441(char[4] cParam0)
{
	func_1905(&(cParam0->f_7375));
}

bool func_1442(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, var uParam4, char[4] cParam5)
{
	func_1906(uParam4, &cParam0);
	if (func_772(uParam4, 2) && !func_772(uParam4, 67108864))
	{
		disable_control_action(0, -842734359, false);
	}
	if (func_1907(uParam4) != 1)
	{
		func_1908(uParam4);
	}
	_0xf45e46deecf7df6e(4096, 0, 0, -1, -1);
	set_ped_reset_flag(Global_35, 134, true);
	_uiprompt_enable_prompt_type_this_frame(6);
	_0x9f9a829c6751f3c7(get_player_index(), 31, 1);
	switch (func_1907(uParam4))
	{
		case 1:
			if (_does_anim_scene_exist(uParam4->f_804) && _is_anim_scene_loaded(uParam4->f_804, true, false))
			{
				if (!_is_anim_scene_started(uParam4->f_804, false))
				{
					func_1909(uParam4, &cParam0, cParam5);
				}
				else if (_0xef324e9550a394d5(uParam4->f_804))
				{
					func_1910(uParam4, 4);
					return false;
				}
				else
				{
					if (func_1911(uParam4, 2))
					{
						Stack.Push(uParam4);
						Call_Loc(uParam4->f_797);
					}
					func_1912(cParam5);
				}
				func_1910(uParam4, 3);
			}
			else if (!_does_anim_scene_exist(uParam4->f_804))
			{
				if (!is_screen_fading_out())
				{
					do_screen_fade_out(0);
				}
				if (func_121(cParam5, func_33(cParam5), 262144))
				{
					if (!func_772(uParam4, 2097152))
					{
						func_1913(uParam4);
					}
				}
				else if (!is_string_null_or_empty(&(uParam4->f_806)) && (!func_8(cParam5, 8) || func_772(uParam4, 134217728)))
				{
				}
				else
				{
					func_1914(uParam4);
				}
				func_222(&(uParam4->f_1));
				func_1910(uParam4, 2);
			}
			else
			{
				if (!is_screen_fading_out() && !is_screen_faded_out())
				{
					do_screen_fade_out(0);
				}
				func_1915(uParam4);
				if (!func_26(&(uParam4->f_1)))
				{
					func_27(&(uParam4->f_1), 0);
				}
				else if (func_860(&(uParam4->f_1)) >= 60f)
				{
					if (_does_anim_scene_exist(uParam4->f_804))
					{
						_delete_anim_scene(uParam4->f_804);
					}
					func_1910(uParam4, 4);
				}
			}
			break;
		case 2:
			if (!_does_anim_scene_exist(uParam4->f_804) || !_is_anim_scene_loaded(uParam4->f_804, true, false))
			{
				if (func_1916(uParam4, &cParam0, 1, 1))
				{
					if (!_is_anim_scene_loaded(uParam4->f_804, true, false))
					{
						func_1910(uParam4, 4);
					}
					else if (!func_396(func_1917(uParam4)) && !func_1238(Global_35, func_1917(uParam4), 100f, 1, 1))
					{
						func_1345(1);
						start_player_teleport(get_player_index(), func_1917(uParam4), 0f, true, true, true, false);
					}
				}
				else if (func_860(&(uParam4->f_1)) >= 60f)
				{
					if (_does_anim_scene_exist(uParam4->f_804))
					{
						_delete_anim_scene(uParam4->f_804);
					}
					func_1910(uParam4, 4);
				}
			}
			else if (!is_player_teleport_active() || _has_player_teleport_finished(get_player_index()))
			{
				if (func_282(cParam5) != 0 || (func_154(cParam5) == 1 && func_162(cParam5, func_33(cParam5)) >= 3))
				{
					if (!get_is_loading_screen_active())
					{
						_0xa565fac215cbc77d();
						func_16(1, 0);
						func_1909(uParam4, &cParam0, cParam5);
						func_1910(uParam4, 3);
					}
					else
					{
						shutdown_loading_screen();
					}
				}
			}
			else if (func_860(&(uParam4->f_1)) >= 60f)
			{
				if (_does_anim_scene_exist(uParam4->f_804))
				{
					_delete_anim_scene(uParam4->f_804);
				}
				func_1910(uParam4, 4);
			}
			break;
		case 3:
			func_392(uParam4);
			if (func_1911(uParam4, 2))
			{
				Stack.Push(uParam4);
				Call_Loc(uParam4->f_797);
			}
			func_1912(cParam5);
			if ((_does_anim_scene_exist(uParam4->f_804) && _is_anim_scene_started(uParam4->f_804, false)) && (_0xef324e9550a394d5(uParam4->f_804) || func_772(uParam4, 512)))
			{
				if (!func_772(uParam4, 1024) && func_1918(uParam4, 1))
				{
					set_gameplay_cam_relative_heading(0f, 1f);
					set_gameplay_cam_relative_pitch(0f, 1f);
				}
				if (!func_772(uParam4, 512))
				{
					func_222(&(uParam4->f_1));
					func_743(uParam4, 512);
					func_1910(uParam4, 4);
				}
				else if (func_772(uParam4, 524288))
				{
					if (is_screen_faded_in() || is_screen_fading_in())
					{
					}
					do_screen_fade_out(0);
				}
			}
			else
			{
				func_1908(uParam4);
			}
			if (func_772(uParam4, 524288))
			{
				if (IntToFloat(absi((func_1919(uParam4) - func_1920(uParam4)))) <= 2f)
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
				if (func_1921(uParam4, Global_35, 4))
				{
					_0x1b70811d3bf75db9(1, 1);
				}
				if ((is_screen_faded_out() || is_screen_fading_out()) && func_1920(uParam4) > 5000)
				{
					_0x1b70811d3bf75db9(1, 1);
				}
			}
			if (func_1922(uParam4))
			{
				if (!_does_anim_scene_exist(uParam4->f_804))
				{
				}
				func_1923(uParam4);
				return true;
			}
			else
			{
				if (func_772(uParam4, 67108864))
				{
					if (is_screen_faded_out())
					{
						if (!_is_anim_scene_paused(uParam4->f_804) && !_0xef324e9550a394d5(uParam4->f_804))
						{
							_delete_anim_scene_2(uParam4->f_804);
						}
						func_222(&(uParam4->f_1));
						_0x1b70811d3bf75db9(1, 1);
						func_743(uParam4, 512);
						func_1360(uParam4, 67108864, 1);
						func_1910(uParam4, 4);
					}
					else if (!is_screen_fading_out() && !is_screen_faded_out())
					{
						do_screen_fade_out(1000);
					}
				}
				else if ((((!func_772(uParam4, 16384) && !_0xef324e9550a394d5(uParam4->f_804)) && is_screen_faded_out()) && func_1920(uParam4) <= 5000) && func_1920(uParam4) >= 0)
				{
					do_screen_fade_in(1000);
				}
				if (!func_772(uParam4, 536870912) && has_anim_event_fired(Global_35, -1495039362))
				{
					func_1432(&(uParam4->f_861), 0);
					func_743(uParam4, 536870912);
				}
				if (func_1920(uParam4) >= 5000 && func_1920(uParam4) <= (func_1919(uParam4) - 5000))
				{
					func_1924();
				}
			}
			break;
		case 6:
			if (func_1922(uParam4))
			{
				func_1923(uParam4);
				return true;
			}
			break;
		case 4:
			if (func_772(uParam4, 524288))
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
						func_743(uParam4, 1073741824);
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
					if (func_1925(cParam5))
					{
						if (_does_anim_scene_exist(uParam4->f_804) && _is_anim_scene_paused(uParam4->f_804))
						{
							set_anim_scene_paused(uParam4->f_804, false);
						}
						func_1910(uParam4, 3);
					}
					else if (func_860(&(uParam4->f_1)) >= 30f)
					{
						if (_does_anim_scene_exist(uParam4->f_804) && _is_anim_scene_paused(uParam4->f_804))
						{
							set_anim_scene_paused(uParam4->f_804, false);
						}
						func_1910(uParam4, 3);
					}
				}
				if (iVar0 == 0)
				{
					Stack.Push(!func_1911(uParam4, 4));
					Stack.Push(uParam4);
					Call_Loc(uParam4->f_798);
					if (StackVal || StackVal)
					{
						if (_does_anim_scene_exist(uParam4->f_804) && _is_anim_scene_paused(uParam4->f_804))
						{
							set_anim_scene_paused(uParam4->f_804, false);
						}
						func_1910(uParam4, 3);
					}
					else if (func_860(&(uParam4->f_1)) >= 30f)
					{
						if (_does_anim_scene_exist(uParam4->f_804) && _is_anim_scene_paused(uParam4->f_804))
						{
							set_anim_scene_paused(uParam4->f_804, false);
						}
						func_1910(uParam4, 3);
					}
				}
				if (func_1907(uParam4) == 3)
				{
					if (func_772(uParam4, 524288))
					{
						do_screen_fade_out(0);
					}
				}
			}
			break;
		case 5:
			func_1910(uParam4, 4);
			break;
	}
	return false;
}

void func_1443(char[4] cParam0)
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
			if (decor_exist_on(get_indexed_item_in_itemset(iVar0, Global_43616), func_1926()))
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

void func_1444(char[4] cParam0)
{
	func_1913(&(cParam0->f_7375));
}

bool func_1445(int iParam0, bool bParam1)
{
	iVar0 = 1;
	MemCopy(&uVar1, {func_272(iParam0)}, 8);
	StringCopy(&cVar9, _get_label_text_2(&uVar1), 64);
	if (!is_string_null_or_empty(&cVar9))
	{
		if (!func_1927(iParam0))
		{
			iVar0 = 0;
		}
	}
	if (!bParam1)
	{
		MemCopy(&uVar1, {func_273(iParam0)}, 8);
		StringCopy(&cVar9, _get_label_text_2(&uVar1), 64);
		if (!is_string_null_or_empty(&cVar9))
		{
			if (!func_1928(iParam0))
			{
				iVar0 = 0;
			}
		}
	}
	return iVar0;
}

struct<8> func_1446(int iParam0)
{
	MemCopy(&cVar0, {func_272(iParam0)}, 8);
	StringConCat(&cVar0, "_Sounds", 64);
	return cVar0;
}

bool func_1447(int iParam0)
{
	Var0 = { func_1446(iParam0) };
	if (!is_string_null_or_empty(&Var0))
	{
		if (!_0xd9130842d7226045(&Var0, 0))
		{
			return false;
		}
	}
	return true;
}

void func_1448(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 15)
	{
		_datafile_register_query(uParam0->f_2495, iVar0, func_1929(iVar0));
		iVar0++;
	}
}

void func_1449()
{
	_0x243cede8f916b994();
	Global_1934765->f_338 = -1;
}

int func_1450(char[4] cParam0, int iParam1, int iParam2, vector3 vParam3, var uParam6)
{
	bVar0 = !func_917(cParam0);
	if (iParam2 == 0)
	{
		iVar1 = 1593315648;
	}
	else if (iParam2 == 3)
	{
		iVar1 = -1874208704;
	}
	else if (iParam2 == 19)
	{
		iVar1 = 1818898449;
	}
	else if (iParam2 == 13)
	{
		iVar1 = -922193456;
	}
	else
	{
		iVar1 = 0;
	}
	bVar2 = false;
	if (func_33(cParam0) > iLocal_160)
	{
		if (((iParam2 == 0 || iParam2 == 3) || iParam2 == 6) || iParam2 == 11)
		{
			bVar2 = true;
		}
	}
	if (func_843(cParam0, iParam2, uLocal_182[iParam1], 0, vParam3.x, vParam3.y, vParam3.z, 0f, bVar0, iVar1, bVar2, 0, 1, 0))
	{
		return 1;
	}
	return 0;
}

void func_1451(int iParam0, bool bParam1)
{
	if (!is_itemset_valid(Local_14.f_78))
	{
		Local_14.f_78 = create_itemset(true);
	}
	if (!does_entity_exist(&(Local_14.f_79[0])) && (iParam0 == -1 || iParam0 == 0))
	{
		Local_14.f_79[0] = create_object(-1261543418, 2251.628f, -769.5673f, 41.7666f, true, true, false, false, true);
		set_entity_rotation(&(Local_14.f_79[0]), 0f, -1f, -69.8481f, 2, true);
		freeze_entity_position(&(Local_14.f_79[0]), bParam1);
	}
	func_1475(&(Local_14.f_79[0]), Local_14);
	func_1475(&(Local_14.f_79[0]), Local_14.f_78);
}

void func_1452(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	clear_bit(Global_1934765->f_21[iVar1], iVar2);
}

void func_1453(int iParam0, var uParam1)
{
	if (is_entity_dead(iParam0))
	{
		return;
	}
	uVar0 = 29;
	_copy_memory(uParam1, &uVar0, 30);
	iVar30 = 0;
	while (iVar30 < 29)
	{
		iVar31 = 0;
		get_current_ped_weapon(Global_35, &iVar31, false, iVar30, true);
		if (func_686(iVar31))
		{
			(*uParam1)[iVar30] = iVar31;
		}
		else
		{
			(*uParam1)[iVar30] = 0;
		}
		iVar30++;
	}
}

void func_1454(bool bParam0)
{
	iVar0 = 17;
	while (iVar0 >= 0)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_572(iVar1, 0))
		{
			func_669(iVar1, 0, bParam0);
		}
		Global_1946804->f_2657[iVar0] = 0;
		iVar0 = (iVar0 + -1);
	}
	Global_1946804->f_2657.f_20 = 0;
	Global_1946804->f_2657.f_21 = 0;
	Global_1946804->f_2657.f_22 = 0;
	Global_1946804->f_2657.f_23 = 0;
	Global_1946804->f_2657.f_24 = 0;
	Global_1946804->f_2657.f_25 = 0;
	Global_1946804->f_2657.f_19 = 0;
	Global_1946804->f_2657.f_26.f_6 = 0;
}

void func_1455(int iParam0)
{
	Global_1946804->f_2657.f_26.f_2 = 3;
	Global_1946804->f_2657.f_26.f_1 = 3;
	Global_1946804->f_2657.f_26 = 3;
	if (func_20() == -1)
	{
		func_1930(352481484);
		iVar0 = 0;
		while (iVar0 < Global_26796.f_19)
		{
			Global_1946804->f_2657[iVar0] = &Global_26796[iVar0];
			iVar0++;
		}
		Global_1946804->f_2657.f_20 = Global_26796.f_20;
		Global_1946804->f_2657.f_21 = Global_26796.f_21;
		Global_1946804->f_2657.f_22 = Global_26796.f_22;
		Global_1946804->f_2657.f_23 = Global_26796.f_23;
		Global_1946804->f_2657.f_24 = Global_26796.f_24;
		Global_1946804->f_2657.f_25 = Global_26796.f_25;
		Global_1946804->f_2657.f_19 = Global_26796.f_19;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < Global_36638.f_45.f_350.f_19)
		{
			Global_1946804->f_2657[iVar0] = &Global_36638.f_45.f_350[iVar0];
			iVar0++;
		}
		Global_1946804->f_2657.f_20 = Global_36638.f_45.f_350.f_20;
		Global_1946804->f_2657.f_21 = Global_36638.f_45.f_350.f_21;
		Global_1946804->f_2657.f_22 = Global_36638.f_45.f_350.f_22;
		Global_1946804->f_2657.f_23 = Global_36638.f_45.f_350.f_23;
		Global_1946804->f_2657.f_24 = Global_36638.f_45.f_350.f_24;
		Global_1946804->f_2657.f_25 = Global_36638.f_45.f_350.f_25;
		Global_1946804->f_2657.f_19 = Global_36638.f_45.f_350.f_19;
	}
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar2 = &Global_1946804->f_2657[iVar0];
		if (func_596(iVar2) != -999503751)
		{
			func_1931(&(Global_1946804->f_2657.f_26.f_26), iVar2, iVar0);
		}
		if (func_1704(iVar2, 0))
		{
			func_1868(iVar2, &Global_1946804->f_1497.f_1[iVar1] == &Global_1946804->f_2657[iVar0]);
		}
		iVar0++;
	}
}

void func_1456(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!func_1932(iParam0))
	{
		return;
	}
	iVar0 = func_596(iParam0);
	bVar1 = false;
	switch (iVar0)
	{
		case -2061583405:
			bVar1 = func_1933(iParam0, &(Global_1946804->f_2657.f_21), Global_1946804->f_2657.f_26.f_1, bParam1);
			break;
		case 81053684:
			bVar1 = func_1933(iParam0, &(Global_1946804->f_2657.f_23), 1, bParam1);
			break;
		case -999503751:
			bVar1 = func_1933(iParam0, &(Global_1946804->f_2657.f_20), Global_1946804->f_2657.f_26, bParam1);
			break;
		case -525676072:
			bVar1 = func_1933(iParam0, &(Global_1946804->f_2657.f_22), Global_1946804->f_2657.f_26.f_2, bParam1);
			break;
		case -1719060085:
			bVar1 = func_1933(iParam0, &(Global_1946804->f_2657.f_24), 1, bParam1);
			break;
		case -413129408:
			bVar1 = func_1933(iParam0, &(Global_1946804->f_2657.f_24), 1, bParam1);
			break;
	}
	if (!bVar1)
	{
		return;
	}
	if (iParam0 == func_1934(0))
	{
		func_1935(iParam0, 1);
		if (func_673() == 1160113249)
		{
			func_1935(func_1934(-2125499975), 0);
		}
		else
		{
			func_1935(func_1934(1160113249), 0);
		}
	}
	func_1144();
	if (func_1936(iVar0))
	{
		_0x766315a564594401(func_958(0), iParam0, 0);
	}
	func_1868(iParam0, bParam3);
	if (bParam2)
	{
		func_1145(0, 0);
	}
}

void func_1457(int iParam0, var uParam1)
{
	if (is_entity_dead(iParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 29)
	{
		if (uParam1[iVar0] != 0)
		{
			if (!has_ped_got_weapon(Global_35, uParam1[iVar0], 0, false))
			{
				if (func_122(uParam1[iVar0]))
				{
					_give_weapon_to_ped_2(iParam0, uParam1[iVar0], 0, false, false, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
				}
			}
			iVar1 = 0;
			get_current_ped_weapon(Global_35, &iVar1, false, iVar0, true);
			if (iVar1 != uParam1[iVar0])
			{
				set_current_ped_weapon(Global_35, uParam1[iVar0], true, iVar0, false, false);
			}
		}
		iVar0++;
	}
}

int func_1458(bool bParam0, bool bParam1, bool bParam2)
{
	if (func_20() != -1)
	{
		return 0;
	}
	func_1937(bParam1);
	if (bParam2)
	{
		func_1938(1);
	}
	if (bParam0)
	{
		func_1802(8);
	}
	return 1;
}

bool func_1459()
{
	return func_1939(Global_35);
}

bool func_1460(int iParam0, bool bParam1)
{
	if (!func_258(Local_14.f_14))
	{
		Local_14.f_14 = { func_417() };
	}
	if (func_1795(&(Local_14.f_14), 1))
	{
		return true;
	}
	if (!does_entity_exist(&(Local_14.f_16[0])) && (iParam0 == -1 || iParam0 == 0))
	{
		Local_14.f_16[0] = func_1796(737910671, 2250.582f, -772.6096f, 42.9726f, 79.92f, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
		set_ped_name_debug(&(Local_14.f_16[0]), "COP_1");
		func_1797(Local_14.f_14, &(Local_14.f_16[0]));
		func_1475(&(Local_14.f_16[0]), Local_14);
		set_blocking_of_non_temporary_events(&(Local_14.f_16[0]), true);
		_0x9587913b9e772d29(&(Local_14.f_16[0]), 0);
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
	if (!does_entity_exist(&(Local_14.f_16[1])) && (iParam0 == -1 || iParam0 == 1))
	{
		Local_14.f_16[1] = func_1796(737910671, 2255.741f, -774.1311f, 43.0781f, 87.12f, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
		set_ped_name_debug(&(Local_14.f_16[1]), "COP_2");
		func_1797(Local_14.f_14, &(Local_14.f_16[1]));
		func_1475(&(Local_14.f_16[1]), Local_14);
		set_blocking_of_non_temporary_events(&(Local_14.f_16[1]), true);
		_0x9587913b9e772d29(&(Local_14.f_16[1]), 0);
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
	if (!does_entity_exist(&(Local_14.f_16[2])) && (iParam0 == -1 || iParam0 == 2))
	{
		Local_14.f_16[2] = func_1796(737910671, 2257.043f, -771.5298f, 42.819f, 93.6f, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
		set_ped_name_debug(&(Local_14.f_16[2]), "COP_3");
		func_1797(Local_14.f_14, &(Local_14.f_16[2]));
		func_1475(&(Local_14.f_16[2]), Local_14);
		func_1260(&(Local_14.f_16[2]), 1676963302, 1, 0, 0, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
		set_blocking_of_non_temporary_events(&(Local_14.f_16[2]), true);
		_0x9587913b9e772d29(&(Local_14.f_16[2]), 0);
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
	if (!does_entity_exist(&(Local_14.f_16[3])) && (iParam0 == -1 || iParam0 == 3))
	{
		Local_14.f_16[3] = func_1796(737910671, 2254.244f, -764.7385f, 42.7852f, 90.72f, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
		set_ped_name_debug(&(Local_14.f_16[3]), "COP_4");
		func_1797(Local_14.f_14, &(Local_14.f_16[3]));
		func_1475(&(Local_14.f_16[3]), Local_14);
		func_1260(&(Local_14.f_16[3]), 1676963302, 1, 0, 0, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
		set_blocking_of_non_temporary_events(&(Local_14.f_16[3]), true);
		_0x9587913b9e772d29(&(Local_14.f_16[3]), 0);
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
	if (!does_entity_exist(&(Local_14.f_16[4])) && (iParam0 == -1 || iParam0 == 4))
	{
		Local_14.f_16[4] = func_1796(737910671, 2246.919f, -762.9738f, 42.9464f, 111.2044f, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
		set_ped_name_debug(&(Local_14.f_16[4]), "COP_5");
		func_1797(Local_14.f_14, &(Local_14.f_16[4]));
		func_1475(&(Local_14.f_16[4]), Local_14);
		func_1260(&(Local_14.f_16[4]), 1676963302, 1, 0, 0, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
		set_blocking_of_non_temporary_events(&(Local_14.f_16[4]), true);
		_0x9587913b9e772d29(&(Local_14.f_16[4]), 0);
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
	func_1798(&(Local_14.f_14), 1);
	return true;
}

void func_1461(struct<2> Param0)
{
	if (!func_258(Param0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < func_259(Param0))
	{
		func_1940(func_460(Param0, iVar0));
		iVar0++;
	}
	func_1739(Param0);
	func_1941(Param0, 0);
	func_1463(Param0, 1);
	func_1942(Param0, 1269650476);
}

bool func_1462(char[4] cParam0, int iParam1, bool bParam2)
{
	if (!func_258(Local_14.f_29))
	{
		Local_14.f_29 = { func_417() };
	}
	if (func_1795(&(Local_14.f_29), 1))
	{
		return true;
	}
	if (!does_entity_exist(&(Local_14.f_31[0])) && does_entity_exist(func_1943(cParam0, 737910671, 0)))
	{
		Local_14.f_31[0] = func_1943(cParam0, 737910671, 0);
		func_1797(Local_14.f_29, &(Local_14.f_31[0]));
		func_1475(&(Local_14.f_31[0]), Local_14);
	}
	if (!does_entity_exist(&(Local_14.f_31[0])) && (iParam1 == -1 || iParam1 == 0))
	{
		Local_14.f_31[0] = func_1796(737910671, 2247.821f, -769.1623f, 42.748f, 79.9201f, 1, 1, 0, 1, 1, 1, 1, 0, 0, 0);
		set_ped_name_debug(&(Local_14.f_31[0]), "pedMachineGunner");
		func_1797(Local_14.f_29, &(Local_14.f_31[0]));
		func_1475(&(Local_14.f_31[0]), Local_14);
		set_blocking_of_non_temporary_events(&(Local_14.f_31[0]), true);
		if (bParam2)
		{
			if (iParam1 == 0)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
	}
	func_1798(&(Local_14.f_29), 1);
	return true;
}

void func_1463(struct<2> Param0, bool bParam2)
{
	if (!func_258(Param0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < func_259(Param0))
	{
		iVar1 = func_460(Param0, iVar0);
		if (does_entity_exist(iVar1))
		{
			if (!is_entity_dead(iVar1))
			{
				if (is_entity_a_ped(iVar1))
				{
					set_blocking_of_non_temporary_events(get_ped_index_from_entity_index(iVar1), bParam2);
				}
			}
		}
		iVar0++;
	}
}

float func_1464(int iParam0, int iParam1)
{
	return func_969(iParam0, iParam1);
}

void func_1465(bool bParam0)
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

void func_1466(int iParam0)
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

void func_1467(bool bParam0)
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

void func_1468(bool bParam0)
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

void func_1469(bool bParam0)
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

void func_1470(bool bParam0)
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

void func_1471(bool bParam0)
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

void func_1472(bool bParam0)
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

int func_1473(int iParam0)
{
	if (iParam0 == -358215195)
	{
		return 0;
	}
	return &(Global_1946804->f_1497.f_1[func_671(iParam0, 1)]);
}

void func_1474()
{
	if (!_unlock_is_unlocked(-1526891582))
	{
		func_868();
		_unlock_set_unlocked(-1526891582, true);
		func_599(-916314281);
		func_645(-916314281, 1, 752097756);
		set_current_ped_weapon(Global_35, -916314281, true, 2, false, false);
		func_599(494733111);
		func_645(494733111, 1, 752097756);
		set_current_ped_weapon(Global_35, 494733111, true, 4, false, false);
	}
}

void func_1475(int iParam0, int iParam1)
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

int func_1476(char[4] cParam0)
{
	return func_1920(&(cParam0->f_7375));
}

int func_1477(char* sParam0, bool bParam1)
{
	if (is_string_null_or_empty(sParam0))
	{
		return 1;
	}
	if (bParam1)
	{
		if (!prepare_music_event(sParam0))
		{
			return 0;
		}
	}
	if (trigger_music_event(sParam0))
	{
		return 1;
	}
	return 0;
}

int func_1478(char[4] cParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, bool bParam5)
{
	return func_1944(cParam0, iParam1, sParam2, iParam3, bParam4, bParam5);
}

void func_1479()
{
	if (!_is_anim_scene_started(&(uLocal_171[0]), false) && _is_anim_scene_loaded(&(uLocal_171[0]), true, false))
	{
		start_anim_scene(&(uLocal_171[0]));
	}
}

bool func_1480(char[4] cParam0, int iParam1)
{
	return func_772(&(cParam0->f_7375), iParam1);
}

void func_1481(char[4] cParam0, int iParam1)
{
	func_743(&(cParam0->f_7375), iParam1);
}

void func_1482(bool bParam0)
{
	if (func_1945())
	{
		func_1946(0);
		if (_0x7c7e4ab748ea3b07())
		{
			_0x6968ce7ac32f6788(5);
		}
		else
		{
			_0x6968ce7ac32f6788(1);
		}
		func_1947(Global_35, Global_1347400, 1);
		if (bParam0)
		{
			func_1948();
		}
	}
}

void func_1483(int iParam0, int iParam1, bool bParam2)
{
	func_1949(iParam0, iParam1, bParam2, 1);
}

bool func_1484(var uParam0, char* sParam1)
{
	return _does_string_exist_in_string(&(uParam0->f_800), sParam1);
}

int func_1485(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return -1;
		case 5:
			return 4;
		case 6:
			return 79;
		case 0:
			return 43;
		case 2:
			return 98;
		case 4:
			return 58;
		case 1:
			return 71;
		case 3:
			return 9;
		case 7:
			return 22;
		case 8:
			return 37;
		default:
			break;
	}
	if (iParam0 != -1)
	{
	}
	return -1;
}

int func_1486(int iParam0)
{
	switch (iParam0)
	{
		case 22:
			return 7;
		case 79:
			return 0;
		case 43:
			return 1;
		case 98:
			return 2;
		case 58:
			return 3;
		case 71:
			return 4;
		case 4:
			return 5;
		case 76:
			return 8;
		case 9:
			return 6;
		case 5:
			return 9;
		case 38:
			return 10;
		case 105:
			return 11;
		case 92:
			return 12;
		case 78:
			return 13;
		case 26:
			return 14;
		case 37:
			return 15;
		case 115:
			return 16;
		default:
			break;
	}
	return -1;
}

int func_1487(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -850999370;
		case 1:
			return -807742826;
		case 2:
			return 866755445;
		case 3:
			return 2082303678;
		case 4:
			return 1349313303;
		case 5:
			return 1267596926;
		case 6:
			return 676394410;
		case 7:
			return -1190705999;
		case 8:
			return -1802212639;
		default:
			break;
	}
	return 176656832;
}

void func_1488()
{
	func_1489(1591451572);
	func_1489(-349064220);
	func_1489(1776302352);
	func_1489(-523522517);
}

void func_1489(int iParam0)
{
	iVar0 = func_957(iParam0, 1);
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

void func_1490(int iParam0)
{
	iVar0 = func_957(iParam0, 1);
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

void func_1491(int iParam0, bool bParam1)
{
	if (Global_1572887->f_10 && func_20() == 0)
	{
		return;
	}
	if (func_82(128))
	{
		return;
	}
	if (!func_1950(iParam0))
	{
		return;
	}
	if (func_254(iParam0, 32))
	{
		return;
	}
	func_290(iParam0, 32);
	func_232(Global_1935630, 8192);
	func_95(func_609(-1532769513, -36357794), 1);
	switch (func_1951(iParam0))
	{
		case 0:
		case 2:
		case 11:
			func_95(func_609(-1532769513, 213519508), 1);
			break;
		case 1:
		case 5:
		case 6:
		case 7:
		case 12:
			func_95(func_609(-1532769513, 242571679), 1);
			break;
		case 3:
		case 10:
			func_95(func_609(-1532769513, 1349449307), 1);
			break;
		case 4:
		case 9:
			func_95(func_609(-1532769513, 1140362070), 1);
			break;
		case 8:
			func_95(func_609(-1532769513, -172330899), 1);
			break;
		case 13:
		case 14:
		case 15:
		case 16:
			func_95(func_609(-1532769513, -910218296), 1);
			break;
	}
	switch (iParam0)
	{
		case 0:
			_0xd8c7162ab2e2af45(1822876181);
			break;
		case 1:
			_0xd8c7162ab2e2af45(1092217275);
			break;
		case 2:
			_0xd8c7162ab2e2af45(1855549007);
			_0xd8c7162ab2e2af45(1542246539);
			break;
		case 6:
			_0xd8c7162ab2e2af45(-237206861);
			break;
		case 7:
			_0xd8c7162ab2e2af45(276890716);
			break;
		case 9:
			_0xd8c7162ab2e2af45(-353968602);
			break;
		case 10:
			_0xd8c7162ab2e2af45(-1354901649);
			_0xd8c7162ab2e2af45(-1354901649);
			break;
		case 11:
			_0xd8c7162ab2e2af45(-496244122);
			break;
		case 12:
			_0xd8c7162ab2e2af45(-678676588);
			break;
		case 15:
			_0xd8c7162ab2e2af45(-732274047);
			break;
		case 16:
			_0xd8c7162ab2e2af45(-12216052);
			break;
		case 17:
			_0xd8c7162ab2e2af45(-1456731677);
			break;
		case 21:
			_0xd8c7162ab2e2af45(-2086563810);
			break;
		case 22:
			_0xd8c7162ab2e2af45(221661572);
			break;
		case 24:
			_0xd8c7162ab2e2af45(222265732);
			break;
		case 25:
			_0xd8c7162ab2e2af45(-1484929764);
			break;
		case 26:
			_0xd8c7162ab2e2af45(1104975149);
			break;
		case 27:
			_0xd8c7162ab2e2af45(235472255);
			break;
		case 28:
			_0xd8c7162ab2e2af45(-1337880478);
			break;
		case 29:
			_0xd8c7162ab2e2af45(-1813267128);
			break;
		case 30:
			_0xd8c7162ab2e2af45(-1941572412);
			break;
		case 31:
			_0xd8c7162ab2e2af45(1006072805);
			break;
		case 121:
			_0xd8c7162ab2e2af45(929640770);
			break;
		case 122:
			_0xd8c7162ab2e2af45(1603579970);
			break;
		case 124:
			_0xd8c7162ab2e2af45(-1332669948);
			break;
		case 123:
			_0xd8c7162ab2e2af45(-1807212021);
			break;
		case 34:
			_0xd8c7162ab2e2af45(-1347759053);
			break;
		case 36:
			_0xd8c7162ab2e2af45(-918096609);
			break;
		case 114:
			_0xd8c7162ab2e2af45(1728445882);
			break;
		case 37:
			_0xd8c7162ab2e2af45(-507075109);
			break;
		case 40:
			_0xd8c7162ab2e2af45(462373845);
			break;
		case 42:
			_0xd8c7162ab2e2af45(-1727895786);
			break;
		case 43:
			_0xd8c7162ab2e2af45(1826504111);
			break;
		case 44:
			_0xd8c7162ab2e2af45(1714554710);
			break;
		case 45:
			_0xd8c7162ab2e2af45(-91026072);
			break;
		case 54:
			_0xd8c7162ab2e2af45(893855320);
			break;
		case 55:
			_0xd8c7162ab2e2af45(326709244);
			break;
		case 49:
			_0xd8c7162ab2e2af45(653799702);
			break;
		case 62:
			_0xd8c7162ab2e2af45(415864829);
			break;
		case 64:
			_0xd8c7162ab2e2af45(-1836330842);
			break;
		case 65:
			_0xd8c7162ab2e2af45(648073069);
			break;
		case 66:
			_0xd8c7162ab2e2af45(770074951);
			break;
		case 68:
			_0xd8c7162ab2e2af45(-1276637644);
			break;
		case 71:
			_0xd8c7162ab2e2af45(-431488293);
			break;
		case 72:
			_0xd8c7162ab2e2af45(-1101810198);
			break;
		case 74:
			_0xd8c7162ab2e2af45(-1344767066);
			break;
		case 77:
			_0xd8c7162ab2e2af45(1472232821);
			break;
		case 79:
			_0xd8c7162ab2e2af45(-1368676121);
			break;
		case 63:
			_0xd8c7162ab2e2af45(-33677540);
			break;
		case 80:
			_0xd8c7162ab2e2af45(1602161184);
			_0xd8c7162ab2e2af45(-443207523);
			_0xd8c7162ab2e2af45(-683043834);
			break;
		case 82:
			_0xd8c7162ab2e2af45(147256338);
			_0xd8c7162ab2e2af45(-134804027);
			_0xd8c7162ab2e2af45(2027689141);
			break;
		case 83:
			_0xd8c7162ab2e2af45(-161135375);
			break;
		case 85:
			_0xd8c7162ab2e2af45(1625008147);
			break;
		case 86:
			_0xd8c7162ab2e2af45(121074776);
			break;
		case 87:
			_0xd8c7162ab2e2af45(1876184276);
			break;
		case 89:
			_0xd8c7162ab2e2af45(458479023);
			break;
		case 91:
			_0xd8c7162ab2e2af45(85299473);
			break;
		case 96:
			_0xd8c7162ab2e2af45(-1150244084);
			break;
		case 98:
			_0xd8c7162ab2e2af45(759314201);
			break;
		case 99:
			_0xd8c7162ab2e2af45(2063457042);
			break;
		case 100:
			_0xd8c7162ab2e2af45(1877776161);
			break;
		case 102:
			_0xd8c7162ab2e2af45(2143316225);
			break;
		case 104:
			_0xd8c7162ab2e2af45(-1623232489);
			_0xd8c7162ab2e2af45(-1393093729);
			break;
		case 106:
			_0xd8c7162ab2e2af45(1354284392);
			break;
		case 107:
			_0xd8c7162ab2e2af45(-1430883057);
			break;
		case 109:
			_0xd8c7162ab2e2af45(820139809);
			break;
		case 112:
			_0xd8c7162ab2e2af45(1561007383);
			_0xd8c7162ab2e2af45(-960425936);
			break;
	}
	if (bParam1)
	{
		func_290(iParam0, 64);
	}
}

void func_1492()
{
	iVar0 = 0;
	while (iVar0 < Global_36308)
	{
		iVar1 = func_1952(iVar0);
		if (iVar1 != -1)
		{
			if (func_1953(iVar1) != -1 && iVar1 != func_943())
			{
				if (iVar0 == Global_1934051->f_33 && func_1954(iVar0))
				{
					func_1955(iVar0, 7148155);
					func_1956(&(Global_1934051->f_33), 0);
				}
				iVar2 = func_1720(iVar1, 19);
				if (iVar2 != -1)
				{
					if (iVar0 == &Global_1914319->f_15936[iVar2] && func_1954(iVar0))
					{
						if (Global_1914319->f_15936[iVar2]->f_5)
						{
							Global_1914319->f_15936[iVar2]->f_5 = 0;
						}
						func_1956(Global_1914319->f_15936[iVar2], 0);
					}
				}
			}
		}
		iVar0++;
	}
}

void func_1493(int iParam0)
{
	iVar0 = func_943();
	if (func_250(iVar0))
	{
		iVar1 = func_1486(iVar0);
		if (func_1957(iVar1))
		{
			Global_40.f_9384[iVar1] = (&Global_40.f_9384[iVar1] - Global_40.f_9384[iVar1] & 1);
		}
	}
	iVar2 = func_1485(iParam0);
	iVar3 = func_1486(iVar2);
	if (func_1957(iVar3))
	{
		Global_40.f_9384[iVar3] |= 1;
		Global_40.f_6 = { Global_1395601->f_5[iVar3]->f_2 };
		_0x748c5f51a18cb8f0(0);
		_0x748c5f51a18cb8f0(1);
	}
}

void func_1494(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	iVar0 = func_1485(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	func_1958(iParam0);
	func_1959(iParam0);
	func_1960();
	if (iVar0 == 9)
	{
		func_1079(-524145696, 0, 0);
	}
}

void func_1495(int iParam0)
{
	func_1961();
	switch (iParam0)
	{
		case 0:
			func_1962(-1303.82f, 2431.232f, 307.1254f, 254.7021f, 2);
			func_1962(-1331.61f, 2479.874f, 308.7661f, 343.4772f, 1);
			func_1962(-1367.155f, 2401.237f, 305.9231f, 182.5857f, 0);
			break;
		case 1:
			func_1962(-40.4062f, 24.7958f, 92.5989f, 345.8244f, 2);
			func_1962(-46.6053f, 49.3195f, 89.4332f, 32.7929f, 2);
			func_1962(-89.1265f, 74.3389f, 88.5412f, 341.7615f, 1);
			func_1962(-117.2523f, 26.8954f, 84.9916f, 71.3425f, 1);
			func_1962(-92.892f, 50.1228f, 87.8695f, 45.8778f, 1);
			func_1962(-13.6112f, -0.4862f, 101.6951f, 255.2034f, 2);
			func_1962(-32.3882f, -18.9331f, 103.6418f, 237.7177f, 3);
			func_1962(-19.8908f, -62.5598f, 103.873f, 267.298f, 3);
			func_1962(-33.2324f, -103.5739f, 101.7936f, 255.1129f, 3);
			func_1962(-69.4097f, -128.0305f, 97.0682f, 221.4977f, 3);
			func_1962(-79.3456f, -103.7585f, 91.473f, 66.6098f, 3);
			func_1962(-134.3901f, -69.9172f, 90.3402f, 108.8014f, 0);
			func_1962(-163.3076f, -54.9202f, 89.2085f, 130.3788f, 0);
			func_1962(-7.8651f, 34.202f, 96.8284f, 252.726f, 2);
			break;
		case 2:
			func_1962(773.3724f, -1152.694f, 46.0144f, 287.6862f, 1);
			func_1962(678.071f, -1106.928f, 50.6427f, 308.8809f, 1);
			func_1962(694.5107f, -1273.256f, 42.5974f, 276.0894f, 3);
			func_1962(624.2226f, -1093.59f, 44.0105f, 324.7204f, 1);
			func_1962(695.23f, -1204.24f, 44.84f, -75.427f, 0);
			break;
		case 3:
			func_1962(1814.452f, -1812.884f, 47.3854f, 46.0618f, 0);
			func_1962(1844.125f, -1770.289f, 44.872f, 354.3456f, 0);
			func_1962(1774.591f, -1878.943f, 45.1128f, 1.1527f, 0);
			func_1962(1751.868f, -1959.416f, 47.0387f, 100.6328f, 3);
			func_1962(1818.659f, -2009.734f, 43.2796f, 94.403f, 3);
			break;
		case 6:
			func_1962(2372.828f, 1302.302f, 108.3737f, 193.8477f, 2);
			func_1962(2299.087f, 1370.095f, 100.6253f, 148.7151f, 1);
			func_1962(2325.401f, 1301.158f, 95.0156f, 220.5325f, 2);
			break;
	}
}

void func_1496(var uParam0, int iParam1, bool bParam2)
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

void func_1497()
{
	if (does_entity_exist(Global_1357549->f_1674))
	{
		if (!_0x88ad6cc10d8d35b2(Global_1357549->f_1674))
		{
			set_entity_as_mission_entity(Global_1357549->f_1674, true, false);
		}
		if (is_entity_dead(Global_1357549->f_1674) == 0)
		{
			delete_vehicle(&(Global_1357549->f_1674));
		}
	}
}

void func_1498()
{
	func_1963(32);
}

void func_1499(bool bParam0)
{
	func_1938(bParam0);
}

bool func_1500(int iParam0)
{
	return _is_weapon_bow(iParam0);
}

int func_1501(int iParam0)
{
	if (is_vehicle_seat_free(iParam0, -1))
	{
		return 1;
	}
	if (is_vehicle_seat_free(iParam0, 0))
	{
		return 1;
	}
	if (is_vehicle_seat_free(iParam0, 1))
	{
		return 1;
	}
	if (is_vehicle_seat_free(iParam0, 2))
	{
		return 1;
	}
	return 0;
}

int func_1502(int iParam0)
{
	if (is_vehicle_seat_free(iParam0, -1))
	{
		return -1;
	}
	if (is_vehicle_seat_free(iParam0, 0))
	{
		return 0;
	}
	if (is_vehicle_seat_free(iParam0, 1))
	{
		return 1;
	}
	if (is_vehicle_seat_free(iParam0, 2))
	{
		return 2;
	}
	return -2;
}

void func_1503(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (bParam4)
	{
		fParam1 = func_1506(iParam0, fParam1, 1);
	}
	func_1965(iParam0, (func_1964(iParam0, 2) + fParam1), bParam2, bParam3, 1, 2);
}

float func_1504(int iParam0)
{
	return &(Global_40.f_11095[iParam0]);
}

void func_1505(float fParam0)
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

float func_1506(int iParam0, float fParam1, bool bParam2)
{
	iVar0 = func_288();
	func_1966(&iVar0, 0, 0, 0, 1, 0, 0);
	iVar1 = func_1967(iParam0, 2);
	if (func_1008(iVar0, func_1968(iParam0, 2), 1))
	{
		func_1969(iParam0, 0, 2);
		iVar1 = 0;
	}
	if (iVar1 >= 2)
	{
		func_328(88, bParam2);
		return 0f;
	}
	func_1970(iParam0, func_288(), 2);
	func_1969(iParam0, iVar1 + 1, 2);
	return fParam1;
}

float func_1507(float fParam0, float fParam1, float fParam2)
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

void func_1508(int iParam0, float fParam1, bool bParam2)
{
	if (func_20() != -1)
	{
		return;
	}
	if (!func_594(15))
	{
		return;
	}
	Global_40.f_11095[iParam0] = fParam1;
	iVar0 = func_1971(ceil(&(Global_40.f_11095[iParam0])));
	_set_attribute_core_value(Global_35, func_1972(iParam0), iVar0);
	func_1974(func_1973(iParam0), (100f * (to_float(iVar0) / 100f)), 0);
	if (((fParam1 <= func_1975(15) && iParam0 == 1) && is_ped_on_foot(Global_35)) && !is_ped_swimming(Global_35))
	{
		func_328(84, 1);
	}
	if (fParam1 <= -99.999f)
	{
		func_328(func_1976(iParam0), 1);
	}
	sVar1 = func_1977(iParam0);
	if (!is_string_null_or_empty(sVar1))
	{
		_0x437c08db4febe2bd(Global_35, sVar1, to_float(iVar0), -1);
	}
}

void func_1509()
{
	Global_40.f_11095.f_11[14] = 100f;
	set_attribute_points(Global_35, 14, 100);
	Global_40.f_11095.f_42 = 60;
}

void func_1510(float fParam0)
{
	func_1978(ceil((to_float(300) - (to_float(300) * fParam0))));
}

void func_1511(bool bParam0)
{
	if (bParam0)
	{
		func_1979(4);
	}
	func_1979(2);
	set_bit(&(Global_1956580->f_1), 0);
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
			if (func_219(cParam0->f_8269[iVar19], 1048576))
			{
				if (func_1980(cParam0, cParam0->f_8269[iVar19], iVar16, iVar17, iVar18))
				{
					func_1388(cParam0->f_8269[iVar19]);
				}
				else if (func_1981(cParam0, cParam0->f_8269[iVar19], iVar16, iVar17, iVar18))
				{
					func_230(cParam0->f_8269[iVar19]);
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
			if (func_219(cParam0->f_8269.f_641[iVar19], 1048576))
			{
				if (func_1982(cParam0, cParam0->f_8269.f_641[iVar19], iVar16, iVar17, iVar18, 1))
				{
					func_1983(cParam0->f_8269.f_641[iVar19]);
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
			if (func_219(cParam0->f_8269.f_1282[iVar19], 1048576))
			{
				if (func_1982(cParam0, cParam0->f_8269.f_1282[iVar19], iVar16, iVar17, iVar18, 0))
				{
					if (func_220(cParam0->f_8269.f_1282[iVar19], 1))
					{
						if (func_219(cParam0->f_8269.f_1282[iVar19], 4))
						{
							func_1984(&(cParam0->f_8269));
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
			if (func_219(cParam0->f_8269.f_2243[iVar19], 1048576))
			{
				if (func_1980(cParam0, cParam0->f_8269.f_2243[iVar19], iVar16, iVar17, iVar18))
				{
					func_1985(cParam0, cParam0->f_8269.f_2243[iVar19], 1);
					func_490(cParam0->f_8269.f_2243[iVar19], 1);
				}
				else if (func_1981(cParam0, cParam0->f_8269.f_2243[iVar19], iVar16, iVar17, iVar18))
				{
					func_1985(cParam0, cParam0->f_8269.f_2243[iVar19], 0);
					func_490(cParam0->f_8269.f_2243[iVar19], 2);
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
		return ((get_is_task_active(Global_35, 3) || func_1986(Global_35, -2017877118)) || _0x3ab6c7b0bb0df4b1(Global_35, -1));
	}
	return false;
}

void func_1514()
{
	_0x8910c24b7e0046ec();
	disable_control_action(0, -1404316431, false);
	func_1511(0);
	func_1987();
}

void func_1515(char[4] cParam0, int iParam1, int iParam2)
{
	func_1323(&(cParam0->f_1[func_132(iParam1)]->f_11), iParam2);
	if (iParam2 == 8388608)
	{
		_display_hud_component(-1679307491);
	}
}

void func_1516(var uParam0)
{
	if (func_508(uParam0, 32768))
	{
		return;
	}
	bVar0 = func_508(uParam0, 1024);
	if (func_508(uParam0, 128) || bVar0)
	{
		if (func_508(uParam0, 4096))
		{
			if (!func_508(uParam0, 2048))
			{
				iVar1 = get_blip_from_entity(*uParam0);
				if (does_blip_exist(iVar1))
				{
					_blip_set_modifier(iVar1, -1186550032);
				}
				func_1742(uParam0, 2048);
				return;
			}
		}
		else if (func_508(uParam0, 2048))
		{
			iVar2 = get_blip_from_entity(*uParam0);
			if (does_blip_exist(iVar2))
			{
				_set_blip_flash_style(iVar2, -1186550032);
			}
			func_1988(uParam0, 2048);
		}
		if (func_508(uParam0, 512))
		{
			if (func_509(uParam0->f_10))
			{
				if (func_846(Global_35, *uParam0, 150f, 1) || bVar0)
				{
					if (!func_1989(uParam0->f_10))
					{
						func_514(uParam0->f_10, 1);
						func_1990(uParam0->f_10, 0);
					}
				}
				else if ((func_1989(uParam0->f_10) && !bVar0) && !func_508(uParam0, 16384))
				{
					func_514(uParam0->f_10, 0);
					func_1990(uParam0->f_10, 1);
				}
			}
		}
		else if (!does_blip_exist(uParam0->f_8))
		{
			if (!does_blip_exist(get_blip_from_entity(*uParam0)))
			{
				if (func_846(Global_35, *uParam0, 150f, 1))
				{
					uParam0->f_8 = _blip_add_for_entity(422991367, *uParam0);
					if (!is_string_null_or_empty(uParam0->f_4))
					{
						set_blip_name_from_text_file(uParam0->f_8, uParam0->f_4);
					}
				}
			}
		}
		else if ((does_blip_exist(get_blip_from_entity(*uParam0)) && uParam0->f_8 != get_blip_from_entity(*uParam0)) || !func_846(Global_35, *uParam0, 150f, 1))
		{
			remove_blip(&(uParam0->f_8));
		}
	}
	else if (func_508(uParam0, 512))
	{
		if (func_509(uParam0->f_10))
		{
			if (func_1989(uParam0->f_10))
			{
				func_514(uParam0->f_10, 0);
				func_1990(uParam0->f_10, 1);
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
	return (iParam0 < func_397() && iParam0 >= 0);
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

void func_1521(char[4] cParam0)
{
	func_1991(cParam0);
	if (func_282(cParam0) == 1 && is_screen_faded_out())
	{
		_0x297b72e2af094742(6);
	}
	else if (func_282(cParam0) == 0 && !func_8(cParam0, 8))
	{
		func_854(cParam0);
	}
	func_51(&(cParam0->f_10792));
	func_1992(cParam0);
	func_1993(cParam0, 67108864);
	func_1993(cParam0, 8192);
	func_856(cParam0, 4);
	func_856(cParam0, 512);
	func_856(cParam0, 65536);
	func_856(cParam0, 1024);
	func_856(cParam0, 262144);
	func_856(cParam0, 16777216);
	func_856(cParam0, 64);
	func_268(cParam0, 128);
	func_99(cParam0, -2147483648);
	func_1994(cParam0, 1);
	if (func_120(cParam0, 4194304))
	{
		func_140(cParam0, func_33(cParam0), 1073741824);
	}
	func_268(cParam0, 4194304);
	func_268(cParam0, 8388608);
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
	func_547(&(cParam0->f_13106));
	func_222(&(cParam0->f_13112));
	func_1995(cParam0, func_121(cParam0, func_33(cParam0), 1));
	if (!func_121(cParam0, func_33(cParam0), 1024))
	{
		_display_hud_component(-1679307491);
	}
	if (!func_121(cParam0, func_33(cParam0), 32768))
	{
		func_238(1);
	}
	if (func_907(cParam0, func_35(cParam0)) != -1 && _0x62de46f061caa468() < func_907(cParam0, func_35(cParam0)))
	{
		_0xf008e0ba1fe1d644((func_907(cParam0, func_35(cParam0)) - _0x62de46f061caa468()));
	}
	if (_missiondata_timecycle_box_exists())
	{
		_missiondata_timecycle_box_delete();
	}
	Var0 = { func_1996(cParam0) };
	_missiondata_timecycle_box_set_modifier(&Var0);
	Global_43805 = -1;
	if (func_121(cParam0, func_33(cParam0), 1))
	{
		func_232(Global_1935630, 2097152);
	}
	else
	{
		func_71(Global_1935630, 2097152);
	}
	func_1997(cParam0);
	if (func_33(cParam0) == 25 && func_82(32768))
	{
		func_1998(cParam0, 16);
	}
	if (func_121(cParam0, func_33(cParam0), 512))
	{
		func_1999(1f, 0f, 0f, 0f);
	}
	else
	{
		func_44();
	}
}

bool func_1522(char[4] cParam0)
{
	if (func_120(cParam0, 4) && !func_29())
	{
		return true;
	}
	return false;
}

void func_1523(char[4] cParam0)
{
	func_1912(cParam0);
}

void func_1524(var uParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < 65)
	{
		func_1382(uParam0->f_13[iVar0], iParam1);
		iVar0++;
	}
}

void func_1525(char[4] cParam0)
{
	func_2000(cParam0);
	if (_get_ped_crouch_movement(Global_35))
	{
		func_99(cParam0, 1024);
	}
}

bool func_1526(var uParam0)
{
	return (_does_anim_scene_exist(uParam0->f_804) && _is_anim_scene_started(uParam0->f_804, false));
}

bool func_1527(var uParam0)
{
	return true;
}

void func_1528(char[4] cParam0, char[32] cParam1)
{
	cParam0->f_10784 = { cParam1 };
}

bool func_1529(var uParam0, int iParam1)
{
	iVar0 = func_2001(iParam1);
	return (uParam0 && iVar0) != 0;
}

int func_1530(char[4] cParam0, var uParam1, bool bParam2)
{
	if (Global_1935630->f_12)
	{
		return 0;
	}
	if (func_2002(cParam0, uParam1))
	{
		return 0;
	}
	if (func_509(uParam1->f_10))
	{
		set_ped_reset_flag(get_ped_index_from_entity_index(*uParam1), 53, true);
	}
	func_1516(uParam1);
	func_2003(uParam1);
	if (!bParam2)
	{
		func_2004(cParam0, uParam1);
	}
	iVar0 = 0;
	while (iVar0 < get_number_of_events(0))
	{
		switch (get_event_at_index(0, iVar0))
		{
			case -140551285:
				func_2005(cParam0, uParam1, iVar0);
				break;
			case 402722103:
			case 2145012826:
				func_2006(cParam0, uParam1, iVar0);
				break;
		}
		iVar0++;
	}
	func_2007(cParam0, uParam1);
	func_2008(uParam1);
	return 0;
}

bool func_1531(var uParam0)
{
	return true;
}

int func_1532(int iParam0)
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
						*iParam0 = func_2009(vVar0.z);
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

void func_1533(char[4] cParam0, var uParam1, bool bParam2, int iParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, bool bParam9, bool bParam10)
{
	func_1744(cParam0, &uParam1, "", bParam9, bParam10);
}

bool func_1534(char[4] cParam0, char[4] cParam1)
{
	if (!func_121(cParam0, func_33(cParam0), 256))
	{
		if (!func_121(cParam0, func_33(cParam0), 65536))
		{
			if (func_2010(cParam1))
			{
				func_140(cParam0, func_33(cParam0), 131072);
			}
			func_140(cParam0, func_33(cParam0), 65536);
		}
		if (func_121(cParam0, func_33(cParam0), 131072))
		{
			if (!func_1437(&(cParam0->f_10792), 1))
			{
				return false;
			}
			else
			{
				func_2011(&(cParam0->f_7375), &(cParam0->f_10792));
				func_140(cParam0, func_33(cParam0), 256);
			}
		}
		else
		{
			func_140(cParam0, func_33(cParam0), 256);
		}
	}
	return func_1916(&(cParam0->f_7375), cParam1, (func_8(cParam0, 33554432) || (is_screen_faded_out() && !func_8(cParam0, 1073741824))), 1);
}

void func_1535(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, int iParam12, int iParam13)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_804((*uParam0)[iVar0]->f_2, iParam12))
		{
			func_2012(&((*uParam0)[iVar0]->f_2), iParam12);
			if (func_2013(&((*uParam0)[iVar0]->f_2), iParam13))
			{
				func_2014((*uParam0)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (func_804((*uParam1)[iVar0]->f_4, iParam12))
		{
			func_2012(&((*uParam1)[iVar0]->f_4), iParam12);
			if (func_2013(&((*uParam1)[iVar0]->f_4), iParam13))
			{
				func_2015((*uParam1)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam2)
	{
		if (func_804((*uParam2)[iVar0]->f_2, iParam12))
		{
			func_2012(&((*uParam2)[iVar0]->f_2), iParam12);
			if (func_2013(&((*uParam2)[iVar0]->f_2), iParam13))
			{
				func_2016((*uParam2)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam3)
	{
		if (func_804((*uParam3)[iVar0]->f_2, iParam12))
		{
			func_2012(&((*uParam3)[iVar0]->f_2), iParam12);
			if (func_2013(&((*uParam3)[iVar0]->f_2), iParam13))
			{
				func_2017((*uParam3)[iVar0]);
			}
		}
		iVar0++;
	}
	if (func_804(uParam4->f_1, iParam12))
	{
		func_2012(&(uParam4->f_1), iParam12);
		if (func_2013(&(uParam4->f_1), iParam13))
		{
			func_2018(uParam4);
		}
	}
	iVar0 = 0;
	while (iVar0 < *uParam5)
	{
		if (func_804((*uParam5)[iVar0]->f_3, iParam12))
		{
			func_2012(&((*uParam5)[iVar0]->f_3), iParam12);
			if (func_2013(&((*uParam5)[iVar0]->f_3), iParam13))
			{
				func_2019((*uParam5)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam6)
	{
		if (func_804((*uParam6)[iVar0]->f_3, iParam12))
		{
			func_2012(&((*uParam6)[iVar0]->f_3), iParam12);
			if (func_2013(&((*uParam6)[iVar0]->f_3), iParam13))
			{
				func_2020((*uParam6)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam7)
	{
		if (func_804((*uParam7)[iVar0]->f_4, iParam12))
		{
			func_2012(&((*uParam7)[iVar0]->f_4), iParam12);
			if (func_2013(&((*uParam7)[iVar0]->f_4), iParam13))
			{
				func_2021((*uParam7)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam8)
	{
		if (func_804((*uParam8)[iVar0]->f_2, iParam12))
		{
			func_2012(&((*uParam8)[iVar0]->f_2), iParam12);
			if (func_2013(&((*uParam8)[iVar0]->f_2), iParam13))
			{
				func_2022((*uParam8)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam9)
	{
		if (func_804((*uParam9)[iVar0]->f_2, iParam12))
		{
			func_2012(&((*uParam9)[iVar0]->f_2), iParam12);
			if (func_2013(&((*uParam9)[iVar0]->f_2), iParam13))
			{
				func_2023((*uParam9)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam10)
	{
		if (func_804((*uParam10)[iVar0]->f_3, iParam12))
		{
			func_2012(&((*uParam10)[iVar0]->f_3), iParam12);
			if (func_2013(&((*uParam10)[iVar0]->f_3), iParam13))
			{
				func_2024((*uParam10)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam11)
	{
		if (func_804((*uParam11)[iVar0]->f_2, iParam12))
		{
			func_2012(&((*uParam11)[iVar0]->f_2), iParam12);
			if (func_2013(&((*uParam11)[iVar0]->f_2), iParam13))
			{
				func_2025((*uParam11)[iVar0]);
			}
		}
		iVar0++;
	}
}

void func_1536(char[4] cParam0)
{
	iVar0 = func_2026(cParam0);
	_0x50b72a754ee64a71(iVar0);
}

void func_1537(bool bParam0, bool bParam1)
{
	if (func_2027(255) == 4)
	{
		return;
	}
	if (func_396(get_entity_coords(get_player_ped(player_id()), false, false)))
	{
		return;
	}
	if (!bParam0)
	{
		func_293(0);
	}
	else
	{
		if (bParam1)
		{
			func_2028(0, 0, 0, 1);
		}
		func_294(0);
		func_2029(&(Global_1109400->f_389));
		Global_1109400->f_389 = 0f;
		Global_1109400->f_389.f_5 = 1;
		Global_1109400->f_389.f_16 = 0;
		Global_1109400->f_389.f_17.f_6 = { get_entity_coords(get_player_ped(player_id()), false, false) };
		Global_1109400->f_389.f_17.f_3 = { 0f, 0f, 0f };
		Global_1109400->f_389.f_17 = { Global_1899378->f_23.f_1, Global_1899378->f_23.f_1, Global_1899378->f_23.f_1 };
		Global_1109400->f_389.f_17.f_9 = -432403087;
		func_2030(&(Global_1109400->f_428));
		Global_1109400->f_428.f_6 = { Global_1109400->f_389.f_17.f_6 };
		Global_1109400->f_428 = Global_1109400->f_389;
		Global_1109400->f_428.f_5 = 1;
		if (bParam1)
		{
			Global_1109400->f_22.f_16 = 0;
			Global_1109400->f_22.f_17 = 0;
		}
	}
	func_2031(Global_1109400->f_389, 42);
	func_2032(Global_1109400->f_428, 42);
}

float func_1538(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_1539(bool bParam0, bool bParam1, bool bParam2)
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

var func_1540(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

char* func_1541(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5)
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
	return _create_var_string(2, func_2033(sParam1));
}

void func_1542(int iParam0, var uParam1, var uParam2, var uParam3)
{
	*uParam3 = func_472(iParam0);
	*uParam1 = func_526(iParam0);
	*uParam2 = func_570(iParam0);
}

bool func_1543(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_1544(int iParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (func_1545(iVar0, &iParam0))
		{
			if (Global_40.f_4942[iVar0]->f_59 != 0 && Global_40.f_4942[iVar0]->f_59 != iParam1)
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_1545(int iParam0, int iParam1)
{
	if (!func_509(iParam0))
	{
		return false;
	}
	iVar0 = func_941(iParam0);
	return (*iParam1 && iVar0) != 0;
}

void func_1546(int iParam0)
{
	if (!_does_volume_exist(iParam0))
	{
		return;
	}
	vVar0 = { _0xf70f00013a62f866(iParam0) };
	func_2034(vVar0, 0);
}

void func_1547(var uParam0)
{
	*uParam0 = 0;
}

void func_1548(int iParam0)
{
	if (func_2035(179) || func_2035(180))
	{
		if (does_blip_exist((*Global_1347702)[iParam0]->f_37))
		{
			if ((*Global_1347702)[iParam0]->f_37 == Global_1905944->f_5698)
			{
				func_2036(1);
			}
		}
	}
	if (func_2037(179))
	{
		func_2038(179);
	}
	if (func_2037(180))
	{
		func_2038(180);
	}
}

bool func_1549(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (func_927(iParam0, bParam1, bParam2, bParam3))
	{
		return true;
	}
	if (bParam1)
	{
		if (_0x0bb6de7d23c60626(player_id()))
		{
			return true;
		}
	}
	return false;
}

void func_1550(int* iParam0)
{
	if (does_blip_exist(*iParam0))
	{
		remove_blip(iParam0);
	}
}

void func_1551(int iParam0, int iParam1)
{
	if (!func_276(iParam0))
	{
		return;
	}
	func_2039(&((*Global_1347702)[iParam0]->f_14), iParam1);
	func_2039(&((*Global_1347702)[iParam0]->f_14), 2);
	func_454(&((*Global_1347702)[iParam0]->f_12), 16384);
	func_457(&((*Global_1347702)[iParam0]->f_13), 32);
	if (iParam1 != 16384)
	{
		iVar0 = 0;
		while (iVar0 < Global_40.f_450)
		{
			if (func_276(&(Global_40.f_450[iVar0])))
			{
				if (&Global_40.f_450[iVar0] == iParam0)
				{
					Global_1430257 = iVar0;
				}
				else
				{
					iVar0++;
				}
			}
		}
	}
}

Vector3 func_1552(int iParam0)
{
	if (!func_276(iParam0))
	{
		return 0f, 0f, 0f;
	}
	vVar0 = { 0f, 0f, 0f };
	if (func_2040(iParam0, &vVar0))
	{
		(*Global_1347702)[iParam0]->f_24 = { vVar0 };
	}
	return (*Global_1347702)[iParam0]->f_24;
}

void func_1553(int iParam0, bool bParam1, vector3 vParam2)
{
	if (!func_276(iParam0))
	{
		return;
	}
	if ((*Global_1347702)[iParam0]->f_13 & 32 != 0)
	{
		return;
	}
	else if ((*Global_1347702)[iParam0]->f_13 & 4096 != 0)
	{
		if (bParam1)
		{
			return;
		}
	}
	func_1548(iParam0);
	if ((*Global_1347702)[iParam0]->f_12 & 1048576 != 0 && (*Global_1347702)[iParam0]->f_13 & 2048 == 0)
	{
		set_this_script_can_remove_blips_created_by_any_script(true);
		if (bParam1)
		{
			remove_blip(&((*Global_1347702)[iParam0]->f_37));
		}
		func_2042(iParam0, func_2041(iParam0), 0, 1);
	}
	else if ((*Global_1347702)[iParam0]->f_18 > -1f)
	{
		set_this_script_can_remove_blips_created_by_any_script(true);
		if (bParam1)
		{
			remove_blip(&((*Global_1347702)[iParam0]->f_37));
		}
		func_2042(iParam0, vParam2, 0, 1);
	}
	else if (!bParam1)
	{
		func_2042(iParam0, vParam2, 0, 0);
	}
	_blip_set_modifier((*Global_1347702)[iParam0]->f_37, 724623647);
	func_447(&((*Global_1347702)[iParam0]->f_13), 4096);
}

bool func_1554(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case 143:
			*iParam2 = 1754500170;
			*iParam1 = 14;
			return true;
		default:
			break;
	}
	*iParam2 = -1600776215;
	*iParam1 = -1;
	return false;
}

bool func_1555(int iParam0, int iParam1, bool bParam2)
{
	if (!func_488(iParam0))
	{
		return false;
	}
	if (!func_2043(iParam1))
	{
		return false;
	}
	if (bParam2)
	{
		return func_2044(iParam0, iParam1);
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_40.f_11206[iParam0][iVar0] == iParam1)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_1556(int iParam0, int iParam1)
{
	if (!func_488(iParam0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_40.f_11206[iParam0][iVar0] == iParam1)
		{
			func_489(iParam0, (*Global_40.f_11206[iParam0])[iVar0]);
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_1557(int iParam0, bool bParam1)
{
	if (!func_949(iParam0))
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
		(*Global_1360165)[iParam0]->f_127 = func_2045(iParam0);
		return (*Global_1360165)[iParam0]->f_127;
	}
	return 0;
}

int func_1558(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 6;
		case 1:
			return 5;
		case 2:
			return 4;
		case 3:
			return 3;
		case 4:
			return 2;
		case 5:
			return 1;
		default:
			break;
	}
	return -1;
}

int func_1559(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1368127279:
			return 3;
		case -1324765740:
			return 4;
		case -1119640448:
			return 6;
		case -1015925347:
			return 8;
		case -857562377:
			return 7;
		case -579939614:
			return 10;
		case -193557170:
			return 9;
		case 0:
			return 13;
		case 15:
			return 14;
		case 54488187:
			return 2;
		case 100010212:
			return 11;
		case 679418883:
			return 0;
		case 880414984:
			return 12;
		case 1077154516:
			return 1;
		case 1620037762:
			return 5;
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

int func_1560(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 669657108;
		case 1:
			return 821931868;
		case 2:
			return -1721991356;
		case 3:
			return -702816767;
		case 4:
			return 2137137442;
		case 5:
			return 1974067816;
		case 6:
			return -173507739;
		case 7:
			return 839715153;
		case 8:
			return 1500834021;
		case 9:
			return -1148613331;
		case 10:
			return 433385945;
		case 11:
			return 1420204096;
		case 12:
			return -1317052143;
		case 13:
			return -416908843;
		case 14:
			return 212278652;
		case 15:
			return -273223690;
		case 16:
			return 1679686673;
		case 17:
			return 603685163;
		case 18:
			return 1632247697;
		case 19:
			return -1233681761;
		case 20:
			return 2082228755;
		case 21:
			return 725623432;
		case 22:
			return 0;
		case 23:
			return -1439599467;
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

int func_1561(int iParam0, bool bParam1, float fParam2)
{
	if (!is_bit_set(Global_1934765->f_301, 0))
	{
		return 0;
	}
	iVar0 = func_1559(iParam0, 1);
	if (iVar0 < 0 || iVar0 >= 15)
	{
		return 0;
	}
	iVar1 = _get_prev_weather_type_hash_name();
	iVar2 = func_2046(iVar1, 1);
	if (iVar2 < 0 || iVar2 > 31)
	{
		return 0;
	}
	iVar3 = _get_next_weather_type_hash_name();
	iVar4 = func_2046(iVar3, 1);
	if (iVar4 < 0 || iVar4 > 31)
	{
		return 0;
	}
	_0xdd560abef5d3784c(&iVar5, &iVar6);
	iVar7 = func_2046(iVar5, 1);
	if (iVar6 != 0 && !bParam1)
	{
		return 0;
	}
	if (iVar5 != 0)
	{
		if (is_bit_set(&(Global_1934765->f_302[iVar0]), iVar7))
		{
			return 1;
		}
	}
	else if (is_bit_set(&(Global_1934765->f_302[iVar0]), iVar2) && is_bit_set(&(Global_1934765->f_302[iVar0]), iVar4))
	{
		return 1;
	}
	iVar8 = 0;
	while (iVar8 < 20)
	{
		iVar8++;
		iVar9 = _0x7f4ce164d9a11dfe();
		if (!is_bit_set(&(Global_1934765->f_302[iVar0]), iVar9))
		{
		}
		else
		{
			iVar10 = func_1560(iVar9, 1);
			if (iVar10 == 0 || iVar10 == -1439599467)
			{
			}
			else
			{
				if (bParam1)
				{
					_set_weather_type(iVar10, true, false, false, 0f, false);
				}
				else
				{
					_set_weather_type(iVar10, true, false, true, fParam2, false);
				}
				return 1;
			}
		}
	}
	switch (iParam0)
	{
		case 679418883:
			iVar11 = 1500834021;
			break;
		case 1077154516:
			iVar11 = 1420204096;
			break;
		case 54488187:
			iVar11 = -702816767;
			break;
		case -1368127279:
			iVar11 = -173507739;
			break;
		case -1324765740:
			iVar11 = 1632247697;
			break;
		case 1620037762:
			iVar11 = 821931868;
			break;
		case -1119640448:
			iVar11 = 1632247697;
			break;
		case -857562377:
			iVar11 = 1632247697;
			break;
		case -1015925347:
			iVar11 = -173507739;
			break;
		case -193557170:
			iVar11 = 821931868;
			break;
		case -579939614:
			iVar11 = -1148613331;
			break;
		case 100010212:
			iVar11 = 821931868;
			break;
		case 880414984:
			iVar11 = 2082228755;
			break;
		default:
			iVar11 = -1148613331;
			break;
	}
	if (bParam1)
	{
		_set_weather_type(iVar11, true, false, false, 0f, false);
	}
	else
	{
		_set_weather_type(iVar11, false, false, true, fParam2, false);
	}
	return 1;
}

int func_1562(int iParam0)
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

int func_1563(int iParam0)
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

void func_1564(int iParam0, int iParam1)
{
	Var0 = { *Global_1898164->f_1[iParam0] };
	*Global_1898164->f_1[iParam0] = { *Global_1898164->f_1[iParam1] };
	*Global_1898164->f_1[iParam1] = { Var0 };
}

int func_1565(int iParam0, int iParam1, int iParam2)
{
	iVar0 = func_2047(iParam0, 1);
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
	return 1;
}

void func_1566(int iParam0)
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

void func_1567()
{
	if (func_20() != -1)
	{
		return;
	}
	if (!func_395())
	{
		return;
	}
	func_2048(&(Global_40.f_40));
}

void func_1568()
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

bool func_1569()
{
	return !func_396(Global_1310720->f_1);
}

int func_1570()
{
	return Global_40.f_4283.f_4;
}

void func_1571(vector3 vParam0, var uParam3, var uParam4)
{
	fVar0 = 1E+07f;
	fVar1 = 1E+07f;
	if (func_2049())
	{
		fVar0 = func_994(vParam0, Global_40.f_6);
	}
	if (func_2050(33554432))
	{
		if (!func_1295(Global_40.f_2, 0f, 0f, 0f, 1056964608, 1))
		{
			fVar1 = func_994(vParam0, Global_40.f_2);
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

float func_1572(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist2(vParam0, vParam3);
}

void func_1573()
{
	if (!func_200(&Global_1935630, 8192))
	{
		return;
	}
	if (func_82(32768))
	{
		return;
	}
	func_71(Global_1935630, 8192);
	fVar0 = 0f;
	fVar0 = (fVar0 + (0.9259259f * to_float(func_2051(909007663, 1325140787))));
	fVar0 = (fVar0 + (0.2525252f * to_float(func_2051(909007663, 2101241783))));
	fVar0 = (fVar0 + (0.2923976f * to_float(func_2051(909007663, -1296936294))));
	fVar0 = (fVar0 + (0.462963f * to_float(func_2051(909007663, -798388728))));
	fVar0 = (fVar0 + (0.9259259f * to_float(func_2051(909007663, -1787586531))));
	fVar0 = (fVar0 + (0.308642f * to_float(func_2051(909007663, -1002834519))));
	fVar0 = (fVar0 + (5.555555f * to_float(func_2051(909007663, -50600144))));
	fVar0 = (fVar0 + (0.6944444f * to_float(func_2051(909007663, -348503123))));
	fVar0 = (fVar0 + (0.3703704f * to_float(func_2051(909007663, -528798161))));
	fVar0 = (fVar0 + (0.5f * func_2052(10f, to_float(func_2051(909007663, 551192206)))));
	fVar0 = (fVar0 + (0.6f * func_2052(5f, to_float(func_2051(909007663, -406093146)))));
	fVar0 = (fVar0 + (0.2f * func_2052(25f, to_float(func_2053(-1029789297)))));
	fVar0 = (fVar0 + (2f * func_2052(1f, to_float(func_2053(-843295694)))));
	fVar0 = (fVar0 + (0.3333333f * func_2052(6f, to_float(func_2053(64058978)))));
	fVar0 = (fVar0 + (3f * func_2052(1f, to_float(func_2053(795577402)))));
	iVar1 = func_2054();
	fVar0 = (fVar0 + (0.1111111f * func_2052(9f, to_float(iVar1))));
	fVar2 = (to_float(_0x5461c821d00fe15a(-2076669067, 1665658745)) / to_float(_0x62cab7db62ead434(-2076669067, 1665658745)));
	fVar2 = func_2055(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, -263938772)) / to_float(_0x62cab7db62ead434(-2076669067, -263938772))));
	fVar2 = func_2055(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, 228647253)) / to_float(_0x62cab7db62ead434(-2076669067, 228647253))));
	fVar2 = func_2055(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, 1695604435)) / to_float(_0x62cab7db62ead434(-2076669067, 1695604435))));
	fVar2 = func_2055(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, -379038926)) / to_float(_0x62cab7db62ead434(-2076669067, -379038926))));
	fVar2 = func_2055(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, 1597499323)) / to_float(_0x62cab7db62ead434(-2076669067, 1597499323))));
	fVar2 = func_2055(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, -278663717)) / to_float(_0x62cab7db62ead434(-2076669067, -278663717))));
	fVar2 = func_2055(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, 586249988)) / to_float(_0x62cab7db62ead434(-2076669067, 586249988))));
	fVar2 = func_2055(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, -419800938)) / to_float(_0x62cab7db62ead434(-2076669067, -419800938))));
	fVar2 = func_2055(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, -1362069171)) / to_float(_0x62cab7db62ead434(-2076669067, -1362069171))));
	fVar2 = func_2055(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, -740350755)) / to_float(_0x62cab7db62ead434(-2076669067, -740350755))));
	fVar2 = func_2055(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, 1511070393)) / to_float(_0x62cab7db62ead434(-2076669067, 1511070393))));
	fVar0 = (fVar0 + func_2052(1f, fVar2));
	fVar0 = (fVar0 + (0.05f * func_2052(to_float(20), to_float(func_2056()))));
	if (func_452(40))
	{
		fVar0 = (fVar0 + (1f * 1f));
	}
	if (func_452(42))
	{
		fVar0 = (fVar0 + (1f * 1f));
	}
	if (func_452(48))
	{
		fVar0 = (fVar0 + (1f * 1f));
	}
	if (func_452(50))
	{
		fVar0 = (fVar0 + (1f * 1f));
	}
	if (func_452(52))
	{
		fVar0 = (fVar0 + (1f * 1f));
	}
	fVar2 = (to_float(_0x5461c821d00fe15a(1765845133, 499813453)) / to_float(_0x62cab7db62ead434(1765845133, 499813453)));
	fVar2 = func_2055(fVar2, (to_float(_0x5461c821d00fe15a(1765845133, 666607663)) / to_float(_0x62cab7db62ead434(1765845133, 666607663))));
	fVar2 = func_2055(fVar2, (to_float(_0x5461c821d00fe15a(1765845133, -220219788)) / to_float(_0x62cab7db62ead434(1765845133, -220219788))));
	fVar2 = func_2055(fVar2, (to_float(_0x5461c821d00fe15a(1765845133, 218622660)) / to_float(_0x62cab7db62ead434(1765845133, 218622660))));
	fVar2 = func_2055(fVar2, (to_float(_0x5461c821d00fe15a(1765845133, 390004462)) / to_float(_0x62cab7db62ead434(1765845133, 390004462))));
	fVar2 = func_2055(fVar2, (to_float(_0x5461c821d00fe15a(1765845133, 6410548)) / to_float(_0x62cab7db62ead434(1765845133, 6410548))));
	fVar0 = (fVar0 + (1f * func_2052(1f, fVar2)));
	fVar0 = (fVar0 + (0.2f * func_2052(5f, to_float(func_2053(1933084904)))));
	fVar0 = (fVar0 + (0.2f * func_2052(5f, to_float(func_2051(-1756227506, -734935893)))));
	fVar0 = (fVar0 + (to_float(func_1633(_0x729d52f61a5a9e22(1979337996), 50)) / to_float(50)));
	fVar0 = (fVar0 + (to_float(func_1633(_0x729d52f61a5a9e22(-2125891426), 10)) / to_float(10)));
	fVar0 = (fVar0 + (to_float(func_1633(_0x729d52f61a5a9e22(1630085303), 10)) / to_float(10)));
	fVar0 = (fVar0 + _0x725d52f21a5e9e22(-1658238931));
	fVar0 = (fVar0 + (to_float(func_1633(_0x729d52f61a5a9e22(1807539419), 20)) / to_float(20)));
	fVar0 = (fVar0 + (to_float(func_1633(_0x729d52f61a5a9e22(717108105), 10)) / to_float(10)));
	fVar0 = (fVar0 + (to_float(func_1633(_0x729d52f61a5a9e22(-2143405780), 48)) / to_float(48)));
	func_2057(&iVar3, &iVar4);
	fVar0 = (fVar0 + (2f * func_2052((to_float(iVar3) / to_float(iVar4)), 1f)));
	fVar0 = (fVar0 + (2f * func_2052(1f, to_float(func_2058(-2116919750)))));
	fVar5 = to_float(func_2059());
	fVar0 = (fVar0 + ((3f * fVar5) / to_float(9)));
	fVar0 = (fVar0 + ((1f / 4f) * func_2052(1f, to_float(func_2051(1511238709, -747096482)))));
	fVar0 = (fVar0 + ((1f / 4f) * func_2052(1f, to_float(func_2051(1511238709, 549911940)))));
	fVar0 = (fVar0 + ((1f / 4f) * func_2052(1f, to_float(func_2051(1511238709, -760820978)))));
	fVar0 = (fVar0 + ((1f / 4f) * func_2052(1f, to_float(func_2051(1511238709, -1672018311)))));
	fVar0 = (fVar0 + (0.2f * func_2052(5f, to_float(func_2053(-1342635612)))));
	fVar0 = (fVar0 + (0.5f * func_2052(1f, to_float(func_2053(-2061916883)))));
	fVar0 = (fVar0 + (0.5f * func_2052(1f, to_float(func_2053(281346304)))));
	fVar0 = (fVar0 + (0.5f * func_2052(1f, to_float(func_2053(-299021541)))));
	fVar0 = (fVar0 + ((0.5f / 6f) * func_2052(1f, to_float(func_2051(-1276738576, 307971639)))));
	fVar0 = (fVar0 + ((0.5f / 6f) * func_2052(1f, to_float(func_2051(-1276738576, -1555359431)))));
	fVar0 = (fVar0 + ((0.5f / 6f) * func_2052(1f, to_float(func_2051(-1276738576, 644069854)))));
	fVar0 = (fVar0 + ((0.5f / 6f) * func_2052(1f, to_float(func_2051(-1276738576, -97115714)))));
	fVar0 = (fVar0 + ((0.5f / 6f) * func_2052(1f, to_float(func_2051(-1276738576, -2143405780)))));
	fVar0 = (fVar0 + ((0.5f / 6f) * func_2052(1f, to_float(func_2051(-1276738576, 1455184052)))));
	fVar0 = (fVar0 + ((1f / 4f) * func_2052(1f, to_float(func_2051(978382515, -2072933068)))));
	fVar0 = (fVar0 + ((1f / 4f) * func_2052(1f, to_float(func_2051(978382515, 574993838)))));
	fVar0 = (fVar0 + ((1f / 4f) * func_2052(1f, to_float(func_2051(978382515, -605765767)))));
	fVar0 = (fVar0 + ((1f / 4f) * func_2052(1f, to_float(func_2051(978382515, 1015970717)))));
	Var6 = { func_94(1215094015) };
	fVar8 = func_2060(Var6);
	_0xe141f6b40b1e3683(&Var6, fVar0);
	if (fVar0 > fVar8)
	{
	}
	if (func_192(&Global_1898437))
	{
		iVar60 = 0;
		iVar61 = 0;
		while (iVar61 < &Global_1898329)
		{
			if (!func_192(Global_1898330[iVar61]))
			{
			}
			else
			{
				iVar62 = func_196(Global_1898330[iVar61]);
				if (iVar62 == 3 || iVar62 == 4)
				{
				}
				else if (iVar62 != 1 && iVar62 != 2)
				{
					func_458(Global_1898330[iVar61]);
				}
				else
				{
					func_938(iVar61, 0);
					if (func_197(Global_1898330[iVar61]) == 1)
					{
						iVar9[iVar60] = func_195(Global_1898330[iVar61]);
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
									iVar9[iVar60] = func_195((*Global_1347702)[&Global_40.f_450[iVar63]]->f_15);
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
										_0x51ec204a6e5b5a1a(func_195(&Global_1898437), &iVar9);
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

void func_1574(var uParam0, int iParam1, bool bParam2)
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

int func_1575(int iParam0, int iParam1, int iParam2)
{
	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
	return 1;
}

void func_1576(int iParam0)
{
	if (!func_949(iParam0))
	{
		return;
	}
	if (!_is_base_a_persistent_character((*Global_1360165)[iParam0]->f_1))
	{
		iVar0 = func_2061(iParam0);
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

void func_1577(int iParam0)
{
	if (func_509(iParam0))
	{
		if (does_entity_exist(func_546(iParam0)))
		{
			func_434(iParam0, 67108864, 1);
			func_977(iParam0, 19, 1);
		}
	}
}

float func_1578(int iParam0)
{
	if (!func_949(iParam0))
	{
		return 0f;
	}
	return (*Global_1360165)[iParam0]->f_134;
}

void func_1579(int iParam0)
{
	iVar0 = func_546(iParam0);
	iVar1 = func_978(iParam0, 0);
	func_2062(iParam0, iVar0);
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

bool func_1580(int iParam0)
{
	if (!func_949(iParam0))
	{
		return false;
	}
	return (*Global_1360165)[iParam0]->f_70.f_11 == get_id_of_this_thread();
}

void func_1581(int iParam0, int iParam1, bool bParam2)
{
	if (!func_949(iParam0))
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

int func_1582(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (!func_949(iParam0))
	{
		return 0;
	}
	iVar0 = func_462(iParam0);
	if (func_165(iVar0, 0))
	{
		if (func_165(_get_rider_of_mount(iVar0, false), 0) && !bParam4)
		{
			return 0;
		}
		if ((bParam1 || !func_463(iParam0)) || func_1580(iParam0))
		{
			if (bParam2 || !(is_entity_on_screen(iVar0) && func_2063(player_ped_id(), iVar0, 1) < 10000f))
			{
				iVar1 = func_1557(iParam0, 1);
				if (iVar1 != 0)
				{
					if (!_0x88ad6cc10d8d35b2(iVar0))
					{
						set_entity_as_mission_entity(iVar0, true, true);
					}
					func_2064(iParam0);
					_0x7b204f88f6c3d287(func_465(iParam0, 0));
					_0xfcc6db8dbe709bc8(func_465(iParam0, 0));
					func_2065(iParam0);
				}
			}
			else
			{
				if (func_464(iParam0, 32768, 1))
				{
					iVar2 = func_465(iParam0, 0);
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
			if (func_464(iParam0, 32768, 1))
			{
				if (!_0x88ad6cc10d8d35b2((*Global_1360165)[iParam0]->f_124))
				{
					set_entity_as_mission_entity((*Global_1360165)[iParam0]->f_124, true, true);
				}
				func_2064(iParam0);
				_0x7b204f88f6c3d287(func_465(iParam0, 0));
				_0xfcc6db8dbe709bc8(func_465(iParam0, 0));
			}
			else
			{
				set_entity_as_mission_entity((*Global_1360165)[iParam0]->f_124, true, true);
				func_2064(iParam0);
				delete_ped(&((*Global_1360165)[iParam0]->f_124));
			}
		}
	}
	(*Global_1360165)[iParam0]->f_70.f_1 = 0;
	func_2066(iParam0, 0);
	return 1;
}

int func_1583(int iParam0)
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

char* func_1584(int iParam0)
{
	if (iParam0 == 255)
	{
		if (func_249(37, iParam0))
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
	if (func_249(37, iParam0))
	{
		return _0xd8402b858f4ddd88(&((*Global_1108178)[iParam0]->f_12), get_length_of_literal_string(&((*Global_1108178)[iParam0]->f_12)));
	}
	return get_player_name(&(Global_1225639->f_120[iParam0]));
}

char* func_1585(char* sParam0, int iParam1)
{
	if (iParam1 == 109029619)
	{
		return _create_var_string(10, "PLAYER_STRING", sParam0);
	}
	return func_1128(_create_var_string(10, "PLAYER_STRING", sParam0), iParam1);
}

float func_1586(int iParam0)
{
	iParam0 = func_269(iParam0);
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

float func_1587(float fParam0, float fParam1, float fParam2)
{
	return (((1f - fParam2) * fParam0) + (fParam2 * fParam1));
}

void func_1588(int iParam0)
{
	if (iParam0 < 0)
	{
		iParam0 = 0;
	}
	Global_40.f_4283.f_325 = iParam0;
	Var0 = { func_94(1356759001) };
	stat_id_set_int(&Var0, iParam0, true);
}

void func_1589(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_1590(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_1591(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_6;
	}
	return -15;
}

int func_1592(int iParam0, int iParam1)
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
			return 484;
			return 76;
			return 187;
			return 374;
			return 172;
			return 170;
			return 186;
			return 2;
			return 86;
			return 492;
			return 149;
			return 52;
			return 439;
			return 200;
			return 243;
			return 293;
			return 3;
			return 68;
			return 180;
			return 65;
			return 106;
			return 372;
			return 302;
			return 275;
			return 362;
			return 461;
			return 251;
			return 242;
			return 443;
			return 375;
			return 89;
			return 341;
			return 175;
			return 504;
			return 313;
			return 345;
			return 509;
			return 94;
			return 404;
			return 146;
			return 343;
			return 234;
			return 403;
			return 104;
			return 237;
			return 487;
			return 424;
			return 261;
			return 400;
			return 266;
			return 232;
			return 283;
			return 310;
			return 337;
			return 174;
			return 444;
			return 253;
			return 330;
			return 39;
			return 182;
			return 140;
			return 469;
			return 150;
			return 59;
			return 133;
			return 141;
			return 308;
			return 418;
			return 155;
			return 295;
			return 37;
			return 30;
			return 382;
			return 303;
			return 489;
			return 323;
			return 288;
			return 260;
			return 128;
			return 473;
			return 194;
			return 431;
			return 67;
			return 24;
			return 317;
			return 269;
			return 505;
			return 490;
			return 357;
			return 425;
			return 464;
			return 429;
			return 34;
			return 204;
			return 406;
			return 354;
			return 474;
			return 344;
			return 361;
			return 385;
			return 156;
			return 127;
			return 376;
			return 438;
			return 441;
			return 113;
			return 222;
			return 95;
			return 151;
			return 208;
			return 316;
			return 93;
			return 325;
			return 290;
			return 55;
			return 239;
			return 287;
			return 19;
			return 105;
			return 201;
			return 342;
			return 353;
			return 46;
			return 466;
			return 137;
			return 350;
			return 321;
			return 81;
			return 51;
			return 54;
			return 188;
			return 43;
			return 1;
			return 147;
			return 228;
			return 408;
			return 458;
			return 358;
			return 476;
			return 498;
			return 477;
			return 480;
			return 455;
			return 494;
			return 184;
			return 227;
			return 60;
			return 47;
			return 0;
			return 279;
			return 282;
			return 433;
			return 35;
			return 64;
			return 304;
			return 241;
			return 134;
			return 74;
			return 270;
			return 399;
			return 419;
			return 364;
			return 250;
			return 103;
			return 90;
			return 240;
			return 193;
			return 506;
			return 84;
			return 101;
			return 335;
			return 71;
			return 291;
			return 73;
			return 80;
			return 132;
			return 446;
			return 332;
			return 436;
			return 220;
			return 255;
			return 493;
			return 370;
			return 163;
			return 40;
			return 471;
			return 452;
			return 160;
			return 245;
			return 203;
			return 346;
			return 488;
			return 349;
			return 360;
			return 398;
			return 78;
			return 420;
			return 389;
			return 178;
			return 315;
			return 268;
			return 66;
			return 401;
			return 501;
			return 371;
			return 8;
			return 211;
			return 126;
			return 217;
			return 467;
			return 177;
			return 328;
			return 365;
			return 414;
			return 115;
			return 153;
			return 157;
			return 50;
			return 481;
			return 367;
			return 218;
			return 296;
			return 28;
			return 336;
			return 202;
			return 14;
			return 355;
			return 298;
			return 118;
			return 192;
			return 136;
			return 49;
			return 42;
			return 4;
			return 173;
			return 11;
			return 412;
			return 272;
			return 407;
			return 212;
			return 159;
			return 70;
			return 333;
			return 38;
			return 256;
			return 171;
			return 456;
			return 356;
			return 198;
			return 299;
			return 417;
			return 189;
			return 265;
			return 116;
			return 305;
			return 264;
			return 402;
			return 271;
			return 286;
			return 378;
			return 392;
			return 366;
			return 451;
			return 292;
			return 363;
			return 224;
			return 87;
			return 410;
			return 214;
			return 166;
			return 463;
			return 428;
			return 450;
			return 7;
			return 32;
			return 215;
			return 107;
			return 130;
			return 45;
			return 495;
			return 122;
			return 258;
			return 102;
			return 248;
			return 152;
			return 314;
			return 168;
			return 6;
			return 300;
			return 267;
			return 368;
			return 322;
			return 85;
			return 91;
			return 195;
			return 53;
			return 181;
			return 432;
			return 479;
			return 230;
			return 306;
			return 111;
			return 502;
			return 352;
			return 99;
			return 421;
			return 397;
			return 69;
			return 394;
			return 434;
			return 48;
			return 79;
			return 301;
			return 216;
			return 63;
			return 75;
			return 144;
			return 462;
			return 339;
			return 44;
			return 503;
			return 478;
			return 20;
			return 278;
			return 281;
			return 109;
			return 334;
			return 209;
			return 263;
			return 207;
			return 167;
			return 161;
			return 262;
			return 183;
			return 162;
			return 72;
			return 468;
			return 231;
			return 340;
			return 384;
			return 143;
			return 31;
			return 117;
			return 100;
			return 379;
			return 390;
			return 276;
			return 449;
			return 307;
			return 274;
			return 191;
			return 447;
			return 508;
			return 235;
			return 388;
			return 430;
			return 176;
			return 448;
			return 475;
			return 459;
			return 62;
			return 226;
			return 491;
			return 453;
			return 500;
			return 154;
			return 123;
			return 221;
			return 36;
			return 381;
			return 82;
			return 319;
			return 121;
			return 497;
			return 348;
			return 347;
			return 213;
			return 5;
			return 15;
			return 386;
			return 416;
			return 465;
			if (iParam1 >= 1)
			{
			}
			return -1;
			if (iParam1 >= 1)
			{
			}
			return -1;
		}

void func_1593(int iParam0, bool bParam1)
{
	Global_1955569->f_1 = iParam0;
	if (bParam1)
	{
		func_2067(bParam1);
	}
}

void func_1594(int iParam0)
{
	_0x74bcceb233ad95b2(-156028329, iParam0);
}

char* func_1595(int iParam0)
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

bool func_1596(int iParam0)
{
	if (!func_1192(23, &vVar0))
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

bool func_1597(int iParam0, int iParam1, int iParam2)
{
	if (!func_1192(23, &Var0))
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

int func_1598(int iParam0)
{
	return iParam0;
}

int func_1599()
{
	iVar0 = func_1015();
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

int func_1600(int iParam0)
{
	if (!func_572(*iParam0, 0))
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

bool func_1601(int iParam0, var uParam1, bool bParam2)
{
	if (!func_572(iParam0, 0))
	{
		return false;
	}
	Var0 = { func_683(iParam0, 0, 1) };
	iVar5 = 1728382685;
	Var6.f_9 = -1591664384;
	bVar28 = false;
	iVar29 = 0;
	while (iVar29 < 4)
	{
		iVar5 = func_1051((386 + iVar29), 1);
		if (func_1052(iParam0, &Var0, iVar5, 0))
		{
			bVar28 = func_1053(iParam0, &Var6, iVar5);
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

int func_1602(int iParam0, struct<4> Param1, int iParam5, bool bParam6)
{
	if (!func_572(iParam0, 0))
	{
		return 0;
	}
	Var0 = { func_1054(iParam0, Param1, iParam5, bParam6) };
	if (!_0xb881ca836cc4b6d4(&Var0))
	{
		return 0;
	}
	uVar4 = _0xc97e0d2302382211(func_958(bParam6), &Var0, 0);
	return uVar4;
}

struct<14> func_1603(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

void func_1604(var uParam0, struct<4> Param1)
{
	if (_0xb881ca836cc4b6d4(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

bool func_1605(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	*iParam1 = _0x640f890c3e5a3ffd(func_958(bParam3), uParam0, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

int func_1606(int iParam0)
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

float func_1607(int iParam0)
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
			return func_2068(iParam0);
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
			return func_2068(iParam0);
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
			return func_2068(iParam0);
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

bool func_1608(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_594(18);
		case 2:
			return func_594(20);
		case 1:
			return func_594(19);
		default:
			break;
	}
	return true;
}

int func_1609(int iParam0)
{
	return func_2069(&(Global_40.f_11095.f_11[iParam0]));
}

void func_1610(int iParam0, float fParam1, bool bParam2)
{
	if (func_20() != -1)
	{
		return;
	}
	if (Global_1347477->f_117 || !func_594(31))
	{
		return;
	}
	iVar0 = func_1609(iParam0);
	fVar1 = &Global_40.f_11095.f_11[iParam0];
	if (iVar0 >= 7)
	{
		return;
	}
	set_attribute_points(Global_35, iParam0, floor(fParam1));
	Global_40.f_11095.f_11[iParam0] = fParam1;
	iVar2 = func_1609(iParam0);
	if (func_2070(iParam0) && func_2071(iParam0))
	{
		if (!bParam2)
		{
			iVar3 = func_2072(fVar1, fParam1);
			if (fParam1 > IntToFloat(func_2073(iParam0)) && (iVar2 > iVar0 || iVar3 != 0))
			{
				if (!is_radar_hidden() && !Global_16)
				{
					if (iVar2 > iVar0)
					{
						func_328(func_2074(iParam0), 0);
					}
					func_2075(iParam0, iVar2, iVar3);
					func_2076(iParam0, 7000);
				}
				Global_1347477->f_8 = 1;
			}
		}
	}
	Global_1347477->f_1 = iParam0;
	Global_1347477 = get_game_timer();
}

char* func_1611(int iParam0)
{
	return "PLAYER_RPG_XP_GAIN";
}

int func_1612(int iParam0)
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

int func_1613()
{
	return func_2077(Global_40.f_12019);
}

int func_1614()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		iVar2 = func_1036(iVar1);
		if (func_350(iVar2, 1, 0) || func_1620(func_1619(iVar2)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1615()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 30)
	{
		if (func_2078(_0x126cbebba46693cf(iVar1, -440187297, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1616()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 14)
	{
		if (func_1625(_0x126cbebba46693cf(iVar1, 1995362678, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1617()
{
	return _0x3a65f4844913a047(2103522376, 0);
}

int func_1618(int iParam0)
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

int func_1619(int iParam0)
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

bool func_1620(int iParam0)
{
	return (Global_40.f_12019 && iParam0) != 0;
}

char* func_1621(int iParam0)
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

int func_1622(int iParam0)
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

int func_1623(int iParam0)
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

char* func_1624(int iParam0)
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

bool func_1625(int iParam0)
{
	return _0x9a03f22ad446eeac(iParam0) > 0;
}

char* func_1626(int iParam0)
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

char* func_1627(int iParam0)
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

bool func_1628(int iParam0)
{
	if (func_2079(iParam0) && func_350(iParam0, 1, 0))
	{
		return true;
	}
	else if (func_2080(iParam0) && func_2081(iParam0))
	{
		return true;
	}
	return false;
}

char* func_1629(int iParam0)
{
	if (!func_572(iParam0, 0))
	{
		return "";
	}
	return _get_label_text_by_hash(func_639(iParam0));
}

int func_1630(int iParam0)
{
	return Global_1898164->f_1[iParam0]->f_2;
}

bool func_1631(int iParam0, var uParam1, var uParam2, int iParam3)
{
	iVar0 = func_958(0);
	*uParam1 = { func_1054(iParam0, func_1160(0), iParam3, 0) };
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

bool func_1632(int iParam0)
{
	if (_item_database_is_intrinsic_item(iParam0))
	{
		return true;
	}
	return false;
}

int func_1633(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

int func_1634(var uParam0)
{
	iVar0 = 0;
	iVar1 = 22;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_592(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 37;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_592(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 12;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_592(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 29;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_592(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 30;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_592(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 31;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_592(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	return iVar0;
}

bool func_1635(int iParam0, int iParam1)
{
	iVar1 = func_671(func_2082(iParam0), 1);
	if (iVar1 >= 39)
	{
		return false;
	}
	if (&Global_1946804->f_1497.f_1[iVar1] != 0 && &Global_1946804->f_1497.f_1[iVar1] != &Global_1946804->f_57[iVar1])
	{
		iVar0 = &Global_1946804->f_1497.f_1[iVar1];
		if (func_596(iVar0) == iParam0)
		{
			*iParam1 = iVar0;
			return true;
		}
	}
	*iParam1 = 0;
	return false;
}

int func_1636(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam0 == &Global_1946804->f_57[func_671(iParam1, 1)])
	{
		return 0;
	}
	iVar0 = 0;
	if (!func_1097(524288))
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

bool func_1637(int iParam0)
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

int func_1638(int iParam0)
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

int func_1639(int iParam0)
{
	return func_2083(iParam0, -1);
}

bool func_1640(int iParam0)
{
	return _0xf83d3dda4d3c8169(iParam0) > 0;
}

void func_1641()
{
	func_1489(-939420910);
	func_1489(-1187950766);
	func_1489(356365161);
	func_1489(753127042);
	func_1489(-2038424081);
	func_1489(1884271742);
	func_1489(459290420);
}

void func_1642()
{
	func_1489(704802028);
	func_1489(588987611);
	func_1489(2008888900);
	func_1489(1649996811);
	func_1489(227918160);
	func_1489(168171957);
	func_1489(1193080109);
	func_1489(-491981251);
	func_1489(-639037538);
	func_1489(-618620429);
}

bool func_1643(int iParam0)
{
	return _0xf83d3dda4d3c8169(iParam0) > 0;
}

int func_1644(int iParam0)
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

void func_1645(int iParam0)
{
	Global_40.f_12019.f_43 = (Global_40.f_12019.f_43 || iParam0);
}

bool func_1646(int iParam0)
{
	return _0xf83d3dda4d3c8169(iParam0) > 0;
}

void func_1647()
{
	Global_1946804->f_1378 = Global_1946804->f_1497;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		*Global_1946804->f_1378.f_1[iVar0] = { *Global_1946804->f_1497.f_1[iVar0] };
		iVar0++;
	}
}

void func_1648(int iParam0)
{
	func_1368(iParam0, 8, 6);
}

void func_1649(int iParam0)
{
	func_2084(&(Global_1946804->f_2589), iParam0);
}

void func_1650(int iParam0, int iParam1)
{
	func_2085(&(Global_1946804->f_2589), iParam0, iParam1);
}

int func_1651(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	iVar0 = func_2086(0);
	if (iParam2 != 0 && func_2087(iParam0, iVar0, iParam2, bParam3) != -1)
	{
		return iParam2;
	}
	if (func_1151(iParam0, func_1165(iParam1, 1), &iParam2))
	{
		return iParam2;
	}
	return 0;
}

void func_1652(var uParam0, bool bParam1, int iParam2)
{
	bVar6 = func_20() != -1;
	iVar7 = func_2086(0);
	if (func_1097(32768))
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
			iVar5 = func_1165(iVar0, 1);
			if (func_1364(iVar5, 8))
			{
			}
			else if (&Global_1946804->f_57[iVar0]->f_2[0] == -1802376732 || &uParam0->f_1[iVar0] == 0)
			{
			}
			else if (func_1364(iVar5, 6) || &uParam0->f_1[iVar0] == &Global_1946804->f_57[iVar0])
			{
			}
			else
			{
				iVar4 = func_1636(&(uParam0->f_1[iVar0]), iVar5, iVar7, bVar6);
				if ((iVar1 + iVar4) > 31)
				{
					iVar3 = iVar2;
				}
				else
				{
					iVar1 = (iVar1 + iVar4);
					iVar2++;
				}
				iVar8 = func_2088(uParam0);
				if (iVar3 > 0)
				{
					if (!func_1097(524288))
					{
						func_1157(524288);
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
							iVar5 = func_1165(iVar0, 1);
							if (func_1364(iVar5, 8))
							{
							}
							else if (&Global_1946804->f_57[iVar0]->f_2[0] == -1802376732 || &uParam0->f_1[iVar0] == 0)
							{
							}
							else if (func_1364(iVar5, 6) || &uParam0->f_1[iVar0] == &Global_1946804->f_57[iVar0])
							{
							}
							else
							{
								iVar4 = func_1636(&(uParam0->f_1[iVar0]), iVar5, iVar7, bVar6);
								if ((iVar1 + iVar4) > 31)
								{
									uParam0->f_1[iVar0] = &Global_1946804->f_57[iVar0];
									uParam0->f_1[iVar0]->f_1 = 0;
									if (bParam1)
									{
										func_1650(iVar0, iParam2);
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
					func_1654(524288);
				}
			}
		}
	}
}

void func_1653(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (*uParam0 <= 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_2089(&(uParam0->f_2[iVar0]), bParam1, bParam2);
		iVar0++;
	}
	if (func_20() == -1)
	{
		if ((Global_40.f_7729 != 0 || !func_2090(2, Global_26796.f_776)) || Global_1946804->f_1497 != func_1671(0))
		{
			if (Global_40.f_7157[Global_40.f_7729] & 512 != 0)
			{
				Global_40.f_7157[Global_40.f_7729] = (&Global_40.f_7157[Global_40.f_7729] - Global_40.f_7157[Global_40.f_7729] & 4096);
				Global_40.f_7729 = 0;
				Global_1905941 = Global_40.f_7729;
				Global_40.f_7157[Global_40.f_7729] |= 4096;
				Global_1946804->f_1497 = func_1671(Global_40.f_7729);
				Global_1946804->f_1378 = func_1671(Global_40.f_7729);
				Global_26796.f_776 = 0;
				func_2091(-1, 0, 6);
			}
		}
	}
	if (bParam3)
	{
		func_1145(0, 1);
	}
}

void func_1654(int iParam0)
{
	Global_1946804 = (&Global_1946804 - (Global_1946804 && iParam0));
}

bool func_1655(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_1656(struct<4> Param0)
{
	if (Global_1946804->f_852 >= 20)
	{
		return;
	}
	if (func_1709(Param0))
	{
		iVar0 = 0;
		while (iVar0 < Global_1946804->f_852)
		{
			iVar1 = ((Global_1946804->f_853 + iVar0) % 20);
			if (((&Global_1946804->f_769[iVar1] == Param0 && Global_1946804->f_769[iVar1]->f_2 == Param0.f_2) && Global_1946804->f_769[iVar1]->f_3 == Param0.f_3) && Global_1946804->f_769[iVar1]->f_1 == Param0.f_1)
			{
				return;
			}
			if (&Global_1946804->f_769[iVar1] == 34 && func_1709(20))
			{
				return;
			}
			iVar0++;
		}
	}
	func_1710(Param0);
	*Global_1946804->f_769[Global_1946804->f_854] = { Param0 };
	Global_1946804->f_852++;
	Global_1946804->f_854 = (Global_1946804->f_854 + 1 % 20);
	func_1157(8);
}

bool func_1657()
{
	if (Global_1572887->f_12 != -1)
	{
		return false;
	}
	return Global_1347477->f_203;
}

float func_1658()
{
	fVar0 = func_2092(13);
	iVar1 = func_2093(fVar0);
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

float func_1659()
{
	if (is_ped_on_mount(Global_35))
	{
		return 0.25f;
	}
	return 0f;
}

float func_1660()
{
	if (func_341())
	{
		if (_get_special_edition_core_stats_bonus_enabled())
		{
			return 0.2f;
		}
	}
	return 0f;
}

float func_1661()
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

float func_1662()
{
	return Global_1955565->f_3;
}

void func_1663(int iParam0, char* sParam1, bool bParam2)
{
	sVar0 = func_2094(iParam0, 1, 0, 0);
	sVar0 = _create_var_string(2, sVar0, sParam1);
	_databinding_write_data_string(&(Global_1955569->f_5.f_2[iParam0]->f_12[1]), sVar0);
	_databinding_write_data_bool(&(Global_1955569->f_5.f_2[iParam0]->f_16[1]), bParam2);
}

void func_1664(int iParam0, float fParam1, bool bParam2)
{
	sVar0 = func_2094(iParam0, 2, 0, 0);
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

bool func_1665()
{
	return func_2092(12) <= -99f;
}

bool func_1666()
{
	return func_2092(12) >= 99f;
}

int func_1667()
{
	iVar2 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_596(iVar1) == -999503751)
		{
			if (func_2095() != iVar1)
			{
				iVar2++;
			}
		}
		iVar0++;
	}
	return iVar2;
}

bool func_1668(int iParam0)
{
	if (!func_1113(iParam0))
	{
		return false;
	}
	if (func_1672(iParam0, 4))
	{
		return true;
	}
	return false;
}

bool func_1669(int iParam0)
{
	if (!func_1113(iParam0))
	{
		return false;
	}
	if (func_1672(iParam0, 2))
	{
		return true;
	}
	return false;
}

void func_1670(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_1113(iParam0))
	{
		return;
	}
	if (!func_1669(iParam0))
	{
		func_1673(iParam0, 2);
		if (bParam2)
		{
			if (!func_199(0, 0, 1))
			{
				func_370(1, 4);
			}
		}
		if ((!func_216() && !bParam1) && !func_199(0, 0, 1))
		{
			func_709(_create_var_string(10, "OUT_JOURN_ADD", func_2096(iParam0)), 10000, 0, 0, 0, 1);
		}
	}
}

int func_1671(int iParam0)
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

bool func_1672(int iParam0, int iParam1)
{
	if (!func_1113(iParam0))
	{
		return false;
	}
	return (Global_40.f_7157[iParam0] && iParam1) != 0;
}

void func_1673(int iParam0, int iParam1)
{
	if (!func_1113(iParam0))
	{
		return;
	}
	Global_40.f_7157[iParam0] = (Global_40.f_7157[iParam0] || iParam1);
}

int func_1674(int iParam0, bool bParam1)
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

void func_1675(int iParam0, bool bParam1)
{
	iVar0 = func_2097(iParam0);
	switch (iVar0)
	{
		case 0:
			if (bParam1)
			{
				func_595(50);
			}
			else
			{
				func_595(48);
			}
			break;
		case 1:
			if (bParam1)
			{
				func_595(51);
			}
			else
			{
				func_595(49);
			}
			break;
		case 2:
			if (bParam1)
			{
				if (!func_2098(iVar0))
				{
					Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
					func_626();
				}
			}
			else
			{
				Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
				func_626();
			}
			break;
		case 3:
			func_595(24);
			if (bParam1)
			{
				if (!func_2098(iVar0))
				{
					Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
					func_626();
				}
			}
			break;
	}
}

void func_1676(int iParam0)
{
	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
			if (func_2099(0))
			{
				iVar0++;
			}
			if (func_2099(2))
			{
				iVar0++;
			}
			if (func_2099(4))
			{
				iVar0++;
			}
			if (!func_2100(16))
			{
				if (iVar0 == 1)
				{
					func_2101();
					func_328(456, 1);
					func_2102(16);
				}
			}
			if (!func_2100(32))
			{
				if (iVar0 >= 3)
				{
					func_2101();
					func_328(456, 1);
					func_2102(32);
				}
			}
			break;
		case 1:
		case 3:
		case 7:
			if (func_2099(1))
			{
				iVar0++;
			}
			if (func_2099(3))
			{
				iVar0++;
			}
			if (func_2099(7))
			{
				iVar0++;
			}
			if (!func_2100(1))
			{
				if (iVar0 == 1)
				{
					func_2103();
					func_328(457, 1);
					func_2102(1);
				}
			}
			if (!func_2100(2))
			{
				if (iVar0 >= 3)
				{
					func_2103();
					func_328(457, 1);
					func_2102(2);
				}
			}
			break;
		case 5:
		case 6:
		case 8:
			if (func_2099(5))
			{
				iVar0++;
			}
			if (func_2099(6))
			{
				iVar0++;
			}
			if (func_2099(8))
			{
				iVar0++;
			}
			if (!func_2100(4))
			{
				if (iVar0 == 1)
				{
					func_2104();
					func_328(455, 1);
					func_2102(4);
				}
			}
			if (!func_2100(8))
			{
				if (iVar0 >= 3)
				{
					func_2104();
					func_328(455, 1);
					func_2102(8);
				}
			}
			break;
	}
}

void func_1677(var uParam0)
{
	func_1119(uParam0, 143479330);
	if (Global_1946804->f_1 == 2026485318)
	{
		func_1119(uParam0, 617531372);
	}
	else
	{
		func_1119(uParam0, 291123060);
	}
}

void func_1678(var uParam0, int iParam1, struct<14> Param2)
{
	if (!func_2105(uParam0))
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

bool func_1679(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

bool func_1680(int iParam0, int iParam1, var uParam2, int iParam3)
{
	*iParam3 = 0;
	if (*uParam2 < 10)
	{
		return false;
	}
	if (!func_572(iParam0, 0))
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

void func_1681(int iParam0)
{
	func_667(iParam0, 1, 1, -142743235, 1);
	iVar34 = func_2106(iParam0, &uVar18);
	func_2107(iParam0, &uVar18, &iVar34, 1);
	if (func_673() == -2125499975)
	{
		iVar38 = 2020890174;
	}
	else
	{
		iVar38 = 1105329772;
	}
	func_2108(iParam0, &(Global_26796.f_627.f_121.f_20));
	func_669(iParam0, 1, 1);
	iVar36 = 0;
	while (iVar36 < iVar34)
	{
		func_667(&(uVar18[iVar36]), 1, 1, -142743235, 1);
		switch (func_596(&(uVar18[iVar36])))
		{
			case -2061583405:
				func_2108(&(uVar18[iVar36]), &(Global_26796.f_627.f_121.f_21));
				break;
			case 81053684:
				func_2108(&(uVar18[iVar36]), &(Global_26796.f_627.f_121.f_23));
				break;
			case -525676072:
				func_2108(&(uVar18[iVar36]), &(Global_26796.f_627.f_121.f_22));
				break;
			case -1719060085:
				func_2108(&(uVar18[iVar36]), &(Global_26796.f_627.f_121.f_24));
				break;
			case -413129408:
				func_2108(&(uVar18[iVar36]), &(Global_26796.f_627.f_121.f_25));
				break;
		}
		func_669(&(uVar18[iVar36]), 1, 1);
		iVar0[iVar36] = func_671(func_670(&(uVar18[iVar36])), 1);
		iVar36++;
	}
	func_2109(&(Global_1946804->f_1616));
	func_674(&(Global_1946804->f_1616), iVar38, &uVar39, 1, 0, 0, 0);
	*Global_1946804->f_1616.f_1[8] = { func_675(8, 0) };
	*Global_1946804->f_1616.f_1[9] = { func_675(9, 0) };
	*Global_1946804->f_1616.f_1[0] = { func_675(0, 0) };
	*Global_1946804->f_1616.f_1[2] = { func_675(2, 0) };
	*Global_1946804->f_1616.f_1[3] = { func_675(3, 0) };
	*Global_1946804->f_1616.f_1[1] = { func_675(1, 0) };
	*Global_1946804->f_1616.f_1[5] = { func_675(5, 0) };
	*Global_1946804->f_1616.f_1[6] = { func_675(6, 0) };
	*Global_1946804->f_1616.f_1[7] = { func_675(7, 0) };
	iVar35 = 0;
	while (iVar35 < 5)
	{
		iVar36 = 0;
		while (iVar36 < iVar34)
		{
			if (&uVar18[iVar36] == func_676(&(iVar0[iVar36]), iVar35))
			{
				func_669(func_2110(iVar35), 1, 1);
				func_2111(iVar35);
				if (iVar35 == 0)
				{
					bVar17 = true;
					iVar37 = 0;
					while (iVar37 < 39)
					{
						if (!func_1706(Global_1946804->f_1616.f_1[iVar37], 2))
						{
						}
						else
						{
							func_677(Global_1946804->f_1616.f_1[iVar37], iVar37, 0);
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
	if ((bVar16 || bVar17) || Global_40.f_7729 == func_1112(iParam0))
	{
		if (!func_2112(8))
		{
			if (func_673() == -2125499975)
			{
				if (bVar17)
				{
					func_674(&(Global_1946804->f_1616), 1661121390, &uVar39, 0, 1, 0, -2125499975);
					Global_1946804->f_1616 = 166243423;
					func_2113(&(Global_1946804->f_1616), 0);
					if (Global_40.f_7729 == 0)
					{
						func_2114(2, 0, 6);
					}
				}
				if (bVar16 || Global_40.f_7729 == func_1112(iParam0))
				{
					Global_1905941 = 6;
				}
			}
			else
			{
				if (bVar17)
				{
					func_674(&(Global_1946804->f_1616), -361635024, &uVar39, 0, 1, 0, 1160113249);
					Global_1946804->f_1616 = 166243423;
					func_2113(&(Global_1946804->f_1616), 0);
					if (Global_40.f_7729 == 0)
					{
						func_2114(2, 0, 6);
					}
				}
				if (bVar16 || Global_40.f_7729 == func_1112(iParam0))
				{
					Global_1905941 = 62;
				}
			}
			if (bVar16 || Global_40.f_7729 == func_1112(iParam0))
			{
				if (is_entity_dead(get_player_ped(player_id())))
				{
					func_2115(Global_40.f_7729, 4096);
					func_1673(&Global_1905941, 4096);
					Global_40.f_7729 = &Global_1905941;
				}
				else
				{
					func_2116(get_player_ped(player_id()), &Global_1905941, 1, 0, 0);
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
	func_674(&(Global_1946804->f_1616), 1661121390, &uVar39, 0, 1, 0, -2125499975);
	func_674(&(Global_1946804->f_1616), 2020890174, &uVar39, 1, 0, 0, -2125499975);
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

struct<4> func_1682()
{
	Var0 = { func_1159(0) };
	return func_1054(856287005, Var0, -218846335, 0);
}

int func_1683(int iParam0, struct<4> Param1)
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
			if (func_572(Var3, 0))
			{
				Var12.f_4 = Var3.f_1;
				if (func_1602(Var3, Param1, Var12.f_4, 0) > 0)
				{
				}
				else
				{
					func_2117(&uVar7);
					if (func_1055(Var3, &uVar7, &Var12, -1, -142743235, 0, 0))
					{
					}
				}
			}
		}
		iVar0++;
	}
	return 1;
}

int func_1684(var uParam0)
{
	return uParam0->f_1;
}

void func_1685(var uParam0)
{
	func_2118(uParam0);
	func_2120(uParam0, func_2119(-1346384396));
	func_2121(uParam0, func_2119(-712836614));
	func_2122(uParam0, func_2119(-1629133289));
	func_2123(uParam0, func_2119(1302066700));
	func_2124(uParam0, func_2119(599669344));
	func_2125(uParam0, func_2119(-1555511632));
}

void func_1686(struct<6> Param0)
{
	if (!func_2126(Param0.f_4, 1))
	{
	}
	if (!func_2126(Param0, 1))
	{
	}
	if (!func_2126(Param0.f_2, 1))
	{
	}
	if (!func_2126(Param0.f_5, 1))
	{
	}
	if (!func_2126(Param0.f_3, 1))
	{
	}
	if (!func_2126(Param0.f_1, 1))
	{
	}
}

int func_1687(int iParam0, int iParam1, int iParam2)
{
	*iParam0 = 0;
	*iParam1 = 0;
	*iParam2 = 0;
	if (func_395())
	{
		if (func_307())
		{
			bVar0 = false;
			if (!func_330((*Global_1835011)[15]->f_1, 1) && !func_594(42))
			{
				bVar0 = true;
			}
			if (bVar0)
			{
				*iParam0 = func_2127();
				*iParam1 = func_2128();
				*iParam2 = func_2129();
				return 1;
			}
			else
			{
				*iParam0 = func_2130();
				*iParam1 = func_2131();
				*iParam2 = func_2132();
				return 1;
			}
		}
		else if (func_1017())
		{
			if (!func_330((*Global_1835011)[60]->f_1, 1))
			{
				*iParam0 = func_2133();
				*iParam1 = func_2134();
				*iParam2 = func_2135();
				return 1;
			}
			else
			{
				*iParam0 = func_2136();
				*iParam1 = func_2137();
				*iParam2 = func_2138();
				return 1;
			}
		}
	}
	else if (func_307())
	{
		*iParam0 = func_2139();
		*iParam1 = func_2140();
		*iParam2 = func_2141();
		return 1;
	}
	else if (func_1017())
	{
		*iParam0 = func_2142();
		*iParam1 = func_2143();
		*iParam2 = func_2144();
		return 1;
	}
	return 0;
}

void func_1688(int iParam0, int iParam1)
{
	iParam0 = func_269(iParam0);
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

void func_1689(int iParam0, int iParam1)
{
	iParam0 = func_269(iParam0);
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

void func_1690(int iParam0, int iParam1)
{
	iParam0 = func_269(iParam0);
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

void func_1691(int iParam0, int iParam1)
{
	iParam0 = func_269(iParam0);
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

bool func_1692(int iParam0)
{
	iVar0 = func_2145(iParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	Var1 = { func_1159(0) };
	if (func_2146(&Var1, iVar0, 0) > 0)
	{
		return true;
	}
	return false;
}

int func_1693(int iParam0)
{
	Var0.f_9 = -1591664384;
	if (!func_2147(iParam0, &Var0))
	{
		return 0;
	}
	Var29 = { Var0.f_5 };
	Var29.f_4 = Var0.f_9;
	if (!func_1055(Var0.f_4, &Var0, &Var29, -1, -142743235, 0, 0))
	{
		return 0;
	}
	return 1;
}

int func_1694(int iParam0)
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

int func_1695(int iParam0, int iParam1)
{
	if (!func_572(iParam1, 0))
	{
		return 0;
	}
	if (!func_2148(iParam1))
	{
		return 0;
	}
	if (func_1692(iParam0))
	{
		return 0;
	}
	iVar0 = func_2145(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	Var1 = { func_1159(0) };
	Var1.f_4 = iVar0;
	if (!func_1110(iParam1, &uVar6, &Var1, 1, 752097756, 0))
	{
		return 0;
	}
	return 1;
}

bool func_1696(int iParam0, struct<4> Param1, bool bParam5)
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
			if (func_572(Var3, 0))
			{
				Var12.f_4 = Var3.f_1;
				if (func_1602(Var3, Param1, Var12.f_4, 0) > 0)
				{
				}
				else
				{
					func_2117(&Var7);
					if (func_1110(Var3, &Var7, &Var12, 1, 752097756, 1))
					{
						if (bParam5)
						{
							func_1699(Var7, 1);
						}
					}
				}
			}
		}
		iVar0++;
	}
	return true;
}

void func_1697(int iParam0)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if (func_1713(1) < iParam0)
	{
		iParam0 = func_1713(1);
	}
	_money_decrement_cash_balance(iParam0);
	Var0 = { func_94(1644987397) };
	_0xbd861ae8a5181ed7(&Var0, iParam0);
}

bool func_1698(var uParam0, int iParam1, var uParam2, int iParam3, int iParam4, var uParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(&uParam0))
	{
		return false;
	}
	if (!_0x22e590f108289a9d(func_958(bParam6), &uParam0, iParam4, &Var0))
	{
		return false;
	}
	if (!func_1164(Var0, uParam5, bParam6, 0))
	{
		return false;
	}
	return true;
}

bool func_1699(struct<4> Param0, int iParam4)
{
	if (!func_600(0))
	{
		return func_2149(Param0, iParam4, 1) != -1;
	}
	if (!_0xb881ca836cc4b6d4(&Param0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_1164(Param0, &Var0, 0, 0))
	{
		return false;
	}
	if (Var0.f_10 == iParam4)
	{
		return true;
	}
	if (!_0x734311e2852760d0(func_958(0), &Param0, iParam4))
	{
		return false;
	}
	return true;
}

bool func_1700(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (func_1632(iParam0))
	{
		return false;
	}
	if (iParam1 <= 0)
	{
		return false;
	}
	if (!func_600(bParam4))
	{
		iVar0 = -1;
		return iVar0 != -1;
	}
	if (!_0xb4158c8c9a3b5dce(func_958(bParam4), iParam0, iParam1, iParam2))
	{
		return false;
	}
	return true;
}

void func_1701(int iParam0, int iParam1)
{
	iVar0 = 0;
	if (func_20() == -1)
	{
		if (func_582(43))
		{
			if (func_592(iParam0, 412399755))
			{
				func_1080(-1791518714);
				if (func_1081() == 0)
				{
					func_370(0, 10);
					iVar0 = func_2150(iParam0, iParam1, 1);
					if (((iParam0 == 281887510 || iParam0 == -164081697) || iParam0 == -1161319399) || iParam0 == 728781265)
					{
						if (func_1083(iParam0) < func_1084(iParam0))
						{
							func_588(43, iParam0, iParam1, -1791518714, iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (func_582(44))
		{
			{
}